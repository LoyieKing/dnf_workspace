# process

`_ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestAssaultPrice::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestAssaultPrice` | `0x081dee80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dee80  _ZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestAssaultPrice::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dee80, 0x081df083]
081dee80 +0x000:  push   %ebp
081dee81 +0x001:  mov    %esp,%ebp
081dee83 +0x003:  push   %ebx
081dee84 +0x004:  sub    $0x84,%esp
081dee8a +0x00a:  mov    0x14(%ebp),%eax
081dee8d +0x00d:  mov    %eax,-0x1c(%ebp)
081dee90 +0x010:  mov    0x10(%ebp),%eax
081dee93 +0x013:  mov    %eax,-0x18(%ebp)
081dee96 +0x016:  mov    -0x18(%ebp),%eax
081dee99 +0x019:  movzwl 0xd(%eax),%eax
081dee9d +0x01d:  movzwl %ax,%ebx
081deea0 +0x020:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081deea5 +0x025:  mov    %ebx,0x4(%esp)
081deea9 +0x029:  mov    %eax,(%esp)
081deeac +0x02c:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081deeb1 +0x031:  mov    %eax,-0x14(%ebp)
081deeb4 +0x034:  cmpl   $0x0,-0x14(%ebp)
081deeb8 +0x038:  jne    081deece <+0x4e>
081deeba +0x03a:  mov    -0x1c(%ebp),%eax
081deebd +0x03d:  movl   $0x3,0x4(%eax)
081deec4 +0x044:  mov    $0x0,%eax
081deec9 +0x049:  jmp    081df07f <+0x1ff>
081deece +0x04e:  mov    -0x14(%ebp),%eax
081deed1 +0x051:  mov    %eax,(%esp)
081deed4 +0x054:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081deed9 +0x059:  cmp    $0x2,%eax
081deedc +0x05c:  jle    081deeed <+0x6d>
081deede +0x05e:  mov    -0x14(%ebp),%eax
081deee1 +0x061:  mov    %eax,(%esp)
081deee4 +0x064:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081deee9 +0x069:  test   %eax,%eax
081deeeb +0x06b:  jne    081deef4 <+0x74>
081deeed +0x06d:  mov    $0x1,%eax
081deef2 +0x072:  jmp    081deef9 <+0x79>
081deef4 +0x074:  mov    $0x0,%eax
081deef9 +0x079:  test   %al,%al
081deefb +0x07b:  je     081def11 <+0x91>
081deefd +0x07d:  mov    -0x1c(%ebp),%eax
081def00 +0x080:  movl   $0x3,0x4(%eax)
081def07 +0x087:  mov    $0x0,%eax
081def0c +0x08c:  jmp    081df07f <+0x1ff>
081def11 +0x091:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081def16 +0x096:  mov    -0x14(%ebp),%edx
081def19 +0x099:  mov    %edx,0x8(%esp)
081def1d +0x09d:  mov    0xc(%ebp),%edx
081def20 +0x0a0:  mov    %edx,0x4(%esp)
081def24 +0x0a4:  mov    %eax,(%esp)
081def27 +0x0a7:  call   082edc86 <_ZN11pvp_assault11CAssaultMgr26GetRequestAssaultNeedMoneyEP5CUserS2_>  ; pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney(CUser*, CUser*)
081def2c +0x0ac:  mov    -0x1c(%ebp),%edx
081def2f +0x0af:  mov    %eax,0x8(%edx)
081def32 +0x0b2:  mov    -0x1c(%ebp),%eax
081def35 +0x0b5:  mov    0x8(%eax),%eax
081def38 +0x0b8:  test   %eax,%eax
081def3a +0x0ba:  jle    081defe6 <+0x166>
081def40 +0x0c0:  mov    0xc(%ebp),%eax
081def43 +0x0c3:  mov    %eax,(%esp)
081def46 +0x0c6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081def4b +0x0cb:  lea    -0x59(%ebp),%edx
081def4e +0x0ce:  movl   $0xb,0xc(%esp)
081def56 +0x0d6:  movl   $0x0,0x8(%esp)
081def5e +0x0de:  mov    %eax,0x4(%esp)
081def62 +0x0e2:  mov    %edx,(%esp)
081def65 +0x0e5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081def6a +0x0ea:  sub    $0x4,%esp
081def6d +0x0ed:  mov    -0x57(%ebp),%eax
081def70 +0x0f0:  mov    %eax,-0x10(%ebp)
081def73 +0x0f3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081def78 +0x0f8:  mov    -0x10(%ebp),%edx
081def7b +0x0fb:  mov    %edx,0x4(%esp)
081def7f +0x0ff:  mov    %eax,(%esp)
081def82 +0x102:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081def87 +0x107:  mov    %eax,-0xc(%ebp)
081def8a +0x10a:  cmpl   $0x0,-0xc(%ebp)
081def8e +0x10e:  je     081defe6 <+0x166>
081def90 +0x110:  mov    -0x1c(%ebp),%eax
081def93 +0x113:  mov    0x8(%eax),%eax
081def96 +0x116:  mov    %eax,-0x6c(%ebp)
081def99 +0x119:  fildl  -0x6c(%ebp)
081def9c +0x11c:  fstps  -0x78(%ebp)
081def9f +0x11f:  mov    -0x1c(%ebp),%eax
081defa2 +0x122:  mov    0x8(%eax),%eax
081defa5 +0x125:  mov    %eax,-0x6c(%ebp)
081defa8 +0x128:  fildl  -0x6c(%ebp)
081defab +0x12b:  fstps  -0x74(%ebp)
081defae +0x12e:  mov    -0xc(%ebp),%eax
081defb1 +0x131:  mov    %eax,(%esp)
081defb4 +0x134:  call   0822ca80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x212a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x212a
081defb9 +0x139:  fmuls  -0x74(%ebp)
081defbc +0x13c:  flds   &data#38c91952(.rodata)
081defc2 +0x142:  fdivrp %st,%st(1)
081defc4 +0x144:  fadds  -0x78(%ebp)
081defc7 +0x147:  fnstcw -0x6e(%ebp)
081defca +0x14a:  movzwl -0x6e(%ebp),%eax
081defce +0x14e:  mov    $0xc,%ah
081defd0 +0x150:  mov    %ax,-0x70(%ebp)
081defd4 +0x154:  fldcw  -0x70(%ebp)
081defd7 +0x157:  fistpl -0x6c(%ebp)
081defda +0x15a:  fldcw  -0x6e(%ebp)
081defdd +0x15d:  mov    -0x6c(%ebp),%edx
081defe0 +0x160:  mov    -0x1c(%ebp),%eax
081defe3 +0x163:  mov    %edx,0x8(%eax)
081defe6 +0x166:  mov    -0x1c(%ebp),%eax
081defe9 +0x169:  mov    0x8(%eax),%edx
081defec +0x16c:  mov    0xc(%ebp),%eax
081defef +0x16f:  mov    %edx,0x4(%esp)
081deff3 +0x173:  mov    %eax,(%esp)
081deff6 +0x176:  call   0868ef42 <_ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi>  ; CUserCharacInfo::SetCurCharacAssaultMoney(int)
081deffb +0x17b:  mov    -0x14(%ebp),%eax
081deffe +0x17e:  mov    %eax,(%esp)
081df001 +0x181:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081df006 +0x186:  movzwl %ax,%edx
081df009 +0x189:  mov    0xc(%ebp),%eax
081df00c +0x18c:  mov    %edx,0x4(%esp)
081df010 +0x190:  mov    %eax,(%esp)
081df013 +0x193:  call   0868ef84 <_ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt>  ; CUserCharacInfo::SetCurCharacAssaultedUserId(unsigned short)
081df018 +0x198:  mov    0x10(%ebp),%eax
081df01b +0x19b:  mov    %eax,0x8(%esp)
081df01f +0x19f:  mov    0xc(%ebp),%eax
081df022 +0x1a2:  mov    %eax,0x4(%esp)
081df026 +0x1a6:  mov    0x8(%ebp),%eax
081df029 +0x1a9:  mov    %eax,(%esp)
081df02c +0x1ac:  call   081df084 <_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RequestAssaultPrice::check_error(CUser*, MSG_BASE&)
081df031 +0x1b1:  mov    -0x1c(%ebp),%edx
081df034 +0x1b4:  mov    %eax,0x4(%edx)
081df037 +0x1b7:  mov    -0x1c(%ebp),%eax
081df03a +0x1ba:  mov    0x4(%eax),%eax
081df03d +0x1bd:  test   %eax,%eax
081df03f +0x1bf:  jle    081df048 <+0x1c8>
081df041 +0x1c1:  mov    $0x0,%eax
081df046 +0x1c6:  jmp    081df07f <+0x1ff>
081df048 +0x1c8:  mov    -0x1c(%ebp),%eax
081df04b +0x1cb:  mov    0x4(%eax),%eax
081df04e +0x1ce:  test   %eax,%eax
081df050 +0x1d0:  jns    081df07a <+0x1fa>
081df052 +0x1d2:  mov    -0x1c(%ebp),%eax
081df055 +0x1d5:  mov    0x4(%eax),%eax
081df058 +0x1d8:  movl   $0x0,0xc(%esp)
081df060 +0x1e0:  mov    %eax,0x8(%esp)
081df064 +0x1e4:  movl   $&_ZZN30Dispatcher_RequestAssaultPrice7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081df06c +0x1ec:  movl   $0x50f4,(%esp)
081df073 +0x1f3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081df078 +0x1f8:  jmp    081df07f <+0x1ff>
081df07a +0x1fa:  mov    $0x0,%eax
081df07f +0x1ff:  mov    -0x4(%ebp),%ebx
081df082 +0x202:  leave
081df083 +0x203:  ret
```

