/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static char *prompt = "";  /* -p  option; prompt to the left of input field */

static int topbar = 1;                   /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 0;              /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int fuzzy = 1;                    /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                 /* -c option; centers dmenu on screen */
static int min_width = 750;              /* minimum width when centered */
static const unsigned int alpha = 0xf0;  /* alpha amount */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	// font,
	"JetBrains Mono Medium:pixelsize=14:antialias=true:autohint=true"
};

/* Colour scheme */
static const char *colors[SchemeLast][2] = {
	/*                           fg         bg      */
	/*                           --         --      */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeMid]           = { "#eeeeee", "#2c2c2c" },
	[SchemeMidHighlight]  = { "#ffc978", "#2c2c2c"},
	[SchemeSel]           = { "#eeeeee", "#005577" },
	[SchemeSelHighlight]  = { "#ffc978", "#005577" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 20;
static unsigned int lineheight = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "prompt",               STRING,  &prompt },
	{ "topbar",               INTEGER, &topbar},
	{ "colorprompt",          INTEGER, &colorprompt},
	{ "fuzzy",                INTEGER, &fuzzy},
	{ "centered",             INTEGER, &centered},
	{ "min_width",            INTEGER, &min_width},
	{ "lines",                INTEGER,  &lines},
	{ "columns",              INTEGER,  &columns},
	{ "lineheight",           INTEGER,  &lineheight},
	{ "border_width",         INTEGER,  &border_width},

	{ "font",                 STRING,  &font },

	/* Colours */
	{ "normfgcolor",          STRING,  &colors[SchemeNorm][0]},
	{ "normbgcolor",          STRING,  &colors[SchemeNorm][1]},
	{ "normHighlightfgcolor", STRING,  &colors[SchemeNormHighlight][0]},
	{ "normHighlightbgcolor", STRING,  &colors[SchemeNormHighlight][1]},
	{ "midfgcolor",           STRING,  &colors[SchemeMid][0]},
	{ "midbgcolor",           STRING,  &colors[SchemeMid][1]},
	{ "midHighlightfgcolor",  STRING,  &colors[SchemeMidHighlight][0]},
	{ "midHighlightbgcolor",  STRING,  &colors[SchemeMidHighlight][1]},
	{ "selfgcolor",           STRING,  &colors[SchemeSel][0] },
	{ "selbgcolor",           STRING,  &colors[SchemeSel][1] },
	{ "selHighlightfgcolor",  STRING,  &colors[SchemeSelHighlight][0]},
	{ "selHighlightbgcolor",  STRING,  &colors[SchemeSelHighlight][1]},
};
