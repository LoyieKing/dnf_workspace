# DisableMove

`_ZN9GameWorld11DisableMoveEPKci`

`GameWorld::DisableMove(char const*, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ce27a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ce27a  _ZN9GameWorld11DisableMoveEPKci
#           GameWorld::DisableMove(char const*, int)
# range [0x086ce27a, 0x086ce49f]
086ce27a +0x000:  push   %ebp
086ce27b +0x001:  mov    %esp,%ebp
086ce27d +0x003:  push   %esi
086ce27e +0x004:  push   %ebx
086ce27f +0x005:  sub    $0x50,%esp
086ce282 +0x008:  cmpl   $0x0,0xc(%ebp)
086ce286 +0x00c:  jne    086ce292 <+0x18>
086ce288 +0x00e:  mov    $0x0,%ebx
086ce28d +0x013:  jmp    086ce493 <+0x219>
086ce292 +0x018:  mov    0xc(%ebp),%eax
086ce295 +0x01b:  mov    %eax,(%esp)
086ce298 +0x01e:  call   0807e3b0 <_init+0xca8>
086ce29d +0x023:  cmp    $0x1e,%eax
086ce2a0 +0x026:  jbe    086ce2ac <+0x32>
086ce2a2 +0x028:  mov    $0x0,%ebx
086ce2a7 +0x02d:  jmp    086ce493 <+0x219>
086ce2ac +0x032:  lea    -0x31(%ebp),%eax
086ce2af +0x035:  mov    %eax,(%esp)
086ce2b2 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ce2b7 +0x03d:  lea    -0x31(%ebp),%eax
086ce2ba +0x040:  mov    %eax,0x8(%esp)
086ce2be +0x044:  mov    0xc(%ebp),%eax
086ce2c1 +0x047:  mov    %eax,0x4(%esp)
086ce2c5 +0x04b:  lea    -0x38(%ebp),%eax
086ce2c8 +0x04e:  mov    %eax,(%esp)
086ce2cb +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ce2d0 +0x056:  jmp    086ce2ed <+0x73>
086ce2d2 +0x058:  mov    %edx,%ebx
086ce2d4 +0x05a:  mov    %eax,%esi
086ce2d6 +0x05c:  lea    -0x31(%ebp),%eax
086ce2d9 +0x05f:  mov    %eax,(%esp)
086ce2dc +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce2e1 +0x067:  mov    %esi,%eax
086ce2e3 +0x069:  mov    %ebx,%edx
086ce2e5 +0x06b:  mov    %eax,(%esp)
086ce2e8 +0x06e:  call   08ae3750 <_Unwind_Resume>
086ce2ed +0x073:  lea    -0x31(%ebp),%eax
086ce2f0 +0x076:  mov    %eax,(%esp)
086ce2f3 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce2f8 +0x07e:  mov    0x8(%ebp),%eax
086ce2fb +0x081:  lea    0x8c(%eax),%ecx
086ce301 +0x087:  lea    -0x3c(%ebp),%eax
086ce304 +0x08a:  lea    -0x38(%ebp),%edx
086ce307 +0x08d:  mov    %edx,0x8(%esp)
086ce30b +0x091:  mov    %ecx,0x4(%esp)
086ce30f +0x095:  mov    %eax,(%esp)
086ce312 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086ce317 +0x09d:  sub    $0x4,%esp
086ce31a +0x0a0:  mov    0x8(%ebp),%eax
086ce31d +0x0a3:  lea    0x8c(%eax),%edx
086ce323 +0x0a9:  lea    -0x30(%ebp),%eax
086ce326 +0x0ac:  mov    %edx,0x4(%esp)
086ce32a +0x0b0:  mov    %eax,(%esp)
086ce32d +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086ce332 +0x0b8:  sub    $0x4,%esp
086ce335 +0x0bb:  lea    -0x30(%ebp),%eax
086ce338 +0x0be:  mov    %eax,0x4(%esp)
086ce33c +0x0c2:  lea    -0x3c(%ebp),%eax
086ce33f +0x0c5:  mov    %eax,(%esp)
086ce342 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086ce347 +0x0cd:  test   %al,%al
086ce349 +0x0cf:  je     086ce355 <+0xdb>
086ce34b +0x0d1:  mov    $0x0,%ebx
086ce350 +0x0d6:  jmp    086ce488 <+0x20e>
086ce355 +0x0db:  mov    0x8(%ebp),%eax
086ce358 +0x0de:  lea    0x8c(%eax),%edx
086ce35e +0x0e4:  lea    -0x38(%ebp),%eax
086ce361 +0x0e7:  mov    %eax,0x4(%esp)
086ce365 +0x0eb:  mov    %edx,(%esp)
086ce368 +0x0ee:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce36d +0x0f3:  movzbl 0x5(%eax),%eax
086ce371 +0x0f7:  xor    $0x1,%eax
086ce374 +0x0fa:  test   %al,%al
086ce376 +0x0fc:  je     086ce41f <+0x1a5>
086ce37c +0x102:  mov    0x8(%ebp),%eax
086ce37f +0x105:  lea    0x8c(%eax),%edx
086ce385 +0x10b:  lea    -0x38(%ebp),%eax
086ce388 +0x10e:  mov    %eax,0x4(%esp)
086ce38c +0x112:  mov    %edx,(%esp)
086ce38f +0x115:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce394 +0x11a:  movb   $0x1,0x5(%eax)
086ce398 +0x11e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ce39f +0x125:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ce3a4 +0x12a:  imul   $0x3e8,%eax,%eax
086ce3aa +0x130:  mov    %eax,-0xc(%ebp)
086ce3ad +0x133:  mov    0x8(%ebp),%eax
086ce3b0 +0x136:  lea    0x8c(%eax),%edx
086ce3b6 +0x13c:  lea    -0x38(%ebp),%eax
086ce3b9 +0x13f:  mov    %eax,0x4(%esp)
086ce3bd +0x143:  mov    %edx,(%esp)
086ce3c0 +0x146:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce3c5 +0x14b:  mov    0x10(%ebp),%edx
086ce3c8 +0x14e:  imul   $0x3e8,%edx,%edx
086ce3ce +0x154:  add    -0xc(%ebp),%edx
086ce3d1 +0x157:  mov    %edx,0xc(%eax)
086ce3d4 +0x15a:  movl   $0x0,0xc(%esp)
086ce3dc +0x162:  movl   $0x15c0,0x8(%esp)
086ce3e4 +0x16a:  movl   $&_ZZN9GameWorld11DisableMoveEPKciE19__PRETTY_FUNCTION__,0x4(%esp)
086ce3ec +0x172:  lea    -0x2c(%ebp),%eax
086ce3ef +0x175:  mov    %eax,(%esp)
086ce3f2 +0x178:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce3f7 +0x17d:  mov    0x10(%ebp),%eax
086ce3fa +0x180:  mov    %eax,0xc(%esp)
086ce3fe +0x184:  mov    0xc(%ebp),%eax
086ce401 +0x187:  mov    %eax,0x8(%esp)
086ce405 +0x18b:  movl   $"%s is not able to move now for %d secs\n",0x4(%esp)
086ce40d +0x193:  lea    -0x2c(%ebp),%eax
086ce410 +0x196:  mov    %eax,(%esp)
086ce413 +0x199:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce418 +0x19e:  mov    $0x1,%ebx
086ce41d +0x1a3:  jmp    086ce488 <+0x20e>
086ce41f +0x1a5:  lea    -0x38(%ebp),%eax
086ce422 +0x1a8:  mov    %eax,(%esp)
086ce425 +0x1ab:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086ce42a +0x1b0:  mov    %eax,%ebx
086ce42c +0x1b2:  movl   $0x0,0xc(%esp)
086ce434 +0x1ba:  movl   $0x15c5,0x8(%esp)
086ce43c +0x1c2:  movl   $&_ZZN9GameWorld11DisableMoveEPKciE19__PRETTY_FUNCTION__,0x4(%esp)
086ce444 +0x1ca:  lea    -0x1c(%ebp),%eax
086ce447 +0x1cd:  mov    %eax,(%esp)
086ce44a +0x1d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce44f +0x1d5:  mov    %ebx,0x8(%esp)
086ce453 +0x1d9:  movl   $"%s is already not able to move!\n",0x4(%esp)
086ce45b +0x1e1:  lea    -0x1c(%ebp),%eax
086ce45e +0x1e4:  mov    %eax,(%esp)
086ce461 +0x1e7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce466 +0x1ec:  mov    $0x1,%ebx
086ce46b +0x1f1:  jmp    086ce488 <+0x20e>
086ce46d +0x1f3:  mov    %edx,%ebx
086ce46f +0x1f5:  mov    %eax,%esi
086ce471 +0x1f7:  lea    -0x38(%ebp),%eax
086ce474 +0x1fa:  mov    %eax,(%esp)
086ce477 +0x1fd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce47c +0x202:  mov    %esi,%eax
086ce47e +0x204:  mov    %ebx,%edx
086ce480 +0x206:  mov    %eax,(%esp)
086ce483 +0x209:  call   08ae3750 <_Unwind_Resume>
086ce488 +0x20e:  lea    -0x38(%ebp),%eax
086ce48b +0x211:  mov    %eax,(%esp)
086ce48e +0x214:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce493 +0x219:  mov    %ebx,%eax
086ce495 +0x21b:  lea    -0x8(%ebp),%esp
086ce498 +0x21e:  add    $0x0,%esp
086ce49b +0x221:  pop    %ebx
086ce49c +0x222:  pop    %esi
086ce49d +0x223:  pop    %ebp
086ce49e +0x224:  ret
086ce49f +0x225:  nop
```

