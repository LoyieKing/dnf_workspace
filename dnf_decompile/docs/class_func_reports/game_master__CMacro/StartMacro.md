# StartMacro

`_ZN11game_master6CMacro10StartMacroEv`

`game_master::CMacro::StartMacro()`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a865c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a865c  _ZN11game_master6CMacro10StartMacroEv
#           game_master::CMacro::StartMacro()
# range [0x084a865c, 0x084a8677]
084a865c +0x00:  push   %ebp
084a865d +0x01:  mov    %esp,%ebp
084a865f +0x03:  sub    $0x18,%esp
084a8662 +0x06:  mov    0x8(%ebp),%eax
084a8665 +0x09:  mov    %eax,(%esp)
084a8668 +0x0c:  call   084a85b4 <_ZN11game_master6CMacro5ResetEv>  ; game_master::CMacro::Reset()
084a866d +0x11:  mov    0x8(%ebp),%eax
084a8670 +0x14:  movl   $0x1,(%eax)
084a8676 +0x1a:  leave
084a8677 +0x1b:  ret
```

## 反编译 C

```c
// game_master::CMacro::StartMacro @ 0x84a865c

/* game_master::CMacro::StartMacro() */

void __thiscall game_master::CMacro::StartMacro(CMacro *this)

{
  Reset(this);
  *(undefined4 *)this = 1;
  return;
}
```
