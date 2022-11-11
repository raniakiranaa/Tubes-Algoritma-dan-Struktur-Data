#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "playGame.h"
// #include "../../Games/rng/rng.h"
// #include "../../Games/dinerdash/dinerdash.h"
// #include "../../Games/battleship/battleship.h"

void playGame(Queue *Q, List L)
{
    if (IsEmpty(*Q)){
        printf("Antrian Anda kosong.\n");
    } else {
        printf("Berikut adalah daftar Game di dalam antrian Anda.\n");
        displayQueue(*Q);
        printf("\n");

        // jadinya pake idx apa string?
        if (isSameWord(Front(*Q), stringToWord("RNG")) || isSameWord(Front(*Q), stringToWord("Diner DASH")) || isSameWord(Front(*Q), stringToWord("Battleship"))){
            printf("Loading ");
            printWord(Front(*Q));
            printf(" ...\n");
            if (isSameWord(Front(*Q), stringToWord("RNG"))){
                // rng();
                printf("jalan RNG\n");
            } else if (isSameWord(Front(*Q), stringToWord("Diner DASH"))){
                // DinerDash();
                printf("jalan Diner DASH\n");
            } else if (isSameWord(Front(*Q), stringToWord("Battleship"))){
                // Battleship();
                // fungsi utamanya mana?
                printf("jalan Battleship\n");
            }
        } else if (isSameWord(Front(*Q), stringToWord("EIFFEL TOWER")) || isSameWord(Front(*Q), stringToWord("RISEWOMAN")) || isSameWord(Front(*Q), stringToWord("DINOSAUR IN EARTH"))){
            // Game di file config default selain RNG dan diner DASH
            printf("Game ");
            printWord(Front(*Q));
            printf(" masih dalam maintenance, belum dapat dimainkan.\n");
            printf("Silahkan pilih game lain.\n");
        } else {
            // tidak ada di spek game, atau hasil createGame
            printf("Loading ");
            printWord(Front(*Q));
            printf(" ...\n");
            printf("GAME OVER\n");
            srand(time(NULL));
			int r = rand();
			printf("Score: %d\n", r);
        }

        QElType x;
        dequeue(Q, &x);
    }
}

// int main()
// {
//     List L;
//     createList(&L);
//     insertLast(&L, stringToWord("RNG"));
//     insertLast(&L, stringToWord("Diner DASH"));
//     insertLast(&L, stringToWord("DINOSAUR IN EARTH"));
//     insertLast(&L, stringToWord("RISEWOMAN"));
//     insertLast(&L, stringToWord("EIFFEL TOWER"));
//     insertLast(&L, stringToWord("Battleship")); 
//     insertLast(&L, stringToWord("Tetris"));
//     displayList(L);
//     Queue Q;
//     createQueue(&Q);
//     enqueue(&Q, stringToWord("Tetris"));
//     enqueue(&Q, stringToWord("Diner DASH"));
//     enqueue(&Q, stringToWord("RNG"));
//     playGame(&Q, L);
//     displayQueue(Q);
//     return 0;
// }

// compile: gcc utility/playGame/playGame.c utility/queuegame/queueGame.c utility/listGame/listGame.c ADT/list/array.c ADT/queue/queue2.c ADT/word/mesinkata/mesinkata.c ADT/word/mesinkarakter/mesinkarakter.c ADT/word/word.c Misc/ascii/ascii.c -o driver