# PopInputStream

`_ZN6DNFLex14PopInputStreamEb`

`DNFLex::PopInputStream(bool)`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd490  _ZN6DNFLex14PopInputStreamEb
#           DNFLex::PopInputStream(bool)
# range [0x08acd490, 0x08acd5ae]
08acd490 +0x000:  push   %ebp
08acd491 +0x001:  mov    %esp,%ebp
08acd493 +0x003:  push   %esi
08acd494 +0x004:  push   %ebx
08acd495 +0x005:  sub    $0x20,%esp
08acd498 +0x008:  mov    0x8(%ebp),%ebx
08acd49b +0x00b:  movzbl 0xc(%ebp),%ecx
08acd49f +0x00f:  mov    0x84(%ebx),%edx
08acd4a5 +0x015:  mov    0x80(%ebx),%eax
08acd4ab +0x01b:  cmp    %eax,%edx
08acd4ad +0x01d:  je     08acd53c <+0xac>
08acd4b3 +0x023:  test   %cl,%cl
08acd4b5 +0x025:  je     08acd528 <+0x98>
08acd4b7 +0x027:  mov    %ebx,(%esp)
08acd4ba +0x02a:  call   08ad1d00 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv>  ; __dnf_script__FlexLexer::yypop_buffer_state()
08acd4bf +0x02f:  mov    0x84(%ebx),%eax
08acd4c5 +0x035:  sub    $0x10,%eax
08acd4c8 +0x038:  mov    %eax,(%esp)
08acd4cb +0x03b:  call   08acd450 <_ZN6DNFLex13stream_data_t7destroyEv>  ; DNFLex::stream_data_t::destroy()
08acd4d0 +0x040:  mov    0x84(%ebx),%esi
08acd4d6 +0x046:  lea    -0x18(%esi),%eax
08acd4d9 +0x049:  mov    %eax,0x84(%ebx)
08acd4df +0x04f:  mov    0x4(%eax),%eax
08acd4e2 +0x052:  sub    $0xc,%eax
08acd4e5 +0x055:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08acd4ea +0x05a:  jne    08acd56b <+0xdb>
08acd4ec +0x05c:  mov    -0x18(%esi),%eax
08acd4ef +0x05f:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08acd4f4 +0x064:  sub    $0xc,%eax
08acd4f7 +0x067:  cmp    %eax,%edx
08acd4f9 +0x069:  jne    08acd545 <+0xb5>
08acd4fb +0x06b:  mov    0x84(%ebx),%edx
08acd501 +0x071:  mov    $0x1,%eax
08acd506 +0x076:  cmp    0x80(%ebx),%edx
08acd50c +0x07c:  movl   $0x1,0x38(%ebx)
08acd513 +0x083:  je     08acd518 <+0x88>
08acd515 +0x085:  mov    -0x4(%edx),%eax
08acd518 +0x088:  mov    %eax,0xc(%ebx)
08acd51b +0x08b:  add    $0x20,%esp
08acd51e +0x08e:  mov    $0x1,%eax
08acd523 +0x093:  pop    %ebx
08acd524 +0x094:  pop    %esi
08acd525 +0x095:  pop    %ebp
08acd526 +0x096:  ret
08acd527 +0x097:  nop
08acd528 +0x098:  sub    %eax,%edx
08acd52a +0x09a:  sar    $0x3,%edx
08acd52d +0x09d:  imul   $0xaaaaaaab,%edx,%edx
08acd533 +0x0a3:  cmp    $0x1,%edx
08acd536 +0x0a6:  ja     08acd4b7 <+0x27>
08acd53c +0x0ac:  add    $0x20,%esp
08acd53f +0x0af:  xor    %eax,%eax
08acd541 +0x0b1:  pop    %ebx
08acd542 +0x0b2:  pop    %esi
08acd543 +0x0b3:  pop    %ebp
08acd544 +0x0b4:  ret
08acd545 +0x0b5:  mov    $&data#bb92cc41(.plt),%edx
08acd54a +0x0ba:  test   %edx,%edx
08acd54c +0x0bc:  je     08acd598 <+0x108>
08acd54e +0x0be:  or     $0xffffffff,%edx
08acd551 +0x0c1:  lock xadd %edx,0x8(%eax)
08acd556 +0x0c6:  test   %edx,%edx
08acd558 +0x0c8:  jg     08acd4fb <+0x6b>
08acd55a +0x0ca:  lea    -0xa(%ebp),%edx
08acd55d +0x0cd:  mov    %edx,0x4(%esp)
08acd561 +0x0d1:  mov    %eax,(%esp)
08acd564 +0x0d4:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd569 +0x0d9:  jmp    08acd4fb <+0x6b>
08acd56b +0x0db:  mov    $&data#bb92cc41(.plt),%edx
08acd570 +0x0e0:  test   %edx,%edx
08acd572 +0x0e2:  je     08acd5a3 <+0x113>
08acd574 +0x0e4:  or     $0xffffffff,%edx
08acd577 +0x0e7:  lock xadd %edx,0x8(%eax)
08acd57c +0x0ec:  test   %edx,%edx
08acd57e +0x0ee:  jg     08acd4ec <+0x5c>
08acd584 +0x0f4:  lea    -0x9(%ebp),%edx
08acd587 +0x0f7:  mov    %edx,0x4(%esp)
08acd58b +0x0fb:  mov    %eax,(%esp)
08acd58e +0x0fe:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd593 +0x103:  jmp    08acd4ec <+0x5c>
08acd598 +0x108:  mov    0x8(%eax),%edx
08acd59b +0x10b:  lea    -0x1(%edx),%ecx
08acd59e +0x10e:  mov    %ecx,0x8(%eax)
08acd5a1 +0x111:  jmp    08acd556 <+0xc6>
08acd5a3 +0x113:  mov    0x8(%eax),%edx
08acd5a6 +0x116:  lea    -0x1(%edx),%ecx
08acd5a9 +0x119:  mov    %ecx,0x8(%eax)
08acd5ac +0x11c:  jmp    08acd57c <+0xec>
08acd5ae +0x11e:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLex::PopInputStream @ 0x8acd490

