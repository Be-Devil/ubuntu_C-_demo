#include <vector>
#include <string>
#include <fstream>
#include <iostream>

int main()
{
	std::ifstream myfile("./hello.txt");
	std::ofstream outfile("./out.txt",std::ios::app);
	std::string temp;
	if(!myfile.is_open())
	{
	std::cout << "fail to open file!" << std::endl;
	}
	while(getline(myfile,temp))
	{
		outfile << temp;
		outfile << std::endl;	
	}
	myfile.close();
	outfile.close();
	return 0;
}
