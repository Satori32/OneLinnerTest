#include <iostream>
#include <cstdlib>

bool HELP(int V, char* c[]){
	std::cout << "<HELP!>" << std::endl;
	std::cout << "<Usage>" << std::endl;
	std::cout<< c[0] << " N" << std::endl;
	std::cout << "<INPUT>" << std::endl;
	std::cout << "argv=" << V << std::endl;
	for (int i = 0; i < V; i++) {
		std::cout << c[i] << std::endl;
	}
	return true;
}

int main(int argv, char* argc[]) {

	if (argv <= 1) { HELP(argv, argc);  return -1; }
	int X = std::atoi(argc[1]);
	for (int i = 0; i < X; i++) {
		std::cout << i << ' ' ;
	}
	return 0;
	
}