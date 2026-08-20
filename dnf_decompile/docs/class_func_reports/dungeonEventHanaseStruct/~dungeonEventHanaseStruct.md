# ~dungeonEventHanaseStruct

`_ZN24dungeonEventHanaseStructD1Ev`

`dungeonEventHanaseStruct::~dungeonEventHanaseStruct()`

| 类 | 地址 |
|---|---|
| `dungeonEventHanaseStruct` | `0x08a61164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a61164  _ZN24dungeonEventHanaseStructD1Ev
#           dungeonEventHanaseStruct::~dungeonEventHanaseStruct()
# range [0x08a61164, 0x08a611fb]
08a61164 +0x00:  push   %ebp
08a61165 +0x01:  mov    %esp,%ebp
08a61167 +0x03:  push   %esi
08a61168 +0x04:  push   %ebx
08a61169 +0x05:  sub    $0x20,%esp
08a6116c +0x08:  movl   $0x0,-0xc(%ebp)
08a61173 +0x0f:  jmp    08a611bc <+0x58>
08a61175 +0x11:  mov    -0xc(%ebp),%edx
08a61178 +0x14:  mov    0x8(%ebp),%eax
08a6117b +0x17:  add    $0x8,%edx
08a6117e +0x1a:  mov    0x8(%eax,%edx,4),%eax
08a61182 +0x1e:  test   %eax,%eax
08a61184 +0x20:  je     08a611a7 <+0x43>
08a61186 +0x22:  mov    -0xc(%ebp),%edx
08a61189 +0x25:  mov    0x8(%ebp),%eax
08a6118c +0x28:  add    $0x8,%edx
08a6118f +0x2b:  mov    0x8(%eax,%edx,4),%ebx
08a61193 +0x2f:  test   %ebx,%ebx
08a61195 +0x31:  je     08a611a7 <+0x43>
08a61197 +0x33:  mov    %ebx,(%esp)
08a6119a +0x36:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a6119f +0x3b:  mov    %ebx,(%esp)
08a611a2 +0x3e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a611a7 +0x43:  mov    -0xc(%ebp),%edx
08a611aa +0x46:  mov    0x8(%ebp),%eax
08a611ad +0x49:  add    $0x8,%edx
08a611b0 +0x4c:  movl   $0x0,0x8(%eax,%edx,4)
08a611b8 +0x54:  addl   $0x1,-0xc(%ebp)
08a611bc +0x58:  cmpl   $0xa,-0xc(%ebp)
08a611c0 +0x5c:  setle  %al
08a611c3 +0x5f:  test   %al,%al
08a611c5 +0x61:  jne    08a61175 <+0x11>
08a611c7 +0x63:  jmp    08a611e7 <+0x83>
08a611c9 +0x65:  mov    %edx,%ebx
08a611cb +0x67:  mov    %eax,%esi
08a611cd +0x69:  mov    0x8(%ebp),%eax
08a611d0 +0x6c:  add    $0x20,%eax
08a611d3 +0x6f:  mov    %eax,(%esp)
08a611d6 +0x72:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a611db +0x77:  mov    %esi,%eax
08a611dd +0x79:  mov    %ebx,%edx
08a611df +0x7b:  mov    %eax,(%esp)
08a611e2 +0x7e:  call   08ae3750 <_Unwind_Resume>
08a611e7 +0x83:  mov    0x8(%ebp),%eax
08a611ea +0x86:  add    $0x20,%eax
08a611ed +0x89:  mov    %eax,(%esp)
08a611f0 +0x8c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a611f5 +0x91:  add    $0x20,%esp
08a611f8 +0x94:  pop    %ebx
08a611f9 +0x95:  pop    %esi
08a611fa +0x96:  pop    %ebp
08a611fb +0x97:  ret
```

## 反编译 C

```c
// dungeonEventHanaseStruct::~dungeonEventHanaseStruct @ 0x8a61164

/* dungeonEventHanaseStruct::~dungeonEventHanaseStruct() */

void __thiscall dungeonEventHanaseStruct::~dungeonEventHanaseStruct(dungeonEventHanaseStruct *this)

{
  string *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 8) * 4 + 8) != 0) &&
       (this_00 = *(string **)(this + (local_10 + 8) * 4 + 8), this_00 != (string *)0x0)) {
                    /* try { // try from 08a6119a to 08a6119e has its CatchHandler @ 08a611c9 */
      std::string::~string(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + (local_10 + 8) * 4 + 8) = 0;
  }
  std::string::~string((string *)(this + 0x20));
  return;
}
```
