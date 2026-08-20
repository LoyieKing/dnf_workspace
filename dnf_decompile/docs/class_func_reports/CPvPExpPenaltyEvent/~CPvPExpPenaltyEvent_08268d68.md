# ~CPvPExpPenaltyEvent

`_ZN19CPvPExpPenaltyEventD0Ev`

`CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent()`

| 类 | 地址 |
|---|---|
| `CPvPExpPenaltyEvent` | `0x08268d68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268d68  _ZN19CPvPExpPenaltyEventD0Ev
#           CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent()
# range [0x08268d68, 0x08268d85]
08268d68 +0x00:  push   %ebp
08268d69 +0x01:  mov    %esp,%ebp
08268d6b +0x03:  sub    $0x18,%esp
08268d6e +0x06:  mov    0x8(%ebp),%eax
08268d71 +0x09:  mov    %eax,(%esp)
08268d74 +0x0c:  call   08268d38 <_ZN19CPvPExpPenaltyEventD1Ev>  ; CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent()
08268d79 +0x11:  mov    0x8(%ebp),%eax
08268d7c +0x14:  mov    %eax,(%esp)
08268d7f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08268d84 +0x1c:  leave
08268d85 +0x1d:  ret
```

## 反编译 C

```c
// CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent @ 0x8268d68

/* CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent() */

void __thiscall CPvPExpPenaltyEvent::~CPvPExpPenaltyEvent(CPvPExpPenaltyEvent *this)

{
  ~CPvPExpPenaltyEvent(this);
  operator_delete(this);
  return;
}
```
