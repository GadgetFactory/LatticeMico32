`timescale 1ns / 1ps

module main(
	input clk,
	input rst,
   output [7:0] led
	 );
										
ztex_spartan6 SOC (
    .clk_i(clk), 
    .reset_n(rst), 
    .gpioPIO_OUT(led)
    );
	 

endmodule
