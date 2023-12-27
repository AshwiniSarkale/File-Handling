/*
4 : To write the data into the file

int write(int fd, char *Buffer, int size);

Buffer : Its a base address of character array which contains the data that we want to write 
Size : Number of bytes that we want to write

return value is number of bytes successfully written into the file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Angular web development";

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
         iRet = write(fd,Arr,23);
        printf("%d bytes gets successfully written into the file\n",iRet);

        close(fd);
    }

    return 0;
}