# operator=

`_ZN16CNChecksumSha512aSERKS_`

`CNChecksumSha512::operator=(CNChecksumSha512 const&)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098f78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098f78  _ZN16CNChecksumSha512aSERKS_
#           CNChecksumSha512::operator=(CNChecksumSha512 const&)
# range [0x08098f78, 0x08098f7f]
08098f78 +0x00:  push   %ebp
08098f79 +0x01:  mov    %esp,%ebp
08098f7b +0x03:  mov    0x8(%ebp),%eax
08098f7e +0x06:  pop    %ebp
08098f7f +0x07:  ret
```

## 反编译 C

```c
// CNChecksumSha512::operator= @ 0x8098f78

/* CNChecksumSha512::TEMPNAMEPLACEHOLDERVALUE(CNChecksumSha512 const&) */

CNChecksumSha512 * __thiscall
CNChecksumSha512::operator=(CNChecksumSha512 *this,CNChecksumSha512 *param_1)

{
  return this;
}
```
