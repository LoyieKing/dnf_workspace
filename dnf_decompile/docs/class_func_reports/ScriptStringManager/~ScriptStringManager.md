# ~ScriptStringManager

`_ZN19ScriptStringManagerD1Ev`

`ScriptStringManager::~ScriptStringManager()`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf5f0  _ZN19ScriptStringManagerD1Ev
#           ScriptStringManager::~ScriptStringManager()
# range [0x08acf5f0, 0x08acf6fa]
08acf5f0 +0x000:  push   %ebp
08acf5f1 +0x001:  mov    %esp,%ebp
08acf5f3 +0x003:  push   %edi
08acf5f4 +0x004:  push   %esi
08acf5f5 +0x005:  push   %ebx
08acf5f6 +0x006:  sub    $0x3c,%esp
08acf5f9 +0x009:  mov    0x8(%ebp),%ebx
08acf5fc +0x00c:  mov    0x18(%ebx),%eax
08acf5ff +0x00f:  movl   $&_ZTV19ScriptStringManager+0x8,(%ebx)
08acf605 +0x015:  mov    %eax,0x4(%esp)
08acf609 +0x019:  lea    0x10(%ebx),%eax
08acf60c +0x01c:  mov    %eax,(%esp)
08acf60f +0x01f:  call   0817ce4c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x293>  ; global constructors keyed to Arad_Script::Arad_Script()+0x293
08acf614 +0x024:  mov    0x8(%ebx),%edi
08acf617 +0x027:  mov    0x4(%ebx),%esi
08acf61a +0x02a:  cmp    %esi,%edi
08acf61c +0x02c:  je     08acf63b <+0x4b>
08acf61e +0x02e:  mov    $&data#bb92cc41(.plt),%edx
08acf623 +0x033:  nop
08acf624 +0x034:  lea    0x0(%esi,%eiz,1),%esi
08acf628 +0x038:  mov    (%esi),%eax
08acf62a +0x03a:  sub    $0xc,%eax
08acf62d +0x03d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acf632 +0x042:  jne    08acf652 <+0x62>
08acf634 +0x044:  add    $0x4,%esi
08acf637 +0x047:  cmp    %esi,%edi
08acf639 +0x049:  jne    08acf628 <+0x38>
08acf63b +0x04b:  mov    0x4(%ebx),%eax
08acf63e +0x04e:  test   %eax,%eax
08acf640 +0x050:  je     08acf64a <+0x5a>
08acf642 +0x052:  mov    %eax,(%esp)
08acf645 +0x055:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acf64a +0x05a:  add    $0x3c,%esp
08acf64d +0x05d:  pop    %ebx
08acf64e +0x05e:  pop    %esi
08acf64f +0x05f:  pop    %edi
08acf650 +0x060:  pop    %ebp
08acf651 +0x061:  ret
08acf652 +0x062:  test   %edx,%edx
08acf654 +0x064:  je     08acf6a5 <+0xb5>
08acf656 +0x066:  or     $0xffffffff,%ecx
08acf659 +0x069:  lock xadd %ecx,0x8(%eax)
08acf65e +0x06e:  mov    %ecx,-0x2c(%ebp)
08acf661 +0x071:  cmpl   $0x0,-0x2c(%ebp)
08acf665 +0x075:  jg     08acf634 <+0x44>
08acf667 +0x077:  lea    -0x1a(%ebp),%ecx
08acf66a +0x07a:  mov    %edx,-0x34(%ebp)
08acf66d +0x07d:  mov    %ecx,0x4(%esp)
08acf671 +0x081:  mov    %eax,(%esp)
08acf674 +0x084:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acf679 +0x089:  mov    -0x34(%ebp),%edx
08acf67c +0x08c:  jmp    08acf634 <+0x44>
08acf67e +0x08e:  mov    %eax,-0x30(%ebp)
08acf681 +0x091:  mov    0x8(%ebx),%eax
08acf684 +0x094:  mov    $&data#bb92cc41(.plt),%edi
08acf689 +0x099:  mov    0x4(%ebx),%esi
08acf68c +0x09c:  mov    %eax,-0x2c(%ebp)
08acf68f +0x09f:  cmp    %esi,-0x2c(%ebp)
08acf692 +0x0a2:  je     08acf6d4 <+0xe4>
08acf694 +0x0a4:  mov    (%esi),%eax
08acf696 +0x0a6:  sub    $0xc,%eax
08acf699 +0x0a9:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acf69e +0x0ae:  jne    08acf6b3 <+0xc3>
08acf6a0 +0x0b0:  add    $0x4,%esi
08acf6a3 +0x0b3:  jmp    08acf68f <+0x9f>
08acf6a5 +0x0b5:  mov    0x8(%eax),%ecx
08acf6a8 +0x0b8:  mov    %ecx,-0x2c(%ebp)
08acf6ab +0x0bb:  sub    $0x1,%ecx
08acf6ae +0x0be:  mov    %ecx,0x8(%eax)
08acf6b1 +0x0c1:  jmp    08acf661 <+0x71>
08acf6b3 +0x0c3:  test   %edi,%edi
08acf6b5 +0x0c5:  je     08acf6ee <+0xfe>
08acf6b7 +0x0c7:  or     $0xffffffff,%edx
08acf6ba +0x0ca:  lock xadd %edx,0x8(%eax)
08acf6bf +0x0cf:  test   %edx,%edx
08acf6c1 +0x0d1:  jg     08acf6a0 <+0xb0>
08acf6c3 +0x0d3:  lea    -0x19(%ebp),%edx
08acf6c6 +0x0d6:  mov    %edx,0x4(%esp)
08acf6ca +0x0da:  mov    %eax,(%esp)
08acf6cd +0x0dd:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acf6d2 +0x0e2:  jmp    08acf6a0 <+0xb0>
08acf6d4 +0x0e4:  mov    0x4(%ebx),%eax
08acf6d7 +0x0e7:  test   %eax,%eax
08acf6d9 +0x0e9:  je     08acf6e3 <+0xf3>
08acf6db +0x0eb:  mov    %eax,(%esp)
08acf6de +0x0ee:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acf6e3 +0x0f3:  mov    -0x30(%ebp),%ecx
08acf6e6 +0x0f6:  mov    %ecx,(%esp)
08acf6e9 +0x0f9:  call   08ae3750 <_Unwind_Resume>
08acf6ee +0x0fe:  mov    0x8(%eax),%edx
08acf6f1 +0x101:  lea    -0x1(%edx),%ecx
08acf6f4 +0x104:  mov    %ecx,0x8(%eax)
08acf6f7 +0x107:  jmp    08acf6bf <+0xcf>
08acf6f9 +0x109:  nop
08acf6fa +0x10a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// ScriptStringManager::~ScriptStringManager @ 0x8acf5f0

