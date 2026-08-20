# CIntegratedPvPServerMatchEvent

`_GLOBAL__I__ZN30CIntegratedPvPServerMatchEventC2Ev`

`global constructors keyed to CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CIntegratedPvPServerMatchEvent` | `0x0811d5a1` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d5a1  _GLOBAL__I__ZN30CIntegratedPvPServerMatchEventC2Ev
#           global constructors keyed to CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent()
# range [0x0811d5a1, 0x0811d5bf]
0811d5a1 +0x00:  push   %ebp
0811d5a2 +0x01:  mov    %esp,%ebp
0811d5a4 +0x03:  sub    $0x18,%esp
0811d5a7 +0x06:  movl   $0xffff,0x4(%esp)
0811d5af +0x0e:  movl   $0x1,(%esp)
0811d5b6 +0x15:  call   0811d561 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811d5bb +0x1a:  leave
0811d5bc +0x1b:  ret
0811d5bd +0x1c:  nop
0811d5be +0x1d:  nop
0811d5bf +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x811d5a1

/* CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent() */

void CIntegratedPvPServerMatchEvent::_GLOBAL__I_CIntegratedPvPServerMatchEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
