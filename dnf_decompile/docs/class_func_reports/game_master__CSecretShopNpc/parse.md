# parse

`_ZN11game_master14CSecretShopNpc5parseEv`

`game_master::CSecretShopNpc::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CSecretShopNpc` | `0x084ab9da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab9da  _ZN11game_master14CSecretShopNpc5parseEv
#           game_master::CSecretShopNpc::parse()
# range [0x084ab9da, 0x084aba11]
084ab9da +0x00:  push   %ebp
084ab9db +0x01:  mov    %esp,%ebp
084ab9dd +0x03:  sub    $0x18,%esp
084ab9e0 +0x06:  mov    0x8(%ebp),%eax
084ab9e3 +0x09:  mov    0x4(%eax),%eax
084ab9e6 +0x0c:  add    $0xc,%eax
084ab9e9 +0x0f:  mov    %eax,(%esp)
084ab9ec +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ab9f1 +0x17:  mov    0x8(%ebp),%eax
084ab9f4 +0x1a:  mov    0x4(%eax),%eax
084ab9f7 +0x1d:  add    $0xc,%eax
084ab9fa +0x20:  mov    %eax,(%esp)
084ab9fd +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aba02 +0x28:  mov    %eax,(%esp)
084aba05 +0x2b:  call   0807e6f0 <_init+0xfe8>
084aba0a +0x30:  mov    0x8(%ebp),%edx
084aba0d +0x33:  mov    %eax,0x8(%edx)
084aba10 +0x36:  leave
084aba11 +0x37:  ret
```

## 反编译 C

```c
// game_master::CSecretShopNpc::parse @ 0x84ab9da

/* game_master::CSecretShopNpc::parse() */

void __thiscall game_master::CSecretShopNpc::parse(CSecretShopNpc *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}
```
