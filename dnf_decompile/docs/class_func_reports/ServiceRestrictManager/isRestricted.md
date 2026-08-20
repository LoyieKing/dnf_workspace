# isRestricted

`_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi`

`ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e6b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e6b8  _ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi
#           ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
# range [0x0816e6b8, 0x0816e75d]
0816e6b8 +0x00:  push   %ebp
0816e6b9 +0x01:  mov    %esp,%ebp
0816e6bb +0x03:  sub    $0x28,%esp
0816e6be +0x06:  cmpl   $0x0,0xc(%ebp)
0816e6c2 +0x0a:  jne    0816e6ce <+0x16>
0816e6c4 +0x0c:  mov    $0x0,%eax
0816e6c9 +0x11:  jmp    0816e75b <+0xa3>
0816e6ce +0x16:  mov    0xc(%ebp),%eax
0816e6d1 +0x19:  mov    %eax,(%esp)
0816e6d4 +0x1c:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
0816e6d9 +0x21:  mov    %eax,(%esp)
0816e6dc +0x24:  call   08173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>  ; Taiwan::GarenaAuthData::getMobileAuth()
0816e6e1 +0x29:  test   %al,%al
0816e6e3 +0x2b:  je     0816e6ec <+0x34>
0816e6e5 +0x2d:  mov    $0x0,%eax
0816e6ea +0x32:  jmp    0816e75b <+0xa3>
0816e6ec +0x34:  mov    0x8(%ebp),%edx
0816e6ef +0x37:  lea    -0x10(%ebp),%eax
0816e6f2 +0x3a:  lea    0x10(%ebp),%ecx
0816e6f5 +0x3d:  mov    %ecx,0x8(%esp)
0816e6f9 +0x41:  mov    %edx,0x4(%esp)
0816e6fd +0x45:  mov    %eax,(%esp)
0816e700 +0x48:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816e705 +0x4d:  sub    $0x4,%esp
0816e708 +0x50:  mov    0x8(%ebp),%edx
0816e70b +0x53:  lea    -0xc(%ebp),%eax
0816e70e +0x56:  mov    %edx,0x4(%esp)
0816e712 +0x5a:  mov    %eax,(%esp)
0816e715 +0x5d:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816e71a +0x62:  sub    $0x4,%esp
0816e71d +0x65:  lea    -0xc(%ebp),%eax
0816e720 +0x68:  mov    %eax,0x4(%esp)
0816e724 +0x6c:  lea    -0x10(%ebp),%eax
0816e727 +0x6f:  mov    %eax,(%esp)
0816e72a +0x72:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816e72f +0x77:  test   %al,%al
0816e731 +0x79:  je     0816e756 <+0x9e>
0816e733 +0x7b:  lea    -0x10(%ebp),%eax
0816e736 +0x7e:  mov    %eax,(%esp)
0816e739 +0x81:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816e73e +0x86:  mov    0x4(%eax),%eax
0816e741 +0x89:  mov    (%eax),%edx
0816e743 +0x8b:  add    $0x14,%edx
0816e746 +0x8e:  mov    (%edx),%ecx
0816e748 +0x90:  mov    0x14(%ebp),%edx
0816e74b +0x93:  mov    %edx,0x4(%esp)
0816e74f +0x97:  mov    %eax,(%esp)
0816e752 +0x9a:  call   *%ecx
0816e754 +0x9c:  jmp    0816e75b <+0xa3>
0816e756 +0x9e:  mov    $0x1,%eax
0816e75b +0xa3:  leave
0816e75c +0xa4:  ret
0816e75d +0xa5:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::isRestricted @ 0x816e6b8

/* ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int) */

undefined4 __thiscall
ServiceRestrictManager::isRestricted
          (undefined4 this,CUser *param_1,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  GarenaAuthData *this_00;
  int iVar3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_14 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_10 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    this_00 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
    cVar1 = Taiwan::GarenaAuthData::getMobileAuth(this_00);
    if (cVar1 == '\0') {
      puVar4 = (undefined1 *)&param_3;
      std::
      map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
      ::find(local_14);
      std::
      map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
      ::end(local_10);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
              operator!=(local_14,(_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        iVar3 = std::
                _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
                operator->(local_14);
        uVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x14))(*(int **)(iVar3 + 4),param_4,puVar4);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
