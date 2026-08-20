# parse

`_ZN11game_master8CLevelUp5parseEv`

`game_master::CLevelUp::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CLevelUp` | `0x084b388c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b388c  _ZN11game_master8CLevelUp5parseEv
#           game_master::CLevelUp::parse()
# range [0x084b388c, 0x084b38e1]
084b388c +0x00:  push   %ebp
084b388d +0x01:  mov    %esp,%ebp
084b388f +0x03:  sub    $0x28,%esp
084b3892 +0x06:  mov    0x8(%ebp),%eax
084b3895 +0x09:  mov    0x4(%eax),%eax
084b3898 +0x0c:  test   %eax,%eax
084b389a +0x0e:  je     084b38de <+0x52>
084b389c +0x10:  mov    0x8(%ebp),%eax
084b389f +0x13:  mov    0x4(%eax),%eax
084b38a2 +0x16:  add    $0x11c,%eax
084b38a7 +0x1b:  movl   $0x1,0x4(%esp)
084b38af +0x23:  mov    %eax,(%esp)
084b38b2 +0x26:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b38b7 +0x2b:  mov    %eax,(%esp)
084b38ba +0x2e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b38bf +0x33:  mov    %eax,(%esp)
084b38c2 +0x36:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
084b38c7 +0x3b:  mov    %eax,-0xc(%ebp)
084b38ca +0x3e:  mov    -0xc(%ebp),%eax
084b38cd +0x41:  mov    %eax,0x4(%esp)
084b38d1 +0x45:  mov    0x8(%ebp),%eax
084b38d4 +0x48:  mov    %eax,(%esp)
084b38d7 +0x4b:  call   084b395c <_ZN11game_master8CLevelUp8setLevelEi>  ; game_master::CLevelUp::setLevel(int)
084b38dc +0x50:  jmp    084b38df <+0x53>
084b38de +0x52:  nop
084b38df +0x53:  leave
084b38e0 +0x54:  ret
084b38e1 +0x55:  nop
```

## 反编译 C

```c
// game_master::CLevelUp::parse @ 0x84b388c

/* game_master::CLevelUp::parse() */

void __thiscall game_master::CLevelUp::parse(CLevelUp *this)

{
  string *this_00;
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    this_00 = (string *)
              std::vector<std::string,std::allocator<std::string>>::operator[]
                        ((vector<std::string,std::allocator<std::string>> *)
                         (*(int *)(this + 4) + 0x11c),1);
    pcVar1 = (char *)std::string::c_str(this_00);
    iVar2 = StringToNumber(pcVar1);
    setLevel(this,iVar2);
  }
  return;
}
```
