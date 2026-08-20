# check_user_var

`_ZN12CGameManager14check_user_varEP5CUser`

`CGameManager::check_user_var(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829451e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829451e  _ZN12CGameManager14check_user_varEP5CUser
#           CGameManager::check_user_var(CUser*)
# range [0x0829451e, 0x082947a3]
0829451e +0x000:  push   %ebp
0829451f +0x001:  mov    %esp,%ebp
08294521 +0x003:  sub    $0x28,%esp
08294524 +0x006:  mov    0xc(%ebp),%eax
08294527 +0x009:  mov    %eax,(%esp)
0829452a +0x00c:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0829452f +0x011:  test   %eax,%eax
08294531 +0x013:  je     08294549 <+0x2b>
08294533 +0x015:  mov    0xc(%ebp),%eax
08294536 +0x018:  mov    %eax,(%esp)
08294539 +0x01b:  call   082a673c <_GLOBAL__I__ZN4CLog5this_E+0x2b63>  ; global constructors keyed to CLog::this_+0x2b63
0829453e +0x020:  test   %eax,%eax
08294540 +0x022:  je     08294549 <+0x2b>
08294542 +0x024:  mov    $0x1,%eax
08294547 +0x029:  jmp    0829454e <+0x30>
08294549 +0x02b:  mov    $0x0,%eax
0829454e +0x030:  test   %al,%al
08294550 +0x032:  je     0829457e <+0x60>
08294552 +0x034:  movl   $"[CHECK_USER_VAR] RESET GUILD EXP ERROR!",0x10(%esp)
0829455a +0x03c:  movl   $0x92c,0xc(%esp)
08294562 +0x044:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0829456a +0x04c:  movl   $"App.cpp",0x4(%esp)
08294572 +0x054:  movl   $0x1,(%esp)
08294579 +0x05b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829457e +0x060:  mov    0xc(%ebp),%eax
08294581 +0x063:  mov    %eax,(%esp)
08294584 +0x066:  call   08645d52 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv>  ; CUserCharacInfo::get_charac_level_before_dungeon() const
08294589 +0x06b:  test   %eax,%eax
0829458b +0x06d:  setne  %al
0829458e +0x070:  test   %al,%al
08294590 +0x072:  je     082945be <+0xa0>
08294592 +0x074:  movl   $"[CHECK_USER_VAR] RESET CHARACTER LEVEL BEFORE DUNGEON ERROR!",0x10(%esp)
0829459a +0x07c:  movl   $0x92f,0xc(%esp)
082945a2 +0x084:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082945aa +0x08c:  movl   $"App.cpp",0x4(%esp)
082945b2 +0x094:  movl   $0x1,(%esp)
082945b9 +0x09b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082945be +0x0a0:  mov    0xc(%ebp),%eax
082945c1 +0x0a3:  mov    %eax,(%esp)
082945c4 +0x0a6:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082945c9 +0x0ab:  test   %al,%al
082945cb +0x0ad:  je     082945f9 <+0xdb>
082945cd +0x0af:  movl   $"[CHECK_USER_VAR] RESET PARTY ERROR!",0x10(%esp)
082945d5 +0x0b7:  movl   $0x932,0xc(%esp)
082945dd +0x0bf:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082945e5 +0x0c7:  movl   $"App.cpp",0x4(%esp)
082945ed +0x0cf:  movl   $0x1,(%esp)
082945f4 +0x0d6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082945f9 +0x0db:  mov    0xc(%ebp),%eax
082945fc +0x0de:  mov    %eax,(%esp)
082945ff +0x0e1:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08294604 +0x0e6:  test   %al,%al
08294606 +0x0e8:  je     08294634 <+0x116>
08294608 +0x0ea:  movl   $"[CHECK_USER_VAR] RESET TRADE INDEX ERROR!",0x10(%esp)
08294610 +0x0f2:  movl   $0x935,0xc(%esp)
08294618 +0x0fa:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08294620 +0x102:  movl   $"App.cpp",0x4(%esp)
08294628 +0x10a:  movl   $0x1,(%esp)
0829462f +0x111:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08294634 +0x116:  mov    0xc(%ebp),%eax
08294637 +0x119:  mov    %eax,(%esp)
0829463a +0x11c:  call   0822fe5e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5508>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5508
0829463f +0x121:  test   %al,%al
08294641 +0x123:  je     0829466f <+0x151>
08294643 +0x125:  movl   $"[CHECK_USER_VAR] RESET PVP INDEX ERROR!",0x10(%esp)
0829464b +0x12d:  movl   $0x938,0xc(%esp)
08294653 +0x135:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0829465b +0x13d:  movl   $"App.cpp",0x4(%esp)
08294663 +0x145:  movl   $0x1,(%esp)
0829466a +0x14c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829466f +0x151:  mov    0xc(%ebp),%eax
08294672 +0x154:  mov    %eax,(%esp)
08294675 +0x157:  call   082a67a6 <_GLOBAL__I__ZN4CLog5this_E+0x2bcd>  ; global constructors keyed to CLog::this_+0x2bcd
0829467a +0x15c:  test   %al,%al
0829467c +0x15e:  je     082946aa <+0x18c>
0829467e +0x160:  movl   $"[CHECK_USER_VAR] RESET WARROOM INDEX ERROR!",0x10(%esp)
08294686 +0x168:  movl   $0x93b,0xc(%esp)
0829468e +0x170:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08294696 +0x178:  movl   $"App.cpp",0x4(%esp)
0829469e +0x180:  movl   $0x1,(%esp)
082946a5 +0x187:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082946aa +0x18c:  mov    0xc(%ebp),%eax
082946ad +0x18f:  mov    %eax,(%esp)
082946b0 +0x192:  call   0867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>  ; CUser::getPlayingDungeonIndex()
082946b5 +0x197:  cmp    $0xffffffff,%eax
082946b8 +0x19a:  setne  %al
082946bb +0x19d:  test   %al,%al
082946bd +0x19f:  je     082946eb <+0x1cd>
082946bf +0x1a1:  movl   $"[CHECK_USER_VAR] RESET DUNGEON ERROR!",0x10(%esp)
082946c7 +0x1a9:  movl   $0x93e,0xc(%esp)
082946cf +0x1b1:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082946d7 +0x1b9:  movl   $"App.cpp",0x4(%esp)
082946df +0x1c1:  movl   $0x1,(%esp)
082946e6 +0x1c8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082946eb +0x1cd:  mov    0xc(%ebp),%eax
082946ee +0x1d0:  mov    %eax,(%esp)
082946f1 +0x1d3:  call   082a6796 <_GLOBAL__I__ZN4CLog5this_E+0x2bbd>  ; global constructors keyed to CLog::this_+0x2bbd
082946f6 +0x1d8:  test   %al,%al
082946f8 +0x1da:  je     08294726 <+0x208>
082946fa +0x1dc:  movl   $"[CHECK_USER_VAR] RESET PROG LOGOUT ERROR!",0x10(%esp)
08294702 +0x1e4:  movl   $0x941,0xc(%esp)
0829470a +0x1ec:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08294712 +0x1f4:  movl   $"App.cpp",0x4(%esp)
0829471a +0x1fc:  movl   $0x1,(%esp)
08294721 +0x203:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08294726 +0x208:  mov    0xc(%ebp),%eax
08294729 +0x20b:  add    $0x796f4,%eax
0829472e +0x210:  mov    %eax,(%esp)
08294731 +0x213:  call   082a675e <_GLOBAL__I__ZN4CLog5this_E+0x2b85>  ; global constructors keyed to CLog::this_+0x2b85
08294736 +0x218:  test   %al,%al
08294738 +0x21a:  je     08294766 <+0x248>
0829473a +0x21c:  movl   $"[CHECK_USER_VAR] RESET CHARACTER VIEW ERROR!",0x10(%esp)
08294742 +0x224:  movl   $0x944,0xc(%esp)
0829474a +0x22c:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08294752 +0x234:  movl   $"App.cpp",0x4(%esp)
0829475a +0x23c:  movl   $0x1,(%esp)
08294761 +0x243:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08294766 +0x248:  mov    0xc(%ebp),%eax
08294769 +0x24b:  mov    %eax,(%esp)
0829476c +0x24e:  call   080da32a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4c7>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4c7
08294771 +0x253:  test   %al,%al
08294773 +0x255:  je     082947a1 <+0x283>
08294775 +0x257:  movl   $"[CHECK_USER_VAR] RESET BLUEMARBLE INDEX ERROR!",0x10(%esp)
0829477d +0x25f:  movl   $0x948,0xc(%esp)
08294785 +0x267:  movl   $&_ZZN12CGameManager14check_user_varEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0829478d +0x26f:  movl   $"App.cpp",0x4(%esp)
08294795 +0x277:  movl   $0x1,(%esp)
0829479c +0x27e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082947a1 +0x283:  leave
082947a2 +0x284:  ret
082947a3 +0x285:  nop
```

