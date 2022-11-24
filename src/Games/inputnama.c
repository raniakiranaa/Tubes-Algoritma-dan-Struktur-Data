#include <stdio.h>
#include "inputnama.h"

void inputName(Map *M, int score)
{
    boolean repeat = true;
    while (repeat){
        printf("Masukkan nama: ");
        Word name;
        boolean valid = wordInput(&name, 1, N_MAX);

        if (valid){
            if (IsMemberMap(*M, name)){
                printf("Nama sudah ada di daftar scoreboard. \n");
            } else {
                InsertMap(M, name, score);
                repeat = false;
            }
        } else {
            if (wordLength(name) == 0){
                printf("Nama tidak boleh kosong. \n");
            } else {
                printf("Nama terlalu panjang. \n");
            }
        }
    }
}

// int main(){
//     Map m;
//     CreateEmptyMap(&m);
//     inputName(&m);
// }

// compile main nya : gcc Games/inputnama.c ADT/map/map.c ADT/word/word.c Misc/ascii/ascii.c Misc/io/io.c ADT/word/mesinkarakter/mesinkarakter.c ADT/word/mesinkata/mesinkata.c ADT/list/array.c -o driver
// ini utk hangman (sementara aja disini) : gcc src/Games/hangman/hangman.c src/Utility/splash.c src/Games/random.c src/Games/hangman/man.c src/ADT/list/array.c src/ADT/word/mesinkata/mesinkata.c src/ADT/word/mesinkarakter/mesinkarakter.c src/ADT/word/word.c src/Misc/ascii/ascii.c src/Misc/io/io.c src/Games/inputnama.c src/ADT/map/map.c -o driver