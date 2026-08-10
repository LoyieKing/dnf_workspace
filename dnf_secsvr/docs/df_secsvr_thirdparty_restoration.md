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

## 6. 对称加密族进度（2026-08-09 续）

第二阶段对称加密族已按“二进制即 oracle”方法完成 **12 个新算法**并逐字节验证：

| 算法 | 结论 |
|---|---|
| MARS | 加解密为 Gladman 标准宏；setkey 完全自定义（15 项 t_key + IM1/IM2/IM7/I4M 表驱动置换 + 4 轮外层 + gen_mask 无 bit31 修补） |
| Diamond2 Lite | AC 公版结构；Init 固定分配 Ccitt32Table/s/si，setkey 不分配；keyrand 无 sbox；Diamond 包装固定 (key16,3轮,8块) |
| FROG | AC 公版 make_perm/make_ikey；SetKey 只用 sim_key（无 loc_key）；余数交 CreateTsLocal()->Seattos |
| HPC | AC 公版 mult_64/set_key/encrypt/decrypt；Init 固定分配 l_key/spice/p119/e19/r220；包装 setKey(key,0x20) |
| Gene / GeneNew | 自定义流式：table[i]=i + MSVC rand LCG 洗牌；Gene 逐字节混合，GeneNew 逐字节 ^i^key[i&7] |
| Seattos | 自定义流式：64 位比特置换 + t16 表混合（v1^t^key，v2=v1±t，输出 (t^v2)^key） |
| Adder / Subtracter | 自定义流式：比特置换密钥；逐字节 v 次加/减（enc 计数=v 跳过>=0x80，dec 计数=256-v） |
| Shift / Ring | Shift：SHIFTIP+SHIFTBBIT 置换 + shiftCrypt（enc 收集后直接返回，dec 展开回写）；Ring：Gene 同款 LCG 表 + rotr 块变换 |
| Gramary | 自定义块密码：gra_round 16 模式槽位交织（s0|s1<<1|...|s7<<6|s6<<7，oracle 提取排列表）；gra_crypt 与 shiftCrypt 同构 |
| DesNew | 自定义 8 字节块：NF 256 表；9 轮密钥索引 +7 mod 15，si 依轮切换 key[7]/[8]/[9]；decrypt 完全镜像 |
| Blowfish | 标准 Blowfish：P/S 初始表与公版一致；BlowFish8/16/24/32/56 = 5 种密钥长度 + 8 字节块 ECB + TsLocal 余数；Encrypt/Decrypt flag0=ECB flag1=CBC(m_oChain) |
| D3DES 族 | 自实现三密钥 3DES 变体：deskey=PC1→totrot→PC2+bigbyte[0..23]→cookey 掩码公式；desfunc=经验提取 IP/FP 置换 + 8 轮 R^=F(ror4(L),k0,k1) 交错；des3key 解密模式 (key+8,EN0)→(key,DE1)→(key+16,DE1)；D3des161/162=24 字节密钥 + 8/16 块 ECB + TsLocal 余数，D3des24=72 字节密钥 + 24 字节块；TenD3desN 包装 key 在前 |
| CDes2p | libdes 位操作版：des_set_key/des_ecb_encrypt/des_set_odd_parity/des_func（pkbit/unbit 比特数组，E 展开 + PC2 子钥查表） |
| CDesPC | Phil Karn DES：pc_perminit 由 1 基位号表（IP/FP）构建 perm 查表；**坑：PC_NIBB 掩码** |
| CDesToo | 4.3BSD des.c：fsf=E 展开（ror(r,1) 分 6 位段 ⊕ 子钥字节）→ 静态 SP 表；**静态表，成员表为死代码** |
| CDesMo | Baldwin 式单函数 DES：pc1m/pcrn 置换 + 8 轮 nibble 旋转 + 最终散布 |
| CFastDes | Eric Young 老版 libdes “fast” DES：fsetkey PC1 查表+28 位轮转+7 组 hKS/lKS PC2；fencrypt IP/16 轮 D_ENCRYPT/FP |
| DesDea / des_sched / des_dea3 | **3DES-EDE2（16 字节密钥）**：des_sched=dea_pc1 查表 OR 两个 32 位状态 → 28 位右旋 → dea_pc2 合成轮子钥；des_dea3=48 轮（E_K1→swap→D_K2→swap→E_K1，**段边界 L/R 交换**），IP=dea_ip、SP=s_and_p、FP=ip_inv；DesDea 包装 des_sched(key)+des_sched(key+8) → 8 字节块循环 → TsLocal 余数 |
| CAmoeba | 自定义 64 位位级密码：Init 三表（amobbit 多比特掩码/amobb/amoIP）；amoKey 按 amoIP 位号提 64 位；amoEnCrypt/DeCrypt=8 轮按密钥位选 SET/CLEAR 块（字节旋转+NOT 扩散+交叉），bit7 特殊/普通块，加解密镜像；Amoeba 包装 amoKey 生成 Add → 块循环 → TsLocal 余数 |

以上全部通过 `toolchain/uni_call.py` 调二进制函数逐字节对拍（含密钥表/状态全量 dump 与
随机多组向量），详见 `tencrypt_new/README.md` 状态矩阵。

### 对称加密族完成（2026-08-10）

