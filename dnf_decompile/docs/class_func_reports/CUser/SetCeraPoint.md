# SetCeraPoint

`_ZN5CUser12SetCeraPointEj`

`CUser::SetCeraPoint(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692b04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692b04  _ZN5CUser12SetCeraPointEj
#           CUser::SetCeraPoint(unsigned int)
# range [0x08692b04, 0x08692b15]
08692b04 +0x00:  push   %ebp
08692b05 +0x01:  mov    %esp,%ebp
08692b07 +0x03:  mov    0x8(%ebp),%eax
08692b0a +0x06:  mov    0xc(%ebp),%edx
08692b0d +0x09:  mov    %edx,0x8eadc(%eax)
08692b13 +0x0f:  pop    %ebp
08692b14 +0x10:  ret
08692b15 +0x11:  nop
```

## 反编译 C

```c
// CUser::SetCeraPoint @ 0x8692b04

/* CUser::SetCeraPoint(unsigned int) */

void __thiscall CUser::SetCeraPoint(CUser *this,uint param_1)

{
  *(uint *)(this + 0x8eadc) = param_1;
  return;
}
```
