# LoadCreatureItem

`_ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser`

`user_creature::CCreature::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083385aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083385aa  _ZN13user_creature9CCreature16LoadCreatureItemEPNS_12CCreatureMgrEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser
#           user_creature::CCreature::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)
# range [0x083385aa, 0x083387f5]
083385aa +0x000:  push   %ebp
083385ab +0x001:  mov    %esp,%ebp
083385ad +0x003:  push   %ebx
083385ae +0x004:  sub    $0x34,%esp
083385b1 +0x007:  mov    0x14(%ebp),%eax
083385b4 +0x00a:  movzbl 0x27(%eax),%eax
083385b8 +0x00e:  test   %al,%al
083385ba +0x010:  je     083385d1 <+0x27>
083385bc +0x012:  mov    0x10(%ebp),%eax
083385bf +0x015:  mov    %eax,(%esp)
083385c2 +0x018:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
083385c7 +0x01d:  mov    $0x0,%eax
083385cc +0x022:  jmp    083387f0 <+0x246>
083385d1 +0x027:  mov    0x14(%ebp),%eax
083385d4 +0x02a:  mov    0x20(%eax),%edx
083385d7 +0x02d:  mov    0x8(%ebp),%eax
083385da +0x030:  mov    %edx,0x30(%eax)
083385dd +0x033:  mov    0x10(%ebp),%eax
083385e0 +0x036:  mov    0x2(%eax),%eax
083385e3 +0x039:  mov    %eax,0x4(%esp)
083385e7 +0x03d:  mov    0x8(%ebp),%eax
083385ea +0x040:  mov    %eax,(%esp)
083385ed +0x043:  call   083375ae <_ZN13user_creature9CCreature9SetItemIdEi>  ; user_creature::CCreature::SetItemId(int)
083385f2 +0x048:  mov    0x14(%ebp),%eax
083385f5 +0x04b:  mov    0x4(%eax),%edx
083385f8 +0x04e:  mov    0x8(%ebp),%eax
083385fb +0x051:  mov    %edx,0xc(%eax)
083385fe +0x054:  mov    0x14(%ebp),%eax
08338601 +0x057:  mov    (%eax),%edx
08338603 +0x059:  mov    0x8(%ebp),%eax
08338606 +0x05c:  mov    %edx,0x10(%eax)
08338609 +0x05f:  mov    0x14(%ebp),%eax
0833860c +0x062:  movzbl 0x24(%eax),%eax
08338610 +0x066:  movsbl %al,%edx
08338613 +0x069:  mov    0x8(%ebp),%eax
08338616 +0x06c:  mov    %edx,0x8(%eax)
08338619 +0x06f:  mov    0x14(%ebp),%eax
0833861c +0x072:  mov    0x18(%eax),%eax
0833861f +0x075:  mov    %eax,-0x1c(%ebp)
08338622 +0x078:  fildl  -0x1c(%ebp)
08338625 +0x07b:  mov    0x8(%ebp),%eax
08338628 +0x07e:  add    $0x34,%eax
0833862b +0x081:  fstps  0x4(%esp)
0833862f +0x085:  mov    %eax,(%esp)
08338632 +0x088:  call   0833eef6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfc3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfc3
08338637 +0x08d:  mov    0x14(%ebp),%eax
0833863a +0x090:  lea    0x8(%eax),%edx
0833863d +0x093:  mov    0x8(%ebp),%eax
08338640 +0x096:  add    $0x1c,%eax
08338643 +0x099:  movl   $0xc,0x8(%esp)
0833864b +0x0a1:  mov    %edx,0x4(%esp)
0833864f +0x0a5:  mov    %eax,(%esp)
08338652 +0x0a8:  call   0807d8d0 <_init+0x1c8>
08338657 +0x0ad:  mov    0x8(%ebp),%eax
0833865a +0x0b0:  movzbl 0x4c(%eax),%eax
0833865e +0x0b4:  xor    $0x1,%eax
08338661 +0x0b7:  test   %al,%al
08338663 +0x0b9:  je     08338691 <+0xe7>
08338665 +0x0bb:  mov    0x8(%ebp),%eax
08338668 +0x0be:  mov    0x30(%eax),%eax
0833866b +0x0c1:  mov    %eax,-0x10(%ebp)
0833866e +0x0c4:  movzwl -0xe(%ebp),%eax
08338672 +0x0c8:  cwtl
08338673 +0x0c9:  mov    %eax,0x4(%esp)
08338677 +0x0cd:  mov    0x8(%ebp),%eax
0833867a +0x0d0:  mov    %eax,(%esp)
0833867d +0x0d3:  call   083374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>  ; user_creature::CCreature::GetExpLevel(int)
08338682 +0x0d8:  mov    0x8(%ebp),%edx
08338685 +0x0db:  mov    %eax,0x2c(%edx)
08338688 +0x0de:  mov    0x14(%ebp),%eax
0833868b +0x0e1:  movb   $0x0,0x30(%eax)
0833868f +0x0e5:  jmp    083386b3 <+0x109>
08338691 +0x0e7:  mov    0x8(%ebp),%eax
08338694 +0x0ea:  mov    0x30(%eax),%eax
08338697 +0x0ed:  mov    %eax,0x4(%esp)
0833869b +0x0f1:  mov    0x8(%ebp),%eax
0833869e +0x0f4:  mov    %eax,(%esp)
083386a1 +0x0f7:  call   083374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>  ; user_creature::CCreature::GetExpLevel(int)
083386a6 +0x0fc:  mov    0x8(%ebp),%edx
083386a9 +0x0ff:  mov    %eax,0x2c(%edx)
083386ac +0x102:  mov    0x14(%ebp),%eax
083386af +0x105:  movb   $0x1,0x30(%eax)
083386b3 +0x109:  mov    0x8(%ebp),%eax
083386b6 +0x10c:  mov    %eax,(%esp)
083386b9 +0x10f:  call   0833756e <_ZN13user_creature9CCreature10isMaxLevelEv>  ; user_creature::CCreature::isMaxLevel()
083386be +0x114:  mov    0x14(%ebp),%edx
083386c1 +0x117:  mov    %al,0x31(%edx)
083386c4 +0x11a:  mov    0x14(%ebp),%eax
083386c7 +0x11d:  movzbl 0x26(%eax),%eax
083386cb +0x121:  test   %al,%al
083386cd +0x123:  setne  %dl
083386d0 +0x126:  mov    0x8(%ebp),%eax
083386d3 +0x129:  mov    %dl,0x14(%eax)
083386d6 +0x12c:  mov    0x14(%ebp),%eax
083386d9 +0x12f:  movzbl 0x27(%eax),%edx
083386dd +0x133:  mov    0x8(%ebp),%eax
083386e0 +0x136:  mov    %dl,0x15(%eax)
083386e3 +0x139:  mov    0x14(%ebp),%eax
083386e6 +0x13c:  mov    0x28(%eax),%edx
083386e9 +0x13f:  mov    0x8(%ebp),%eax
083386ec +0x142:  mov    %edx,0x18(%eax)
083386ef +0x145:  mov    0x8(%ebp),%eax
083386f2 +0x148:  movzbl 0x4c(%eax),%eax
083386f6 +0x14c:  test   %al,%al
083386f8 +0x14e:  je     08338708 <+0x15e>
083386fa +0x150:  mov    0x8(%ebp),%eax
083386fd +0x153:  add    $0x34,%eax
08338700 +0x156:  mov    %eax,(%esp)
08338703 +0x159:  call   08336e4c <_ZN13user_creature8CStomach6ResumeEv>  ; user_creature::CStomach::Resume()
08338708 +0x15e:  movl   $0x2,0x8(%esp)
08338710 +0x166:  mov    0x18(%ebp),%eax
08338713 +0x169:  mov    %eax,0x4(%esp)
08338717 +0x16d:  mov    0x8(%ebp),%eax
0833871a +0x170:  mov    %eax,(%esp)
0833871d +0x173:  call   0833715a <_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE>  ; user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
08338722 +0x178:  mov    0x8(%ebp),%eax
08338725 +0x17b:  movb   $0x1,0x40(%eax)
08338729 +0x17f:  mov    0x14(%ebp),%eax
0833872c +0x182:  mov    (%eax),%eax
0833872e +0x184:  cmp    $0xee,%eax
08338733 +0x189:  jne    08338758 <+0x1ae>
08338735 +0x18b:  mov    0x8(%ebp),%eax
08338738 +0x18e:  mov    %eax,0x4(%esp)
0833873c +0x192:  mov    0xc(%ebp),%eax
0833873f +0x195:  mov    %eax,(%esp)
08338742 +0x198:  call   083392f6 <_ZN13user_creature12CCreatureMgr5EquipEPNS_9CCreatureE>  ; user_creature::CCreatureMgr::Equip(user_creature::CCreature*)
08338747 +0x19d:  xor    $0x1,%eax
0833874a +0x1a0:  test   %al,%al
0833874c +0x1a2:  je     08338758 <+0x1ae>
0833874e +0x1a4:  mov    $0x0,%eax
08338753 +0x1a9:  jmp    083387f0 <+0x246>
08338758 +0x1ae:  mov    0x14(%ebp),%eax
0833875b +0x1b1:  mov    0x4(%eax),%edx
0833875e +0x1b4:  mov    0x8(%ebp),%eax
08338761 +0x1b7:  mov    %edx,0x8(%esp)
08338765 +0x1bb:  mov    %eax,0x4(%esp)
08338769 +0x1bf:  mov    0xc(%ebp),%eax
0833876c +0x1c2:  mov    %eax,(%esp)
0833876f +0x1c5:  call   0833a77e <_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi>  ; user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)
08338774 +0x1ca:  xor    $0x1,%eax
08338777 +0x1cd:  test   %al,%al
08338779 +0x1cf:  je     08338782 <+0x1d8>
0833877b +0x1d1:  mov    $0x0,%eax
08338780 +0x1d6:  jmp    083387f0 <+0x246>
08338782 +0x1d8:  movl   $0x0,-0xc(%ebp)
08338789 +0x1df:  mov    0x8(%ebp),%eax
0833878c +0x1e2:  mov    %eax,(%esp)
0833878f +0x1e5:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
08338794 +0x1ea:  mov    %eax,%ebx
08338796 +0x1ec:  mov    0x18(%ebp),%eax
08338799 +0x1ef:  mov    %eax,(%esp)
0833879c +0x1f2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
083387a1 +0x1f7:  mov    %ebx,0x8(%esp)
083387a5 +0x1fb:  movl   $0x3,0x4(%esp)
083387ad +0x203:  mov    %eax,(%esp)
083387b0 +0x206:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
083387b5 +0x20b:  mov    %eax,-0xc(%ebp)
083387b8 +0x20e:  mov    0x8(%ebp),%eax
083387bb +0x211:  mov    0xc(%eax),%eax
083387be +0x214:  mov    %eax,0x4(%esp)
083387c2 +0x218:  mov    -0xc(%ebp),%eax
083387c5 +0x21b:  mov    %eax,(%esp)
083387c8 +0x21e:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
083387cd +0x223:  mov    0x8(%ebp),%eax
083387d0 +0x226:  mov    0x3c(%eax),%eax
083387d3 +0x229:  mov    0x8(%ebp),%edx
083387d6 +0x22c:  add    $0x34,%edx
083387d9 +0x22f:  mov    %eax,0x4(%esp)
083387dd +0x233:  mov    %edx,(%esp)
083387e0 +0x236:  call   08336dee <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE>  ; user_creature::CStomach::IsSaveStomach(user_creature::CREATURE_STATE)
083387e5 +0x23b:  mov    0x8(%ebp),%edx
083387e8 +0x23e:  mov    %al,0x40(%edx)
083387eb +0x241:  mov    $0x1,%eax
083387f0 +0x246:  add    $0x34,%esp
083387f3 +0x249:  pop    %ebx
083387f4 +0x24a:  pop    %ebp
083387f5 +0x24b:  ret
```

