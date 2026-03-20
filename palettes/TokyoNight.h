/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#32344a",
	"#f7768e",
	"#9ece6a",
	"#e0af68",
	"#7aa2f7",
	"#ad8ee6",
	"#449dab",
	"#787c99",
	
  /* 8 bright colors */
	"#444b6a",
	"#ff7a93",
	"#b9f27c",
	"#ff9e64",
	"#7da6ff",
	"#bb9af7",
	"#0db9d7",
	"#acb0d0",
  
	/* more colors can be added after 255 to use with DefaultXX */
	[256] = "#a0a8cd", /* 256 -> fg */
	[257] = "#11121d", /* 257 -> bg */
	[258] = "#a0a8cd", /* 258 -> cursor */
};
