#ifndef __DIFFTOOL__
#define __DIFFTOOL__
#include "util.hpp"
#include <string>
#include <vector>
using ckv = std::vector<int &>;
class DiffTool {
public:
    static std::string work_path;
    static std::string getDiffString(std::string sha1 = "", std::string sha2 = "HEAD^");
private:
    static ckv cklist;
};
#endif