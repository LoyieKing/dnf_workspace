# IsOneADayShop

`_ZNK9CItemShop13IsOneADayShopEi`

`CItemShop::IsOneADayShop(int) const`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08513082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513082  _ZNK9CItemShop13IsOneADayShopEi
#           CItemShop::IsOneADayShop(int) const
# range [0x08513082, 0x085130e7]
08513082 +0x00:  push   %ebp
08513083 +0x01:  mov    %esp,%ebp
08513085 +0x03:  sub    $0x28,%esp
08513088 +0x06:  mov    0x8(%ebp),%edx
0851308b +0x09:  lea    -0x10(%ebp),%eax
0851308e +0x0c:  lea    0xc(%ebp),%ecx
08513091 +0x0f:  mov    %ecx,0x8(%esp)
08513095 +0x13:  mov    %edx,0x4(%esp)
08513099 +0x17:  mov    %eax,(%esp)
0851309c +0x1a:  call   08519102 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5737>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5737
085130a1 +0x1f:  sub    $0x4,%esp
085130a4 +0x22:  mov    0x8(%ebp),%edx
085130a7 +0x25:  lea    -0xc(%ebp),%eax
085130aa +0x28:  mov    %edx,0x4(%esp)
085130ae +0x2c:  mov    %eax,(%esp)
085130b1 +0x2f:  call   0851912e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5763>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5763
085130b6 +0x34:  sub    $0x4,%esp
085130b9 +0x37:  lea    -0xc(%ebp),%eax
085130bc +0x3a:  mov    %eax,0x4(%esp)
085130c0 +0x3e:  lea    -0x10(%ebp),%eax
085130c3 +0x41:  mov    %eax,(%esp)
085130c6 +0x44:  call   08519154 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5789>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5789
085130cb +0x49:  test   %al,%al
085130cd +0x4b:  je     085130e0 <+0x5e>
085130cf +0x4d:  lea    -0x10(%ebp),%eax
085130d2 +0x50:  mov    %eax,(%esp)
085130d5 +0x53:  call   08519168 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x579d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x579d
085130da +0x58:  movzbl 0x48(%eax),%eax
085130de +0x5c:  jmp    085130e5 <+0x63>
085130e0 +0x5e:  mov    $0x0,%eax
085130e5 +0x63:  leave
085130e6 +0x64:  ret
085130e7 +0x65:  nop
```

## 反编译 C

```c
// CItemShop::IsOneADayShop @ 0x8513082

/* CItemShop::IsOneADayShop(int) const */

undefined1 CItemShop::IsOneADayShop(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,ItemShopScript>> local_14 [4];
  map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
  local_10 [12];
  
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  find((int *)local_14);
  std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,ItemShopScript>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,ItemShopScript>>::operator->(local_14);
    uVar2 = *(undefined1 *)(iVar3 + 0x48);
  }
  return uVar2;
}
```
