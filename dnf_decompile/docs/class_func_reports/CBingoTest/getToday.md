# getToday

`_ZN10CBingoTest8getTodayEv`

`CBingoTest::getToday()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080caf7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caf7c  _ZN10CBingoTest8getTodayEv
#           CBingoTest::getToday()
# range [0x080caf7c, 0x080cb02f]
080caf7c +0x00:  push   %ebp
080caf7d +0x01:  mov    %esp,%ebp
080caf7f +0x03:  push   %esi
080caf80 +0x04:  push   %ebx
080caf81 +0x05:  sub    $0x20,%esp
080caf84 +0x08:  lea    -0xc(%ebp),%eax
080caf87 +0x0b:  mov    %eax,(%esp)
080caf8a +0x0e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
080caf8f +0x13:  movl   $"2012-07-19 05:00:00",0x4(%esp)
080caf97 +0x1b:  lea    -0xc(%ebp),%eax
080caf9a +0x1e:  mov    %eax,(%esp)
080caf9d +0x21:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
080cafa2 +0x26:  movl   $"2012-07-19 06:00:00",0x4(%esp)
080cafaa +0x2e:  lea    -0xc(%ebp),%eax
080cafad +0x31:  mov    %eax,(%esp)
080cafb0 +0x34:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
080cafb5 +0x39:  movl   $"2012-07-20 12:00:00",0x4(%esp)
080cafbd +0x41:  lea    -0xc(%ebp),%eax
080cafc0 +0x44:  mov    %eax,(%esp)
080cafc3 +0x47:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
080cafc8 +0x4c:  movl   $"2012-07-31 11:00:00",0x4(%esp)
080cafd0 +0x54:  lea    -0xc(%ebp),%eax
080cafd3 +0x57:  mov    %eax,(%esp)
080cafd6 +0x5a:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
080cafdb +0x5f:  movl   $"2012-08-01 05:00:00",0x4(%esp)
080cafe3 +0x67:  lea    -0xc(%ebp),%eax
080cafe6 +0x6a:  mov    %eax,(%esp)
080cafe9 +0x6d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
080cafee +0x72:  movl   $"2012-08-01 07:00:00",0x4(%esp)
080caff6 +0x7a:  lea    -0xc(%ebp),%eax
080caff9 +0x7d:  mov    %eax,(%esp)
080caffc +0x80:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
080cb001 +0x85:  jmp    080cb01e <+0xa2>
080cb003 +0x87:  mov    %edx,%ebx
080cb005 +0x89:  mov    %eax,%esi
080cb007 +0x8b:  lea    -0xc(%ebp),%eax
080cb00a +0x8e:  mov    %eax,(%esp)
080cb00d +0x91:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080cb012 +0x96:  mov    %esi,%eax
080cb014 +0x98:  mov    %ebx,%edx
080cb016 +0x9a:  mov    %eax,(%esp)
080cb019 +0x9d:  call   08ae3750 <_Unwind_Resume>
080cb01e +0xa2:  lea    -0xc(%ebp),%eax
080cb021 +0xa5:  mov    %eax,(%esp)
080cb024 +0xa8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080cb029 +0xad:  add    $0x20,%esp
080cb02c +0xb0:  pop    %ebx
080cb02d +0xb1:  pop    %esi
080cb02e +0xb2:  pop    %ebp
080cb02f +0xb3:  ret
```

## 反编译 C

```c
// CBingoTest::getToday @ 0x80caf7c

/* CBingoTest::getToday() */

void CBingoTest::getToday(void)

{
  string local_10 [4];
  
  std::string::string(local_10);
                    /* try { // try from 080caf9d to 080cb000 has its CatchHandler @ 080cb003 */
  std::string::operator=(local_10,"2012-07-19 05:00:00");
  std::string::operator=(local_10,"2012-07-19 06:00:00");
  std::string::operator=(local_10,"2012-07-20 12:00:00");
  std::string::operator=(local_10,"2012-07-31 11:00:00");
  std::string::operator=(local_10,"2012-08-01 05:00:00");
  std::string::operator=(local_10,"2012-08-01 07:00:00");
  std::string::~string(local_10);
  return;
}
```
