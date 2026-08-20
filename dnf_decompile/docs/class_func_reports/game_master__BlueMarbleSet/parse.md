# parse

`_ZN11game_master13BlueMarbleSet5parseEv`

`game_master::BlueMarbleSet::parse()`

| 类 | 地址 |
|---|---|
| `game_master::BlueMarbleSet` | `0x084b22ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b22ca  _ZN11game_master13BlueMarbleSet5parseEv
#           game_master::BlueMarbleSet::parse()
# range [0x084b22ca, 0x084b235b]
084b22ca +0x00:  push   %ebp
084b22cb +0x01:  mov    %esp,%ebp
084b22cd +0x03:  push   %esi
084b22ce +0x04:  push   %ebx
084b22cf +0x05:  sub    $0x20,%esp
084b22d2 +0x08:  mov    0x8(%ebp),%eax
084b22d5 +0x0b:  movb   $0x0,0x9(%eax)
084b22d9 +0x0f:  mov    0x8(%ebp),%eax
084b22dc +0x12:  movb   $0x0,0xa(%eax)
084b22e0 +0x16:  mov    0x8(%ebp),%eax
084b22e3 +0x19:  movb   $0x0,0x8(%eax)
084b22e7 +0x1d:  mov    0x8(%ebp),%eax
084b22ea +0x20:  movl   $0x0,0xc(%eax)
084b22f1 +0x27:  mov    0x8(%ebp),%eax
084b22f4 +0x2a:  mov    0x4(%eax),%eax
084b22f7 +0x2d:  add    $0xc,%eax
084b22fa +0x30:  mov    %eax,(%esp)
084b22fd +0x33:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b2302 +0x38:  mov    0x8(%ebp),%eax
084b2305 +0x3b:  mov    0x4(%eax),%eax
084b2308 +0x3e:  add    $0xc,%eax
084b230b +0x41:  mov    %eax,0x4(%esp)
084b230f +0x45:  lea    -0xc(%ebp),%eax
084b2312 +0x48:  mov    %eax,(%esp)
084b2315 +0x4b:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
084b231a +0x50:  lea    -0xc(%ebp),%eax
084b231d +0x53:  mov    %eax,0x4(%esp)
084b2321 +0x57:  mov    0x8(%ebp),%eax
084b2324 +0x5a:  mov    %eax,(%esp)
084b2327 +0x5d:  call   084b235c <_ZN11game_master13BlueMarbleSet8getParamESs>  ; game_master::BlueMarbleSet::getParam(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
084b232c +0x62:  jmp    084b2349 <+0x7f>
084b232e +0x64:  mov    %edx,%ebx
084b2330 +0x66:  mov    %eax,%esi
084b2332 +0x68:  lea    -0xc(%ebp),%eax
084b2335 +0x6b:  mov    %eax,(%esp)
084b2338 +0x6e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b233d +0x73:  mov    %esi,%eax
084b233f +0x75:  mov    %ebx,%edx
084b2341 +0x77:  mov    %eax,(%esp)
084b2344 +0x7a:  call   08ae3750 <_Unwind_Resume>
084b2349 +0x7f:  lea    -0xc(%ebp),%eax
084b234c +0x82:  mov    %eax,(%esp)
084b234f +0x85:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b2354 +0x8a:  add    $0x20,%esp
084b2357 +0x8d:  pop    %ebx
084b2358 +0x8e:  pop    %esi
084b2359 +0x8f:  pop    %ebp
084b235a +0x90:  ret
084b235b +0x91:  nop
```

## 反编译 C

```c
// game_master::BlueMarbleSet::parse @ 0x84b22ca

/* game_master::BlueMarbleSet::parse() */

void __thiscall game_master::BlueMarbleSet::parse(BlueMarbleSet *this)

{
  string local_10 [4];
  
  this[9] = (BlueMarbleSet)0x0;
  this[10] = (BlueMarbleSet)0x0;
  this[8] = (BlueMarbleSet)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::string(local_10,(string *)(*(int *)(this + 4) + 0xc));
                    /* try { // try from 084b2327 to 084b232b has its CatchHandler @ 084b232e */
  getParam(this,(string)local_10);
  std::string::~string(local_10);
  return;
}
```
