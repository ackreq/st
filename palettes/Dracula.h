/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  /* 8 normal colors */
  "#21222c",
  "#ff5555",
  "#50fa7b",
  "#fffe91",
  "#9082f7",
  "#ff79c6",
  "#8be9fd",
  "#bbbbbb",

  /* 8 bright colors */
  "#6272a4",
  "#ff6e6e",
  "#69ff94",
  "#ffffa5",
  "#d6acff",
  "#ff92df",
  "#a4ffff",
  "#ffffff",

  /* special colors */
  [256] = "#f8f8f2", /* background */
  [257] = "#1e1f29", /* foreground */
  [258] = "#ff7700", /* cursor background */
};
