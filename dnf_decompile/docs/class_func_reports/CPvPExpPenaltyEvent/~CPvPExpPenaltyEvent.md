# ~CPvPExpPenaltyEvent

`_ZN19CPvPExpPenaltyEventD1Ev`

`CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent()`

| 类 | 地址 |
|---|---|
| `CPvPExpPenaltyEvent` | `0x08268d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268d38  _ZN19CPvPExpPenaltyEventD1Ev
#           CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent()
# range [0x08268d38, 0x08268d67]
08268d38 +0x00:  push   %ebp
08268d39 +0x01:  mov    %esp,%ebp
08268d3b +0x03:  sub    $0x18,%esp
08268d3e +0x06:  mov    0x8(%ebp),%eax
08268d41 +0x09:  movl   $&_ZTV19CPvPExpPenaltyEvent+0x8,(%eax)
08268d47 +0x0f:  mov    0x8(%ebp),%eax
08268d4a +0x12:  mov    %eax,(%esp)
08268d4d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08268d52 +0x1a:  mov    $0x0,%eax
08268d57 +0x1f:  test   %al,%al
08268d59 +0x21:  je     08268d66 <+0x2e>
08268d5b +0x23:  mov    0x8(%ebp),%eax
08268d5e +0x26:  mov    %eax,(%esp)
08268d61 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08268d66 +0x2e:  leave
08268d67 +0x2f:  ret
```

## 反编译 C

```c
// CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent @ 0x8268d38

/* WARNING: Removing unreachable block (ram,0x08268d5b) */
/* CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent() */

void __thiscall CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent(CPvPExpPenaltyEvent *this)

{
  *(undefined ***)this = &PTR__CPvPExpPenaltyEvent_08bf3f48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
