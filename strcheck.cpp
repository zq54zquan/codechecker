#include "strcheck.hpp"
#include <regex>
using namespace std;
bool StrCheck::check() {
    string lower_source{""};
    std::transform(this->source_code.begin(),this->source_code.end(),std::back_inserter(lower_source),::tolower);
    string::size_type urlIndex = lower_source.find("url");
    if (urlIndex != string::npos) {
        string::size_type equalIndex = lower_source.find("=",urlIndex);
        if (equalIndex != string::npos) {
            string urlvalue = lower_source.substr(equalIndex+1);
            string::size_type ocstrsignIndex = urlvalue.find("@\"");
            if(ocstrsignIndex != string::npos) {
                string::size_type endIndex = urlvalue.find("\"",ocstrsignIndex+2);
                if (endIndex != string::npos) {
                    smatch matches;
                    regex urlPattern("https://[a-z1-9\\./]+");
                    string url = urlvalue.substr(ocstrsignIndex+2,endIndex-ocstrsignIndex-2);
                    regex_match(url,matches,urlPattern);
                    if (0 == matches.size()) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}