# SetChallengeInfo

`_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo`

`CLevelRewardTableMgr::SetChallengeInfo(stUnlimitChallengeInfo&)`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687828` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687828  _ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo
#           CLevelRewardTableMgr::SetChallengeInfo(stUnlimitChallengeInfo&)
# range [0x08687828, 0x08687d17]
08687828 +0x000:  push   %ebp
08687829 +0x001:  mov    %esp,%ebp
0868782b +0x003:  push   %edi
0868782c +0x004:  push   %esi
0868782d +0x005:  push   %ebx
0868782e +0x006:  sub    $0x8c,%esp
08687834 +0x00c:  mov    0xc(%ebp),%eax
08687837 +0x00f:  movzbl (%eax),%edx
0868783a +0x012:  mov    0x8(%ebp),%eax
0868783d +0x015:  mov    %dl,(%eax)
0868783f +0x017:  mov    0xc(%ebp),%eax
08687842 +0x01a:  lea    0x4(%eax),%edx
08687845 +0x01d:  mov    0x8(%ebp),%eax
08687848 +0x020:  add    $0x8,%eax
0868784b +0x023:  mov    %edx,0x4(%esp)
0868784f +0x027:  mov    %eax,(%esp)
08687852 +0x02a:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08687857 +0x02f:  mov    0x8(%ebp),%eax
0868785a +0x032:  mov    0x4(%eax),%eax
0868785d +0x035:  movl   $0x1,0x4(%esp)
08687865 +0x03d:  mov    %eax,(%esp)
08687868 +0x040:  call   08697766 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3fbb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3fbb
0868786d +0x045:  mov    0xc(%ebp),%eax
08687870 +0x048:  add    $0x10,%eax
08687873 +0x04b:  mov    %eax,(%esp)
08687876 +0x04e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0868787b +0x053:  mov    %eax,-0x3c(%ebp)
0868787e +0x056:  mov    0xc(%ebp),%eax
08687881 +0x059:  lea    0x10(%eax),%edx
08687884 +0x05c:  lea    -0x60(%ebp),%eax
08687887 +0x05f:  mov    %edx,0x4(%esp)
0868788b +0x063:  mov    %eax,(%esp)
0868788e +0x066:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08687893 +0x06b:  sub    $0x4,%esp
08687896 +0x06e:  lea    -0x60(%ebp),%eax
08687899 +0x071:  mov    %eax,0x4(%esp)
0868789d +0x075:  lea    -0x64(%ebp),%eax
086878a0 +0x078:  mov    %eax,(%esp)
086878a3 +0x07b:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
086878a8 +0x080:  mov    0xc(%ebp),%eax
086878ab +0x083:  lea    0x10(%eax),%edx
086878ae +0x086:  lea    -0x5c(%ebp),%eax
086878b1 +0x089:  mov    %edx,0x4(%esp)
086878b5 +0x08d:  mov    %eax,(%esp)
086878b8 +0x090:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
086878bd +0x095:  sub    $0x4,%esp
086878c0 +0x098:  lea    -0x5c(%ebp),%eax
086878c3 +0x09b:  mov    %eax,0x4(%esp)
086878c7 +0x09f:  lea    -0x68(%ebp),%eax
086878ca +0x0a2:  mov    %eax,(%esp)
086878cd +0x0a5:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
086878d2 +0x0aa:  movl   $0x0,-0x30(%ebp)
086878d9 +0x0b1:  jmp    08687915 <+0xed>
086878db +0x0b3:  mov    0x8(%ebp),%eax
086878de +0x0b6:  mov    0x4(%eax),%ebx
086878e1 +0x0b9:  mov    -0x30(%ebp),%esi
086878e4 +0x0bc:  lea    -0x64(%ebp),%eax
086878e7 +0x0bf:  mov    %eax,(%esp)
086878ea +0x0c2:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
086878ef +0x0c7:  mov    (%eax),%eax
086878f1 +0x0c9:  mov    %eax,(%ebx,%esi,4)
086878f4 +0x0cc:  addl   $0x1,-0x30(%ebp)
086878f8 +0x0d0:  lea    -0x58(%ebp),%eax
086878fb +0x0d3:  movl   $0x0,0x8(%esp)
08687903 +0x0db:  lea    -0x64(%ebp),%edx
08687906 +0x0de:  mov    %edx,0x4(%esp)
0868790a +0x0e2:  mov    %eax,(%esp)
0868790d +0x0e5:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08687912 +0x0ea:  sub    $0x4,%esp
08687915 +0x0ed:  mov    -0x30(%ebp),%eax
08687918 +0x0f0:  cmp    -0x3c(%ebp),%eax
0868791b +0x0f3:  jge    0868793a <+0x112>
0868791d +0x0f5:  lea    -0x68(%ebp),%eax
08687920 +0x0f8:  mov    %eax,0x4(%esp)
08687924 +0x0fc:  lea    -0x64(%ebp),%eax
08687927 +0x0ff:  mov    %eax,(%esp)
0868792a +0x102:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0868792f +0x107:  test   %al,%al
08687931 +0x109:  je     0868793a <+0x112>
08687933 +0x10b:  mov    $0x1,%eax
08687938 +0x110:  jmp    0868793f <+0x117>
0868793a +0x112:  mov    $0x0,%eax
0868793f +0x117:  test   %al,%al
08687941 +0x119:  jne    086878db <+0xb3>
08687943 +0x11b:  mov    0xc(%ebp),%eax
08687946 +0x11e:  add    $0x1c,%eax
08687949 +0x121:  mov    %eax,(%esp)
0868794c +0x124:  call   0869c1dc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8a31>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8a31
08687951 +0x129:  mov    %eax,-0x38(%ebp)
08687954 +0x12c:  mov    0xc(%ebp),%eax
08687957 +0x12f:  lea    0x1c(%eax),%edx
0868795a +0x132:  lea    -0x54(%ebp),%eax
0868795d +0x135:  mov    %edx,0x4(%esp)
08687961 +0x139:  mov    %eax,(%esp)
08687964 +0x13c:  call   0869c1fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8a53>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8a53
08687969 +0x141:  sub    $0x4,%esp
0868796c +0x144:  lea    -0x54(%ebp),%eax
0868796f +0x147:  mov    %eax,0x4(%esp)
08687973 +0x14b:  lea    -0x6c(%ebp),%eax
08687976 +0x14e:  mov    %eax,(%esp)
08687979 +0x151:  call   0869c222 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8a77>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8a77
0868797e +0x156:  mov    0xc(%ebp),%eax
08687981 +0x159:  lea    0x1c(%eax),%edx
08687984 +0x15c:  lea    -0x50(%ebp),%eax
08687987 +0x15f:  mov    %edx,0x4(%esp)
0868798b +0x163:  mov    %eax,(%esp)
0868798e +0x166:  call   0869c23c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8a91>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8a91
08687993 +0x16b:  sub    $0x4,%esp
08687996 +0x16e:  lea    -0x50(%ebp),%eax
08687999 +0x171:  mov    %eax,0x4(%esp)
0868799d +0x175:  lea    -0x70(%ebp),%eax
086879a0 +0x178:  mov    %eax,(%esp)
086879a3 +0x17b:  call   0869c222 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8a77>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8a77
086879a8 +0x180:  movl   $0x0,-0x2c(%ebp)
086879af +0x187:  jmp    08687aa2 <+0x27a>
086879b4 +0x18c:  lea    -0x6c(%ebp),%eax
086879b7 +0x18f:  mov    %eax,(%esp)
086879ba +0x192:  call   0869c2c2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b17>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b17
086879bf +0x197:  movzwl (%eax),%eax
086879c2 +0x19a:  movzwl %ax,%eax
086879c5 +0x19d:  mov    %eax,-0x28(%ebp)
086879c8 +0x1a0:  lea    -0x6c(%ebp),%eax
086879cb +0x1a3:  mov    %eax,(%esp)
086879ce +0x1a6:  call   0869c2c2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b17>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b17
086879d3 +0x1ab:  movzbl 0x2(%eax),%eax
086879d7 +0x1af:  movzbl %al,%eax
086879da +0x1b2:  mov    %eax,-0x24(%ebp)
086879dd +0x1b5:  mov    0x8(%ebp),%eax
086879e0 +0x1b8:  mov    0x4(%eax),%ebx
086879e3 +0x1bb:  mov    -0x24(%ebp),%eax
086879e6 +0x1be:  movsbl %al,%edx
086879e9 +0x1c1:  mov    0x8(%ebp),%eax
086879ec +0x1c4:  mov    0x4(%eax),%eax
086879ef +0x1c7:  mov    %edx,0x4(%esp)
086879f3 +0x1cb:  mov    %eax,(%esp)
086879f6 +0x1ce:  call   08687e78 <_ZN17CLevelRewardTable17GetProperJobIndexEc>  ; CLevelRewardTable::GetProperJobIndex(char)
086879fb +0x1d3:  mov    %eax,%edi
086879fd +0x1d5:  mov    -0x28(%ebp),%edx
08687a00 +0x1d8:  mov    0x8(%ebp),%eax
08687a03 +0x1db:  mov    0x4(%eax),%eax
08687a06 +0x1de:  mov    %edx,0x4(%esp)
08687a0a +0x1e2:  mov    %eax,(%esp)
08687a0d +0x1e5:  call   086876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>  ; CLevelRewardTable::GetProperLevelIndex(unsigned int)
08687a12 +0x1ea:  mov    %eax,%esi
08687a14 +0x1ec:  lea    -0x6c(%ebp),%eax
08687a17 +0x1ef:  mov    %eax,(%esp)
08687a1a +0x1f2:  call   0869c2c2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b17>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b17
08687a1f +0x1f7:  mov    0x4(%eax),%eax
08687a22 +0x1fa:  imul   $0x46,%edi,%edx
08687a25 +0x1fd:  add    %esi,%edx
08687a27 +0x1ff:  add    $0x44,%edx
08687a2a +0x202:  mov    %eax,0x8(%ebx,%edx,4)
08687a2e +0x206:  mov    0x8(%ebp),%eax
08687a31 +0x209:  mov    0x4(%eax),%ebx
08687a34 +0x20c:  mov    -0x24(%ebp),%eax
08687a37 +0x20f:  movsbl %al,%edx
08687a3a +0x212:  mov    0x8(%ebp),%eax
08687a3d +0x215:  mov    0x4(%eax),%eax
08687a40 +0x218:  mov    %edx,0x4(%esp)
08687a44 +0x21c:  mov    %eax,(%esp)
08687a47 +0x21f:  call   08687e78 <_ZN17CLevelRewardTable17GetProperJobIndexEc>  ; CLevelRewardTable::GetProperJobIndex(char)
08687a4c +0x224:  mov    %eax,%edi
08687a4e +0x226:  mov    -0x28(%ebp),%edx
08687a51 +0x229:  mov    0x8(%ebp),%eax
08687a54 +0x22c:  mov    0x4(%eax),%eax
08687a57 +0x22f:  mov    %edx,0x4(%esp)
08687a5b +0x233:  mov    %eax,(%esp)
08687a5e +0x236:  call   086876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>  ; CLevelRewardTable::GetProperLevelIndex(unsigned int)
08687a63 +0x23b:  mov    %eax,%esi
08687a65 +0x23d:  lea    -0x6c(%ebp),%eax
08687a68 +0x240:  mov    %eax,(%esp)
08687a6b +0x243:  call   0869c2c2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b17>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b17
08687a70 +0x248:  mov    0x8(%eax),%eax
08687a73 +0x24b:  imul   $0x46,%edi,%edx
08687a76 +0x24e:  add    %esi,%edx
08687a78 +0x250:  add    $0x2bc,%edx
08687a7e +0x256:  mov    %eax,(%ebx,%edx,4)
08687a81 +0x259:  addl   $0x1,-0x2c(%ebp)
08687a85 +0x25d:  lea    -0x4c(%ebp),%eax
08687a88 +0x260:  movl   $0x0,0x8(%esp)
08687a90 +0x268:  lea    -0x6c(%ebp),%edx
08687a93 +0x26b:  mov    %edx,0x4(%esp)
08687a97 +0x26f:  mov    %eax,(%esp)
08687a9a +0x272:  call   0869c28e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ae3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ae3
08687a9f +0x277:  sub    $0x4,%esp
08687aa2 +0x27a:  mov    -0x2c(%ebp),%eax
08687aa5 +0x27d:  cmp    -0x38(%ebp),%eax
08687aa8 +0x280:  jge    08687ac7 <+0x29f>
08687aaa +0x282:  lea    -0x70(%ebp),%eax
08687aad +0x285:  mov    %eax,0x4(%esp)
08687ab1 +0x289:  lea    -0x6c(%ebp),%eax
08687ab4 +0x28c:  mov    %eax,(%esp)
08687ab7 +0x28f:  call   0869c262 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ab7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ab7
08687abc +0x294:  test   %al,%al
08687abe +0x296:  je     08687ac7 <+0x29f>
08687ac0 +0x298:  mov    $0x1,%eax
08687ac5 +0x29d:  jmp    08687acc <+0x2a4>
08687ac7 +0x29f:  mov    $0x0,%eax
08687acc +0x2a4:  test   %al,%al
08687ace +0x2a6:  jne    086879b4 <+0x18c>
08687ad4 +0x2ac:  mov    0xc(%ebp),%eax
08687ad7 +0x2af:  add    $0x28,%eax
08687ada +0x2b2:  mov    %eax,(%esp)
08687add +0x2b5:  call   0869c2cc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b21>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b21
08687ae2 +0x2ba:  mov    %eax,-0x34(%ebp)
08687ae5 +0x2bd:  mov    0xc(%ebp),%eax
08687ae8 +0x2c0:  lea    0x28(%eax),%edx
08687aeb +0x2c3:  lea    -0x48(%ebp),%eax
08687aee +0x2c6:  mov    %edx,0x4(%esp)
08687af2 +0x2ca:  mov    %eax,(%esp)
08687af5 +0x2cd:  call   0869c2ee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b43>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b43
08687afa +0x2d2:  sub    $0x4,%esp
08687afd +0x2d5:  lea    -0x48(%ebp),%eax
08687b00 +0x2d8:  mov    %eax,0x4(%esp)
08687b04 +0x2dc:  lea    -0x74(%ebp),%eax
08687b07 +0x2df:  mov    %eax,(%esp)
08687b0a +0x2e2:  call   0869c312 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b67>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b67
08687b0f +0x2e7:  mov    0xc(%ebp),%eax
08687b12 +0x2ea:  lea    0x28(%eax),%edx
08687b15 +0x2ed:  lea    -0x44(%ebp),%eax
08687b18 +0x2f0:  mov    %edx,0x4(%esp)
08687b1c +0x2f4:  mov    %eax,(%esp)
08687b1f +0x2f7:  call   0869c32c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b81>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b81
08687b24 +0x2fc:  sub    $0x4,%esp
08687b27 +0x2ff:  lea    -0x44(%ebp),%eax
08687b2a +0x302:  mov    %eax,0x4(%esp)
08687b2e +0x306:  lea    -0x78(%ebp),%eax
08687b31 +0x309:  mov    %eax,(%esp)
08687b34 +0x30c:  call   0869c312 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8b67>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8b67
08687b39 +0x311:  movl   $0x0,-0x20(%ebp)
08687b40 +0x318:  jmp    08687cdb <+0x4b3>
08687b45 +0x31d:  lea    -0x74(%ebp),%eax
08687b48 +0x320:  mov    %eax,(%esp)
08687b4b +0x323:  call   0869c3b2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c07>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c07
08687b50 +0x328:  movzwl (%eax),%eax
08687b53 +0x32b:  movzwl %ax,%eax
08687b56 +0x32e:  mov    %eax,-0x1c(%ebp)
08687b59 +0x331:  lea    -0x74(%ebp),%eax
08687b5c +0x334:  mov    %eax,(%esp)
08687b5f +0x337:  call   0869c3b2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c07>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c07
08687b64 +0x33c:  add    $0x4,%eax
08687b67 +0x33f:  mov    %eax,0x4(%esp)
08687b6b +0x343:  lea    -0x7c(%ebp),%eax
08687b6e +0x346:  mov    %eax,(%esp)
08687b71 +0x349:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08687b76 +0x34e:  lea    -0x74(%ebp),%eax
08687b79 +0x351:  mov    %eax,(%esp)
08687b7c +0x354:  call   0869c3b2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8c07>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8c07
08687b81 +0x359:  add    $0x8,%eax
08687b84 +0x35c:  mov    %eax,0x4(%esp)
08687b88 +0x360:  lea    -0x80(%ebp),%eax
08687b8b +0x363:  mov    %eax,(%esp)
08687b8e +0x366:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08687b93 +0x36b:  lea    -0x7c(%ebp),%eax
08687b96 +0x36e:  mov    %eax,(%esp)
08687b99 +0x371:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08687b9e +0x376:  movl   $0x0,0xc(%esp)
08687ba6 +0x37e:  mov    %eax,0x8(%esp)
08687baa +0x382:  movl   $0x4,0x4(%esp)
08687bb2 +0x38a:  movl   $&g_scriptStringManager_,(%esp)
08687bb9 +0x391:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08687bbe +0x396:  mov    %eax,%ebx
08687bc0 +0x398:  mov    0x8(%ebp),%eax
08687bc3 +0x39b:  mov    0x4(%eax),%esi
08687bc6 +0x39e:  mov    -0x1c(%ebp),%edx
08687bc9 +0x3a1:  mov    0x8(%ebp),%eax
08687bcc +0x3a4:  mov    0x4(%eax),%eax
08687bcf +0x3a7:  mov    %edx,0x4(%esp)
08687bd3 +0x3ab:  mov    %eax,(%esp)
08687bd6 +0x3ae:  call   086876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>  ; CLevelRewardTable::GetProperLevelIndex(unsigned int)
08687bdb +0x3b3:  mov    %eax,%edx
08687bdd +0x3b5:  mov    %edx,%eax
08687bdf +0x3b7:  shl    $0x2,%eax
08687be2 +0x3ba:  add    %edx,%eax
08687be4 +0x3bc:  shl    $0x2,%eax
08687be7 +0x3bf:  add    %edx,%eax
08687be9 +0x3c1:  add    $0x14c0,%eax
08687bee +0x3c6:  lea    (%esi,%eax,1),%eax
08687bf1 +0x3c9:  add    $0x8,%eax
08687bf4 +0x3cc:  movl   $0x14,0x8(%esp)
08687bfc +0x3d4:  mov    %ebx,0x4(%esp)
08687c00 +0x3d8:  mov    %eax,(%esp)
08687c03 +0x3db:  call   0807d8d0 <_init+0x1c8>
08687c08 +0x3e0:  lea    -0x80(%ebp),%eax
08687c0b +0x3e3:  mov    %eax,(%esp)
08687c0e +0x3e6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08687c13 +0x3eb:  movl   $0x0,0xc(%esp)
08687c1b +0x3f3:  mov    %eax,0x8(%esp)
08687c1f +0x3f7:  movl   $0x4,0x4(%esp)
08687c27 +0x3ff:  movl   $&g_scriptStringManager_,(%esp)
08687c2e +0x406:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08687c33 +0x40b:  mov    %eax,%ebx
08687c35 +0x40d:  mov    0x8(%ebp),%eax
08687c38 +0x410:  mov    0x4(%eax),%esi
08687c3b +0x413:  mov    -0x1c(%ebp),%edx
08687c3e +0x416:  mov    0x8(%ebp),%eax
08687c41 +0x419:  mov    0x4(%eax),%eax
08687c44 +0x41c:  mov    %edx,0x4(%esp)
08687c48 +0x420:  mov    %eax,(%esp)
08687c4b +0x423:  call   086876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>  ; CLevelRewardTable::GetProperLevelIndex(unsigned int)
08687c50 +0x428:  shl    $0x8,%eax
08687c53 +0x42b:  add    $0x1a80,%eax
08687c58 +0x430:  lea    (%esi,%eax,1),%eax
08687c5b +0x433:  add    $0x6,%eax
08687c5e +0x436:  movl   $0xff,0x8(%esp)
08687c66 +0x43e:  mov    %ebx,0x4(%esp)
08687c6a +0x442:  mov    %eax,(%esp)
08687c6d +0x445:  call   0807d8d0 <_init+0x1c8>
08687c72 +0x44a:  lea    -0x80(%ebp),%eax
08687c75 +0x44d:  mov    %eax,(%esp)
08687c78 +0x450:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08687c7d +0x455:  jmp    08687caf <+0x487>
08687c7f +0x457:  mov    %edx,%ebx
08687c81 +0x459:  mov    %eax,%esi
08687c83 +0x45b:  lea    -0x80(%ebp),%eax
08687c86 +0x45e:  mov    %eax,(%esp)
08687c89 +0x461:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08687c8e +0x466:  mov    %esi,%eax
08687c90 +0x468:  mov    %ebx,%edx
08687c92 +0x46a:  jmp    08687c94 <+0x46c>
08687c94 +0x46c:  mov    %edx,%ebx
08687c96 +0x46e:  mov    %eax,%esi
08687c98 +0x470:  lea    -0x7c(%ebp),%eax
08687c9b +0x473:  mov    %eax,(%esp)
08687c9e +0x476:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08687ca3 +0x47b:  mov    %esi,%eax
08687ca5 +0x47d:  mov    %ebx,%edx
08687ca7 +0x47f:  mov    %eax,(%esp)
08687caa +0x482:  call   08ae3750 <_Unwind_Resume>
08687caf +0x487:  lea    -0x7c(%ebp),%eax
08687cb2 +0x48a:  mov    %eax,(%esp)
08687cb5 +0x48d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08687cba +0x492:  addl   $0x1,-0x20(%ebp)
08687cbe +0x496:  lea    -0x40(%ebp),%eax
08687cc1 +0x499:  movl   $0x0,0x8(%esp)
08687cc9 +0x4a1:  lea    -0x74(%ebp),%edx
08687ccc +0x4a4:  mov    %edx,0x4(%esp)
08687cd0 +0x4a8:  mov    %eax,(%esp)
08687cd3 +0x4ab:  call   0869c37e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8bd3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8bd3
08687cd8 +0x4b0:  sub    $0x4,%esp
08687cdb +0x4b3:  mov    -0x20(%ebp),%eax
08687cde +0x4b6:  cmp    -0x34(%ebp),%eax
08687ce1 +0x4b9:  jge    08687d00 <+0x4d8>
08687ce3 +0x4bb:  lea    -0x78(%ebp),%eax
08687ce6 +0x4be:  mov    %eax,0x4(%esp)
08687cea +0x4c2:  lea    -0x74(%ebp),%eax
08687ced +0x4c5:  mov    %eax,(%esp)
08687cf0 +0x4c8:  call   0869c352 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8ba7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8ba7
08687cf5 +0x4cd:  test   %al,%al
08687cf7 +0x4cf:  je     08687d00 <+0x4d8>
08687cf9 +0x4d1:  mov    $0x1,%eax
08687cfe +0x4d6:  jmp    08687d05 <+0x4dd>
08687d00 +0x4d8:  mov    $0x0,%eax
08687d05 +0x4dd:  test   %al,%al
08687d07 +0x4df:  jne    08687b45 <+0x31d>
08687d0d +0x4e5:  lea    -0xc(%ebp),%esp
08687d10 +0x4e8:  add    $0x0,%esp
08687d13 +0x4eb:  pop    %ebx
08687d14 +0x4ec:  pop    %esi
08687d15 +0x4ed:  pop    %edi
08687d16 +0x4ee:  pop    %ebp
08687d17 +0x4ef:  ret
```

