# dispatch_sig

`_ZN35Dispatcher_GoblinPadRequestCryptKey12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GoblinPadRequestCryptKey::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GoblinPadRequestCryptKey` | `0x0821e58c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e58c  _ZN35Dispatcher_GoblinPadRequestCryptKey12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GoblinPadRequestCryptKey::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821e58c, 0x0821e747]
0821e58c +0x000:  push   %ebp
0821e58d +0x001:  mov    %esp,%ebp
0821e58f +0x003:  push   %esi
0821e590 +0x004:  push   %ebx
0821e591 +0x005:  sub    $0x20,%esp
0821e594 +0x008:  mov    0xc(%ebp),%eax
0821e597 +0x00b:  mov    %eax,(%esp)
0821e59a +0x00e:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e59f +0x013:  mov    %eax,(%esp)
0821e5a2 +0x016:  call   085998ea <_ZN8Sanicova4CPad18GenerateRandomDataEv>  ; Sanicova::CPad::GenerateRandomData()
0821e5a7 +0x01b:  lea    -0x14(%ebp),%eax
0821e5aa +0x01e:  mov    %eax,(%esp)
0821e5ad +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821e5b2 +0x026:  movl   $0xe2,0x8(%esp)
0821e5ba +0x02e:  movl   $0x1,0x4(%esp)
0821e5c2 +0x036:  lea    -0x14(%ebp),%eax
0821e5c5 +0x039:  mov    %eax,(%esp)
0821e5c8 +0x03c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821e5cd +0x041:  movl   $0x1,0x4(%esp)
0821e5d5 +0x049:  lea    -0x14(%ebp),%eax
0821e5d8 +0x04c:  mov    %eax,(%esp)
0821e5db +0x04f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e5e0 +0x054:  mov    0xc(%ebp),%eax
0821e5e3 +0x057:  mov    %eax,(%esp)
0821e5e6 +0x05a:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e5eb +0x05f:  movl   $0x0,0x4(%esp)
0821e5f3 +0x067:  mov    %eax,(%esp)
0821e5f6 +0x06a:  call   08599872 <_ZN8Sanicova4CPad9GetKeyIdxEi>  ; Sanicova::CPad::GetKeyIdx(int)
0821e5fb +0x06f:  movzwl %ax,%eax
0821e5fe +0x072:  mov    %eax,0x4(%esp)
0821e602 +0x076:  lea    -0x14(%ebp),%eax
0821e605 +0x079:  mov    %eax,(%esp)
0821e608 +0x07c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821e60d +0x081:  mov    0xc(%ebp),%eax
0821e610 +0x084:  mov    %eax,(%esp)
0821e613 +0x087:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e618 +0x08c:  movl   $0x1,0x4(%esp)
0821e620 +0x094:  mov    %eax,(%esp)
0821e623 +0x097:  call   08599872 <_ZN8Sanicova4CPad9GetKeyIdxEi>  ; Sanicova::CPad::GetKeyIdx(int)
0821e628 +0x09c:  movzwl %ax,%eax
0821e62b +0x09f:  mov    %eax,0x4(%esp)
0821e62f +0x0a3:  lea    -0x14(%ebp),%eax
0821e632 +0x0a6:  mov    %eax,(%esp)
0821e635 +0x0a9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821e63a +0x0ae:  mov    0xc(%ebp),%eax
0821e63d +0x0b1:  mov    %eax,(%esp)
0821e640 +0x0b4:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e645 +0x0b9:  movl   $0x0,0x4(%esp)
0821e64d +0x0c1:  mov    %eax,(%esp)
0821e650 +0x0c4:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
0821e655 +0x0c9:  movzbl %al,%eax
0821e658 +0x0cc:  mov    %eax,0x4(%esp)
0821e65c +0x0d0:  lea    -0x14(%ebp),%eax
0821e65f +0x0d3:  mov    %eax,(%esp)
0821e662 +0x0d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e667 +0x0db:  mov    0xc(%ebp),%eax
0821e66a +0x0de:  mov    %eax,(%esp)
0821e66d +0x0e1:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e672 +0x0e6:  movl   $0x1,0x4(%esp)
0821e67a +0x0ee:  mov    %eax,(%esp)
0821e67d +0x0f1:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
0821e682 +0x0f6:  movzbl %al,%eax
0821e685 +0x0f9:  mov    %eax,0x4(%esp)
0821e689 +0x0fd:  lea    -0x14(%ebp),%eax
0821e68c +0x100:  mov    %eax,(%esp)
0821e68f +0x103:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e694 +0x108:  mov    0xc(%ebp),%eax
0821e697 +0x10b:  mov    %eax,(%esp)
0821e69a +0x10e:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e69f +0x113:  movl   $0x2,0x4(%esp)
0821e6a7 +0x11b:  mov    %eax,(%esp)
0821e6aa +0x11e:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
0821e6af +0x123:  movzbl %al,%eax
0821e6b2 +0x126:  mov    %eax,0x4(%esp)
0821e6b6 +0x12a:  lea    -0x14(%ebp),%eax
0821e6b9 +0x12d:  mov    %eax,(%esp)
0821e6bc +0x130:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e6c1 +0x135:  mov    0xc(%ebp),%eax
0821e6c4 +0x138:  mov    %eax,(%esp)
0821e6c7 +0x13b:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0821e6cc +0x140:  movl   $0x3,0x4(%esp)
0821e6d4 +0x148:  mov    %eax,(%esp)
0821e6d7 +0x14b:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
0821e6dc +0x150:  movzbl %al,%eax
0821e6df +0x153:  mov    %eax,0x4(%esp)
0821e6e3 +0x157:  lea    -0x14(%ebp),%eax
0821e6e6 +0x15a:  mov    %eax,(%esp)
0821e6e9 +0x15d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821e6ee +0x162:  movl   $0x1,0x4(%esp)
0821e6f6 +0x16a:  lea    -0x14(%ebp),%eax
0821e6f9 +0x16d:  mov    %eax,(%esp)
0821e6fc +0x170:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821e701 +0x175:  lea    -0x14(%ebp),%eax
0821e704 +0x178:  mov    %eax,0x4(%esp)
0821e708 +0x17c:  mov    0xc(%ebp),%eax
0821e70b +0x17f:  mov    %eax,(%esp)
0821e70e +0x182:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821e713 +0x187:  mov    $0x0,%ebx
0821e718 +0x18c:  lea    -0x14(%ebp),%eax
0821e71b +0x18f:  mov    %eax,(%esp)
0821e71e +0x192:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821e723 +0x197:  mov    %ebx,%eax
0821e725 +0x199:  add    $0x20,%esp
0821e728 +0x19c:  pop    %ebx
0821e729 +0x19d:  pop    %esi
0821e72a +0x19e:  pop    %ebp
0821e72b +0x19f:  ret
0821e72c +0x1a0:  mov    %edx,%ebx
0821e72e +0x1a2:  mov    %eax,%esi
0821e730 +0x1a4:  lea    -0x14(%ebp),%eax
0821e733 +0x1a7:  mov    %eax,(%esp)
0821e736 +0x1aa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821e73b +0x1af:  mov    %esi,%eax
0821e73d +0x1b1:  mov    %ebx,%edx
0821e73f +0x1b3:  mov    %eax,(%esp)
0821e742 +0x1b6:  call   08ae3750 <_Unwind_Resume>
0821e747 +0x1bb:  nop
```

## 反编译 C

```c
// Dispatcher_GoblinPadRequestCryptKey::dispatch_sig @ 0x821e58c

/* Dispatcher_GoblinPadRequestCryptKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GoblinPadRequestCryptKey::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  CPad *pCVar1;
  uint uVar2;
  PacketGuard local_18 [12];
  
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  Sanicova::CPad::GenerateRandomData(pCVar1);
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821e5c8 to 0821e712 has its CatchHandler @ 0821e72c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xe2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetKeyIdx(pCVar1,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar2 & 0xffff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetKeyIdx(pCVar1,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar2 & 0xffff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 0;
}
```
