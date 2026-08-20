# BuyItem

`_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii`

`secretshop::CSecretShop::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fb16e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb16e  _ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii
#           secretshop::CSecretShop::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)
# range [0x085fb16e, 0x085fb27b]
085fb16e +0x000:  push   %ebp
085fb16f +0x001:  mov    %esp,%ebp
085fb171 +0x003:  push   %ebx
085fb172 +0x004:  sub    $0x34,%esp
085fb175 +0x007:  mov    0x14(%ebp),%eax
085fb178 +0x00a:  mov    %eax,0x4(%esp)
085fb17c +0x00e:  mov    0x10(%ebp),%eax
085fb17f +0x011:  mov    %eax,(%esp)
085fb182 +0x014:  call   085fbe8a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x1c>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x1c
085fb187 +0x019:  mov    %eax,-0x18(%ebp)
085fb18a +0x01c:  cmpl   $0x0,-0x18(%ebp)
085fb18e +0x020:  je     085fb26f <+0x101>
085fb194 +0x026:  mov    -0x18(%ebp),%eax
085fb197 +0x029:  movzbl 0x4(%eax),%eax
085fb19b +0x02d:  movsbl %al,%eax
085fb19e +0x030:  mov    %eax,0x4(%esp)
085fb1a2 +0x034:  mov    0x8(%ebp),%eax
085fb1a5 +0x037:  mov    %eax,(%esp)
085fb1a8 +0x03a:  call   085fb27c <_ZN10secretshop11CSecretShop7GetRuleE8eBuyRule>  ; secretshop::CSecretShop::GetRule(eBuyRule)
085fb1ad +0x03f:  mov    %eax,-0x14(%ebp)
085fb1b0 +0x042:  cmpl   $0x0,-0x14(%ebp)
085fb1b4 +0x046:  je     085fb272 <+0x104>
085fb1ba +0x04c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085fb1bf +0x051:  mov    0x14(%ebp),%edx
085fb1c2 +0x054:  mov    %edx,0x4(%esp)
085fb1c6 +0x058:  mov    %eax,(%esp)
085fb1c9 +0x05b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085fb1ce +0x060:  mov    %eax,-0x10(%ebp)
085fb1d1 +0x063:  cmpl   $0x0,-0x10(%ebp)
085fb1d5 +0x067:  je     085fb275 <+0x107>
085fb1db +0x06d:  mov    -0x10(%ebp),%eax
085fb1de +0x070:  mov    %eax,(%esp)
085fb1e1 +0x073:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085fb1e6 +0x078:  xor    $0x1,%eax
085fb1e9 +0x07b:  test   %al,%al
085fb1eb +0x07d:  je     085fb1f4 <+0x86>
085fb1ed +0x07f:  movl   $0x1,0x18(%ebp)
085fb1f4 +0x086:  mov    -0x14(%ebp),%eax
085fb1f7 +0x089:  mov    (%eax),%eax
085fb1f9 +0x08b:  mov    (%eax),%edx
085fb1fb +0x08d:  mov    0x18(%ebp),%eax
085fb1fe +0x090:  mov    %eax,0x10(%esp)
085fb202 +0x094:  mov    0x14(%ebp),%eax
085fb205 +0x097:  mov    %eax,0xc(%esp)
085fb209 +0x09b:  mov    0x10(%ebp),%eax
085fb20c +0x09e:  mov    %eax,0x8(%esp)
085fb210 +0x0a2:  mov    0xc(%ebp),%eax
085fb213 +0x0a5:  mov    %eax,0x4(%esp)
085fb217 +0x0a9:  mov    -0x14(%ebp),%eax
085fb21a +0x0ac:  mov    %eax,(%esp)
085fb21d +0x0af:  call   *%edx
085fb21f +0x0b1:  mov    %al,-0x9(%ebp)
085fb222 +0x0b4:  cmpb   $0x0,-0x9(%ebp)
085fb226 +0x0b8:  je     085fb276 <+0x108>
085fb228 +0x0ba:  mov    0x10(%ebp),%eax
085fb22b +0x0bd:  movzbl 0x18(%eax),%eax
085fb22f +0x0c1:  xor    $0x1,%eax
085fb232 +0x0c4:  test   %al,%al
085fb234 +0x0c6:  je     085fb276 <+0x108>
085fb236 +0x0c8:  mov    0xc(%ebp),%eax
085fb239 +0x0cb:  mov    %eax,(%esp)
085fb23c +0x0ce:  call   0867cb90 <_ZN5CUser23getDungeonIdxAfterClearEv>  ; CUser::getDungeonIdxAfterClear()
085fb241 +0x0d3:  mov    %eax,%ebx
085fb243 +0x0d5:  mov    0xc(%ebp),%eax
085fb246 +0x0d8:  mov    %eax,(%esp)
085fb249 +0x0db:  call   086885a6 <_ZN5CUser17GetSecretShopDataEv>  ; CUser::GetSecretShopData()
085fb24e +0x0e0:  mov    (%eax),%eax
085fb250 +0x0e2:  mov    0x8(%ebp),%edx
085fb253 +0x0e5:  add    $0x1c,%edx
085fb256 +0x0e8:  mov    %ebx,0x8(%esp)
085fb25a +0x0ec:  mov    %eax,0x4(%esp)
085fb25e +0x0f0:  mov    %edx,(%esp)
085fb261 +0x0f3:  call   085fd0d4 <_ZN10secretshop20CSecretShopStatistic9RecordBuyEii>  ; secretshop::CSecretShopStatistic::RecordBuy(int, int)
085fb266 +0x0f8:  mov    0x10(%ebp),%eax
085fb269 +0x0fb:  movb   $0x1,0x18(%eax)
085fb26d +0x0ff:  jmp    085fb276 <+0x108>
085fb26f +0x101:  nop
085fb270 +0x102:  jmp    085fb276 <+0x108>
085fb272 +0x104:  nop
085fb273 +0x105:  jmp    085fb276 <+0x108>
085fb275 +0x107:  nop
085fb276 +0x108:  add    $0x34,%esp
085fb279 +0x10b:  pop    %ebx
085fb27a +0x10c:  pop    %ebp
085fb27b +0x10d:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::BuyItem @ 0x85fb16e

/* secretshop::CSecretShop::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int) */

void __thiscall
secretshop::CSecretShop::BuyItem
          (CSecretShop *this,CUser *param_1,SECRET_SHOP_INFO *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  CDataManager *this_00;
  CItem *this_01;
  int *piVar4;
  
  iVar2 = SECRET_SHOP_INFO::GetSaleInfo((int)param_2);
  if ((iVar2 != 0) &&
     (puVar3 = (undefined4 *)GetRule(this,(int)*(char *)(iVar2 + 4)), puVar3 != (undefined4 *)0x0))
  {
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,param_3);
    if (this_01 != (CItem *)0x0) {
      cVar1 = CItem::is_stackable(this_01);
      if (cVar1 != '\x01') {
        param_4 = 1;
      }
      cVar1 = (**(code **)*puVar3)(puVar3,param_1,param_2,param_3,param_4);
      if ((cVar1 != '\0') && (param_2[0x18] != (SECRET_SHOP_INFO)0x1)) {
        iVar2 = CUser::getDungeonIdxAfterClear(param_1);
        piVar4 = (int *)CUser::GetSecretShopData(param_1);
        CSecretShopStatistic::RecordBuy((CSecretShopStatistic *)(this + 0x1c),*piVar4,iVar2);
        param_2[0x18] = (SECRET_SHOP_INFO)0x1;
      }
    }
  }
  return;
}
```
