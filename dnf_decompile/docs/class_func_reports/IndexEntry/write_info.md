# write_info

`_ZN10IndexEntry10write_infoEP8_IO_FILE`

`IndexEntry::write_info(_IO_FILE*)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac4284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4284  _ZN10IndexEntry10write_infoEP8_IO_FILE
#           IndexEntry::write_info(_IO_FILE*)
# range [0x08ac4284, 0x08ac4377]
08ac4284 +0x00:  push   %ebp
08ac4285 +0x01:  mov    %esp,%ebp
08ac4287 +0x03:  sub    $0x28,%esp
08ac428a +0x06:  cmpl   $0x0,0xc(%ebp)
08ac428e +0x0a:  jne    08ac42e4 <+0x60>
08ac4290 +0x0c:  mov    &stdout,%eax
08ac4295 +0x11:  movl   $"fp is NULL",0x8(%esp)
08ac429d +0x19:  movl   $"%s\n",0x4(%esp)
08ac42a5 +0x21:  mov    %eax,(%esp)
08ac42a8 +0x24:  call   0807da90 <_init+0x388>
08ac42ad +0x29:  mov    &stdout,%eax
08ac42b2 +0x2e:  movl   $&_ZZN10IndexEntry10write_infoEP8_IO_FILEE12__FUNCTION__,0x10(%esp)
08ac42ba +0x36:  movl   $0x1d0,0xc(%esp)
08ac42c2 +0x3e:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac42ca +0x46:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac42d2 +0x4e:  mov    %eax,(%esp)
08ac42d5 +0x51:  call   0807da90 <_init+0x388>
08ac42da +0x56:  mov    $0x1,%eax
08ac42df +0x5b:  jmp    08ac4375 <+0xf1>
08ac42e4 +0x60:  mov    0x8(%ebp),%eax
08ac42e7 +0x63:  add    $0x4,%eax
08ac42ea +0x66:  mov    %eax,(%esp)
08ac42ed +0x69:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac42f2 +0x6e:  mov    0xc(%ebp),%edx
08ac42f5 +0x71:  mov    %edx,0x4(%esp)
08ac42f9 +0x75:  mov    %eax,(%esp)
08ac42fc +0x78:  call   08ac3714 <_ZL11_fwrite_strPKcP8_IO_FILE>  ; _fwrite_str(char const*, _IO_FILE*)
08ac4301 +0x7d:  mov    0x8(%ebp),%eax
08ac4304 +0x80:  lea    0x8(%eax),%edx
08ac4307 +0x83:  mov    0xc(%ebp),%eax
08ac430a +0x86:  mov    %eax,0xc(%esp)
08ac430e +0x8a:  movl   $0x1,0x8(%esp)
08ac4316 +0x92:  movl   $0x4,0x4(%esp)
08ac431e +0x9a:  mov    %edx,(%esp)
08ac4321 +0x9d:  call   0807e320 <_init+0xc18>
08ac4326 +0xa2:  mov    0x8(%ebp),%eax
08ac4329 +0xa5:  lea    0x10(%eax),%edx
08ac432c +0xa8:  mov    0xc(%ebp),%eax
08ac432f +0xab:  mov    %eax,0xc(%esp)
08ac4333 +0xaf:  movl   $0x1,0x8(%esp)
08ac433b +0xb7:  movl   $0x4,0x4(%esp)
08ac4343 +0xbf:  mov    %edx,(%esp)
08ac4346 +0xc2:  call   0807e320 <_init+0xc18>
08ac434b +0xc7:  mov    0x8(%ebp),%eax
08ac434e +0xca:  lea    0x14(%eax),%edx
08ac4351 +0xcd:  mov    0xc(%ebp),%eax
08ac4354 +0xd0:  mov    %eax,0xc(%esp)
08ac4358 +0xd4:  movl   $0x1,0x8(%esp)
08ac4360 +0xdc:  movl   $0x4,0x4(%esp)
08ac4368 +0xe4:  mov    %edx,(%esp)
08ac436b +0xe7:  call   0807e320 <_init+0xc18>
08ac4370 +0xec:  mov    $0x0,%eax
08ac4375 +0xf1:  leave
08ac4376 +0xf2:  ret
08ac4377 +0xf3:  nop
```

## 反编译 C

```c
// IndexEntry::write_info @ 0x8ac4284

/* DWARF original prototype: pack_ret_t write_info(IndexEntry * this, FILE * fp) */

pack_ret_t __thiscall IndexEntry::write_info(IndexEntry *this,FILE *fp)

{
  NCHAR *src;
  
  if (fp != (FILE *)0x0) {
    src = (NCHAR *)std::string::c_str((string *)&this->name_);
    _fwrite_str(src,fp);
    fwrite(&this->size_,4,1,(FILE *)fp);
    fwrite(&this->crc_,4,1,(FILE *)fp);
    fwrite(&this->offset_,4,1,(FILE *)fp);
  }
  else {
    fprintf(stdout,"%s\n","fp is NULL");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1d0,"write_info");
  }
  return (uint)(fp == (FILE *)0x0);
}
```
