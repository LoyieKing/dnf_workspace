# ChangeGrowType_Item

`_ZN5CUser19ChangeGrowType_ItemEis`

`CUser::ChangeGrowType_Item(int, short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b196  _ZN5CUser19ChangeGrowType_ItemEis
#           CUser::ChangeGrowType_Item(int, short)
# range [0x0867b196, 0x0867b4c3]
0867b196 +0x000:  push   %ebp
0867b197 +0x001:  mov    %esp,%ebp
0867b199 +0x003:  push   %esi
0867b19a +0x004:  push   %ebx
0867b19b +0x005:  sub    $0xe0,%esp
0867b1a1 +0x00b:  mov    0x10(%ebp),%eax
0867b1a4 +0x00e:  mov    %ax,-0xbc(%ebp)
0867b1ab +0x015:  mov    0x8(%ebp),%eax
0867b1ae +0x018:  mov    %eax,(%esp)
0867b1b1 +0x01b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867b1b6 +0x020:  test   %eax,%eax
0867b1b8 +0x022:  sete   %al
0867b1bb +0x025:  test   %al,%al
0867b1bd +0x027:  je     0867b1c9 <+0x33>
0867b1bf +0x029:  mov    $0x1,%ebx
0867b1c4 +0x02e:  jmp    0867b4b8 <+0x322>
0867b1c9 +0x033:  mov    0x8(%ebp),%eax
0867b1cc +0x036:  mov    %eax,(%esp)
0867b1cf +0x039:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867b1d4 +0x03e:  test   %al,%al
0867b1d6 +0x040:  je     0867b1eb <+0x55>
0867b1d8 +0x042:  mov    0x8(%ebp),%eax
0867b1db +0x045:  mov    %eax,(%esp)
0867b1de +0x048:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867b1e3 +0x04d:  movsbl %al,%eax
0867b1e6 +0x050:  cmp    0xc(%ebp),%eax
0867b1e9 +0x053:  jne    0867b1f2 <+0x5c>
0867b1eb +0x055:  mov    $0x1,%eax
0867b1f0 +0x05a:  jmp    0867b1f7 <+0x61>
0867b1f2 +0x05c:  mov    $0x0,%eax
0867b1f7 +0x061:  test   %al,%al
0867b1f9 +0x063:  je     0867b205 <+0x6f>
0867b1fb +0x065:  mov    $0x13,%ebx
0867b200 +0x06a:  jmp    0867b4b8 <+0x322>
0867b205 +0x06f:  mov    0xc(%ebp),%eax
0867b208 +0x072:  movsbl %al,%edx
0867b20b +0x075:  mov    0x8(%ebp),%eax
0867b20e +0x078:  movl   $0xffffffff,0x8(%esp)
0867b216 +0x080:  mov    %edx,0x4(%esp)
0867b21a +0x084:  mov    %eax,(%esp)
0867b21d +0x087:  call   0864e34e <_ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc>  ; CUserCharacInfo::setCurCharChangingGrowthType(char, char)
0867b222 +0x08c:  movswl -0xbc(%ebp),%ebx
0867b229 +0x093:  mov    0x8(%ebp),%eax
0867b22c +0x096:  mov    %eax,(%esp)
0867b22f +0x099:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867b234 +0x09e:  movl   $0x1,0x14(%esp)
0867b23c +0x0a6:  movl   $0xa,0x10(%esp)
0867b244 +0x0ae:  movl   $0x1,0xc(%esp)
0867b24c +0x0b6:  mov    %ebx,0x8(%esp)
0867b250 +0x0ba:  movl   $0x1,0x4(%esp)
0867b258 +0x0c2:  mov    %eax,(%esp)
0867b25b +0x0c5:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867b260 +0x0ca:  mov    0x8(%ebp),%eax
0867b263 +0x0cd:  mov    %eax,(%esp)
0867b266 +0x0d0:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b26b +0x0d5:  mov    %eax,(%esp)
0867b26e +0x0d8:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
0867b273 +0x0dd:  mov    0x8(%ebp),%eax
0867b276 +0x0e0:  mov    %eax,(%esp)
0867b279 +0x0e3:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b27e +0x0e8:  mov    0x8(%ebp),%edx
0867b281 +0x0eb:  mov    %edx,0x4(%esp)
0867b285 +0x0ef:  mov    %eax,(%esp)
0867b288 +0x0f2:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0867b28d +0x0f7:  lea    -0xb8(%ebp),%eax
0867b293 +0x0fd:  mov    %eax,(%esp)
0867b296 +0x100:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
0867b29b +0x105:  movl   $0x1,0xc(%esp)
0867b2a3 +0x10d:  movl   $0x0,0x8(%esp)
0867b2ab +0x115:  mov    0x8(%ebp),%eax
0867b2ae +0x118:  mov    %eax,0x4(%esp)
0867b2b2 +0x11c:  lea    -0xb8(%ebp),%eax
0867b2b8 +0x122:  mov    %eax,(%esp)
0867b2bb +0x125:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
0867b2c0 +0x12a:  mov    0x8(%ebp),%eax
0867b2c3 +0x12d:  mov    %eax,(%esp)
0867b2c6 +0x130:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0867b2cb +0x135:  mov    %eax,-0x14(%ebp)
0867b2ce +0x138:  mov    0x8(%ebp),%eax
0867b2d1 +0x13b:  mov    %eax,(%esp)
0867b2d4 +0x13e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867b2d9 +0x143:  mov    %eax,-0x10(%ebp)
0867b2dc +0x146:  mov    0x8(%ebp),%eax
0867b2df +0x149:  mov    %eax,(%esp)
0867b2e2 +0x14c:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b2e7 +0x151:  add    $0x46,%eax
0867b2ea +0x154:  mov    -0x14(%ebp),%edx
0867b2ed +0x157:  mov    %edx,0x4(%esp)
0867b2f1 +0x15b:  mov    %eax,(%esp)
0867b2f4 +0x15e:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0867b2f9 +0x163:  mov    0x8(%ebp),%eax
0867b2fc +0x166:  mov    %eax,(%esp)
0867b2ff +0x169:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b304 +0x16e:  add    $0x1de,%eax
0867b309 +0x173:  mov    -0x14(%ebp),%edx
0867b30c +0x176:  mov    %edx,0x4(%esp)
0867b310 +0x17a:  mov    %eax,(%esp)
0867b313 +0x17d:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0867b318 +0x182:  mov    0x8(%ebp),%eax
0867b31b +0x185:  mov    %eax,(%esp)
0867b31e +0x188:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867b323 +0x18d:  movsbl %al,%eax
0867b326 +0x190:  mov    %eax,-0xc(%ebp)
0867b329 +0x193:  mov    0x8(%ebp),%eax
0867b32c +0x196:  mov    %eax,(%esp)
0867b32f +0x199:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0867b334 +0x19e:  movzbl %al,%edx
0867b337 +0x1a1:  mov    0xc(%ebp),%eax
0867b33a +0x1a4:  movzbl %al,%eax
0867b33d +0x1a7:  movl   $0x1,0x10(%esp)
0867b345 +0x1af:  movl   $0x0,0xc(%esp)
0867b34d +0x1b7:  mov    %edx,0x8(%esp)
0867b351 +0x1bb:  mov    %eax,0x4(%esp)
0867b355 +0x1bf:  mov    0x8(%ebp),%eax
0867b358 +0x1c2:  mov    %eax,(%esp)
0867b35b +0x1c5:  call   086787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>  ; CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
0867b360 +0x1ca:  mov    0x8(%ebp),%eax
0867b363 +0x1cd:  mov    %eax,(%esp)
0867b366 +0x1d0:  call   08664766 <_ZN5CUser18adjust_charac_statEv>  ; CUser::adjust_charac_stat()
0867b36b +0x1d5:  movl   $0xffffffff,0x4(%esp)
0867b373 +0x1dd:  mov    0x8(%ebp),%eax
0867b376 +0x1e0:  mov    %eax,(%esp)
0867b379 +0x1e3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0867b37e +0x1e8:  mov    %eax,0x4(%esp)
0867b382 +0x1ec:  mov    0x8(%ebp),%eax
0867b385 +0x1ef:  mov    %eax,(%esp)
0867b388 +0x1f2:  call   0864f930 <_ZN5CUser20reset_tag_info_to_meEj>  ; CUser::reset_tag_info_to_me(unsigned int)
0867b38d +0x1f7:  mov    0x8(%ebp),%eax
0867b390 +0x1fa:  mov    %eax,(%esp)
0867b393 +0x1fd:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0867b398 +0x202:  movsbl %al,%eax
0867b39b +0x205:  mov    %eax,0x8(%esp)
0867b39f +0x209:  mov    0xc(%ebp),%eax
0867b3a2 +0x20c:  mov    %eax,0x4(%esp)
0867b3a6 +0x210:  mov    0x8(%ebp),%eax
0867b3a9 +0x213:  mov    %eax,(%esp)
0867b3ac +0x216:  call   08668823 <_Z29_postCheckForceChangeGrowTypeP5CUserii>  ; _postCheckForceChangeGrowType(CUser*, int, int)
0867b3b1 +0x21b:  movl   $0x0,0xc(%esp)
0867b3b9 +0x223:  movl   $0x2,0x8(%esp)
0867b3c1 +0x22b:  movl   $0x0,0x4(%esp)
0867b3c9 +0x233:  mov    0x8(%ebp),%eax
0867b3cc +0x236:  mov    %eax,(%esp)
0867b3cf +0x239:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0867b3d4 +0x23e:  mov    0x8(%ebp),%eax
0867b3d7 +0x241:  mov    %eax,(%esp)
0867b3da +0x244:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0867b3df +0x249:  movl   $0x1,0xc(%esp)
0867b3e7 +0x251:  movl   $0x2,0x8(%esp)
0867b3ef +0x259:  movl   $0x1,0x4(%esp)
0867b3f7 +0x261:  mov    0x8(%ebp),%eax
0867b3fa +0x264:  mov    %eax,(%esp)
0867b3fd +0x267:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0867b402 +0x26c:  movswl -0xbc(%ebp),%eax
0867b409 +0x273:  mov    %eax,0xc(%esp)
0867b40d +0x277:  movl   $0x0,0x8(%esp)
0867b415 +0x27f:  movl   $0x1,0x4(%esp)
0867b41d +0x287:  mov    0x8(%ebp),%eax
0867b420 +0x28a:  mov    %eax,(%esp)
0867b423 +0x28d:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0867b428 +0x292:  movl   $0xffffffff,0x4(%esp)
0867b430 +0x29a:  mov    0x8(%ebp),%eax
0867b433 +0x29d:  mov    %eax,(%esp)
0867b436 +0x2a0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0867b43b +0x2a5:  mov    %eax,%ebx
0867b43d +0x2a7:  movl   $0x0,0xc(%esp)
0867b445 +0x2af:  movl   $0x756d,0x8(%esp)
0867b44d +0x2b7:  movl   $&_ZZN5CUser19ChangeGrowType_ItemEisE19__PRETTY_FUNCTION__,0x4(%esp)
0867b455 +0x2bf:  lea    -0x24(%ebp),%eax
0867b458 +0x2c2:  mov    %eax,(%esp)
0867b45b +0x2c5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0867b460 +0x2ca:  mov    0xc(%ebp),%eax
0867b463 +0x2cd:  mov    %eax,0x10(%esp)
0867b467 +0x2d1:  mov    -0xc(%ebp),%eax
0867b46a +0x2d4:  mov    %eax,0xc(%esp)
0867b46e +0x2d8:  mov    %ebx,0x8(%esp)
0867b472 +0x2dc:  movl   $"[USE GROWTYPE ITEM]characNo(%d) before(%d), after(%d)",0x4(%esp)
0867b47a +0x2e4:  lea    -0x24(%ebp),%eax
0867b47d +0x2e7:  mov    %eax,(%esp)
0867b480 +0x2ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0867b485 +0x2ef:  mov    $0x0,%ebx
0867b48a +0x2f4:  lea    -0xb8(%ebp),%eax
0867b490 +0x2fa:  mov    %eax,(%esp)
0867b493 +0x2fd:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0867b498 +0x302:  jmp    0867b4b8 <+0x322>
0867b49a +0x304:  mov    %edx,%ebx
0867b49c +0x306:  mov    %eax,%esi
0867b49e +0x308:  lea    -0xb8(%ebp),%eax
0867b4a4 +0x30e:  mov    %eax,(%esp)
0867b4a7 +0x311:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0867b4ac +0x316:  mov    %esi,%eax
0867b4ae +0x318:  mov    %ebx,%edx
0867b4b0 +0x31a:  mov    %eax,(%esp)
0867b4b3 +0x31d:  call   08ae3750 <_Unwind_Resume>
0867b4b8 +0x322:  mov    %ebx,%eax
0867b4ba +0x324:  add    $0xe0,%esp
0867b4c0 +0x32a:  pop    %ebx
0867b4c1 +0x32b:  pop    %esi
0867b4c2 +0x32c:  pop    %ebp
0867b4c3 +0x32d:  ret
```

