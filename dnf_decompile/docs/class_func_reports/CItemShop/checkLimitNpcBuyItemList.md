# checkLimitNpcBuyItemList

`_ZN9CItemShop24checkLimitNpcBuyItemListEjm`

`CItemShop::checkLimitNpcBuyItemList(unsigned int, unsigned long)`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08513580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513580  _ZN9CItemShop24checkLimitNpcBuyItemListEjm
#           CItemShop::checkLimitNpcBuyItemList(unsigned int, unsigned long)
# range [0x08513580, 0x085136ab]
08513580 +0x000:  push   %ebp
08513581 +0x001:  mov    %esp,%ebp
08513583 +0x003:  sub    $0x38,%esp
08513586 +0x006:  mov    0xc(%ebp),%eax
08513589 +0x009:  mov    %eax,-0x1c(%ebp)
0851358c +0x00c:  mov    0x8(%ebp),%edx
0851358f +0x00f:  lea    -0x20(%ebp),%eax
08513592 +0x012:  lea    -0x1c(%ebp),%ecx
08513595 +0x015:  mov    %ecx,0x8(%esp)
08513599 +0x019:  mov    %edx,0x4(%esp)
0851359d +0x01d:  mov    %eax,(%esp)
085135a0 +0x020:  call   08518fce <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5603>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5603
085135a5 +0x025:  sub    $0x4,%esp
085135a8 +0x028:  mov    0x8(%ebp),%edx
085135ab +0x02b:  lea    -0x18(%ebp),%eax
085135ae +0x02e:  mov    %edx,0x4(%esp)
085135b2 +0x032:  mov    %eax,(%esp)
085135b5 +0x035:  call   08518ffa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x562f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x562f
085135ba +0x03a:  sub    $0x4,%esp
085135bd +0x03d:  lea    -0x18(%ebp),%eax
085135c0 +0x040:  mov    %eax,0x4(%esp)
085135c4 +0x044:  lea    -0x20(%ebp),%eax
085135c7 +0x047:  mov    %eax,(%esp)
085135ca +0x04a:  call   08519020 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5655>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5655
085135cf +0x04f:  test   %al,%al
085135d1 +0x051:  je     085135dd <+0x5d>
085135d3 +0x053:  mov    $0x0,%eax
085135d8 +0x058:  jmp    085136aa <+0x12a>
085135dd +0x05d:  movb   $0x0,-0xd(%ebp)
085135e1 +0x061:  cmpb   $0x0,-0xd(%ebp)
085135e5 +0x065:  jne    085136a5 <+0x125>
085135eb +0x06b:  lea    -0x20(%ebp),%eax
085135ee +0x06e:  mov    %eax,(%esp)
085135f1 +0x071:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
085135f6 +0x076:  lea    0x30(%eax),%edx
085135f9 +0x079:  lea    -0x24(%ebp),%eax
085135fc +0x07c:  mov    %edx,0x4(%esp)
08513600 +0x080:  mov    %eax,(%esp)
08513603 +0x083:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08513608 +0x088:  sub    $0x4,%esp
0851360b +0x08b:  lea    -0x20(%ebp),%eax
0851360e +0x08e:  mov    %eax,(%esp)
08513611 +0x091:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
08513616 +0x096:  lea    0x30(%eax),%edx
08513619 +0x099:  lea    -0x28(%ebp),%eax
0851361c +0x09c:  mov    %edx,0x4(%esp)
08513620 +0x0a0:  mov    %eax,(%esp)
08513623 +0x0a3:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08513628 +0x0a8:  sub    $0x4,%esp
0851362b +0x0ab:  jmp    08513675 <+0xf5>
0851362d +0x0ad:  lea    -0x24(%ebp),%eax
08513630 +0x0b0:  mov    %eax,(%esp)
08513633 +0x0b3:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08513638 +0x0b8:  mov    %eax,-0xc(%ebp)
0851363b +0x0bb:  jmp    08513652 <+0xd2>
0851363d +0x0bd:  mov    -0xc(%ebp),%eax
08513640 +0x0c0:  mov    (%eax),%eax
08513642 +0x0c2:  cmp    0x10(%ebp),%eax
08513645 +0x0c5:  jne    0851364e <+0xce>
08513647 +0x0c7:  mov    $0x1,%eax
0851364c +0x0cc:  jmp    085136aa <+0x12a>
0851364e +0x0ce:  movb   $0x0,-0xd(%ebp)
08513652 +0x0d2:  cmpb   $0x0,-0xd(%ebp)
08513656 +0x0d6:  jne    0851363d <+0xbd>
08513658 +0x0d8:  lea    -0x14(%ebp),%eax
0851365b +0x0db:  movl   $0x0,0x8(%esp)
08513663 +0x0e3:  lea    -0x24(%ebp),%edx
08513666 +0x0e6:  mov    %edx,0x4(%esp)
0851366a +0x0ea:  mov    %eax,(%esp)
0851366d +0x0ed:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08513672 +0x0f2:  sub    $0x4,%esp
08513675 +0x0f5:  lea    -0x28(%ebp),%eax
08513678 +0x0f8:  mov    %eax,0x4(%esp)
0851367c +0x0fc:  lea    -0x24(%ebp),%eax
0851367f +0x0ff:  mov    %eax,(%esp)
08513682 +0x102:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08513687 +0x107:  test   %al,%al
08513689 +0x109:  je     0851369c <+0x11c>
0851368b +0x10b:  xorb   $0x1,-0xd(%ebp)
0851368f +0x10f:  cmpb   $0x0,-0xd(%ebp)
08513693 +0x113:  je     0851369c <+0x11c>
08513695 +0x115:  mov    $0x1,%eax
0851369a +0x11a:  jmp    085136a1 <+0x121>
0851369c +0x11c:  mov    $0x0,%eax
085136a1 +0x121:  test   %al,%al
085136a3 +0x123:  jne    0851362d <+0xad>
085136a5 +0x125:  mov    $0x0,%eax
085136aa +0x12a:  leave
085136ab +0x12b:  ret
```

## 反编译 C

```c
// CItemShop::checkLimitNpcBuyItemList @ 0x8513580

/* CItemShop::checkLimitNpcBuyItemList(unsigned int, unsigned long) */

undefined4 __thiscall
CItemShop::checkLimitNpcBuyItemList(CItemShop *this,uint param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_2c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,ItemShopScript>> local_24 [4];
  uint local_20;
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  ulong *local_10;
  
  local_20 = param_1;
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  find((int *)local_24);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    local_11 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_24);
    std::vector<int,std::allocator<int>>::begin();
    std::_Rb_tree_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_24);
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_28,local_2c);
      if ((bVar2) && (local_11 = local_11 ^ 1, local_11 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      local_10 = (ulong *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_28);
      while (local_11 != 0) {
        if (*local_10 == param_2) {
          return 1;
        }
        local_11 = 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_28);
    }
  }
  return 0;
}
```
