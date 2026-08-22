# df_game_r 翻译单元 (TU) 统计

> 统计日期:2026-08-21
> 分析对象:`dnf_installer/build/dnf_data/home/template/init/df_game_r`
> 属性:ELF 32-bit LSB executable, Intel 80386,动态链接,含 `debug_info`,未 strip
> 大小:36,360,954 字节

## 汇总结论

df_game_r 内部翻译单元 (TU) 的统计在两个数据源口径下不同,彼此不冲突:

| 数据源 | TU 数量 | 说明 |
|---|---|---|
| **`.comment` 段** | **376** | 真正链接进二进制的输入对象文件总数(权威口径) |
| **DWARF (`.debug_info`)** | **21** | 编译时带 `-g`、因此保留调试信息的子集 |

- 权威数字为 **`.comment` 的 376 个 TU**。
- DWARF 的 21 个仅是其中带调试信息的子集(本仓库重建/对比流程重编译的部分)。

## 一、DWARF 编译单元 — 21 个

`readelf --debug-dump=info` 统计 `DW_TAG_compile_unit` 共 21 个,全部由 GCC 4.4.6 (`GNU C/C++ 4.4.6 20110731 (Red Hat 4.4.6-3)`) 编译,无 `partial_unit` / `type_unit`。

> 构成对比:21 个 CU = **C 7 个**(6 个 FreeType 源 + `builds/unix/ftsystem.c`)+ **C++ 14 个**(FilePack 1 + DnfLexer 5 + Core 8)。

### C 源文件(7 个,ANSI C)

| 源文件路径 |
|---|
| `/root/f248/src/base/ftinit.c` |
| `/root/f248/src/base/ftbase.c` |
| `/root/f248/src/truetype/truetype.c` |
| `/root/f248/src/sfnt/sfnt.c` |
| `/root/f248/src/raster/raster.c` |
| `/root/f248/src/smooth/smooth.c` |
| `builds/unix/ftsystem.c` |

### C++ 源文件(14 个,GNU C++)

| 源文件路径 |
|---|
| `../../Include/FilePack/Pack.cpp` |
| `../../Include/DnfLexer/DNFlexSub.cpp` |
| `../../Include/DnfLexer/DNFLexWrapper.cpp` |
| `../../Include/DnfLexer/ScriptStringManager.cpp` |
| `../../Include/DnfLexer/CompiledDNFLex.cpp` |
| `../../Include/DnfLexer/DNFlex.cpp` |
| `../../Include/Core/CountryCode.cpp` |
| `../../Include/Core/Crc32.cpp` |
| `../../Include/Core/Lock.cpp` |
| `../../Include/Core/SecureStdio.cpp` |
| `../../Include/Core/Strings.cpp` |
| `../../Include/Core/Tick.cpp` |
| `../../Include/Core/UnicodeConvert.cpp` |
| `../../Include/Core/XorRand.cpp` |

## 二、`.comment` 段 — 376 个链接对象

### 段属性

- 节号 `[28]`,类型 `PROGBITS`
- 文件偏移 `0x13ad6b0`,长度 `0x438b` = 17,291 字节
- 标志 `00`:**非合并段**(无 `SHF_MERGE` / `SHF_STRINGS`),因此链接时**不去重**

### 版本分布

`.comment` 只记录编译器版本字符串 `GCC: (version)`,每条对应一个被链接的输入 `.o` 文件。逐条解析结果:

| 编译器版本 | 对象数 |
|---|---|
| `GCC: (GNU) 4.1.2 20080704 (Red Hat 4.1.2-52)` | **308** |
| `GCC: (GNU) 4.4.4 20100726 (Red Hat 4.4.4-13)` | **66** |
| `GCC: (GNU) 4.4.6 20110731 (Red Hat 4.4.6-3)` | **1** |
| `GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-1)` | **1** |
| **合计** | **376** |

### 解读

- 因 `.comment` 非合并段,链接器保留每个输入对象追加的版本字符串,条目数 = **实际链接进二进制的对象文件数**。
- 主体 **308 个对象由 GCC 4.1.2 编译**,应为原版 DNF 游戏核心代码(大批量对象)。
- **66 个对象由 GCC 4.4.4 编译**,应为某静态库 / 附加引擎代码。
- 单例 4.4.6 与 4.4.7 分别对应个别文件。

## 三、两个数据源不一致的原因

DWARF 与 `.comment` 的版本分布差异显著:

- DWARF producer 主体为 GCC **4.4.6**;
- `.comment` 主体为 GCC **4.1.2 / 4.4.4**。

这表明**二者描述不同对象集合**:

- DWARF 是本仓库重建/对比流程中**重新生成或保留调试信息的局部子集**(仅 `Include/` 下引擎封装 + FreeType 静态库,共 21 个源文件)。
- `.comment` 则保留了**原始上游链接时的完整对象清单**(376 个),未被 strip 清除。

## 四、数量核对

DWARF CU 计数 21 = C 7 + C++ 14,与分组明细一致。以 `readelf --debug-dump=info` 实际输出的 21 个 `DW_TAG_compile_unit` 条目为准。

## 五、命令记录(复现)

```bash
# 定位二进制
find /home/wangyilei/dnf_workspace -name df_game_r -type f

# 文件属性
file df_game_r

# DWARF 编译单元计数与版本
readelf --debug-dump=info df_game_r 2>/dev/null | grep -c "DW_TAG_compile_unit"

# .comment 段信息
readelf -S df_game_r 2>/dev/null | grep -i comment

# 提取 .comment 原始字节(按文件偏移 + 长度)并逐条解析
dd if=df_game_r of=/tmp/comment.bin bs=1 skip=$((0x13ad6b0)) count=$((0x438b)) 2>/dev/null
# 然后按 NUL 分割,统计非空版本字符串分布
```

## 六、标识

- 已从文件验证(Verified from files):`.comment` 段原始字节、`.debug_info` 的 CU 条目、版本字符串计数。
- 推断(Inferred from decompile/DWARF):DWARF 为局部重新生成的调试子集、`.comment` 保留原始完整对象清单 —— 依据为两者编译器版本分布的显著差异。