# clearScript

`_ZN23DeleteInvalidItemScript11clearScriptEv`

`DeleteInvalidItemScript::clearScript()`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac2066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac2066  _ZN23DeleteInvalidItemScript11clearScriptEv
#           DeleteInvalidItemScript::clearScript()
# range [0x08ac2066, 0x08ac2095]
08ac2066 +0x00:  push   %ebp
08ac2067 +0x01:  mov    %esp,%ebp
08ac2069 +0x03:  sub    $0x18,%esp
08ac206c +0x06:  mov    0x8(%ebp),%eax
08ac206f +0x09:  mov    %eax,(%esp)
08ac2072 +0x0c:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08ac2077 +0x11:  mov    0x8(%ebp),%eax
08ac207a +0x14:  add    $0x4,%eax
08ac207d +0x17:  mov    %eax,(%esp)
08ac2080 +0x1a:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08ac2085 +0x1f:  mov    0x8(%ebp),%eax
08ac2088 +0x22:  add    $0x8,%eax
08ac208b +0x25:  mov    %eax,(%esp)
08ac208e +0x28:  call   08ac2376 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x187>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x187
08ac2093 +0x2d:  leave
08ac2094 +0x2e:  ret
08ac2095 +0x2f:  nop
```

## 反编译 C

```c
// DeleteInvalidItemScript::clearScript @ 0x8ac2066

/* DeleteInvalidItemScript::clearScript() */

void __thiscall DeleteInvalidItemScript::clearScript(DeleteInvalidItemScript *this)

{
  std::string::clear((string *)this);
  std::string::clear((string *)(this + 4));
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::clear((map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
           *)(this + 8));
  return;
}
```
