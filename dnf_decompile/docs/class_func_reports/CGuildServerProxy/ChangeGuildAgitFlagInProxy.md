# ChangeGuildAgitFlagInProxy

`_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh`

`CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846eb0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846eb0e  _ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh
#           CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char)
# range [0x0846eb0e, 0x0846ebb9]
0846eb0e +0x00:  push   %ebp
0846eb0f +0x01:  mov    %esp,%ebp
0846eb11 +0x03:  sub    $0x48,%esp
0846eb14 +0x06:  mov    0x10(%ebp),%eax
0846eb17 +0x09:  mov    %al,-0x1c(%ebp)
0846eb1a +0x0c:  mov    0x8(%ebp),%eax
0846eb1d +0x0f:  lea    0x8(%eax),%ecx
0846eb20 +0x12:  lea    -0x14(%ebp),%eax
0846eb23 +0x15:  lea    0xc(%ebp),%edx
0846eb26 +0x18:  mov    %edx,0x8(%esp)
0846eb2a +0x1c:  mov    %ecx,0x4(%esp)
0846eb2e +0x20:  mov    %eax,(%esp)
0846eb31 +0x23:  call   0846fd5a <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb2a>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb2a
0846eb36 +0x28:  sub    $0x4,%esp
0846eb39 +0x2b:  mov    0x8(%ebp),%eax
0846eb3c +0x2e:  lea    0x8(%eax),%edx
0846eb3f +0x31:  lea    -0x10(%ebp),%eax
0846eb42 +0x34:  mov    %edx,0x4(%esp)
0846eb46 +0x38:  mov    %eax,(%esp)
0846eb49 +0x3b:  call   0846fd86 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb56>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb56
0846eb4e +0x40:  sub    $0x4,%esp
0846eb51 +0x43:  lea    -0x10(%ebp),%eax
0846eb54 +0x46:  mov    %eax,0x4(%esp)
0846eb58 +0x4a:  lea    -0x14(%ebp),%eax
0846eb5b +0x4d:  mov    %eax,(%esp)
0846eb5e +0x50:  call   0846fdac <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb7c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb7c
0846eb63 +0x55:  test   %al,%al
0846eb65 +0x57:  je     0846eb9c <+0x8e>
0846eb67 +0x59:  mov    0xc(%ebp),%eax
0846eb6a +0x5c:  mov    %eax,0x14(%esp)
0846eb6e +0x60:  movl   $"Find fail from guild info proxy(guild_id:%d)",0x10(%esp)
0846eb76 +0x68:  movl   $0x86e,0xc(%esp)
0846eb7e +0x70:  movl   $&_ZZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjhE19__PRETTY_FUNCTION__,0x8(%esp)
0846eb86 +0x78:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846eb8e +0x80:  movl   $0x1,(%esp)
0846eb95 +0x87:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846eb9a +0x8c:  jmp    0846ebb7 <+0xa9>
0846eb9c +0x8e:  lea    -0x14(%ebp),%eax
0846eb9f +0x91:  mov    %eax,(%esp)
0846eba2 +0x94:  call   0846fdc0 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xb90>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xb90
0846eba7 +0x99:  add    $0x4,%eax
0846ebaa +0x9c:  mov    %eax,-0xc(%ebp)
0846ebad +0x9f:  mov    -0xc(%ebp),%eax
0846ebb0 +0xa2:  movzbl -0x1c(%ebp),%edx
0846ebb4 +0xa6:  mov    %dl,0x18(%eax)
0846ebb7 +0xa9:  leave
0846ebb8 +0xaa:  ret
0846ebb9 +0xab:  nop
```

## 反编译 C

```c
// CGuildServerProxy::ChangeGuildAgitFlagInProxy @ 0x846eb0e

/* CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char) */

void __thiscall
CGuildServerProxy::ChangeGuildAgitFlagInProxy(CGuildServerProxy *this,uint param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildProxy>> local_18 [4];
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  local_14 [16];
  
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
    *(uchar *)(iVar2 + 0x1c) = param_2;
  }
  else {
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "void CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char)",
               0x86e,"Find fail from guild info proxy(guild_id:%d)",param_1);
  }
  return;
}
```
