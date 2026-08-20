# parse

`_ZN11game_master17CGrowhWeaponEvent5parseEv`

`game_master::CGrowhWeaponEvent::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CGrowhWeaponEvent` | `0x084b28d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b28d6  _ZN11game_master17CGrowhWeaponEvent5parseEv
#           game_master::CGrowhWeaponEvent::parse()
# range [0x084b28d6, 0x084b293b]
084b28d6 +0x00:  push   %ebp
084b28d7 +0x01:  mov    %esp,%ebp
084b28d9 +0x03:  sub    $0x18,%esp
084b28dc +0x06:  mov    0x8(%ebp),%eax
084b28df +0x09:  mov    0x4(%eax),%eax
084b28e2 +0x0c:  add    $0xc,%eax
084b28e5 +0x0f:  mov    %eax,(%esp)
084b28e8 +0x12:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b28ed +0x17:  mov    0x8(%ebp),%eax
084b28f0 +0x1a:  mov    0x4(%eax),%eax
084b28f3 +0x1d:  add    $0xc,%eax
084b28f6 +0x20:  movl   $"gw",0x4(%esp)
084b28fe +0x28:  mov    %eax,(%esp)
084b2901 +0x2b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b2906 +0x30:  test   %al,%al
084b2908 +0x32:  je     084b2913 <+0x3d>
084b290a +0x34:  mov    0x8(%ebp),%eax
084b290d +0x37:  movb   $0x1,0x8(%eax)
084b2911 +0x3b:  jmp    084b2939 <+0x63>
084b2913 +0x3d:  mov    0x8(%ebp),%eax
084b2916 +0x40:  movb   $0x0,0x8(%eax)
084b291a +0x44:  mov    0x8(%ebp),%eax
084b291d +0x47:  mov    0x4(%eax),%eax
084b2920 +0x4a:  add    $0xc,%eax
084b2923 +0x4d:  mov    %eax,(%esp)
084b2926 +0x50:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b292b +0x55:  mov    %eax,(%esp)
084b292e +0x58:  call   0807e6f0 <_init+0xfe8>
084b2933 +0x5d:  mov    0x8(%ebp),%edx
084b2936 +0x60:  mov    %eax,0xc(%edx)
084b2939 +0x63:  leave
084b293a +0x64:  ret
084b293b +0x65:  nop
```

## 反编译 C

```c
// game_master::CGrowhWeaponEvent::parse @ 0x84b28d6

/* game_master::CGrowhWeaponEvent::parse() */

void __thiscall game_master::CGrowhWeaponEvent::parse(CGrowhWeaponEvent *this)

{
  bool bVar1;
  char *__nptr;
  int iVar2;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  bVar1 = std::operator==((string *)(*(int *)(this + 4) + 0xc),"gw");
  if (bVar1) {
    this[8] = (CGrowhWeaponEvent)0x1;
  }
  else {
    this[8] = (CGrowhWeaponEvent)0x0;
    __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
    iVar2 = atoi(__nptr);
    *(int *)(this + 0xc) = iVar2;
  }
  return;
}
```
