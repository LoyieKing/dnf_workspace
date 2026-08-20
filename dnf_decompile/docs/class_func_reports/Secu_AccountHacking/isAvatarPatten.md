# isAvatarPatten

`_ZN19Secu_AccountHacking14isAvatarPattenEN18AccountHackingType1TE`

`Secu_AccountHacking::isAvatarPatten(AccountHackingType::T)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08279282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08279282  _ZN19Secu_AccountHacking14isAvatarPattenEN18AccountHackingType1TE
#           Secu_AccountHacking::isAvatarPatten(AccountHackingType::T)
# range [0x08279282, 0x0827929f]
08279282 +0x00:  push   %ebp
08279283 +0x01:  mov    %esp,%ebp
08279285 +0x03:  cmpl   $0x4,0xc(%ebp)
08279289 +0x07:  je     08279291 <+0xf>
0827928b +0x09:  cmpl   $0x5,0xc(%ebp)
0827928f +0x0d:  jne    08279298 <+0x16>
08279291 +0x0f:  mov    $0x1,%eax
08279296 +0x14:  jmp    0827929d <+0x1b>
08279298 +0x16:  mov    $0x0,%eax
0827929d +0x1b:  pop    %ebp
0827929e +0x1c:  ret
0827929f +0x1d:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::isAvatarPatten @ 0x8279282

/* Secu_AccountHacking::isAvatarPatten(AccountHackingType::T) */

undefined4 __thiscall Secu_AccountHacking::isAvatarPatten(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 4) || (param_2 == 5)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
