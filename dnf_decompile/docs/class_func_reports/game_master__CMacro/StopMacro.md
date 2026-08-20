# StopMacro

`_ZN11game_master6CMacro9StopMacroEv`

`game_master::CMacro::StopMacro()`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a8678` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8678  _ZN11game_master6CMacro9StopMacroEv
#           game_master::CMacro::StopMacro()
# range [0x084a8678, 0x084a8685]
084a8678 +0x00:  push   %ebp
084a8679 +0x01:  mov    %esp,%ebp
084a867b +0x03:  mov    0x8(%ebp),%eax
084a867e +0x06:  movl   $0x0,(%eax)
084a8684 +0x0c:  pop    %ebp
084a8685 +0x0d:  ret
```

## 反编译 C

```c
// game_master::CMacro::StopMacro @ 0x84a8678

/* game_master::CMacro::StopMacro() */

void __thiscall game_master::CMacro::StopMacro(CMacro *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
