#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void print();
int main(int argc,char*  argv[])
{
if  (( argv[1] == "-h" ) || (argv[1] == "--help") || (argv[1] == NULL) )
  {
    print();
  }
else
{

int ammount;
    if ( argv[1] == NULL)
{
 ammount = 10 ;
}
else
{
     ammount = atoi(argv[1]);
}
    char string[ammount];
    srand(time(NULL));
int  limit = ammount + 1;
for( int i = 0; i < limit; ++i){
   string[i] = '0' + rand()%72; // starting on '0', ending on '}'
}
    printf("%s\n",string);
    }
//printf("%s", argv[1]);
    return 0;
}

void print()
{
printf (" help: \n This tool just print random strings  usefull for scripting \n Just give a argument of how many characters \n here an example: \n crand 32 will print 32 random strings\n");

}
