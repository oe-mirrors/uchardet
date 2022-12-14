/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"
#include "../nsLanguageDetector.h"

/********* Language model for: Irish *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-14 18:08:23.900202
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Iso_8859_15_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 4X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 6X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM, 45,SYM, 45,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM, 44, 50,SYM,SYM, 44,SYM,SYM,SYM, 51, 52, 53,SYM, /* BX */
   40, 16, 54, 55, 31, 36, 56, 35, 33, 18, 46, 37, 57, 17, 43, 49, /* CX */
   47, 41, 39, 20, 58, 59, 32,SYM, 38, 60, 21, 61, 34, 42, 62, 63, /* DX */
   40, 16, 64, 65, 31, 36, 66, 35, 33, 18, 46, 37, 67, 17, 43, 49, /* EX */
   47, 41, 39, 20, 68, 69, 32,SYM, 38, 70, 21, 71, 34, 42, 72, 73, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_1_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 4X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 6X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 74,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   40, 16, 75, 76, 31, 36, 77, 35, 33, 18, 46, 37, 78, 17, 43, 49, /* CX */
   47, 41, 39, 20, 79, 80, 32,SYM, 38, 81, 21, 82, 34, 42, 83, 84, /* DX */
   40, 16, 85, 86, 31, 36, 87, 35, 33, 18, 46, 37, 88, 17, 43, 49, /* EX */
   47, 41, 39, 20, 89, 90, 32,SYM, 38, 91, 21, 92, 34, 42, 93, 94, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_9_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 4X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 6X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 95,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   40, 16, 96, 97, 31, 36, 98, 35, 33, 18, 46, 37, 99, 17, 43, 49, /* CX */
  100, 41, 39, 20,101,102, 32,SYM, 38,103, 21,104, 34,105, 48,106, /* DX */
   40, 16,107,108, 31, 36,109, 35, 33, 18, 46, 37,110, 17, 43, 49, /* EX */
  111, 41, 39, 20,112,113, 32,SYM, 38,114, 21,115, 34,116, 48,117, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1252_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 4X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 15,  8, 11,  5, 19, 12,  3,  1, 27, 23, 10, 13,  2,  9, /* 6X */
   22, 30,  4,  6,  7, 14, 24, 26, 29, 25, 28,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,118,SYM,SYM,SYM,SYM,SYM,SYM, 45,SYM,119,ILL, 44,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 45,SYM,120,ILL, 44,121, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,122,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   40, 16,123,124, 31, 36,125, 35, 33, 18, 46, 37,126, 17, 43, 49, /* CX */
   47, 41, 39, 20,127,128, 32,SYM, 38,129, 21,130, 34, 42,131,132, /* DX */
   40, 16,133,134, 31, 36,135, 35, 33, 18, 46, 37,136, 17, 43, 49, /* EX */
   47, 41, 39, 20,137,138, 32,SYM, 38,139, 21,140, 34, 42,141,142, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 62;
static const unsigned int Unicode_CharOrder[] =
{
   65,  0,  66, 15,  67,  8,  68, 11,  69,  5,  70, 19,  71, 12, 72,  3,
   73,  1,  74, 27,  75, 23,  76, 10,  77, 13,  78,  2,  79,  9, 80, 22,
   81, 30,  82,  4,  83,  6,  84,  7,  85, 14,  86, 24,  87, 26, 88, 29,
   89, 25,  90, 28,  97,  0,  98, 15,  99,  8, 100, 11, 101,  5,102, 19,
  103, 12, 104,  3, 105,  1, 106, 27, 107, 23, 108, 10, 109, 13,110,  2,
  111,  9, 112, 22, 113, 30, 114,  4, 115,  6, 116,  7, 117, 14,118, 24,
  119, 26, 120, 29, 121, 25, 122, 28, 193, 16, 201, 18, 205, 17,211, 20,
  218, 21, 225, 16, 233, 18, 237, 17, 243, 20, 250, 21,
};


