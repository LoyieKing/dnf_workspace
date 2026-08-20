# dispatch_sig

`_ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberChatMsgHyperLink` | `0x084e5282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e5282  _ZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int)
# range [0x084e5282, 0x084e5527]
084e5282 +0x000:  push   %ebp
084e5283 +0x001:  mov    %esp,%ebp
084e5285 +0x003:  push   %esi
084e5286 +0x004:  push   %ebx
084e5287 +0x005:  sub    $0x40,%esp
084e528a +0x008:  mov    0xc(%ebp),%eax
084e528d +0x00b:  mov    %eax,(%esp)
084e5290 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e5295 +0x013:  test   %eax,%eax
084e5297 +0x015:  sete   %al
084e529a +0x018:  test   %al,%al
084e529c +0x01a:  je     084e52a8 <+0x26>
084e529e +0x01c:  mov    $0x0,%ebx
084e52a3 +0x021:  jmp    084e551f <+0x29d>
084e52a8 +0x026:  mov    0xc(%ebp),%eax
084e52ab +0x029:  mov    %eax,(%esp)
084e52ae +0x02c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
084e52b3 +0x031:  test   %eax,%eax
084e52b5 +0x033:  sete   %al
084e52b8 +0x036:  test   %al,%al
084e52ba +0x038:  je     084e5309 <+0x87>
084e52bc +0x03a:  movl   $0xffffffff,0x4(%esp)
084e52c4 +0x042:  mov    0xc(%ebp),%eax
084e52c7 +0x045:  mov    %eax,(%esp)
084e52ca +0x048:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e52cf +0x04d:  mov    %eax,0x14(%esp)
084e52d3 +0x051:  movl   $"MEMBER : Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)",0x10(%esp)
084e52db +0x059:  movl   $0x640a,0xc(%esp)
084e52e3 +0x061:  movl   $&_ZZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e52eb +0x069:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e52f3 +0x071:  movl   $0x1,(%esp)
084e52fa +0x078:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e52ff +0x07d:  mov    $0x0,%ebx
084e5304 +0x082:  jmp    084e551f <+0x29d>
084e5309 +0x087:  mov    0x10(%ebp),%eax
084e530c +0x08a:  mov    %eax,-0x14(%ebp)
084e530f +0x08d:  movl   $0xffffffff,0x4(%esp)
084e5317 +0x095:  mov    0xc(%ebp),%eax
084e531a +0x098:  mov    %eax,(%esp)
084e531d +0x09b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e5322 +0x0a0:  mov    %eax,%edx
084e5324 +0x0a2:  mov    -0x14(%ebp),%eax
084e5327 +0x0a5:  mov    0xe(%eax),%eax
084e532a +0x0a8:  cmp    %eax,%edx
084e532c +0x0aa:  setne  %al
084e532f +0x0ad:  test   %al,%al
084e5331 +0x0af:  je     084e538a <+0x108>
084e5333 +0x0b1:  mov    -0x14(%ebp),%eax
084e5336 +0x0b4:  mov    0xe(%eax),%ebx
084e5339 +0x0b7:  movl   $0xffffffff,0x4(%esp)
084e5341 +0x0bf:  mov    0xc(%ebp),%eax
084e5344 +0x0c2:  mov    %eax,(%esp)
084e5347 +0x0c5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e534c +0x0ca:  mov    %ebx,0x18(%esp)
084e5350 +0x0ce:  mov    %eax,0x14(%esp)
084e5354 +0x0d2:  movl   $"MEMBER : Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084e535c +0x0da:  movl   $0x6411,0xc(%esp)
084e5364 +0x0e2:  movl   $&_ZZN41Inter_MonitorNoticeMemberChatMsgHyperLink12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e536c +0x0ea:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e5374 +0x0f2:  movl   $0x1,(%esp)
084e537b +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e5380 +0x0fe:  mov    $0x0,%ebx
084e5385 +0x103:  jmp    084e551f <+0x29d>
084e538a +0x108:  lea    -0x20(%ebp),%eax
084e538d +0x10b:  mov    %eax,(%esp)
084e5390 +0x10e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e5395 +0x113:  movl   $0x173,0x8(%esp)
084e539d +0x11b:  movl   $0x0,0x4(%esp)
084e53a5 +0x123:  lea    -0x20(%ebp),%eax
084e53a8 +0x126:  mov    %eax,(%esp)
084e53ab +0x129:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e53b0 +0x12e:  movl   $0x8,0x4(%esp)
084e53b8 +0x136:  lea    -0x20(%ebp),%eax
084e53bb +0x139:  mov    %eax,(%esp)
084e53be +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e53c3 +0x141:  movl   $0x0,0x4(%esp)
084e53cb +0x149:  lea    -0x20(%ebp),%eax
084e53ce +0x14c:  mov    %eax,(%esp)
084e53d1 +0x14f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e53d6 +0x154:  mov    -0x14(%ebp),%eax
084e53d9 +0x157:  add    $0x12,%eax
084e53dc +0x15a:  mov    %eax,(%esp)
084e53df +0x15d:  call   0807e3b0 <_init+0xca8>
084e53e4 +0x162:  mov    %eax,-0x10(%ebp)
084e53e7 +0x165:  mov    -0x10(%ebp),%eax
084e53ea +0x168:  mov    %eax,0x4(%esp)
084e53ee +0x16c:  lea    -0x20(%ebp),%eax
084e53f1 +0x16f:  mov    %eax,(%esp)
084e53f4 +0x172:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e53f9 +0x177:  mov    -0x14(%ebp),%eax
084e53fc +0x17a:  lea    0x12(%eax),%edx
084e53ff +0x17d:  mov    -0x10(%ebp),%eax
084e5402 +0x180:  mov    %eax,0x8(%esp)
084e5406 +0x184:  mov    %edx,0x4(%esp)
084e540a +0x188:  lea    -0x20(%ebp),%eax
084e540d +0x18b:  mov    %eax,(%esp)
084e5410 +0x18e:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e5415 +0x193:  movl   $0x0,0x4(%esp)
084e541d +0x19b:  lea    -0x20(%ebp),%eax
084e5420 +0x19e:  mov    %eax,(%esp)
084e5423 +0x1a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5428 +0x1a6:  mov    -0x14(%ebp),%eax
084e542b +0x1a9:  movzbl 0x169(%eax),%eax
084e5432 +0x1b0:  movzbl %al,%eax
084e5435 +0x1b3:  mov    %eax,0x4(%esp)
084e5439 +0x1b7:  lea    -0x20(%ebp),%eax
084e543c +0x1ba:  mov    %eax,(%esp)
084e543f +0x1bd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e5444 +0x1c2:  mov    -0x14(%ebp),%eax
084e5447 +0x1c5:  movzbl 0x169(%eax),%eax
084e544e +0x1cc:  movzbl %al,%eax
084e5451 +0x1cf:  mov    -0x14(%ebp),%edx
084e5454 +0x1d2:  add    $0x16a,%edx
084e545a +0x1d8:  mov    %eax,0x8(%esp)
084e545e +0x1dc:  mov    %edx,0x4(%esp)
084e5462 +0x1e0:  lea    -0x20(%ebp),%eax
084e5465 +0x1e3:  mov    %eax,(%esp)
084e5468 +0x1e6:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e546d +0x1eb:  mov    -0x14(%ebp),%eax
084e5470 +0x1ee:  movzbl 0x30(%eax),%eax
084e5474 +0x1f2:  movzbl %al,%eax
084e5477 +0x1f5:  mov    %eax,0x4(%esp)
084e547b +0x1f9:  lea    -0x20(%ebp),%eax
084e547e +0x1fc:  mov    %eax,(%esp)
084e5481 +0x1ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e5486 +0x204:  movl   $0x0,-0xc(%ebp)
084e548d +0x20b:  jmp    084e54b9 <+0x237>
084e548f +0x20d:  mov    -0xc(%ebp),%eax
084e5492 +0x210:  imul   $0x68,%eax,%eax
084e5495 +0x213:  add    $0x30,%eax
084e5498 +0x216:  add    -0x14(%ebp),%eax
084e549b +0x219:  add    $0x1,%eax
084e549e +0x21c:  movl   $0x68,0x8(%esp)
084e54a6 +0x224:  mov    %eax,0x4(%esp)
084e54aa +0x228:  lea    -0x20(%ebp),%eax
084e54ad +0x22b:  mov    %eax,(%esp)
084e54b0 +0x22e:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e54b5 +0x233:  addl   $0x1,-0xc(%ebp)
084e54b9 +0x237:  mov    -0x14(%ebp),%eax
084e54bc +0x23a:  movzbl 0x30(%eax),%eax
084e54c0 +0x23e:  movzbl %al,%eax
084e54c3 +0x241:  cmp    -0xc(%ebp),%eax
084e54c6 +0x244:  setg   %al
084e54c9 +0x247:  test   %al,%al
084e54cb +0x249:  jne    084e548f <+0x20d>
084e54cd +0x24b:  movl   $0x1,0x4(%esp)
084e54d5 +0x253:  lea    -0x20(%ebp),%eax
084e54d8 +0x256:  mov    %eax,(%esp)
084e54db +0x259:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e54e0 +0x25e:  lea    -0x20(%ebp),%eax
084e54e3 +0x261:  mov    %eax,0x4(%esp)
084e54e7 +0x265:  mov    0xc(%ebp),%eax
084e54ea +0x268:  mov    %eax,(%esp)
084e54ed +0x26b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e54f2 +0x270:  mov    $0x0,%ebx
084e54f7 +0x275:  lea    -0x20(%ebp),%eax
084e54fa +0x278:  mov    %eax,(%esp)
084e54fd +0x27b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5502 +0x280:  jmp    084e551f <+0x29d>
084e5504 +0x282:  mov    %edx,%ebx
084e5506 +0x284:  mov    %eax,%esi
084e5508 +0x286:  lea    -0x20(%ebp),%eax
084e550b +0x289:  mov    %eax,(%esp)
084e550e +0x28c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e5513 +0x291:  mov    %esi,%eax
084e5515 +0x293:  mov    %ebx,%edx
084e5517 +0x295:  mov    %eax,(%esp)
084e551a +0x298:  call   08ae3750 <_Unwind_Resume>
084e551f +0x29d:  mov    %ebx,%eax
084e5521 +0x29f:  add    $0x40,%esp
084e5524 +0x2a2:  pop    %ebx
084e5525 +0x2a3:  pop    %esi
084e5526 +0x2a4:  pop    %ebp
084e5527 +0x2a5:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig @ 0x84e5282

/* Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int)"
                 ,0x640a,
                 "MEMBER : Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_18 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_18 + 0xe)) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e53ab to 084e54f1 has its CatchHandler @ 084e5504 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x173);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        local_14 = strlen((char *)(local_18 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x12),local_14);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x169));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x16a),
                   (uint)*(byte *)(local_18 + 0x169));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x30));
        for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_18 + 0x30); local_10 = local_10 + 1
            ) {
          InterfacePacketBuf::put_binary
                    ((InterfacePacketBuf *)local_24,(char *)(local_10 * 0x68 + local_18 + 0x31),0x68
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        uVar2 = *(undefined4 *)(local_18 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig(CUser*, char*, int)"
                   ,0x6411,
                   "MEMBER : Inter_MonitorNoticeMemberChatMsgHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}
```