/* WARNING: Removing unreachable block (ram,0x08acd5a3) */
/* WARNING: Removing unreachable block (ram,0x08acd598) */
/* DWARF original prototype: bool PopInputStream(DNFLex * this, bool pop_all) */

bool __thiscall DNFLex::PopInputStream(DNFLex *this,bool pop_all)

{
  int *piVar1;
  int iVar2;
  stream_t *psVar3;
  stream_t *psVar4;
  char *pcVar5;
  allocator *paVar6;
  uint uVar7;
  
  psVar3 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
  ;
  psVar4 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start;
  if ((psVar3 != psVar4) &&
     ((pop_all || (1 < (uint)(((int)psVar3 - (int)psVar4 >> 3) * -0x55555555))))) {
    __dnf_script__FlexLexer::yypop_buffer_state(&this->super___dnf_script__FlexLexer);
    stream_data_t::destroy
              (&(this->stream_stack_).
                super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
                _M_finish[-1].s);
    psVar3 = (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_finish;
    (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
    _M_impl._M_finish = psVar3 + -1;
    pcVar5 = psVar3[-1].filename._M_dataplus._M_p;
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
    pcVar5 = psVar3[-1].dir._M_dataplus._M_p;
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
    psVar4 = (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_finish;
    uVar7 = 1;
    psVar3 = (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_start;
    (this->super___dnf_script__FlexLexer).yy_start = 1;
    if (psVar4 != psVar3) {
      uVar7 = psVar4[-1].line_number;
    }
    (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno = uVar7;
    return true;
  }
  return false;
}
```
