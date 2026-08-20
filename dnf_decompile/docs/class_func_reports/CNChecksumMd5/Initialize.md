# Initialize

`_ZN13CNChecksumMd510InitializeEPKhi`

`CNChecksumMd5::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x080983e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080983e0  _ZN13CNChecksumMd510InitializeEPKhi
#           CNChecksumMd5::Initialize(unsigned char const*, int)
# range [0x080983e0, 0x080983e9]
080983e0 +0x00:  push   %ebp
080983e1 +0x01:  mov    %esp,%ebp
080983e3 +0x03:  mov    $0x70000017,%eax
080983e8 +0x08:  pop    %ebp
080983e9 +0x09:  ret
```

## 反编译 C

```c
// CNChecksumMd5::Initialize @ 0x80983e0

/* CNChecksumMd5::Initialize(unsigned char const*, int) */

undefined4 CNChecksumMd5::Initialize(uchar *param_1,int param_2)

{
  return 0x70000017;
}
```
