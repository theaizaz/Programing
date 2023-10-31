module moor #(
    parameterIDLE    = 3'b000,
    parameter start_a = 3'b001,
    parameter wait_a  = 3'b010,
    parameter start_b = 3'b011,
    parameter wait_b  = 3'b100,
    parameter start_c = 3'b101,
    parameter wait_c  = 3'b110,
    parameter done    = 3'b111
) (
    input      clk,
    input      reset,
    input      start,
    input      done_a,
    input      done_b,
    input      done_c,

    output reg Done
);

  //Regs
  reg [3:0] state;
  reg [3:0] state_next;

  always @(posedge clk) begin
    state <= #1 (reset ? IDLE : state_next);
  end

  always @(*) begin
    Done = 0;
    case (state)
     IDLE: begin
        state_next = (start ? start_a : state);
      end

      start_a: state_next = wait_a;

      wait_a: begin
        state_next = (done_a ? start_b : state);
      end

      start_b: state_next = wait_b;

      wait_b: begin
        state_next = (done_b ? start_c : state);
      end

      start_c: state_next = wait_c;

      wait_c: begin
        state_next = (done_c ? done : state);
      end

      done: begin
        state_next =IDLE;
        Done = 1;
      end
      default: state_next = state;
    endcase
  end
endmodule
