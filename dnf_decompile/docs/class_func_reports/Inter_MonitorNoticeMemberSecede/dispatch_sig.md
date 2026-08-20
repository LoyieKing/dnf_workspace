# dispatch_sig

`_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberSecede` | `0x084cd83a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cd83a  _ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser*, char*, int)
# range [0x084cd83a, 0x084cda73]
084cd83a +0x000:  push   %ebp
084cd83b +0x001:  mov    %esp,%ebp
084cd83d +0x003:  push   %esi
084cd83e +0x004:  push   %ebx
084cd83f +0x005:  sub    $0x40,%esp
084cd842 +0x008:  mov    0xc(%ebp),%eax
084cd845 +0x00b:  mov    %eax,(%esp)
084cd848 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cd84d +0x013:  test   %eax,%eax
084cd84f +0x015:  sete   %al
084cd852 +0x018:  test   %al,%al
084cd854 +0x01a:  je     084cd860 <+0x26>
084cd856 +0x01c:  mov    $0x0,%ebx
084cd85b +0x021:  jmp    084cda6a <+0x230>
084cd860 +0x026:  mov    0x10(%ebp),%eax
084cd863 +0x029:  mov    %eax,-0x14(%ebp)
084cd866 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cd86e +0x034:  mov    0xc(%ebp),%eax
084cd871 +0x037:  mov    %eax,(%esp)
084cd874 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd879 +0x03f:  mov    %eax,%edx
084cd87b +0x041:  mov    -0x14(%ebp),%eax
084cd87e +0x044:  mov    0xe(%eax),%eax
084cd881 +0x047:  cmp    %eax,%edx
084cd883 +0x049:  setne  %al
084cd886 +0x04c:  test   %al,%al
084cd888 +0x04e:  je     084cd8e1 <+0xa7>
084cd88a +0x050:  mov    -0x14(%ebp),%eax
084cd88d +0x053:  mov    0xe(%eax),%ebx
084cd890 +0x056:  movl   $0xffffffff,0x4(%esp)
084cd898 +0x05e:  mov    0xc(%ebp),%eax
084cd89b +0x061:  mov    %eax,(%esp)
084cd89e +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd8a3 +0x069:  mov    %ebx,0x18(%esp)
084cd8a7 +0x06d:  mov    %eax,0x14(%esp)
084cd8ab +0x071:  movl   $"MEMBER : Inter_MonitorNoticeMemberSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCallerCharID(%d)",0x10(%esp)
084cd8b3 +0x079:  movl   $0x2914,0xc(%esp)
084cd8bb +0x081:  movl   $&_ZZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cd8c3 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cd8cb +0x091:  movl   $0x1,(%esp)
084cd8d2 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cd8d7 +0x09d:  mov    $0x0,%ebx
084cd8dc +0x0a2:  jmp    084cda6a <+0x230>
084cd8e1 +0x0a7:  mov    -0x14(%ebp),%eax
084cd8e4 +0x0aa:  movzbl 0x12(%eax),%eax
084cd8e8 +0x0ae:  cmp    $0x1,%al
084cd8ea +0x0b0:  jne    084cd931 <+0xf7>
084cd8ec +0x0b2:  mov    0xc(%ebp),%eax
084cd8ef +0x0b5:  movl   $0x0,0x4(%esp)
084cd8f7 +0x0bd:  mov    %eax,(%esp)
084cd8fa +0x0c0:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cd8ff +0x0c5:  mov    0xc(%ebp),%eax
084cd902 +0x0c8:  movl   $0x0,0x4(%esp)
084cd90a +0x0d0:  mov    %eax,(%esp)
084cd90d +0x0d3:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cd912 +0x0d8:  mov    0xc(%ebp),%eax
084cd915 +0x0db:  mov    %eax,(%esp)
084cd918 +0x0de:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084cd91d +0x0e3:  mov    %eax,-0xc(%ebp)
084cd920 +0x0e6:  cmpl   $0x0,-0xc(%ebp)
084cd924 +0x0ea:  je     084cd931 <+0xf7>
084cd926 +0x0ec:  mov    -0xc(%ebp),%eax
084cd929 +0x0ef:  mov    %eax,(%esp)
084cd92c +0x0f2:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
084cd931 +0x0f7:  lea    -0x20(%ebp),%eax
084cd934 +0x0fa:  mov    %eax,(%esp)
084cd937 +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cd93c +0x102:  movl   $0x51,0x8(%esp)
084cd944 +0x10a:  movl   $0x1,0x4(%esp)
084cd94c +0x112:  lea    -0x20(%ebp),%eax
084cd94f +0x115:  mov    %eax,(%esp)
084cd952 +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cd957 +0x11d:  mov    -0x14(%ebp),%eax
084cd95a +0x120:  movzbl 0x12(%eax),%eax
084cd95e +0x124:  cmp    $0x1,%al
084cd960 +0x126:  je     084cd96d <+0x133>
084cd962 +0x128:  mov    -0x14(%ebp),%eax
084cd965 +0x12b:  movzbl 0x12(%eax),%eax
084cd969 +0x12f:  cmp    $0x2,%al
084cd96b +0x131:  jne    084cd982 <+0x148>
084cd96d +0x133:  movl   $0x1,0x4(%esp)
084cd975 +0x13b:  lea    -0x20(%ebp),%eax
084cd978 +0x13e:  mov    %eax,(%esp)
084cd97b +0x141:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd980 +0x146:  jmp    084cd995 <+0x15b>
084cd982 +0x148:  movl   $0x0,0x4(%esp)
084cd98a +0x150:  lea    -0x20(%ebp),%eax
084cd98d +0x153:  mov    %eax,(%esp)
084cd990 +0x156:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd995 +0x15b:  mov    -0x14(%ebp),%eax
084cd998 +0x15e:  add    $0x13,%eax
084cd99b +0x161:  mov    %eax,(%esp)
084cd99e +0x164:  call   0807e3b0 <_init+0xca8>
084cd9a3 +0x169:  mov    %eax,-0x10(%ebp)
084cd9a6 +0x16c:  mov    -0x10(%ebp),%eax
084cd9a9 +0x16f:  mov    %eax,0x4(%esp)
084cd9ad +0x173:  lea    -0x20(%ebp),%eax
084cd9b0 +0x176:  mov    %eax,(%esp)
084cd9b3 +0x179:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cd9b8 +0x17e:  mov    -0x14(%ebp),%eax
084cd9bb +0x181:  lea    0x13(%eax),%edx
084cd9be +0x184:  mov    -0x10(%ebp),%eax
084cd9c1 +0x187:  mov    %eax,0x8(%esp)
084cd9c5 +0x18b:  mov    %edx,0x4(%esp)
084cd9c9 +0x18f:  lea    -0x20(%ebp),%eax
084cd9cc +0x192:  mov    %eax,(%esp)
084cd9cf +0x195:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cd9d4 +0x19a:  mov    -0x14(%ebp),%eax
084cd9d7 +0x19d:  movzbl 0x12(%eax),%eax
084cd9db +0x1a1:  cmp    $0x1,%al
084cd9dd +0x1a3:  je     084cd9ea <+0x1b0>
084cd9df +0x1a5:  mov    -0x14(%ebp),%eax
084cd9e2 +0x1a8:  movzbl 0x12(%eax),%eax
084cd9e6 +0x1ac:  cmp    $0x2,%al
084cd9e8 +0x1ae:  jne    084cd9ff <+0x1c5>
084cd9ea +0x1b0:  movl   $0x1,0x4(%esp)
084cd9f2 +0x1b8:  lea    -0x20(%ebp),%eax
084cd9f5 +0x1bb:  mov    %eax,(%esp)
084cd9f8 +0x1be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd9fd +0x1c3:  jmp    084cda18 <+0x1de>
084cd9ff +0x1c5:  mov    -0x14(%ebp),%eax
084cda02 +0x1c8:  movzbl 0x12(%eax),%eax
084cda06 +0x1cc:  movzbl %al,%eax
084cda09 +0x1cf:  mov    %eax,0x4(%esp)
084cda0d +0x1d3:  lea    -0x20(%ebp),%eax
084cda10 +0x1d6:  mov    %eax,(%esp)
084cda13 +0x1d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cda18 +0x1de:  movl   $0x1,0x4(%esp)
084cda20 +0x1e6:  lea    -0x20(%ebp),%eax
084cda23 +0x1e9:  mov    %eax,(%esp)
084cda26 +0x1ec:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cda2b +0x1f1:  lea    -0x20(%ebp),%eax
084cda2e +0x1f4:  mov    %eax,0x4(%esp)
084cda32 +0x1f8:  mov    0xc(%ebp),%eax
084cda35 +0x1fb:  mov    %eax,(%esp)
084cda38 +0x1fe:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cda3d +0x203:  mov    $0x0,%ebx
084cda42 +0x208:  lea    -0x20(%ebp),%eax
084cda45 +0x20b:  mov    %eax,(%esp)
084cda48 +0x20e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cda4d +0x213:  jmp    084cda6a <+0x230>
084cda4f +0x215:  mov    %edx,%ebx
084cda51 +0x217:  mov    %eax,%esi
084cda53 +0x219:  lea    -0x20(%ebp),%eax
084cda56 +0x21c:  mov    %eax,(%esp)
084cda59 +0x21f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cda5e +0x224:  mov    %esi,%eax
084cda60 +0x226:  mov    %ebx,%edx
084cda62 +0x228:  mov    %eax,(%esp)
084cda65 +0x22b:  call   08ae3750 <_Unwind_Resume>
084cda6a +0x230:  mov    %ebx,%eax
084cda6c +0x232:  add    $0x40,%esp
084cda6f +0x235:  pop    %ebx
084cda70 +0x236:  pop    %esi
084cda71 +0x237:  pop    %ebp
084cda72 +0x238:  ret
084cda73 +0x239:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberSecede::dispatch_sig @ 0x84cd83a

/* Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      if (*(char *)(local_18 + 0x12) == '\x01') {
        CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
        CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
        local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
        if (local_10 != (CParty *)0x0) {
          CParty::send_party_realtime_info(local_10);
        }
      }
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cd952 to 084cda3c has its CatchHandler @ 084cda4f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x51);
      if ((*(char *)(local_18 + 0x12) == '\x01') || (*(char *)(local_18 + 0x12) == '\x02')) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      }
      local_14 = strlen((char *)(local_18 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x13),local_14)
      ;
      if ((*(char *)(local_18 + 0x12) == '\x01') || (*(char *)(local_18 + 0x12) == '\x02')) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      }
      else {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x12));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser*, char*, int)",
                 0x2914,
                 "MEMBER : Inter_MonitorNoticeMemberSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCallerCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```
