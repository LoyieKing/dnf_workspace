# ProcessSpecialItem

`_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi`

`WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x0832587e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832587e  _ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi
#           WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
# range [0x0832587e, 0x08325a2f]
0832587e +0x000:  push   %ebp
0832587f +0x001:  mov    %esp,%ebp
08325881 +0x003:  push   %ebx
08325882 +0x004:  sub    $0x84,%esp
08325888 +0x00a:  mov    0x20(%ebp),%ebx
0832588b +0x00d:  mov    0x2c(%ebp),%ecx
0832588e +0x010:  mov    0x30(%ebp),%edx
08325891 +0x013:  mov    0x34(%ebp),%eax
08325894 +0x016:  mov    %bl,-0x5c(%ebp)
08325897 +0x019:  mov    %cl,-0x60(%ebp)
0832589a +0x01c:  mov    %dl,-0x64(%ebp)
0832589d +0x01f:  mov    %al,-0x68(%ebp)
083258a0 +0x022:  mov    0xc(%ebp),%eax
083258a3 +0x025:  mov    %eax,(%esp)
083258a6 +0x028:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
083258ab +0x02d:  test   %eax,%eax
083258ad +0x02f:  sete   %al
083258b0 +0x032:  test   %al,%al
083258b2 +0x034:  je     083258be <+0x40>
083258b4 +0x036:  mov    $0x0,%eax
083258b9 +0x03b:  jmp    08325a2b <+0x1ad>
083258be +0x040:  movl   $0x0,-0x1c(%ebp)
083258c5 +0x047:  movl   $0x0,-0x20(%ebp)
083258cc +0x04e:  movb   $0x0,-0x21(%ebp)
083258d0 +0x052:  lea    -0x18(%ebp),%eax
083258d3 +0x055:  movl   $&g_map_premium_item_data,0x4(%esp)
083258db +0x05d:  mov    %eax,(%esp)
083258de +0x060:  call   0827e432 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x554>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x554
083258e3 +0x065:  sub    $0x4,%esp
083258e6 +0x068:  mov    0x10(%ebp),%eax
083258e9 +0x06b:  mov    %eax,-0x10(%ebp)
083258ec +0x06e:  lea    -0x14(%ebp),%eax
083258ef +0x071:  lea    -0x10(%ebp),%edx
083258f2 +0x074:  mov    %edx,0x8(%esp)
083258f6 +0x078:  movl   $&g_map_premium_item_data,0x4(%esp)
083258fe +0x080:  mov    %eax,(%esp)
08325901 +0x083:  call   0827e406 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x528>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x528
08325906 +0x088:  sub    $0x4,%esp
08325909 +0x08b:  lea    -0x18(%ebp),%eax
0832590c +0x08e:  mov    %eax,0x4(%esp)
08325910 +0x092:  lea    -0x14(%ebp),%eax
08325913 +0x095:  mov    %eax,(%esp)
08325916 +0x098:  call   0827e458 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x57a>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x57a
0832591b +0x09d:  test   %al,%al
0832591d +0x09f:  je     08325957 <+0xd9>
0832591f +0x0a1:  lea    -0x21(%ebp),%eax
08325922 +0x0a4:  mov    %eax,0x10(%esp)
08325926 +0x0a8:  lea    -0x20(%ebp),%eax
08325929 +0x0ab:  mov    %eax,0xc(%esp)
0832592d +0x0af:  lea    -0x1c(%ebp),%eax
08325930 +0x0b2:  mov    %eax,0x8(%esp)
08325934 +0x0b6:  mov    0x10(%ebp),%eax
08325937 +0x0b9:  mov    %eax,0x4(%esp)
0832593b +0x0bd:  mov    0x8(%ebp),%eax
0832593e +0x0c0:  mov    %eax,(%esp)
08325941 +0x0c3:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08325946 +0x0c8:  xor    $0x1,%eax
08325949 +0x0cb:  test   %al,%al
0832594b +0x0cd:  je     0832595e <+0xe0>
0832594d +0x0cf:  mov    $0x0,%eax
08325952 +0x0d4:  jmp    08325a2b <+0x1ad>
08325957 +0x0d9:  movl   $0x2,-0x1c(%ebp)
0832595e +0x0e0:  cmpl   $0x0,0x14(%ebp)
08325962 +0x0e4:  jne    0832597a <+0xfc>
08325964 +0x0e6:  cmpl   $0x10,0x10(%ebp)
08325968 +0x0ea:  je     08325973 <+0xf5>
0832596a +0x0ec:  cmpl   $0x28d171,0x10(%ebp)
08325971 +0x0f3:  jne    0832597a <+0xfc>
08325973 +0x0f5:  movl   $0xc350,0x14(%ebp)
0832597a +0x0fc:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0832597f +0x101:  mov    %eax,(%esp)
08325982 +0x104:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
08325987 +0x109:  mov    %eax,-0xc(%ebp)
0832598a +0x10c:  mov    0x28(%ebp),%eax
0832598d +0x10f:  mov    %eax,0x8(%esp)
08325991 +0x113:  mov    0x24(%ebp),%eax
08325994 +0x116:  mov    %eax,0x4(%esp)
08325998 +0x11a:  lea    -0x4c(%ebp),%eax
0832599b +0x11d:  mov    %eax,(%esp)
0832599e +0x120:  call   08234ec2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa56c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa56c
083259a3 +0x125:  mov    -0x20(%ebp),%eax
083259a6 +0x128:  mov    %eax,-0x44(%ebp)
083259a9 +0x12b:  mov    0xc(%ebp),%eax
083259ac +0x12e:  mov    %eax,-0x4c(%ebp)
083259af +0x131:  mov    0x10(%ebp),%eax
083259b2 +0x134:  mov    %eax,-0x48(%ebp)
083259b5 +0x137:  mov    0x14(%ebp),%eax
083259b8 +0x13a:  mov    %eax,-0x38(%ebp)
083259bb +0x13d:  mov    0x1c(%ebp),%eax
083259be +0x140:  mov    %eax,-0x34(%ebp)
083259c1 +0x143:  movzbl -0x5c(%ebp),%eax
083259c5 +0x147:  mov    %al,-0x30(%ebp)
083259c8 +0x14a:  movzbl -0x60(%ebp),%eax
083259cc +0x14e:  mov    %al,-0x2f(%ebp)
083259cf +0x151:  movzbl -0x64(%ebp),%eax
083259d3 +0x155:  mov    %al,-0x2e(%ebp)
083259d6 +0x158:  movzbl -0x68(%ebp),%eax
083259da +0x15c:  mov    %al,-0x2d(%ebp)
083259dd +0x15f:  mov    0x38(%ebp),%eax
083259e0 +0x162:  mov    %eax,-0x2c(%ebp)
083259e3 +0x165:  lea    -0x28(%ebp),%eax
083259e6 +0x168:  mov    %eax,(%esp)
083259e9 +0x16b:  call   08234f36 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5e0
083259ee +0x170:  mov    -0x1c(%ebp),%edx
083259f1 +0x173:  mov    0x8(%ebp),%eax
083259f4 +0x176:  mov    (%eax),%eax
083259f6 +0x178:  lea    -0x28(%ebp),%ecx
083259f9 +0x17b:  mov    %ecx,0xc(%esp)
083259fd +0x17f:  lea    -0x4c(%ebp),%ecx
08325a00 +0x182:  mov    %ecx,0x8(%esp)
08325a04 +0x186:  mov    %edx,0x4(%esp)
08325a08 +0x18a:  mov    %eax,(%esp)
08325a0b +0x18d:  call   0827be0a <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result>  ; SpecialItemHandler::execute(int, STSpecailItem_Param const&, STSpecailItem_Result&)
08325a10 +0x192:  xor    $0x1,%eax
08325a13 +0x195:  test   %al,%al
08325a15 +0x197:  je     08325a1e <+0x1a0>
08325a17 +0x199:  mov    $0x0,%eax
08325a1c +0x19e:  jmp    08325a2b <+0x1ad>
08325a1e +0x1a0:  mov    -0x28(%ebp),%edx
08325a21 +0x1a3:  mov    0x18(%ebp),%eax
08325a24 +0x1a6:  mov    %edx,(%eax)
08325a26 +0x1a8:  mov    $0x1,%eax
08325a2b +0x1ad:  mov    -0x4(%ebp),%ebx
08325a2e +0x1b0:  leave
08325a2f +0x1b1:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::ProcessSpecialItem @ 0x832587e

/* WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int) */

undefined4 __thiscall
WongWork::CCeraShop::ProcessSpecialItem
          (CCeraShop *this,CUser *param_1,int param_2,int param_3,int *param_4,long param_5,
          bool param_6,vector *param_7,stCeraShopItemParam_t *param_8,char param_9,char param_10,
          bool param_11,int param_12)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CGameManager *this_00;
  CUser *local_50;
  int local_4c;
  int local_48;
  int local_3c;
  long local_38;
  undefined1 local_34;
  char local_33;
  char local_32;
  undefined1 local_31;
  int local_30;
  int local_2c;
  bool local_25;
  int local_24;
  int local_20;
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>> local_18 [4];
  int local_14;
  undefined4 local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_20 = 0;
    local_24 = 0;
    local_25 = false;
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::end(local_1c);
    local_14 = param_2;
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::find((ulong *)local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator==
                      (local_18,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_20 = 2;
    }
    else {
      cVar1 = IsSpecialItem(this,param_2,&local_20,&local_24,&local_25);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    if ((param_3 == 0) && ((param_2 == 0x10 || (param_2 == 0x28d171)))) {
      param_3 = 50000;
    }
    this_00 = (CGameManager *)G_CGameManager();
    local_10 = CGameManager::GetPremiumLetheManager(this_00);
    STSpecailItem_Param::STSpecailItem_Param((STSpecailItem_Param *)&local_50,param_7,param_8);
    local_48 = local_24;
    local_50 = param_1;
    local_4c = param_2;
    local_3c = param_3;
    local_38 = param_5;
    local_30 = param_12;
    local_34 = param_6;
    local_33 = param_9;
    local_32 = param_10;
    local_31 = param_11;
    STSpecailItem_Result::STSpecailItem_Result((STSpecailItem_Result *)&local_2c);
    cVar1 = SpecialItemHandler::execute
                      (*(SpecialItemHandler **)this,local_20,(STSpecailItem_Param *)&local_50,
                       (STSpecailItem_Result *)&local_2c);
    if (cVar1 == '\x01') {
      *param_4 = local_2c;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
