#include <stdio.h>

int main() {
    int a;
    printf("Apologies for the confusion! Here's the translation of your message into English:Please enter the ramen you want to eat:\n1-Shin Ramyeon - Multi (Nongshim)\n2-Multi - Jjapagetti (Jajang) - (Nongshim)\n3-Neoguri - Multi (Nongshim)\n4-Ojingeo Jjamppong - Multi (Nongshim)\n5-Mild Jin Ramen - Multi (Ottogi)\n6-Spicy Jin Ramen - Multi (Ottogi)");
    scanf("%d", &a);

    switch(a) {
        case 1 :
            printf("Give me Shin Ramyeon.");
            break;
        case 2 :
        	printf("Give me Multi - Jjapagetti.");
        	break;
        case 3 :
        	printf("Give me Neoguri - Multi.");
        	break;
        case 4 :
        	printf("Give me Ojingeo Jjamppong - Multi.");
        	break;
        case 5 :
        	printf("Give me Mild Jin Ramen - Multi.");
        	break;
        default :
        	printf("Give me Spicy Jin Ramen - Multi.");
        }
    }