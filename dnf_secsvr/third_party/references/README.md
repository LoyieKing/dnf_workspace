# 公版参考实现归档（用于闭源库复刻的转录基准）

这些文件仅用于 `tencrypt_new` 复刻时对照/转录，不直接编译进工程。

| 文件 | 内容 | 来源与许可 |
|---|---|---|
| rfc1319.txt | MD2 参考实现 + PI 置换表 | RFC 1319（公版） |
| rfc1320.txt | MD4 参考实现 | RFC 1320（公版） |
| rfc1321.txt | MD5 参考实现 | RFC 1321（公版） |
| rfc3174.txt | SHA-1 参考实现 | RFC 3174（公版） |
| rmd160.c/.h | RIPEMD-160 官方参考 | Antoon Bosselaers, ESAT-COSIC（可自由使用） |
| rmd128.c/.h | RIPEMD-128 官方参考 | 同上 |
| haval_ref.c/.h | HAVAL V.1 参考（3/4/5 轮，128~256 位） | Calyptix/Yuliang Zheng（BSD 式许可） |
| botan_gost.cpp | GOST 34.11 哈希（含 R3411_CryptoPro 表） | Botan（Simplified BSD） |

下载地址记录在 `docs/df_secsvr_thirdparty_restoration.md`。
