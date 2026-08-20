# CCoinRefillEvent

`_GLOBAL__I__ZN16CCoinRefillEventC2Ev`

`global constructors keyed to CCoinRefillEvent::CCoinRefillEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCoinRefillEvent` | `0x0832c399` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c399  _GLOBAL__I__ZN16CCoinRefillEventC2Ev
#           global constructors keyed to CCoinRefillEvent::CCoinRefillEvent()
# range [0x0832c399, 0x0832c3b7]
0832c399 +0x00:  push   %ebp
0832c39a +0x01:  mov    %esp,%ebp
0832c39c +0x03:  sub    $0x18,%esp
0832c39f +0x06:  movl   $0xffff,0x4(%esp)
0832c3a7 +0x0e:  movl   $0x1,(%esp)
0832c3ae +0x15:  call   0832c359 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0832c3b3 +0x1a:  leave
0832c3b4 +0x1b:  ret
0832c3b5 +0x1c:  nop
0832c3b6 +0x1d:  nop
0832c3b7 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x832c399

/* CCoinRefillEvent::CCoinRefillEvent() */

void CCoinRefillEvent::_GLOBAL__I_CCoinRefillEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
