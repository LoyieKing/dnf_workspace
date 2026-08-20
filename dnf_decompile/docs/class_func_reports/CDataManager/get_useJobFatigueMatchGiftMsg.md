# get_useJobFatigueMatchGiftMsg

`_ZN12CDataManager29get_useJobFatigueMatchGiftMsgEiRSsS0_`

`CDataManager::get_useJobFatigueMatchGiftMsg(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836598e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836598e  _ZN12CDataManager29get_useJobFatigueMatchGiftMsgEiRSsS0_
#           CDataManager::get_useJobFatigueMatchGiftMsg(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x0836598e, 0x08365a23]
0836598e +0x00:  push   %ebp
0836598f +0x01:  mov    %esp,%ebp
08365991 +0x03:  sub    $0x28,%esp
08365994 +0x06:  mov    0x8(%ebp),%eax
08365997 +0x09:  lea    0x4bec(%eax),%ecx
0836599d +0x0f:  lea    -0x10(%ebp),%eax
083659a0 +0x12:  lea    0xc(%ebp),%edx
083659a3 +0x15:  mov    %edx,0x8(%esp)
083659a7 +0x19:  mov    %ecx,0x4(%esp)
083659ab +0x1d:  mov    %eax,(%esp)
083659ae +0x20:  call   08395cfa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2579a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2579a
083659b3 +0x25:  sub    $0x4,%esp
083659b6 +0x28:  mov    0x8(%ebp),%eax
083659b9 +0x2b:  lea    0x4bec(%eax),%edx
083659bf +0x31:  lea    -0xc(%ebp),%eax
083659c2 +0x34:  mov    %edx,0x4(%esp)
083659c6 +0x38:  mov    %eax,(%esp)
083659c9 +0x3b:  call   08395d26 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x257c6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x257c6
083659ce +0x40:  sub    $0x4,%esp
083659d1 +0x43:  lea    -0xc(%ebp),%eax
083659d4 +0x46:  mov    %eax,0x4(%esp)
083659d8 +0x4a:  lea    -0x10(%ebp),%eax
083659db +0x4d:  mov    %eax,(%esp)
083659de +0x50:  call   08395d4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x257ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x257ec
083659e3 +0x55:  test   %al,%al
083659e5 +0x57:  je     08365a21 <+0x93>
083659e7 +0x59:  lea    -0x10(%ebp),%eax
083659ea +0x5c:  mov    %eax,(%esp)
083659ed +0x5f:  call   08395d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25800
083659f2 +0x64:  add    $0x20,%eax
083659f5 +0x67:  mov    %eax,0x4(%esp)
083659f9 +0x6b:  mov    0x10(%ebp),%eax
083659fc +0x6e:  mov    %eax,(%esp)
083659ff +0x71:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08365a04 +0x76:  lea    -0x10(%ebp),%eax
08365a07 +0x79:  mov    %eax,(%esp)
08365a0a +0x7c:  call   08395d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25800
08365a0f +0x81:  add    $0x24,%eax
08365a12 +0x84:  mov    %eax,0x4(%esp)
08365a16 +0x88:  mov    0x14(%ebp),%eax
08365a19 +0x8b:  mov    %eax,(%esp)
08365a1c +0x8e:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08365a21 +0x93:  leave
08365a22 +0x94:  ret
08365a23 +0x95:  nop
```

## 反编译 C

```c
// CDataManager::get_useJobFatigueMatchGiftMsg @ 0x836598e

/* CDataManager::get_useJobFatigueMatchGiftMsg(int, std::string&, std::string&) */

void __thiscall
CDataManager::get_useJobFatigueMatchGiftMsg
          (CDataManager *this,int param_1,string *param_2,string *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>> local_14 [4];
  map<int,useCharacterJobFatigue::fatigueMatchGift,std::less<int>,std::allocator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>>
  local_10 [12];
  
  std::
  map<int,useCharacterJobFatigue::fatigueMatchGift,std::less<int>,std::allocator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>>
  ::find((int *)local_14);
  std::
  map<int,useCharacterJobFatigue::fatigueMatchGift,std::less<int>,std::allocator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
            operator->(local_14);
    std::string::operator=((string *)param_2,(string *)(iVar2 + 0x20));
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,useCharacterJobFatigue::fatigueMatchGift>>::
            operator->(local_14);
    std::string::operator=((string *)param_3,(string *)(iVar2 + 0x24));
  }
  return;
}
```
