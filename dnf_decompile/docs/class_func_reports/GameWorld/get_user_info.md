# get_user_info

`_ZN9GameWorld13get_user_infoEP5CUserii`

`GameWorld::get_user_info(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cad68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cad68  _ZN9GameWorld13get_user_infoEP5CUserii
#           GameWorld::get_user_info(CUser*, int, int)
# range [0x086cad68, 0x086cafa9]
086cad68 +0x000:  push   %ebp
086cad69 +0x001:  mov    %esp,%ebp
086cad6b +0x003:  push   %esi
086cad6c +0x004:  push   %ebx
086cad6d +0x005:  sub    $0x30,%esp
086cad70 +0x008:  lea    -0x18(%ebp),%eax
086cad73 +0x00b:  mov    %eax,(%esp)
086cad76 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086cad7b +0x013:  cmpl   $0x2,0x14(%ebp)
086cad7f +0x017:  jne    086cadfe <+0x96>
086cad81 +0x019:  lea    -0x18(%ebp),%eax
086cad84 +0x01c:  mov    %eax,(%esp)
086cad87 +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086cad8c +0x024:  movl   $0x2,0x8(%esp)
086cad94 +0x02c:  movl   $0x0,0x4(%esp)
086cad9c +0x034:  lea    -0x18(%ebp),%eax
086cad9f +0x037:  mov    %eax,(%esp)
086cada2 +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086cada7 +0x03f:  movl   $0x2,0x4(%esp)
086cadaf +0x047:  lea    -0x18(%ebp),%eax
086cadb2 +0x04a:  mov    %eax,(%esp)
086cadb5 +0x04d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cadba +0x052:  lea    -0x18(%ebp),%eax
086cadbd +0x055:  movl   $0x2,0x8(%esp)
086cadc5 +0x05d:  mov    %eax,0x4(%esp)
086cadc9 +0x061:  mov    0xc(%ebp),%eax
086cadcc +0x064:  mov    %eax,(%esp)
086cadcf +0x067:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086cadd4 +0x06c:  movl   $0x1,0x4(%esp)
086caddc +0x074:  lea    -0x18(%ebp),%eax
086caddf +0x077:  mov    %eax,(%esp)
086cade2 +0x07a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086cade7 +0x07f:  lea    -0x18(%ebp),%eax
086cadea +0x082:  mov    %eax,0x4(%esp)
086cadee +0x086:  mov    0xc(%ebp),%eax
086cadf1 +0x089:  mov    %eax,(%esp)
086cadf4 +0x08c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086cadf9 +0x091:  jmp    086caf98 <+0x230>
086cadfe +0x096:  cmpl   $0xffff,0x10(%ebp)
086cae05 +0x09d:  je     086caf98 <+0x230>
086cae0b +0x0a3:  mov    0x10(%ebp),%eax
086cae0e +0x0a6:  movzwl %ax,%eax
086cae11 +0x0a9:  mov    %eax,0x4(%esp)
086cae15 +0x0ad:  mov    0x8(%ebp),%eax
086cae18 +0x0b0:  mov    %eax,(%esp)
086cae1b +0x0b3:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
086cae20 +0x0b8:  mov    %eax,-0xc(%ebp)
086cae23 +0x0bb:  cmpl   $0x0,-0xc(%ebp)
086cae27 +0x0bf:  jne    086cae5a <+0xf2>
086cae29 +0x0c1:  movl   $"[GameWorld::get_user_info] can't find user in world",0x10(%esp)
086cae31 +0x0c9:  movl   $0x107e,0xc(%esp)
086cae39 +0x0d1:  movl   $&_ZZN9GameWorld13get_user_infoEP5CUseriiE19__PRETTY_FUNCTION__,0x8(%esp)
086cae41 +0x0d9:  movl   $"world.cpp",0x4(%esp)
086cae49 +0x0e1:  movl   $0x1,(%esp)
086cae50 +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086cae55 +0x0ed:  jmp    086caf98 <+0x230>
086cae5a +0x0f2:  cmpl   $0x3,0x14(%ebp)
086cae5e +0x0f6:  jne    086caeac <+0x144>
086cae60 +0x0f8:  mov    0xc(%ebp),%eax
086cae63 +0x0fb:  mov    %eax,(%esp)
086cae66 +0x0fe:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086cae6b +0x103:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
086cae71 +0x109:  mov    %eax,0x4(%esp)
086cae75 +0x10d:  mov    %edx,(%esp)
086cae78 +0x110:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
086cae7d +0x115:  xor    $0x1,%eax
086cae80 +0x118:  test   %al,%al
086cae82 +0x11a:  je     086caeac <+0x144>
086cae84 +0x11c:  mov    -0xc(%ebp),%eax
086cae87 +0x11f:  mov    %eax,(%esp)
086cae8a +0x122:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086cae8f +0x127:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
086cae95 +0x12d:  mov    %eax,0x4(%esp)
086cae99 +0x131:  mov    %edx,(%esp)
086cae9c +0x134:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
086caea1 +0x139:  test   %al,%al
086caea3 +0x13b:  je     086caeac <+0x144>
086caea5 +0x13d:  mov    $0x1,%eax
086caeaa +0x142:  jmp    086caeb1 <+0x149>
086caeac +0x144:  mov    $0x0,%eax
086caeb1 +0x149:  test   %al,%al
086caeb3 +0x14b:  jne    086caf98 <+0x230>
086caeb9 +0x151:  cmpl   $0x3,0x14(%ebp)
086caebd +0x155:  jne    086caee9 <+0x181>
086caebf +0x157:  movl   $0xe,0x4(%esp)
086caec7 +0x15f:  mov    -0xc(%ebp),%eax
086caeca +0x162:  mov    %eax,(%esp)
086caecd +0x165:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086caed2 +0x16a:  movl   $0x2,0x8(%esp)
086caeda +0x172:  mov    0xc(%ebp),%edx
086caedd +0x175:  mov    %edx,0x4(%esp)
086caee1 +0x179:  mov    %eax,(%esp)
086caee4 +0x17c:  call   08641750 <_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE>  ; CTitleBook::sendListOtherUser(CUser*, ENUM_TITLE_BOOK_INFO_TYPE)
086caee9 +0x181:  lea    -0x18(%ebp),%eax
086caeec +0x184:  mov    %eax,(%esp)
086caeef +0x187:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086caef4 +0x18c:  movl   $0x2,0x8(%esp)
086caefc +0x194:  movl   $0x0,0x4(%esp)
086caf04 +0x19c:  lea    -0x18(%ebp),%eax
086caf07 +0x19f:  mov    %eax,(%esp)
086caf0a +0x1a2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086caf0f +0x1a7:  mov    0x14(%ebp),%eax
086caf12 +0x1aa:  mov    %eax,0x4(%esp)
086caf16 +0x1ae:  lea    -0x18(%ebp),%eax
086caf19 +0x1b1:  mov    %eax,(%esp)
086caf1c +0x1b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086caf21 +0x1b9:  cmpl   $0x2,0x14(%ebp)
086caf25 +0x1bd:  je     086caf3a <+0x1d2>
086caf27 +0x1bf:  movl   $0x1,0x4(%esp)
086caf2f +0x1c7:  lea    -0x18(%ebp),%eax
086caf32 +0x1ca:  mov    %eax,(%esp)
086caf35 +0x1cd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086caf3a +0x1d2:  mov    0x14(%ebp),%eax
086caf3d +0x1d5:  movsbl %al,%edx
086caf40 +0x1d8:  lea    -0x18(%ebp),%eax
086caf43 +0x1db:  mov    %edx,0x8(%esp)
086caf47 +0x1df:  mov    %eax,0x4(%esp)
086caf4b +0x1e3:  mov    -0xc(%ebp),%eax
086caf4e +0x1e6:  mov    %eax,(%esp)
086caf51 +0x1e9:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086caf56 +0x1ee:  movl   $0x1,0x4(%esp)
086caf5e +0x1f6:  lea    -0x18(%ebp),%eax
086caf61 +0x1f9:  mov    %eax,(%esp)
086caf64 +0x1fc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086caf69 +0x201:  lea    -0x18(%ebp),%eax
086caf6c +0x204:  mov    %eax,0x4(%esp)
086caf70 +0x208:  mov    0xc(%ebp),%eax
086caf73 +0x20b:  mov    %eax,(%esp)
086caf76 +0x20e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086caf7b +0x213:  jmp    086caf98 <+0x230>
086caf7d +0x215:  mov    %edx,%ebx
086caf7f +0x217:  mov    %eax,%esi
086caf81 +0x219:  lea    -0x18(%ebp),%eax
086caf84 +0x21c:  mov    %eax,(%esp)
086caf87 +0x21f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086caf8c +0x224:  mov    %esi,%eax
086caf8e +0x226:  mov    %ebx,%edx
086caf90 +0x228:  mov    %eax,(%esp)
086caf93 +0x22b:  call   08ae3750 <_Unwind_Resume>
086caf98 +0x230:  lea    -0x18(%ebp),%eax
086caf9b +0x233:  mov    %eax,(%esp)
086caf9e +0x236:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cafa3 +0x23b:  add    $0x30,%esp
086cafa6 +0x23e:  pop    %ebx
086cafa7 +0x23f:  pop    %esi
086cafa8 +0x240:  pop    %ebp
086cafa9 +0x241:  ret
```

