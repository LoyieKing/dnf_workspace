# ~CAutoMarketConditionsControlEvent

`_ZN33CAutoMarketConditionsControlEventD1Ev`

`CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControlEvent` | `0x08109c30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109c30  _ZN33CAutoMarketConditionsControlEventD1Ev
#           CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent()
# range [0x08109c30, 0x08109c5f]
08109c30 +0x00:  push   %ebp
08109c31 +0x01:  mov    %esp,%ebp
08109c33 +0x03:  sub    $0x18,%esp
08109c36 +0x06:  mov    0x8(%ebp),%eax
08109c39 +0x09:  movl   $&_ZTV33CAutoMarketConditionsControlEvent+0x8,(%eax)
08109c3f +0x0f:  mov    0x8(%ebp),%eax
08109c42 +0x12:  mov    %eax,(%esp)
08109c45 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08109c4a +0x1a:  mov    $0x0,%eax
08109c4f +0x1f:  test   %al,%al
08109c51 +0x21:  je     08109c5e <+0x2e>
08109c53 +0x23:  mov    0x8(%ebp),%eax
08109c56 +0x26:  mov    %eax,(%esp)
08109c59 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08109c5e +0x2e:  leave
08109c5f +0x2f:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent @ 0x8109c30

/* WARNING: Removing unreachable block (ram,0x08109c53) */
/* CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent
          (CAutoMarketConditionsControlEvent *this)

{
  *(undefined ***)this = &PTR__CAutoMarketConditionsControlEvent_08b46348;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
