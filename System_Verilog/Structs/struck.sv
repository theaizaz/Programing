module test;

typedef struct {
	int 	num;
	string	name;

}my_struct;

initial begin
	my_struct s1;
	s1.num = 99;
	s1.name= "Aizaz";
	$display("num  is : %d",num);
	$display("name is : %s",name);
end
endmodule