# checkAccountHackingHackType

`_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE`

`Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278a48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278a48  _ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE
#           Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)
# range [0x08278a48, 0x08278a97]
08278a48 +0x00:  push   %ebp
08278a49 +0x01:  mov    %esp,%ebp
08278a4b +0x03:  cmpl   $0x2c6,0x8(%ebp)
08278a52 +0x0a:  je     08278a8a <+0x42>
08278a54 +0x0c:  cmpl   $0x2c7,0x8(%ebp)
08278a5b +0x13:  je     08278a8a <+0x42>
08278a5d +0x15:  cmpl   $0x2c8,0x8(%ebp)
08278a64 +0x1c:  je     08278a8a <+0x42>
08278a66 +0x1e:  cmpl   $0x2c9,0x8(%ebp)
08278a6d +0x25:  je     08278a8a <+0x42>
08278a6f +0x27:  cmpl   $0x2ca,0x8(%ebp)
08278a76 +0x2e:  je     08278a8a <+0x42>
08278a78 +0x30:  cmpl   $0x2cb,0x8(%ebp)
08278a7f +0x37:  je     08278a8a <+0x42>
08278a81 +0x39:  cmpl   $0x2cd,0x8(%ebp)
08278a88 +0x40:  jne    08278a91 <+0x49>
08278a8a +0x42:  mov    $0x1,%eax
08278a8f +0x47:  jmp    08278a96 <+0x4e>
08278a91 +0x49:  mov    $0x0,%eax
08278a96 +0x4e:  pop    %ebp
08278a97 +0x4f:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::checkAccountHackingHackType @ 0x8278a48

/* Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE) */

undefined4 Secu_AccountHacking::checkAccountHackingHackType(int param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0x2c6) || (param_1 == 0x2c7)) || (param_1 == 0x2c8)) ||
     (((param_1 == 0x2c9 || (param_1 == 0x2ca)) || ((param_1 == 0x2cb || (param_1 == 0x2cd)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
