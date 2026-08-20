# _sendEachAchieveReward

`_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest`

`CAchievement::_sendEachAchieveReward(Quest const*)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c086` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c086  _ZN12CAchievement22_sendEachAchieveRewardEPK5Quest
#           CAchievement::_sendEachAchieveReward(Quest const*)
# range [0x0828c086, 0x0828c151]
0828c086 +0x00:  push   %ebp
0828c087 +0x01:  mov    %esp,%ebp
0828c089 +0x03:  push   %esi
0828c08a +0x04:  push   %ebx
0828c08b +0x05:  sub    $0x30,%esp
0828c08e +0x08:  mov    0xc(%ebp),%eax
0828c091 +0x0b:  mov    0xa4(%eax),%eax
0828c097 +0x11:  test   %eax,%eax
0828c099 +0x13:  je     0828c14a <+0xc4>
0828c09f +0x19:  mov    0xc(%ebp),%eax
0828c0a2 +0x1c:  add    $0xa0,%eax
0828c0a7 +0x21:  mov    %eax,0x4(%esp)
0828c0ab +0x25:  lea    -0x10(%ebp),%eax
0828c0ae +0x28:  mov    %eax,(%esp)
0828c0b1 +0x2b:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828c0b6 +0x30:  mov    0xc(%ebp),%eax
0828c0b9 +0x33:  add    $0x9c,%eax
0828c0be +0x38:  mov    %eax,0x4(%esp)
0828c0c2 +0x3c:  lea    -0xc(%ebp),%eax
0828c0c5 +0x3f:  mov    %eax,(%esp)
0828c0c8 +0x42:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828c0cd +0x47:  mov    0xc(%ebp),%eax
0828c0d0 +0x4a:  mov    0xa8(%eax),%edx
0828c0d6 +0x50:  mov    0xc(%ebp),%eax
0828c0d9 +0x53:  mov    0xa4(%eax),%eax
0828c0df +0x59:  lea    -0x10(%ebp),%ecx
0828c0e2 +0x5c:  mov    %ecx,0x10(%esp)
0828c0e6 +0x60:  lea    -0xc(%ebp),%ecx
0828c0e9 +0x63:  mov    %ecx,0xc(%esp)
0828c0ed +0x67:  mov    %edx,0x8(%esp)
0828c0f1 +0x6b:  mov    %eax,0x4(%esp)
0828c0f5 +0x6f:  mov    0x8(%ebp),%eax
0828c0f8 +0x72:  mov    %eax,(%esp)
0828c0fb +0x75:  call   0828c152 <_ZN12CAchievement11_sendPostalEiiSsSs>  ; CAchievement::_sendPostal(int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
0828c100 +0x7a:  jmp    0828c117 <+0x91>
0828c102 +0x7c:  mov    %edx,%ebx
0828c104 +0x7e:  mov    %eax,%esi
0828c106 +0x80:  lea    -0xc(%ebp),%eax
0828c109 +0x83:  mov    %eax,(%esp)
0828c10c +0x86:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c111 +0x8b:  mov    %esi,%eax
0828c113 +0x8d:  mov    %ebx,%edx
0828c115 +0x8f:  jmp    0828c124 <+0x9e>
0828c117 +0x91:  lea    -0xc(%ebp),%eax
0828c11a +0x94:  mov    %eax,(%esp)
0828c11d +0x97:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c122 +0x9c:  jmp    0828c13f <+0xb9>
0828c124 +0x9e:  mov    %edx,%ebx
0828c126 +0xa0:  mov    %eax,%esi
0828c128 +0xa2:  lea    -0x10(%ebp),%eax
0828c12b +0xa5:  mov    %eax,(%esp)
0828c12e +0xa8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c133 +0xad:  mov    %esi,%eax
0828c135 +0xaf:  mov    %ebx,%edx
0828c137 +0xb1:  mov    %eax,(%esp)
0828c13a +0xb4:  call   08ae3750 <_Unwind_Resume>
0828c13f +0xb9:  lea    -0x10(%ebp),%eax
0828c142 +0xbc:  mov    %eax,(%esp)
0828c145 +0xbf:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c14a +0xc4:  add    $0x30,%esp
0828c14d +0xc7:  pop    %ebx
0828c14e +0xc8:  pop    %esi
0828c14f +0xc9:  pop    %ebp
0828c150 +0xca:  ret
0828c151 +0xcb:  nop
```

## 反编译 C

```c
// CAchievement::_sendEachAchieveReward @ 0x828c086

/* CAchievement::_sendEachAchieveReward(Quest const*) */

void __thiscall CAchievement::_sendEachAchieveReward(CAchievement *this,Quest *param_1)

{
  string local_14 [4];
  string local_10 [4];
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    std::string::string(local_14,(string *)(param_1 + 0xa0));
                    /* try { // try from 0828c0c8 to 0828c0cc has its CatchHandler @ 0828c124 */
    std::string::string(local_10,(string *)(param_1 + 0x9c));
                    /* try { // try from 0828c0fb to 0828c0ff has its CatchHandler @ 0828c102 */
    _sendPostal(this,*(int *)(param_1 + 0xa4),*(int *)(param_1 + 0xa8),(string)local_10,
                (string)local_14);
                    /* try { // try from 0828c11d to 0828c121 has its CatchHandler @ 0828c124 */
    std::string::~string(local_10);
    std::string::~string(local_14);
  }
  return;
}
```
