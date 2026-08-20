# getCeraShopBonusItem

`_ZNK9CItemList20getCeraShopBonusItemEiRmRj`

`CItemList::getCeraShopBonusItem(int, unsigned long&, unsigned int&) const`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08512930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512930  _ZNK9CItemList20getCeraShopBonusItemEiRmRj
#           CItemList::getCeraShopBonusItem(int, unsigned long&, unsigned int&) const
# range [0x08512930, 0x08512a9f]
08512930 +0x000:  push   %ebp
08512931 +0x001:  mov    %esp,%ebp
08512933 +0x003:  sub    $0x38,%esp
08512936 +0x006:  mov    0x10(%ebp),%eax
08512939 +0x009:  movl   $0xffffffff,(%eax)
0851293f +0x00f:  mov    0x14(%ebp),%eax
08512942 +0x012:  movl   $0x0,(%eax)
08512948 +0x018:  mov    0x8(%ebp),%eax
0851294b +0x01b:  lea    0x40(%eax),%edx
0851294e +0x01e:  lea    -0x14(%ebp),%eax
08512951 +0x021:  mov    %edx,0x4(%esp)
08512955 +0x025:  mov    %eax,(%esp)
08512958 +0x028:  call   08518ca6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x52db>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x52db
0851295d +0x02d:  sub    $0x4,%esp
08512960 +0x030:  mov    0x8(%ebp),%eax
08512963 +0x033:  lea    0x40(%eax),%edx
08512966 +0x036:  lea    -0x18(%ebp),%eax
08512969 +0x039:  mov    %edx,0x4(%esp)
0851296d +0x03d:  mov    %eax,(%esp)
08512970 +0x040:  call   08518cd2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5307>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5307
08512975 +0x045:  sub    $0x4,%esp
08512978 +0x048:  jmp    08512a84 <+0x154>
0851297d +0x04d:  lea    -0x14(%ebp),%eax
08512980 +0x050:  mov    %eax,(%esp)
08512983 +0x053:  call   08518d40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5375>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5375
08512988 +0x058:  mov    (%eax),%eax
0851298a +0x05a:  cmp    0xc(%ebp),%eax
0851298d +0x05d:  jg     085129a9 <+0x79>
0851298f +0x05f:  lea    -0x14(%ebp),%eax
08512992 +0x062:  mov    %eax,(%esp)
08512995 +0x065:  call   08518d40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5375>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5375
0851299a +0x06a:  mov    0x4(%eax),%eax
0851299d +0x06d:  cmp    0xc(%ebp),%eax
085129a0 +0x070:  jl     085129a9 <+0x79>
085129a2 +0x072:  mov    $0x1,%eax
085129a7 +0x077:  jmp    085129ae <+0x7e>
085129a9 +0x079:  mov    $0x0,%eax
085129ae +0x07e:  test   %al,%al
085129b0 +0x080:  je     08512a79 <+0x149>
085129b6 +0x086:  movl   $0x3e8,(%esp)
085129bd +0x08d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085129c2 +0x092:  mov    %eax,-0x10(%ebp)
085129c5 +0x095:  movl   $0x0,-0xc(%ebp)
085129cc +0x09c:  lea    -0x14(%ebp),%eax
085129cf +0x09f:  mov    %eax,(%esp)
085129d2 +0x0a2:  call   08518d40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5375>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5375
085129d7 +0x0a7:  lea    0x8(%eax),%edx
085129da +0x0aa:  lea    -0x1c(%ebp),%eax
085129dd +0x0ad:  mov    %edx,0x4(%esp)
085129e1 +0x0b1:  mov    %eax,(%esp)
085129e4 +0x0b4:  call   08518d4a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x537f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x537f
085129e9 +0x0b9:  sub    $0x4,%esp
085129ec +0x0bc:  lea    -0x14(%ebp),%eax
085129ef +0x0bf:  mov    %eax,(%esp)
085129f2 +0x0c2:  call   08518d40 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5375>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5375
085129f7 +0x0c7:  lea    0x8(%eax),%edx
085129fa +0x0ca:  lea    -0x20(%ebp),%eax
085129fd +0x0cd:  mov    %edx,0x4(%esp)
08512a01 +0x0d1:  mov    %eax,(%esp)
08512a04 +0x0d4:  call   08518d76 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x53ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x53ab
08512a09 +0x0d9:  sub    $0x4,%esp
08512a0c +0x0dc:  jmp    08512a63 <+0x133>
08512a0e +0x0de:  lea    -0x1c(%ebp),%eax
08512a11 +0x0e1:  mov    %eax,(%esp)
08512a14 +0x0e4:  call   08518de4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5419>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5419
08512a19 +0x0e9:  mov    0x8(%eax),%edx
08512a1c +0x0ec:  mov    -0xc(%ebp),%eax
08512a1f +0x0ef:  lea    (%edx,%eax,1),%eax
08512a22 +0x0f2:  mov    %eax,-0xc(%ebp)
08512a25 +0x0f5:  mov    -0xc(%ebp),%eax
08512a28 +0x0f8:  cmp    -0x10(%ebp),%eax
08512a2b +0x0fb:  jle    08512a58 <+0x128>
08512a2d +0x0fd:  lea    -0x1c(%ebp),%eax
08512a30 +0x100:  mov    %eax,(%esp)
08512a33 +0x103:  call   08518de4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5419>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5419
08512a38 +0x108:  mov    (%eax),%edx
08512a3a +0x10a:  mov    0x10(%ebp),%eax
08512a3d +0x10d:  mov    %edx,(%eax)
08512a3f +0x10f:  lea    -0x1c(%ebp),%eax
08512a42 +0x112:  mov    %eax,(%esp)
08512a45 +0x115:  call   08518de4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5419>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5419
08512a4a +0x11a:  movzwl 0x4(%eax),%eax
08512a4e +0x11e:  movzwl %ax,%edx
08512a51 +0x121:  mov    0x14(%ebp),%eax
08512a54 +0x124:  mov    %edx,(%eax)
08512a56 +0x126:  jmp    08512a9e <+0x16e>
08512a58 +0x128:  lea    -0x1c(%ebp),%eax
08512a5b +0x12b:  mov    %eax,(%esp)
08512a5e +0x12e:  call   08518dce <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5403>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5403
08512a63 +0x133:  lea    -0x20(%ebp),%eax
08512a66 +0x136:  mov    %eax,0x4(%esp)
08512a6a +0x13a:  lea    -0x1c(%ebp),%eax
08512a6d +0x13d:  mov    %eax,(%esp)
08512a70 +0x140:  call   08518da2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x53d7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x53d7
08512a75 +0x145:  test   %al,%al
08512a77 +0x147:  jne    08512a0e <+0xde>
08512a79 +0x149:  lea    -0x14(%ebp),%eax
08512a7c +0x14c:  mov    %eax,(%esp)
08512a7f +0x14f:  call   08518d2a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x535f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x535f
08512a84 +0x154:  lea    -0x18(%ebp),%eax
08512a87 +0x157:  mov    %eax,0x4(%esp)
08512a8b +0x15b:  lea    -0x14(%ebp),%eax
08512a8e +0x15e:  mov    %eax,(%esp)
08512a91 +0x161:  call   08518cfe <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5333>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5333
08512a96 +0x166:  test   %al,%al
08512a98 +0x168:  jne    0851297d <+0x4d>
08512a9e +0x16e:  leave
08512a9f +0x16f:  ret
```

## 反编译 C

```c
// CItemList::getCeraShopBonusItem @ 0x8512930

