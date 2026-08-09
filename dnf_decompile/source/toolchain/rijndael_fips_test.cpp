#include "Rijndael.h"
#include <cstdio>
#include <cstring>

static void hex(const unsigned char* p, int n, char* out)
{
    for (int i = 0; i < n; i++) sprintf(out + i * 2, "%02x", p[i]);
    out[n * 2] = 0;
}
static int hx(char c)
{
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}
static void unhex(const char* s, unsigned char* out)
{
    for (int i = 0; s[i]; i += 2) out[i / 2] = (hx(s[i]) << 4) | hx(s[i + 1]);
}

struct Vec { const char* key; const char* pt; const char* ct; };
static const Vec vecs[] = {
    { "000102030405060708090a0b0c0d0e0f",
      "00112233445566778899aabbccddeeff",
      "69c4e0d86a7b0430d8cdb78070b4c55a" },
    { "000102030405060708090a0b0c0d0e0f1011121314151617",
      "00112233445566778899aabbccddeeff",
      "dda97ca4864cdfe06eaf70a0ec0d7191" },
    { "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f",
      "00112233445566778899aabbccddeeff",
      "8ea2b7ca516745bfeafc49904b496089" },
};

int main()
{
    int fail = 0;
    for (size_t v = 0; v < sizeof(vecs) / sizeof(vecs[0]); v++)
    {
        unsigned char key[32], pt[32], ct[32], enc[32], dec[32];
        int keylen = (int)strlen(vecs[v].key) / 2;
        unhex(vecs[v].key, key);
        unhex(vecs[v].pt, pt);
        unhex(vecs[v].ct, ct);

        char chain[32];
        memset(chain, 0, sizeof(chain));
        CRijndael r;
        r.Initialize((const char*)key, keylen, chain, keylen, 16, 0, 0);

        int rc = r.Encrypt((const char*)pt, (char*)enc, 16);
        char h1[64], h2[64];
        hex(enc, 16, h1);
        hex(ct, 16, h2);
        int enc_ok = (rc == 1 && memcmp(enc, ct, 16) == 0);
        printf("AES-%d encrypt: %s  expect %s  %s\n", keylen * 8, h1, h2,
               enc_ok ? "PASS" : "FAIL");
        if (!enc_ok) fail++;

        r.ResetChain();
        rc = r.Decrypt((const char*)enc, (char*)dec, 16);
        hex(dec, 16, h1);
        hex(pt, 16, h2);
        int dec_ok = (rc == 1 && memcmp(dec, pt, 16) == 0);
        printf("AES-%d decrypt: %s  expect %s  %s\n", keylen * 8, h1, h2,
               dec_ok ? "PASS" : "FAIL");
        if (!dec_ok) fail++;
    }

    // multi-block ECB round-trip (3 blocks of 16)
    {
        unsigned char key[16], data[48], enc[48], dec[48];
        unhex("2b7e151628aed2a6abf7158809cf4f3c", key);
        for (int i = 0; i < 48; i++) data[i] = (unsigned char)(i * 7 + 3);
        char chain[32];
        memset(chain, 0, sizeof(chain));
        CRijndael r;
        r.Initialize((const char*)key, 16, chain, 16, 16, 0, 0);
        r.Encrypt((const char*)data, (char*)enc, 48);
        r.ResetChain();
        r.Decrypt((const char*)enc, (char*)dec, 48);
        int ok = memcmp(data, dec, 48) == 0;
        printf("multi-block ECB roundtrip: %s\n", ok ? "PASS" : "FAIL");
        if (!ok) fail++;
    }

    // CBC round-trip (3 blocks)
    {
        unsigned char key[16], data[48], enc[48], dec[48];
        unhex("2b7e151628aed2a6abf7158809cf4f3c", key);
        for (int i = 0; i < 48; i++) data[i] = (unsigned char)(i * 13 + 1);
        char chain[32];
        memset(chain, 0, sizeof(chain));
        CRijndael r;
        r.Initialize((const char*)key, 16, chain, 16, 16, 1, 0);
        r.Encrypt((const char*)data, (char*)enc, 48);
        r.ResetChain();
        r.Decrypt((const char*)enc, (char*)dec, 48);
        int ok = memcmp(data, dec, 48) == 0;
        printf("multi-block CBC roundtrip:  %s\n", ok ? "PASS" : "FAIL");
        if (!ok) fail++;
    }

    printf(fail ? "RESULT: FAIL (%d)\n" : "RESULT: ALL PASS\n", fail);
    return fail ? 1 : 0;
}
