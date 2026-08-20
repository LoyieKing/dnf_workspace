# _exception_Rare

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, unsigned int) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832cffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832cffe  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, unsigned int) const
# range [0x0832cffe, 0x0832d15d]
0832cffe +0x000:  push   %ebp
0832cfff +0x001:  mov    %esp,%ebp
0832d001 +0x003:  push   %ebx
0832d002 +0x004:  sub    $0x64,%esp
0832d005 +0x007:  mov    0x10(%ebp),%eax
0832d008 +0x00a:  mov    %al,-0x3c(%ebp)
0832d00b +0x00d:  movl   $0x0,-0x14(%ebp)
0832d012 +0x014:  movl   $0x0,-0x10(%ebp)
0832d019 +0x01b:  jmp    0832d146 <+0x148>
0832d01e +0x020:  mov    0x14(%ebp),%eax
0832d021 +0x023:  mov    %eax,-0xc(%ebp)
0832d024 +0x026:  jmp    0832d132 <+0x134>
0832d029 +0x02b:  cmpl   $0x0,-0xc(%ebp)
0832d02d +0x02f:  jg     0832d0b6 <+0xb8>
0832d033 +0x035:  mov    -0x10(%ebp),%edx
0832d036 +0x038:  mov    %edx,%eax
0832d038 +0x03a:  shl    $0x2,%eax
0832d03b +0x03d:  add    %edx,%eax
0832d03d +0x03f:  add    0x18(%ebp),%eax
0832d040 +0x042:  add    $0x5,%eax
0832d043 +0x045:  mov    %eax,-0x2c(%ebp)
0832d046 +0x048:  mov    -0x10(%ebp),%edx
0832d049 +0x04b:  mov    %edx,%eax
0832d04b +0x04d:  shl    $0x2,%eax
0832d04e +0x050:  add    %edx,%eax
0832d050 +0x052:  add    0x18(%ebp),%eax
0832d053 +0x055:  add    $0x1,%eax
0832d056 +0x058:  mov    %eax,-0x28(%ebp)
0832d059 +0x05b:  lea    -0x2c(%ebp),%eax
0832d05c +0x05e:  mov    %eax,0x8(%esp)
0832d060 +0x062:  lea    -0x28(%ebp),%eax
0832d063 +0x065:  mov    %eax,0x4(%esp)
0832d067 +0x069:  lea    -0x34(%ebp),%eax
0832d06a +0x06c:  mov    %eax,(%esp)
0832d06d +0x06f:  call   0832e58a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5e8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5e8
0832d072 +0x074:  mov    -0xc(%ebp),%ebx
0832d075 +0x077:  movsbl -0x3c(%ebp),%ecx
0832d079 +0x07b:  mov    -0x34(%ebp),%eax
0832d07c +0x07e:  mov    -0x30(%ebp),%edx
0832d07f +0x081:  mov    %eax,0x10(%esp)
0832d083 +0x085:  mov    %edx,0x14(%esp)
0832d087 +0x089:  mov    %ebx,0xc(%esp)
0832d08b +0x08d:  mov    %ecx,0x8(%esp)
0832d08f +0x091:  mov    0xc(%ebp),%eax
0832d092 +0x094:  mov    %eax,0x4(%esp)
0832d096 +0x098:  mov    0x8(%ebp),%eax
0832d099 +0x09b:  mov    %eax,(%esp)
0832d09c +0x09e:  call   0832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const
0832d0a1 +0x0a3:  mov    %eax,-0x14(%ebp)
0832d0a4 +0x0a6:  cmpl   $0x0,-0x14(%ebp)
0832d0a8 +0x0aa:  je     0832d12e <+0x130>
0832d0ae +0x0b0:  mov    -0x14(%ebp),%eax
0832d0b1 +0x0b3:  jmp    0832d158 <+0x15a>
0832d0b6 +0x0b8:  cmpl   $0x1,-0xc(%ebp)
0832d0ba +0x0bc:  jle    0832d12e <+0x130>
0832d0bc +0x0be:  mov    -0x10(%ebp),%edx
0832d0bf +0x0c1:  mov    %edx,%eax
0832d0c1 +0x0c3:  shl    $0x2,%eax
0832d0c4 +0x0c6:  add    %edx,%eax
0832d0c6 +0x0c8:  add    0x18(%ebp),%eax
0832d0c9 +0x0cb:  mov    %eax,-0x1c(%ebp)
0832d0cc +0x0ce:  mov    -0x10(%ebp),%eax
0832d0cf +0x0d1:  mov    0x18(%ebp),%edx
0832d0d2 +0x0d4:  lea    (%edx,%eax,1),%eax
0832d0d5 +0x0d7:  mov    %eax,-0x18(%ebp)
0832d0d8 +0x0da:  lea    -0x1c(%ebp),%eax
0832d0db +0x0dd:  mov    %eax,0x8(%esp)
0832d0df +0x0e1:  lea    -0x18(%ebp),%eax
0832d0e2 +0x0e4:  mov    %eax,0x4(%esp)
0832d0e6 +0x0e8:  lea    -0x24(%ebp),%eax
0832d0e9 +0x0eb:  mov    %eax,(%esp)
0832d0ec +0x0ee:  call   0832e58a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x5e8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x5e8
0832d0f1 +0x0f3:  mov    -0xc(%ebp),%ebx
0832d0f4 +0x0f6:  movsbl -0x3c(%ebp),%ecx
0832d0f8 +0x0fa:  mov    -0x24(%ebp),%eax
0832d0fb +0x0fd:  mov    -0x20(%ebp),%edx
0832d0fe +0x100:  mov    %eax,0x10(%esp)
0832d102 +0x104:  mov    %edx,0x14(%esp)
0832d106 +0x108:  mov    %ebx,0xc(%esp)
0832d10a +0x10c:  mov    %ecx,0x8(%esp)
0832d10e +0x110:  mov    0xc(%ebp),%eax
0832d111 +0x113:  mov    %eax,0x4(%esp)
0832d115 +0x117:  mov    0x8(%ebp),%eax
0832d118 +0x11a:  mov    %eax,(%esp)
0832d11b +0x11d:  call   0832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const
0832d120 +0x122:  mov    %eax,-0x14(%ebp)
0832d123 +0x125:  cmpl   $0x0,-0x14(%ebp)
0832d127 +0x129:  je     0832d12e <+0x130>
0832d129 +0x12b:  mov    -0x14(%ebp),%eax
0832d12c +0x12e:  jmp    0832d158 <+0x15a>
0832d12e +0x130:  subl   $0x1,-0xc(%ebp)
0832d132 +0x134:  mov    -0xc(%ebp),%eax
0832d135 +0x137:  not    %eax
0832d137 +0x139:  shr    $0x1f,%eax
0832d13a +0x13c:  test   %al,%al
0832d13c +0x13e:  jne    0832d029 <+0x2b>
0832d142 +0x144:  addl   $0x1,-0x10(%ebp)
0832d146 +0x148:  cmpl   $0x1,-0x10(%ebp)
0832d14a +0x14c:  setbe  %al
0832d14d +0x14f:  test   %al,%al
0832d14f +0x151:  jne    0832d01e <+0x20>
0832d155 +0x157:  mov    -0x14(%ebp),%eax
0832d158 +0x15a:  add    $0x64,%esp
0832d15b +0x15d:  pop    %ebx
0832d15c +0x15e:  pop    %ebp
0832d15d +0x15f:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare @ 0x832cffe

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare(CEquipItem const**, char,
   ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, unsigned int) const */

int __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare
          (CCompound_ExtreamDun_Item *this,undefined4 param_1,char param_2,int param_4,int param_5)

{
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  do {
    if (1 < local_14) {
      return local_18;
    }
    for (local_10 = param_4; -1 < local_10; local_10 = local_10 + -1) {
      if (local_10 < 1) {
        local_30 = local_14 * 5 + param_5 + 5;
        local_2c = local_14 * 5 + param_5 + 1;
        std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                  ((pair<unsigned_int,unsigned_int> *)&local_38,&local_2c,&local_30);
        local_18 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_10,local_38,local_34);
joined_r0x0832d127:
        if (local_18 != 0) {
          return local_18;
        }
      }
      else if (1 < local_10) {
        local_20 = local_14 * 5 + param_5;
        local_1c = param_5 + local_14;
        std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                  ((pair<unsigned_int,unsigned_int> *)&local_28,&local_1c,&local_20);
        local_18 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_10,local_28,local_24);
        goto joined_r0x0832d127;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
