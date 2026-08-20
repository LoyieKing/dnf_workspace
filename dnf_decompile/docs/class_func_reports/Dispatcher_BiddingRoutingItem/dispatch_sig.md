# dispatch_sig

`_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BiddingRoutingItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BiddingRoutingItem` | `0x082255ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082255ca  _ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BiddingRoutingItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x082255ca, 0x0822577d]
082255ca +0x000:  push   %ebp
082255cb +0x001:  mov    %esp,%ebp
082255cd +0x003:  push   %esi
082255ce +0x004:  push   %ebx
082255cf +0x005:  sub    $0x30,%esp
082255d2 +0x008:  mov    0xc(%ebp),%eax
082255d5 +0x00b:  mov    %eax,(%esp)
082255d8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082255dd +0x013:  cmp    $0x5,%eax
082255e0 +0x016:  je     0822560c <+0x42>
082255e2 +0x018:  cmp    $0xc,%eax
082255e5 +0x01b:  je     0822560f <+0x45>
082255e7 +0x01d:  movl   $0x13,0x8(%esp)
082255ef +0x025:  movl   $0x12d,0x4(%esp)
082255f7 +0x02d:  mov    0xc(%ebp),%eax
082255fa +0x030:  mov    %eax,(%esp)
082255fd +0x033:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08225602 +0x038:  mov    $0x0,%eax
08225607 +0x03d:  jmp    08225776 <+0x1ac>
0822560c +0x042:  nop
0822560d +0x043:  jmp    08225610 <+0x46>
0822560f +0x045:  nop
08225610 +0x046:  mov    0xc(%ebp),%eax
08225613 +0x049:  mov    %eax,(%esp)
08225616 +0x04c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0822561b +0x051:  mov    %eax,-0x10(%ebp)
0822561e +0x054:  cmpl   $0x0,-0x10(%ebp)
08225622 +0x058:  jne    08225649 <+0x7f>
08225624 +0x05a:  movl   $0x13,0x8(%esp)
0822562c +0x062:  movl   $0x12d,0x4(%esp)
08225634 +0x06a:  mov    0xc(%ebp),%eax
08225637 +0x06d:  mov    %eax,(%esp)
0822563a +0x070:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822563f +0x075:  mov    $0x0,%eax
08225644 +0x07a:  jmp    08225776 <+0x1ac>
08225649 +0x07f:  movb   $0x0,-0x11(%ebp)
0822564d +0x083:  lea    -0x11(%ebp),%eax
08225650 +0x086:  mov    %eax,0x4(%esp)
08225654 +0x08a:  mov    0x10(%ebp),%eax
08225657 +0x08d:  mov    %eax,(%esp)
0822565a +0x090:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0822565f +0x095:  xor    $0x1,%eax
08225662 +0x098:  test   %al,%al
08225664 +0x09a:  je     0822568b <+0xc1>
08225666 +0x09c:  movl   $0x13,0x8(%esp)
0822566e +0x0a4:  movl   $0x12d,0x4(%esp)
08225676 +0x0ac:  mov    0xc(%ebp),%eax
08225679 +0x0af:  mov    %eax,(%esp)
0822567c +0x0b2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08225681 +0x0b7:  mov    $0x0,%eax
08225686 +0x0bc:  jmp    08225776 <+0x1ac>
0822568b +0x0c1:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08225690 +0x0c6:  mov    %eax,(%esp)
08225693 +0x0c9:  call   08298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>  ; CGameManager::GetSpecialItemRoutingManager()
08225698 +0x0ce:  mov    %eax,-0xc(%ebp)
0822569b +0x0d1:  movzbl -0x11(%ebp),%eax
0822569f +0x0d5:  movsbl %al,%eax
082256a2 +0x0d8:  mov    %eax,0xc(%esp)
082256a6 +0x0dc:  mov    -0x10(%ebp),%eax
082256a9 +0x0df:  mov    %eax,0x8(%esp)
082256ad +0x0e3:  mov    0xc(%ebp),%eax
082256b0 +0x0e6:  mov    %eax,0x4(%esp)
082256b4 +0x0ea:  mov    -0xc(%ebp),%eax
082256b7 +0x0ed:  mov    %eax,(%esp)
082256ba +0x0f0:  call   0860ab2e <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc>  ; CSpecialItemRoutingManager::ArriveMemberSelection(CUser*, CParty*, char)
082256bf +0x0f5:  xor    $0x1,%eax
082256c2 +0x0f8:  test   %al,%al
082256c4 +0x0fa:  je     082256eb <+0x121>
082256c6 +0x0fc:  movl   $0x13,0x8(%esp)
082256ce +0x104:  movl   $0x12d,0x4(%esp)
082256d6 +0x10c:  mov    0xc(%ebp),%eax
082256d9 +0x10f:  mov    %eax,(%esp)
082256dc +0x112:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082256e1 +0x117:  mov    $0x0,%eax
082256e6 +0x11c:  jmp    08225776 <+0x1ac>
082256eb +0x121:  lea    -0x20(%ebp),%eax
082256ee +0x124:  mov    %eax,(%esp)
082256f1 +0x127:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082256f6 +0x12c:  movl   $0x12d,0x8(%esp)
082256fe +0x134:  movl   $0x1,0x4(%esp)
08225706 +0x13c:  lea    -0x20(%ebp),%eax
08225709 +0x13f:  mov    %eax,(%esp)
0822570c +0x142:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08225711 +0x147:  movl   $0x1,0x4(%esp)
08225719 +0x14f:  lea    -0x20(%ebp),%eax
0822571c +0x152:  mov    %eax,(%esp)
0822571f +0x155:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225724 +0x15a:  movl   $0x1,0x4(%esp)
0822572c +0x162:  lea    -0x20(%ebp),%eax
0822572f +0x165:  mov    %eax,(%esp)
08225732 +0x168:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08225737 +0x16d:  lea    -0x20(%ebp),%eax
0822573a +0x170:  mov    %eax,0x4(%esp)
0822573e +0x174:  mov    0xc(%ebp),%eax
08225741 +0x177:  mov    %eax,(%esp)
08225744 +0x17a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08225749 +0x17f:  jmp    08225766 <+0x19c>
0822574b +0x181:  mov    %edx,%ebx
0822574d +0x183:  mov    %eax,%esi
0822574f +0x185:  lea    -0x20(%ebp),%eax
08225752 +0x188:  mov    %eax,(%esp)
08225755 +0x18b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822575a +0x190:  mov    %esi,%eax
0822575c +0x192:  mov    %ebx,%edx
0822575e +0x194:  mov    %eax,(%esp)
08225761 +0x197:  call   08ae3750 <_Unwind_Resume>
08225766 +0x19c:  lea    -0x20(%ebp),%eax
08225769 +0x19f:  mov    %eax,(%esp)
0822576c +0x1a2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08225771 +0x1a7:  mov    $0x0,%eax
08225776 +0x1ac:  add    $0x30,%esp
08225779 +0x1af:  pop    %ebx
0822577a +0x1b0:  pop    %esi
0822577b +0x1b1:  pop    %ebp
0822577c +0x1b2:  ret
0822577d +0x1b3:  nop
```

## 反编译 C

```c
// Dispatcher_BiddingRoutingItem::dispatch_sig @ 0x82255ca

/* Dispatcher_BiddingRoutingItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BiddingRoutingItem::dispatch_sig
          (Dispatcher_BiddingRoutingItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CGameManager *this_00;
  PacketGuard local_24 [15];
  char local_15;
  CParty *local_14;
  CSpecialItemRoutingManager *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 5) || (iVar2 == 0xc)) {
    local_14 = (CParty *)CUser::GetParty(param_1);
    if (local_14 == (CParty *)0x0) {
      CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
    }
    else {
      local_15 = '\0';
      cVar1 = PacketBuf::get_byte(param_2,&local_15);
      if (cVar1 == '\x01') {
        this_00 = (CGameManager *)G_CGameManager();
        local_10 = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this_00)
        ;
        cVar1 = CSpecialItemRoutingManager::ArriveMemberSelection
                          (local_10,param_1,local_14,local_15);
        if (cVar1 == '\x01') {
          PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0822570c to 08225748 has its CatchHandler @ 0822574b */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x12d);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send(param_1,local_24);
          PacketGuard::~PacketGuard(local_24);
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
  }
  return 0;
}
```
