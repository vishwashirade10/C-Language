
#include<stdio.h>

//#define: Used to define a macro.
#define PI 3.14159265359

//#undef: Used to undefine a macro.
//#undef PI

//#include: Used to include a file in the source code program.
#include<string.h>
#include<time.h>

//ifdef: Used to include a section of code if a certain macro is defined by #define.
#ifdef PI
    //#define msg "PI is defined"
    #define PI 4.1
#endif

//#ifndef: Used to include a section of code if a certain macro is not defined by #define.
#ifndef MAX
    #define MAX 100
#endif

#define MIN 21
//#if: used to check the macro condition
#if MIN > 20 
    #define msg "MIN is Greater than 20"
//#elif: used to check the macro condition if #if fails
#elif MIN == 20
    #define msg "MIN is equal than 20"
//#else: used to run code if #if  & #elif fails
#else
    #define msg "MIN is less 20"
//#endif used to terminate #if #ifdef #ifndef
#endif


//#error: Used to generate a compilation error message.
//#error "error by user"

//#line: Used to modify line number and filename information.
//#line 34 "pre.c"



int main(){
    
    printf("PI=%.13lf msg=%s\n",PI,msg);
    printf("area of circle=%f\n",(PI*5*5));

    char str[100]="circle";
    printf("str len=%d\n",strlen(str));

    printf("MAX=%d\n",MAX);
    //#error "error by user";
    printf("msg=%s\n",msg);
    // #__TIME__:now();
    return 0;
}
