# CLeadingChannelEvent

`_GLOBAL__I__ZN20CLeadingChannelEventC2Ev`

`global constructors keyed to CLeadingChannelEvent::CLeadingChannelEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CLeadingChannelEvent` | `0x0811ff2d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ff2d  _GLOBAL__I__ZN20CLeadingChannelEventC2Ev
#           global constructors keyed to CLeadingChannelEvent::CLeadingChannelEvent()
# range [0x0811ff2d, 0x0811ff4b]
0811ff2d +0x00:  push   %ebp
0811ff2e +0x01:  mov    %esp,%ebp
0811ff30 +0x03:  sub    $0x18,%esp
0811ff33 +0x06:  movl   $0xffff,0x4(%esp)
0811ff3b +0x0e:  movl   $0x1,(%esp)
0811ff42 +0x15:  call   0811feed <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811ff47 +0x1a:  leave
0811ff48 +0x1b:  ret
0811ff49 +0x1c:  nop
0811ff4a +0x1d:  nop
0811ff4b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x811ff2d

/* CLeadingChannelEvent::CLeadingChannelEvent() */

void CLeadingChannelEvent::_GLOBAL__I_CLeadingChannelEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
