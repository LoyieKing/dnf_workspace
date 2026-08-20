# Sleep

`_GLOBAL__I__ZN6OS_API5SleepEi`

`global constructors keyed to OS_API::Sleep(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to OS_API` | `0x0858c890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c890  _GLOBAL__I__ZN6OS_API5SleepEi
#           global constructors keyed to OS_API::Sleep(int)
# range [0x0858c890, 0x0858c8ab]
0858c890 +0x00:  push   %ebp
0858c891 +0x01:  mov    %esp,%ebp
0858c893 +0x03:  sub    $0x18,%esp
0858c896 +0x06:  movl   $0xffff,0x4(%esp)
0858c89e +0x0e:  movl   $0x1,(%esp)
0858c8a5 +0x15:  call   0858c850 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0858c8aa +0x1a:  leave
0858c8ab +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x858c890

/* OS_API::Sleep(int) */

void OS_API::_GLOBAL__I_Sleep(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
