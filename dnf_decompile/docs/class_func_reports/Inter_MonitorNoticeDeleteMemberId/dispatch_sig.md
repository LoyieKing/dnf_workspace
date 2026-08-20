# dispatch_sig

`_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeDeleteMemberId` | `0x084cdc2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cdc2c  _ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser*, char*, int)
# range [0x084cdc2c, 0x084cddab]
084cdc2c +0x000:  push   %ebp
084cdc2d +0x001:  mov    %esp,%ebp
084cdc2f +0x003:  push   %esi
084cdc30 +0x004:  push   %ebx
084cdc31 +0x005:  sub    $0x40,%esp
084cdc34 +0x008:  mov    0xc(%ebp),%eax
084cdc37 +0x00b:  mov    %eax,(%esp)
084cdc3a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cdc3f +0x013:  test   %eax,%eax
084cdc41 +0x015:  sete   %al
084cdc44 +0x018:  test   %al,%al
084cdc46 +0x01a:  je     084cdc52 <+0x26>
084cdc48 +0x01c:  mov    $0x0,%ebx
084cdc4d +0x021:  jmp    084cdda3 <+0x177>
084cdc52 +0x026:  mov    0x10(%ebp),%eax
084cdc55 +0x029:  mov    %eax,-0x10(%ebp)
084cdc58 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cdc60 +0x034:  mov    0xc(%ebp),%eax
084cdc63 +0x037:  mov    %eax,(%esp)
084cdc66 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cdc6b +0x03f:  mov    %eax,%edx
084cdc6d +0x041:  mov    -0x10(%ebp),%eax
084cdc70 +0x044:  mov    0xe(%eax),%eax
084cdc73 +0x047:  cmp    %eax,%edx
084cdc75 +0x049:  setne  %al
084cdc78 +0x04c:  test   %al,%al
084cdc7a +0x04e:  je     084cdcd3 <+0xa7>
084cdc7c +0x050:  mov    -0x10(%ebp),%eax
084cdc7f +0x053:  mov    0xe(%eax),%ebx
084cdc82 +0x056:  movl   $0xffffffff,0x4(%esp)
084cdc8a +0x05e:  mov    0xc(%ebp),%eax
084cdc8d +0x061:  mov    %eax,(%esp)
084cdc90 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cdc95 +0x069:  mov    %ebx,0x18(%esp)
084cdc99 +0x06d:  mov    %eax,0x14(%esp)
084cdc9d +0x071:  movl   $"MEMBER : Inter_MonitorNoticeDeleteMemberId::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cdca5 +0x079:  movl   $0x296d,0xc(%esp)
084cdcad +0x081:  movl   $&_ZZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cdcb5 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cdcbd +0x091:  movl   $0x1,(%esp)
084cdcc4 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cdcc9 +0x09d:  mov    $0x0,%ebx
084cdcce +0x0a2:  jmp    084cdda3 <+0x177>
084cdcd3 +0x0a7:  mov    0xc(%ebp),%eax
084cdcd6 +0x0aa:  movl   $0x0,0x4(%esp)
084cdcde +0x0b2:  mov    %eax,(%esp)
084cdce1 +0x0b5:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cdce6 +0x0ba:  mov    0xc(%ebp),%eax
084cdce9 +0x0bd:  movl   $0x0,0x4(%esp)
084cdcf1 +0x0c5:  mov    %eax,(%esp)
084cdcf4 +0x0c8:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cdcf9 +0x0cd:  mov    0xc(%ebp),%eax
084cdcfc +0x0d0:  movl   $0x0,0x4(%esp)
084cdd04 +0x0d8:  mov    %eax,(%esp)
084cdd07 +0x0db:  call   084ec0dc <_GLOBAL__I__Z7getUserj+0x308e>  ; global constructors keyed to getUser(unsigned int)+0x308e
084cdd0c +0x0e0:  mov    0xc(%ebp),%eax
084cdd0f +0x0e3:  mov    %eax,(%esp)
084cdd12 +0x0e6:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084cdd17 +0x0eb:  mov    %eax,-0xc(%ebp)
084cdd1a +0x0ee:  cmpl   $0x0,-0xc(%ebp)
084cdd1e +0x0f2:  je     084cdd2b <+0xff>
084cdd20 +0x0f4:  mov    -0xc(%ebp),%eax
084cdd23 +0x0f7:  mov    %eax,(%esp)
084cdd26 +0x0fa:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
084cdd2b +0x0ff:  lea    -0x1c(%ebp),%eax
084cdd2e +0x102:  mov    %eax,(%esp)
084cdd31 +0x105:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cdd36 +0x10a:  movl   $0x4b,0x8(%esp)
084cdd3e +0x112:  movl   $0x0,0x4(%esp)
084cdd46 +0x11a:  lea    -0x1c(%ebp),%eax
084cdd49 +0x11d:  mov    %eax,(%esp)
084cdd4c +0x120:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cdd51 +0x125:  movl   $0x1,0x4(%esp)
084cdd59 +0x12d:  lea    -0x1c(%ebp),%eax
084cdd5c +0x130:  mov    %eax,(%esp)
084cdd5f +0x133:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cdd64 +0x138:  lea    -0x1c(%ebp),%eax
084cdd67 +0x13b:  mov    %eax,0x4(%esp)
084cdd6b +0x13f:  mov    0xc(%ebp),%eax
084cdd6e +0x142:  mov    %eax,(%esp)
084cdd71 +0x145:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cdd76 +0x14a:  mov    $0x0,%ebx
084cdd7b +0x14f:  lea    -0x1c(%ebp),%eax
084cdd7e +0x152:  mov    %eax,(%esp)
084cdd81 +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cdd86 +0x15a:  jmp    084cdda3 <+0x177>
084cdd88 +0x15c:  mov    %edx,%ebx
084cdd8a +0x15e:  mov    %eax,%esi
084cdd8c +0x160:  lea    -0x1c(%ebp),%eax
084cdd8f +0x163:  mov    %eax,(%esp)
084cdd92 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cdd97 +0x16b:  mov    %esi,%eax
084cdd99 +0x16d:  mov    %ebx,%edx
084cdd9b +0x16f:  mov    %eax,(%esp)
084cdd9e +0x172:  call   08ae3750 <_Unwind_Resume>
084cdda3 +0x177:  mov    %ebx,%eax
084cdda5 +0x179:  add    $0x40,%esp
084cdda8 +0x17c:  pop    %ebx
084cdda9 +0x17d:  pop    %esi
084cddaa +0x17e:  pop    %ebp
084cddab +0x17f:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeDeleteMemberId::dispatch_sig @ 0x84cdc2c

/* Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
      CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
      CUserCharacInfo::set_charac_memberkey((CUserCharacInfo *)param_2,0);
      local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
      if (local_10 != (CParty *)0x0) {
        CParty::send_party_realtime_info(local_10);
      }
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cdd4c to 084cdd75 has its CatchHandler @ 084cdd88 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x4b);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser*, char*, int)",
                 0x296d,
                 "MEMBER : Inter_MonitorNoticeDeleteMemberId::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```
