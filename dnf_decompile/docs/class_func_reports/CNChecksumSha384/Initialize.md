# Initialize

`_ZN16CNChecksumSha38410InitializeEPKhi`

`CNChecksumSha384::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098b9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098b9c  _ZN16CNChecksumSha38410InitializeEPKhi
#           CNChecksumSha384::Initialize(unsigned char const*, int)
# range [0x08098b9c, 0x08098ba5]
08098b9c +0x00:  push   %ebp
08098b9d +0x01:  mov    %esp,%ebp
08098b9f +0x03:  mov    $0x70000017,%eax
08098ba4 +0x08:  pop    %ebp
08098ba5 +0x09:  ret
```

## 反编译 C

```c
// CNChecksumSha384::Initialize @ 0x8098b9c

/* CNChecksumSha384::Initialize(unsigned char const*, int) */

undefined4 CNChecksumSha384::Initialize(uchar *param_1,int param_2)

{
  return 0x70000017;
}
```
