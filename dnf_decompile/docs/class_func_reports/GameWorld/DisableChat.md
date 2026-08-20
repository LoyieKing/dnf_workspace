# DisableChat

`_ZN9GameWorld11DisableChatEPKci`

`GameWorld::DisableChat(char const*, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ce054` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ce054  _ZN9GameWorld11DisableChatEPKci
#           GameWorld::DisableChat(char const*, int)
# range [0x086ce054, 0x086ce279]
086ce054 +0x000:  push   %ebp
086ce055 +0x001:  mov    %esp,%ebp
086ce057 +0x003:  push   %esi
086ce058 +0x004:  push   %ebx
086ce059 +0x005:  sub    $0x50,%esp
086ce05c +0x008:  cmpl   $0x0,0xc(%ebp)
086ce060 +0x00c:  jne    086ce06c <+0x18>
086ce062 +0x00e:  mov    $0x0,%ebx
086ce067 +0x013:  jmp    086ce26d <+0x219>
086ce06c +0x018:  mov    0xc(%ebp),%eax
086ce06f +0x01b:  mov    %eax,(%esp)
086ce072 +0x01e:  call   0807e3b0 <_init+0xca8>
086ce077 +0x023:  cmp    $0x1e,%eax
086ce07a +0x026:  jbe    086ce086 <+0x32>
086ce07c +0x028:  mov    $0x0,%ebx
086ce081 +0x02d:  jmp    086ce26d <+0x219>
086ce086 +0x032:  lea    -0x31(%ebp),%eax
086ce089 +0x035:  mov    %eax,(%esp)
086ce08c +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ce091 +0x03d:  lea    -0x31(%ebp),%eax
086ce094 +0x040:  mov    %eax,0x8(%esp)
086ce098 +0x044:  mov    0xc(%ebp),%eax
086ce09b +0x047:  mov    %eax,0x4(%esp)
086ce09f +0x04b:  lea    -0x38(%ebp),%eax
086ce0a2 +0x04e:  mov    %eax,(%esp)
086ce0a5 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ce0aa +0x056:  jmp    086ce0c7 <+0x73>
086ce0ac +0x058:  mov    %edx,%ebx
086ce0ae +0x05a:  mov    %eax,%esi
086ce0b0 +0x05c:  lea    -0x31(%ebp),%eax
086ce0b3 +0x05f:  mov    %eax,(%esp)
086ce0b6 +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce0bb +0x067:  mov    %esi,%eax
086ce0bd +0x069:  mov    %ebx,%edx
086ce0bf +0x06b:  mov    %eax,(%esp)
086ce0c2 +0x06e:  call   08ae3750 <_Unwind_Resume>
086ce0c7 +0x073:  lea    -0x31(%ebp),%eax
086ce0ca +0x076:  mov    %eax,(%esp)
086ce0cd +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce0d2 +0x07e:  mov    0x8(%ebp),%eax
086ce0d5 +0x081:  lea    0x8c(%eax),%ecx
086ce0db +0x087:  lea    -0x3c(%ebp),%eax
086ce0de +0x08a:  lea    -0x38(%ebp),%edx
086ce0e1 +0x08d:  mov    %edx,0x8(%esp)
086ce0e5 +0x091:  mov    %ecx,0x4(%esp)
086ce0e9 +0x095:  mov    %eax,(%esp)
086ce0ec +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086ce0f1 +0x09d:  sub    $0x4,%esp
086ce0f4 +0x0a0:  mov    0x8(%ebp),%eax
086ce0f7 +0x0a3:  lea    0x8c(%eax),%edx
086ce0fd +0x0a9:  lea    -0x30(%ebp),%eax
086ce100 +0x0ac:  mov    %edx,0x4(%esp)
086ce104 +0x0b0:  mov    %eax,(%esp)
086ce107 +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086ce10c +0x0b8:  sub    $0x4,%esp
086ce10f +0x0bb:  lea    -0x30(%ebp),%eax
086ce112 +0x0be:  mov    %eax,0x4(%esp)
086ce116 +0x0c2:  lea    -0x3c(%ebp),%eax
086ce119 +0x0c5:  mov    %eax,(%esp)
086ce11c +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086ce121 +0x0cd:  test   %al,%al
086ce123 +0x0cf:  je     086ce12f <+0xdb>
086ce125 +0x0d1:  mov    $0x0,%ebx
086ce12a +0x0d6:  jmp    086ce262 <+0x20e>
086ce12f +0x0db:  mov    0x8(%ebp),%eax
086ce132 +0x0de:  lea    0x8c(%eax),%edx
086ce138 +0x0e4:  lea    -0x38(%ebp),%eax
086ce13b +0x0e7:  mov    %eax,0x4(%esp)
086ce13f +0x0eb:  mov    %edx,(%esp)
086ce142 +0x0ee:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce147 +0x0f3:  movzbl 0x4(%eax),%eax
086ce14b +0x0f7:  xor    $0x1,%eax
086ce14e +0x0fa:  test   %al,%al
086ce150 +0x0fc:  je     086ce1f9 <+0x1a5>
086ce156 +0x102:  mov    0x8(%ebp),%eax
086ce159 +0x105:  lea    0x8c(%eax),%edx
086ce15f +0x10b:  lea    -0x38(%ebp),%eax
086ce162 +0x10e:  mov    %eax,0x4(%esp)
086ce166 +0x112:  mov    %edx,(%esp)
086ce169 +0x115:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce16e +0x11a:  movb   $0x1,0x4(%eax)
086ce172 +0x11e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ce179 +0x125:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ce17e +0x12a:  imul   $0x3e8,%eax,%eax
086ce184 +0x130:  mov    %eax,-0xc(%ebp)
086ce187 +0x133:  mov    0x8(%ebp),%eax
086ce18a +0x136:  lea    0x8c(%eax),%edx
086ce190 +0x13c:  lea    -0x38(%ebp),%eax
086ce193 +0x13f:  mov    %eax,0x4(%esp)
086ce197 +0x143:  mov    %edx,(%esp)
086ce19a +0x146:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce19f +0x14b:  mov    0x10(%ebp),%edx
086ce1a2 +0x14e:  imul   $0x3e8,%edx,%edx
086ce1a8 +0x154:  add    -0xc(%ebp),%edx
086ce1ab +0x157:  mov    %edx,0x8(%eax)
086ce1ae +0x15a:  movl   $0x0,0xc(%esp)
086ce1b6 +0x162:  movl   $0x15a2,0x8(%esp)
086ce1be +0x16a:  movl   $&_ZZN9GameWorld11DisableChatEPKciE19__PRETTY_FUNCTION__,0x4(%esp)
086ce1c6 +0x172:  lea    -0x2c(%ebp),%eax
086ce1c9 +0x175:  mov    %eax,(%esp)
086ce1cc +0x178:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce1d1 +0x17d:  mov    0x10(%ebp),%eax
086ce1d4 +0x180:  mov    %eax,0xc(%esp)
086ce1d8 +0x184:  mov    0xc(%ebp),%eax
086ce1db +0x187:  mov    %eax,0x8(%esp)
086ce1df +0x18b:  movl   $"%s is not able to chat now for %d secs\n",0x4(%esp)
086ce1e7 +0x193:  lea    -0x2c(%ebp),%eax
086ce1ea +0x196:  mov    %eax,(%esp)
086ce1ed +0x199:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce1f2 +0x19e:  mov    $0x1,%ebx
086ce1f7 +0x1a3:  jmp    086ce262 <+0x20e>
086ce1f9 +0x1a5:  lea    -0x38(%ebp),%eax
086ce1fc +0x1a8:  mov    %eax,(%esp)
086ce1ff +0x1ab:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086ce204 +0x1b0:  mov    %eax,%ebx
086ce206 +0x1b2:  movl   $0x0,0xc(%esp)
086ce20e +0x1ba:  movl   $0x15a7,0x8(%esp)
086ce216 +0x1c2:  movl   $&_ZZN9GameWorld11DisableChatEPKciE19__PRETTY_FUNCTION__,0x4(%esp)
086ce21e +0x1ca:  lea    -0x1c(%ebp),%eax
086ce221 +0x1cd:  mov    %eax,(%esp)
086ce224 +0x1d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce229 +0x1d5:  mov    %ebx,0x8(%esp)
086ce22d +0x1d9:  movl   $"%s is already not able to chat!\n",0x4(%esp)
086ce235 +0x1e1:  lea    -0x1c(%ebp),%eax
086ce238 +0x1e4:  mov    %eax,(%esp)
086ce23b +0x1e7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce240 +0x1ec:  mov    $0x1,%ebx
086ce245 +0x1f1:  jmp    086ce262 <+0x20e>
086ce247 +0x1f3:  mov    %edx,%ebx
086ce249 +0x1f5:  mov    %eax,%esi
086ce24b +0x1f7:  lea    -0x38(%ebp),%eax
086ce24e +0x1fa:  mov    %eax,(%esp)
086ce251 +0x1fd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce256 +0x202:  mov    %esi,%eax
086ce258 +0x204:  mov    %ebx,%edx
086ce25a +0x206:  mov    %eax,(%esp)
086ce25d +0x209:  call   08ae3750 <_Unwind_Resume>
086ce262 +0x20e:  lea    -0x38(%ebp),%eax
086ce265 +0x211:  mov    %eax,(%esp)
086ce268 +0x214:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce26d +0x219:  mov    %ebx,%eax
086ce26f +0x21b:  lea    -0x8(%ebp),%esp
086ce272 +0x21e:  add    $0x0,%esp
086ce275 +0x221:  pop    %ebx
086ce276 +0x222:  pop    %esi
086ce277 +0x223:  pop    %ebp
086ce278 +0x224:  ret
086ce279 +0x225:  nop
```

## 反编译 C

```c
// GameWorld::DisableChat @ 0x86ce054

