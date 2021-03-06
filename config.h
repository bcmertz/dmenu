/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 1000;                /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "monospace:size=12",
  /* "IranianSans:size=16", */
  "VazirCode:size=16",
  "NotoColorEmoji:size=14",
  "UbuntuMonoNerdFont"
};
static const unsigned int bgalpha = OPAQUE;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
  /*     fg         bg       */
  [SchemeNorm] = { "#eeeeee", "#111111" },
  [SchemeSel] = { "#eeeeee", "#285577" },
  [SchemeOut] = { "#000000", "#285577" },
};

static const unsigned int alphas[SchemeLast][2] = {
  /*		fgalpha		bgalphga	*/
  [SchemeNorm] = { fgalpha, bgalpha },
  [SchemeSel] = { fgalpha, bgalpha },
  [SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 42;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
