# operator=

`_ZN16CNChecksumSha256aSERKS_`

`CNChecksumSha256::operator=(CNChecksumSha256 const&)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x080987b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080987b0  _ZN16CNChecksumSha256aSERKS_
#           CNChecksumSha256::operator=(CNChecksumSha256 const&)
# range [0x080987b0, 0x080987b7]
080987b0 +0x00:  push   %ebp
080987b1 +0x01:  mov    %esp,%ebp
080987b3 +0x03:  mov    0x8(%ebp),%eax
080987b6 +0x06:  pop    %ebp
080987b7 +0x07:  ret
```

## 反编译 C

```c
// CNChecksumSha256::operator= @ 0x80987b0

/* CNChecksumSha256::TEMPNAMEPLACEHOLDERVALUE(CNChecksumSha256 const&) */

CNChecksumSha256 * __thiscall
CNChecksumSha256::operator=(CNChecksumSha256 *this,CNChecksumSha256 *param_1)

{
  return this;
}
```
