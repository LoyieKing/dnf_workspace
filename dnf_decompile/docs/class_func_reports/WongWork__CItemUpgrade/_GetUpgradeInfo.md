# _GetUpgradeInfo

`_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti`

`WongWork::CItemUpgrade::_GetUpgradeInfo(Inven_Item const*, CItem const*, upgrade_table_t const&, upgrade_info_t*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854678a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854678a  _ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti
#           WongWork::CItemUpgrade::_GetUpgradeInfo(Inven_Item const*, CItem const*, upgrade_table_t const&, upgrade_info_t*, int)
# range [0x0854678a, 0x08546823]
0854678a +0x00:  push   %ebp
0854678b +0x01:  mov    %esp,%ebp
0854678d +0x03:  push   %edi
0854678e +0x04:  push   %esi
0854678f +0x05:  push   %ebx
08546790 +0x06:  sub    $0x3c,%esp
08546793 +0x09:  mov    0xc(%ebp),%eax
08546796 +0x0c:  mov    %eax,(%esp)
08546799 +0x0f:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0854679e +0x14:  cmp    $0x1e,%al
085467a0 +0x16:  seta   %al
085467a3 +0x19:  test   %al,%al
085467a5 +0x1b:  je     085467ae <+0x24>
085467a7 +0x1d:  mov    $0x0,%eax
085467ac +0x22:  jmp    0854681b <+0x91>
085467ae +0x24:  mov    0x10(%ebp),%eax
085467b1 +0x27:  mov    0x1c(%ebp),%edx
085467b4 +0x2a:  mov    %edx,0x4(%esp)
085467b8 +0x2e:  mov    %eax,(%esp)
085467bb +0x31:  call   085137b8 <_ZNK10CEquipItem14getGrowthGradeEi>  ; CEquipItem::getGrowthGrade(int) const
085467c0 +0x36:  mov    %eax,-0x1c(%ebp)
085467c3 +0x39:  mov    0x10(%ebp),%eax
085467c6 +0x3c:  mov    (%eax),%eax
085467c8 +0x3e:  add    $0xc,%eax
085467cb +0x41:  mov    (%eax),%edx
085467cd +0x43:  mov    0x10(%ebp),%eax
085467d0 +0x46:  mov    %eax,(%esp)
085467d3 +0x49:  call   *%edx
085467d5 +0x4b:  mov    %eax,%edi
085467d7 +0x4d:  mov    0xc(%ebp),%eax
085467da +0x50:  mov    %eax,(%esp)
085467dd +0x53:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085467e2 +0x58:  movzbl %al,%esi
085467e5 +0x5b:  mov    -0x1c(%ebp),%eax
085467e8 +0x5e:  movzbl %al,%ebx
085467eb +0x61:  mov    0x10(%ebp),%eax
085467ee +0x64:  mov    %eax,(%esp)
085467f1 +0x67:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085467f6 +0x6c:  movzbl %al,%eax
085467f9 +0x6f:  mov    %edi,0x14(%esp)
085467fd +0x73:  mov    %esi,0x10(%esp)
08546801 +0x77:  mov    %ebx,0xc(%esp)
08546805 +0x7b:  mov    %eax,0x8(%esp)
08546809 +0x7f:  mov    0x18(%ebp),%eax
0854680c +0x82:  mov    %eax,0x4(%esp)
08546810 +0x86:  mov    0x14(%ebp),%eax
08546813 +0x89:  mov    %eax,(%esp)
08546816 +0x8c:  call   08900436 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE>  ; upgrade_table_t::get_upgrade_info(upgrade_info_t*, unsigned char, unsigned char, unsigned char, ENUM_EQUIPMENTTYPE) const
0854681b +0x91:  add    $0x3c,%esp
0854681e +0x94:  pop    %ebx
0854681f +0x95:  pop    %esi
08546820 +0x96:  pop    %edi
08546821 +0x97:  pop    %ebp
08546822 +0x98:  ret
08546823 +0x99:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_GetUpgradeInfo @ 0x854678a

/* WongWork::CItemUpgrade::_GetUpgradeInfo(Inven_Item const*, CItem const*, upgrade_table_t const&,
   upgrade_info_t*, int) */

undefined4 __thiscall
WongWork::CItemUpgrade::_GetUpgradeInfo
          (CItemUpgrade *this,Inven_Item *param_1,CItem *param_2,upgrade_table_t *param_3,
          upgrade_info_t *param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  bVar1 = Inven_Item::GetUpgrade(param_1);
  if (bVar1 < 0x1f) {
    uVar2 = CEquipItem::getGrowthGrade((CEquipItem *)param_2,param_5);
    uVar5 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    uVar3 = Inven_Item::GetUpgrade(param_1);
    uVar4 = CItem::get_rarity(param_2);
    uVar5 = upgrade_table_t::get_upgrade_info(param_3,param_4,uVar4,uVar2,uVar3,uVar5);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
