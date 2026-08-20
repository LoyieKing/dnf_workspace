# _FindItemAll_BindSphere

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832d438` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832d438  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const
# range [0x0832d438, 0x0832d4b3]
0832d438 +0x00:  push   %ebp
0832d439 +0x01:  mov    %esp,%ebp
0832d43b +0x03:  sub    $0x38,%esp
0832d43e +0x06:  mov    0x10(%ebp),%eax
0832d441 +0x09:  mov    %al,-0x1c(%ebp)
0832d444 +0x0c:  movl   $0x0,-0xc(%ebp)
0832d44b +0x13:  cmpb   $0x2,-0x1c(%ebp)
0832d44f +0x17:  jne    0832d46f <+0x37>
0832d451 +0x19:  lea    0x18(%ebp),%eax
0832d454 +0x1c:  mov    %eax,0x8(%esp)
0832d458 +0x20:  mov    0x14(%ebp),%eax
0832d45b +0x23:  mov    %eax,0x4(%esp)
0832d45f +0x27:  mov    0x8(%ebp),%eax
0832d462 +0x2a:  mov    %eax,(%esp)
0832d465 +0x2d:  call   0832d2ce <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem(ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const
0832d46a +0x32:  mov    %eax,-0xc(%ebp)
0832d46d +0x35:  jmp    0832d4af <+0x77>
0832d46f +0x37:  cmpb   $0x0,-0x1c(%ebp)
0832d473 +0x3b:  je     0832d47b <+0x43>
0832d475 +0x3d:  cmpb   $0x1,-0x1c(%ebp)
0832d479 +0x41:  jne    0832d4af <+0x77>
0832d47b +0x43:  movsbl -0x1c(%ebp),%eax
0832d47f +0x47:  shl    $0x2,%eax
0832d482 +0x4a:  add    0xc(%ebp),%eax
0832d485 +0x4d:  mov    (%eax),%eax
0832d487 +0x4f:  mov    %eax,(%esp)
0832d48a +0x52:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832d48f +0x57:  lea    0x18(%ebp),%edx
0832d492 +0x5a:  mov    %edx,0xc(%esp)
0832d496 +0x5e:  mov    0x14(%ebp),%edx
0832d499 +0x61:  mov    %edx,0x8(%esp)
0832d49d +0x65:  mov    %eax,0x4(%esp)
0832d4a1 +0x69:  mov    0x8(%ebp),%eax
0832d4a4 +0x6c:  mov    %eax,(%esp)
0832d4a7 +0x6f:  call   0832d15e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem(unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const
0832d4ac +0x74:  mov    %eax,-0xc(%ebp)
0832d4af +0x77:  mov    -0xc(%ebp),%eax
0832d4b2 +0x7a:  leave
0832d4b3 +0x7b:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere @ 0x832d438

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char,
   ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const */

undefined4
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere
          (CCompound_ExtreamDun_Item *param_1,int param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_3 == '\x02') {
    local_10 = _FindRandomItem(param_1,param_4,&stack0x00000014);
  }
  else if ((param_3 == '\0') || (param_3 == '\x01')) {
    uVar1 = CItem::getItemGroupName(*(CItem **)(param_3 * 4 + param_2));
    local_10 = _FindSelectItem(param_1,uVar1,param_4,&stack0x00000014);
  }
  return local_10;
}
```
