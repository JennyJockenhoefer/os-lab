#!/bin/bash  
directory=$1 
echo $directory #path user is giving

for dir in $(find $directory -type d );
  do
    echo " .h files in " $dir; 
  ls $dir/* .h; 
 done

for dir in $(find $directory -type d );
  do 
    echo " .c files in " $dir; 
  ls $dir/* .c; 
  
  done
  
