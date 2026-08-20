# ThreadInterface

`_GLOBAL__I__ZN15ThreadInterfaceC2Ev`

`global constructors keyed to ThreadInterface::ThreadInterface()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ThreadInterface` | `0x08630cb9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630cb9  _GLOBAL__I__ZN15ThreadInterfaceC2Ev
#           global constructors keyed to ThreadInterface::ThreadInterface()
# range [0x08630cb9, 0x08630cd7]
08630cb9 +0x00:  push   %ebp
08630cba +0x01:  mov    %esp,%ebp
08630cbc +0x03:  sub    $0x18,%esp
08630cbf +0x06:  movl   $0xffff,0x4(%esp)
08630cc7 +0x0e:  movl   $0x1,(%esp)
08630cce +0x15:  call   08630c79 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08630cd3 +0x1a:  leave
08630cd4 +0x1b:  ret
08630cd5 +0x1c:  nop
08630cd6 +0x1d:  nop
08630cd7 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8630cb9

/* ThreadInterface::ThreadInterface() */

void ThreadInterface::_GLOBAL__I_ThreadInterface(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
