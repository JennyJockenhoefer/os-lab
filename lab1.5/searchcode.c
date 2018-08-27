
#include <dirent.h>
#include <stdio.h>
#include <string.h>

#!/bin/sh

for file in *
  do 
    if grep -q .c $file
    then 
      echo $file 
      fi
    done
exit 0
