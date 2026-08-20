# parse

`_ZN11game_master23CBillingRechargeCommand5parseEv`

`game_master::CBillingRechargeCommand::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CBillingRechargeCommand` | `0x084b3a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3a60  _ZN11game_master23CBillingRechargeCommand5parseEv
#           game_master::CBillingRechargeCommand::parse()
# range [0x084b3a60, 0x084b3ad3]
084b3a60 +0x00:  push   %ebp
084b3a61 +0x01:  mov    %esp,%ebp
084b3a63 +0x03:  sub    $0x18,%esp
084b3a66 +0x06:  mov    0x8(%ebp),%eax
084b3a69 +0x09:  mov    0x4(%eax),%eax
084b3a6c +0x0c:  test   %eax,%eax
084b3a6e +0x0e:  je     084b3ad0 <+0x70>
084b3a70 +0x10:  mov    0x8(%ebp),%eax
084b3a73 +0x13:  mov    0x4(%eax),%eax
084b3a76 +0x16:  add    $0x11c,%eax
084b3a7b +0x1b:  movl   $0x1,0x4(%esp)
084b3a83 +0x23:  mov    %eax,(%esp)
084b3a86 +0x26:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3a8b +0x2b:  mov    0x8(%ebp),%edx
084b3a8e +0x2e:  add    $0x8,%edx
084b3a91 +0x31:  mov    %eax,0x4(%esp)
084b3a95 +0x35:  mov    %edx,(%esp)
084b3a98 +0x38:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084b3a9d +0x3d:  mov    0x8(%ebp),%eax
084b3aa0 +0x40:  mov    0x4(%eax),%eax
084b3aa3 +0x43:  add    $0x11c,%eax
084b3aa8 +0x48:  movl   $0x2,0x4(%esp)
084b3ab0 +0x50:  mov    %eax,(%esp)
084b3ab3 +0x53:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
084b3ab8 +0x58:  mov    %eax,(%esp)
084b3abb +0x5b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b3ac0 +0x60:  mov    %eax,(%esp)
084b3ac3 +0x63:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
084b3ac8 +0x68:  mov    0x8(%ebp),%edx
084b3acb +0x6b:  mov    %eax,0xc(%edx)
084b3ace +0x6e:  jmp    084b3ad1 <+0x71>
084b3ad0 +0x70:  nop
084b3ad1 +0x71:  leave
084b3ad2 +0x72:  ret
084b3ad3 +0x73:  nop
```

## 反编译 C

```c
// game_master::CBillingRechargeCommand::parse @ 0x84b3a60

/* game_master::CBillingRechargeCommand::parse() */

void __thiscall game_master::CBillingRechargeCommand::parse(CBillingRechargeCommand *this)

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
  }
  return;
}
```
