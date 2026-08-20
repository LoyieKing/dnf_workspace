# _CheckCondition

`_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h`

`WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, unsigned char)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x085497ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085497ea  _ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h
#           WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, unsigned char)
# range [0x085497ea, 0x08549ac7]
085497ea +0x000:  push   %ebp
085497eb +0x001:  mov    %esp,%ebp
085497ed +0x003:  push   %ebx
085497ee +0x004:  sub    $0x44,%esp
085497f1 +0x007:  mov    0x1c(%ebp),%eax
085497f4 +0x00a:  mov    %al,-0x2c(%ebp)
085497f7 +0x00d:  mov    0x10(%ebp),%eax
085497fa +0x010:  add    $0x11,%eax
085497fd +0x013:  mov    %eax,(%esp)
08549800 +0x016:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
08549805 +0x01b:  xor    $0x1,%eax
08549808 +0x01e:  test   %al,%al
0854980a +0x020:  je     08549816 <+0x2c>
0854980c +0x022:  mov    $0xae,%eax
08549811 +0x027:  jmp    08549ac2 <+0x2d8>
08549816 +0x02c:  mov    0x10(%ebp),%eax
08549819 +0x02f:  movzbl 0x1(%eax),%eax
0854981d +0x033:  cmp    $0x1,%al
0854981f +0x035:  je     0854982b <+0x41>
08549821 +0x037:  mov    $0x13,%eax
08549826 +0x03c:  jmp    08549ac2 <+0x2d8>
0854982b +0x041:  mov    0x14(%ebp),%eax
0854982e +0x044:  mov    (%eax),%eax
08549830 +0x046:  add    $0xc,%eax
08549833 +0x049:  mov    (%eax),%edx
08549835 +0x04b:  mov    0x14(%ebp),%eax
08549838 +0x04e:  mov    %eax,(%esp)
0854983b +0x051:  call   *%edx
0854983d +0x053:  cmp    $0xb,%eax
08549840 +0x056:  sete   %al
08549843 +0x059:  test   %al,%al
08549845 +0x05b:  je     08549851 <+0x67>
08549847 +0x05d:  mov    $0x13,%eax
0854984c +0x062:  jmp    08549ac2 <+0x2d8>
08549851 +0x067:  mov    0x14(%ebp),%eax
08549854 +0x06a:  mov    (%eax),%eax
08549856 +0x06c:  add    $0xc,%eax
08549859 +0x06f:  mov    (%eax),%edx
0854985b +0x071:  mov    0x14(%ebp),%eax
0854985e +0x074:  mov    %eax,(%esp)
08549861 +0x077:  call   *%edx
08549863 +0x079:  cmp    $0x9,%eax
08549866 +0x07c:  jle    0854987f <+0x95>
08549868 +0x07e:  mov    0x14(%ebp),%eax
0854986b +0x081:  mov    (%eax),%eax
0854986d +0x083:  add    $0xc,%eax
08549870 +0x086:  mov    (%eax),%edx
08549872 +0x088:  mov    0x14(%ebp),%eax
08549875 +0x08b:  mov    %eax,(%esp)
08549878 +0x08e:  call   *%edx
0854987a +0x090:  cmp    $0x15,%eax
0854987d +0x093:  jle    08549886 <+0x9c>
0854987f +0x095:  mov    $0x1,%eax
08549884 +0x09a:  jmp    0854988b <+0xa1>
08549886 +0x09c:  mov    $0x0,%eax
0854988b +0x0a1:  test   %al,%al
0854988d +0x0a3:  je     08549899 <+0xaf>
0854988f +0x0a5:  mov    $0x13,%eax
08549894 +0x0aa:  jmp    08549ac2 <+0x2d8>
08549899 +0x0af:  mov    0x10(%ebp),%eax
0854989c +0x0b2:  movzwl 0xb(%eax),%eax
085498a0 +0x0b6:  movzwl %ax,%ebx
085498a3 +0x0b9:  mov    0x14(%ebp),%eax
085498a6 +0x0bc:  mov    %eax,(%esp)
085498a9 +0x0bf:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
085498ae +0x0c4:  cmp    %eax,%ebx
085498b0 +0x0c6:  setne  %al
085498b3 +0x0c9:  test   %al,%al
085498b5 +0x0cb:  je     085498c1 <+0xd7>
085498b7 +0x0cd:  mov    $0x7,%eax
085498bc +0x0d2:  jmp    08549ac2 <+0x2d8>
085498c1 +0x0d7:  mov    0x14(%ebp),%eax
085498c4 +0x0da:  mov    %eax,(%esp)
085498c7 +0x0dd:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085498cc +0x0e2:  mov    %eax,%ebx
085498ce +0x0e4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085498d3 +0x0e9:  mov    0x1c(%eax),%eax
085498d6 +0x0ec:  mov    %ebx,0x4(%esp)
085498da +0x0f0:  mov    %eax,(%esp)
085498dd +0x0f3:  call   08473148 <_ZNK8DisJoint29getPredictResultItemTypeCountEi>  ; DisJoint::getPredictResultItemTypeCount(int) const
085498e2 +0x0f8:  mov    %eax,-0x14(%ebp)
085498e5 +0x0fb:  addl   $0x1,-0x14(%ebp)
085498e9 +0x0ff:  mov    0x10(%ebp),%eax
085498ec +0x102:  add    $0x11,%eax
085498ef +0x105:  mov    %eax,(%esp)
085498f2 +0x108:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
085498f7 +0x10d:  test   %al,%al
085498f9 +0x10f:  je     085498ff <+0x115>
085498fb +0x111:  addl   $0x1,-0x14(%ebp)
085498ff +0x115:  cmpl   $0x0,-0x14(%ebp)
08549903 +0x119:  je     08549944 <+0x15a>
08549905 +0x11b:  mov    0xc(%ebp),%eax
08549908 +0x11e:  mov    %eax,(%esp)
0854990b +0x121:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08549910 +0x126:  movl   $0x3,0x4(%esp)
08549918 +0x12e:  mov    %eax,(%esp)
0854991b +0x131:  call   08505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>  ; CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const
08549920 +0x136:  mov    %eax,%ebx
08549922 +0x138:  mov    0xc(%ebp),%eax
08549925 +0x13b:  mov    %eax,(%esp)
08549928 +0x13e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0854992d +0x143:  mov    %eax,(%esp)
08549930 +0x146:  call   08505038 <_ZNK10CInventory15QuickEmptyCountEv>  ; CInventory::QuickEmptyCount() const
08549935 +0x14b:  lea    (%ebx,%eax,1),%eax
08549938 +0x14e:  cmp    -0x14(%ebp),%eax
0854993b +0x151:  jae    08549944 <+0x15a>
0854993d +0x153:  mov    $0x1,%eax
08549942 +0x158:  jmp    08549949 <+0x15f>
08549944 +0x15a:  mov    $0x0,%eax
08549949 +0x15f:  test   %al,%al
0854994b +0x161:  je     08549957 <+0x16d>
0854994d +0x163:  mov    $0x15,%eax
08549952 +0x168:  jmp    08549ac2 <+0x2d8>
08549957 +0x16d:  mov    0x18(%ebp),%eax
0854995a +0x170:  mov    0x2(%eax),%eax
0854995d +0x173:  mov    %eax,%ebx
0854995f +0x175:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08549964 +0x17a:  mov    %ebx,0x4(%esp)
08549968 +0x17e:  mov    %eax,(%esp)
0854996b +0x181:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08549970 +0x186:  mov    %eax,-0x10(%ebp)
08549973 +0x189:  cmpl   $0x0,0x14(%ebp)
08549977 +0x18d:  jne    08549983 <+0x199>
08549979 +0x18f:  mov    $0x15,%eax
0854997e +0x194:  jmp    08549ac2 <+0x2d8>
08549983 +0x199:  mov    0x10(%ebp),%eax
08549986 +0x19c:  movzbl 0x1f(%eax),%eax
0854998a +0x1a0:  and    $0x1,%eax
0854998d +0x1a3:  test   %al,%al
0854998f +0x1a5:  je     085499a9 <+0x1bf>
08549991 +0x1a7:  mov    0x10(%ebp),%eax
08549994 +0x1aa:  movzbl 0x20(%eax),%eax
08549998 +0x1ae:  and    $0x1,%eax
0854999b +0x1b1:  test   %al,%al
0854999d +0x1b3:  je     085499a9 <+0x1bf>
0854999f +0x1b5:  mov    $0x13,%eax
085499a4 +0x1ba:  jmp    08549ac2 <+0x2d8>
085499a9 +0x1bf:  mov    0x10(%ebp),%eax
085499ac +0x1c2:  movzbl 0x1f(%eax),%eax
085499b0 +0x1c6:  and    $0x1,%eax
085499b3 +0x1c9:  test   %al,%al
085499b5 +0x1cb:  je     085499f6 <+0x20c>
085499b7 +0x1cd:  mov    0x10(%ebp),%eax
085499ba +0x1d0:  movzbl 0x1f(%eax),%eax
085499be +0x1d4:  shr    $0x3,%al
085499c1 +0x1d7:  movzbl %al,%edx
085499c4 +0x1da:  movzbl -0x2c(%ebp),%eax
085499c8 +0x1de:  cmp    %eax,%edx
085499ca +0x1e0:  jne    085499f6 <+0x20c>
085499cc +0x1e2:  mov    0x10(%ebp),%eax
085499cf +0x1e5:  movzbl 0x1f(%eax),%eax
085499d3 +0x1e9:  shr    %al
085499d5 +0x1eb:  and    $0x3,%eax
085499d8 +0x1ee:  movzbl %al,%edx
085499db +0x1f1:  mov    -0x10(%ebp),%eax
085499de +0x1f4:  movzbl 0x30c(%eax),%eax
085499e5 +0x1fb:  movsbl %al,%eax
085499e8 +0x1fe:  cmp    %eax,%edx
085499ea +0x200:  jne    085499f6 <+0x20c>
085499ec +0x202:  mov    $0x13,%eax
085499f1 +0x207:  jmp    08549ac2 <+0x2d8>
085499f6 +0x20c:  mov    0x14(%ebp),%eax
085499f9 +0x20f:  mov    %eax,(%esp)
085499fc +0x212:  call   0854b544 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3cc>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3cc
08549a01 +0x217:  lea    -0x18(%ebp),%edx
08549a04 +0x21a:  mov    %eax,0x4(%esp)
08549a08 +0x21e:  mov    %edx,(%esp)
08549a0b +0x221:  call   0851bd3c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x8371>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x8371
08549a10 +0x226:  sub    $0x4,%esp
08549a13 +0x229:  mov    0x14(%ebp),%eax
08549a16 +0x22c:  mov    %eax,(%esp)
08549a19 +0x22f:  call   0854b544 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3cc>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3cc
08549a1e +0x234:  lea    -0x1c(%ebp),%edx
08549a21 +0x237:  mov    %eax,0x4(%esp)
08549a25 +0x23b:  mov    %edx,(%esp)
08549a28 +0x23e:  call   0851bd68 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x839d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x839d
08549a2d +0x243:  sub    $0x4,%esp
08549a30 +0x246:  movb   $0x0,-0x9(%ebp)
08549a34 +0x24a:  jmp    08549a95 <+0x2ab>
08549a36 +0x24c:  mov    0xc(%ebp),%eax
08549a39 +0x24f:  mov    %eax,(%esp)
08549a3c +0x252:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08549a41 +0x257:  mov    %eax,%ebx
08549a43 +0x259:  lea    -0x18(%ebp),%eax
08549a46 +0x25c:  mov    %eax,(%esp)
08549a49 +0x25f:  call   0854b986 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x80e>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x80e
08549a4e +0x264:  mov    (%eax),%eax
08549a50 +0x266:  cmp    %eax,%ebx
08549a52 +0x268:  jne    08549a7b <+0x291>
08549a54 +0x26a:  mov    0xc(%ebp),%eax
08549a57 +0x26d:  mov    %eax,(%esp)
08549a5a +0x270:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08549a5f +0x275:  mov    %eax,%ebx
08549a61 +0x277:  lea    -0x18(%ebp),%eax
08549a64 +0x27a:  mov    %eax,(%esp)
08549a67 +0x27d:  call   0854b986 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x80e>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x80e
08549a6c +0x282:  movzbl 0x4(%eax),%eax
08549a70 +0x286:  cmp    %al,%bl
08549a72 +0x288:  jne    08549a7b <+0x291>
08549a74 +0x28a:  mov    $0x1,%eax
08549a79 +0x28f:  jmp    08549a80 <+0x296>
08549a7b +0x291:  mov    $0x0,%eax
08549a80 +0x296:  test   %al,%al
08549a82 +0x298:  je     08549a8a <+0x2a0>
08549a84 +0x29a:  movb   $0x1,-0x9(%ebp)
08549a88 +0x29e:  jmp    08549aab <+0x2c1>
08549a8a +0x2a0:  lea    -0x18(%ebp),%eax
08549a8d +0x2a3:  mov    %eax,(%esp)
08549a90 +0x2a6:  call   08526fc8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+&_ZL14gUnicodeBuffer+0x90d1>  ; global constructors keyed to CItem::GetNeedMaterial() const+&_ZL14gUnicodeBuffer+0x90d1
08549a95 +0x2ab:  lea    -0x1c(%ebp),%eax
08549a98 +0x2ae:  mov    %eax,0x4(%esp)
08549a9c +0x2b2:  lea    -0x18(%ebp),%eax
08549a9f +0x2b5:  mov    %eax,(%esp)
08549aa2 +0x2b8:  call   08526f9c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+&_ZL14gUnicodeBuffer+0x90a5>  ; global constructors keyed to CItem::GetNeedMaterial() const+&_ZL14gUnicodeBuffer+0x90a5
08549aa7 +0x2bd:  test   %al,%al
08549aa9 +0x2bf:  jne    08549a36 <+0x24c>
08549aab +0x2c1:  movzbl -0x9(%ebp),%eax
08549aaf +0x2c5:  xor    $0x1,%eax
08549ab2 +0x2c8:  test   %al,%al
08549ab4 +0x2ca:  je     08549abd <+0x2d3>
08549ab6 +0x2cc:  mov    $0x1,%eax
08549abb +0x2d1:  jmp    08549ac2 <+0x2d8>
08549abd +0x2d3:  mov    $0x0,%eax
08549ac2 +0x2d8:  mov    -0x4(%ebp),%ebx
08549ac5 +0x2db:  leave
08549ac6 +0x2dc:  ret
08549ac7 +0x2dd:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_CheckCondition @ 0x85497ea

/* WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item
   const&, unsigned char) */

undefined4 __thiscall
WongWork::CItemUpgrade::_CheckCondition
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,Inven_Item *param_4,
          uchar param_5)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  CDataManager *this_00;
  int *piVar9;
  __normal_iterator local_20 [4];
  __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
  local_1c [4];
  uint local_18;
  int local_14;
  char local_d;
  
  cVar2 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar2 != '\x01') {
    return 0xae;
  }
  if (param_2[1] != (Inven_Item)0x1) {
    return 0x13;
  }
  iVar4 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if (iVar4 == 0xb) {
    return 0x13;
  }
  iVar4 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if ((iVar4 < 10) || (iVar4 = (**(code **)(*(int *)param_3 + 0xc))(param_3), 0x15 < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return 0x13;
  }
  uVar1 = *(ushort *)(param_2 + 0xb);
  uVar5 = CEquipItem::get_endurance((CEquipItem *)param_3);
  if (uVar1 != uVar5) {
    return 7;
  }
  iVar4 = CItem::get_rarity(param_3);
  iVar6 = G_CDataManager();
  iVar4 = DisJoint::getPredictResultItemTypeCount(*(DisJoint **)(iVar6 + 0x1c),iVar4);
  local_18 = iVar4 + 1;
  cVar2 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar2 != '\0') {
    local_18 = local_18 + 1;
  }
  if (local_18 != 0) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar4 = CInventory::InvenEmptycount(pCVar7,3);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::QuickEmptyCount(pCVar7);
    if ((uint)(iVar4 + iVar6) < local_18) {
      bVar3 = true;
      goto LAB_08549949;
    }
  }
  bVar3 = false;
LAB_08549949:
  if (bVar3) {
    uVar8 = 0x15;
  }
  else {
    iVar4 = *(int *)(param_4 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = CDataManager::find_item(this_00,iVar4);
    if (param_3 == (CItem *)0x0) {
      uVar8 = 0x15;
    }
    else if ((((byte)param_2[0x1f] & 1) == 0) || (((byte)param_2[0x20] & 1) == 0)) {
      if ((((byte)param_2[0x1f] & 1) == 0) ||
         (((byte)param_2[0x1f] >> 3 != param_5 ||
          ((uint)((byte)param_2[0x1f] >> 1 & 3) != (int)*(char *)(local_14 + 0x30c))))) {
        CEquipItem::getEnchantSystemData((CEquipItem *)param_3);
        std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::begin();
        CEquipItem::getEnchantSystemData((CEquipItem *)param_3);
        std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::end();
        local_d = '\0';
        while (bVar3 = __gnu_cxx::operator!=(local_1c,local_20), bVar3) {
          iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          piVar9 = (int *)__gnu_cxx::
                          __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
                          ::operator->(local_1c);
          if (iVar4 == *piVar9) {
            cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
            iVar4 = __gnu_cxx::
                    __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
                    ::operator->(local_1c);
            if (cVar2 != *(char *)(iVar4 + 4)) goto LAB_08549a7b;
            bVar3 = true;
          }
          else {
LAB_08549a7b:
            bVar3 = false;
          }
          if (bVar3) {
            local_d = '\x01';
            break;
          }
          __gnu_cxx::
          __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
          ::operator++(local_1c);
        }
        if (local_d == '\x01') {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 0x13;
      }
    }
    else {
      uVar8 = 0x13;
    }
  }
  return uVar8;
}
```
