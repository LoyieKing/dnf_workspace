# set

`_ZN12CAICharacter3setEiRK25STAICharacterCommonScript`

`CAICharacter::set(int, STAICharacterCommonScript const&)`

| 类 | 地址 |
|---|---|
| `CAICharacter` | `0x0834a066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a066  _ZN12CAICharacter3setEiRK25STAICharacterCommonScript
#           CAICharacter::set(int, STAICharacterCommonScript const&)
# range [0x0834a066, 0x0834a139]
0834a066 +0x00:  push   %ebp
0834a067 +0x01:  mov    %esp,%ebp
0834a069 +0x03:  sub    $0x18,%esp
0834a06c +0x06:  mov    0xc(%ebp),%edx
0834a06f +0x09:  mov    0x8(%ebp),%eax
0834a072 +0x0c:  mov    %edx,(%eax)
0834a074 +0x0e:  mov    0x10(%ebp),%eax
0834a077 +0x11:  mov    0x8(%eax),%eax
0834a07a +0x14:  mov    %eax,%edx
0834a07c +0x16:  mov    0x8(%ebp),%eax
0834a07f +0x19:  mov    %edx,0x4(%eax)
0834a082 +0x1c:  mov    0x10(%ebp),%eax
0834a085 +0x1f:  mov    0xd80(%eax),%edx
0834a08b +0x25:  mov    0x8(%ebp),%eax
0834a08e +0x28:  mov    %edx,0x8(%eax)
0834a091 +0x2b:  mov    0x10(%ebp),%eax
0834a094 +0x2e:  mov    0xd84(%eax),%edx
0834a09a +0x34:  mov    0x8(%ebp),%eax
0834a09d +0x37:  mov    %edx,0xc(%eax)
0834a0a0 +0x3a:  mov    0x10(%ebp),%eax
0834a0a3 +0x3d:  lea    0xd88(%eax),%edx
0834a0a9 +0x43:  mov    0x8(%ebp),%eax
0834a0ac +0x46:  add    $0x10,%eax
0834a0af +0x49:  mov    %edx,0x4(%esp)
0834a0b3 +0x4d:  mov    %eax,(%esp)
0834a0b6 +0x50:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834a0bb +0x55:  mov    0x10(%ebp),%eax
0834a0be +0x58:  mov    0xda4(%eax),%edx
0834a0c4 +0x5e:  mov    0x8(%ebp),%eax
0834a0c7 +0x61:  mov    %edx,0x1c(%eax)
0834a0ca +0x64:  mov    0x10(%ebp),%eax
0834a0cd +0x67:  mov    0xda8(%eax),%edx
0834a0d3 +0x6d:  mov    0x8(%ebp),%eax
0834a0d6 +0x70:  mov    %edx,0x20(%eax)
0834a0d9 +0x73:  mov    0x10(%ebp),%eax
0834a0dc +0x76:  lea    0xf2c(%eax),%edx
0834a0e2 +0x7c:  mov    0x8(%ebp),%eax
0834a0e5 +0x7f:  add    $0x24,%eax
0834a0e8 +0x82:  mov    %edx,0x4(%esp)
0834a0ec +0x86:  mov    %eax,(%esp)
0834a0ef +0x89:  call   08388558 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17ff8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17ff8
0834a0f4 +0x8e:  mov    0x10(%ebp),%eax
0834a0f7 +0x91:  lea    0xf50(%eax),%edx
0834a0fd +0x97:  mov    0x8(%ebp),%eax
0834a100 +0x9a:  add    $0x30,%eax
0834a103 +0x9d:  mov    %edx,0x4(%esp)
0834a107 +0xa1:  mov    %eax,(%esp)
0834a10a +0xa4:  call   08366ea8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe74>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe74
0834a10f +0xa9:  mov    0x10(%ebp),%eax
0834a112 +0xac:  lea    0x4(%eax),%edx
0834a115 +0xaf:  mov    0x8(%ebp),%eax
0834a118 +0xb2:  add    $0x6c,%eax
0834a11b +0xb5:  mov    %edx,0x4(%esp)
0834a11f +0xb9:  mov    %eax,(%esp)
0834a122 +0xbc:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0834a127 +0xc1:  mov    0x10(%ebp),%eax
0834a12a +0xc4:  movzbl 0x100c(%eax),%edx
0834a131 +0xcb:  mov    0x8(%ebp),%eax
0834a134 +0xce:  mov    %dl,0x70(%eax)
0834a137 +0xd1:  leave
0834a138 +0xd2:  ret
0834a139 +0xd3:  nop
```

## 反编译 C

```c
// CAICharacter::set @ 0x834a066

/* CAICharacter::set(int, STAICharacterCommonScript const&) */

void __thiscall CAICharacter::set(CAICharacter *this,int param_1,STAICharacterCommonScript *param_2)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 0xd80);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 0xd84);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x10),
             (vector *)(param_2 + 0xd88));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 0xda4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 0xda8);
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::operator=
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0x24),(vector *)(param_2 + 0xf2c));
  stEnamyDropAvatarInfo_t::operator=
            ((stEnamyDropAvatarInfo_t *)(this + 0x30),(stEnamyDropAvatarInfo_t *)(param_2 + 0xf50));
  std::string::operator=((string *)(this + 0x6c),(string *)(param_2 + 4));
  this[0x70] = *(CAICharacter *)(param_2 + 0x100c);
  return;
}
```
