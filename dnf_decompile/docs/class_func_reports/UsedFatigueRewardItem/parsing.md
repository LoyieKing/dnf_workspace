# parsing

`_ZN21UsedFatigueRewardItem7parsingEPc`

`UsedFatigueRewardItem::parsing(char*)`

| 类 | 地址 |
|---|---|
| `UsedFatigueRewardItem` | `0x081a25d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a25d2  _ZN21UsedFatigueRewardItem7parsingEPc
#           UsedFatigueRewardItem::parsing(char*)
# range [0x081a25d2, 0x081a28e3]
081a25d2 +0x000:  push   %ebp
081a25d3 +0x001:  mov    %esp,%ebp
081a25d5 +0x003:  push   %esi
081a25d6 +0x004:  push   %ebx
081a25d7 +0x005:  sub    $0x190,%esp
081a25dd +0x00b:  lea    -0x70(%ebp),%eax
081a25e0 +0x00e:  mov    %eax,(%esp)
081a25e3 +0x011:  call   0817b474 <_ZN11Arad_ScriptC1Ev>  ; Arad_Script::Arad_Script()
081a25e8 +0x016:  movl   $"on_off",0x8(%esp)
081a25f0 +0x01e:  mov    0xc(%ebp),%eax
081a25f3 +0x021:  mov    %eax,0x4(%esp)
081a25f7 +0x025:  lea    -0x70(%ebp),%eax
081a25fa +0x028:  mov    %eax,(%esp)
081a25fd +0x02b:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a2602 +0x030:  xor    $0x1,%eax
081a2605 +0x033:  test   %al,%al
081a2607 +0x035:  je     081a2613 <+0x41>
081a2609 +0x037:  mov    $0xa1,%ebx
081a260e +0x03c:  jmp    081a28cd <+0x2fb>
081a2613 +0x041:  lea    -0x70(%ebp),%eax
081a2616 +0x044:  mov    %eax,(%esp)
081a2619 +0x047:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a261e +0x04c:  test   %eax,%eax
081a2620 +0x04e:  sete   %al
081a2623 +0x051:  test   %al,%al
081a2625 +0x053:  je     081a2631 <+0x5f>
081a2627 +0x055:  mov    $0xa4,%ebx
081a262c +0x05a:  jmp    081a28cd <+0x2fb>
081a2631 +0x05f:  mov    0x8(%ebp),%eax
081a2634 +0x062:  movb   $0x0,0x4(%eax)
081a2638 +0x066:  lea    -0x15(%ebp),%eax
081a263b +0x069:  mov    %eax,(%esp)
081a263e +0x06c:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081a2643 +0x071:  movl   $"flag",0x8(%esp)
081a264b +0x079:  movl   $0x0,0x4(%esp)
081a2653 +0x081:  lea    -0x70(%ebp),%eax
081a2656 +0x084:  mov    %eax,(%esp)
081a2659 +0x087:  call   0817c6a6 <_ZN11Arad_Script9GetStringEiPc>  ; Arad_Script::GetString(int, char*)
081a265e +0x08c:  lea    -0x15(%ebp),%edx
081a2661 +0x08f:  mov    %edx,0x8(%esp)
081a2665 +0x093:  mov    %eax,0x4(%esp)
081a2669 +0x097:  lea    -0x1c(%ebp),%eax
081a266c +0x09a:  mov    %eax,(%esp)
081a266f +0x09d:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081a2674 +0x0a2:  jmp    081a268e <+0xbc>
081a2676 +0x0a4:  mov    %edx,%ebx
081a2678 +0x0a6:  mov    %eax,%esi
081a267a +0x0a8:  lea    -0x15(%ebp),%eax
081a267d +0x0ab:  mov    %eax,(%esp)
081a2680 +0x0ae:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081a2685 +0x0b3:  mov    %esi,%eax
081a2687 +0x0b5:  mov    %ebx,%edx
081a2689 +0x0b7:  jmp    081a28b2 <+0x2e0>
081a268e +0x0bc:  lea    -0x15(%ebp),%eax
081a2691 +0x0bf:  mov    %eax,(%esp)
081a2694 +0x0c2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081a2699 +0x0c7:  lea    -0xd(%ebp),%eax
081a269c +0x0ca:  mov    %eax,(%esp)
081a269f +0x0cd:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081a26a4 +0x0d2:  lea    -0xd(%ebp),%eax
081a26a7 +0x0d5:  mov    %eax,0x8(%esp)
081a26ab +0x0d9:  movl   $"true",0x4(%esp)
081a26b3 +0x0e1:  lea    -0x14(%ebp),%eax
081a26b6 +0x0e4:  mov    %eax,(%esp)
081a26b9 +0x0e7:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081a26be +0x0ec:  lea    -0x14(%ebp),%eax
081a26c1 +0x0ef:  mov    %eax,0x4(%esp)
081a26c5 +0x0f3:  lea    -0x1c(%ebp),%eax
081a26c8 +0x0f6:  mov    %eax,(%esp)
081a26cb +0x0f9:  call   08171273 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x138>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x138
081a26d0 +0x0fe:  mov    %eax,%ebx
081a26d2 +0x100:  lea    -0x14(%ebp),%eax
081a26d5 +0x103:  mov    %eax,(%esp)
081a26d8 +0x106:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081a26dd +0x10b:  jmp    081a270c <+0x13a>
081a26df +0x10d:  mov    %edx,%ebx
081a26e1 +0x10f:  mov    %eax,%esi
081a26e3 +0x111:  lea    -0x14(%ebp),%eax
081a26e6 +0x114:  mov    %eax,(%esp)
081a26e9 +0x117:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081a26ee +0x11c:  mov    %esi,%eax
081a26f0 +0x11e:  mov    %ebx,%edx
081a26f2 +0x120:  jmp    081a26f4 <+0x122>
081a26f4 +0x122:  mov    %edx,%ebx
081a26f6 +0x124:  mov    %eax,%esi
081a26f8 +0x126:  lea    -0xd(%ebp),%eax
081a26fb +0x129:  mov    %eax,(%esp)
081a26fe +0x12c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081a2703 +0x131:  mov    %esi,%eax
081a2705 +0x133:  mov    %ebx,%edx
081a2707 +0x135:  jmp    081a2890 <+0x2be>
081a270c +0x13a:  lea    -0xd(%ebp),%eax
081a270f +0x13d:  mov    %eax,(%esp)
081a2712 +0x140:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081a2717 +0x145:  test   %bl,%bl
081a2719 +0x147:  je     081a2722 <+0x150>
081a271b +0x149:  mov    0x8(%ebp),%eax
081a271e +0x14c:  movb   $0x1,0x4(%eax)
081a2722 +0x150:  movl   $"item_reward",0x8(%esp)
081a272a +0x158:  mov    0xc(%ebp),%eax
081a272d +0x15b:  mov    %eax,0x4(%esp)
081a2731 +0x15f:  lea    -0x70(%ebp),%eax
081a2734 +0x162:  mov    %eax,(%esp)
081a2737 +0x165:  call   0817b950 <_ZN11Arad_Script4LoadEPKcS1_>  ; Arad_Script::Load(char const*, char const*)
081a273c +0x16a:  xor    $0x1,%eax
081a273f +0x16d:  test   %al,%al
081a2741 +0x16f:  je     081a274d <+0x17b>
081a2743 +0x171:  mov    $0xac,%ebx
081a2748 +0x176:  jmp    081a28a5 <+0x2d3>
081a274d +0x17b:  lea    -0x70(%ebp),%eax
081a2750 +0x17e:  mov    %eax,(%esp)
081a2753 +0x181:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a2758 +0x186:  test   %eax,%eax
081a275a +0x188:  sete   %al
081a275d +0x18b:  test   %al,%al
081a275f +0x18d:  je     081a276b <+0x199>
081a2761 +0x18f:  mov    $0xaf,%ebx
081a2766 +0x194:  jmp    081a28a5 <+0x2d3>
081a276b +0x199:  lea    -0x188(%ebp),%eax
081a2771 +0x19f:  mov    %eax,(%esp)
081a2774 +0x1a2:  call   081a40a0 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xfb>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xfb
081a2779 +0x1a7:  movl   $0x0,-0xc(%ebp)
081a2780 +0x1ae:  jmp    081a2870 <+0x29e>
081a2785 +0x1b3:  movl   $"fatigue",0x8(%esp)
081a278d +0x1bb:  mov    -0xc(%ebp),%eax
081a2790 +0x1be:  mov    %eax,0x4(%esp)
081a2794 +0x1c2:  lea    -0x70(%ebp),%eax
081a2797 +0x1c5:  mov    %eax,(%esp)
081a279a +0x1c8:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a279f +0x1cd:  mov    %ax,-0x188(%ebp)
081a27a6 +0x1d4:  movl   $"item_count",0x8(%esp)
081a27ae +0x1dc:  mov    -0xc(%ebp),%eax
081a27b1 +0x1df:  mov    %eax,0x4(%esp)
081a27b5 +0x1e3:  lea    -0x70(%ebp),%eax
081a27b8 +0x1e6:  mov    %eax,(%esp)
081a27bb +0x1e9:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a27c0 +0x1ee:  mov    %ax,-0x186(%ebp)
081a27c7 +0x1f5:  movl   $"item_id",0x8(%esp)
081a27cf +0x1fd:  mov    -0xc(%ebp),%eax
081a27d2 +0x200:  mov    %eax,0x4(%esp)
081a27d6 +0x204:  lea    -0x70(%ebp),%eax
081a27d9 +0x207:  mov    %eax,(%esp)
081a27dc +0x20a:  call   0817c780 <_ZN11Arad_Script6GetIntEiPc>  ; Arad_Script::GetInt(int, char*)
081a27e1 +0x20f:  mov    %eax,-0x74(%ebp)
081a27e4 +0x212:  movl   $"message",0x8(%esp)
081a27ec +0x21a:  mov    -0xc(%ebp),%eax
081a27ef +0x21d:  mov    %eax,0x4(%esp)
081a27f3 +0x221:  lea    -0x70(%ebp),%eax
081a27f6 +0x224:  mov    %eax,(%esp)
081a27f9 +0x227:  call   0817c6a6 <_ZN11Arad_Script9GetStringEiPc>  ; Arad_Script::GetString(int, char*)
081a27fe +0x22c:  movl   $0xff,0x8(%esp)
081a2806 +0x234:  mov    %eax,0x4(%esp)
081a280a +0x238:  lea    -0x188(%ebp),%eax
081a2810 +0x23e:  add    $0x4,%eax
081a2813 +0x241:  mov    %eax,(%esp)
081a2816 +0x244:  call   0807d8d0 <_init+0x1c8>
081a281b +0x249:  movl   $"title",0x8(%esp)
081a2823 +0x251:  mov    -0xc(%ebp),%eax
081a2826 +0x254:  mov    %eax,0x4(%esp)
081a282a +0x258:  lea    -0x70(%ebp),%eax
081a282d +0x25b:  mov    %eax,(%esp)
081a2830 +0x25e:  call   0817c6a6 <_ZN11Arad_Script9GetStringEiPc>  ; Arad_Script::GetString(int, char*)
081a2835 +0x263:  movl   $0x10,0x8(%esp)
081a283d +0x26b:  mov    %eax,0x4(%esp)
081a2841 +0x26f:  lea    -0x188(%ebp),%eax
081a2847 +0x275:  add    $0x103,%eax
081a284c +0x27a:  mov    %eax,(%esp)
081a284f +0x27d:  call   0807d8d0 <_init+0x1c8>
081a2854 +0x282:  mov    0x8(%ebp),%eax
081a2857 +0x285:  lea    0x8(%eax),%edx
081a285a +0x288:  lea    -0x188(%ebp),%eax
081a2860 +0x28e:  mov    %eax,0x4(%esp)
081a2864 +0x292:  mov    %edx,(%esp)
081a2867 +0x295:  call   081a4530 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x58b>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x58b
081a286c +0x29a:  addl   $0x1,-0xc(%ebp)
081a2870 +0x29e:  lea    -0x70(%ebp),%eax
081a2873 +0x2a1:  mov    %eax,(%esp)
081a2876 +0x2a4:  call   081a427c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2d7>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2d7
081a287b +0x2a9:  cmp    -0xc(%ebp),%eax
081a287e +0x2ac:  setg   %al
081a2881 +0x2af:  test   %al,%al
081a2883 +0x2b1:  jne    081a2785 <+0x1b3>
081a2889 +0x2b7:  mov    $0x0,%ebx
081a288e +0x2bc:  jmp    081a28a5 <+0x2d3>
081a2890 +0x2be:  mov    %edx,%ebx
081a2892 +0x2c0:  mov    %eax,%esi
081a2894 +0x2c2:  lea    -0x1c(%ebp),%eax
081a2897 +0x2c5:  mov    %eax,(%esp)
081a289a +0x2c8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081a289f +0x2cd:  mov    %esi,%eax
081a28a1 +0x2cf:  mov    %ebx,%edx
081a28a3 +0x2d1:  jmp    081a28b2 <+0x2e0>
081a28a5 +0x2d3:  lea    -0x1c(%ebp),%eax
081a28a8 +0x2d6:  mov    %eax,(%esp)
081a28ab +0x2d9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081a28b0 +0x2de:  jmp    081a28cd <+0x2fb>
081a28b2 +0x2e0:  mov    %edx,%ebx
081a28b4 +0x2e2:  mov    %eax,%esi
081a28b6 +0x2e4:  lea    -0x70(%ebp),%eax
081a28b9 +0x2e7:  mov    %eax,(%esp)
081a28bc +0x2ea:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a28c1 +0x2ef:  mov    %esi,%eax
081a28c3 +0x2f1:  mov    %ebx,%edx
081a28c5 +0x2f3:  mov    %eax,(%esp)
081a28c8 +0x2f6:  call   08ae3750 <_Unwind_Resume>
081a28cd +0x2fb:  lea    -0x70(%ebp),%eax
081a28d0 +0x2fe:  mov    %eax,(%esp)
081a28d3 +0x301:  call   0817b624 <_ZN11Arad_ScriptD1Ev>  ; Arad_Script::~Arad_Script()
081a28d8 +0x306:  mov    %ebx,%eax
081a28da +0x308:  add    $0x190,%esp
081a28e0 +0x30e:  pop    %ebx
081a28e1 +0x30f:  pop    %esi
081a28e2 +0x310:  pop    %ebp
081a28e3 +0x311:  ret
```