## 反编译 C

```c
// user_creature::CCreature::LoadCreatureItem @ 0x83385aa

/* user_creature::CCreature::LoadCreatureItem(user_creature::CCreatureMgr*, Inven_Item*,
   SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*) */

undefined4 __thiscall
user_creature::CCreature::LoadCreatureItem
          (CCreature *this,CCreatureMgr *param_1,Inven_Item *param_2,
          SIG_CREATURE_ITEM_DETAIL_INFO *param_3,CUser *param_4)

{
  SIG_CREATURE_ITEM_DETAIL_INFO SVar1;
  char cVar2;
  CCreature CVar3;
  undefined4 uVar4;
  int iVar5;
  CInventory *this_00;
  Inven_Item *this_01;
  short sStack_12;
  
  if (param_3[0x27] == (SIG_CREATURE_ITEM_DETAIL_INFO)0x0) {
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_3 + 0x20);
    SetItemId(this,*(int *)(param_2 + 2));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)param_3;
    *(int *)(this + 8) = (int)(char)param_3[0x24];
    CStomach::SetStomachValue((CStomach *)(this + 0x34),(float)*(int *)(param_3 + 0x18));
    strncpy((char *)(this + 0x1c),(char *)(param_3 + 8),0xc);
    if (this[0x4c] == (CCreature)0x1) {
      uVar4 = GetExpLevel(this,*(int *)(this + 0x30));
      *(undefined4 *)(this + 0x2c) = uVar4;
      param_3[0x30] = (SIG_CREATURE_ITEM_DETAIL_INFO)0x1;
    }
    else {
      sStack_12 = (short)((uint)*(undefined4 *)(this + 0x30) >> 0x10);
      uVar4 = GetExpLevel(this,(int)sStack_12);
      *(undefined4 *)(this + 0x2c) = uVar4;
      param_3[0x30] = (SIG_CREATURE_ITEM_DETAIL_INFO)0x0;
    }
    SVar1 = (SIG_CREATURE_ITEM_DETAIL_INFO)isMaxLevel(this);
    param_3[0x31] = SVar1;
    this[0x14] = (CCreature)(param_3[0x26] != (SIG_CREATURE_ITEM_DETAIL_INFO)0x0);
    this[0x15] = *(CCreature *)(param_3 + 0x27);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_3 + 0x28);
    if (this[0x4c] != (CCreature)0x0) {
      CStomach::Resume((CStomach *)(this + 0x34));
    }
    SetState(this,param_4,2);
    this[0x40] = (CCreature)0x1;
    if ((*(int *)param_3 == 0xee) && (cVar2 = CCreatureMgr::Equip(param_1,this), cVar2 != '\x01')) {
      return 0;
    }
    cVar2 = CCreatureMgr::RegisterCreatureItem(param_1,(CCreatureItem *)this,*(int *)(param_3 + 4));
    if (cVar2 == '\x01') {
      iVar5 = CCreatureItem::GetSlotNo((CCreatureItem *)this);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_4);
      this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,3,iVar5);
      Inven_Item::set_add_info(this_01,*(int *)(this + 0xc));
      CVar3 = (CCreature)
              CStomach::IsSaveStomach((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c));
      this[0x40] = CVar3;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    Inven_Item::reset(param_2);
    uVar4 = 0;
  }
  return uVar4;
}
```
