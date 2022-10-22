/*
 * Date:      2022-10-22
 * Purpose:   Just a simple cli skeleton
 *            to nuild your own cli util 
 *            in C.
 */ 

#include <stdio.h>
#include <string.h>

/* ====================== */
/*  PROTOTYPES            */
/* ====================== */ 
void info();
void help();
void greet( char *name);

/* ====================== */
/*  MAIN                  */
/* ====================== */

/* 
    Hint:
    - argc      = count of arguments passed in
    - *argcv[]  = pointer to array of arguments passed to program while running
*/ 

int main( int argc, char *argv[] )
{
 
  /* checks if param passed in*/
  
  // 1st param = util name itself
  if( argc == 1 )  
  {
    printf( "Util name: " );
    printf( "%s\r\n", argv[0] ); 
  }
 
  // 2nd param = 1st argument
  if( argc == 2 )  
  {
    if( strcmp( argv[1], "-h" ) == 0 ) /* help - called with no argument */
      help();
    else if( strcmp( argv[1], "--help" ) == 0 ) /* help - called with no argument */
      help();
    else 
      greet( argv[1] ); /* for 1st argument */
  }
  if( argc == 3)    
}

/* ====================== */
/*  FUNCTIONS             */
/* ====================== */
void info()
{
  printf( "Welcome to <utilname>!\r\n" );
  printf( "Type <utilname> -h to show all options.\r\n" );
}

void help()
{
  printf( "-h | --help - Show help \r\n" );
}

void greet( char *name)
{
  printf( "Hello %s\r\n", name );
}
