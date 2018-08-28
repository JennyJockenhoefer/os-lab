#!/bin/bash
#first

for dir in $(find -type d );
  do
    echo " .h files in " $dir; 
  ls $dir/* .h; 
 done
 
for dir in $(find -type d );
  do 
    echo " .c files in " $dir; 
  ls $dir/* .c; 
  
  done
