# dispatch_sig

`_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci`

`Inter_MonitorBuddyInOut::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorBuddyInOut` | `0x084c8ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c8ec0  _ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci
#           Inter_MonitorBuddyInOut::dispatch_sig(CUser*, char*, int)
# range [0x084c8ec0, 0x084c9147]
084c8ec0 +0x000:  push   %ebp
084c8ec1 +0x001:  mov    %esp,%ebp
084c8ec3 +0x003:  push   %edi
084c8ec4 +0x004:  push   %esi
084c8ec5 +0x005:  push   %ebx
084c8ec6 +0x006:  sub    $0x19c,%esp
084c8ecc +0x00c:  mov    0xc(%ebp),%eax
084c8ecf +0x00f:  mov    %eax,(%esp)
084c8ed2 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c8ed7 +0x017:  test   %eax,%eax
084c8ed9 +0x019:  sete   %al
084c8edc +0x01c:  test   %al,%al
084c8ede +0x01e:  je     084c8eea <+0x2a>
084c8ee0 +0x020:  mov    $0x0,%ebx
084c8ee5 +0x025:  jmp    084c913b <+0x27b>
084c8eea +0x02a:  mov    0x10(%ebp),%eax
084c8eed +0x02d:  mov    %eax,-0x20(%ebp)
084c8ef0 +0x030:  lea    -0x2c(%ebp),%eax
084c8ef3 +0x033:  mov    %eax,(%esp)
084c8ef6 +0x036:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c8efb +0x03b:  mov    -0x20(%ebp),%eax
084c8efe +0x03e:  movzbl 0x14(%eax),%eax
084c8f02 +0x042:  cmp    $0x1,%al
084c8f04 +0x044:  jne    084c8f23 <+0x63>
084c8f06 +0x046:  movl   $0x36,0x8(%esp)
084c8f0e +0x04e:  movl   $0x0,0x4(%esp)
084c8f16 +0x056:  lea    -0x2c(%ebp),%eax
084c8f19 +0x059:  mov    %eax,(%esp)
084c8f1c +0x05c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c8f21 +0x061:  jmp    084c8f3e <+0x7e>
084c8f23 +0x063:  movl   $0x37,0x8(%esp)
084c8f2b +0x06b:  movl   $0x0,0x4(%esp)
084c8f33 +0x073:  lea    -0x2c(%ebp),%eax
084c8f36 +0x076:  mov    %eax,(%esp)
084c8f39 +0x079:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c8f3e +0x07e:  mov    -0x20(%ebp),%eax
084c8f41 +0x081:  movzbl 0x12(%eax),%eax
084c8f45 +0x085:  movzbl %al,%eax
084c8f48 +0x088:  mov    %eax,0x4(%esp)
084c8f4c +0x08c:  lea    -0x2c(%ebp),%eax
084c8f4f +0x08f:  mov    %eax,(%esp)
084c8f52 +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8f57 +0x097:  mov    -0x20(%ebp),%eax
084c8f5a +0x09a:  mov    0xa(%eax),%eax
084c8f5d +0x09d:  mov    %eax,0x4(%esp)
084c8f61 +0x0a1:  lea    -0x2c(%ebp),%eax
084c8f64 +0x0a4:  mov    %eax,(%esp)
084c8f67 +0x0a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c8f6c +0x0ac:  mov    -0x20(%ebp),%eax
084c8f6f +0x0af:  add    $0x15,%eax
084c8f72 +0x0b2:  mov    %eax,(%esp)
084c8f75 +0x0b5:  call   0807e3b0 <_init+0xca8>
084c8f7a +0x0ba:  mov    %eax,-0x1c(%ebp)
084c8f7d +0x0bd:  mov    -0x1c(%ebp),%eax
084c8f80 +0x0c0:  mov    %eax,0x4(%esp)
084c8f84 +0x0c4:  lea    -0x2c(%ebp),%eax
084c8f87 +0x0c7:  mov    %eax,(%esp)
084c8f8a +0x0ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c8f8f +0x0cf:  mov    -0x20(%ebp),%eax
084c8f92 +0x0d2:  lea    0x15(%eax),%edx
084c8f95 +0x0d5:  mov    -0x1c(%ebp),%eax
084c8f98 +0x0d8:  mov    %eax,0x8(%esp)
084c8f9c +0x0dc:  mov    %edx,0x4(%esp)
084c8fa0 +0x0e0:  lea    -0x2c(%ebp),%eax
084c8fa3 +0x0e3:  mov    %eax,(%esp)
084c8fa6 +0x0e6:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c8fab +0x0eb:  mov    -0x20(%ebp),%eax
084c8fae +0x0ee:  movzbl 0x13(%eax),%eax
084c8fb2 +0x0f2:  movzbl %al,%eax
084c8fb5 +0x0f5:  mov    %eax,0x4(%esp)
084c8fb9 +0x0f9:  lea    -0x2c(%ebp),%eax
084c8fbc +0x0fc:  mov    %eax,(%esp)
084c8fbf +0x0ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8fc4 +0x104:  movl   $0x1,0x4(%esp)
084c8fcc +0x10c:  lea    -0x2c(%ebp),%eax
084c8fcf +0x10f:  mov    %eax,(%esp)
084c8fd2 +0x112:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c8fd7 +0x117:  lea    -0x2c(%ebp),%eax
084c8fda +0x11a:  mov    %eax,0x4(%esp)
084c8fde +0x11e:  mov    0xc(%ebp),%eax
084c8fe1 +0x121:  mov    %eax,(%esp)
084c8fe4 +0x124:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c8fe9 +0x129:  mov    -0x20(%ebp),%eax
084c8fec +0x12c:  movzbl 0x33(%eax),%eax
084c8ff0 +0x130:  cmp    $0x1,%al
084c8ff2 +0x132:  jne    084c900a <+0x14a>
084c8ff4 +0x134:  mov    0xc(%ebp),%eax
084c8ff7 +0x137:  mov    %eax,(%esp)
084c8ffa +0x13a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c8fff +0x13f:  test   %eax,%eax
084c9001 +0x141:  je     084c900a <+0x14a>
084c9003 +0x143:  mov    $0x1,%eax
084c9008 +0x148:  jmp    084c900f <+0x14f>
084c900a +0x14a:  mov    $0x0,%eax
084c900f +0x14f:  test   %al,%al
084c9011 +0x151:  je     084c910e <+0x24e>
084c9017 +0x157:  lea    -0x69(%ebp),%eax
084c901a +0x15a:  mov    %eax,(%esp)
084c901d +0x15d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084c9022 +0x162:  mov    -0x20(%ebp),%eax
084c9025 +0x165:  lea    0x15(%eax),%esi
084c9028 +0x168:  mov    0xc(%ebp),%eax
084c902b +0x16b:  mov    %eax,(%esp)
084c902e +0x16e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084c9033 +0x173:  mov    %eax,%ebx
084c9035 +0x175:  movl   $0x0,0xc(%esp)
084c903d +0x17d:  movl   $"return_user_msg_3",0x8(%esp)
084c9045 +0x185:  movl   $0x4,0x4(%esp)
084c904d +0x18d:  movl   $&g_scriptStringManager_,(%esp)
084c9054 +0x194:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084c9059 +0x199:  mov    %esi,0x10(%esp)
084c905d +0x19d:  mov    %ebx,0xc(%esp)
084c9061 +0x1a1:  mov    %eax,0x8(%esp)
084c9065 +0x1a5:  movl   $0xff,0x4(%esp)
084c906d +0x1ad:  lea    -0x169(%ebp),%eax
084c9073 +0x1b3:  mov    %eax,(%esp)
084c9076 +0x1b6:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084c907b +0x1bb:  mov    0xc(%ebp),%eax
084c907e +0x1be:  mov    %eax,(%esp)
084c9081 +0x1c1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c9086 +0x1c6:  mov    %eax,%esi
084c9088 +0x1c8:  lea    -0x169(%ebp),%eax
084c908e +0x1ce:  mov    %eax,(%esp)
084c9091 +0x1d1:  call   0807e3b0 <_init+0xca8>
084c9096 +0x1d6:  mov    %eax,%edi
084c9098 +0x1d8:  mov    0xc(%ebp),%eax
084c909b +0x1db:  mov    %eax,(%esp)
084c909e +0x1de:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c90a3 +0x1e3:  mov    %eax,%ebx
084c90a5 +0x1e5:  movl   $0x0,0xc(%esp)
084c90ad +0x1ed:  movl   $"return_user_msg_title",0x8(%esp)
084c90b5 +0x1f5:  movl   $0x4,0x4(%esp)
084c90bd +0x1fd:  movl   $&g_scriptStringManager_,(%esp)
084c90c4 +0x204:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084c90c9 +0x209:  movl   $0x0,0x24(%esp)
084c90d1 +0x211:  movl   $0x0,0x20(%esp)
084c90d9 +0x219:  mov    %esi,0x1c(%esp)
084c90dd +0x21d:  movl   $0x0,0x18(%esp)
084c90e5 +0x225:  mov    %edi,0x14(%esp)
084c90e9 +0x229:  lea    -0x169(%ebp),%edx
084c90ef +0x22f:  mov    %edx,0x10(%esp)
084c90f3 +0x233:  mov    %ebx,0xc(%esp)
084c90f7 +0x237:  movl   $0x0,0x8(%esp)
084c90ff +0x23f:  lea    -0x69(%ebp),%edx
084c9102 +0x242:  mov    %edx,0x4(%esp)
084c9106 +0x246:  mov    %eax,(%esp)
084c9109 +0x249:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084c910e +0x24e:  mov    $0x0,%ebx
084c9113 +0x253:  lea    -0x2c(%ebp),%eax
084c9116 +0x256:  mov    %eax,(%esp)
084c9119 +0x259:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c911e +0x25e:  jmp    084c913b <+0x27b>
084c9120 +0x260:  mov    %edx,%ebx
084c9122 +0x262:  mov    %eax,%esi
084c9124 +0x264:  lea    -0x2c(%ebp),%eax
084c9127 +0x267:  mov    %eax,(%esp)
084c912a +0x26a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c912f +0x26f:  mov    %esi,%eax
084c9131 +0x271:  mov    %ebx,%edx
084c9133 +0x273:  mov    %eax,(%esp)
084c9136 +0x276:  call   08ae3750 <_Unwind_Resume>
084c913b +0x27b:  mov    %ebx,%eax
084c913d +0x27d:  add    $0x19c,%esp
084c9143 +0x283:  pop    %ebx
084c9144 +0x284:  pop    %esi
084c9145 +0x285:  pop    %edi
084c9146 +0x286:  pop    %ebp
084c9147 +0x287:  ret
```

