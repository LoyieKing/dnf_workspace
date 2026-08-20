# Arad_DevMgr_Server_Proxy

`_ZN24Arad_DevMgr_Server_ProxyC1ESsi`

`Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `Arad_DevMgr_Server_Proxy` | `0x0818dd78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818dd78  _ZN24Arad_DevMgr_Server_ProxyC1ESsi
#           Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x0818dd78, 0x0818ddab]
0818dd78 +0x00:  push   %ebp
0818dd79 +0x01:  mov    %esp,%ebp
0818dd7b +0x03:  sub    $0x18,%esp
0818dd7e +0x06:  mov    0x8(%ebp),%eax
0818dd81 +0x09:  mov    0x10(%ebp),%edx
0818dd84 +0x0c:  mov    %edx,(%eax)
0818dd86 +0x0e:  mov    0x8(%ebp),%eax
0818dd89 +0x11:  lea    0x4(%eax),%edx
0818dd8c +0x14:  mov    0xc(%ebp),%eax
0818dd8f +0x17:  mov    %eax,0x4(%esp)
0818dd93 +0x1b:  mov    %edx,(%esp)
0818dd96 +0x1e:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0818dd9b +0x23:  mov    0x8(%ebp),%eax
0818dd9e +0x26:  add    $0x8,%eax
0818dda1 +0x29:  mov    %eax,(%esp)
0818dda4 +0x2c:  call   0818df60 <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0x1c>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
0818dda9 +0x31:  leave
0818ddaa +0x32:  ret
0818ddab +0x33:  nop
```

## 反编译 C

```c
// Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy @ 0x818dd78

/* Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::string, int) */

void __thiscall
Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy
          (Arad_DevMgr_Server_Proxy *this,string param_1,int param_2)

{
  *(int *)this = param_2;
  std::string::string((string *)(this + 4),(string *)param_1._M_dataplus._M_p);
  CNetwork<6144,100000>::CNetwork((CNetwork<6144,100000> *)(this + 8));
  return;
}
```