## 反编译 C

```c
// CUser::ChangeGrowType_Item @ 0x867b196

/* CUser::ChangeGrowType_Item(int, short) */

undefined4 __thiscall CUser::ChangeGrowType_Item(CUser *this,int param_1,short param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  CInventory *pCVar5;
  SkillSlot *pSVar6;
  uint uVar7;
  undefined4 uVar8;
  CSkillChanger local_bc [148];
  cMyTrace local_28 [16];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar4 != 0) {
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
    if ((cVar2 == '\0') ||
       (cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this), cVar2 == param_1)
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar8 = 0x13;
    }
    else {
      CUserCharacInfo::setCurCharChangingGrowthType((CUserCharacInfo *)this,(char)param_1,-1);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::delete_item(pCVar5,1,(int)param_2,1,10,1);
      pSVar6 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::clear_all_skills_both(pSVar6);
      pSVar6 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar6,this);
      WongWork::CSkillChanger::CSkillChanger(local_bc);
                    /* try { // try from 0867b2bb to 0867b484 has its CatchHandler @ 0867b49a */
      WongWork::CSkillChanger::SkillInitialize(local_bc,this,0,true);
      local_18 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      local_14 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      iVar4 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar4 + 0x46),local_18);
      iVar4 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar4 + 0x1de),local_18);
      cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
      local_10 = (int)cVar2;
      uVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      set_grow_type(this,param_1 & 0xff,uVar3,0,1);
      adjust_charac_stat(this);
      uVar7 = get_charac_no(this,-1);
      reset_tag_info_to_me(this,uVar7);
      cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      _postCheckForceChangeGrowType(this,param_1,(int)cVar2);
      SendNotiPacket(this,0,2,0);
      send_skill_info(this);
      SendNotiPacket(this,1,2,1);
      SendUpdateItem(this,1,0,(int)param_2);
      uVar8 = get_charac_no(this,-1);
      cMyTrace::cMyTrace(local_28,"int CUser::ChangeGrowType_Item(int, short int)",0x756d,0);
      cMyTrace::operator()
                (local_28,"[USE GROWTYPE ITEM]characNo(%d) before(%d), after(%d)",uVar8,local_10,
                 param_1);
      uVar8 = 0;
      WongWork::CSkillChanger::~CSkillChanger(local_bc);
    }
    return uVar8;
  }
  return 1;
}
```
