#define private public
#include "inc/des.h"
#undef private
#include "include/TenCrypt.h"
#include <stdio.h>
#include <string.h>

ITsLocal * CreateTsLocal() { return 0; }

static void dump(const unsigned char *p, int n) {
    for (int i = 0; i < n; i++)
        printf("%02x", p[i]);
    printf("\n");
}

int main() {
    printf("start\n"); fflush(stdout);
    unsigned char key[8] = {0x01,0x23,0x45,0x67,0x89,0xab,0xcd,0xef};
    unsigned char blk[8] = {0x00,0x11,0x22,0x33,0x44,0x55,0x66,0x77};
    unsigned int KnL[32];

    CDES c;
    printf("ctor done\n"); fflush(stdout);
    c.DesKey(key, false, KnL);
    printf("deskey done\n"); fflush(stdout);
    printf("KnL enc: ");
    dump((unsigned char*)KnL, 128);
    c.DesKey(key, true, KnL);
    printf("KnL dec: ");
    dump((unsigned char*)KnL, 128);

    c.DesKey(key, false, KnL);
    c.DesBase(KnL, blk, blk);
    printf("enc blk: ");
    dump(blk, 8);
    unsigned char blk2[8] = {0x00,0x11,0x22,0x33,0x44,0x55,0x66,0x77};
    c.DesKey(key, true, KnL);
    c.DesBase(KnL, blk, blk2);
    printf("dec blk: ");
    dump(blk2, 8);
    return 0;
}
