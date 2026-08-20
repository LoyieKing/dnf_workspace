# getSeparatedTextUnits

`_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i`

`CUserCharacInfo::getSeparatedTextUnits(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, char const*, char const*, int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864607e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864607e  _ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i
#           CUserCharacInfo::getSeparatedTextUnits(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, char const*, char const*, int)
# range [0x0864607e, 0x0864628d]
0864607e +0x000:  push   %ebp
0864607f +0x001:  mov    %esp,%ebp
08646081 +0x003:  push   %edi
08646082 +0x004:  push   %esi
08646083 +0x005:  push   %ebx
08646084 +0x006:  sub    $0x13c,%esp
0864608a +0x00c:  mov    0xc(%ebp),%eax
0864608d +0x00f:  mov    %eax,(%esp)
08646090 +0x012:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
08646095 +0x017:  lea    -0x134(%ebp),%ebx
0864609b +0x01d:  mov    $0x0,%eax
086460a0 +0x022:  mov    $0x40,%edx
086460a5 +0x027:  mov    %ebx,%edi
086460a7 +0x029:  mov    %edx,%ecx
086460a9 +0x02b:  rep stos %eax,%es:(%edi)
086460ab +0x02d:  movl   $0x6,-0x24(%ebp)
086460b2 +0x034:  cmpl   $0x0,0x18(%ebp)
086460b6 +0x038:  je     086460d4 <+0x56>
086460b8 +0x03a:  mov    0xc(%ebp),%eax
086460bb +0x03d:  mov    %eax,(%esp)
086460be +0x040:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
086460c3 +0x045:  mov    0x18(%ebp),%edx
086460c6 +0x048:  sub    $0x1,%edx
086460c9 +0x04b:  cmp    %edx,%eax
086460cb +0x04d:  jl     086460d4 <+0x56>
086460cd +0x04f:  mov    $0x1,%eax
086460d2 +0x054:  jmp    086460d9 <+0x5b>
086460d4 +0x056:  mov    $0x0,%eax
086460d9 +0x05b:  test   %al,%al
086460db +0x05d:  jne    086461eb <+0x16d>
086460e1 +0x063:  mov    -0x24(%ebp),%eax
086460e4 +0x066:  add    0x10(%ebp),%eax
086460e7 +0x069:  mov    0x14(%ebp),%edx
086460ea +0x06c:  mov    %edx,0x4(%esp)
086460ee +0x070:  mov    %eax,(%esp)
086460f1 +0x073:  call   0807dac0 <_init+0x3b8>
086460f6 +0x078:  mov    %eax,-0x20(%ebp)
086460f9 +0x07b:  cmpl   $0x0,-0x20(%ebp)
086460fd +0x07f:  je     086461ee <+0x170>
08646103 +0x085:  mov    -0x20(%ebp),%edx
08646106 +0x088:  mov    -0x24(%ebp),%eax
08646109 +0x08b:  add    0x10(%ebp),%eax
0864610c +0x08e:  mov    %edx,%ecx
0864610e +0x090:  sub    %eax,%ecx
08646110 +0x092:  mov    %ecx,%eax
08646112 +0x094:  mov    %eax,-0x1c(%ebp)
08646115 +0x097:  cmpl   $0x0,-0x1c(%ebp)
08646119 +0x09b:  je     086461cc <+0x14e>
0864611f +0x0a1:  mov    -0x1c(%ebp),%edx
08646122 +0x0a4:  mov    -0x24(%ebp),%eax
08646125 +0x0a7:  add    0x10(%ebp),%eax
08646128 +0x0aa:  mov    %edx,0x8(%esp)
0864612c +0x0ae:  mov    %eax,0x4(%esp)
08646130 +0x0b2:  lea    -0x134(%ebp),%eax
08646136 +0x0b8:  mov    %eax,(%esp)
08646139 +0x0bb:  call   0807d8d0 <_init+0x1c8>
0864613e +0x0c0:  mov    -0x1c(%ebp),%eax
08646141 +0x0c3:  movb   $0x0,-0x134(%ebp,%eax,1)
08646149 +0x0cb:  lea    -0x2d(%ebp),%eax
0864614c +0x0ce:  mov    %eax,(%esp)
0864614f +0x0d1:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08646154 +0x0d6:  lea    -0x2d(%ebp),%eax
08646157 +0x0d9:  mov    %eax,0x8(%esp)
0864615b +0x0dd:  lea    -0x134(%ebp),%eax
08646161 +0x0e3:  mov    %eax,0x4(%esp)
08646165 +0x0e7:  lea    -0x34(%ebp),%eax
08646168 +0x0ea:  mov    %eax,(%esp)
0864616b +0x0ed:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08646170 +0x0f2:  lea    -0x34(%ebp),%eax
08646173 +0x0f5:  mov    %eax,0x4(%esp)
08646177 +0x0f9:  mov    0xc(%ebp),%eax
0864617a +0x0fc:  mov    %eax,(%esp)
0864617d +0x0ff:  call   08237aac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd156>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd156
08646182 +0x104:  jmp    08646199 <+0x11b>
08646184 +0x106:  mov    %edx,%ebx
08646186 +0x108:  mov    %eax,%esi
08646188 +0x10a:  lea    -0x34(%ebp),%eax
0864618b +0x10d:  mov    %eax,(%esp)
0864618e +0x110:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08646193 +0x115:  mov    %esi,%eax
08646195 +0x117:  mov    %ebx,%edx
08646197 +0x119:  jmp    086461a6 <+0x128>
08646199 +0x11b:  lea    -0x34(%ebp),%eax
0864619c +0x11e:  mov    %eax,(%esp)
0864619f +0x121:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086461a4 +0x126:  jmp    086461c1 <+0x143>
086461a6 +0x128:  mov    %edx,%ebx
086461a8 +0x12a:  mov    %eax,%esi
086461aa +0x12c:  lea    -0x2d(%ebp),%eax
086461ad +0x12f:  mov    %eax,(%esp)
086461b0 +0x132:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086461b5 +0x137:  mov    %esi,%eax
086461b7 +0x139:  mov    %ebx,%edx
086461b9 +0x13b:  mov    %eax,(%esp)
086461bc +0x13e:  call   08ae3750 <_Unwind_Resume>
086461c1 +0x143:  lea    -0x2d(%ebp),%eax
086461c4 +0x146:  mov    %eax,(%esp)
086461c7 +0x149:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086461cc +0x14e:  mov    0x14(%ebp),%eax
086461cf +0x151:  mov    %eax,(%esp)
086461d2 +0x154:  call   0807e3b0 <_init+0xca8>
086461d7 +0x159:  mov    -0x1c(%ebp),%edx
086461da +0x15c:  lea    (%eax,%edx,1),%edx
086461dd +0x15f:  mov    -0x24(%ebp),%eax
086461e0 +0x162:  lea    (%edx,%eax,1),%eax
086461e3 +0x165:  mov    %eax,-0x24(%ebp)
086461e6 +0x168:  jmp    086460b2 <+0x34>
086461eb +0x16d:  nop
086461ec +0x16e:  jmp    086461ef <+0x171>
086461ee +0x170:  nop
086461ef +0x171:  mov    -0x24(%ebp),%eax
086461f2 +0x174:  add    0x10(%ebp),%eax
086461f5 +0x177:  movzbl (%eax),%eax
086461f8 +0x17a:  test   %al,%al
086461fa +0x17c:  je     08646283 <+0x205>
08646200 +0x182:  lea    -0x25(%ebp),%eax
08646203 +0x185:  mov    %eax,(%esp)
08646206 +0x188:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0864620b +0x18d:  mov    -0x24(%ebp),%eax
0864620e +0x190:  add    0x10(%ebp),%eax
08646211 +0x193:  lea    -0x25(%ebp),%edx
08646214 +0x196:  mov    %edx,0x8(%esp)
08646218 +0x19a:  mov    %eax,0x4(%esp)
0864621c +0x19e:  lea    -0x2c(%ebp),%eax
0864621f +0x1a1:  mov    %eax,(%esp)
08646222 +0x1a4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08646227 +0x1a9:  lea    -0x2c(%ebp),%eax
0864622a +0x1ac:  mov    %eax,0x4(%esp)
0864622e +0x1b0:  mov    0xc(%ebp),%eax
08646231 +0x1b3:  mov    %eax,(%esp)
08646234 +0x1b6:  call   08237aac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd156>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd156
08646239 +0x1bb:  jmp    08646250 <+0x1d2>
0864623b +0x1bd:  mov    %edx,%ebx
0864623d +0x1bf:  mov    %eax,%esi
0864623f +0x1c1:  lea    -0x2c(%ebp),%eax
08646242 +0x1c4:  mov    %eax,(%esp)
08646245 +0x1c7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864624a +0x1cc:  mov    %esi,%eax
0864624c +0x1ce:  mov    %ebx,%edx
0864624e +0x1d0:  jmp    0864625d <+0x1df>
08646250 +0x1d2:  lea    -0x2c(%ebp),%eax
08646253 +0x1d5:  mov    %eax,(%esp)
08646256 +0x1d8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864625b +0x1dd:  jmp    08646278 <+0x1fa>
0864625d +0x1df:  mov    %edx,%ebx
0864625f +0x1e1:  mov    %eax,%esi
08646261 +0x1e3:  lea    -0x25(%ebp),%eax
08646264 +0x1e6:  mov    %eax,(%esp)
08646267 +0x1e9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0864626c +0x1ee:  mov    %esi,%eax
0864626e +0x1f0:  mov    %ebx,%edx
08646270 +0x1f2:  mov    %eax,(%esp)
08646273 +0x1f5:  call   08ae3750 <_Unwind_Resume>
08646278 +0x1fa:  lea    -0x25(%ebp),%eax
0864627b +0x1fd:  mov    %eax,(%esp)
0864627e +0x200:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08646283 +0x205:  add    $0x13c,%esp
08646289 +0x20b:  pop    %ebx
0864628a +0x20c:  pop    %esi
0864628b +0x20d:  pop    %edi
0864628c +0x20e:  pop    %ebp
0864628d +0x20f:  ret
```

