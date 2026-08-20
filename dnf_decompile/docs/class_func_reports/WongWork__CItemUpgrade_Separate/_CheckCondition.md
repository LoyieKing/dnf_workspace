# _CheckCondition

`_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei`

`WongWork::CItemUpgrade_Separate::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, GenuineDamageUpgradeTable const&, int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e138` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e138  _ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei
#           WongWork::CItemUpgrade_Separate::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, GenuineDamageUpgradeTable const&, int) const
# range [0x0811e138, 0x0811e2cd]
0811e138 +0x000:  push   %ebp
0811e139 +0x001:  mov    %esp,%ebp
0811e13b +0x003:  push   %edi
0811e13c +0x004:  push   %esi
0811e13d +0x005:  push   %ebx
0811e13e +0x006:  sub    $0x4c,%esp
0811e141 +0x009:  mov    0x14(%ebp),%eax
0811e144 +0x00c:  mov    0x20(%ebp),%edx
0811e147 +0x00f:  mov    %edx,0x4(%esp)
0811e14b +0x013:  mov    %eax,(%esp)
0811e14e +0x016:  call   085137b8 <_ZNK10CEquipItem14getGrowthGradeEi>  ; CEquipItem::getGrowthGrade(int) const
0811e153 +0x01b:  mov    %al,-0x1d(%ebp)
0811e156 +0x01e:  movzbl -0x1d(%ebp),%eax
0811e15a +0x022:  mov    %eax,-0x28(%ebp)
0811e15d +0x025:  mov    0x1c(%ebp),%eax
0811e160 +0x028:  lea    0x140(%eax),%ecx
0811e166 +0x02e:  lea    -0x2c(%ebp),%eax
0811e169 +0x031:  lea    -0x28(%ebp),%edx
0811e16c +0x034:  mov    %edx,0x8(%esp)
0811e170 +0x038:  mov    %ecx,0x4(%esp)
0811e174 +0x03c:  mov    %eax,(%esp)
0811e177 +0x03f:  call   0811f0c6 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x3c1>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x3c1
0811e17c +0x044:  sub    $0x4,%esp
0811e17f +0x047:  mov    0x1c(%ebp),%eax
0811e182 +0x04a:  lea    0x140(%eax),%edx
0811e188 +0x050:  lea    -0x24(%ebp),%eax
0811e18b +0x053:  mov    %edx,0x4(%esp)
0811e18f +0x057:  mov    %eax,(%esp)
0811e192 +0x05a:  call   0811f0f2 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x3ed>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x3ed
0811e197 +0x05f:  sub    $0x4,%esp
0811e19a +0x062:  lea    -0x24(%ebp),%eax
0811e19d +0x065:  mov    %eax,0x4(%esp)
0811e1a1 +0x069:  lea    -0x2c(%ebp),%eax
0811e1a4 +0x06c:  mov    %eax,(%esp)
0811e1a7 +0x06f:  call   0811f118 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x413>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x413
0811e1ac +0x074:  test   %al,%al
0811e1ae +0x076:  je     0811e1ba <+0x82>
0811e1b0 +0x078:  mov    $0x1,%eax
0811e1b5 +0x07d:  jmp    0811e2c2 <+0x18a>
0811e1ba +0x082:  lea    -0x2c(%ebp),%eax
0811e1bd +0x085:  mov    %eax,(%esp)
0811e1c0 +0x088:  call   0811f12c <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x427>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x427
0811e1c5 +0x08d:  mov    0x4(%eax),%eax
0811e1c8 +0x090:  mov    %eax,-0x1c(%ebp)
0811e1cb +0x093:  mov    0x18(%ebp),%eax
0811e1ce +0x096:  mov    0x2(%eax),%edx
0811e1d1 +0x099:  mov    -0x1c(%ebp),%eax
0811e1d4 +0x09c:  cmp    %eax,%edx
0811e1d6 +0x09e:  je     0811e1e2 <+0xaa>
0811e1d8 +0x0a0:  mov    $0x16,%eax
0811e1dd +0x0a5:  jmp    0811e2c2 <+0x18a>
0811e1e2 +0x0aa:  mov    0x18(%ebp),%eax
0811e1e5 +0x0ad:  mov    0x7(%eax),%eax
0811e1e8 +0x0b0:  mov    %eax,%edi
0811e1ea +0x0b2:  mov    0x14(%ebp),%eax
0811e1ed +0x0b5:  mov    %eax,(%esp)
0811e1f0 +0x0b8:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0811e1f5 +0x0bd:  mov    %eax,%ebx
0811e1f7 +0x0bf:  mov    0x14(%ebp),%eax
0811e1fa +0x0c2:  mov    (%eax),%eax
0811e1fc +0x0c4:  add    $0xc,%eax
0811e1ff +0x0c7:  mov    (%eax),%edx
0811e201 +0x0c9:  mov    0x14(%ebp),%eax
0811e204 +0x0cc:  mov    %eax,(%esp)
0811e207 +0x0cf:  call   *%edx
0811e209 +0x0d1:  mov    %eax,%esi
0811e20b +0x0d3:  mov    0x10(%ebp),%eax
0811e20e +0x0d6:  add    $0x33,%eax
0811e211 +0x0d9:  mov    %eax,(%esp)
0811e214 +0x0dc:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e219 +0x0e1:  movzbl %al,%edx
0811e21c +0x0e4:  movzbl -0x1d(%ebp),%eax
0811e220 +0x0e8:  mov    %ebx,0x10(%esp)
0811e224 +0x0ec:  mov    %esi,0xc(%esp)
0811e228 +0x0f0:  mov    %edx,0x8(%esp)
0811e22c +0x0f4:  mov    %eax,0x4(%esp)
0811e230 +0x0f8:  mov    0x1c(%ebp),%eax
0811e233 +0x0fb:  mov    %eax,(%esp)
0811e236 +0x0fe:  call   08912b88 <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY>  ; GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt(unsigned char, int, ENUM_EQUIPMENTTYPE, ENUM_RARITY) const
0811e23b +0x103:  cmp    %eax,%edi
0811e23d +0x105:  setb   %al
0811e240 +0x108:  test   %al,%al
0811e242 +0x10a:  je     0811e24b <+0x113>
0811e244 +0x10c:  mov    $0x16,%eax
0811e249 +0x111:  jmp    0811e2c2 <+0x18a>
0811e24b +0x113:  mov    0x14(%ebp),%eax
0811e24e +0x116:  mov    (%eax),%eax
0811e250 +0x118:  add    $0xc,%eax
0811e253 +0x11b:  mov    (%eax),%edx
0811e255 +0x11d:  mov    0x14(%ebp),%eax
0811e258 +0x120:  mov    %eax,(%esp)
0811e25b +0x123:  call   *%edx
0811e25d +0x125:  cmp    $0xa,%eax
0811e260 +0x128:  setne  %al
0811e263 +0x12b:  test   %al,%al
0811e265 +0x12d:  je     0811e26e <+0x136>
0811e267 +0x12f:  mov    $0x13,%eax
0811e26c +0x134:  jmp    0811e2c2 <+0x18a>
0811e26e +0x136:  mov    0x10(%ebp),%eax
0811e271 +0x139:  movzwl 0xb(%eax),%eax
0811e275 +0x13d:  movzwl %ax,%ebx
0811e278 +0x140:  mov    0x14(%ebp),%eax
0811e27b +0x143:  mov    %eax,(%esp)
0811e27e +0x146:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0811e283 +0x14b:  cmp    %eax,%ebx
0811e285 +0x14d:  setne  %al
0811e288 +0x150:  test   %al,%al
0811e28a +0x152:  je     0811e293 <+0x15b>
0811e28c +0x154:  mov    $0x7,%eax
0811e291 +0x159:  jmp    0811e2c2 <+0x18a>
0811e293 +0x15b:  mov    0x10(%ebp),%eax
0811e296 +0x15e:  add    $0x33,%eax
0811e299 +0x161:  mov    %eax,(%esp)
0811e29c +0x164:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e2a1 +0x169:  movzbl %al,%eax
0811e2a4 +0x16c:  lea    0x1(%eax),%edx
0811e2a7 +0x16f:  mov    0x1c(%ebp),%eax
0811e2aa +0x172:  mov    0x4(%eax),%eax
0811e2ad +0x175:  cmp    %eax,%edx
0811e2af +0x177:  setg   %al
0811e2b2 +0x17a:  test   %al,%al
0811e2b4 +0x17c:  je     0811e2bd <+0x185>
0811e2b6 +0x17e:  mov    $0x5f,%eax
0811e2bb +0x183:  jmp    0811e2c2 <+0x18a>
0811e2bd +0x185:  mov    $0x0,%eax
0811e2c2 +0x18a:  lea    -0xc(%ebp),%esp
0811e2c5 +0x18d:  add    $0x0,%esp
0811e2c8 +0x190:  pop    %ebx
0811e2c9 +0x191:  pop    %esi
0811e2ca +0x192:  pop    %edi
0811e2cb +0x193:  pop    %ebp
0811e2cc +0x194:  ret
0811e2cd +0x195:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::_CheckCondition @ 0x811e138

