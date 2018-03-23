#include "util.hpp"
#include <cstdlib>
#include <iostream>
#include <fstream>

std::string util::runCommand(std::string command) {
	std::string tmppath = std::tmpnam(nullptr);
	std::string command_output = command + ">" + tmppath;
	std::system(command_output.c_str());	
	std::ifstream ris(tmppath);	
	std::string result("");
	std::string line("");
	while(std::getline(ris,line)) {
		result.append(line + "\n");
	}
	return result;
}
