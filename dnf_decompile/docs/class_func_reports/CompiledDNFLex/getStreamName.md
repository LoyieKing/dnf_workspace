# getStreamName

`_ZNK14CompiledDNFLex13getStreamNameEv`

`CompiledDNFLex::getStreamName() const`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0290  _ZNK14CompiledDNFLex13getStreamNameEv
#           CompiledDNFLex::getStreamName() const
# range [0x08ad0290, 0x08ad0369]
08ad0290 +0x00:  push   %ebp
08ad0291 +0x01:  mov    %esp,%ebp
08ad0293 +0x03:  sub    $0x38,%esp
08ad0296 +0x06:  mov    0xc(%ebp),%eax
08ad0299 +0x09:  mov    %ebx,-0x8(%ebp)
08ad029c +0x0c:  mov    0x8(%ebp),%ebx
08ad029f +0x0f:  mov    %esi,-0x4(%ebp)
08ad02a2 +0x12:  mov    0x2030(%eax),%esi
08ad02a8 +0x18:  cmp    0x2020(%eax),%esi
08ad02ae +0x1e:  je     08ad0328 <+0x98>
08ad02b0 +0x20:  cmp    0x2034(%eax),%esi
08ad02b6 +0x26:  mov    0x203c(%eax),%edx
08ad02bc +0x2c:  je     08ad02f0 <+0x60>
08ad02be +0x2e:  mov    %esi,%eax
08ad02c0 +0x30:  sub    $0x14,%eax
08ad02c3 +0x33:  je     08ad0300 <+0x70>
08ad02c5 +0x35:  sub    $0x10,%esi
08ad02c8 +0x38:  mov    %eax,0x4(%esp)
08ad02cc +0x3c:  mov    %ebx,(%esp)
08ad02cf +0x3f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08ad02d4 +0x44:  mov    %esi,0x4(%esp)
08ad02d8 +0x48:  mov    %ebx,(%esp)
08ad02db +0x4b:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
08ad02e0 +0x50:  mov    %ebx,%eax
08ad02e2 +0x52:  mov    -0x4(%ebp),%esi
08ad02e5 +0x55:  mov    -0x8(%ebp),%ebx
08ad02e8 +0x58:  mov    %ebp,%esp
08ad02ea +0x5a:  pop    %ebp
08ad02eb +0x5b:  ret    $0x4
08ad02ee +0x5e:  xchg   %ax,%ax
08ad02f0 +0x60:  mov    -0x4(%edx),%esi
08ad02f3 +0x63:  add    $0x1f4,%esi
08ad02f9 +0x69:  mov    %esi,%eax
08ad02fb +0x6b:  sub    $0x14,%eax
08ad02fe +0x6e:  jne    08ad02c5 <+0x35>
08ad0300 +0x70:  lea    -0xa(%ebp),%eax
08ad0303 +0x73:  mov    %eax,0x8(%esp)
08ad0307 +0x77:  movl   $"NONE",0x4(%esp)
08ad030f +0x7f:  mov    %ebx,(%esp)
08ad0312 +0x82:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ad0317 +0x87:  mov    %ebx,%eax
08ad0319 +0x89:  mov    -0x4(%ebp),%esi
08ad031c +0x8c:  mov    -0x8(%ebp),%ebx
08ad031f +0x8f:  mov    %ebp,%esp
08ad0321 +0x91:  pop    %ebp
08ad0322 +0x92:  ret    $0x4
08ad0325 +0x95:  lea    0x0(%esi),%esi
08ad0328 +0x98:  lea    -0x9(%ebp),%eax
08ad032b +0x9b:  mov    %eax,0x8(%esp)
08ad032f +0x9f:  movl   $"NONE",0x4(%esp)
08ad0337 +0xa7:  mov    %ebx,(%esp)
08ad033a +0xaa:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ad033f +0xaf:  jmp    08ad02e0 <+0x50>
08ad0341 +0xb1:  mov    %eax,(%esp)
08ad0344 +0xb4:  call   08ae3750 <_Unwind_Resume>
08ad0349 +0xb9:  mov    %eax,-0x1c(%ebp)
08ad034c +0xbc:  mov    %ebx,(%esp)
08ad034f +0xbf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad0354 +0xc4:  mov    -0x1c(%ebp),%eax
08ad0357 +0xc7:  mov    %eax,(%esp)
08ad035a +0xca:  call   08ae3750 <_Unwind_Resume>
08ad035f +0xcf:  jmp    08ad0341 <+0xb1>
08ad0361 +0xd1:  nop
08ad0362 +0xd2:  lea    0x0(%esi,%eiz,1),%esi
08ad0369 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::getStreamName @ 0x8ad0290

/* DWARF original prototype: tstring getStreamName(CompiledDNFLex * this) */

tstring __thiscall CompiledDNFLex::getStreamName(CompiledDNFLex *this)

{
  int iVar1;
  string *psVar2;
  int iVar3;
  int in_stack_00000008;
  allocator local_e;
  allocator local_d;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  iVar3 = *(int *)(in_stack_00000008 + 0x2030);
  if (iVar3 == *(int *)(in_stack_00000008 + 0x2020)) {
                    /* try { // try from 08ad033a to 08ad033e has its CatchHandler @ 08ad035f */
    std::string::string((string *)this,"NONE",&local_d);
  }
  else {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_const_CompiledDNFLex::stream_t&,_const_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (iVar3 == *(int *)(in_stack_00000008 + 0x2034)) {
      iVar1 = *(int *)(*(int *)(in_stack_00000008 + 0x203c) + -4);
      iVar3 = iVar1 + 500;
      psVar2 = (string *)(iVar1 + 0x1e0);
    }
    else {
      psVar2 = (string *)(iVar3 + -0x14);
    }
    if (psVar2 == (string *)0x0) {
                    /* try { // try from 08ad0312 to 08ad0316 has its CatchHandler @ 08ad0341 */
      std::string::string((string *)this,"NONE",&local_e);
      return (tstring)(_Alloc_hider)this;
    }
                    /* Unresolved local var:
                       basic_string<char,_std::char_traits<char>,_std::allocator<char>_> __str@[???]
                        */
    std::string::string((string *)this,psVar2);
                    /* try { // try from 08ad02db to 08ad02df has its CatchHandler @ 08ad0349 */
    std::string::append((string *)this,(string *)(iVar3 + -0x10));
  }
  return (tstring)(_Alloc_hider)this;
}
```