## 反编译 C

```c
// CLevelRewardTableMgr::SetChallengeInfo @ 0x8687828

/* CLevelRewardTableMgr::SetChallengeInfo(stUnlimitChallengeInfo&) */

void __thiscall
CLevelRewardTableMgr::SetChallengeInfo(CLevelRewardTableMgr *this,stUnlimitChallengeInfo *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  string local_84 [4];
  string local_80 [4];
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  local_7c [4];
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  local_78 [4];
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  local_74 [4];
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  local_70 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_6c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_68 [4];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_5c [4];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  local_50 [4];
  __normal_iterator local_4c [4];
  __normal_iterator local_48 [4];
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  
  *this = *(CLevelRewardTableMgr *)param_1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 4));
  CLevelRewardTable::SetJobAffection(*(CLevelRewardTable **)(this + 4),true);
  local_40 = std::vector<int,std::allocator<int>>::size
                       ((vector<int,std::allocator<int>> *)(param_1 + 0x10));
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_68,local_64);
  std::vector<int,std::allocator<int>>::end();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_6c,local_60);
  local_34 = 0;
  do {
    if (local_34 < local_40) {
      bVar1 = __gnu_cxx::operator!=(local_68,local_6c);
      if (!bVar1) goto LAB_0868793a;
      bVar1 = true;
    }
    else {
LAB_0868793a:
      bVar1 = false;
    }
    iVar6 = local_34;
    if (!bVar1) break;
    iVar8 = *(int *)(this + 4);
    puVar2 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
             operator*(local_68);
    *(undefined4 *)(iVar8 + iVar6 * 4) = *puVar2;
    local_34 = local_34 + 1;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_5c,(int)local_68);
  } while( true );
  local_3c = std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>
             ::size((vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>
                     *)(param_1 + 0x1c));
  std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>::begin();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  ::__normal_iterator<stUnlimitChallengeRewardInfo*>(local_70,local_58);
  std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>::end();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  ::__normal_iterator<stUnlimitChallengeRewardInfo*>(local_74,local_54);
  local_30 = 0;
  do {
    if (local_30 < local_3c) {
      bVar1 = __gnu_cxx::operator!=(local_70,local_74);
      if (!bVar1) goto LAB_08687ac7;
      bVar1 = true;
    }
    else {
LAB_08687ac7:
      bVar1 = false;
    }
    if (!bVar1) break;
    puVar5 = (ushort *)
             __gnu_cxx::
             __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
             ::operator->(local_70);
    local_2c = (uint)*puVar5;
    iVar8 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
            ::operator->(local_70);
    local_28 = (uint)*(byte *)(iVar8 + 2);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperJobIndex
                      (*(CLevelRewardTable **)(this + 4),*(byte *)(iVar8 + 2));
    iVar3 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_2c);
    iVar4 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
            ::operator->(local_70);
    *(undefined4 *)(iVar6 + 8 + (iVar8 * 0x46 + iVar3 + 0x44) * 4) = *(undefined4 *)(iVar4 + 4);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperJobIndex(*(CLevelRewardTable **)(this + 4),(char)local_28);
    iVar3 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_2c);
    iVar4 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
            ::operator->(local_70);
    *(undefined4 *)(iVar6 + (iVar8 * 0x46 + iVar3 + 700) * 4) = *(undefined4 *)(iVar4 + 8);
    local_30 = local_30 + 1;
    __gnu_cxx::
    __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
    ::operator++(local_50,(int)local_70);
  } while( true );
  local_38 = std::
             vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>::
             size((vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>
                   *)(param_1 + 0x28));
  std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>::begin();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  ::__normal_iterator<stUnlimitChallengeMessageInfo*>(local_78,local_4c);
  std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>::end();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  ::__normal_iterator<stUnlimitChallengeMessageInfo*>(local_7c,local_48);
  local_24 = 0;
  do {
    if (local_24 < local_38) {
      bVar1 = __gnu_cxx::operator!=(local_78,local_7c);
      if (!bVar1) goto LAB_08687d00;
      bVar1 = true;
    }
    else {
LAB_08687d00:
      bVar1 = false;
    }
    if (!bVar1) {
      return;
    }
    puVar5 = (ushort *)
             __gnu_cxx::
             __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
             ::operator->(local_78);
    local_20 = (uint)*puVar5;
    iVar6 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
            ::operator->(local_78);
    std::string::string(local_80,(string *)(iVar6 + 4));
    iVar6 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
            ::operator->(local_78);
                    /* try { // try from 08687b8e to 08687b92 has its CatchHandler @ 08687c94 */
    std::string::string(local_84,(string *)(iVar6 + 8));
                    /* try { // try from 08687b99 to 08687c32 has its CatchHandler @ 08687c7f */
    pcVar7 = (char *)std::string::c_str(local_80);
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                (bool *)0x0);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_20);
    strncpy((char *)(iVar6 + iVar8 * 0x15 + 0x14c8),pcVar7,0x14);
    pcVar7 = (char *)std::string::c_str(local_84);
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                (bool *)0x0);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_20);
    strncpy((char *)(iVar6 + iVar8 * 0x100 + 0x1a86),pcVar7,0xff);
                    /* try { // try from 08687c78 to 08687c7c has its CatchHandler @ 08687c94 */
    std::string::~string(local_84);
    std::string::~string(local_80);
    local_24 = local_24 + 1;
    __gnu_cxx::
    __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
    ::operator++(local_44,(int)local_78);
  } while( true );
}
```