/* WongWork::CItemUpgrade_Separate::_CheckCondition(CUser const*, Inven_Item const&, CItem const*,
   Inven_Item const&, GenuineDamageUpgradeTable const&, int) const */

undefined4 __thiscall
WongWork::CItemUpgrade_Separate::_CheckCondition
          (CItemUpgrade_Separate *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,
          Inven_Item *param_4,GenuineDamageUpgradeTable *param_5,int param_6)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>> local_30 [4];
  uint local_2c;
  map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
  local_28 [7];
  byte local_21;
  int local_20;
  
  local_21 = CEquipItem::getGrowthGrade((CEquipItem *)param_3,param_6);
  local_2c = (uint)local_21;
  std::
  map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
  ::find((int *)local_30);
  std::
  map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
  ::end(local_28);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>::
          operator==(local_30,(_Rb_tree_const_iterator *)local_28);
  if (cVar2 == '\0') {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>::
            operator->(local_30);
    local_20 = *(int *)(iVar5 + 4);
    if (*(int *)(param_4 + 2) == local_20) {
      uVar8 = *(uint *)(param_4 + 7);
      uVar4 = CItem::get_rarity(param_3);
      uVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
      uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
      uVar7 = GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt
                        (param_5,local_21,uVar3,uVar6,uVar4);
      if (uVar8 < uVar7) {
        uVar4 = 0x16;
      }
      else {
        iVar5 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
        if (iVar5 == 10) {
          uVar1 = *(ushort *)(param_2 + 0xb);
          uVar8 = CEquipItem::get_endurance((CEquipItem *)param_3);
          if (uVar1 == uVar8) {
            uVar8 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33))
            ;
            if (*(int *)(param_5 + 4) < (int)((uVar8 & 0xff) + 1)) {
              uVar4 = 0x5f;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 7;
          }
        }
        else {
          uVar4 = 0x13;
        }
      }
    }
    else {
      uVar4 = 0x16;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
