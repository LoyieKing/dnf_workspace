# GetNextUpgradeInfo

`_ZN18AccountCargoScript18GetNextUpgradeInfoEi`

`AccountCargoScript::GetNextUpgradeInfo(int)`

| 类 | 地址 |
|---|---|
| `AccountCargoScript` | `0x088c8124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c8124  _ZN18AccountCargoScript18GetNextUpgradeInfoEi
#           AccountCargoScript::GetNextUpgradeInfo(int)
# range [0x088c8124, 0x088c81d3]
088c8124 +0x00:  push   %ebp
088c8125 +0x01:  mov    %esp,%ebp
088c8127 +0x03:  sub    $0x28,%esp
088c812a +0x06:  mov    0x8(%ebp),%eax
088c812d +0x09:  lea    0x8(%eax),%ecx
088c8130 +0x0c:  lea    -0x14(%ebp),%eax
088c8133 +0x0f:  lea    0xc(%ebp),%edx
088c8136 +0x12:  mov    %edx,0x8(%esp)
088c813a +0x16:  mov    %ecx,0x4(%esp)
088c813e +0x1a:  mov    %eax,(%esp)
088c8141 +0x1d:  call   088c834c <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x138>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x138
088c8146 +0x22:  sub    $0x4,%esp
088c8149 +0x25:  mov    -0x14(%ebp),%eax
088c814c +0x28:  mov    %eax,-0x18(%ebp)
088c814f +0x2b:  mov    0x8(%ebp),%eax
088c8152 +0x2e:  lea    0x8(%eax),%edx
088c8155 +0x31:  lea    -0x10(%ebp),%eax
088c8158 +0x34:  mov    %edx,0x4(%esp)
088c815c +0x38:  mov    %eax,(%esp)
088c815f +0x3b:  call   088c8304 <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0xf0>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0xf0
088c8164 +0x40:  sub    $0x4,%esp
088c8167 +0x43:  lea    -0x10(%ebp),%eax
088c816a +0x46:  mov    %eax,0x4(%esp)
088c816e +0x4a:  lea    -0x14(%ebp),%eax
088c8171 +0x4d:  mov    %eax,(%esp)
088c8174 +0x50:  call   088c832a <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x116>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x116
088c8179 +0x55:  test   %al,%al
088c817b +0x57:  je     088c81cd <+0xa9>
088c817d +0x59:  lea    -0x18(%ebp),%eax
088c8180 +0x5c:  mov    %eax,(%esp)
088c8183 +0x5f:  call   088c8378 <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x164>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x164
088c8188 +0x64:  mov    0x8(%ebp),%eax
088c818b +0x67:  lea    0x8(%eax),%edx
088c818e +0x6a:  lea    -0xc(%ebp),%eax
088c8191 +0x6d:  mov    %edx,0x4(%esp)
088c8195 +0x71:  mov    %eax,(%esp)
088c8198 +0x74:  call   088c8304 <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0xf0>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0xf0
088c819d +0x79:  sub    $0x4,%esp
088c81a0 +0x7c:  lea    -0xc(%ebp),%eax
088c81a3 +0x7f:  mov    %eax,0x4(%esp)
088c81a7 +0x83:  lea    -0x18(%ebp),%eax
088c81aa +0x86:  mov    %eax,(%esp)
088c81ad +0x89:  call   088c832a <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x116>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x116
088c81b2 +0x8e:  test   %al,%al
088c81b4 +0x90:  je     088c81c6 <+0xa2>
088c81b6 +0x92:  lea    -0x18(%ebp),%eax
088c81b9 +0x95:  mov    %eax,(%esp)
088c81bc +0x98:  call   088c833e <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x12a>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x12a
088c81c1 +0x9d:  add    $0x4,%eax
088c81c4 +0xa0:  jmp    088c81d2 <+0xae>
088c81c6 +0xa2:  mov    $0x0,%eax
088c81cb +0xa7:  jmp    088c81d2 <+0xae>
088c81cd +0xa9:  mov    $0x0,%eax
088c81d2 +0xae:  leave
088c81d3 +0xaf:  ret
```

## 反编译 C

```c
// AccountCargoScript::GetNextUpgradeInfo @ 0x88c8124

/* AccountCargoScript::GetNextUpgradeInfo(int) */

int AccountCargoScript::GetNextUpgradeInfo(int param_1)

{
  char cVar1;
  int iVar2;
  int local_1c;
  int local_18;
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_14 [4];
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_10 [12]
  ;
  
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::find
            (&local_18);
  local_1c = local_18;
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_1c);
    std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_1c,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_1c);
      iVar2 = iVar2 + 4;
    }
  }
  return iVar2;
}
```
