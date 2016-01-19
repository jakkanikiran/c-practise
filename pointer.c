#include<string.h>
#include<sys/types.h>
#include<sys/dir.h>

int search(char*file, char*dir){
	DIR *dirptr=opendir(dir);
	struct dirent *entry=readir(dirptr);
	while(entry!=NULL) {
	if(strlen(entry->d_name)==strlen(file)&&(strcmp(entry->d_name,file)==0)
		return 0;
	entry=readdir(dirptr);
	}
	return 1;
}
