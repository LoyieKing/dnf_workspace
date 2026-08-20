# process

`_ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_DonateGuildFund::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DonateGuildFund` | `0x081d4970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4970  _ZN26Dispatcher_DonateGuildFund7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_DonateGuildFund::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d4970, 0x081d4b4b]
081d4970 +0x000:  push   %ebp
081d4971 +0x001:  mov    %esp,%ebp
081d4973 +0x003:  push   %edi
081d4974 +0x004:  push   %esi
081d4975 +0x005:  push   %ebx
081d4976 +0x006:  sub    $0x3c,%esp
081d4979 +0x009:  mov    0x10(%ebp),%eax
081d497c +0x00c:  mov    %eax,-0x20(%ebp)
081d497f +0x00f:  mov    0xc(%ebp),%eax
081d4982 +0x012:  mov    %eax,(%esp)
081d4985 +0x015:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d498a +0x01a:  cmp    $0x2,%eax
081d498d +0x01d:  setle  %al
081d4990 +0x020:  test   %al,%al
081d4992 +0x022:  je     081d499e <+0x2e>
081d4994 +0x024:  mov    $0x0,%eax
081d4999 +0x029:  jmp    081d4b44 <+0x1d4>
081d499e +0x02e:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d49a3 +0x033:  movl   $0xa,0x8(%esp)
081d49ab +0x03b:  mov    0xc(%ebp),%edx
081d49ae +0x03e:  mov    %edx,0x4(%esp)
081d49b2 +0x042:  mov    %eax,(%esp)
081d49b5 +0x045:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d49ba +0x04a:  mov    %eax,-0x1c(%ebp)
081d49bd +0x04d:  cmpl   $0x0,-0x1c(%ebp)
081d49c1 +0x051:  je     081d49ea <+0x7a>
081d49c3 +0x053:  mov    -0x1c(%ebp),%eax
081d49c6 +0x056:  movzbl %al,%eax
081d49c9 +0x059:  mov    %eax,0x8(%esp)
081d49cd +0x05d:  movl   $0x15b,0x4(%esp)
081d49d5 +0x065:  mov    0xc(%ebp),%eax
081d49d8 +0x068:  mov    %eax,(%esp)
081d49db +0x06b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d49e0 +0x070:  mov    $0x0,%eax
081d49e5 +0x075:  jmp    081d4b44 <+0x1d4>
081d49ea +0x07a:  mov    0xc(%ebp),%eax
081d49ed +0x07d:  mov    %eax,(%esp)
081d49f0 +0x080:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d49f5 +0x085:  test   %eax,%eax
081d49f7 +0x087:  sete   %al
081d49fa +0x08a:  test   %al,%al
081d49fc +0x08c:  je     081d4a08 <+0x98>
081d49fe +0x08e:  mov    $0x0,%eax
081d4a03 +0x093:  jmp    081d4b44 <+0x1d4>
081d4a08 +0x098:  mov    -0x20(%ebp),%eax
081d4a0b +0x09b:  mov    0xd(%eax),%ebx
081d4a0e +0x09e:  mov    0xc(%ebp),%eax
081d4a11 +0x0a1:  mov    %eax,(%esp)
081d4a14 +0x0a4:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
081d4a19 +0x0a9:  cmp    %eax,%ebx
081d4a1b +0x0ab:  setg   %al
081d4a1e +0x0ae:  test   %al,%al
081d4a20 +0x0b0:  je     081d4a47 <+0xd7>
081d4a22 +0x0b2:  movl   $0xa,0x8(%esp)
081d4a2a +0x0ba:  movl   $0x15b,0x4(%esp)
081d4a32 +0x0c2:  mov    0xc(%ebp),%eax
081d4a35 +0x0c5:  mov    %eax,(%esp)
081d4a38 +0x0c8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d4a3d +0x0cd:  mov    $0x0,%eax
081d4a42 +0x0d2:  jmp    081d4b44 <+0x1d4>
081d4a47 +0x0d7:  mov    -0x20(%ebp),%eax
081d4a4a +0x0da:  mov    0xd(%eax),%eax
081d4a4d +0x0dd:  mov    %eax,0x4(%esp)
081d4a51 +0x0e1:  mov    0xc(%ebp),%eax
081d4a54 +0x0e4:  mov    %eax,(%esp)
081d4a57 +0x0e7:  call   0866c21e <_ZN5CUser18IsAddableGuildFundEi>  ; CUser::IsAddableGuildFund(int)
081d4a5c +0x0ec:  xor    $0x1,%eax
081d4a5f +0x0ef:  test   %al,%al
081d4a61 +0x0f1:  je     081d4a88 <+0x118>
081d4a63 +0x0f3:  movl   $0x5f,0x8(%esp)
081d4a6b +0x0fb:  movl   $0x15b,0x4(%esp)
081d4a73 +0x103:  mov    0xc(%ebp),%eax
081d4a76 +0x106:  mov    %eax,(%esp)
081d4a79 +0x109:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d4a7e +0x10e:  mov    $0x0,%eax
081d4a83 +0x113:  jmp    081d4b44 <+0x1d4>
081d4a88 +0x118:  mov    -0x20(%ebp),%eax
081d4a8b +0x11b:  mov    0xd(%eax),%ebx
081d4a8e +0x11e:  mov    0xc(%ebp),%eax
081d4a91 +0x121:  mov    %eax,(%esp)
081d4a94 +0x124:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d4a99 +0x129:  movl   $0x1,0xc(%esp)
081d4aa1 +0x131:  movl   $0x2a,0x8(%esp)
081d4aa9 +0x139:  mov    %ebx,0x4(%esp)
081d4aad +0x13d:  mov    %eax,(%esp)
081d4ab0 +0x140:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081d4ab5 +0x145:  xor    $0x1,%eax
081d4ab8 +0x148:  test   %al,%al
081d4aba +0x14a:  je     081d4ade <+0x16e>
081d4abc +0x14c:  movl   $0xa,0x8(%esp)
081d4ac4 +0x154:  movl   $0x15b,0x4(%esp)
081d4acc +0x15c:  mov    0xc(%ebp),%eax
081d4acf +0x15f:  mov    %eax,(%esp)
081d4ad2 +0x162:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d4ad7 +0x167:  mov    $0x0,%eax
081d4adc +0x16c:  jmp    081d4b44 <+0x1d4>
081d4ade +0x16e:  mov    -0x20(%ebp),%eax
081d4ae1 +0x171:  mov    0xd(%eax),%edi
081d4ae4 +0x174:  mov    0xc(%ebp),%eax
081d4ae7 +0x177:  mov    %eax,(%esp)
081d4aea +0x17a:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d4aef +0x17f:  mov    %eax,%ebx
081d4af1 +0x181:  movl   $0xffffffff,0x4(%esp)
081d4af9 +0x189:  mov    0xc(%ebp),%eax
081d4afc +0x18c:  mov    %eax,(%esp)
081d4aff +0x18f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081d4b04 +0x194:  mov    %eax,%esi
081d4b06 +0x196:  mov    0xc(%ebp),%eax
081d4b09 +0x199:  mov    %eax,(%esp)
081d4b0c +0x19c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d4b11 +0x1a1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d4b17 +0x1a7:  mov    %eax,0x4(%esp)
081d4b1b +0x1ab:  mov    %edx,(%esp)
081d4b1e +0x1ae:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d4b23 +0x1b3:  movl   $0x1,0x10(%esp)
081d4b2b +0x1bb:  mov    %edi,0xc(%esp)
081d4b2f +0x1bf:  mov    %ebx,0x8(%esp)
081d4b33 +0x1c3:  mov    %esi,0x4(%esp)
081d4b37 +0x1c7:  mov    %eax,(%esp)
081d4b3a +0x1ca:  call   0846f1a8 <_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE>  ; CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int, Packet_Add_Guild_Fund::eFundType)
081d4b3f +0x1cf:  mov    $0x0,%eax
081d4b44 +0x1d4:  add    $0x3c,%esp
081d4b47 +0x1d7:  pop    %ebx
081d4b48 +0x1d8:  pop    %esi
081d4b49 +0x1d9:  pop    %edi
081d4b4a +0x1da:  pop    %ebp
081d4b4b +0x1db:  ret
```

