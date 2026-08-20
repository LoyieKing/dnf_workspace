# verifyNpc

`_ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE`

`SecretShopScript::verifyNpc(std::multimap<int, stDungeonNpc, std::less<int>, std::allocator<std::pair<int const, stDungeonNpc> > >&)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82804  _ZN16SecretShopScript9verifyNpcERSt8multimapIi12stDungeonNpcSt4lessIiESaISt4pairIKiS1_EEE
#           SecretShopScript::verifyNpc(std::multimap<int, stDungeonNpc, std::less<int>, std::allocator<std::pair<int const, stDungeonNpc> > >&)
# range [0x08a82804, 0x08a828f7]
08a82804 +0x00:  push   %ebp
08a82805 +0x01:  mov    %esp,%ebp
08a82807 +0x03:  sub    $0x38,%esp
08a8280a +0x06:  movl   $0x0,-0xc(%ebp)
08a82811 +0x0d:  lea    -0x14(%ebp),%eax
08a82814 +0x10:  mov    0xc(%ebp),%edx
08a82817 +0x13:  mov    %edx,0x4(%esp)
08a8281b +0x17:  mov    %eax,(%esp)
08a8281e +0x1a:  call   08a8372a <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x49c>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x49c
08a82823 +0x1f:  sub    $0x4,%esp
08a82826 +0x22:  jmp    08a828c7 <+0xc3>
08a8282b +0x27:  lea    -0x14(%ebp),%eax
08a8282e +0x2a:  mov    %eax,(%esp)
08a82831 +0x2d:  call   08a8378a <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4fc>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4fc
08a82836 +0x32:  mov    %eax,%edx
08a82838 +0x34:  lea    -0x1c(%ebp),%eax
08a8283b +0x37:  mov    %edx,0x8(%esp)
08a8283f +0x3b:  mov    0xc(%ebp),%edx
08a82842 +0x3e:  mov    %edx,0x4(%esp)
08a82846 +0x42:  mov    %eax,(%esp)
08a82849 +0x45:  call   08a83798 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x50a>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x50a
08a8284e +0x4a:  sub    $0x4,%esp
08a82851 +0x4d:  movl   $0x0,-0xc(%ebp)
08a82858 +0x54:  mov    -0x1c(%ebp),%eax
08a8285b +0x57:  mov    %eax,-0x20(%ebp)
08a8285e +0x5a:  jmp    08a8287c <+0x78>
08a82860 +0x5c:  lea    -0x20(%ebp),%eax
08a82863 +0x5f:  mov    %eax,(%esp)
08a82866 +0x62:  call   08a8378a <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4fc>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4fc
08a8286b +0x67:  mov    0xc(%eax),%eax
08a8286e +0x6a:  add    %eax,-0xc(%ebp)
08a82871 +0x6d:  lea    -0x20(%ebp),%eax
08a82874 +0x70:  mov    %eax,(%esp)
08a82877 +0x73:  call   08a837c4 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x536>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x536
08a8287c +0x78:  lea    -0x1c(%ebp),%eax
08a8287f +0x7b:  add    $0x4,%eax
08a82882 +0x7e:  mov    %eax,0x4(%esp)
08a82886 +0x82:  lea    -0x20(%ebp),%eax
08a82889 +0x85:  mov    %eax,(%esp)
08a8288c +0x88:  call   08a83776 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4e8>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4e8
08a82891 +0x8d:  test   %al,%al
08a82893 +0x8f:  jne    08a82860 <+0x5c>
08a82895 +0x91:  cmpl   $0x2710,-0xc(%ebp)
08a8289c +0x98:  je     08a828bc <+0xb8>
08a8289e +0x9a:  lea    -0x1c(%ebp),%eax
08a828a1 +0x9d:  mov    %eax,(%esp)
08a828a4 +0xa0:  call   08a8378a <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4fc>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4fc
08a828a9 +0xa5:  mov    0x4(%eax),%eax
08a828ac +0xa8:  mov    %eax,0x4(%esp)
08a828b0 +0xac:  movl   $"[SecretShop Error] NPC ratio is wrong!(index:%d)\n",(%esp)
08a828b7 +0xb3:  call   0807db60 <_init+0x458>
08a828bc +0xb8:  lea    -0x14(%ebp),%eax
08a828bf +0xbb:  mov    %eax,(%esp)
08a828c2 +0xbe:  call   08a837c4 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x536>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x536
08a828c7 +0xc3:  lea    -0x10(%ebp),%eax
08a828ca +0xc6:  mov    0xc(%ebp),%edx
08a828cd +0xc9:  mov    %edx,0x4(%esp)
08a828d1 +0xcd:  mov    %eax,(%esp)
08a828d4 +0xd0:  call   08a83750 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4c2>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4c2
08a828d9 +0xd5:  sub    $0x4,%esp
08a828dc +0xd8:  lea    -0x10(%ebp),%eax
08a828df +0xdb:  mov    %eax,0x4(%esp)
08a828e3 +0xdf:  lea    -0x14(%ebp),%eax
08a828e6 +0xe2:  mov    %eax,(%esp)
08a828e9 +0xe5:  call   08a83776 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x4e8>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x4e8
08a828ee +0xea:  test   %al,%al
08a828f0 +0xec:  jne    08a8282b <+0x27>
08a828f6 +0xf2:  leave
08a828f7 +0xf3:  ret
```

## 反编译 C

```c
// SecretShopScript::verifyNpc @ 0x8a82804

/* SecretShopScript::verifyNpc(std::multimap<int, stDungeonNpc, std::less<int>,
   std::allocator<std::pair<int const, stDungeonNpc> > >&) */

void SecretShopScript::verifyNpc(multimap *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  int local_20;
  _Rb_tree_iterator a_Stack_1c [4];
  multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
  local_18 [4];
  multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>::
  begin(local_18);
  while( true ) {
    std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    uVar2 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)local_18);
    std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>
    ::equal_range(&local_20);
    local_10 = 0;
    local_24 = local_20;
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_24,
                         a_Stack_1c);
      if (cVar1 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_24);
      local_10 = local_10 + *(int *)(iVar3 + 0xc);
      std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_24);
    }
    if (local_10 != 10000) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)&local_20);
      printf("[SecretShop Error] NPC ratio is wrong!(index:%d)\n",*(undefined4 *)(iVar3 + 4),uVar2);
    }
    std::_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,stDungeonNpc>> *)local_18);
  }
  return;
}
```
