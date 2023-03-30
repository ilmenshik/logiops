#ifndef KEY_DESCRIPTIONS_H
#define KEY_DESCRIPTIONS_H

#include <map>
#include <string>


extern std::map<short unsigned int, std::string> key_comments;
extern std::map<short unsigned int, std::string> key_descriptions;
const char* get_key_description(short unsigned int key);
const char* get_key_comment(short unsigned int key);

#endif // KEY_DESCRIPTIONS_H
