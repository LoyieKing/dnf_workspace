# WalkOutUserBySlot

`_ZN7WarRoom17WalkOutUserBySlotEi`

`WarRoom::WalkOutUserBySlot(int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd256` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd256  _ZN7WarRoom17WalkOutUserBySlotEi
#           WarRoom::WalkOutUserBySlot(int)
# range [0x086bd256, 0x086bd3eb]
086bd256 +0x000:  push   %ebp
086bd257 +0x001:  mov    %esp,%ebp
086bd259 +0x003:  push   %esi
086bd25a +0x004:  push   %ebx
086bd25b +0x005:  sub    $0x30,%esp
086bd25e +0x008:  mov    0xc(%ebp),%edx
086bd261 +0x00b:  mov    0x8(%ebp),%eax
086bd264 +0x00e:  add    $0x48,%edx
086bd267 +0x011:  mov    0xc(%eax,%edx,4),%eax
086bd26b +0x015:  test   %eax,%eax
086bd26d +0x017:  jne    086bd2ac <+0x56>
086bd26f +0x019:  mov    0xc(%ebp),%eax
086bd272 +0x01c:  mov    %eax,0x14(%esp)
086bd276 +0x020:  movl   $"WarRoom::WalkOutUserBySlot no slot(%d)",0x10(%esp)
086bd27e +0x028:  movl   $0x5cc,0xc(%esp)
086bd286 +0x030:  movl   $&_ZZN7WarRoom17WalkOutUserBySlotEiE19__PRETTY_FUNCTION__,0x8(%esp)
086bd28e +0x038:  movl   $"WarRoom.cpp",0x4(%esp)
086bd296 +0x040:  movl   $0x1,(%esp)
086bd29d +0x047:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bd2a2 +0x04c:  mov    $0x4,%ebx
086bd2a7 +0x051:  jmp    086bd3e3 <+0x18d>
086bd2ac +0x056:  mov    0xc(%ebp),%edx
086bd2af +0x059:  mov    0x8(%ebp),%eax
086bd2b2 +0x05c:  add    $0x48,%edx
086bd2b5 +0x05f:  mov    0xc(%eax,%edx,4),%eax
086bd2b9 +0x063:  mov    %eax,(%esp)
086bd2bc +0x066:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086bd2c1 +0x06b:  mov    %eax,(%esp)
086bd2c4 +0x06e:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
086bd2c9 +0x073:  mov    0xc(%ebp),%edx
086bd2cc +0x076:  mov    0x8(%ebp),%eax
086bd2cf +0x079:  add    $0x48,%edx
086bd2d2 +0x07c:  mov    0xc(%eax,%edx,4),%eax
086bd2d6 +0x080:  mov    %eax,(%esp)
086bd2d9 +0x083:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086bd2de +0x088:  mov    %eax,(%esp)
086bd2e1 +0x08b:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
086bd2e6 +0x090:  mov    0xc(%ebp),%edx
086bd2e9 +0x093:  mov    0x8(%ebp),%eax
086bd2ec +0x096:  add    $0x50,%edx
086bd2ef +0x099:  movl   $0xff,0x8(%eax,%edx,4)
086bd2f7 +0x0a1:  mov    0xc(%ebp),%edx
086bd2fa +0x0a4:  mov    0x8(%ebp),%eax
086bd2fd +0x0a7:  add    $0x48,%edx
086bd300 +0x0aa:  mov    0xc(%eax,%edx,4),%ebx
086bd304 +0x0ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086bd309 +0x0b3:  mov    %ebx,0x4(%esp)
086bd30d +0x0b7:  mov    %eax,(%esp)
086bd310 +0x0ba:  call   086c7452 <_ZN9GameWorld16out_from_warroomEP5CUser>  ; GameWorld::out_from_warroom(CUser*)
086bd315 +0x0bf:  mov    0x8(%ebp),%eax
086bd318 +0x0c2:  mov    0x1d0(%eax),%eax
086bd31e +0x0c8:  test   %eax,%eax
086bd320 +0x0ca:  je     086bd35f <+0x109>
086bd322 +0x0cc:  mov    0x8(%ebp),%eax
086bd325 +0x0cf:  movzbl (%eax),%eax
086bd328 +0x0d2:  movzbl %al,%ebx
086bd32b +0x0d5:  mov    0x8(%ebp),%eax
086bd32e +0x0d8:  mov    0x1d0(%eax),%eax
086bd334 +0x0de:  mov    %eax,(%esp)
086bd337 +0x0e1:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
086bd33c +0x0e6:  mov    0xc(%ebp),%ecx
086bd33f +0x0e9:  mov    0x8(%ebp),%edx
086bd342 +0x0ec:  add    $0x48,%ecx
086bd345 +0x0ef:  mov    0xc(%edx,%ecx,4),%edx
086bd349 +0x0f3:  add    $0x79700,%edx
086bd34f +0x0f9:  mov    %ebx,0x8(%esp)
086bd353 +0x0fd:  mov    %eax,0x4(%esp)
086bd357 +0x101:  mov    %edx,(%esp)
086bd35a +0x104:  call   08684a42 <_ZN15cUserHistoryLog12LeaveDungeonEPKci>  ; cUserHistoryLog::LeaveDungeon(char const*, int)
086bd35f +0x109:  mov    0xc(%ebp),%edx
086bd362 +0x10c:  mov    0x8(%ebp),%eax
086bd365 +0x10f:  add    $0x48,%edx
086bd368 +0x112:  movl   $0x0,0xc(%eax,%edx,4)
086bd370 +0x11a:  mov    0xc(%ebp),%eax
086bd373 +0x11d:  mov    0x8(%ebp),%edx
086bd376 +0x120:  movb   $0x0,0x184(%edx,%eax,1)
086bd37e +0x128:  lea    -0x14(%ebp),%eax
086bd381 +0x12b:  mov    %eax,(%esp)
086bd384 +0x12e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bd389 +0x133:  lea    -0x14(%ebp),%eax
086bd38c +0x136:  mov    0xc(%ebp),%edx
086bd38f +0x139:  mov    %edx,0x8(%esp)
086bd393 +0x13d:  mov    %eax,0x4(%esp)
086bd397 +0x141:  mov    0x8(%ebp),%eax
086bd39a +0x144:  mov    %eax,(%esp)
086bd39d +0x147:  call   086bdea0 <_ZN7WarRoom12MakeSlotInfoEPci>  ; WarRoom::MakeSlotInfo(char*, int)
086bd3a2 +0x14c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086bd3a7 +0x151:  lea    -0x14(%ebp),%edx
086bd3aa +0x154:  mov    %edx,0x4(%esp)
086bd3ae +0x158:  mov    %eax,(%esp)
086bd3b1 +0x15b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086bd3b6 +0x160:  mov    $0x0,%ebx
086bd3bb +0x165:  lea    -0x14(%ebp),%eax
086bd3be +0x168:  mov    %eax,(%esp)
086bd3c1 +0x16b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bd3c6 +0x170:  jmp    086bd3e3 <+0x18d>
086bd3c8 +0x172:  mov    %edx,%ebx
086bd3ca +0x174:  mov    %eax,%esi
086bd3cc +0x176:  lea    -0x14(%ebp),%eax
086bd3cf +0x179:  mov    %eax,(%esp)
086bd3d2 +0x17c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bd3d7 +0x181:  mov    %esi,%eax
086bd3d9 +0x183:  mov    %ebx,%edx
086bd3db +0x185:  mov    %eax,(%esp)
086bd3de +0x188:  call   08ae3750 <_Unwind_Resume>
086bd3e3 +0x18d:  mov    %ebx,%eax
086bd3e5 +0x18f:  add    $0x30,%esp
086bd3e8 +0x192:  pop    %ebx
086bd3e9 +0x193:  pop    %esi
086bd3ea +0x194:  pop    %ebp
086bd3eb +0x195:  ret
```

## 反编译 C

```c
// WarRoom::WalkOutUserBySlot @ 0x86bd256

