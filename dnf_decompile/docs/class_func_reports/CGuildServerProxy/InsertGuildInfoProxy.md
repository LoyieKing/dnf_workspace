# InsertGuildInfoProxy

`_ZN17CGuildServerProxy20InsertGuildInfoProxyEjR12STGuildProxy`

`CGuildServerProxy::InsertGuildInfoProxy(unsigned int, STGuildProxy&)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ec88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ec88  _ZN17CGuildServerProxy20InsertGuildInfoProxyEjR12STGuildProxy
#           CGuildServerProxy::InsertGuildInfoProxy(unsigned int, STGuildProxy&)
# range [0x0846ec88, 0x0846ece1]
0846ec88 +0x00:  push   %ebp
0846ec89 +0x01:  mov    %esp,%ebp
0846ec8b +0x03:  sub    $0x68,%esp
0846ec8e +0x06:  lea    -0x28(%ebp),%eax
0846ec91 +0x09:  mov    0x10(%ebp),%edx
0846ec94 +0x0c:  mov    %edx,0x8(%esp)
0846ec98 +0x10:  lea    0xc(%ebp),%edx
0846ec9b +0x13:  mov    %edx,0x4(%esp)
0846ec9f +0x17:  mov    %eax,(%esp)
0846eca2 +0x1a:  call   0846fc99 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa69>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa69
0846eca7 +0x1f:  sub    $0x4,%esp
0846ecaa +0x22:  lea    -0x28(%ebp),%eax
0846ecad +0x25:  mov    %eax,0x4(%esp)
0846ecb1 +0x29:  lea    -0x48(%ebp),%eax
0846ecb4 +0x2c:  mov    %eax,(%esp)
0846ecb7 +0x2f:  call   0846fcd8 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xaa8>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xaa8
0846ecbc +0x34:  mov    0x8(%ebp),%eax
0846ecbf +0x37:  lea    0x8(%eax),%ecx
0846ecc2 +0x3a:  lea    -0x50(%ebp),%eax
0846ecc5 +0x3d:  lea    -0x48(%ebp),%edx
0846ecc8 +0x40:  mov    %edx,0x8(%esp)
0846eccc +0x44:  mov    %ecx,0x4(%esp)
0846ecd0 +0x48:  mov    %eax,(%esp)
0846ecd3 +0x4b:  call   0846fd2e <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xafe>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xafe
0846ecd8 +0x50:  sub    $0x4,%esp
0846ecdb +0x53:  movzbl -0x4c(%ebp),%eax
0846ecdf +0x57:  leave
0846ece0 +0x58:  ret
0846ece1 +0x59:  nop
```

## 反编译 C

```c
// CGuildServerProxy::InsertGuildInfoProxy @ 0x846ec88

/* CGuildServerProxy::InsertGuildInfoProxy(unsigned int, STGuildProxy&) */

undefined1 __thiscall
CGuildServerProxy::InsertGuildInfoProxy(CGuildServerProxy *this,uint param_1,STGuildProxy *param_2)

{
  pair local_54 [4];
  undefined1 local_50;
  pair<unsigned_int_const,STGuildProxy> local_4c [32];
  uint local_2c [10];
  
  std::make_pair<unsigned_int&,STGuildProxy&>(local_2c,(STGuildProxy *)&param_1);
  std::pair<unsigned_int_const,STGuildProxy>::pair<unsigned_int,STGuildProxy>
            (local_4c,(pair *)local_2c);
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::insert(local_54);
  return local_50;
}
```
