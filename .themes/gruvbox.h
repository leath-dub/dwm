static const char col_gray1[]       = "#282828";
static const char col_gray2[]       = "#d5c4a1";
static const char col_gray3[]       = "#83a598";
static const char col_gray4[]       = "#d5c4a1";
static const char col_cyan[]        = "#83a598";
static const char *colors[][3]      = {
    /*               fg         bg         border   */
    [SchemeNorm] = { col_gray3, col_gray1, col_cyan },
    [SchemeSel]  = { col_gray4, col_gray1,  col_gray2  },
    [SchemeStatus]  = { col_gray4, "#3c3836",  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel]  = { col_gray4, col_cyan,  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
    [SchemeTagsNorm]  = { col_gray3, col_gray1,  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
    [SchemeInfoSel]  = { col_gray3, col_gray1,  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
    [SchemeInfoNorm]  = { col_gray4, col_gray1,  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};
