//前置處理器#define
#include <stdio.h>

#define BEGIN {             
#define END }
#define WEL "Hello c!\n"

#define WORDS "To be or not to be,\
that is a question.\n "                /*字串太長可以用\承接,但後面不能有空格或縮排*/

int main()
BEGIN               //BEGIN被定義成 {
    printf(WEL);
    printf(WORDS);    //WEL被定義成字串"Hello c!"
    return 0;
END