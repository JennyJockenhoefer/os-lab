
#include <stdio.h> 
#include <unistd.h>
#define MAX LINE 80 /* The maximum length command */
int main(void) { 
  char *args[MAX LINE/2 + 1]; /* command line arguments */ 
  int should run = 1; /* flag to determine when to exit program */ 
  
  while (should run) { 
    printf("osh>"); 
    fflush(stdout);
    
	char* args [3];  //sets up array mit 3 Stellen
	string ls = "ls";
	args[0] = "ps"//array an der stelle 0 string ps
	args[2] = NULL; //array an der stelle 2 - ende 
        args[1] = "-ael" // stelle 1 string ps
   pid = fork();  //initialisierung vom fork prozess
   if(pid < 0) { // wenn kleiner 0 error
   perror("fork");
    if(pid == 0) {   //, creating child prozess
	if (execvp(argv[0], args )) { // execvp()  mit variable array
	 perror ("exec");
	}
   }

	
    if(pid == &) {
	wait(0);
	
}
	return 0;

	
/** 
* After reading user input, the steps are: 
* (1) fork a child process using fork() 
* (2) the child process will invoke execvp() 
* (3) if command included &, parent will invoke wait() */

  }
  return 0;
]
