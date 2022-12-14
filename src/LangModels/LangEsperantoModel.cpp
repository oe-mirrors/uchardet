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

/********* Language model for: Esperanto *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-14 17:59:23.880137
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
static const unsigned char Iso_8859_3_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  0, 18, 17, 10,  2, 19, 15, 21,  3, 11,  9,  6, 13,  4,  1, /* 4X */
   14, 33,  5,  8,  7, 12, 16, 27, 32, 26, 20,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  0, 18, 17, 10,  2, 19, 15, 21,  3, 11,  9,  6, 13,  4,  1, /* 6X */
   14, 33,  5,  8,  7, 12, 16, 27, 32, 26, 20,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 61,SYM,SYM,SYM,ILL, 29,SYM,SYM, 62, 59, 57, 28,SYM,ILL, 48, /* AX */
  SYM, 63,SYM,SYM,SYM,SYM, 29,SYM,SYM, 46, 59, 57, 28,SYM,ILL, 48, /* BX */
   49, 31, 41,ILL, 37, 54, 24, 44, 42, 30, 60, 55, 51, 35, 47, 53, /* CX */
  ILL, 43, 52, 34, 45, 50, 36,SYM, 22, 58, 39, 56, 38, 23, 25, 40, /* DX */
   49, 31, 41,ILL, 37, 54, 24, 44, 42, 30, 60, 55, 51, 35, 47, 53, /* EX */
  ILL, 43, 52, 34, 45, 50, 36,SYM, 22, 58, 39, 56, 38, 23, 25,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 60;
static const unsigned int Unicode_CharOrder[] =
{
   65,  0,  66, 18,  67, 17,  68, 10,  69,  2,  70, 19,  71, 15, 72, 21,
   73,  3,  74, 11,  75,  9,  76,  6,  77, 13,  78,  4,  79,  1, 80, 14,
   82,  5,  83,  8,  84,  7,  85, 12,  86, 16,  87, 27,  89, 26, 90, 20,
   97,  0,  98, 18,  99, 17, 100, 10, 101,  2, 102, 19, 103, 15,104, 21,
  105,  3, 106, 11, 107,  9, 108,  6, 109, 13, 110,  4, 111,  1,112, 14,
  114,  5, 115,  8, 116,  7, 117, 12, 118, 16, 119, 27, 121, 26,122, 20,
  264, 24, 265, 24, 284, 22, 285, 22, 292, 29, 293, 29, 308, 28,309, 28,
  348, 25, 349, 25, 364, 23, 365, 23,
};


/* Model Table:
 * Total considered sequences: 1198 / 900
 * - Positive sequences: first 496 (0.9950012527506046)
 * - Probable sequences: next 287 (783-496) (0.004000631822044021)
 * - Neutral sequences: last 117 (0.0009981154273513981)
 * - Negative sequences: -298 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 EsperantoLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,1,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,2,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,2,1,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,3,3,3,2,2,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,0,2,3,3,1,1,1,
  3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,3,1,0,2,2,3,2,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,3,3,3,3,0,0,1,2,3,2,1,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,3,3,1,3,3,3,0,1,1,2,3,2,1,0,
  3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,1,2,2,3,3,1,0,1,1,3,2,1,0,
  3,3,3,3,3,3,3,3,3,2,3,1,3,3,3,2,2,1,3,2,2,1,3,0,1,1,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,1,3,3,2,1,1,2,
  3,3,3,3,3,3,3,3,3,3,3,2,3,3,3,2,2,2,3,3,1,2,0,1,2,2,3,2,0,0,
  3,3,3,3,2,3,3,3,3,2,2,2,3,2,3,1,2,2,2,2,1,3,0,0,0,1,2,1,0,0,
  3,3,3,3,3,3,3,3,3,2,2,1,3,3,1,2,3,0,2,2,2,3,0,1,1,1,3,1,1,1,
  3,3,3,3,3,3,3,2,3,2,3,3,3,1,1,2,1,1,0,1,1,1,0,0,2,1,1,0,1,0,
  3,3,3,3,2,3,3,3,3,3,2,1,3,3,3,1,2,3,1,2,3,3,0,0,1,0,3,1,0,1,
  3,3,3,3,3,3,3,3,3,2,3,3,3,3,2,1,2,2,2,2,0,2,1,1,0,3,2,1,1,2,
  3,3,3,3,1,3,3,3,2,2,2,1,3,3,2,3,2,1,1,3,0,1,0,1,0,1,2,2,0,0,
  3,3,3,3,2,2,2,2,3,2,1,1,3,2,2,2,2,1,3,1,1,2,0,0,0,1,3,2,0,0,
  3,3,3,3,3,3,3,3,3,2,2,1,3,3,1,1,0,1,2,1,0,1,0,1,0,0,2,2,0,0,
  3,3,3,3,0,1,3,1,0,1,2,2,3,0,2,0,1,0,2,1,0,0,0,1,0,0,0,0,0,0,
  3,2,3,3,2,3,3,3,3,3,3,2,3,2,2,3,3,1,2,2,3,1,1,0,1,2,0,0,0,0,
  3,3,3,3,0,1,0,1,0,2,3,1,3,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,2,2,3,1,3,2,2,3,0,2,0,2,0,1,0,0,1,0,0,1,0,0,0,0,0,
  3,3,3,2,3,2,3,2,3,2,2,1,2,2,3,2,2,3,3,2,2,1,0,0,0,0,2,3,0,0,
  3,3,3,3,2,2,2,1,2,1,1,0,2,1,0,0,0,0,0,1,0,2,0,0,0,0,2,3,0,0,
  3,3,3,2,1,0,1,0,0,0,0,1,3,1,1,0,1,0,1,1,0,0,0,1,0,0,0,0,1,0,
  3,3,3,3,2,1,2,2,0,0,0,0,2,2,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,
};


const SequenceModel Iso_8859_3EsperantoModel =
{
  Iso_8859_3_CharToOrderMap,
  EsperantoLangModel,
  30,
  (float)0.9990018845726486,
  PR_FALSE,
  "ISO-8859-3",
  "eo"
};

const LanguageModel EsperantoModel =
{
  "eo",
  Unicode_CharOrder,
  60,
  EsperantoLangModel,
  30,
  3,
  (float)0.31985724199464655,
  19,
  (float)0.032423471354769064,
};
