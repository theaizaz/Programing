module tb_mealy;

  reg
      clk,
      reset,
      start,
      done_a,
      done_b,
      done_c;  // The inputs of the test module must have to declare reg
  wire start_a, start_b, start_c, done;  // The outputs needs to decleare nets

  mealy uut (
      .clk(clk),
      .reset(reset),
      .start(start),
      .done_a(done_a),
      .done_b(done_b),
      .done_c(done_c),
      .start_a(start_a),
      .start_b(start_b),
      .start_c(start_c),
      .done(done)
  );

  initial begin
    clk = 1;
    forever begin
      #5 clk = ~clk;
    end
  end

  initial begin
    reset  = 0;
    start  = 0;
    done_a = 0;
    done_b = 0;
    done_c = 0;

    $dumpvars(2, tb_mealy);
    $dumpfile("wave.vcd");

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
    #2 $display("done : %d ", done);
    @(posedge clk);
    done_c <= #1 0;
    repeat (10) @(posedge clk);

    $finish;
  end
endmodule
