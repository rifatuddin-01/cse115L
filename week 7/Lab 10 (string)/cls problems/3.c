#include <stdio.h>
#include <string.h>

void count(char arr[]);

int main()
{
    char s[1000];


    printf("Enter  the string : ");
    gets(s);

    count(s);

    return 0;

    }

void count(char arr[])
{
    int i,vowels=0,consonants=0;
    for(i=0;arr[i];i++)
    {
    	if((arr[i]>=65 && arr[i]<=90)|| (arr[i]>=97 && arr[i]<=122))
    	{

            if(arr[i]=='a'|| arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O' ||arr[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}


    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);


}
