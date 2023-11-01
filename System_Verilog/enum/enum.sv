module example;

    enum {A, B, C} state;
    
    initial begin
        state = A;
        $display("Hello World!");
        $finish;
    end

endmodule


