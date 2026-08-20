# Init

`_GLOBAL__I__ZN24Secu_HackLogCheckByParty4InitEP6CParty`

`global constructors keyed to Secu_HackLogCheckByParty::Init(CParty*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_HackLogCheckByParty` | `0x0827ab1d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ab1d  _GLOBAL__I__ZN24Secu_HackLogCheckByParty4InitEP6CParty
#           global constructors keyed to Secu_HackLogCheckByParty::Init(CParty*)
# range [0x0827ab1d, 0x0827ab67]
0827ab1d +0x00:  push   %ebp
0827ab1e +0x01:  mov    %esp,%ebp
0827ab20 +0x03:  sub    $0x18,%esp
0827ab23 +0x06:  movl   $0xffff,0x4(%esp)
0827ab2b +0x0e:  movl   $0x1,(%esp)
0827ab32 +0x15:  call   0827aadd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827ab37 +0x1a:  leave
0827ab38 +0x1b:  ret
0827ab39 +0x1c:  nop
0827ab3a +0x1d:  push   %ebp
0827ab3b +0x1e:  mov    %esp,%ebp
0827ab3d +0x20:  mov    0x8(%ebp),%eax
0827ab40 +0x23:  movzbl 0x324(%eax),%eax
0827ab47 +0x2a:  pop    %ebp
0827ab48 +0x2b:  ret
0827ab49 +0x2c:  nop
0827ab4a +0x2d:  push   %ebp
0827ab4b +0x2e:  mov    %esp,%ebp
0827ab4d +0x30:  sub    $0x4,%esp
0827ab50 +0x33:  mov    0xc(%ebp),%eax
0827ab53 +0x36:  mov    %al,-0x4(%ebp)
0827ab56 +0x39:  mov    0x8(%ebp),%eax
0827ab59 +0x3c:  movzbl -0x4(%ebp),%edx
0827ab5d +0x40:  mov    %dl,0x324(%eax)
0827ab63 +0x46:  leave
0827ab64 +0x47:  ret
0827ab65 +0x48:  nop
0827ab66 +0x49:  nop
0827ab67 +0x4a:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827ab1d

/* Secu_HackLogCheckByParty::Init(CParty*) */

void Secu_HackLogCheckByParty::_GLOBAL__I_Init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
