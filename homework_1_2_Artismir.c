
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){
	char cl[10] ="clear";
	char ls[10] = "ls";
	char pwd[10] = "pwd";
	char top[10] = "top";
	char pstree[10] = "pstree";
	char ps[10] = "ps";
	puts("Введите команду без пробелов:");
	char f[10]; 
	scanf("%s", f);
	if (strcmp (f, cl)==0)
	  system("clear");
	else if (strcmp (f, ls)==0)
	  system("ls");
	else if (strcmp (f, pwd)==0)
	  system("pwd");
	else if (strcmp (f, top)==0)
	  system("top");
	else if (strcmp (f, pstree)==0)
	  system("pstree");
	else if (strcmp (f, ps)==0)
	  system("ps");
	else 
	
	  puts ("Такой команды ещё нет:(");    
	return 0;
}
