/*
 *  THIS FILE WAS GENERATED AUTOMATICALLY
 *
 *  DON'T EDIT IT BY HAND!
 *  (unless you know what you are doing)
 */

#define NIBBLE_BITS 4
#define MAKE_BYTE(nh, nl) (((nh) << NIBBLE_BITS) | (nl))

/*
 * Table has a 0 if that character cannot be a hex digit;
 * otherwise it has the decimal value for that hex digit.
 */
static char uri_decode_tbl[256] =
/*    0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f */
{
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 0:   0 ~  15 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 1:  16 ~  31 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 2:  32 ~  47 */
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   0,   0,   0,   0,   0,  /* 3:  48 ~  63 */
      0,  10,  11,  12,  13,  14,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 4:  64 ~  79 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 5:  80 ~  95 */
      0,  10,  11,  12,  13,  14,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 6:  96 ~ 111 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 7: 112 ~ 127 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 8: 128 ~ 143 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* 9: 144 ~ 159 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* a: 160 ~ 175 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* b: 176 ~ 191 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* c: 192 ~ 207 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* d: 208 ~ 223 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* e: 224 ~ 239 */
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  /* f: 240 ~ 255 */
};

/*
 * Table has a 0 if that character doesn't need to be encoded;
 * otherwise it has a string with the character encoded in hex digits.
 */
static char* uri_encode_tbl[256] =
/*    0     1     2     3     4     5     6     7     8     9     a     b     c     d     e     f */
{
   "%00","%01","%02","%03","%04","%05","%06","%07","%08","%09","%0A","%0B","%0C","%0D","%0E","%0F",  /* 0:   0 ~  15 */
   "%10","%11","%12","%13","%14","%15","%16","%17","%18","%19","%1A","%1B","%1C","%1D","%1E","%1F",  /* 1:  16 ~  31 */
   "%20",   0 ,"%22","%23","%24","%25","%26",   0 ,   0 ,   0 ,   0 ,"%2B","%2C",   0 ,   0 ,"%2F",  /* 2:  32 ~  47 */
      0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,"%3A","%3B","%3C","%3D","%3E","%3F",  /* 3:  48 ~  63 */
   "%40",   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,  /* 4:  64 ~  79 */
      0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,"%5B","%5C","%5D","%5E",   0 ,  /* 5:  80 ~  95 */
   "%60",   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,  /* 6:  96 ~ 111 */
      0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,   0 ,"%7B","%7C","%7D",   0 ,"%7F",  /* 7: 112 ~ 127 */
   "%80","%81","%82","%83","%84","%85","%86","%87","%88","%89","%8A","%8B","%8C","%8D","%8E","%8F",  /* 8: 128 ~ 143 */
   "%90","%91","%92","%93","%94","%95","%96","%97","%98","%99","%9A","%9B","%9C","%9D","%9E","%9F",  /* 9: 144 ~ 159 */
   "%A0","%A1","%A2","%A3","%A4","%A5","%A6","%A7","%A8","%A9","%AA","%AB","%AC","%AD","%AE","%AF",  /* A: 160 ~ 175 */
   "%B0","%B1","%B2","%B3","%B4","%B5","%B6","%B7","%B8","%B9","%BA","%BB","%BC","%BD","%BE","%BF",  /* B: 176 ~ 191 */
   "%C0","%C1","%C2","%C3","%C4","%C5","%C6","%C7","%C8","%C9","%CA","%CB","%CC","%CD","%CE","%CF",  /* C: 192 ~ 207 */
   "%D0","%D1","%D2","%D3","%D4","%D5","%D6","%D7","%D8","%D9","%DA","%DB","%DC","%DD","%DE","%DF",  /* D: 208 ~ 223 */
   "%E0","%E1","%E2","%E3","%E4","%E5","%E6","%E7","%E8","%E9","%EA","%EB","%EC","%ED","%EE","%EF",  /* E: 224 ~ 239 */
   "%F0","%F1","%F2","%F3","%F4","%F5","%F6","%F7","%F8","%F9","%FA","%FB","%FC","%FD","%FE","%FF",  /* F: 240 ~ 255 */
};

/*
 * Table has the next state given last read character and current state.
 */

#define URI_STATE_START       0
#define URI_STATE_NAME        1
#define URI_STATE_EQUALS      2
#define URI_STATE_VALUE       3
#define URI_STATE_END         4
#define URI_STATE_ERROR       5

