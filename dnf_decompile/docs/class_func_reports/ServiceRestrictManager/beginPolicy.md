# beginPolicy

`_ZN22ServiceRestrictManager11beginPolicyEN16RestrictCategory4EnumERKSs`

`ServiceRestrictManager::beginPolicy(RestrictCategory::Enum, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e54a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e54a  _ZN22ServiceRestrictManager11beginPolicyEN16RestrictCategory4EnumERKSs
#           ServiceRestrictManager::beginPolicy(RestrictCategory::Enum, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0816e54a, 0x0816e5dd]
0816e54a +0x00:  push   %ebp
0816e54b +0x01:  mov    %esp,%ebp
0816e54d +0x03:  sub    $0x28,%esp
0816e550 +0x06:  mov    0x8(%ebp),%edx
0816e553 +0x09:  lea    -0x10(%ebp),%eax
0816e556 +0x0c:  lea    0xc(%ebp),%ecx
0816e559 +0x0f:  mov    %ecx,0x8(%esp)
0816e55d +0x13:  mov    %edx,0x4(%esp)
0816e561 +0x17:  mov    %eax,(%esp)
0816e564 +0x1a:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816e569 +0x1f:  sub    $0x4,%esp
0816e56c +0x22:  mov    0x8(%ebp),%edx
0816e56f +0x25:  lea    -0xc(%ebp),%eax
0816e572 +0x28:  mov    %edx,0x4(%esp)
0816e576 +0x2c:  mov    %eax,(%esp)
0816e579 +0x2f:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816e57e +0x34:  sub    $0x4,%esp
0816e581 +0x37:  lea    -0xc(%ebp),%eax
0816e584 +0x3a:  mov    %eax,0x4(%esp)
0816e588 +0x3e:  lea    -0x10(%ebp),%eax
0816e58b +0x41:  mov    %eax,(%esp)
0816e58e +0x44:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816e593 +0x49:  test   %al,%al
0816e595 +0x4b:  je     0816e5b8 <+0x6e>
0816e597 +0x4d:  lea    -0x10(%ebp),%eax
0816e59a +0x50:  mov    %eax,(%esp)
0816e59d +0x53:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816e5a2 +0x58:  mov    0x4(%eax),%eax
0816e5a5 +0x5b:  mov    (%eax),%edx
0816e5a7 +0x5d:  add    $0x8,%edx
0816e5aa +0x60:  mov    (%edx),%ecx
0816e5ac +0x62:  mov    0x10(%ebp),%edx
0816e5af +0x65:  mov    %edx,0x4(%esp)
0816e5b3 +0x69:  mov    %eax,(%esp)
0816e5b6 +0x6c:  call   *%ecx
0816e5b8 +0x6e:  mov    0xc(%ebp),%eax
0816e5bb +0x71:  mov    %eax,0x4(%esp)
0816e5bf +0x75:  mov    0x8(%ebp),%eax
0816e5c2 +0x78:  mov    %eax,(%esp)
0816e5c5 +0x7b:  call   0816ea6a <_ZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumE>  ; ServiceRestrictManager::printPolicy(RestrictCategory::Enum)
0816e5ca +0x80:  mov    0xc(%ebp),%eax
0816e5cd +0x83:  mov    %eax,0x4(%esp)
0816e5d1 +0x87:  mov    0x8(%ebp),%eax
0816e5d4 +0x8a:  mov    %eax,(%esp)
0816e5d7 +0x8d:  call   0816eb62 <_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE>  ; ServiceRestrictManager::updatePolicy(RestrictCategory::Enum)
0816e5dc +0x92:  leave
0816e5dd +0x93:  ret
```

## 反编译 C

```c
// ServiceRestrictManager::beginPolicy @ 0x816e54a

/* ServiceRestrictManager::beginPolicy(RestrictCategory::Enum, std::string const&) */

void __thiscall
ServiceRestrictManager::beginPolicy
          (ServiceRestrictManager *this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  puVar3 = &param_2;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_14);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_14);
    (**(code **)(**(int **)(iVar2 + 4) + 8))(*(int **)(iVar2 + 4),param_3,puVar3);
  }
  printPolicy(this,param_2);
  updatePolicy(this,param_2);
  return;
}
```
