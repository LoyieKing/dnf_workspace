# GetLeftTimeOfForbiddenMove

`_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc`

`GameWorld::GetLeftTimeOfForbiddenMove(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ce958` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ce958  _ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc
#           GameWorld::GetLeftTimeOfForbiddenMove(char const*)
# range [0x086ce958, 0x086ceb07]
086ce958 +0x000:  push   %ebp
086ce959 +0x001:  mov    %esp,%ebp
086ce95b +0x003:  push   %esi
086ce95c +0x004:  push   %ebx
086ce95d +0x005:  sub    $0x30,%esp
086ce960 +0x008:  cmpl   $0x0,0xc(%ebp)
086ce964 +0x00c:  jne    086ce970 <+0x18>
086ce966 +0x00e:  mov    $0x0,%ebx
086ce96b +0x013:  jmp    086ceafc <+0x1a4>
086ce970 +0x018:  mov    0xc(%ebp),%eax
086ce973 +0x01b:  mov    %eax,(%esp)
086ce976 +0x01e:  call   0807e3b0 <_init+0xca8>
086ce97b +0x023:  cmp    $0x1e,%eax
086ce97e +0x026:  jbe    086ce98a <+0x32>
086ce980 +0x028:  mov    $0x0,%ebx
086ce985 +0x02d:  jmp    086ceafc <+0x1a4>
086ce98a +0x032:  lea    -0x1d(%ebp),%eax
086ce98d +0x035:  mov    %eax,(%esp)
086ce990 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ce995 +0x03d:  lea    -0x1d(%ebp),%eax
086ce998 +0x040:  mov    %eax,0x8(%esp)
086ce99c +0x044:  mov    0xc(%ebp),%eax
086ce99f +0x047:  mov    %eax,0x4(%esp)
086ce9a3 +0x04b:  lea    -0x24(%ebp),%eax
086ce9a6 +0x04e:  mov    %eax,(%esp)
086ce9a9 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ce9ae +0x056:  jmp    086ce9cb <+0x73>
086ce9b0 +0x058:  mov    %edx,%ebx
086ce9b2 +0x05a:  mov    %eax,%esi
086ce9b4 +0x05c:  lea    -0x1d(%ebp),%eax
086ce9b7 +0x05f:  mov    %eax,(%esp)
086ce9ba +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce9bf +0x067:  mov    %esi,%eax
086ce9c1 +0x069:  mov    %ebx,%edx
086ce9c3 +0x06b:  mov    %eax,(%esp)
086ce9c6 +0x06e:  call   08ae3750 <_Unwind_Resume>
086ce9cb +0x073:  lea    -0x1d(%ebp),%eax
086ce9ce +0x076:  mov    %eax,(%esp)
086ce9d1 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce9d6 +0x07e:  mov    0x8(%ebp),%eax
086ce9d9 +0x081:  lea    0x8c(%eax),%ecx
086ce9df +0x087:  lea    -0x28(%ebp),%eax
086ce9e2 +0x08a:  lea    -0x24(%ebp),%edx
086ce9e5 +0x08d:  mov    %edx,0x8(%esp)
086ce9e9 +0x091:  mov    %ecx,0x4(%esp)
086ce9ed +0x095:  mov    %eax,(%esp)
086ce9f0 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086ce9f5 +0x09d:  sub    $0x4,%esp
086ce9f8 +0x0a0:  mov    0x8(%ebp),%eax
086ce9fb +0x0a3:  lea    0x8c(%eax),%edx
086cea01 +0x0a9:  lea    -0x1c(%ebp),%eax
086cea04 +0x0ac:  mov    %edx,0x4(%esp)
086cea08 +0x0b0:  mov    %eax,(%esp)
086cea0b +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cea10 +0x0b8:  sub    $0x4,%esp
086cea13 +0x0bb:  lea    -0x1c(%ebp),%eax
086cea16 +0x0be:  mov    %eax,0x4(%esp)
086cea1a +0x0c2:  lea    -0x28(%ebp),%eax
086cea1d +0x0c5:  mov    %eax,(%esp)
086cea20 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cea25 +0x0cd:  test   %al,%al
086cea27 +0x0cf:  je     086cea33 <+0xdb>
086cea29 +0x0d1:  mov    $0x0,%ebx
086cea2e +0x0d6:  jmp    086ceaf1 <+0x199>
086cea33 +0x0db:  movl   $0x0,-0x18(%ebp)
086cea3a +0x0e2:  movl   $0x0,-0x14(%ebp)
086cea41 +0x0e9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086cea46 +0x0ee:  mov    0xc(%ebp),%edx
086cea49 +0x0f1:  mov    %edx,0x4(%esp)
086cea4d +0x0f5:  mov    %eax,(%esp)
086cea50 +0x0f8:  call   086ce5ee <_ZN9GameWorld27WhenIsTheEndOfForbiddenMoveEPKc>  ; GameWorld::WhenIsTheEndOfForbiddenMove(char const*)
086cea55 +0x0fd:  mov    $0x0,%edx
086cea5a +0x102:  mov    %eax,-0x18(%ebp)
086cea5d +0x105:  mov    %edx,-0x14(%ebp)
086cea60 +0x108:  cmpl   $0x0,-0x14(%ebp)
086cea64 +0x10c:  js     086ceacf <+0x177>
086cea66 +0x10e:  cmpl   $0x0,-0x14(%ebp)
086cea6a +0x112:  jg     086cea72 <+0x11a>
086cea6c +0x114:  cmpl   $0x0,-0x18(%ebp)
086cea70 +0x118:  jbe    086ceacf <+0x177>
086cea72 +0x11a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086cea79 +0x121:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086cea7e +0x126:  imul   $0x3e8,%eax,%eax
086cea84 +0x12c:  mov    %eax,-0xc(%ebp)
086cea87 +0x12f:  mov    -0xc(%ebp),%eax
086cea8a +0x132:  mov    $0x0,%edx
086cea8f +0x137:  sub    %eax,-0x18(%ebp)
086cea92 +0x13a:  sbb    %edx,-0x14(%ebp)
086cea95 +0x13d:  cmpl   $0x0,-0x14(%ebp)
086cea99 +0x141:  js     086ceac8 <+0x170>
086cea9b +0x143:  cmpl   $0x0,-0x14(%ebp)
086cea9f +0x147:  jg     086ceaa7 <+0x14f>
086ceaa1 +0x149:  cmpl   $0x0,-0x18(%ebp)
086ceaa5 +0x14d:  jbe    086ceac8 <+0x170>
086ceaa7 +0x14f:  cmpl   $0x0,-0x14(%ebp)
086ceaab +0x153:  jg     086ceac3 <+0x16b>
086ceaad +0x155:  cmpl   $0x0,-0x14(%ebp)
086ceab1 +0x159:  js     086ceabc <+0x164>
086ceab3 +0x15b:  cmpl   $0xea5f,-0x18(%ebp)
086ceaba +0x162:  ja     086ceac3 <+0x16b>
086ceabc +0x164:  mov    $0xea60,%ebx
086ceac1 +0x169:  jmp    086ceaf1 <+0x199>
086ceac3 +0x16b:  mov    -0x18(%ebp),%ebx
086ceac6 +0x16e:  jmp    086ceaf1 <+0x199>
086ceac8 +0x170:  mov    $0x0,%ebx
086ceacd +0x175:  jmp    086ceaf1 <+0x199>
086ceacf +0x177:  mov    $0x0,%ebx
086cead4 +0x17c:  jmp    086ceaf1 <+0x199>
086cead6 +0x17e:  mov    %edx,%ebx
086cead8 +0x180:  mov    %eax,%esi
086ceada +0x182:  lea    -0x24(%ebp),%eax
086ceadd +0x185:  mov    %eax,(%esp)
086ceae0 +0x188:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ceae5 +0x18d:  mov    %esi,%eax
086ceae7 +0x18f:  mov    %ebx,%edx
086ceae9 +0x191:  mov    %eax,(%esp)
086ceaec +0x194:  call   08ae3750 <_Unwind_Resume>
086ceaf1 +0x199:  lea    -0x24(%ebp),%eax
086ceaf4 +0x19c:  mov    %eax,(%esp)
086ceaf7 +0x19f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ceafc +0x1a4:  mov    %ebx,%eax
086ceafe +0x1a6:  lea    -0x8(%ebp),%esp
086ceb01 +0x1a9:  add    $0x0,%esp
086ceb04 +0x1ac:  pop    %ebx
086ceb05 +0x1ad:  pop    %esi
086ceb06 +0x1ae:  pop    %ebp
086ceb07 +0x1af:  ret
```

## 反编译 C

```c
// GameWorld::GetLeftTimeOfForbiddenMove @ 0x86ce958

/* GameWorld::GetLeftTimeOfForbiddenMove(char const*) */

uint __thiscall GameWorld::GetLeftTimeOfForbiddenMove(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  GameWorld *this_00;
  int iVar3;
  uint uVar4;
  bool bVar5;
  string local_2c;
  string local_28 [7];
  allocator<char> local_21;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_20 [4];
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
                    /* try { // try from 086ce9a9 to 086ce9ad has its CatchHandler @ 086ce9b0 */
      std::string::string(local_28,param_1,(allocator *)&local_21);
      std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 086ce9f0 to 086cea54 has its CatchHandler @ 086cead6 */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_2c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_2c,
                         (_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') {
        local_1c = 0;
        local_18 = 0;
        this_00 = (GameWorld *)G_GameWorld();
        local_1c = WhenIsTheEndOfForbiddenMove(this_00,param_1);
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
        uVar4 = 0;
      }
      std::string::~string(local_28);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
