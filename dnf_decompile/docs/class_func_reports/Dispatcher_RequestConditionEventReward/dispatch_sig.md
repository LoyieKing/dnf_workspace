# dispatch_sig

`_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestConditionEventReward` | `0x082223a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082223a6  _ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)
# range [0x082223a6, 0x082226bf]
082223a6 +0x000:  push   %ebp
082223a7 +0x001:  mov    %esp,%ebp
082223a9 +0x003:  push   %esi
082223aa +0x004:  push   %ebx
082223ab +0x005:  sub    $0x60,%esp
082223ae +0x008:  cmpl   $0x0,0xc(%ebp)
082223b2 +0x00c:  jne    082223df <+0x39>
082223b4 +0x00e:  movl   $0x0,0xc(%esp)
082223bc +0x016:  movl   $0x0,0x8(%esp)
082223c4 +0x01e:  movl   $&_ZZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082223cc +0x026:  movl   $0xdbda,(%esp)
082223d3 +0x02d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082223d8 +0x032:  mov    %eax,%ebx
082223da +0x034:  jmp    082226b4 <+0x30e>
082223df +0x039:  mov    0xc(%ebp),%eax
082223e2 +0x03c:  mov    %eax,(%esp)
082223e5 +0x03f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082223ea +0x044:  cmp    $0x3,%eax
082223ed +0x047:  setne  %al
082223f0 +0x04a:  test   %al,%al
082223f2 +0x04c:  je     082223fe <+0x58>
082223f4 +0x04e:  mov    $0x0,%ebx
082223f9 +0x053:  jmp    082226b4 <+0x30e>
082223fe +0x058:  movw   $0x0,-0x16(%ebp)
08222404 +0x05e:  movb   $0x0,-0x17(%ebp)
08222408 +0x062:  lea    -0x16(%ebp),%eax
0822240b +0x065:  mov    %eax,0x4(%esp)
0822240f +0x069:  mov    0x10(%ebp),%eax
08222412 +0x06c:  mov    %eax,(%esp)
08222415 +0x06f:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0822241a +0x074:  xor    $0x1,%eax
0822241d +0x077:  test   %al,%al
0822241f +0x079:  je     0822244c <+0xa6>
08222421 +0x07b:  movl   $0x0,0xc(%esp)
08222429 +0x083:  movl   $0x0,0x8(%esp)
08222431 +0x08b:  movl   $&_ZZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222439 +0x093:  movl   $0xdbe1,(%esp)
08222440 +0x09a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08222445 +0x09f:  mov    %eax,%ebx
08222447 +0x0a1:  jmp    082226b4 <+0x30e>
0822244c +0x0a6:  lea    -0x17(%ebp),%eax
0822244f +0x0a9:  mov    %eax,0x4(%esp)
08222453 +0x0ad:  mov    0x10(%ebp),%eax
08222456 +0x0b0:  mov    %eax,(%esp)
08222459 +0x0b3:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0822245e +0x0b8:  xor    $0x1,%eax
08222461 +0x0bb:  test   %al,%al
08222463 +0x0bd:  je     08222490 <+0xea>
08222465 +0x0bf:  movl   $0x0,0xc(%esp)
0822246d +0x0c7:  movl   $0x0,0x8(%esp)
08222475 +0x0cf:  movl   $&_ZZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822247d +0x0d7:  movl   $0xdbe2,(%esp)
08222484 +0x0de:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08222489 +0x0e3:  mov    %eax,%ebx
0822248b +0x0e5:  jmp    082226b4 <+0x30e>
08222490 +0x0ea:  movl   $0x0,-0x10(%ebp)
08222497 +0x0f1:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0822249c +0x0f6:  mov    %eax,(%esp)
0822249f +0x0f9:  call   08298f60 <_ZN12CGameManager24GetConditionEventManagerEv>  ; CGameManager::GetConditionEventManager()
082224a4 +0x0fe:  mov    %eax,-0xc(%ebp)
082224a7 +0x101:  lea    -0x30(%ebp),%eax
082224aa +0x104:  mov    %eax,(%esp)
082224ad +0x107:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
082224b2 +0x10c:  cmpl   $0x0,-0xc(%ebp)
082224b6 +0x110:  je     082224e8 <+0x142>
082224b8 +0x112:  movzbl -0x17(%ebp),%eax
082224bc +0x116:  movsbl %al,%edx
082224bf +0x119:  movzwl -0x16(%ebp),%eax
082224c3 +0x11d:  cwtl
082224c4 +0x11e:  lea    -0x30(%ebp),%ecx
082224c7 +0x121:  mov    %ecx,0x10(%esp)
082224cb +0x125:  mov    %edx,0xc(%esp)
082224cf +0x129:  mov    %eax,0x8(%esp)
082224d3 +0x12d:  mov    0xc(%ebp),%eax
082224d6 +0x130:  mov    %eax,0x4(%esp)
082224da +0x134:  mov    -0xc(%ebp),%eax
082224dd +0x137:  mov    %eax,(%esp)
082224e0 +0x13a:  call   08334850 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; CConditionEventManager::RequestConditionEventReward(CUser*, short, char, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
082224e5 +0x13f:  mov    %eax,-0x10(%ebp)
082224e8 +0x142:  lea    -0x3c(%ebp),%eax
082224eb +0x145:  mov    %eax,(%esp)
082224ee +0x148:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082224f3 +0x14d:  movl   $0x107,0x8(%esp)
082224fb +0x155:  movl   $0x1,0x4(%esp)
08222503 +0x15d:  lea    -0x3c(%ebp),%eax
08222506 +0x160:  mov    %eax,(%esp)
08222509 +0x163:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822250e +0x168:  cmpl   $0x0,-0x10(%ebp)
08222512 +0x16c:  je     08222563 <+0x1bd>
08222514 +0x16e:  movl   $0x0,0x4(%esp)
0822251c +0x176:  lea    -0x3c(%ebp),%eax
0822251f +0x179:  mov    %eax,(%esp)
08222522 +0x17c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08222527 +0x181:  mov    -0x10(%ebp),%eax
0822252a +0x184:  mov    %eax,0x4(%esp)
0822252e +0x188:  lea    -0x3c(%ebp),%eax
08222531 +0x18b:  mov    %eax,(%esp)
08222534 +0x18e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08222539 +0x193:  movl   $0x1,0x4(%esp)
08222541 +0x19b:  lea    -0x3c(%ebp),%eax
08222544 +0x19e:  mov    %eax,(%esp)
08222547 +0x1a1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822254c +0x1a6:  lea    -0x3c(%ebp),%eax
0822254f +0x1a9:  mov    %eax,0x4(%esp)
08222553 +0x1ad:  mov    0xc(%ebp),%eax
08222556 +0x1b0:  mov    %eax,(%esp)
08222559 +0x1b3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822255e +0x1b8:  jmp    08222667 <+0x2c1>
08222563 +0x1bd:  movl   $0x1,0x4(%esp)
0822256b +0x1c5:  lea    -0x3c(%ebp),%eax
0822256e +0x1c8:  mov    %eax,(%esp)
08222571 +0x1cb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08222576 +0x1d0:  movzwl -0x16(%ebp),%eax
0822257a +0x1d4:  movsbl %al,%eax
0822257d +0x1d7:  mov    %eax,0x4(%esp)
08222581 +0x1db:  lea    -0x3c(%ebp),%eax
08222584 +0x1de:  mov    %eax,(%esp)
08222587 +0x1e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0822258c +0x1e6:  movzbl -0x17(%ebp),%eax
08222590 +0x1ea:  movsbl %al,%eax
08222593 +0x1ed:  mov    %eax,0x4(%esp)
08222597 +0x1f1:  lea    -0x3c(%ebp),%eax
0822259a +0x1f4:  mov    %eax,(%esp)
0822259d +0x1f7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082225a2 +0x1fc:  lea    -0x30(%ebp),%eax
082225a5 +0x1ff:  mov    %eax,(%esp)
082225a8 +0x202:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
082225ad +0x207:  mov    %eax,0x4(%esp)
082225b1 +0x20b:  lea    -0x3c(%ebp),%eax
082225b4 +0x20e:  mov    %eax,(%esp)
082225b7 +0x211:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082225bc +0x216:  lea    -0x40(%ebp),%eax
082225bf +0x219:  lea    -0x30(%ebp),%edx
082225c2 +0x21c:  mov    %edx,0x4(%esp)
082225c6 +0x220:  mov    %eax,(%esp)
082225c9 +0x223:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
082225ce +0x228:  sub    $0x4,%esp
082225d1 +0x22b:  jmp    08222617 <+0x271>
082225d3 +0x22d:  lea    -0x40(%ebp),%eax
082225d6 +0x230:  mov    %eax,(%esp)
082225d9 +0x233:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082225de +0x238:  mov    (%eax),%eax
082225e0 +0x23a:  mov    %eax,0x4(%esp)
082225e4 +0x23e:  lea    -0x3c(%ebp),%eax
082225e7 +0x241:  mov    %eax,(%esp)
082225ea +0x244:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082225ef +0x249:  lea    -0x40(%ebp),%eax
082225f2 +0x24c:  mov    %eax,(%esp)
082225f5 +0x24f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
082225fa +0x254:  mov    0x4(%eax),%eax
082225fd +0x257:  mov    %eax,0x4(%esp)
08222601 +0x25b:  lea    -0x3c(%ebp),%eax
08222604 +0x25e:  mov    %eax,(%esp)
08222607 +0x261:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0822260c +0x266:  lea    -0x40(%ebp),%eax
0822260f +0x269:  mov    %eax,(%esp)
08222612 +0x26c:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
08222617 +0x271:  lea    -0x14(%ebp),%eax
0822261a +0x274:  lea    -0x30(%ebp),%edx
0822261d +0x277:  mov    %edx,0x4(%esp)
08222621 +0x27b:  mov    %eax,(%esp)
08222624 +0x27e:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08222629 +0x283:  sub    $0x4,%esp
0822262c +0x286:  lea    -0x14(%ebp),%eax
0822262f +0x289:  mov    %eax,0x4(%esp)
08222633 +0x28d:  lea    -0x40(%ebp),%eax
08222636 +0x290:  mov    %eax,(%esp)
08222639 +0x293:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0822263e +0x298:  test   %al,%al
08222640 +0x29a:  jne    082225d3 <+0x22d>
08222642 +0x29c:  movl   $0x1,0x4(%esp)
0822264a +0x2a4:  lea    -0x3c(%ebp),%eax
0822264d +0x2a7:  mov    %eax,(%esp)
08222650 +0x2aa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08222655 +0x2af:  lea    -0x3c(%ebp),%eax
08222658 +0x2b2:  mov    %eax,0x4(%esp)
0822265c +0x2b6:  mov    0xc(%ebp),%eax
0822265f +0x2b9:  mov    %eax,(%esp)
08222662 +0x2bc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08222667 +0x2c1:  mov    $0x0,%ebx
0822266c +0x2c6:  lea    -0x3c(%ebp),%eax
0822266f +0x2c9:  mov    %eax,(%esp)
08222672 +0x2cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08222677 +0x2d1:  jmp    082226a9 <+0x303>
08222679 +0x2d3:  mov    %edx,%ebx
0822267b +0x2d5:  mov    %eax,%esi
0822267d +0x2d7:  lea    -0x3c(%ebp),%eax
08222680 +0x2da:  mov    %eax,(%esp)
08222683 +0x2dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08222688 +0x2e2:  mov    %esi,%eax
0822268a +0x2e4:  mov    %ebx,%edx
0822268c +0x2e6:  jmp    0822268e <+0x2e8>
0822268e +0x2e8:  mov    %edx,%ebx
08222690 +0x2ea:  mov    %eax,%esi
08222692 +0x2ec:  lea    -0x30(%ebp),%eax
08222695 +0x2ef:  mov    %eax,(%esp)
08222698 +0x2f2:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0822269d +0x2f7:  mov    %esi,%eax
0822269f +0x2f9:  mov    %ebx,%edx
082226a1 +0x2fb:  mov    %eax,(%esp)
082226a4 +0x2fe:  call   08ae3750 <_Unwind_Resume>
082226a9 +0x303:  lea    -0x30(%ebp),%eax
082226ac +0x306:  mov    %eax,(%esp)
082226af +0x309:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
082226b4 +0x30e:  mov    %ebx,%eax
082226b6 +0x310:  lea    -0x8(%ebp),%esp
082226b9 +0x313:  add    $0x0,%esp
082226bc +0x316:  pop    %ebx
082226bd +0x317:  pop    %esi
082226be +0x318:  pop    %ebp
082226bf +0x319:  ret
```

