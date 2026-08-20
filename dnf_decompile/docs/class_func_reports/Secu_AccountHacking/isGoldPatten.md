# isGoldPatten

`_ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE`

`Secu_AccountHacking::isGoldPatten(AccountHackingType::T)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08279258` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279258  _ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE
#           Secu_AccountHacking::isGoldPatten(AccountHackingType::T)
# range [0x08279258, 0x08279281]
08279258 +0x00:  push   %ebp
08279259 +0x01:  mov    %esp,%ebp
0827925b +0x03:  cmpl   $0x0,0xc(%ebp)
0827925f +0x07:  je     08279273 <+0x1b>
08279261 +0x09:  cmpl   $0x1,0xc(%ebp)
08279265 +0x0d:  je     08279273 <+0x1b>
08279267 +0x0f:  cmpl   $0x2,0xc(%ebp)
0827926b +0x13:  je     08279273 <+0x1b>
0827926d +0x15:  cmpl   $0x3,0xc(%ebp)
08279271 +0x19:  jne    0827927a <+0x22>
08279273 +0x1b:  mov    $0x1,%eax
08279278 +0x20:  jmp    0827927f <+0x27>
0827927a +0x22:  mov    $0x0,%eax
0827927f +0x27:  pop    %ebp
08279280 +0x28:  ret
08279281 +0x29:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::isGoldPatten @ 0x8279258

/* Secu_AccountHacking::isGoldPatten(AccountHackingType::T) */

undefined4 __thiscall Secu_AccountHacking::isGoldPatten(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || (param_2 == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
