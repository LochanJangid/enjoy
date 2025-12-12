#include <stdio.h>
#include <string.h> // require for use strlen

int points(char *myWord, int length);

int main(){
    
    int length1 = 0;
    char word1[length1];
    printf("PLAYER 1:");
    scanf("%s", word1);
    length1 = strlen(word1);
    
    int length2 = 0;
    char word2[length2];
    printf("PLAYER 2:");
    scanf("%s", word2);
    length2 = strlen(word2);
    
    int a = points(word1, length1);
    int b = points(word2, length2);

    if(a > b){
        printf("PLAYER 1 WINS !");
    }
    else if(a < b){
        printf("PLAYER 2 WINS !");
    }else{
        printf("TIE !");
    }
}

int points(char *myWord, int length){
    
    int point = 0; 
    
    for(int i = 0; i < length; i++){

        if(myWord[i] == 'A' || myWord[i] == 'E' || myWord[i] == 'I' || myWord[i] == 'L' || myWord[i] == 'N' || myWord[i] == 'O' || myWord[i] == 'R' ||  myWord[i] == 'S' || myWord[i] == 'T' || myWord[i] == 'U'){
            point += 1;
        }
        else if(myWord[i] == 'D' || myWord[i] == 'G'){
            point += 2;
        }
        else if (myWord[i] == 'B' || myWord[i] == 'C' || myWord[i] == 'M' || myWord[i] == 'P'){
            point += 3;
        }
        else if(myWord[i] == 'F' || myWord[i] == 'H' || myWord[i] == 'V' || myWord[i] == 'W' || myWord[i] == 'Y'){
            point += 4;
        }
        else if(myWord[i] == 'K'){
            point += 5;
        }
        else if(myWord[i] == 'J' || myWord[i] == 'X'){
            point += 8;
        }
        else{
            point += 10;
        }
    }
    return point;
}
