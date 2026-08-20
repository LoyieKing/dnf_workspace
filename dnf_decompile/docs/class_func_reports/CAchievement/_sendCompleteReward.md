# _sendCompleteReward

`_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi`

`CAchievement::_sendCompleteReward(Quest const*, ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828bf2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828bf2a  _ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi
#           CAchievement::_sendCompleteReward(Quest const*, ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x0828bf2a, 0x0828c085]
0828bf2a +0x000:  push   %ebp
0828bf2b +0x001:  mov    %esp,%ebp
0828bf2d +0x003:  push   %esi
0828bf2e +0x004:  push   %ebx
0828bf2f +0x005:  sub    $0x70,%esp
0828bf32 +0x008:  mov    0x14(%ebp),%eax
0828bf35 +0x00b:  mov    %eax,0x4(%esp)
0828bf39 +0x00f:  mov    0x10(%ebp),%eax
0828bf3c +0x012:  mov    %eax,(%esp)
0828bf3f +0x015:  call   0828bcb8 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi>  ; CAchievement::_getSectionIdx(ENUM_TITLE_BOOK_CATEGORY, int)
0828bf44 +0x01a:  mov    %eax,-0x10(%ebp)
0828bf47 +0x01d:  cmpl   $0xffffffff,-0x10(%ebp)
0828bf4b +0x021:  je     0828c07e <+0x154>
0828bf51 +0x027:  mov    -0x10(%ebp),%ebx
0828bf54 +0x02a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828bf59 +0x02f:  add    $0xa794,%eax
0828bf5e +0x034:  mov    %ebx,0x4(%esp)
0828bf62 +0x038:  mov    %eax,(%esp)
0828bf65 +0x03b:  call   0828dd32 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4df>  ; global constructors keyed to CAchievement::CAchievement()+0x4df
0828bf6a +0x040:  mov    %eax,0x4(%esp)
0828bf6e +0x044:  lea    -0x58(%ebp),%eax
0828bf71 +0x047:  mov    %eax,(%esp)
0828bf74 +0x04a:  call   0828dac2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x26f>  ; global constructors keyed to CAchievement::CAchievement()+0x26f
0828bf79 +0x04f:  lea    -0x58(%ebp),%eax
0828bf7c +0x052:  mov    %eax,0x4(%esp)
0828bf80 +0x056:  mov    0x8(%ebp),%eax
0828bf83 +0x059:  mov    %eax,(%esp)
0828bf86 +0x05c:  call   0828bd5e <_ZN12CAchievement16_getPostalRewardEP14stTitleSection>  ; CAchievement::_getPostalReward(stTitleSection*)
0828bf8b +0x061:  mov    %eax,-0xc(%ebp)
0828bf8e +0x064:  cmpl   $0x0,-0xc(%ebp)
0828bf92 +0x068:  je     0828c071 <+0x147>
0828bf98 +0x06e:  mov    0x10(%ebp),%eax
0828bf9b +0x071:  mov    %eax,0x8(%esp)
0828bf9f +0x075:  lea    -0x58(%ebp),%eax
0828bfa2 +0x078:  mov    %eax,0x4(%esp)
0828bfa6 +0x07c:  mov    0x8(%ebp),%eax
0828bfa9 +0x07f:  mov    %eax,(%esp)
0828bfac +0x082:  call   0828bdc6 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY>  ; CAchievement::_getTabComplete(stTitleSection*, ENUM_TITLE_BOOK_CATEGORY)
0828bfb1 +0x087:  test   %al,%al
0828bfb3 +0x089:  je     0828c071 <+0x147>
0828bfb9 +0x08f:  mov    -0xc(%ebp),%eax
0828bfbc +0x092:  add    $0x10,%eax
0828bfbf +0x095:  mov    %eax,0x4(%esp)
0828bfc3 +0x099:  lea    -0x18(%ebp),%eax
0828bfc6 +0x09c:  mov    %eax,(%esp)
0828bfc9 +0x09f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828bfce +0x0a4:  mov    -0xc(%ebp),%eax
0828bfd1 +0x0a7:  add    $0xc,%eax
0828bfd4 +0x0aa:  mov    %eax,0x4(%esp)
0828bfd8 +0x0ae:  lea    -0x14(%ebp),%eax
0828bfdb +0x0b1:  mov    %eax,(%esp)
0828bfde +0x0b4:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0828bfe3 +0x0b9:  mov    -0xc(%ebp),%eax
0828bfe6 +0x0bc:  mov    0x1c(%eax),%edx
0828bfe9 +0x0bf:  mov    -0xc(%ebp),%eax
0828bfec +0x0c2:  mov    0x18(%eax),%eax
0828bfef +0x0c5:  lea    -0x18(%ebp),%ecx
0828bff2 +0x0c8:  mov    %ecx,0x10(%esp)
0828bff6 +0x0cc:  lea    -0x14(%ebp),%ecx
0828bff9 +0x0cf:  mov    %ecx,0xc(%esp)
0828bffd +0x0d3:  mov    %edx,0x8(%esp)
0828c001 +0x0d7:  mov    %eax,0x4(%esp)
0828c005 +0x0db:  mov    0x8(%ebp),%eax
0828c008 +0x0de:  mov    %eax,(%esp)
0828c00b +0x0e1:  call   0828c152 <_ZN12CAchievement11_sendPostalEiiSsSs>  ; CAchievement::_sendPostal(int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
0828c010 +0x0e6:  jmp    0828c027 <+0xfd>
0828c012 +0x0e8:  mov    %edx,%ebx
0828c014 +0x0ea:  mov    %eax,%esi
0828c016 +0x0ec:  lea    -0x14(%ebp),%eax
0828c019 +0x0ef:  mov    %eax,(%esp)
0828c01c +0x0f2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c021 +0x0f7:  mov    %esi,%eax
0828c023 +0x0f9:  mov    %ebx,%edx
0828c025 +0x0fb:  jmp    0828c034 <+0x10a>
0828c027 +0x0fd:  lea    -0x14(%ebp),%eax
0828c02a +0x100:  mov    %eax,(%esp)
0828c02d +0x103:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c032 +0x108:  jmp    0828c049 <+0x11f>
0828c034 +0x10a:  mov    %edx,%ebx
0828c036 +0x10c:  mov    %eax,%esi
0828c038 +0x10e:  lea    -0x18(%ebp),%eax
0828c03b +0x111:  mov    %eax,(%esp)
0828c03e +0x114:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c043 +0x119:  mov    %esi,%eax
0828c045 +0x11b:  mov    %ebx,%edx
0828c047 +0x11d:  jmp    0828c056 <+0x12c>
0828c049 +0x11f:  lea    -0x18(%ebp),%eax
0828c04c +0x122:  mov    %eax,(%esp)
0828c04f +0x125:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0828c054 +0x12a:  jmp    0828c071 <+0x147>
0828c056 +0x12c:  mov    %edx,%ebx
0828c058 +0x12e:  mov    %eax,%esi
0828c05a +0x130:  lea    -0x58(%ebp),%eax
0828c05d +0x133:  mov    %eax,(%esp)
0828c060 +0x136:  call   0828d972 <_GLOBAL__I__ZN12CAchievementC2Ev+0x11f>  ; global constructors keyed to CAchievement::CAchievement()+0x11f
0828c065 +0x13b:  mov    %esi,%eax
0828c067 +0x13d:  mov    %ebx,%edx
0828c069 +0x13f:  mov    %eax,(%esp)
0828c06c +0x142:  call   08ae3750 <_Unwind_Resume>
0828c071 +0x147:  lea    -0x58(%ebp),%eax
0828c074 +0x14a:  mov    %eax,(%esp)
0828c077 +0x14d:  call   0828d972 <_GLOBAL__I__ZN12CAchievementC2Ev+0x11f>  ; global constructors keyed to CAchievement::CAchievement()+0x11f
0828c07c +0x152:  jmp    0828c07f <+0x155>
0828c07e +0x154:  nop
0828c07f +0x155:  add    $0x70,%esp
0828c082 +0x158:  pop    %ebx
0828c083 +0x159:  pop    %esi
0828c084 +0x15a:  pop    %ebp
0828c085 +0x15b:  ret
```

