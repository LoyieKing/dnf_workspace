# makeGuildSkillMessage

`_ZN5CUser21makeGuildSkillMessageEPKci`

`CUser::makeGuildSkillMessage(char const*, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08679a36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08679a36  _ZN5CUser21makeGuildSkillMessageEPKci
#           CUser::makeGuildSkillMessage(char const*, int)
# range [0x08679a36, 0x08679ced]
08679a36 +0x000:  push   %ebp
08679a37 +0x001:  mov    %esp,%ebp
08679a39 +0x003:  push   %edi
08679a3a +0x004:  push   %esi
08679a3b +0x005:  push   %ebx
08679a3c +0x006:  sub    $0x1bc,%esp
08679a42 +0x00c:  cmpl   $0x0,0xc(%ebp)
08679a46 +0x010:  je     08679ce1 <+0x2ab>
08679a4c +0x016:  lea    -0xa0(%ebp),%ebx
08679a52 +0x01c:  mov    $0x0,%eax
08679a57 +0x021:  mov    $0x1e,%edx
08679a5c +0x026:  mov    %ebx,%edi
08679a5e +0x028:  mov    %edx,%ecx
08679a60 +0x02a:  rep stos %eax,%es:(%edi)
08679a62 +0x02c:  lea    -0x20(%ebp),%eax
08679a65 +0x02f:  movl   $0x0,0xc(%esp)
08679a6d +0x037:  movl   $0x3ea,0x8(%esp)
08679a75 +0x03f:  movl   $&g_ServerString_,0x4(%esp)
08679a7d +0x047:  mov    %eax,(%esp)
08679a80 +0x04a:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
08679a85 +0x04f:  sub    $0x4,%esp
08679a88 +0x052:  lea    -0x19f(%ebp),%edx
08679a8e +0x058:  mov    $0xff,%ebx
08679a93 +0x05d:  mov    $0x0,%eax
08679a98 +0x062:  mov    %edx,%ecx
08679a9a +0x064:  and    $0x1,%ecx
08679a9d +0x067:  test   %ecx,%ecx
08679a9f +0x069:  je     08679aa9 <+0x73>
08679aa1 +0x06b:  mov    %al,(%edx)
08679aa3 +0x06d:  add    $0x1,%edx
08679aa6 +0x070:  sub    $0x1,%ebx
08679aa9 +0x073:  mov    %edx,%ecx
08679aab +0x075:  and    $0x2,%ecx
08679aae +0x078:  test   %ecx,%ecx
08679ab0 +0x07a:  je     08679abb <+0x85>
08679ab2 +0x07c:  mov    %ax,(%edx)
08679ab5 +0x07f:  add    $0x2,%edx
08679ab8 +0x082:  sub    $0x2,%ebx
08679abb +0x085:  mov    %ebx,%ecx
08679abd +0x087:  shr    $0x2,%ecx
08679ac0 +0x08a:  mov    %edx,%edi
08679ac2 +0x08c:  rep stos %eax,%es:(%edi)
08679ac4 +0x08e:  mov    %edi,%edx
08679ac6 +0x090:  mov    %ebx,%ecx
08679ac8 +0x092:  and    $0x2,%ecx
08679acb +0x095:  test   %ecx,%ecx
08679acd +0x097:  je     08679ad5 <+0x9f>
08679acf +0x099:  mov    %ax,(%edx)
08679ad2 +0x09c:  add    $0x2,%edx
08679ad5 +0x09f:  mov    %ebx,%ecx
08679ad7 +0x0a1:  and    $0x1,%ecx
08679ada +0x0a4:  test   %ecx,%ecx
08679adc +0x0a6:  je     08679ae3 <+0xad>
08679ade +0x0a8:  mov    %al,(%edx)
08679ae0 +0x0aa:  add    $0x1,%edx
08679ae3 +0x0ad:  mov    0x10(%ebp),%eax
08679ae6 +0x0b0:  mov    %eax,0x8(%esp)
08679aea +0x0b4:  movl   $"%d ",0x4(%esp)
08679af2 +0x0bc:  lea    -0x19f(%ebp),%eax
08679af8 +0x0c2:  mov    %eax,(%esp)
08679afb +0x0c5:  call   0807e440 <_init+0xd38>
08679b00 +0x0ca:  lea    -0x19f(%ebp),%eax
08679b06 +0x0d0:  mov    %eax,0x4(%esp)
08679b0a +0x0d4:  lea    -0x20(%ebp),%eax
08679b0d +0x0d7:  mov    %eax,(%esp)
08679b10 +0x0da:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08679b15 +0x0df:  lea    -0x19(%ebp),%eax
08679b18 +0x0e2:  mov    %eax,(%esp)
08679b1b +0x0e5:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08679b20 +0x0ea:  lea    -0x19(%ebp),%eax
08679b23 +0x0ed:  mov    %eax,0x8(%esp)
08679b27 +0x0f1:  mov    0xc(%ebp),%eax
08679b2a +0x0f4:  mov    %eax,0x4(%esp)
08679b2e +0x0f8:  lea    -0x24(%ebp),%eax
08679b31 +0x0fb:  mov    %eax,(%esp)
08679b34 +0x0fe:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08679b39 +0x103:  jmp    08679b53 <+0x11d>
08679b3b +0x105:  mov    %edx,%ebx
08679b3d +0x107:  mov    %eax,%esi
08679b3f +0x109:  lea    -0x19(%ebp),%eax
08679b42 +0x10c:  mov    %eax,(%esp)
08679b45 +0x10f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08679b4a +0x114:  mov    %esi,%eax
08679b4c +0x116:  mov    %ebx,%edx
08679b4e +0x118:  jmp    08679cc6 <+0x290>
08679b53 +0x11d:  lea    -0x19(%ebp),%eax
08679b56 +0x120:  mov    %eax,(%esp)
08679b59 +0x123:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08679b5e +0x128:  lea    -0x28(%ebp),%eax
08679b61 +0x12b:  movl   $0x0,0xc(%esp)
08679b69 +0x133:  movl   $0x3eb,0x8(%esp)
08679b71 +0x13b:  movl   $&g_ServerString_,0x4(%esp)
08679b79 +0x143:  mov    %eax,(%esp)
08679b7c +0x146:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
08679b81 +0x14b:  sub    $0x4,%esp
08679b84 +0x14e:  lea    -0x28(%ebp),%eax
08679b87 +0x151:  mov    %eax,0x4(%esp)
08679b8b +0x155:  lea    -0x24(%ebp),%eax
08679b8e +0x158:  mov    %eax,(%esp)
08679b91 +0x15b:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08679b96 +0x160:  lea    -0x24(%ebp),%eax
08679b99 +0x163:  mov    %eax,0x4(%esp)
08679b9d +0x167:  lea    -0x20(%ebp),%eax
08679ba0 +0x16a:  mov    %eax,(%esp)
08679ba3 +0x16d:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08679ba8 +0x172:  lea    -0x20(%ebp),%eax
08679bab +0x175:  mov    %eax,(%esp)
08679bae +0x178:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08679bb3 +0x17d:  cmp    $0x77,%eax
08679bb6 +0x180:  seta   %al
08679bb9 +0x183:  test   %al,%al
08679bbb +0x185:  je     08679bc7 <+0x191>
08679bbd +0x187:  mov    $0x0,%ebx
08679bc2 +0x18c:  jmp    08679c7a <+0x244>
08679bc7 +0x191:  lea    -0x20(%ebp),%eax
08679bca +0x194:  mov    %eax,(%esp)
08679bcd +0x197:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08679bd2 +0x19c:  mov    %eax,%ebx
08679bd4 +0x19e:  lea    -0x20(%ebp),%eax
08679bd7 +0x1a1:  mov    %eax,(%esp)
08679bda +0x1a4:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08679bdf +0x1a9:  mov    %ebx,0x8(%esp)
08679be3 +0x1ad:  mov    %eax,0x4(%esp)
08679be7 +0x1b1:  lea    -0xa0(%ebp),%eax
08679bed +0x1b7:  mov    %eax,(%esp)
08679bf0 +0x1ba:  call   0807d8a0 <_init+0x198>
08679bf5 +0x1bf:  mov    0x8(%ebp),%eax
08679bf8 +0x1c2:  mov    %eax,(%esp)
08679bfb +0x1c5:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08679c00 +0x1ca:  mov    %eax,%esi
08679c02 +0x1cc:  mov    0x8(%ebp),%eax
08679c05 +0x1cf:  mov    %eax,(%esp)
08679c08 +0x1d2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08679c0d +0x1d7:  mov    %eax,%ebx
08679c0f +0x1d9:  mov    0x8(%ebp),%eax
08679c12 +0x1dc:  mov    %eax,(%esp)
08679c15 +0x1df:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08679c1a +0x1e4:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08679c20 +0x1ea:  mov    %eax,0x4(%esp)
08679c24 +0x1ee:  mov    %edx,(%esp)
08679c27 +0x1f1:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08679c2c +0x1f6:  mov    %esi,0x18(%esp)
08679c30 +0x1fa:  movl   $0xffffffff,0x14(%esp)
08679c38 +0x202:  movl   $0xffffffff,0x10(%esp)
08679c40 +0x20a:  mov    %ebx,0xc(%esp)
08679c44 +0x20e:  movl   $0x0,0x8(%esp)
08679c4c +0x216:  lea    -0xa0(%ebp),%edx
08679c52 +0x21c:  mov    %edx,0x4(%esp)
08679c56 +0x220:  mov    %eax,(%esp)
08679c59 +0x223:  call   0846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>  ; CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
08679c5e +0x228:  mov    $0x1,%ebx
08679c63 +0x22d:  jmp    08679c7a <+0x244>
08679c65 +0x22f:  mov    %edx,%ebx
08679c67 +0x231:  mov    %eax,%esi
08679c69 +0x233:  lea    -0x28(%ebp),%eax
08679c6c +0x236:  mov    %eax,(%esp)
08679c6f +0x239:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679c74 +0x23e:  mov    %esi,%eax
08679c76 +0x240:  mov    %ebx,%edx
08679c78 +0x242:  jmp    08679c97 <+0x261>
08679c7a +0x244:  lea    -0x28(%ebp),%eax
08679c7d +0x247:  mov    %eax,(%esp)
08679c80 +0x24a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679c85 +0x24f:  test   %ebx,%ebx
08679c87 +0x251:  jne    08679c90 <+0x25a>
08679c89 +0x253:  mov    $0x0,%ebx
08679c8e +0x258:  jmp    08679cac <+0x276>
08679c90 +0x25a:  mov    $0x1,%ebx
08679c95 +0x25f:  jmp    08679cac <+0x276>
08679c97 +0x261:  mov    %edx,%ebx
08679c99 +0x263:  mov    %eax,%esi
08679c9b +0x265:  lea    -0x24(%ebp),%eax
08679c9e +0x268:  mov    %eax,(%esp)
08679ca1 +0x26b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679ca6 +0x270:  mov    %esi,%eax
08679ca8 +0x272:  mov    %ebx,%edx
08679caa +0x274:  jmp    08679cc6 <+0x290>
08679cac +0x276:  lea    -0x24(%ebp),%eax
08679caf +0x279:  mov    %eax,(%esp)
08679cb2 +0x27c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679cb7 +0x281:  test   %ebx,%ebx
08679cb9 +0x283:  lea    -0x20(%ebp),%eax
08679cbc +0x286:  mov    %eax,(%esp)
08679cbf +0x289:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679cc4 +0x28e:  jmp    08679ce2 <+0x2ac>
08679cc6 +0x290:  mov    %edx,%ebx
08679cc8 +0x292:  mov    %eax,%esi
08679cca +0x294:  lea    -0x20(%ebp),%eax
08679ccd +0x297:  mov    %eax,(%esp)
08679cd0 +0x29a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08679cd5 +0x29f:  mov    %esi,%eax
08679cd7 +0x2a1:  mov    %ebx,%edx
08679cd9 +0x2a3:  mov    %eax,(%esp)
08679cdc +0x2a6:  call   08ae3750 <_Unwind_Resume>
08679ce1 +0x2ab:  nop
08679ce2 +0x2ac:  lea    -0xc(%ebp),%esp
08679ce5 +0x2af:  add    $0x0,%esp
08679ce8 +0x2b2:  pop    %ebx
08679ce9 +0x2b3:  pop    %esi
08679cea +0x2b4:  pop    %edi
08679ceb +0x2b5:  pop    %ebp
08679cec +0x2b6:  ret
08679ced +0x2b7:  nop
```

