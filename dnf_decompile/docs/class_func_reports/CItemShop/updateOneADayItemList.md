# updateOneADayItemList

`_ZN9CItemShop21updateOneADayItemListEv`

`CItemShop::updateOneADayItemList()`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08512e98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512e98  _ZN9CItemShop21updateOneADayItemListEv
#           CItemShop::updateOneADayItemList()
# range [0x08512e98, 0x08512f87]
08512e98 +0x00:  push   %ebp
08512e99 +0x01:  mov    %esp,%ebp
08512e9b +0x03:  push   %ebx
08512e9c +0x04:  sub    $0x34,%esp
08512e9f +0x07:  mov    0x8(%ebp),%edx
08512ea2 +0x0a:  lea    -0x20(%ebp),%eax
08512ea5 +0x0d:  mov    %edx,0x4(%esp)
08512ea9 +0x11:  mov    %eax,(%esp)
08512eac +0x14:  call   0851907e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x56b3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x56b3
08512eb1 +0x19:  sub    $0x4,%esp
08512eb4 +0x1c:  mov    0x8(%ebp),%edx
08512eb7 +0x1f:  lea    -0x24(%ebp),%eax
08512eba +0x22:  mov    %edx,0x4(%esp)
08512ebe +0x26:  mov    %eax,(%esp)
08512ec1 +0x29:  call   08518ffa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x562f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x562f
08512ec6 +0x2e:  sub    $0x4,%esp
08512ec9 +0x31:  mov    0x8(%ebp),%eax
08512ecc +0x34:  add    $0x18,%eax
08512ecf +0x37:  mov    %eax,(%esp)
08512ed2 +0x3a:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08512ed7 +0x3f:  jmp    08512f69 <+0xd1>
08512edc +0x44:  lea    -0x20(%ebp),%eax
08512edf +0x47:  mov    %eax,(%esp)
08512ee2 +0x4a:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
08512ee7 +0x4f:  movzbl 0x48(%eax),%eax
08512eeb +0x53:  test   %al,%al
08512eed +0x55:  je     08512f5e <+0xc6>
08512eef +0x57:  lea    -0x20(%ebp),%eax
08512ef2 +0x5a:  mov    %eax,(%esp)
08512ef5 +0x5d:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
08512efa +0x62:  add    $0x4,%eax
08512efd +0x65:  mov    %eax,0x4(%esp)
08512f01 +0x69:  mov    0x8(%ebp),%eax
08512f04 +0x6c:  mov    %eax,(%esp)
08512f07 +0x6f:  call   08512f9c <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript>  ; CItemShop::setOneADayItemListNo(ItemShopScript&)
08512f0c +0x74:  mov    %eax,-0xc(%ebp)
08512f0f +0x77:  lea    -0x20(%ebp),%eax
08512f12 +0x7a:  mov    %eax,(%esp)
08512f15 +0x7d:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
08512f1a +0x82:  mov    0x4(%eax),%ebx
08512f1d +0x85:  movl   $0x0,0xc(%esp)
08512f25 +0x8d:  movl   $0xc69,0x8(%esp)
08512f2d +0x95:  movl   $&_ZZN9CItemShop21updateOneADayItemListEvE19__PRETTY_FUNCTION__,0x4(%esp)
08512f35 +0x9d:  lea    -0x1c(%ebp),%eax
08512f38 +0xa0:  mov    %eax,(%esp)
08512f3b +0xa3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08512f40 +0xa8:  mov    -0xc(%ebp),%eax
08512f43 +0xab:  mov    %eax,0xc(%esp)
08512f47 +0xaf:  mov    %ebx,0x8(%esp)
08512f4b +0xb3:  movl   $"updateOneADayItemList shop_id:%d list_no:%d",0x4(%esp)
08512f53 +0xbb:  lea    -0x1c(%ebp),%eax
08512f56 +0xbe:  mov    %eax,(%esp)
08512f59 +0xc1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08512f5e +0xc6:  lea    -0x20(%ebp),%eax
08512f61 +0xc9:  mov    %eax,(%esp)
08512f64 +0xcc:  call   085190b8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x56ed>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x56ed
08512f69 +0xd1:  lea    -0x24(%ebp),%eax
08512f6c +0xd4:  mov    %eax,0x4(%esp)
08512f70 +0xd8:  lea    -0x20(%ebp),%eax
08512f73 +0xdb:  mov    %eax,(%esp)
08512f76 +0xde:  call   085190a4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x56d9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x56d9
08512f7b +0xe3:  test   %al,%al
08512f7d +0xe5:  jne    08512edc <+0x44>
08512f83 +0xeb:  mov    -0x4(%ebp),%ebx
08512f86 +0xee:  leave
08512f87 +0xef:  ret
```

## 反编译 C

```c
// CItemShop::updateOneADayItemList @ 0x8512e98

/* CItemShop::updateOneADayItemList() */

void __thiscall CItemShop::updateOneADayItemList(CItemShop *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_28 [4];
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_24 [4];
  cMyTrace local_20 [16];
  undefined4 local_10;
  
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  begin(local_24);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x18));
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24,
                       (_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
    if (*(char *)(iVar3 + 0x48) != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
      local_10 = setOneADayItemListNo(this,(ItemShopScript *)(iVar3 + 4));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
      uVar1 = *(undefined4 *)(iVar3 + 4);
      cMyTrace::cMyTrace(local_20,"void CItemShop::updateOneADayItemList()",0xc69,0);
      cMyTrace::operator()(local_20,"updateOneADayItemList shop_id:%d list_no:%d",uVar1,local_10);
    }
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,ItemShopScript>> *)local_24);
  }
  return;
}
```
