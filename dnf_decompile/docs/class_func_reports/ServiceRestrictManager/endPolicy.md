# endPolicy

`_ZN22ServiceRestrictManager9endPolicyEN16RestrictCategory4EnumE`

`ServiceRestrictManager::endPolicy(RestrictCategory::Enum)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e5de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e5de  _ZN22ServiceRestrictManager9endPolicyEN16RestrictCategory4EnumE
#           ServiceRestrictManager::endPolicy(RestrictCategory::Enum)
# range [0x0816e5de, 0x0816e647]
0816e5de +0x00:  push   %ebp
0816e5df +0x01:  mov    %esp,%ebp
0816e5e1 +0x03:  sub    $0x28,%esp
0816e5e4 +0x06:  mov    0x8(%ebp),%edx
0816e5e7 +0x09:  lea    -0x10(%ebp),%eax
0816e5ea +0x0c:  lea    0xc(%ebp),%ecx
0816e5ed +0x0f:  mov    %ecx,0x8(%esp)
0816e5f1 +0x13:  mov    %edx,0x4(%esp)
0816e5f5 +0x17:  mov    %eax,(%esp)
0816e5f8 +0x1a:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816e5fd +0x1f:  sub    $0x4,%esp
0816e600 +0x22:  mov    0x8(%ebp),%edx
0816e603 +0x25:  lea    -0xc(%ebp),%eax
0816e606 +0x28:  mov    %edx,0x4(%esp)
0816e60a +0x2c:  mov    %eax,(%esp)
0816e60d +0x2f:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816e612 +0x34:  sub    $0x4,%esp
0816e615 +0x37:  lea    -0xc(%ebp),%eax
0816e618 +0x3a:  mov    %eax,0x4(%esp)
0816e61c +0x3e:  lea    -0x10(%ebp),%eax
0816e61f +0x41:  mov    %eax,(%esp)
0816e622 +0x44:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816e627 +0x49:  test   %al,%al
0816e629 +0x4b:  je     0816e645 <+0x67>
0816e62b +0x4d:  lea    -0x10(%ebp),%eax
0816e62e +0x50:  mov    %eax,(%esp)
0816e631 +0x53:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816e636 +0x58:  mov    0x4(%eax),%eax
0816e639 +0x5b:  mov    (%eax),%edx
0816e63b +0x5d:  add    $0xc,%edx
0816e63e +0x60:  mov    (%edx),%edx
0816e640 +0x62:  mov    %eax,(%esp)
0816e643 +0x65:  call   *%edx
0816e645 +0x67:  leave
0816e646 +0x68:  ret
0816e647 +0x69:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::endPolicy @ 0x816e5de

/* ServiceRestrictManager::endPolicy(RestrictCategory::Enum) */

void ServiceRestrictManager::endPolicy(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar4 = &stack0x00000008;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  p_Var3 = (_Rb_tree_iterator *)local_10;
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,p_Var3);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    (**(code **)(**(int **)(iVar2 + 4) + 0xc))(*(int **)(iVar2 + 4),p_Var3,puVar4);
  }
  return;
}
```
