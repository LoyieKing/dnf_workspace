# __insertGameScript

`_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE`

`ARAD::Arad_DataManager::__insertGameScript(ARAD::Arad_InterfaceGameScript*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x081889bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081889bc  _ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE
#           ARAD::Arad_DataManager::__insertGameScript(ARAD::Arad_InterfaceGameScript*)
# range [0x081889bc, 0x08188aba]
081889bc +0x00:  push   %ebp
081889bd +0x01:  mov    %esp,%ebp
081889bf +0x03:  push   %esi
081889c0 +0x04:  push   %ebx
081889c1 +0x05:  sub    $0x20,%esp
081889c4 +0x08:  lea    -0x14(%ebp),%eax
081889c7 +0x0b:  mov    0xc(%ebp),%edx
081889ca +0x0e:  mov    %edx,0x4(%esp)
081889ce +0x12:  mov    %eax,(%esp)
081889d1 +0x15:  call   08188b18 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1d
081889d6 +0x1a:  sub    $0x4,%esp
081889d9 +0x1d:  mov    0x8(%ebp),%eax
081889dc +0x20:  lea    0x4(%eax),%ecx
081889df +0x23:  lea    -0x18(%ebp),%eax
081889e2 +0x26:  lea    -0x14(%ebp),%edx
081889e5 +0x29:  mov    %edx,0x8(%esp)
081889e9 +0x2d:  mov    %ecx,0x4(%esp)
081889ed +0x31:  mov    %eax,(%esp)
081889f0 +0x34:  call   08189396 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x89b>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x89b
081889f5 +0x39:  sub    $0x4,%esp
081889f8 +0x3c:  lea    -0x14(%ebp),%eax
081889fb +0x3f:  mov    %eax,(%esp)
081889fe +0x42:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08188a03 +0x47:  mov    0x8(%ebp),%eax
08188a06 +0x4a:  lea    0x4(%eax),%edx
08188a09 +0x4d:  lea    -0x10(%ebp),%eax
08188a0c +0x50:  mov    %edx,0x4(%esp)
08188a10 +0x54:  mov    %eax,(%esp)
08188a13 +0x57:  call   0818930c <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x811>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x811
08188a18 +0x5c:  sub    $0x4,%esp
08188a1b +0x5f:  lea    -0x18(%ebp),%eax
08188a1e +0x62:  mov    %eax,0x4(%esp)
08188a22 +0x66:  lea    -0x10(%ebp),%eax
08188a25 +0x69:  mov    %eax,(%esp)
08188a28 +0x6c:  call   081893c2 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x8c7>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x8c7
08188a2d +0x71:  test   %al,%al
08188a2f +0x73:  je     08188a55 <+0x99>
08188a31 +0x75:  jmp    08188a4e <+0x92>
08188a33 +0x77:  mov    %edx,%ebx
08188a35 +0x79:  mov    %eax,%esi
08188a37 +0x7b:  lea    -0x14(%ebp),%eax
08188a3a +0x7e:  mov    %eax,(%esp)
08188a3d +0x81:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08188a42 +0x86:  mov    %esi,%eax
08188a44 +0x88:  mov    %ebx,%edx
08188a46 +0x8a:  mov    %eax,(%esp)
08188a49 +0x8d:  call   08ae3750 <_Unwind_Resume>
08188a4e +0x92:  mov    $0x0,%eax
08188a53 +0x97:  jmp    08188ab1 <+0xf5>
08188a55 +0x99:  lea    -0xc(%ebp),%eax
08188a58 +0x9c:  mov    0xc(%ebp),%edx
08188a5b +0x9f:  mov    %edx,0x4(%esp)
08188a5f +0xa3:  mov    %eax,(%esp)
08188a62 +0xa6:  call   08188b18 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1d
08188a67 +0xab:  sub    $0x4,%esp
08188a6a +0xae:  mov    0x8(%ebp),%eax
08188a6d +0xb1:  lea    0x4(%eax),%edx
08188a70 +0xb4:  lea    -0xc(%ebp),%eax
08188a73 +0xb7:  mov    %eax,0x4(%esp)
08188a77 +0xbb:  mov    %edx,(%esp)
08188a7a +0xbe:  call   081891c2 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x6c7>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x6c7
08188a7f +0xc3:  mov    0xc(%ebp),%edx
08188a82 +0xc6:  mov    %edx,(%eax)
08188a84 +0xc8:  lea    -0xc(%ebp),%eax
08188a87 +0xcb:  mov    %eax,(%esp)
08188a8a +0xce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08188a8f +0xd3:  mov    $0x1,%eax
08188a94 +0xd8:  jmp    08188ab1 <+0xf5>
08188a96 +0xda:  mov    %edx,%ebx
08188a98 +0xdc:  mov    %eax,%esi
08188a9a +0xde:  lea    -0xc(%ebp),%eax
08188a9d +0xe1:  mov    %eax,(%esp)
08188aa0 +0xe4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08188aa5 +0xe9:  mov    %esi,%eax
08188aa7 +0xeb:  mov    %ebx,%edx
08188aa9 +0xed:  mov    %eax,(%esp)
08188aac +0xf0:  call   08ae3750 <_Unwind_Resume>
08188ab1 +0xf5:  lea    -0x8(%ebp),%esp
08188ab4 +0xf8:  add    $0x0,%esp
08188ab7 +0xfb:  pop    %ebx
08188ab8 +0xfc:  pop    %esi
08188ab9 +0xfd:  pop    %ebp
08188aba +0xfe:  ret
```

## 反编译 C

```c
// ARAD::Arad_DataManager::__insertGameScript @ 0x81889bc

/* ARAD::Arad_DataManager::__insertGameScript(ARAD::Arad_InterfaceGameScript*) */

bool __thiscall
ARAD::Arad_DataManager::__insertGameScript(Arad_DataManager *this,Arad_InterfaceGameScript *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  string local_1c;
  string local_18 [4];
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  local_14 [4];
  string local_10;
  
  Arad_InterfaceGameScript::scriptDataName();
                    /* try { // try from 081889f0 to 081889f4 has its CatchHandler @ 08188a33 */
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::find(&local_1c);
  std::string::~string(local_18);
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>::
          operator!=((_Rb_tree_iterator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>
                      *)local_14,(_Rb_tree_iterator *)&local_1c);
  if (cVar1 == '\0') {
    Arad_InterfaceGameScript::scriptDataName();
                    /* try { // try from 08188a7a to 08188a7e has its CatchHandler @ 08188a96 */
    puVar2 = (undefined4 *)
             std::
             map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
             ::operator[]((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
                           *)(this + 4),&local_10);
    *puVar2 = param_1;
    std::string::~string((string *)&local_10);
  }
  return cVar1 == '\0';
}
```
