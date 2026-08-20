# CCharacterDayEvent

`_GLOBAL__I__ZN18CCharacterDayEventC2Ev`

`global constructors keyed to CCharacterDayEvent::CCharacterDayEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCharacterDayEvent` | `0x0810a67d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a67d  _GLOBAL__I__ZN18CCharacterDayEventC2Ev
#           global constructors keyed to CCharacterDayEvent::CCharacterDayEvent()
# range [0x0810a67d, 0x0810a69b]
0810a67d +0x00:  push   %ebp
0810a67e +0x01:  mov    %esp,%ebp
0810a680 +0x03:  sub    $0x18,%esp
0810a683 +0x06:  movl   $0xffff,0x4(%esp)
0810a68b +0x0e:  movl   $0x1,(%esp)
0810a692 +0x15:  call   0810a63d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810a697 +0x1a:  leave
0810a698 +0x1b:  ret
0810a699 +0x1c:  nop
0810a69a +0x1d:  nop
0810a69b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810a67d

/* CCharacterDayEvent::CCharacterDayEvent() */

void CCharacterDayEvent::_GLOBAL__I_CCharacterDayEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
