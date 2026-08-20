# ~CMaxFatigueFactorEvent

`_ZN22CMaxFatigueFactorEventD1Ev`

`CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent()`

| 类 | 地址 |
|---|---|
| `CMaxFatigueFactorEvent` | `0x081b273e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b273e  _ZN22CMaxFatigueFactorEventD1Ev
#           CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent()
# range [0x081b273e, 0x081b276d]
081b273e +0x00:  push   %ebp
081b273f +0x01:  mov    %esp,%ebp
081b2741 +0x03:  sub    $0x18,%esp
081b2744 +0x06:  mov    0x8(%ebp),%eax
081b2747 +0x09:  movl   $&_ZTV22CMaxFatigueFactorEvent+0x8,(%eax)
081b274d +0x0f:  mov    0x8(%ebp),%eax
081b2750 +0x12:  mov    %eax,(%esp)
081b2753 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b2758 +0x1a:  mov    $0x0,%eax
081b275d +0x1f:  test   %al,%al
081b275f +0x21:  je     081b276c <+0x2e>
081b2761 +0x23:  mov    0x8(%ebp),%eax
081b2764 +0x26:  mov    %eax,(%esp)
081b2767 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b276c +0x2e:  leave
081b276d +0x2f:  ret
```

## 反编译 C

```c
// CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent @ 0x81b273e

/* WARNING: Removing unreachable block (ram,0x081b2761) */
/* CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent() */

void __thiscall CMaxFatigueFactorEvent::~CMaxFatigueFactorEvent(CMaxFatigueFactorEvent *this)

{
  *(undefined ***)this = &PTR__CMaxFatigueFactorEvent_08bb7408;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
