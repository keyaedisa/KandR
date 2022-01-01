#include  <stdio.h>

void main(){
    int c, blanks, tabs, newLines;
    blanks = 0;
    tabs = 0;
    newLines = 0;
        while((c = getchar()) != EOF){
            if(c == ' ')
                ++blanks;
            if(c == '\t')
                ++tabs;
            if(c == '\n')
                ++newLines;
         //printf("%3d %6d %9d", blanks, tabs, newLines);  
          printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newLines);
        }
        
    

     
}