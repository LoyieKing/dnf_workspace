# Print

`_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs`

`TiXmlDeclaration::Print(_IO_FILE*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const`

| 类 | 地址 |
|---|---|
| `TiXmlDeclaration` | `0x087e47d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e47d0  _ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs
#           TiXmlDeclaration::Print(_IO_FILE*, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const
# range [0x087e47d0, 0x087e499f]
087e47d0 +0x000:  push   %ebp
087e47d1 +0x001:  mov    %esp,%ebp
087e47d3 +0x003:  push   %edi
087e47d4 +0x004:  push   %esi
087e47d5 +0x005:  push   %ebx
087e47d6 +0x006:  sub    $0x1c,%esp
087e47d9 +0x009:  mov    0xc(%ebp),%esi
087e47dc +0x00c:  mov    0x8(%ebp),%edi
087e47df +0x00f:  mov    0x14(%ebp),%ebx
087e47e2 +0x012:  test   %esi,%esi
087e47e4 +0x014:  je     087e4806 <+0x36>
087e47e6 +0x016:  mov    %esi,0xc(%esp)
087e47ea +0x01a:  movl   $0x6,0x8(%esp)
087e47f2 +0x022:  movl   $0x1,0x4(%esp)
087e47fa +0x02a:  movl   $"<?xml ",(%esp)
087e4801 +0x031:  call   0807e320 <_init+0xc18>
087e4806 +0x036:  test   %ebx,%ebx
087e4808 +0x038:  je     087e4822 <+0x52>
087e480a +0x03a:  movl   $0x6,0x8(%esp)
087e4812 +0x042:  movl   $"<?xml ",0x4(%esp)
087e481a +0x04a:  mov    %ebx,(%esp)
087e481d +0x04d:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4822 +0x052:  mov    0x2c(%edi),%eax
087e4825 +0x055:  mov    -0xc(%eax),%edx
087e4828 +0x058:  test   %edx,%edx
087e482a +0x05a:  je     087e4887 <+0xb7>
087e482c +0x05c:  test   %esi,%esi
087e482e +0x05e:  je     087e4844 <+0x74>
087e4830 +0x060:  mov    %eax,0x8(%esp)
087e4834 +0x064:  movl   $"version=\"%s\" ",0x4(%esp)
087e483c +0x06c:  mov    %esi,(%esp)
087e483f +0x06f:  call   0807da90 <_init+0x388>
087e4844 +0x074:  test   %ebx,%ebx
087e4846 +0x076:  je     087e4887 <+0xb7>
087e4848 +0x078:  movl   $0x9,0x8(%esp)
087e4850 +0x080:  movl   $"version=\"",0x4(%esp)
087e4858 +0x088:  mov    %ebx,(%esp)
087e485b +0x08b:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4860 +0x090:  lea    0x2c(%edi),%eax
087e4863 +0x093:  mov    %eax,0x4(%esp)
087e4867 +0x097:  mov    %ebx,(%esp)
087e486a +0x09a:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e486f +0x09f:  movl   $0x2,0x8(%esp)
087e4877 +0x0a7:  movl   $"\" ",0x4(%esp)
087e487f +0x0af:  mov    %ebx,(%esp)
087e4882 +0x0b2:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4887 +0x0b7:  mov    0x30(%edi),%eax
087e488a +0x0ba:  mov    -0xc(%eax),%ecx
087e488d +0x0bd:  test   %ecx,%ecx
087e488f +0x0bf:  je     087e48ec <+0x11c>
087e4891 +0x0c1:  test   %esi,%esi
087e4893 +0x0c3:  je     087e48a9 <+0xd9>
087e4895 +0x0c5:  mov    %eax,0x8(%esp)
087e4899 +0x0c9:  movl   $"encoding=\"%s\" ",0x4(%esp)
087e48a1 +0x0d1:  mov    %esi,(%esp)
087e48a4 +0x0d4:  call   0807da90 <_init+0x388>
087e48a9 +0x0d9:  test   %ebx,%ebx
087e48ab +0x0db:  je     087e48ec <+0x11c>
087e48ad +0x0dd:  movl   $0xa,0x8(%esp)
087e48b5 +0x0e5:  movl   $"encoding=\"",0x4(%esp)
087e48bd +0x0ed:  mov    %ebx,(%esp)
087e48c0 +0x0f0:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e48c5 +0x0f5:  lea    0x30(%edi),%eax
087e48c8 +0x0f8:  mov    %eax,0x4(%esp)
087e48cc +0x0fc:  mov    %ebx,(%esp)
087e48cf +0x0ff:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e48d4 +0x104:  movl   $0x2,0x8(%esp)
087e48dc +0x10c:  movl   $"\" ",0x4(%esp)
087e48e4 +0x114:  mov    %ebx,(%esp)
087e48e7 +0x117:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e48ec +0x11c:  mov    0x34(%edi),%eax
087e48ef +0x11f:  mov    -0xc(%eax),%edx
087e48f2 +0x122:  test   %edx,%edx
087e48f4 +0x124:  je     087e4951 <+0x181>
087e48f6 +0x126:  test   %esi,%esi
087e48f8 +0x128:  je     087e490e <+0x13e>
087e48fa +0x12a:  mov    %eax,0x8(%esp)
087e48fe +0x12e:  movl   $"standalone=\"%s\" ",0x4(%esp)
087e4906 +0x136:  mov    %esi,(%esp)
087e4909 +0x139:  call   0807da90 <_init+0x388>
087e490e +0x13e:  test   %ebx,%ebx
087e4910 +0x140:  je     087e4951 <+0x181>
087e4912 +0x142:  add    $0x34,%edi
087e4915 +0x145:  movl   $0xc,0x8(%esp)
087e491d +0x14d:  movl   $"standalone=\"",0x4(%esp)
087e4925 +0x155:  mov    %ebx,(%esp)
087e4928 +0x158:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e492d +0x15d:  mov    %edi,0x4(%esp)
087e4931 +0x161:  mov    %ebx,(%esp)
087e4934 +0x164:  call   08708140 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1d50>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1d50
087e4939 +0x169:  movl   $0x2,0x8(%esp)
087e4941 +0x171:  movl   $"\" ",0x4(%esp)
087e4949 +0x179:  mov    %ebx,(%esp)
087e494c +0x17c:  call   08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4951 +0x181:  test   %esi,%esi
087e4953 +0x183:  je     087e4975 <+0x1a5>
087e4955 +0x185:  mov    %esi,0xc(%esp)
087e4959 +0x189:  movl   $0x2,0x8(%esp)
087e4961 +0x191:  movl   $0x1,0x4(%esp)
087e4969 +0x199:  movl   $"?>",(%esp)
087e4970 +0x1a0:  call   0807e320 <_init+0xc18>
087e4975 +0x1a5:  test   %ebx,%ebx
087e4977 +0x1a7:  je     087e4998 <+0x1c8>
087e4979 +0x1a9:  mov    %ebx,0x8(%ebp)
087e497c +0x1ac:  movl   $0x2,0x10(%ebp)
087e4983 +0x1b3:  movl   $"?>",0xc(%ebp)
087e498a +0x1ba:  add    $0x1c,%esp
087e498d +0x1bd:  pop    %ebx
087e498e +0x1be:  pop    %esi
087e498f +0x1bf:  pop    %edi
087e4990 +0x1c0:  pop    %ebp
087e4991 +0x1c1:  jmp    08707f10 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1b20>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1b20
087e4996 +0x1c6:  xchg   %ax,%ax
087e4998 +0x1c8:  add    $0x1c,%esp
087e499b +0x1cb:  pop    %ebx
087e499c +0x1cc:  pop    %esi
087e499d +0x1cd:  pop    %edi
087e499e +0x1ce:  pop    %ebp
087e499f +0x1cf:  ret
```

