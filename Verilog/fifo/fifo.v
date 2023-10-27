module fifo(
    input                 clk,
    input                 reset,
    input                 push,
    input                 pop,
    input       [31:0]    dataIn,

    output wire           fifo_full,
    output wire           fifo_empty,
    output reg  [31:0]    fifo_out
);

// Nets
wire    [1:0]    sel;

// Regs
reg     [31:0]   dataOut [3:0];

//Instants
counter upcounter(
    .clk(clk),
    .increment(push),
    .decrement(pop),
    .reset(reset),
	.count(sel)
);

// Mux
always @(*) 
begin
    case (sel)
        2'd0 : fifo_out =  dataOut[0];
        2'd1 : fifo_out =  dataOut[1];
        2'd2 : fifo_out =  dataOut[2];
        2'd3 : fifo_out =  dataOut[3];
         default:
             fifo_out =  fifo_out; // Hold last value
    endcase
end

// fifo full and empty 
assign fifo_empty = (sel == 2'b00 ? 1'b1 : 0); 
assign fifo_full  = (sel == 2'b11 ? 1'b1 : 0);

//Registers
always @(posedge clk)
begin
    dataOut[0]  <= (reset ? 0 : (push ? dataIn    : 0         ));
    dataOut[1]  <= (reset ? 0 : (push ? dataOut[0] : dataOut[1] )); // Hold last value
    dataOut[2]  <= (reset ? 0 : (push ? dataOut[1] : dataOut[2] ));
    dataOut[3]  <= (reset ? 0 : (push ? dataOut[2] : dataOut[3] ));
end

endmodule