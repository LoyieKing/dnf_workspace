# GetCurrUpgradeInfo

`_ZN18AccountCargoScript18GetCurrUpgradeInfoEi`

`AccountCargoScript::GetCurrUpgradeInfo(int)`

| 类 | 地址 |
|---|---|
| `AccountCargoScript` | `0x088c80ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c80ba  _ZN18AccountCargoScript18GetCurrUpgradeInfoEi
#           AccountCargoScript::GetCurrUpgradeInfo(int)
# range [0x088c80ba, 0x088c8123]
088c80ba +0x00:  push   %ebp
088c80bb +0x01:  mov    %esp,%ebp
088c80bd +0x03:  sub    $0x28,%esp
088c80c0 +0x06:  mov    0x8(%ebp),%eax
088c80c3 +0x09:  lea    0x8(%eax),%ecx
088c80c6 +0x0c:  lea    -0x10(%ebp),%eax
088c80c9 +0x0f:  lea    0xc(%ebp),%edx
088c80cc +0x12:  mov    %edx,0x8(%esp)
088c80d0 +0x16:  mov    %ecx,0x4(%esp)
088c80d4 +0x1a:  mov    %eax,(%esp)
088c80d7 +0x1d:  call   088c834c <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x138>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x138
088c80dc +0x22:  sub    $0x4,%esp
088c80df +0x25:  mov    0x8(%ebp),%eax
088c80e2 +0x28:  lea    0x8(%eax),%edx
088c80e5 +0x2b:  lea    -0xc(%ebp),%eax
088c80e8 +0x2e:  mov    %edx,0x4(%esp)
088c80ec +0x32:  mov    %eax,(%esp)
088c80ef +0x35:  call   088c8304 <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0xf0>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0xf0
088c80f4 +0x3a:  sub    $0x4,%esp
088c80f7 +0x3d:  lea    -0xc(%ebp),%eax
088c80fa +0x40:  mov    %eax,0x4(%esp)
088c80fe +0x44:  lea    -0x10(%ebp),%eax
088c8101 +0x47:  mov    %eax,(%esp)
088c8104 +0x4a:  call   088c832a <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x116>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x116
088c8109 +0x4f:  test   %al,%al
088c810b +0x51:  je     088c811d <+0x63>
088c810d +0x53:  lea    -0x10(%ebp),%eax
088c8110 +0x56:  mov    %eax,(%esp)
088c8113 +0x59:  call   088c833e <_GLOBAL__I__Z24importAccountCargoScriptP18AccountCargoScriptPKc+0x12a>  ; global constructors keyed to importAccountCargoScript(AccountCargoScript*, char const*)+0x12a
088c8118 +0x5e:  add    $0x4,%eax
088c811b +0x61:  jmp    088c8122 <+0x68>
088c811d +0x63:  mov    $0x0,%eax
088c8122 +0x68:  leave
088c8123 +0x69:  ret
```

## 反编译 C

```c
// AccountCargoScript::GetCurrUpgradeInfo @ 0x88c80ba

/* AccountCargoScript::GetCurrUpgradeInfo(int) */

int AccountCargoScript::GetCurrUpgradeInfo(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> local_14 [4];
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_10 [12]
  ;
  
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::find
            ((int *)local_14);
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator->(local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```
