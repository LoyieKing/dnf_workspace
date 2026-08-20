# CharString

`_ZN10CharStringC1ERKSs`

`CharString::CharString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6ad6  _ZN10CharStringC1ERKSs
#           CharString::CharString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08ad6ad6, 0x08ad6b5f]
08ad6ad6 +0x00:  push   %ebp
08ad6ad7 +0x01:  mov    %esp,%ebp
08ad6ad9 +0x03:  push   %esi
08ad6ada +0x04:  push   %ebx
08ad6adb +0x05:  sub    $0x20,%esp
08ad6ade +0x08:  mov    0xc(%ebp),%eax
08ad6ae1 +0x0b:  mov    %eax,(%esp)
08ad6ae4 +0x0e:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08ad6ae9 +0x13:  mov    %eax,-0x10(%ebp)
08ad6aec +0x16:  cmpl   $0x0,-0x10(%ebp)
08ad6af0 +0x1a:  jne    08ad6b08 <+0x32>
08ad6af2 +0x1c:  mov    &_ZL21s_emptyCharStringData,%eax
08ad6af7 +0x21:  mov    %eax,0x4(%esp)
08ad6afb +0x25:  mov    0x8(%ebp),%eax
08ad6afe +0x28:  mov    %eax,(%esp)
08ad6b01 +0x2b:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6b06 +0x30:  jmp    08ad6b58 <+0x82>
08ad6b08 +0x32:  mov    -0x10(%ebp),%eax
08ad6b0b +0x35:  mov    %eax,(%esp)
08ad6b0e +0x38:  call   08ad694e <_ZN14CharStringData6createEi>  ; CharStringData::create(int)
08ad6b13 +0x3d:  mov    %eax,-0xc(%ebp)
08ad6b16 +0x40:  mov    -0x10(%ebp),%eax
08ad6b19 +0x43:  add    $0x1,%eax
08ad6b1c +0x46:  mov    %eax,%esi
08ad6b1e +0x48:  mov    0xc(%ebp),%eax
08ad6b21 +0x4b:  mov    %eax,(%esp)
08ad6b24 +0x4e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ad6b29 +0x53:  mov    %eax,%ebx
08ad6b2b +0x55:  mov    -0xc(%ebp),%eax
08ad6b2e +0x58:  mov    %eax,(%esp)
08ad6b31 +0x5b:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6b36 +0x60:  mov    %esi,0x8(%esp)
08ad6b3a +0x64:  mov    %ebx,0x4(%esp)
08ad6b3e +0x68:  mov    %eax,(%esp)
08ad6b41 +0x6b:  call   0807d8a0 <_init+0x198>
08ad6b46 +0x70:  mov    -0xc(%ebp),%eax
08ad6b49 +0x73:  mov    %eax,0x4(%esp)
08ad6b4d +0x77:  mov    0x8(%ebp),%eax
08ad6b50 +0x7a:  mov    %eax,(%esp)
08ad6b53 +0x7d:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6b58 +0x82:  add    $0x20,%esp
08ad6b5b +0x85:  pop    %ebx
08ad6b5c +0x86:  pop    %esi
08ad6b5d +0x87:  pop    %ebp
08ad6b5e +0x88:  ret
08ad6b5f +0x89:  nop
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad6ad6

/* DWARF original prototype: void CharString(CharString * this, string * src) */

void __thiscall CharString::CharString(CharString *this,string *src)

{
  int length;
  CharStringData *this_00;
  void *__src;
  char *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * data@[???] */
  length = std::string::size((string *)src);
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::create(length);
    __src = (void *)std::string::c_str((string *)src);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,__src,length + 1);
    attachData(this,this_00);
  }
  return;
}
```
