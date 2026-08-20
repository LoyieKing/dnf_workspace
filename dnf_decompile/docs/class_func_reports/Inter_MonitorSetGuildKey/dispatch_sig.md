# dispatch_sig

`_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci`

`Inter_MonitorSetGuildKey::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorSetGuildKey` | `0x084cbd26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cbd26  _ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci
#           Inter_MonitorSetGuildKey::dispatch_sig(CUser*, char*, int)
# range [0x084cbd26, 0x084cc005]
084cbd26 +0x000:  push   %ebp
084cbd27 +0x001:  mov    %esp,%ebp
084cbd29 +0x003:  push   %esi
084cbd2a +0x004:  push   %ebx
084cbd2b +0x005:  sub    $0x40,%esp
084cbd2e +0x008:  mov    0x10(%ebp),%eax
084cbd31 +0x00b:  mov    %eax,-0xc(%ebp)
084cbd34 +0x00e:  mov    0xc(%ebp),%eax
084cbd37 +0x011:  mov    %eax,(%esp)
084cbd3a +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cbd3f +0x019:  cmp    $0x2,%eax
084cbd42 +0x01c:  sete   %al
084cbd45 +0x01f:  test   %al,%al
084cbd47 +0x021:  je     084cbd6d <+0x47>
084cbd49 +0x023:  mov    -0xc(%ebp),%eax
084cbd4c +0x026:  mov    0xe(%eax),%edx
084cbd4f +0x029:  mov    -0xc(%ebp),%eax
084cbd52 +0x02c:  mov    0x12(%eax),%eax
084cbd55 +0x02f:  mov    %edx,0x8(%esp)
084cbd59 +0x033:  mov    %eax,0x4(%esp)
084cbd5d +0x037:  mov    0xc(%ebp),%eax
084cbd60 +0x03a:  mov    %eax,(%esp)
084cbd63 +0x03d:  call   0866c04e <_ZN5CUser28set_charac_guildkey_in_loginEjj>  ; CUser::set_charac_guildkey_in_login(unsigned int, unsigned int)
084cbd68 +0x042:  jmp    084cbff9 <+0x2d3>
084cbd6d +0x047:  mov    0xc(%ebp),%eax
084cbd70 +0x04a:  mov    %eax,(%esp)
084cbd73 +0x04d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cbd78 +0x052:  cmp    $0x2,%eax
084cbd7b +0x055:  setg   %al
084cbd7e +0x058:  test   %al,%al
084cbd80 +0x05a:  je     084cbff2 <+0x2cc>
084cbd86 +0x060:  movl   $0xffffffff,0x4(%esp)
084cbd8e +0x068:  mov    0xc(%ebp),%eax
084cbd91 +0x06b:  mov    %eax,(%esp)
084cbd94 +0x06e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cbd99 +0x073:  mov    %eax,%edx
084cbd9b +0x075:  mov    -0xc(%ebp),%eax
084cbd9e +0x078:  mov    0xe(%eax),%eax
084cbda1 +0x07b:  cmp    %eax,%edx
084cbda3 +0x07d:  setne  %al
084cbda6 +0x080:  test   %al,%al
084cbda8 +0x082:  je     084cbe01 <+0xdb>
084cbdaa +0x084:  mov    -0xc(%ebp),%eax
084cbdad +0x087:  mov    0xe(%eax),%ebx
084cbdb0 +0x08a:  movl   $0xffffffff,0x4(%esp)
084cbdb8 +0x092:  mov    0xc(%ebp),%eax
084cbdbb +0x095:  mov    %eax,(%esp)
084cbdbe +0x098:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cbdc3 +0x09d:  mov    %ebx,0x18(%esp)
084cbdc7 +0x0a1:  mov    %eax,0x14(%esp)
084cbdcb +0x0a5:  movl   $"Inter_MonitorSetGuildKey::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cbdd3 +0x0ad:  movl   $0x26a7,0xc(%esp)
084cbddb +0x0b5:  movl   $&_ZZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cbde3 +0x0bd:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cbdeb +0x0c5:  movl   $0x1,(%esp)
084cbdf2 +0x0cc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cbdf7 +0x0d1:  mov    $0x0,%eax
084cbdfc +0x0d6:  jmp    084cbffe <+0x2d8>
084cbe01 +0x0db:  mov    -0xc(%ebp),%eax
084cbe04 +0x0de:  mov    0x12(%eax),%eax
084cbe07 +0x0e1:  test   %eax,%eax
084cbe09 +0x0e3:  jne    084cbf30 <+0x20a>
084cbe0f +0x0e9:  mov    0xc(%ebp),%eax
084cbe12 +0x0ec:  mov    %eax,(%esp)
084cbe15 +0x0ef:  call   0866c196 <_ZN5CUser16resetGuildDBInfoEv>  ; CUser::resetGuildDBInfo()
084cbe1a +0x0f4:  lea    -0x24(%ebp),%eax
084cbe1d +0x0f7:  mov    %eax,(%esp)
084cbe20 +0x0fa:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cbe25 +0x0ff:  lea    -0x24(%ebp),%eax
084cbe28 +0x102:  mov    %eax,(%esp)
084cbe2b +0x105:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084cbe30 +0x10a:  movl   $0x97,0x8(%esp)
084cbe38 +0x112:  movl   $0x0,0x4(%esp)
084cbe40 +0x11a:  lea    -0x24(%ebp),%eax
084cbe43 +0x11d:  mov    %eax,(%esp)
084cbe46 +0x120:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cbe4b +0x125:  movl   $0x1,0x4(%esp)
084cbe53 +0x12d:  lea    -0x24(%ebp),%eax
084cbe56 +0x130:  mov    %eax,(%esp)
084cbe59 +0x133:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cbe5e +0x138:  lea    -0x24(%ebp),%eax
084cbe61 +0x13b:  mov    %eax,0x4(%esp)
084cbe65 +0x13f:  mov    0xc(%ebp),%eax
084cbe68 +0x142:  mov    %eax,(%esp)
084cbe6b +0x145:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cbe70 +0x14a:  mov    0xc(%ebp),%eax
084cbe73 +0x14d:  mov    %eax,(%esp)
084cbe76 +0x150:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
084cbe7b +0x155:  lea    -0x24(%ebp),%eax
084cbe7e +0x158:  mov    %eax,(%esp)
084cbe81 +0x15b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084cbe86 +0x160:  movl   $0x2,0x8(%esp)
084cbe8e +0x168:  movl   $0x0,0x4(%esp)
084cbe96 +0x170:  lea    -0x24(%ebp),%eax
084cbe99 +0x173:  mov    %eax,(%esp)
084cbe9c +0x176:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cbea1 +0x17b:  movl   $0x1,0x4(%esp)
084cbea9 +0x183:  lea    -0x24(%ebp),%eax
084cbeac +0x186:  mov    %eax,(%esp)
084cbeaf +0x189:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cbeb4 +0x18e:  movl   $0x1,0x4(%esp)
084cbebc +0x196:  lea    -0x24(%ebp),%eax
084cbebf +0x199:  mov    %eax,(%esp)
084cbec2 +0x19c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cbec7 +0x1a1:  lea    -0x24(%ebp),%eax
084cbeca +0x1a4:  movl   $0x1,0x8(%esp)
084cbed2 +0x1ac:  mov    %eax,0x4(%esp)
084cbed6 +0x1b0:  mov    0xc(%ebp),%eax
084cbed9 +0x1b3:  mov    %eax,(%esp)
084cbedc +0x1b6:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084cbee1 +0x1bb:  movl   $0x1,0x4(%esp)
084cbee9 +0x1c3:  lea    -0x24(%ebp),%eax
084cbeec +0x1c6:  mov    %eax,(%esp)
084cbeef +0x1c9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cbef4 +0x1ce:  lea    -0x24(%ebp),%eax
084cbef7 +0x1d1:  mov    %eax,0x4(%esp)
084cbefb +0x1d5:  mov    0xc(%ebp),%eax
084cbefe +0x1d8:  mov    %eax,(%esp)
084cbf01 +0x1db:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cbf06 +0x1e0:  jmp    084cbf23 <+0x1fd>
084cbf08 +0x1e2:  mov    %edx,%ebx
084cbf0a +0x1e4:  mov    %eax,%esi
084cbf0c +0x1e6:  lea    -0x24(%ebp),%eax
084cbf0f +0x1e9:  mov    %eax,(%esp)
084cbf12 +0x1ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbf17 +0x1f1:  mov    %esi,%eax
084cbf19 +0x1f3:  mov    %ebx,%edx
084cbf1b +0x1f5:  mov    %eax,(%esp)
084cbf1e +0x1f8:  call   08ae3750 <_Unwind_Resume>
084cbf23 +0x1fd:  lea    -0x24(%ebp),%eax
084cbf26 +0x200:  mov    %eax,(%esp)
084cbf29 +0x203:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbf2e +0x208:  jmp    084cbf45 <+0x21f>
084cbf30 +0x20a:  mov    -0xc(%ebp),%eax
084cbf33 +0x20d:  mov    0x12(%eax),%edx
084cbf36 +0x210:  mov    0xc(%ebp),%eax
084cbf39 +0x213:  mov    %edx,0x4(%esp)
084cbf3d +0x217:  mov    %eax,(%esp)
084cbf40 +0x21a:  call   082a671e <_GLOBAL__I__ZN4CLog5this_E+0x2b45>  ; global constructors keyed to CLog::this_+0x2b45
084cbf45 +0x21f:  lea    -0x18(%ebp),%eax
084cbf48 +0x222:  mov    %eax,(%esp)
084cbf4b +0x225:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cbf50 +0x22a:  lea    -0x18(%ebp),%eax
084cbf53 +0x22d:  mov    %eax,(%esp)
084cbf56 +0x230:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084cbf5b +0x235:  movl   $0x2,0x8(%esp)
084cbf63 +0x23d:  movl   $0x0,0x4(%esp)
084cbf6b +0x245:  lea    -0x18(%ebp),%eax
084cbf6e +0x248:  mov    %eax,(%esp)
084cbf71 +0x24b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cbf76 +0x250:  movl   $0x2,0x4(%esp)
084cbf7e +0x258:  lea    -0x18(%ebp),%eax
084cbf81 +0x25b:  mov    %eax,(%esp)
084cbf84 +0x25e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cbf89 +0x263:  lea    -0x18(%ebp),%eax
084cbf8c +0x266:  movl   $0x2,0x8(%esp)
084cbf94 +0x26e:  mov    %eax,0x4(%esp)
084cbf98 +0x272:  mov    0xc(%ebp),%eax
084cbf9b +0x275:  mov    %eax,(%esp)
084cbf9e +0x278:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084cbfa3 +0x27d:  movl   $0x1,0x4(%esp)
084cbfab +0x285:  lea    -0x18(%ebp),%eax
084cbfae +0x288:  mov    %eax,(%esp)
084cbfb1 +0x28b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cbfb6 +0x290:  lea    -0x18(%ebp),%eax
084cbfb9 +0x293:  mov    %eax,0x4(%esp)
084cbfbd +0x297:  mov    0xc(%ebp),%eax
084cbfc0 +0x29a:  mov    %eax,(%esp)
084cbfc3 +0x29d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cbfc8 +0x2a2:  jmp    084cbfe5 <+0x2bf>
084cbfca +0x2a4:  mov    %edx,%ebx
084cbfcc +0x2a6:  mov    %eax,%esi
084cbfce +0x2a8:  lea    -0x18(%ebp),%eax
084cbfd1 +0x2ab:  mov    %eax,(%esp)
084cbfd4 +0x2ae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbfd9 +0x2b3:  mov    %esi,%eax
084cbfdb +0x2b5:  mov    %ebx,%edx
084cbfdd +0x2b7:  mov    %eax,(%esp)
084cbfe0 +0x2ba:  call   08ae3750 <_Unwind_Resume>
084cbfe5 +0x2bf:  lea    -0x18(%ebp),%eax
084cbfe8 +0x2c2:  mov    %eax,(%esp)
084cbfeb +0x2c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cbff0 +0x2ca:  jmp    084cbff9 <+0x2d3>
084cbff2 +0x2cc:  mov    $0x26d4,%eax
084cbff7 +0x2d1:  jmp    084cbffe <+0x2d8>
084cbff9 +0x2d3:  mov    $0x0,%eax
084cbffe +0x2d8:  add    $0x40,%esp
084cc001 +0x2db:  pop    %ebx
084cc002 +0x2dc:  pop    %esi
084cc003 +0x2dd:  pop    %ebp
084cc004 +0x2de:  ret
084cc005 +0x2df:  nop
```

## 反编译 C

```c
// Inter_MonitorSetGuildKey::dispatch_sig @ 0x84cbd26

/* Inter_MonitorSetGuildKey::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorSetGuildKey::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 2) {
    CUser::set_charac_guildkey_in_login
              ((CUser *)param_2,*(uint *)(local_10 + 0x12),*(uint *)(local_10 + 0xe));
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      return 0x26d4;
    }
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 != *(int *)(local_10 + 0xe)) {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorSetGuildKey::dispatch_sig(CUser*, char*, int)",0x26a7,
                 "Inter_MonitorSetGuildKey::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
      return 0;
    }
    if (*(int *)(local_10 + 0x12) == 0) {
      CUser::resetGuildDBInfo((CUser *)param_2);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084cbe2b to 084cbf05 has its CatchHandler @ 084cbf08 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x97);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      CUser::send_skill_info((CUser *)param_2);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
      CUser::make_basic_info((CUser *)param_2,(char *)local_28,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    else {
      CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_2,*(uint *)(local_10 + 0x12));
    }
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cbf56 to 084cbfc7 has its CatchHandler @ 084cbfca */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\x02');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
