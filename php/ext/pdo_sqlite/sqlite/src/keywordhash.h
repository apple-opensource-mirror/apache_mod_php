/***** This file contains automatically generated code ******
**
** The code in this file has been automatically generated by
**
**     $Header: /repository/php-src/ext/pdo_sqlite/sqlite/src/Attic/keywordhash.h,v 1.2.2.1.2.4 2007/05/16 21:04:46 iliaa Exp $
**
** The code in this file implements a function that determines whether
** or not a given identifier is really an SQL keyword.  The same thing
** might be implemented more directly using a hand-written hash table.
** But by using this automatically generated code, the size of the code
** is substantially reduced.  This is important for embedded applications
** on platforms with limited memory.
*/
/* Hash score: 165 */
static int keywordCode(const char *z, int n){
  static const char zText[536] =
    "ABORTABLEFTEMPORARYADDATABASELECTHENDEFAULTRANSACTIONATURALTER"
    "AISEACHECKEYAFTEREFERENCESCAPELSEXCEPTRIGGEREGEXPLAINITIALLYANALYZE"
    "XCLUSIVEXISTSANDEFERRABLEATTACHAVINGLOBEFOREIGNOREINDEXAUTOINCREMENT"
    "BEGINNERENAMEBETWEENOTNULLIKEBYCASCADEFERREDELETECASECASTCOLLATE"
    "COLUMNCOMMITCONFLICTCONSTRAINTERSECTCREATECROSSCURRENT_DATECURRENT_TIMESTAMP"
    "LANDESCDETACHDISTINCTDROPRAGMATCHFAILIMITFROMFULLGROUPDATEIFIMMEDIATE"
    "INSERTINSTEADINTOFFSETISNULLJOINORDEREPLACEOUTERESTRICTPRIMARY"
    "QUERYRIGHTROLLBACKROWHENUNIONUNIQUEUSINGVACUUMVALUESVIEWHEREVIRTUAL"
  ;
  static const unsigned char aHash[127] = {
      91,  79, 106,  90,   0,   4,   0,   0, 113,   0,  82,   0,   0,
      94,  43,  75,  92,   0, 105, 108,  96,  89,   0,  10,   0,   0,
     112,   0, 116, 102,   0,  28,  47,   0,  40,   0,   0,  64,  70,
       0,  62,  19,   0, 104,  35, 103,   0, 107,  73,   0,   0,  33,
       0,  60,  36,   0,   8,   0, 114,  37,  12,   0,  76,  39,  25,
      65,   0,   0,  31,  80,  52,  30,  49,  20,  87,   0,  34,   0,
      74,  26,   0,  71,   0,   0,   0,  63,  46,  66,  22,  86,  29,
      68,  85,   0,   1,   0,   9, 100,  57,  18,   0, 111,  81,  98,
      53,   6,  84,   0,   0,  48,  93,   0, 101,   0,  69,   0,   0,
      15,   0, 115,  50,  55,   0,   2,  54,   0, 110,
  };
  static const unsigned char aNext[116] = {
       0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,  17,   0,   0,   0,   0,
       0,  11,   0,   0,   0,   0,   5,  13,   7,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,  42,   0,   0,   0,   0,   0,   0,
       0,  16,   0,  23,  51,   0,   0,   0,   0,  44,   0,  58,   0,
       0,   0,   0,   0,   0,   0,   0,  72,  41,   0,  24,  59,  21,
       0,  78,   0,   0,  67,   0,   0,  83,  45,   0,   0,   0,   0,
       0,   0,   0,   0,  38,  95,  97,   0,   0,  99,   0,  32,   0,
      14,  27,  77,   0,  56,  88,   0,   0,   0,  61,   0, 109,
  };
  static const unsigned char aLen[116] = {
       5,   5,   4,   4,   9,   2,   3,   8,   2,   6,   4,   3,   7,
      11,   2,   7,   5,   5,   4,   5,   3,   5,  10,   6,   4,   6,
       7,   6,   7,   9,   3,   7,   9,   6,   3,  10,   6,   6,   4,
       6,   3,   7,   6,   7,   5,  13,   2,   2,   5,   5,   6,   7,
       3,   7,   4,   4,   2,   7,   3,   8,   6,   4,   4,   7,   6,
       6,   8,  10,   9,   6,   5,  12,  12,  17,   4,   4,   6,   8,
       2,   4,   6,   5,   4,   5,   4,   4,   5,   6,   2,   9,   6,
       7,   4,   2,   6,   3,   6,   4,   5,   7,   5,   8,   7,   5,
       5,   8,   3,   4,   5,   6,   5,   6,   6,   4,   5,   7,
  };
  static const unsigned short int aOffset[116] = {
       0,   4,   7,  10,  10,  14,  19,  21,  26,  27,  32,  34,  36,
      42,  51,  52,  57,  61,  65,  67,  71,  74,  78,  86,  91,  94,
      99, 105, 108, 113, 118, 122, 128, 136, 142, 144, 154, 159, 164,
     167, 169, 169, 173, 177, 179, 184, 186, 188, 197, 200, 204, 210,
     216, 216, 219, 222, 226, 228, 229, 233, 240, 246, 250, 254, 261,
     267, 273, 281, 288, 297, 303, 308, 320, 320, 336, 340, 344, 350,
     351, 358, 361, 365, 370, 373, 378, 382, 386, 389, 395, 397, 406,
     412, 419, 422, 422, 425, 428, 434, 438, 442, 449, 453, 461, 468,
     473, 478, 486, 488, 492, 497, 503, 508, 514, 520, 523, 528,
  };
  static const unsigned char aCode[116] = {
    TK_ABORT,      TK_TABLE,      TK_JOIN_KW,    TK_TEMP,       TK_TEMP,       
    TK_OR,         TK_ADD,        TK_DATABASE,   TK_AS,         TK_SELECT,     
    TK_THEN,       TK_END,        TK_DEFAULT,    TK_TRANSACTION,TK_ON,         
    TK_JOIN_KW,    TK_ALTER,      TK_RAISE,      TK_EACH,       TK_CHECK,      
    TK_KEY,        TK_AFTER,      TK_REFERENCES, TK_ESCAPE,     TK_ELSE,       
    TK_EXCEPT,     TK_TRIGGER,    TK_LIKE_KW,    TK_EXPLAIN,    TK_INITIALLY,  
    TK_ALL,        TK_ANALYZE,    TK_EXCLUSIVE,  TK_EXISTS,     TK_AND,        
    TK_DEFERRABLE, TK_ATTACH,     TK_HAVING,     TK_LIKE_KW,    TK_BEFORE,     
    TK_FOR,        TK_FOREIGN,    TK_IGNORE,     TK_REINDEX,    TK_INDEX,      
    TK_AUTOINCR,   TK_TO,         TK_IN,         TK_BEGIN,      TK_JOIN_KW,    
    TK_RENAME,     TK_BETWEEN,    TK_NOT,        TK_NOTNULL,    TK_NULL,       
    TK_LIKE_KW,    TK_BY,         TK_CASCADE,    TK_ASC,        TK_DEFERRED,   
    TK_DELETE,     TK_CASE,       TK_CAST,       TK_COLLATE,    TK_COLUMNKW,   
    TK_COMMIT,     TK_CONFLICT,   TK_CONSTRAINT, TK_INTERSECT,  TK_CREATE,     
    TK_JOIN_KW,    TK_CTIME_KW,   TK_CTIME_KW,   TK_CTIME_KW,   TK_PLAN,       
    TK_DESC,       TK_DETACH,     TK_DISTINCT,   TK_IS,         TK_DROP,       
    TK_PRAGMA,     TK_MATCH,      TK_FAIL,       TK_LIMIT,      TK_FROM,       
    TK_JOIN_KW,    TK_GROUP,      TK_UPDATE,     TK_IF,         TK_IMMEDIATE,  
    TK_INSERT,     TK_INSTEAD,    TK_INTO,       TK_OF,         TK_OFFSET,     
    TK_SET,        TK_ISNULL,     TK_JOIN,       TK_ORDER,      TK_REPLACE,    
    TK_JOIN_KW,    TK_RESTRICT,   TK_PRIMARY,    TK_QUERY,      TK_JOIN_KW,    
    TK_ROLLBACK,   TK_ROW,        TK_WHEN,       TK_UNION,      TK_UNIQUE,     
    TK_USING,      TK_VACUUM,     TK_VALUES,     TK_VIEW,       TK_WHERE,      
    TK_VIRTUAL,    
  };
  int h, i;
  if( n<2 ) return TK_ID;
  h = ((charMap(z[0])*4) ^
      (charMap(z[n-1])*3) ^
      n) % 127;
  for(i=((int)aHash[h])-1; i>=0; i=((int)aNext[i])-1){
    if( aLen[i]==n && sqlite3StrNICmp(&zText[aOffset[i]],z,n)==0 ){
      return aCode[i];
    }
  }
  return TK_ID;
}
int sqlite3KeywordCode(const unsigned char *z, int n){
  return keywordCode((char*)z, n);
}
