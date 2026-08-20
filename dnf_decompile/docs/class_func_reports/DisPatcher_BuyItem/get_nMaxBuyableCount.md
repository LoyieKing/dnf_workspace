# get_nMaxBuyableCount

`_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam`

`DisPatcher_BuyItem::get_nMaxBuyableCount(CUser*, BuyItemParam&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081beab0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081beab0  _ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam
#           DisPatcher_BuyItem::get_nMaxBuyableCount(CUser*, BuyItemParam&)
# range [0x081beab0, 0x081bec5d]
081beab0 +0x000:  push   %ebp
081beab1 +0x001:  mov    %esp,%ebp
081beab3 +0x003:  sub    $0x48,%esp
081beab6 +0x006:  movl   $0x7fffffff,-0x24(%ebp)
081beabd +0x00d:  movl   $0x0,-0x10(%ebp)
081beac4 +0x014:  movl   $0x0,-0xc(%ebp)
081beacb +0x01b:  mov    0x10(%ebp),%eax
081beace +0x01e:  mov    0x80(%eax),%eax
081bead4 +0x024:  test   %eax,%eax
081bead6 +0x026:  je     081beb0d <+0x5d>
081bead8 +0x028:  mov    0xc(%ebp),%eax
081beadb +0x02b:  mov    %eax,(%esp)
081beade +0x02e:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
081beae3 +0x033:  mov    0x10(%ebp),%edx
081beae6 +0x036:  mov    0x80(%edx),%edx
081beaec +0x03c:  mov    %edx,-0x2c(%ebp)
081beaef +0x03f:  mov    $0x0,%edx
081beaf4 +0x044:  divl   -0x2c(%ebp)
081beaf7 +0x047:  mov    %eax,-0x20(%ebp)
081beafa +0x04a:  mov    -0x24(%ebp),%eax
081beafd +0x04d:  cmp    -0x20(%ebp),%eax
081beb00 +0x050:  jge    081beb07 <+0x57>
081beb02 +0x052:  mov    -0x24(%ebp),%eax
081beb05 +0x055:  jmp    081beb0a <+0x5a>
081beb07 +0x057:  mov    -0x20(%ebp),%eax
081beb0a +0x05a:  mov    %eax,-0x24(%ebp)
081beb0d +0x05d:  mov    0x10(%ebp),%eax
081beb10 +0x060:  mov    0x84(%eax),%eax
081beb16 +0x066:  test   %eax,%eax
081beb18 +0x068:  je     081beb4f <+0x9f>
081beb1a +0x06a:  mov    0xc(%ebp),%eax
081beb1d +0x06d:  mov    %eax,(%esp)
081beb20 +0x070:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
081beb25 +0x075:  mov    0x10(%ebp),%edx
081beb28 +0x078:  mov    0x84(%edx),%edx
081beb2e +0x07e:  mov    %edx,-0x2c(%ebp)
081beb31 +0x081:  mov    $0x0,%edx
081beb36 +0x086:  divl   -0x2c(%ebp)
081beb39 +0x089:  mov    %eax,-0x1c(%ebp)
081beb3c +0x08c:  mov    -0x24(%ebp),%eax
081beb3f +0x08f:  cmp    -0x1c(%ebp),%eax
081beb42 +0x092:  jge    081beb49 <+0x99>
081beb44 +0x094:  mov    -0x24(%ebp),%eax
081beb47 +0x097:  jmp    081beb4c <+0x9c>
081beb49 +0x099:  mov    -0x1c(%ebp),%eax
081beb4c +0x09c:  mov    %eax,-0x24(%ebp)
081beb4f +0x09f:  mov    0x10(%ebp),%eax
081beb52 +0x0a2:  mov    0x88(%eax),%eax
081beb58 +0x0a8:  test   %eax,%eax
081beb5a +0x0aa:  je     081beb91 <+0xe1>
081beb5c +0x0ac:  mov    0xc(%ebp),%eax
081beb5f +0x0af:  mov    %eax,(%esp)
081beb62 +0x0b2:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
081beb67 +0x0b7:  mov    0x10(%ebp),%edx
081beb6a +0x0ba:  mov    0x88(%edx),%edx
081beb70 +0x0c0:  mov    %edx,-0x2c(%ebp)
081beb73 +0x0c3:  mov    $0x0,%edx
081beb78 +0x0c8:  divl   -0x2c(%ebp)
081beb7b +0x0cb:  mov    %eax,-0x18(%ebp)
081beb7e +0x0ce:  mov    -0x24(%ebp),%eax
081beb81 +0x0d1:  cmp    -0x18(%ebp),%eax
081beb84 +0x0d4:  jge    081beb8b <+0xdb>
081beb86 +0x0d6:  mov    -0x24(%ebp),%eax
081beb89 +0x0d9:  jmp    081beb8e <+0xde>
081beb8b +0x0db:  mov    -0x18(%ebp),%eax
081beb8e +0x0de:  mov    %eax,-0x24(%ebp)
081beb91 +0x0e1:  mov    0x10(%ebp),%eax
081beb94 +0x0e4:  mov    0x8c(%eax),%eax
081beb9a +0x0ea:  test   %eax,%eax
081beb9c +0x0ec:  je     081bebd3 <+0x123>
081beb9e +0x0ee:  mov    0xc(%ebp),%eax
081beba1 +0x0f1:  mov    %eax,(%esp)
081beba4 +0x0f4:  call   08645764 <_ZN15CUserCharacInfo14GetFinishPointEv>  ; CUserCharacInfo::GetFinishPoint()
081beba9 +0x0f9:  mov    0x10(%ebp),%edx
081bebac +0x0fc:  mov    0x8c(%edx),%edx
081bebb2 +0x102:  mov    %edx,-0x2c(%ebp)
081bebb5 +0x105:  mov    $0x0,%edx
081bebba +0x10a:  divl   -0x2c(%ebp)
081bebbd +0x10d:  mov    %eax,-0x14(%ebp)
081bebc0 +0x110:  mov    -0x24(%ebp),%eax
081bebc3 +0x113:  cmp    -0x14(%ebp),%eax
081bebc6 +0x116:  jge    081bebcd <+0x11d>
081bebc8 +0x118:  mov    -0x24(%ebp),%eax
081bebcb +0x11b:  jmp    081bebd0 <+0x120>
081bebcd +0x11d:  mov    -0x14(%ebp),%eax
081bebd0 +0x120:  mov    %eax,-0x24(%ebp)
081bebd3 +0x123:  mov    0x10(%ebp),%eax
081bebd6 +0x126:  mov    0x90(%eax),%eax
081bebdc +0x12c:  test   %eax,%eax
081bebde +0x12e:  je     081bec15 <+0x165>
081bebe0 +0x130:  mov    0xc(%ebp),%eax
081bebe3 +0x133:  mov    %eax,(%esp)
081bebe6 +0x136:  call   082301ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5858>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5858
081bebeb +0x13b:  mov    0x10(%ebp),%edx
081bebee +0x13e:  mov    0x90(%edx),%edx
081bebf4 +0x144:  mov    %edx,-0x2c(%ebp)
081bebf7 +0x147:  mov    $0x0,%edx
081bebfc +0x14c:  divl   -0x2c(%ebp)
081bebff +0x14f:  mov    %eax,-0x10(%ebp)
081bec02 +0x152:  mov    -0x24(%ebp),%eax
081bec05 +0x155:  cmp    -0x10(%ebp),%eax
081bec08 +0x158:  jge    081bec0f <+0x15f>
081bec0a +0x15a:  mov    -0x24(%ebp),%eax
081bec0d +0x15d:  jmp    081bec12 <+0x162>
081bec0f +0x15f:  mov    -0x10(%ebp),%eax
081bec12 +0x162:  mov    %eax,-0x24(%ebp)
081bec15 +0x165:  mov    0x10(%ebp),%eax
081bec18 +0x168:  mov    0x94(%eax),%eax
081bec1e +0x16e:  test   %eax,%eax
081bec20 +0x170:  je     081bec58 <+0x1a8>
081bec22 +0x172:  mov    0xc(%ebp),%eax
081bec25 +0x175:  mov    %eax,(%esp)
081bec28 +0x178:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
081bec2d +0x17d:  cwtl
081bec2e +0x17e:  mov    0x10(%ebp),%edx
081bec31 +0x181:  mov    0x94(%edx),%edx
081bec37 +0x187:  mov    %edx,-0x2c(%ebp)
081bec3a +0x18a:  mov    $0x0,%edx
081bec3f +0x18f:  divl   -0x2c(%ebp)
081bec42 +0x192:  mov    %eax,-0xc(%ebp)
081bec45 +0x195:  mov    -0x24(%ebp),%eax
081bec48 +0x198:  cmp    -0xc(%ebp),%eax
081bec4b +0x19b:  jge    081bec52 <+0x1a2>
081bec4d +0x19d:  mov    -0x24(%ebp),%eax
081bec50 +0x1a0:  jmp    081bec55 <+0x1a5>
081bec52 +0x1a2:  mov    -0xc(%ebp),%eax
081bec55 +0x1a5:  mov    %eax,-0x24(%ebp)
081bec58 +0x1a8:  mov    -0x24(%ebp),%eax
081bec5b +0x1ab:  leave
081bec5c +0x1ac:  ret
081bec5d +0x1ad:  nop
```

