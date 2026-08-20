# dispatch_sig

`_ZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPci`

`Inter_OwnerisVIP::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_OwnerisVIP` | `0x084e7c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7c90  _ZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPci
#           Inter_OwnerisVIP::dispatch_sig(CUser*, char*, int)
# range [0x084e7c90, 0x084e7eb7]
084e7c90 +0x000:  push   %ebp
084e7c91 +0x001:  mov    %esp,%ebp
084e7c93 +0x003:  push   %ebx
084e7c94 +0x004:  sub    $0xd4,%esp
084e7c9a +0x00a:  mov    0x10(%ebp),%eax
084e7c9d +0x00d:  mov    %eax,-0x14(%ebp)
084e7ca0 +0x010:  cmpl   $0x0,-0x14(%ebp)
084e7ca4 +0x014:  jne    084e7ce6 <+0x56>
084e7ca6 +0x016:  movl   $0x5,0xc(%esp)
084e7cae +0x01e:  movl   $0x6aa6,0x8(%esp)
084e7cb6 +0x026:  movl   $&_ZZN16Inter_OwnerisVIP12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e7cbe +0x02e:  lea    -0x24(%ebp),%eax
084e7cc1 +0x031:  mov    %eax,(%esp)
084e7cc4 +0x034:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e7cc9 +0x039:  movl   $"[Check point auction error] internal data is null.",0x4(%esp)
084e7cd1 +0x041:  lea    -0x24(%ebp),%eax
084e7cd4 +0x044:  mov    %eax,(%esp)
084e7cd7 +0x047:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e7cdc +0x04c:  mov    $0x6aa7,%eax
084e7ce1 +0x051:  jmp    084e7eaf <+0x21f>
084e7ce6 +0x056:  mov    0xc(%ebp),%eax
084e7ce9 +0x059:  mov    %eax,-0x10(%ebp)
084e7cec +0x05c:  mov    -0x14(%ebp),%eax
084e7cef +0x05f:  mov    0x8(%eax),%edx
084e7cf2 +0x062:  mov    0x4(%eax),%eax
084e7cf5 +0x065:  mov    %eax,-0x48(%ebp)
084e7cf8 +0x068:  mov    %edx,-0x44(%ebp)
084e7cfb +0x06b:  mov    -0x14(%ebp),%eax
084e7cfe +0x06e:  mov    0x22(%eax),%eax
084e7d01 +0x071:  mov    %eax,-0xc(%ebp)
084e7d04 +0x074:  mov    -0xc(%ebp),%eax
084e7d07 +0x077:  mov    %eax,-0x4c(%ebp)
084e7d0a +0x07a:  mov    -0x14(%ebp),%eax
084e7d0d +0x07d:  mov    0xd(%eax),%ebx
084e7d10 +0x080:  mov    -0x14(%ebp),%eax
084e7d13 +0x083:  movzbl 0xc(%eax),%eax
084e7d17 +0x087:  movzbl %al,%ecx
084e7d1a +0x08a:  mov    -0x14(%ebp),%eax
084e7d1d +0x08d:  mov    0x26(%eax),%edx
084e7d20 +0x090:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
084e7d25 +0x095:  mov    %ebx,0x14(%esp)
084e7d29 +0x099:  mov    %ecx,0x10(%esp)
084e7d2d +0x09d:  mov    %edx,0xc(%esp)
084e7d31 +0x0a1:  lea    -0x4c(%ebp),%edx
084e7d34 +0x0a4:  mov    %edx,0x8(%esp)
084e7d38 +0x0a8:  mov    -0x10(%ebp),%edx
084e7d3b +0x0ab:  mov    %edx,0x4(%esp)
084e7d3f +0x0af:  mov    %eax,(%esp)
084e7d42 +0x0b2:  call   08175c5c <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi>  ; ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)
084e7d47 +0x0b7:  test   %al,%al
084e7d49 +0x0b9:  je     084e7e74 <+0x1e4>
084e7d4f +0x0bf:  mov    -0x3c(%ebp),%eax
084e7d52 +0x0c2:  mov    %eax,-0x64(%ebp)
084e7d55 +0x0c5:  mov    -0x38(%ebp),%eax
084e7d58 +0x0c8:  mov    %eax,-0x60(%ebp)
084e7d5b +0x0cb:  mov    -0x34(%ebp),%eax
084e7d5e +0x0ce:  mov    %eax,-0x5c(%ebp)
084e7d61 +0x0d1:  mov    -0x30(%ebp),%eax
084e7d64 +0x0d4:  mov    %eax,-0x58(%ebp)
084e7d67 +0x0d7:  mov    -0x2c(%ebp),%eax
084e7d6a +0x0da:  mov    %eax,-0x54(%ebp)
084e7d6d +0x0dd:  mov    -0x28(%ebp),%eax
084e7d70 +0x0e0:  mov    %eax,-0x50(%ebp)
084e7d73 +0x0e3:  lea    -0xa7(%ebp),%eax
084e7d79 +0x0e9:  mov    %eax,(%esp)
084e7d7c +0x0ec:  call   084e9a98 <_GLOBAL__I__Z7getUserj+0xa4a>  ; global constructors keyed to getUser(unsigned int)+0xa4a
084e7d81 +0x0f1:  mov    -0x10(%ebp),%eax
084e7d84 +0x0f4:  mov    %eax,(%esp)
084e7d87 +0x0f7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084e7d8c +0x0fc:  mov    %eax,-0x95(%ebp)
084e7d92 +0x102:  mov    -0x10(%ebp),%eax
084e7d95 +0x105:  mov    %eax,(%esp)
084e7d98 +0x108:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e7d9d +0x10d:  mov    %eax,-0x91(%ebp)
084e7da3 +0x113:  mov    -0x10(%ebp),%eax
084e7da6 +0x116:  mov    %eax,(%esp)
084e7da9 +0x119:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e7dae +0x11e:  add    $0x4,%eax
084e7db1 +0x121:  movl   $0xd,0x8(%esp)
084e7db9 +0x129:  mov    %eax,0x4(%esp)
084e7dbd +0x12d:  lea    -0xa7(%ebp),%eax
084e7dc3 +0x133:  add    $0x1a,%eax
084e7dc6 +0x136:  mov    %eax,(%esp)
084e7dc9 +0x139:  call   0807d8d0 <_init+0x1c8>
084e7dce +0x13e:  mov    -0x48(%ebp),%eax
084e7dd1 +0x141:  mov    -0x44(%ebp),%edx
084e7dd4 +0x144:  mov    %eax,-0x7c(%ebp)
084e7dd7 +0x147:  mov    %edx,-0x78(%ebp)
084e7dda +0x14a:  mov    -0xc(%ebp),%eax
084e7ddd +0x14d:  mov    %eax,-0x80(%ebp)
084e7de0 +0x150:  mov    -0x48(%ebp),%eax
084e7de3 +0x153:  mov    -0x44(%ebp),%edx
084e7de6 +0x156:  mov    %eax,-0x74(%ebp)
084e7de9 +0x159:  mov    %edx,-0x70(%ebp)
084e7dec +0x15c:  mov    -0xc(%ebp),%eax
084e7def +0x15f:  mov    %eax,-0x6c(%ebp)
084e7df2 +0x162:  mov    -0x10(%ebp),%eax
084e7df5 +0x165:  mov    %eax,(%esp)
084e7df8 +0x168:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e7dfd +0x16d:  mov    %eax,%ebx
084e7dff +0x16f:  call   08231f20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x75ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x75ca
084e7e04 +0x174:  mov    -0x74(%ebp),%edx
084e7e07 +0x177:  mov    %edx,0x8(%esp)
084e7e0b +0x17b:  mov    -0x70(%ebp),%edx
084e7e0e +0x17e:  mov    %edx,0xc(%esp)
084e7e12 +0x182:  mov    -0x6c(%ebp),%edx
084e7e15 +0x185:  mov    %edx,0x10(%esp)
084e7e19 +0x189:  mov    -0x68(%ebp),%edx
084e7e1c +0x18c:  mov    %edx,0x14(%esp)
084e7e20 +0x190:  mov    -0x64(%ebp),%edx
084e7e23 +0x193:  mov    %edx,0x18(%esp)
084e7e27 +0x197:  mov    -0x60(%ebp),%edx
084e7e2a +0x19a:  mov    %edx,0x1c(%esp)
084e7e2e +0x19e:  mov    -0x5c(%ebp),%edx
084e7e31 +0x1a1:  mov    %edx,0x20(%esp)
084e7e35 +0x1a5:  mov    -0x58(%ebp),%edx
084e7e38 +0x1a8:  mov    %edx,0x24(%esp)
084e7e3c +0x1ac:  mov    -0x54(%ebp),%edx
084e7e3f +0x1af:  mov    %edx,0x28(%esp)
084e7e43 +0x1b3:  mov    -0x50(%ebp),%edx
084e7e46 +0x1b6:  mov    %edx,0x2c(%esp)
084e7e4a +0x1ba:  mov    %ebx,0x4(%esp)
084e7e4e +0x1be:  mov    %eax,(%esp)
084e7e51 +0x1c1:  call   084ed0bc <_GLOBAL__I__Z7getUserj+0x406e>  ; global constructors keyed to getUser(unsigned int)+0x406e
084e7e56 +0x1c6:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
084e7e5b +0x1cb:  lea    -0xa7(%ebp),%edx
084e7e61 +0x1d1:  mov    %edx,0x4(%esp)
084e7e65 +0x1d5:  mov    %eax,(%esp)
084e7e68 +0x1d8:  call   082f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>  ; CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*)
084e7e6d +0x1dd:  mov    $0x0,%eax
084e7e72 +0x1e2:  jmp    084e7eaf <+0x21f>
084e7e74 +0x1e4:  movl   $0x0,0x4(%esp)
084e7e7c +0x1ec:  mov    -0x10(%ebp),%eax
084e7e7f +0x1ef:  mov    %eax,(%esp)
084e7e82 +0x1f2:  call   08692a08 <_ZN5CUser13SetBuyingGoldEb>  ; CUser::SetBuyingGold(bool)
084e7e87 +0x1f7:  movl   $0x1,0xc(%esp)
084e7e8f +0x1ff:  movl   $0x93,0x8(%esp)
084e7e97 +0x207:  movl   $0xbc,0x4(%esp)
084e7e9f +0x20f:  mov    -0x10(%ebp),%eax
084e7ea2 +0x212:  mov    %eax,(%esp)
084e7ea5 +0x215:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
084e7eaa +0x21a:  mov    $0x0,%eax
084e7eaf +0x21f:  add    $0xd4,%esp
084e7eb5 +0x225:  pop    %ebx
084e7eb6 +0x226:  pop    %ebp
084e7eb7 +0x227:  ret
```

