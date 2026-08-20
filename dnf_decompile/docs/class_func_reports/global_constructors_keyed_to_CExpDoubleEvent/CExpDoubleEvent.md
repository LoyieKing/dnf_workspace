# CExpDoubleEvent

`_GLOBAL__I__ZN15CExpDoubleEventC2Ev`

`global constructors keyed to CExpDoubleEvent::CExpDoubleEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CExpDoubleEvent` | `0x0849ae0d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ae0d  _GLOBAL__I__ZN15CExpDoubleEventC2Ev
#           global constructors keyed to CExpDoubleEvent::CExpDoubleEvent()
# range [0x0849ae0d, 0x0849ae2b]
0849ae0d +0x00:  push   %ebp
0849ae0e +0x01:  mov    %esp,%ebp
0849ae10 +0x03:  sub    $0x18,%esp
0849ae13 +0x06:  movl   $0xffff,0x4(%esp)
0849ae1b +0x0e:  movl   $0x1,(%esp)
0849ae22 +0x15:  call   0849adcd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0849ae27 +0x1a:  leave
0849ae28 +0x1b:  ret
0849ae29 +0x1c:  nop
0849ae2a +0x1d:  nop
0849ae2b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x849ae0d

/* CExpDoubleEvent::CExpDoubleEvent() */

void CExpDoubleEvent::_GLOBAL__I_CExpDoubleEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
