# _CheckOverEquipItem

`_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser`

`Inter_LoadInven::_CheckOverEquipItem(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadInven` | `0x084c4d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c4d38  _ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser
#           Inter_LoadInven::_CheckOverEquipItem(CUser*)
# range [0x084c4d38, 0x084c5053]
084c4d38 +0x000:  push   %ebp
084c4d39 +0x001:  mov    %esp,%ebp
084c4d3b +0x003:  push   %ebx
084c4d3c +0x004:  sub    $0xb4,%esp
084c4d42 +0x00a:  mov    0xc(%ebp),%eax
084c4d45 +0x00d:  mov    %eax,(%esp)
084c4d48 +0x010:  call   084ec13e <_GLOBAL__I__Z7getUserj+0x30f0>  ; global constructors keyed to getUser(unsigned int)+0x30f0
084c4d4d +0x015:  xor    $0x1,%eax
084c4d50 +0x018:  test   %al,%al
084c4d52 +0x01a:  jne    084c504a <+0x312>
084c4d58 +0x020:  mov    0xc(%ebp),%eax
084c4d5b +0x023:  mov    %eax,(%esp)
084c4d5e +0x026:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c4d63 +0x02b:  test   %eax,%eax
084c4d65 +0x02d:  sete   %al
084c4d68 +0x030:  test   %al,%al
084c4d6a +0x032:  jne    084c504d <+0x315>
084c4d70 +0x038:  mov    0xc(%ebp),%eax
084c4d73 +0x03b:  mov    %eax,(%esp)
084c4d76 +0x03e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c4d7b +0x043:  mov    %eax,-0x1c(%ebp)
084c4d7e +0x046:  movl   $0x0,-0x18(%ebp)
084c4d85 +0x04d:  jmp    084c502e <+0x2f6>
084c4d8a +0x052:  lea    -0x61(%ebp),%eax
084c4d8d +0x055:  mov    -0x18(%ebp),%edx
084c4d90 +0x058:  mov    %edx,0xc(%esp)
084c4d94 +0x05c:  movl   $0x0,0x8(%esp)
084c4d9c +0x064:  mov    -0x1c(%ebp),%edx
084c4d9f +0x067:  mov    %edx,0x4(%esp)
084c4da3 +0x06b:  mov    %eax,(%esp)
084c4da6 +0x06e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084c4dab +0x073:  sub    $0x4,%esp
084c4dae +0x076:  mov    -0x5f(%ebp),%eax
084c4db1 +0x079:  test   %eax,%eax
084c4db3 +0x07b:  je     084c5020 <+0x2e8>
084c4db9 +0x081:  mov    -0x5f(%ebp),%eax
084c4dbc +0x084:  mov    %eax,%ebx
084c4dbe +0x086:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c4dc3 +0x08b:  mov    %ebx,0x4(%esp)
084c4dc7 +0x08f:  mov    %eax,(%esp)
084c4dca +0x092:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084c4dcf +0x097:  mov    %eax,-0x14(%ebp)
084c4dd2 +0x09a:  cmpl   $0x0,-0x14(%ebp)
084c4dd6 +0x09e:  je     084c5023 <+0x2eb>
084c4ddc +0x0a4:  mov    -0x14(%ebp),%eax
084c4ddf +0x0a7:  mov    %eax,(%esp)
084c4de2 +0x0aa:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084c4de7 +0x0af:  test   %al,%al
084c4de9 +0x0b1:  jne    084c5026 <+0x2ee>
084c4def +0x0b7:  mov    -0x18(%ebp),%ebx
084c4df2 +0x0ba:  mov    0xc(%ebp),%eax
084c4df5 +0x0bd:  mov    %eax,(%esp)
084c4df8 +0x0c0:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
084c4dfd +0x0c5:  mov    %ebx,0x4(%esp)
084c4e01 +0x0c9:  mov    %eax,(%esp)
084c4e04 +0x0cc:  call   084e99fc <_GLOBAL__I__Z7getUserj+0x9ae>  ; global constructors keyed to getUser(unsigned int)+0x9ae
084c4e09 +0x0d1:  mov    %eax,-0x24(%ebp)
084c4e0c +0x0d4:  mov    0xc(%ebp),%eax
084c4e0f +0x0d7:  mov    %eax,(%esp)
084c4e12 +0x0da:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
084c4e17 +0x0df:  mov    %eax,%ebx
084c4e19 +0x0e1:  mov    0xc(%ebp),%eax
084c4e1c +0x0e4:  mov    %eax,(%esp)
084c4e1f +0x0e7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c4e24 +0x0ec:  mov    %ebx,%edx
084c4e26 +0x0ee:  sub    %eax,%edx
084c4e28 +0x0f0:  mov    %edx,%eax
084c4e2a +0x0f2:  mov    %eax,-0x20(%ebp)
084c4e2d +0x0f5:  lea    -0x20(%ebp),%eax
084c4e30 +0x0f8:  mov    %eax,0x4(%esp)
084c4e34 +0x0fc:  lea    -0x24(%ebp),%eax
084c4e37 +0x0ff:  mov    %eax,(%esp)
084c4e3a +0x102:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
084c4e3f +0x107:  mov    (%eax),%eax
084c4e41 +0x109:  mov    %eax,-0x24(%ebp)
084c4e44 +0x10c:  mov    -0x14(%ebp),%eax
084c4e47 +0x10f:  mov    %eax,-0x10(%ebp)
084c4e4a +0x112:  mov    0xc(%ebp),%eax
084c4e4d +0x115:  mov    %eax,(%esp)
084c4e50 +0x118:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c4e55 +0x11d:  mov    -0x24(%ebp),%edx
084c4e58 +0x120:  add    %edx,%eax
084c4e5a +0x122:  mov    %eax,0x4(%esp)
084c4e5e +0x126:  mov    -0x14(%ebp),%eax
084c4e61 +0x129:  mov    %eax,(%esp)
084c4e64 +0x12c:  call   084e95bc <_GLOBAL__I__Z7getUserj+0x56e>  ; global constructors keyed to getUser(unsigned int)+0x56e
084c4e69 +0x131:  xor    $0x1,%eax
084c4e6c +0x134:  test   %al,%al
084c4e6e +0x136:  jne    084c4e9c <+0x164>
084c4e70 +0x138:  mov    -0x14(%ebp),%eax
084c4e73 +0x13b:  mov    %eax,(%esp)
084c4e76 +0x13e:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
084c4e7b +0x143:  cmp    $0x5,%eax
084c4e7e +0x146:  jne    084c4ea3 <+0x16b>
084c4e80 +0x148:  mov    -0x10(%ebp),%eax
084c4e83 +0x14b:  mov    %eax,(%esp)
084c4e86 +0x14e:  call   084e9700 <_GLOBAL__I__Z7getUserj+0x6b2>  ; global constructors keyed to getUser(unsigned int)+0x6b2
084c4e8b +0x153:  mov    %eax,%ebx
084c4e8d +0x155:  mov    0xc(%ebp),%eax
084c4e90 +0x158:  mov    %eax,(%esp)
084c4e93 +0x15b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084c4e98 +0x160:  cmp    %eax,%ebx
084c4e9a +0x162:  jge    084c4ea3 <+0x16b>
084c4e9c +0x164:  mov    $0x1,%eax
084c4ea1 +0x169:  jmp    084c4ea8 <+0x170>
084c4ea3 +0x16b:  mov    $0x0,%eax
084c4ea8 +0x170:  test   %al,%al
084c4eaa +0x172:  je     084c502a <+0x2f2>
084c4eb0 +0x178:  mov    -0x14(%ebp),%eax
084c4eb3 +0x17b:  mov    (%eax),%eax
084c4eb5 +0x17d:  add    $0x10,%eax
084c4eb8 +0x180:  mov    (%eax),%edx
084c4eba +0x182:  mov    -0x14(%ebp),%eax
084c4ebd +0x185:  mov    %eax,(%esp)
084c4ec0 +0x188:  call   *%edx
084c4ec2 +0x18a:  test   %al,%al
084c4ec4 +0x18c:  je     084c4f28 <+0x1f0>
084c4ec6 +0x18e:  movl   $0xffffffff,-0xc(%ebp)
084c4ecd +0x195:  movl   $0x8,0x8(%esp)
084c4ed5 +0x19d:  movl   $0x2,0x4(%esp)
084c4edd +0x1a5:  mov    -0x1c(%ebp),%eax
084c4ee0 +0x1a8:  mov    %eax,(%esp)
084c4ee3 +0x1ab:  call   084fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
084c4ee8 +0x1b0:  mov    %eax,-0xc(%ebp)
084c4eeb +0x1b3:  cmpl   $0xffffffff,-0xc(%ebp)
084c4eef +0x1b7:  sete   %al
084c4ef2 +0x1ba:  test   %al,%al
084c4ef4 +0x1bc:  jne    084c5029 <+0x2f1>
084c4efa +0x1c2:  mov    -0xc(%ebp),%eax
084c4efd +0x1c5:  mov    %eax,0x10(%esp)
084c4f01 +0x1c9:  movl   $0x2,0xc(%esp)
084c4f09 +0x1d1:  mov    -0x18(%ebp),%eax
084c4f0c +0x1d4:  mov    %eax,0x8(%esp)
084c4f10 +0x1d8:  movl   $0x0,0x4(%esp)
084c4f18 +0x1e0:  mov    -0x1c(%ebp),%eax
084c4f1b +0x1e3:  mov    %eax,(%esp)
084c4f1e +0x1e6:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
084c4f23 +0x1eb:  jmp    084c502a <+0x2f2>
084c4f28 +0x1f0:  mov    -0x18(%ebp),%eax
084c4f2b +0x1f3:  mov    %eax,0x8(%esp)
084c4f2f +0x1f7:  movl   $0x0,0x4(%esp)
084c4f37 +0x1ff:  mov    -0x1c(%ebp),%eax
084c4f3a +0x202:  mov    %eax,(%esp)
084c4f3d +0x205:  call   084fb32a <_ZN10CInventory9ResetSlotEii>  ; CInventory::ResetSlot(int, int)
084c4f42 +0x20a:  movl   $0x0,0x4c(%esp)
084c4f4a +0x212:  movl   $0x0,0x48(%esp)
084c4f52 +0x21a:  movl   $0xe,0x44(%esp)
084c4f5a +0x222:  mov    -0x61(%ebp),%eax
084c4f5d +0x225:  mov    %eax,0x4(%esp)
084c4f61 +0x229:  mov    -0x5d(%ebp),%eax
084c4f64 +0x22c:  mov    %eax,0x8(%esp)
084c4f68 +0x230:  mov    -0x59(%ebp),%eax
084c4f6b +0x233:  mov    %eax,0xc(%esp)
084c4f6f +0x237:  mov    -0x55(%ebp),%eax
084c4f72 +0x23a:  mov    %eax,0x10(%esp)
084c4f76 +0x23e:  mov    -0x51(%ebp),%eax
084c4f79 +0x241:  mov    %eax,0x14(%esp)
084c4f7d +0x245:  mov    -0x4d(%ebp),%eax
084c4f80 +0x248:  mov    %eax,0x18(%esp)
084c4f84 +0x24c:  mov    -0x49(%ebp),%eax
084c4f87 +0x24f:  mov    %eax,0x1c(%esp)
084c4f8b +0x253:  mov    -0x45(%ebp),%eax
084c4f8e +0x256:  mov    %eax,0x20(%esp)
084c4f92 +0x25a:  mov    -0x41(%ebp),%eax
084c4f95 +0x25d:  mov    %eax,0x24(%esp)
084c4f99 +0x261:  mov    -0x3d(%ebp),%eax
084c4f9c +0x264:  mov    %eax,0x28(%esp)
084c4fa0 +0x268:  mov    -0x39(%ebp),%eax
084c4fa3 +0x26b:  mov    %eax,0x2c(%esp)
084c4fa7 +0x26f:  mov    -0x35(%ebp),%eax
084c4faa +0x272:  mov    %eax,0x30(%esp)
084c4fae +0x276:  mov    -0x31(%ebp),%eax
084c4fb1 +0x279:  mov    %eax,0x34(%esp)
084c4fb5 +0x27d:  mov    -0x2d(%ebp),%eax
084c4fb8 +0x280:  mov    %eax,0x38(%esp)
084c4fbc +0x284:  mov    -0x29(%ebp),%eax
084c4fbf +0x287:  mov    %eax,0x3c(%esp)
084c4fc3 +0x28b:  movzbl -0x25(%ebp),%eax
084c4fc7 +0x28f:  mov    %al,0x40(%esp)
084c4fcb +0x293:  mov    -0x1c(%ebp),%eax
084c4fce +0x296:  mov    %eax,(%esp)
084c4fd1 +0x299:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084c4fd6 +0x29e:  shr    $0x1f,%eax
084c4fd9 +0x2a1:  test   %al,%al
084c4fdb +0x2a3:  je     084c502a <+0x2f2>
084c4fdd +0x2a5:  mov    0xc(%ebp),%eax
084c4fe0 +0x2a8:  mov    %eax,(%esp)
084c4fe3 +0x2ab:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c4fe8 +0x2b0:  movl   $0x0,0x18(%esp)
084c4ff0 +0x2b8:  movl   $0x0,0x14(%esp)
084c4ff8 +0x2c0:  movl   $0x1,0x10(%esp)
084c5000 +0x2c8:  mov    %eax,0xc(%esp)
084c5004 +0x2cc:  movl   $0x0,0x8(%esp)
084c500c +0x2d4:  lea    -0x61(%ebp),%eax
084c500f +0x2d7:  mov    %eax,0x4(%esp)
084c5013 +0x2db:  mov    0xc(%ebp),%eax
084c5016 +0x2de:  mov    %eax,(%esp)
084c5019 +0x2e1:  call   08555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
084c501e +0x2e6:  jmp    084c502a <+0x2f2>
084c5020 +0x2e8:  nop
084c5021 +0x2e9:  jmp    084c502a <+0x2f2>
084c5023 +0x2eb:  nop
084c5024 +0x2ec:  jmp    084c502a <+0x2f2>
084c5026 +0x2ee:  nop
084c5027 +0x2ef:  jmp    084c502a <+0x2f2>
084c5029 +0x2f1:  nop
084c502a +0x2f2:  addl   $0x1,-0x18(%ebp)
084c502e +0x2f6:  cmpl   $0x15,-0x18(%ebp)
084c5032 +0x2fa:  setle  %al
084c5035 +0x2fd:  test   %al,%al
084c5037 +0x2ff:  jne    084c4d8a <+0x52>
084c503d +0x305:  mov    0xc(%ebp),%eax
084c5040 +0x308:  mov    %eax,(%esp)
084c5043 +0x30b:  call   084ec162 <_GLOBAL__I__Z7getUserj+0x3114>  ; global constructors keyed to getUser(unsigned int)+0x3114
084c5048 +0x310:  jmp    084c504e <+0x316>
084c504a +0x312:  nop
084c504b +0x313:  jmp    084c504e <+0x316>
084c504d +0x315:  nop
084c504e +0x316:  mov    -0x4(%ebp),%ebx
084c5051 +0x319:  leave
084c5052 +0x31a:  ret
084c5053 +0x31b:  nop
```

