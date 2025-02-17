#include <string>
#include <map>
#include "KeyDescriptions.h"

std::map<short unsigned int, std::string> key_comments = {
    {0x0052, "May be a gesture button on some mice "},
};

std::map<short unsigned int, std::string> key_descriptions = {
    {0x0050, "Left Mouse Button"},
    {0x0051, "Right Mouse Button"},
    {0x0052, "Middle Mouse Button"},
    {0x0053, "Back Button"},
    {0x0054, "Back Button"},
    {0x0056, "Forward Button"},
    {0x0057, "Forward Button"},
    {0x005b, "Left Scroll"},
    {0x005d, "Right Scroll"},
    {0x006e, "Show Desktop"},
    {0x006f, "Lock Screen"},
    {0x0090, "Minimize"},
    {0x0091, "Maximize"},
    {0x0095, "Switch Screens"},
    {0x00ba, "Switch Apps"},
    {0x00bb, "Home"},
    {0x00bc, "Menu"},
    {0x00bd, "Back Button"},
    {0x00be, "Generic"},
    {0x00bf, "Print Screen"},
    {0x00c0, "Generic"},
    {0x00c1, "Generic"},
    {0x00c2, "Lock Screen"},
    {0x00c3, "Gesture Button"},
    {0x00c4, "Toggle SmartShift"},
    {0x00c7, "Decrease Brightness"},
    {0x00c8, "Increase Brightness"},
    {0x00cc, "Switch Apps"},
    {0x00ce, "Back Button"},
    {0x00cf, "Forward Button"},
    {0x00d0, "Switch Apps"},
    {0x00d1, "Generic"},
    {0x00d2, "Generic"},
    {0x00d3, "Generic"},
    {0x00d4, "Search"},
    {0x00d5, "Home"},
    {0x00d6, "Menu"},
    {0x00d7, "Switch Receivers"},
    {0x00dd, "Select Language"},
    {0x00e0, "Task View"},
    {0x00e1, "Action Center"},
    {0x00e2, "Decrease Backlight"},
    {0x00e3, "Increase Backlight"},
    {0x00e4, "Previous Track"},
    {0x00e5, "Play/Pause"},
    {0x00e6, "Next Track"},
    {0x00e7, "Mute"},
    {0x00e8, "Volume Down"},
    {0x00e9, "Volume Up"},
    {0x00ea, "App Menu"},
    {0x00ed, "Trackball Sensitivity"},
    {0x00ef, "F key"},
    {0x00f0, "F key"},
    {0x00f1, "F key"},
    {0x00f2, "F key"},
    {0x00f3, "F key"},
    {0x00f4, "F key"},
    {0x00f5, "F key"},
    {0x00f6, "F key"},
    {0x00fd, "Mouse Sensitivity"},
    {0x00fe, "Home"}
};

const char* get_key_description(short unsigned int key) {
    static std::string result;
    result = key_descriptions[key];
    return result.c_str();
}

const char* get_key_comment(short unsigned int key) {
    static std::string result;
    result = key_comments[key];
    return result.c_str();
}