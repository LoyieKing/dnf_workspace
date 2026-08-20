# operator=

`_ZN16CNChecksumSha384aSERKS_`

`CNChecksumSha384::operator=(CNChecksumSha384 const&)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098b94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098b94  _ZN16CNChecksumSha384aSERKS_
#           CNChecksumSha384::operator=(CNChecksumSha384 const&)
# range [0x08098b94, 0x08098b9b]
08098b94 +0x00:  push   %ebp
08098b95 +0x01:  mov    %esp,%ebp
08098b97 +0x03:  mov    0x8(%ebp),%eax
08098b9a +0x06:  pop    %ebp
08098b9b +0x07:  ret
```

## 反编译 C

```c
// CNChecksumSha384::operator= @ 0x8098b94

/* CNChecksumSha384::TEMPNAMEPLACEHOLDERVALUE(CNChecksumSha384 const&) */

CNChecksumSha384 * __thiscall
CNChecksumSha384::operator=(CNChecksumSha384 *this,CNChecksumSha384 *param_1)

{
  return this;
}
```
