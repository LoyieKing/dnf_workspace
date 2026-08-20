# CPvPExpPenaltyEvent

`_GLOBAL__I__ZN19CPvPExpPenaltyEventC2Ev`

`global constructors keyed to CPvPExpPenaltyEvent::CPvPExpPenaltyEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPvPExpPenaltyEvent` | `0x08268e85` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268e85  _GLOBAL__I__ZN19CPvPExpPenaltyEventC2Ev
#           global constructors keyed to CPvPExpPenaltyEvent::CPvPExpPenaltyEvent()
# range [0x08268e85, 0x08268ea3]
08268e85 +0x00:  push   %ebp
08268e86 +0x01:  mov    %esp,%ebp
08268e88 +0x03:  sub    $0x18,%esp
08268e8b +0x06:  movl   $0xffff,0x4(%esp)
08268e93 +0x0e:  movl   $0x1,(%esp)
08268e9a +0x15:  call   08268e45 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08268e9f +0x1a:  leave
08268ea0 +0x1b:  ret
08268ea1 +0x1c:  nop
08268ea2 +0x1d:  nop
08268ea3 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8268e85

/* CPvPExpPenaltyEvent::CPvPExpPenaltyEvent() */

void CPvPExpPenaltyEvent::_GLOBAL__I_CPvPExpPenaltyEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
