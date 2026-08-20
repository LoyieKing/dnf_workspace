# CFirstServerOpenEvent

`_GLOBAL__I__ZN21CFirstServerOpenEventC2Ev`

`global constructors keyed to CFirstServerOpenEvent::CFirstServerOpenEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CFirstServerOpenEvent` | `0x0811cc46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cc46  _GLOBAL__I__ZN21CFirstServerOpenEventC2Ev
#           global constructors keyed to CFirstServerOpenEvent::CFirstServerOpenEvent()
# range [0x0811cc46, 0x0811cc63]
0811cc46 +0x00:  push   %ebp
0811cc47 +0x01:  mov    %esp,%ebp
0811cc49 +0x03:  sub    $0x18,%esp
0811cc4c +0x06:  movl   $0xffff,0x4(%esp)
0811cc54 +0x0e:  movl   $0x1,(%esp)
0811cc5b +0x15:  call   0811cc06 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811cc60 +0x1a:  leave
0811cc61 +0x1b:  ret
0811cc62 +0x1c:  nop
0811cc63 +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x811cc46

/* CFirstServerOpenEvent::CFirstServerOpenEvent() */

void CFirstServerOpenEvent::_GLOBAL__I_CFirstServerOpenEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
