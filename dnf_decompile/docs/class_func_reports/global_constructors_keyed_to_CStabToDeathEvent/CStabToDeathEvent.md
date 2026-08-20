# CStabToDeathEvent

`_GLOBAL__I__ZN17CStabToDeathEventC2Ev`

`global constructors keyed to CStabToDeathEvent::CStabToDeathEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CStabToDeathEvent` | `0x0827f6a7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f6a7  _GLOBAL__I__ZN17CStabToDeathEventC2Ev
#           global constructors keyed to CStabToDeathEvent::CStabToDeathEvent()
# range [0x0827f6a7, 0x0827f6c3]
0827f6a7 +0x00:  push   %ebp
0827f6a8 +0x01:  mov    %esp,%ebp
0827f6aa +0x03:  sub    $0x18,%esp
0827f6ad +0x06:  movl   $0xffff,0x4(%esp)
0827f6b5 +0x0e:  movl   $0x1,(%esp)
0827f6bc +0x15:  call   0827f667 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827f6c1 +0x1a:  leave
0827f6c2 +0x1b:  ret
0827f6c3 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827f6a7

/* CStabToDeathEvent::CStabToDeathEvent() */

void CStabToDeathEvent::_GLOBAL__I_CStabToDeathEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