## 反编译 C

```c
// DisPatcher_BuyItem::get_nMaxBuyableCount @ 0x81beab0

/* DisPatcher_BuyItem::get_nMaxBuyableCount(CUser*, BuyItemParam&) */

uint __thiscall
DisPatcher_BuyItem::get_nMaxBuyableCount
          (DisPatcher_BuyItem *this,CUser *param_1,BuyItemParam *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint local_28;
  
  local_28 = 0x7fffffff;
  if (*(int *)(param_2 + 0x80) != 0) {
    local_28 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    local_28 = local_28 / *(uint *)(param_2 + 0x80);
    if (0x7fffffff < (int)local_28) {
      local_28 = 0x7fffffff;
    }
  }
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x84) != 0) {
    uVar3 = CUser::GetCera(param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x84);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x84))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x88) != 0) {
    uVar3 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x88);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x88))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x8c) != 0) {
    uVar3 = CUserCharacInfo::GetFinishPoint((CUserCharacInfo *)param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x8c);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x8c))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x90) != 0) {
    uVar3 = CUser::GetGuildPowerWarPoint(param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x90);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x90))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x94) != 0) {
    sVar2 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)param_1);
    uVar1 = (uint)(int)sVar2 / *(uint *)(param_2 + 0x94);
    if ((int)local_28 < (int)((uint)(int)sVar2 / *(uint *)(param_2 + 0x94))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  return local_28;
}
```
