# dispatch_sig

`_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci`

`Inter_AuctionResultRegist::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultRegist` | `0x084d6ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d6ad6  _ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci
#           Inter_AuctionResultRegist::dispatch_sig(CUser*, char*, int)
# range [0x084d6ad6, 0x084d6ca3]
084d6ad6 +0x000:  push   %ebp
084d6ad7 +0x001:  mov    %esp,%ebp
084d6ad9 +0x003:  push   %esi
084d6ada +0x004:  push   %ebx
084d6adb +0x005:  sub    $0x40,%esp
084d6ade +0x008:  cmpl   $0x0,0xc(%ebp)
084d6ae2 +0x00c:  jne    084d6aee <+0x18>
084d6ae4 +0x00e:  mov    $0x0,%ebx
084d6ae9 +0x013:  jmp    084d6c9a <+0x1c4>
084d6aee +0x018:  mov    0x10(%ebp),%eax
084d6af1 +0x01b:  mov    %eax,-0x10(%ebp)
084d6af4 +0x01e:  mov    -0x10(%ebp),%eax
084d6af7 +0x021:  mov    0x4(%eax),%eax
084d6afa +0x024:  mov    %eax,%ebx
084d6afc +0x026:  mov    0xc(%ebp),%eax
084d6aff +0x029:  mov    %eax,(%esp)
084d6b02 +0x02c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6b07 +0x031:  cmp    %eax,%ebx
084d6b09 +0x033:  setne  %al
084d6b0c +0x036:  test   %al,%al
084d6b0e +0x038:  je     084d6b1a <+0x44>
084d6b10 +0x03a:  mov    $0x0,%ebx
084d6b15 +0x03f:  jmp    084d6c9a <+0x1c4>
084d6b1a +0x044:  movl   $0x0,-0xc(%ebp)
084d6b21 +0x04b:  jmp    084d6b98 <+0xc2>
084d6b23 +0x04d:  mov    -0xc(%ebp),%eax
084d6b26 +0x050:  mov    &_ZL6gmList(,%eax,4),%eax
084d6b2d +0x057:  mov    %eax,%ebx
084d6b2f +0x059:  mov    0xc(%ebp),%eax
084d6b32 +0x05c:  mov    %eax,(%esp)
084d6b35 +0x05f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6b3a +0x064:  cmp    %eax,%ebx
084d6b3c +0x066:  sete   %al
084d6b3f +0x069:  test   %al,%al
084d6b41 +0x06b:  je     084d6b94 <+0xbe>
084d6b43 +0x06d:  mov    0xc(%ebp),%eax
084d6b46 +0x070:  mov    %eax,(%esp)
084d6b49 +0x073:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d6b4e +0x078:  mov    %eax,%ebx
084d6b50 +0x07a:  movl   $0x0,0xc(%esp)
084d6b58 +0x082:  movl   $0x3ab4,0x8(%esp)
084d6b60 +0x08a:  movl   $&_ZZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d6b68 +0x092:  lea    -0x20(%ebp),%eax
084d6b6b +0x095:  mov    %eax,(%esp)
084d6b6e +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d6b73 +0x09d:  mov    %ebx,0xc(%esp)
084d6b77 +0x0a1:  movl   $"ACK AuctionResultRegist",0x8(%esp)
084d6b7f +0x0a9:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d6b87 +0x0b1:  lea    -0x20(%ebp),%eax
084d6b8a +0x0b4:  mov    %eax,(%esp)
084d6b8d +0x0b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d6b92 +0x0bc:  jmp    084d6ba3 <+0xcd>
084d6b94 +0x0be:  addl   $0x1,-0xc(%ebp)
084d6b98 +0x0c2:  cmpl   $0x4,-0xc(%ebp)
084d6b9c +0x0c6:  setle  %al
084d6b9f +0x0c9:  test   %al,%al
084d6ba1 +0x0cb:  jne    084d6b23 <+0x4d>
084d6ba3 +0x0cd:  lea    -0x2c(%ebp),%eax
084d6ba6 +0x0d0:  mov    %eax,(%esp)
084d6ba9 +0x0d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d6bae +0x0d8:  movl   $0xba,0x8(%esp)
084d6bb6 +0x0e0:  movl   $0x1,0x4(%esp)
084d6bbe +0x0e8:  lea    -0x2c(%ebp),%eax
084d6bc1 +0x0eb:  mov    %eax,(%esp)
084d6bc4 +0x0ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d6bc9 +0x0f3:  mov    -0x10(%ebp),%eax
084d6bcc +0x0f6:  movzbl 0x8(%eax),%eax
084d6bd0 +0x0fa:  movzbl %al,%eax
084d6bd3 +0x0fd:  mov    %eax,0x4(%esp)
084d6bd7 +0x101:  lea    -0x2c(%ebp),%eax
084d6bda +0x104:  mov    %eax,(%esp)
084d6bdd +0x107:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d6be2 +0x10c:  mov    -0x10(%ebp),%eax
084d6be5 +0x10f:  movzbl 0x8(%eax),%eax
084d6be9 +0x113:  test   %al,%al
084d6beb +0x115:  jne    084d6c06 <+0x130>
084d6bed +0x117:  mov    -0x10(%ebp),%eax
084d6bf0 +0x11a:  movzbl 0x9(%eax),%eax
084d6bf4 +0x11e:  movzbl %al,%eax
084d6bf7 +0x121:  mov    %eax,0x4(%esp)
084d6bfb +0x125:  lea    -0x2c(%ebp),%eax
084d6bfe +0x128:  mov    %eax,(%esp)
084d6c01 +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d6c06 +0x130:  mov    -0x10(%ebp),%eax
084d6c09 +0x133:  mov    (%eax),%eax
084d6c0b +0x135:  mov    %eax,0x4(%esp)
084d6c0f +0x139:  lea    -0x2c(%ebp),%eax
084d6c12 +0x13c:  mov    %eax,(%esp)
084d6c15 +0x13f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d6c1a +0x144:  movl   $0x1,0x4(%esp)
084d6c22 +0x14c:  lea    -0x2c(%ebp),%eax
084d6c25 +0x14f:  mov    %eax,(%esp)
084d6c28 +0x152:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d6c2d +0x157:  lea    -0x2c(%ebp),%eax
084d6c30 +0x15a:  mov    %eax,0x4(%esp)
084d6c34 +0x15e:  mov    0xc(%ebp),%eax
084d6c37 +0x161:  mov    %eax,(%esp)
084d6c3a +0x164:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d6c3f +0x169:  mov    -0x10(%ebp),%eax
084d6c42 +0x16c:  movzbl 0x8(%eax),%eax
084d6c46 +0x170:  cmp    $0x1,%al
084d6c48 +0x172:  jne    084d6c6d <+0x197>
084d6c4a +0x174:  movl   $0x0,0xc(%esp)
084d6c52 +0x17c:  movl   $0x0,0x8(%esp)
084d6c5a +0x184:  movl   $0x9,0x4(%esp)
084d6c62 +0x18c:  mov    0xc(%ebp),%eax
084d6c65 +0x18f:  mov    %eax,(%esp)
084d6c68 +0x192:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
084d6c6d +0x197:  mov    $0x0,%ebx
084d6c72 +0x19c:  lea    -0x2c(%ebp),%eax
084d6c75 +0x19f:  mov    %eax,(%esp)
084d6c78 +0x1a2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d6c7d +0x1a7:  jmp    084d6c9a <+0x1c4>
084d6c7f +0x1a9:  mov    %edx,%ebx
084d6c81 +0x1ab:  mov    %eax,%esi
084d6c83 +0x1ad:  lea    -0x2c(%ebp),%eax
084d6c86 +0x1b0:  mov    %eax,(%esp)
084d6c89 +0x1b3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d6c8e +0x1b8:  mov    %esi,%eax
084d6c90 +0x1ba:  mov    %ebx,%edx
084d6c92 +0x1bc:  mov    %eax,(%esp)
084d6c95 +0x1bf:  call   08ae3750 <_Unwind_Resume>
084d6c9a +0x1c4:  mov    %ebx,%eax
084d6c9c +0x1c6:  add    $0x40,%esp
084d6c9f +0x1c9:  pop    %ebx
084d6ca0 +0x1ca:  pop    %esi
084d6ca1 +0x1cb:  pop    %ebp
084d6ca2 +0x1cc:  ret
084d6ca3 +0x1cd:  nop
```

## 反编译 C

```c
// Inter_AuctionResultRegist::dispatch_sig @ 0x84d6ad6

/* Inter_AuctionResultRegist::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultRegist::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int *local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_14 = (int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        iVar1 = *(int *)(gmList + local_10 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_24,
                             "virtual int Inter_AuctionResultRegist::dispatch_sig(CUser*, char*, int)"
                             ,0x3ab4,0);
          cMyTrace::operator()
                    (local_24,"Trace Auction Delay, %s(%d)","ACK AuctionResultRegist",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d6bc4 to 084d6c6c has its CatchHandler @ 084d6c7f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xba);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_14 + 2));
      if ((char)local_14[2] == '\0') {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_30,(uint)*(byte *)((int)local_14 + 9));
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      if ((char)local_14[2] == '\x01') {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_2,9,0,0);
      }
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}
```
