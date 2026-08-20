# CExceptLog

`_ZN10CExceptLogC1ERSs`

`CExceptLog::CExceptLog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `CExceptLog` | `0x0846d736` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d736  _ZN10CExceptLogC1ERSs
#           CExceptLog::CExceptLog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x0846d736, 0x0846d7a4]
0846d736 +0x00:  push   %ebp
0846d737 +0x01:  mov    %esp,%ebp
0846d739 +0x03:  sub    $0xa8,%esp
0846d73f +0x09:  mov    0x8(%ebp),%eax
0846d742 +0x0c:  movl   $0x7d0,0x8(%esp)
0846d74a +0x14:  movl   $0x0,0x4(%esp)
0846d752 +0x1c:  mov    %eax,(%esp)
0846d755 +0x1f:  call   0807dcc0 <_init+0x5b8>
0846d75a +0x24:  lea    -0x88(%ebp),%eax
0846d760 +0x2a:  mov    %eax,0x4(%esp)
0846d764 +0x2e:  mov    0x8(%ebp),%eax
0846d767 +0x31:  mov    %eax,(%esp)
0846d76a +0x34:  call   0846d6c2 <_ZN10CExceptLog15Set_Time_StringEPc>  ; CExceptLog::Set_Time_String(char*)
0846d76f +0x39:  mov    0xc(%ebp),%eax
0846d772 +0x3c:  mov    %eax,(%esp)
0846d775 +0x3f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846d77a +0x44:  mov    %eax,0x10(%esp)
0846d77e +0x48:  lea    -0x88(%ebp),%eax
0846d784 +0x4e:  mov    %eax,0xc(%esp)
0846d788 +0x52:  movl   $"%s\n%s\n",0x8(%esp)
0846d790 +0x5a:  movl   $"Except.txt",0x4(%esp)
0846d798 +0x62:  mov    0x8(%ebp),%eax
0846d79b +0x65:  mov    %eax,(%esp)
0846d79e +0x68:  call   0846d682 <_ZN10CExceptLog14fPrintTextFileEPcS0_z>  ; CExceptLog::fPrintTextFile(char*, char*, ...)
0846d7a3 +0x6d:  leave
0846d7a4 +0x6e:  ret
```

## 反编译 C

```c
// CExceptLog::CExceptLog @ 0x846d736

/* CExceptLog::CExceptLog(std::string&) */

void __thiscall CExceptLog::CExceptLog(CExceptLog *this,string *param_1)

{
  undefined4 uVar1;
  char local_8c [136];
  
  memset(this,0,2000);
  Set_Time_String(this,local_8c);
  uVar1 = std::string::c_str((string *)param_1);
  fPrintTextFile(this,"Except.txt","%s\n%s\n",local_8c,uVar1);
  return;
}
```
