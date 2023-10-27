module counter(
	input 			clk,
	input			increment,
	input			decrement,
	input			reset,
	
	output reg	[4:0]	count
);
// Nets
wire			enable;
wire	[4:0]	mux_out;

// Regs


// OR GATE
assign enable = increment | decrement; 


// Mux
assign  mux_out = increment ? count +1 : count -1 ;

// Register
always @(posedge clk)
begin
	count <= #1 (reset ? 5'b0 : (enable ? mux_out : 5'b0));
end

endmodule