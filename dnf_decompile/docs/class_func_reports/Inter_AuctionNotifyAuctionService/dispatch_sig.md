# dispatch_sig

`_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci`

`Inter_AuctionNotifyAuctionService::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionNotifyAuctionService` | `0x084d7ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7ac8  _ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci
#           Inter_AuctionNotifyAuctionService::dispatch_sig(CUser*, char*, int)
# range [0x084d7ac8, 0x084d7c47]
084d7ac8 +0x000:  push   %ebp
084d7ac9 +0x001:  mov    %esp,%ebp
084d7acb +0x003:  push   %esi
084d7acc +0x004:  push   %ebx
084d7acd +0x005:  sub    $0x30,%esp
084d7ad0 +0x008:  mov    0x10(%ebp),%eax
084d7ad3 +0x00b:  mov    %eax,-0xc(%ebp)
084d7ad6 +0x00e:  lea    -0x28(%ebp),%eax
084d7ad9 +0x011:  mov    %eax,(%esp)
084d7adc +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d7ae1 +0x019:  movl   $0xb7,0x8(%esp)
084d7ae9 +0x021:  movl   $0x0,0x4(%esp)
084d7af1 +0x029:  lea    -0x28(%ebp),%eax
084d7af4 +0x02c:  mov    %eax,(%esp)
084d7af7 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d7afc +0x034:  mov    -0xc(%ebp),%eax
084d7aff +0x037:  mov    (%eax),%eax
084d7b01 +0x039:  mov    %eax,0x4(%esp)
084d7b05 +0x03d:  lea    -0x28(%ebp),%eax
084d7b08 +0x040:  mov    %eax,(%esp)
084d7b0b +0x043:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7b10 +0x048:  mov    -0xc(%ebp),%eax
084d7b13 +0x04b:  mov    (%eax),%eax
084d7b15 +0x04d:  cmp    $0x1,%eax
084d7b18 +0x050:  jne    084d7b37 <+0x6f>
084d7b1a +0x052:  mov    -0xc(%ebp),%eax
084d7b1d +0x055:  movzbl 0x4(%eax),%eax
084d7b21 +0x059:  movzbl %al,%edx
084d7b24 +0x05c:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
084d7b29 +0x061:  mov    %edx,0x4(%esp)
084d7b2d +0x065:  mov    %eax,(%esp)
084d7b30 +0x068:  call   084ed360 <_GLOBAL__I__Z7getUserj+0x4312>  ; global constructors keyed to getUser(unsigned int)+0x4312
084d7b35 +0x06d:  jmp    084d7b52 <+0x8a>
084d7b37 +0x06f:  mov    -0xc(%ebp),%eax
084d7b3a +0x072:  movzbl 0x4(%eax),%eax
084d7b3e +0x076:  movzbl %al,%edx
084d7b41 +0x079:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
084d7b46 +0x07e:  mov    %edx,0x4(%esp)
084d7b4a +0x082:  mov    %eax,(%esp)
084d7b4d +0x085:  call   084ed344 <_GLOBAL__I__Z7getUserj+0x42f6>  ; global constructors keyed to getUser(unsigned int)+0x42f6
084d7b52 +0x08a:  mov    -0xc(%ebp),%eax
084d7b55 +0x08d:  movzbl 0x4(%eax),%eax
084d7b59 +0x091:  test   %al,%al
084d7b5b +0x093:  je     084d7b72 <+0xaa>
084d7b5d +0x095:  movl   $0x1,0x4(%esp)
084d7b65 +0x09d:  lea    -0x28(%ebp),%eax
084d7b68 +0x0a0:  mov    %eax,(%esp)
084d7b6b +0x0a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7b70 +0x0a8:  jmp    084d7b85 <+0xbd>
084d7b72 +0x0aa:  movl   $0x0,0x4(%esp)
084d7b7a +0x0b2:  lea    -0x28(%ebp),%eax
084d7b7d +0x0b5:  mov    %eax,(%esp)
084d7b80 +0x0b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7b85 +0x0bd:  movl   $0x1,0x4(%esp)
084d7b8d +0x0c5:  lea    -0x28(%ebp),%eax
084d7b90 +0x0c8:  mov    %eax,(%esp)
084d7b93 +0x0cb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d7b98 +0x0d0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d7b9d +0x0d5:  lea    -0x28(%ebp),%edx
084d7ba0 +0x0d8:  mov    %edx,0x4(%esp)
084d7ba4 +0x0dc:  mov    %eax,(%esp)
084d7ba7 +0x0df:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d7bac +0x0e4:  mov    -0xc(%ebp),%eax
084d7baf +0x0e7:  movzbl 0x4(%eax),%eax
084d7bb3 +0x0eb:  test   %al,%al
084d7bb5 +0x0ed:  je     084d7bbe <+0xf6>
084d7bb7 +0x0ef:  mov    $"Opened",%eax
084d7bbc +0x0f4:  jmp    084d7bc3 <+0xfb>
084d7bbe +0x0f6:  mov    $"Closed",%eax
084d7bc3 +0x0fb:  mov    %eax,%esi
084d7bc5 +0x0fd:  mov    -0xc(%ebp),%eax
084d7bc8 +0x100:  mov    (%eax),%eax
084d7bca +0x102:  test   %eax,%eax
084d7bcc +0x104:  jne    084d7bd5 <+0x10d>
084d7bce +0x106:  mov    $"Auction",%ebx
084d7bd3 +0x10b:  jmp    084d7bda <+0x112>
084d7bd5 +0x10d:  mov    $"Point",%ebx
084d7bda +0x112:  movl   $0x0,0xc(%esp)
084d7be2 +0x11a:  movl   $0x3dea,0x8(%esp)
084d7bea +0x122:  movl   $&_ZZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d7bf2 +0x12a:  lea    -0x1c(%ebp),%eax
084d7bf5 +0x12d:  mov    %eax,(%esp)
084d7bf8 +0x130:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d7bfd +0x135:  mov    %esi,0xc(%esp)
084d7c01 +0x139:  mov    %ebx,0x8(%esp)
084d7c05 +0x13d:  movl   $"%s server %s! SEND SIG_AUCTION_NOTIFY_AUCTION_SERVICE TO ALL USERS",0x4(%esp)
084d7c0d +0x145:  lea    -0x1c(%ebp),%eax
084d7c10 +0x148:  mov    %eax,(%esp)
084d7c13 +0x14b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d7c18 +0x150:  mov    $0x0,%ebx
084d7c1d +0x155:  lea    -0x28(%ebp),%eax
084d7c20 +0x158:  mov    %eax,(%esp)
084d7c23 +0x15b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7c28 +0x160:  mov    %ebx,%eax
084d7c2a +0x162:  add    $0x30,%esp
084d7c2d +0x165:  pop    %ebx
084d7c2e +0x166:  pop    %esi
084d7c2f +0x167:  pop    %ebp
084d7c30 +0x168:  ret
084d7c31 +0x169:  mov    %edx,%ebx
084d7c33 +0x16b:  mov    %eax,%esi
084d7c35 +0x16d:  lea    -0x28(%ebp),%eax
084d7c38 +0x170:  mov    %eax,(%esp)
084d7c3b +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7c40 +0x178:  mov    %esi,%eax
084d7c42 +0x17a:  mov    %ebx,%edx
084d7c44 +0x17c:  mov    %eax,(%esp)
084d7c47 +0x17f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_AuctionNotifyAuctionService::dispatch_sig @ 0x84d7ac8

/* Inter_AuctionNotifyAuctionService::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionNotifyAuctionService::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  char *pcVar1;
  char *pcVar2;
  PacketGuard local_2c [12];
  cMyTrace local_20 [16];
  int *local_10;
  
  local_10 = (int *)param_3;
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084d7af7 to 084d7c17 has its CatchHandler @ 084d7c31 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xb7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*local_10);
  if (*local_10 == 1) {
    CCeraAuctionServerProxy::SetRunning(GlobalData::s_cera_auction_proxy,SUB41(local_10[1],0));
  }
  else {
    CAuctionServerProxy::SetRunning(GlobalData::s_auction_proxy,SUB41(local_10[1],0));
  }
  if ((char)local_10[1] == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_2c);
  if ((char)local_10[1] == '\0') {
    pcVar1 = "Closed";
  }
  else {
    pcVar1 = "Opened";
  }
  if (*local_10 == 0) {
    pcVar2 = "Auction";
  }
  else {
    pcVar2 = "Point";
  }
  cMyTrace::cMyTrace(local_20,
                     "virtual int Inter_AuctionNotifyAuctionService::dispatch_sig(CUser*, char*, int)"
                     ,0x3dea,0);
  cMyTrace::operator()
            (local_20,"%s server %s! SEND SIG_AUCTION_NOTIFY_AUCTION_SERVICE TO ALL USERS",pcVar2,
             pcVar1);
  PacketGuard::~PacketGuard(local_2c);
  return 0;
}
```
