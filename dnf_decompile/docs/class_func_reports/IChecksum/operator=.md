# operator=

`_ZN9IChecksumaSERKS_`

`IChecksum::operator=(IChecksum const&)`

| 类 | 地址 |
|---|---|
| `IChecksum` | `0x0809dee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809dee6  _ZN9IChecksumaSERKS_
#           IChecksum::operator=(IChecksum const&)
# range [0x0809dee6, 0x0809deef]
0809dee6 +0x00:  push   %ebp
0809dee7 +0x01:  mov    %esp,%ebp
0809dee9 +0x03:  mov    0x8(%ebp),%eax
0809deec +0x06:  pop    %ebp
0809deed +0x07:  ret
0809deee +0x08:  nop
0809deef +0x09:  nop
```

## 反编译 C

```c
// IChecksum::operator= @ 0x809dee6

/* IChecksum::TEMPNAMEPLACEHOLDERVALUE(IChecksum const&) */

IChecksum * __thiscall IChecksum::operator=(IChecksum *this,IChecksum *param_1)

{
  return this;
}
```
