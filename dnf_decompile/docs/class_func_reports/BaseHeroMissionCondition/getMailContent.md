# getMailContent

`_ZN24BaseHeroMissionCondition14getMailContentEv`

`BaseHeroMissionCondition::getMailContent()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08165004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165004  _ZN24BaseHeroMissionCondition14getMailContentEv
#           BaseHeroMissionCondition::getMailContent()
# range [0x08165004, 0x0816502b]
08165004 +0x00:  push   %ebp
08165005 +0x01:  mov    %esp,%ebp
08165007 +0x03:  push   %ebx
08165008 +0x04:  sub    $0x14,%esp
0816500b +0x07:  mov    0x8(%ebp),%ebx
0816500e +0x0a:  mov    %ebx,%eax
08165010 +0x0c:  mov    0xc(%ebp),%edx
08165013 +0x0f:  add    $0x18,%edx
08165016 +0x12:  mov    %edx,0x4(%esp)
0816501a +0x16:  mov    %eax,(%esp)
0816501d +0x19:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08165022 +0x1e:  mov    %ebx,%eax
08165024 +0x20:  mov    %ebx,%eax
08165026 +0x22:  add    $0x14,%esp
08165029 +0x25:  pop    %ebx
0816502a +0x26:  pop    %ebp
0816502b +0x27:  ret    $0x4
```

## 反编译 C

```c
// BaseHeroMissionCondition::getMailContent @ 0x8165004

/* BaseHeroMissionCondition::getMailContent() */

string * BaseHeroMissionCondition::getMailContent(void)

{
  string *in_stack_00000004;
  int in_stack_00000008;
  
  std::string::string(in_stack_00000004,(string *)(in_stack_00000008 + 0x18));
  return in_stack_00000004;
}
```