## 反编译 C

```c
// CUserCharacInfo::getSeparatedTextUnits @ 0x864607e

/* CUserCharacInfo::getSeparatedTextUnits(std::vector<std::string, std::allocator<std::string > >&,
   char const*, char const*, int) */

void __thiscall
CUserCharacInfo::getSeparatedTextUnits
          (CUserCharacInfo *this,vector *param_1,char *param_2,char *param_3,int param_4)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_138 [256];
  string local_38;
  allocator<char> local_31;
  string local_30;
  allocator<char> local_29;
  int local_28;
  char *local_24;
  size_t local_20;
  
  bVar5 = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_1);
  pcVar4 = local_138;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  local_28 = 6;
  while( true ) {
    if ((param_4 == 0) ||
       (iVar3 = std::vector<std::string,std::allocator<std::string>>::size
                          ((vector<std::string,std::allocator<std::string>> *)param_1),
       iVar3 < param_4 + -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) || (local_24 = strstr(param_2 + local_28,param_3), local_24 == (char *)0x0)) break;
    local_20 = (int)local_24 - (int)(param_2 + local_28);
    if (local_20 != 0) {
      strncpy(local_138,param_2 + local_28,local_20);
      local_138[local_20] = '\0';
      std::allocator<char>::allocator();
                    /* try { // try from 0864616b to 0864616f has its CatchHandler @ 086461a6 */
      std::string::string((string *)&local_38,local_138,(allocator *)&local_31);
                    /* try { // try from 0864617d to 08646181 has its CatchHandler @ 08646184 */
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,&local_38);
                    /* try { // try from 0864619f to 086461a3 has its CatchHandler @ 086461a6 */
      std::string::~string((string *)&local_38);
      std::allocator<char>::~allocator(&local_31);
    }
    sVar2 = strlen(param_3);
    local_28 = sVar2 + local_20 + local_28;
  }
  if (param_2[local_28] != '\0') {
    std::allocator<char>::allocator();
                    /* try { // try from 08646222 to 08646226 has its CatchHandler @ 0864625d */
    std::string::string((string *)&local_30,param_2 + local_28,(allocator *)&local_29);
                    /* try { // try from 08646234 to 08646238 has its CatchHandler @ 0864623b */
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_1,&local_30);
                    /* try { // try from 08646256 to 0864625a has its CatchHandler @ 0864625d */
    std::string::~string((string *)&local_30);
    std::allocator<char>::~allocator(&local_29);
  }
  return;
}
```
