module tb_fifo;
reg                 clk;
reg                 pop;
reg                 push;
reg                 reset;
reg     [31:0]      data_in;
wire    [31:0]      data_out;
wire                fifo_full;
wire                fifo_empty;

integer     i;
integer     j;
integer     pushs = 4;
integer     pops = 3;

// instant
fifo uut(
.clk(clk),
.reset(reset),
.push(push),
.pop(pop),
.dataIn(data_in),
.fifo_full(fifo_full),
.fifo_empty(fifo_empty),
.fifo_out(data_out)
);

initial begin
    clk = 1;
    forever begin
       #5 clk = ~clk;
    end
end

initial begin
    $dumpfile("wave.vcd");
    $dumpvars(3,tb_fifo);

    reset = 0;
    pop   = 0;
    push  = 0;
    data_in = 0;

    @(posedge clk);
    reset <= #1 1;
    @(posedge clk);
    reset <= #1 0;
    push  <= #1 1;

    for ( i = 1; i < pushs; i++ ) begin
        data_in <= #1 i;
        $display("puch : %d  data out : %d ",i,data_out);
        @(posedge clk);
    end
    push <= #1 0;
    @(posedge clk);
    pop <= #1 1;
    for ( j = pops; j > 0; j-- ) begin
        $display("pop  : %d  data out : %d ",j,data_out);
        @(posedge clk);
    end

    pop <= #1 0;
    
    reset <= #1 1;
    @(posedge clk);
    reset <= #1 0;

    repeat (10) @ (posedge clk);
    
    $display("Final data out  = %d",data_out);
    $finish;
    end

endmodule