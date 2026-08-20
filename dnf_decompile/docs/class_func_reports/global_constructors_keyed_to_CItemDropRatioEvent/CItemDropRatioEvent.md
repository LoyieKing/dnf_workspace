# CItemDropRatioEvent

`_GLOBAL__I__ZN19CItemDropRatioEventC2Ev`

`global constructors keyed to CItemDropRatioEvent::CItemDropRatioEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CItemDropRatioEvent` | `0x085333f1` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085333f1  _GLOBAL__I__ZN19CItemDropRatioEventC2Ev
#           global constructors keyed to CItemDropRatioEvent::CItemDropRatioEvent()
# range [0x085333f1, 0x0853340f]
085333f1 +0x00:  push   %ebp
085333f2 +0x01:  mov    %esp,%ebp
085333f4 +0x03:  sub    $0x18,%esp
085333f7 +0x06:  movl   $0xffff,0x4(%esp)
085333ff +0x0e:  movl   $0x1,(%esp)
08533406 +0x15:  call   085333b1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0853340b +0x1a:  leave
0853340c +0x1b:  ret
0853340d +0x1c:  nop
0853340e +0x1d:  nop
0853340f +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85333f1

/* CItemDropRatioEvent::CItemDropRatioEvent() */

void CItemDropRatioEvent::_GLOBAL__I_CItemDropRatioEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
