# PushInputStream

`_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE`

`DNFLex::PushInputStream(char const*, char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd7d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd7d0  _ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE
#           DNFLex::PushInputStream(char const*, char const*, DNFLex::stream_data_t*)
# range [0x08acd7d0, 0x08acda4f]
08acd7d0 +0x000:  push   %ebp
08acd7d1 +0x001:  xor    %eax,%eax
08acd7d3 +0x003:  mov    %esp,%ebp
08acd7d5 +0x005:  mov    $&data#2fb52a47(.rodata),%edx
08acd7da +0x00a:  push   %edi
08acd7db +0x00b:  push   %esi
08acd7dc +0x00c:  push   %ebx
08acd7dd +0x00d:  sub    $0x4c,%esp
08acd7e0 +0x010:  mov    0xc(%ebp),%ecx
08acd7e3 +0x013:  mov    0x8(%ebp),%ebx
08acd7e6 +0x016:  mov    0x10(%ebp),%edi
08acd7e9 +0x019:  mov    0x14(%ebp),%esi
08acd7ec +0x01c:  test   %ecx,%ecx
08acd7ee +0x01e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x34(%ebp)
08acd7f5 +0x025:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x30(%ebp)
08acd7fc +0x02c:  je     08acd80c <+0x3c>
08acd7fe +0x02e:  mov    0xc(%ebp),%eax
08acd801 +0x031:  mov    %eax,(%esp)
08acd804 +0x034:  call   0807e3b0 <_init+0xca8>
08acd809 +0x039:  mov    0xc(%ebp),%edx
08acd80c +0x03c:  mov    %eax,0x8(%esp)
08acd810 +0x040:  lea    -0x34(%ebp),%eax
08acd813 +0x043:  mov    %edx,0x4(%esp)
08acd817 +0x047:  mov    %eax,(%esp)
08acd81a +0x04a:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
08acd81f +0x04f:  xor    %eax,%eax
08acd821 +0x051:  test   %edi,%edi
08acd823 +0x053:  mov    $&data#2fb52a47(.rodata),%edx
08acd828 +0x058:  je     08acd834 <+0x64>
08acd82a +0x05a:  mov    %edi,(%esp)
08acd82d +0x05d:  call   0807e3b0 <_init+0xca8>
08acd832 +0x062:  mov    %edi,%edx
08acd834 +0x064:  mov    %eax,0x8(%esp)
08acd838 +0x068:  lea    -0x30(%ebp),%eax
08acd83b +0x06b:  mov    %edx,0x4(%esp)
08acd83f +0x06f:  mov    %eax,(%esp)
08acd842 +0x072:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
08acd847 +0x077:  test   %esi,%esi
08acd849 +0x079:  je     08acd938 <+0x168>
08acd84f +0x07f:  mov    (%esi),%eax
08acd851 +0x081:  mov    %eax,-0x2c(%ebp)
08acd854 +0x084:  mov    0x4(%esi),%eax
08acd857 +0x087:  mov    %eax,-0x28(%ebp)
08acd85a +0x08a:  mov    0x8(%esi),%eax
08acd85d +0x08d:  mov    %eax,-0x24(%ebp)
08acd860 +0x090:  mov    0x84(%ebx),%esi
08acd866 +0x096:  cmp    0x80(%ebx),%esi
08acd86c +0x09c:  mov    %esi,%eax
08acd86e +0x09e:  je     08acd878 <+0xa8>
08acd870 +0x0a0:  mov    0xc(%ebx),%eax
08acd873 +0x0a3:  mov    %eax,-0x4(%esi)
08acd876 +0x0a6:  mov    %esi,%eax
08acd878 +0x0a8:  cmp    %esi,0x88(%ebx)
08acd87e +0x0ae:  je     08acd990 <+0x1c0>
08acd884 +0x0b4:  test   %esi,%esi
08acd886 +0x0b6:  je     08acd8c7 <+0xf7>
08acd888 +0x0b8:  lea    -0x34(%ebp),%eax
08acd88b +0x0bb:  mov    %eax,0x4(%esp)
08acd88f +0x0bf:  mov    %esi,(%esp)
08acd892 +0x0c2:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acd897 +0x0c7:  lea    -0x30(%ebp),%eax
08acd89a +0x0ca:  mov    %eax,0x4(%esp)
08acd89e +0x0ce:  lea    0x4(%esi),%eax
08acd8a1 +0x0d1:  mov    %eax,(%esp)
08acd8a4 +0x0d4:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acd8a9 +0x0d9:  mov    -0x2c(%ebp),%eax
08acd8ac +0x0dc:  mov    %eax,0x8(%esi)
08acd8af +0x0df:  mov    -0x28(%ebp),%eax
08acd8b2 +0x0e2:  mov    %eax,0xc(%esi)
08acd8b5 +0x0e5:  mov    -0x24(%ebp),%eax
08acd8b8 +0x0e8:  mov    %eax,0x10(%esi)
08acd8bb +0x0eb:  mov    -0x20(%ebp),%eax
08acd8be +0x0ee:  mov    %eax,0x14(%esi)
08acd8c1 +0x0f1:  mov    0x84(%ebx),%eax
08acd8c7 +0x0f7:  add    $0x18,%eax
08acd8ca +0x0fa:  mov    %eax,0x84(%ebx)
08acd8d0 +0x100:  mov    -0x28(%ebp),%edx
08acd8d3 +0x103:  mov    (%ebx),%eax
08acd8d5 +0x105:  mov    %ebx,(%esp)
08acd8d8 +0x108:  mov    %edx,0x8(%esp)
08acd8dc +0x10c:  mov    -0x2c(%ebp),%edx
08acd8df +0x10f:  mov    %edx,0x4(%esp)
08acd8e3 +0x113:  call   *0xc(%eax)
08acd8e6 +0x116:  mov    %eax,0x4(%esp)
08acd8ea +0x11a:  mov    %ebx,(%esp)
08acd8ed +0x11d:  call   08ad2420 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state>  ; __dnf_script__FlexLexer::yypush_buffer_state(yy_buffer_state*)
08acd8f2 +0x122:  movl   $0x1,0x38(%ebx)
08acd8f9 +0x129:  mov    $0x1,%eax
08acd8fe +0x12e:  movl   $0x1,0xc(%ebx)
08acd905 +0x135:  mov    -0x30(%ebp),%edx
08acd908 +0x138:  sub    $0xc,%edx
08acd90b +0x13b:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08acd911 +0x141:  jne    08acd9ae <+0x1de>
08acd917 +0x147:  mov    -0x34(%ebp),%edx
08acd91a +0x14a:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
08acd91f +0x14f:  sub    $0xc,%edx
08acd922 +0x152:  cmp    %edx,%ecx
08acd924 +0x154:  jne    08acd9e2 <+0x212>
08acd92a +0x15a:  add    $0x4c,%esp
08acd92d +0x15d:  pop    %ebx
08acd92e +0x15e:  pop    %esi
08acd92f +0x15f:  pop    %edi
08acd930 +0x160:  pop    %ebp
08acd931 +0x161:  ret
08acd932 +0x162:  lea    0x0(%esi),%esi
08acd938 +0x168:  lea    -0x2c(%ebp),%eax
08acd93b +0x16b:  mov    %eax,0xc(%esp)
08acd93f +0x16f:  mov    0xc(%ebp),%eax
08acd942 +0x172:  mov    %edi,0x8(%esp)
08acd946 +0x176:  mov    %ebx,(%esp)
08acd949 +0x179:  mov    %eax,0x4(%esp)
08acd94d +0x17d:  call   08acd220 <_ZN6DNFLex10LoadStreamEPKcS1_PNS_13stream_data_tE>  ; DNFLex::LoadStream(char const*, char const*, DNFLex::stream_data_t*)
08acd952 +0x182:  test   %al,%al
08acd954 +0x184:  jne    08acd860 <+0x90>
08acd95a +0x18a:  lea    0x8c(%ebx),%esi
08acd960 +0x190:  movl   $&_ZZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tEE12__FUNCTION__,0x8(%esp)
08acd968 +0x198:  movl   $"%s - DNFLex::ReadStream failed.",0x4(%esp)
08acd970 +0x1a0:  mov    %esi,(%esp)
08acd973 +0x1a3:  call   0807e440 <_init+0xd38>
08acd978 +0x1a8:  mov    (%ebx),%eax
08acd97a +0x1aa:  mov    %esi,0x4(%esp)
08acd97e +0x1ae:  mov    %ebx,(%esp)
08acd981 +0x1b1:  call   *0x2c(%eax)
08acd984 +0x1b4:  xor    %eax,%eax
08acd986 +0x1b6:  jmp    08acd905 <+0x135>
08acd98b +0x1bb:  nop
08acd98c +0x1bc:  lea    0x0(%esi,%eiz,1),%esi
08acd990 +0x1c0:  lea    -0x34(%ebp),%eax
08acd993 +0x1c3:  mov    %eax,0x8(%esp)
08acd997 +0x1c7:  lea    0x80(%ebx),%eax
08acd99d +0x1cd:  mov    %esi,0x4(%esp)
08acd9a1 +0x1d1:  mov    %eax,(%esp)
08acd9a4 +0x1d4:  call   08acdcc0 <_ZN6DNFLex14get_next_tokenEv+0x220>  ; DNFLex::get_next_token()+0x220
08acd9a9 +0x1d9:  jmp    08acd8d0 <+0x100>
08acd9ae +0x1de:  mov    $&data#bb92cc41(.plt),%ecx
08acd9b3 +0x1e3:  test   %ecx,%ecx
08acd9b5 +0x1e5:  je     08acda2d <+0x25d>
08acd9b7 +0x1e7:  or     $0xffffffff,%ecx
08acd9ba +0x1ea:  lock xadd %ecx,0x8(%edx)
08acd9bf +0x1ef:  test   %ecx,%ecx
08acd9c1 +0x1f1:  jg     08acd917 <+0x147>
08acd9c7 +0x1f7:  lea    -0x19(%ebp),%ecx
08acd9ca +0x1fa:  mov    %al,-0x3c(%ebp)
08acd9cd +0x1fd:  mov    %ecx,0x4(%esp)
08acd9d1 +0x201:  mov    %edx,(%esp)
08acd9d4 +0x204:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acd9d9 +0x209:  movzbl -0x3c(%ebp),%eax
08acd9dd +0x20d:  jmp    08acd917 <+0x147>
08acd9e2 +0x212:  mov    $&data#bb92cc41(.plt),%ecx
08acd9e7 +0x217:  test   %ecx,%ecx
08acd9e9 +0x219:  je     08acda44 <+0x274>
08acd9eb +0x21b:  or     $0xffffffff,%ecx
08acd9ee +0x21e:  lock xadd %ecx,0x8(%edx)
08acd9f3 +0x223:  test   %ecx,%ecx
08acd9f5 +0x225:  jg     08acd92a <+0x15a>
08acd9fb +0x22b:  lea    -0x1a(%ebp),%ecx
08acd9fe +0x22e:  mov    %al,-0x3c(%ebp)
08acda01 +0x231:  mov    %ecx,0x4(%esp)
08acda05 +0x235:  mov    %edx,(%esp)
08acda08 +0x238:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08acda0d +0x23d:  movzbl -0x3c(%ebp),%eax
08acda11 +0x241:  jmp    08acd92a <+0x15a>
08acda16 +0x246:  mov    %eax,%ebx
08acda18 +0x248:  lea    -0x34(%ebp),%eax
08acda1b +0x24b:  mov    %eax,(%esp)
08acda1e +0x24e:  call   08acdc30 <_ZN6DNFLex14get_next_tokenEv+0x190>  ; DNFLex::get_next_token()+0x190
08acda23 +0x253:  mov    %ebx,(%esp)
08acda26 +0x256:  call   08ae3750 <_Unwind_Resume>
08acda2b +0x25b:  jmp    08acda16 <+0x246>
08acda2d +0x25d:  mov    0x8(%edx),%ecx
08acda30 +0x260:  lea    -0x1(%ecx),%ebx
08acda33 +0x263:  mov    %ebx,0x8(%edx)
08acda36 +0x266:  jmp    08acd9bf <+0x1ef>
08acda38 +0x268:  mov    %eax,%ebx
08acda3a +0x26a:  mov    %esi,(%esp)
08acda3d +0x26d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acda42 +0x272:  jmp    08acda18 <+0x248>
08acda44 +0x274:  mov    0x8(%edx),%ecx
08acda47 +0x277:  lea    -0x1(%ecx),%ebx
08acda4a +0x27a:  mov    %ebx,0x8(%edx)
08acda4d +0x27d:  jmp    08acd9f3 <+0x223>
08acda4f +0x27f:  nop
```

