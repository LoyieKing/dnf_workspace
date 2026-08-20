# dispatch_sig

`_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci`

`Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultBuyItemApiece` | `0x084d7c8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7c8e  _ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci
#           Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser*, char*, int)
# range [0x084d7c8e, 0x084d7e83]
084d7c8e +0x000:  push   %ebp
084d7c8f +0x001:  mov    %esp,%ebp
084d7c91 +0x003:  push   %esi
084d7c92 +0x004:  push   %ebx
084d7c93 +0x005:  sub    $0x50,%esp
084d7c96 +0x008:  cmpl   $0x0,0xc(%ebp)
084d7c9a +0x00c:  jne    084d7ca6 <+0x18>
084d7c9c +0x00e:  mov    $0x0,%ebx
084d7ca1 +0x013:  jmp    084d7e7a <+0x1ec>
084d7ca6 +0x018:  mov    0x10(%ebp),%eax
084d7ca9 +0x01b:  mov    %eax,-0x14(%ebp)
084d7cac +0x01e:  mov    -0x14(%ebp),%eax
084d7caf +0x021:  mov    (%eax),%eax
084d7cb1 +0x023:  mov    %eax,%ebx
084d7cb3 +0x025:  mov    0xc(%ebp),%eax
084d7cb6 +0x028:  mov    %eax,(%esp)
084d7cb9 +0x02b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7cbe +0x030:  cmp    %eax,%ebx
084d7cc0 +0x032:  setne  %al
084d7cc3 +0x035:  test   %al,%al
084d7cc5 +0x037:  je     084d7cd1 <+0x43>
084d7cc7 +0x039:  mov    $0x0,%ebx
084d7ccc +0x03e:  jmp    084d7e7a <+0x1ec>
084d7cd1 +0x043:  movl   $0x0,-0x10(%ebp)
084d7cd8 +0x04a:  jmp    084d7d4f <+0xc1>
084d7cda +0x04c:  mov    -0x10(%ebp),%eax
084d7cdd +0x04f:  mov    &_ZL6gmList(,%eax,4),%eax
084d7ce4 +0x056:  mov    %eax,%ebx
084d7ce6 +0x058:  mov    0xc(%ebp),%eax
084d7ce9 +0x05b:  mov    %eax,(%esp)
084d7cec +0x05e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7cf1 +0x063:  cmp    %eax,%ebx
084d7cf3 +0x065:  sete   %al
084d7cf6 +0x068:  test   %al,%al
084d7cf8 +0x06a:  je     084d7d4b <+0xbd>
084d7cfa +0x06c:  mov    0xc(%ebp),%eax
084d7cfd +0x06f:  mov    %eax,(%esp)
084d7d00 +0x072:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7d05 +0x077:  mov    %eax,%ebx
084d7d07 +0x079:  movl   $0x0,0xc(%esp)
084d7d0f +0x081:  movl   $0x3e12,0x8(%esp)
084d7d17 +0x089:  movl   $&_ZZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d7d1f +0x091:  lea    -0x24(%ebp),%eax
084d7d22 +0x094:  mov    %eax,(%esp)
084d7d25 +0x097:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d7d2a +0x09c:  mov    %ebx,0xc(%esp)
084d7d2e +0x0a0:  movl   $"ACK AuctionResultBuyItemApiece",0x8(%esp)
084d7d36 +0x0a8:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d7d3e +0x0b0:  lea    -0x24(%ebp),%eax
084d7d41 +0x0b3:  mov    %eax,(%esp)
084d7d44 +0x0b6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d7d49 +0x0bb:  jmp    084d7d5a <+0xcc>
084d7d4b +0x0bd:  addl   $0x1,-0x10(%ebp)
084d7d4f +0x0c1:  cmpl   $0x4,-0x10(%ebp)
084d7d53 +0x0c5:  setle  %al
084d7d56 +0x0c8:  test   %al,%al
084d7d58 +0x0ca:  jne    084d7cda <+0x4c>
084d7d5a +0x0cc:  lea    -0x30(%ebp),%eax
084d7d5d +0x0cf:  mov    %eax,(%esp)
084d7d60 +0x0d2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d7d65 +0x0d7:  movl   $0x14f,0x8(%esp)
084d7d6d +0x0df:  movl   $0x1,0x4(%esp)
084d7d75 +0x0e7:  lea    -0x30(%ebp),%eax
084d7d78 +0x0ea:  mov    %eax,(%esp)
084d7d7b +0x0ed:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d7d80 +0x0f2:  mov    -0x14(%ebp),%eax
084d7d83 +0x0f5:  movzbl 0x8(%eax),%eax
084d7d87 +0x0f9:  movzbl %al,%eax
084d7d8a +0x0fc:  mov    %eax,0x4(%esp)
084d7d8e +0x100:  lea    -0x30(%ebp),%eax
084d7d91 +0x103:  mov    %eax,(%esp)
084d7d94 +0x106:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7d99 +0x10b:  mov    -0x14(%ebp),%eax
084d7d9c +0x10e:  movzbl 0x8(%eax),%eax
084d7da0 +0x112:  test   %al,%al
084d7da2 +0x114:  jne    084d7e28 <+0x19a>
084d7da8 +0x11a:  mov    -0x14(%ebp),%eax
084d7dab +0x11d:  mov    0x4(%eax),%ebx
084d7dae +0x120:  mov    0xc(%ebp),%eax
084d7db1 +0x123:  mov    %eax,(%esp)
084d7db4 +0x126:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084d7db9 +0x12b:  movl   $0x0,0x10(%esp)
084d7dc1 +0x133:  movl   $0x1,0xc(%esp)
084d7dc9 +0x13b:  movl   $0x14,0x8(%esp)
084d7dd1 +0x143:  mov    %ebx,0x4(%esp)
084d7dd5 +0x147:  mov    %eax,(%esp)
084d7dd8 +0x14a:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084d7ddd +0x14f:  mov    %eax,-0xc(%ebp)
084d7de0 +0x152:  mov    -0x14(%ebp),%eax
084d7de3 +0x155:  mov    0x4(%eax),%eax
084d7de6 +0x158:  cmp    -0xc(%ebp),%eax
084d7de9 +0x15b:  jle    084d7e0f <+0x181>
084d7deb +0x15d:  mov    -0xc(%ebp),%edx
084d7dee +0x160:  mov    -0x14(%ebp),%eax
084d7df1 +0x163:  mov    0x4(%eax),%eax
084d7df4 +0x166:  mov    %edx,0xc(%esp)
084d7df8 +0x16a:  mov    %eax,0x8(%esp)
084d7dfc +0x16e:  movl   $0x0,0x4(%esp)
084d7e04 +0x176:  mov    0xc(%ebp),%eax
084d7e07 +0x179:  mov    %eax,(%esp)
084d7e0a +0x17c:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
084d7e0f +0x181:  mov    -0x14(%ebp),%eax
084d7e12 +0x184:  movzbl 0x9(%eax),%eax
084d7e16 +0x188:  movzbl %al,%eax
084d7e19 +0x18b:  mov    %eax,0x4(%esp)
084d7e1d +0x18f:  lea    -0x30(%ebp),%eax
084d7e20 +0x192:  mov    %eax,(%esp)
084d7e23 +0x195:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7e28 +0x19a:  movl   $0x1,0x4(%esp)
084d7e30 +0x1a2:  lea    -0x30(%ebp),%eax
084d7e33 +0x1a5:  mov    %eax,(%esp)
084d7e36 +0x1a8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d7e3b +0x1ad:  lea    -0x30(%ebp),%eax
084d7e3e +0x1b0:  mov    %eax,0x4(%esp)
084d7e42 +0x1b4:  mov    0xc(%ebp),%eax
084d7e45 +0x1b7:  mov    %eax,(%esp)
084d7e48 +0x1ba:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d7e4d +0x1bf:  mov    $0x0,%ebx
084d7e52 +0x1c4:  lea    -0x30(%ebp),%eax
084d7e55 +0x1c7:  mov    %eax,(%esp)
084d7e58 +0x1ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7e5d +0x1cf:  jmp    084d7e7a <+0x1ec>
084d7e5f +0x1d1:  mov    %edx,%ebx
084d7e61 +0x1d3:  mov    %eax,%esi
084d7e63 +0x1d5:  lea    -0x30(%ebp),%eax
084d7e66 +0x1d8:  mov    %eax,(%esp)
084d7e69 +0x1db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7e6e +0x1e0:  mov    %esi,%eax
084d7e70 +0x1e2:  mov    %ebx,%edx
084d7e72 +0x1e4:  mov    %eax,(%esp)
084d7e75 +0x1e7:  call   08ae3750 <_Unwind_Resume>
084d7e7a +0x1ec:  mov    %ebx,%eax
084d7e7c +0x1ee:  add    $0x50,%esp
084d7e7f +0x1f1:  pop    %ebx
084d7e80 +0x1f2:  pop    %esi
084d7e81 +0x1f3:  pop    %ebp
084d7e82 +0x1f4:  ret
084d7e83 +0x1f5:  nop
```

## 反编译 C

```c
// Inter_AuctionResultBuyItemApiece::dispatch_sig @ 0x84d7c8e

/* Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  PacketGuard local_34 [12];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_18 = param_3;
    iVar1 = *(int *)param_3;
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        iVar1 = *(int *)(gmList + local_14 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_28,
                             "virtual int Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser*, char*, int)"
                             ,0x3e12,0);
          cMyTrace::operator()
                    (local_28,"Trace Auction Delay, %s(%d)","ACK AuctionResultBuyItemApiece",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084d7d7b to 084d7e4c has its CatchHandler @ 084d7e5f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x14f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_18 + 8));
      if (*(char *)(local_18 + 8) == '\0') {
        uVar3 = *(undefined4 *)(local_18 + 4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        local_10 = CInventory::gain_money(pCVar4,uVar3,0x14,1,0);
        if (local_10 < *(int *)(local_18 + 4)) {
          CUser::SendMoneyFullReason((CUser *)param_2,0,*(undefined4 *)(local_18 + 4),local_10);
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_18 + 9));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send((CUser *)param_2,local_34);
      PacketGuard::~PacketGuard(local_34);
    }
  }
  return 0;
}
```
