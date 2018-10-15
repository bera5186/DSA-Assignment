#include <stdio.h> // for i/o
#include <ctype.h> // for string processing


void readbyword(FILE *fp);
void removepunct(FILE *fp);
char lower(char c);

int main(){
    FILE *fp; // file pointer
    int choice;

    fp = fopen("file.txt","r"); // opens the file.txt file , "r" specifies to open in read mode

    printf(" \n 1. Print file word by Word\n 2. Strip whitespace and punctuation & print in lowercase\n\n Enter your choice :  ") ;
    scanf("%d",&choice);

    switch(choice){
        case 1: readbyword(fp);
                break;
        case 2: removepunct(fp);
                break;
        default : printf("enter correct !! bye");
            
    }
    
    fclose(fp); // closing of file
    return 0;
}
void readbyword(FILE *fp){ // function to read file and output each word
    char c;
    while((c = fgetc(fp)) != EOF){
        if(c == ' ' || c == '\n')
		{
			printf("\n");
			
		}
		else
		{
			printf("%c", c);
		}
    }
}

void removepunct(FILE *fp){
    
    char str;
    while((str = fgetc(fp)) != EOF){
        // this line is checking if str is not a punctuation or whitespace character 
        if(!ispunct(str) && str!=' ' && str!='\n' && str!='\t'  && str!='\v' && str!='\f' && str!='\r'){
            str = lower(str);
            printf("%c",str);
        }
        else{
            // if whitespace or punctuation in encountered it prints newline
            printf("\n");
        }
    }
    
}
char lower(char c){ // function to return the lowercase of passed argument
    if(islower(c)){
        return c;
    }
    else{
        return tolower(c);
    }
}