/* Minimum state that indicates we must terminate processing */
#define URI_STATE_TERMINATE  URI_STATE_END

static char uri_state_tbl[256][7] =
/*     0    1    2    3    4    5*/
{
    {  5,   5,   4,   4,   5,   5, },  /*  0 --   0 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  1 --   1 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  2 --   2 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  3 --   3 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  4 --   4 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  5 --   5 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  6 --   6 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  7 --   7 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  8 --   8 -- . */
    {  0,   1,   2,   3,   4,   5, },  /*  9 --   9 -- . */
    {  0,   1,   2,   3,   4,   5, },  /*  a --  10 -- . */
    {  0,   1,   2,   3,   4,   5, },  /*  b --  11 -- . */
    {  0,   1,   2,   3,   4,   5, },  /*  c --  12 -- . */
    {  0,   1,   2,   3,   4,   5, },  /*  d --  13 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  e --  14 -- . */
    {  1,   1,   3,   3,   4,   5, },  /*  f --  15 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 10 --  16 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 11 --  17 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 12 --  18 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 13 --  19 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 14 --  20 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 15 --  21 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 16 --  22 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 17 --  23 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 18 --  24 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 19 --  25 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 1a --  26 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 1b --  27 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 1c --  28 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 1d --  29 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 1e --  30 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 1f --  31 -- . */
    {  0,   1,   2,   3,   4,   5, },  /* 20 --  32 --   */
    {  1,   1,   3,   3,   4,   5, },  /* 21 --  33 -- ! */
    {  1,   1,   3,   3,   4,   5, },  /* 22 --  34 -- " */
    {  1,   1,   3,   3,   4,   5, },  /* 23 --  35 -- # */
    {  1,   1,   3,   3,   4,   5, },  /* 24 --  36 -- $ */
    {  1,   1,   3,   3,   4,   5, },  /* 25 --  37 -- % */
    {  1,   1,   3,   3,   4,   5, },  /* 26 --  38 -- & */
    {  1,   1,   3,   3,   4,   5, },  /* 27 --  39 -- ' */
    {  1,   1,   3,   3,   4,   5, },  /* 28 --  40 -- ( */
    {  1,   1,   3,   3,   4,   5, },  /* 29 --  41 -- ) */
    {  1,   1,   3,   3,   4,   5, },  /* 2a --  42 -- * */
    {  1,   1,   3,   3,   4,   5, },  /* 2b --  43 -- + */
    {  1,   1,   3,   3,   4,   5, },  /* 2c --  44 -- , */
    {  1,   1,   3,   3,   4,   5, },  /* 2d --  45 -- - */
    {  1,   1,   3,   3,   4,   5, },  /* 2e --  46 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 2f --  47 -- / */
    {  1,   1,   3,   3,   4,   5, },  /* 30 --  48 -- 0 */
    {  1,   1,   3,   3,   4,   5, },  /* 31 --  49 -- 1 */
    {  1,   1,   3,   3,   4,   5, },  /* 32 --  50 -- 2 */
    {  1,   1,   3,   3,   4,   5, },  /* 33 --  51 -- 3 */
    {  1,   1,   3,   3,   4,   5, },  /* 34 --  52 -- 4 */
    {  1,   1,   3,   3,   4,   5, },  /* 35 --  53 -- 5 */
    {  1,   1,   3,   3,   4,   5, },  /* 36 --  54 -- 6 */
    {  1,   1,   3,   3,   4,   5, },  /* 37 --  55 -- 7 */
    {  1,   1,   3,   3,   4,   5, },  /* 38 --  56 -- 8 */
    {  1,   1,   3,   3,   4,   5, },  /* 39 --  57 -- 9 */
    {  1,   1,   3,   3,   4,   5, },  /* 3a --  58 -- : */
    {  5,   5,   4,   4,   5,   5, },  /* 3b --  59 -- ; */
    {  1,   1,   3,   3,   4,   5, },  /* 3c --  60 -- < */
    {  5,   2,   3,   3,   5,   5, },  /* 3d --  61 -- = */
    {  1,   1,   3,   3,   4,   5, },  /* 3e --  62 -- > */
    {  1,   1,   3,   3,   4,   5, },  /* 3f --  63 -- ? */
    {  1,   1,   3,   3,   4,   5, },  /* 40 --  64 -- @ */
    {  1,   1,   3,   3,   4,   5, },  /* 41 --  65 -- A */
    {  1,   1,   3,   3,   4,   5, },  /* 42 --  66 -- B */
    {  1,   1,   3,   3,   4,   5, },  /* 43 --  67 -- C */
    {  1,   1,   3,   3,   4,   5, },  /* 44 --  68 -- D */
    {  1,   1,   3,   3,   4,   5, },  /* 45 --  69 -- E */
    {  1,   1,   3,   3,   4,   5, },  /* 46 --  70 -- F */
    {  1,   1,   3,   3,   4,   5, },  /* 47 --  71 -- G */
    {  1,   1,   3,   3,   4,   5, },  /* 48 --  72 -- H */
    {  1,   1,   3,   3,   4,   5, },  /* 49 --  73 -- I */
    {  1,   1,   3,   3,   4,   5, },  /* 4a --  74 -- J */
    {  1,   1,   3,   3,   4,   5, },  /* 4b --  75 -- K */
    {  1,   1,   3,   3,   4,   5, },  /* 4c --  76 -- L */
    {  1,   1,   3,   3,   4,   5, },  /* 4d --  77 -- M */
    {  1,   1,   3,   3,   4,   5, },  /* 4e --  78 -- N */
    {  1,   1,   3,   3,   4,   5, },  /* 4f --  79 -- O */
    {  1,   1,   3,   3,   4,   5, },  /* 50 --  80 -- P */
    {  1,   1,   3,   3,   4,   5, },  /* 51 --  81 -- Q */
    {  1,   1,   3,   3,   4,   5, },  /* 52 --  82 -- R */
    {  1,   1,   3,   3,   4,   5, },  /* 53 --  83 -- S */
    {  1,   1,   3,   3,   4,   5, },  /* 54 --  84 -- T */
    {  1,   1,   3,   3,   4,   5, },  /* 55 --  85 -- U */
    {  1,   1,   3,   3,   4,   5, },  /* 56 --  86 -- V */
    {  1,   1,   3,   3,   4,   5, },  /* 57 --  87 -- W */
    {  1,   1,   3,   3,   4,   5, },  /* 58 --  88 -- X */
    {  1,   1,   3,   3,   4,   5, },  /* 59 --  89 -- Y */
    {  1,   1,   3,   3,   4,   5, },  /* 5a --  90 -- Z */
    {  1,   1,   3,   3,   4,   5, },  /* 5b --  91 -- [ */
    {  1,   1,   3,   3,   4,   5, },  /* 5c --  92 -- \ */
    {  1,   1,   3,   3,   4,   5, },  /* 5d --  93 -- ] */
    {  1,   1,   3,   3,   4,   5, },  /* 5e --  94 -- ^ */
    {  1,   1,   3,   3,   4,   5, },  /* 5f --  95 -- _ */
    {  1,   1,   3,   3,   4,   5, },  /* 60 --  96 -- ` */
    {  1,   1,   3,   3,   4,   5, },  /* 61 --  97 -- a */
    {  1,   1,   3,   3,   4,   5, },  /* 62 --  98 -- b */
    {  1,   1,   3,   3,   4,   5, },  /* 63 --  99 -- c */
    {  1,   1,   3,   3,   4,   5, },  /* 64 -- 100 -- d */
    {  1,   1,   3,   3,   4,   5, },  /* 65 -- 101 -- e */
    {  1,   1,   3,   3,   4,   5, },  /* 66 -- 102 -- f */
    {  1,   1,   3,   3,   4,   5, },  /* 67 -- 103 -- g */
    {  1,   1,   3,   3,   4,   5, },  /* 68 -- 104 -- h */
    {  1,   1,   3,   3,   4,   5, },  /* 69 -- 105 -- i */
    {  1,   1,   3,   3,   4,   5, },  /* 6a -- 106 -- j */
    {  1,   1,   3,   3,   4,   5, },  /* 6b -- 107 -- k */
    {  1,   1,   3,   3,   4,   5, },  /* 6c -- 108 -- l */
    {  1,   1,   3,   3,   4,   5, },  /* 6d -- 109 -- m */
    {  1,   1,   3,   3,   4,   5, },  /* 6e -- 110 -- n */
    {  1,   1,   3,   3,   4,   5, },  /* 6f -- 111 -- o */
    {  1,   1,   3,   3,   4,   5, },  /* 70 -- 112 -- p */
    {  1,   1,   3,   3,   4,   5, },  /* 71 -- 113 -- q */
    {  1,   1,   3,   3,   4,   5, },  /* 72 -- 114 -- r */
    {  1,   1,   3,   3,   4,   5, },  /* 73 -- 115 -- s */
    {  1,   1,   3,   3,   4,   5, },  /* 74 -- 116 -- t */
    {  1,   1,   3,   3,   4,   5, },  /* 75 -- 117 -- u */
    {  1,   1,   3,   3,   4,   5, },  /* 76 -- 118 -- v */
    {  1,   1,   3,   3,   4,   5, },  /* 77 -- 119 -- w */
    {  1,   1,   3,   3,   4,   5, },  /* 78 -- 120 -- x */
    {  1,   1,   3,   3,   4,   5, },  /* 79 -- 121 -- y */
    {  1,   1,   3,   3,   4,   5, },  /* 7a -- 122 -- z */
    {  1,   1,   3,   3,   4,   5, },  /* 7b -- 123 -- { */
    {  1,   1,   3,   3,   4,   5, },  /* 7c -- 124 -- | */
    {  1,   1,   3,   3,   4,   5, },  /* 7d -- 125 -- } */
    {  1,   1,   3,   3,   4,   5, },  /* 7e -- 126 -- ~ */
    {  1,   1,   3,   3,   4,   5, },  /* 7f -- 127 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 80 -- 128 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 81 -- 129 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 82 -- 130 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 83 -- 131 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 84 -- 132 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 85 -- 133 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 86 -- 134 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 87 -- 135 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 88 -- 136 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 89 -- 137 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 8a -- 138 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 8b -- 139 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 8c -- 140 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 8d -- 141 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 8e -- 142 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 8f -- 143 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 90 -- 144 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 91 -- 145 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 92 -- 146 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 93 -- 147 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 94 -- 148 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 95 -- 149 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 96 -- 150 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 97 -- 151 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 98 -- 152 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 99 -- 153 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 9a -- 154 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 9b -- 155 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 9c -- 156 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 9d -- 157 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 9e -- 158 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* 9f -- 159 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a0 -- 160 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a1 -- 161 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a2 -- 162 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a3 -- 163 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a4 -- 164 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a5 -- 165 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a6 -- 166 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a7 -- 167 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a8 -- 168 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* a9 -- 169 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* aa -- 170 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ab -- 171 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ac -- 172 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ad -- 173 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ae -- 174 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* af -- 175 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b0 -- 176 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b1 -- 177 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b2 -- 178 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b3 -- 179 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b4 -- 180 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b5 -- 181 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b6 -- 182 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b7 -- 183 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b8 -- 184 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* b9 -- 185 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ba -- 186 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* bb -- 187 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* bc -- 188 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* bd -- 189 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* be -- 190 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* bf -- 191 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c0 -- 192 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c1 -- 193 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c2 -- 194 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c3 -- 195 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c4 -- 196 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c5 -- 197 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c6 -- 198 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c7 -- 199 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c8 -- 200 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* c9 -- 201 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ca -- 202 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* cb -- 203 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* cc -- 204 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* cd -- 205 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ce -- 206 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* cf -- 207 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d0 -- 208 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d1 -- 209 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d2 -- 210 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d3 -- 211 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d4 -- 212 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d5 -- 213 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d6 -- 214 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d7 -- 215 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d8 -- 216 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* d9 -- 217 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* da -- 218 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* db -- 219 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* dc -- 220 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* dd -- 221 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* de -- 222 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* df -- 223 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e0 -- 224 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e1 -- 225 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e2 -- 226 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e3 -- 227 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e4 -- 228 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e5 -- 229 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e6 -- 230 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e7 -- 231 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e8 -- 232 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* e9 -- 233 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ea -- 234 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* eb -- 235 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ec -- 236 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ed -- 237 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ee -- 238 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ef -- 239 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f0 -- 240 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f1 -- 241 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f2 -- 242 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f3 -- 243 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f4 -- 244 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f5 -- 245 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f6 -- 246 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f7 -- 247 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f8 -- 248 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* f9 -- 249 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* fa -- 250 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* fb -- 251 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* fc -- 252 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* fd -- 253 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* fe -- 254 -- . */
    {  1,   1,   3,   3,   4,   5, },  /* ff -- 255 -- . */
};

/*
 *  END OF FILE
 */
