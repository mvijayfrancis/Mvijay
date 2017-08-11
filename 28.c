int char ch;
int i;
clrscr();
void main(){
printf("Print 1 to 5 again and again");
while(1){
for(i=1;i<=5;i++)
     printf("\n%d",i);
    ch=getch();
    if(ch=='Q')// Q for Quit
     exit(0);
    getch();
    }
