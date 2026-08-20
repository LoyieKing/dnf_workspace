# GetRule

`_ZN10secretshop11CSecretShop7GetRuleE8eBuyRule`

`secretshop::CSecretShop::GetRule(eBuyRule)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fb27c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb27c  _ZN10secretshop11CSecretShop7GetRuleE8eBuyRule
#           secretshop::CSecretShop::GetRule(eBuyRule)
# range [0x085fb27c, 0x085fb2df]
085fb27c +0x00:  push   %ebp
085fb27d +0x01:  mov    %esp,%ebp
085fb27f +0x03:  sub    $0x28,%esp
085fb282 +0x06:  mov    0x8(%ebp),%edx
085fb285 +0x09:  lea    -0x10(%ebp),%eax
085fb288 +0x0c:  lea    0xc(%ebp),%ecx
085fb28b +0x0f:  mov    %ecx,0x8(%esp)
085fb28f +0x13:  mov    %edx,0x4(%esp)
085fb293 +0x17:  mov    %eax,(%esp)
085fb296 +0x1a:  call   085fc34a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x4dc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x4dc
085fb29b +0x1f:  sub    $0x4,%esp
085fb29e +0x22:  mov    0x8(%ebp),%edx
085fb2a1 +0x25:  lea    -0xc(%ebp),%eax
085fb2a4 +0x28:  mov    %edx,0x4(%esp)
085fb2a8 +0x2c:  mov    %eax,(%esp)
085fb2ab +0x2f:  call   085fc23a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x3cc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x3cc
085fb2b0 +0x34:  sub    $0x4,%esp
085fb2b3 +0x37:  lea    -0xc(%ebp),%eax
085fb2b6 +0x3a:  mov    %eax,0x4(%esp)
085fb2ba +0x3e:  lea    -0x10(%ebp),%eax
085fb2bd +0x41:  mov    %eax,(%esp)
085fb2c0 +0x44:  call   085fc260 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x3f2>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x3f2
085fb2c5 +0x49:  test   %al,%al
085fb2c7 +0x4b:  je     085fb2d9 <+0x5d>
085fb2c9 +0x4d:  lea    -0x10(%ebp),%eax
085fb2cc +0x50:  mov    %eax,(%esp)
085fb2cf +0x53:  call   085fc274 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x406>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x406
085fb2d4 +0x58:  mov    0x4(%eax),%eax
085fb2d7 +0x5b:  jmp    085fb2de <+0x62>
085fb2d9 +0x5d:  mov    $0x0,%eax
085fb2de +0x62:  leave
085fb2df +0x63:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::GetRule @ 0x85fb27c

/* secretshop::CSecretShop::GetRule(eBuyRule) */

undefined4 secretshop::CSecretShop::GetRule(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> local_14 [4];
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  local_10 [12];
  
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::find(local_14);
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
