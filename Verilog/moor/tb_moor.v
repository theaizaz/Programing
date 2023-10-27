module tb_moor;

  reg  clk;
  reg  reset;
  reg  start;
  reg  done_a;
  reg  done_b;
  reg  done_c;

  wire Done;

  // module uut
  moor uut (
      .clk(clk),
      .reset(reset),
      .start(start),
      .done_a(done_a),
      .done_b(done_b),
      .done_c(done_c),
      .Done(Done)
  );

  initial begin
    clk = 1;
    forever begin
      clk = #5 ~clk;
    end
  end

  initial begin
    $dumpfile("wave.vcd");
    $dumpvars(3, tb_moor);

    reset  = 0;
    start  = 0;
    done_a = 0;
    done_b = 0;
    done_c = 0;

    @(posedge clk);
    reset <= #1 1;
    @(posedge clk);
    reset <= #1 0;

    repeat (5) @(posedge clk);
    start <= #1 1;
    @(posedge clk);
    start <= #1 0;

    repeat (5) @(posedge clk);
    done_a <= #1 1;
    @(posedge clk);
    done_a <= #1 0;

    repeat (5) @(posedge clk);
    done_b <= #1 1;
    @(posedge clk);
    done_b <= #1 0;

    repeat (5) @(posedge clk);
    done_c <= #1 1;
    @(posedge clk);
    done_c <= #1 0;

    #2 
    $display("Done : %d ", Done);
    repeat (5) @(posedge clk);
    $finish;
  end
endmodule
