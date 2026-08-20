# printPolicy

`_ZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumE`

`ServiceRestrictManager::printPolicy(RestrictCategory::Enum)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816ea6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816ea6a  _ZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumE
#           ServiceRestrictManager::printPolicy(RestrictCategory::Enum)
# range [0x0816ea6a, 0x0816eb61]
0816ea6a +0x00:  push   %ebp
0816ea6b +0x01:  mov    %esp,%ebp
0816ea6d +0x03:  sub    $0x58,%esp
0816ea70 +0x06:  movl   $0x1,0x14(%esp)
0816ea78 +0x0e:  movl   $0x1,0x10(%esp)
0816ea80 +0x16:  movl   $0x9,0xc(%esp)
0816ea88 +0x1e:  movl   $0x1ef,0x8(%esp)
0816ea90 +0x26:  movl   $&_ZZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumEE19__PRETTY_FUNCTION__,0x4(%esp)
0816ea98 +0x2e:  lea    -0x2c(%ebp),%eax
0816ea9b +0x31:  mov    %eax,(%esp)
0816ea9e +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816eaa3 +0x39:  movl   $"[!] Service Restrict List ... ",0x4(%esp)
0816eaab +0x41:  lea    -0x2c(%ebp),%eax
0816eaae +0x44:  mov    %eax,(%esp)
0816eab1 +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816eab6 +0x4c:  mov    0x8(%ebp),%edx
0816eab9 +0x4f:  lea    -0x30(%ebp),%eax
0816eabc +0x52:  lea    0xc(%ebp),%ecx
0816eabf +0x55:  mov    %ecx,0x8(%esp)
0816eac3 +0x59:  mov    %edx,0x4(%esp)
0816eac7 +0x5d:  mov    %eax,(%esp)
0816eaca +0x60:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816eacf +0x65:  sub    $0x4,%esp
0816ead2 +0x68:  mov    0x8(%ebp),%edx
0816ead5 +0x6b:  lea    -0x1c(%ebp),%eax
0816ead8 +0x6e:  mov    %edx,0x4(%esp)
0816eadc +0x72:  mov    %eax,(%esp)
0816eadf +0x75:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816eae4 +0x7a:  sub    $0x4,%esp
0816eae7 +0x7d:  lea    -0x1c(%ebp),%eax
0816eaea +0x80:  mov    %eax,0x4(%esp)
0816eaee +0x84:  lea    -0x30(%ebp),%eax
0816eaf1 +0x87:  mov    %eax,(%esp)
0816eaf4 +0x8a:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816eaf9 +0x8f:  test   %al,%al
0816eafb +0x91:  je     0816eb19 <+0xaf>
0816eafd +0x93:  lea    -0x30(%ebp),%eax
0816eb00 +0x96:  mov    %eax,(%esp)
0816eb03 +0x99:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816eb08 +0x9e:  mov    0x4(%eax),%eax
0816eb0b +0xa1:  mov    (%eax),%edx
0816eb0d +0xa3:  add    $0x18,%edx
0816eb10 +0xa6:  mov    (%edx),%edx
0816eb12 +0xa8:  mov    %eax,(%esp)
0816eb15 +0xab:  call   *%edx
0816eb17 +0xad:  jmp    0816eb5f <+0xf5>
0816eb19 +0xaf:  movl   $0x1,0x14(%esp)
0816eb21 +0xb7:  movl   $0x1,0x10(%esp)
0816eb29 +0xbf:  movl   $0x9,0xc(%esp)
0816eb31 +0xc7:  movl   $0x1f3,0x8(%esp)
0816eb39 +0xcf:  movl   $&_ZZN22ServiceRestrictManager11printPolicyEN16RestrictCategory4EnumEE19__PRETTY_FUNCTION__,0x4(%esp)
0816eb41 +0xd7:  lea    -0x18(%ebp),%eax
0816eb44 +0xda:  mov    %eax,(%esp)
0816eb47 +0xdd:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816eb4c +0xe2:  movl   $"[!] Service Restrict List ... End",0x4(%esp)
0816eb54 +0xea:  lea    -0x18(%ebp),%eax
0816eb57 +0xed:  mov    %eax,(%esp)
0816eb5a +0xf0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816eb5f +0xf5:  leave
0816eb60 +0xf6:  ret
0816eb61 +0xf7:  nop
```

## 反编译 C

```c
// ServiceRestrictManager::printPolicy @ 0x816ea6a

/* ServiceRestrictManager::printPolicy(RestrictCategory::Enum) */

void ServiceRestrictManager::printPolicy(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator *p_Var3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_34 [4];
  cMyTrace local_30 [16];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_20 [4];
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_30,"void ServiceRestrictManager::printPolicy(RestrictCategory::Enum)",
                     0x1ef,9,true,true);
  cMyTrace::operator()(local_30,"[!] Service Restrict List ... ");
  puVar4 = &stack0x00000008;
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_34);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_20);
  p_Var3 = (_Rb_tree_iterator *)local_20;
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_34,p_Var3);
  if (cVar1 == '\0') {
    cMyTrace::cMyTrace(local_1c,"void ServiceRestrictManager::printPolicy(RestrictCategory::Enum)",
                       499,9,true,true);
    cMyTrace::operator()(local_1c,"[!] Service Restrict List ... End");
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
            ::operator->(local_34);
    (**(code **)(**(int **)(iVar2 + 4) + 0x18))(*(int **)(iVar2 + 4),p_Var3,puVar4);
  }
  return;
}
```
