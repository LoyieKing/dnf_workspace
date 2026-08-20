# GetLeftTimeOfForbiddenChat

`_ZN9GameWorld26GetLeftTimeOfForbiddenChatEPKc`

`GameWorld::GetLeftTimeOfForbiddenChat(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ce73c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ce73c  _ZN9GameWorld26GetLeftTimeOfForbiddenChatEPKc
#           GameWorld::GetLeftTimeOfForbiddenChat(char const*)
# range [0x086ce73c, 0x086ce957]
086ce73c +0x000:  push   %ebp
086ce73d +0x001:  mov    %esp,%ebp
086ce73f +0x003:  push   %esi
086ce740 +0x004:  push   %ebx
086ce741 +0x005:  sub    $0x50,%esp
086ce744 +0x008:  cmpl   $0x0,0xc(%ebp)
086ce748 +0x00c:  jne    086ce754 <+0x18>
086ce74a +0x00e:  mov    $0x0,%ebx
086ce74f +0x013:  jmp    086ce94c <+0x210>
086ce754 +0x018:  mov    0xc(%ebp),%eax
086ce757 +0x01b:  mov    %eax,(%esp)
086ce75a +0x01e:  call   0807e3b0 <_init+0xca8>
086ce75f +0x023:  cmp    $0x1e,%eax
086ce762 +0x026:  jbe    086ce7a4 <+0x68>
086ce764 +0x028:  movl   $0x0,0xc(%esp)
086ce76c +0x030:  movl   $0x15f2,0x8(%esp)
086ce774 +0x038:  movl   $&_ZZN9GameWorld26GetLeftTimeOfForbiddenChatEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086ce77c +0x040:  lea    -0x40(%ebp),%eax
086ce77f +0x043:  mov    %eax,(%esp)
086ce782 +0x046:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce787 +0x04b:  movl   $"GetLeftTimeOfForbiddenChat return 1\n",0x4(%esp)
086ce78f +0x053:  lea    -0x40(%ebp),%eax
086ce792 +0x056:  mov    %eax,(%esp)
086ce795 +0x059:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce79a +0x05e:  mov    $0x0,%ebx
086ce79f +0x063:  jmp    086ce94c <+0x210>
086ce7a4 +0x068:  lea    -0x2d(%ebp),%eax
086ce7a7 +0x06b:  mov    %eax,(%esp)
086ce7aa +0x06e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ce7af +0x073:  lea    -0x2d(%ebp),%eax
086ce7b2 +0x076:  mov    %eax,0x8(%esp)
086ce7b6 +0x07a:  mov    0xc(%ebp),%eax
086ce7b9 +0x07d:  mov    %eax,0x4(%esp)
086ce7bd +0x081:  lea    -0x44(%ebp),%eax
086ce7c0 +0x084:  mov    %eax,(%esp)
086ce7c3 +0x087:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ce7c8 +0x08c:  jmp    086ce7e5 <+0xa9>
086ce7ca +0x08e:  mov    %edx,%ebx
086ce7cc +0x090:  mov    %eax,%esi
086ce7ce +0x092:  lea    -0x2d(%ebp),%eax
086ce7d1 +0x095:  mov    %eax,(%esp)
086ce7d4 +0x098:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce7d9 +0x09d:  mov    %esi,%eax
086ce7db +0x09f:  mov    %ebx,%edx
086ce7dd +0x0a1:  mov    %eax,(%esp)
086ce7e0 +0x0a4:  call   08ae3750 <_Unwind_Resume>
086ce7e5 +0x0a9:  lea    -0x2d(%ebp),%eax
086ce7e8 +0x0ac:  mov    %eax,(%esp)
086ce7eb +0x0af:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce7f0 +0x0b4:  mov    0x8(%ebp),%eax
086ce7f3 +0x0b7:  lea    0x8c(%eax),%ecx
086ce7f9 +0x0bd:  lea    -0x48(%ebp),%eax
086ce7fc +0x0c0:  lea    -0x44(%ebp),%edx
086ce7ff +0x0c3:  mov    %edx,0x8(%esp)
086ce803 +0x0c7:  mov    %ecx,0x4(%esp)
086ce807 +0x0cb:  mov    %eax,(%esp)
086ce80a +0x0ce:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086ce80f +0x0d3:  sub    $0x4,%esp
086ce812 +0x0d6:  mov    0x8(%ebp),%eax
086ce815 +0x0d9:  lea    0x8c(%eax),%edx
086ce81b +0x0df:  lea    -0x2c(%ebp),%eax
086ce81e +0x0e2:  mov    %edx,0x4(%esp)
086ce822 +0x0e6:  mov    %eax,(%esp)
086ce825 +0x0e9:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086ce82a +0x0ee:  sub    $0x4,%esp
086ce82d +0x0f1:  lea    -0x2c(%ebp),%eax
086ce830 +0x0f4:  mov    %eax,0x4(%esp)
086ce834 +0x0f8:  lea    -0x48(%ebp),%eax
086ce837 +0x0fb:  mov    %eax,(%esp)
086ce83a +0x0fe:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086ce83f +0x103:  test   %al,%al
086ce841 +0x105:  je     086ce883 <+0x147>
086ce843 +0x107:  movl   $0x0,0xc(%esp)
086ce84b +0x10f:  movl   $0x15fa,0x8(%esp)
086ce853 +0x117:  movl   $&_ZZN9GameWorld26GetLeftTimeOfForbiddenChatEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086ce85b +0x11f:  lea    -0x28(%ebp),%eax
086ce85e +0x122:  mov    %eax,(%esp)
086ce861 +0x125:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce866 +0x12a:  movl   $"GetLeftTimeOfForbiddenChat return 2\n",0x4(%esp)
086ce86e +0x132:  lea    -0x28(%ebp),%eax
086ce871 +0x135:  mov    %eax,(%esp)
086ce874 +0x138:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce879 +0x13d:  mov    $0x0,%ebx
086ce87e +0x142:  jmp    086ce941 <+0x205>
086ce883 +0x147:  movl   $0x0,-0x18(%ebp)
086ce88a +0x14e:  movl   $0x0,-0x14(%ebp)
086ce891 +0x155:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086ce896 +0x15a:  mov    0xc(%ebp),%edx
086ce899 +0x15d:  mov    %edx,0x4(%esp)
086ce89d +0x161:  mov    %eax,(%esp)
086ce8a0 +0x164:  call   086ce4a0 <_ZN9GameWorld27WhenIsTheEndOfForbiddenChatEPKc>  ; GameWorld::WhenIsTheEndOfForbiddenChat(char const*)
086ce8a5 +0x169:  mov    $0x0,%edx
086ce8aa +0x16e:  mov    %eax,-0x18(%ebp)
086ce8ad +0x171:  mov    %edx,-0x14(%ebp)
086ce8b0 +0x174:  cmpl   $0x0,-0x14(%ebp)
086ce8b4 +0x178:  js     086ce91f <+0x1e3>
086ce8b6 +0x17a:  cmpl   $0x0,-0x14(%ebp)
086ce8ba +0x17e:  jg     086ce8c2 <+0x186>
086ce8bc +0x180:  cmpl   $0x0,-0x18(%ebp)
086ce8c0 +0x184:  jbe    086ce91f <+0x1e3>
086ce8c2 +0x186:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ce8c9 +0x18d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ce8ce +0x192:  imul   $0x3e8,%eax,%eax
086ce8d4 +0x198:  mov    %eax,-0xc(%ebp)
086ce8d7 +0x19b:  mov    -0xc(%ebp),%eax
086ce8da +0x19e:  mov    $0x0,%edx
086ce8df +0x1a3:  sub    %eax,-0x18(%ebp)
086ce8e2 +0x1a6:  sbb    %edx,-0x14(%ebp)
086ce8e5 +0x1a9:  cmpl   $0x0,-0x14(%ebp)
086ce8e9 +0x1ad:  js     086ce918 <+0x1dc>
086ce8eb +0x1af:  cmpl   $0x0,-0x14(%ebp)
086ce8ef +0x1b3:  jg     086ce8f7 <+0x1bb>
086ce8f1 +0x1b5:  cmpl   $0x0,-0x18(%ebp)
086ce8f5 +0x1b9:  jbe    086ce918 <+0x1dc>
086ce8f7 +0x1bb:  cmpl   $0x0,-0x14(%ebp)
086ce8fb +0x1bf:  jg     086ce913 <+0x1d7>
086ce8fd +0x1c1:  cmpl   $0x0,-0x14(%ebp)
086ce901 +0x1c5:  js     086ce90c <+0x1d0>
086ce903 +0x1c7:  cmpl   $0xea5f,-0x18(%ebp)
086ce90a +0x1ce:  ja     086ce913 <+0x1d7>
086ce90c +0x1d0:  mov    $0xea60,%ebx
086ce911 +0x1d5:  jmp    086ce941 <+0x205>
086ce913 +0x1d7:  mov    -0x18(%ebp),%ebx
086ce916 +0x1da:  jmp    086ce941 <+0x205>
086ce918 +0x1dc:  mov    $0x0,%ebx
086ce91d +0x1e1:  jmp    086ce941 <+0x205>
086ce91f +0x1e3:  mov    $0x0,%ebx
086ce924 +0x1e8:  jmp    086ce941 <+0x205>
086ce926 +0x1ea:  mov    %edx,%ebx
086ce928 +0x1ec:  mov    %eax,%esi
086ce92a +0x1ee:  lea    -0x44(%ebp),%eax
086ce92d +0x1f1:  mov    %eax,(%esp)
086ce930 +0x1f4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce935 +0x1f9:  mov    %esi,%eax
086ce937 +0x1fb:  mov    %ebx,%edx
086ce939 +0x1fd:  mov    %eax,(%esp)
086ce93c +0x200:  call   08ae3750 <_Unwind_Resume>
086ce941 +0x205:  lea    -0x44(%ebp),%eax
086ce944 +0x208:  mov    %eax,(%esp)
086ce947 +0x20b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce94c +0x210:  mov    %ebx,%eax
086ce94e +0x212:  lea    -0x8(%ebp),%esp
086ce951 +0x215:  add    $0x0,%esp
086ce954 +0x218:  pop    %ebx
086ce955 +0x219:  pop    %esi
086ce956 +0x21a:  pop    %ebp
086ce957 +0x21b:  ret
```

