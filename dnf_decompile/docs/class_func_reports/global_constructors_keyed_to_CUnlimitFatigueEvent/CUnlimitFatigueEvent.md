# CUnlimitFatigueEvent

`_GLOBAL__I__ZN20CUnlimitFatigueEventC2Ev`

`global constructors keyed to CUnlimitFatigueEvent::CUnlimitFatigueEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CUnlimitFatigueEvent` | `0x08285de3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285de3  _GLOBAL__I__ZN20CUnlimitFatigueEventC2Ev
#           global constructors keyed to CUnlimitFatigueEvent::CUnlimitFatigueEvent()
# range [0x08285de3, 0x08285dff]
08285de3 +0x00:  push   %ebp
08285de4 +0x01:  mov    %esp,%ebp
08285de6 +0x03:  sub    $0x18,%esp
08285de9 +0x06:  movl   $0xffff,0x4(%esp)
08285df1 +0x0e:  movl   $0x1,(%esp)
08285df8 +0x15:  call   08285da3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08285dfd +0x1a:  leave
08285dfe +0x1b:  ret
08285dff +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8285de3

/* CUnlimitFatigueEvent::CUnlimitFatigueEvent() */

void CUnlimitFatigueEvent::_GLOBAL__I_CUnlimitFatigueEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
