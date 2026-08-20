# parse

`_ZN11game_master19CSetMultiboxFailCnt5parseEv`

`game_master::CSetMultiboxFailCnt::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CSetMultiboxFailCnt` | `0x084b34a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b34a4  _ZN11game_master19CSetMultiboxFailCnt5parseEv
#           game_master::CSetMultiboxFailCnt::parse()
# range [0x084b34a4, 0x084b34f7]
084b34a4 +0x00:  push   %ebp
084b34a5 +0x01:  mov    %esp,%ebp
084b34a7 +0x03:  sub    $0x18,%esp
084b34aa +0x06:  mov    0x8(%ebp),%eax
084b34ad +0x09:  movl   $0x0,0x8(%eax)
084b34b4 +0x10:  mov    0x8(%ebp),%eax
084b34b7 +0x13:  mov    0x4(%eax),%eax
084b34ba +0x16:  add    $0xc,%eax
084b34bd +0x19:  mov    %eax,(%esp)
084b34c0 +0x1c:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b34c5 +0x21:  mov    0x8(%ebp),%eax
084b34c8 +0x24:  mov    0x4(%eax),%eax
084b34cb +0x27:  add    $0x11c,%eax
084b34d0 +0x2c:  movl   $0x1,0x4(%esp)
084b34d8 +0x34:  mov    %eax,(%esp)
084b34db +0x37:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b34e0 +0x3c:  mov    %eax,(%esp)
084b34e3 +0x3f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b34e8 +0x44:  mov    %eax,(%esp)
084b34eb +0x47:  call   0807e6f0 <_init+0xfe8>
084b34f0 +0x4c:  mov    0x8(%ebp),%edx
084b34f3 +0x4f:  mov    %eax,0x8(%edx)
084b34f6 +0x52:  leave
084b34f7 +0x53:  ret
```

## 反编译 C

```c
// game_master::CSetMultiboxFailCnt::parse @ 0x84b34a4

/* game_master::CSetMultiboxFailCnt::parse() */

void __thiscall game_master::CSetMultiboxFailCnt::parse(CSetMultiboxFailCnt *this)

{
  string *this_00;
  char *__nptr;
  int iVar1;
  
  *(undefined4 *)(this + 8) = 0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  this_00 = (string *)
            std::vector<std::string,std::allocator<std::string>>::operator[]
                      ((vector<std::string,std::allocator<std::string>> *)
                       (*(int *)(this + 4) + 0x11c),1);
  __nptr = (char *)std::string::c_str(this_00);
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}
```
