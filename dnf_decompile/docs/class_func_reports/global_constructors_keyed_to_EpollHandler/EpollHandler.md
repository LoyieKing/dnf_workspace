# EpollHandler

`_GLOBAL__I__ZN12EpollHandlerC2Ev`

`global constructors keyed to EpollHandler::EpollHandler()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to EpollHandler` | `0x0857c324` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c324  _GLOBAL__I__ZN12EpollHandlerC2Ev
#           global constructors keyed to EpollHandler::EpollHandler()
# range [0x0857c324, 0x0857c33f]
0857c324 +0x00:  push   %ebp
0857c325 +0x01:  mov    %esp,%ebp
0857c327 +0x03:  sub    $0x18,%esp
0857c32a +0x06:  movl   $0xffff,0x4(%esp)
0857c332 +0x0e:  movl   $0x1,(%esp)
0857c339 +0x15:  call   0857c2e4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0857c33e +0x1a:  leave
0857c33f +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x857c324

/* EpollHandler::EpollHandler() */

void EpollHandler::_GLOBAL__I_EpollHandler(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
