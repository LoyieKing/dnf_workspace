# makeGuildLevelUpMessage

`_ZN5CUser23makeGuildLevelUpMessageEi`

`CUser::makeGuildLevelUpMessage(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08679754` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08679754  _ZN5CUser23makeGuildLevelUpMessageEi
#           CUser::makeGuildLevelUpMessage(int)
# range [0x08679754, 0x08679a35]
08679754 +0x000:  push   %ebp
08679755 +0x001:  mov    %esp,%ebp
08679757 +0x003:  push   %edi
08679758 +0x004:  push   %esi
08679759 +0x005:  push   %ebx
0867975a +0x006:  sub    $0x1bc,%esp
08679760 +0x00c:  mov    0xc(%ebp),%ecx
08679763 +0x00f:  mov    $0x66666667,%edx
08679768 +0x014:  mov    %ecx,%eax
0867976a +0x016:  imul   %edx
0867976c +0x018:  sar    $0x2,%edx
0867976f +0x01b:  mov    %ecx,%eax
08679771 +0x01d:  sar    $0x1f,%eax
08679774 +0x020:  sub    %eax,%edx
08679776 +0x022:  mov    %edx,%eax
08679778 +0x024:  shl    $0x2,%eax
0867977b +0x027:  add    %edx,%eax
0867977d +0x029:  add    %eax,%eax
0867977f +0x02b:  mov    %ecx,%edx
08679781 +0x02d:  sub    %eax,%edx
08679783 +0x02f:  test   %edx,%edx
08679785 +0x031:  jne    08679a2b <+0x2d7>
0867978b +0x037:  lea    -0xa0(%ebp),%ebx
08679791 +0x03d:  mov    $0x0,%eax
08679796 +0x042:  mov    $0x1e,%edx
0867979b +0x047:  mov    %ebx,%edi
0867979d +0x049:  mov    %edx,%ecx
0867979f +0x04b:  rep stos %eax,%es:(%edi)
086797a1 +0x04d:  lea    -0x19(%ebp),%eax
086797a4 +0x050:  mov    %eax,(%esp)
086797a7 +0x053:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086797ac +0x058:  mov    0x8(%ebp),%eax
086797af +0x05b:  mov    %eax,(%esp)
086797b2 +0x05e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086797b7 +0x063:  lea    -0x19(%ebp),%edx
086797ba +0x066:  mov    %edx,0x8(%esp)
086797be +0x06a:  mov    %eax,0x4(%esp)
086797c2 +0x06e:  lea    -0x20(%ebp),%eax
086797c5 +0x071:  mov    %eax,(%esp)
086797c8 +0x074:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086797cd +0x079:  jmp    086797ea <+0x96>
086797cf +0x07b:  mov    %edx,%ebx
086797d1 +0x07d:  mov    %eax,%esi
086797d3 +0x07f:  lea    -0x19(%ebp),%eax
086797d6 +0x082:  mov    %eax,(%esp)
086797d9 +0x085:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086797de +0x08a:  mov    %esi,%eax
086797e0 +0x08c:  mov    %ebx,%edx
086797e2 +0x08e:  mov    %eax,(%esp)
086797e5 +0x091:  call   08ae3750 <_Unwind_Resume>
086797ea +0x096:  lea    -0x19(%ebp),%eax
086797ed +0x099:  mov    %eax,(%esp)
086797f0 +0x09c:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086797f5 +0x0a1:  lea    -0x24(%ebp),%eax
086797f8 +0x0a4:  movl   $0x0,0xc(%esp)
08679800 +0x0ac:  movl   $0x3e8,0x8(%esp)
08679808 +0x0b4:  movl   $&g_ServerString_,0x4(%esp)
08679810 +0x0bc:  mov    %eax,(%esp)
08679813 +0x0bf:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
08679818 +0x0c4:  sub    $0x4,%esp
0867981b +0x0c7:  lea    -0x28(%ebp),%eax
0867981e +0x0ca:  movl   $0x0,0xc(%esp)
08679826 +0x0d2:  movl   $0x3e9,0x8(%esp)
0867982e +0x0da:  movl   $&g_ServerString_,0x4(%esp)
08679836 +0x0e2:  mov    %eax,(%esp)
08679839 +0x0e5:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
0867983e +0x0ea:  sub    $0x4,%esp
08679841 +0x0ed:  lea    -0x19f(%ebp),%edx
08679847 +0x0f3:  mov    $0xff,%ebx
0867984c +0x0f8:  mov    $0x0,%eax
08679851 +0x0fd:  mov    %edx,%ecx
08679853 +0x0ff:  and    $0x1,%ecx
08679856 +0x102:  test   %ecx,%ecx
08679858 +0x104:  je     08679862 <+0x10e>
0867985a +0x106:  mov    %al,(%edx)
0867985c +0x108:  add    $0x1,%edx
0867985f +0x10b:  sub    $0x1,%ebx
08679862 +0x10e:  mov    %edx,%ecx
08679864 +0x110:  and    $0x2,%ecx
08679867 +0x113:  test   %ecx,%ecx
08679869 +0x115:  je     08679874 <+0x120>
0867986b +0x117:  mov    %ax,(%edx)
0867986e +0x11a:  add    $0x2,%edx
08679871 +0x11d:  sub    $0x2,%ebx
08679874 +0x120:  mov    %ebx,%ecx
08679876 +0x122:  shr    $0x2,%ecx
08679879 +0x125:  mov    %edx,%edi
0867987b +0x127:  rep stos %eax,%es:(%edi)
0867987d +0x129:  mov    %edi,%edx
0867987f +0x12b:  mov    %ebx,%ecx
08679881 +0x12d:  and    $0x2,%ecx
08679884 +0x130:  test   %ecx,%ecx
08679886 +0x132:  je     0867988e <+0x13a>
08679888 +0x134:  mov    %ax,(%edx)
0867988b +0x137:  add    $0x2,%edx
0867988e +0x13a:  mov    %ebx,%ecx
08679890 +0x13c:  and    $0x1,%ecx
08679893 +0x13f:  test   %ecx,%ecx
08679895 +0x141:  je     0867989c <+0x148>
08679897 +0x143:  mov    %al,(%edx)
08679899 +0x145:  add    $0x1,%edx
0867989c +0x148:  mov    0xc(%ebp),%eax
0867989f +0x14b:  mov    %eax,0x8(%esp)
086798a3 +0x14f:  movl   $"%d",0x4(%esp)
086798ab +0x157:  lea    -0x19f(%ebp),%eax
086798b1 +0x15d:  mov    %eax,(%esp)
086798b4 +0x160:  call   0807e440 <_init+0xd38>
086798b9 +0x165:  lea    -0x19f(%ebp),%eax
086798bf +0x16b:  mov    %eax,0x4(%esp)
086798c3 +0x16f:  lea    -0x24(%ebp),%eax
086798c6 +0x172:  mov    %eax,(%esp)
086798c9 +0x175:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
086798ce +0x17a:  lea    -0x28(%ebp),%eax
086798d1 +0x17d:  mov    %eax,0x4(%esp)
086798d5 +0x181:  lea    -0x24(%ebp),%eax
086798d8 +0x184:  mov    %eax,(%esp)
086798db +0x187:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
086798e0 +0x18c:  lea    -0x24(%ebp),%eax
086798e3 +0x18f:  mov    %eax,0x4(%esp)
086798e7 +0x193:  lea    -0x20(%ebp),%eax
086798ea +0x196:  mov    %eax,(%esp)
086798ed +0x199:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
086798f2 +0x19e:  lea    -0x20(%ebp),%eax
086798f5 +0x1a1:  mov    %eax,(%esp)
086798f8 +0x1a4:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
086798fd +0x1a9:  cmp    $0x77,%eax
08679900 +0x1ac:  seta   %al
08679903 +0x1af:  test   %al,%al
08679905 +0x1b1:  je     08679911 <+0x1bd>
08679907 +0x1b3:  mov    $0x0,%ebx
0867990c +0x1b8:  jmp    086799c4 <+0x270>
08679911 +0x1bd:  lea    -0x20(%ebp),%eax
08679914 +0x1c0:  mov    %eax,(%esp)
08679917 +0x1c3:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0867991c +0x1c8:  mov    %eax,%ebx
0867991e +0x1ca:  lea    -0x20(%ebp),%eax
08679921 +0x1cd:  mov    %eax,(%esp)
08679924 +0x1d0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08679929 +0x1d5:  mov    %ebx,0x8(%esp)
0867992d +0x1d9:  mov    %eax,0x4(%esp)
08679931 +0x1dd:  lea    -0xa0(%ebp),%eax
08679937 +0x1e3:  mov    %eax,(%esp)
0867993a +0x1e6:  call   0807d8a0 <_init+0x198>
0867993f +0x1eb:  mov    0x8(%ebp),%eax
08679942 +0x1ee:  mov    %eax,(%esp)
08679945 +0x1f1:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0867994a +0x1f6:  mov    %eax,%esi
0867994c +0x1f8:  mov    0x8(%ebp),%eax
0867994f +0x1fb:  mov    %eax,(%esp)
08679952 +0x1fe:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08679957 +0x203:  mov    %eax,%ebx
08679959 +0x205:  mov    0x8(%ebp),%eax
0867995c +0x208:  mov    %eax,(%esp)
0867995f +0x20b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08679964 +0x210:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0867996a +0x216:  mov    %eax,0x4(%esp)
0867996e +0x21a:  mov    %edx,(%esp)
08679971 +0x21d:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08679976 +0x222:  mov    %esi,0x18(%esp)
0867997a +0x226:  movl   $0xffffffff,0x14(%esp)
08679982 +0x22e:  movl   $0xffffffff,0x10(%esp)
0867998a +0x236:  mov    %ebx,0xc(%esp)
0867998e +0x23a:  movl   $0x0,0x8(%esp)
08679996 +0x242:  lea    -0xa0(%ebp),%edx
0867999c +0x248:  mov    %edx,0x4(%esp)
086799a0 +0x24c:  mov    %eax,(%esp)
086799a3 +0x24f:  call   0846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>  ; CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
086799a8 +0x254:  mov    $0x1,%ebx
086799ad +0x259:  jmp    086799c4 <+0x270>
086799af +0x25b:  mov    %edx,%ebx
086799b1 +0x25d:  mov    %eax,%esi
086799b3 +0x25f:  lea    -0x28(%ebp),%eax
086799b6 +0x262:  mov    %eax,(%esp)
086799b9 +0x265:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086799be +0x26a:  mov    %esi,%eax
086799c0 +0x26c:  mov    %ebx,%edx
086799c2 +0x26e:  jmp    086799e1 <+0x28d>
086799c4 +0x270:  lea    -0x28(%ebp),%eax
086799c7 +0x273:  mov    %eax,(%esp)
086799ca +0x276:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086799cf +0x27b:  test   %ebx,%ebx
086799d1 +0x27d:  jne    086799da <+0x286>
086799d3 +0x27f:  mov    $0x0,%ebx
086799d8 +0x284:  jmp    086799f6 <+0x2a2>
086799da +0x286:  mov    $0x1,%ebx
086799df +0x28b:  jmp    086799f6 <+0x2a2>
086799e1 +0x28d:  mov    %edx,%ebx
086799e3 +0x28f:  mov    %eax,%esi
086799e5 +0x291:  lea    -0x24(%ebp),%eax
086799e8 +0x294:  mov    %eax,(%esp)
086799eb +0x297:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086799f0 +0x29c:  mov    %esi,%eax
086799f2 +0x29e:  mov    %ebx,%edx
086799f4 +0x2a0:  jmp    08679a10 <+0x2bc>
086799f6 +0x2a2:  lea    -0x24(%ebp),%eax
086799f9 +0x2a5:  mov    %eax,(%esp)
086799fc +0x2a8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679a01 +0x2ad:  test   %ebx,%ebx
08679a03 +0x2af:  lea    -0x20(%ebp),%eax
08679a06 +0x2b2:  mov    %eax,(%esp)
08679a09 +0x2b5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679a0e +0x2ba:  jmp    08679a2b <+0x2d7>
08679a10 +0x2bc:  mov    %edx,%ebx
08679a12 +0x2be:  mov    %eax,%esi
08679a14 +0x2c0:  lea    -0x20(%ebp),%eax
08679a17 +0x2c3:  mov    %eax,(%esp)
08679a1a +0x2c6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679a1f +0x2cb:  mov    %esi,%eax
08679a21 +0x2cd:  mov    %ebx,%edx
08679a23 +0x2cf:  mov    %eax,(%esp)
08679a26 +0x2d2:  call   08ae3750 <_Unwind_Resume>
08679a2b +0x2d7:  lea    -0xc(%ebp),%esp
08679a2e +0x2da:  add    $0x0,%esp
08679a31 +0x2dd:  pop    %ebx
08679a32 +0x2de:  pop    %esi
08679a33 +0x2df:  pop    %edi
08679a34 +0x2e0:  pop    %ebp
08679a35 +0x2e1:  ret
```

## 反编译 C

```c
// CUser::makeGuildLevelUpMessage @ 0x8679754