## 反编译 C

```c
// CAchievement::_sendCompleteReward @ 0x828bf2a

/* CAchievement::_sendCompleteReward(Quest const*, ENUM_TITLE_BOOK_CATEGORY, int) */

void __thiscall
CAchievement::_sendCompleteReward
          (CAchievement *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  stTitleSection *psVar4;
  stTitleSection local_5c [64];
  string local_1c [4];
  string local_18 [4];
  uint local_14;
  int local_10;
  
  uVar2 = _getSectionIdx(param_3,param_4);
  if (uVar2 != 0xffffffff) {
    local_14 = uVar2;
    iVar3 = G_CDataManager();
    psVar4 = (stTitleSection *)
             std::vector<stTitleSection,std::allocator<stTitleSection>>::operator[]
                       ((vector<stTitleSection,std::allocator<stTitleSection>> *)(iVar3 + 0xa794),
                        uVar2);
    stTitleSection::stTitleSection(local_5c,psVar4);
    local_10 = _getPostalReward(this,local_5c);
    if (local_10 != 0) {
                    /* try { // try from 0828bfac to 0828bfcd has its CatchHandler @ 0828c056 */
      cVar1 = _getTabComplete(this,local_5c,param_3);
      if (cVar1 != '\0') {
        std::string::string(local_1c,(string *)(local_10 + 0x10));
                    /* try { // try from 0828bfde to 0828bfe2 has its CatchHandler @ 0828c034 */
        std::string::string(local_18,(string *)(local_10 + 0xc));
                    /* try { // try from 0828c00b to 0828c00f has its CatchHandler @ 0828c012 */
        _sendPostal(this,*(int *)(local_10 + 0x18),*(int *)(local_10 + 0x1c),(string)local_18,
                    (string)local_1c);
                    /* try { // try from 0828c02d to 0828c031 has its CatchHandler @ 0828c034 */
        std::string::~string(local_18);
                    /* try { // try from 0828c04f to 0828c053 has its CatchHandler @ 0828c056 */
        std::string::~string(local_1c);
      }
    }
    stTitleSection::~stTitleSection(local_5c);
  }
  return;
}
```
