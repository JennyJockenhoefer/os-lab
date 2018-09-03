
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
	args[0] = "ps"//array an der stelle 0
	args[2] = NULL; //array an der stelle 1 endet hier 
        args[1] = "-ael"
   pid = fork();
   if(pid < 0) {
   perror("fork");
    if(pid == 0) {   //kid
	if (execvp(argv[0], args ) == <0)
	{ perror ("exec");
	}
   }

	
    if(pid == &) {
	wait(0);
	cout << "parend:" << pld << endl; 
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
