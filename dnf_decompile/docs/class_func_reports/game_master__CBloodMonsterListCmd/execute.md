# execute

`_ZN11game_master20CBloodMonsterListCmd7executeEv`

`game_master::CBloodMonsterListCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CBloodMonsterListCmd` | `0x084a9e34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9e34  _ZN11game_master20CBloodMonsterListCmd7executeEv
#           game_master::CBloodMonsterListCmd::execute()
# range [0x084a9e34, 0x084aa10b]
084a9e34 +0x000:  push   %ebp
084a9e35 +0x001:  mov    %esp,%ebp
084a9e37 +0x003:  push   %edi
084a9e38 +0x004:  push   %esi
084a9e39 +0x005:  push   %ebx
084a9e3a +0x006:  sub    $0x14c,%esp
084a9e40 +0x00c:  mov    0x8(%ebp),%eax
084a9e43 +0x00f:  mov    %eax,(%esp)
084a9e46 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9e4b +0x017:  mov    %eax,(%esp)
084a9e4e +0x01a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084a9e53 +0x01f:  cmp    $0x5,%eax
084a9e56 +0x022:  setne  %al
084a9e59 +0x025:  test   %al,%al
084a9e5b +0x027:  jne    084aa0fc <+0x2c8>
084a9e61 +0x02d:  mov    0x8(%ebp),%eax
084a9e64 +0x030:  mov    %eax,(%esp)
084a9e67 +0x033:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9e6c +0x038:  mov    %eax,(%esp)
084a9e6f +0x03b:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
084a9e74 +0x040:  movswl %ax,%ebx
084a9e77 +0x043:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084a9e7c +0x048:  mov    %ebx,0x4(%esp)
084a9e80 +0x04c:  mov    %eax,(%esp)
084a9e83 +0x04f:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
084a9e88 +0x054:  mov    %eax,-0x20(%ebp)
084a9e8b +0x057:  cmpl   $0x0,-0x20(%ebp)
084a9e8f +0x05b:  je     084aa0ff <+0x2cb>
084a9e95 +0x061:  lea    -0x25(%ebp),%eax
084a9e98 +0x064:  mov    %eax,(%esp)
084a9e9b +0x067:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084a9ea0 +0x06c:  lea    -0x25(%ebp),%eax
084a9ea3 +0x06f:  mov    %eax,0x8(%esp)
084a9ea7 +0x073:  movl   $"monster list : ",0x4(%esp)
084a9eaf +0x07b:  lea    -0x2c(%ebp),%eax
084a9eb2 +0x07e:  mov    %eax,(%esp)
084a9eb5 +0x081:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084a9eba +0x086:  jmp    084a9ed7 <+0xa3>
084a9ebc +0x088:  mov    %edx,%ebx
084a9ebe +0x08a:  mov    %eax,%esi
084a9ec0 +0x08c:  lea    -0x25(%ebp),%eax
084a9ec3 +0x08f:  mov    %eax,(%esp)
084a9ec6 +0x092:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084a9ecb +0x097:  mov    %esi,%eax
084a9ecd +0x099:  mov    %ebx,%edx
084a9ecf +0x09b:  mov    %eax,(%esp)
084a9ed2 +0x09e:  call   08ae3750 <_Unwind_Resume>
084a9ed7 +0x0a3:  lea    -0x25(%ebp),%eax
084a9eda +0x0a6:  mov    %eax,(%esp)
084a9edd +0x0a9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084a9ee2 +0x0ae:  lea    -0x13b(%ebp),%edx
084a9ee8 +0x0b4:  mov    $0xff,%ebx
084a9eed +0x0b9:  mov    $0x0,%eax
084a9ef2 +0x0be:  mov    %edx,%ecx
084a9ef4 +0x0c0:  and    $0x1,%ecx
084a9ef7 +0x0c3:  test   %ecx,%ecx
084a9ef9 +0x0c5:  je     084a9f03 <+0xcf>
084a9efb +0x0c7:  mov    %al,(%edx)
084a9efd +0x0c9:  add    $0x1,%edx
084a9f00 +0x0cc:  sub    $0x1,%ebx
084a9f03 +0x0cf:  mov    %edx,%ecx
084a9f05 +0x0d1:  and    $0x2,%ecx
084a9f08 +0x0d4:  test   %ecx,%ecx
084a9f0a +0x0d6:  je     084a9f15 <+0xe1>
084a9f0c +0x0d8:  mov    %ax,(%edx)
084a9f0f +0x0db:  add    $0x2,%edx
084a9f12 +0x0de:  sub    $0x2,%ebx
084a9f15 +0x0e1:  mov    %ebx,%ecx
084a9f17 +0x0e3:  shr    $0x2,%ecx
084a9f1a +0x0e6:  mov    %edx,%edi
084a9f1c +0x0e8:  rep stos %eax,%es:(%edi)
084a9f1e +0x0ea:  mov    %edi,%edx
084a9f20 +0x0ec:  mov    %ebx,%ecx
084a9f22 +0x0ee:  and    $0x2,%ecx
084a9f25 +0x0f1:  test   %ecx,%ecx
084a9f27 +0x0f3:  je     084a9f2f <+0xfb>
084a9f29 +0x0f5:  mov    %ax,(%edx)
084a9f2c +0x0f8:  add    $0x2,%edx
084a9f2f +0x0fb:  mov    %ebx,%ecx
084a9f31 +0x0fd:  and    $0x1,%ecx
084a9f34 +0x100:  test   %ecx,%ecx
084a9f36 +0x102:  je     084a9f3d <+0x109>
084a9f38 +0x104:  mov    %al,(%edx)
084a9f3a +0x106:  add    $0x1,%edx
084a9f3d +0x109:  mov    -0x20(%ebp),%eax
084a9f40 +0x10c:  add    $0xb24,%eax
084a9f45 +0x111:  mov    %eax,(%esp)
084a9f48 +0x114:  call   0822d03e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26e8
084a9f4d +0x119:  mov    %eax,-0x1c(%ebp)
084a9f50 +0x11c:  mov    -0x1c(%ebp),%eax
084a9f53 +0x11f:  lea    0xc(%eax),%edx
084a9f56 +0x122:  lea    -0x3c(%ebp),%eax
084a9f59 +0x125:  mov    %edx,0x4(%esp)
084a9f5d +0x129:  mov    %eax,(%esp)
084a9f60 +0x12c:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
084a9f65 +0x131:  sub    $0x4,%esp
084a9f68 +0x134:  jmp    084a9fb1 <+0x17d>
084a9f6a +0x136:  lea    -0x3c(%ebp),%eax
084a9f6d +0x139:  mov    %eax,(%esp)
084a9f70 +0x13c:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084a9f75 +0x141:  mov    (%eax),%eax
084a9f77 +0x143:  mov    %eax,0x8(%esp)
084a9f7b +0x147:  movl   $"(%d) ",0x4(%esp)
084a9f83 +0x14f:  lea    -0x13b(%ebp),%eax
084a9f89 +0x155:  mov    %eax,(%esp)
084a9f8c +0x158:  call   0807e440 <_init+0xd38>
084a9f91 +0x15d:  lea    -0x13b(%ebp),%eax
084a9f97 +0x163:  mov    %eax,0x4(%esp)
084a9f9b +0x167:  lea    -0x2c(%ebp),%eax
084a9f9e +0x16a:  mov    %eax,(%esp)
084a9fa1 +0x16d:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084a9fa6 +0x172:  lea    -0x3c(%ebp),%eax
084a9fa9 +0x175:  mov    %eax,(%esp)
084a9fac +0x178:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
084a9fb1 +0x17d:  mov    -0x1c(%ebp),%eax
084a9fb4 +0x180:  lea    0xc(%eax),%edx
084a9fb7 +0x183:  lea    -0x24(%ebp),%eax
084a9fba +0x186:  mov    %edx,0x4(%esp)
084a9fbe +0x18a:  mov    %eax,(%esp)
084a9fc1 +0x18d:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
084a9fc6 +0x192:  sub    $0x4,%esp
084a9fc9 +0x195:  lea    -0x24(%ebp),%eax
084a9fcc +0x198:  mov    %eax,0x4(%esp)
084a9fd0 +0x19c:  lea    -0x3c(%ebp),%eax
084a9fd3 +0x19f:  mov    %eax,(%esp)
084a9fd6 +0x1a2:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
084a9fdb +0x1a7:  test   %al,%al
084a9fdd +0x1a9:  jne    084a9f6a <+0x136>
084a9fdf +0x1ab:  lea    -0x38(%ebp),%eax
084a9fe2 +0x1ae:  mov    %eax,(%esp)
084a9fe5 +0x1b1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a9fea +0x1b6:  movl   $0xc,0x8(%esp)
084a9ff2 +0x1be:  movl   $0x0,0x4(%esp)
084a9ffa +0x1c6:  lea    -0x38(%ebp),%eax
084a9ffd +0x1c9:  mov    %eax,(%esp)
084aa000 +0x1cc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084aa005 +0x1d1:  movl   $0x0,0x4(%esp)
084aa00d +0x1d9:  lea    -0x38(%ebp),%eax
084aa010 +0x1dc:  mov    %eax,(%esp)
084aa013 +0x1df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa018 +0x1e4:  movl   $0x0,0x4(%esp)
084aa020 +0x1ec:  lea    -0x38(%ebp),%eax
084aa023 +0x1ef:  mov    %eax,(%esp)
084aa026 +0x1f2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084aa02b +0x1f7:  movl   $0x0,0x4(%esp)
084aa033 +0x1ff:  lea    -0x38(%ebp),%eax
084aa036 +0x202:  mov    %eax,(%esp)
084aa039 +0x205:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa03e +0x20a:  lea    -0x2c(%ebp),%eax
084aa041 +0x20d:  mov    %eax,(%esp)
084aa044 +0x210:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
084aa049 +0x215:  mov    %eax,0x4(%esp)
084aa04d +0x219:  lea    -0x38(%ebp),%eax
084aa050 +0x21c:  mov    %eax,(%esp)
084aa053 +0x21f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084aa058 +0x224:  lea    -0x2c(%ebp),%eax
084aa05b +0x227:  mov    %eax,(%esp)
084aa05e +0x22a:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
084aa063 +0x22f:  mov    %eax,%ebx
084aa065 +0x231:  lea    -0x2c(%ebp),%eax
084aa068 +0x234:  mov    %eax,(%esp)
084aa06b +0x237:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aa070 +0x23c:  mov    %ebx,0x8(%esp)
084aa074 +0x240:  mov    %eax,0x4(%esp)
084aa078 +0x244:  lea    -0x38(%ebp),%eax
084aa07b +0x247:  mov    %eax,(%esp)
084aa07e +0x24a:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084aa083 +0x24f:  movl   $0x1,0x4(%esp)
084aa08b +0x257:  lea    -0x38(%ebp),%eax
084aa08e +0x25a:  mov    %eax,(%esp)
084aa091 +0x25d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084aa096 +0x262:  mov    0x8(%ebp),%eax
084aa099 +0x265:  mov    %eax,(%esp)
084aa09c +0x268:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa0a1 +0x26d:  lea    -0x38(%ebp),%edx
084aa0a4 +0x270:  mov    %edx,0x4(%esp)
084aa0a8 +0x274:  mov    %eax,(%esp)
084aa0ab +0x277:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084aa0b0 +0x27c:  jmp    084aa0c7 <+0x293>
084aa0b2 +0x27e:  mov    %edx,%ebx
084aa0b4 +0x280:  mov    %eax,%esi
084aa0b6 +0x282:  lea    -0x38(%ebp),%eax
084aa0b9 +0x285:  mov    %eax,(%esp)
084aa0bc +0x288:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa0c1 +0x28d:  mov    %esi,%eax
084aa0c3 +0x28f:  mov    %ebx,%edx
084aa0c5 +0x291:  jmp    084aa0d4 <+0x2a0>
084aa0c7 +0x293:  lea    -0x38(%ebp),%eax
084aa0ca +0x296:  mov    %eax,(%esp)
084aa0cd +0x299:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa0d2 +0x29e:  jmp    084aa0ef <+0x2bb>
084aa0d4 +0x2a0:  mov    %edx,%ebx
084aa0d6 +0x2a2:  mov    %eax,%esi
084aa0d8 +0x2a4:  lea    -0x2c(%ebp),%eax
084aa0db +0x2a7:  mov    %eax,(%esp)
084aa0de +0x2aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aa0e3 +0x2af:  mov    %esi,%eax
084aa0e5 +0x2b1:  mov    %ebx,%edx
084aa0e7 +0x2b3:  mov    %eax,(%esp)
084aa0ea +0x2b6:  call   08ae3750 <_Unwind_Resume>
084aa0ef +0x2bb:  lea    -0x2c(%ebp),%eax
084aa0f2 +0x2be:  mov    %eax,(%esp)
084aa0f5 +0x2c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084aa0fa +0x2c6:  jmp    084aa100 <+0x2cc>
084aa0fc +0x2c8:  nop
084aa0fd +0x2c9:  jmp    084aa100 <+0x2cc>
084aa0ff +0x2cb:  nop
084aa100 +0x2cc:  lea    -0xc(%ebp),%esp
084aa103 +0x2cf:  add    $0x0,%esp
084aa106 +0x2d2:  pop    %ebx
084aa107 +0x2d3:  pop    %esi
084aa108 +0x2d4:  pop    %edi
084aa109 +0x2d5:  pop    %ebp
084aa10a +0x2d6:  ret
084aa10b +0x2d7:  nop
```

