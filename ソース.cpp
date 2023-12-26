#include <iostream>
#include <cstdlib>

//this is Oneliner Software test.
//some one use like this to server admittion.by some like butch.

bool HELP(int V, char* c[]){
	std::cout << "<HELP!>" << std::endl;
	std::cout << "<Usage>" << std::endl;
	std::cout<< c[0] << " N" << std::endl;
	std::cout << "<INPUT>" << std::endl;
	std::cout << "argv=" << V << std::endl;
	for (int i = 0; i < V; i++) {
		std::cout<<'['<<i+1<<']' << c[i] << std::endl;
	}
	return true;
}

int main(int argv, char* argc[]) {

	if (argv <= 1) { HELP(argv, argc);  return -1; }
	int X = std::atoi(argc[1]);
	if (X < 0) { std::cout << X << " is denny." << std::endl; return -1; }
	if (X == 0) { std::cout << X << " Spooky... spooky..." << std::endl; return 0; }//is it to error flow?
	
	for (int i = 0; i < X; i++) { std::cout << i << ' ' ; }

	return 0;
	
}