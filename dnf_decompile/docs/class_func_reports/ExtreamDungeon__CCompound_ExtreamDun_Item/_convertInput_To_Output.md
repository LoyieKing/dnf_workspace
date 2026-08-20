# _convertInput_To_Output

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c5f0  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const
# range [0x0832c5f0, 0x0832c61f]
0832c5f0 +0x00:  push   %ebp
0832c5f1 +0x01:  mov    %esp,%ebp
0832c5f3 +0x03:  mov    0xc(%ebp),%eax
0832c5f6 +0x06:  cmp    $0x1,%eax
0832c5f9 +0x09:  je     0832c60b <+0x1b>
0832c5fb +0x0b:  cmp    $0x2,%eax
0832c5fe +0x0e:  je     0832c612 <+0x22>
0832c600 +0x10:  test   %eax,%eax
0832c602 +0x12:  jne    0832c619 <+0x29>
0832c604 +0x14:  mov    $0x0,%eax
0832c609 +0x19:  jmp    0832c61e <+0x2e>
0832c60b +0x1b:  mov    $0x2,%eax
0832c610 +0x20:  jmp    0832c61e <+0x2e>
0832c612 +0x22:  mov    $0x3,%eax
0832c617 +0x27:  jmp    0832c61e <+0x2e>
0832c619 +0x29:  mov    $0x4,%eax
0832c61e +0x2e:  pop    %ebp
0832c61f +0x2f:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output @ 0x832c5f0

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(ExtreamDungeon::ENUM_INPUTITEMS_RARITY)
   const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = 2;
  }
  else if (param_2 == 2) {
    uVar1 = 3;
  }
  else if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}
```