/* CUser::makeGuildLevelUpMessage(int) */

void __thiscall CUser::makeGuildLevelUpMessage(CUser *this,int param_1)

{
  char *pcVar1;
  size_t __n;
  void *__src;
  undefined4 uVar2;
  CGuildServerProxy *this_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_1a3;
  char local_1a2 [254];
  char local_a4 [120];
  string local_2c [4];
  string local_28 [4];
  string local_24 [7];
  allocator<char> local_1d [13];
  
  bVar7 = 0;
  if (param_1 % 10 == 0) {
    pcVar1 = local_a4;
    for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = pcVar1 + 4;
    }
    std::allocator<char>::allocator();
    pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
                    /* try { // try from 086797c8 to 086797cc has its CatchHandler @ 086797cf */
    std::string::string(local_24,pcVar1,(allocator *)local_1d);
    std::allocator<char>::~allocator(local_1d);
                    /* try { // try from 08679813 to 08679817 has its CatchHandler @ 08679a10 */
    np_server_xml::CServerXml::GetServerString((int)local_28,(bool *)g_ServerString_);
                    /* try { // try from 08679839 to 0867983d has its CatchHandler @ 086799e1 */
    np_server_xml::CServerXml::GetServerString((int)local_2c,(bool *)g_ServerString_);
    pcVar1 = &local_1a3;
    uVar5 = 0xff;
    bVar6 = ((uint)pcVar1 & 1) != 0;
    if (bVar6) {
      local_1a3 = '\0';
      pcVar1 = local_1a2;
      uVar5 = 0xfe;
    }
    if (((uint)pcVar1 & 2) != 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1 = pcVar1 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = pcVar1 + ((uint)bVar7 * -2 + 1) * 4;
    }
    if ((uVar5 & 2) != 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1 = pcVar1 + 2;
    }
    if (!bVar6) {
      *pcVar1 = '\0';
    }
    sprintf(&local_1a3,"%d",param_1);
                    /* try { // try from 086798c9 to 086799a7 has its CatchHandler @ 086799af */
    std::string::operator+=(local_28,&local_1a3);
    std::string::operator+=(local_28,local_2c);
    std::string::operator+=(local_24,local_28);
    uVar5 = std::string::length(local_24);
    if (uVar5 < 0x78) {
      __n = std::string::length(local_24);
      __src = (void *)std::string::c_str(local_24);
      memcpy(local_a4,__src,__n);
      uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar2 = GetServerGroup(this);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar2);
      CGuildServerProxy::SendGuildBoardWrite(this_00,local_a4,0,uVar4,-1,-1,uVar5);
    }
                    /* try { // try from 086799ca to 086799ce has its CatchHandler @ 086799e1 */
    std::string::~string(local_2c);
                    /* try { // try from 086799fc to 08679a00 has its CatchHandler @ 08679a10 */
    std::string::~string(local_28);
    std::string::~string(local_24);
  }
  return;
}
```
