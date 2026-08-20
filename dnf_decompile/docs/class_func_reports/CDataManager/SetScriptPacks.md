# SetScriptPacks

`_ZN12CDataManager14SetScriptPacksEPKc`

`CDataManager::SetScriptPacks(char const*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083641c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083641c2  _ZN12CDataManager14SetScriptPacksEPKc
#           CDataManager::SetScriptPacks(char const*)
# range [0x083641c2, 0x08364201]
083641c2 +0x00:  push   %ebp
083641c3 +0x01:  mov    %esp,%ebp
083641c5 +0x03:  sub    $0x18,%esp
083641c8 +0x06:  cmpl   $0x0,0xc(%ebp)
083641cc +0x0a:  jne    083641e8 <+0x26>
083641ce +0x0c:  mov    0x8(%ebp),%eax
083641d1 +0x0f:  add    $0xb544,%eax
083641d6 +0x14:  movl   $"Script.pvf",0x4(%esp)
083641de +0x1c:  mov    %eax,(%esp)
083641e1 +0x1f:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
083641e6 +0x24:  jmp    08364200 <+0x3e>
083641e8 +0x26:  mov    0x8(%ebp),%eax
083641eb +0x29:  lea    0xb544(%eax),%edx
083641f1 +0x2f:  mov    0xc(%ebp),%eax
083641f4 +0x32:  mov    %eax,0x4(%esp)
083641f8 +0x36:  mov    %edx,(%esp)
083641fb +0x39:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08364200 +0x3e:  leave
08364201 +0x3f:  ret
```

## 反编译 C

```c
// CDataManager::SetScriptPacks @ 0x83641c2

/* CDataManager::SetScriptPacks(char const*) */

void __thiscall CDataManager::SetScriptPacks(CDataManager *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    std::string::operator=((string *)(this + 0xb544),"Script.pvf");
  }
  else {
    std::string::operator=((string *)(this + 0xb544),param_1);
  }
  return;
}
```