## 反编译 C

```c
// GameWorld::DisableMove @ 0x86ce27a

/* GameWorld::DisableMove(char const*, int) */

undefined4 __thiscall GameWorld::DisableMove(GameWorld *this,char *param_1,int param_2)

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
                    /* try { // try from 086ce2cb to 086ce2cf has its CatchHandler @ 086ce2d2 */
      std::string::string((string *)&local_3c,param_1,(allocator *)&local_35);
      std::allocator<char>::~allocator(&local_35);
                    /* try { // try from 086ce312 to 086ce465 has its CatchHandler @ 086ce46d */
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
        if (*(char *)(iVar3 + 5) == '\x01') {
          uVar4 = std::string::c_str((string *)&local_3c);
          cMyTrace::cMyTrace(local_20,"bool GameWorld::DisableMove(const char*, int)",0x15c5,0);
          cMyTrace::operator()(local_20,"%s is already not able to move!\n",uVar4);
          uVar4 = 1;
        }
        else {
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_3c);
          *(undefined1 *)(iVar3 + 5) = 1;
          local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_10 = local_10 * 1000;
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_3c);
          *(int *)(iVar3 + 0xc) = param_2 * 1000 + local_10;
          cMyTrace::cMyTrace(local_30,"bool GameWorld::DisableMove(const char*, int)",0x15c0,0);
          cMyTrace::operator()(local_30,"%s is not able to move now for %d secs\n",param_1,param_2);
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
