/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set
"Source Code Pro:size=10"
*/
static const char *fonts[] = {
	"ohsnap7x14r:pixelsize=14:antialias=true:autohint=true"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#999999", "#000000" },
	[SchemeSel] = { "#999999", "#333333" },
	[SchemeSelHighlight] = { "#999999", "#6D2C65" },
	[SchemeNormHighlight] = { "#6D2C65", "#000000" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeHp] = { "#bbbbbb", "#333333" }
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 24; /* -h option; minimum height of a menu line */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
