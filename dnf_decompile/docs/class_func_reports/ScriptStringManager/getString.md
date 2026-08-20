# getString

`_ZNK19ScriptStringManager9getStringEiPSs`

`ScriptStringManager::getString(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf160  _ZNK19ScriptStringManager9getStringEiPSs
#           ScriptStringManager::getString(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const
# range [0x08acf160, 0x08acf1e9]
08acf160 +0x00:  push   %ebp
08acf161 +0x01:  mov    %esp,%ebp
08acf163 +0x03:  sub    $0x28,%esp
08acf166 +0x06:  mov    %ebx,-0xc(%ebp)
08acf169 +0x09:  mov    0x10(%ebp),%ebx
08acf16c +0x0c:  mov    %esi,-0x8(%ebp)
08acf16f +0x0f:  mov    0xc(%ebp),%esi
08acf172 +0x12:  mov    %edi,-0x4(%ebp)
08acf175 +0x15:  mov    0x8(%ebp),%edi
08acf178 +0x18:  movl   $0x0,0xc(%esp)
08acf180 +0x20:  mov    (%ebx),%eax
08acf182 +0x22:  mov    -0xc(%eax),%eax
08acf185 +0x25:  movl   $0x0,0x4(%esp)
08acf18d +0x2d:  mov    %ebx,(%esp)
08acf190 +0x30:  mov    %eax,0x8(%esp)
08acf194 +0x34:  call   08708370 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1f80>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1f80
08acf199 +0x39:  test   %esi,%esi
08acf19b +0x3b:  js     08acf1c8 <+0x68>
08acf19d +0x3d:  mov    0x4(%edi),%eax
08acf1a0 +0x40:  lea    (%eax,%esi,4),%eax
08acf1a3 +0x43:  mov    %ebx,(%esp)
08acf1a6 +0x46:  mov    %eax,0x4(%esp)
08acf1aa +0x4a:  call   08707c30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1840>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1840
08acf1af +0x4f:  mov    -0xc(%ebp),%ebx
08acf1b2 +0x52:  mov    $0x1,%eax
08acf1b7 +0x57:  mov    -0x8(%ebp),%esi
08acf1ba +0x5a:  mov    -0x4(%ebp),%edi
08acf1bd +0x5d:  mov    %ebp,%esp
08acf1bf +0x5f:  pop    %ebp
08acf1c0 +0x60:  ret
08acf1c1 +0x61:  lea    0x0(%esi,%eiz,1),%esi
08acf1c8 +0x68:  mov    0x4(%edi),%eax
08acf1cb +0x6b:  mov    0x8(%edi),%edx
08acf1ce +0x6e:  sub    %eax,%edx
08acf1d0 +0x70:  sar    $0x2,%edx
08acf1d3 +0x73:  cmp    %edx,%esi
08acf1d5 +0x75:  jle    08acf1a0 <+0x40>
08acf1d7 +0x77:  mov    -0xc(%ebp),%ebx
08acf1da +0x7a:  xor    %eax,%eax
08acf1dc +0x7c:  mov    -0x8(%ebp),%esi
08acf1df +0x7f:  mov    -0x4(%ebp),%edi
08acf1e2 +0x82:  mov    %ebp,%esp
08acf1e4 +0x84:  pop    %ebp
08acf1e5 +0x85:  ret
08acf1e6 +0x86:  lea    0x0(%esi),%esi
08acf1e9 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// ScriptStringManager::getString @ 0x8acf160

/* DWARF original prototype: bool getString(ScriptStringManager * this, int index, string *
   outputString) */

bool __thiscall
ScriptStringManager::getString(ScriptStringManager *this,int index,string *outputString)

{
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar1;
  
  std::string::_M_mutate
            ((string *)outputString,0,*(uint *)((outputString->_M_dataplus)._M_p + -0xc),0);
  if (index < 0) {
    pbVar1 = (this->strings_).
             super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ._M_impl._M_start;
    if ((int)(this->strings_).
             super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ._M_impl._M_finish - (int)pbVar1 >> 2 < index) {
      return false;
    }
  }
  else {
    pbVar1 = (this->strings_).
             super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ._M_impl._M_start;
  }
  std::string::assign((string *)outputString,(string *)(pbVar1 + index));
  return true;
}
```
