# ~CSecretShop

`_ZN10secretshop11CSecretShopD1Ev`

`secretshop::CSecretShop::~CSecretShop()`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085faac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085faac4  _ZN10secretshop11CSecretShopD1Ev
#           secretshop::CSecretShop::~CSecretShop()
# range [0x085faac4, 0x085fabab]
085faac4 +0x00:  push   %ebp
085faac5 +0x01:  mov    %esp,%ebp
085faac7 +0x03:  push   %esi
085faac8 +0x04:  push   %ebx
085faac9 +0x05:  sub    $0x20,%esp
085faacc +0x08:  mov    0x8(%ebp),%eax
085faacf +0x0b:  mov    0x18(%eax),%eax
085faad2 +0x0e:  test   %eax,%eax
085faad4 +0x10:  je     085faae4 <+0x20>
085faad6 +0x12:  mov    0x8(%ebp),%eax
085faad9 +0x15:  mov    0x18(%eax),%eax
085faadc +0x18:  mov    %eax,(%esp)
085faadf +0x1b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085faae4 +0x20:  mov    0x8(%ebp),%edx
085faae7 +0x23:  lea    -0x10(%ebp),%eax
085faaea +0x26:  mov    %edx,0x4(%esp)
085faaee +0x2a:  mov    %eax,(%esp)
085faaf1 +0x2d:  call   085fc214 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x3a6>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x3a6
085faaf6 +0x32:  sub    $0x4,%esp
085faaf9 +0x35:  jmp    085fab1c <+0x58>
085faafb +0x37:  lea    -0x10(%ebp),%eax
085faafe +0x3a:  mov    %eax,(%esp)
085fab01 +0x3d:  call   085fc274 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x406>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x406
085fab06 +0x42:  mov    0x4(%eax),%eax
085fab09 +0x45:  mov    %eax,(%esp)
085fab0c +0x48:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085fab11 +0x4d:  lea    -0x10(%ebp),%eax
085fab14 +0x50:  mov    %eax,(%esp)
085fab17 +0x53:  call   085fc282 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x414>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x414
085fab1c +0x58:  mov    0x8(%ebp),%edx
085fab1f +0x5b:  lea    -0xc(%ebp),%eax
085fab22 +0x5e:  mov    %edx,0x4(%esp)
085fab26 +0x62:  mov    %eax,(%esp)
085fab29 +0x65:  call   085fc23a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x3cc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x3cc
085fab2e +0x6a:  sub    $0x4,%esp
085fab31 +0x6d:  lea    -0xc(%ebp),%eax
085fab34 +0x70:  mov    %eax,0x4(%esp)
085fab38 +0x74:  lea    -0x10(%ebp),%eax
085fab3b +0x77:  mov    %eax,(%esp)
085fab3e +0x7a:  call   085fc260 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x3f2>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x3f2
085fab43 +0x7f:  test   %al,%al
085fab45 +0x81:  jne    085faafb <+0x37>
085fab47 +0x83:  mov    0x8(%ebp),%eax
085fab4a +0x86:  mov    %eax,(%esp)
085fab4d +0x89:  call   085fc2a0 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x432>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x432
085fab52 +0x8e:  jmp    085fab6c <+0xa8>
085fab54 +0x90:  mov    %edx,%ebx
085fab56 +0x92:  mov    %eax,%esi
085fab58 +0x94:  mov    0x8(%ebp),%eax
085fab5b +0x97:  add    $0x1c,%eax
085fab5e +0x9a:  mov    %eax,(%esp)
085fab61 +0x9d:  call   085fbf2c <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xbe>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xbe
085fab66 +0xa2:  mov    %esi,%eax
085fab68 +0xa4:  mov    %ebx,%edx
085fab6a +0xa6:  jmp    085fab7c <+0xb8>
085fab6c +0xa8:  mov    0x8(%ebp),%eax
085fab6f +0xab:  add    $0x1c,%eax
085fab72 +0xae:  mov    %eax,(%esp)
085fab75 +0xb1:  call   085fbf2c <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xbe>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xbe
085fab7a +0xb6:  jmp    085fab97 <+0xd3>
085fab7c +0xb8:  mov    %edx,%ebx
085fab7e +0xba:  mov    %eax,%esi
085fab80 +0xbc:  mov    0x8(%ebp),%eax
085fab83 +0xbf:  mov    %eax,(%esp)
085fab86 +0xc2:  call   085fc020 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x1b2>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x1b2
085fab8b +0xc7:  mov    %esi,%eax
085fab8d +0xc9:  mov    %ebx,%edx
085fab8f +0xcb:  mov    %eax,(%esp)
085fab92 +0xce:  call   08ae3750 <_Unwind_Resume>
085fab97 +0xd3:  mov    0x8(%ebp),%eax
085fab9a +0xd6:  mov    %eax,(%esp)
085fab9d +0xd9:  call   085fc020 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x1b2>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x1b2
085faba2 +0xde:  lea    -0x8(%ebp),%esp
085faba5 +0xe1:  add    $0x0,%esp
085faba8 +0xe4:  pop    %ebx
085faba9 +0xe5:  pop    %esi
085fabaa +0xe6:  pop    %ebp
085fabab +0xe7:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::~CSecretShop @ 0x85faac4

/* secretshop::CSecretShop::~CSecretShop() */

void __thiscall secretshop::CSecretShop::~CSecretShop(CSecretShop *this)

{
  char cVar1;
  int iVar2;
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  local_14 [4];
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  local_10 [4];
  
  if (*(int *)(this + 0x18) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
                    /* try { // try from 085faaf1 to 085fab51 has its CatchHandler @ 085fab54 */
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> *)
                       local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator->
                      ((_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> *)
                       local_14);
    operator_delete(*(void **)(iVar2 + 4));
    std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator++
              ((_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> *)local_14);
  }
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::clear((map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
           *)this);
                    /* try { // try from 085fab75 to 085fab79 has its CatchHandler @ 085fab7c */
  CSecretShopStatistic::~CSecretShopStatistic((CSecretShopStatistic *)(this + 0x1c));
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::~map((map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
          *)this);
  return;
}
```
