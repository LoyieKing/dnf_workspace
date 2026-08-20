# getMailTitle

`_ZN24BaseHeroMissionCondition12getMailTitleEv`

`BaseHeroMissionCondition::getMailTitle()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164fda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164fda  _ZN24BaseHeroMissionCondition12getMailTitleEv
#           BaseHeroMissionCondition::getMailTitle()
# range [0x08164fda, 0x08165001]
08164fda +0x00:  push   %ebp
08164fdb +0x01:  mov    %esp,%ebp
08164fdd +0x03:  push   %ebx
08164fde +0x04:  sub    $0x14,%esp
08164fe1 +0x07:  mov    0x8(%ebp),%ebx
08164fe4 +0x0a:  mov    %ebx,%eax
08164fe6 +0x0c:  mov    0xc(%ebp),%edx
08164fe9 +0x0f:  add    $0x14,%edx
08164fec +0x12:  mov    %edx,0x4(%esp)
08164ff0 +0x16:  mov    %eax,(%esp)
08164ff3 +0x19:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08164ff8 +0x1e:  mov    %ebx,%eax
08164ffa +0x20:  mov    %ebx,%eax
08164ffc +0x22:  add    $0x14,%esp
08164fff +0x25:  pop    %ebx
08165000 +0x26:  pop    %ebp
08165001 +0x27:  ret    $0x4
```

## 反编译 C

```c
// BaseHeroMissionCondition::getMailTitle @ 0x8164fda

/* BaseHeroMissionCondition::getMailTitle() */

string * BaseHeroMissionCondition::getMailTitle(void)

{
  string *in_stack_00000004;
  int in_stack_00000008;
  
  std::string::string(in_stack_00000004,(string *)(in_stack_00000008 + 0x14));
  return in_stack_00000004;
}
```
