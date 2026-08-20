# ~DNFLex

`_ZN6DNFLexD1Ev`

`DNFLex::~DNFLex()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd5f0  _ZN6DNFLexD1Ev
#           DNFLex::~DNFLex()
# range [0x08acd5f0, 0x08acd7aa]
08acd5f0 +0x000:  push   %ebp
08acd5f1 +0x001:  mov    %esp,%ebp
08acd5f3 +0x003:  push   %edi
08acd5f4 +0x004:  push   %esi
08acd5f5 +0x005:  push   %ebx
08acd5f6 +0x006:  sub    $0x3c,%esp
08acd5f9 +0x009:  mov    0x8(%ebp),%ebx
08acd5fc +0x00c:  movl   $&_ZTV6DNFLex+0x8,(%ebx)
08acd602 +0x012:  mov    %ebx,(%esp)
08acd605 +0x015:  call   08acd5b0 <_ZN6DNFLex16CloseInputStreamEv>  ; DNFLex::CloseInputStream()
08acd60a +0x01a:  mov    0x84(%ebx),%edi
08acd610 +0x020:  mov    0x80(%ebx),%esi
08acd616 +0x026:  cmp    %esi,%edi
08acd618 +0x028:  je     08acd640 <+0x50>
08acd61a +0x02a:  lea    -0x1b(%ebp),%edx
08acd61d +0x02d:  lea    0x0(%esi),%esi
08acd620 +0x030:  mov    0x4(%esi),%eax
08acd623 +0x033:  sub    $0xc,%eax
08acd626 +0x036:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acd62b +0x03b:  jne    08acd662 <+0x72>
08acd62d +0x03d:  mov    (%esi),%eax
08acd62f +0x03f:  sub    $0xc,%eax
08acd632 +0x042:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acd637 +0x047:  jne    08acd694 <+0xa4>
08acd639 +0x049:  add    $0x18,%esi
08acd63c +0x04c:  cmp    %esi,%edi
08acd63e +0x04e:  jne    08acd620 <+0x30>
08acd640 +0x050:  mov    0x80(%ebx),%eax
08acd646 +0x056:  test   %eax,%eax
08acd648 +0x058:  je     08acd652 <+0x62>
08acd64a +0x05a:  mov    %eax,(%esp)
08acd64d +0x05d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acd652 +0x062:  mov    %ebx,(%esp)
08acd655 +0x065:  call   08ad27e0 <_ZN23__dnf_script__FlexLexerD1Ev>  ; __dnf_script__FlexLexer::~__dnf_script__FlexLexer()
08acd65a +0x06a:  add    $0x3c,%esp
08acd65d +0x06d:  pop    %ebx
08acd65e +0x06e:  pop    %esi
08acd65f +0x06f:  pop    %edi
08acd660 +0x070:  pop    %ebp
08acd661 +0x071:  ret
08acd662 +0x072:  mov    $&data#bb92cc41(.plt),%ecx
08acd667 +0x077:  test   %ecx,%ecx
08acd669 +0x079:  je     08acd706 <+0x116>
08acd66f +0x07f:  or     $0xffffffff,%ecx
08acd672 +0x082:  lock xadd %ecx,0x8(%eax)
08acd677 +0x087:  mov    %ecx,-0x2c(%ebp)
08acd67a +0x08a:  cmpl   $0x0,-0x2c(%ebp)
08acd67e +0x08e:  jg     08acd62d <+0x3d>
08acd680 +0x090:  mov    %edx,0x4(%esp)
08acd684 +0x094:  mov    %edx,-0x34(%ebp)
08acd687 +0x097:  mov    %eax,(%esp)
08acd68a +0x09a:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd68f +0x09f:  mov    -0x34(%ebp),%edx
08acd692 +0x0a2:  jmp    08acd62d <+0x3d>
08acd694 +0x0a4:  mov    $&data#bb92cc41(.plt),%ecx
08acd699 +0x0a9:  test   %ecx,%ecx
08acd69b +0x0ab:  je     08acd717 <+0x127>
08acd69d +0x0ad:  or     $0xffffffff,%ecx
08acd6a0 +0x0b0:  lock xadd %ecx,0x8(%eax)
08acd6a5 +0x0b5:  mov    %ecx,-0x2c(%ebp)
08acd6a8 +0x0b8:  cmpl   $0x0,-0x2c(%ebp)
08acd6ac +0x0bc:  jg     08acd639 <+0x49>
08acd6ae +0x0be:  lea    -0x1c(%ebp),%ecx
08acd6b1 +0x0c1:  mov    %edx,-0x34(%ebp)
08acd6b4 +0x0c4:  mov    %ecx,0x4(%esp)
08acd6b8 +0x0c8:  mov    %eax,(%esp)
08acd6bb +0x0cb:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd6c0 +0x0d0:  mov    -0x34(%ebp),%edx
08acd6c3 +0x0d3:  jmp    08acd639 <+0x49>
08acd6c8 +0x0d8:  mov    %eax,-0x30(%ebp)
08acd6cb +0x0db:  mov    0x84(%ebx),%eax
08acd6d1 +0x0e1:  lea    -0x19(%ebp),%edi
08acd6d4 +0x0e4:  mov    0x80(%ebx),%esi
08acd6da +0x0ea:  mov    %eax,-0x2c(%ebp)
08acd6dd +0x0ed:  cmp    %esi,-0x2c(%ebp)
08acd6e0 +0x0f0:  je     08acd76e <+0x17e>
08acd6e6 +0x0f6:  mov    0x4(%esi),%eax
08acd6e9 +0x0f9:  sub    $0xc,%eax
08acd6ec +0x0fc:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acd6f1 +0x101:  jne    08acd74b <+0x15b>
08acd6f3 +0x103:  mov    (%esi),%eax
08acd6f5 +0x105:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08acd6fa +0x10a:  sub    $0xc,%eax
08acd6fd +0x10d:  cmp    %eax,%edx
08acd6ff +0x10f:  jne    08acd725 <+0x135>
08acd701 +0x111:  add    $0x18,%esi
08acd704 +0x114:  jmp    08acd6dd <+0xed>
08acd706 +0x116:  mov    0x8(%eax),%ecx
08acd709 +0x119:  mov    %ecx,-0x2c(%ebp)
08acd70c +0x11c:  sub    $0x1,%ecx
08acd70f +0x11f:  mov    %ecx,0x8(%eax)
08acd712 +0x122:  jmp    08acd67a <+0x8a>
08acd717 +0x127:  mov    0x8(%eax),%ecx
08acd71a +0x12a:  mov    %ecx,-0x2c(%ebp)
08acd71d +0x12d:  sub    $0x1,%ecx
08acd720 +0x130:  mov    %ecx,0x8(%eax)
08acd723 +0x133:  jmp    08acd6a8 <+0xb8>
08acd725 +0x135:  mov    $&data#bb92cc41(.plt),%edx
08acd72a +0x13a:  test   %edx,%edx
08acd72c +0x13c:  je     08acd793 <+0x1a3>
08acd72e +0x13e:  or     $0xffffffff,%edx
08acd731 +0x141:  lock xadd %edx,0x8(%eax)
08acd736 +0x146:  test   %edx,%edx
08acd738 +0x148:  jg     08acd701 <+0x111>
08acd73a +0x14a:  lea    -0x1a(%ebp),%edx
08acd73d +0x14d:  mov    %edx,0x4(%esp)
08acd741 +0x151:  mov    %eax,(%esp)
08acd744 +0x154:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd749 +0x159:  jmp    08acd701 <+0x111>
08acd74b +0x15b:  mov    $&data#bb92cc41(.plt),%edx
08acd750 +0x160:  test   %edx,%edx
08acd752 +0x162:  je     08acd79e <+0x1ae>
08acd754 +0x164:  or     $0xffffffff,%edx
08acd757 +0x167:  lock xadd %edx,0x8(%eax)
08acd75c +0x16c:  test   %edx,%edx
08acd75e +0x16e:  jg     08acd6f3 <+0x103>
08acd760 +0x170:  mov    %edi,0x4(%esp)
08acd764 +0x174:  mov    %eax,(%esp)
08acd767 +0x177:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd76c +0x17c:  jmp    08acd6f3 <+0x103>
08acd76e +0x17e:  mov    0x80(%ebx),%eax
08acd774 +0x184:  test   %eax,%eax
08acd776 +0x186:  je     08acd780 <+0x190>
08acd778 +0x188:  mov    %eax,(%esp)
08acd77b +0x18b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acd780 +0x190:  mov    %ebx,(%esp)
08acd783 +0x193:  call   08ad27e0 <_ZN23__dnf_script__FlexLexerD1Ev>  ; __dnf_script__FlexLexer::~__dnf_script__FlexLexer()
08acd788 +0x198:  mov    -0x30(%ebp),%ecx
08acd78b +0x19b:  mov    %ecx,(%esp)
08acd78e +0x19e:  call   08ae3750 <_Unwind_Resume>
08acd793 +0x1a3:  mov    0x8(%eax),%edx
08acd796 +0x1a6:  lea    -0x1(%edx),%ecx
08acd799 +0x1a9:  mov    %ecx,0x8(%eax)
08acd79c +0x1ac:  jmp    08acd736 <+0x146>
08acd79e +0x1ae:  mov    0x8(%eax),%edx
08acd7a1 +0x1b1:  lea    -0x1(%edx),%ecx
08acd7a4 +0x1b4:  mov    %ecx,0x8(%eax)
08acd7a7 +0x1b7:  jmp    08acd75c <+0x16c>
08acd7a9 +0x1b9:  nop
08acd7aa +0x1ba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLex::~DNFLex @ 0x8acd5f0

/* WARNING: Removing unreachable block (ram,0x08acd706) */
/* WARNING: Removing unreachable block (ram,0x08acd717) */
/* DWARF original prototype: void ~DNFLex(DNFLex * this, int __in_chrg) */

void __thiscall DNFLex::~DNFLex(DNFLex *this,int __in_chrg)

{
  int *piVar1;
  int iVar2;
  stream_t *psVar3;
  char *pcVar4;
  allocator *paVar5;
  stream_t *psVar6;
  undefined1 *in_stack_ffffffb8;
  undefined1 local_20;
  undefined1 local_1f [15];
  
  (this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer =
       (_func_int_varargs **)&PTR__DNFLex_08e2eba8;
                    /* try { // try from 08acd605 to 08acd609 has its CatchHandler @ 08acd6c8 */
  CloseInputStream(this);
  psVar3 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
  ;
  psVar6 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start;
  if (psVar3 != psVar6) {
    do {
      pcVar4 = (psVar6->filename)._M_dataplus._M_p;
      paVar5 = (allocator *)(pcVar4 + -0xc);
      if (paVar5 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar4 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          in_stack_ffffffb8 = local_1f;
          std::string::_Rep::_M_destroy(paVar5);
        }
      }
      pcVar4 = (psVar6->dir)._M_dataplus._M_p;
      paVar5 = (allocator *)(pcVar4 + -0xc);
      if (paVar5 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar4 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          in_stack_ffffffb8 = &local_20;
          std::string::_Rep::_M_destroy(paVar5);
        }
      }
      psVar6 = psVar6 + 1;
    } while (psVar3 != psVar6);
  }
  psVar3 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start;
  if (psVar3 != (stream_t *)0x0) {
    operator_delete(psVar3);
  }
  __dnf_script__FlexLexer::~__dnf_script__FlexLexer
            (&this->super___dnf_script__FlexLexer,(int)in_stack_ffffffb8);
  return;
}
```
