# CPowerWarVictoriousEvent

`_GLOBAL__I__ZN24CPowerWarVictoriousEventC2Ev`

`global constructors keyed to CPowerWarVictoriousEvent::CPowerWarVictoriousEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPowerWarVictoriousEvent` | `0x08268c0b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268c0b  _GLOBAL__I__ZN24CPowerWarVictoriousEventC2Ev
#           global constructors keyed to CPowerWarVictoriousEvent::CPowerWarVictoriousEvent()
# range [0x08268c0b, 0x08268c27]
08268c0b +0x00:  push   %ebp
08268c0c +0x01:  mov    %esp,%ebp
08268c0e +0x03:  sub    $0x18,%esp
08268c11 +0x06:  movl   $0xffff,0x4(%esp)
08268c19 +0x0e:  movl   $0x1,(%esp)
08268c20 +0x15:  call   08268bcb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08268c25 +0x1a:  leave
08268c26 +0x1b:  ret
08268c27 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8268c0b

/* CPowerWarVictoriousEvent::CPowerWarVictoriousEvent() */

void CPowerWarVictoriousEvent::_GLOBAL__I_CPowerWarVictoriousEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
