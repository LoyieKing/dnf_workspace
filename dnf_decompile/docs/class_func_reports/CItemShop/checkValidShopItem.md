# checkValidShopItem

`_ZN9CItemShop18checkValidShopItemEjm`

`CItemShop::checkValidShopItem(unsigned int, unsigned long)`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08512cda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512cda  _ZN9CItemShop18checkValidShopItemEjm
#           CItemShop::checkValidShopItem(unsigned int, unsigned long)
# range [0x08512cda, 0x08512e05]
08512cda +0x000:  push   %ebp
08512cdb +0x001:  mov    %esp,%ebp
08512cdd +0x003:  sub    $0x38,%esp
08512ce0 +0x006:  mov    0xc(%ebp),%eax
08512ce3 +0x009:  mov    %eax,-0x1c(%ebp)
08512ce6 +0x00c:  mov    0x8(%ebp),%edx
08512ce9 +0x00f:  lea    -0x20(%ebp),%eax
08512cec +0x012:  lea    -0x1c(%ebp),%ecx
08512cef +0x015:  mov    %ecx,0x8(%esp)
08512cf3 +0x019:  mov    %edx,0x4(%esp)
08512cf7 +0x01d:  mov    %eax,(%esp)
08512cfa +0x020:  call   08518fce <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5603>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5603
08512cff +0x025:  sub    $0x4,%esp
08512d02 +0x028:  mov    0x8(%ebp),%edx
08512d05 +0x02b:  lea    -0x18(%ebp),%eax
08512d08 +0x02e:  mov    %edx,0x4(%esp)
08512d0c +0x032:  mov    %eax,(%esp)
08512d0f +0x035:  call   08518ffa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x562f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x562f
08512d14 +0x03a:  sub    $0x4,%esp
08512d17 +0x03d:  lea    -0x18(%ebp),%eax
08512d1a +0x040:  mov    %eax,0x4(%esp)
08512d1e +0x044:  lea    -0x20(%ebp),%eax
08512d21 +0x047:  mov    %eax,(%esp)
08512d24 +0x04a:  call   08519020 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5655>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5655
08512d29 +0x04f:  test   %al,%al
08512d2b +0x051:  je     08512d37 <+0x5d>
08512d2d +0x053:  mov    $0x0,%eax
08512d32 +0x058:  jmp    08512e04 <+0x12a>
08512d37 +0x05d:  movb   $0x0,-0xd(%ebp)
08512d3b +0x061:  cmpb   $0x0,-0xd(%ebp)
08512d3f +0x065:  jne    08512dff <+0x125>
08512d45 +0x06b:  lea    -0x20(%ebp),%eax
08512d48 +0x06e:  mov    %eax,(%esp)
08512d4b +0x071:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
08512d50 +0x076:  lea    0x18(%eax),%edx
08512d53 +0x079:  lea    -0x24(%ebp),%eax
08512d56 +0x07c:  mov    %edx,0x4(%esp)
08512d5a +0x080:  mov    %eax,(%esp)
08512d5d +0x083:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08512d62 +0x088:  sub    $0x4,%esp
08512d65 +0x08b:  lea    -0x20(%ebp),%eax
08512d68 +0x08e:  mov    %eax,(%esp)
08512d6b +0x091:  call   08519034 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5669>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5669
08512d70 +0x096:  lea    0x18(%eax),%edx
08512d73 +0x099:  lea    -0x28(%ebp),%eax
08512d76 +0x09c:  mov    %edx,0x4(%esp)
08512d7a +0x0a0:  mov    %eax,(%esp)
08512d7d +0x0a3:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08512d82 +0x0a8:  sub    $0x4,%esp
08512d85 +0x0ab:  jmp    08512dcf <+0xf5>
08512d87 +0x0ad:  lea    -0x24(%ebp),%eax
08512d8a +0x0b0:  mov    %eax,(%esp)
08512d8d +0x0b3:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08512d92 +0x0b8:  mov    %eax,-0xc(%ebp)
08512d95 +0x0bb:  jmp    08512dac <+0xd2>
08512d97 +0x0bd:  mov    -0xc(%ebp),%eax
08512d9a +0x0c0:  mov    (%eax),%eax
08512d9c +0x0c2:  cmp    0x10(%ebp),%eax
08512d9f +0x0c5:  jne    08512da8 <+0xce>
08512da1 +0x0c7:  mov    $0x1,%eax
08512da6 +0x0cc:  jmp    08512e04 <+0x12a>
08512da8 +0x0ce:  movb   $0x0,-0xd(%ebp)
08512dac +0x0d2:  cmpb   $0x0,-0xd(%ebp)
08512db0 +0x0d6:  jne    08512d97 <+0xbd>
08512db2 +0x0d8:  lea    -0x14(%ebp),%eax
08512db5 +0x0db:  movl   $0x0,0x8(%esp)
08512dbd +0x0e3:  lea    -0x24(%ebp),%edx
08512dc0 +0x0e6:  mov    %edx,0x4(%esp)
08512dc4 +0x0ea:  mov    %eax,(%esp)
08512dc7 +0x0ed:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08512dcc +0x0f2:  sub    $0x4,%esp
08512dcf +0x0f5:  lea    -0x28(%ebp),%eax
08512dd2 +0x0f8:  mov    %eax,0x4(%esp)
08512dd6 +0x0fc:  lea    -0x24(%ebp),%eax
08512dd9 +0x0ff:  mov    %eax,(%esp)
08512ddc +0x102:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08512de1 +0x107:  test   %al,%al
08512de3 +0x109:  je     08512df6 <+0x11c>
08512de5 +0x10b:  xorb   $0x1,-0xd(%ebp)
08512de9 +0x10f:  cmpb   $0x0,-0xd(%ebp)
08512ded +0x113:  je     08512df6 <+0x11c>
08512def +0x115:  mov    $0x1,%eax
08512df4 +0x11a:  jmp    08512dfb <+0x121>
08512df6 +0x11c:  mov    $0x0,%eax
08512dfb +0x121:  test   %al,%al
08512dfd +0x123:  jne    08512d87 <+0xad>
08512dff +0x125:  mov    $0x0,%eax
08512e04 +0x12a:  leave
08512e05 +0x12b:  ret
```

## 反编译 C

```c
// CItemShop::checkValidShopItem @ 0x8512cda

/* CItemShop::checkValidShopItem(unsigned int, unsigned long) */

undefined4 __thiscall CItemShop::checkValidShopItem(CItemShop *this,uint param_1,ulong param_2)

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
