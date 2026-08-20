# execute

`_ZN11game_master12CInvalidGold7executeEv`

`game_master::CInvalidGold::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CInvalidGold` | `0x084ab16e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab16e  _ZN11game_master12CInvalidGold7executeEv
#           game_master::CInvalidGold::execute()
# range [0x084ab16e, 0x084ab201]
084ab16e +0x00:  push   %ebp
084ab16f +0x01:  mov    %esp,%ebp
084ab171 +0x03:  push   %ebx
084ab172 +0x04:  sub    $0x24,%esp
084ab175 +0x07:  mov    0x8(%ebp),%eax
084ab178 +0x0a:  mov    %eax,(%esp)
084ab17b +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab180 +0x12:  mov    %eax,-0x10(%ebp)
084ab183 +0x15:  mov    -0x10(%ebp),%eax
084ab186 +0x18:  mov    %eax,(%esp)
084ab189 +0x1b:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
084ab18e +0x20:  mov    %eax,-0xc(%ebp)
084ab191 +0x23:  mov    &_ZZN11game_master12CInvalidGold7executeEvE12invalidMoney,%eax
084ab196 +0x28:  sub    $0x2710,%eax
084ab19b +0x2d:  mov    %eax,&_ZZN11game_master12CInvalidGold7executeEvE12invalidMoney
084ab1a0 +0x32:  mov    &_ZZN11game_master12CInvalidGold7executeEvE12invalidMoney,%eax
084ab1a5 +0x37:  mov    %eax,%ebx
084ab1a7 +0x39:  mov    -0x10(%ebp),%eax
084ab1aa +0x3c:  mov    %eax,(%esp)
084ab1ad +0x3f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ab1b2 +0x44:  mov    %ebx,0x4(%esp)
084ab1b6 +0x48:  mov    %eax,(%esp)
084ab1b9 +0x4b:  call   0822d652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2cfc
084ab1be +0x50:  movl   $0x0,0xc(%esp)
084ab1c6 +0x58:  movl   $0x0,0x8(%esp)
084ab1ce +0x60:  movl   $0x1,0x4(%esp)
084ab1d6 +0x68:  mov    -0x10(%ebp),%eax
084ab1d9 +0x6b:  mov    %eax,(%esp)
084ab1dc +0x6e:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
084ab1e1 +0x73:  mov    -0xc(%ebp),%ebx
084ab1e4 +0x76:  mov    -0x10(%ebp),%eax
084ab1e7 +0x79:  mov    %eax,(%esp)
084ab1ea +0x7c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ab1ef +0x81:  mov    %ebx,0x4(%esp)
084ab1f3 +0x85:  mov    %eax,(%esp)
084ab1f6 +0x88:  call   0822d652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2cfc
084ab1fb +0x8d:  add    $0x24,%esp
084ab1fe +0x90:  pop    %ebx
084ab1ff +0x91:  pop    %ebp
084ab200 +0x92:  ret
084ab201 +0x93:  nop
```

## 反编译 C

```c
// game_master::CInvalidGold::execute @ 0x84ab16e

/* game_master::CInvalidGold::execute() */

void __thiscall game_master::CInvalidGold::execute(CInvalidGold *this)

{
  CUser *this_00;
  uint uVar1;
  uint uVar2;
  CInventory *pCVar3;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar1 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)this_00);
  uVar2 = execute()::invalidMoney - 10000;
  execute()::invalidMoney = uVar2;
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
  CInventory::set_money(pCVar3,uVar2);
  CUser::SendUpdateItemList(this_00,1,0,0);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
  CInventory::set_money(pCVar3,uVar1);
  return;
}
```
