# _generateMonseterSpecificItem

`_ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE`

`WongWork::CMonsterDrop::_generateMonseterSpecificItem(CMonster const*, char, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08536fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08536fce  _ZN8WongWork12CMonsterDrop29_generateMonseterSpecificItemEPK8CMonstercRNS_18stGenerateResult_tE
#           WongWork::CMonsterDrop::_generateMonseterSpecificItem(CMonster const*, char, WongWork::stGenerateResult_t&)
# range [0x08536fce, 0x0853706f]
08536fce +0x00:  push   %ebp
08536fcf +0x01:  mov    %esp,%ebp
08536fd1 +0x03:  sub    $0x78,%esp
08536fd4 +0x06:  mov    0x10(%ebp),%eax
08536fd7 +0x09:  mov    %al,-0x5c(%ebp)
08536fda +0x0c:  movl   $0xfffffffe,-0xc(%ebp)
08536fe1 +0x13:  mov    0x8(%ebp),%eax
08536fe4 +0x16:  add    $0x8,%eax
08536fe7 +0x19:  movl   $0x2710,0x8(%esp)
08536fef +0x21:  movl   $0x2,0x4(%esp)
08536ff7 +0x29:  mov    %eax,(%esp)
08536ffa +0x2c:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08536fff +0x31:  movsbl -0x5c(%ebp),%edx
08537003 +0x35:  mov    %eax,0x8(%esp)
08537007 +0x39:  mov    %edx,0x4(%esp)
0853700b +0x3d:  mov    0xc(%ebp),%eax
0853700e +0x40:  mov    %eax,(%esp)
08537011 +0x43:  call   0834f7e4 <_ZNK8CMonster15drop_item_indexEji>  ; CMonster::drop_item_index(unsigned int, int) const
08537016 +0x48:  mov    %eax,-0xc(%ebp)
08537019 +0x4b:  cmpl   $0xfffffffe,-0xc(%ebp)
0853701d +0x4f:  setne  %al
08537020 +0x52:  test   %al,%al
08537022 +0x54:  je     0853706e <+0xa0>
08537024 +0x56:  lea    -0x49(%ebp),%eax
08537027 +0x59:  mov    %eax,(%esp)
0853702a +0x5c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0853702f +0x61:  mov    -0xc(%ebp),%eax
08537032 +0x64:  mov    %eax,-0x47(%ebp)
08537035 +0x67:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853703a +0x6c:  mov    0xc(%eax),%eax
0853703d +0x6f:  movl   $0x1,0xc(%esp)
08537045 +0x77:  lea    -0x49(%ebp),%edx
08537048 +0x7a:  mov    %edx,0x8(%esp)
0853704c +0x7e:  movl   $0x1,0x4(%esp)
08537054 +0x86:  mov    %eax,(%esp)
08537057 +0x89:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0853705c +0x8e:  mov    0x14(%ebp),%eax
0853705f +0x91:  lea    -0x49(%ebp),%edx
08537062 +0x94:  mov    %edx,0x4(%esp)
08537066 +0x98:  mov    %eax,(%esp)
08537069 +0x9b:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
0853706e +0xa0:  leave
0853706f +0xa1:  ret
```

## 反编译 C

```c
// WongWork::CMonsterDrop::_generateMonseterSpecificItem @ 0x8536fce

/* WongWork::CMonsterDrop::_generateMonseterSpecificItem(CMonster const*, char,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop::_generateMonseterSpecificItem
          (CMonsterDrop *this,CMonster *param_1,char param_2,stGenerateResult_t *param_3)

{
  int iVar1;
  Inven_Item local_4d [2];
  int local_4b;
  int local_10;
  
  local_10 = 0xfffffffe;
  iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),2,10000);
  local_10 = CMonster::drop_item_index(param_1,(int)param_2,iVar1);
  if (local_10 != -2) {
    Inven_Item::Inven_Item(local_4d);
    local_4b = local_10;
    iVar1 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar1 + 0xc),1,local_4d,1);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_3,local_4d);
  }
  return;
}
```
