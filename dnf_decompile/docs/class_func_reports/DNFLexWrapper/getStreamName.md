# getStreamName

`_ZN13DNFLexWrapper13getStreamNameEv`

`DNFLexWrapper::getStreamName()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace8a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace8a0  _ZN13DNFLexWrapper13getStreamNameEv
#           DNFLexWrapper::getStreamName()
# range [0x08ace8a0, 0x08ace8fc]
08ace8a0 +0x00:  push   %ebp
08ace8a1 +0x01:  mov    %esp,%ebp
08ace8a3 +0x03:  push   %ebx
08ace8a4 +0x04:  sub    $0x24,%esp
08ace8a7 +0x07:  mov    0xc(%ebp),%eax
08ace8aa +0x0a:  mov    0x8(%ebp),%ebx
08ace8ad +0x0d:  mov    0x14(%eax),%edx
08ace8b0 +0x10:  test   %edx,%edx
08ace8b2 +0x12:  je     08ace8d8 <+0x38>
08ace8b4 +0x14:  lea    -0x9(%ebp),%eax
08ace8b7 +0x17:  mov    %eax,0x8(%esp)
08ace8bb +0x1b:  movl   $"NONE",0x4(%esp)
08ace8c3 +0x23:  mov    %ebx,(%esp)
08ace8c6 +0x26:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ace8cb +0x2b:  mov    %ebx,%eax
08ace8cd +0x2d:  mov    -0x4(%ebp),%ebx
08ace8d0 +0x30:  leave
08ace8d1 +0x31:  ret    $0x4
08ace8d4 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08ace8d8 +0x38:  add    $0x18,%eax
08ace8db +0x3b:  mov    %eax,0x4(%esp)
08ace8df +0x3f:  mov    %ebx,(%esp)
08ace8e2 +0x42:  call   08acd310 <_ZN6DNFLex13getStreamNameEv>  ; DNFLex::getStreamName()
08ace8e7 +0x47:  mov    %ebx,%eax
08ace8e9 +0x49:  mov    -0x4(%ebp),%ebx
08ace8ec +0x4c:  sub    $0x4,%esp
08ace8ef +0x4f:  leave
08ace8f0 +0x50:  ret    $0x4
08ace8f3 +0x53:  mov    %eax,(%esp)
08ace8f6 +0x56:  call   08ae3750 <_Unwind_Resume>
08ace8fb +0x5b:  nop
08ace8fc +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getStreamName @ 0x8ace8a0

/* DWARF original prototype: tstring getStreamName(DNFLexWrapper * this) */

tstring __thiscall DNFLexWrapper::getStreamName(DNFLexWrapper *this)

{
  int in_stack_00000008;
  allocator local_d [5];
  
  if (*(int *)(in_stack_00000008 + 0x14) != 0) {
                    /* try { // try from 08ace8c6 to 08ace8ca has its CatchHandler @ 08ace8f3 */
    std::string::string((string *)this,"NONE",local_d);
    return (tstring)(_Alloc_hider)this;
  }
  DNFLex::getStreamName((DNFLex *)this);
  return (tstring)(_Alloc_hider)this;
}
```
