/* test_hash.cpp -- 哈希算法测试向量验证（RFC/标准向量） */
#include <stdio.h>
#include <string.h>

#include "include/TenHash.h"
#include "inc/md5.h"
#include "inc/sha1.h"
#include "inc/md2.h"
#include "inc/md4.h"
#include "inc/crc32.h"
#include "inc/adler32.h"
#include "inc/ripemd160.h"
#include "inc/ripemd128.h"
#include "inc/haval160.h"
#include "inc/haval128.h"
#include "inc/gosthash.h"

static int failures = 0;

static void hex(const unsigned char *p, int n, char *out) {
    for (int i = 0; i < n; i++)
        sprintf(out + i * 2, "%02x", p[i]);
    out[n * 2] = 0;
}

static void check_hash(const char *name, unsigned char *data, unsigned int len,
                       unsigned int (*fn)(unsigned char *, unsigned int, unsigned char *),
                       int dlen, const char *expect) {
    unsigned char out[64];
    char h[128];
    fn(data, len, out);
    hex(out, dlen, h);
    if (strcmp(h, expect) != 0) {
        printf("FAIL %s: got %s want %s\n", name, h, expect);
        failures++;
    } else {
        printf("PASS %s: %s\n", name, h);
    }
}

int main() {
    unsigned char empty[1] = {0};
    unsigned char abc[] = "abc";
    char h[300];
    unsigned int v;
    CCrc32 crc;
    CAdler32 adl;

    /* RFC 1321 MD5 */
    check_hash("md5(abc)", abc, 3, TenMd5, 16, "900150983cd24fb0d6963f7d28e17f72");
    check_hash("md5('')", empty, 0, TenMd5, 16, "d41d8cd98f00b204e9800998ecf8427e");

    /* RFC 1319 MD2 */
    check_hash("md2(abc)", abc, 3, TenMd2, 16, "da853b0d3f88d99b30283a69e6ded6bb");

    /* RFC 1320 MD4 */
    check_hash("md4(abc)", abc, 3, TenMd4, 16, "a448017aaf21d8525fc10ae87aa6729d");

    /* RFC 3174 SHA-1 */
    check_hash("sha1(abc)", abc, 3, TenSha1, 20,
               "a9993e364706816aba3e25717850c26c9cd0d89d");
    check_hash("sha1('')", empty, 0, TenSha1, 20,
               "da39a3ee5e6b4b0d3255bfef95601890afd80709");

    /* CRC-32 已知值：crc32("123456789") = 0xCBF43926 */
    unsigned char nine[] = "123456789";
    v = TenCrc32(nine, 9);
    if (v != 0xCBF43926u) {
        printf("FAIL crc32: got %08x want cbf43926\n", v);
        failures++;
    } else
        printf("PASS crc32: %08x\n", v);

    /* Adler-32：adler32(1, "Wikipedia") = 0x11E60398 */
    unsigned char wiki[] = "Wikipedia";
    v = TenAdler32(1, wiki, 9);
    if (v != 0x11E60398u) {
        printf("FAIL adler32: got %08x want 11e60398\n", v);
        failures++;
    } else
        printf("PASS adler32: %08x\n", v);

    /* RIPEMD-160（Bosselaers 测试向量） */
    check_hash("rmd160(abc)", abc, 3, TenRipeMd160, 20,
               "8eb208f7e05d987a9b044a8e98c6b087f15a0bfc");
    check_hash("rmd160('')", empty, 0, TenRipeMd160, 20,
               "9c1185a5c5e9fc54612808977ee8f548b2258d31");

    /* RIPEMD-128（Bosselaers 测试向量） */
    check_hash("rmd128(abc)", abc, 3, TenRipeMd128, 16,
               "c14a12199c66e4ba84636b0f69144c77");
    check_hash("rmd128('')", empty, 0, TenRipeMd128, 16,
               "cdf26213a150dc3ecb610f18f6b38b46");

    /* HAVAL-3 官方认证向量（Tcl TRF 归档 cert.data） */
    check_hash("haval160-3('')", empty, 0, TenHaval160, 20,
               "d353c3ae22a25401d257643836d7231a9a95f953");
    {
        unsigned char one_a[] = "a";
        unsigned char haval_word[] = "HAVAL";
        check_hash("haval160-3('a')", one_a, 1, TenHaval160, 20,
                   "4da08f514a7275dbc4cece4a347385983983a830");
        check_hash("haval160-3('HAVAL')", haval_word, 5, TenHaval160, 20,
                   "8822bc6f3e694e73798920c77ce3245120dd8214");
    }
    check_hash("haval128-3('')", empty, 0, TenHaval128, 16,
               "c68f39913f901f3ddf44c707357a7d70");
    {
        unsigned char one_a[] = "a";
        unsigned char haval_word[] = "HAVAL";
        check_hash("haval128-3('a')", one_a, 1, TenHaval128, 16,
                   "0cd40739683e15f01ca5dbceef4059f1");
        check_hash("haval128-3('HAVAL')", haval_word, 5, TenHaval128, 16,
                   "dc1f3c893d17cc4edd9ae94af76a0af0");
    }

    /* GOST R 34.11-94 标准测试向量（Saarinen gosttest.c） */
    {
        unsigned char t1[32] = {
            0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20,
            0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x2c,
            0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3d,
            0x33, 0x32, 0x20, 0x62, 0x79, 0x74, 0x65, 0x73
        };
        unsigned char d[32];
        char hexbuf[65];
        TenGostHash(t1, 32, d);
        hex(d, 32, hexbuf);
        if (strcmp(hexbuf,
                   "b1c466d37519b82e8319819ff32595e047a28cb6f83eff1c6916a815a637fffa") != 0) {
            printf("FAIL gosthash(t1): got %s\n", hexbuf);
            failures++;
        } else {
            printf("PASS gosthash(t1)\n");
        }
    }

    /* MD5 百万 'a'（RFC 1321 附录 A.5） */
    static unsigned char million[1000000];
    memset(million, 'a', sizeof(million));
    check_hash("md5(1000000a)", million, sizeof(million), TenMd5, 16,
               "7707d6ae4e027c70eea2a935c2296f21");

    (void)crc;
    (void)adl;
    (void)h;
    if (failures == 0)
        printf("ALL PASS\n");
    else
        printf("%d FAILURES\n", failures);
    return failures ? 1 : 0;
}
