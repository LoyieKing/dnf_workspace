# _GetUpgradeInfo

`_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi`

`WongWork::CItemUpgrade_Separate::_GetUpgradeInfo(Inven_Item const*, CItem const*, GenuineDamageUpgradeTable const&, WongWork::STUpgradeInfo*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e2e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e2e2  _ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi
#           WongWork::CItemUpgrade_Separate::_GetUpgradeInfo(Inven_Item const*, CItem const*, GenuineDamageUpgradeTable const&, WongWork::STUpgradeInfo*, int)
# range [0x0811e2e2, 0x0811e467]
0811e2e2 +0x000:  push   %ebp
0811e2e3 +0x001:  mov    %esp,%ebp
0811e2e5 +0x003:  push   %esi
0811e2e6 +0x004:  push   %ebx
0811e2e7 +0x005:  sub    $0x50,%esp
0811e2ea +0x008:  mov    0xc(%ebp),%eax
0811e2ed +0x00b:  add    $0x33,%eax
0811e2f0 +0x00e:  mov    %eax,(%esp)
0811e2f3 +0x011:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e2f8 +0x016:  movzbl %al,%edx
0811e2fb +0x019:  mov    0x14(%ebp),%eax
0811e2fe +0x01c:  mov    0x4(%eax),%eax
0811e301 +0x01f:  cmp    %eax,%edx
0811e303 +0x021:  jg     0811e31a <+0x38>
0811e305 +0x023:  mov    0xc(%ebp),%eax
0811e308 +0x026:  add    $0x33,%eax
0811e30b +0x029:  mov    %eax,(%esp)
0811e30e +0x02c:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e313 +0x031:  mov    $0x0,%eax
0811e318 +0x036:  jmp    0811e31f <+0x3d>
0811e31a +0x038:  mov    $0x1,%eax
0811e31f +0x03d:  test   %al,%al
0811e321 +0x03f:  je     0811e32d <+0x4b>
0811e323 +0x041:  mov    $0x0,%eax
0811e328 +0x046:  jmp    0811e45e <+0x17c>
0811e32d +0x04b:  mov    0x10(%ebp),%eax
0811e330 +0x04e:  mov    0x1c(%ebp),%edx
0811e333 +0x051:  mov    %edx,0x4(%esp)
0811e337 +0x055:  mov    %eax,(%esp)
0811e33a +0x058:  call   085137b8 <_ZNK10CEquipItem14getGrowthGradeEi>  ; CEquipItem::getGrowthGrade(int) const
0811e33f +0x05d:  mov    %al,-0xd(%ebp)
0811e342 +0x060:  mov    0x10(%ebp),%eax
0811e345 +0x063:  mov    %eax,(%esp)
0811e348 +0x066:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0811e34d +0x06b:  mov    %eax,%ebx
0811e34f +0x06d:  mov    0x10(%ebp),%eax
0811e352 +0x070:  mov    (%eax),%eax
0811e354 +0x072:  add    $0xc,%eax
0811e357 +0x075:  mov    (%eax),%edx
0811e359 +0x077:  mov    0x10(%ebp),%eax
0811e35c +0x07a:  mov    %eax,(%esp)
0811e35f +0x07d:  call   *%edx
0811e361 +0x07f:  mov    %eax,%esi
0811e363 +0x081:  mov    0xc(%ebp),%eax
0811e366 +0x084:  add    $0x33,%eax
0811e369 +0x087:  mov    %eax,(%esp)
0811e36c +0x08a:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e371 +0x08f:  movzbl %al,%edx
0811e374 +0x092:  movzbl -0xd(%ebp),%eax
0811e378 +0x096:  mov    %ebx,0x10(%esp)
0811e37c +0x09a:  mov    %esi,0xc(%esp)
0811e380 +0x09e:  mov    %edx,0x8(%esp)
0811e384 +0x0a2:  mov    %eax,0x4(%esp)
0811e388 +0x0a6:  mov    0x14(%ebp),%eax
0811e38b +0x0a9:  mov    %eax,(%esp)
0811e38e +0x0ac:  call   08912b88 <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY>  ; GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt(unsigned char, int, ENUM_EQUIPMENTTYPE, ENUM_RARITY) const
0811e393 +0x0b1:  mov    %eax,-0xc(%ebp)
0811e396 +0x0b4:  cmpl   $0x0,-0xc(%ebp)
0811e39a +0x0b8:  jns    0811e3a6 <+0xc4>
0811e39c +0x0ba:  mov    $0x0,%eax
0811e3a1 +0x0bf:  jmp    0811e45e <+0x17c>
0811e3a6 +0x0c4:  mov    0xc(%ebp),%eax
0811e3a9 +0x0c7:  add    $0x33,%eax
0811e3ac +0x0ca:  mov    %eax,(%esp)
0811e3af +0x0cd:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e3b4 +0x0d2:  movzbl %al,%eax
0811e3b7 +0x0d5:  add    $0x1,%eax
0811e3ba +0x0d8:  mov    %eax,-0x18(%ebp)
0811e3bd +0x0db:  mov    0x14(%ebp),%eax
0811e3c0 +0x0de:  lea    0x158(%eax),%ecx
0811e3c6 +0x0e4:  lea    -0x1c(%ebp),%eax
0811e3c9 +0x0e7:  lea    -0x18(%ebp),%edx
0811e3cc +0x0ea:  mov    %edx,0x8(%esp)
0811e3d0 +0x0ee:  mov    %ecx,0x4(%esp)
0811e3d4 +0x0f2:  mov    %eax,(%esp)
0811e3d7 +0x0f5:  call   0811f13a <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x435>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x435
0811e3dc +0x0fa:  sub    $0x4,%esp
0811e3df +0x0fd:  mov    0x14(%ebp),%eax
0811e3e2 +0x100:  lea    0x158(%eax),%edx
0811e3e8 +0x106:  lea    -0x14(%ebp),%eax
0811e3eb +0x109:  mov    %edx,0x4(%esp)
0811e3ef +0x10d:  mov    %eax,(%esp)
0811e3f2 +0x110:  call   0811f166 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x461>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x461
0811e3f7 +0x115:  sub    $0x4,%esp
0811e3fa +0x118:  lea    -0x14(%ebp),%eax
0811e3fd +0x11b:  mov    %eax,0x4(%esp)
0811e401 +0x11f:  lea    -0x1c(%ebp),%eax
0811e404 +0x122:  mov    %eax,(%esp)
0811e407 +0x125:  call   0811f18c <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x487>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x487
0811e40c +0x12a:  test   %al,%al
0811e40e +0x12c:  je     0811e417 <+0x135>
0811e410 +0x12e:  mov    $0x0,%eax
0811e415 +0x133:  jmp    0811e45e <+0x17c>
0811e417 +0x135:  mov    -0xc(%ebp),%edx
0811e41a +0x138:  mov    0x18(%ebp),%eax
0811e41d +0x13b:  mov    %edx,(%eax)
0811e41f +0x13d:  lea    -0x1c(%ebp),%eax
0811e422 +0x140:  mov    %eax,(%esp)
0811e425 +0x143:  call   0811f1a0 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x49b>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x49b
0811e42a +0x148:  flds   0xc(%eax)
0811e42d +0x14b:  flds   &data#a0da4829(.rodata)
0811e433 +0x151:  fmulp  %st,%st(1)
0811e435 +0x153:  fnstcw -0x2a(%ebp)
0811e438 +0x156:  movzwl -0x2a(%ebp),%eax
0811e43c +0x15a:  mov    $0xc,%ah
0811e43e +0x15c:  mov    %ax,-0x2c(%ebp)
0811e442 +0x160:  fldcw  -0x2c(%ebp)
0811e445 +0x163:  fistpll -0x38(%ebp)
0811e448 +0x166:  fldcw  -0x2a(%ebp)
0811e44b +0x169:  mov    -0x38(%ebp),%eax
0811e44e +0x16c:  mov    -0x34(%ebp),%edx
0811e451 +0x16f:  mov    %eax,%edx
0811e453 +0x171:  mov    0x18(%ebp),%eax
0811e456 +0x174:  mov    %edx,0x4(%eax)
0811e459 +0x177:  mov    $0x1,%eax
0811e45e +0x17c:  lea    -0x8(%ebp),%esp
0811e461 +0x17f:  add    $0x0,%esp
0811e464 +0x182:  pop    %ebx
0811e465 +0x183:  pop    %esi
0811e466 +0x184:  pop    %ebp
0811e467 +0x185:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::_GetUpgradeInfo @ 0x811e2e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade_Separate::_GetUpgradeInfo(Inven_Item const*, CItem const*,
   GenuineDamageUpgradeTable const&, WongWork::STUpgradeInfo*, int) */

undefined4 __thiscall
WongWork::CItemUpgrade_Separate::_GetUpgradeInfo
          (CItemUpgrade_Separate *this,Inven_Item *param_1,CItem *param_2,
          GenuineDamageUpgradeTable *param_3,STUpgradeInfo *param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_3c;
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>> local_20 [4];
  int local_1c;
  map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
  local_18 [7];
  undefined1 local_11;
  int local_10;
  
  uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
  if (*(int *)(param_3 + 4) < (int)(uVar3 & 0xff)) {
    uVar4 = 0;
  }
  else {
    UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
    local_11 = CEquipItem::getGrowthGrade((CEquipItem *)param_2,param_5);
    uVar4 = CItem::get_rarity(param_2);
    uVar5 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    uVar1 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
    local_10 = GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt
                         (param_3,local_11,uVar1,uVar5,uVar4);
    if (local_10 < 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
      local_1c = (uVar3 & 0xff) + 1;
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::find((int *)local_20);
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::end(local_18);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
              operator==(local_20,(_Rb_tree_const_iterator *)local_18);
      if (cVar2 == '\0') {
        *(int *)param_4 = local_10;
        iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
                operator->(local_20);
        local_3c = (undefined4)(longlong)ROUND(_DAT_08b575b0 * *(float *)(iVar6 + 0xc));
        *(undefined4 *)(param_4 + 4) = local_3c;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```
