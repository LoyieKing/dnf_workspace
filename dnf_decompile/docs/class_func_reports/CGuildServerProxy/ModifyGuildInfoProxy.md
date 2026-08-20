# ModifyGuildInfoProxy

`_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy`

`CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e95e  _ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy
#           CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)
# range [0x0846e95e, 0x0846ea3d]
0846e95e +0x00:  push   %ebp
0846e95f +0x01:  mov    %esp,%ebp
0846e961 +0x03:  sub    $0x38,%esp
0846e964 +0x06:  mov    0x8(%ebp),%eax
0846e967 +0x09:  lea    0x8(%eax),%ecx
0846e96a +0x0c:  lea    -0x14(%ebp),%eax
0846e96d +0x0f:  lea    0xc(%ebp),%edx
0846e970 +0x12:  mov    %edx,0x8(%esp)
0846e974 +0x16:  mov    %ecx,0x4(%esp)
0846e978 +0x1a:  mov    %eax,(%esp)
0846e97b +0x1d:  call   0846fd5a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb2a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb2a
0846e980 +0x22:  sub    $0x4,%esp
0846e983 +0x25:  mov    0x8(%ebp),%eax
0846e986 +0x28:  lea    0x8(%eax),%edx
0846e989 +0x2b:  lea    -0x10(%ebp),%eax
0846e98c +0x2e:  mov    %edx,0x4(%esp)
0846e990 +0x32:  mov    %eax,(%esp)
0846e993 +0x35:  call   0846fd86 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb56>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb56
0846e998 +0x3a:  sub    $0x4,%esp
0846e99b +0x3d:  lea    -0x10(%ebp),%eax
0846e99e +0x40:  mov    %eax,0x4(%esp)
0846e9a2 +0x44:  lea    -0x14(%ebp),%eax
0846e9a5 +0x47:  mov    %eax,(%esp)
0846e9a8 +0x4a:  call   0846fdac <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb7c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb7c
0846e9ad +0x4f:  test   %al,%al
0846e9af +0x51:  je     0846e9eb <+0x8d>
0846e9b1 +0x53:  mov    0xc(%ebp),%eax
0846e9b4 +0x56:  mov    %eax,0x14(%esp)
0846e9b8 +0x5a:  movl   $"Find fail from guild info proxy(guild_id:%d)",0x10(%esp)
0846e9c0 +0x62:  movl   $0x852,0xc(%esp)
0846e9c8 +0x6a:  movl   $&_ZZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxyE19__PRETTY_FUNCTION__,0x8(%esp)
0846e9d0 +0x72:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846e9d8 +0x7a:  movl   $0x1,(%esp)
0846e9df +0x81:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846e9e4 +0x86:  mov    $0x0,%eax
0846e9e9 +0x8b:  jmp    0846ea3c <+0xde>
0846e9eb +0x8d:  lea    -0x14(%ebp),%eax
0846e9ee +0x90:  mov    %eax,(%esp)
0846e9f1 +0x93:  call   0846fdc0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb90>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb90
0846e9f6 +0x98:  add    $0x4,%eax
0846e9f9 +0x9b:  mov    %eax,-0xc(%ebp)
0846e9fc +0x9e:  lea    -0x14(%ebp),%eax
0846e9ff +0xa1:  mov    %eax,(%esp)
0846ea02 +0xa4:  call   0846fdc0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb90>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb90
0846ea07 +0xa9:  lea    0x4(%eax),%edx
0846ea0a +0xac:  mov    0x10(%ebp),%eax
0846ea0d +0xaf:  mov    (%eax),%ecx
0846ea0f +0xb1:  mov    %ecx,(%edx)
0846ea11 +0xb3:  mov    0x4(%eax),%ecx
0846ea14 +0xb6:  mov    %ecx,0x4(%edx)
0846ea17 +0xb9:  mov    0x8(%eax),%ecx
0846ea1a +0xbc:  mov    %ecx,0x8(%edx)
0846ea1d +0xbf:  mov    0xc(%eax),%ecx
0846ea20 +0xc2:  mov    %ecx,0xc(%edx)
0846ea23 +0xc5:  mov    0x10(%eax),%ecx
0846ea26 +0xc8:  mov    %ecx,0x10(%edx)
0846ea29 +0xcb:  mov    0x14(%eax),%ecx
0846ea2c +0xce:  mov    %ecx,0x14(%edx)
0846ea2f +0xd1:  movzwl 0x18(%eax),%eax
0846ea33 +0xd5:  mov    %ax,0x18(%edx)
0846ea37 +0xd9:  mov    $0x1,%eax
0846ea3c +0xde:  leave
0846ea3d +0xdf:  ret
```

## 反编译 C

```c
// CGuildServerProxy::ModifyGuildInfoProxy @ 0x846e95e

/* CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&) */

bool __thiscall
CGuildServerProxy::ModifyGuildInfoProxy(CGuildServerProxy *this,uint param_1,STGuildProxy *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_18 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_14 [4];
  int local_10;
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    local_10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->
                         (local_18);
    local_10 = local_10 + 4;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_18)
    ;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
    *(undefined2 *)(iVar2 + 0x1c) = *(undefined2 *)(param_2 + 0x18);
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "bool CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)",0x852,
               "Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return cVar1 == '\0';
}
```