## 反编译 C

```c
// CUser::makeGuildSkillMessage @ 0x8679a36

/* CUser::makeGuildSkillMessage(char const*, int) */

void __thiscall CUser::makeGuildSkillMessage(CUser *this,char *param_1,int param_2)

{
  size_t __n;
  void *__src;
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  int iVar2;
  uint uVar3;
  char *pcVar4;
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
  if (param_1 != (char *)0x0) {
    pcVar4 = local_a4;
    for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + 4;
    }
    np_server_xml::CServerXml::GetServerString((int)local_24,(bool *)g_ServerString_);
    pcVar4 = &local_1a3;
    uVar5 = 0xff;
    bVar6 = ((uint)pcVar4 & 1) != 0;
    if (bVar6) {
      local_1a3 = '\0';
      pcVar4 = local_1a2;
      uVar5 = 0xfe;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    if ((uVar5 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar6) {
      *pcVar4 = '\0';
    }
    sprintf(&local_1a3,"%d ",param_2);
                    /* try { // try from 08679b10 to 08679b14 has its CatchHandler @ 08679cc6 */
    std::string::operator+=(local_24,&local_1a3);
    std::allocator<char>::allocator();
                    /* try { // try from 08679b34 to 08679b38 has its CatchHandler @ 08679b3b */
    std::string::string(local_28,param_1,(allocator *)local_1d);
    std::allocator<char>::~allocator(local_1d);
                    /* try { // try from 08679b7c to 08679b80 has its CatchHandler @ 08679c97 */
    np_server_xml::CServerXml::GetServerString((int)local_2c,(bool *)g_ServerString_);
                    /* try { // try from 08679b91 to 08679c5d has its CatchHandler @ 08679c65 */
    std::string::operator+=(local_28,local_2c);
    std::string::operator+=(local_24,local_28);
    uVar5 = std::string::length(local_24);
    if (uVar5 < 0x78) {
      __n = std::string::length(local_24);
      __src = (void *)std::string::c_str(local_24);
      memcpy(local_a4,__src,__n);
      uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      uVar1 = GetServerGroup(this);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendGuildBoardWrite(this_00,local_a4,0,uVar3,-1,-1,uVar5);
    }
                    /* try { // try from 08679c80 to 08679c84 has its CatchHandler @ 08679c97 */
    std::string::~string(local_2c);
                    /* try { // try from 08679cb2 to 08679cb6 has its CatchHandler @ 08679cc6 */
    std::string::~string(local_28);
    std::string::~string(local_24);
  }
  return;
}
```
