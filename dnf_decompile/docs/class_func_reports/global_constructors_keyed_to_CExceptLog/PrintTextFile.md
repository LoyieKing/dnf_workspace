# PrintTextFile

`_GLOBAL__I__ZN10CExceptLog13PrintTextFileEPcS0_`

`global constructors keyed to CExceptLog::PrintTextFile(char*, char*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CExceptLog` | `0x0846d7e5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d7e5  _GLOBAL__I__ZN10CExceptLog13PrintTextFileEPcS0_
#           global constructors keyed to CExceptLog::PrintTextFile(char*, char*)
# range [0x0846d7e5, 0x0846d803]
0846d7e5 +0x00:  push   %ebp
0846d7e6 +0x01:  mov    %esp,%ebp
0846d7e8 +0x03:  sub    $0x18,%esp
0846d7eb +0x06:  movl   $0xffff,0x4(%esp)
0846d7f3 +0x0e:  movl   $0x1,(%esp)
0846d7fa +0x15:  call   0846d7a5 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0846d7ff +0x1a:  leave
0846d800 +0x1b:  ret
0846d801 +0x1c:  nop
0846d802 +0x1d:  nop
0846d803 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x846d7e5

/* CExceptLog::PrintTextFile(char*, char*) */

void CExceptLog::_GLOBAL__I_PrintTextFile(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
