# GetDomainRate

`_ZN16SecretShopScript13GetDomainRateER14stDungeonSales`

`SecretShopScript::GetDomainRate(stDungeonSales&)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82ff6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82ff6  _ZN16SecretShopScript13GetDomainRateER14stDungeonSales
#           SecretShopScript::GetDomainRate(stDungeonSales&)
# range [0x08a82ff6, 0x08a8306b]
08a82ff6 +0x00:  push   %ebp
08a82ff7 +0x01:  mov    %esp,%ebp
08a82ff9 +0x03:  sub    $0x28,%esp
08a82ffc +0x06:  movl   $0x0,-0xc(%ebp)
08a83003 +0x0d:  mov    0xc(%ebp),%eax
08a83006 +0x10:  lea    0x8(%eax),%edx
08a83009 +0x13:  lea    -0x14(%ebp),%eax
08a8300c +0x16:  mov    %edx,0x4(%esp)
08a83010 +0x1a:  mov    %eax,(%esp)
08a83013 +0x1d:  call   08a83952 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6c4>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6c4
08a83018 +0x22:  sub    $0x4,%esp
08a8301b +0x25:  jmp    08a83039 <+0x43>
08a8301d +0x27:  lea    -0x14(%ebp),%eax
08a83020 +0x2a:  mov    %eax,(%esp)
08a83023 +0x2d:  call   08a839b2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x724>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x724
08a83028 +0x32:  mov    0x18(%eax),%eax
08a8302b +0x35:  add    %eax,-0xc(%ebp)
08a8302e +0x38:  lea    -0x14(%ebp),%eax
08a83031 +0x3b:  mov    %eax,(%esp)
08a83034 +0x3e:  call   08a839c0 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x732>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x732
08a83039 +0x43:  mov    0xc(%ebp),%eax
08a8303c +0x46:  lea    0x8(%eax),%edx
08a8303f +0x49:  lea    -0x10(%ebp),%eax
08a83042 +0x4c:  mov    %edx,0x4(%esp)
08a83046 +0x50:  mov    %eax,(%esp)
08a83049 +0x53:  call   08a83978 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x6ea>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x6ea
08a8304e +0x58:  sub    $0x4,%esp
08a83051 +0x5b:  lea    -0x10(%ebp),%eax
08a83054 +0x5e:  mov    %eax,0x4(%esp)
08a83058 +0x62:  lea    -0x14(%ebp),%eax
08a8305b +0x65:  mov    %eax,(%esp)
08a8305e +0x68:  call   08a8399e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x710>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x710
08a83063 +0x6d:  test   %al,%al
08a83065 +0x6f:  jne    08a8301d <+0x27>
08a83067 +0x71:  mov    -0xc(%ebp),%eax
08a8306a +0x74:  leave
08a8306b +0x75:  ret
```

## 反编译 C

```c
// SecretShopScript::GetDomainRate @ 0x8a82ff6

/* SecretShopScript::GetDomainRate(stDungeonSales&) */

int SecretShopScript::GetDomainRate(stDungeonSales *param_1)

{
  char cVar1;
  int iVar2;
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_18 [4];
  map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::begin
            (local_18);
  while( true ) {
    std::map<int,stSaleInfo,std::less<int>,std::allocator<std::pair<int_const,stSaleInfo>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_18);
    local_10 = local_10 + *(int *)(iVar2 + 0x18);
    std::_Rb_tree_iterator<std::pair<int_const,stSaleInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,stSaleInfo>> *)local_18);
  }
  return local_10;
}
```
