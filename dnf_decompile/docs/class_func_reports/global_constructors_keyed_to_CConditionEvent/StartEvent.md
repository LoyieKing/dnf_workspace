# StartEvent

`_GLOBAL__I__ZN15CConditionEvent10StartEventEv`

`global constructors keyed to CConditionEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CConditionEvent` | `0x08184a1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184a1a  _GLOBAL__I__ZN15CConditionEvent10StartEventEv
#           global constructors keyed to CConditionEvent::StartEvent()
# range [0x08184a1a, 0x08184a37]
08184a1a +0x00:  push   %ebp
08184a1b +0x01:  mov    %esp,%ebp
08184a1d +0x03:  sub    $0x18,%esp
08184a20 +0x06:  movl   $0xffff,0x4(%esp)
08184a28 +0x0e:  movl   $0x1,(%esp)
08184a2f +0x15:  call   081849da <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08184a34 +0x1a:  leave
08184a35 +0x1b:  ret
08184a36 +0x1c:  nop
08184a37 +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8184a1a

/* CConditionEvent::StartEvent() */

void CConditionEvent::_GLOBAL__I_StartEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
