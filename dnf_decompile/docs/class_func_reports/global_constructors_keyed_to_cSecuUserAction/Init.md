# Init

`_GLOBAL__I__ZN15cSecuUserAction4InitEv`

`global constructors keyed to cSecuUserAction::Init()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to cSecuUserAction` | `0x0827b45d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b45d  _GLOBAL__I__ZN15cSecuUserAction4InitEv
#           global constructors keyed to cSecuUserAction::Init()
# range [0x0827b45d, 0x0827b47b]
0827b45d +0x00:  push   %ebp
0827b45e +0x01:  mov    %esp,%ebp
0827b460 +0x03:  sub    $0x18,%esp
0827b463 +0x06:  movl   $0xffff,0x4(%esp)
0827b46b +0x0e:  movl   $0x1,(%esp)
0827b472 +0x15:  call   0827b41d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827b477 +0x1a:  leave
0827b478 +0x1b:  ret
0827b479 +0x1c:  nop
0827b47a +0x1d:  nop
0827b47b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827b45d

/* cSecuUserAction::Init() */

void cSecuUserAction::_GLOBAL__I_Init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
