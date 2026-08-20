# getLastTokenDataAsString

`_ZN13DNFLexWrapper24getLastTokenDataAsStringEv`

`DNFLexWrapper::getLastTokenDataAsString()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace4d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace4d0  _ZN13DNFLexWrapper24getLastTokenDataAsStringEv
#           DNFLexWrapper::getLastTokenDataAsString()
# range [0x08ace4d0, 0x08ace52e]
08ace4d0 +0x00:  push   %ebp
08ace4d1 +0x01:  mov    %esp,%ebp
08ace4d3 +0x03:  push   %ebx
08ace4d4 +0x04:  sub    $0x24,%esp
08ace4d7 +0x07:  mov    0xc(%ebp),%edx
08ace4da +0x0a:  mov    0x8(%ebp),%ebx
08ace4dd +0x0d:  mov    0x14(%edx),%ecx
08ace4e0 +0x10:  test   %ecx,%ecx
08ace4e2 +0x12:  jne    08ace510 <+0x40>
08ace4e4 +0x14:  mov    0x1c(%edx),%eax
08ace4e7 +0x17:  test   %eax,%eax
08ace4e9 +0x19:  je     08ace51f <+0x4f>
08ace4eb +0x1b:  mov    %eax,(%esp)
08ace4ee +0x1e:  call   08adeb75 <_Z9toTStringPKc>  ; toTString(char const*)
08ace4f3 +0x23:  lea    -0x9(%ebp),%edx
08ace4f6 +0x26:  mov    %edx,0x8(%esp)
08ace4fa +0x2a:  mov    %eax,0x4(%esp)
08ace4fe +0x2e:  mov    %ebx,(%esp)
08ace501 +0x31:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08ace506 +0x36:  mov    %ebx,%eax
08ace508 +0x38:  add    $0x24,%esp
08ace50b +0x3b:  pop    %ebx
08ace50c +0x3c:  pop    %ebp
08ace50d +0x3d:  ret    $0x4
08ace510 +0x40:  cmp    $0x1,%ecx
08ace513 +0x43:  mov    $&data#2fb52a47(.rodata),%eax
08ace518 +0x48:  jne    08ace4f3 <+0x23>
08ace51a +0x4a:  mov    0x10(%edx),%eax
08ace51d +0x4d:  jmp    08ace4e7 <+0x17>
08ace51f +0x4f:  mov    $&data#2fb52a47(.rodata),%eax
08ace524 +0x54:  jmp    08ace4f3 <+0x23>
08ace526 +0x56:  mov    %eax,(%esp)
08ace529 +0x59:  call   08ae3750 <_Unwind_Resume>
08ace52e +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLexWrapper::getLastTokenDataAsString @ 0x8ace4d0

/* DWARF original prototype: tstring getLastTokenDataAsString(DNFLexWrapper * this) */

tstring __thiscall DNFLexWrapper::getLastTokenDataAsString(DNFLexWrapper *this)

{
  char *pcVar1;
  int in_stack_00000008;
  allocator local_d [5];
  
                    /* Unresolved local var: char * data@[???] */
  if (*(int *)(in_stack_00000008 + 0x14) == 0) {
    pcVar1 = *(char **)(in_stack_00000008 + 0x1c);
  }
  else {
    pcVar1 = "";
    if (*(int *)(in_stack_00000008 + 0x14) != 1) goto LAB_08ace4f3;
    pcVar1 = *(char **)(in_stack_00000008 + 0x10);
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  else {
                    /* try { // try from 08ace4ee to 08ace505 has its CatchHandler @ 08ace526 */
    pcVar1 = toTString(pcVar1);
  }
LAB_08ace4f3:
  std::string::string((string *)this,pcVar1,local_d);
  return (tstring)(_Alloc_hider)this;
}
```
