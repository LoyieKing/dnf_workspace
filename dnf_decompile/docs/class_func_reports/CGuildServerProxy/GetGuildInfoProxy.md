# GetGuildInfoProxy

`_ZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxy`

`CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ebba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ebba  _ZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxy
#           CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&)
# range [0x0846ebba, 0x0846ec87]
0846ebba +0x00:  push   %ebp
0846ebbb +0x01:  mov    %esp,%ebp
0846ebbd +0x03:  sub    $0x38,%esp
0846ebc0 +0x06:  mov    0x8(%ebp),%eax
0846ebc3 +0x09:  lea    0x8(%eax),%ecx
0846ebc6 +0x0c:  lea    -0x10(%ebp),%eax
0846ebc9 +0x0f:  lea    0xc(%ebp),%edx
0846ebcc +0x12:  mov    %edx,0x8(%esp)
0846ebd0 +0x16:  mov    %ecx,0x4(%esp)
0846ebd4 +0x1a:  mov    %eax,(%esp)
0846ebd7 +0x1d:  call   0846fd5a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb2a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb2a
0846ebdc +0x22:  sub    $0x4,%esp
0846ebdf +0x25:  mov    0x8(%ebp),%eax
0846ebe2 +0x28:  lea    0x8(%eax),%edx
0846ebe5 +0x2b:  lea    -0xc(%ebp),%eax
0846ebe8 +0x2e:  mov    %edx,0x4(%esp)
0846ebec +0x32:  mov    %eax,(%esp)
0846ebef +0x35:  call   0846fd86 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb56>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb56
0846ebf4 +0x3a:  sub    $0x4,%esp
0846ebf7 +0x3d:  lea    -0xc(%ebp),%eax
0846ebfa +0x40:  mov    %eax,0x4(%esp)
0846ebfe +0x44:  lea    -0x10(%ebp),%eax
0846ec01 +0x47:  mov    %eax,(%esp)
0846ec04 +0x4a:  call   0846fdac <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb7c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb7c
0846ec09 +0x4f:  test   %al,%al
0846ec0b +0x51:  je     0846ec47 <+0x8d>
0846ec0d +0x53:  mov    0xc(%ebp),%eax
0846ec10 +0x56:  mov    %eax,0x14(%esp)
0846ec14 +0x5a:  movl   $"Find fail from guild info proxy(guild_id:%d)",0x10(%esp)
0846ec1c +0x62:  movl   $0x87d,0xc(%esp)
0846ec24 +0x6a:  movl   $&_ZZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxyE19__PRETTY_FUNCTION__,0x8(%esp)
0846ec2c +0x72:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846ec34 +0x7a:  movl   $0x1,(%esp)
0846ec3b +0x81:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846ec40 +0x86:  mov    $0x0,%eax
0846ec45 +0x8b:  jmp    0846ec85 <+0xcb>
0846ec47 +0x8d:  lea    -0x10(%ebp),%eax
0846ec4a +0x90:  mov    %eax,(%esp)
0846ec4d +0x93:  call   0846fdc0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb90>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb90
0846ec52 +0x98:  mov    0x10(%ebp),%edx
0846ec55 +0x9b:  mov    0x4(%eax),%ecx
0846ec58 +0x9e:  mov    %ecx,(%edx)
0846ec5a +0xa0:  mov    0x8(%eax),%ecx
0846ec5d +0xa3:  mov    %ecx,0x4(%edx)
0846ec60 +0xa6:  mov    0xc(%eax),%ecx
0846ec63 +0xa9:  mov    %ecx,0x8(%edx)
0846ec66 +0xac:  mov    0x10(%eax),%ecx
0846ec69 +0xaf:  mov    %ecx,0xc(%edx)
0846ec6c +0xb2:  mov    0x14(%eax),%ecx
0846ec6f +0xb5:  mov    %ecx,0x10(%edx)
0846ec72 +0xb8:  mov    0x18(%eax),%ecx
0846ec75 +0xbb:  mov    %ecx,0x14(%edx)
0846ec78 +0xbe:  movzwl 0x1c(%eax),%eax
0846ec7c +0xc2:  mov    %ax,0x18(%edx)
0846ec80 +0xc6:  mov    $0x1,%eax
0846ec85 +0xcb:  leave
0846ec86 +0xcc:  ret
0846ec87 +0xcd:  nop
```

## 反编译 C

```c
// CGuildServerProxy::GetGuildInfoProxy @ 0x846ebba

/* CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&) */

bool __thiscall
CGuildServerProxy::GetGuildInfoProxy(CGuildServerProxy *this,uint param_1,STGuildProxy *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_14 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_10 [12];
  
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>>::operator->(local_14)
    ;
    *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(iVar2 + 0x1c);
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "bool CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&)",0x87d,
               "Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return cVar1 == '\0';
}
```
