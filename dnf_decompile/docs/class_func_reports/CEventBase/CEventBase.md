# CEventBase

`_ZN10CEventBaseC1Ev`

`CEventBase::CEventBase()`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810ae2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ae2c  _ZN10CEventBaseC1Ev
#           CEventBase::CEventBase()
# range [0x0810ae2c, 0x0810ae51]
0810ae2c +0x00:  push   %ebp
0810ae2d +0x01:  mov    %esp,%ebp
0810ae2f +0x03:  sub    $0x18,%esp
0810ae32 +0x06:  mov    0x8(%ebp),%eax
0810ae35 +0x09:  movl   $&_ZTV10CEventBase+0x8,(%eax)
0810ae3b +0x0f:  mov    0x8(%ebp),%eax
0810ae3e +0x12:  add    $0x4,%eax
0810ae41 +0x15:  mov    %eax,(%esp)
0810ae44 +0x18:  call   0810af10 <_GLOBAL__I__ZN10CEventBaseC2Ev+0x1d>  ; global constructors keyed to CEventBase::CEventBase()+0x1d
0810ae49 +0x1d:  mov    0x8(%ebp),%eax
0810ae4c +0x20:  movb   $0x0,0x8(%eax)
0810ae50 +0x24:  leave
0810ae51 +0x25:  ret
```

## 反编译 C

```c
// CEventBase::CEventBase @ 0x810ae2c

/* CEventBase::CEventBase() */

void __thiscall CEventBase::CEventBase(CEventBase *this)

{
  *(undefined ***)this = &PTR__CEventBase_08b4bae8;
  stADDINFO::stADDINFO((stADDINFO *)(this + 4));
  this[8] = (CEventBase)0x0;
  return;
}
```
