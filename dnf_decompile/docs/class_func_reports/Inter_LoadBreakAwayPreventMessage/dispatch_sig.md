# dispatch_sig

`_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci`

`Inter_LoadBreakAwayPreventMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadBreakAwayPreventMessage` | `0x084d92b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d92b4  _ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci
#           Inter_LoadBreakAwayPreventMessage::dispatch_sig(CUser*, char*, int)
# range [0x084d92b4, 0x084d94c3]
084d92b4 +0x000:  push   %ebp
084d92b5 +0x001:  mov    %esp,%ebp
084d92b7 +0x003:  push   %esi
084d92b8 +0x004:  push   %ebx
084d92b9 +0x005:  sub    $0x40,%esp
084d92bc +0x008:  cmpl   $0x0,0xc(%ebp)
084d92c0 +0x00c:  jne    084d92cc <+0x18>
084d92c2 +0x00e:  mov    $0x0,%eax
084d92c7 +0x013:  jmp    084d94bd <+0x209>
084d92cc +0x018:  mov    0x10(%ebp),%eax
084d92cf +0x01b:  mov    %eax,-0x14(%ebp)
084d92d2 +0x01e:  mov    -0x14(%ebp),%eax
084d92d5 +0x021:  mov    0x4(%eax),%eax
084d92d8 +0x024:  mov    %eax,-0x10(%ebp)
084d92db +0x027:  mov    -0x14(%ebp),%eax
084d92de +0x02a:  mov    (%eax),%eax
084d92e0 +0x02c:  mov    %eax,-0xc(%ebp)
084d92e3 +0x02f:  cmpl   $0x0,-0x10(%ebp)
084d92e7 +0x033:  je     084d92f3 <+0x3f>
084d92e9 +0x035:  cmpl   $0x2,-0x10(%ebp)
084d92ed +0x039:  jne    084d9433 <+0x17f>
084d92f3 +0x03f:  lea    -0x20(%ebp),%eax
084d92f6 +0x042:  mov    %eax,(%esp)
084d92f9 +0x045:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d92fe +0x04a:  movl   $0x111,0x8(%esp)
084d9306 +0x052:  movl   $0x0,0x4(%esp)
084d930e +0x05a:  lea    -0x20(%ebp),%eax
084d9311 +0x05d:  mov    %eax,(%esp)
084d9314 +0x060:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d9319 +0x065:  mov    -0x10(%ebp),%eax
084d931c +0x068:  mov    %eax,0x4(%esp)
084d9320 +0x06c:  lea    -0x20(%ebp),%eax
084d9323 +0x06f:  mov    %eax,(%esp)
084d9326 +0x072:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d932b +0x077:  movl   $0x1,0x4(%esp)
084d9333 +0x07f:  lea    -0x20(%ebp),%eax
084d9336 +0x082:  mov    %eax,(%esp)
084d9339 +0x085:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d933e +0x08a:  lea    -0x20(%ebp),%eax
084d9341 +0x08d:  mov    %eax,0x4(%esp)
084d9345 +0x091:  mov    0xc(%ebp),%eax
084d9348 +0x094:  mov    %eax,(%esp)
084d934b +0x097:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d9350 +0x09c:  lea    -0x2c(%ebp),%eax
084d9353 +0x09f:  mov    %eax,(%esp)
084d9356 +0x0a2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d935b +0x0a7:  movl   $0x136,0x8(%esp)
084d9363 +0x0af:  movl   $0x0,0x4(%esp)
084d936b +0x0b7:  lea    -0x2c(%ebp),%eax
084d936e +0x0ba:  mov    %eax,(%esp)
084d9371 +0x0bd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d9376 +0x0c2:  movl   $&_ZL14gUnicodeBuffer+0xac54,0x4(%esp)
084d937e +0x0ca:  lea    -0x2c(%ebp),%eax
084d9381 +0x0cd:  mov    %eax,(%esp)
084d9384 +0x0d0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d9389 +0x0d5:  movl   $0x0,0x4(%esp)
084d9391 +0x0dd:  lea    -0x2c(%ebp),%eax
084d9394 +0x0e0:  mov    %eax,(%esp)
084d9397 +0x0e3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d939c +0x0e8:  movl   $0x1,0x4(%esp)
084d93a4 +0x0f0:  lea    -0x2c(%ebp),%eax
084d93a7 +0x0f3:  mov    %eax,(%esp)
084d93aa +0x0f6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d93af +0x0fb:  lea    -0x2c(%ebp),%eax
084d93b2 +0x0fe:  mov    %eax,0x4(%esp)
084d93b6 +0x102:  mov    0xc(%ebp),%eax
084d93b9 +0x105:  mov    %eax,(%esp)
084d93bc +0x108:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d93c1 +0x10d:  movl   $0x3,0x4(%esp)
084d93c9 +0x115:  mov    0xc(%ebp),%eax
084d93cc +0x118:  mov    %eax,(%esp)
084d93cf +0x11b:  call   0822fc5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5306>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5306
084d93d4 +0x120:  mov    -0xc(%ebp),%eax
084d93d7 +0x123:  mov    %eax,0x4(%esp)
084d93db +0x127:  mov    0xc(%ebp),%eax
084d93de +0x12a:  mov    %eax,(%esp)
084d93e1 +0x12d:  call   0822fc7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5326>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5326
084d93e6 +0x132:  lea    -0x2c(%ebp),%eax
084d93e9 +0x135:  mov    %eax,(%esp)
084d93ec +0x138:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d93f1 +0x13d:  jmp    084d9423 <+0x16f>
084d93f3 +0x13f:  mov    %edx,%ebx
084d93f5 +0x141:  mov    %eax,%esi
084d93f7 +0x143:  lea    -0x2c(%ebp),%eax
084d93fa +0x146:  mov    %eax,(%esp)
084d93fd +0x149:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d9402 +0x14e:  mov    %esi,%eax
084d9404 +0x150:  mov    %ebx,%edx
084d9406 +0x152:  jmp    084d9408 <+0x154>
084d9408 +0x154:  mov    %edx,%ebx
084d940a +0x156:  mov    %eax,%esi
084d940c +0x158:  lea    -0x20(%ebp),%eax
084d940f +0x15b:  mov    %eax,(%esp)
084d9412 +0x15e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d9417 +0x163:  mov    %esi,%eax
084d9419 +0x165:  mov    %ebx,%edx
084d941b +0x167:  mov    %eax,(%esp)
084d941e +0x16a:  call   08ae3750 <_Unwind_Resume>
084d9423 +0x16f:  lea    -0x20(%ebp),%eax
084d9426 +0x172:  mov    %eax,(%esp)
084d9429 +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d942e +0x17a:  jmp    084d94b8 <+0x204>
084d9433 +0x17f:  lea    -0x38(%ebp),%eax
084d9436 +0x182:  mov    %eax,(%esp)
084d9439 +0x185:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d943e +0x18a:  movl   $0x111,0x8(%esp)
084d9446 +0x192:  movl   $0x0,0x4(%esp)
084d944e +0x19a:  lea    -0x38(%ebp),%eax
084d9451 +0x19d:  mov    %eax,(%esp)
084d9454 +0x1a0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d9459 +0x1a5:  mov    -0x10(%ebp),%eax
084d945c +0x1a8:  mov    %eax,0x4(%esp)
084d9460 +0x1ac:  lea    -0x38(%ebp),%eax
084d9463 +0x1af:  mov    %eax,(%esp)
084d9466 +0x1b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d946b +0x1b7:  movl   $0x1,0x4(%esp)
084d9473 +0x1bf:  lea    -0x38(%ebp),%eax
084d9476 +0x1c2:  mov    %eax,(%esp)
084d9479 +0x1c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d947e +0x1ca:  lea    -0x38(%ebp),%eax
084d9481 +0x1cd:  mov    %eax,0x4(%esp)
084d9485 +0x1d1:  mov    0xc(%ebp),%eax
084d9488 +0x1d4:  mov    %eax,(%esp)
084d948b +0x1d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d9490 +0x1dc:  jmp    084d94ad <+0x1f9>
084d9492 +0x1de:  mov    %edx,%ebx
084d9494 +0x1e0:  mov    %eax,%esi
084d9496 +0x1e2:  lea    -0x38(%ebp),%eax
084d9499 +0x1e5:  mov    %eax,(%esp)
084d949c +0x1e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d94a1 +0x1ed:  mov    %esi,%eax
084d94a3 +0x1ef:  mov    %ebx,%edx
084d94a5 +0x1f1:  mov    %eax,(%esp)
084d94a8 +0x1f4:  call   08ae3750 <_Unwind_Resume>
084d94ad +0x1f9:  lea    -0x38(%ebp),%eax
084d94b0 +0x1fc:  mov    %eax,(%esp)
084d94b3 +0x1ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d94b8 +0x204:  mov    $0x0,%eax
084d94bd +0x209:  add    $0x40,%esp
084d94c0 +0x20c:  pop    %ebx
084d94c1 +0x20d:  pop    %esi
084d94c2 +0x20e:  pop    %ebp
084d94c3 +0x20f:  ret
```

## 反编译 C

```c
// Inter_LoadBreakAwayPreventMessage::dispatch_sig @ 0x84d92b4

/* Inter_LoadBreakAwayPreventMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadBreakAwayPreventMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  PacketGuard local_3c [12];
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  uint local_10;
  
  if (param_2 != (char *)0x0) {
    local_18 = param_3;
    local_14 = *(int *)(param_3 + 4);
    local_10 = *(uint *)param_3;
    if ((local_14 == 0) || (local_14 == 2)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084d9314 to 084d935a has its CatchHandler @ 084d9408 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x111);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d9371 to 084d93c0 has its CatchHandler @ 084d93f3 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x136);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,0x15180);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      CUser::setBreakAwayDungeonClearCnt((CUser *)param_2,3);
      CUser::setBreakAwayQuestTime((CUser *)param_2,local_10);
                    /* try { // try from 084d93ec to 084d93f0 has its CatchHandler @ 084d9408 */
      PacketGuard::~PacketGuard(local_30);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084d9454 to 084d948f has its CatchHandler @ 084d9492 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x111);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      CUser::Send((CUser *)param_2,local_3c);
      PacketGuard::~PacketGuard(local_3c);
    }
  }
  return 0;
}
```