## 反编译 C

```c
// Inter_MonitorBuddyInOut::dispatch_sig @ 0x84c8ec0

/* Inter_MonitorBuddyInOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorBuddyInOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_16d [256];
  Inven_Item local_6d [61];
  PacketGuard local_30 [12];
  int local_24;
  size_t local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_24 = param_3;
    PacketGuard::PacketGuard(local_30);
    if (*(char *)(local_24 + 0x14) == '\x01') {
                    /* try { // try from 084c8f1c to 084c910d has its CatchHandler @ 084c9120 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x36);
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x37);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_24 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_24 + 10));
    local_20 = strlen((char *)(local_24 + 0x15));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_20);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_30,(char *)(local_24 + 0x15),local_20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_24 + 0x13));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send((CUser *)param_2,local_30);
    if ((*(char *)(local_24 + 0x33) == '\x01') &&
       (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      Inven_Item::Inven_Item(local_6d);
      iVar2 = local_24 + 0x15;
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "return_user_msg_3",(bool *)0x0);
      OS_API::snprintf(local_16d,0xff,pcVar4,uVar3,iVar2);
      uVar3 = CUser::GetServerGroup((CUser *)param_2);
      sVar5 = strlen(local_16d);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar7 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,"return_user_msg_title"
                         ,(bool *)0x0);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (uVar7,local_6d,0,uVar6,local_16d,sVar5,0,uVar3,0,0);
    }
    PacketGuard::~PacketGuard(local_30);
  }
  return 0;
}
```
