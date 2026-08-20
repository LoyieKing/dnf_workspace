# LoadFile

`_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding`

`TiXmlDocument::LoadFile(char const*, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlDocument` | `0x087e2a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e2a30  _ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding
#           TiXmlDocument::LoadFile(char const*, TiXmlEncoding)
# range [0x087e2a30, 0x087e2b39]
087e2a30 +0x000:  push   %ebp
087e2a31 +0x001:  mov    %esp,%ebp
087e2a33 +0x003:  sub    $0x48,%esp
087e2a36 +0x006:  lea    -0x19(%ebp),%eax
087e2a39 +0x009:  mov    %eax,0x8(%esp)
087e2a3d +0x00d:  mov    0xc(%ebp),%eax
087e2a40 +0x010:  mov    %edi,-0x4(%ebp)
087e2a43 +0x013:  lea    -0x20(%ebp),%edi
087e2a46 +0x016:  mov    %ebx,-0xc(%ebp)
087e2a49 +0x019:  mov    0x8(%ebp),%ebx
087e2a4c +0x01c:  mov    %esi,-0x8(%ebp)
087e2a4f +0x01f:  mov    %eax,0x4(%esp)
087e2a53 +0x023:  mov    %edi,(%esp)
087e2a56 +0x026:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
087e2a5b +0x02b:  lea    0x20(%ebx),%eax
087e2a5e +0x02e:  mov    %edi,0x4(%esp)
087e2a62 +0x032:  mov    %eax,(%esp)
087e2a65 +0x035:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
087e2a6a +0x03a:  movl   $"rb",0x4(%esp)
087e2a72 +0x042:  mov    0x20(%ebx),%eax
087e2a75 +0x045:  mov    %eax,(%esp)
087e2a78 +0x048:  call   0807e770 <_init+0x1068>
087e2a7d +0x04d:  test   %eax,%eax
087e2a7f +0x04f:  mov    %eax,%esi
087e2a81 +0x051:  je     087e2ac0 <+0x90>
087e2a83 +0x053:  mov    0x10(%ebp),%eax
087e2a86 +0x056:  mov    %esi,0x4(%esp)
087e2a8a +0x05a:  mov    %ebx,(%esp)
087e2a8d +0x05d:  mov    %eax,0x8(%esp)
087e2a91 +0x061:  call   087e16c0 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding>  ; TiXmlDocument::LoadFile(_IO_FILE*, TiXmlEncoding)
087e2a96 +0x066:  mov    %eax,%ebx
087e2a98 +0x068:  mov    %esi,(%esp)
087e2a9b +0x06b:  call   0807dea0 <_init+0x798>
087e2aa0 +0x070:  mov    -0x20(%ebp),%eax
087e2aa3 +0x073:  sub    $0xc,%eax
087e2aa6 +0x076:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e2aab +0x07b:  jne    087e2aec <+0xbc>
087e2aad +0x07d:  mov    %ebx,%eax
087e2aaf +0x07f:  mov    -0x8(%ebp),%esi
087e2ab2 +0x082:  mov    -0xc(%ebp),%ebx
087e2ab5 +0x085:  mov    -0x4(%ebp),%edi
087e2ab8 +0x088:  mov    %ebp,%esp
087e2aba +0x08a:  pop    %ebp
087e2abb +0x08b:  ret
087e2abc +0x08c:  lea    0x0(%esi,%eiz,1),%esi
087e2ac0 +0x090:  movl   $0x0,0x10(%esp)
087e2ac8 +0x098:  movl   $0x0,0xc(%esp)
087e2ad0 +0x0a0:  movl   $0x0,0x8(%esp)
087e2ad8 +0x0a8:  movl   $0x2,0x4(%esp)
087e2ae0 +0x0b0:  mov    %ebx,(%esp)
087e2ae3 +0x0b3:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e2ae8 +0x0b8:  xor    %ebx,%ebx
087e2aea +0x0ba:  jmp    087e2aa0 <+0x70>
087e2aec +0x0bc:  mov    $&data#bb92cc41(.plt),%edx
087e2af1 +0x0c1:  test   %edx,%edx
087e2af3 +0x0c3:  je     087e2b2c <+0xfc>
087e2af5 +0x0c5:  or     $0xffffffff,%edx
087e2af8 +0x0c8:  lock xadd %edx,0x8(%eax)
087e2afd +0x0cd:  test   %edx,%edx
087e2aff +0x0cf:  jg     087e2aad <+0x7d>
087e2b01 +0x0d1:  lea    -0x1a(%ebp),%edx
087e2b04 +0x0d4:  mov    %edx,0x4(%esp)
087e2b08 +0x0d8:  mov    %eax,(%esp)
087e2b0b +0x0db:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e2b10 +0x0e0:  jmp    087e2aad <+0x7d>
087e2b12 +0x0e2:  mov    %eax,%ebx
087e2b14 +0x0e4:  mov    %edi,(%esp)
087e2b17 +0x0e7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e2b1c +0x0ec:  mov    %ebx,(%esp)
087e2b1f +0x0ef:  call   08ae3750 <_Unwind_Resume>
087e2b24 +0x0f4:  mov    %eax,(%esp)
087e2b27 +0x0f7:  call   08ae3750 <_Unwind_Resume>
087e2b2c +0x0fc:  mov    0x8(%eax),%edx
087e2b2f +0x0ff:  lea    -0x1(%edx),%ecx
087e2b32 +0x102:  mov    %ecx,0x8(%eax)
087e2b35 +0x105:  jmp    087e2afd <+0xcd>
087e2b37 +0x107:  nop
087e2b38 +0x108:  nop
087e2b39 +0x109:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlDocument::LoadFile @ 0x87e2a30

/* WARNING: Removing unreachable block (ram,0x087e2b2c) */
/* TiXmlDocument::LoadFile(char const*, TiXmlEncoding) */

undefined4 __thiscall TiXmlDocument::LoadFile(TiXmlDocument *this,char *param_1,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  undefined4 uVar3;
  int local_24;
  allocator local_1d [13];
  
                    /* try { // try from 087e2a56 to 087e2a5a has its CatchHandler @ 087e2b24 */
  std::string::string((string *)&local_24,param_1,local_1d);
                    /* try { // try from 087e2a65 to 087e2ae7 has its CatchHandler @ 087e2b12 */
  std::string::assign((string *)(this + 0x20),(string *)&local_24);
  __stream = fopen(*(char **)(this + 0x20),"rb");
  if (__stream == (FILE *)0x0) {
    SetError(this,2,0,0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = LoadFile(this,__stream,param_3);
    fclose(__stream);
  }
  if ((allocator *)(local_24 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
    }
  }
  return uVar3;
}
```
