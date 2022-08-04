//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	{" ",	"",	0,	0},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-memory",	10,	11},
	{"",	"sb-clock",	60,	12},
	{" ",	"",	0,	0},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
static int delimLen = 1;


