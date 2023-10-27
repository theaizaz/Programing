module tb_counter;

//Inputs
reg     clk;
reg     reset;
reg     increment;
reg     decrement;

//Nets
wire  [4:0]  count;

// Instatiation

counter upcounter(
    .clk(clk),
    .increment(increment),
    .decrement(decrement),
    .reset(reset),
	.count(count)
);

initial begin
    clk = 1;
    forever begin
        clk = #5 ~clk;
    end    
end

initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, tb_counter);

    reset = 0;
    increment = 0;
    decrement = 0;

    @(posedge clk)
    reset = #1 1;
    @(posedge clk)
    reset = #1 0;
    increment = #1 1;
    repeat(10) @(posedge clk);
    increment = #1 0;
    decrement = 1;

    $display("count = %d", count);

    repeat(5) @(posedge clk);
    decrement = #1 0;
    reset = #1 1;
    @(posedge clk);
    reset = #1 0;   

   
    $finish;
end
endmodule