/* File         : mesinkar.h */
/* Deskripsi    : Header ADT Mesin Kata */

#ifndef __MESINKATA__
#define __MESINKATA__

#include "../mesinkarakter/mesinkarakter.h"
#include "../word.h"

extern boolean endKata;
extern Word currentKata;

void ignoreBlank();

void startKata();

void advKata();

void salinKata();

#endif