/* Model Table:
 * Total considered sequences: 853 / 961
 * - Positive sequences: first 461 (0.995039617055503)
 * - Probable sequences: next 163 (624-461) (0.003960483178947816)
 * - Neutral sequences: last 337 (0.0009998997655491504)
 * - Negative sequences: 108 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 IrishLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,0,3,0,1,3,3,3,3,3,2,3,2,2,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,2,0,1,3,3,3,3,3,3,3,1,2,3,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,0,1,
  3,3,3,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,3,2,1,0,0,0,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,2,2,2,1,1,
  3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,3,2,0,3,3,3,3,3,2,3,3,1,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,1,3,2,1,2,0,1,
  3,3,3,3,3,3,3,3,3,3,3,1,2,2,3,3,3,3,3,2,3,3,2,2,3,3,2,1,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,3,3,3,3,3,3,1,3,1,2,1,1,2,0,3,
  2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,1,3,0,3,3,3,3,3,3,1,3,2,1,
  3,3,2,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,2,1,2,0,0,
  3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,2,3,3,3,3,3,3,1,1,2,3,3,1,1,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,2,3,3,3,2,3,2,0,1,1,1,2,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,1,3,3,3,3,3,3,2,3,3,3,0,2,3,0,0,1,0,0,
  3,3,3,2,3,3,3,3,3,2,3,3,3,3,2,3,3,3,1,2,0,0,3,2,2,2,1,1,2,2,0,
  3,3,2,3,3,3,3,2,2,3,3,1,1,1,3,2,3,3,3,1,3,2,3,0,0,3,0,1,0,0,2,
  0,3,3,0,3,0,3,3,3,0,3,3,3,3,0,3,0,2,0,3,0,1,3,0,1,0,0,0,0,0,0,
  2,1,3,0,3,0,3,3,3,3,3,3,2,2,1,3,0,0,0,2,1,3,1,1,2,0,0,0,0,0,0,
  3,3,2,0,2,2,2,2,1,2,2,2,1,1,1,2,1,1,0,1,2,2,1,1,1,0,0,0,0,0,0,
  3,3,2,3,3,3,1,2,1,3,3,0,2,1,3,0,3,3,3,3,3,2,0,0,0,2,0,0,0,0,0,
  1,3,3,1,3,0,3,3,3,0,3,3,3,3,0,2,0,0,0,2,0,2,3,0,1,0,1,0,1,0,0,
  0,3,3,0,3,0,3,3,3,0,3,3,2,3,0,3,0,1,0,0,0,0,3,0,0,0,0,1,0,0,0,
  3,3,2,3,3,3,3,3,2,3,3,2,0,1,3,2,3,3,3,2,3,3,3,1,0,2,0,1,1,1,0,
  3,3,2,3,3,3,3,1,1,3,3,1,0,3,3,1,0,0,1,0,1,0,0,2,1,3,1,0,0,0,0,
  3,3,2,0,2,3,3,2,0,3,2,0,2,0,2,1,3,2,3,1,3,1,0,1,1,2,0,0,0,0,0,
  3,2,3,1,2,3,3,2,2,3,3,2,1,2,2,3,0,0,0,1,0,0,2,1,1,1,2,0,1,1,0,
  3,3,2,2,2,3,2,2,0,3,2,1,0,0,0,0,0,0,0,1,0,0,1,1,0,2,2,0,0,0,0,
  3,3,1,0,2,3,0,0,0,3,0,0,0,1,3,0,1,1,0,0,1,0,0,1,0,0,0,1,0,0,0,
  3,3,1,3,0,3,2,1,0,2,1,1,2,1,2,1,1,0,0,0,2,0,0,1,1,2,1,0,2,0,0,
  2,3,0,0,0,2,0,2,1,2,0,0,0,0,1,0,0,0,0,2,0,0,1,0,1,0,1,0,0,0,0,
  2,1,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,
};


const SequenceModel Iso_8859_15IrishModel =
{
  Iso_8859_15_CharToOrderMap,
  IrishLangModel,
  31,
  (float)0.9990001002344508,
  PR_TRUE,
  "ISO-8859-15",
  "ga"
};

const SequenceModel Iso_8859_1IrishModel =
{
  Iso_8859_1_CharToOrderMap,
  IrishLangModel,
  31,
  (float)0.9990001002344508,
  PR_TRUE,
  "ISO-8859-1",
  "ga"
};

const SequenceModel Iso_8859_9IrishModel =
{
  Iso_8859_9_CharToOrderMap,
  IrishLangModel,
  31,
  (float)0.9990001002344508,
  PR_TRUE,
  "ISO-8859-9",
  "ga"
};

const SequenceModel Windows_1252IrishModel =
{
  Windows_1252_CharToOrderMap,
  IrishLangModel,
  31,
  (float)0.9990001002344508,
  PR_TRUE,
  "WINDOWS-1252",
  "ga"
};

const LanguageModel IrishModel =
{
  "ga",
  Unicode_CharOrder,
  62,
  IrishLangModel,
  31,
  3,
  (float)0.3435309101596943,
  19,
  (float)0.03729009503282062,
};
