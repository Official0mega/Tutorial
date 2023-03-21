Preprocessor Commands in C
In C programming language, preprocessor directive is a step performed before the actual source code compilation. It is not part of the compilation. Preprocessor directives in C programming language are used to define and replace tokens in the text and also used to insert the contents of other files into the source file.

When we try to compile a program, preprocessor commands are executed first and then the program gets compiled.

Every preprocessor command begins with # symbol. We can also create preprocessor commands with parameters.

Following are the preprocessor commands in C programming language...

#define
#define is used to create symbolic constants (known as macros) in C programming language. This preprocessor command can also be used with parameterized macros.

Example Program
#include<stdio.h>
#include<conio.h>

#define PI 3.14	

#define SQR(x) x*x	//Parameterized Macro

void main(){

   double radius, area ;
   clrscr() ;

   printf("Enter the radius: ");
   scanf("%ld",&radius);
   
   area = PI * SQR(radius) ;
   
   printf("area = %ld",area);
   
   getch();
}

#undef
#undef is used to destroy a macro that was already created using #define.

#ifdef
#ifdef returns TRUE if the macro is defined and returns FALSE if the macro is not defined.

#ifndef
#ifndef returns TRUE if the specified macro is not defined otherwise returns FALSE.

#if
#if uses the value of specified macro for conditional compilation.

#else
#else is an alternative for #if.

#elif
#elif is a #else followed by #if in one statement.

#endif
#endif is used terminate preprocessor conditional macro.

#include
#include is used to insert specific header file into C program.

#error
#error is used to print error message on stderr.

#pragma
#pragma is used to issue a special command to the compiler.

In C programming language, there are some pre-defined macros and they are as follows...

__ DATE __ : The current date as characters in "MMM DD YYYY" format.

__ TIME __ : The current time as characters in "HH : MM : SS" format.

__ FILE __ : This contains the current file name.

__ LINE __ : This contains the current line number.

__ STDC __ : Defines 1 when compiler compiles with ANSI Standards.
