# ~CBreakAwayPreventEvent

`_ZN22CBreakAwayPreventEventD1Ev`

`CBreakAwayPreventEvent::~CBreakAwayPreventEvent()`

| 类 | 地址 |
|---|---|
| `CBreakAwayPreventEvent` | `0x08109dd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109dd8  _ZN22CBreakAwayPreventEventD1Ev
#           CBreakAwayPreventEvent::~CBreakAwayPreventEvent()
# range [0x08109dd8, 0x08109e07]
08109dd8 +0x00:  push   %ebp
08109dd9 +0x01:  mov    %esp,%ebp
08109ddb +0x03:  sub    $0x18,%esp
08109dde +0x06:  mov    0x8(%ebp),%eax
08109de1 +0x09:  movl   $&_ZTV22CBreakAwayPreventEvent+0x8,(%eax)
08109de7 +0x0f:  mov    0x8(%ebp),%eax
08109dea +0x12:  mov    %eax,(%esp)
08109ded +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08109df2 +0x1a:  mov    $0x0,%eax
08109df7 +0x1f:  test   %al,%al
08109df9 +0x21:  je     08109e06 <+0x2e>
08109dfb +0x23:  mov    0x8(%ebp),%eax
08109dfe +0x26:  mov    %eax,(%esp)
08109e01 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08109e06 +0x2e:  leave
08109e07 +0x2f:  ret
```

## 反编译 C

```c
// CBreakAwayPreventEvent::~CBreakAwayPreventEvent @ 0x8109dd8

/* WARNING: Removing unreachable block (ram,0x08109dfb) */
/* CBreakAwayPreventEvent::~CBreakAwayPreventEvent() */

void __thiscall CBreakAwayPreventEvent::~CBreakAwayPreventEvent(CBreakAwayPreventEvent *this)

{
  *(undefined ***)this = &PTR__CBreakAwayPreventEvent_08b46fa8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
