# CReformingDanjinEvent

`_GLOBAL__I__ZN21CReformingDanjinEventC2Ev`

`global constructors keyed to CReformingDanjinEvent::CReformingDanjinEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CReformingDanjinEvent` | `0x0826eacb` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826eacb  _GLOBAL__I__ZN21CReformingDanjinEventC2Ev
#           global constructors keyed to CReformingDanjinEvent::CReformingDanjinEvent()
# range [0x0826eacb, 0x0826eae7]
0826eacb +0x00:  push   %ebp
0826eacc +0x01:  mov    %esp,%ebp
0826eace +0x03:  sub    $0x18,%esp
0826ead1 +0x06:  movl   $0xffff,0x4(%esp)
0826ead9 +0x0e:  movl   $0x1,(%esp)
0826eae0 +0x15:  call   0826ea8b <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0826eae5 +0x1a:  leave
0826eae6 +0x1b:  ret
0826eae7 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x826eacb

/* CReformingDanjinEvent::CReformingDanjinEvent() */

void CReformingDanjinEvent::_GLOBAL__I_CReformingDanjinEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
