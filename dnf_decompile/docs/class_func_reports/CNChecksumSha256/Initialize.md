# Initialize

`_ZN16CNChecksumSha25610InitializeEPKhi`

`CNChecksumSha256::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x080987b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080987b8  _ZN16CNChecksumSha25610InitializeEPKhi
#           CNChecksumSha256::Initialize(unsigned char const*, int)
# range [0x080987b8, 0x080987c1]
080987b8 +0x00:  push   %ebp
080987b9 +0x01:  mov    %esp,%ebp
080987bb +0x03:  mov    $0x70000017,%eax
080987c0 +0x08:  pop    %ebp
080987c1 +0x09:  ret
```

## 反编译 C

```c
// CNChecksumSha256::Initialize @ 0x80987b8

/* CNChecksumSha256::Initialize(unsigned char const*, int) */

undefined4 CNChecksumSha256::Initialize(uchar *param_1,int param_2)

{
  return 0x70000017;
}
```