## 反编译 C

```c
// DNFLex::PushInputStream @ 0x8acd7d0

/* WARNING: Removing unreachable block (ram,0x08acda2d) */
/* WARNING: Removing unreachable block (ram,0x08acda44) */
/* DWARF original prototype: bool PushInputStream(DNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall DNFLex::PushInputStream(DNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  int *piVar1;
  int iVar2;
  __normal_iterator<DNFLex::stream_t*,_std::vector<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>_>
  __position;
  bool bVar3;
  uint uVar4;
  stream_t *psVar5;
  YY_BUFFER_STATE new_buffer;
  char *pcVar6;
  undefined1 local_38 [4];
  tstring local_34;
  stream_data_t local_30;
  uint local_24;
  
                    /* Unresolved local var: stream_t stream@[???] */
  uVar4 = 0;
  local_38 = (undefined1  [4])&DAT_0948ccfc;
  local_34._M_dataplus._M_p = (_Alloc_hider)&DAT_0948ccfc;
  pcVar6 = "";
  if (dir != (TCHAR *)0x0) {
    uVar4 = strlen(dir);
    pcVar6 = dir;
  }
                    /* try { // try from 08acd81a to 08acd846 has its CatchHandler @ 08acda16 */
  std::string::assign((string *)local_38,pcVar6,uVar4);
  uVar4 = 0;
  pcVar6 = "";
  if (filename != (TCHAR *)0x0) {
    uVar4 = strlen(filename);
    pcVar6 = filename;
  }
  std::string::assign((string *)&local_34,pcVar6,uVar4);
  if (s == (stream_data_t *)0x0) {
    bVar3 = LoadStream(this,dir,filename,&local_30);
    if (!bVar3) {
      sprintf(this->ERR_BUF,"%s - DNFLex::ReadStream failed.","PushInputStream");
      (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                (this,this->ERR_BUF);
      bVar3 = false;
      goto LAB_08acd905;
    }
  }
  else {
    local_30.stream = s->stream;
    local_30.size = s->size;
    local_30.buffer = s->buffer;
  }
  __position._M_current =
       (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>
       ._M_impl._M_finish;
  if (__position._M_current !=
      (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_start) {
    __position._M_current[-1].line_number =
         (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
  }
  if ((this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_end_of_storage == __position._M_current) {
    std::vector<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>::
    _M_insert_aux<const_DNFLex::stream_t&>(&this->stream_stack_,__position,(stream_t *)local_38);
  }
  else {
    psVar5 = (stream_t *)0x0;
    if (__position._M_current != (stream_t *)0x0) {
                    /* try { // try from 08acd892 to 08acd896 has its CatchHandler @ 08acda2b */
      std::string::string((string *)__position._M_current,(string *)local_38);
                    /* try { // try from 08acd8a4 to 08acd8a8 has its CatchHandler @ 08acda38 */
      std::string::string((string *)&(__position._M_current)->filename,(string *)&local_34);
      ((__position._M_current)->s).stream = local_30.stream;
      ((__position._M_current)->s).size = local_30.size;
      ((__position._M_current)->s).buffer = local_30.buffer;
      (__position._M_current)->line_number = local_24;
      psVar5 = (this->stream_stack_).
               super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
               _M_finish;
    }
    (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
    _M_impl._M_finish = psVar5 + 1;
  }
                    /* try { // try from 08acd8e3 to 08acd9a8 has its CatchHandler @ 08acda16 */
  new_buffer = (YY_BUFFER_STATE)
               (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[3])
                         (this,local_30.stream,local_30.size);
  __dnf_script__FlexLexer::yypush_buffer_state(&this->super___dnf_script__FlexLexer,new_buffer);
  (this->super___dnf_script__FlexLexer).yy_start = 1;
  bVar3 = true;
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno = 1;
LAB_08acd905:
  if ((allocator *)((int)local_34._M_dataplus._M_p + -0xc) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)((int)local_34._M_dataplus._M_p + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_34._M_dataplus._M_p + -0xc));
    }
  }
  if ((allocator *)((int)local_38 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar1 = (int *)((int)local_38 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_38 + -0xc));
    }
  }
  return bVar3;
}
```