/* WarRoom::WalkOutUserBySlot(int) */

undefined4 __thiscall WarRoom::WalkOutUserBySlot(WarRoom *this,int param_1)

{
  WarRoom WVar1;
  CUser *pCVar2;
  CHackAnalyzer *this_00;
  GameWorld *pGVar3;
  char *pcVar4;
  undefined4 uVar5;
  PacketGuard local_18 [12];
  
  if (*(int *)(this + (param_1 + 0x48) * 4 + 0xc) == 0) {
    LogManager::logFormat
              (1,"WarRoom.cpp","int WarRoom::WalkOutUserBySlot(int)",0x5cc,
               "WarRoom::WalkOutUserBySlot no slot(%d)",param_1);
    uVar5 = 4;
  }
  else {
    CUser::getHackAnalyzer(*(CUser **)(this + (param_1 + 0x48) * 4 + 0xc));
    WongWork::CHackAnalyzer::reportHackInfo();
    this_00 = (CHackAnalyzer *)
              CUser::getHackAnalyzer(*(CUser **)(this + (param_1 + 0x48) * 4 + 0xc));
    WongWork::CHackAnalyzer::resetHackInfo(this_00);
    *(undefined4 *)(this + (param_1 + 0x50) * 4 + 8) = 0xff;
    pCVar2 = *(CUser **)(this + (param_1 + 0x48) * 4 + 0xc);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::out_from_warroom(pGVar3,pCVar2);
    if (*(int *)(this + 0x1d0) != 0) {
      WVar1 = *this;
      pcVar4 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x1d0));
      cUserHistoryLog::LeaveDungeon
                ((cUserHistoryLog *)(*(int *)(this + (param_1 + 0x48) * 4 + 0xc) + 0x79700),pcVar4,
                 (uint)(byte)WVar1);
    }
    *(undefined4 *)(this + (param_1 + 0x48) * 4 + 0xc) = 0;
    this[param_1 + 0x184] = (WarRoom)0x0;
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086bd39d to 086bd3b5 has its CatchHandler @ 086bd3c8 */
    MakeSlotInfo(this,(char *)local_18,param_1);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_18);
    uVar5 = 0;
    PacketGuard::~PacketGuard(local_18);
  }
  return uVar5;
}
```
