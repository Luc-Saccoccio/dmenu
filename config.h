/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 450; /* minimum width when centered */
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=11",
	"JoyPixels:pixelsize=15:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = 		{ "#44afad", "#1a1a1a" },
	[SchemeSel] = 		{ "#232733", "#2d83be" },
	[SchemeSelHighlight] = 	{ "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
 	[SchemeOut] = 		{ "#000000", "#00ffff" },
	[SchemeOutHighlight] = 	{ "#ffc978", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = 		{ OPAQUE, 0xf0 },
	[SchemeSel]  = 		{ OPAQUE, 0xf0 },
	[SchemeSelHighlight] = 	{ OPAQUE, 0xf0 },
	[SchemeNormHighlight] = { OPAQUE, 0xf0 },
 	[SchemeOut] = 		{ OPAQUE, 0xf0 },
	[SchemeOutHighlight] = 	{ OPAQUE, 0xf0 },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