/* GameWorld::DisableChat(char const*, int) */

undefined4 __thiscall GameWorld::DisableChat(GameWorld *this,char *param_1,int param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  string local_40;
  string local_3c;
  allocator<char> local_35;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_34 [4];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086ce0a5 to 086ce0a9 has its CatchHandler @ 086ce0ac */
      std::string::string((string *)&local_3c,param_1,(allocator *)&local_35);
      std::allocator<char>::~allocator(&local_35);
                    /* try { // try from 086ce0ec to 086ce23f has its CatchHandler @ 086ce247 */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_40);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_34);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_40,
                         (_Rb_tree_iterator *)local_34);
      if (cVar1 == '\0') {
        iVar3 = std::
                map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                              *)(this + 0x8c),&local_3c);
        if (*(char *)(iVar3 + 4) == '\x01') {
          uVar4 = std::string::c_str((string *)&local_3c);
          cMyTrace::cMyTrace(local_20,"bool GameWorld::DisableChat(const char*, int)",0x15a7,0);
          cMyTrace::operator()(local_20,"%s is already not able to chat!\n",uVar4);
          uVar4 = 1;
        }
        else {
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_3c);
          *(undefined1 *)(iVar3 + 4) = 1;
          local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_10 = local_10 * 1000;
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_3c);
          *(int *)(iVar3 + 8) = param_2 * 1000 + local_10;
          cMyTrace::cMyTrace(local_30,"bool GameWorld::DisableChat(const char*, int)",0x15a2,0);
          cMyTrace::operator()(local_30,"%s is not able to chat now for %d secs\n",param_1,param_2);
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
      std::string::~string((string *)&local_3c);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
