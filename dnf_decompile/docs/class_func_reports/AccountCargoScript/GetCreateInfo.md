# GetCreateInfo

`_ZN18AccountCargoScript13GetCreateInfoEv`

`AccountCargoScript::GetCreateInfo()`

| 类 | 地址 |
|---|---|
| `AccountCargoScript` | `0x088c8056` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c8056  _ZN18AccountCargoScript13GetCreateInfoEv
#           AccountCargoScript::GetCreateInfo()
# range [0x088c8056, 0x088c80b9]
088c8056 +0x00:  push   %ebp
088c8057 +0x01:  mov    %esp,%ebp
088c8059 +0x03:  sub    $0x28,%esp
088c805c +0x06:  mov    0x8(%ebp),%eax
088c805f +0x09:  lea    0x8(%eax),%edx
088c8062 +0x0c:  lea    -0x10(%ebp),%eax
088c8065 +0x0f:  mov    %edx,0x4(%esp)
088c8069 +0x13:  mov    %eax,(%esp)
088c806c +0x16:  call   088c82de <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0xca>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0xca
088c8071 +0x1b:  sub    $0x4,%esp
088c8074 +0x1e:  mov    0x8(%ebp),%eax
088c8077 +0x21:  lea    0x8(%eax),%edx
088c807a +0x24:  lea    -0xc(%ebp),%eax
088c807d +0x27:  mov    %edx,0x4(%esp)
088c8081 +0x2b:  mov    %eax,(%esp)
088c8084 +0x2e:  call   088c8304 <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0xf0>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0xf0
088c8089 +0x33:  sub    $0x4,%esp
088c808c +0x36:  lea    -0xc(%ebp),%eax
088c808f +0x39:  mov    %eax,0x4(%esp)
088c8093 +0x3d:  lea    -0x10(%ebp),%eax
088c8096 +0x40:  mov    %eax,(%esp)
088c8099 +0x43:  call   088c832a <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x116>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x116
088c809e +0x48:  test   %al,%al
088c80a0 +0x4a:  je     088c80b2 <+0x5c>
088c80a2 +0x4c:  lea    -0x10(%ebp),%eax
088c80a5 +0x4f:  mov    %eax,(%esp)
088c80a8 +0x52:  call   088c833e <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x12a>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x12a
088c80ad +0x57:  add    $0x4,%eax
088c80b0 +0x5a:  jmp    088c80b7 <+0x61>
088c80b2 +0x5c:  mov    $0x0,%eax
088c80b7 +0x61:  leave
088c80b8 +0x62:  ret
088c80b9 +0x63:  nop
```

## 反编译 C

```c
// AccountCargoScript::GetCreateInfo @ 0x88c8056

/* AccountCargoScript::GetCreateInfo() */

int AccountCargoScript::GetCreateInfo(void)

{
  char cVar1;
  int iVar2;
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_14 [4];
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_10 [12]
  ;
  
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::begin
            (local_14);
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```
