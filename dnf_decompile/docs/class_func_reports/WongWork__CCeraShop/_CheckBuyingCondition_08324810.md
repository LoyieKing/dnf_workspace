# _CheckBuyingCondition

`_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi`

`WongWork::CCeraShop::_CheckBuyingCondition(CUser*, CCeraShopGoods const*, unsigned int, unsigned char, unsigned short, char, int&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08324810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08324810  _ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi
#           WongWork::CCeraShop::_CheckBuyingCondition(CUser*, CCeraShopGoods const*, unsigned int, unsigned char, unsigned short, char, int&)
# range [0x08324810, 0x08324965]
08324810 +0x000:  push   %ebp
08324811 +0x001:  mov    %esp,%ebp
08324813 +0x003:  push   %edi
08324814 +0x004:  push   %esi
08324815 +0x005:  push   %ebx
08324816 +0x006:  sub    $0x4c,%esp
08324819 +0x009:  mov    0x18(%ebp),%ecx
0832481c +0x00c:  mov    0x1c(%ebp),%edx
0832481f +0x00f:  mov    0x20(%ebp),%eax
08324822 +0x012:  mov    %cl,-0x2c(%ebp)
08324825 +0x015:  mov    %dx,-0x30(%ebp)
08324829 +0x019:  mov    %al,-0x34(%ebp)
0832482c +0x01c:  mov    0x10(%ebp),%eax
0832482f +0x01f:  mov    %eax,(%esp)
08324832 +0x022:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
08324837 +0x027:  cmp    $0x1,%eax
0832483a +0x02a:  jne    08324849 <+0x39>
0832483c +0x02c:  cmpb   $0x0,-0x34(%ebp)
08324840 +0x030:  jne    08324849 <+0x39>
08324842 +0x032:  mov    $0x1,%eax
08324847 +0x037:  jmp    0832484e <+0x3e>
08324849 +0x039:  mov    $0x0,%eax
0832484e +0x03e:  test   %al,%al
08324850 +0x040:  je     083248dd <+0xcd>
08324856 +0x046:  mov    0xc(%ebp),%eax
08324859 +0x049:  mov    %eax,(%esp)
0832485c +0x04c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08324861 +0x051:  mov    %eax,(%esp)
08324864 +0x054:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
08324869 +0x059:  mov    %eax,%ebx
0832486b +0x05b:  mov    0xc(%ebp),%eax
0832486e +0x05e:  mov    %eax,(%esp)
08324871 +0x061:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08324876 +0x066:  mov    %eax,(%esp)
08324879 +0x069:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
0832487e +0x06e:  add    %eax,%ebx
08324880 +0x070:  mov    0xc(%ebp),%eax
08324883 +0x073:  mov    %eax,(%esp)
08324886 +0x076:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0832488b +0x07b:  mov    %eax,(%esp)
0832488e +0x07e:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08324893 +0x083:  lea    (%ebx,%eax,1),%eax
08324896 +0x086:  mov    %eax,-0x20(%ebp)
08324899 +0x089:  mov    0x10(%ebp),%eax
0832489c +0x08c:  mov    %eax,(%esp)
0832489f +0x08f:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
083248a4 +0x094:  mov    %eax,-0x1c(%ebp)
083248a7 +0x097:  mov    -0x1c(%ebp),%eax
083248aa +0x09a:  mov    -0x20(%ebp),%edx
083248ad +0x09d:  lea    (%edx,%eax,1),%eax
083248b0 +0x0a0:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
083248b5 +0x0a5:  jle    083248ca <+0xba>
083248b7 +0x0a7:  mov    0x24(%ebp),%eax
083248ba +0x0aa:  movl   $0x4f,(%eax)
083248c0 +0x0b0:  mov    $0x0,%eax
083248c5 +0x0b5:  jmp    0832495d <+0x14d>
083248ca +0x0ba:  mov    0x24(%ebp),%eax
083248cd +0x0bd:  movl   $0x0,(%eax)
083248d3 +0x0c3:  mov    $0x1,%eax
083248d8 +0x0c8:  jmp    0832495d <+0x14d>
083248dd +0x0cd:  movb   $0x0,-0x21(%ebp)
083248e1 +0x0d1:  movzwl -0x30(%ebp),%eax
083248e5 +0x0d5:  mov    %eax,-0x38(%ebp)
083248e8 +0x0d8:  movzbl -0x2c(%ebp),%edi
083248ec +0x0dc:  mov    0x10(%ebp),%eax
083248ef +0x0df:  mov    %eax,(%esp)
083248f2 +0x0e2:  call   083280c4 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x1d>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x1d
083248f7 +0x0e7:  movzwl %ax,%esi
083248fa +0x0ea:  mov    0x10(%ebp),%eax
083248fd +0x0ed:  mov    %eax,(%esp)
08324900 +0x0f0:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08324905 +0x0f5:  mov    %eax,%ebx
08324907 +0x0f7:  mov    0x10(%ebp),%eax
0832490a +0x0fa:  mov    %eax,(%esp)
0832490d +0x0fd:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08324912 +0x102:  mov    -0x38(%ebp),%edx
08324915 +0x105:  mov    %edx,0x1c(%esp)
08324919 +0x109:  mov    %edi,0x18(%esp)
0832491d +0x10d:  mov    %esi,0x14(%esp)
08324921 +0x111:  mov    %ebx,0x10(%esp)
08324925 +0x115:  mov    %eax,0xc(%esp)
08324929 +0x119:  mov    0x14(%ebp),%eax
0832492c +0x11c:  mov    %eax,0x8(%esp)
08324930 +0x120:  mov    0xc(%ebp),%eax
08324933 +0x123:  mov    %eax,0x4(%esp)
08324937 +0x127:  mov    0x8(%ebp),%eax
0832493a +0x12a:  mov    %eax,(%esp)
0832493d +0x12d:  call   08323f86 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht>  ; WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)
08324942 +0x132:  mov    %al,-0x21(%ebp)
08324945 +0x135:  movzbl -0x21(%ebp),%eax
08324949 +0x139:  xor    $0x1,%eax
0832494c +0x13c:  test   %al,%al
0832494e +0x13e:  je     08324959 <+0x149>
08324950 +0x140:  mov    0x24(%ebp),%eax
08324953 +0x143:  movl   $0x8,(%eax)
08324959 +0x149:  movzbl -0x21(%ebp),%eax
0832495d +0x14d:  add    $0x4c,%esp
08324960 +0x150:  pop    %ebx
08324961 +0x151:  pop    %esi
08324962 +0x152:  pop    %edi
08324963 +0x153:  pop    %ebp
08324964 +0x154:  ret
08324965 +0x155:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_CheckBuyingCondition @ 0x8324810

/* WongWork::CCeraShop::_CheckBuyingCondition(CUser*, CCeraShopGoods const*, unsigned int, unsigned
   char, unsigned short, char, int&) */

char __thiscall
WongWork::CCeraShop::_CheckBuyingCondition
          (CCeraShop *this,CUser *param_1,CCeraShopGoods *param_2,uint param_3,uchar param_4,
          ushort param_5,char param_6,int *param_7)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  CInventory *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar4 = CCeraShopGoods::GetGroupIdx(param_2);
  if ((iVar4 == 1) && (param_6 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar4 = CInventory::GetCoin(pCVar5);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::GetPayCoin(pCVar5);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar7 = CInventory::GetEventCoin(pCVar5);
    iVar8 = CCeraShopGoods::GetStackCount(param_2);
    if (iVar4 + iVar6 + iVar7 + iVar8 < 0x186a1) {
      *param_7 = 0;
      cVar2 = '\x01';
    }
    else {
      *param_7 = 0x4f;
      cVar2 = '\0';
    }
  }
  else {
    uVar3 = CCeraShopGoods::GetExpiryDate(param_2);
    uVar9 = CCeraShopGoods::GetStackCount(param_2);
    uVar10 = CCeraShopGoods::GetItemIdx(param_2);
    cVar2 = _CheckBuyingCondition(this,param_1,param_3,uVar10,uVar9,uVar3,param_4,param_5);
    if (cVar2 != '\x01') {
      *param_7 = 8;
    }
  }
  return cVar2;
}
```
