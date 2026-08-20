# dispatch_sig

`_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberChatMsg` | `0x084ccfda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ccfda  _ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int)
# range [0x084ccfda, 0x084cd217]
084ccfda +0x000:  push   %ebp
084ccfdb +0x001:  mov    %esp,%ebp
084ccfdd +0x003:  push   %esi
084ccfde +0x004:  push   %ebx
084ccfdf +0x005:  sub    $0x40,%esp
084ccfe2 +0x008:  mov    0xc(%ebp),%eax
084ccfe5 +0x00b:  mov    %eax,(%esp)
084ccfe8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ccfed +0x013:  test   %eax,%eax
084ccfef +0x015:  sete   %al
084ccff2 +0x018:  test   %al,%al
084ccff4 +0x01a:  je     084cd000 <+0x26>
084ccff6 +0x01c:  mov    $0x0,%ebx
084ccffb +0x021:  jmp    084cd20e <+0x234>
084cd000 +0x026:  mov    0xc(%ebp),%eax
084cd003 +0x029:  mov    %eax,(%esp)
084cd006 +0x02c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
084cd00b +0x031:  test   %eax,%eax
084cd00d +0x033:  sete   %al
084cd010 +0x036:  test   %al,%al
084cd012 +0x038:  je     084cd061 <+0x87>
084cd014 +0x03a:  movl   $0xffffffff,0x4(%esp)
084cd01c +0x042:  mov    0xc(%ebp),%eax
084cd01f +0x045:  mov    %eax,(%esp)
084cd022 +0x048:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd027 +0x04d:  mov    %eax,0x14(%esp)
084cd02b +0x051:  movl   $"MEMBER : Inter_MonitorNoticeMemberChatMsg::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)",0x10(%esp)
084cd033 +0x059:  movl   $0x2852,0xc(%esp)
084cd03b +0x061:  movl   $&_ZZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cd043 +0x069:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cd04b +0x071:  movl   $0x1,(%esp)
084cd052 +0x078:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cd057 +0x07d:  mov    $0x0,%ebx
084cd05c +0x082:  jmp    084cd20e <+0x234>
084cd061 +0x087:  mov    0x10(%ebp),%eax
084cd064 +0x08a:  mov    %eax,-0x10(%ebp)
084cd067 +0x08d:  movl   $0xffffffff,0x4(%esp)
084cd06f +0x095:  mov    0xc(%ebp),%eax
084cd072 +0x098:  mov    %eax,(%esp)
084cd075 +0x09b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd07a +0x0a0:  mov    %eax,%edx
084cd07c +0x0a2:  mov    -0x10(%ebp),%eax
084cd07f +0x0a5:  mov    0xe(%eax),%eax
084cd082 +0x0a8:  cmp    %eax,%edx
084cd084 +0x0aa:  setne  %al
084cd087 +0x0ad:  test   %al,%al
084cd089 +0x0af:  je     084cd0e2 <+0x108>
084cd08b +0x0b1:  mov    -0x10(%ebp),%eax
084cd08e +0x0b4:  mov    0xe(%eax),%ebx
084cd091 +0x0b7:  movl   $0xffffffff,0x4(%esp)
084cd099 +0x0bf:  mov    0xc(%ebp),%eax
084cd09c +0x0c2:  mov    %eax,(%esp)
084cd09f +0x0c5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd0a4 +0x0ca:  mov    %ebx,0x18(%esp)
084cd0a8 +0x0ce:  mov    %eax,0x14(%esp)
084cd0ac +0x0d2:  movl   $"MEMBER : Inter_MonitorNoticeMemberChatMsg::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cd0b4 +0x0da:  movl   $0x2859,0xc(%esp)
084cd0bc +0x0e2:  movl   $&_ZZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cd0c4 +0x0ea:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cd0cc +0x0f2:  movl   $0x1,(%esp)
084cd0d3 +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cd0d8 +0x0fe:  mov    $0x0,%ebx
084cd0dd +0x103:  jmp    084cd20e <+0x234>
084cd0e2 +0x108:  lea    -0x1c(%ebp),%eax
084cd0e5 +0x10b:  mov    %eax,(%esp)
084cd0e8 +0x10e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cd0ed +0x113:  movl   $0x41,0x8(%esp)
084cd0f5 +0x11b:  movl   $0x0,0x4(%esp)
084cd0fd +0x123:  lea    -0x1c(%ebp),%eax
084cd100 +0x126:  mov    %eax,(%esp)
084cd103 +0x129:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cd108 +0x12e:  movl   $0x8,0x4(%esp)
084cd110 +0x136:  lea    -0x1c(%ebp),%eax
084cd113 +0x139:  mov    %eax,(%esp)
084cd116 +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd11b +0x141:  movl   $0x0,0x4(%esp)
084cd123 +0x149:  lea    -0x1c(%ebp),%eax
084cd126 +0x14c:  mov    %eax,(%esp)
084cd129 +0x14f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd12e +0x154:  mov    -0x10(%ebp),%eax
084cd131 +0x157:  add    $0x12,%eax
084cd134 +0x15a:  mov    %eax,(%esp)
084cd137 +0x15d:  call   0807e3b0 <_init+0xca8>
084cd13c +0x162:  mov    %eax,-0xc(%ebp)
084cd13f +0x165:  mov    -0xc(%ebp),%eax
084cd142 +0x168:  mov    %eax,0x4(%esp)
084cd146 +0x16c:  lea    -0x1c(%ebp),%eax
084cd149 +0x16f:  mov    %eax,(%esp)
084cd14c +0x172:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cd151 +0x177:  mov    -0x10(%ebp),%eax
084cd154 +0x17a:  lea    0x12(%eax),%edx
084cd157 +0x17d:  mov    -0xc(%ebp),%eax
084cd15a +0x180:  mov    %eax,0x8(%esp)
084cd15e +0x184:  mov    %edx,0x4(%esp)
084cd162 +0x188:  lea    -0x1c(%ebp),%eax
084cd165 +0x18b:  mov    %eax,(%esp)
084cd168 +0x18e:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cd16d +0x193:  movl   $0x0,0x4(%esp)
084cd175 +0x19b:  lea    -0x1c(%ebp),%eax
084cd178 +0x19e:  mov    %eax,(%esp)
084cd17b +0x1a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd180 +0x1a6:  mov    -0x10(%ebp),%eax
084cd183 +0x1a9:  movzbl 0x30(%eax),%eax
084cd187 +0x1ad:  movzbl %al,%eax
084cd18a +0x1b0:  mov    %eax,0x4(%esp)
084cd18e +0x1b4:  lea    -0x1c(%ebp),%eax
084cd191 +0x1b7:  mov    %eax,(%esp)
084cd194 +0x1ba:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cd199 +0x1bf:  mov    -0x10(%ebp),%eax
084cd19c +0x1c2:  movzbl 0x30(%eax),%eax
084cd1a0 +0x1c6:  movzbl %al,%eax
084cd1a3 +0x1c9:  mov    -0x10(%ebp),%edx
084cd1a6 +0x1cc:  add    $0x31,%edx
084cd1a9 +0x1cf:  mov    %eax,0x8(%esp)
084cd1ad +0x1d3:  mov    %edx,0x4(%esp)
084cd1b1 +0x1d7:  lea    -0x1c(%ebp),%eax
084cd1b4 +0x1da:  mov    %eax,(%esp)
084cd1b7 +0x1dd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cd1bc +0x1e2:  movl   $0x1,0x4(%esp)
084cd1c4 +0x1ea:  lea    -0x1c(%ebp),%eax
084cd1c7 +0x1ed:  mov    %eax,(%esp)
084cd1ca +0x1f0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cd1cf +0x1f5:  lea    -0x1c(%ebp),%eax
084cd1d2 +0x1f8:  mov    %eax,0x4(%esp)
084cd1d6 +0x1fc:  mov    0xc(%ebp),%eax
084cd1d9 +0x1ff:  mov    %eax,(%esp)
084cd1dc +0x202:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cd1e1 +0x207:  mov    $0x0,%ebx
084cd1e6 +0x20c:  lea    -0x1c(%ebp),%eax
084cd1e9 +0x20f:  mov    %eax,(%esp)
084cd1ec +0x212:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd1f1 +0x217:  jmp    084cd20e <+0x234>
084cd1f3 +0x219:  mov    %edx,%ebx
084cd1f5 +0x21b:  mov    %eax,%esi
084cd1f7 +0x21d:  lea    -0x1c(%ebp),%eax
084cd1fa +0x220:  mov    %eax,(%esp)
084cd1fd +0x223:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd202 +0x228:  mov    %esi,%eax
084cd204 +0x22a:  mov    %ebx,%edx
084cd206 +0x22c:  mov    %eax,(%esp)
084cd209 +0x22f:  call   08ae3750 <_Unwind_Resume>
084cd20e +0x234:  mov    %ebx,%eax
084cd210 +0x236:  add    $0x40,%esp
084cd213 +0x239:  pop    %ebx
084cd214 +0x23a:  pop    %esi
084cd215 +0x23b:  pop    %ebp
084cd216 +0x23c:  ret
084cd217 +0x23d:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberChatMsg::dispatch_sig @ 0x84ccfda

/* Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                 "virtual int Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int)",
                 0x2852,
                 "MEMBER : Inter_MonitorNoticeMemberChatMsg::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_14 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_14 + 0xe)) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cd103 to 084cd1e0 has its CatchHandler @ 084cd1f3 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x41);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        local_10 = strlen((char *)(local_14 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x30))
        ;
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x31),
                   (uint)*(byte *)(local_14 + 0x30));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        uVar2 = *(undefined4 *)(local_14 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int)",
                   0x2859,
                   "MEMBER : Inter_MonitorNoticeMemberChatMsg::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}
```
