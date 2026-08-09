# secsvr 三方库还原阶段报告（第一批）

生成时间：2026-08-09

本文档记录 secsvr 三件套还原中**三方库阶段**的进展：开源库版本确认与 vendor 化、
闭源库（tsf4g TDR、tencrypt_new）的复刻方法与首批成果。共享库（zenlib/protocol/
framework）与服务代码的还原以本阶段产物为前置。

## 1. 开源三方库（版本已确认）

| 库 | 版本 | 来源（官方） | 存放 | 二进制证据 |
|---|---|---|---|---|
| rapidxml | **1.13** | SourceForge rapidxml-1.13.zip | `third_party/rapidxml-1.13/` + `import/include/opensource/rapidxml/` | include 闭包 3 头；RAPIDXML_PARSE_ERROR 宏族 |
| mysqlclient | **5.0.92** | downloads.mysql.com mysql-5.0.92.tar.gz | `third_party/mysql-5.0.92/` + `import/include/opensource/mysqlclient/` | MYSQL_VERSION_ID=50092（.debug_macinfo） |

- `mysql_version.h` 为 configure 生成文件，已按 5.0.92 默认值生成到
  `mysql-5.0.92/include-generated/`（其余 6 个被引用头直接来自源码包 `include/`）。
- 原始发布包（zip/tar.gz）保留在 `third_party/` 作溯源。
- `import/include/` 镜像使桩源码 `#include "import/include/..."` 可直接编译。

## 2. 闭源库判定

### 2.1 tsf4g TDR/TBus 运行库

- aressky/TDR 与 randyliu/TDR 均为 **TDR 编译器**（C 语言），不含运行库头；
  randyliu 原仓库已下架。tencentyun/tsf4g 为 Go 版公共库。aressky/TSF4G 为框架本体，
  只有 `.tdr` 协议文件。
- TDR 运行库头（`tdr.h`、`tdr_error.h` 等）属于 **tsf4g base SDK**，仅以二进制形式分发
  （TcaplusDB SDK），**无公开源码** → 判定为闭源，需复刻。
- 二进制内证据：`tsf4g_tdr::` 命名空间 87 个函数（TdrBufUtil/TdrXmlFile/TdrTypeUtil 等），
  类型全部声明在**项目自己的** `src/protocol/common/Tdr*.h`（SDK 运行库以源码形式并入
  项目树），因此复刻主体是 `protocol/common` 的 Tdr* 头 + 实现（见阶段二）。

### 2.2 tencrypt_new 加密库

- 独立工程（`/data/yunfeiyang/dev/branch/src/common/tencrypt_new`，GCC 4.1.2），
  无公开源码 → **自行复刻**。
- 二进制内证据：59 个 CU（secagent），gunnersvr/zergsvr 仅链接 12 个哈希子集。

## 3. 头文件重建（工具 + 覆盖）

新增 `toolchain/gen_headers.py`，修复了旧桩生成器的三个缺陷：
1. 无 `DW_AT_decl_file` 的 class/enum 定义 DIE 用子 DIE（方法声明）回填归属；
2. tencrypt_new 路径归一化（`.../tencrypt_new/src/../inc/x.h` → `inc/x.h`）；
3. `src/...` ↔ `output/.../release/include/...` 双路径镜像 + 由 .cpp 定义推断
   头文件函数声明（GCC 4.1 不为头文件自由函数发声明 DIE）。

重建结果（secagent 树）：`inc/` 56/56 有类型，`include/TenCrypt.h` 1/1，
`src/` 80/124、`output/` 80/149（其余为宏头/预定义头/未实例化模板，DWARF 无类型）。
gunnersvr/zergsvr 树已同步重建（203/239 个头）。

类型名按二进制 mangled 名校正（如 `MD4_CTX`、`__md2`、`_SHA1_CTX`、`md5_state_s`），
保证符号级一致。

## 4. tencrypt_new 复刻进展（第一批：哈希族）

存放：`tencrypt_new/`（独立工程布局：`inc/`、`include/`、`src/`、Makefile、test）。

### 已实现并通过测试向量

