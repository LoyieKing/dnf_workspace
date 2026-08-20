# Init

`_GLOBAL__I__ZN17Secu_HackLogCheck4InitEP5CUser`

`global constructors keyed to Secu_HackLogCheck::Init(CUser*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_HackLogCheck` | `0x0827a8d7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a8d7  _GLOBAL__I__ZN17Secu_HackLogCheck4InitEP5CUser
#           global constructors keyed to Secu_HackLogCheck::Init(CUser*)
# range [0x0827a8d7, 0x0827a8f3]
0827a8d7 +0x00:  push   %ebp
0827a8d8 +0x01:  mov    %esp,%ebp
0827a8da +0x03:  sub    $0x18,%esp
0827a8dd +0x06:  movl   $0xffff,0x4(%esp)
0827a8e5 +0x0e:  movl   $0x1,(%esp)
0827a8ec +0x15:  call   0827a897 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827a8f1 +0x1a:  leave
0827a8f2 +0x1b:  ret
0827a8f3 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827a8d7

/* Secu_HackLogCheck::Init(CUser*) */

void Secu_HackLogCheck::_GLOBAL__I_Init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
