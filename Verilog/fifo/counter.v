module counter(
	input 			clk,
	input			increment,
	input			decrement,
	input			reset,
	
	output reg	[1:0]	count
);
// Nets
wire			enable;
wire	[1:0]	mux_out;

// OR GATE
assign enable = increment | decrement; 


// Mux
assign  mux_out = increment ? count +1 : count -1 ;

// Register
always @(posedge clk)
begin
	count <= (reset ? 2'd3 : (enable ? mux_out : count));
end

endmodule