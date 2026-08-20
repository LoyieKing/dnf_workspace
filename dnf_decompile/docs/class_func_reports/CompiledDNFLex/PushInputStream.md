# PushInputStream

`_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj`

`CompiledDNFLex::PushInputStream(char const*, char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0a00  _ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj
#           CompiledDNFLex::PushInputStream(char const*, char const*, char*, unsigned int)
# range [0x08ad0a00, 0x08ad0c79]
08ad0a00 +0x000:  push   %ebp
08ad0a01 +0x001:  mov    %esp,%ebp
08ad0a03 +0x003:  push   %edi
08ad0a04 +0x004:  push   %esi
08ad0a05 +0x005:  push   %ebx
08ad0a06 +0x006:  sub    $0x4c,%esp
08ad0a09 +0x009:  mov    0xc(%ebp),%edx
08ad0a0c +0x00c:  mov    0x8(%ebp),%ebx
08ad0a0f +0x00f:  mov    0x10(%ebp),%esi
08ad0a12 +0x012:  mov    0x14(%ebp),%edi
08ad0a15 +0x015:  test   %edx,%edx
08ad0a17 +0x017:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x30(%ebp)
08ad0a1e +0x01e:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x2c(%ebp)
08ad0a25 +0x025:  je     08ad0b98 <+0x198>
08ad0a2b +0x02b:  mov    %edx,(%esp)
08ad0a2e +0x02e:  mov    %edx,-0x40(%ebp)
08ad0a31 +0x031:  call   0807e3b0 <_init+0xca8>
08ad0a36 +0x036:  mov    -0x40(%ebp),%edx
08ad0a39 +0x039:  mov    %eax,0x8(%esp)
08ad0a3d +0x03d:  lea    -0x30(%ebp),%eax
08ad0a40 +0x040:  mov    %edx,0x4(%esp)
08ad0a44 +0x044:  mov    %eax,(%esp)
08ad0a47 +0x047:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
08ad0a4c +0x04c:  test   %esi,%esi
08ad0a4e +0x04e:  je     08ad0b88 <+0x188>
08ad0a54 +0x054:  mov    %esi,(%esp)
08ad0a57 +0x057:  call   0807e3b0 <_init+0xca8>
08ad0a5c +0x05c:  mov    %eax,0x8(%esp)
08ad0a60 +0x060:  lea    -0x2c(%ebp),%eax
08ad0a63 +0x063:  mov    %esi,0x4(%esp)
08ad0a67 +0x067:  mov    %eax,(%esp)
08ad0a6a +0x06a:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
08ad0a6f +0x06f:  mov    0x18(%ebp),%eax
08ad0a72 +0x072:  test   %edi,%edi
08ad0a74 +0x074:  mov    %edi,-0x24(%ebp)
08ad0a77 +0x077:  mov    %eax,-0x28(%ebp)
08ad0a7a +0x07a:  je     08ad0a84 <+0x84>
08ad0a7c +0x07c:  test   %eax,%eax
08ad0a7e +0x07e:  movb   $0x1,-0x39(%ebp)
08ad0a82 +0x082:  je     08ad0ad4 <+0xd4>
08ad0a84 +0x084:  cmpl   $0x1,0x18(%ebp)
08ad0a88 +0x088:  jbe    08ad0bc0 <+0x1c0>
08ad0a8e +0x08e:  cmpw   $0xd0b0,(%edi)
08ad0a93 +0x093:  je     08ad0ad0 <+0xd0>
08ad0a95 +0x095:  mov    %edi,(%esp)
08ad0a98 +0x098:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad0a9d +0x09d:  xor    %eax,%eax
08ad0a9f +0x09f:  mov    -0x2c(%ebp),%edx
08ad0aa2 +0x0a2:  sub    $0xc,%edx
08ad0aa5 +0x0a5:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08ad0aab +0x0ab:  jne    08ad0bc7 <+0x1c7>
08ad0ab1 +0x0b1:  mov    -0x30(%ebp),%edx
08ad0ab4 +0x0b4:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
08ad0ab9 +0x0b9:  sub    $0xc,%edx
08ad0abc +0x0bc:  cmp    %edx,%ecx
08ad0abe +0x0be:  jne    08ad0c01 <+0x201>
08ad0ac4 +0x0c4:  add    $0x4c,%esp
08ad0ac7 +0x0c7:  pop    %ebx
08ad0ac8 +0x0c8:  pop    %esi
08ad0ac9 +0x0c9:  pop    %edi
08ad0aca +0x0ca:  pop    %ebp
08ad0acb +0x0cb:  ret
08ad0acc +0x0cc:  lea    0x0(%esi,%eiz,1),%esi
08ad0ad0 +0x0d0:  movb   $0x0,-0x39(%ebp)
08ad0ad4 +0x0d4:  mov    0x2030(%ebx),%esi
08ad0ada +0x0da:  cmp    0x2020(%ebx),%esi
08ad0ae0 +0x0e0:  mov    %esi,%edx
08ad0ae2 +0x0e2:  mov    %esi,%eax
08ad0ae4 +0x0e4:  je     08ad0b00 <+0x100>
08ad0ae6 +0x0e6:  cmp    0x2034(%ebx),%esi
08ad0aec +0x0ec:  mov    0x203c(%ebx),%eax
08ad0af2 +0x0f2:  je     08ad0b78 <+0x178>
08ad0af8 +0x0f8:  mov    0x4(%ebx),%eax
08ad0afb +0x0fb:  mov    %eax,-0x4(%edx)
08ad0afe +0x0fe:  mov    %esi,%eax
08ad0b00 +0x100:  mov    0x2038(%ebx),%edx
08ad0b06 +0x106:  sub    $0x14,%edx
08ad0b09 +0x109:  cmp    %edx,%esi
08ad0b0b +0x10b:  je     08ad0ba8 <+0x1a8>
08ad0b11 +0x111:  test   %esi,%esi
08ad0b13 +0x113:  je     08ad0b4e <+0x14e>
08ad0b15 +0x115:  lea    -0x30(%ebp),%eax
08ad0b18 +0x118:  mov    %eax,0x4(%esp)
08ad0b1c +0x11c:  mov    %esi,(%esp)
08ad0b1f +0x11f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08ad0b24 +0x124:  lea    -0x2c(%ebp),%eax
08ad0b27 +0x127:  mov    %eax,0x4(%esp)
08ad0b2b +0x12b:  lea    0x4(%esi),%eax
08ad0b2e +0x12e:  mov    %eax,(%esp)
08ad0b31 +0x131:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08ad0b36 +0x136:  mov    -0x28(%ebp),%eax
08ad0b39 +0x139:  mov    %eax,0x8(%esi)
08ad0b3c +0x13c:  mov    -0x24(%ebp),%eax
08ad0b3f +0x13f:  mov    %eax,0xc(%esi)
08ad0b42 +0x142:  mov    -0x20(%ebp),%eax
08ad0b45 +0x145:  mov    %eax,0x10(%esi)
08ad0b48 +0x148:  mov    0x2030(%ebx),%eax
08ad0b4e +0x14e:  add    $0x14,%eax
08ad0b51 +0x151:  mov    %eax,0x2030(%ebx)
08ad0b57 +0x157:  mov    -0x24(%ebp),%edx
08ad0b5a +0x15a:  mov    $0x1,%eax
08ad0b5f +0x15f:  cmpb   $0x0,-0x39(%ebp)
08ad0b63 +0x163:  mov    %edx,0x4(%ebx)
08ad0b66 +0x166:  jne    08ad0a9f <+0x9f>
08ad0b6c +0x16c:  add    $0x2,%edx
08ad0b6f +0x16f:  mov    %edx,0x4(%ebx)
08ad0b72 +0x172:  jmp    08ad0a9f <+0x9f>
08ad0b77 +0x177:  nop
08ad0b78 +0x178:  mov    -0x4(%eax),%edx
08ad0b7b +0x17b:  add    $0x1f4,%edx
08ad0b81 +0x181:  jmp    08ad0af8 <+0xf8>
08ad0b86 +0x186:  xchg   %ax,%ax
08ad0b88 +0x188:  xor    %eax,%eax
08ad0b8a +0x18a:  mov    $&data#2fb52a47(.rodata),%esi
08ad0b8f +0x18f:  jmp    08ad0a5c <+0x5c>
08ad0b94 +0x194:  lea    0x0(%esi,%eiz,1),%esi
08ad0b98 +0x198:  xor    %eax,%eax
08ad0b9a +0x19a:  mov    $&data#2fb52a47(.rodata),%edx
08ad0b9f +0x19f:  jmp    08ad0a39 <+0x39>
08ad0ba4 +0x1a4:  lea    0x0(%esi,%eiz,1),%esi
08ad0ba8 +0x1a8:  lea    -0x30(%ebp),%eax
08ad0bab +0x1ab:  mov    %eax,0x4(%esp)
08ad0baf +0x1af:  lea    0x2018(%ebx),%eax
08ad0bb5 +0x1b5:  mov    %eax,(%esp)
08ad0bb8 +0x1b8:  call   08ad13b0 <_ZN14CompiledDNFLex8getTokenEv+0x410>  ; CompiledDNFLex::getToken()+0x410
08ad0bbd +0x1bd:  jmp    08ad0b57 <+0x157>
08ad0bbf +0x1bf:  nop
08ad0bc0 +0x1c0:  xor    %eax,%eax
08ad0bc2 +0x1c2:  jmp    08ad0a9f <+0x9f>
08ad0bc7 +0x1c7:  mov    $&data#bb92cc41(.plt),%ecx
08ad0bcc +0x1cc:  test   %ecx,%ecx
08ad0bce +0x1ce:  xchg   %ax,%ax
08ad0bd0 +0x1d0:  je     08ad0c56 <+0x256>
08ad0bd6 +0x1d6:  or     $0xffffffff,%ecx
08ad0bd9 +0x1d9:  lock xadd %ecx,0x8(%edx)
08ad0bde +0x1de:  test   %ecx,%ecx
08ad0be0 +0x1e0:  jg     08ad0ab1 <+0xb1>
08ad0be6 +0x1e6:  lea    -0x19(%ebp),%ecx
08ad0be9 +0x1e9:  mov    %al,-0x40(%ebp)
08ad0bec +0x1ec:  mov    %ecx,0x4(%esp)
08ad0bf0 +0x1f0:  mov    %edx,(%esp)
08ad0bf3 +0x1f3:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad0bf8 +0x1f8:  movzbl -0x40(%ebp),%eax
08ad0bfc +0x1fc:  jmp    08ad0ab1 <+0xb1>
08ad0c01 +0x201:  mov    $&data#bb92cc41(.plt),%ecx
08ad0c06 +0x206:  test   %ecx,%ecx
08ad0c08 +0x208:  je     08ad0c66 <+0x266>
08ad0c0a +0x20a:  or     $0xffffffff,%ecx
08ad0c0d +0x20d:  lock xadd %ecx,0x8(%edx)
08ad0c12 +0x212:  test   %ecx,%ecx
08ad0c14 +0x214:  jg     08ad0ac4 <+0xc4>
08ad0c1a +0x21a:  lea    -0x1a(%ebp),%ecx
08ad0c1d +0x21d:  mov    %al,-0x40(%ebp)
08ad0c20 +0x220:  mov    %ecx,0x4(%esp)
08ad0c24 +0x224:  mov    %edx,(%esp)
08ad0c27 +0x227:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad0c2c +0x22c:  movzbl -0x40(%ebp),%eax
08ad0c30 +0x230:  jmp    08ad0ac4 <+0xc4>
08ad0c35 +0x235:  mov    %eax,%ebx
08ad0c37 +0x237:  mov    %esi,(%esp)
08ad0c3a +0x23a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad0c3f +0x23f:  lea    -0x30(%ebp),%eax
08ad0c42 +0x242:  mov    %eax,(%esp)
08ad0c45 +0x245:  call   08ad1320 <_ZN14CompiledDNFLex8getTokenEv+0x380>  ; CompiledDNFLex::getToken()+0x380
08ad0c4a +0x24a:  mov    %ebx,(%esp)
08ad0c4d +0x24d:  call   08ae3750 <_Unwind_Resume>
08ad0c52 +0x252:  mov    %eax,%ebx
08ad0c54 +0x254:  jmp    08ad0c3f <+0x23f>
08ad0c56 +0x256:  mov    0x8(%edx),%ecx
08ad0c59 +0x259:  lea    -0x1(%ecx),%ebx
08ad0c5c +0x25c:  mov    %ebx,0x8(%edx)
08ad0c5f +0x25f:  jmp    08ad0bde <+0x1de>
08ad0c64 +0x264:  jmp    08ad0c52 <+0x252>
08ad0c66 +0x266:  mov    0x8(%edx),%ecx
08ad0c69 +0x269:  lea    -0x1(%ecx),%ebx
08ad0c6c +0x26c:  mov    %ebx,0x8(%edx)
08ad0c6f +0x26f:  jmp    08ad0c12 <+0x212>
08ad0c71 +0x271:  nop
08ad0c72 +0x272:  lea    0x0(%esi,%eiz,1),%esi
08ad0c79 +0x279:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::PushInputStream @ 0x8ad0a00

/* WARNING: Removing unreachable block (ram,0x08ad0c56) */
/* WARNING: Removing unreachable block (ram,0x08ad0c66) */
/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool PushInputStream(CompiledDNFLex * this, TCHAR * dir, TCHAR *
   filename, char * buffer, uint bufferSize) */

bool __thiscall
CompiledDNFLex::PushInputStream
          (CompiledDNFLex *this,TCHAR *dir,TCHAR *filename,char *buffer,uint bufferSize)

{
  int *piVar1;
  int iVar2;
  stream_t *this_00;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  stream_t *psVar6;
  undefined1 local_34 [4];
  tstring local_30;
  uint local_2c;
  char *local_28;
  char *local_24;
  
                    /* Unresolved local var: stream_t stream@[???]
                       Unresolved local var: bool empty_file@[???] */
  local_34 = (undefined1  [4])&DAT_0948ccfc;
  local_30._M_dataplus._M_p = (_Alloc_hider)&DAT_0948ccfc;
  if (dir == (TCHAR *)0x0) {
    uVar5 = 0;
    dir = "";
  }
  else {
    uVar5 = strlen(dir);
  }
                    /* try { // try from 08ad0a47 to 08ad0a6e has its CatchHandler @ 08ad0c64 */
  std::string::assign((string *)local_34,dir,uVar5);
  if (filename == (TCHAR *)0x0) {
    uVar5 = 0;
    filename = "";
  }
  else {
    uVar5 = strlen(filename);
  }
  std::string::assign((string *)&local_30,filename,uVar5);
  local_28 = buffer;
  local_2c = bufferSize;
  if ((buffer == (char *)0x0) || (bVar3 = true, bufferSize != 0)) {
                    /* Unresolved local var: ushort magic@[???] */
    if (bufferSize < 2) {
      bVar4 = false;
      goto LAB_08ad0a9f;
    }
    if (*(short *)buffer != -0x2f50) {
      operator_delete__(buffer);
      bVar4 = false;
      goto LAB_08ad0a9f;
    }
    bVar3 = false;
  }
  this_00 = (this->stream_stack_).c.
            super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
            _M_impl._M_finish._M_cur;
  if (this_00 !=
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar6 = this_00;
    if (this_00 ==
        (this->stream_stack_).c.
        super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
        _M_impl._M_finish._M_first) {
      psVar6 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    psVar6[-1].offset = this->offset_;
  }
  if (this_00 ==
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_last + -1) {
                    /* try { // try from 08ad0bb8 to 08ad0bbc has its CatchHandler @ 08ad0c64 */
    std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
    _M_push_back_aux<const_CompiledDNFLex::stream_t&>(&(this->stream_stack_).c,(stream_t *)local_34)
    ;
  }
  else {
    psVar6 = (stream_t *)0x0;
    if (this_00 != (stream_t *)0x0) {
                    /* try { // try from 08ad0b1f to 08ad0b23 has its CatchHandler @ 08ad0c52 */
      std::string::string((string *)this_00,(string *)local_34);
                    /* try { // try from 08ad0b31 to 08ad0b35 has its CatchHandler @ 08ad0c35 */
      std::string::string((string *)&this_00->filename,(string *)&local_30);
      this_00->size = local_2c;
      this_00->buffer = local_28;
      this_00->offset = local_24;
      psVar6 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_cur;
    }
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_cur = psVar6 + 1;
  }
  bVar4 = true;
  this->offset_ = local_28;
  if (!bVar3) {
    this->offset_ = local_28 + 2;
  }
LAB_08ad0a9f:
  if ((allocator *)((int)local_30._M_dataplus._M_p + -0xc) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)((int)local_30._M_dataplus._M_p + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_30._M_dataplus._M_p + -0xc));
    }
  }
  if ((allocator *)((int)local_34 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar1 = (int *)((int)local_34 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_34 + -0xc));
    }
  }
  return bVar4;
}
```