## 反编译 C

```c
// Inter_OwnerisVIP::dispatch_sig @ 0x84e7c90

/* Inter_OwnerisVIP::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OwnerisVIP::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  PCK_AUCTION_BIDDING_GP local_ab [18];
  undefined4 local_99;
  undefined4 local_95;
  char acStack_91 [13];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  cMyTrace local_28 [16];
  int local_18;
  CUser *local_14;
  undefined4 local_10;
  
  local_18 = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_28,"virtual int Inter_OwnerisVIP::dispatch_sig(CUser*, char*, int)",
                       0x6aa6,5);
    cMyTrace::operator()(local_28,"[Check point auction error] internal data is null.");
    uVar2 = 0x6aa7;
  }
  else {
    local_14 = (CUser *)param_2;
    local_48 = *(undefined4 *)(param_3 + 8);
    local_4c = *(undefined4 *)(param_3 + 4);
    local_50 = *(undefined4 *)(param_3 + 0x22);
    local_10 = local_50;
    cVar1 = ItemVendingMachine::BuyAuctionItem
                      (GlobalData::s_pItemVendingMachine,(CUser *)param_2,
                       (AuctionNeedInfo *)&local_50,*(int *)(param_3 + 0x26),
                       *(bool *)(param_3 + 0xc),*(int *)(param_3 + 0xd));
    if (cVar1 == '\0') {
      CUser::SetBuyingGold(local_14,false);
      CUser::SendCmdErrorPacket(local_14,0xbc,0x93,1);
      uVar2 = 0;
    }
    else {
      local_68 = local_40;
      local_64 = local_3c;
      local_60 = local_38;
      local_5c = local_34;
      local_58 = local_30;
      local_54 = local_2c;
      PCK_AUCTION_BIDDING_GP::PCK_AUCTION_BIDDING_GP(local_ab);
      local_99 = CUser::GetUID(local_14);
      local_95 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14);
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_14);
      strncpy(acStack_91,(char *)(iVar3 + 4),0xd);
      local_80 = local_4c;
      local_7c = local_48;
      local_84 = local_10;
      local_78 = local_4c;
      local_74 = local_48;
      local_70 = local_10;
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14);
      uVar4 = G_CPrePayInfoMgr();
      CPrePayInfoMgr::InsertPrePayInfo
                (uVar4,uVar2,local_78,local_74,local_70,local_6c,local_68,local_64,local_60,local_5c
                 ,local_58,local_54);
      CCeraAuctionServerProxy::SendPacket
                (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_ab);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
