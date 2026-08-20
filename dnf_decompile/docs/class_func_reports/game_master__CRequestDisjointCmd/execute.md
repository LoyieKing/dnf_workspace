# execute

`_ZN11game_master19CRequestDisjointCmd7executeEv`

`game_master::CRequestDisjointCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CRequestDisjointCmd` | `0x084a97f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a97f4  _ZN11game_master19CRequestDisjointCmd7executeEv
#           game_master::CRequestDisjointCmd::execute()
# range [0x084a97f4, 0x084a986d]
084a97f4 +0x00:  push   %ebp
084a97f5 +0x01:  mov    %esp,%ebp
084a97f7 +0x03:  push   %ebx
084a97f8 +0x04:  sub    $0x34,%esp
084a97fb +0x07:  mov    0x8(%ebp),%eax
084a97fe +0x0a:  add    $0x8,%eax
084a9801 +0x0d:  mov    %eax,(%esp)
084a9804 +0x10:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a9809 +0x15:  mov    %eax,%ebx
084a980b +0x17:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a9810 +0x1c:  mov    %ebx,0x4(%esp)
084a9814 +0x20:  mov    %eax,(%esp)
084a9817 +0x23:  call   086c9464 <_ZN9GameWorld24find_user_by_charac_nameEPKc>  ; GameWorld::find_user_by_charac_name(char const*)
084a981c +0x28:  mov    %eax,-0x10(%ebp)
084a981f +0x2b:  cmpl   $0x0,-0x10(%ebp)
084a9823 +0x2f:  je     084a9867 <+0x73>
084a9825 +0x31:  movl   $0x9,-0xc(%ebp)
084a982c +0x38:  mov    0x8(%ebp),%eax
084a982f +0x3b:  mov    %eax,(%esp)
084a9832 +0x3e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9837 +0x43:  movl   $0xffff,0x14(%esp)
084a983f +0x4b:  mov    -0x10(%ebp),%edx
084a9842 +0x4e:  mov    %edx,0x10(%esp)
084a9846 +0x52:  movl   $0x1c,0xc(%esp)
084a984e +0x5a:  movl   $0x0,0x8(%esp)
084a9856 +0x62:  mov    -0xc(%ebp),%edx
084a9859 +0x65:  mov    %edx,0x4(%esp)
084a985d +0x69:  mov    %eax,(%esp)
084a9860 +0x6c:  call   081f92ca <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t>  ; DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short)
084a9865 +0x71:  jmp    084a9868 <+0x74>
084a9867 +0x73:  nop
084a9868 +0x74:  add    $0x34,%esp
084a986b +0x77:  pop    %ebx
084a986c +0x78:  pop    %ebp
084a986d +0x79:  ret
```

## 反编译 C

```c
// game_master::CRequestDisjointCmd::execute @ 0x84a97f4

/* game_master::CRequestDisjointCmd::execute() */

void __thiscall game_master::CRequestDisjointCmd::execute(CRequestDisjointCmd *this)

{
  char *pcVar1;
  GameWorld *this_00;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)std::string::c_str((string *)(this + 8));
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::find_user_by_charac_name(this_00,pcVar1);
  if (iVar2 != 0) {
    uVar3 = CCommand::GetUser((CCommand *)this);
    DisPatcher_DisJointItem::_disjoint(uVar3,9,0,0x1c,iVar2,0xffff);
  }
  return;
}
```
