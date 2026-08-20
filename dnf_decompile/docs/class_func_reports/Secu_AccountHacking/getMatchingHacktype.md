# getMatchingHacktype

`_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE`

`Secu_AccountHacking::getMatchingHacktype(AccountHackingType::T)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x0827912a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827912a  _ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE
#           Secu_AccountHacking::getMatchingHacktype(AccountHackingType::T)
# range [0x0827912a, 0x08279181]
0827912a +0x00:  push   %ebp
0827912b +0x01:  mov    %esp,%ebp
0827912d +0x03:  cmpl   $0x0,0xc(%ebp)
08279131 +0x07:  jne    0827913a <+0x10>
08279133 +0x09:  mov    $0x2c6,%eax
08279138 +0x0e:  jmp    08279180 <+0x56>
0827913a +0x10:  cmpl   $0x1,0xc(%ebp)
0827913e +0x14:  jne    08279147 <+0x1d>
08279140 +0x16:  mov    $0x2c7,%eax
08279145 +0x1b:  jmp    08279180 <+0x56>
08279147 +0x1d:  cmpl   $0x2,0xc(%ebp)
0827914b +0x21:  jne    08279154 <+0x2a>
0827914d +0x23:  mov    $0x2c8,%eax
08279152 +0x28:  jmp    08279180 <+0x56>
08279154 +0x2a:  cmpl   $0x3,0xc(%ebp)
08279158 +0x2e:  jne    08279161 <+0x37>
0827915a +0x30:  mov    $0x2c9,%eax
0827915f +0x35:  jmp    08279180 <+0x56>
08279161 +0x37:  cmpl   $0x4,0xc(%ebp)
08279165 +0x3b:  jne    0827916e <+0x44>
08279167 +0x3d:  mov    $0x2ca,%eax
0827916c +0x42:  jmp    08279180 <+0x56>
0827916e +0x44:  cmpl   $0x5,0xc(%ebp)
08279172 +0x48:  jne    0827917b <+0x51>
08279174 +0x4a:  mov    $0x2cb,%eax
08279179 +0x4f:  jmp    08279180 <+0x56>
0827917b +0x51:  mov    $0xfa1,%eax
08279180 +0x56:  pop    %ebp
08279181 +0x57:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::getMatchingHacktype @ 0x827912a

/* Secu_AccountHacking::getMatchingHacktype(AccountHackingType::T) */

undefined4 __thiscall Secu_AccountHacking::getMatchingHacktype(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x2c6;
  }
  else if (param_2 == 1) {
    uVar1 = 0x2c7;
  }
  else if (param_2 == 2) {
    uVar1 = 0x2c8;
  }
  else if (param_2 == 3) {
    uVar1 = 0x2c9;
  }
  else if (param_2 == 4) {
    uVar1 = 0x2ca;
  }
  else if (param_2 == 5) {
    uVar1 = 0x2cb;
  }
  else {
    uVar1 = 0xfa1;
  }
  return uVar1;
}
```
