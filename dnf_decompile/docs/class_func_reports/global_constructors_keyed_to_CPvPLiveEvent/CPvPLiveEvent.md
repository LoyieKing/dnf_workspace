# CPvPLiveEvent

`_GLOBAL__I__ZN13CPvPLiveEventC2Ev`

`global constructors keyed to CPvPLiveEvent::CPvPLiveEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPvPLiveEvent` | `0x08269021` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269021  _GLOBAL__I__ZN13CPvPLiveEventC2Ev
#           global constructors keyed to CPvPLiveEvent::CPvPLiveEvent()
# range [0x08269021, 0x0826903f]
08269021 +0x00:  push   %ebp
08269022 +0x01:  mov    %esp,%ebp
08269024 +0x03:  sub    $0x18,%esp
08269027 +0x06:  movl   $0xffff,0x4(%esp)
0826902f +0x0e:  movl   $0x1,(%esp)
08269036 +0x15:  call   08268fe1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0826903b +0x1a:  leave
0826903c +0x1b:  ret
0826903d +0x1c:  nop
0826903e +0x1d:  nop
0826903f +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8269021

/* CPvPLiveEvent::CPvPLiveEvent() */

void CPvPLiveEvent::_GLOBAL__I_CPvPLiveEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