## 反编译 C

```c
// Dispatcher_RequestAssaultPrice::process @ 0x81dee80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_RequestAssaultPrice::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestAssaultPrice::process
          (Dispatcher_RequestAssaultPrice *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  GameWorld *this_00;
  int iVar4;
  undefined4 uVar5;
  CAssaultMgr *this_01;
  CDataManager *this_02;
  longdouble lVar6;
  undefined1 local_5d [2];
  int local_5b;
  ParamBase *local_20;
  MSG_BASE *local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  CEquipItem *local_10;
  
  local_20 = param_3;
  local_1c = param_2;
  uVar3 = *(ushort *)(param_2 + 0xd);
  this_00 = (GameWorld *)G_GameWorld();
  local_18 = (CUserCharacInfo *)GameWorld::find_from_world(this_00,uVar3);
  if (local_18 != (CUserCharacInfo *)0x0) {
    iVar4 = CUser::get_state((CUser *)local_18);
    if ((iVar4 < 3) || (iVar4 = CUserCharacInfo::getCurCharacR(local_18), iVar4 == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      *(undefined4 *)(local_20 + 4) = 3;
      uVar5 = 0;
    }
    else {
      this_01 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      uVar5 = pvp_assault::CAssaultMgr::GetRequestAssaultNeedMoney
                        (this_01,param_1,(CUser *)local_18);
      *(undefined4 *)(local_20 + 8) = uVar5;
      if (0 < *(int *)(local_20 + 8)) {
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_5d,iVar4);
        local_14 = local_5b;
        this_02 = (CDataManager *)G_CDataManager();
        local_10 = (CEquipItem *)CDataManager::find_item(this_02,local_14);
        if (local_10 != (CEquipItem *)0x0) {
          iVar4 = *(int *)(local_20 + 8);
          iVar1 = *(int *)(local_20 + 8);
          lVar6 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_10);
          *(int *)(local_20 + 8) =
               (int)ROUND((lVar6 * (longdouble)iVar1) / (longdouble)_DAT_08bd6350 +
                          (longdouble)iVar4);
        }
      }
      CUserCharacInfo::SetCurCharacAssaultMoney((CUserCharacInfo *)param_1,*(int *)(local_20 + 8));
      uVar3 = CUser::get_unique_id((CUser *)local_18);
      CUserCharacInfo::SetCurCharacAssaultedUserId((CUserCharacInfo *)param_1,uVar3);
      uVar5 = check_error(this,param_1,param_2);
      *(undefined4 *)(local_20 + 4) = uVar5;
      if (*(int *)(local_20 + 4) < 1) {
        if (*(int *)(local_20 + 4) < 0) {
          uVar5 = LineFunc(0x50f4,
                           "virtual int Dispatcher_RequestAssaultPrice::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,*(int *)(local_20 + 4),0);
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  *(undefined4 *)(local_20 + 4) = 3;
  return 0;
}
```
