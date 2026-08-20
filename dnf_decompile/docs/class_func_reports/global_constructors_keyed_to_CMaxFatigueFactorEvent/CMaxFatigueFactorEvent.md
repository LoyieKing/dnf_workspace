# CMaxFatigueFactorEvent

`_GLOBAL__I__ZN22CMaxFatigueFactorEventC2Ev`

`global constructors keyed to CMaxFatigueFactorEvent::CMaxFatigueFactorEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CMaxFatigueFactorEvent` | `0x081b28ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b28ec  _GLOBAL__I__ZN22CMaxFatigueFactorEventC2Ev
#           global constructors keyed to CMaxFatigueFactorEvent::CMaxFatigueFactorEvent()
# range [0x081b28ec, 0x081b2907]
081b28ec +0x00:  push   %ebp
081b28ed +0x01:  mov    %esp,%ebp
081b28ef +0x03:  sub    $0x18,%esp
081b28f2 +0x06:  movl   $0xffff,0x4(%esp)
081b28fa +0x0e:  movl   $0x1,(%esp)
081b2901 +0x15:  call   081b28ac <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b2906 +0x1a:  leave
081b2907 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81b28ec

/* CMaxFatigueFactorEvent::CMaxFatigueFactorEvent() */

void CMaxFatigueFactorEvent::_GLOBAL__I_CMaxFatigueFactorEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
