# _determine_rarity

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c976` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c976  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity(unsigned int, ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const
# range [0x0832c976, 0x0832c9c9]
0832c976 +0x00:  push   %ebp
0832c977 +0x01:  mov    %esp,%ebp
0832c979 +0x03:  sub    $0x10,%esp
0832c97c +0x06:  mov    0x10(%ebp),%eax
0832c97f +0x09:  test   %eax,%eax
0832c981 +0x0b:  js     0832c98b <+0x15>
0832c983 +0x0d:  mov    0x10(%ebp),%eax
0832c986 +0x10:  cmp    $0x2,%eax
0832c989 +0x13:  jle    0832c992 <+0x1c>
0832c98b +0x15:  mov    $0x0,%eax
0832c990 +0x1a:  jmp    0832c9c8 <+0x52>
0832c992 +0x1c:  movl   $0x0,-0x4(%ebp)
0832c999 +0x23:  jmp    0832c9b7 <+0x41>
0832c99b +0x25:  mov    0x10(%ebp),%ecx
0832c99e +0x28:  mov    -0x4(%ebp),%edx
0832c9a1 +0x2b:  mov    0x8(%ebp),%eax
0832c9a4 +0x2e:  shl    $0x2,%ecx
0832c9a7 +0x31:  lea    (%ecx,%edx,1),%edx
0832c9aa +0x34:  mov    0x4(%eax,%edx,4),%eax
0832c9ae +0x38:  cmp    0xc(%ebp),%eax
0832c9b1 +0x3b:  jae    0832c9c4 <+0x4e>
0832c9b3 +0x3d:  addl   $0x1,-0x4(%ebp)
0832c9b7 +0x41:  cmpl   $0x3,-0x4(%ebp)
0832c9bb +0x45:  setle  %al
0832c9be +0x48:  test   %al,%al
0832c9c0 +0x4a:  jne    0832c99b <+0x25>
0832c9c2 +0x4c:  jmp    0832c9c5 <+0x4f>
0832c9c4 +0x4e:  nop
0832c9c5 +0x4f:  mov    -0x4(%ebp),%eax
0832c9c8 +0x52:  leave
0832c9c9 +0x53:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity @ 0x832c976

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity(unsigned int,
   ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const */

int __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity
          (CCompound_ExtreamDun_Item *this,uint param_1,int param_3)

{
  int local_8;
  
  if ((param_3 < 0) || (2 < param_3)) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    while ((local_8 < 4 && (*(uint *)(this + (param_3 * 4 + local_8) * 4 + 4) < param_1))) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}
```
