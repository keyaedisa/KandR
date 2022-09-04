#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXLINE 1000 //max length of 2nd dimension
#define SPACE ' '
#define TAB '\t'
#define TABSIZE 8

void lineSaver(char *(destinationArray)[MAXLINE]);
void printLines(char *(inputArray)[MAXLINE]);
void reverses();
int getsline(char s[],int lim);
void copy(char to[], char from[]);
void delSame(char *s1, const char *s2);
int any(const char*,const char*);
void intDecimalToBinary(unsigned x);

// Saves lines into array, line by line, with max 1000 length
void lineSaver(char *(destinationArray)[MAXLINE]){  
    int z, lineNumber = 0;
    char c;    
    while((c = getchar()) != EOF){    
        if(c != '\n'){
            destinationArray[lineNumber][z] = c;
            ++z;
        }
        if(c == '\n'){
            destinationArray[lineNumber][z] = '\n';        
            ++lineNumber;
            z = 0;
       }
    }
    destinationArray[lineNumber][0] = '\0';
}
// Prints lines from array, line by line, with max 1000 length
void printLines(char *(inputArray)[MAXLINE]){
    printf("\nStored lines\n\n");
    for(int x = 0; inputArray[x][0] != '\0'; ++x){
        printf("Line %d reads:\n", x+1);
        puts(inputArray[x]);
        printf("\n\n");
    }
}

// i think this reverses strings. idek
void reverses(){
    char c;
    char currentLine[MAXLINE];
    
    for(int x = 0; (c = getchar())!= EOF; ++x){
        if(c != '\n'){
            currentLine[x] = c;
        }
        if(c == '\n'){
            --x;
            printf("\n");
            while(x >= 0){
                printf("%c", currentLine[x]);
                --x;
            }
            printf("\n\n");
        }
    }    
}

/* getline:  read a line into s, return length  */
int getsline(char s[],int lim){
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i] = c;
    }    
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

// deletes any charcter in s1 that is also in s2
void delSame(char *s1, const char *s2){
    int i, j, k;
    k = 0;
    while(s2[k] != '\0'){
        for(i = j = 0; s1[i] != '\0'; i++)
            if(s1[i] != s2[k])
                s1[j++] = s1[i];
        s1[j] = '\0';
        k++;   
    }    
}

// returns the first position in s1 that has any character thats in s2, returns -1 if  nothing match
int any(const char *s1,const char *s2){
    int ret = -1;
    int i, k;
    i = 0;
    do { for(k = 0; s1[k] != '\0'; k++)
            if(s1[k] == s2[i]){
                ret = k;    
                break;
            }
    } while(s2[++i] != '\0');
    return ret;
}

// turns unsigned int decimal into binary
void intDecimalToBinary(unsigned x){
    int binary[16];
    for(int z = 0; z < sizeof(binary)/sizeof(int); z++)
        binary[z] = 0;
    int i;
    i = 15;
    while(x != 0){
        if(x % 2 != 0){
            binary[i] = 1;
            i--;
        }
        else { 
            binary[i] = 0;
            i--;
        }
        // printf("%d\n",x); for debugging, checks x each go around
        x = x / 2;
    }
    for(int j = 0; j < sizeof(binary)/sizeof(int); j++){
        if(j % 4 == 0 && j != 0)
            printf(" ");
        printf("%d",binary[j]);
    }
    printf("\n");
}