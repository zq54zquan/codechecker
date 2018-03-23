#include "difftool.hpp"
#include "util.hpp"
#include <unistd.h>
std::string DiffTool::getDiffString(std::string sha1,std::string sha2 ) {
    chdir(work_path.c_str()); 
    std::string diffcommand("git diff ");
    diffcommand += sha1 + " " + sha2;
    std::string diff_res = util::runCommand(diffcommand);
    return diff_res;
}

std::string DiffTool::work_path("/Users/zhouquan/Bili_Code/BiliShell/Carthage/Checkouts/BBPhone");
