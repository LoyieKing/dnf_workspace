# isRestricted

`_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi`

`ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e75e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e75e  _ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi
#           ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)
# range [0x0816e75e, 0x0816e7d5]
0816e75e +0x00:  push   %ebp
0816e75f +0x01:  mov    %esp,%ebp
0816e761 +0x03:  sub    $0x28,%esp
0816e764 +0x06:  mov    0x8(%ebp),%edx
0816e767 +0x09:  lea    -0x10(%ebp),%eax
0816e76a +0x0c:  lea    0xc(%ebp),%ecx
0816e76d +0x0f:  mov    %ecx,0x8(%esp)
0816e771 +0x13:  mov    %edx,0x4(%esp)
0816e775 +0x17:  mov    %eax,(%esp)
0816e778 +0x1a:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816e77d +0x1f:  sub    $0x4,%esp
0816e780 +0x22:  mov    0x8(%ebp),%edx
0816e783 +0x25:  lea    -0xc(%ebp),%eax
0816e786 +0x28:  mov    %edx,0x4(%esp)
0816e78a +0x2c:  mov    %eax,(%esp)
0816e78d +0x2f:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816e792 +0x34:  sub    $0x4,%esp
0816e795 +0x37:  lea    -0xc(%ebp),%eax
0816e798 +0x3a:  mov    %eax,0x4(%esp)
0816e79c +0x3e:  lea    -0x10(%ebp),%eax
0816e79f +0x41:  mov    %eax,(%esp)
0816e7a2 +0x44:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816e7a7 +0x49:  test   %al,%al
0816e7a9 +0x4b:  je     0816e7ce <+0x70>
0816e7ab +0x4d:  lea    -0x10(%ebp),%eax
0816e7ae +0x50:  mov    %eax,(%esp)
0816e7b1 +0x53:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816e7b6 +0x58:  mov    0x4(%eax),%eax
0816e7b9 +0x5b:  mov    (%eax),%edx
0816e7bb +0x5d:  add    $0x14,%edx
0816e7be +0x60:  mov    (%edx),%ecx
0816e7c0 +0x62:  mov    0x10(%ebp),%edx
0816e7c3 +0x65:  mov    %edx,0x4(%esp)
0816e7c7 +0x69:  mov    %eax,(%esp)
0816e7ca +0x6c:  call   *%ecx
0816e7cc +0x6e:  jmp    0816e7d3 <+0x75>
0816e7ce +0x70:  mov    $0x1,%eax
0816e7d3 +0x75:  leave
0816e7d4 +0x76:  ret
0816e7d5 +0x77:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::isRestricted @ 0x816e75e

/* ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int) */

undefined4 __thiscall
ServiceRestrictManager::isRestricted(undefined4 this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar4 = (undefined1 *)&param_2;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))(*(int **)(iVar2 + 4),param_3,puVar4);
  }
  return uVar3;
}
```