## 反编译 C

```c
// GameWorld::get_user_info @ 0x86cad68

/* GameWorld::get_user_info(CUser*, int, int) */

void __thiscall GameWorld::get_user_info(GameWorld *this,CUser *param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CTitleBook *pCVar4;
  PacketGuard local_1c [12];
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_1c);
  if (param_3 == 2) {
                    /* try { // try from 086cad87 to 086caf7a has its CatchHandler @ 086caf7d */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    CUser::make_basic_info(param_1,(char *)local_1c,'\x02');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    goto LAB_086caf98;
  }
  if (param_2 == 0xffff) goto LAB_086caf98;
  local_10 = (CUser *)find_from_world(this,(ushort)param_2);
  if (local_10 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"world.cpp","void GameWorld::get_user_info(CUser*, int, int)",0x107e,
               "[GameWorld::get_user_info] can\'t find user in world");
    goto LAB_086caf98;
  }
  if (param_3 == 3) {
    uVar3 = CUser::get_acc_id(param_1);
    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar3);
    if (cVar2 == '\x01') goto LAB_086caeac;
    uVar3 = CUser::get_acc_id(local_10);
    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar3);
    if (cVar2 == '\0') goto LAB_086caeac;
    bVar1 = true;
  }
  else {
LAB_086caeac:
    bVar1 = false;
  }
  if (!bVar1) {
    if (param_3 == 3) {
      pCVar4 = (CTitleBook *)CUser::GetCharacExpandData(local_10,0xe);
      CTitleBook::sendListOtherUser(pCVar4,param_1,2);
    }
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_3);
    if (param_3 != 2) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    }
    CUser::make_basic_info(local_10,(char *)local_1c,(char)param_3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
LAB_086caf98:
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
