# isApply

`_ZN22ServiceRestrictManager7isApplyEN16RestrictCategory4EnumE`

`ServiceRestrictManager::isApply(RestrictCategory::Enum)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e648  _ZN22ServiceRestrictManager7isApplyEN16RestrictCategory4EnumE
#           ServiceRestrictManager::isApply(RestrictCategory::Enum)
# range [0x0816e648, 0x0816e6b7]
0816e648 +0x00:  push   %ebp
0816e649 +0x01:  mov    %esp,%ebp
0816e64b +0x03:  sub    $0x28,%esp
0816e64e +0x06:  mov    0x8(%ebp),%edx
0816e651 +0x09:  lea    -0x10(%ebp),%eax
0816e654 +0x0c:  lea    0xc(%ebp),%ecx
0816e657 +0x0f:  mov    %ecx,0x8(%esp)
0816e65b +0x13:  mov    %edx,0x4(%esp)
0816e65f +0x17:  mov    %eax,(%esp)
0816e662 +0x1a:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816e667 +0x1f:  sub    $0x4,%esp
0816e66a +0x22:  mov    0x8(%ebp),%edx
0816e66d +0x25:  lea    -0xc(%ebp),%eax
0816e670 +0x28:  mov    %edx,0x4(%esp)
0816e674 +0x2c:  mov    %eax,(%esp)
0816e677 +0x2f:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816e67c +0x34:  sub    $0x4,%esp
0816e67f +0x37:  lea    -0xc(%ebp),%eax
0816e682 +0x3a:  mov    %eax,0x4(%esp)
0816e686 +0x3e:  lea    -0x10(%ebp),%eax
0816e689 +0x41:  mov    %eax,(%esp)
0816e68c +0x44:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816e691 +0x49:  test   %al,%al
0816e693 +0x4b:  je     0816e6b1 <+0x69>
0816e695 +0x4d:  lea    -0x10(%ebp),%eax
0816e698 +0x50:  mov    %eax,(%esp)
0816e69b +0x53:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816e6a0 +0x58:  mov    0x4(%eax),%eax
0816e6a3 +0x5b:  mov    (%eax),%edx
0816e6a5 +0x5d:  add    $0x10,%edx
0816e6a8 +0x60:  mov    (%edx),%edx
0816e6aa +0x62:  mov    %eax,(%esp)
0816e6ad +0x65:  call   *%edx
0816e6af +0x67:  jmp    0816e6b6 <+0x6e>
0816e6b1 +0x69:  mov    $0x1,%eax
0816e6b6 +0x6e:  leave
0816e6b7 +0x6f:  ret
```

## 反编译 C

```c
// ServiceRestrictManager::isApply @ 0x816e648

/* ServiceRestrictManager::isApply(RestrictCategory::Enum) */

undefined4 ServiceRestrictManager::isApply(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator *p_Var4;
  undefined1 *puVar5;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar5 = &stack0x00000008;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  p_Var4 = (_Rb_tree_iterator *)local_10;
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,p_Var4);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x10))(*(int **)(iVar2 + 4),p_Var4,puVar5);
  }
  return uVar3;
}
```
