# Visit

`_ZN12TiXmlPrinter5VisitERK9TiXmlText`

`TiXmlPrinter::Visit(TiXmlText const&)`

| 类 | 地址 |
|---|---|
| `TiXmlPrinter` | `0x087e4d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e4d60  _ZN12TiXmlPrinter5VisitERK9TiXmlText
#           TiXmlPrinter::Visit(TiXmlText const&)
# range [0x087e4d60, 0x087e4f6c]
087e4d60 +0x000:  push   %ebp
087e4d61 +0x001:  mov    %esp,%ebp
087e4d63 +0x003:  push   %edi
087e4d64 +0x004:  push   %esi
087e4d65 +0x005:  push   %ebx
087e4d66 +0x006:  sub    $0x3c,%esp
087e4d69 +0x009:  mov    0xc(%ebp),%eax
087e4d6c +0x00c:  mov    0x8(%ebp),%ebx
087e4d6f +0x00f:  cmpb   $0x0,0x2c(%eax)
087e4d73 +0x013:  jne    087e4e78 <+0x118>
087e4d79 +0x019:  cmpb   $0x0,0x8(%ebx)
087e4d7d +0x01d:  je     087e4dc8 <+0x68>
087e4d7f +0x01f:  mov    0xc(%ebp),%eax
087e4d82 +0x022:  lea    -0x20(%ebp),%esi
087e4d85 +0x025:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x20(%ebp)
087e4d8c +0x02c:  mov    %esi,0x4(%esp)
087e4d90 +0x030:  add    $0x20,%eax
087e4d93 +0x033:  mov    %eax,(%esp)
087e4d96 +0x036:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4d9b +0x03b:  add    $0xc,%ebx
087e4d9e +0x03e:  mov    %esi,0x4(%esp)
087e4da2 +0x042:  mov    %ebx,(%esp)
087e4da5 +0x045:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4daa +0x04a:  mov    -0x20(%ebp),%eax
087e4dad +0x04d:  sub    $0xc,%eax
087e4db0 +0x050:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e4db5 +0x055:  jne    087e4f11 <+0x1b1>
087e4dbb +0x05b:  add    $0x3c,%esp
087e4dbe +0x05e:  mov    $0x1,%eax
087e4dc3 +0x063:  pop    %ebx
087e4dc4 +0x064:  pop    %esi
087e4dc5 +0x065:  pop    %edi
087e4dc6 +0x066:  pop    %ebp
087e4dc7 +0x067:  ret
087e4dc8 +0x068:  mov    0x4(%ebx),%esi
087e4dcb +0x06b:  test   %esi,%esi
087e4dcd +0x06d:  jle    087e4df7 <+0x97>
087e4dcf +0x06f:  lea    0x10(%ebx),%eax
087e4dd2 +0x072:  xor    %esi,%esi
087e4dd4 +0x074:  mov    %eax,-0x2c(%ebp)
087e4dd7 +0x077:  lea    0xc(%ebx),%edi
087e4dda +0x07a:  lea    0x0(%esi),%esi
087e4de0 +0x080:  mov    -0x2c(%ebp),%eax
087e4de3 +0x083:  add    $0x1,%esi
087e4de6 +0x086:  mov    %edi,(%esp)
087e4de9 +0x089:  mov    %eax,0x4(%esp)
087e4ded +0x08d:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4df2 +0x092:  cmp    0x4(%ebx),%esi
087e4df5 +0x095:  jl     087e4de0 <+0x80>
087e4df7 +0x097:  mov    0xc(%ebp),%eax
087e4dfa +0x09a:  lea    -0x20(%ebp),%esi
087e4dfd +0x09d:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x20(%ebp)
087e4e04 +0x0a4:  mov    %esi,0x4(%esp)
087e4e08 +0x0a8:  add    $0x20,%eax
087e4e0b +0x0ab:  mov    %eax,(%esp)
087e4e0e +0x0ae:  call   087e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>  ; TiXmlBase::EncodeString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
087e4e13 +0x0b3:  lea    0xc(%ebx),%edi
087e4e16 +0x0b6:  mov    %esi,0x4(%esp)
087e4e1a +0x0ba:  mov    %edi,(%esp)
087e4e1d +0x0bd:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4e22 +0x0c2:  add    $0x14,%ebx
087e4e25 +0x0c5:  mov    %ebx,0x4(%esp)
087e4e29 +0x0c9:  mov    %edi,(%esp)
087e4e2c +0x0cc:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4e31 +0x0d1:  mov    -0x20(%ebp),%eax
087e4e34 +0x0d4:  sub    $0xc,%eax
087e4e37 +0x0d7:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087e4e3c +0x0dc:  je     087e4dbb <+0x5b>
087e4e42 +0x0e2:  mov    $&data#bb92cc41(.plt),%edx
087e4e47 +0x0e7:  test   %edx,%edx
087e4e49 +0x0e9:  je     087e4f5d <+0x1fd>
087e4e4f +0x0ef:  or     $0xffffffff,%edx
087e4e52 +0x0f2:  lock xadd %edx,0x8(%eax)
087e4e57 +0x0f7:  test   %edx,%edx
087e4e59 +0x0f9:  jg     087e4dbb <+0x5b>
087e4e5f +0x0ff:  lea    -0x1a(%ebp),%edx
087e4e62 +0x102:  mov    %edx,0x4(%esp)
087e4e66 +0x106:  mov    %eax,(%esp)
087e4e69 +0x109:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e4e6e +0x10e:  jmp    087e4dbb <+0x5b>
087e4e73 +0x113:  nop
087e4e74 +0x114:  lea    0x0(%esi,%eiz,1),%esi
087e4e78 +0x118:  mov    0x4(%ebx),%eax
087e4e7b +0x11b:  lea    0xc(%ebx),%edi
087e4e7e +0x11e:  test   %eax,%eax
087e4e80 +0x120:  jle    087e4ea7 <+0x147>
087e4e82 +0x122:  lea    0x10(%ebx),%eax
087e4e85 +0x125:  xor    %esi,%esi
087e4e87 +0x127:  mov    %eax,-0x2c(%ebp)
087e4e8a +0x12a:  lea    0x0(%esi),%esi
087e4e90 +0x130:  mov    -0x2c(%ebp),%eax
087e4e93 +0x133:  add    $0x1,%esi
087e4e96 +0x136:  mov    %edi,(%esp)
087e4e99 +0x139:  mov    %eax,0x4(%esp)
087e4e9d +0x13d:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4ea2 +0x142:  cmp    0x4(%ebx),%esi
087e4ea5 +0x145:  jl     087e4e90 <+0x130>
087e4ea7 +0x147:  mov    %edi,(%esp)
087e4eaa +0x14a:  add    $0x14,%ebx
087e4ead +0x14d:  movl   $0x9,0x8(%esp)
087e4eb5 +0x155:  movl   $"<![CDATA[",0x4(%esp)
087e4ebd +0x15d:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4ec2 +0x162:  mov    0xc(%ebp),%eax
087e4ec5 +0x165:  mov    0x20(%eax),%esi
087e4ec8 +0x168:  mov    %esi,(%esp)
087e4ecb +0x16b:  call   0807e3b0 <_init+0xca8>
087e4ed0 +0x170:  mov    %esi,0x4(%esp)
087e4ed4 +0x174:  mov    %edi,(%esp)
087e4ed7 +0x177:  mov    %eax,0x8(%esp)
087e4edb +0x17b:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4ee0 +0x180:  mov    %edi,(%esp)
087e4ee3 +0x183:  movl   $0x3,0x8(%esp)
087e4eeb +0x18b:  movl   $"]]>",0x4(%esp)
087e4ef3 +0x193:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4ef8 +0x198:  mov    %ebx,0x4(%esp)
087e4efc +0x19c:  mov    %edi,(%esp)
087e4eff +0x19f:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4f04 +0x1a4:  add    $0x3c,%esp
087e4f07 +0x1a7:  mov    $0x1,%eax
087e4f0c +0x1ac:  pop    %ebx
087e4f0d +0x1ad:  pop    %esi
087e4f0e +0x1ae:  pop    %edi
087e4f0f +0x1af:  pop    %ebp
087e4f10 +0x1b0:  ret
087e4f11 +0x1b1:  mov    $&data#bb92cc41(.plt),%edx
087e4f16 +0x1b6:  test   %edx,%edx
087e4f18 +0x1b8:  je     087e4f50 <+0x1f0>
087e4f1a +0x1ba:  or     $0xffffffff,%edx
087e4f1d +0x1bd:  lock xadd %edx,0x8(%eax)
087e4f22 +0x1c2:  test   %edx,%edx
087e4f24 +0x1c4:  jg     087e4dbb <+0x5b>
087e4f2a +0x1ca:  lea    -0x19(%ebp),%edx
087e4f2d +0x1cd:  mov    %edx,0x4(%esp)
087e4f31 +0x1d1:  mov    %eax,(%esp)
087e4f34 +0x1d4:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e4f39 +0x1d9:  jmp    087e4dbb <+0x5b>
087e4f3e +0x1de:  mov    %eax,%ebx
087e4f40 +0x1e0:  mov    %esi,(%esp)
087e4f43 +0x1e3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
087e4f48 +0x1e8:  mov    %ebx,(%esp)
087e4f4b +0x1eb:  call   08ae3750 <_Unwind_Resume>
087e4f50 +0x1f0:  mov    0x8(%eax),%edx
087e4f53 +0x1f3:  lea    -0x1(%edx),%ecx
087e4f56 +0x1f6:  mov    %ecx,0x8(%eax)
087e4f59 +0x1f9:  jmp    087e4f22 <+0x1c2>
087e4f5b +0x1fb:  jmp    087e4f3e <+0x1de>
087e4f5d +0x1fd:  mov    0x8(%eax),%edx
087e4f60 +0x200:  lea    -0x1(%edx),%ecx
087e4f63 +0x203:  mov    %ecx,0x8(%eax)
087e4f66 +0x206:  jmp    087e4e57 <+0xf7>
087e4f6b +0x20b:  nop
087e4f6c +0x20c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlPrinter::Visit @ 0x87e4d60

/* WARNING: Removing unreachable block (ram,0x087e4f5d) */
/* WARNING: Removing unreachable block (ram,0x087e4f50) */
/* TiXmlPrinter::Visit(TiXmlText const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlText *param_1)

{
  string *this_00;
  int *piVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  undefined1 *local_24 [5];
  
  if (param_1[0x2c] == (TiXmlText)0x0) {
    if (this[8] == (TiXmlPrinter)0x0) {
      if (0 < *(int *)(this + 4)) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          std::string::append((string *)(this + 0xc),(string *)(this + 0x10));
        } while (iVar3 < *(int *)(this + 4));
      }
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4e0e to 087e4e30 has its CatchHandler @ 087e4f3e */
      TiXmlBase::EncodeString((string *)(param_1 + 0x20),(string *)local_24);
      std::string::append((string *)(this + 0xc),(string *)local_24);
      std::string::append((string *)(this + 0xc),(string *)(this + 0x14));
      if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        LOCK();
        piVar1 = (int *)(local_24[0] + -4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
        }
      }
    }
    else {
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4d96 to 087e4da9 has its CatchHandler @ 087e4f5b */
      TiXmlBase::EncodeString((string *)(param_1 + 0x20),(string *)local_24);
      std::string::append((string *)(this + 0xc),(string *)local_24);
      if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        LOCK();
        piVar1 = (int *)(local_24[0] + -4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
        }
      }
    }
    return 1;
  }
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar3 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<![CDATA[",9);
  __s = *(char **)(param_1 + 0x20);
  sVar2 = strlen(__s);
  std::string::append(this_00,__s,sVar2);
  std::string::append(this_00,"]]>",3);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}
```
