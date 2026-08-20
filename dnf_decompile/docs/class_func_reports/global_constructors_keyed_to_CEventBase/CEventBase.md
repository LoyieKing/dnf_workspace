# CEventBase

`_GLOBAL__I__ZN10CEventBaseC2Ev`

`global constructors keyed to CEventBase::CEventBase()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CEventBase` | `0x0810aef3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aef3  _GLOBAL__I__ZN10CEventBaseC2Ev
#           global constructors keyed to CEventBase::CEventBase()
# range [0x0810aef3, 0x0810af2b]
0810aef3 +0x00:  push   %ebp
0810aef4 +0x01:  mov    %esp,%ebp
0810aef6 +0x03:  sub    $0x18,%esp
0810aef9 +0x06:  movl   $0xffff,0x4(%esp)
0810af01 +0x0e:  movl   $0x1,(%esp)
0810af08 +0x15:  call   0810aeb3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810af0d +0x1a:  leave
0810af0e +0x1b:  ret
0810af0f +0x1c:  nop
0810af10 +0x1d:  push   %ebp
0810af11 +0x1e:  mov    %esp,%ebp
0810af13 +0x20:  mov    0x8(%ebp),%eax
0810af16 +0x23:  movw   $0xffff,(%eax)
0810af1b +0x28:  mov    0x8(%ebp),%eax
0810af1e +0x2b:  movw   $0xffff,0x2(%eax)
0810af24 +0x31:  pop    %ebp
0810af25 +0x32:  ret
0810af26 +0x33:  push   %ebp
0810af27 +0x34:  mov    %esp,%ebp
0810af29 +0x36:  pop    %ebp
0810af2a +0x37:  ret
0810af2b +0x38:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810aef3

/* CEventBase::CEventBase() */

void CEventBase::_GLOBAL__I_CEventBase(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
