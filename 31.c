#include <stdio.h>
int main()
{
   char ch;
   unsigned int long linecount, wordcount, charcount;
   int u;
   linecount=0;
   wordcount=0;
   charcount=0;
   while((ch=getc(stdin))!=EOF){
    if (ch !='\n') {++charcount;}
    if (ch==' ' || ch=='\n') {++wordcount;}
    if (ch=='\n') {++linecount;}
     }
   if(charcount>0){
    ++wordcount;
    ++linecount;
   }
   printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
   return 0;
}
