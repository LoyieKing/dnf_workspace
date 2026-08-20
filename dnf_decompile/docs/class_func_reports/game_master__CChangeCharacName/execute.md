# execute

`_ZN11game_master17CChangeCharacName7executeEv`

`game_master::CChangeCharacName::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeCharacName` | `0x084ab558` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab558  _ZN11game_master17CChangeCharacName7executeEv
#           game_master::CChangeCharacName::execute()
# range [0x084ab558, 0x084ab5b5]
084ab558 +0x00:  push   %ebp
084ab559 +0x01:  mov    %esp,%ebp
084ab55b +0x03:  push   %esi
084ab55c +0x04:  push   %ebx
084ab55d +0x05:  sub    $0x20,%esp
084ab560 +0x08:  mov    0x8(%ebp),%eax
084ab563 +0x0b:  mov    %eax,(%esp)
084ab566 +0x0e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab56b +0x13:  mov    %eax,-0xc(%ebp)
084ab56e +0x16:  mov    0x8(%ebp),%eax
084ab571 +0x19:  add    $0x8,%eax
084ab574 +0x1c:  mov    %eax,(%esp)
084ab577 +0x1f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ab57c +0x24:  mov    %eax,%ebx
084ab57e +0x26:  mov    -0xc(%ebp),%eax
084ab581 +0x29:  mov    %eax,(%esp)
084ab584 +0x2c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084ab589 +0x31:  mov    %eax,%esi
084ab58b +0x33:  mov    -0xc(%ebp),%eax
084ab58e +0x36:  mov    %eax,(%esp)
084ab591 +0x39:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084ab596 +0x3e:  movl   $0x1,0xc(%esp)
084ab59e +0x46:  mov    %ebx,0x8(%esp)
084ab5a2 +0x4a:  mov    %esi,0x4(%esp)
084ab5a6 +0x4e:  mov    %eax,(%esp)
084ab5a9 +0x51:  call   08426590 <_ZN22DB_ReqChangeCharacName11makeRequestEiiPKci>  ; DB_ReqChangeCharacName::makeRequest(int, int, char const*, int)
084ab5ae +0x56:  add    $0x20,%esp
084ab5b1 +0x59:  pop    %ebx
084ab5b2 +0x5a:  pop    %esi
084ab5b3 +0x5b:  pop    %ebp
084ab5b4 +0x5c:  ret
084ab5b5 +0x5d:  nop
```

## 反编译 C

```c
// game_master::CChangeCharacName::execute @ 0x84ab558

/* game_master::CChangeCharacName::execute() */

void __thiscall game_master::CChangeCharacName::execute(CChangeCharacName *this)

{
  CUserCharacInfo *this_00;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  pcVar1 = (char *)std::string::c_str((string *)(this + 8));
  iVar2 = CUserCharacInfo::getCurCharacNo(this_00);
  iVar3 = CUser::GetUID((CUser *)this_00);
  DB_ReqChangeCharacName::makeRequest(iVar3,iVar2,pcVar1,1);
  return;
}
```
