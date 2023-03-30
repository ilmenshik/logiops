#include <cstring>
#include "separator.h"

const char* getSeparator(const std::vector<int>& widths) {
    std::string separator;
    for (auto width : widths) {
        separator += std::string(width, '-') + "+";
    }
    separator.pop_back();

    char* cstr = new char[separator.size() + 1];
    std::strcpy(cstr, separator.c_str());

    return cstr;
}