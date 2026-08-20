# ~CEventBase

`_ZN10CEventBaseD1Ev`

`CEventBase::~CEventBase()`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810ae52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ae52  _ZN10CEventBaseD1Ev
#           CEventBase::~CEventBase()
# range [0x0810ae52, 0x0810ae77]
0810ae52 +0x00:  push   %ebp
0810ae53 +0x01:  mov    %esp,%ebp
0810ae55 +0x03:  sub    $0x18,%esp
0810ae58 +0x06:  mov    0x8(%ebp),%eax
0810ae5b +0x09:  movl   $&_ZTV10CEventBase+0x8,(%eax)
0810ae61 +0x0f:  mov    $0x0,%eax
0810ae66 +0x14:  test   %al,%al
0810ae68 +0x16:  je     0810ae75 <+0x23>
0810ae6a +0x18:  mov    0x8(%ebp),%eax
0810ae6d +0x1b:  mov    %eax,(%esp)
0810ae70 +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810ae75 +0x23:  leave
0810ae76 +0x24:  ret
0810ae77 +0x25:  nop
```

## 反编译 C

```c
// CEventBase::~CEventBase @ 0x810ae52

/* WARNING: Removing unreachable block (ram,0x0810ae6a) */
/* CEventBase::~CEventBase() */

void __thiscall CEventBase::~CEventBase(CEventBase *this)

{
  *(undefined ***)this = &PTR__CEventBase_08b4bae8;
  return;
}
```
