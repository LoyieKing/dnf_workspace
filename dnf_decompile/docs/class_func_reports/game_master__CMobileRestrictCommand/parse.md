# parse

`_ZN11game_master22CMobileRestrictCommand5parseEv`

`game_master::CMobileRestrictCommand::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CMobileRestrictCommand` | `0x084b3bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3bdc  _ZN11game_master22CMobileRestrictCommand5parseEv
#           game_master::CMobileRestrictCommand::parse()
# range [0x084b3bdc, 0x084b3c5f]
084b3bdc +0x00:  push   %ebp
084b3bdd +0x01:  mov    %esp,%ebp
084b3bdf +0x03:  sub    $0x18,%esp
084b3be2 +0x06:  mov    0x8(%ebp),%eax
084b3be5 +0x09:  mov    0x4(%eax),%eax
084b3be8 +0x0c:  test   %eax,%eax
084b3bea +0x0e:  je     084b3c5c <+0x80>
084b3bec +0x10:  mov    0x8(%ebp),%eax
084b3bef +0x13:  mov    0x4(%eax),%eax
084b3bf2 +0x16:  add    $0x11c,%eax
084b3bf7 +0x1b:  movl   $0x1,0x4(%esp)
084b3bff +0x23:  mov    %eax,(%esp)
084b3c02 +0x26:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3c07 +0x2b:  mov    0x8(%ebp),%edx
084b3c0a +0x2e:  add    $0x8,%edx
084b3c0d +0x31:  mov    %eax,0x4(%esp)
084b3c11 +0x35:  mov    %edx,(%esp)
084b3c14 +0x38:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084b3c19 +0x3d:  mov    0x8(%ebp),%eax
084b3c1c +0x40:  mov    0x4(%eax),%eax
084b3c1f +0x43:  add    $0x11c,%eax
084b3c24 +0x48:  movl   $0x2,0x4(%esp)
084b3c2c +0x50:  mov    %eax,(%esp)
084b3c2f +0x53:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3c34 +0x58:  mov    %eax,(%esp)
084b3c37 +0x5b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b3c3c +0x60:  mov    %eax,(%esp)
084b3c3f +0x63:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
084b3c44 +0x68:  test   %eax,%eax
084b3c46 +0x6a:  je     084b3c4f <+0x73>
084b3c48 +0x6c:  mov    $0x1,%eax
084b3c4d +0x71:  jmp    084b3c54 <+0x78>
084b3c4f +0x73:  mov    $0x0,%eax
084b3c54 +0x78:  mov    0x8(%ebp),%edx
084b3c57 +0x7b:  mov    %eax,0xc(%edx)
084b3c5a +0x7e:  jmp    084b3c5d <+0x81>
084b3c5c +0x80:  nop
084b3c5d +0x81:  leave
084b3c5e +0x82:  ret
084b3c5f +0x83:  nop
```

## 反编译 C

```c
// game_master::CMobileRestrictCommand::parse @ 0x84b3bdc

/* game_master::CMobileRestrictCommand::parse() */

void __thiscall game_master::CMobileRestrictCommand::parse(CMobileRestrictCommand *this)

{
  string *psVar1;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(this + 4) != 0) {
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),1);
    std::string::operator=((string *)(this + 8),psVar1);
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),2);
    pcVar2 = (char *)std::string::c_str(psVar1);
    iVar3 = StringToNumber(pcVar2);
    *(uint *)(this + 0xc) = (uint)(iVar3 != 0);
  }
  return;
}
```
