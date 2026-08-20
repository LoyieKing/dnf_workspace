# _generateSpecificItem

`_ZN8WongWork12CClearReward21_generateSpecificItemERKNS_26stGenerateRefClearReward_tERNS_18stGenerateResult_tE`

`WongWork::CClearReward::_generateSpecificItem(WongWork::stGenerateRefClearReward_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x08538bf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538bf8  _ZN8WongWork12CClearReward21_generateSpecificItemERKNS_26stGenerateRefClearReward_tERNS_18stGenerateResult_tE
#           WongWork::CClearReward::_generateSpecificItem(WongWork::stGenerateRefClearReward_t const&, WongWork::stGenerateResult_t&)
# range [0x08538bf8, 0x08538c83]
08538bf8 +0x00:  push   %ebp
08538bf9 +0x01:  mov    %esp,%ebp
08538bfb +0x03:  sub    $0x68,%esp
08538bfe +0x06:  mov    0x8(%ebp),%eax
08538c01 +0x09:  add    $0x8,%eax
08538c04 +0x0c:  movl   $0x64,0x8(%esp)
08538c0c +0x14:  movl   $0x4,0x4(%esp)
08538c14 +0x1c:  mov    %eax,(%esp)
08538c17 +0x1f:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08538c1c +0x24:  mov    0xc(%ebp),%edx
08538c1f +0x27:  mov    0xc(%edx),%edx
08538c22 +0x2a:  mov    %eax,0x4(%esp)
08538c26 +0x2e:  mov    %edx,(%esp)
08538c29 +0x31:  call   0834c95c <_ZNK8CDungeon14get_clear_itemEi>  ; CDungeon::get_clear_item(int) const
08538c2e +0x36:  mov    %eax,-0xc(%ebp)
08538c31 +0x39:  cmpl   $0xfffffffe,-0xc(%ebp)
08538c35 +0x3d:  je     08538c81 <+0x89>
08538c37 +0x3f:  lea    -0x49(%ebp),%eax
08538c3a +0x42:  mov    %eax,(%esp)
08538c3d +0x45:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08538c42 +0x4a:  mov    -0xc(%ebp),%eax
08538c45 +0x4d:  mov    %eax,-0x47(%ebp)
08538c48 +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538c4d +0x55:  mov    0xc(%eax),%eax
08538c50 +0x58:  movl   $0x1,0xc(%esp)
08538c58 +0x60:  lea    -0x49(%ebp),%edx
08538c5b +0x63:  mov    %edx,0x8(%esp)
08538c5f +0x67:  movl   $0x1,0x4(%esp)
08538c67 +0x6f:  mov    %eax,(%esp)
08538c6a +0x72:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08538c6f +0x77:  mov    0x10(%ebp),%eax
08538c72 +0x7a:  lea    -0x49(%ebp),%edx
08538c75 +0x7d:  mov    %edx,0x4(%esp)
08538c79 +0x81:  mov    %eax,(%esp)
08538c7c +0x84:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08538c81 +0x89:  leave
08538c82 +0x8a:  ret
08538c83 +0x8b:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::_generateSpecificItem @ 0x8538bf8

/* WongWork::CClearReward::_generateSpecificItem(WongWork::stGenerateRefClearReward_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CClearReward::_generateSpecificItem
          (CClearReward *this,stGenerateRefClearReward_t *param_1,stGenerateResult_t *param_2)

{
  int iVar1;
  Inven_Item local_4d [2];
  int local_4b;
  int local_10;
  
  iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),4,100);
  local_10 = CDungeon::get_clear_item(*(CDungeon **)(param_1 + 0xc),iVar1);
  if (local_10 != -2) {
    Inven_Item::Inven_Item(local_4d);
    local_4b = local_10;
    iVar1 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar1 + 0xc),1,local_4d,1);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_4d);
  }
  return;
}
```