/* WARNING: Removing unreachable block (ram,0x08acf6a5) */
/* DWARF original prototype: void ~ScriptStringManager(ScriptStringManager * this, int __in_chrg) */

void __thiscall ScriptStringManager::~ScriptStringManager(ScriptStringManager *this,int __in_chrg)

{
  int *piVar1;
  int iVar2;
  _Base_ptr p_Var3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  char *pcVar5;
  allocator *paVar6;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar7;
  
  p_Var3 = (this->string_map_)._M_t._M_impl._M_header._M_parent;
  this->_vptr_ScriptStringManager = (_func_int_varargs **)&PTR__ScriptStringManager_08e2ec70;
                    /* try { // try from 08acf60f to 08acf613 has its CatchHandler @ 08acf67e */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              *)&this->string_map_,(_Rb_tree_node *)p_Var3);
  pbVar4 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_finish;
  for (pbVar7 = (this->strings_).
                super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                ._M_impl._M_start; pbVar4 != pbVar7; pbVar7 = pbVar7 + 1) {
    pcVar5 = (pbVar7->_M_dataplus)._M_p;
    paVar6 = (allocator *)(pcVar5 + -0xc);
    if (paVar6 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(pcVar5 + -4);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std::string::_Rep::_M_destroy(paVar6);
      }
    }
  }
  pbVar4 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_start;
  if (pbVar4 != (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0) {
    operator_delete(pbVar4);
  }
  return;
}
```
