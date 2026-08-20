# start_game

`_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE`

`QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826b58a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826b58a  _ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE
#           QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)
# range [0x0826b58a, 0x0826b6f1]
0826b58a +0x000:  push   %ebp
0826b58b +0x001:  mov    %esp,%ebp
0826b58d +0x003:  sub    $0x38,%esp
0826b590 +0x006:  cmpl   $0x0,0xc(%ebp)
0826b594 +0x00a:  jne    0826b5c7 <+0x3d>
0826b596 +0x00c:  movl   $"QUICK_PARTY_LOG : QUICK PARTY IS NULL!!",0x10(%esp)
0826b59e +0x014:  movl   $0x40c,0xc(%esp)
0826b5a6 +0x01c:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyEE19__PRETTY_FUNCTION__,0x8(%esp)
0826b5ae +0x024:  movl   $"QuickParty.cpp",0x4(%esp)
0826b5b6 +0x02c:  movl   $0x1,(%esp)
0826b5bd +0x033:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826b5c2 +0x038:  jmp    0826b6f0 <+0x166>
0826b5c7 +0x03d:  mov    0xc(%ebp),%eax
0826b5ca +0x040:  mov    %eax,(%esp)
0826b5cd +0x043:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826b5d2 +0x048:  cmp    $0x1,%eax
0826b5d5 +0x04b:  setle  %al
0826b5d8 +0x04e:  test   %al,%al
0826b5da +0x050:  je     0826b60d <+0x83>
0826b5dc +0x052:  movl   $"QUICK_PARTY_LOG : NO START!! BECAUSE OF QUICK PARTY COUNT 1 !!",0x10(%esp)
0826b5e4 +0x05a:  movl   $0x412,0xc(%esp)
0826b5ec +0x062:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyEE19__PRETTY_FUNCTION__,0x8(%esp)
0826b5f4 +0x06a:  movl   $"QuickParty.cpp",0x4(%esp)
0826b5fc +0x072:  movl   $0x1,(%esp)
0826b603 +0x079:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826b608 +0x07e:  jmp    0826b6f0 <+0x166>
0826b60d +0x083:  movl   $0x0,-0xc(%ebp)
0826b614 +0x08a:  mov    0xc(%ebp),%eax
0826b617 +0x08d:  mov    %eax,0x4(%esp)
0826b61b +0x091:  mov    0x8(%ebp),%eax
0826b61e +0x094:  mov    %eax,(%esp)
0826b621 +0x097:  call   0826b222 <_ZN10QuickParty24CQuickPartySystemManager16make_quick_partyEPNS_11CQuickPartyE>  ; QuickParty::CQuickPartySystemManager::make_quick_party(QuickParty::CQuickParty*)
0826b626 +0x09c:  mov    %eax,-0xc(%ebp)
0826b629 +0x09f:  cmpl   $0x0,-0xc(%ebp)
0826b62d +0x0a3:  jne    0826b660 <+0xd6>
0826b62f +0x0a5:  movl   $"QUICK_PARTY_LOG : NO EXIST PARTY!!",0x10(%esp)
0826b637 +0x0ad:  movl   $0x41e,0xc(%esp)
0826b63f +0x0b5:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyEE19__PRETTY_FUNCTION__,0x8(%esp)
0826b647 +0x0bd:  movl   $"QuickParty.cpp",0x4(%esp)
0826b64f +0x0c5:  movl   $0x1,(%esp)
0826b656 +0x0cc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826b65b +0x0d1:  jmp    0826b6f0 <+0x166>
0826b660 +0x0d6:  mov    -0xc(%ebp),%eax
0826b663 +0x0d9:  mov    %eax,0x4(%esp)
0826b667 +0x0dd:  mov    0x8(%ebp),%eax
0826b66a +0x0e0:  mov    %eax,(%esp)
0826b66d +0x0e3:  call   0826ad50 <_ZN10QuickParty24CQuickPartySystemManager31insert_timer_waiting_start_gameEP6CParty>  ; QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game(CParty*)
0826b672 +0x0e8:  mov    -0xc(%ebp),%eax
0826b675 +0x0eb:  mov    %eax,(%esp)
0826b678 +0x0ee:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
0826b67d +0x0f3:  mov    -0xc(%ebp),%eax
0826b680 +0x0f6:  mov    %eax,(%esp)
0826b683 +0x0f9:  call   0859cea2 <_ZN6CParty17send_party_ipinfoEv>  ; CParty::send_party_ipinfo()
0826b688 +0x0fe:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0826b68d +0x103:  movl   $0x2,0x8(%esp)
0826b695 +0x10b:  mov    -0xc(%ebp),%edx
0826b698 +0x10e:  mov    %edx,0x4(%esp)
0826b69c +0x112:  mov    %eax,(%esp)
0826b69f +0x115:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
0826b6a4 +0x11a:  movl   $0x0,0x8(%esp)
0826b6ac +0x122:  movl   $0x1,0x4(%esp)
0826b6b4 +0x12a:  mov    -0xc(%ebp),%eax
0826b6b7 +0x12d:  mov    %eax,(%esp)
0826b6ba +0x130:  call   0859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>  ; CParty::send_quick_party_matching_result(bool, CUser*)
0826b6bf +0x135:  mov    -0xc(%ebp),%eax
0826b6c2 +0x138:  mov    %eax,(%esp)
0826b6c5 +0x13b:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
0826b6ca +0x140:  cmp    $0x1,%al
0826b6cc +0x142:  setle  %al
0826b6cf +0x145:  test   %al,%al
0826b6d1 +0x147:  je     0826b6ef <+0x165>
0826b6d3 +0x149:  mov    -0xc(%ebp),%eax
0826b6d6 +0x14c:  mov    %eax,(%esp)
0826b6d9 +0x14f:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0826b6de +0x154:  mov    %eax,0x4(%esp)
0826b6e2 +0x158:  mov    -0xc(%ebp),%eax
0826b6e5 +0x15b:  mov    %eax,(%esp)
0826b6e8 +0x15e:  call   0859d718 <_ZN6CParty10game_startEP5CUser>  ; CParty::game_start(CUser*)
0826b6ed +0x163:  jmp    0826b6f0 <+0x166>
0826b6ef +0x165:  nop
0826b6f0 +0x166:  leave
0826b6f1 +0x167:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::start_game @ 0x826b58a

/* QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*) */

void __thiscall
QuickParty::CQuickPartySystemManager::start_game
          (CQuickPartySystemManager *this,CQuickParty *param_1)

{
  char cVar1;
  int iVar2;
  CParty *this_00;
  GameWorld *this_01;
  CUser *pCVar3;
  
  if (param_1 == (CQuickParty *)0x0) {
    LogManager::logFormat
              (1,"QuickParty.cpp",
               "void QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)",
               0x40c,"QUICK_PARTY_LOG : QUICK PARTY IS NULL!!");
  }
  else {
    iVar2 = CQuickParty::get_quick_party_count(param_1);
    if (iVar2 < 2) {
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "void QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)",
                 0x412,"QUICK_PARTY_LOG : NO START!! BECAUSE OF QUICK PARTY COUNT 1 !!");
    }
    else {
      this_00 = (CParty *)make_quick_party(this,param_1);
      if (this_00 == (CParty *)0x0) {
        LogManager::logFormat
                  (1,"QuickParty.cpp",
                   "void QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)"
                   ,0x41e,"QUICK_PARTY_LOG : NO EXIST PARTY!!");
      }
      else {
        insert_timer_waiting_start_game(this,this_00);
        CParty::send_party_realtime_info(this_00);
        CParty::send_party_ipinfo(this_00);
        this_01 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(this_01,this_00,2);
        CParty::send_quick_party_matching_result(this_00,true,(CUser *)0x0);
        cVar1 = CParty::GetEPLPState(this_00);
        if (cVar1 < '\x02') {
          pCVar3 = (CUser *)CParty::getManager(this_00);
          CParty::game_start(this_00,pCVar3);
        }
      }
    }
  }
  return;
}
```
