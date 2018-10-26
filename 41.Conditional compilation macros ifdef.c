#include <conio.h>
#include <stdio.h>


#define INTEL
#undef INTEL



int main() 
{
    #ifndef INTEL
    printf("Codes for the non intel Pc");
    #endif 

    return 0; 
}

/*
#ifdef macro_name
statements;
#endif


#ifndef macro_name ;if not defined;da li je macro definisan
statements;
#endif

#undif -undefines defined macros defined using #define


ako macro ime nije definisano statements nece biti kompajlirane


*/