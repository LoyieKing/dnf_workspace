# CPCRoomFatigueEvent

`_GLOBAL__I__ZN19CPCRoomFatigueEventC2Ev`

`global constructors keyed to CPCRoomFatigueEvent::CPCRoomFatigueEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPCRoomFatigueEvent` | `0x082677c5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082677c5  _GLOBAL__I__ZN19CPCRoomFatigueEventC2Ev
#           global constructors keyed to CPCRoomFatigueEvent::CPCRoomFatigueEvent()
# range [0x082677c5, 0x082677e3]
082677c5 +0x00:  push   %ebp
082677c6 +0x01:  mov    %esp,%ebp
082677c8 +0x03:  sub    $0x18,%esp
082677cb +0x06:  movl   $0xffff,0x4(%esp)
082677d3 +0x0e:  movl   $0x1,(%esp)
082677da +0x15:  call   08267785 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082677df +0x1a:  leave
082677e0 +0x1b:  ret
082677e1 +0x1c:  nop
082677e2 +0x1d:  nop
082677e3 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82677c5

/* CPCRoomFatigueEvent::CPCRoomFatigueEvent() */

void CPCRoomFatigueEvent::_GLOBAL__I_CPCRoomFatigueEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
