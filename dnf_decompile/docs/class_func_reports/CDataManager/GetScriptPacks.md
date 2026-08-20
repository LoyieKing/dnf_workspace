# GetScriptPacks

`_ZNK12CDataManager14GetScriptPacksEv`

`CDataManager::GetScriptPacks() const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08364202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364202  _ZNK12CDataManager14GetScriptPacksEv
#           CDataManager::GetScriptPacks() const
# range [0x08364202, 0x08364219]
08364202 +0x00:  push   %ebp
08364203 +0x01:  mov    %esp,%ebp
08364205 +0x03:  sub    $0x18,%esp
08364208 +0x06:  mov    0x8(%ebp),%eax
0836420b +0x09:  add    $0xb544,%eax
08364210 +0x0e:  mov    %eax,(%esp)
08364213 +0x11:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08364218 +0x16:  leave
08364219 +0x17:  ret
```

## 反编译 C

```c
// CDataManager::GetScriptPacks @ 0x8364202

/* CDataManager::GetScriptPacks() const */

void __thiscall CDataManager::GetScriptPacks(CDataManager *this)

{
  std::string::c_str((string *)(this + 0xb544));
  return;
}
```
