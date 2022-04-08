#include "stdio.h"


char* commands[5][10] = {"alias", "help", "amycare", "claracare", "vikacare"};

int len(char* _str)
{
    int leng = 0;
    while(*_str++)
        leng++;
    return leng;
}

void find_matches(char* cmd)
{

}

int main(int argc, char* argv[])
{

}