## 反编译 C

```c
// Dispatcher_RequestConditionEventReward::dispatch_sig @ 0x82223a6

/* Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestConditionEventReward::dispatch_sig
          (Dispatcher_RequestConditionEventReward *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CGameManager *this_00;
  int *piVar4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_44 [4];
  PacketGuard local_40 [12];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [25];
  char local_1b;
  short local_1a;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  int local_14;
  CConditionEventManager *local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = LineFunc(0xdbda,
                     "virtual int Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      local_1a = 0;
      local_1b = '\0';
      cVar1 = PacketBuf::get_short(param_2,&local_1a);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,&local_1b);
        if (cVar1 == '\x01') {
          local_14 = 0;
          this_00 = (CGameManager *)G_CGameManager();
          local_10 = (CConditionEventManager *)CGameManager::GetConditionEventManager(this_00);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_34);
          if (local_10 != (CConditionEventManager *)0x0) {
                    /* try { // try from 082224e0 to 082224f2 has its CatchHandler @ 0822268e */
            local_14 = CConditionEventManager::RequestConditionEventReward
                                 (local_10,param_1,local_1a,local_1b,(map *)local_34);
          }
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 08222509 to 08222666 has its CatchHandler @ 08222679 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x107);
          if (local_14 == 0) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)(char)local_1a);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)local_1b);
            iVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                              (local_34);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,iVar3);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                      (local_44);
            while( true ) {
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                        (local_18);
              cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44,
                                 (_Rb_tree_iterator *)local_18);
              if (cVar1 == '\0') break;
              piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*piVar4);
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(iVar3 + 4));
              std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44);
            }
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
            CUser::Send(param_1,local_40);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,local_14);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
            CUser::Send(param_1,local_40);
          }
          uVar2 = 0;
                    /* try { // try from 08222672 to 08222676 has its CatchHandler @ 0822268e */
          PacketGuard::~PacketGuard(local_40);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_34);
        }
        else {
          uVar2 = LineFunc(0xdbe2,
                           "virtual int Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0xdbe1,
                         "virtual int Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
