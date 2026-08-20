# _DoProcUpgrade

`_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t`

`WongWork::CItemUpgrade::_DoProcUpgrade(CUser*, Inven_Item*, upgrade_info_t const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854755a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854755a  _ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t
#           WongWork::CItemUpgrade::_DoProcUpgrade(CUser*, Inven_Item*, upgrade_info_t const*)
# range [0x0854755a, 0x0854779b]
0854755a +0x000:  push   %ebp
0854755b +0x001:  mov    %esp,%ebp
0854755d +0x003:  push   %ebx
0854755e +0x004:  sub    $0x94,%esp
08547564 +0x00a:  mov    0x14(%ebp),%eax
08547567 +0x00d:  mov    0x20(%eax),%eax
0854756a +0x010:  mov    %eax,-0x74(%ebp)
0854756d +0x013:  mov    0x14(%ebp),%eax
08547570 +0x016:  mov    0x2c(%eax),%edx
08547573 +0x019:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
08547578 +0x01e:  lea    -0x74(%ebp),%ecx
0854757b +0x021:  mov    %ecx,0x8(%esp)
0854757f +0x025:  mov    %edx,0x4(%esp)
08547583 +0x029:  mov    %eax,(%esp)
08547586 +0x02c:  call   080f4ee2 <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj>  ; Event_Upgrade_Jar::GetProbability(int, unsigned int&) const
0854758b +0x031:  mov    -0x74(%ebp),%eax
0854758e +0x034:  test   %eax,%eax
08547590 +0x036:  je     08547635 <+0xdb>
08547596 +0x03c:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0854759b +0x041:  movl   $0x3,0x4(%esp)
085475a3 +0x049:  mov    %eax,(%esp)
085475a6 +0x04c:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
085475ab +0x051:  test   %al,%al
085475ad +0x053:  je     08547635 <+0xdb>
085475b3 +0x059:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
085475b8 +0x05e:  movl   $0x3,0x4(%esp)
085475c0 +0x066:  mov    %eax,(%esp)
085475c3 +0x069:  call   084b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>  ; CGlobalEffectManager::getEffectValue(unsigned int) const
085475c8 +0x06e:  fstps  -0x14(%ebp)
085475cb +0x071:  mov    0x8(%ebp),%eax
085475ce +0x074:  mov    0x4ec(%eax),%eax
085475d4 +0x07a:  mov    %eax,-0x7c(%ebp)
085475d7 +0x07d:  fildl  -0x7c(%ebp)
085475da +0x080:  fmuls  -0x14(%ebp)
085475dd +0x083:  fnstcw -0x7e(%ebp)
085475e0 +0x086:  movzwl -0x7e(%ebp),%eax
085475e4 +0x08a:  mov    $0xc,%ah
085475e6 +0x08c:  mov    %ax,-0x80(%ebp)
085475ea +0x090:  fldcw  -0x80(%ebp)
085475ed +0x093:  fistpl -0x7c(%ebp)
085475f0 +0x096:  fldcw  -0x7e(%ebp)
085475f3 +0x099:  mov    -0x7c(%ebp),%edx
085475f6 +0x09c:  mov    0x8(%ebp),%eax
085475f9 +0x09f:  mov    0x4ec(%eax),%eax
085475ff +0x0a5:  mov    %edx,%ecx
08547601 +0x0a7:  sub    %eax,%ecx
08547603 +0x0a9:  mov    %ecx,%eax
08547605 +0x0ab:  mov    %eax,-0x10(%ebp)
08547608 +0x0ae:  mov    -0x74(%ebp),%edx
0854760b +0x0b1:  mov    -0x10(%ebp),%eax
0854760e +0x0b4:  mov    %edx,%ecx
08547610 +0x0b6:  sub    %eax,%ecx
08547612 +0x0b8:  mov    %ecx,%eax
08547614 +0x0ba:  mov    %eax,-0x70(%ebp)
08547617 +0x0bd:  movl   $0x0,-0x6c(%ebp)
0854761e +0x0c4:  lea    -0x70(%ebp),%eax
08547621 +0x0c7:  mov    %eax,0x4(%esp)
08547625 +0x0cb:  lea    -0x6c(%ebp),%eax
08547628 +0x0ce:  mov    %eax,(%esp)
0854762b +0x0d1:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08547630 +0x0d6:  mov    (%eax),%eax
08547632 +0x0d8:  mov    %eax,-0x74(%ebp)
08547635 +0x0db:  mov    -0x74(%ebp),%eax
08547638 +0x0de:  test   %eax,%eax
0854763a +0x0e0:  je     085476b6 <+0x15c>
0854763c +0x0e2:  movl   $0x27ac59,0x4(%esp)
08547644 +0x0ea:  mov    0xc(%ebp),%eax
08547647 +0x0ed:  mov    %eax,(%esp)
0854764a +0x0f0:  call   085d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>  ; expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)
0854764f +0x0f5:  test   %al,%al
08547651 +0x0f7:  je     085476b6 <+0x15c>
08547653 +0x0f9:  mov    0x8(%ebp),%eax
08547656 +0x0fc:  mov    0x4ec(%eax),%eax
0854765c +0x102:  mov    %eax,-0x7c(%ebp)
0854765f +0x105:  fildl  -0x7c(%ebp)
08547662 +0x108:  fstps  -0x84(%ebp)
08547668 +0x10e:  call   085d1360 <_ZN10expert_job10CAlchemist25GetItemUpgradeSuccessRateEv>  ; expert_job::CAlchemist::GetItemUpgradeSuccessRate()
0854766d +0x113:  fmuls  -0x84(%ebp)
08547673 +0x119:  fnstcw -0x7e(%ebp)
08547676 +0x11c:  movzwl -0x7e(%ebp),%eax
0854767a +0x120:  mov    $0xc,%ah
0854767c +0x122:  mov    %ax,-0x80(%ebp)
08547680 +0x126:  fldcw  -0x80(%ebp)
08547683 +0x129:  fistpl -0xc(%ebp)
08547686 +0x12c:  fldcw  -0x7e(%ebp)
08547689 +0x12f:  mov    -0x74(%ebp),%edx
0854768c +0x132:  mov    -0xc(%ebp),%eax
0854768f +0x135:  mov    %edx,%ecx
08547691 +0x137:  sub    %eax,%ecx
08547693 +0x139:  mov    %ecx,%eax
08547695 +0x13b:  mov    %eax,-0x68(%ebp)
08547698 +0x13e:  movl   $0x0,-0x64(%ebp)
0854769f +0x145:  lea    -0x68(%ebp),%eax
085476a2 +0x148:  mov    %eax,0x4(%esp)
085476a6 +0x14c:  lea    -0x64(%ebp),%eax
085476a9 +0x14f:  mov    %eax,(%esp)
085476ac +0x152:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
085476b1 +0x157:  mov    (%eax),%eax
085476b3 +0x159:  mov    %eax,-0x74(%ebp)
085476b6 +0x15c:  mov    0xc(%ebp),%eax
085476b9 +0x15f:  mov    %eax,(%esp)
085476bc +0x162:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085476c1 +0x167:  lea    -0x5d(%ebp),%edx
085476c4 +0x16a:  movl   $0xb,0xc(%esp)
085476cc +0x172:  movl   $0x0,0x8(%esp)
085476d4 +0x17a:  mov    %eax,0x4(%esp)
085476d8 +0x17e:  mov    %edx,(%esp)
085476db +0x181:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085476e0 +0x186:  sub    $0x4,%esp
085476e3 +0x189:  mov    -0x5b(%ebp),%eax
085476e6 +0x18c:  mov    %eax,-0x1c(%ebp)
085476e9 +0x18f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085476ee +0x194:  mov    -0x1c(%ebp),%edx
085476f1 +0x197:  mov    %edx,0x4(%esp)
085476f5 +0x19b:  mov    %eax,(%esp)
085476f8 +0x19e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085476fd +0x1a3:  mov    %eax,-0x18(%ebp)
08547700 +0x1a6:  cmpl   $0x0,-0x18(%ebp)
08547704 +0x1aa:  je     0854773d <+0x1e3>
08547706 +0x1ac:  mov    -0x74(%ebp),%eax
08547709 +0x1af:  test   %eax,%eax
0854770b +0x1b1:  je     0854773d <+0x1e3>
0854770d +0x1b3:  mov    -0x74(%ebp),%ebx
08547710 +0x1b6:  mov    -0x18(%ebp),%eax
08547713 +0x1b9:  mov    %eax,(%esp)
08547716 +0x1bc:  call   0854b552 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3da>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3da
0854771b +0x1c1:  mov    %ebx,%edx
0854771d +0x1c3:  sub    %eax,%edx
0854771f +0x1c5:  mov    %edx,%eax
08547721 +0x1c7:  mov    %eax,-0x74(%ebp)
08547724 +0x1ca:  mov    0x8(%ebp),%eax
08547727 +0x1cd:  mov    0x4ec(%eax),%eax
0854772d +0x1d3:  mov    %eax,%edx
0854772f +0x1d5:  mov    -0x74(%ebp),%eax
08547732 +0x1d8:  cmp    %eax,%edx
08547734 +0x1da:  jae    0854773d <+0x1e3>
08547736 +0x1dc:  movl   $0x0,-0x74(%ebp)
0854773d +0x1e3:  mov    -0x74(%ebp),%eax
08547740 +0x1e6:  test   %eax,%eax
08547742 +0x1e8:  je     08547776 <+0x21c>
08547744 +0x1ea:  mov    0x8(%ebp),%eax
08547747 +0x1ed:  mov    0x4ec(%eax),%eax
0854774d +0x1f3:  mov    %eax,-0x20(%ebp)
08547750 +0x1f6:  mov    0x8(%ebp),%eax
08547753 +0x1f9:  mov    0x4e8(%eax),%eax
08547759 +0x1ff:  lea    -0x20(%ebp),%edx
0854775c +0x202:  mov    %edx,0x4(%esp)
08547760 +0x206:  mov    %eax,(%esp)
08547763 +0x209:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08547768 +0x20e:  mov    -0x74(%ebp),%edx
0854776b +0x211:  cmp    %edx,%eax
0854776d +0x213:  jae    08547776 <+0x21c>
0854776f +0x215:  mov    $0x1,%eax
08547774 +0x21a:  jmp    0854777b <+0x221>
08547776 +0x21c:  mov    $0x0,%eax
0854777b +0x221:  test   %al,%al
0854777d +0x223:  je     08547786 <+0x22c>
0854777f +0x225:  mov    $0x0,%eax
08547784 +0x22a:  jmp    08547796 <+0x23c>
08547786 +0x22c:  mov    0x10(%ebp),%eax
08547789 +0x22f:  mov    %eax,(%esp)
0854778c +0x232:  call   0854b4be <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x346>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x346
08547791 +0x237:  mov    $0x1,%eax
08547796 +0x23c:  mov    -0x4(%ebp),%ebx
08547799 +0x23f:  leave
0854779a +0x240:  ret
0854779b +0x241:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_DoProcUpgrade @ 0x854755a

/* WongWork::CItemUpgrade::_DoProcUpgrade(CUser*, Inven_Item*, upgrade_info_t const*) */

bool __thiscall
WongWork::CItemUpgrade::_DoProcUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,upgrade_info_t *param_3)

{
  bool bVar1;
  char cVar2;
  size_t *psVar3;
  int iVar4;
  CDataManager *this_00;
  uint uVar5;
  longdouble lVar6;
  uint local_78;
  size_t local_74 [3];
  size_t local_68;
  undefined1 local_61 [2];
  int local_5f;
  ulong local_24;
  int local_20;
  CEquipItem *local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  local_78 = *(uint *)(param_3 + 0x20);
  Event_Upgrade_Jar::GetProbability
            (GlobalData::s_pEvent_UpGrade_Jar,*(int *)(param_3 + 0x2c),&local_78);
  if ((local_78 != 0) &&
     (cVar2 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,3),
     cVar2 != '\0')) {
    lVar6 = (longdouble)CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,3);
    local_18 = (float)lVar6;
    local_14 = (int)ROUND((float)*(int *)(this + 0x4ec) * local_18) - *(int *)(this + 0x4ec);
    local_74[0] = local_78 - local_14;
    local_74[1] = 0;
    psVar3 = std::max<size_t>(local_74 + 1,local_74);
    local_78 = *psVar3;
  }
  if ((local_78 != 0) &&
     (cVar2 = expert_job::CAlchemist::IsExistContinuousEffectItem(param_1,0x27ac59), cVar2 != '\0'))
  {
    iVar4 = *(int *)(this + 0x4ec);
    lVar6 = (longdouble)expert_job::CAlchemist::GetItemUpgradeSuccessRate();
    local_10 = (int)ROUND(lVar6 * (longdouble)iVar4);
    local_74[2] = local_78 - local_10;
    local_68 = 0;
    psVar3 = std::max<size_t>(&local_68,local_74 + 2);
    local_78 = *psVar3;
  }
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_61,iVar4);
  local_20 = local_5f;
  this_00 = (CDataManager *)G_CDataManager();
  local_1c = (CEquipItem *)CDataManager::find_item(this_00,local_20);
  uVar5 = local_78;
  if ((local_1c != (CEquipItem *)0x0) && (local_78 != 0)) {
    iVar4 = CEquipItem::getUpgradeProbIncrease(local_1c);
    local_78 = uVar5 - iVar4;
    if (*(uint *)(this + 0x4ec) < local_78) {
      local_78 = 0;
    }
  }
  if (local_78 != 0) {
    local_24 = *(ulong *)(this + 0x4ec);
    uVar5 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_24);
    if (uVar5 < local_78) {
      bVar1 = true;
      goto LAB_0854777b;
    }
  }
  bVar1 = false;
LAB_0854777b:
  if (!bVar1) {
    Inven_Item::IncUpgrade(param_2);
  }
  return !bVar1;
}
```
