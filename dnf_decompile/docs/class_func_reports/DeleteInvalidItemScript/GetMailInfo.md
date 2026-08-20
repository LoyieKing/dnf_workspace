# GetMailInfo

`_ZNK23DeleteInvalidItemScript11GetMailInfoERSsS0_`

`DeleteInvalidItemScript::GetMailInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac2180` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac2180  _ZNK23DeleteInvalidItemScript11GetMailInfoERSsS0_
#           DeleteInvalidItemScript::GetMailInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&) const
# range [0x08ac2180, 0x08ac21ae]
08ac2180 +0x00:  push   %ebp
08ac2181 +0x01:  mov    %esp,%ebp
08ac2183 +0x03:  sub    $0x18,%esp
08ac2186 +0x06:  mov    0x8(%ebp),%eax
08ac2189 +0x09:  mov    %eax,0x4(%esp)
08ac218d +0x0d:  mov    0xc(%ebp),%eax
08ac2190 +0x10:  mov    %eax,(%esp)
08ac2193 +0x13:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08ac2198 +0x18:  mov    0x8(%ebp),%eax
08ac219b +0x1b:  add    $0x4,%eax
08ac219e +0x1e:  mov    %eax,0x4(%esp)
08ac21a2 +0x22:  mov    0x10(%ebp),%eax
08ac21a5 +0x25:  mov    %eax,(%esp)
08ac21a8 +0x28:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08ac21ad +0x2d:  leave
08ac21ae +0x2e:  ret
```

## 反编译 C

```c
// DeleteInvalidItemScript::GetMailInfo @ 0x8ac2180

/* DeleteInvalidItemScript::GetMailInfo(std::string&, std::string&) const */

void __thiscall
DeleteInvalidItemScript::GetMailInfo(DeleteInvalidItemScript *this,string *param_1,string *param_2)

{
  std::string::operator=(param_1,(string *)this);
  std::string::operator=(param_2,(string *)(this + 4));
  return;
}
```