## 反编译 C

```c
// GameWorld::GetLeftTimeOfForbiddenChat @ 0x86ce73c

/* GameWorld::GetLeftTimeOfForbiddenChat(char const*) */

uint __thiscall GameWorld::GetLeftTimeOfForbiddenChat(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  GameWorld *this_00;
  int iVar3;
  uint uVar4;
  bool bVar5;
  string local_4c;
  string local_48 [4];
  cMyTrace local_44 [19];
  allocator<char> local_31;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_30 [4];
  cMyTrace local_2c [16];
  uint local_1c;
  int local_18;
  uint local_10;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086ce7c3 to 086ce7c7 has its CatchHandler @ 086ce7ca */
      std::string::string(local_48,param_1,(allocator *)&local_31);
      std::allocator<char>::~allocator(&local_31);
                    /* try { // try from 086ce80a to 086ce8a4 has its CatchHandler @ 086ce926 */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_4c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_4c,
                         (_Rb_tree_iterator *)local_30);
      if (cVar1 == '\0') {
        local_1c = 0;
        local_18 = 0;
        this_00 = (GameWorld *)G_GameWorld();
        local_1c = WhenIsTheEndOfForbiddenChat(this_00,param_1);
        local_18 = 0;
        if (local_1c == 0) {
          local_1c = 0;
          uVar4 = 0;
        }
        else {
          iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_10 = iVar3 * 1000;
          bVar5 = local_1c < local_10;
          local_1c = local_1c + iVar3 * -1000;
          local_18 = local_18 - (uint)bVar5;
          if ((local_18 < 0) || ((local_18 < 1 && (local_1c == 0)))) {
            uVar4 = 0;
          }
          else {
            uVar4 = local_1c;
            if ((local_18 < 1) && ((local_18 < 0 || (local_1c < 60000)))) {
              uVar4 = 60000;
            }
          }
        }
      }
      else {
        cMyTrace::cMyTrace(local_2c,"DWORD GameWorld::GetLeftTimeOfForbiddenChat(const char*)",
                           0x15fa,0);
        cMyTrace::operator()(local_2c,"GetLeftTimeOfForbiddenChat return 2\n");
        uVar4 = 0;
      }
      std::string::~string(local_48);
    }
    else {
      cMyTrace::cMyTrace(local_44,"DWORD GameWorld::GetLeftTimeOfForbiddenChat(const char*)",0x15f2,
                         0);
      cMyTrace::operator()(local_44,"GetLeftTimeOfForbiddenChat return 1\n");
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
