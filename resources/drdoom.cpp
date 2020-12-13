#include<iostream>
#include<cstring>

int main(int argc, char** argv){
	std::string pass = "m15510n-m4rx14n", temp;
	std::cout<<"Enter the passphrase : ";
	std::cin>>temp;
	int res = std::strcmp(pass.c_str(), temp.c_str());
	if (!res) std::cout<<"Success"<<std::endl;
       	else std::cout<<"Failed. You are DOOMED"<<std::endl;	
	return EXIT_SUCCESS;
}