## 反编译 C

```c
// UsedFatigueRewardItem::parsing @ 0x81a25d2

/* UsedFatigueRewardItem::parsing(char*) */

undefined4 __thiscall UsedFatigueRewardItem::parsing(UsedFatigueRewardItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 local_18c;
  undefined2 local_18a;
  char acStack_188 [255];
  char acStack_89 [17];
  undefined4 local_78;
  Arad_Script local_74 [84];
  string local_20;
  allocator<char> local_19;
  string local_18;
  allocator<char> local_11;
  int local_10;
  
  Arad_Script::Arad_Script(local_74);
                    /* try { // try from 081a25fd to 081a2601 has its CatchHandler @ 081a28b2 */
  cVar1 = Arad_Script::Load(local_74,param_1,"on_off");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_74);
    if (iVar2 == 0) {
      uVar4 = 0xa4;
    }
    else {
      this[4] = (UsedFatigueRewardItem)0x0;
      std::allocator<char>::allocator();
                    /* try { // try from 081a2659 to 081a2673 has its CatchHandler @ 081a2676 */
      pcVar3 = (char *)Arad_Script::GetString(local_74,0,"flag");
      std::string::string((string *)&local_20,pcVar3,(allocator *)&local_19);
      std::allocator<char>::~allocator(&local_19);
      std::allocator<char>::allocator();
                    /* try { // try from 081a26b9 to 081a26bd has its CatchHandler @ 081a26f4 */
      std::string::string((string *)&local_18,"true",(allocator *)&local_11);
                    /* try { // try from 081a26cb to 081a26cf has its CatchHandler @ 081a26df */
      cVar1 = std::operator==(&local_20,&local_18);
                    /* try { // try from 081a26d8 to 081a26dc has its CatchHandler @ 081a26f4 */
      std::string::~string((string *)&local_18);
      std::allocator<char>::~allocator(&local_11);
      if (cVar1 != '\0') {
        this[4] = (UsedFatigueRewardItem)0x1;
      }
                    /* try { // try from 081a2737 to 081a286b has its CatchHandler @ 081a2890 */
      cVar1 = Arad_Script::Load(local_74,param_1,"item_reward");
      if (cVar1 == '\x01') {
        iVar2 = Arad_Script::GetRowNum(local_74);
        if (iVar2 == 0) {
          uVar4 = 0xaf;
        }
        else {
          Data::Data((Data *)&local_18c);
          local_10 = 0;
          while( true ) {
            iVar2 = Arad_Script::GetRowNum(local_74);
            if (iVar2 <= local_10) break;
            local_18c = Arad_Script::GetInt(local_74,local_10,"fatigue");
            local_18a = Arad_Script::GetInt(local_74,local_10,"item_count");
            local_78 = Arad_Script::GetInt(local_74,local_10,"item_id");
            pcVar3 = (char *)Arad_Script::GetString(local_74,local_10,"message");
            strncpy(acStack_188,pcVar3,0xff);
            pcVar3 = (char *)Arad_Script::GetString(local_74,local_10,"title");
            strncpy(acStack_89,pcVar3,0x10);
            std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>::
            push_back((vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>
                       *)(this + 8),(Data *)&local_18c);
            local_10 = local_10 + 1;
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0xac;
      }
                    /* try { // try from 081a28ab to 081a28af has its CatchHandler @ 081a28b2 */
      std::string::~string((string *)&local_20);
    }
  }
  else {
    uVar4 = 0xa1;
  }
  Arad_Script::~Arad_Script(local_74);
  return uVar4;
}
```
