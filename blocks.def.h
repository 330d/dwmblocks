//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        {"vol:", "pamixer --get-volume",                                        1,              0},
 
        {"bat:", "acpi | awk '{print $4}' | sed s/,//",                         1,              0},
 
        {"temp:", "sensors | awk '/Core 0/ {print $3}' ",                       1,              0},
 
        {"mem:", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",     1,              0},
 
        {"", "date '+%H:%M %d/%m/%y'",                                          5,              0},
};
 
//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
