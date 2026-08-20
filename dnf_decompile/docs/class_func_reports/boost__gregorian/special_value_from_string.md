# special_value_from_string

`_ZN5boost9gregorian25special_value_from_stringERKSs`

`boost::gregorian::special_value_from_string(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `boost::gregorian` | `0x087dcc00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dcc00  _ZN5boost9gregorian25special_value_from_stringERKSs
#           boost::gregorian::special_value_from_string(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x087dcc00, 0x087dcd5b]
087dcc00 +0x000:  push   %ebp
087dcc01 +0x001:  mov    %esp,%ebp
087dcc03 +0x003:  push   %ebx
087dcc04 +0x004:  sub    $0x14,%esp
087dcc07 +0x007:  mov    0x8(%ebp),%ebx
087dcc0a +0x00a:  movl   $"not-a-date-time",0x4(%esp)
087dcc12 +0x012:  mov    %ebx,(%esp)
087dcc15 +0x015:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcc1a +0x01a:  xor    %edx,%edx
087dcc1c +0x01c:  test   %eax,%eax
087dcc1e +0x01e:  jne    087dcc28 <+0x28>
087dcc20 +0x020:  mov    %edx,%eax
087dcc22 +0x022:  add    $0x14,%esp
087dcc25 +0x025:  pop    %ebx
087dcc26 +0x026:  pop    %ebp
087dcc27 +0x027:  ret
087dcc28 +0x028:  movl   $"not-a-date-time",0x4(%esp)
087dcc30 +0x030:  mov    %ebx,(%esp)
087dcc33 +0x033:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcc38 +0x038:  xor    %edx,%edx
087dcc3a +0x03a:  test   %eax,%eax
087dcc3c +0x03c:  je     087dcc20 <+0x20>
087dcc3e +0x03e:  movl   $"-infinity",0x4(%esp)
087dcc46 +0x046:  mov    %ebx,(%esp)
087dcc49 +0x049:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcc4e +0x04e:  mov    $0x1,%edx
087dcc53 +0x053:  test   %eax,%eax
087dcc55 +0x055:  je     087dcc20 <+0x20>
087dcc57 +0x057:  movl   $"-infinity",0x4(%esp)
087dcc5f +0x05f:  mov    %ebx,(%esp)
087dcc62 +0x062:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcc67 +0x067:  mov    $0x1,%edx
087dcc6c +0x06c:  test   %eax,%eax
087dcc6e +0x06e:  je     087dcc20 <+0x20>
087dcc70 +0x070:  movl   $"+infinity",0x4(%esp)
087dcc78 +0x078:  mov    %ebx,(%esp)
087dcc7b +0x07b:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcc80 +0x080:  mov    $0x2,%edx
087dcc85 +0x085:  test   %eax,%eax
087dcc87 +0x087:  je     087dcc20 <+0x20>
087dcc89 +0x089:  movl   $"+infinity",0x4(%esp)
087dcc91 +0x091:  mov    %ebx,(%esp)
087dcc94 +0x094:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcc99 +0x099:  mov    $0x2,%edx
087dcc9e +0x09e:  test   %eax,%eax
087dcca0 +0x0a0:  je     087dcc20 <+0x20>
087dcca6 +0x0a6:  movl   $"min_date_time",0x4(%esp)
087dccae +0x0ae:  mov    %ebx,(%esp)
087dccb1 +0x0b1:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dccb6 +0x0b6:  mov    $0x3,%edx
087dccbb +0x0bb:  test   %eax,%eax
087dccbd +0x0bd:  je     087dcc20 <+0x20>
087dccc3 +0x0c3:  movl   $"min_date_time",0x4(%esp)
087dcccb +0x0cb:  mov    %ebx,(%esp)
087dccce +0x0ce:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dccd3 +0x0d3:  mov    $0x3,%edx
087dccd8 +0x0d8:  test   %eax,%eax
087dccda +0x0da:  je     087dcc20 <+0x20>
087dcce0 +0x0e0:  movl   $"max_date_time",0x4(%esp)
087dcce8 +0x0e8:  mov    %ebx,(%esp)
087dcceb +0x0eb:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dccf0 +0x0f0:  mov    $0x4,%edx
087dccf5 +0x0f5:  test   %eax,%eax
087dccf7 +0x0f7:  je     087dcc20 <+0x20>
087dccfd +0x0fd:  movl   $"max_date_time",0x4(%esp)
087dcd05 +0x105:  mov    %ebx,(%esp)
087dcd08 +0x108:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcd0d +0x10d:  mov    $0x4,%edx
087dcd12 +0x112:  test   %eax,%eax
087dcd14 +0x114:  je     087dcc20 <+0x20>
087dcd1a +0x11a:  movl   $"not_special",0x4(%esp)
087dcd22 +0x122:  mov    %ebx,(%esp)
087dcd25 +0x125:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcd2a +0x12a:  mov    $0x5,%edx
087dcd2f +0x12f:  test   %eax,%eax
087dcd31 +0x131:  je     087dcc20 <+0x20>
087dcd37 +0x137:  movl   $"not_special",0x4(%esp)
087dcd3f +0x13f:  mov    %ebx,(%esp)
087dcd42 +0x142:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
087dcd47 +0x147:  mov    $0x5,%edx
087dcd4c +0x14c:  mov    %eax,%ecx
087dcd4e +0x14e:  mov    $0x5,%eax
087dcd53 +0x153:  test   %ecx,%ecx
087dcd55 +0x155:  jne    087dcc22 <+0x22>
087dcd5b +0x15b:  jmp    087dcc20 <+0x20>
```

## 反编译 C

```c
// boost::gregorian::special_value_from_string @ 0x87dcc00

/* boost::gregorian::special_value_from_string(std::string const&) */

undefined4 boost::gregorian::special_value_from_string(string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = std::string::compare(param_1,"not-a-date-time");
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = std::string::compare(param_1,"not-a-date-time");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = std::string::compare(param_1,"-infinity");
      uVar2 = 1;
      if (iVar1 != 0) {
        iVar1 = std::string::compare(param_1,"-infinity");
        uVar2 = 1;
        if (iVar1 != 0) {
          iVar1 = std::string::compare(param_1,"+infinity");
          uVar2 = 2;
          if (iVar1 != 0) {
            iVar1 = std::string::compare(param_1,"+infinity");
            uVar2 = 2;
            if (iVar1 != 0) {
              iVar1 = std::string::compare(param_1,"min_date_time");
              uVar2 = 3;
              if (iVar1 != 0) {
                iVar1 = std::string::compare(param_1,"min_date_time");
                uVar2 = 3;
                if (iVar1 != 0) {
                  iVar1 = std::string::compare(param_1,"max_date_time");
                  uVar2 = 4;
                  if (iVar1 != 0) {
                    iVar1 = std::string::compare(param_1,"max_date_time");
                    uVar2 = 4;
                    if (iVar1 != 0) {
                      iVar1 = std::string::compare(param_1,"not_special");
                      uVar2 = 5;
                      if (iVar1 != 0) {
                        iVar1 = std::string::compare(param_1,"not_special");
                        uVar2 = 5;
                        if (iVar1 != 0) {
                          return 5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}
```
