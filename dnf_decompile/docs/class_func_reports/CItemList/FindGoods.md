# FindGoods

`_ZN9CItemList9FindGoodsEi`

`CItemList::FindGoods(int)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08512358` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512358  _ZN9CItemList9FindGoodsEi
#           CItemList::FindGoods(int)
# range [0x08512358, 0x085123d9]
08512358 +0x00:  push   %ebp
08512359 +0x01:  mov    %esp,%ebp
0851235b +0x03:  sub    $0x38,%esp
0851235e +0x06:  lea    -0x18(%ebp),%eax
08512361 +0x09:  mov    %eax,(%esp)
08512364 +0x0c:  call   08518ade <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5113>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5113
08512369 +0x11:  mov    0x8(%ebp),%eax
0851236c +0x14:  lea    0x18(%eax),%edx
0851236f +0x17:  lea    -0x10(%ebp),%eax
08512372 +0x1a:  mov    %edx,0x4(%esp)
08512376 +0x1e:  mov    %eax,(%esp)
08512379 +0x21:  call   08518b10 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5145>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5145
0851237e +0x26:  sub    $0x4,%esp
08512381 +0x29:  mov    0x8(%ebp),%eax
08512384 +0x2c:  lea    0x18(%eax),%ecx
08512387 +0x2f:  lea    -0x20(%ebp),%eax
0851238a +0x32:  lea    0xc(%ebp),%edx
0851238d +0x35:  mov    %edx,0x8(%esp)
08512391 +0x39:  mov    %ecx,0x4(%esp)
08512395 +0x3d:  mov    %eax,(%esp)
08512398 +0x40:  call   08518ae4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5119>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5119
0851239d +0x45:  sub    $0x4,%esp
085123a0 +0x48:  mov    -0x20(%ebp),%eax
085123a3 +0x4b:  mov    -0x1c(%ebp),%edx
085123a6 +0x4e:  mov    %eax,-0x18(%ebp)
085123a9 +0x51:  mov    %edx,-0x14(%ebp)
085123ac +0x54:  lea    -0x10(%ebp),%eax
085123af +0x57:  mov    %eax,0x4(%esp)
085123b3 +0x5b:  lea    -0x18(%ebp),%eax
085123b6 +0x5e:  mov    %eax,(%esp)
085123b9 +0x61:  call   08518b36 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x516b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x516b
085123be +0x66:  test   %al,%al
085123c0 +0x68:  je     085123c9 <+0x71>
085123c2 +0x6a:  mov    $0x0,%eax
085123c7 +0x6f:  jmp    085123d7 <+0x7f>
085123c9 +0x71:  lea    -0x18(%ebp),%eax
085123cc +0x74:  mov    %eax,(%esp)
085123cf +0x77:  call   08518b4a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x517f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x517f
085123d4 +0x7c:  mov    0x4(%eax),%eax
085123d7 +0x7f:  leave
085123d8 +0x80:  ret
085123d9 +0x81:  nop
```

## 反编译 C

```c
// CItemList::FindGoods @ 0x8512358

/* CItemList::FindGoods(int) */

undefined4 CItemList::FindGoods(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::end(local_14);
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::find(&local_24);
  local_1c = local_24;
  local_18 = local_20;
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CCeraShopGoods*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CCeraShopGoods*>>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
