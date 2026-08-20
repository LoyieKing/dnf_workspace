# CRestrictCharacCreationEvent

`_GLOBAL__I__ZN28CRestrictCharacCreationEventC2Ev`

`global constructors keyed to CRestrictCharacCreationEvent::CRestrictCharacCreationEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CRestrictCharacCreationEvent` | `0x08273e2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273e2a  _GLOBAL__I__ZN28CRestrictCharacCreationEventC2Ev
#           global constructors keyed to CRestrictCharacCreationEvent::CRestrictCharacCreationEvent()
# range [0x08273e2a, 0x08273e47]
08273e2a +0x00:  push   %ebp
08273e2b +0x01:  mov    %esp,%ebp
08273e2d +0x03:  sub    $0x18,%esp
08273e30 +0x06:  movl   $0xffff,0x4(%esp)
08273e38 +0x0e:  movl   $0x1,(%esp)
08273e3f +0x15:  call   08273dea <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08273e44 +0x1a:  leave
08273e45 +0x1b:  ret
08273e46 +0x1c:  nop
08273e47 +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8273e2a

/* CRestrictCharacCreationEvent::CRestrictCharacCreationEvent() */

void CRestrictCharacCreationEvent::_GLOBAL__I_CRestrictCharacCreationEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
