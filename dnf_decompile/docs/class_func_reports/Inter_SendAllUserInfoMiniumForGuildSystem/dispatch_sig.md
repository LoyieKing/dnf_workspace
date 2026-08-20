# dispatch_sig

`_ZN41Inter_SendAllUserInfoMiniumForGuildSystem12dispatch_sigEP5CUserPci`

`Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SendAllUserInfoMiniumForGuildSystem` | `0x084d533a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d533a  _ZN41Inter_SendAllUserInfoMiniumForGuildSystem12dispatch_sigEP5CUserPci
#           Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser*, char*, int)
# range [0x084d533a, 0x084d5497]
084d533a +0x000:  push   %ebp
084d533b +0x001:  mov    %esp,%ebp
084d533d +0x003:  push   %esi
084d533e +0x004:  push   %ebx
084d533f +0x005:  sub    $0x30,%esp
084d5342 +0x008:  mov    0x10(%ebp),%eax
084d5345 +0x00b:  mov    %eax,-0xc(%ebp)
084d5348 +0x00e:  movl   $0xffffffff,0x4(%esp)
084d5350 +0x016:  mov    0xc(%ebp),%eax
084d5353 +0x019:  mov    %eax,(%esp)
084d5356 +0x01c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d535b +0x021:  mov    %eax,%edx
084d535d +0x023:  mov    -0xc(%ebp),%eax
084d5360 +0x026:  mov    0xe(%eax),%eax
084d5363 +0x029:  cmp    %eax,%edx
084d5365 +0x02b:  setne  %al
084d5368 +0x02e:  test   %al,%al
084d536a +0x030:  je     084d53c3 <+0x89>
084d536c +0x032:  mov    -0xc(%ebp),%eax
084d536f +0x035:  mov    0xe(%eax),%ebx
084d5372 +0x038:  movl   $0xffffffff,0x4(%esp)
084d537a +0x040:  mov    0xc(%ebp),%eax
084d537d +0x043:  mov    %eax,(%esp)
084d5380 +0x046:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d5385 +0x04b:  mov    %ebx,0x18(%esp)
084d5389 +0x04f:  mov    %eax,0x14(%esp)
084d538d +0x053:  movl   $"Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharId(%d)",0x10(%esp)
084d5395 +0x05b:  movl   $0x36e3,0xc(%esp)
084d539d +0x063:  movl   $&_ZZN41Inter_SendAllUserInfoMiniumForGuildSystem12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d53a5 +0x06b:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d53ad +0x073:  movl   $0x1,(%esp)
084d53b4 +0x07a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d53b9 +0x07f:  mov    $0x0,%ebx
084d53be +0x084:  jmp    084d548f <+0x155>
084d53c3 +0x089:  lea    -0x18(%ebp),%eax
084d53c6 +0x08c:  mov    %eax,(%esp)
084d53c9 +0x08f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d53ce +0x094:  lea    -0x18(%ebp),%eax
084d53d1 +0x097:  mov    %eax,(%esp)
084d53d4 +0x09a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d53d9 +0x09f:  movl   $0x2,0x8(%esp)
084d53e1 +0x0a7:  movl   $0x0,0x4(%esp)
084d53e9 +0x0af:  lea    -0x18(%ebp),%eax
084d53ec +0x0b2:  mov    %eax,(%esp)
084d53ef +0x0b5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d53f4 +0x0ba:  movl   $0x0,0x4(%esp)
084d53fc +0x0c2:  lea    -0x18(%ebp),%eax
084d53ff +0x0c5:  mov    %eax,(%esp)
084d5402 +0x0c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d5407 +0x0cd:  movl   $0x1,0x4(%esp)
084d540f +0x0d5:  lea    -0x18(%ebp),%eax
084d5412 +0x0d8:  mov    %eax,(%esp)
084d5415 +0x0db:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d541a +0x0e0:  lea    -0x18(%ebp),%eax
084d541d +0x0e3:  movl   $0x0,0x8(%esp)
084d5425 +0x0eb:  mov    %eax,0x4(%esp)
084d5429 +0x0ef:  mov    0xc(%ebp),%eax
084d542c +0x0f2:  mov    %eax,(%esp)
084d542f +0x0f5:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084d5434 +0x0fa:  movl   $0x1,0x4(%esp)
084d543c +0x102:  lea    -0x18(%ebp),%eax
084d543f +0x105:  mov    %eax,(%esp)
084d5442 +0x108:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d5447 +0x10d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d544c +0x112:  mov    0xc(%ebp),%edx
084d544f +0x115:  mov    %edx,0x8(%esp)
084d5453 +0x119:  lea    -0x18(%ebp),%edx
084d5456 +0x11c:  mov    %edx,0x4(%esp)
084d545a +0x120:  mov    %eax,(%esp)
084d545d +0x123:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
084d5462 +0x128:  mov    $0x0,%ebx
084d5467 +0x12d:  lea    -0x18(%ebp),%eax
084d546a +0x130:  mov    %eax,(%esp)
084d546d +0x133:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d5472 +0x138:  jmp    084d548f <+0x155>
084d5474 +0x13a:  mov    %edx,%ebx
084d5476 +0x13c:  mov    %eax,%esi
084d5478 +0x13e:  lea    -0x18(%ebp),%eax
084d547b +0x141:  mov    %eax,(%esp)
084d547e +0x144:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d5483 +0x149:  mov    %esi,%eax
084d5485 +0x14b:  mov    %ebx,%edx
084d5487 +0x14d:  mov    %eax,(%esp)
084d548a +0x150:  call   08ae3750 <_Unwind_Resume>
084d548f +0x155:  mov    %ebx,%eax
084d5491 +0x157:  add    $0x30,%esp
084d5494 +0x15a:  pop    %ebx
084d5495 +0x15b:  pop    %esi
084d5496 +0x15c:  pop    %ebp
084d5497 +0x15d:  ret
```

## 反编译 C

```c
// Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig @ 0x84d533a

/* Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar2 == *(int *)(local_10 + 0xe)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d53d4 to 084d5461 has its CatchHandler @ 084d5474 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_1c,(CUser *)param_2);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    uVar1 = *(undefined4 *)(local_10 + 0xe);
    uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig(CUser*, char*, int)"
               ,0x36e3,
               "Inter_SendAllUserInfoMiniumForGuildSystem::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharId(%d)"
               ,uVar3,uVar1);
  }
  return 0;
}
```
