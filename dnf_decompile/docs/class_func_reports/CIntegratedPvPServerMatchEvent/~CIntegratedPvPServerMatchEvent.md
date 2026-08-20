# ~CIntegratedPvPServerMatchEvent

`_ZN30CIntegratedPvPServerMatchEventD1Ev`

`CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent()`

| 类 | 地址 |
|---|---|
| `CIntegratedPvPServerMatchEvent` | `0x0811d454` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d454  _ZN30CIntegratedPvPServerMatchEventD1Ev
#           CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent()
# range [0x0811d454, 0x0811d483]
0811d454 +0x00:  push   %ebp
0811d455 +0x01:  mov    %esp,%ebp
0811d457 +0x03:  sub    $0x18,%esp
0811d45a +0x06:  mov    0x8(%ebp),%eax
0811d45d +0x09:  movl   $&_ZTV30CIntegratedPvPServerMatchEvent+0x8,(%eax)
0811d463 +0x0f:  mov    0x8(%ebp),%eax
0811d466 +0x12:  mov    %eax,(%esp)
0811d469 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0811d46e +0x1a:  mov    $0x0,%eax
0811d473 +0x1f:  test   %al,%al
0811d475 +0x21:  je     0811d482 <+0x2e>
0811d477 +0x23:  mov    0x8(%ebp),%eax
0811d47a +0x26:  mov    %eax,(%esp)
0811d47d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811d482 +0x2e:  leave
0811d483 +0x2f:  ret
```

## 反编译 C

```c
// CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent @ 0x811d454

/* WARNING: Removing unreachable block (ram,0x0811d477) */
/* CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent() */

void __thiscall
CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent
          (CIntegratedPvPServerMatchEvent *this)

{
  *(undefined ***)this = &PTR__CIntegratedPvPServerMatchEvent_08b55ae8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
