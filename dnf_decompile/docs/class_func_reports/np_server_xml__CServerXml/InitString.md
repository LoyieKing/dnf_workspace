# InitString

`_ZN13np_server_xml10CServerXml10InitStringEv`

`np_server_xml::CServerXml::InitString()`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c5c3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c5c3e  _ZN13np_server_xml10CServerXml10InitStringEv
#           np_server_xml::CServerXml::InitString()
# range [0x080c5c3e, 0x080c5ca7]
080c5c3e +0x00:  push   %ebp
080c5c3f +0x01:  mov    %esp,%ebp
080c5c41 +0x03:  sub    $0x18,%esp
080c5c44 +0x06:  mov    0x8(%ebp),%eax
080c5c47 +0x09:  movl   $0x0,0x50(%eax)
080c5c4e +0x10:  mov    0x8(%ebp),%eax
080c5c51 +0x13:  movl   $0x5,0x8(%esp)
080c5c59 +0x1b:  movl   $0x0,0x4(%esp)
080c5c61 +0x23:  mov    %eax,(%esp)
080c5c64 +0x26:  call   0807dcc0 <_init+0x5b8>
080c5c69 +0x2b:  mov    0x8(%ebp),%eax
080c5c6c +0x2e:  add    $0x58,%eax
080c5c6f +0x31:  mov    %eax,(%esp)
080c5c72 +0x34:  call   080c6bd6 <_GLOBAL__I_g_ServerString_+0x141>  ; global constructors keyed to g_ServerString_+0x141
080c5c77 +0x39:  mov    0x8(%ebp),%eax
080c5c7a +0x3c:  add    $0x70,%eax
080c5c7d +0x3f:  mov    %eax,(%esp)
080c5c80 +0x42:  call   080c6bd6 <_GLOBAL__I_g_ServerString_+0x141>  ; global constructors keyed to g_ServerString_+0x141
080c5c85 +0x47:  mov    0x8(%ebp),%eax
080c5c88 +0x4a:  add    $0x88,%eax
080c5c8d +0x4f:  mov    %eax,(%esp)
080c5c90 +0x52:  call   080c6bd6 <_GLOBAL__I_g_ServerString_+0x141>  ; global constructors keyed to g_ServerString_+0x141
080c5c95 +0x57:  mov    0x8(%ebp),%eax
080c5c98 +0x5a:  add    $0xa0,%eax
080c5c9d +0x5f:  mov    %eax,(%esp)
080c5ca0 +0x62:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
080c5ca5 +0x67:  leave
080c5ca6 +0x68:  ret
080c5ca7 +0x69:  nop
```

## 反编译 C

```c
// np_server_xml::CServerXml::InitString @ 0x80c5c3e

/* np_server_xml::CServerXml::InitString() */

void __thiscall np_server_xml::CServerXml::InitString(CServerXml *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  memset(this,0,5);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
  return;
}
```