/* CItemList::getCeraShopBonusItem(int, unsigned long&, unsigned int&) const */

void __thiscall
CItemList::getCeraShopBonusItem(CItemList *this,int param_1,ulong *param_2,uint *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  ulong *puVar4;
  __normal_iterator local_24 [4];
  __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  *param_2 = 0xffffffff;
  *param_3 = 0;
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::begin();
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::end();
  do {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
                    ::operator->(local_18);
    if ((param_1 < *piVar2) ||
       (iVar3 = __gnu_cxx::
                __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
                ::operator->(local_18), *(int *)(iVar3 + 4) < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = get_rand_int(1000);
      local_10 = 0;
      __gnu_cxx::
      __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
      ::operator->(local_18);
      std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>::begin();
      __gnu_cxx::
      __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
      ::operator->(local_18);
      std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>::end();
      while (bVar1 = __gnu_cxx::operator!=(local_20,local_24), bVar1) {
        iVar3 = __gnu_cxx::
                __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
                ::operator->(local_20);
        local_10 = *(int *)(iVar3 + 8) + local_10;
        if (local_14 < local_10) {
          puVar4 = (ulong *)__gnu_cxx::
                            __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
                            ::operator->(local_20);
          *param_2 = *puVar4;
          iVar3 = __gnu_cxx::
                  __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
                  ::operator->(local_20);
          *param_3 = (uint)*(ushort *)(iVar3 + 4);
          return;
        }
        __gnu_cxx::
        __normal_iterator<stCeraShopBonusItemInfo_t_const*,std::vector<stCeraShopBonusItemInfo_t,std::allocator<stCeraShopBonusItemInfo_t>>>
        ::operator++(local_20);
      }
    }
    __gnu_cxx::
    __normal_iterator<stCeraShopBonusInfo_t_const*,std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>>
    ::operator++(local_18);
  } while( true );
}
```
