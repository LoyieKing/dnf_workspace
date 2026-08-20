# parse

`_ZN11game_master11CStartEvent5parseEv`

`game_master::CStartEvent::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CStartEvent` | `0x084ab5b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab5b6  _ZN11game_master11CStartEvent5parseEv
#           game_master::CStartEvent::parse()
# range [0x084ab5b6, 0x084ab64d]
084ab5b6 +0x00:  push   %ebp
084ab5b7 +0x01:  mov    %esp,%ebp
084ab5b9 +0x03:  push   %esi
084ab5ba +0x04:  push   %ebx
084ab5bb +0x05:  sub    $0x20,%esp
084ab5be +0x08:  mov    0x8(%ebp),%eax
084ab5c1 +0x0b:  movl   $0x0,0xc(%eax)
084ab5c8 +0x12:  mov    0x8(%ebp),%eax
084ab5cb +0x15:  movw   $0x0,0x10(%eax)
084ab5d1 +0x1b:  mov    0x8(%ebp),%eax
084ab5d4 +0x1e:  movw   $0x0,0x12(%eax)
084ab5da +0x24:  mov    0x8(%ebp),%eax
084ab5dd +0x27:  movl   $0x0,0x8(%eax)
084ab5e4 +0x2e:  mov    0x8(%ebp),%eax
084ab5e7 +0x31:  mov    0x4(%eax),%eax
084ab5ea +0x34:  add    $0xc,%eax
084ab5ed +0x37:  mov    %eax,(%esp)
084ab5f0 +0x3a:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084ab5f5 +0x3f:  mov    0x8(%ebp),%eax
084ab5f8 +0x42:  mov    0x4(%eax),%eax
084ab5fb +0x45:  add    $0xc,%eax
084ab5fe +0x48:  mov    %eax,0x4(%esp)
084ab602 +0x4c:  lea    -0xc(%ebp),%eax
084ab605 +0x4f:  mov    %eax,(%esp)
084ab608 +0x52:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
084ab60d +0x57:  lea    -0xc(%ebp),%eax
084ab610 +0x5a:  mov    %eax,0x4(%esp)
084ab614 +0x5e:  mov    0x8(%ebp),%eax
084ab617 +0x61:  mov    %eax,(%esp)
084ab61a +0x64:  call   084ab64e <_ZN11game_master11CStartEvent8getParamESs>  ; game_master::CStartEvent::getParam(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
084ab61f +0x69:  jmp    084ab63c <+0x86>
084ab621 +0x6b:  mov    %edx,%ebx
084ab623 +0x6d:  mov    %eax,%esi
084ab625 +0x6f:  lea    -0xc(%ebp),%eax
084ab628 +0x72:  mov    %eax,(%esp)
084ab62b +0x75:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab630 +0x7a:  mov    %esi,%eax
084ab632 +0x7c:  mov    %ebx,%edx
084ab634 +0x7e:  mov    %eax,(%esp)
084ab637 +0x81:  call   08ae3750 <_Unwind_Resume>
084ab63c +0x86:  lea    -0xc(%ebp),%eax
084ab63f +0x89:  mov    %eax,(%esp)
084ab642 +0x8c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab647 +0x91:  add    $0x20,%esp
084ab64a +0x94:  pop    %ebx
084ab64b +0x95:  pop    %esi
084ab64c +0x96:  pop    %ebp
084ab64d +0x97:  ret
```

## 反编译 C

```c
// game_master::CStartEvent::parse @ 0x84ab5b6

/* game_master::CStartEvent::parse() */

void __thiscall game_master::CStartEvent::parse(CStartEvent *this)

{
  string local_10 [4];
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x12) = 0;
  *(undefined4 *)(this + 8) = 0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::string(local_10,(string *)(*(int *)(this + 4) + 0xc));
                    /* try { // try from 084ab61a to 084ab61e has its CatchHandler @ 084ab621 */
  getParam(this,(string)local_10);
  std::string::~string(local_10);
  return;
}
```
