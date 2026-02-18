#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<dirent.h>
int main()
{
	char d[100];
	int c,op;
	DIR *e;
	struct dirent*sd;
	printf("**MENU**\n");
	printf("1.create directory\n");
	printf("2.remove directory\n");
	printf("3.read directory\n");
        printf("enter your choice:");
        scanf("%d",&op);
        switch(op)
        {
          case 1:
		  printf("enter directory name:");
		  scanf("%s",d);
		  c=mkdir(d,0777);
		  if(c==-1)
		  printf("directory not created\n");
		  else
		  printf("directory created\n");
		  break;
          case 2:
		  printf("enter directory name:");
		  scanf("%s",d);
		  c=rmdir(d);
		  if(c==-1)
		  printf("director not removed");
		  else
		  printf("directory removed");
		  break;
          case 3:
		  printf("enter directory name to opean:");
		  scanf("%s",d);
		 e = opendir(d);
		 if(e==NULL)
		 printf("directory contents:\n");
		 while((sd = readdir(e))!=NULL)
		 printf("%s\t",sd->d_name);
		 closedir(e);
	     
	       break;
       default:
       printf("Invalid choice\n");
       return 0;
       }
  }     
          
        
        

