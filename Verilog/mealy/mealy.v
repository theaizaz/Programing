module mealy #(
    //Parameters
    parameter IDLE   = 2'b00,
    parameter wait_a = 2'b01,
    parameter wait_b = 2'b10,
    parameter wait_c = 2'b11
) (
    // Inputs
    input clk,
    reset,
    start,
    done_a,
    done_b,
    done_c,

    output reg start_a,
    start_b,
    start_c,
    done
);

  //regs
  reg [1:0] state;
  reg [1:0] state_nxt;

  always @(posedge clk) begin
    state <= #1 (reset ? IDLE : state_nxt);
  end


  always @(*) begin
    start_a = 0;
    start_b = 0;
    start_c = 0;
    done    = 0;
    state_nxt = state;
    case (state)
      IDLE:
      if (start) begin
        state_nxt = wait_a;
        start_a   = 1;
      end
      wait_a:
      if (done_a) begin
        state_nxt = wait_b;
        start_b   = 1;
      end
      wait_b:
      if (done_b) begin
        state_nxt = wait_c;
        start_c   = 1;
      end
      wait_c:
      if (done_c) begin
        state_nxt = IDLE;
        done = 1;
      end
      default: state_nxt = state;  // hold current state
    endcase
  end
endmodule