## 反编译 C

```c
// CGameManager::check_user_var @ 0x829451e

/* CGameManager::check_user_var(CUser*) */

void __thiscall CGameManager::check_user_var(CGameManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (iVar3 != 0) {
    iVar3 = CUserCharacInfo::get_guild_exp((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_0829454e;
    }
  }
  bVar1 = false;
LAB_0829454e:
  if (bVar1) {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x92c,
               "[CHECK_USER_VAR] RESET GUILD EXP ERROR!");
  }
  iVar3 = CUserCharacInfo::get_charac_level_before_dungeon((CUserCharacInfo *)param_1);
  if (iVar3 != 0) {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x92f,
               "[CHECK_USER_VAR] RESET CHARACTER LEVEL BEFORE DUNGEON ERROR!");
  }
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x932,
               "[CHECK_USER_VAR] RESET PARTY ERROR!");
  }
  cVar2 = CUser::CheckInTrade(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x935,
               "[CHECK_USER_VAR] RESET TRADE INDEX ERROR!");
  }
  cVar2 = CUser::CheckInPvp(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x938,
               "[CHECK_USER_VAR] RESET PVP INDEX ERROR!");
  }
  cVar2 = CUser::CheckInWarRoom(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x93b,
               "[CHECK_USER_VAR] RESET WARROOM INDEX ERROR!");
  }
  iVar3 = CUser::getPlayingDungeonIndex(param_1);
  if (iVar3 != -1) {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x93e,
               "[CHECK_USER_VAR] RESET DUNGEON ERROR!");
  }
  cVar2 = CUser::IsProgLogout(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x941,
               "[CHECK_USER_VAR] RESET PROG LOGOUT ERROR!");
  }
  cVar2 = CCharacterView::isSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x944,
               "[CHECK_USER_VAR] RESET CHARACTER VIEW ERROR!");
  }
  cVar2 = CUser::checkInBlueMarble(param_1);
  if (cVar2 != '\0') {
    LogManager::logFormat
              (1,"App.cpp","void CGameManager::check_user_var(CUser*)",0x948,
               "[CHECK_USER_VAR] RESET BLUEMARBLE INDEX ERROR!");
  }
  return;
}
```