## 反编译 C

```c
// TiXmlDeclaration::Print @ 0x87e47d0

/* TiXmlDeclaration::Print(_IO_FILE*, int, std::string*) const */

void __thiscall
TiXmlDeclaration::Print(TiXmlDeclaration *this,_IO_FILE *param_1,int param_2,string *param_3)

{
  if (param_1 != (_IO_FILE *)0x0) {
    fwrite("<?xml ",1,6,param_1);
  }
  if (param_3 != (string *)0x0) {
    std::string::append(param_3,"<?xml ",6);
  }
  if (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"version=\"%s\" ",*(int *)(this + 0x2c));
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,"version=\"",9);
      std::string::append(param_3,(string *)(this + 0x2c));
      std::string::append(param_3,"\" ",2);
    }
  }
  if (*(int *)(*(int *)(this + 0x30) + -0xc) != 0) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"encoding=\"%s\" ",*(int *)(this + 0x30));
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,"encoding=\"",10);
      std::string::append(param_3,(string *)(this + 0x30));
      std::string::append(param_3,"\" ",2);
    }
  }
  if (*(int *)(*(int *)(this + 0x34) + -0xc) != 0) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"standalone=\"%s\" ",*(int *)(this + 0x34));
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,"standalone=\"",0xc);
      std::string::append(param_3,(string *)(this + 0x34));
      std::string::append(param_3,"\" ",2);
    }
  }
  if (param_1 != (_IO_FILE *)0x0) {
    fwrite(&DAT_08de0faa,1,2,param_1);
  }
  if (param_3 != (string *)0x0) {
    std::string::append(param_3,"?>",2);
    return;
  }
  return;
}
```
