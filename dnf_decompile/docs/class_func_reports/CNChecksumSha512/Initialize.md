# Initialize

`_ZN16CNChecksumSha51210InitializeEPKhi`

`CNChecksumSha512::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098f80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098f80  _ZN16CNChecksumSha51210InitializeEPKhi
#           CNChecksumSha512::Initialize(unsigned char const*, int)
# range [0x08098f80, 0x08098f89]
08098f80 +0x00:  push   %ebp
08098f81 +0x01:  mov    %esp,%ebp
08098f83 +0x03:  mov    $0x70000004,%eax
08098f88 +0x08:  pop    %ebp
08098f89 +0x09:  ret
```

## 反编译 C

```c
// CNChecksumSha512::Initialize @ 0x8098f80

/* CNChecksumSha512::Initialize(unsigned char const*, int) */

undefined4 CNChecksumSha512::Initialize(uchar *param_1,int param_2)

{
  return 0x70000004;
}
```
