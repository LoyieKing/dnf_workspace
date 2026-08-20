# CFLog

`_ZN5CFLogC1ERSs`

`CFLog::CFLog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `CFLog` | `0x08106dc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106dc4  _ZN5CFLogC1ERSs
#           CFLog::CFLog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08106dc4, 0x08106e5b]
08106dc4 +0x00:  push   %ebp
08106dc5 +0x01:  mov    %esp,%ebp
08106dc7 +0x03:  push   %esi
08106dc8 +0x04:  push   %ebx
08106dc9 +0x05:  sub    $0x10,%esp
08106dcc +0x08:  mov    0x8(%ebp),%eax
08106dcf +0x0b:  movl   $&_ZTV5CFLog+0x8,(%eax)
08106dd5 +0x11:  mov    0x8(%ebp),%eax
08106dd8 +0x14:  add    $0x8,%eax
08106ddb +0x17:  mov    %eax,(%esp)
08106dde +0x1a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08106de3 +0x1f:  mov    0x8(%ebp),%eax
08106de6 +0x22:  lea    0x8(%eax),%edx
08106de9 +0x25:  mov    0xc(%ebp),%eax
08106dec +0x28:  mov    %eax,0x4(%esp)
08106df0 +0x2c:  mov    %edx,(%esp)
08106df3 +0x2f:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08106df8 +0x34:  mov    0xc(%ebp),%eax
08106dfb +0x37:  mov    %eax,(%esp)
08106dfe +0x3a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08106e03 +0x3f:  movl   $"ab",0x4(%esp)
08106e0b +0x47:  mov    %eax,(%esp)
08106e0e +0x4a:  call   0807e770 <_init+0x1068>
08106e13 +0x4f:  mov    0x8(%ebp),%edx
08106e16 +0x52:  mov    %eax,0x4(%edx)
08106e19 +0x55:  mov    0x8(%ebp),%eax
08106e1c +0x58:  mov    0x4(%eax),%eax
08106e1f +0x5b:  test   %eax,%eax
08106e21 +0x5d:  sete   %al
08106e24 +0x60:  test   %al,%al
08106e26 +0x62:  je     08106e54 <+0x90>
08106e28 +0x64:  mov    &stdout,%edx
08106e2e +0x6a:  mov    0x8(%ebp),%eax
08106e31 +0x6d:  mov    %edx,0x4(%eax)
08106e34 +0x70:  jmp    08106e54 <+0x90>
08106e36 +0x72:  mov    %edx,%ebx
08106e38 +0x74:  mov    %eax,%esi
08106e3a +0x76:  mov    0x8(%ebp),%eax
08106e3d +0x79:  add    $0x8,%eax
08106e40 +0x7c:  mov    %eax,(%esp)
08106e43 +0x7f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08106e48 +0x84:  mov    %esi,%eax
08106e4a +0x86:  mov    %ebx,%edx
08106e4c +0x88:  mov    %eax,(%esp)
08106e4f +0x8b:  call   08ae3750 <_Unwind_Resume>
08106e54 +0x90:  add    $0x10,%esp
08106e57 +0x93:  pop    %ebx
08106e58 +0x94:  pop    %esi
08106e59 +0x95:  pop    %ebp
08106e5a +0x96:  ret
08106e5b +0x97:  nop
```

## 反编译 C

```c
// CFLog::CFLog @ 0x8106dc4

/* CFLog::CFLog(std::string&) */

void __thiscall CFLog::CFLog(CFLog *this,string *param_1)

{
  char *__filename;
  FILE *pFVar1;
  
  *(undefined ***)this = &PTR__CFLog_08b44650;
  std::string::string((string *)(this + 8));
                    /* try { // try from 08106df3 to 08106e12 has its CatchHandler @ 08106e36 */
  std::string::operator=((string *)(this + 8),(string *)param_1);
  __filename = (char *)std::string::c_str((string *)param_1);
  pFVar1 = fopen(__filename,"ab");
  *(FILE **)(this + 4) = pFVar1;
  if (*(int *)(this + 4) == 0) {
    *(undefined4 *)(this + 4) = stdout;
  }
  return;
}
```
