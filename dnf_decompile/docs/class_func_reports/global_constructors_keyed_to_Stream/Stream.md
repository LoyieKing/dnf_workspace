# Stream

`_GLOBAL__I__ZN6StreamC2Ev`

`global constructors keyed to Stream::Stream()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Stream` | `0x0861c999` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c999  _GLOBAL__I__ZN6StreamC2Ev
#           global constructors keyed to Stream::Stream()
# range [0x0861c999, 0x0861c9b7]
0861c999 +0x00:  push   %ebp
0861c99a +0x01:  mov    %esp,%ebp
0861c99c +0x03:  sub    $0x18,%esp
0861c99f +0x06:  movl   $0xffff,0x4(%esp)
0861c9a7 +0x0e:  movl   $0x1,(%esp)
0861c9ae +0x15:  call   0861c959 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0861c9b3 +0x1a:  leave
0861c9b4 +0x1b:  ret
0861c9b5 +0x1c:  nop
0861c9b6 +0x1d:  nop
0861c9b7 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x861c999

/* Stream::Stream() */

void Stream::_GLOBAL__I_Stream(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
