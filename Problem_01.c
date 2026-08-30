#include <stdio.h>

void namasta();
void bonjour();

int main(){
    printf("Are you Indian or French?(Enter f for French and i for Indian)\n");
    char ch;
    scanf("%c",&ch);
    if (ch=='i'){
        namasta();
    }
    else if (ch=='f'){
        bonjour();
    }
    else{
        printf("Invalid input.\n");
    }
    return 0;
}

void namasta(){
    printf("Namasta.\n");
}

void bonjour(){
    printf("Bonjour.\n");
}
