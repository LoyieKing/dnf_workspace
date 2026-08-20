# leaveUser

`_ZN12advancealtar12StageControl9leaveUserEv`

`advancealtar::StageControl::leaveUser()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fc4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fc4e  _ZN12advancealtar12StageControl9leaveUserEv
#           advancealtar::StageControl::leaveUser()
# range [0x0812fc4e, 0x0812fdd3]
0812fc4e +0x000:  push   %ebp
0812fc4f +0x001:  mov    %esp,%ebp
0812fc51 +0x003:  push   %esi
0812fc52 +0x004:  push   %ebx
0812fc53 +0x005:  sub    $0x20,%esp
0812fc56 +0x008:  mov    0x8(%ebp),%eax
0812fc59 +0x00b:  add    $0x98,%eax
0812fc5e +0x010:  mov    %eax,(%esp)
0812fc61 +0x013:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812fc66 +0x018:  mov    %eax,-0xc(%ebp)
0812fc69 +0x01b:  cmpl   $0x0,-0xc(%ebp)
0812fc6d +0x01f:  jne    0812fc79 <+0x2b>
0812fc6f +0x021:  mov    $0x0,%ebx
0812fc74 +0x026:  jmp    0812fdca <+0x17c>
0812fc79 +0x02b:  mov    -0xc(%ebp),%eax
0812fc7c +0x02e:  mov    %eax,(%esp)
0812fc7f +0x031:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0812fc84 +0x036:  test   %eax,%eax
0812fc86 +0x038:  sete   %al
0812fc89 +0x03b:  test   %al,%al
0812fc8b +0x03d:  je     0812fc97 <+0x49>
0812fc8d +0x03f:  mov    $0x0,%ebx
0812fc92 +0x044:  jmp    0812fdca <+0x17c>
0812fc97 +0x049:  mov    0x8(%ebp),%eax
0812fc9a +0x04c:  mov    %eax,(%esp)
0812fc9d +0x04f:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
0812fca2 +0x054:  mov    %eax,0x4(%esp)
0812fca6 +0x058:  mov    -0xc(%ebp),%eax
0812fca9 +0x05b:  mov    %eax,(%esp)
0812fcac +0x05e:  call   08133abc <_ZN12advancealtar10HistoryLog12leaveDungeonER5CUserRKNS_9ProcStageE>  ; advancealtar::HistoryLog::leaveDungeon(CUser&, advancealtar::ProcStage const&)
0812fcb1 +0x063:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0812fcb6 +0x068:  mov    -0xc(%ebp),%edx
0812fcb9 +0x06b:  mov    %edx,0x4(%esp)
0812fcbd +0x06f:  mov    %eax,(%esp)
0812fcc0 +0x072:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
0812fcc5 +0x077:  lea    -0x18(%ebp),%eax
0812fcc8 +0x07a:  mov    %eax,(%esp)
0812fccb +0x07d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0812fcd0 +0x082:  movl   $0x2,0x8(%esp)
0812fcd8 +0x08a:  movl   $0x0,0x4(%esp)
0812fce0 +0x092:  lea    -0x18(%ebp),%eax
0812fce3 +0x095:  mov    %eax,(%esp)
0812fce6 +0x098:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0812fceb +0x09d:  movl   $0x0,0x4(%esp)
0812fcf3 +0x0a5:  lea    -0x18(%ebp),%eax
0812fcf6 +0x0a8:  mov    %eax,(%esp)
0812fcf9 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812fcfe +0x0b0:  movl   $0x1,0x4(%esp)
0812fd06 +0x0b8:  lea    -0x18(%ebp),%eax
0812fd09 +0x0bb:  mov    %eax,(%esp)
0812fd0c +0x0be:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0812fd11 +0x0c3:  lea    -0x18(%ebp),%eax
0812fd14 +0x0c6:  movl   $0x0,0x8(%esp)
0812fd1c +0x0ce:  mov    %eax,0x4(%esp)
0812fd20 +0x0d2:  mov    -0xc(%ebp),%eax
0812fd23 +0x0d5:  mov    %eax,(%esp)
0812fd26 +0x0d8:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0812fd2b +0x0dd:  movl   $0x1,0x4(%esp)
0812fd33 +0x0e5:  lea    -0x18(%ebp),%eax
0812fd36 +0x0e8:  mov    %eax,(%esp)
0812fd39 +0x0eb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812fd3e +0x0f0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0812fd43 +0x0f5:  mov    -0xc(%ebp),%edx
0812fd46 +0x0f8:  mov    %edx,0x8(%esp)
0812fd4a +0x0fc:  lea    -0x18(%ebp),%edx
0812fd4d +0x0ff:  mov    %edx,0x4(%esp)
0812fd51 +0x103:  mov    %eax,(%esp)
0812fd54 +0x106:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0812fd59 +0x10b:  movl   $0x0,0x4(%esp)
0812fd61 +0x113:  mov    -0xc(%ebp),%eax
0812fd64 +0x116:  mov    %eax,(%esp)
0812fd67 +0x119:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
0812fd6c +0x11e:  mov    -0xc(%ebp),%eax
0812fd6f +0x121:  mov    %eax,(%esp)
0812fd72 +0x124:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0812fd77 +0x129:  mov    %eax,(%esp)
0812fd7a +0x12c:  call   084faf8e <_ZNK10CInventory21SendItemLockListInvenEv>  ; CInventory::SendItemLockListInven() const
0812fd7f +0x131:  movl   $0xffffffff,0x4(%esp)
0812fd87 +0x139:  mov    -0xc(%ebp),%eax
0812fd8a +0x13c:  mov    %eax,(%esp)
0812fd8d +0x13f:  call   0813490e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x515>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x515
0812fd92 +0x144:  mov    0x8(%ebp),%eax
0812fd95 +0x147:  mov    %eax,(%esp)
0812fd98 +0x14a:  call   081300ce <_ZN12advancealtar12StageControl7destroyEv>  ; advancealtar::StageControl::destroy()
0812fd9d +0x14f:  mov    $0x1,%ebx
0812fda2 +0x154:  lea    -0x18(%ebp),%eax
0812fda5 +0x157:  mov    %eax,(%esp)
0812fda8 +0x15a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812fdad +0x15f:  jmp    0812fdca <+0x17c>
0812fdaf +0x161:  mov    %edx,%ebx
0812fdb1 +0x163:  mov    %eax,%esi
0812fdb3 +0x165:  lea    -0x18(%ebp),%eax
0812fdb6 +0x168:  mov    %eax,(%esp)
0812fdb9 +0x16b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812fdbe +0x170:  mov    %esi,%eax
0812fdc0 +0x172:  mov    %ebx,%edx
0812fdc2 +0x174:  mov    %eax,(%esp)
0812fdc5 +0x177:  call   08ae3750 <_Unwind_Resume>
0812fdca +0x17c:  mov    %ebx,%eax
0812fdcc +0x17e:  add    $0x20,%esp
0812fdcf +0x181:  pop    %ebx
0812fdd0 +0x182:  pop    %esi
0812fdd1 +0x183:  pop    %ebp
0812fdd2 +0x184:  ret
0812fdd3 +0x185:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::leaveUser @ 0x812fc4e

/* advancealtar::StageControl::leaveUser() */

undefined4 __thiscall advancealtar::StageControl::leaveUser(StageControl *this)

{
  int iVar1;
  ProcStage *pPVar2;
  GameWorld *pGVar3;
  CInventory *this_00;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  local_10 = (CUserCharacInfo *)CharacData::getUser((CharacData *)(this + 0x98));
  if (local_10 == (CUserCharacInfo *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR(local_10);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      pPVar2 = (ProcStage *)getProcStage(this);
      HistoryLog::leaveDungeon((CUser *)local_10,pPVar2);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_dungeon(pGVar3,(CUser *)local_10);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0812fce6 to 0812fd9c has its CatchHandler @ 0812fdaf */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      CUser::make_basic_info((CUser *)local_10,(char *)local_1c,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_1c,(CUser *)local_10);
      CUser::send_itemspace((CUser *)local_10,0);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_10);
      CInventory::SendItemLockListInven(this_00);
      CUser::setAdvanceAltarIndex((CUser *)local_10,-1);
      destroy(this);
      uVar4 = 1;
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return uVar4;
}
```