- ✅ **Square / Rijndael / Twofish**：均采用公版参考实现（Barreto Square、
  Daemen-Rijmen Rijndael/FIPS-197、Counterpane Doug Whiting Twofish），
  常量表从二进制 `.rodata` 提取，官方向量 + uni_call 逐字节对拍全过；
  各自的 Ten* 封装余数统一走 `CreateTsLocal()->Seattos`。
- ✅ **Loki97 / Magic8/16/32**：修复 WIP 后验证通过（Loki97：deltan 初值、
  keyMaterial 64 字节；Magic：ZF/SF/CF 标志漏置）。
- ✅ **BOX3D1..7（TencBase.cpp）**：TsLocal::ProcessLastBytes 的余数分发目标全部
  逆向完成（CBOX=4 指针+Value@16，8n 盒位网络，bnec 决定 key 正/反向读取）。
- ✅ **SetKey（genenew.cpp 桩）**：补入 gene.cpp，LCG+位掩码派生，对拍一致。
- ✅ **TenCrypt.cpp 封装层**：全部 Ten* 包装已分散落地于各算法文件
  （TenRijnDael/TenTwofish*/TenSquare/TenLoki97/TenMagic* 等），
  CreateTsLocal/FreeTsLocal 在 ts_local.cpp，TencBase 的 CTsLocalImp 不重复实现。
- 至此 **tencrypt_new 全部 59 个 CU 覆盖完成**：`compare_syms.py`（加密族过滤）
  缺符号 **0**；余量仅 GCC 13 `.part.0`/`.cold` 克隆段（已知编译器产物）。

## 7. protocol/common 还原完成（2026-08-10，gunnersvr）

- 共享 Tdr 头（TdrPal/TdrError/TdrTime/TdrBuf/TdrParse/TdrTypeUtil/TdrBufUtil/TdrIO/TdrXml）按
  反汇编重建：TdrWriteBuf/TdrReadBuf（data/pos/limit 布局，大端序列化）、TdrOutStream（FILE* 或
  缓冲双模式）、TdrXmlReader（内嵌 rapidxml document + 64KB 池，0x10058 字节）、TdrXmlWriter、
  TdrDate/TdrTime/TdrDateTime 编码（uint64 = year|mon<<16|day<<24|hour<<32|min<<48|sec<<56）。
- 14 个 CU 全部实现并验收：TdrParse 30、TdrTypeUtil 12、TdrTime 1、TdrIO 3、TdrBufUtil 18、
  TdrXml 21、comm_conf_cfgsdk 24、comm_conf_framework 48、comm_conf_gunnersvr 36、
  comm_conf_svcid 24、comm_conf_zerg 144、comm_proto_public_cfgsvr 252、logsvr 9、monitorsvr 18
  ——合计 **640/640 符号 MISSING=0**；construct/pack/unpack/visualize_ex/fromXml/toXml 与二进制
  uni_call 字节级对拍通过（TdrParse 168 向量、TdrBufUtil 42 项、cfgsvr pack/unpack 11 组、
  visualize 9 组等）。
- 关键语义：TDR 大端线格式（string=uint32 长度含 NUL，上限 0x800）；
  TdrParse 分隔符 " \r\n\t"；嵌套 pack/visualize 一律字面量 cutVer=1；
  sec_proto 消息类全部 `#pragma pack(1)`。
- 工具链增强：uni_call.py 新增 strptime/strtok_r/__strtol*__internal/__strtod_internal 仿真、
  vsnprintf 参数修正、%d 负数/%lld 渲染修复；新增 file_symbols.py（文件→符号/地址/行号）。
- 三棵树 import/include 已装 real rapidxml 1.13、mysqlclient 5.0.92、TenHash.h/TenCrypt.h。
- 进行中（并行 agent）：framework 13 CU（gunnersvr）、zergsvr/secagent protocol/common 差异轮、
  secagent protocol/formmog 4 文件（antibot_client 980 等）。

## 8. 全量完成（2026-08-10）

- **三二进制全部工程源码还原并验收**：gunnersvr 77 个源文件 / zergsvr 87 / secagent 92，
  `check_file_coverage.py` 全文件 **MISSING = 0**（源码映射符号 1463 / 1541 / 2875）。
- **32 位全量链接成功**：GCC 4.1.2（-m32 -fPIC -fno-implement-inlines）对象 + 宿主 32 位运行库
  链接为 ELF32 可执行文件（/tmp/gunnersvr_rebuilt 694KB、zergsvr_rebuilt 791KB、
  secagent_rebuilt 1.66MB）；与原二进制逐符号对照，**全部函数符号命中**。
- 剩余差异仅为编译器版本产物：GCC 4.1.0 与 4.1.2 的静态局部表命名（`::C.*`、
  `::__PRETTY_FUNCTION__`、`::workspace`）、libstdc++ 模板内联决策（`std::fill` 等
  出线与否）、闭源密码实现的数据表符号命名（`CDes*::FUCKING_*`、`dea_*`——算法与
  常量值已逐字节对拍，仅符号名/作用域不同）、以及少量内部 inline 复制符号。
- 每二进制输出 include 目录（output/commlib/zenlib、output/commlib/framework、
  output/protocol/common、output/protocol/formmog）均已同步重建头，供下游编译。

## 关联材料

- 构建重构报告：`df_secsvr_build_recon.md`（三方库清单与依赖）
- 头文件重建工具：`../toolchain/gen_headers.py`
- 加密库复刻：`../tencrypt_new/`（README 含状态矩阵）
- 三方库 vendor：`../third_party/`
