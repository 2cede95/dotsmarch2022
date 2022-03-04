//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", "~/.local/bin/statusbar/dwm_transmission",	30,		0},

	{"vol ", "~/.local/bin/statusbar/sb-volume",	1,		1},

	{"mem ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 2, 0},

        {"cpu ", "~/.local/bin/statusbar/sb-cpu", 2, 0},

        {"pwr ", "~/.local/bin/statusbar/dwm_battery", 10, 0},

	{"", "~/.local/bin/statusbar/sb-internet", 5, 0},

	{"", "~/.local/bin/statusbar/sb-clock", 5, 0},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " · ";
static unsigned int delimLen = 5;
