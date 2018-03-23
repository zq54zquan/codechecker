#include "util.hpp"
#include "difftool.hpp"
#include "strcheck.hpp"
#include <iostream>
void test_RunCommand() {
	std::string res = util::runCommand("date");
	std::cout<<res<<std::endl;	
}

void test_diffTool() {
	std::string res = DiffTool::getDiffString();
	std::cout<<res<<std::endl;
}

void test_strCheck() {
	StrCheck sc("baseUrl = @\"https://hel.com\"");
	if(sc.check()) {
		std::cout<<"check ok";
	}else {
		std::cout<<"check failded";
	}
}

int main(int args, char **argv) {
	test_strCheck();
	test_RunCommand();
	test_diffTool();
	return 0;
}