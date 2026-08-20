# UpdateCharacName

`_ZN20UserMercenaryInfoMgr16UpdateCharacNameEjRKSs`

`UserMercenaryInfoMgr::UpdateCharacName(unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b462e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b462e  _ZN20UserMercenaryInfoMgr16UpdateCharacNameEjRKSs
#           UserMercenaryInfoMgr::UpdateCharacName(unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x081b462e, 0x081b46d1]
081b462e +0x00:  push   %ebp
081b462f +0x01:  mov    %esp,%ebp
081b4631 +0x03:  push   %ebx
081b4632 +0x04:  sub    $0x24,%esp
081b4635 +0x07:  mov    0xc(%ebp),%eax
081b4638 +0x0a:  mov    %eax,0x4(%esp)
081b463c +0x0e:  mov    0x8(%ebp),%eax
081b463f +0x11:  mov    %eax,(%esp)
081b4642 +0x14:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
081b4647 +0x19:  mov    %eax,-0xc(%ebp)
081b464a +0x1c:  mov    -0xc(%ebp),%eax
081b464d +0x1f:  movzbl %al,%eax
081b4650 +0x22:  mov    %eax,0x4(%esp)
081b4654 +0x26:  mov    0x8(%ebp),%eax
081b4657 +0x29:  mov    %eax,(%esp)
081b465a +0x2c:  call   081b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>  ; UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
081b465f +0x31:  xor    $0x1,%eax
081b4662 +0x34:  test   %al,%al
081b4664 +0x36:  jne    081b46cb <+0x9d>
081b4666 +0x38:  mov    -0xc(%ebp),%edx
081b4669 +0x3b:  mov    0x8(%ebp),%eax
081b466c +0x3e:  mov    %edx,0x4(%esp)
081b4670 +0x42:  mov    %eax,(%esp)
081b4673 +0x45:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b4678 +0x4a:  add    $0x6,%eax
081b467b +0x4d:  movl   $0x1e,0x8(%esp)
081b4683 +0x55:  movl   $0x0,0x4(%esp)
081b468b +0x5d:  mov    %eax,(%esp)
081b468e +0x60:  call   0807dcc0 <_init+0x5b8>
081b4693 +0x65:  mov    0x10(%ebp),%eax
081b4696 +0x68:  mov    %eax,(%esp)
081b4699 +0x6b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081b469e +0x70:  mov    %eax,%ebx
081b46a0 +0x72:  mov    -0xc(%ebp),%edx
081b46a3 +0x75:  mov    0x8(%ebp),%eax
081b46a6 +0x78:  mov    %edx,0x4(%esp)
081b46aa +0x7c:  mov    %eax,(%esp)
081b46ad +0x7f:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b46b2 +0x84:  add    $0x6,%eax
081b46b5 +0x87:  movl   $0x1d,0x8(%esp)
081b46bd +0x8f:  mov    %ebx,0x4(%esp)
081b46c1 +0x93:  mov    %eax,(%esp)
081b46c4 +0x96:  call   0807d8d0 <_init+0x1c8>
081b46c9 +0x9b:  jmp    081b46cc <+0x9e>
081b46cb +0x9d:  nop
081b46cc +0x9e:  add    $0x24,%esp
081b46cf +0xa1:  pop    %ebx
081b46d0 +0xa2:  pop    %ebp
081b46d1 +0xa3:  ret
```

## 反编译 C

```c
// UserMercenaryInfoMgr::UpdateCharacName @ 0x81b462e

/* UserMercenaryInfoMgr::UpdateCharacName(unsigned int, std::string const&) */

void __thiscall
UserMercenaryInfoMgr::UpdateCharacName(UserMercenaryInfoMgr *this,uint param_1,string *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *__src;
  
  uVar2 = FindIndexByCharacNo(this,param_1);
  cVar1 = CheckCharacIndex(this,(uchar)uVar2);
  if (cVar1 == '\x01') {
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                       uVar2);
    memset((void *)(iVar3 + 6),0,0x1e);
    __src = (char *)std::string::c_str((string *)param_2);
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,
                       uVar2);
    strncpy((char *)(iVar3 + 6),__src,0x1d);
  }
  return;
}
```