## 反编译 C

```c
// Inter_LoadInven::_CheckOverEquipItem @ 0x84c4d38

/* Inter_LoadInven::_CheckOverEquipItem(CUser*) */

void __thiscall Inter_LoadInven::_CheckOverEquipItem(Inter_LoadInven *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CUserPremium *pCVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined2 local_65;
  undefined2 uStack_63;
  undefined2 uStack_61;
  undefined2 uStack_5f;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined1 local_29;
  int local_28;
  int local_24;
  CInventory *local_20;
  int local_1c;
  CItem *local_18;
  CItem *local_14;
  int local_10;
  
  cVar2 = CUserCharacInfo::needCurCharacCheckOverEquip((CUserCharacInfo *)param_1);
  if ((cVar2 == '\x01') &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    local_20 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    for (local_1c = 0; local_1c < 0x16; local_1c = local_1c + 1) {
      CInventory::GetInvenSlot((int)&local_65,(int)local_20);
      if (CONCAT22(uStack_61,uStack_63) != 0) {
        iVar3 = CONCAT22(uStack_61,uStack_63);
        this_00 = (CDataManager *)G_CDataManager();
        local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
        if ((local_18 != (CItem *)0x0) &&
           (cVar2 = CItem::is_stackable(local_18), iVar3 = local_1c, cVar2 == '\0')) {
          pCVar4 = (CUserPremium *)CUser::GetPremiumInfo(param_1);
          local_28 = WongWork::CUserPremium::GetOverEquipableLevel(pCVar4,iVar3);
          iVar3 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1);
          local_24 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_24 = iVar3 - local_24;
          piVar5 = std::max<int>(&local_28,&local_24);
          local_28 = *piVar5;
          local_14 = local_18;
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          cVar2 = CItem::check_low_level(local_18,iVar3 + local_28);
          if (cVar2 == '\x01') {
            iVar3 = CItem::GetAttachType(local_18);
            if (iVar3 == 5) {
              iVar3 = CEquipItem::GetUsableMaxLevel((CEquipItem *)local_14);
              iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
              if (iVar3 < iVar6) goto LAB_084c4e9c;
            }
            bVar1 = false;
          }
          else {
LAB_084c4e9c:
            bVar1 = true;
          }
          if (bVar1) {
            cVar2 = (**(code **)(*(int *)local_18 + 0x10))(local_18);
            if (cVar2 == '\0') {
              CInventory::ResetSlot(local_20,0,local_1c);
              iVar3 = CInventory::insertItemIntoInventory
                                (local_20,CONCAT22(uStack_63,local_65),CONCAT22(uStack_5f,uStack_61)
                                 ,local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,
                                 local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,0xe,
                                 0,0);
              if (iVar3 < 0) {
                uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                WongWork::CMailBoxHelper::ReqDBSendNewMail
                          (param_1,(Inven_Item *)&local_65,0,uVar7,true,(char *)0x0,0);
              }
            }
            else {
              local_10 = 0xffffffff;
              local_10 = CInventory::get_empty_slot(local_20,2,8);
              if (local_10 != -1) {
                CInventory::move_item(local_20,0,local_1c,2,local_10);
              }
            }
          }
        }
      }
    }
    CUserCharacInfo::resetCurCharacOverEquipFlag((CUserCharacInfo *)param_1);
  }
  return;
}
```
