#include "codecheck.hpp"
class StrCheck : public CodeBaseCheck {
public:
    StrCheck():CodeBaseCheck(){}
    StrCheck(std::string sc):CodeBaseCheck(sc){}
    ~StrCheck(){};
    bool check();
};