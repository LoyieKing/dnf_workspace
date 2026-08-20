# execute

`_ZN11game_master11CLinkSystem7executeEv`

`game_master::CLinkSystem::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CLinkSystem` | `0x084abdd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084abdd0  _ZN11game_master11CLinkSystem7executeEv
#           game_master::CLinkSystem::execute()
# range [0x084abdd0, 0x084abf27]
084abdd0 +0x000:  push   %ebp
084abdd1 +0x001:  mov    %esp,%ebp
084abdd3 +0x003:  push   %esi
084abdd4 +0x004:  push   %ebx
084abdd5 +0x005:  sub    $0x20,%esp
084abdd8 +0x008:  lea    -0xa(%ebp),%eax
084abddb +0x00b:  mov    %eax,(%esp)
084abdde +0x00e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084abde3 +0x013:  lea    -0xa(%ebp),%eax
084abde6 +0x016:  mov    %eax,0x8(%esp)
084abdea +0x01a:  movl   $"gm Link Charac : ",0x4(%esp)
084abdf2 +0x022:  lea    -0x10(%ebp),%eax
084abdf5 +0x025:  mov    %eax,(%esp)
084abdf8 +0x028:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084abdfd +0x02d:  jmp    084abe1a <+0x4a>
084abdff +0x02f:  mov    %edx,%ebx
084abe01 +0x031:  mov    %eax,%esi
084abe03 +0x033:  lea    -0xa(%ebp),%eax
084abe06 +0x036:  mov    %eax,(%esp)
084abe09 +0x039:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084abe0e +0x03e:  mov    %esi,%eax
084abe10 +0x040:  mov    %ebx,%edx
084abe12 +0x042:  mov    %eax,(%esp)
084abe15 +0x045:  call   08ae3750 <_Unwind_Resume>
084abe1a +0x04a:  lea    -0xa(%ebp),%eax
084abe1d +0x04d:  mov    %eax,(%esp)
084abe20 +0x050:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084abe25 +0x055:  mov    0x8(%ebp),%eax
084abe28 +0x058:  mov    0x4(%eax),%eax
084abe2b +0x05b:  add    $0xc,%eax
084abe2e +0x05e:  mov    %eax,(%esp)
084abe31 +0x061:  call   0829f068 <_Z4trimRSs>  ; trim(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084abe36 +0x066:  mov    0x8(%ebp),%eax
084abe39 +0x069:  mov    0x4(%eax),%eax
084abe3c +0x06c:  add    $0xc,%eax
084abe3f +0x06f:  mov    %eax,(%esp)
084abe42 +0x072:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084abe47 +0x077:  mov    %eax,(%esp)
084abe4a +0x07a:  call   0807e6f0 <_init+0xfe8>
084abe4f +0x07f:  mov    %al,-0x9(%ebp)
084abe52 +0x082:  movsbl -0x9(%ebp),%eax
084abe56 +0x086:  test   %eax,%eax
084abe58 +0x088:  je     084abe64 <+0x94>
084abe5a +0x08a:  cmp    $0x1,%eax
084abe5d +0x08d:  je     084abea3 <+0xd3>
084abe5f +0x08f:  jmp    084abeff <+0x12f>
084abe64 +0x094:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084abe69 +0x099:  add    $0x68,%eax
084abe6c +0x09c:  movl   $0x0,0x8(%esp)
084abe74 +0x0a4:  movl   $0x2aff,0x4(%esp)
084abe7c +0x0ac:  mov    %eax,(%esp)
084abe7f +0x0af:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
084abe84 +0x0b4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084abe89 +0x0b9:  movl   $0x0,0x8(%esp)
084abe91 +0x0c1:  movl   $0x2aff,0x4(%esp)
084abe99 +0x0c9:  mov    %eax,(%esp)
084abe9c +0x0cc:  call   086c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>  ; GameWorld::send_all_dungeon_inout_message(int, bool)
084abea1 +0x0d1:  jmp    084abeff <+0x12f>
084abea3 +0x0d3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084abea8 +0x0d8:  add    $0x68,%eax
084abeab +0x0db:  movl   $0x2aff,0x4(%esp)
084abeb3 +0x0e3:  mov    %eax,(%esp)
084abeb6 +0x0e6:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
084abebb +0x0eb:  xor    $0x1,%eax
084abebe +0x0ee:  test   %al,%al
084abec0 +0x0f0:  je     084abeff <+0x12f>
084abec2 +0x0f2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084abec7 +0x0f7:  add    $0x68,%eax
084abeca +0x0fa:  movl   $0x1,0x8(%esp)
084abed2 +0x102:  movl   $0x2aff,0x4(%esp)
084abeda +0x10a:  mov    %eax,(%esp)
084abedd +0x10d:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
084abee2 +0x112:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084abee7 +0x117:  movl   $0x1,0x8(%esp)
084abeef +0x11f:  movl   $0x2aff,0x4(%esp)
084abef7 +0x127:  mov    %eax,(%esp)
084abefa +0x12a:  call   086c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>  ; GameWorld::send_all_dungeon_inout_message(int, bool)
084abeff +0x12f:  lea    -0x10(%ebp),%eax
084abf02 +0x132:  mov    %eax,(%esp)
084abf05 +0x135:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084abf0a +0x13a:  add    $0x20,%esp
084abf0d +0x13d:  pop    %ebx
084abf0e +0x13e:  pop    %esi
084abf0f +0x13f:  pop    %ebp
084abf10 +0x140:  ret
084abf11 +0x141:  mov    %edx,%ebx
084abf13 +0x143:  mov    %eax,%esi
084abf15 +0x145:  lea    -0x10(%ebp),%eax
084abf18 +0x148:  mov    %eax,(%esp)
084abf1b +0x14b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084abf20 +0x150:  mov    %esi,%eax
084abf22 +0x152:  mov    %ebx,%edx
084abf24 +0x154:  mov    %eax,(%esp)
084abf27 +0x157:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// game_master::CLinkSystem::execute @ 0x84abdd0

/* game_master::CLinkSystem::execute() */

void __thiscall game_master::CLinkSystem::execute(CLinkSystem *this)

{
  char cVar1;
  char *__nptr;
  int iVar2;
  GameWorld *pGVar3;
  string local_14 [6];
  allocator<char> local_e;
  char local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 084abdf8 to 084abdfc has its CatchHandler @ 084abdff */
  std::string::string(local_14,"gm Link Charac : ",(allocator *)&local_e);
  std::allocator<char>::~allocator(&local_e);
                    /* try { // try from 084abe31 to 084abefe has its CatchHandler @ 084abf11 */
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar2 = atoi(__nptr);
  local_d = (char)iVar2;
  if (local_d == '\0') {
    iVar2 = G_CDataManager();
    ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar2 + 0x68),0x2aff,false);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all_dungeon_inout_message(pGVar3,0x2aff,false);
  }
  else if (local_d == '\x01') {
    iVar2 = G_CDataManager();
    cVar1 = ServerParameterScript::isDungeonOpen(iVar2 + 0x68);
    if (cVar1 != '\x01') {
      iVar2 = G_CDataManager();
      ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar2 + 0x68),0x2aff,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all_dungeon_inout_message(pGVar3,0x2aff,true);
    }
  }
  std::string::~string(local_14);
  return;
}
```