## 反编译 C

```c
// game_master::CBloodMonsterListCmd::execute @ 0x84a9e34

/* game_master::CBloodMonsterListCmd::execute() */

void __thiscall game_master::CBloodMonsterListCmd::execute(CBloodMonsterListCmd *this)

{
  char cVar1;
  CUser *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_13f;
  char local_13e [254];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_40 [4];
  PacketGuard local_3c [12];
  string local_30 [7];
  allocator<char> local_29;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_28 [4];
  int local_24;
  undefined4 local_20;
  
  bVar9 = 0;
  pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar3 = CUser::get_state(pCVar2);
  if (iVar3 == 5) {
    pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::GetPartyIndex(pCVar2);
    iVar3 = G_CGameManager();
    local_24 = CGameManager::GetParty(iVar3);
    if (local_24 != 0) {
      std::allocator<char>::allocator();
                    /* try { // try from 084a9eb5 to 084a9eb9 has its CatchHandler @ 084a9ebc */
      std::string::string(local_30,"monster list : ",(allocator *)&local_29);
      std::allocator<char>::~allocator(&local_29);
      pcVar6 = &local_13f;
      uVar7 = 0xff;
      bVar8 = ((uint)pcVar6 & 1) != 0;
      if (bVar8) {
        local_13f = '\0';
        pcVar6 = local_13e;
        uVar7 = 0xfe;
      }
      if (((uint)pcVar6 & 2) != 0) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6 = pcVar6 + 2;
        uVar7 = uVar7 - 2;
      }
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
      }
      if ((uVar7 & 2) != 0) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6 = pcVar6 + 2;
      }
      if (!bVar8) {
        *pcVar6 = '\0';
      }
                    /* try { // try from 084a9f48 to 084a9fe9 has its CatchHandler @ 084aa0d4 */
      local_20 = CBattle_Field::GetMapInfo((CBattle_Field *)(local_24 + 0xb24));
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_40);
      while( true ) {
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        end(local_28);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40,
                           (_Rb_tree_iterator *)local_28);
        if (cVar1 == '\0') break;
        puVar4 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                           ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
        sprintf(&local_13f,"(%d) ",*puVar4);
        std::string::operator+=(local_30,&local_13f);
        std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
      }
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084aa000 to 084aa0af has its CatchHandler @ 084aa0b2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xc);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
      iVar3 = std::string::size(local_30);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,iVar3);
      iVar3 = std::string::size(local_30);
      pcVar6 = (char *)std::string::c_str(local_30);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,pcVar6,iVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      pCVar2 = (CUser *)CCommand::GetUser((CCommand *)this);
      CUser::Send(pCVar2,local_3c);
                    /* try { // try from 084aa0cd to 084aa0d1 has its CatchHandler @ 084aa0d4 */
      PacketGuard::~PacketGuard(local_3c);
      std::string::~string(local_30);
    }
  }
  return;
}
```
