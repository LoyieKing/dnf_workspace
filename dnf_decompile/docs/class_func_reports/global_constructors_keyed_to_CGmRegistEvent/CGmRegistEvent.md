# CGmRegistEvent

`_GLOBAL__I__ZN14CGmRegistEventC2Ev`

`global constructors keyed to CGmRegistEvent::CGmRegistEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CGmRegistEvent` | `0x0811cdf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cdf4  _GLOBAL__I__ZN14CGmRegistEventC2Ev
#           global constructors keyed to CGmRegistEvent::CGmRegistEvent()
# range [0x0811cdf4, 0x0811ce0f]
0811cdf4 +0x00:  push   %ebp
0811cdf5 +0x01:  mov    %esp,%ebp
0811cdf7 +0x03:  sub    $0x18,%esp
0811cdfa +0x06:  movl   $0xffff,0x4(%esp)
0811ce02 +0x0e:  movl   $0x1,(%esp)
0811ce09 +0x15:  call   0811cdb4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811ce0e +0x1a:  leave
0811ce0f +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x811cdf4

/* CGmRegistEvent::CGmRegistEvent() */

void CGmRegistEvent::_GLOBAL__I_CGmRegistEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
