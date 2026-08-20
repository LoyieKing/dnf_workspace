# getStreamName

`_ZN6DNFLex13getStreamNameEv`

`DNFLex::getStreamName()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd310  _ZN6DNFLex13getStreamNameEv
#           DNFLex::getStreamName()
# range [0x08acd310, 0x08acd39c]
08acd310 +0x00:  push   %ebp
08acd311 +0x01:  mov    %esp,%ebp
08acd313 +0x03:  sub    $0x28,%esp
08acd316 +0x06:  mov    0xc(%ebp),%eax
08acd319 +0x09:  mov    %ebx,-0x8(%ebp)
08acd31c +0x0c:  mov    0x8(%ebp),%ebx
08acd31f +0x0f:  mov    %esi,-0x4(%ebp)
08acd322 +0x12:  mov    0x84(%eax),%esi
08acd328 +0x18:  cmp    0x80(%eax),%esi
08acd32e +0x1e:  je     08acd360 <+0x50>
08acd330 +0x20:  lea    -0x18(%esi),%eax
08acd333 +0x23:  sub    $0x14,%esi
08acd336 +0x26:  mov    %eax,0x4(%esp)
08acd33a +0x2a:  mov    %ebx,(%esp)
08acd33d +0x2d:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08acd342 +0x32:  mov    %esi,0x4(%esp)
08acd346 +0x36:  mov    %ebx,(%esp)
08acd349 +0x39:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
08acd34e +0x3e:  mov    %ebx,%eax
08acd350 +0x40:  mov    -0x4(%ebp),%esi
08acd353 +0x43:  mov    -0x8(%ebp),%ebx
08acd356 +0x46:  mov    %ebp,%esp
08acd358 +0x48:  pop    %ebp
08acd359 +0x49:  ret    $0x4
08acd35c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08acd360 +0x50:  lea    -0x9(%ebp),%eax
08acd363 +0x53:  mov    %eax,0x8(%esp)
08acd367 +0x57:  movl   $"NONE",0x4(%esp)
08acd36f +0x5f:  mov    %ebx,(%esp)
08acd372 +0x62:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08acd377 +0x67:  mov    %ebx,%eax
08acd379 +0x69:  mov    -0x4(%ebp),%esi
08acd37c +0x6c:  mov    -0x8(%ebp),%ebx
08acd37f +0x6f:  mov    %ebp,%esp
08acd381 +0x71:  pop    %ebp
08acd382 +0x72:  ret    $0x4
08acd385 +0x75:  mov    %eax,%esi
08acd387 +0x77:  mov    %esi,(%esp)
08acd38a +0x7a:  call   08ae3750 <_Unwind_Resume>
08acd38f +0x7f:  mov    %eax,%esi
08acd391 +0x81:  mov    %ebx,(%esp)
08acd394 +0x84:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08acd399 +0x89:  jmp    08acd387 <+0x77>
08acd39b +0x8b:  nop
08acd39c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLex::getStreamName @ 0x8acd310

/* DWARF original prototype: tstring getStreamName(DNFLex * this) */

tstring __thiscall DNFLex::getStreamName(DNFLex *this)

{
  int iVar1;
  int in_stack_00000008;
  allocator local_d;
  
  iVar1 = *(int *)(in_stack_00000008 + 0x84);
  if (iVar1 != *(int *)(in_stack_00000008 + 0x80)) {
                    /* Unresolved local var:
                       basic_string<char,_std::char_traits<char>,_std::allocator<char>_> __str@[???]
                        */
                    /* try { // try from 08acd33d to 08acd341 has its CatchHandler @ 08acd385 */
    std::string::string((string *)this,(string *)(iVar1 + -0x18));
                    /* try { // try from 08acd349 to 08acd34d has its CatchHandler @ 08acd38f */
    std::string::append((string *)this,(string *)(iVar1 + -0x14));
    return (tstring)(_Alloc_hider)this;
  }
                    /* try { // try from 08acd372 to 08acd376 has its CatchHandler @ 08acd385 */
  std::string::string((string *)this,"NONE",&local_d);
  return (tstring)(_Alloc_hider)this;
}
```
