# ChangeGuildNameInProxy

`_ZN17CGuildServerProxy22ChangeGuildNameInProxyEjPc`

`CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ea3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ea3e  _ZN17CGuildServerProxy22ChangeGuildNameInProxyEjPc
#           CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*)
# range [0x0846ea3e, 0x0846eb0d]
0846ea3e +0x00:  push   %ebp
0846ea3f +0x01:  mov    %esp,%ebp
0846ea41 +0x03:  sub    $0x38,%esp
0846ea44 +0x06:  mov    0x8(%ebp),%eax
0846ea47 +0x09:  lea    0x8(%eax),%ecx
0846ea4a +0x0c:  lea    -0x14(%ebp),%eax
0846ea4d +0x0f:  lea    0xc(%ebp),%edx
0846ea50 +0x12:  mov    %edx,0x8(%esp)
0846ea54 +0x16:  mov    %ecx,0x4(%esp)
0846ea58 +0x1a:  mov    %eax,(%esp)
0846ea5b +0x1d:  call   0846fd5a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb2a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb2a
0846ea60 +0x22:  sub    $0x4,%esp
0846ea63 +0x25:  mov    0x8(%ebp),%eax
0846ea66 +0x28:  lea    0x8(%eax),%edx
0846ea69 +0x2b:  lea    -0x10(%ebp),%eax
0846ea6c +0x2e:  mov    %edx,0x4(%esp)
0846ea70 +0x32:  mov    %eax,(%esp)
0846ea73 +0x35:  call   0846fd86 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb56>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb56
0846ea78 +0x3a:  sub    $0x4,%esp
0846ea7b +0x3d:  lea    -0x10(%ebp),%eax
0846ea7e +0x40:  mov    %eax,0x4(%esp)
0846ea82 +0x44:  lea    -0x14(%ebp),%eax
0846ea85 +0x47:  mov    %eax,(%esp)
0846ea88 +0x4a:  call   0846fdac <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb7c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb7c
0846ea8d +0x4f:  test   %al,%al
0846ea8f +0x51:  je     0846eac6 <+0x88>
0846ea91 +0x53:  mov    0xc(%ebp),%eax
0846ea94 +0x56:  mov    %eax,0x14(%esp)
0846ea98 +0x5a:  movl   $"Find fail from guild info proxy(guild_id:%d)",0x10(%esp)
0846eaa0 +0x62:  movl   $0x860,0xc(%esp)
0846eaa8 +0x6a:  movl   $&_ZZN17CGuildServerProxy22ChangeGuildNameInProxyEjPcE19__PRETTY_FUNCTION__,0x8(%esp)
0846eab0 +0x72:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846eab8 +0x7a:  movl   $0x1,(%esp)
0846eabf +0x81:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846eac4 +0x86:  jmp    0846eb0c <+0xce>
0846eac6 +0x88:  lea    -0x14(%ebp),%eax
0846eac9 +0x8b:  mov    %eax,(%esp)
0846eacc +0x8e:  call   0846fdc0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb90>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb90
0846ead1 +0x93:  add    $0x4,%eax
0846ead4 +0x96:  mov    %eax,-0xc(%ebp)
0846ead7 +0x99:  mov    -0xc(%ebp),%eax
0846eada +0x9c:  movl   $0x17,0x8(%esp)
0846eae2 +0xa4:  movl   $0x0,0x4(%esp)
0846eaea +0xac:  mov    %eax,(%esp)
0846eaed +0xaf:  call   0807dcc0 <_init+0x5b8>
0846eaf2 +0xb4:  mov    -0xc(%ebp),%eax
0846eaf5 +0xb7:  movl   $0x16,0x8(%esp)
0846eafd +0xbf:  mov    0x10(%ebp),%edx
0846eb00 +0xc2:  mov    %edx,0x4(%esp)
0846eb04 +0xc6:  mov    %eax,(%esp)
0846eb07 +0xc9:  call   0807d8a0 <_init+0x198>
0846eb0c +0xce:  leave
0846eb0d +0xcf:  ret
```

## 反编译 C

```c
// CGuildServerProxy::ChangeGuildNameInProxy @ 0x846ea3e

/* CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*) */

void __thiscall
CGuildServerProxy::ChangeGuildNameInProxy(CGuildServerProxy *this,uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_18 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_14 [4];
  void *local_10;
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_18)
    ;
    local_10 = (void *)(iVar2 + 4);
    memset(local_10,0,0x17);
    memcpy(local_10,param_2,0x16);
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "void CGuildServerProxy::ChangeGuildNameInProxy(unsigned int, char*)",0x860,
               "Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return;
}
```
