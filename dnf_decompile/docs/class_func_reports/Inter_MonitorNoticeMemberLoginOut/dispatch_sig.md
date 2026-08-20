# dispatch_sig

`_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberLoginOut` | `0x084cc90a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc90a  _ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int)
# range [0x084cc90a, 0x084ccb9f]
084cc90a +0x000:  push   %ebp
084cc90b +0x001:  mov    %esp,%ebp
084cc90d +0x003:  push   %esi
084cc90e +0x004:  push   %ebx
084cc90f +0x005:  sub    $0x40,%esp
084cc912 +0x008:  mov    0xc(%ebp),%eax
084cc915 +0x00b:  mov    %eax,(%esp)
084cc918 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc91d +0x013:  test   %eax,%eax
084cc91f +0x015:  sete   %al
084cc922 +0x018:  test   %al,%al
084cc924 +0x01a:  je     084cc930 <+0x26>
084cc926 +0x01c:  mov    $0x0,%ebx
084cc92b +0x021:  jmp    084ccb96 <+0x28c>
084cc930 +0x026:  mov    0xc(%ebp),%eax
084cc933 +0x029:  mov    %eax,(%esp)
084cc936 +0x02c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
084cc93b +0x031:  test   %eax,%eax
084cc93d +0x033:  sete   %al
084cc940 +0x036:  test   %al,%al
084cc942 +0x038:  je     084cc991 <+0x87>
084cc944 +0x03a:  movl   $0xffffffff,0x4(%esp)
084cc94c +0x042:  mov    0xc(%ebp),%eax
084cc94f +0x045:  mov    %eax,(%esp)
084cc952 +0x048:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc957 +0x04d:  mov    %eax,0x14(%esp)
084cc95b +0x051:  movl   $"MEMBER : Inter_MonitorNoticeMemberLoginOut::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)",0x10(%esp)
084cc963 +0x059:  movl   $0x27b5,0xc(%esp)
084cc96b +0x061:  movl   $&_ZZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cc973 +0x069:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cc97b +0x071:  movl   $0x1,(%esp)
084cc982 +0x078:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cc987 +0x07d:  mov    $0x0,%ebx
084cc98c +0x082:  jmp    084ccb96 <+0x28c>
084cc991 +0x087:  mov    0x10(%ebp),%eax
084cc994 +0x08a:  mov    %eax,-0x10(%ebp)
084cc997 +0x08d:  movl   $0xffffffff,0x4(%esp)
084cc99f +0x095:  mov    0xc(%ebp),%eax
084cc9a2 +0x098:  mov    %eax,(%esp)
084cc9a5 +0x09b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc9aa +0x0a0:  mov    %eax,%edx
084cc9ac +0x0a2:  mov    -0x10(%ebp),%eax
084cc9af +0x0a5:  mov    0xf(%eax),%eax
084cc9b2 +0x0a8:  cmp    %eax,%edx
084cc9b4 +0x0aa:  setne  %al
084cc9b7 +0x0ad:  test   %al,%al
084cc9b9 +0x0af:  je     084cca12 <+0x108>
084cc9bb +0x0b1:  mov    -0x10(%ebp),%eax
084cc9be +0x0b4:  mov    0xf(%eax),%ebx
084cc9c1 +0x0b7:  movl   $0xffffffff,0x4(%esp)
084cc9c9 +0x0bf:  mov    0xc(%ebp),%eax
084cc9cc +0x0c2:  mov    %eax,(%esp)
084cc9cf +0x0c5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc9d4 +0x0ca:  mov    %ebx,0x18(%esp)
084cc9d8 +0x0ce:  mov    %eax,0x14(%esp)
084cc9dc +0x0d2:  movl   $"MEMBER : Inter_MonitorNoticeMemberLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cc9e4 +0x0da:  movl   $0x27bc,0xc(%esp)
084cc9ec +0x0e2:  movl   $&_ZZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cc9f4 +0x0ea:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cc9fc +0x0f2:  movl   $0x1,(%esp)
084cca03 +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cca08 +0x0fe:  mov    $0x0,%ebx
084cca0d +0x103:  jmp    084ccb96 <+0x28c>
084cca12 +0x108:  mov    -0x10(%ebp),%eax
084cca15 +0x10b:  movzbl 0xa(%eax),%eax
084cca19 +0x10f:  cmp    $0x1,%al
084cca1b +0x111:  jne    084cca58 <+0x14e>
084cca1d +0x113:  mov    -0x10(%ebp),%eax
084cca20 +0x116:  movzbl 0x14(%eax),%eax
084cca24 +0x11a:  cmp    $0x1,%al
084cca26 +0x11c:  jne    084cca58 <+0x14e>
084cca28 +0x11e:  mov    -0x10(%ebp),%eax
084cca2b +0x121:  mov    0x34(%eax),%edx
084cca2e +0x124:  mov    0xc(%ebp),%eax
084cca31 +0x127:  mov    %edx,0x4(%esp)
084cca35 +0x12b:  mov    %eax,(%esp)
084cca38 +0x12e:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cca3d +0x133:  mov    -0x10(%ebp),%eax
084cca40 +0x136:  movzbl 0x33(%eax),%eax
084cca44 +0x13a:  movzbl %al,%edx
084cca47 +0x13d:  mov    0xc(%ebp),%eax
084cca4a +0x140:  mov    %edx,0x4(%esp)
084cca4e +0x144:  mov    %eax,(%esp)
084cca51 +0x147:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cca56 +0x14c:  jmp    084cca94 <+0x18a>
084cca58 +0x14e:  mov    -0x10(%ebp),%eax
084cca5b +0x151:  movzbl 0xa(%eax),%eax
084cca5f +0x155:  test   %al,%al
084cca61 +0x157:  jne    084cca94 <+0x18a>
084cca63 +0x159:  mov    -0x10(%ebp),%eax
084cca66 +0x15c:  movzbl 0x14(%eax),%eax
084cca6a +0x160:  cmp    $0x1,%al
084cca6c +0x162:  jne    084cca94 <+0x18a>
084cca6e +0x164:  mov    0xc(%ebp),%eax
084cca71 +0x167:  movl   $0x0,0x4(%esp)
084cca79 +0x16f:  mov    %eax,(%esp)
084cca7c +0x172:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cca81 +0x177:  mov    0xc(%ebp),%eax
084cca84 +0x17a:  movl   $0x0,0x4(%esp)
084cca8c +0x182:  mov    %eax,(%esp)
084cca8f +0x185:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cca94 +0x18a:  lea    -0x1c(%ebp),%eax
084cca97 +0x18d:  mov    %eax,(%esp)
084cca9a +0x190:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cca9f +0x195:  movl   $0x48,0x8(%esp)
084ccaa7 +0x19d:  movl   $0x0,0x4(%esp)
084ccaaf +0x1a5:  lea    -0x1c(%ebp),%eax
084ccab2 +0x1a8:  mov    %eax,(%esp)
084ccab5 +0x1ab:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ccaba +0x1b0:  mov    -0x10(%ebp),%eax
084ccabd +0x1b3:  movzbl 0xa(%eax),%eax
084ccac1 +0x1b7:  movzbl %al,%eax
084ccac4 +0x1ba:  mov    %eax,0x4(%esp)
084ccac8 +0x1be:  lea    -0x1c(%ebp),%eax
084ccacb +0x1c1:  mov    %eax,(%esp)
084ccace +0x1c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ccad3 +0x1c9:  mov    -0x10(%ebp),%eax
084ccad6 +0x1cc:  movzbl 0x13(%eax),%eax
084ccada +0x1d0:  movzbl %al,%eax
084ccadd +0x1d3:  mov    %eax,0x4(%esp)
084ccae1 +0x1d7:  lea    -0x1c(%ebp),%eax
084ccae4 +0x1da:  mov    %eax,(%esp)
084ccae7 +0x1dd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ccaec +0x1e2:  mov    -0x10(%ebp),%eax
084ccaef +0x1e5:  movzbl 0x14(%eax),%eax
084ccaf3 +0x1e9:  movzbl %al,%eax
084ccaf6 +0x1ec:  mov    %eax,0x4(%esp)
084ccafa +0x1f0:  lea    -0x1c(%ebp),%eax
084ccafd +0x1f3:  mov    %eax,(%esp)
084ccb00 +0x1f6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ccb05 +0x1fb:  mov    -0x10(%ebp),%eax
084ccb08 +0x1fe:  add    $0x15,%eax
084ccb0b +0x201:  mov    %eax,(%esp)
084ccb0e +0x204:  call   0807e3b0 <_init+0xca8>
084ccb13 +0x209:  mov    %eax,-0xc(%ebp)
084ccb16 +0x20c:  mov    -0xc(%ebp),%eax
084ccb19 +0x20f:  mov    %eax,0x4(%esp)
084ccb1d +0x213:  lea    -0x1c(%ebp),%eax
084ccb20 +0x216:  mov    %eax,(%esp)
084ccb23 +0x219:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ccb28 +0x21e:  mov    -0x10(%ebp),%eax
084ccb2b +0x221:  lea    0x15(%eax),%edx
084ccb2e +0x224:  mov    -0xc(%ebp),%eax
084ccb31 +0x227:  mov    %eax,0x8(%esp)
084ccb35 +0x22b:  mov    %edx,0x4(%esp)
084ccb39 +0x22f:  lea    -0x1c(%ebp),%eax
084ccb3c +0x232:  mov    %eax,(%esp)
084ccb3f +0x235:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ccb44 +0x23a:  movl   $0x1,0x4(%esp)
084ccb4c +0x242:  lea    -0x1c(%ebp),%eax
084ccb4f +0x245:  mov    %eax,(%esp)
084ccb52 +0x248:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ccb57 +0x24d:  lea    -0x1c(%ebp),%eax
084ccb5a +0x250:  mov    %eax,0x4(%esp)
084ccb5e +0x254:  mov    0xc(%ebp),%eax
084ccb61 +0x257:  mov    %eax,(%esp)
084ccb64 +0x25a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ccb69 +0x25f:  mov    $0x0,%ebx
084ccb6e +0x264:  lea    -0x1c(%ebp),%eax
084ccb71 +0x267:  mov    %eax,(%esp)
084ccb74 +0x26a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ccb79 +0x26f:  jmp    084ccb96 <+0x28c>
084ccb7b +0x271:  mov    %edx,%ebx
084ccb7d +0x273:  mov    %eax,%esi
084ccb7f +0x275:  lea    -0x1c(%ebp),%eax
084ccb82 +0x278:  mov    %eax,(%esp)
084ccb85 +0x27b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ccb8a +0x280:  mov    %esi,%eax
084ccb8c +0x282:  mov    %ebx,%edx
084ccb8e +0x284:  mov    %eax,(%esp)
084ccb91 +0x287:  call   08ae3750 <_Unwind_Resume>
084ccb96 +0x28c:  mov    %ebx,%eax
084ccb98 +0x28e:  add    $0x40,%esp
084ccb9b +0x291:  pop    %ebx
084ccb9c +0x292:  pop    %esi
084ccb9d +0x293:  pop    %ebp
084ccb9e +0x294:  ret
084ccb9f +0x295:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberLoginOut::dispatch_sig @ 0x84cc90a

/* Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int)",
                 0x27b5,
                 "MEMBER : Inter_MonitorNoticeMemberLoginOut::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_14 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_14 + 0xf)) {
        if ((*(char *)(local_14 + 10) == '\x01') && (*(char *)(local_14 + 0x14) == '\x01')) {
          CUserCharacInfo::set_connect_upper_member
                    ((CUserCharacInfo *)param_2,*(uint *)(local_14 + 0x34));
          CUserCharacInfo::set_uppermember_exp_level
                    ((CUserCharacInfo *)param_2,*(uchar *)(local_14 + 0x33));
        }
        else if ((*(char *)(local_14 + 10) == '\0') && (*(char *)(local_14 + 0x14) == '\x01')) {
          CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
          CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
        }
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ccab5 to 084ccb68 has its CatchHandler @ 084ccb7b */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x48);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 10));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x14));
        local_10 = strlen((char *)(local_14 + 0x15));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x15),local_10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        uVar2 = *(undefined4 *)(local_14 + 0xf);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int)"
                   ,0x27bc,
                   "MEMBER : Inter_MonitorNoticeMemberLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}
```