## 反编译 C

```c
// Dispatcher_DonateGuildFund::process @ 0x81d4970

/* Dispatcher_DonateGuildFund::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_DonateGuildFund::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CGuildServerProxy *pCVar10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    uVar4 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,10);
    if (uVar4 == 0) {
      iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_3 + 0xd);
        iVar5 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_2);
        if (iVar5 < iVar3) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,10);
        }
        else {
          cVar2 = CUser::IsAddableGuildFund((CUser *)param_2,*(int *)(param_3 + 0xd));
          if (cVar2 == '\x01') {
            uVar1 = *(undefined4 *)(param_3 + 0xd);
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            cVar2 = CInventory::use_money(pCVar6,uVar1,0x2a,1);
            if (cVar2 == '\x01') {
              uVar1 = *(undefined4 *)(param_3 + 0xd);
              uVar7 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
              uVar8 = CUser::get_charac_no((CUser *)param_2,-1);
              uVar9 = CUser::GetServerGroup((CUser *)param_2);
              pCVar10 = (CGuildServerProxy *)
                        CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                  (GlobalData::s_guild_proxy_mgr,uVar9);
              CGuildServerProxy::SendAddGuildFund(pCVar10,uVar8,uVar7,uVar1,1);
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,10);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,0x5f);
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,uVar4 & 0xff);
    }
  }
  return 0;
}
```
