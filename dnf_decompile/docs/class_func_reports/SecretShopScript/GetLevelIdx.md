# GetLevelIdx

`_ZN16SecretShopScript11GetLevelIdxEi`

`SecretShopScript::GetLevelIdx(int)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a830e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a830e2  _ZN16SecretShopScript11GetLevelIdxEi
#           SecretShopScript::GetLevelIdx(int)
# range [0x08a830e2, 0x08a83187]
08a830e2 +0x00:  push   %ebp
08a830e3 +0x01:  mov    %esp,%ebp
08a830e5 +0x03:  sub    $0x28,%esp
08a830e8 +0x06:  mov    0x8(%ebp),%eax
08a830eb +0x09:  lea    0x30(%eax),%edx
08a830ee +0x0c:  lea    -0x10(%ebp),%eax
08a830f1 +0x0f:  mov    %edx,0x4(%esp)
08a830f5 +0x13:  mov    %eax,(%esp)
08a830f8 +0x16:  call   08a83a32 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x7a4>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x7a4
08a830fd +0x1b:  sub    $0x4,%esp
08a83100 +0x1e:  jmp    08a83152 <+0x70>
08a83102 +0x20:  lea    -0x10(%ebp),%eax
08a83105 +0x23:  mov    %eax,(%esp)
08a83108 +0x26:  call   08a83a92 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x804>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x804
08a8310d +0x2b:  mov    0x4(%eax),%eax
08a83110 +0x2e:  cmp    0xc(%ebp),%eax
08a83113 +0x31:  jg     08a8312f <+0x4d>
08a83115 +0x33:  lea    -0x10(%ebp),%eax
08a83118 +0x36:  mov    %eax,(%esp)
08a8311b +0x39:  call   08a83a92 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x804>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x804
08a83120 +0x3e:  mov    0x8(%eax),%eax
08a83123 +0x41:  cmp    0xc(%ebp),%eax
08a83126 +0x44:  jl     08a8312f <+0x4d>
08a83128 +0x46:  mov    $0x1,%eax
08a8312d +0x4b:  jmp    08a83134 <+0x52>
08a8312f +0x4d:  mov    $0x0,%eax
08a83134 +0x52:  test   %al,%al
08a83136 +0x54:  je     08a83147 <+0x65>
08a83138 +0x56:  lea    -0x10(%ebp),%eax
08a8313b +0x59:  mov    %eax,(%esp)
08a8313e +0x5c:  call   08a83a92 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x804>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x804
08a83143 +0x61:  mov    (%eax),%eax
08a83145 +0x63:  jmp    08a83185 <+0xa3>
08a83147 +0x65:  lea    -0x10(%ebp),%eax
08a8314a +0x68:  mov    %eax,(%esp)
08a8314d +0x6b:  call   08a83aa0 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x812>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x812
08a83152 +0x70:  mov    0x8(%ebp),%eax
08a83155 +0x73:  lea    0x30(%eax),%edx
08a83158 +0x76:  lea    -0xc(%ebp),%eax
08a8315b +0x79:  mov    %edx,0x4(%esp)
08a8315f +0x7d:  mov    %eax,(%esp)
08a83162 +0x80:  call   08a83a58 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x7ca>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x7ca
08a83167 +0x85:  sub    $0x4,%esp
08a8316a +0x88:  lea    -0xc(%ebp),%eax
08a8316d +0x8b:  mov    %eax,0x4(%esp)
08a83171 +0x8f:  lea    -0x10(%ebp),%eax
08a83174 +0x92:  mov    %eax,(%esp)
08a83177 +0x95:  call   08a83a7e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x7f0>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x7f0
08a8317c +0x9a:  test   %al,%al
08a8317e +0x9c:  jne    08a83102 <+0x20>
08a83180 +0x9e:  mov    $0x0,%eax
08a83185 +0xa3:  leave
08a83186 +0xa4:  ret
08a83187 +0xa5:  nop
```

## 反编译 C

```c
// SecretShopScript::GetLevelIdx @ 0x8a830e2

/* SecretShopScript::GetLevelIdx(int) */

undefined4 __thiscall SecretShopScript::GetLevelIdx(SecretShopScript *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>> local_14 [4];
  set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>> local_10 [12];
  
  std::set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>>::begin(local_14)
  ;
  while( true ) {
    std::set<stLevelSection,std::less<stLevelSection>,std::allocator<stLevelSection>>::end(local_10)
    ;
    cVar2 = std::_Rb_tree_const_iterator<stLevelSection>::operator!=
                      ((_Rb_tree_const_iterator<stLevelSection> *)local_14,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = std::_Rb_tree_const_iterator<stLevelSection>::operator*
                      ((_Rb_tree_const_iterator<stLevelSection> *)local_14);
    if ((param_1 < *(int *)(iVar3 + 4)) ||
       (iVar3 = std::_Rb_tree_const_iterator<stLevelSection>::operator*
                          ((_Rb_tree_const_iterator<stLevelSection> *)local_14),
       *(int *)(iVar3 + 8) < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    std::_Rb_tree_const_iterator<stLevelSection>::operator++
              ((_Rb_tree_const_iterator<stLevelSection> *)local_14);
  }
  puVar4 = (undefined4 *)
           std::_Rb_tree_const_iterator<stLevelSection>::operator*
                     ((_Rb_tree_const_iterator<stLevelSection> *)local_14);
  return *puVar4;
}
```
