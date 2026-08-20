# COnlinePreliminaryEvent

`_GLOBAL__I__ZN23COnlinePreliminaryEventC2Ev`

`global constructors keyed to COnlinePreliminaryEvent::COnlinePreliminaryEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to COnlinePreliminaryEvent` | `0x081bb660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb660  _GLOBAL__I__ZN23COnlinePreliminaryEventC2Ev
#           global constructors keyed to COnlinePreliminaryEvent::COnlinePreliminaryEvent()
# range [0x081bb660, 0x081bb67b]
081bb660 +0x00:  push   %ebp
081bb661 +0x01:  mov    %esp,%ebp
081bb663 +0x03:  sub    $0x18,%esp
081bb666 +0x06:  movl   $0xffff,0x4(%esp)
081bb66e +0x0e:  movl   $0x1,(%esp)
081bb675 +0x15:  call   081bb620 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081bb67a +0x1a:  leave
081bb67b +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81bb660

/* COnlinePreliminaryEvent::COnlinePreliminaryEvent() */

void COnlinePreliminaryEvent::_GLOBAL__I_COnlinePreliminaryEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
