# parse

`_ZN11game_master19CHeroMissionCommand5parseEv`

`game_master::CHeroMissionCommand::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CHeroMissionCommand` | `0x084b3db2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3db2  _ZN11game_master19CHeroMissionCommand5parseEv
#           game_master::CHeroMissionCommand::parse()
# range [0x084b3db2, 0x084b3e5d]
084b3db2 +0x00:  push   %ebp
084b3db3 +0x01:  mov    %esp,%ebp
084b3db5 +0x03:  sub    $0x18,%esp
084b3db8 +0x06:  mov    0x8(%ebp),%eax
084b3dbb +0x09:  mov    0x4(%eax),%eax
084b3dbe +0x0c:  test   %eax,%eax
084b3dc0 +0x0e:  je     084b3e5b <+0xa9>
084b3dc6 +0x14:  mov    0x8(%ebp),%eax
084b3dc9 +0x17:  mov    0x4(%eax),%eax
084b3dcc +0x1a:  add    $0x11c,%eax
084b3dd1 +0x1f:  movl   $0x1,0x4(%esp)
084b3dd9 +0x27:  mov    %eax,(%esp)
084b3ddc +0x2a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3de1 +0x2f:  mov    0x8(%ebp),%edx
084b3de4 +0x32:  add    $0x8,%edx
084b3de7 +0x35:  mov    %eax,0x4(%esp)
084b3deb +0x39:  mov    %edx,(%esp)
084b3dee +0x3c:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084b3df3 +0x41:  mov    0x8(%ebp),%eax
084b3df6 +0x44:  mov    0x4(%eax),%eax
084b3df9 +0x47:  add    $0x11c,%eax
084b3dfe +0x4c:  movl   $0x2,0x4(%esp)
084b3e06 +0x54:  mov    %eax,(%esp)
084b3e09 +0x57:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3e0e +0x5c:  mov    %eax,(%esp)
084b3e11 +0x5f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b3e16 +0x64:  mov    %eax,(%esp)
084b3e19 +0x67:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
084b3e1e +0x6c:  mov    %eax,%edx
084b3e20 +0x6e:  mov    0x8(%ebp),%eax
084b3e23 +0x71:  mov    %edx,0xc(%eax)
084b3e26 +0x74:  mov    0x8(%ebp),%eax
084b3e29 +0x77:  mov    0x4(%eax),%eax
084b3e2c +0x7a:  add    $0x11c,%eax
084b3e31 +0x7f:  movl   $0x3,0x4(%esp)
084b3e39 +0x87:  mov    %eax,(%esp)
084b3e3c +0x8a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3e41 +0x8f:  mov    %eax,(%esp)
084b3e44 +0x92:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b3e49 +0x97:  mov    %eax,(%esp)
084b3e4c +0x9a:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
084b3e51 +0x9f:  mov    %eax,%edx
084b3e53 +0xa1:  mov    0x8(%ebp),%eax
084b3e56 +0xa4:  mov    %edx,0x10(%eax)
084b3e59 +0xa7:  jmp    084b3e5c <+0xaa>
084b3e5b +0xa9:  nop
084b3e5c +0xaa:  leave
084b3e5d +0xab:  ret
```

## 反编译 C

```c
// game_master::CHeroMissionCommand::parse @ 0x84b3db2

/* game_master::CHeroMissionCommand::parse() */

void __thiscall game_master::CHeroMissionCommand::parse(CHeroMissionCommand *this)

{
  string *psVar1;
  char *pcVar2;
  undefined4 uVar3;
  
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
    uVar3 = StringToNumber(pcVar2);
    *(undefined4 *)(this + 0xc) = uVar3;
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),3);
    pcVar2 = (char *)std::string::c_str(psVar1);
    uVar3 = StringToNumber(pcVar2);
    *(undefined4 *)(this + 0x10) = uVar3;
  }
  return;
}
```