| 文件 | 算法 | 参考实现 | 验证 |
|---|---|---|---|
| md5.cpp | MD5 | L. Peter Deutsch 公版（RFC 1321） | abc/空串/百万 a 全过 |
| sha1.cpp | SHA-1 | Steve Reid 公版（RFC 3174），CSha1 类封装 | abc/空串全过 |
| md2.cpp | MD2 | RFC 1319 附录（PI 置换表） | abc 过 |
| md4.cpp | MD4 | RFC 1320 附录 | abc 过 |
| crc32.cpp | CRC-32 | 标准表（0xEDB88320） | "123456789"→0xCBF43926 |
| adler32.cpp | Adler-32 | zlib 算法 | "Wikipedia"→0x11E60398 |
| ripemd160.cpp | RIPEMD-160 | Bosselaers 官方参考，类封装 | abc/空串过 |
| ripemd128.cpp | RIPEMD-128 | Bosselaers 官方参考，类封装 | abc/空串过 |
| haval128.cpp / haval160.cpp | HAVAL 128/160（3 轮） | 公版宏结构（Fphi_1/2/3 等） | Tcl TRF 官方认证向量 3 组全过 |
| gosthash.cpp | GOST R 34.11-94 | Saarinen 官方参考（S 盒 + compress/bytes） | gosttest t1 向量过 |
| TenHash.cpp | Ten* 封装 | 11/11（Md5/Md2/Md4/Sha1/Crc32/Adler32/RipeMd160/RipeMd128/Haval128/Haval160/GostHash） | 同上 |

### 符号级验收（对照 secagent 二进制 nm）

- **哈希族 104/104 个符号与二进制 mangled 名完全一致，零缺失**
  （Ten* 11 + 类成员 89 + md5_* 4；含 C1/C2/D1/D2、`_SHA1_CTX`、`MD4_CTX`、
  `__md2`、`md5_state_s` 类型名）。
- 复刻中发现并修正的 ABI 细节：
  - `md5_init/append/finish` 在二进制中为 **extern "C"**（unmangled）；
  - `md5_process` 为 C++ 链接（mangled `_Z11md5_processP11md5_state_sPKh`）；
  - `Ten*` 为 C++ 链接（`_Z6TenMd5PhjS_` 等）。
- 剩余差异仅为 GCC 13 的 `.cold` 克隆段（编译器产物，非代码差异）。

### HAVAL 参考镜像缺陷记录

- milahu/haval（GitHub 镜像）编译输出与官方认证数据不符（"" 输入
  haval160-3 应为 d353c3ae...，镜像输出不同），判定该镜像实现有缺陷，弃用。
- 采用 Tcl TRF 归档内嵌的官方认证向量：""/"a"/"HAVAL" × 128/160（3 轮），
  已全部通过；认证数据存 `third_party/references/haval_cert_data.txt`。
- GOST 采用 Saarinen 原版（`/tmp/retter_gosthash.c`，S 盒表 +
  compress/bytes/reset/final），gosttest.c 官方向量通过。

### 已知推断（待反汇编核对）

- `Ten*` 哈希函数返回值语义（现实现返回 0）；
- `CMd2::md2_init` 的 `magic` 常量值；
- 这些不影响哈希输出正确性，但逐字节还原时需要从二进制提取确认。

## 5. 后续顺序

1. ✅ 哈希族 11/11 完成（2026-08-09 晚，符号级 104/104 命中）；
2. 对称加密族 47 个（TenCrypt/TencBase + twofish/des 系列/blowfish/rc*/rijndael 等）；
3. 共享库：zenlib（40~44 CU）→ protocol/common（12~14 CU）→ framework（13~15 CU），
   头文件已重建（§3），按 .cpp 桩逐函数补实现；
4. 服务代码：gunnersvr（9 CU）→ zergsvr（15 CU）→ secagent（16 CU + formmog 协议）；
5. 每单元沿用本报告 §4 的验收方法（符号命中 + 测试向量 + 助记符重叠）。

## 关联材料

- 构建重构报告：`df_secsvr_build_recon.md`（三方库清单与依赖）
- 头文件重建工具：`../toolchain/gen_headers.py`
- 加密库复刻：`../tencrypt_new/`（README 含状态矩阵）
- 三方库 vendor：`../third_party/`
