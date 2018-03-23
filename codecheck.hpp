#include <string>
class CodeBaseCheck {
protected:
std::string source_code{""};
public:
CodeBaseCheck() = default;
CodeBaseCheck(std::string sc):source_code(sc){}
virtual bool check(std::string souce_code) {return false;};
virtual ~CodeBaseCheck() {}
};