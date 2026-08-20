# PassiveObjGeneratorSequence

`_ZN27PassiveObjGeneratorSequenceC1Ev`

`PassiveObjGeneratorSequence::PassiveObjGeneratorSequence()`

| 类 | 地址 |
|---|---|
| `PassiveObjGeneratorSequence` | `0x08a3ae0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3ae0a  _ZN27PassiveObjGeneratorSequenceC1Ev
#           PassiveObjGeneratorSequence::PassiveObjGeneratorSequence()
# range [0x08a3ae0a, 0x08a3ae55]
08a3ae0a +0x00:  push   %ebp
08a3ae0b +0x01:  mov    %esp,%ebp
08a3ae0d +0x03:  push   %esi
08a3ae0e +0x04:  push   %ebx
08a3ae0f +0x05:  sub    $0x10,%esp
08a3ae12 +0x08:  mov    0x8(%ebp),%eax
08a3ae15 +0x0b:  mov    %eax,(%esp)
08a3ae18 +0x0e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a3ae1d +0x13:  mov    0x8(%ebp),%eax
08a3ae20 +0x16:  movl   $0x0,0x4(%eax)
08a3ae27 +0x1d:  mov    0x8(%ebp),%eax
08a3ae2a +0x20:  mov    %eax,(%esp)
08a3ae2d +0x23:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08a3ae32 +0x28:  jmp    08a3ae4f <+0x45>
08a3ae34 +0x2a:  mov    %edx,%ebx
08a3ae36 +0x2c:  mov    %eax,%esi
08a3ae38 +0x2e:  mov    0x8(%ebp),%eax
08a3ae3b +0x31:  mov    %eax,(%esp)
08a3ae3e +0x34:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a3ae43 +0x39:  mov    %esi,%eax
08a3ae45 +0x3b:  mov    %ebx,%edx
08a3ae47 +0x3d:  mov    %eax,(%esp)
08a3ae4a +0x40:  call   08ae3750 <_Unwind_Resume>
08a3ae4f +0x45:  add    $0x10,%esp
08a3ae52 +0x48:  pop    %ebx
08a3ae53 +0x49:  pop    %esi
08a3ae54 +0x4a:  pop    %ebp
08a3ae55 +0x4b:  ret
```

## 反编译 C

```c
// PassiveObjGeneratorSequence::PassiveObjGeneratorSequence @ 0x8a3ae0a

/* PassiveObjGeneratorSequence::PassiveObjGeneratorSequence() */

void __thiscall
PassiveObjGeneratorSequence::PassiveObjGeneratorSequence(PassiveObjGeneratorSequence *this)

{
  std::string::string((string *)this);
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 08a3ae2d to 08a3ae31 has its CatchHandler @ 08a3ae34 */
  std::string::clear((string *)this);
  return;
}
```
