# CPCRoomBurningEvent

`_GLOBAL__I__ZN19CPCRoomBurningEventC2Ev`

`global constructors keyed to CPCRoomBurningEvent::CPCRoomBurningEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPCRoomBurningEvent` | `0x0826740b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826740b  _GLOBAL__I__ZN19CPCRoomBurningEventC2Ev
#           global constructors keyed to CPCRoomBurningEvent::CPCRoomBurningEvent()
# range [0x0826740b, 0x08267427]
0826740b +0x00:  push   %ebp
0826740c +0x01:  mov    %esp,%ebp
0826740e +0x03:  sub    $0x18,%esp
08267411 +0x06:  movl   $0xffff,0x4(%esp)
08267419 +0x0e:  movl   $0x1,(%esp)
08267420 +0x15:  call   082673cb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08267425 +0x1a:  leave
08267426 +0x1b:  ret
08267427 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x826740b

/* CPCRoomBurningEvent::CPCRoomBurningEvent() */

void CPCRoomBurningEvent::_GLOBAL__I_CPCRoomBurningEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
