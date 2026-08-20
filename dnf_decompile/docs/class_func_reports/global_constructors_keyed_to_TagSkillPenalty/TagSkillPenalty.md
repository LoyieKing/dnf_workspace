# TagSkillPenalty

`_GLOBAL__I__ZN15TagSkillPenaltyC2Ev`

`global constructors keyed to TagSkillPenalty::TagSkillPenalty()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TagSkillPenalty` | `0x08a9eced` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9eced  _GLOBAL__I__ZN15TagSkillPenaltyC2Ev
#           global constructors keyed to TagSkillPenalty::TagSkillPenalty()
# range [0x08a9eced, 0x08aa4e83]
08a9eced +0x0000:  push   %ebp
08a9ecee +0x0001:  mov    %esp,%ebp
08a9ecf0 +0x0003:  sub    $0x18,%esp
08a9ecf3 +0x0006:  movl   $0xffff,0x4(%esp)
08a9ecfb +0x000e:  movl   $0x1,(%esp)
08a9ed02 +0x0015:  call   08a9ecad <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08a9ed07 +0x001a:  leave
08a9ed08 +0x001b:  ret
08a9ed09 +0x001c:  nop
08a9ed0a +0x001d:  push   %ebp
08a9ed0b +0x001e:  mov    %esp,%ebp
08a9ed0d +0x0020:  sub    $0x18,%esp
08a9ed10 +0x0023:  mov    0x8(%ebp),%eax
08a9ed13 +0x0026:  mov    %eax,(%esp)
08a9ed16 +0x0029:  call   08a9efd8 <+0x2eb>
08a9ed1b +0x002e:  leave
08a9ed1c +0x002f:  ret
08a9ed1d +0x0030:  nop
08a9ed1e +0x0031:  push   %ebp
08a9ed1f +0x0032:  mov    %esp,%ebp
08a9ed21 +0x0034:  sub    $0x18,%esp
08a9ed24 +0x0037:  mov    0x8(%ebp),%eax
08a9ed27 +0x003a:  add    $0xc,%eax
08a9ed2a +0x003d:  mov    %eax,(%esp)
08a9ed2d +0x0040:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a9ed32 +0x0045:  leave
08a9ed33 +0x0046:  ret
08a9ed34 +0x0047:  push   %ebp
08a9ed35 +0x0048:  mov    %esp,%ebp
08a9ed37 +0x004a:  sub    $0x18,%esp
08a9ed3a +0x004d:  mov    0x8(%ebp),%eax
08a9ed3d +0x0050:  add    $0xc,%eax
08a9ed40 +0x0053:  mov    %eax,(%esp)
08a9ed43 +0x0056:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9ed48 +0x005b:  leave
08a9ed49 +0x005c:  ret
08a9ed4a +0x005d:  push   %ebp
08a9ed4b +0x005e:  mov    %esp,%ebp
08a9ed4d +0x0060:  sub    $0x18,%esp
08a9ed50 +0x0063:  mov    0x8(%ebp),%eax
08a9ed53 +0x0066:  add    $0x8,%eax
08a9ed56 +0x0069:  mov    %eax,(%esp)
08a9ed59 +0x006c:  call   088cc4c2 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x3d3>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x3d3
08a9ed5e +0x0071:  leave
08a9ed5f +0x0072:  ret
08a9ed60 +0x0073:  push   %ebp
08a9ed61 +0x0074:  mov    %esp,%ebp
08a9ed63 +0x0076:  sub    $0x18,%esp
08a9ed66 +0x0079:  mov    0x8(%ebp),%eax
08a9ed69 +0x007c:  add    $0x8,%eax
08a9ed6c +0x007f:  mov    %eax,(%esp)
08a9ed6f +0x0082:  call   0837f8a0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf340>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf340
08a9ed74 +0x0087:  leave
08a9ed75 +0x0088:  ret
08a9ed76 +0x0089:  push   %ebp
08a9ed77 +0x008a:  mov    %esp,%ebp
08a9ed79 +0x008c:  sub    $0x18,%esp
08a9ed7c +0x008f:  mov    0x8(%ebp),%eax
08a9ed7f +0x0092:  mov    %eax,(%esp)
08a9ed82 +0x0095:  call   08a9f7a0 <+0xab3>
08a9ed87 +0x009a:  leave
08a9ed88 +0x009b:  ret
08a9ed89 +0x009c:  nop
08a9ed8a +0x009d:  push   %ebp
08a9ed8b +0x009e:  mov    %esp,%ebp
08a9ed8d +0x00a0:  push   %esi
08a9ed8e +0x00a1:  push   %ebx
08a9ed8f +0x00a2:  sub    $0x10,%esp
08a9ed92 +0x00a5:  mov    0x8(%ebp),%eax
08a9ed95 +0x00a8:  mov    %eax,(%esp)
08a9ed98 +0x00ab:  call   08a9f81c <+0xb2f>
08a9ed9d +0x00b0:  mov    0x8(%ebp),%edx
08a9eda0 +0x00b3:  mov    0x4(%edx),%ecx
08a9eda3 +0x00b6:  mov    0x8(%ebp),%edx
08a9eda6 +0x00b9:  mov    (%edx),%edx
08a9eda8 +0x00bb:  mov    %eax,0x8(%esp)
08a9edac +0x00bf:  mov    %ecx,0x4(%esp)
08a9edb0 +0x00c3:  mov    %edx,(%esp)
08a9edb3 +0x00c6:  call   08a9f824 <+0xb37>
08a9edb8 +0x00cb:  jmp    08a9edd5 <+0xe8>
08a9edba +0x00cd:  mov    %edx,%ebx
08a9edbc +0x00cf:  mov    %eax,%esi
08a9edbe +0x00d1:  mov    0x8(%ebp),%eax
08a9edc1 +0x00d4:  mov    %eax,(%esp)
08a9edc4 +0x00d7:  call   08a9f7b4 <+0xac7>
08a9edc9 +0x00dc:  mov    %esi,%eax
08a9edcb +0x00de:  mov    %ebx,%edx
08a9edcd +0x00e0:  mov    %eax,(%esp)
08a9edd0 +0x00e3:  call   08ae3750 <_Unwind_Resume>
08a9edd5 +0x00e8:  mov    0x8(%ebp),%eax
08a9edd8 +0x00eb:  mov    %eax,(%esp)
08a9eddb +0x00ee:  call   08a9f7b4 <+0xac7>
08a9ede0 +0x00f3:  add    $0x10,%esp
08a9ede3 +0x00f6:  pop    %ebx
08a9ede4 +0x00f7:  pop    %esi
08a9ede5 +0x00f8:  pop    %ebp
08a9ede6 +0x00f9:  ret
08a9ede7 +0x00fa:  nop
08a9ede8 +0x00fb:  push   %ebp
08a9ede9 +0x00fc:  mov    %esp,%ebp
08a9edeb +0x00fe:  sub    $0x18,%esp
08a9edee +0x0101:  mov    0x8(%ebp),%eax
08a9edf1 +0x0104:  mov    %eax,(%esp)
08a9edf4 +0x0107:  call   08a9f852 <+0xb65>
08a9edf9 +0x010c:  leave
08a9edfa +0x010d:  ret
08a9edfb +0x010e:  nop
08a9edfc +0x010f:  push   %ebp
08a9edfd +0x0110:  mov    %esp,%ebp
08a9edff +0x0112:  push   %esi
08a9ee00 +0x0113:  push   %ebx
08a9ee01 +0x0114:  sub    $0x10,%esp
08a9ee04 +0x0117:  mov    0x8(%ebp),%eax
08a9ee07 +0x011a:  mov    %eax,(%esp)
08a9ee0a +0x011d:  call   08a9f8ce <+0xbe1>
08a9ee0f +0x0122:  mov    0x8(%ebp),%edx
08a9ee12 +0x0125:  mov    0x4(%edx),%ecx
08a9ee15 +0x0128:  mov    0x8(%ebp),%edx
08a9ee18 +0x012b:  mov    (%edx),%edx
08a9ee1a +0x012d:  mov    %eax,0x8(%esp)
08a9ee1e +0x0131:  mov    %ecx,0x4(%esp)
08a9ee22 +0x0135:  mov    %edx,(%esp)
08a9ee25 +0x0138:  call   08a9f8d6 <+0xbe9>
08a9ee2a +0x013d:  jmp    08a9ee47 <+0x15a>
08a9ee2c +0x013f:  mov    %edx,%ebx
08a9ee2e +0x0141:  mov    %eax,%esi
08a9ee30 +0x0143:  mov    0x8(%ebp),%eax
08a9ee33 +0x0146:  mov    %eax,(%esp)
08a9ee36 +0x0149:  call   08a9f866 <+0xb79>
08a9ee3b +0x014e:  mov    %esi,%eax
08a9ee3d +0x0150:  mov    %ebx,%edx
08a9ee3f +0x0152:  mov    %eax,(%esp)
08a9ee42 +0x0155:  call   08ae3750 <_Unwind_Resume>
08a9ee47 +0x015a:  mov    0x8(%ebp),%eax
08a9ee4a +0x015d:  mov    %eax,(%esp)
08a9ee4d +0x0160:  call   08a9f866 <+0xb79>
08a9ee52 +0x0165:  add    $0x10,%esp
08a9ee55 +0x0168:  pop    %ebx
08a9ee56 +0x0169:  pop    %esi
08a9ee57 +0x016a:  pop    %ebp
08a9ee58 +0x016b:  ret
08a9ee59 +0x016c:  nop
08a9ee5a +0x016d:  push   %ebp
08a9ee5b +0x016e:  mov    %esp,%ebp
08a9ee5d +0x0170:  sub    $0x18,%esp
08a9ee60 +0x0173:  mov    0x8(%ebp),%eax
08a9ee63 +0x0176:  mov    %eax,(%esp)
08a9ee66 +0x0179:  call   08a9f904 <+0xc17>
08a9ee6b +0x017e:  leave
08a9ee6c +0x017f:  ret
08a9ee6d +0x0180:  nop
08a9ee6e +0x0181:  push   %ebp
08a9ee6f +0x0182:  mov    %esp,%ebp
08a9ee71 +0x0184:  push   %esi
08a9ee72 +0x0185:  push   %ebx
08a9ee73 +0x0186:  sub    $0x10,%esp
08a9ee76 +0x0189:  mov    0x8(%ebp),%eax
08a9ee79 +0x018c:  mov    %eax,(%esp)
08a9ee7c +0x018f:  call   08a9f986 <+0xc99>
08a9ee81 +0x0194:  mov    0x8(%ebp),%edx
08a9ee84 +0x0197:  mov    0x4(%edx),%ecx
08a9ee87 +0x019a:  mov    0x8(%ebp),%edx
08a9ee8a +0x019d:  mov    (%edx),%edx
08a9ee8c +0x019f:  mov    %eax,0x8(%esp)
08a9ee90 +0x01a3:  mov    %ecx,0x4(%esp)
08a9ee94 +0x01a7:  mov    %edx,(%esp)
08a9ee97 +0x01aa:  call   08a9f98e <+0xca1>
08a9ee9c +0x01af:  jmp    08a9eeb9 <+0x1cc>
08a9ee9e +0x01b1:  mov    %edx,%ebx
08a9eea0 +0x01b3:  mov    %eax,%esi
08a9eea2 +0x01b5:  mov    0x8(%ebp),%eax
08a9eea5 +0x01b8:  mov    %eax,(%esp)
08a9eea8 +0x01bb:  call   08a9f918 <+0xc2b>
08a9eead +0x01c0:  mov    %esi,%eax
08a9eeaf +0x01c2:  mov    %ebx,%edx
08a9eeb1 +0x01c4:  mov    %eax,(%esp)
08a9eeb4 +0x01c7:  call   08ae3750 <_Unwind_Resume>
08a9eeb9 +0x01cc:  mov    0x8(%ebp),%eax
08a9eebc +0x01cf:  mov    %eax,(%esp)
08a9eebf +0x01d2:  call   08a9f918 <+0xc2b>
08a9eec4 +0x01d7:  add    $0x10,%esp
08a9eec7 +0x01da:  pop    %ebx
08a9eec8 +0x01db:  pop    %esi
08a9eec9 +0x01dc:  pop    %ebp
08a9eeca +0x01dd:  ret
08a9eecb +0x01de:  nop
08a9eecc +0x01df:  push   %ebp
08a9eecd +0x01e0:  mov    %esp,%ebp
08a9eecf +0x01e2:  sub    $0x18,%esp
08a9eed2 +0x01e5:  mov    0x8(%ebp),%eax
08a9eed5 +0x01e8:  mov    %eax,(%esp)
08a9eed8 +0x01eb:  call   08a9f9bc <+0xccf>
08a9eedd +0x01f0:  leave
08a9eede +0x01f1:  ret
08a9eedf +0x01f2:  nop
08a9eee0 +0x01f3:  push   %ebp
08a9eee1 +0x01f4:  mov    %esp,%ebp
08a9eee3 +0x01f6:  push   %esi
08a9eee4 +0x01f7:  push   %ebx
08a9eee5 +0x01f8:  sub    $0x10,%esp
08a9eee8 +0x01fb:  mov    0x8(%ebp),%eax
08a9eeeb +0x01fe:  mov    %eax,(%esp)
08a9eeee +0x0201:  call   08a9fa38 <+0xd4b>
08a9eef3 +0x0206:  mov    0x8(%ebp),%edx
08a9eef6 +0x0209:  mov    0x4(%edx),%ecx
08a9eef9 +0x020c:  mov    0x8(%ebp),%edx
08a9eefc +0x020f:  mov    (%edx),%edx
08a9eefe +0x0211:  mov    %eax,0x8(%esp)
08a9ef02 +0x0215:  mov    %ecx,0x4(%esp)
08a9ef06 +0x0219:  mov    %edx,(%esp)
08a9ef09 +0x021c:  call   08a9fa40 <+0xd53>
08a9ef0e +0x0221:  jmp    08a9ef2b <+0x23e>
08a9ef10 +0x0223:  mov    %edx,%ebx
08a9ef12 +0x0225:  mov    %eax,%esi
08a9ef14 +0x0227:  mov    0x8(%ebp),%eax
08a9ef17 +0x022a:  mov    %eax,(%esp)
08a9ef1a +0x022d:  call   08a9f9d0 <+0xce3>
08a9ef1f +0x0232:  mov    %esi,%eax
08a9ef21 +0x0234:  mov    %ebx,%edx
08a9ef23 +0x0236:  mov    %eax,(%esp)
08a9ef26 +0x0239:  call   08ae3750 <_Unwind_Resume>
08a9ef2b +0x023e:  mov    0x8(%ebp),%eax
08a9ef2e +0x0241:  mov    %eax,(%esp)
08a9ef31 +0x0244:  call   08a9f9d0 <+0xce3>
08a9ef36 +0x0249:  add    $0x10,%esp
08a9ef39 +0x024c:  pop    %ebx
08a9ef3a +0x024d:  pop    %esi
08a9ef3b +0x024e:  pop    %ebp
08a9ef3c +0x024f:  ret
08a9ef3d +0x0250:  nop
08a9ef3e +0x0251:  push   %ebp
08a9ef3f +0x0252:  mov    %esp,%ebp
08a9ef41 +0x0254:  sub    $0x18,%esp
08a9ef44 +0x0257:  mov    0x8(%ebp),%eax
08a9ef47 +0x025a:  mov    %eax,(%esp)
08a9ef4a +0x025d:  call   08a9fa6e <+0xd81>
08a9ef4f +0x0262:  leave
08a9ef50 +0x0263:  ret
08a9ef51 +0x0264:  nop
08a9ef52 +0x0265:  push   %ebp
08a9ef53 +0x0266:  mov    %esp,%ebp
08a9ef55 +0x0268:  push   %esi
08a9ef56 +0x0269:  push   %ebx
08a9ef57 +0x026a:  sub    $0x10,%esp
08a9ef5a +0x026d:  mov    0x8(%ebp),%eax
08a9ef5d +0x0270:  mov    %eax,(%esp)
08a9ef60 +0x0273:  call   08a9faea <+0xdfd>
08a9ef65 +0x0278:  mov    0x8(%ebp),%edx
08a9ef68 +0x027b:  mov    0x4(%edx),%ecx
08a9ef6b +0x027e:  mov    0x8(%ebp),%edx
08a9ef6e +0x0281:  mov    (%edx),%edx
08a9ef70 +0x0283:  mov    %eax,0x8(%esp)
08a9ef74 +0x0287:  mov    %ecx,0x4(%esp)
08a9ef78 +0x028b:  mov    %edx,(%esp)
08a9ef7b +0x028e:  call   08a9faf2 <+0xe05>
08a9ef80 +0x0293:  jmp    08a9ef9d <+0x2b0>
08a9ef82 +0x0295:  mov    %edx,%ebx
08a9ef84 +0x0297:  mov    %eax,%esi
08a9ef86 +0x0299:  mov    0x8(%ebp),%eax
08a9ef89 +0x029c:  mov    %eax,(%esp)
08a9ef8c +0x029f:  call   08a9fa82 <+0xd95>
08a9ef91 +0x02a4:  mov    %esi,%eax
08a9ef93 +0x02a6:  mov    %ebx,%edx
08a9ef95 +0x02a8:  mov    %eax,(%esp)
08a9ef98 +0x02ab:  call   08ae3750 <_Unwind_Resume>
08a9ef9d +0x02b0:  mov    0x8(%ebp),%eax
08a9efa0 +0x02b3:  mov    %eax,(%esp)
08a9efa3 +0x02b6:  call   08a9fa82 <+0xd95>
08a9efa8 +0x02bb:  add    $0x10,%esp
08a9efab +0x02be:  pop    %ebx
08a9efac +0x02bf:  pop    %esi
08a9efad +0x02c0:  pop    %ebp
08a9efae +0x02c1:  ret
08a9efaf +0x02c2:  nop
08a9efb0 +0x02c3:  push   %ebp
08a9efb1 +0x02c4:  mov    %esp,%ebp
08a9efb3 +0x02c6:  sub    $0x18,%esp
08a9efb6 +0x02c9:  mov    0x8(%ebp),%eax
08a9efb9 +0x02cc:  mov    %eax,(%esp)
08a9efbc +0x02cf:  call   08a9fb0c <+0xe1f>
08a9efc1 +0x02d4:  leave
08a9efc2 +0x02d5:  ret
08a9efc3 +0x02d6:  nop
08a9efc4 +0x02d7:  push   %ebp
08a9efc5 +0x02d8:  mov    %esp,%ebp
08a9efc7 +0x02da:  sub    $0x18,%esp
08a9efca +0x02dd:  mov    0x8(%ebp),%eax
08a9efcd +0x02e0:  mov    %eax,(%esp)
08a9efd0 +0x02e3:  call   08a9fb20 <+0xe33>
08a9efd5 +0x02e8:  leave
08a9efd6 +0x02e9:  ret
08a9efd7 +0x02ea:  nop
08a9efd8 +0x02eb:  push   %ebp
08a9efd9 +0x02ec:  mov    %esp,%ebp
08a9efdb +0x02ee:  push   %esi
08a9efdc +0x02ef:  push   %ebx
08a9efdd +0x02f0:  sub    $0x10,%esp
08a9efe0 +0x02f3:  mov    0x8(%ebp),%eax
08a9efe3 +0x02f6:  mov    %eax,(%esp)
08a9efe6 +0x02f9:  call   08a9fb8a <+0xe9d>
08a9efeb +0x02fe:  mov    %eax,0x4(%esp)
08a9efef +0x0302:  mov    0x8(%ebp),%eax
08a9eff2 +0x0305:  mov    %eax,(%esp)
08a9eff5 +0x0308:  call   08a9fb34 <+0xe47>
08a9effa +0x030d:  jmp    08a9f017 <+0x32a>
08a9effc +0x030f:  mov    %edx,%ebx
08a9effe +0x0311:  mov    %eax,%esi
08a9f000 +0x0313:  mov    0x8(%ebp),%eax
08a9f003 +0x0316:  mov    %eax,(%esp)
08a9f006 +0x0319:  call   08a9efc4 <+0x2d7>
08a9f00b +0x031e:  mov    %esi,%eax
08a9f00d +0x0320:  mov    %ebx,%edx
08a9f00f +0x0322:  mov    %eax,(%esp)
08a9f012 +0x0325:  call   08ae3750 <_Unwind_Resume>
08a9f017 +0x032a:  mov    0x8(%ebp),%eax
08a9f01a +0x032d:  mov    %eax,(%esp)
08a9f01d +0x0330:  call   08a9efc4 <+0x2d7>
08a9f022 +0x0335:  add    $0x10,%esp
08a9f025 +0x0338:  pop    %ebx
08a9f026 +0x0339:  pop    %esi
08a9f027 +0x033a:  pop    %ebp
08a9f028 +0x033b:  ret
08a9f029 +0x033c:  nop
08a9f02a +0x033d:  push   %ebp
08a9f02b +0x033e:  mov    %esp,%ebp
08a9f02d +0x0340:  sub    $0x18,%esp
08a9f030 +0x0343:  mov    0x8(%ebp),%eax
08a9f033 +0x0346:  mov    %eax,(%esp)
08a9f036 +0x0349:  call   08a9fbaa <+0xebd>
08a9f03b +0x034e:  leave
08a9f03c +0x034f:  ret
08a9f03d +0x0350:  nop
08a9f03e +0x0351:  push   %ebp
08a9f03f +0x0352:  mov    %esp,%ebp
08a9f041 +0x0354:  push   %esi
08a9f042 +0x0355:  push   %ebx
08a9f043 +0x0356:  sub    $0x10,%esp
08a9f046 +0x0359:  mov    0x8(%ebp),%eax
08a9f049 +0x035c:  mov    %eax,(%esp)
08a9f04c +0x035f:  call   08a9fc2c <+0xf3f>
08a9f051 +0x0364:  mov    0x8(%ebp),%edx
08a9f054 +0x0367:  mov    0x4(%edx),%ecx
08a9f057 +0x036a:  mov    0x8(%ebp),%edx
08a9f05a +0x036d:  mov    (%edx),%edx
08a9f05c +0x036f:  mov    %eax,0x8(%esp)
08a9f060 +0x0373:  mov    %ecx,0x4(%esp)
08a9f064 +0x0377:  mov    %edx,(%esp)
08a9f067 +0x037a:  call   08a9fc34 <+0xf47>
08a9f06c +0x037f:  jmp    08a9f089 <+0x39c>
08a9f06e +0x0381:  mov    %edx,%ebx
08a9f070 +0x0383:  mov    %eax,%esi
08a9f072 +0x0385:  mov    0x8(%ebp),%eax
08a9f075 +0x0388:  mov    %eax,(%esp)
08a9f078 +0x038b:  call   08a9fbbe <+0xed1>
08a9f07d +0x0390:  mov    %esi,%eax
08a9f07f +0x0392:  mov    %ebx,%edx
08a9f081 +0x0394:  mov    %eax,(%esp)
08a9f084 +0x0397:  call   08ae3750 <_Unwind_Resume>
08a9f089 +0x039c:  mov    0x8(%ebp),%eax
08a9f08c +0x039f:  mov    %eax,(%esp)
08a9f08f +0x03a2:  call   08a9fbbe <+0xed1>
08a9f094 +0x03a7:  add    $0x10,%esp
08a9f097 +0x03aa:  pop    %ebx
08a9f098 +0x03ab:  pop    %esi
08a9f099 +0x03ac:  pop    %ebp
08a9f09a +0x03ad:  ret
08a9f09b +0x03ae:  nop
08a9f09c +0x03af:  push   %ebp
08a9f09d +0x03b0:  mov    %esp,%ebp
08a9f09f +0x03b2:  sub    $0x18,%esp
08a9f0a2 +0x03b5:  mov    0x8(%ebp),%eax
08a9f0a5 +0x03b8:  mov    (%eax),%eax
08a9f0a7 +0x03ba:  mov    %eax,0x4(%esp)
08a9f0ab +0x03be:  mov    0x8(%ebp),%eax
08a9f0ae +0x03c1:  mov    %eax,(%esp)
08a9f0b1 +0x03c4:  call   08a9fc4e <+0xf61>
08a9f0b6 +0x03c9:  leave
08a9f0b7 +0x03ca:  ret
08a9f0b8 +0x03cb:  push   %ebp
08a9f0b9 +0x03cc:  mov    %esp,%ebp
08a9f0bb +0x03ce:  push   %ebx
08a9f0bc +0x03cf:  sub    $0x14,%esp
08a9f0bf +0x03d2:  mov    0x8(%ebp),%ebx
08a9f0c2 +0x03d5:  mov    0xc(%ebp),%eax
08a9f0c5 +0x03d8:  mov    %eax,0x4(%esp)
08a9f0c9 +0x03dc:  mov    %ebx,(%esp)
08a9f0cc +0x03df:  call   08a9fc84 <+0xf97>
08a9f0d1 +0x03e4:  sub    $0x4,%esp
08a9f0d4 +0x03e7:  mov    %ebx,%eax
08a9f0d6 +0x03e9:  mov    -0x4(%ebp),%ebx
08a9f0d9 +0x03ec:  leave
08a9f0da +0x03ed:  ret    $0x4
08a9f0dd +0x03f0:  nop
08a9f0de +0x03f1:  push   %ebp
08a9f0df +0x03f2:  mov    %esp,%ebp
08a9f0e1 +0x03f4:  push   %ebx
08a9f0e2 +0x03f5:  sub    $0x14,%esp
08a9f0e5 +0x03f8:  mov    0x8(%ebp),%ebx
08a9f0e8 +0x03fb:  mov    0xc(%ebp),%eax
08a9f0eb +0x03fe:  mov    %eax,0x4(%esp)
08a9f0ef +0x0402:  mov    %ebx,(%esp)
08a9f0f2 +0x0405:  call   08a9fcaa <+0xfbd>
08a9f0f7 +0x040a:  sub    $0x4,%esp
08a9f0fa +0x040d:  mov    %ebx,%eax
08a9f0fc +0x040f:  mov    -0x4(%ebp),%ebx
08a9f0ff +0x0412:  leave
08a9f100 +0x0413:  ret    $0x4
08a9f103 +0x0416:  nop
08a9f104 +0x0417:  push   %ebp
08a9f105 +0x0418:  mov    %esp,%ebp
08a9f107 +0x041a:  mov    0x8(%ebp),%eax
08a9f10a +0x041d:  mov    (%eax),%edx
08a9f10c +0x041f:  mov    0xc(%ebp),%eax
08a9f10f +0x0422:  mov    (%eax),%eax
08a9f111 +0x0424:  cmp    %eax,%edx
08a9f113 +0x0426:  setne  %al
08a9f116 +0x0429:  pop    %ebp
08a9f117 +0x042a:  ret
08a9f118 +0x042b:  push   %ebp
08a9f119 +0x042c:  mov    %esp,%ebp
08a9f11b +0x042e:  sub    $0x18,%esp
08a9f11e +0x0431:  mov    0x8(%ebp),%eax
08a9f121 +0x0434:  mov    (%eax),%eax
08a9f123 +0x0436:  mov    %eax,(%esp)
08a9f126 +0x0439:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08a9f12b +0x043e:  mov    0x8(%ebp),%edx
08a9f12e +0x0441:  mov    %eax,(%edx)
08a9f130 +0x0443:  mov    0x8(%ebp),%eax
08a9f133 +0x0446:  leave
08a9f134 +0x0447:  ret
08a9f135 +0x0448:  nop
08a9f136 +0x0449:  push   %ebp
08a9f137 +0x044a:  mov    %esp,%ebp
08a9f139 +0x044c:  mov    0x8(%ebp),%eax
08a9f13c +0x044f:  mov    (%eax),%eax
08a9f13e +0x0451:  add    $0x10,%eax
08a9f141 +0x0454:  pop    %ebp
08a9f142 +0x0455:  ret
08a9f143 +0x0456:  nop
08a9f144 +0x0457:  push   %ebp
08a9f145 +0x0458:  mov    %esp,%ebp
08a9f147 +0x045a:  push   %esi
08a9f148 +0x045b:  push   %ebx
08a9f149 +0x045c:  sub    $0x10,%esp
08a9f14c +0x045f:  mov    0x8(%ebp),%eax
08a9f14f +0x0462:  mov    %eax,(%esp)
08a9f152 +0x0465:  call   08a9fd4c <+0x105f>
08a9f157 +0x046a:  mov    0x8(%ebp),%edx
08a9f15a +0x046d:  mov    0x4(%edx),%ecx
08a9f15d +0x0470:  mov    0x8(%ebp),%edx
08a9f160 +0x0473:  mov    (%edx),%edx
08a9f162 +0x0475:  mov    %eax,0x8(%esp)
08a9f166 +0x0479:  mov    %ecx,0x4(%esp)
08a9f16a +0x047d:  mov    %edx,(%esp)
08a9f16d +0x0480:  call   08a9fd54 <+0x1067>
08a9f172 +0x0485:  jmp    08a9f18f <+0x4a2>
08a9f174 +0x0487:  mov    %edx,%ebx
08a9f176 +0x0489:  mov    %eax,%esi
08a9f178 +0x048b:  mov    0x8(%ebp),%eax
08a9f17b +0x048e:  mov    %eax,(%esp)
08a9f17e +0x0491:  call   08a9fce4 <+0xff7>
08a9f183 +0x0496:  mov    %esi,%eax
08a9f185 +0x0498:  mov    %ebx,%edx
08a9f187 +0x049a:  mov    %eax,(%esp)
08a9f18a +0x049d:  call   08ae3750 <_Unwind_Resume>
08a9f18f +0x04a2:  mov    0x8(%ebp),%eax
08a9f192 +0x04a5:  mov    %eax,(%esp)
08a9f195 +0x04a8:  call   08a9fce4 <+0xff7>
08a9f19a +0x04ad:  add    $0x10,%esp
08a9f19d +0x04b0:  pop    %ebx
08a9f19e +0x04b1:  pop    %esi
08a9f19f +0x04b2:  pop    %ebp
08a9f1a0 +0x04b3:  ret
08a9f1a1 +0x04b4:  nop
08a9f1a2 +0x04b5:  push   %ebp
08a9f1a3 +0x04b6:  mov    %esp,%ebp
08a9f1a5 +0x04b8:  sub    $0x18,%esp
08a9f1a8 +0x04bb:  mov    0x8(%ebp),%eax
08a9f1ab +0x04be:  mov    %eax,(%esp)
08a9f1ae +0x04c1:  call   08a9fd6e <+0x1081>
08a9f1b3 +0x04c6:  leave
08a9f1b4 +0x04c7:  ret
08a9f1b5 +0x04c8:  nop
08a9f1b6 +0x04c9:  push   %ebp
08a9f1b7 +0x04ca:  mov    %esp,%ebp
08a9f1b9 +0x04cc:  sub    $0x28,%esp
08a9f1bc +0x04cf:  mov    0xc(%ebp),%eax
08a9f1bf +0x04d2:  mov    %eax,(%esp)
08a9f1c2 +0x04d5:  call   08a9fde4 <+0x10f7>
08a9f1c7 +0x04da:  mov    (%eax),%eax
08a9f1c9 +0x04dc:  mov    %eax,-0xc(%ebp)
08a9f1cc +0x04df:  lea    -0xc(%ebp),%eax
08a9f1cf +0x04e2:  mov    %eax,0x4(%esp)
08a9f1d3 +0x04e6:  mov    0x8(%ebp),%eax
08a9f1d6 +0x04e9:  mov    %eax,(%esp)
08a9f1d9 +0x04ec:  call   08a9fdec <+0x10ff>
08a9f1de +0x04f1:  leave
08a9f1df +0x04f2:  ret
08a9f1e0 +0x04f3:  push   %ebp
08a9f1e1 +0x04f4:  mov    %esp,%ebp
08a9f1e3 +0x04f6:  push   %ebx
08a9f1e4 +0x04f7:  sub    $0x14,%esp
08a9f1e7 +0x04fa:  mov    0x8(%ebp),%ebx
08a9f1ea +0x04fd:  mov    0xc(%ebp),%eax
08a9f1ed +0x0500:  mov    0x10(%ebp),%edx
08a9f1f0 +0x0503:  mov    %edx,0x8(%esp)
08a9f1f4 +0x0507:  mov    %eax,0x4(%esp)
08a9f1f8 +0x050b:  mov    %ebx,(%esp)
08a9f1fb +0x050e:  call   08a9fe80 <+0x1193>
08a9f200 +0x0513:  sub    $0x4,%esp
08a9f203 +0x0516:  mov    %ebx,%eax
08a9f205 +0x0518:  mov    -0x4(%ebp),%ebx
08a9f208 +0x051b:  leave
08a9f209 +0x051c:  ret    $0x4
08a9f20c +0x051f:  push   %ebp
08a9f20d +0x0520:  mov    %esp,%ebp
08a9f20f +0x0522:  mov    0x8(%ebp),%eax
08a9f212 +0x0525:  mov    (%eax),%edx
08a9f214 +0x0527:  mov    0xc(%ebp),%eax
08a9f217 +0x052a:  mov    (%eax),%eax
08a9f219 +0x052c:  cmp    %eax,%edx
08a9f21b +0x052e:  sete   %al
08a9f21e +0x0531:  pop    %ebp
08a9f21f +0x0532:  ret
08a9f220 +0x0533:  push   %ebp
08a9f221 +0x0534:  mov    %esp,%ebp
08a9f223 +0x0536:  sub    $0x18,%esp
08a9f226 +0x0539:  mov    0x8(%ebp),%eax
08a9f229 +0x053c:  mov    %eax,(%esp)
08a9f22c +0x053f:  call   08a9ff3e <+0x1251>
08a9f231 +0x0544:  leave
08a9f232 +0x0545:  ret
08a9f233 +0x0546:  nop
08a9f234 +0x0547:  push   %ebp
08a9f235 +0x0548:  mov    %esp,%ebp
08a9f237 +0x054a:  sub    $0x28,%esp
08a9f23a +0x054d:  mov    0x8(%ebp),%eax
08a9f23d +0x0550:  mov    0x4(%eax),%edx
08a9f240 +0x0553:  mov    0x8(%ebp),%eax
08a9f243 +0x0556:  mov    0x8(%eax),%eax
08a9f246 +0x0559:  cmp    %eax,%edx
08a9f248 +0x055b:  je     08a9f277 <+0x58a>
08a9f24a +0x055d:  mov    0x8(%ebp),%eax
08a9f24d +0x0560:  mov    0x4(%eax),%edx
08a9f250 +0x0563:  mov    0x8(%ebp),%eax
08a9f253 +0x0566:  mov    0xc(%ebp),%ecx
08a9f256 +0x0569:  mov    %ecx,0x8(%esp)
08a9f25a +0x056d:  mov    %edx,0x4(%esp)
08a9f25e +0x0571:  mov    %eax,(%esp)
08a9f261 +0x0574:  call   08a9ff94 <+0x12a7>
08a9f266 +0x0579:  mov    0x8(%ebp),%eax
08a9f269 +0x057c:  mov    0x4(%eax),%eax
08a9f26c +0x057f:  lea    0x10(%eax),%edx
08a9f26f +0x0582:  mov    0x8(%ebp),%eax
08a9f272 +0x0585:  mov    %edx,0x4(%eax)
08a9f275 +0x0588:  jmp    08a9f2a5 <+0x5b8>
08a9f277 +0x058a:  lea    -0xc(%ebp),%eax
08a9f27a +0x058d:  mov    0x8(%ebp),%edx
08a9f27d +0x0590:  mov    %edx,0x4(%esp)
08a9f281 +0x0594:  mov    %eax,(%esp)
08a9f284 +0x0597:  call   08a9f692 <+0x9a5>
08a9f289 +0x059c:  sub    $0x4,%esp
08a9f28c +0x059f:  mov    0xc(%ebp),%eax
08a9f28f +0x05a2:  mov    %eax,0x8(%esp)
08a9f293 +0x05a6:  mov    -0xc(%ebp),%eax
08a9f296 +0x05a9:  mov    %eax,0x4(%esp)
08a9f29a +0x05ad:  mov    0x8(%ebp),%eax
08a9f29d +0x05b0:  mov    %eax,(%esp)
08a9f2a0 +0x05b3:  call   08aa0038 <+0x134b>
08a9f2a5 +0x05b8:  leave
08a9f2a6 +0x05b9:  ret
08a9f2a7 +0x05ba:  nop
08a9f2a8 +0x05bb:  push   %ebp
08a9f2a9 +0x05bc:  mov    %esp,%ebp
08a9f2ab +0x05be:  push   %ebx
08a9f2ac +0x05bf:  sub    $0x44,%esp
08a9f2af +0x05c2:  lea    -0x20(%ebp),%eax
08a9f2b2 +0x05c5:  mov    0xc(%ebp),%edx
08a9f2b5 +0x05c8:  mov    %edx,0x8(%esp)
08a9f2b9 +0x05cc:  mov    0x8(%ebp),%edx
08a9f2bc +0x05cf:  mov    %edx,0x4(%esp)
08a9f2c0 +0x05d3:  mov    %eax,(%esp)
08a9f2c3 +0x05d6:  call   08aa032a <+0x163d>
08a9f2c8 +0x05db:  sub    $0x4,%esp
08a9f2cb +0x05de:  lea    -0x1c(%ebp),%eax
08a9f2ce +0x05e1:  mov    0x8(%ebp),%edx
08a9f2d1 +0x05e4:  mov    %edx,0x4(%esp)
08a9f2d5 +0x05e8:  mov    %eax,(%esp)
08a9f2d8 +0x05eb:  call   08a9f0de <+0x3f1>
08a9f2dd +0x05f0:  sub    $0x4,%esp
08a9f2e0 +0x05f3:  lea    -0x1c(%ebp),%eax
08a9f2e3 +0x05f6:  mov    %eax,0x4(%esp)
08a9f2e7 +0x05fa:  lea    -0x20(%ebp),%eax
08a9f2ea +0x05fd:  mov    %eax,(%esp)
08a9f2ed +0x0600:  call   08a9f20c <+0x51f>
08a9f2f2 +0x0605:  test   %al,%al
08a9f2f4 +0x0607:  jne    08a9f332 <+0x645>
08a9f2f6 +0x0609:  lea    -0x20(%ebp),%eax
08a9f2f9 +0x060c:  mov    %eax,(%esp)
08a9f2fc +0x060f:  call   08aa037c <+0x168f>
08a9f301 +0x0614:  mov    %eax,%ebx
08a9f303 +0x0616:  lea    -0x15(%ebp),%eax
08a9f306 +0x0619:  mov    0x8(%ebp),%edx
08a9f309 +0x061c:  mov    %edx,0x4(%esp)
08a9f30d +0x0620:  mov    %eax,(%esp)
08a9f310 +0x0623:  call   08aa0356 <+0x1669>
08a9f315 +0x0628:  sub    $0x4,%esp
08a9f318 +0x062b:  mov    %ebx,0x8(%esp)
08a9f31c +0x062f:  mov    0xc(%ebp),%eax
08a9f31f +0x0632:  mov    %eax,0x4(%esp)
08a9f323 +0x0636:  lea    -0x15(%ebp),%eax
08a9f326 +0x0639:  mov    %eax,(%esp)
08a9f329 +0x063c:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08a9f32e +0x0641:  test   %al,%al
08a9f330 +0x0643:  je     08a9f339 <+0x64c>
08a9f332 +0x0645:  mov    $0x1,%eax
08a9f337 +0x064a:  jmp    08a9f33e <+0x651>
08a9f339 +0x064c:  mov    $0x0,%eax
08a9f33e +0x0651:  test   %al,%al
08a9f340 +0x0653:  je     08a9f38b <+0x69e>
08a9f342 +0x0655:  movl   $0x0,-0xc(%ebp)
08a9f349 +0x065c:  lea    -0xc(%ebp),%eax
08a9f34c +0x065f:  mov    %eax,0x8(%esp)
08a9f350 +0x0663:  mov    0xc(%ebp),%eax
08a9f353 +0x0666:  mov    %eax,0x4(%esp)
08a9f357 +0x066a:  lea    -0x14(%ebp),%eax
08a9f35a +0x066d:  mov    %eax,(%esp)
08a9f35d +0x0670:  call   08aa038a <+0x169d>
08a9f362 +0x0675:  lea    -0x2c(%ebp),%eax
08a9f365 +0x0678:  lea    -0x14(%ebp),%edx
08a9f368 +0x067b:  mov    %edx,0xc(%esp)
08a9f36c +0x067f:  mov    -0x20(%ebp),%edx
08a9f36f +0x0682:  mov    %edx,0x8(%esp)
08a9f373 +0x0686:  mov    0x8(%ebp),%edx
08a9f376 +0x0689:  mov    %edx,0x4(%esp)
08a9f37a +0x068d:  mov    %eax,(%esp)
08a9f37d +0x0690:  call   08aa03b8 <+0x16cb>
08a9f382 +0x0695:  sub    $0x4,%esp
08a9f385 +0x0698:  mov    -0x2c(%ebp),%eax
08a9f388 +0x069b:  mov    %eax,-0x20(%ebp)
08a9f38b +0x069e:  lea    -0x20(%ebp),%eax
08a9f38e +0x06a1:  mov    %eax,(%esp)
08a9f391 +0x06a4:  call   08aa037c <+0x168f>
08a9f396 +0x06a9:  add    $0x4,%eax
08a9f399 +0x06ac:  mov    -0x4(%ebp),%ebx
08a9f39c +0x06af:  leave
08a9f39d +0x06b0:  ret
08a9f39e +0x06b1:  push   %ebp
08a9f39f +0x06b2:  mov    %esp,%ebp
08a9f3a1 +0x06b4:  sub    $0x18,%esp
08a9f3a4 +0x06b7:  mov    0x8(%ebp),%eax
08a9f3a7 +0x06ba:  mov    (%eax),%eax
08a9f3a9 +0x06bc:  mov    %eax,0x4(%esp)
08a9f3ad +0x06c0:  mov    0x8(%ebp),%eax
08a9f3b0 +0x06c3:  mov    %eax,(%esp)
08a9f3b3 +0x06c6:  call   08aa03fe <+0x1711>
08a9f3b8 +0x06cb:  leave
08a9f3b9 +0x06cc:  ret
08a9f3ba +0x06cd:  push   %ebp
08a9f3bb +0x06ce:  mov    %esp,%ebp
08a9f3bd +0x06d0:  sub    $0x28,%esp
08a9f3c0 +0x06d3:  mov    0x8(%ebp),%eax
08a9f3c3 +0x06d6:  mov    0x4(%eax),%edx
08a9f3c6 +0x06d9:  mov    0x8(%ebp),%eax
08a9f3c9 +0x06dc:  mov    0x8(%eax),%eax
08a9f3cc +0x06df:  cmp    %eax,%edx
08a9f3ce +0x06e1:  je     08a9f3fd <+0x710>
08a9f3d0 +0x06e3:  mov    0x8(%ebp),%eax
08a9f3d3 +0x06e6:  mov    0x4(%eax),%edx
08a9f3d6 +0x06e9:  mov    0x8(%ebp),%eax
08a9f3d9 +0x06ec:  mov    0xc(%ebp),%ecx
08a9f3dc +0x06ef:  mov    %ecx,0x8(%esp)
08a9f3e0 +0x06f3:  mov    %edx,0x4(%esp)
08a9f3e4 +0x06f7:  mov    %eax,(%esp)
08a9f3e7 +0x06fa:  call   08aa0434 <+0x1747>
08a9f3ec +0x06ff:  mov    0x8(%ebp),%eax
08a9f3ef +0x0702:  mov    0x4(%eax),%eax
08a9f3f2 +0x0705:  lea    0xc(%eax),%edx
08a9f3f5 +0x0708:  mov    0x8(%ebp),%eax
08a9f3f8 +0x070b:  mov    %edx,0x4(%eax)
08a9f3fb +0x070e:  jmp    08a9f42b <+0x73e>
08a9f3fd +0x0710:  lea    -0xc(%ebp),%eax
08a9f400 +0x0713:  mov    0x8(%ebp),%edx
08a9f403 +0x0716:  mov    %edx,0x4(%esp)
08a9f407 +0x071a:  mov    %eax,(%esp)
08a9f40a +0x071d:  call   08aa0468 <+0x177b>
08a9f40f +0x0722:  sub    $0x4,%esp
08a9f412 +0x0725:  mov    0xc(%ebp),%eax
08a9f415 +0x0728:  mov    %eax,0x8(%esp)
08a9f419 +0x072c:  mov    -0xc(%ebp),%eax
08a9f41c +0x072f:  mov    %eax,0x4(%esp)
08a9f420 +0x0733:  mov    0x8(%ebp),%eax
08a9f423 +0x0736:  mov    %eax,(%esp)
08a9f426 +0x0739:  call   08aa048e <+0x17a1>
08a9f42b +0x073e:  leave
08a9f42c +0x073f:  ret
08a9f42d +0x0740:  nop
08a9f42e +0x0741:  push   %ebp
08a9f42f +0x0742:  mov    %esp,%ebp
08a9f431 +0x0744:  sub    $0x18,%esp
08a9f434 +0x0747:  mov    0x8(%ebp),%eax
08a9f437 +0x074a:  mov    (%eax),%eax
08a9f439 +0x074c:  mov    %eax,0x4(%esp)
08a9f43d +0x0750:  mov    0x8(%ebp),%eax
08a9f440 +0x0753:  mov    %eax,(%esp)
08a9f443 +0x0756:  call   08aa0768 <+0x1a7b>
08a9f448 +0x075b:  leave
08a9f449 +0x075c:  ret
08a9f44a +0x075d:  push   %ebp
08a9f44b +0x075e:  mov    %esp,%ebp
08a9f44d +0x0760:  sub    $0x28,%esp
08a9f450 +0x0763:  mov    0x8(%ebp),%eax
08a9f453 +0x0766:  mov    0x4(%eax),%edx
08a9f456 +0x0769:  mov    0x8(%ebp),%eax
08a9f459 +0x076c:  mov    0x8(%eax),%eax
08a9f45c +0x076f:  cmp    %eax,%edx
08a9f45e +0x0771:  je     08a9f48d <+0x7a0>
08a9f460 +0x0773:  mov    0x8(%ebp),%eax
08a9f463 +0x0776:  mov    0x4(%eax),%edx
08a9f466 +0x0779:  mov    0x8(%ebp),%eax
08a9f469 +0x077c:  mov    0xc(%ebp),%ecx
08a9f46c +0x077f:  mov    %ecx,0x8(%esp)
08a9f470 +0x0783:  mov    %edx,0x4(%esp)
08a9f474 +0x0787:  mov    %eax,(%esp)
08a9f477 +0x078a:  call   08aa079e <+0x1ab1>
08a9f47c +0x078f:  mov    0x8(%ebp),%eax
08a9f47f +0x0792:  mov    0x4(%eax),%eax
08a9f482 +0x0795:  lea    0x10(%eax),%edx
08a9f485 +0x0798:  mov    0x8(%ebp),%eax
08a9f488 +0x079b:  mov    %edx,0x4(%eax)
08a9f48b +0x079e:  jmp    08a9f4bb <+0x7ce>
08a9f48d +0x07a0:  lea    -0xc(%ebp),%eax
08a9f490 +0x07a3:  mov    0x8(%ebp),%edx
08a9f493 +0x07a6:  mov    %edx,0x4(%esp)
08a9f497 +0x07aa:  mov    %eax,(%esp)
08a9f49a +0x07ad:  call   08aa07d8 <+0x1aeb>
08a9f49f +0x07b2:  sub    $0x4,%esp
08a9f4a2 +0x07b5:  mov    0xc(%ebp),%eax
08a9f4a5 +0x07b8:  mov    %eax,0x8(%esp)
08a9f4a9 +0x07bc:  mov    -0xc(%ebp),%eax
08a9f4ac +0x07bf:  mov    %eax,0x4(%esp)
08a9f4b0 +0x07c3:  mov    0x8(%ebp),%eax
08a9f4b3 +0x07c6:  mov    %eax,(%esp)
08a9f4b6 +0x07c9:  call   08aa07fe <+0x1b11>
08a9f4bb +0x07ce:  leave
08a9f4bc +0x07cf:  ret
08a9f4bd +0x07d0:  nop
08a9f4be +0x07d1:  push   %ebp
08a9f4bf +0x07d2:  mov    %esp,%ebp
08a9f4c1 +0x07d4:  sub    $0x18,%esp
08a9f4c4 +0x07d7:  mov    0x8(%ebp),%eax
08a9f4c7 +0x07da:  mov    (%eax),%eax
08a9f4c9 +0x07dc:  mov    %eax,0x4(%esp)
08a9f4cd +0x07e0:  mov    0x8(%ebp),%eax
08a9f4d0 +0x07e3:  mov    %eax,(%esp)
08a9f4d3 +0x07e6:  call   08aa0ac2 <+0x1dd5>
08a9f4d8 +0x07eb:  leave
08a9f4d9 +0x07ec:  ret
08a9f4da +0x07ed:  push   %ebp
08a9f4db +0x07ee:  mov    %esp,%ebp
08a9f4dd +0x07f0:  sub    $0x28,%esp
08a9f4e0 +0x07f3:  mov    0x8(%ebp),%eax
08a9f4e3 +0x07f6:  mov    0x4(%eax),%edx
08a9f4e6 +0x07f9:  mov    0x8(%ebp),%eax
08a9f4e9 +0x07fc:  mov    0x8(%eax),%eax
08a9f4ec +0x07ff:  cmp    %eax,%edx
08a9f4ee +0x0801:  je     08a9f51d <+0x830>
08a9f4f0 +0x0803:  mov    0x8(%ebp),%eax
08a9f4f3 +0x0806:  mov    0x4(%eax),%edx
08a9f4f6 +0x0809:  mov    0x8(%ebp),%eax
08a9f4f9 +0x080c:  mov    0xc(%ebp),%ecx
08a9f4fc +0x080f:  mov    %ecx,0x8(%esp)
08a9f500 +0x0813:  mov    %edx,0x4(%esp)
08a9f504 +0x0817:  mov    %eax,(%esp)
08a9f507 +0x081a:  call   08aa0b2e <+0x1e41>
08a9f50c +0x081f:  mov    0x8(%ebp),%eax
08a9f50f +0x0822:  mov    0x4(%eax),%eax
08a9f512 +0x0825:  lea    0x14(%eax),%edx
08a9f515 +0x0828:  mov    0x8(%ebp),%eax
08a9f518 +0x082b:  mov    %edx,0x4(%eax)
08a9f51b +0x082e:  jmp    08a9f54b <+0x85e>
08a9f51d +0x0830:  lea    -0xc(%ebp),%eax
08a9f520 +0x0833:  mov    0x8(%ebp),%edx
08a9f523 +0x0836:  mov    %edx,0x4(%esp)
08a9f527 +0x083a:  mov    %eax,(%esp)
08a9f52a +0x083d:  call   08aa0b8c <+0x1e9f>
08a9f52f +0x0842:  sub    $0x4,%esp
08a9f532 +0x0845:  mov    0xc(%ebp),%eax
08a9f535 +0x0848:  mov    %eax,0x8(%esp)
08a9f539 +0x084c:  mov    -0xc(%ebp),%eax
08a9f53c +0x084f:  mov    %eax,0x4(%esp)
08a9f540 +0x0853:  mov    0x8(%ebp),%eax
08a9f543 +0x0856:  mov    %eax,(%esp)
08a9f546 +0x0859:  call   08aa0bec <+0x1eff>
08a9f54b +0x085e:  leave
08a9f54c +0x085f:  ret
08a9f54d +0x0860:  nop
08a9f54e +0x0861:  push   %ebp
08a9f54f +0x0862:  mov    %esp,%ebp
08a9f551 +0x0864:  sub    $0x18,%esp
08a9f554 +0x0867:  mov    0x8(%ebp),%eax
08a9f557 +0x086a:  mov    (%eax),%eax
08a9f559 +0x086c:  mov    %eax,0x4(%esp)
08a9f55d +0x0870:  mov    0x8(%ebp),%eax
08a9f560 +0x0873:  mov    %eax,(%esp)
08a9f563 +0x0876:  call   08aa0efe <+0x2211>
08a9f568 +0x087b:  leave
08a9f569 +0x087c:  ret
08a9f56a +0x087d:  push   %ebp
08a9f56b +0x087e:  mov    %esp,%ebp
08a9f56d +0x0880:  sub    $0x18,%esp
08a9f570 +0x0883:  mov    0x8(%ebp),%eax
08a9f573 +0x0886:  mov    (%eax),%eax
08a9f575 +0x0888:  mov    %eax,0x4(%esp)
08a9f579 +0x088c:  mov    0x8(%ebp),%eax
08a9f57c +0x088f:  mov    %eax,(%esp)
08a9f57f +0x0892:  call   08aa0f34 <+0x2247>
08a9f584 +0x0897:  leave
08a9f585 +0x0898:  ret
08a9f586 +0x0899:  push   %ebp
08a9f587 +0x089a:  mov    %esp,%ebp
08a9f589 +0x089c:  sub    $0x28,%esp
08a9f58c +0x089f:  mov    0x8(%ebp),%eax
08a9f58f +0x08a2:  mov    0x4(%eax),%edx
08a9f592 +0x08a5:  mov    0x8(%ebp),%eax
08a9f595 +0x08a8:  mov    0x8(%eax),%eax
08a9f598 +0x08ab:  cmp    %eax,%edx
08a9f59a +0x08ad:  je     08a9f5c9 <+0x8dc>
08a9f59c +0x08af:  mov    0x8(%ebp),%eax
08a9f59f +0x08b2:  mov    0x4(%eax),%edx
08a9f5a2 +0x08b5:  mov    0x8(%ebp),%eax
08a9f5a5 +0x08b8:  mov    0xc(%ebp),%ecx
08a9f5a8 +0x08bb:  mov    %ecx,0x8(%esp)
08a9f5ac +0x08bf:  mov    %edx,0x4(%esp)
08a9f5b0 +0x08c3:  mov    %eax,(%esp)
08a9f5b3 +0x08c6:  call   08aa0f6a <+0x227d>
08a9f5b8 +0x08cb:  mov    0x8(%ebp),%eax
08a9f5bb +0x08ce:  mov    0x4(%eax),%eax
08a9f5be +0x08d1:  lea    0x10(%eax),%edx
08a9f5c1 +0x08d4:  mov    0x8(%ebp),%eax
08a9f5c4 +0x08d7:  mov    %edx,0x4(%eax)
08a9f5c7 +0x08da:  jmp    08a9f5f7 <+0x90a>
08a9f5c9 +0x08dc:  lea    -0xc(%ebp),%eax
08a9f5cc +0x08df:  mov    0x8(%ebp),%edx
08a9f5cf +0x08e2:  mov    %edx,0x4(%esp)
08a9f5d3 +0x08e6:  mov    %eax,(%esp)
08a9f5d6 +0x08e9:  call   08aa0fa4 <+0x22b7>
08a9f5db +0x08ee:  sub    $0x4,%esp
08a9f5de +0x08f1:  mov    0xc(%ebp),%eax
08a9f5e1 +0x08f4:  mov    %eax,0x8(%esp)
08a9f5e5 +0x08f8:  mov    -0xc(%ebp),%eax
08a9f5e8 +0x08fb:  mov    %eax,0x4(%esp)
08a9f5ec +0x08ff:  mov    0x8(%ebp),%eax
08a9f5ef +0x0902:  mov    %eax,(%esp)
08a9f5f2 +0x0905:  call   08aa0fca <+0x22dd>
08a9f5f7 +0x090a:  leave
08a9f5f8 +0x090b:  ret
08a9f5f9 +0x090c:  nop
08a9f5fa +0x090d:  push   %ebp
08a9f5fb +0x090e:  mov    %esp,%ebp
08a9f5fd +0x0910:  sub    $0x28,%esp
08a9f600 +0x0913:  mov    0x8(%ebp),%eax
08a9f603 +0x0916:  mov    0x4(%eax),%edx
08a9f606 +0x0919:  mov    0x8(%ebp),%eax
08a9f609 +0x091c:  mov    0x8(%eax),%eax
08a9f60c +0x091f:  cmp    %eax,%edx
08a9f60e +0x0921:  je     08a9f63d <+0x950>
08a9f610 +0x0923:  mov    0x8(%ebp),%eax
08a9f613 +0x0926:  mov    0x4(%eax),%edx
08a9f616 +0x0929:  mov    0x8(%ebp),%eax
08a9f619 +0x092c:  mov    0xc(%ebp),%ecx
08a9f61c +0x092f:  mov    %ecx,0x8(%esp)
08a9f620 +0x0933:  mov    %edx,0x4(%esp)
08a9f624 +0x0937:  mov    %eax,(%esp)
08a9f627 +0x093a:  call   08aa128e <+0x25a1>
08a9f62c +0x093f:  mov    0x8(%ebp),%eax
08a9f62f +0x0942:  mov    0x4(%eax),%eax
08a9f632 +0x0945:  lea    0x10(%eax),%edx
08a9f635 +0x0948:  mov    0x8(%ebp),%eax
08a9f638 +0x094b:  mov    %edx,0x4(%eax)
08a9f63b +0x094e:  jmp    08a9f66b <+0x97e>
08a9f63d +0x0950:  lea    -0xc(%ebp),%eax
08a9f640 +0x0953:  mov    0x8(%ebp),%edx
08a9f643 +0x0956:  mov    %edx,0x4(%esp)
08a9f647 +0x095a:  mov    %eax,(%esp)
08a9f64a +0x095d:  call   08aa12c8 <+0x25db>
08a9f64f +0x0962:  sub    $0x4,%esp
08a9f652 +0x0965:  mov    0xc(%ebp),%eax
08a9f655 +0x0968:  mov    %eax,0x8(%esp)
08a9f659 +0x096c:  mov    -0xc(%ebp),%eax
08a9f65c +0x096f:  mov    %eax,0x4(%esp)
08a9f660 +0x0973:  mov    0x8(%ebp),%eax
08a9f663 +0x0976:  mov    %eax,(%esp)
08a9f666 +0x0979:  call   08aa12ee <+0x2601>
08a9f66b +0x097e:  leave
08a9f66c +0x097f:  ret
08a9f66d +0x0980:  nop
08a9f66e +0x0981:  push   %ebp
08a9f66f +0x0982:  mov    %esp,%ebp
08a9f671 +0x0984:  push   %ebx
08a9f672 +0x0985:  sub    $0x14,%esp
08a9f675 +0x0988:  mov    0x8(%ebp),%ebx
08a9f678 +0x098b:  mov    0xc(%ebp),%eax
08a9f67b +0x098e:  mov    %eax,0x4(%esp)
08a9f67f +0x0992:  mov    %ebx,(%esp)
08a9f682 +0x0995:  call   08aa15b2 <+0x28c5>
08a9f687 +0x099a:  mov    %ebx,%eax
08a9f689 +0x099c:  add    $0x14,%esp
08a9f68c +0x099f:  pop    %ebx
08a9f68d +0x09a0:  pop    %ebp
08a9f68e +0x09a1:  ret    $0x4
08a9f691 +0x09a4:  nop
08a9f692 +0x09a5:  push   %ebp
08a9f693 +0x09a6:  mov    %esp,%ebp
08a9f695 +0x09a8:  push   %ebx
08a9f696 +0x09a9:  sub    $0x14,%esp
08a9f699 +0x09ac:  mov    0x8(%ebp),%ebx
08a9f69c +0x09af:  mov    0xc(%ebp),%eax
08a9f69f +0x09b2:  add    $0x4,%eax
08a9f6a2 +0x09b5:  mov    %eax,0x4(%esp)
08a9f6a6 +0x09b9:  mov    %ebx,(%esp)
08a9f6a9 +0x09bc:  call   08aa15b2 <+0x28c5>
08a9f6ae +0x09c1:  mov    %ebx,%eax
08a9f6b0 +0x09c3:  add    $0x14,%esp
08a9f6b3 +0x09c6:  pop    %ebx
08a9f6b4 +0x09c7:  pop    %ebp
08a9f6b5 +0x09c8:  ret    $0x4
08a9f6b8 +0x09cb:  push   %ebp
08a9f6b9 +0x09cc:  mov    %esp,%ebp
08a9f6bb +0x09ce:  push   %ebx
08a9f6bc +0x09cf:  sub    $0x14,%esp
08a9f6bf +0x09d2:  mov    0x8(%ebp),%eax
08a9f6c2 +0x09d5:  mov    %eax,(%esp)
08a9f6c5 +0x09d8:  call   08aa15c2 <+0x28d5>
08a9f6ca +0x09dd:  mov    (%eax),%ebx
08a9f6cc +0x09df:  mov    0xc(%ebp),%eax
08a9f6cf +0x09e2:  mov    %eax,(%esp)
08a9f6d2 +0x09e5:  call   08aa15c2 <+0x28d5>
08a9f6d7 +0x09ea:  mov    (%eax),%eax
08a9f6d9 +0x09ec:  cmp    %eax,%ebx
08a9f6db +0x09ee:  setne  %al
08a9f6de +0x09f1:  add    $0x14,%esp
08a9f6e1 +0x09f4:  pop    %ebx
08a9f6e2 +0x09f5:  pop    %ebp
08a9f6e3 +0x09f6:  ret
08a9f6e4 +0x09f7:  push   %ebp
08a9f6e5 +0x09f8:  mov    %esp,%ebp
08a9f6e7 +0x09fa:  mov    0x8(%ebp),%eax
08a9f6ea +0x09fd:  mov    (%eax),%eax
08a9f6ec +0x09ff:  pop    %ebp
08a9f6ed +0x0a00:  ret
08a9f6ee +0x0a01:  push   %ebp
08a9f6ef +0x0a02:  mov    %esp,%ebp
08a9f6f1 +0x0a04:  push   %ebx
08a9f6f2 +0x0a05:  sub    $0x24,%esp
08a9f6f5 +0x0a08:  mov    0x8(%ebp),%ebx
08a9f6f8 +0x0a0b:  mov    0xc(%ebp),%eax
08a9f6fb +0x0a0e:  mov    (%eax),%eax
08a9f6fd +0x0a10:  mov    %eax,-0xc(%ebp)
08a9f700 +0x0a13:  lea    -0xc(%ebp),%edx
08a9f703 +0x0a16:  lea    0x10(%eax),%ecx
08a9f706 +0x0a19:  mov    0xc(%ebp),%eax
08a9f709 +0x0a1c:  mov    %ecx,(%eax)
08a9f70b +0x0a1e:  mov    %edx,0x4(%esp)
08a9f70f +0x0a22:  mov    %ebx,(%esp)
08a9f712 +0x0a25:  call   08aa15b2 <+0x28c5>
08a9f717 +0x0a2a:  mov    %ebx,%eax
08a9f719 +0x0a2c:  add    $0x24,%esp
08a9f71c +0x0a2f:  pop    %ebx
08a9f71d +0x0a30:  pop    %ebp
08a9f71e +0x0a31:  ret    $0x4
08a9f721 +0x0a34:  nop
08a9f722 +0x0a35:  push   %ebp
08a9f723 +0x0a36:  mov    %esp,%ebp
08a9f725 +0x0a38:  mov    0x8(%ebp),%eax
08a9f728 +0x0a3b:  mov    0x4(%eax),%eax
08a9f72b +0x0a3e:  mov    %eax,%edx
08a9f72d +0x0a40:  mov    0x8(%ebp),%eax
08a9f730 +0x0a43:  mov    (%eax),%eax
08a9f732 +0x0a45:  mov    %edx,%ecx
08a9f734 +0x0a47:  sub    %eax,%ecx
08a9f736 +0x0a49:  mov    %ecx,%eax
08a9f738 +0x0a4b:  sar    $0x4,%eax
08a9f73b +0x0a4e:  pop    %ebp
08a9f73c +0x0a4f:  ret
08a9f73d +0x0a50:  nop
08a9f73e +0x0a51:  push   %ebp
08a9f73f +0x0a52:  mov    %esp,%ebp
08a9f741 +0x0a54:  mov    0x8(%ebp),%eax
08a9f744 +0x0a57:  mov    (%eax),%eax
08a9f746 +0x0a59:  mov    0xc(%ebp),%edx
08a9f749 +0x0a5c:  shl    $0x4,%edx
08a9f74c +0x0a5f:  add    %edx,%eax
08a9f74e +0x0a61:  pop    %ebp
08a9f74f +0x0a62:  ret
08a9f750 +0x0a63:  push   %ebp
08a9f751 +0x0a64:  mov    %esp,%ebp
08a9f753 +0x0a66:  mov    0x8(%ebp),%eax
08a9f756 +0x0a69:  mov    0x4(%eax),%eax
08a9f759 +0x0a6c:  mov    %eax,%edx
08a9f75b +0x0a6e:  mov    0x8(%ebp),%eax
08a9f75e +0x0a71:  mov    (%eax),%eax
08a9f760 +0x0a73:  mov    %edx,%ecx
08a9f762 +0x0a75:  sub    %eax,%ecx
08a9f764 +0x0a77:  mov    %ecx,%eax
08a9f766 +0x0a79:  sar    $0x2,%eax
08a9f769 +0x0a7c:  imul   $0xaaaaaaab,%eax,%eax
08a9f76f +0x0a82:  pop    %ebp
08a9f770 +0x0a83:  ret
08a9f771 +0x0a84:  nop
08a9f772 +0x0a85:  push   %ebp
08a9f773 +0x0a86:  mov    %esp,%ebp
08a9f775 +0x0a88:  mov    0x8(%ebp),%eax
08a9f778 +0x0a8b:  mov    (%eax),%ecx
08a9f77a +0x0a8d:  mov    0xc(%ebp),%edx
08a9f77d +0x0a90:  mov    %edx,%eax
08a9f77f +0x0a92:  add    %eax,%eax
08a9f781 +0x0a94:  add    %edx,%eax
08a9f783 +0x0a96:  shl    $0x2,%eax
08a9f786 +0x0a99:  lea    (%ecx,%eax,1),%eax
08a9f789 +0x0a9c:  pop    %ebp
08a9f78a +0x0a9d:  ret
08a9f78b +0x0a9e:  nop
08a9f78c +0x0a9f:  push   %ebp
08a9f78d +0x0aa0:  mov    %esp,%ebp
08a9f78f +0x0aa2:  sub    $0x18,%esp
08a9f792 +0x0aa5:  mov    0x8(%ebp),%eax
08a9f795 +0x0aa8:  mov    %eax,(%esp)
08a9f798 +0x0aab:  call   08aa15fa <+0x290d>
08a9f79d +0x0ab0:  leave
08a9f79e +0x0ab1:  ret
08a9f79f +0x0ab2:  nop
08a9f7a0 +0x0ab3:  push   %ebp
08a9f7a1 +0x0ab4:  mov    %esp,%ebp
08a9f7a3 +0x0ab6:  sub    $0x18,%esp
08a9f7a6 +0x0ab9:  mov    0x8(%ebp),%eax
08a9f7a9 +0x0abc:  mov    %eax,(%esp)
08a9f7ac +0x0abf:  call   08aa15ca <+0x28dd>
08a9f7b1 +0x0ac4:  leave
08a9f7b2 +0x0ac5:  ret
08a9f7b3 +0x0ac6:  nop
08a9f7b4 +0x0ac7:  push   %ebp
08a9f7b5 +0x0ac8:  mov    %esp,%ebp
08a9f7b7 +0x0aca:  push   %esi
08a9f7b8 +0x0acb:  push   %ebx
08a9f7b9 +0x0acc:  sub    $0x10,%esp
08a9f7bc +0x0acf:  mov    0x8(%ebp),%eax
08a9f7bf +0x0ad2:  mov    0x8(%eax),%eax
08a9f7c2 +0x0ad5:  mov    %eax,%edx
08a9f7c4 +0x0ad7:  mov    0x8(%ebp),%eax
08a9f7c7 +0x0ada:  mov    (%eax),%eax
08a9f7c9 +0x0adc:  mov    %edx,%ecx
08a9f7cb +0x0ade:  sub    %eax,%ecx
08a9f7cd +0x0ae0:  mov    %ecx,%eax
08a9f7cf +0x0ae2:  sar    $0x2,%eax
08a9f7d2 +0x0ae5:  mov    %eax,%edx
08a9f7d4 +0x0ae7:  mov    0x8(%ebp),%eax
08a9f7d7 +0x0aea:  mov    (%eax),%eax
08a9f7d9 +0x0aec:  mov    %edx,0x8(%esp)
08a9f7dd +0x0af0:  mov    %eax,0x4(%esp)
08a9f7e1 +0x0af4:  mov    0x8(%ebp),%eax
08a9f7e4 +0x0af7:  mov    %eax,(%esp)
08a9f7e7 +0x0afa:  call   08aa160e <+0x2921>
08a9f7ec +0x0aff:  jmp    08a9f809 <+0xb1c>
08a9f7ee +0x0b01:  mov    %edx,%ebx
08a9f7f0 +0x0b03:  mov    %eax,%esi
08a9f7f2 +0x0b05:  mov    0x8(%ebp),%eax
08a9f7f5 +0x0b08:  mov    %eax,(%esp)
08a9f7f8 +0x0b0b:  call   08a9f78c <+0xa9f>
08a9f7fd +0x0b10:  mov    %esi,%eax
08a9f7ff +0x0b12:  mov    %ebx,%edx
08a9f801 +0x0b14:  mov    %eax,(%esp)
08a9f804 +0x0b17:  call   08ae3750 <_Unwind_Resume>
08a9f809 +0x0b1c:  mov    0x8(%ebp),%eax
08a9f80c +0x0b1f:  mov    %eax,(%esp)
08a9f80f +0x0b22:  call   08a9f78c <+0xa9f>
08a9f814 +0x0b27:  add    $0x10,%esp
08a9f817 +0x0b2a:  pop    %ebx
08a9f818 +0x0b2b:  pop    %esi
08a9f819 +0x0b2c:  pop    %ebp
08a9f81a +0x0b2d:  ret
08a9f81b +0x0b2e:  nop
08a9f81c +0x0b2f:  push   %ebp
08a9f81d +0x0b30:  mov    %esp,%ebp
08a9f81f +0x0b32:  mov    0x8(%ebp),%eax
08a9f822 +0x0b35:  pop    %ebp
08a9f823 +0x0b36:  ret
08a9f824 +0x0b37:  push   %ebp
08a9f825 +0x0b38:  mov    %esp,%ebp
08a9f827 +0x0b3a:  sub    $0x18,%esp
08a9f82a +0x0b3d:  mov    0xc(%ebp),%eax
08a9f82d +0x0b40:  mov    %eax,0x4(%esp)
08a9f831 +0x0b44:  mov    0x8(%ebp),%eax
08a9f834 +0x0b47:  mov    %eax,(%esp)
08a9f837 +0x0b4a:  call   08aa1635 <+0x2948>
08a9f83c +0x0b4f:  leave
08a9f83d +0x0b50:  ret
08a9f83e +0x0b51:  push   %ebp
08a9f83f +0x0b52:  mov    %esp,%ebp
08a9f841 +0x0b54:  sub    $0x18,%esp
08a9f844 +0x0b57:  mov    0x8(%ebp),%eax
08a9f847 +0x0b5a:  mov    %eax,(%esp)
08a9f84a +0x0b5d:  call   08aa1680 <+0x2993>
08a9f84f +0x0b62:  leave
08a9f850 +0x0b63:  ret
08a9f851 +0x0b64:  nop
08a9f852 +0x0b65:  push   %ebp
08a9f853 +0x0b66:  mov    %esp,%ebp
08a9f855 +0x0b68:  sub    $0x18,%esp
08a9f858 +0x0b6b:  mov    0x8(%ebp),%eax
08a9f85b +0x0b6e:  mov    %eax,(%esp)
08a9f85e +0x0b71:  call   08aa1650 <+0x2963>
08a9f863 +0x0b76:  leave
08a9f864 +0x0b77:  ret
08a9f865 +0x0b78:  nop
08a9f866 +0x0b79:  push   %ebp
08a9f867 +0x0b7a:  mov    %esp,%ebp
08a9f869 +0x0b7c:  push   %esi
08a9f86a +0x0b7d:  push   %ebx
08a9f86b +0x0b7e:  sub    $0x10,%esp
08a9f86e +0x0b81:  mov    0x8(%ebp),%eax
08a9f871 +0x0b84:  mov    0x8(%eax),%eax
08a9f874 +0x0b87:  mov    %eax,%edx
08a9f876 +0x0b89:  mov    0x8(%ebp),%eax
08a9f879 +0x0b8c:  mov    (%eax),%eax
08a9f87b +0x0b8e:  mov    %edx,%ecx
08a9f87d +0x0b90:  sub    %eax,%ecx
08a9f87f +0x0b92:  mov    %ecx,%eax
08a9f881 +0x0b94:  sar    $0x4,%eax
08a9f884 +0x0b97:  mov    %eax,%edx
08a9f886 +0x0b99:  mov    0x8(%ebp),%eax
08a9f889 +0x0b9c:  mov    (%eax),%eax
08a9f88b +0x0b9e:  mov    %edx,0x8(%esp)
08a9f88f +0x0ba2:  mov    %eax,0x4(%esp)
08a9f893 +0x0ba6:  mov    0x8(%ebp),%eax
08a9f896 +0x0ba9:  mov    %eax,(%esp)
08a9f899 +0x0bac:  call   08aa1694 <+0x29a7>
08a9f89e +0x0bb1:  jmp    08a9f8bb <+0xbce>
08a9f8a0 +0x0bb3:  mov    %edx,%ebx
08a9f8a2 +0x0bb5:  mov    %eax,%esi
08a9f8a4 +0x0bb7:  mov    0x8(%ebp),%eax
08a9f8a7 +0x0bba:  mov    %eax,(%esp)
08a9f8aa +0x0bbd:  call   08a9f83e <+0xb51>
08a9f8af +0x0bc2:  mov    %esi,%eax
08a9f8b1 +0x0bc4:  mov    %ebx,%edx
08a9f8b3 +0x0bc6:  mov    %eax,(%esp)
08a9f8b6 +0x0bc9:  call   08ae3750 <_Unwind_Resume>
08a9f8bb +0x0bce:  mov    0x8(%ebp),%eax
08a9f8be +0x0bd1:  mov    %eax,(%esp)
08a9f8c1 +0x0bd4:  call   08a9f83e <+0xb51>
08a9f8c6 +0x0bd9:  add    $0x10,%esp
08a9f8c9 +0x0bdc:  pop    %ebx
08a9f8ca +0x0bdd:  pop    %esi
08a9f8cb +0x0bde:  pop    %ebp
08a9f8cc +0x0bdf:  ret
08a9f8cd +0x0be0:  nop
08a9f8ce +0x0be1:  push   %ebp
08a9f8cf +0x0be2:  mov    %esp,%ebp
08a9f8d1 +0x0be4:  mov    0x8(%ebp),%eax
08a9f8d4 +0x0be7:  pop    %ebp
08a9f8d5 +0x0be8:  ret
08a9f8d6 +0x0be9:  push   %ebp
08a9f8d7 +0x0bea:  mov    %esp,%ebp
08a9f8d9 +0x0bec:  sub    $0x18,%esp
08a9f8dc +0x0bef:  mov    0xc(%ebp),%eax
08a9f8df +0x0bf2:  mov    %eax,0x4(%esp)
08a9f8e3 +0x0bf6:  mov    0x8(%ebp),%eax
08a9f8e6 +0x0bf9:  mov    %eax,(%esp)
08a9f8e9 +0x0bfc:  call   08aa16bb <+0x29ce>
08a9f8ee +0x0c01:  leave
08a9f8ef +0x0c02:  ret
08a9f8f0 +0x0c03:  push   %ebp
08a9f8f1 +0x0c04:  mov    %esp,%ebp
08a9f8f3 +0x0c06:  sub    $0x18,%esp
08a9f8f6 +0x0c09:  mov    0x8(%ebp),%eax
08a9f8f9 +0x0c0c:  mov    %eax,(%esp)
08a9f8fc +0x0c0f:  call   08aa1706 <+0x2a19>
08a9f901 +0x0c14:  leave
08a9f902 +0x0c15:  ret
08a9f903 +0x0c16:  nop
08a9f904 +0x0c17:  push   %ebp
08a9f905 +0x0c18:  mov    %esp,%ebp
08a9f907 +0x0c1a:  sub    $0x18,%esp
08a9f90a +0x0c1d:  mov    0x8(%ebp),%eax
08a9f90d +0x0c20:  mov    %eax,(%esp)
08a9f910 +0x0c23:  call   08aa16d6 <+0x29e9>
08a9f915 +0x0c28:  leave
08a9f916 +0x0c29:  ret
08a9f917 +0x0c2a:  nop
08a9f918 +0x0c2b:  push   %ebp
08a9f919 +0x0c2c:  mov    %esp,%ebp
08a9f91b +0x0c2e:  push   %esi
08a9f91c +0x0c2f:  push   %ebx
08a9f91d +0x0c30:  sub    $0x10,%esp
08a9f920 +0x0c33:  mov    0x8(%ebp),%eax
08a9f923 +0x0c36:  mov    0x8(%eax),%eax
08a9f926 +0x0c39:  mov    %eax,%edx
08a9f928 +0x0c3b:  mov    0x8(%ebp),%eax
08a9f92b +0x0c3e:  mov    (%eax),%eax
08a9f92d +0x0c40:  mov    %edx,%ecx
08a9f92f +0x0c42:  sub    %eax,%ecx
08a9f931 +0x0c44:  mov    %ecx,%eax
08a9f933 +0x0c46:  sar    $0x2,%eax
08a9f936 +0x0c49:  imul   $0xcccccccd,%eax,%eax
08a9f93c +0x0c4f:  mov    %eax,%edx
08a9f93e +0x0c51:  mov    0x8(%ebp),%eax
08a9f941 +0x0c54:  mov    (%eax),%eax
08a9f943 +0x0c56:  mov    %edx,0x8(%esp)
08a9f947 +0x0c5a:  mov    %eax,0x4(%esp)
08a9f94b +0x0c5e:  mov    0x8(%ebp),%eax
08a9f94e +0x0c61:  mov    %eax,(%esp)
08a9f951 +0x0c64:  call   08aa171a <+0x2a2d>
08a9f956 +0x0c69:  jmp    08a9f973 <+0xc86>
08a9f958 +0x0c6b:  mov    %edx,%ebx
08a9f95a +0x0c6d:  mov    %eax,%esi
08a9f95c +0x0c6f:  mov    0x8(%ebp),%eax
08a9f95f +0x0c72:  mov    %eax,(%esp)
08a9f962 +0x0c75:  call   08a9f8f0 <+0xc03>
08a9f967 +0x0c7a:  mov    %esi,%eax
08a9f969 +0x0c7c:  mov    %ebx,%edx
08a9f96b +0x0c7e:  mov    %eax,(%esp)
08a9f96e +0x0c81:  call   08ae3750 <_Unwind_Resume>
08a9f973 +0x0c86:  mov    0x8(%ebp),%eax
08a9f976 +0x0c89:  mov    %eax,(%esp)
08a9f979 +0x0c8c:  call   08a9f8f0 <+0xc03>
08a9f97e +0x0c91:  add    $0x10,%esp
08a9f981 +0x0c94:  pop    %ebx
08a9f982 +0x0c95:  pop    %esi
08a9f983 +0x0c96:  pop    %ebp
08a9f984 +0x0c97:  ret
08a9f985 +0x0c98:  nop
08a9f986 +0x0c99:  push   %ebp
08a9f987 +0x0c9a:  mov    %esp,%ebp
08a9f989 +0x0c9c:  mov    0x8(%ebp),%eax
08a9f98c +0x0c9f:  pop    %ebp
08a9f98d +0x0ca0:  ret
08a9f98e +0x0ca1:  push   %ebp
08a9f98f +0x0ca2:  mov    %esp,%ebp
08a9f991 +0x0ca4:  sub    $0x18,%esp
08a9f994 +0x0ca7:  mov    0xc(%ebp),%eax
08a9f997 +0x0caa:  mov    %eax,0x4(%esp)
08a9f99b +0x0cae:  mov    0x8(%ebp),%eax
08a9f99e +0x0cb1:  mov    %eax,(%esp)
08a9f9a1 +0x0cb4:  call   08aa1741 <+0x2a54>
08a9f9a6 +0x0cb9:  leave
08a9f9a7 +0x0cba:  ret
08a9f9a8 +0x0cbb:  push   %ebp
08a9f9a9 +0x0cbc:  mov    %esp,%ebp
08a9f9ab +0x0cbe:  sub    $0x18,%esp
08a9f9ae +0x0cc1:  mov    0x8(%ebp),%eax
08a9f9b1 +0x0cc4:  mov    %eax,(%esp)
08a9f9b4 +0x0cc7:  call   08aa178c <+0x2a9f>
08a9f9b9 +0x0ccc:  leave
08a9f9ba +0x0ccd:  ret
08a9f9bb +0x0cce:  nop
08a9f9bc +0x0ccf:  push   %ebp
08a9f9bd +0x0cd0:  mov    %esp,%ebp
08a9f9bf +0x0cd2:  sub    $0x18,%esp
08a9f9c2 +0x0cd5:  mov    0x8(%ebp),%eax
08a9f9c5 +0x0cd8:  mov    %eax,(%esp)
08a9f9c8 +0x0cdb:  call   08aa175c <+0x2a6f>
08a9f9cd +0x0ce0:  leave
08a9f9ce +0x0ce1:  ret
08a9f9cf +0x0ce2:  nop
08a9f9d0 +0x0ce3:  push   %ebp
08a9f9d1 +0x0ce4:  mov    %esp,%ebp
08a9f9d3 +0x0ce6:  push   %esi
08a9f9d4 +0x0ce7:  push   %ebx
08a9f9d5 +0x0ce8:  sub    $0x10,%esp
08a9f9d8 +0x0ceb:  mov    0x8(%ebp),%eax
08a9f9db +0x0cee:  mov    0x8(%eax),%eax
08a9f9de +0x0cf1:  mov    %eax,%edx
08a9f9e0 +0x0cf3:  mov    0x8(%ebp),%eax
08a9f9e3 +0x0cf6:  mov    (%eax),%eax
08a9f9e5 +0x0cf8:  mov    %edx,%ecx
08a9f9e7 +0x0cfa:  sub    %eax,%ecx
08a9f9e9 +0x0cfc:  mov    %ecx,%eax
08a9f9eb +0x0cfe:  sar    $0x4,%eax
08a9f9ee +0x0d01:  mov    %eax,%edx
08a9f9f0 +0x0d03:  mov    0x8(%ebp),%eax
08a9f9f3 +0x0d06:  mov    (%eax),%eax
08a9f9f5 +0x0d08:  mov    %edx,0x8(%esp)
08a9f9f9 +0x0d0c:  mov    %eax,0x4(%esp)
08a9f9fd +0x0d10:  mov    0x8(%ebp),%eax
08a9fa00 +0x0d13:  mov    %eax,(%esp)
08a9fa03 +0x0d16:  call   08aa17a0 <+0x2ab3>
08a9fa08 +0x0d1b:  jmp    08a9fa25 <+0xd38>
08a9fa0a +0x0d1d:  mov    %edx,%ebx
08a9fa0c +0x0d1f:  mov    %eax,%esi
08a9fa0e +0x0d21:  mov    0x8(%ebp),%eax
08a9fa11 +0x0d24:  mov    %eax,(%esp)
08a9fa14 +0x0d27:  call   08a9f9a8 <+0xcbb>
08a9fa19 +0x0d2c:  mov    %esi,%eax
08a9fa1b +0x0d2e:  mov    %ebx,%edx
08a9fa1d +0x0d30:  mov    %eax,(%esp)
08a9fa20 +0x0d33:  call   08ae3750 <_Unwind_Resume>
08a9fa25 +0x0d38:  mov    0x8(%ebp),%eax
08a9fa28 +0x0d3b:  mov    %eax,(%esp)
08a9fa2b +0x0d3e:  call   08a9f9a8 <+0xcbb>
08a9fa30 +0x0d43:  add    $0x10,%esp
08a9fa33 +0x0d46:  pop    %ebx
08a9fa34 +0x0d47:  pop    %esi
08a9fa35 +0x0d48:  pop    %ebp
08a9fa36 +0x0d49:  ret
08a9fa37 +0x0d4a:  nop
08a9fa38 +0x0d4b:  push   %ebp
08a9fa39 +0x0d4c:  mov    %esp,%ebp
08a9fa3b +0x0d4e:  mov    0x8(%ebp),%eax
08a9fa3e +0x0d51:  pop    %ebp
08a9fa3f +0x0d52:  ret
08a9fa40 +0x0d53:  push   %ebp
08a9fa41 +0x0d54:  mov    %esp,%ebp
08a9fa43 +0x0d56:  sub    $0x18,%esp
08a9fa46 +0x0d59:  mov    0xc(%ebp),%eax
08a9fa49 +0x0d5c:  mov    %eax,0x4(%esp)
08a9fa4d +0x0d60:  mov    0x8(%ebp),%eax
08a9fa50 +0x0d63:  mov    %eax,(%esp)
08a9fa53 +0x0d66:  call   08aa17c7 <+0x2ada>
08a9fa58 +0x0d6b:  leave
08a9fa59 +0x0d6c:  ret
08a9fa5a +0x0d6d:  push   %ebp
08a9fa5b +0x0d6e:  mov    %esp,%ebp
08a9fa5d +0x0d70:  sub    $0x18,%esp
08a9fa60 +0x0d73:  mov    0x8(%ebp),%eax
08a9fa63 +0x0d76:  mov    %eax,(%esp)
08a9fa66 +0x0d79:  call   08aa1812 <+0x2b25>
08a9fa6b +0x0d7e:  leave
08a9fa6c +0x0d7f:  ret
08a9fa6d +0x0d80:  nop
08a9fa6e +0x0d81:  push   %ebp
08a9fa6f +0x0d82:  mov    %esp,%ebp
08a9fa71 +0x0d84:  sub    $0x18,%esp
08a9fa74 +0x0d87:  mov    0x8(%ebp),%eax
08a9fa77 +0x0d8a:  mov    %eax,(%esp)
08a9fa7a +0x0d8d:  call   08aa17e2 <+0x2af5>
08a9fa7f +0x0d92:  leave
08a9fa80 +0x0d93:  ret
08a9fa81 +0x0d94:  nop
08a9fa82 +0x0d95:  push   %ebp
08a9fa83 +0x0d96:  mov    %esp,%ebp
08a9fa85 +0x0d98:  push   %esi
08a9fa86 +0x0d99:  push   %ebx
08a9fa87 +0x0d9a:  sub    $0x10,%esp
08a9fa8a +0x0d9d:  mov    0x8(%ebp),%eax
08a9fa8d +0x0da0:  mov    0x8(%eax),%eax
08a9fa90 +0x0da3:  mov    %eax,%edx
08a9fa92 +0x0da5:  mov    0x8(%ebp),%eax
08a9fa95 +0x0da8:  mov    (%eax),%eax
08a9fa97 +0x0daa:  mov    %edx,%ecx
08a9fa99 +0x0dac:  sub    %eax,%ecx
08a9fa9b +0x0dae:  mov    %ecx,%eax
08a9fa9d +0x0db0:  sar    $0x4,%eax
08a9faa0 +0x0db3:  mov    %eax,%edx
08a9faa2 +0x0db5:  mov    0x8(%ebp),%eax
08a9faa5 +0x0db8:  mov    (%eax),%eax
08a9faa7 +0x0dba:  mov    %edx,0x8(%esp)
08a9faab +0x0dbe:  mov    %eax,0x4(%esp)
08a9faaf +0x0dc2:  mov    0x8(%ebp),%eax
08a9fab2 +0x0dc5:  mov    %eax,(%esp)
08a9fab5 +0x0dc8:  call   08aa1826 <+0x2b39>
08a9faba +0x0dcd:  jmp    08a9fad7 <+0xdea>
08a9fabc +0x0dcf:  mov    %edx,%ebx
08a9fabe +0x0dd1:  mov    %eax,%esi
08a9fac0 +0x0dd3:  mov    0x8(%ebp),%eax
08a9fac3 +0x0dd6:  mov    %eax,(%esp)
08a9fac6 +0x0dd9:  call   08a9fa5a <+0xd6d>
08a9facb +0x0dde:  mov    %esi,%eax
08a9facd +0x0de0:  mov    %ebx,%edx
08a9facf +0x0de2:  mov    %eax,(%esp)
08a9fad2 +0x0de5:  call   08ae3750 <_Unwind_Resume>
08a9fad7 +0x0dea:  mov    0x8(%ebp),%eax
08a9fada +0x0ded:  mov    %eax,(%esp)
08a9fadd +0x0df0:  call   08a9fa5a <+0xd6d>
08a9fae2 +0x0df5:  add    $0x10,%esp
08a9fae5 +0x0df8:  pop    %ebx
08a9fae6 +0x0df9:  pop    %esi
08a9fae7 +0x0dfa:  pop    %ebp
08a9fae8 +0x0dfb:  ret
08a9fae9 +0x0dfc:  nop
08a9faea +0x0dfd:  push   %ebp
08a9faeb +0x0dfe:  mov    %esp,%ebp
08a9faed +0x0e00:  mov    0x8(%ebp),%eax
08a9faf0 +0x0e03:  pop    %ebp
08a9faf1 +0x0e04:  ret
08a9faf2 +0x0e05:  push   %ebp
08a9faf3 +0x0e06:  mov    %esp,%ebp
08a9faf5 +0x0e08:  sub    $0x18,%esp
08a9faf8 +0x0e0b:  mov    0xc(%ebp),%eax
08a9fafb +0x0e0e:  mov    %eax,0x4(%esp)
08a9faff +0x0e12:  mov    0x8(%ebp),%eax
08a9fb02 +0x0e15:  mov    %eax,(%esp)
08a9fb05 +0x0e18:  call   08aa184d <+0x2b60>
08a9fb0a +0x0e1d:  leave
08a9fb0b +0x0e1e:  ret
08a9fb0c +0x0e1f:  push   %ebp
08a9fb0d +0x0e20:  mov    %esp,%ebp
08a9fb0f +0x0e22:  sub    $0x18,%esp
08a9fb12 +0x0e25:  mov    0x8(%ebp),%eax
08a9fb15 +0x0e28:  mov    %eax,(%esp)
08a9fb18 +0x0e2b:  call   08aa1868 <+0x2b7b>
08a9fb1d +0x0e30:  leave
08a9fb1e +0x0e31:  ret
08a9fb1f +0x0e32:  nop
08a9fb20 +0x0e33:  push   %ebp
08a9fb21 +0x0e34:  mov    %esp,%ebp
08a9fb23 +0x0e36:  sub    $0x18,%esp
08a9fb26 +0x0e39:  mov    0x8(%ebp),%eax
08a9fb29 +0x0e3c:  mov    %eax,(%esp)
08a9fb2c +0x0e3f:  call   08aa18b8 <+0x2bcb>
08a9fb31 +0x0e44:  leave
08a9fb32 +0x0e45:  ret
08a9fb33 +0x0e46:  nop
08a9fb34 +0x0e47:  push   %ebp
08a9fb35 +0x0e48:  mov    %esp,%ebp
08a9fb37 +0x0e4a:  sub    $0x28,%esp
08a9fb3a +0x0e4d:  jmp    08a9fb7c <+0xe8f>
08a9fb3c +0x0e4f:  mov    0xc(%ebp),%eax
08a9fb3f +0x0e52:  mov    %eax,(%esp)
08a9fb42 +0x0e55:  call   08aa18bd <+0x2bd0>
08a9fb47 +0x0e5a:  mov    %eax,0x4(%esp)
08a9fb4b +0x0e5e:  mov    0x8(%ebp),%eax
08a9fb4e +0x0e61:  mov    %eax,(%esp)
08a9fb51 +0x0e64:  call   08a9fb34 <+0xe47>
08a9fb56 +0x0e69:  mov    0xc(%ebp),%eax
08a9fb59 +0x0e6c:  mov    %eax,(%esp)
08a9fb5c +0x0e6f:  call   08aa18c8 <+0x2bdb>
08a9fb61 +0x0e74:  mov    %eax,-0xc(%ebp)
08a9fb64 +0x0e77:  mov    0xc(%ebp),%eax
08a9fb67 +0x0e7a:  mov    %eax,0x4(%esp)
08a9fb6b +0x0e7e:  mov    0x8(%ebp),%eax
08a9fb6e +0x0e81:  mov    %eax,(%esp)
08a9fb71 +0x0e84:  call   08aa18d4 <+0x2be7>
08a9fb76 +0x0e89:  mov    -0xc(%ebp),%eax
08a9fb79 +0x0e8c:  mov    %eax,0xc(%ebp)
08a9fb7c +0x0e8f:  cmpl   $0x0,0xc(%ebp)
08a9fb80 +0x0e93:  setne  %al
08a9fb83 +0x0e96:  test   %al,%al
08a9fb85 +0x0e98:  jne    08a9fb3c <+0xe4f>
08a9fb87 +0x0e9a:  leave
08a9fb88 +0x0e9b:  ret
08a9fb89 +0x0e9c:  nop
08a9fb8a +0x0e9d:  push   %ebp
08a9fb8b +0x0e9e:  mov    %esp,%ebp
08a9fb8d +0x0ea0:  mov    0x8(%ebp),%eax
08a9fb90 +0x0ea3:  mov    0x8(%eax),%eax
08a9fb93 +0x0ea6:  pop    %ebp
08a9fb94 +0x0ea7:  ret
08a9fb95 +0x0ea8:  nop
08a9fb96 +0x0ea9:  push   %ebp
08a9fb97 +0x0eaa:  mov    %esp,%ebp
08a9fb99 +0x0eac:  sub    $0x18,%esp
08a9fb9c +0x0eaf:  mov    0x8(%ebp),%eax
08a9fb9f +0x0eb2:  mov    %eax,(%esp)
08a9fba2 +0x0eb5:  call   08aa1938 <+0x2c4b>
08a9fba7 +0x0eba:  leave
08a9fba8 +0x0ebb:  ret
08a9fba9 +0x0ebc:  nop
08a9fbaa +0x0ebd:  push   %ebp
08a9fbab +0x0ebe:  mov    %esp,%ebp
08a9fbad +0x0ec0:  sub    $0x18,%esp
08a9fbb0 +0x0ec3:  mov    0x8(%ebp),%eax
08a9fbb3 +0x0ec6:  mov    %eax,(%esp)
08a9fbb6 +0x0ec9:  call   08aa1908 <+0x2c1b>
08a9fbbb +0x0ece:  leave
08a9fbbc +0x0ecf:  ret
08a9fbbd +0x0ed0:  nop
08a9fbbe +0x0ed1:  push   %ebp
08a9fbbf +0x0ed2:  mov    %esp,%ebp
08a9fbc1 +0x0ed4:  push   %esi
08a9fbc2 +0x0ed5:  push   %ebx
08a9fbc3 +0x0ed6:  sub    $0x10,%esp
08a9fbc6 +0x0ed9:  mov    0x8(%ebp),%eax
08a9fbc9 +0x0edc:  mov    0x8(%eax),%eax
08a9fbcc +0x0edf:  mov    %eax,%edx
08a9fbce +0x0ee1:  mov    0x8(%ebp),%eax
08a9fbd1 +0x0ee4:  mov    (%eax),%eax
08a9fbd3 +0x0ee6:  mov    %edx,%ecx
08a9fbd5 +0x0ee8:  sub    %eax,%ecx
08a9fbd7 +0x0eea:  mov    %ecx,%eax
08a9fbd9 +0x0eec:  sar    $0x2,%eax
08a9fbdc +0x0eef:  imul   $0xaaaaaaab,%eax,%eax
08a9fbe2 +0x0ef5:  mov    %eax,%edx
08a9fbe4 +0x0ef7:  mov    0x8(%ebp),%eax
08a9fbe7 +0x0efa:  mov    (%eax),%eax
08a9fbe9 +0x0efc:  mov    %edx,0x8(%esp)
08a9fbed +0x0f00:  mov    %eax,0x4(%esp)
08a9fbf1 +0x0f04:  mov    0x8(%ebp),%eax
08a9fbf4 +0x0f07:  mov    %eax,(%esp)
08a9fbf7 +0x0f0a:  call   08aa194c <+0x2c5f>
08a9fbfc +0x0f0f:  jmp    08a9fc19 <+0xf2c>
08a9fbfe +0x0f11:  mov    %edx,%ebx
08a9fc00 +0x0f13:  mov    %eax,%esi
08a9fc02 +0x0f15:  mov    0x8(%ebp),%eax
08a9fc05 +0x0f18:  mov    %eax,(%esp)
08a9fc08 +0x0f1b:  call   08a9fb96 <+0xea9>
08a9fc0d +0x0f20:  mov    %esi,%eax
08a9fc0f +0x0f22:  mov    %ebx,%edx
08a9fc11 +0x0f24:  mov    %eax,(%esp)
08a9fc14 +0x0f27:  call   08ae3750 <_Unwind_Resume>
08a9fc19 +0x0f2c:  mov    0x8(%ebp),%eax
08a9fc1c +0x0f2f:  mov    %eax,(%esp)
08a9fc1f +0x0f32:  call   08a9fb96 <+0xea9>
08a9fc24 +0x0f37:  add    $0x10,%esp
08a9fc27 +0x0f3a:  pop    %ebx
08a9fc28 +0x0f3b:  pop    %esi
08a9fc29 +0x0f3c:  pop    %ebp
08a9fc2a +0x0f3d:  ret
08a9fc2b +0x0f3e:  nop
08a9fc2c +0x0f3f:  push   %ebp
08a9fc2d +0x0f40:  mov    %esp,%ebp
08a9fc2f +0x0f42:  mov    0x8(%ebp),%eax
08a9fc32 +0x0f45:  pop    %ebp
08a9fc33 +0x0f46:  ret
08a9fc34 +0x0f47:  push   %ebp
08a9fc35 +0x0f48:  mov    %esp,%ebp
08a9fc37 +0x0f4a:  sub    $0x18,%esp
08a9fc3a +0x0f4d:  mov    0xc(%ebp),%eax
08a9fc3d +0x0f50:  mov    %eax,0x4(%esp)
08a9fc41 +0x0f54:  mov    0x8(%ebp),%eax
08a9fc44 +0x0f57:  mov    %eax,(%esp)
08a9fc47 +0x0f5a:  call   08aa1973 <+0x2c86>
08a9fc4c +0x0f5f:  leave
08a9fc4d +0x0f60:  ret
08a9fc4e +0x0f61:  push   %ebp
08a9fc4f +0x0f62:  mov    %esp,%ebp
08a9fc51 +0x0f64:  sub    $0x18,%esp
08a9fc54 +0x0f67:  mov    0x8(%ebp),%eax
08a9fc57 +0x0f6a:  mov    %eax,(%esp)
08a9fc5a +0x0f6d:  call   08a9f81c <+0xb2f>
08a9fc5f +0x0f72:  mov    0x8(%ebp),%edx
08a9fc62 +0x0f75:  mov    0x4(%edx),%edx
08a9fc65 +0x0f78:  mov    %eax,0x8(%esp)
08a9fc69 +0x0f7c:  mov    %edx,0x4(%esp)
08a9fc6d +0x0f80:  mov    0xc(%ebp),%eax
08a9fc70 +0x0f83:  mov    %eax,(%esp)
08a9fc73 +0x0f86:  call   08a9f824 <+0xb37>
08a9fc78 +0x0f8b:  mov    0x8(%ebp),%eax
08a9fc7b +0x0f8e:  mov    0xc(%ebp),%edx
08a9fc7e +0x0f91:  mov    %edx,0x4(%eax)
08a9fc81 +0x0f94:  leave
08a9fc82 +0x0f95:  ret
08a9fc83 +0x0f96:  nop
08a9fc84 +0x0f97:  push   %ebp
08a9fc85 +0x0f98:  mov    %esp,%ebp
08a9fc87 +0x0f9a:  push   %ebx
08a9fc88 +0x0f9b:  sub    $0x14,%esp
08a9fc8b +0x0f9e:  mov    0x8(%ebp),%ebx
08a9fc8e +0x0fa1:  mov    0xc(%ebp),%eax
08a9fc91 +0x0fa4:  mov    0xc(%eax),%eax
08a9fc94 +0x0fa7:  mov    %eax,0x4(%esp)
08a9fc98 +0x0fab:  mov    %ebx,(%esp)
08a9fc9b +0x0fae:  call   08aa198e <+0x2ca1>
08a9fca0 +0x0fb3:  mov    %ebx,%eax
08a9fca2 +0x0fb5:  add    $0x14,%esp
08a9fca5 +0x0fb8:  pop    %ebx
08a9fca6 +0x0fb9:  pop    %ebp
08a9fca7 +0x0fba:  ret    $0x4
08a9fcaa +0x0fbd:  push   %ebp
08a9fcab +0x0fbe:  mov    %esp,%ebp
08a9fcad +0x0fc0:  push   %ebx
08a9fcae +0x0fc1:  sub    $0x14,%esp
08a9fcb1 +0x0fc4:  mov    0x8(%ebp),%ebx
08a9fcb4 +0x0fc7:  mov    0xc(%ebp),%eax
08a9fcb7 +0x0fca:  add    $0x4,%eax
08a9fcba +0x0fcd:  mov    %eax,0x4(%esp)
08a9fcbe +0x0fd1:  mov    %ebx,(%esp)
08a9fcc1 +0x0fd4:  call   08aa198e <+0x2ca1>
08a9fcc6 +0x0fd9:  mov    %ebx,%eax
08a9fcc8 +0x0fdb:  add    $0x14,%esp
08a9fccb +0x0fde:  pop    %ebx
08a9fccc +0x0fdf:  pop    %ebp
08a9fccd +0x0fe0:  ret    $0x4
08a9fcd0 +0x0fe3:  push   %ebp
08a9fcd1 +0x0fe4:  mov    %esp,%ebp
08a9fcd3 +0x0fe6:  sub    $0x18,%esp
08a9fcd6 +0x0fe9:  mov    0x8(%ebp),%eax
08a9fcd9 +0x0fec:  mov    %eax,(%esp)
08a9fcdc +0x0fef:  call   08aa199c <+0x2caf>
08a9fce1 +0x0ff4:  leave
08a9fce2 +0x0ff5:  ret
08a9fce3 +0x0ff6:  nop
08a9fce4 +0x0ff7:  push   %ebp
08a9fce5 +0x0ff8:  mov    %esp,%ebp
08a9fce7 +0x0ffa:  push   %esi
08a9fce8 +0x0ffb:  push   %ebx
08a9fce9 +0x0ffc:  sub    $0x10,%esp
08a9fcec +0x0fff:  mov    0x8(%ebp),%eax
08a9fcef +0x1002:  mov    0x8(%eax),%eax
08a9fcf2 +0x1005:  mov    %eax,%edx
08a9fcf4 +0x1007:  mov    0x8(%ebp),%eax
08a9fcf7 +0x100a:  mov    (%eax),%eax
08a9fcf9 +0x100c:  mov    %edx,%ecx
08a9fcfb +0x100e:  sub    %eax,%ecx
08a9fcfd +0x1010:  mov    %ecx,%eax
08a9fcff +0x1012:  sar    $0x4,%eax
08a9fd02 +0x1015:  mov    %eax,%edx
08a9fd04 +0x1017:  mov    0x8(%ebp),%eax
08a9fd07 +0x101a:  mov    (%eax),%eax
08a9fd09 +0x101c:  mov    %edx,0x8(%esp)
08a9fd0d +0x1020:  mov    %eax,0x4(%esp)
08a9fd11 +0x1024:  mov    0x8(%ebp),%eax
08a9fd14 +0x1027:  mov    %eax,(%esp)
08a9fd17 +0x102a:  call   08aa19b0 <+0x2cc3>
08a9fd1c +0x102f:  jmp    08a9fd39 <+0x104c>
08a9fd1e +0x1031:  mov    %edx,%ebx
08a9fd20 +0x1033:  mov    %eax,%esi
08a9fd22 +0x1035:  mov    0x8(%ebp),%eax
08a9fd25 +0x1038:  mov    %eax,(%esp)
08a9fd28 +0x103b:  call   08a9fcd0 <+0xfe3>
08a9fd2d +0x1040:  mov    %esi,%eax
08a9fd2f +0x1042:  mov    %ebx,%edx
08a9fd31 +0x1044:  mov    %eax,(%esp)
08a9fd34 +0x1047:  call   08ae3750 <_Unwind_Resume>
08a9fd39 +0x104c:  mov    0x8(%ebp),%eax
08a9fd3c +0x104f:  mov    %eax,(%esp)
08a9fd3f +0x1052:  call   08a9fcd0 <+0xfe3>
08a9fd44 +0x1057:  add    $0x10,%esp
08a9fd47 +0x105a:  pop    %ebx
08a9fd48 +0x105b:  pop    %esi
08a9fd49 +0x105c:  pop    %ebp
08a9fd4a +0x105d:  ret
08a9fd4b +0x105e:  nop
08a9fd4c +0x105f:  push   %ebp
08a9fd4d +0x1060:  mov    %esp,%ebp
08a9fd4f +0x1062:  mov    0x8(%ebp),%eax
08a9fd52 +0x1065:  pop    %ebp
08a9fd53 +0x1066:  ret
08a9fd54 +0x1067:  push   %ebp
08a9fd55 +0x1068:  mov    %esp,%ebp
08a9fd57 +0x106a:  sub    $0x18,%esp
08a9fd5a +0x106d:  mov    0xc(%ebp),%eax
08a9fd5d +0x1070:  mov    %eax,0x4(%esp)
08a9fd61 +0x1074:  mov    0x8(%ebp),%eax
08a9fd64 +0x1077:  mov    %eax,(%esp)
08a9fd67 +0x107a:  call   08aa19d7 <+0x2cea>
08a9fd6c +0x107f:  leave
08a9fd6d +0x1080:  ret
08a9fd6e +0x1081:  push   %ebp
08a9fd6f +0x1082:  mov    %esp,%ebp
08a9fd71 +0x1084:  push   %ebx
08a9fd72 +0x1085:  sub    $0x14,%esp
08a9fd75 +0x1088:  mov    0x8(%ebp),%eax
08a9fd78 +0x108b:  mov    %eax,(%esp)
08a9fd7b +0x108e:  call   08a9fb8a <+0xe9d>
08a9fd80 +0x1093:  mov    %eax,0x4(%esp)
08a9fd84 +0x1097:  mov    0x8(%ebp),%eax
08a9fd87 +0x109a:  mov    %eax,(%esp)
08a9fd8a +0x109d:  call   08a9fb34 <+0xe47>
08a9fd8f +0x10a2:  mov    0x8(%ebp),%eax
08a9fd92 +0x10a5:  mov    %eax,(%esp)
08a9fd95 +0x10a8:  call   08aa19fe <+0x2d11>
08a9fd9a +0x10ad:  mov    %eax,%ebx
08a9fd9c +0x10af:  mov    0x8(%ebp),%eax
08a9fd9f +0x10b2:  mov    %eax,(%esp)
08a9fda2 +0x10b5:  call   08aa19f2 <+0x2d05>
08a9fda7 +0x10ba:  mov    %eax,(%ebx)
08a9fda9 +0x10bc:  mov    0x8(%ebp),%eax
08a9fdac +0x10bf:  mov    %eax,(%esp)
08a9fdaf +0x10c2:  call   08aa1a0a <+0x2d1d>
08a9fdb4 +0x10c7:  movl   $0x0,(%eax)
08a9fdba +0x10cd:  mov    0x8(%ebp),%eax
08a9fdbd +0x10d0:  mov    %eax,(%esp)
08a9fdc0 +0x10d3:  call   08aa1a16 <+0x2d29>
08a9fdc5 +0x10d8:  mov    %eax,%ebx
08a9fdc7 +0x10da:  mov    0x8(%ebp),%eax
08a9fdca +0x10dd:  mov    %eax,(%esp)
08a9fdcd +0x10e0:  call   08aa19f2 <+0x2d05>
08a9fdd2 +0x10e5:  mov    %eax,(%ebx)
08a9fdd4 +0x10e7:  mov    0x8(%ebp),%eax
08a9fdd7 +0x10ea:  movl   $0x0,0x14(%eax)
08a9fdde +0x10f1:  add    $0x14,%esp
08a9fde1 +0x10f4:  pop    %ebx
08a9fde2 +0x10f5:  pop    %ebp
08a9fde3 +0x10f6:  ret
08a9fde4 +0x10f7:  push   %ebp
08a9fde5 +0x10f8:  mov    %esp,%ebp
08a9fde7 +0x10fa:  mov    0x8(%ebp),%eax
08a9fdea +0x10fd:  pop    %ebp
08a9fdeb +0x10fe:  ret
08a9fdec +0x10ff:  push   %ebp
08a9fded +0x1100:  mov    %esp,%ebp
08a9fdef +0x1102:  sub    $0x28,%esp
08a9fdf2 +0x1105:  mov    0x8(%ebp),%eax
08a9fdf5 +0x1108:  mov    0x4(%eax),%edx
08a9fdf8 +0x110b:  mov    0x8(%ebp),%eax
08a9fdfb +0x110e:  mov    0x8(%eax),%eax
08a9fdfe +0x1111:  cmp    %eax,%edx
08a9fe00 +0x1113:  je     08a9fe3f <+0x1152>
08a9fe02 +0x1115:  mov    0xc(%ebp),%eax
08a9fe05 +0x1118:  mov    %eax,(%esp)
08a9fe08 +0x111b:  call   08aa1a21 <+0x2d34>
08a9fe0d +0x1120:  mov    (%eax),%eax
08a9fe0f +0x1122:  mov    %eax,-0x14(%ebp)
08a9fe12 +0x1125:  mov    0x8(%ebp),%eax
08a9fe15 +0x1128:  mov    0x4(%eax),%edx
08a9fe18 +0x112b:  mov    0x8(%ebp),%eax
08a9fe1b +0x112e:  lea    -0x14(%ebp),%ecx
08a9fe1e +0x1131:  mov    %ecx,0x8(%esp)
08a9fe22 +0x1135:  mov    %edx,0x4(%esp)
08a9fe26 +0x1139:  mov    %eax,(%esp)
08a9fe29 +0x113c:  call   08aa1a2a <+0x2d3d>
08a9fe2e +0x1141:  mov    0x8(%ebp),%eax
08a9fe31 +0x1144:  mov    0x4(%eax),%eax
08a9fe34 +0x1147:  lea    0x4(%eax),%edx
08a9fe37 +0x114a:  mov    0x8(%ebp),%eax
08a9fe3a +0x114d:  mov    %edx,0x4(%eax)
08a9fe3d +0x1150:  jmp    08a9fe7d <+0x1190>
08a9fe3f +0x1152:  mov    0xc(%ebp),%eax
08a9fe42 +0x1155:  mov    %eax,(%esp)
08a9fe45 +0x1158:  call   08aa1a21 <+0x2d34>
08a9fe4a +0x115d:  mov    (%eax),%eax
08a9fe4c +0x115f:  mov    %eax,-0x10(%ebp)
08a9fe4f +0x1162:  lea    -0xc(%ebp),%eax
08a9fe52 +0x1165:  mov    0x8(%ebp),%edx
08a9fe55 +0x1168:  mov    %edx,0x4(%esp)
08a9fe59 +0x116c:  mov    %eax,(%esp)
08a9fe5c +0x116f:  call   08aa1a60 <+0x2d73>
08a9fe61 +0x1174:  sub    $0x4,%esp
08a9fe64 +0x1177:  lea    -0x10(%ebp),%eax
08a9fe67 +0x117a:  mov    %eax,0x8(%esp)
08a9fe6b +0x117e:  mov    -0xc(%ebp),%eax
08a9fe6e +0x1181:  mov    %eax,0x4(%esp)
08a9fe72 +0x1185:  mov    0x8(%ebp),%eax
08a9fe75 +0x1188:  mov    %eax,(%esp)
08a9fe78 +0x118b:  call   08aa1a86 <+0x2d99>
08a9fe7d +0x1190:  leave
08a9fe7e +0x1191:  ret
08a9fe7f +0x1192:  nop
08a9fe80 +0x1193:  push   %ebp
08a9fe81 +0x1194:  mov    %esp,%ebp
08a9fe83 +0x1196:  push   %esi
08a9fe84 +0x1197:  push   %ebx
08a9fe85 +0x1198:  sub    $0x30,%esp
08a9fe88 +0x119b:  mov    0x8(%ebp),%ebx
08a9fe8b +0x119e:  mov    0xc(%ebp),%eax
08a9fe8e +0x11a1:  mov    %eax,(%esp)
08a9fe91 +0x11a4:  call   08aa19f2 <+0x2d05>
08a9fe96 +0x11a9:  mov    %eax,%esi
08a9fe98 +0x11ab:  mov    0xc(%ebp),%eax
08a9fe9b +0x11ae:  mov    %eax,(%esp)
08a9fe9e +0x11b1:  call   08a9fb8a <+0xe9d>
08a9fea3 +0x11b6:  lea    -0x10(%ebp),%edx
08a9fea6 +0x11b9:  mov    0x10(%ebp),%ecx
08a9fea9 +0x11bc:  mov    %ecx,0x10(%esp)
08a9fead +0x11c0:  mov    %esi,0xc(%esp)
08a9feb1 +0x11c4:  mov    %eax,0x8(%esp)
08a9feb5 +0x11c8:  mov    0xc(%ebp),%eax
08a9feb8 +0x11cb:  mov    %eax,0x4(%esp)
08a9febc +0x11cf:  mov    %edx,(%esp)
08a9febf +0x11d2:  call   08aa1d48 <+0x305b>
08a9fec4 +0x11d7:  sub    $0x4,%esp
08a9fec7 +0x11da:  lea    -0xc(%ebp),%eax
08a9feca +0x11dd:  mov    0xc(%ebp),%edx
08a9fecd +0x11e0:  mov    %edx,0x4(%esp)
08a9fed1 +0x11e4:  mov    %eax,(%esp)
08a9fed4 +0x11e7:  call   08a9fcaa <+0xfbd>
08a9fed9 +0x11ec:  sub    $0x4,%esp
08a9fedc +0x11ef:  lea    -0xc(%ebp),%eax
08a9fedf +0x11f2:  mov    %eax,0x4(%esp)
08a9fee3 +0x11f6:  lea    -0x10(%ebp),%eax
08a9fee6 +0x11f9:  mov    %eax,(%esp)
08a9fee9 +0x11fc:  call   08a9f20c <+0x51f>
08a9feee +0x1201:  test   %al,%al
08a9fef0 +0x1203:  jne    08a9ff17 <+0x122a>
08a9fef2 +0x1205:  mov    -0x10(%ebp),%eax
08a9fef5 +0x1208:  mov    %eax,(%esp)
08a9fef8 +0x120b:  call   08aa1dc4 <+0x30d7>
08a9fefd +0x1210:  mov    0xc(%ebp),%edx
08a9ff00 +0x1213:  mov    %eax,0x8(%esp)
08a9ff04 +0x1217:  mov    0x10(%ebp),%eax
08a9ff07 +0x121a:  mov    %eax,0x4(%esp)
08a9ff0b +0x121e:  mov    %edx,(%esp)
08a9ff0e +0x1221:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08a9ff13 +0x1226:  test   %al,%al
08a9ff15 +0x1228:  je     08a9ff2b <+0x123e>
08a9ff17 +0x122a:  mov    0xc(%ebp),%eax
08a9ff1a +0x122d:  mov    %eax,0x4(%esp)
08a9ff1e +0x1231:  mov    %ebx,(%esp)
08a9ff21 +0x1234:  call   08a9fcaa <+0xfbd>
08a9ff26 +0x1239:  sub    $0x4,%esp
08a9ff29 +0x123c:  jmp    08a9ff30 <+0x1243>
08a9ff2b +0x123e:  mov    -0x10(%ebp),%eax
08a9ff2e +0x1241:  mov    %eax,(%ebx)
08a9ff30 +0x1243:  mov    %ebx,%eax
08a9ff32 +0x1245:  lea    -0x8(%ebp),%esp
08a9ff35 +0x1248:  add    $0x0,%esp
08a9ff38 +0x124b:  pop    %ebx
08a9ff39 +0x124c:  pop    %esi
08a9ff3a +0x124d:  pop    %ebp
08a9ff3b +0x124e:  ret    $0x4
08a9ff3e +0x1251:  push   %ebp
08a9ff3f +0x1252:  mov    %esp,%ebp
08a9ff41 +0x1254:  sub    $0x18,%esp
08a9ff44 +0x1257:  mov    0x8(%ebp),%eax
08a9ff47 +0x125a:  mov    %eax,(%esp)
08a9ff4a +0x125d:  call   08aa1de6 <+0x30f9>
08a9ff4f +0x1262:  leave
08a9ff50 +0x1263:  ret
08a9ff51 +0x1264:  nop
08a9ff52 +0x1265:  push   %ebp
08a9ff53 +0x1266:  mov    %esp,%ebp
08a9ff55 +0x1268:  sub    $0x18,%esp
08a9ff58 +0x126b:  mov    0xc(%ebp),%eax
08a9ff5b +0x126e:  mov    (%eax),%edx
08a9ff5d +0x1270:  mov    0x8(%ebp),%eax
08a9ff60 +0x1273:  mov    %edx,(%eax)
08a9ff62 +0x1275:  mov    0xc(%ebp),%eax
08a9ff65 +0x1278:  mov    0x4(%eax),%edx
08a9ff68 +0x127b:  mov    0x8(%ebp),%eax
08a9ff6b +0x127e:  mov    %edx,0x4(%eax)
08a9ff6e +0x1281:  mov    0xc(%ebp),%eax
08a9ff71 +0x1284:  mov    0x8(%eax),%edx
08a9ff74 +0x1287:  mov    0x8(%ebp),%eax
08a9ff77 +0x128a:  mov    %edx,0x8(%eax)
08a9ff7a +0x128d:  mov    0xc(%ebp),%eax
08a9ff7d +0x1290:  lea    0xc(%eax),%edx
08a9ff80 +0x1293:  mov    0x8(%ebp),%eax
08a9ff83 +0x1296:  add    $0xc,%eax
08a9ff86 +0x1299:  mov    %edx,0x4(%esp)
08a9ff8a +0x129d:  mov    %eax,(%esp)
08a9ff8d +0x12a0:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08a9ff92 +0x12a5:  leave
08a9ff93 +0x12a6:  ret
08a9ff94 +0x12a7:  push   %ebp
08a9ff95 +0x12a8:  mov    %esp,%ebp
08a9ff97 +0x12aa:  push   %edi
08a9ff98 +0x12ab:  push   %esi
08a9ff99 +0x12ac:  push   %ebx
08a9ff9a +0x12ad:  sub    $0x2c,%esp
08a9ff9d +0x12b0:  mov    0xc(%ebp),%esi
08a9ffa0 +0x12b3:  mov    %esi,0x4(%esp)
08a9ffa4 +0x12b7:  movl   $0x10,(%esp)
08a9ffab +0x12be:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08a9ffb0 +0x12c3:  mov    %eax,%ebx
08a9ffb2 +0x12c5:  mov    %ebx,%eax
08a9ffb4 +0x12c7:  test   %eax,%eax
08a9ffb6 +0x12c9:  je     08a9ffe9 <+0x12fc>
08a9ffb8 +0x12cb:  mov    %ebx,%eax
08a9ffba +0x12cd:  mov    0x10(%ebp),%edx
08a9ffbd +0x12d0:  mov    %edx,0x4(%esp)
08a9ffc1 +0x12d4:  mov    %eax,(%esp)
08a9ffc4 +0x12d7:  call   08a9ff52 <+0x1265>
08a9ffc9 +0x12dc:  jmp    08a9ffe9 <+0x12fc>
08a9ffcb +0x12de:  mov    %edx,%edi
08a9ffcd +0x12e0:  mov    %eax,-0x1c(%ebp)
08a9ffd0 +0x12e3:  mov    %esi,0x4(%esp)
08a9ffd4 +0x12e7:  mov    %ebx,(%esp)
08a9ffd7 +0x12ea:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08a9ffdc +0x12ef:  mov    -0x1c(%ebp),%eax
08a9ffdf +0x12f2:  mov    %edi,%edx
08a9ffe1 +0x12f4:  mov    %eax,(%esp)
08a9ffe4 +0x12f7:  call   08ae3750 <_Unwind_Resume>
08a9ffe9 +0x12fc:  add    $0x2c,%esp
08a9ffec +0x12ff:  pop    %ebx
08a9ffed +0x1300:  pop    %esi
08a9ffee +0x1301:  pop    %edi
08a9ffef +0x1302:  pop    %ebp
08a9fff0 +0x1303:  ret
08a9fff1 +0x1304:  nop
08a9fff2 +0x1305:  push   %ebp
08a9fff3 +0x1306:  mov    %esp,%ebp
08a9fff5 +0x1308:  sub    $0x18,%esp
08a9fff8 +0x130b:  mov    0xc(%ebp),%eax
08a9fffb +0x130e:  mov    (%eax),%edx
08a9fffd +0x1310:  mov    0x8(%ebp),%eax
08aa0000 +0x1313:  mov    %edx,(%eax)
08aa0002 +0x1315:  mov    0xc(%ebp),%eax
08aa0005 +0x1318:  mov    0x4(%eax),%edx
08aa0008 +0x131b:  mov    0x8(%ebp),%eax
08aa000b +0x131e:  mov    %edx,0x4(%eax)
08aa000e +0x1321:  mov    0xc(%ebp),%eax
08aa0011 +0x1324:  mov    0x8(%eax),%edx
08aa0014 +0x1327:  mov    0x8(%ebp),%eax
08aa0017 +0x132a:  mov    %edx,0x8(%eax)
08aa001a +0x132d:  mov    0xc(%ebp),%eax
08aa001d +0x1330:  lea    0xc(%eax),%edx
08aa0020 +0x1333:  mov    0x8(%ebp),%eax
08aa0023 +0x1336:  add    $0xc,%eax
08aa0026 +0x1339:  mov    %edx,0x4(%esp)
08aa002a +0x133d:  mov    %eax,(%esp)
08aa002d +0x1340:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08aa0032 +0x1345:  mov    0x8(%ebp),%eax
08aa0035 +0x1348:  leave
08aa0036 +0x1349:  ret
08aa0037 +0x134a:  nop
08aa0038 +0x134b:  push   %ebp
08aa0039 +0x134c:  mov    %esp,%ebp
08aa003b +0x134e:  push   %esi
08aa003c +0x134f:  push   %ebx
08aa003d +0x1350:  sub    $0x40,%esp
08aa0040 +0x1353:  mov    0x8(%ebp),%eax
08aa0043 +0x1356:  mov    0x4(%eax),%edx
08aa0046 +0x1359:  mov    0x8(%ebp),%eax
08aa0049 +0x135c:  mov    0x8(%eax),%eax
08aa004c +0x135f:  cmp    %eax,%edx
08aa004e +0x1361:  je     08aa011d <+0x1430>
08aa0054 +0x1367:  mov    0x8(%ebp),%eax
08aa0057 +0x136a:  mov    0x4(%eax),%eax
08aa005a +0x136d:  sub    $0x10,%eax
08aa005d +0x1370:  mov    %eax,(%esp)
08aa0060 +0x1373:  call   08aa1e16 <+0x3129>
08aa0065 +0x1378:  mov    0x8(%ebp),%edx
08aa0068 +0x137b:  mov    0x4(%edx),%ecx
08aa006b +0x137e:  mov    0x8(%ebp),%edx
08aa006e +0x1381:  mov    %eax,0x8(%esp)
08aa0072 +0x1385:  mov    %ecx,0x4(%esp)
08aa0076 +0x1389:  mov    %edx,(%esp)
08aa0079 +0x138c:  call   08aa1e1e <+0x3131>
08aa007e +0x1391:  mov    0x8(%ebp),%eax
08aa0081 +0x1394:  mov    0x4(%eax),%eax
08aa0084 +0x1397:  lea    0x10(%eax),%edx
08aa0087 +0x139a:  mov    0x8(%ebp),%eax
08aa008a +0x139d:  mov    %edx,0x4(%eax)
08aa008d +0x13a0:  mov    0x8(%ebp),%eax
08aa0090 +0x13a3:  mov    0x4(%eax),%eax
08aa0093 +0x13a6:  lea    -0x10(%eax),%esi
08aa0096 +0x13a9:  mov    0x8(%ebp),%eax
08aa0099 +0x13ac:  mov    0x4(%eax),%eax
08aa009c +0x13af:  lea    -0x20(%eax),%ebx
08aa009f +0x13b2:  lea    0xc(%ebp),%eax
08aa00a2 +0x13b5:  mov    %eax,(%esp)
08aa00a5 +0x13b8:  call   08aa15c2 <+0x28d5>
08aa00aa +0x13bd:  mov    (%eax),%eax
08aa00ac +0x13bf:  mov    %esi,0x8(%esp)
08aa00b0 +0x13c3:  mov    %ebx,0x4(%esp)
08aa00b4 +0x13c7:  mov    %eax,(%esp)
08aa00b7 +0x13ca:  call   08aa1e85 <+0x3198>
08aa00bc +0x13cf:  mov    0x10(%ebp),%eax
08aa00bf +0x13d2:  mov    %eax,(%esp)
08aa00c2 +0x13d5:  call   08aa1ebd <+0x31d0>
08aa00c7 +0x13da:  mov    %eax,0x4(%esp)
08aa00cb +0x13de:  lea    -0x2c(%ebp),%eax
08aa00ce +0x13e1:  mov    %eax,(%esp)
08aa00d1 +0x13e4:  call   08a9ff52 <+0x1265>
08aa00d6 +0x13e9:  lea    0xc(%ebp),%eax
08aa00d9 +0x13ec:  mov    %eax,(%esp)
08aa00dc +0x13ef:  call   08aa1ec6 <+0x31d9>
08aa00e1 +0x13f4:  lea    -0x2c(%ebp),%edx
08aa00e4 +0x13f7:  mov    %edx,0x4(%esp)
08aa00e8 +0x13fb:  mov    %eax,(%esp)
08aa00eb +0x13fe:  call   08a9fff2 <+0x1305>
08aa00f0 +0x1403:  jmp    08aa010d <+0x1420>
08aa00f2 +0x1405:  mov    %edx,%ebx
08aa00f4 +0x1407:  mov    %eax,%esi
08aa00f6 +0x1409:  lea    -0x2c(%ebp),%eax
08aa00f9 +0x140c:  mov    %eax,(%esp)
08aa00fc +0x140f:  call   08a9ed34 <+0x47>
08aa0101 +0x1414:  mov    %esi,%eax
08aa0103 +0x1416:  mov    %ebx,%edx
08aa0105 +0x1418:  mov    %eax,(%esp)
08aa0108 +0x141b:  call   08ae3750 <_Unwind_Resume>
08aa010d +0x1420:  lea    -0x2c(%ebp),%eax
08aa0110 +0x1423:  mov    %eax,(%esp)
08aa0113 +0x1426:  call   08a9ed34 <+0x47>
08aa0118 +0x142b:  jmp    08aa031f <+0x1632>
08aa011d +0x1430:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa0125 +0x1438:  movl   $0x1,0x4(%esp)
08aa012d +0x1440:  mov    0x8(%ebp),%eax
08aa0130 +0x1443:  mov    %eax,(%esp)
08aa0133 +0x1446:  call   08aa1ed0 <+0x31e3>
08aa0138 +0x144b:  mov    %eax,-0x18(%ebp)
08aa013b +0x144e:  lea    -0x1c(%ebp),%eax
08aa013e +0x1451:  mov    0x8(%ebp),%edx
08aa0141 +0x1454:  mov    %edx,0x4(%esp)
08aa0145 +0x1458:  mov    %eax,(%esp)
08aa0148 +0x145b:  call   08a9f66e <+0x981>
08aa014d +0x1460:  sub    $0x4,%esp
08aa0150 +0x1463:  lea    -0x1c(%ebp),%eax
08aa0153 +0x1466:  mov    %eax,0x4(%esp)
08aa0157 +0x146a:  lea    0xc(%ebp),%eax
08aa015a +0x146d:  mov    %eax,(%esp)
08aa015d +0x1470:  call   08aa1f75 <+0x3288>
08aa0162 +0x1475:  mov    %eax,-0x14(%ebp)
08aa0165 +0x1478:  mov    0x8(%ebp),%eax
08aa0168 +0x147b:  mov    -0x18(%ebp),%edx
08aa016b +0x147e:  mov    %edx,0x4(%esp)
08aa016f +0x1482:  mov    %eax,(%esp)
08aa0172 +0x1485:  call   08aa1fa8 <+0x32bb>
08aa0177 +0x148a:  mov    %eax,-0x10(%ebp)
08aa017a +0x148d:  mov    -0x10(%ebp),%eax
08aa017d +0x1490:  mov    %eax,-0xc(%ebp)
08aa0180 +0x1493:  mov    0x10(%ebp),%eax
08aa0183 +0x1496:  mov    %eax,(%esp)
08aa0186 +0x1499:  call   08aa1ebd <+0x31d0>
08aa018b +0x149e:  mov    -0x14(%ebp),%edx
08aa018e +0x14a1:  shl    $0x4,%edx
08aa0191 +0x14a4:  mov    %edx,%ecx
08aa0193 +0x14a6:  add    -0x10(%ebp),%ecx
08aa0196 +0x14a9:  mov    0x8(%ebp),%edx
08aa0199 +0x14ac:  mov    %eax,0x8(%esp)
08aa019d +0x14b0:  mov    %ecx,0x4(%esp)
08aa01a1 +0x14b4:  mov    %edx,(%esp)
08aa01a4 +0x14b7:  call   08a9ff94 <+0x12a7>
08aa01a9 +0x14bc:  movl   $0x0,-0xc(%ebp)
08aa01b0 +0x14c3:  mov    0x8(%ebp),%eax
08aa01b3 +0x14c6:  mov    %eax,(%esp)
08aa01b6 +0x14c9:  call   08a9fd4c <+0x105f>
08aa01bb +0x14ce:  mov    %eax,%ebx
08aa01bd +0x14d0:  lea    0xc(%ebp),%eax
08aa01c0 +0x14d3:  mov    %eax,(%esp)
08aa01c3 +0x14d6:  call   08aa15c2 <+0x28d5>
08aa01c8 +0x14db:  mov    (%eax),%edx
08aa01ca +0x14dd:  mov    0x8(%ebp),%eax
08aa01cd +0x14e0:  mov    (%eax),%eax
08aa01cf +0x14e2:  mov    %ebx,0xc(%esp)
08aa01d3 +0x14e6:  mov    -0x10(%ebp),%ecx
08aa01d6 +0x14e9:  mov    %ecx,0x8(%esp)
08aa01da +0x14ed:  mov    %edx,0x4(%esp)
08aa01de +0x14f1:  mov    %eax,(%esp)
08aa01e1 +0x14f4:  call   08aa1fd7 <+0x32ea>
08aa01e6 +0x14f9:  mov    %eax,-0xc(%ebp)
08aa01e9 +0x14fc:  addl   $0x10,-0xc(%ebp)
08aa01ed +0x1500:  mov    0x8(%ebp),%eax
08aa01f0 +0x1503:  mov    %eax,(%esp)
08aa01f3 +0x1506:  call   08a9fd4c <+0x105f>
08aa01f8 +0x150b:  mov    %eax,%ebx
08aa01fa +0x150d:  mov    0x8(%ebp),%eax
08aa01fd +0x1510:  mov    0x4(%eax),%esi
08aa0200 +0x1513:  lea    0xc(%ebp),%eax
08aa0203 +0x1516:  mov    %eax,(%esp)
08aa0206 +0x1519:  call   08aa15c2 <+0x28d5>
08aa020b +0x151e:  mov    (%eax),%eax
08aa020d +0x1520:  mov    %ebx,0xc(%esp)
08aa0211 +0x1524:  mov    -0xc(%ebp),%edx
08aa0214 +0x1527:  mov    %edx,0x8(%esp)
08aa0218 +0x152b:  mov    %esi,0x4(%esp)
08aa021c +0x152f:  mov    %eax,(%esp)
08aa021f +0x1532:  call   08aa1fd7 <+0x32ea>
08aa0224 +0x1537:  mov    %eax,-0xc(%ebp)
08aa0227 +0x153a:  mov    0x8(%ebp),%eax
08aa022a +0x153d:  mov    %eax,(%esp)
08aa022d +0x1540:  call   08a9fd4c <+0x105f>
08aa0232 +0x1545:  mov    0x8(%ebp),%edx
08aa0235 +0x1548:  mov    0x4(%edx),%ecx
08aa0238 +0x154b:  mov    0x8(%ebp),%edx
08aa023b +0x154e:  mov    (%edx),%edx
08aa023d +0x1550:  mov    %eax,0x8(%esp)
08aa0241 +0x1554:  mov    %ecx,0x4(%esp)
08aa0245 +0x1558:  mov    %edx,(%esp)
08aa0248 +0x155b:  call   08a9fd54 <+0x1067>
08aa024d +0x1560:  mov    0x8(%ebp),%eax
08aa0250 +0x1563:  mov    0x8(%eax),%eax
08aa0253 +0x1566:  mov    %eax,%edx
08aa0255 +0x1568:  mov    0x8(%ebp),%eax
08aa0258 +0x156b:  mov    (%eax),%eax
08aa025a +0x156d:  mov    %edx,%ecx
08aa025c +0x156f:  sub    %eax,%ecx
08aa025e +0x1571:  mov    %ecx,%eax
08aa0260 +0x1573:  sar    $0x4,%eax
08aa0263 +0x1576:  mov    %eax,%ecx
08aa0265 +0x1578:  mov    0x8(%ebp),%eax
08aa0268 +0x157b:  mov    (%eax),%edx
08aa026a +0x157d:  mov    0x8(%ebp),%eax
08aa026d +0x1580:  mov    %ecx,0x8(%esp)
08aa0271 +0x1584:  mov    %edx,0x4(%esp)
08aa0275 +0x1588:  mov    %eax,(%esp)
08aa0278 +0x158b:  call   08aa19b0 <+0x2cc3>
08aa027d +0x1590:  mov    0x8(%ebp),%eax
08aa0280 +0x1593:  mov    -0x10(%ebp),%edx
08aa0283 +0x1596:  mov    %edx,(%eax)
08aa0285 +0x1598:  mov    0x8(%ebp),%eax
08aa0288 +0x159b:  mov    -0xc(%ebp),%edx
08aa028b +0x159e:  mov    %edx,0x4(%eax)
08aa028e +0x15a1:  mov    -0x18(%ebp),%eax
08aa0291 +0x15a4:  shl    $0x4,%eax
08aa0294 +0x15a7:  mov    %eax,%edx
08aa0296 +0x15a9:  add    -0x10(%ebp),%edx
08aa0299 +0x15ac:  mov    0x8(%ebp),%eax
08aa029c +0x15af:  mov    %edx,0x8(%eax)
08aa029f +0x15b2:  jmp    08aa031f <+0x1632>
08aa02a1 +0x15b4:  mov    %eax,(%esp)
08aa02a4 +0x15b7:  call   08725ce0 <__cxa_begin_catch>
08aa02a9 +0x15bc:  cmpl   $0x0,-0xc(%ebp)
08aa02ad +0x15c0:  jne    08aa02cb <+0x15de>
08aa02af +0x15c2:  mov    -0x14(%ebp),%eax
08aa02b2 +0x15c5:  shl    $0x4,%eax
08aa02b5 +0x15c8:  mov    %eax,%edx
08aa02b7 +0x15ca:  add    -0x10(%ebp),%edx
08aa02ba +0x15cd:  mov    0x8(%ebp),%eax
08aa02bd +0x15d0:  mov    %edx,0x4(%esp)
08aa02c1 +0x15d4:  mov    %eax,(%esp)
08aa02c4 +0x15d7:  call   08aa202a <+0x333d>
08aa02c9 +0x15dc:  jmp    08aa02ec <+0x15ff>
08aa02cb +0x15de:  mov    0x8(%ebp),%eax
08aa02ce +0x15e1:  mov    %eax,(%esp)
08aa02d1 +0x15e4:  call   08a9fd4c <+0x105f>
08aa02d6 +0x15e9:  mov    %eax,0x8(%esp)
08aa02da +0x15ed:  mov    -0xc(%ebp),%eax
08aa02dd +0x15f0:  mov    %eax,0x4(%esp)
08aa02e1 +0x15f4:  mov    -0x10(%ebp),%eax
08aa02e4 +0x15f7:  mov    %eax,(%esp)
08aa02e7 +0x15fa:  call   08a9fd54 <+0x1067>
08aa02ec +0x15ff:  mov    0x8(%ebp),%eax
08aa02ef +0x1602:  mov    -0x18(%ebp),%edx
08aa02f2 +0x1605:  mov    %edx,0x8(%esp)
08aa02f6 +0x1609:  mov    -0x10(%ebp),%edx
08aa02f9 +0x160c:  mov    %edx,0x4(%esp)
08aa02fd +0x1610:  mov    %eax,(%esp)
08aa0300 +0x1613:  call   08aa19b0 <+0x2cc3>
08aa0305 +0x1618:  call   08724be0 <__cxa_rethrow>
08aa030a +0x161d:  mov    %edx,%ebx
08aa030c +0x161f:  mov    %eax,%esi
08aa030e +0x1621:  call   08725c30 <__cxa_end_catch>
08aa0313 +0x1626:  mov    %esi,%eax
08aa0315 +0x1628:  mov    %ebx,%edx
08aa0317 +0x162a:  mov    %eax,(%esp)
08aa031a +0x162d:  call   08ae3750 <_Unwind_Resume>
08aa031f +0x1632:  lea    -0x8(%ebp),%esp
08aa0322 +0x1635:  add    $0x0,%esp
08aa0325 +0x1638:  pop    %ebx
08aa0326 +0x1639:  pop    %esi
08aa0327 +0x163a:  pop    %ebp
08aa0328 +0x163b:  ret
08aa0329 +0x163c:  nop
08aa032a +0x163d:  push   %ebp
08aa032b +0x163e:  mov    %esp,%ebp
08aa032d +0x1640:  push   %ebx
08aa032e +0x1641:  sub    $0x14,%esp
08aa0331 +0x1644:  mov    0x8(%ebp),%ebx
08aa0334 +0x1647:  mov    0xc(%ebp),%eax
08aa0337 +0x164a:  mov    0x10(%ebp),%edx
08aa033a +0x164d:  mov    %edx,0x8(%esp)
08aa033e +0x1651:  mov    %eax,0x4(%esp)
08aa0342 +0x1655:  mov    %ebx,(%esp)
08aa0345 +0x1658:  call   08aa203e <+0x3351>
08aa034a +0x165d:  sub    $0x4,%esp
08aa034d +0x1660:  mov    %ebx,%eax
08aa034f +0x1662:  mov    -0x4(%ebp),%ebx
08aa0352 +0x1665:  leave
08aa0353 +0x1666:  ret    $0x4
08aa0356 +0x1669:  push   %ebp
08aa0357 +0x166a:  mov    %esp,%ebp
08aa0359 +0x166c:  push   %ebx
08aa035a +0x166d:  sub    $0x14,%esp
08aa035d +0x1670:  mov    0x8(%ebp),%ebx
08aa0360 +0x1673:  mov    0xc(%ebp),%eax
08aa0363 +0x1676:  mov    %eax,0x4(%esp)
08aa0367 +0x167a:  mov    %ebx,(%esp)
08aa036a +0x167d:  call   08aa2090 <+0x33a3>
08aa036f +0x1682:  sub    $0x4,%esp
08aa0372 +0x1685:  mov    %ebx,%eax
08aa0374 +0x1687:  mov    -0x4(%ebp),%ebx
08aa0377 +0x168a:  leave
08aa0378 +0x168b:  ret    $0x4
08aa037b +0x168e:  nop
08aa037c +0x168f:  push   %ebp
08aa037d +0x1690:  mov    %esp,%ebp
08aa037f +0x1692:  mov    0x8(%ebp),%eax
08aa0382 +0x1695:  mov    (%eax),%eax
08aa0384 +0x1697:  add    $0x10,%eax
08aa0387 +0x169a:  pop    %ebp
08aa0388 +0x169b:  ret
08aa0389 +0x169c:  nop
08aa038a +0x169d:  push   %ebp
08aa038b +0x169e:  mov    %esp,%ebp
08aa038d +0x16a0:  sub    $0x18,%esp
08aa0390 +0x16a3:  mov    0xc(%ebp),%eax
08aa0393 +0x16a6:  mov    %eax,(%esp)
08aa0396 +0x16a9:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
08aa039b +0x16ae:  mov    (%eax),%edx
08aa039d +0x16b0:  mov    0x8(%ebp),%eax
08aa03a0 +0x16b3:  mov    %edx,(%eax)
08aa03a2 +0x16b5:  mov    0x10(%ebp),%eax
08aa03a5 +0x16b8:  mov    %eax,(%esp)
08aa03a8 +0x16bb:  call   08aa209a <+0x33ad>
08aa03ad +0x16c0:  mov    (%eax),%edx
08aa03af +0x16c2:  mov    0x8(%ebp),%eax
08aa03b2 +0x16c5:  mov    %edx,0x4(%eax)
08aa03b5 +0x16c8:  leave
08aa03b6 +0x16c9:  ret
08aa03b7 +0x16ca:  nop
08aa03b8 +0x16cb:  push   %ebp
08aa03b9 +0x16cc:  mov    %esp,%ebp
08aa03bb +0x16ce:  push   %ebx
08aa03bc +0x16cf:  sub    $0x24,%esp
08aa03bf +0x16d2:  mov    0x8(%ebp),%ebx
08aa03c2 +0x16d5:  lea    0x10(%ebp),%eax
08aa03c5 +0x16d8:  mov    %eax,0x4(%esp)
08aa03c9 +0x16dc:  lea    -0xc(%ebp),%eax
08aa03cc +0x16df:  mov    %eax,(%esp)
08aa03cf +0x16e2:  call   08aa20a2 <+0x33b5>
08aa03d4 +0x16e7:  mov    0xc(%ebp),%eax
08aa03d7 +0x16ea:  mov    0x14(%ebp),%edx
08aa03da +0x16ed:  mov    %edx,0xc(%esp)
08aa03de +0x16f1:  mov    -0xc(%ebp),%edx
08aa03e1 +0x16f4:  mov    %edx,0x8(%esp)
08aa03e5 +0x16f8:  mov    %eax,0x4(%esp)
08aa03e9 +0x16fc:  mov    %ebx,(%esp)
08aa03ec +0x16ff:  call   08aa20b2 <+0x33c5>
08aa03f1 +0x1704:  sub    $0x4,%esp
08aa03f4 +0x1707:  mov    %ebx,%eax
08aa03f6 +0x1709:  mov    -0x4(%ebp),%ebx
08aa03f9 +0x170c:  leave
08aa03fa +0x170d:  ret    $0x4
08aa03fd +0x1710:  nop
08aa03fe +0x1711:  push   %ebp
08aa03ff +0x1712:  mov    %esp,%ebp
08aa0401 +0x1714:  sub    $0x18,%esp
08aa0404 +0x1717:  mov    0x8(%ebp),%eax
08aa0407 +0x171a:  mov    %eax,(%esp)
08aa040a +0x171d:  call   08a9fc2c <+0xf3f>
08aa040f +0x1722:  mov    0x8(%ebp),%edx
08aa0412 +0x1725:  mov    0x4(%edx),%edx
08aa0415 +0x1728:  mov    %eax,0x8(%esp)
08aa0419 +0x172c:  mov    %edx,0x4(%esp)
08aa041d +0x1730:  mov    0xc(%ebp),%eax
08aa0420 +0x1733:  mov    %eax,(%esp)
08aa0423 +0x1736:  call   08a9fc34 <+0xf47>
08aa0428 +0x173b:  mov    0x8(%ebp),%eax
08aa042b +0x173e:  mov    0xc(%ebp),%edx
08aa042e +0x1741:  mov    %edx,0x4(%eax)
08aa0431 +0x1744:  leave
08aa0432 +0x1745:  ret
08aa0433 +0x1746:  nop
08aa0434 +0x1747:  push   %ebp
08aa0435 +0x1748:  mov    %esp,%ebp
08aa0437 +0x174a:  sub    $0x18,%esp
08aa043a +0x174d:  mov    0xc(%ebp),%eax
08aa043d +0x1750:  mov    %eax,0x4(%esp)
08aa0441 +0x1754:  movl   $0xc,(%esp)
08aa0448 +0x175b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa044d +0x1760:  mov    %eax,%edx
08aa044f +0x1762:  test   %edx,%edx
08aa0451 +0x1764:  je     08aa0466 <+0x1779>
08aa0453 +0x1766:  mov    0x10(%ebp),%edx
08aa0456 +0x1769:  mov    (%edx),%ecx
08aa0458 +0x176b:  mov    %ecx,(%eax)
08aa045a +0x176d:  mov    0x4(%edx),%ecx
08aa045d +0x1770:  mov    %ecx,0x4(%eax)
08aa0460 +0x1773:  mov    0x8(%edx),%edx
08aa0463 +0x1776:  mov    %edx,0x8(%eax)
08aa0466 +0x1779:  leave
08aa0467 +0x177a:  ret
08aa0468 +0x177b:  push   %ebp
08aa0469 +0x177c:  mov    %esp,%ebp
08aa046b +0x177e:  push   %ebx
08aa046c +0x177f:  sub    $0x14,%esp
08aa046f +0x1782:  mov    0x8(%ebp),%ebx
08aa0472 +0x1785:  mov    0xc(%ebp),%eax
08aa0475 +0x1788:  add    $0x4,%eax
08aa0478 +0x178b:  mov    %eax,0x4(%esp)
08aa047c +0x178f:  mov    %ebx,(%esp)
08aa047f +0x1792:  call   08aa2478 <+0x378b>
08aa0484 +0x1797:  mov    %ebx,%eax
08aa0486 +0x1799:  add    $0x14,%esp
08aa0489 +0x179c:  pop    %ebx
08aa048a +0x179d:  pop    %ebp
08aa048b +0x179e:  ret    $0x4
08aa048e +0x17a1:  push   %ebp
08aa048f +0x17a2:  mov    %esp,%ebp
08aa0491 +0x17a4:  push   %esi
08aa0492 +0x17a5:  push   %ebx
08aa0493 +0x17a6:  sub    $0x30,%esp
08aa0496 +0x17a9:  mov    0x8(%ebp),%eax
08aa0499 +0x17ac:  mov    0x4(%eax),%edx
08aa049c +0x17af:  mov    0x8(%ebp),%eax
08aa049f +0x17b2:  mov    0x8(%eax),%eax
08aa04a2 +0x17b5:  cmp    %eax,%edx
08aa04a4 +0x17b7:  je     08aa053f <+0x1852>
08aa04aa +0x17bd:  mov    0x8(%ebp),%eax
08aa04ad +0x17c0:  mov    0x4(%eax),%eax
08aa04b0 +0x17c3:  sub    $0xc,%eax
08aa04b3 +0x17c6:  mov    %eax,(%esp)
08aa04b6 +0x17c9:  call   08aa2487 <+0x379a>
08aa04bb +0x17ce:  mov    0x8(%ebp),%edx
08aa04be +0x17d1:  mov    0x4(%edx),%ecx
08aa04c1 +0x17d4:  mov    0x8(%ebp),%edx
08aa04c4 +0x17d7:  mov    %eax,0x8(%esp)
08aa04c8 +0x17db:  mov    %ecx,0x4(%esp)
08aa04cc +0x17df:  mov    %edx,(%esp)
08aa04cf +0x17e2:  call   08aa2490 <+0x37a3>
08aa04d4 +0x17e7:  mov    0x8(%ebp),%eax
08aa04d7 +0x17ea:  mov    0x4(%eax),%eax
08aa04da +0x17ed:  lea    0xc(%eax),%edx
08aa04dd +0x17f0:  mov    0x8(%ebp),%eax
08aa04e0 +0x17f3:  mov    %edx,0x4(%eax)
08aa04e3 +0x17f6:  mov    0x8(%ebp),%eax
08aa04e6 +0x17f9:  mov    0x4(%eax),%eax
08aa04e9 +0x17fc:  lea    -0xc(%eax),%esi
08aa04ec +0x17ff:  mov    0x8(%ebp),%eax
08aa04ef +0x1802:  mov    0x4(%eax),%eax
08aa04f2 +0x1805:  lea    -0x18(%eax),%ebx
08aa04f5 +0x1808:  lea    0xc(%ebp),%eax
08aa04f8 +0x180b:  mov    %eax,(%esp)
08aa04fb +0x180e:  call   08aa24de <+0x37f1>
08aa0500 +0x1813:  mov    (%eax),%eax
08aa0502 +0x1815:  mov    %esi,0x8(%esp)
08aa0506 +0x1819:  mov    %ebx,0x4(%esp)
08aa050a +0x181d:  mov    %eax,(%esp)
08aa050d +0x1820:  call   08aa24e6 <+0x37f9>
08aa0512 +0x1825:  lea    0xc(%ebp),%eax
08aa0515 +0x1828:  mov    %eax,(%esp)
08aa0518 +0x182b:  call   08aa2526 <+0x3839>
08aa051d +0x1830:  mov    %eax,%ebx
08aa051f +0x1832:  mov    0x10(%ebp),%eax
08aa0522 +0x1835:  mov    %eax,(%esp)
08aa0525 +0x1838:  call   08aa251e <+0x3831>
08aa052a +0x183d:  mov    (%eax),%edx
08aa052c +0x183f:  mov    %edx,(%ebx)
08aa052e +0x1841:  mov    0x4(%eax),%edx
08aa0531 +0x1844:  mov    %edx,0x4(%ebx)
08aa0534 +0x1847:  mov    0x8(%eax),%eax
08aa0537 +0x184a:  mov    %eax,0x8(%ebx)
08aa053a +0x184d:  jmp    08aa075e <+0x1a71>
08aa053f +0x1852:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa0547 +0x185a:  movl   $0x1,0x4(%esp)
08aa054f +0x1862:  mov    0x8(%ebp),%eax
08aa0552 +0x1865:  mov    %eax,(%esp)
08aa0555 +0x1868:  call   08aa2530 <+0x3843>
08aa055a +0x186d:  mov    %eax,-0x18(%ebp)
08aa055d +0x1870:  lea    -0x1c(%ebp),%eax
08aa0560 +0x1873:  mov    0x8(%ebp),%edx
08aa0563 +0x1876:  mov    %edx,0x4(%esp)
08aa0567 +0x187a:  mov    %eax,(%esp)
08aa056a +0x187d:  call   08aa25d6 <+0x38e9>
08aa056f +0x1882:  sub    $0x4,%esp
08aa0572 +0x1885:  lea    -0x1c(%ebp),%eax
08aa0575 +0x1888:  mov    %eax,0x4(%esp)
08aa0579 +0x188c:  lea    0xc(%ebp),%eax
08aa057c +0x188f:  mov    %eax,(%esp)
08aa057f +0x1892:  call   08aa25f9 <+0x390c>
08aa0584 +0x1897:  mov    %eax,-0x14(%ebp)
08aa0587 +0x189a:  mov    0x8(%ebp),%eax
08aa058a +0x189d:  mov    -0x18(%ebp),%edx
08aa058d +0x18a0:  mov    %edx,0x4(%esp)
08aa0591 +0x18a4:  mov    %eax,(%esp)
08aa0594 +0x18a7:  call   08aa2632 <+0x3945>
08aa0599 +0x18ac:  mov    %eax,-0x10(%ebp)
08aa059c +0x18af:  mov    -0x10(%ebp),%eax
08aa059f +0x18b2:  mov    %eax,-0xc(%ebp)
08aa05a2 +0x18b5:  mov    0x10(%ebp),%eax
08aa05a5 +0x18b8:  mov    %eax,(%esp)
08aa05a8 +0x18bb:  call   08aa251e <+0x3831>
08aa05ad +0x18c0:  mov    %eax,%ecx
08aa05af +0x18c2:  mov    -0x14(%ebp),%edx
08aa05b2 +0x18c5:  mov    %edx,%eax
08aa05b4 +0x18c7:  add    %eax,%eax
08aa05b6 +0x18c9:  add    %edx,%eax
08aa05b8 +0x18cb:  shl    $0x2,%eax
08aa05bb +0x18ce:  mov    %eax,%edx
08aa05bd +0x18d0:  add    -0x10(%ebp),%edx
08aa05c0 +0x18d3:  mov    0x8(%ebp),%eax
08aa05c3 +0x18d6:  mov    %ecx,0x8(%esp)
08aa05c7 +0x18da:  mov    %edx,0x4(%esp)
08aa05cb +0x18de:  mov    %eax,(%esp)
08aa05ce +0x18e1:  call   08aa0434 <+0x1747>
08aa05d3 +0x18e6:  movl   $0x0,-0xc(%ebp)
08aa05da +0x18ed:  mov    0x8(%ebp),%eax
08aa05dd +0x18f0:  mov    %eax,(%esp)
08aa05e0 +0x18f3:  call   08a9fc2c <+0xf3f>
08aa05e5 +0x18f8:  mov    %eax,%ebx
08aa05e7 +0x18fa:  lea    0xc(%ebp),%eax
08aa05ea +0x18fd:  mov    %eax,(%esp)
08aa05ed +0x1900:  call   08aa24de <+0x37f1>
08aa05f2 +0x1905:  mov    (%eax),%edx
08aa05f4 +0x1907:  mov    0x8(%ebp),%eax
08aa05f7 +0x190a:  mov    (%eax),%eax
08aa05f9 +0x190c:  mov    %ebx,0xc(%esp)
08aa05fd +0x1910:  mov    -0x10(%ebp),%ecx
08aa0600 +0x1913:  mov    %ecx,0x8(%esp)
08aa0604 +0x1917:  mov    %edx,0x4(%esp)
08aa0608 +0x191b:  mov    %eax,(%esp)
08aa060b +0x191e:  call   08aa2661 <+0x3974>
08aa0610 +0x1923:  mov    %eax,-0xc(%ebp)
08aa0613 +0x1926:  addl   $0xc,-0xc(%ebp)
08aa0617 +0x192a:  mov    0x8(%ebp),%eax
08aa061a +0x192d:  mov    %eax,(%esp)
08aa061d +0x1930:  call   08a9fc2c <+0xf3f>
08aa0622 +0x1935:  mov    %eax,%ebx
08aa0624 +0x1937:  mov    0x8(%ebp),%eax
08aa0627 +0x193a:  mov    0x4(%eax),%esi
08aa062a +0x193d:  lea    0xc(%ebp),%eax
08aa062d +0x1940:  mov    %eax,(%esp)
08aa0630 +0x1943:  call   08aa24de <+0x37f1>
08aa0635 +0x1948:  mov    (%eax),%eax
08aa0637 +0x194a:  mov    %ebx,0xc(%esp)
08aa063b +0x194e:  mov    -0xc(%ebp),%edx
08aa063e +0x1951:  mov    %edx,0x8(%esp)
08aa0642 +0x1955:  mov    %esi,0x4(%esp)
08aa0646 +0x1959:  mov    %eax,(%esp)
08aa0649 +0x195c:  call   08aa2661 <+0x3974>
08aa064e +0x1961:  mov    %eax,-0xc(%ebp)
08aa0651 +0x1964:  mov    0x8(%ebp),%eax
08aa0654 +0x1967:  mov    %eax,(%esp)
08aa0657 +0x196a:  call   08a9fc2c <+0xf3f>
08aa065c +0x196f:  mov    0x8(%ebp),%edx
08aa065f +0x1972:  mov    0x4(%edx),%ecx
08aa0662 +0x1975:  mov    0x8(%ebp),%edx
08aa0665 +0x1978:  mov    (%edx),%edx
08aa0667 +0x197a:  mov    %eax,0x8(%esp)
08aa066b +0x197e:  mov    %ecx,0x4(%esp)
08aa066f +0x1982:  mov    %edx,(%esp)
08aa0672 +0x1985:  call   08a9fc34 <+0xf47>
08aa0677 +0x198a:  mov    0x8(%ebp),%eax
08aa067a +0x198d:  mov    0x8(%eax),%eax
08aa067d +0x1990:  mov    %eax,%edx
08aa067f +0x1992:  mov    0x8(%ebp),%eax
08aa0682 +0x1995:  mov    (%eax),%eax
08aa0684 +0x1997:  mov    %edx,%ecx
08aa0686 +0x1999:  sub    %eax,%ecx
08aa0688 +0x199b:  mov    %ecx,%eax
08aa068a +0x199d:  sar    $0x2,%eax
08aa068d +0x19a0:  imul   $0xaaaaaaab,%eax,%eax
08aa0693 +0x19a6:  mov    %eax,%ecx
08aa0695 +0x19a8:  mov    0x8(%ebp),%eax
08aa0698 +0x19ab:  mov    (%eax),%edx
08aa069a +0x19ad:  mov    0x8(%ebp),%eax
08aa069d +0x19b0:  mov    %ecx,0x8(%esp)
08aa06a1 +0x19b4:  mov    %edx,0x4(%esp)
08aa06a5 +0x19b8:  mov    %eax,(%esp)
08aa06a8 +0x19bb:  call   08aa194c <+0x2c5f>
08aa06ad +0x19c0:  mov    0x8(%ebp),%eax
08aa06b0 +0x19c3:  mov    -0x10(%ebp),%edx
08aa06b3 +0x19c6:  mov    %edx,(%eax)
08aa06b5 +0x19c8:  mov    0x8(%ebp),%eax
08aa06b8 +0x19cb:  mov    -0xc(%ebp),%edx
08aa06bb +0x19ce:  mov    %edx,0x4(%eax)
08aa06be +0x19d1:  mov    -0x18(%ebp),%edx
08aa06c1 +0x19d4:  mov    %edx,%eax
08aa06c3 +0x19d6:  add    %eax,%eax
08aa06c5 +0x19d8:  add    %edx,%eax
08aa06c7 +0x19da:  shl    $0x2,%eax
08aa06ca +0x19dd:  mov    %eax,%edx
08aa06cc +0x19df:  add    -0x10(%ebp),%edx
08aa06cf +0x19e2:  mov    0x8(%ebp),%eax
08aa06d2 +0x19e5:  mov    %edx,0x8(%eax)
08aa06d5 +0x19e8:  jmp    08aa075e <+0x1a71>
08aa06da +0x19ed:  mov    %eax,(%esp)
08aa06dd +0x19f0:  call   08725ce0 <__cxa_begin_catch>
08aa06e2 +0x19f5:  cmpl   $0x0,-0xc(%ebp)
08aa06e6 +0x19f9:  jne    08aa070a <+0x1a1d>
08aa06e8 +0x19fb:  mov    -0x14(%ebp),%edx
08aa06eb +0x19fe:  mov    %edx,%eax
08aa06ed +0x1a00:  add    %eax,%eax
08aa06ef +0x1a02:  add    %edx,%eax
08aa06f1 +0x1a04:  shl    $0x2,%eax
08aa06f4 +0x1a07:  mov    %eax,%edx
08aa06f6 +0x1a09:  add    -0x10(%ebp),%edx
08aa06f9 +0x1a0c:  mov    0x8(%ebp),%eax
08aa06fc +0x1a0f:  mov    %edx,0x4(%esp)
08aa0700 +0x1a13:  mov    %eax,(%esp)
08aa0703 +0x1a16:  call   08aa26ba <+0x39cd>
08aa0708 +0x1a1b:  jmp    08aa072b <+0x1a3e>
08aa070a +0x1a1d:  mov    0x8(%ebp),%eax
08aa070d +0x1a20:  mov    %eax,(%esp)
08aa0710 +0x1a23:  call   08a9fc2c <+0xf3f>
08aa0715 +0x1a28:  mov    %eax,0x8(%esp)
08aa0719 +0x1a2c:  mov    -0xc(%ebp),%eax
08aa071c +0x1a2f:  mov    %eax,0x4(%esp)
08aa0720 +0x1a33:  mov    -0x10(%ebp),%eax
08aa0723 +0x1a36:  mov    %eax,(%esp)
08aa0726 +0x1a39:  call   08a9fc34 <+0xf47>
08aa072b +0x1a3e:  mov    0x8(%ebp),%eax
08aa072e +0x1a41:  mov    -0x18(%ebp),%edx
08aa0731 +0x1a44:  mov    %edx,0x8(%esp)
08aa0735 +0x1a48:  mov    -0x10(%ebp),%edx
08aa0738 +0x1a4b:  mov    %edx,0x4(%esp)
08aa073c +0x1a4f:  mov    %eax,(%esp)
08aa073f +0x1a52:  call   08aa194c <+0x2c5f>
08aa0744 +0x1a57:  call   08724be0 <__cxa_rethrow>
08aa0749 +0x1a5c:  mov    %edx,%ebx
08aa074b +0x1a5e:  mov    %eax,%esi
08aa074d +0x1a60:  call   08725c30 <__cxa_end_catch>
08aa0752 +0x1a65:  mov    %esi,%eax
08aa0754 +0x1a67:  mov    %ebx,%edx
08aa0756 +0x1a69:  mov    %eax,(%esp)
08aa0759 +0x1a6c:  call   08ae3750 <_Unwind_Resume>
08aa075e +0x1a71:  lea    -0x8(%ebp),%esp
08aa0761 +0x1a74:  add    $0x0,%esp
08aa0764 +0x1a77:  pop    %ebx
08aa0765 +0x1a78:  pop    %esi
08aa0766 +0x1a79:  pop    %ebp
08aa0767 +0x1a7a:  ret
08aa0768 +0x1a7b:  push   %ebp
08aa0769 +0x1a7c:  mov    %esp,%ebp
08aa076b +0x1a7e:  sub    $0x18,%esp
08aa076e +0x1a81:  mov    0x8(%ebp),%eax
08aa0771 +0x1a84:  mov    %eax,(%esp)
08aa0774 +0x1a87:  call   08a9f8ce <+0xbe1>
08aa0779 +0x1a8c:  mov    0x8(%ebp),%edx
08aa077c +0x1a8f:  mov    0x4(%edx),%edx
08aa077f +0x1a92:  mov    %eax,0x8(%esp)
08aa0783 +0x1a96:  mov    %edx,0x4(%esp)
08aa0787 +0x1a9a:  mov    0xc(%ebp),%eax
08aa078a +0x1a9d:  mov    %eax,(%esp)
08aa078d +0x1aa0:  call   08a9f8d6 <+0xbe9>
08aa0792 +0x1aa5:  mov    0x8(%ebp),%eax
08aa0795 +0x1aa8:  mov    0xc(%ebp),%edx
08aa0798 +0x1aab:  mov    %edx,0x4(%eax)
08aa079b +0x1aae:  leave
08aa079c +0x1aaf:  ret
08aa079d +0x1ab0:  nop
08aa079e +0x1ab1:  push   %ebp
08aa079f +0x1ab2:  mov    %esp,%ebp
08aa07a1 +0x1ab4:  sub    $0x18,%esp
08aa07a4 +0x1ab7:  mov    0xc(%ebp),%eax
08aa07a7 +0x1aba:  mov    %eax,0x4(%esp)
08aa07ab +0x1abe:  movl   $0x10,(%esp)
08aa07b2 +0x1ac5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa07b7 +0x1aca:  mov    %eax,%edx
08aa07b9 +0x1acc:  test   %edx,%edx
08aa07bb +0x1ace:  je     08aa07d6 <+0x1ae9>
08aa07bd +0x1ad0:  mov    0x10(%ebp),%edx
08aa07c0 +0x1ad3:  mov    (%edx),%ecx
08aa07c2 +0x1ad5:  mov    %ecx,(%eax)
08aa07c4 +0x1ad7:  mov    0x4(%edx),%ecx
08aa07c7 +0x1ada:  mov    %ecx,0x4(%eax)
08aa07ca +0x1add:  mov    0x8(%edx),%ecx
08aa07cd +0x1ae0:  mov    %ecx,0x8(%eax)
08aa07d0 +0x1ae3:  mov    0xc(%edx),%edx
08aa07d3 +0x1ae6:  mov    %edx,0xc(%eax)
08aa07d6 +0x1ae9:  leave
08aa07d7 +0x1aea:  ret
08aa07d8 +0x1aeb:  push   %ebp
08aa07d9 +0x1aec:  mov    %esp,%ebp
08aa07db +0x1aee:  push   %ebx
08aa07dc +0x1aef:  sub    $0x14,%esp
08aa07df +0x1af2:  mov    0x8(%ebp),%ebx
08aa07e2 +0x1af5:  mov    0xc(%ebp),%eax
08aa07e5 +0x1af8:  add    $0x4,%eax
08aa07e8 +0x1afb:  mov    %eax,0x4(%esp)
08aa07ec +0x1aff:  mov    %ebx,(%esp)
08aa07ef +0x1b02:  call   08aa26ce <+0x39e1>
08aa07f4 +0x1b07:  mov    %ebx,%eax
08aa07f6 +0x1b09:  add    $0x14,%esp
08aa07f9 +0x1b0c:  pop    %ebx
08aa07fa +0x1b0d:  pop    %ebp
08aa07fb +0x1b0e:  ret    $0x4
08aa07fe +0x1b11:  push   %ebp
08aa07ff +0x1b12:  mov    %esp,%ebp
08aa0801 +0x1b14:  push   %esi
08aa0802 +0x1b15:  push   %ebx
08aa0803 +0x1b16:  sub    $0x30,%esp
08aa0806 +0x1b19:  mov    0x8(%ebp),%eax
08aa0809 +0x1b1c:  mov    0x4(%eax),%edx
08aa080c +0x1b1f:  mov    0x8(%ebp),%eax
08aa080f +0x1b22:  mov    0x8(%eax),%eax
08aa0812 +0x1b25:  cmp    %eax,%edx
08aa0814 +0x1b27:  je     08aa08b5 <+0x1bc8>
08aa081a +0x1b2d:  mov    0x8(%ebp),%eax
08aa081d +0x1b30:  mov    0x4(%eax),%eax
08aa0820 +0x1b33:  sub    $0x10,%eax
08aa0823 +0x1b36:  mov    %eax,(%esp)
08aa0826 +0x1b39:  call   08aa26dd <+0x39f0>
08aa082b +0x1b3e:  mov    0x8(%ebp),%edx
08aa082e +0x1b41:  mov    0x4(%edx),%ecx
08aa0831 +0x1b44:  mov    0x8(%ebp),%edx
08aa0834 +0x1b47:  mov    %eax,0x8(%esp)
08aa0838 +0x1b4b:  mov    %ecx,0x4(%esp)
08aa083c +0x1b4f:  mov    %edx,(%esp)
08aa083f +0x1b52:  call   08aa26e6 <+0x39f9>
08aa0844 +0x1b57:  mov    0x8(%ebp),%eax
08aa0847 +0x1b5a:  mov    0x4(%eax),%eax
08aa084a +0x1b5d:  lea    0x10(%eax),%edx
08aa084d +0x1b60:  mov    0x8(%ebp),%eax
08aa0850 +0x1b63:  mov    %edx,0x4(%eax)
08aa0853 +0x1b66:  mov    0x8(%ebp),%eax
08aa0856 +0x1b69:  mov    0x4(%eax),%eax
08aa0859 +0x1b6c:  lea    -0x10(%eax),%esi
08aa085c +0x1b6f:  mov    0x8(%ebp),%eax
08aa085f +0x1b72:  mov    0x4(%eax),%eax
08aa0862 +0x1b75:  lea    -0x20(%eax),%ebx
08aa0865 +0x1b78:  lea    0xc(%ebp),%eax
08aa0868 +0x1b7b:  mov    %eax,(%esp)
08aa086b +0x1b7e:  call   08aa2740 <+0x3a53>
08aa0870 +0x1b83:  mov    (%eax),%eax
08aa0872 +0x1b85:  mov    %esi,0x8(%esp)
08aa0876 +0x1b89:  mov    %ebx,0x4(%esp)
08aa087a +0x1b8d:  mov    %eax,(%esp)
08aa087d +0x1b90:  call   08aa2748 <+0x3a5b>
08aa0882 +0x1b95:  lea    0xc(%ebp),%eax
08aa0885 +0x1b98:  mov    %eax,(%esp)
08aa0888 +0x1b9b:  call   08aa2788 <+0x3a9b>
08aa088d +0x1ba0:  mov    %eax,%ebx
08aa088f +0x1ba2:  mov    0x10(%ebp),%eax
08aa0892 +0x1ba5:  mov    %eax,(%esp)
08aa0895 +0x1ba8:  call   08aa2780 <+0x3a93>
08aa089a +0x1bad:  mov    (%eax),%edx
08aa089c +0x1baf:  mov    %edx,(%ebx)
08aa089e +0x1bb1:  mov    0x4(%eax),%edx
08aa08a1 +0x1bb4:  mov    %edx,0x4(%ebx)
08aa08a4 +0x1bb7:  mov    0x8(%eax),%edx
08aa08a7 +0x1bba:  mov    %edx,0x8(%ebx)
08aa08aa +0x1bbd:  mov    0xc(%eax),%eax
08aa08ad +0x1bc0:  mov    %eax,0xc(%ebx)
08aa08b0 +0x1bc3:  jmp    08aa0ab7 <+0x1dca>
08aa08b5 +0x1bc8:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa08bd +0x1bd0:  movl   $0x1,0x4(%esp)
08aa08c5 +0x1bd8:  mov    0x8(%ebp),%eax
08aa08c8 +0x1bdb:  mov    %eax,(%esp)
08aa08cb +0x1bde:  call   08aa2792 <+0x3aa5>
08aa08d0 +0x1be3:  mov    %eax,-0x18(%ebp)
08aa08d3 +0x1be6:  lea    -0x1c(%ebp),%eax
08aa08d6 +0x1be9:  mov    0x8(%ebp),%edx
08aa08d9 +0x1bec:  mov    %edx,0x4(%esp)
08aa08dd +0x1bf0:  mov    %eax,(%esp)
08aa08e0 +0x1bf3:  call   08aa2838 <+0x3b4b>
08aa08e5 +0x1bf8:  sub    $0x4,%esp
08aa08e8 +0x1bfb:  lea    -0x1c(%ebp),%eax
08aa08eb +0x1bfe:  mov    %eax,0x4(%esp)
08aa08ef +0x1c02:  lea    0xc(%ebp),%eax
08aa08f2 +0x1c05:  mov    %eax,(%esp)
08aa08f5 +0x1c08:  call   08aa285b <+0x3b6e>
08aa08fa +0x1c0d:  mov    %eax,-0x14(%ebp)
08aa08fd +0x1c10:  mov    0x8(%ebp),%eax
08aa0900 +0x1c13:  mov    -0x18(%ebp),%edx
08aa0903 +0x1c16:  mov    %edx,0x4(%esp)
08aa0907 +0x1c1a:  mov    %eax,(%esp)
08aa090a +0x1c1d:  call   08aa288e <+0x3ba1>
08aa090f +0x1c22:  mov    %eax,-0x10(%ebp)
08aa0912 +0x1c25:  mov    -0x10(%ebp),%eax
08aa0915 +0x1c28:  mov    %eax,-0xc(%ebp)
08aa0918 +0x1c2b:  mov    0x10(%ebp),%eax
08aa091b +0x1c2e:  mov    %eax,(%esp)
08aa091e +0x1c31:  call   08aa2780 <+0x3a93>
08aa0923 +0x1c36:  mov    -0x14(%ebp),%edx
08aa0926 +0x1c39:  shl    $0x4,%edx
08aa0929 +0x1c3c:  mov    %edx,%ecx
08aa092b +0x1c3e:  add    -0x10(%ebp),%ecx
08aa092e +0x1c41:  mov    0x8(%ebp),%edx
08aa0931 +0x1c44:  mov    %eax,0x8(%esp)
08aa0935 +0x1c48:  mov    %ecx,0x4(%esp)
08aa0939 +0x1c4c:  mov    %edx,(%esp)
08aa093c +0x1c4f:  call   08aa079e <+0x1ab1>
08aa0941 +0x1c54:  movl   $0x0,-0xc(%ebp)
08aa0948 +0x1c5b:  mov    0x8(%ebp),%eax
08aa094b +0x1c5e:  mov    %eax,(%esp)
08aa094e +0x1c61:  call   08a9f8ce <+0xbe1>
08aa0953 +0x1c66:  mov    %eax,%ebx
08aa0955 +0x1c68:  lea    0xc(%ebp),%eax
08aa0958 +0x1c6b:  mov    %eax,(%esp)
08aa095b +0x1c6e:  call   08aa2740 <+0x3a53>
08aa0960 +0x1c73:  mov    (%eax),%edx
08aa0962 +0x1c75:  mov    0x8(%ebp),%eax
08aa0965 +0x1c78:  mov    (%eax),%eax
08aa0967 +0x1c7a:  mov    %ebx,0xc(%esp)
08aa096b +0x1c7e:  mov    -0x10(%ebp),%ecx
08aa096e +0x1c81:  mov    %ecx,0x8(%esp)
08aa0972 +0x1c85:  mov    %edx,0x4(%esp)
08aa0976 +0x1c89:  mov    %eax,(%esp)
08aa0979 +0x1c8c:  call   08aa28bd <+0x3bd0>
08aa097e +0x1c91:  mov    %eax,-0xc(%ebp)
08aa0981 +0x1c94:  addl   $0x10,-0xc(%ebp)
08aa0985 +0x1c98:  mov    0x8(%ebp),%eax
08aa0988 +0x1c9b:  mov    %eax,(%esp)
08aa098b +0x1c9e:  call   08a9f8ce <+0xbe1>
08aa0990 +0x1ca3:  mov    %eax,%ebx
08aa0992 +0x1ca5:  mov    0x8(%ebp),%eax
08aa0995 +0x1ca8:  mov    0x4(%eax),%esi
08aa0998 +0x1cab:  lea    0xc(%ebp),%eax
08aa099b +0x1cae:  mov    %eax,(%esp)
08aa099e +0x1cb1:  call   08aa2740 <+0x3a53>
08aa09a3 +0x1cb6:  mov    (%eax),%eax
08aa09a5 +0x1cb8:  mov    %ebx,0xc(%esp)
08aa09a9 +0x1cbc:  mov    -0xc(%ebp),%edx
08aa09ac +0x1cbf:  mov    %edx,0x8(%esp)
08aa09b0 +0x1cc3:  mov    %esi,0x4(%esp)
08aa09b4 +0x1cc7:  mov    %eax,(%esp)
08aa09b7 +0x1cca:  call   08aa28bd <+0x3bd0>
08aa09bc +0x1ccf:  mov    %eax,-0xc(%ebp)
08aa09bf +0x1cd2:  mov    0x8(%ebp),%eax
08aa09c2 +0x1cd5:  mov    %eax,(%esp)
08aa09c5 +0x1cd8:  call   08a9f8ce <+0xbe1>
08aa09ca +0x1cdd:  mov    0x8(%ebp),%edx
08aa09cd +0x1ce0:  mov    0x4(%edx),%ecx
08aa09d0 +0x1ce3:  mov    0x8(%ebp),%edx
08aa09d3 +0x1ce6:  mov    (%edx),%edx
08aa09d5 +0x1ce8:  mov    %eax,0x8(%esp)
08aa09d9 +0x1cec:  mov    %ecx,0x4(%esp)
08aa09dd +0x1cf0:  mov    %edx,(%esp)
08aa09e0 +0x1cf3:  call   08a9f8d6 <+0xbe9>
08aa09e5 +0x1cf8:  mov    0x8(%ebp),%eax
08aa09e8 +0x1cfb:  mov    0x8(%eax),%eax
08aa09eb +0x1cfe:  mov    %eax,%edx
08aa09ed +0x1d00:  mov    0x8(%ebp),%eax
08aa09f0 +0x1d03:  mov    (%eax),%eax
08aa09f2 +0x1d05:  mov    %edx,%ecx
08aa09f4 +0x1d07:  sub    %eax,%ecx
08aa09f6 +0x1d09:  mov    %ecx,%eax
08aa09f8 +0x1d0b:  sar    $0x4,%eax
08aa09fb +0x1d0e:  mov    %eax,%ecx
08aa09fd +0x1d10:  mov    0x8(%ebp),%eax
08aa0a00 +0x1d13:  mov    (%eax),%edx
08aa0a02 +0x1d15:  mov    0x8(%ebp),%eax
08aa0a05 +0x1d18:  mov    %ecx,0x8(%esp)
08aa0a09 +0x1d1c:  mov    %edx,0x4(%esp)
08aa0a0d +0x1d20:  mov    %eax,(%esp)
08aa0a10 +0x1d23:  call   08aa1694 <+0x29a7>
08aa0a15 +0x1d28:  mov    0x8(%ebp),%eax
08aa0a18 +0x1d2b:  mov    -0x10(%ebp),%edx
08aa0a1b +0x1d2e:  mov    %edx,(%eax)
08aa0a1d +0x1d30:  mov    0x8(%ebp),%eax
08aa0a20 +0x1d33:  mov    -0xc(%ebp),%edx
08aa0a23 +0x1d36:  mov    %edx,0x4(%eax)
08aa0a26 +0x1d39:  mov    -0x18(%ebp),%eax
08aa0a29 +0x1d3c:  shl    $0x4,%eax
08aa0a2c +0x1d3f:  mov    %eax,%edx
08aa0a2e +0x1d41:  add    -0x10(%ebp),%edx
08aa0a31 +0x1d44:  mov    0x8(%ebp),%eax
08aa0a34 +0x1d47:  mov    %edx,0x8(%eax)
08aa0a37 +0x1d4a:  jmp    08aa0ab7 <+0x1dca>
08aa0a39 +0x1d4c:  mov    %eax,(%esp)
08aa0a3c +0x1d4f:  call   08725ce0 <__cxa_begin_catch>
08aa0a41 +0x1d54:  cmpl   $0x0,-0xc(%ebp)
08aa0a45 +0x1d58:  jne    08aa0a63 <+0x1d76>
08aa0a47 +0x1d5a:  mov    -0x14(%ebp),%eax
08aa0a4a +0x1d5d:  shl    $0x4,%eax
08aa0a4d +0x1d60:  mov    %eax,%edx
08aa0a4f +0x1d62:  add    -0x10(%ebp),%edx
08aa0a52 +0x1d65:  mov    0x8(%ebp),%eax
08aa0a55 +0x1d68:  mov    %edx,0x4(%esp)
08aa0a59 +0x1d6c:  mov    %eax,(%esp)
08aa0a5c +0x1d6f:  call   08aa2916 <+0x3c29>
08aa0a61 +0x1d74:  jmp    08aa0a84 <+0x1d97>
08aa0a63 +0x1d76:  mov    0x8(%ebp),%eax
08aa0a66 +0x1d79:  mov    %eax,(%esp)
08aa0a69 +0x1d7c:  call   08a9f8ce <+0xbe1>
08aa0a6e +0x1d81:  mov    %eax,0x8(%esp)
08aa0a72 +0x1d85:  mov    -0xc(%ebp),%eax
08aa0a75 +0x1d88:  mov    %eax,0x4(%esp)
08aa0a79 +0x1d8c:  mov    -0x10(%ebp),%eax
08aa0a7c +0x1d8f:  mov    %eax,(%esp)
08aa0a7f +0x1d92:  call   08a9f8d6 <+0xbe9>
08aa0a84 +0x1d97:  mov    0x8(%ebp),%eax
08aa0a87 +0x1d9a:  mov    -0x18(%ebp),%edx
08aa0a8a +0x1d9d:  mov    %edx,0x8(%esp)
08aa0a8e +0x1da1:  mov    -0x10(%ebp),%edx
08aa0a91 +0x1da4:  mov    %edx,0x4(%esp)
08aa0a95 +0x1da8:  mov    %eax,(%esp)
08aa0a98 +0x1dab:  call   08aa1694 <+0x29a7>
08aa0a9d +0x1db0:  call   08724be0 <__cxa_rethrow>
08aa0aa2 +0x1db5:  mov    %edx,%ebx
08aa0aa4 +0x1db7:  mov    %eax,%esi
08aa0aa6 +0x1db9:  call   08725c30 <__cxa_end_catch>
08aa0aab +0x1dbe:  mov    %esi,%eax
08aa0aad +0x1dc0:  mov    %ebx,%edx
08aa0aaf +0x1dc2:  mov    %eax,(%esp)
08aa0ab2 +0x1dc5:  call   08ae3750 <_Unwind_Resume>
08aa0ab7 +0x1dca:  lea    -0x8(%ebp),%esp
08aa0aba +0x1dcd:  add    $0x0,%esp
08aa0abd +0x1dd0:  pop    %ebx
08aa0abe +0x1dd1:  pop    %esi
08aa0abf +0x1dd2:  pop    %ebp
08aa0ac0 +0x1dd3:  ret
08aa0ac1 +0x1dd4:  nop
08aa0ac2 +0x1dd5:  push   %ebp
08aa0ac3 +0x1dd6:  mov    %esp,%ebp
08aa0ac5 +0x1dd8:  sub    $0x18,%esp
08aa0ac8 +0x1ddb:  mov    0x8(%ebp),%eax
08aa0acb +0x1dde:  mov    %eax,(%esp)
08aa0ace +0x1de1:  call   08a9f986 <+0xc99>
08aa0ad3 +0x1de6:  mov    0x8(%ebp),%edx
08aa0ad6 +0x1de9:  mov    0x4(%edx),%edx
08aa0ad9 +0x1dec:  mov    %eax,0x8(%esp)
08aa0add +0x1df0:  mov    %edx,0x4(%esp)
08aa0ae1 +0x1df4:  mov    0xc(%ebp),%eax
08aa0ae4 +0x1df7:  mov    %eax,(%esp)
08aa0ae7 +0x1dfa:  call   08a9f98e <+0xca1>
08aa0aec +0x1dff:  mov    0x8(%ebp),%eax
08aa0aef +0x1e02:  mov    0xc(%ebp),%edx
08aa0af2 +0x1e05:  mov    %edx,0x4(%eax)
08aa0af5 +0x1e08:  leave
08aa0af6 +0x1e09:  ret
08aa0af7 +0x1e0a:  nop
08aa0af8 +0x1e0b:  push   %ebp
08aa0af9 +0x1e0c:  mov    %esp,%ebp
08aa0afb +0x1e0e:  sub    $0x18,%esp
08aa0afe +0x1e11:  mov    0xc(%ebp),%eax
08aa0b01 +0x1e14:  mov    (%eax),%edx
08aa0b03 +0x1e16:  mov    0x8(%ebp),%eax
08aa0b06 +0x1e19:  mov    %edx,(%eax)
08aa0b08 +0x1e1b:  mov    0xc(%ebp),%eax
08aa0b0b +0x1e1e:  mov    0x4(%eax),%edx
08aa0b0e +0x1e21:  mov    0x8(%ebp),%eax
08aa0b11 +0x1e24:  mov    %edx,0x4(%eax)
08aa0b14 +0x1e27:  mov    0xc(%ebp),%eax
08aa0b17 +0x1e2a:  lea    0x8(%eax),%edx
08aa0b1a +0x1e2d:  mov    0x8(%ebp),%eax
08aa0b1d +0x1e30:  add    $0x8,%eax
08aa0b20 +0x1e33:  mov    %edx,0x4(%esp)
08aa0b24 +0x1e37:  mov    %eax,(%esp)
08aa0b27 +0x1e3a:  call   083db7dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x757a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x757a8
08aa0b2c +0x1e3f:  leave
08aa0b2d +0x1e40:  ret
08aa0b2e +0x1e41:  push   %ebp
08aa0b2f +0x1e42:  mov    %esp,%ebp
08aa0b31 +0x1e44:  push   %edi
08aa0b32 +0x1e45:  push   %esi
08aa0b33 +0x1e46:  push   %ebx
08aa0b34 +0x1e47:  sub    $0x2c,%esp
08aa0b37 +0x1e4a:  mov    0xc(%ebp),%esi
08aa0b3a +0x1e4d:  mov    %esi,0x4(%esp)
08aa0b3e +0x1e51:  movl   $0x14,(%esp)
08aa0b45 +0x1e58:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa0b4a +0x1e5d:  mov    %eax,%ebx
08aa0b4c +0x1e5f:  mov    %ebx,%eax
08aa0b4e +0x1e61:  test   %eax,%eax
08aa0b50 +0x1e63:  je     08aa0b83 <+0x1e96>
08aa0b52 +0x1e65:  mov    %ebx,%eax
08aa0b54 +0x1e67:  mov    0x10(%ebp),%edx
08aa0b57 +0x1e6a:  mov    %edx,0x4(%esp)
08aa0b5b +0x1e6e:  mov    %eax,(%esp)
08aa0b5e +0x1e71:  call   08aa0af8 <+0x1e0b>
08aa0b63 +0x1e76:  jmp    08aa0b83 <+0x1e96>
08aa0b65 +0x1e78:  mov    %edx,%edi
08aa0b67 +0x1e7a:  mov    %eax,-0x1c(%ebp)
08aa0b6a +0x1e7d:  mov    %esi,0x4(%esp)
08aa0b6e +0x1e81:  mov    %ebx,(%esp)
08aa0b71 +0x1e84:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa0b76 +0x1e89:  mov    -0x1c(%ebp),%eax
08aa0b79 +0x1e8c:  mov    %edi,%edx
08aa0b7b +0x1e8e:  mov    %eax,(%esp)
08aa0b7e +0x1e91:  call   08ae3750 <_Unwind_Resume>
08aa0b83 +0x1e96:  add    $0x2c,%esp
08aa0b86 +0x1e99:  pop    %ebx
08aa0b87 +0x1e9a:  pop    %esi
08aa0b88 +0x1e9b:  pop    %edi
08aa0b89 +0x1e9c:  pop    %ebp
08aa0b8a +0x1e9d:  ret
08aa0b8b +0x1e9e:  nop
08aa0b8c +0x1e9f:  push   %ebp
08aa0b8d +0x1ea0:  mov    %esp,%ebp
08aa0b8f +0x1ea2:  push   %ebx
08aa0b90 +0x1ea3:  sub    $0x14,%esp
08aa0b93 +0x1ea6:  mov    0x8(%ebp),%ebx
08aa0b96 +0x1ea9:  mov    0xc(%ebp),%eax
08aa0b99 +0x1eac:  add    $0x4,%eax
08aa0b9c +0x1eaf:  mov    %eax,0x4(%esp)
08aa0ba0 +0x1eb3:  mov    %ebx,(%esp)
08aa0ba3 +0x1eb6:  call   08aa292a <+0x3c3d>
08aa0ba8 +0x1ebb:  mov    %ebx,%eax
08aa0baa +0x1ebd:  add    $0x14,%esp
08aa0bad +0x1ec0:  pop    %ebx
08aa0bae +0x1ec1:  pop    %ebp
08aa0baf +0x1ec2:  ret    $0x4
08aa0bb2 +0x1ec5:  push   %ebp
08aa0bb3 +0x1ec6:  mov    %esp,%ebp
08aa0bb5 +0x1ec8:  sub    $0x18,%esp
08aa0bb8 +0x1ecb:  mov    0xc(%ebp),%eax
08aa0bbb +0x1ece:  mov    (%eax),%edx
08aa0bbd +0x1ed0:  mov    0x8(%ebp),%eax
08aa0bc0 +0x1ed3:  mov    %edx,(%eax)
08aa0bc2 +0x1ed5:  mov    0xc(%ebp),%eax
08aa0bc5 +0x1ed8:  mov    0x4(%eax),%edx
08aa0bc8 +0x1edb:  mov    0x8(%ebp),%eax
08aa0bcb +0x1ede:  mov    %edx,0x4(%eax)
08aa0bce +0x1ee1:  mov    0xc(%ebp),%eax
08aa0bd1 +0x1ee4:  lea    0x8(%eax),%edx
08aa0bd4 +0x1ee7:  mov    0x8(%ebp),%eax
08aa0bd7 +0x1eea:  add    $0x8,%eax
08aa0bda +0x1eed:  mov    %edx,0x4(%esp)
08aa0bde +0x1ef1:  mov    %eax,(%esp)
08aa0be1 +0x1ef4:  call   0837fbbe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf65e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf65e
08aa0be6 +0x1ef9:  mov    0x8(%ebp),%eax
08aa0be9 +0x1efc:  leave
08aa0bea +0x1efd:  ret
08aa0beb +0x1efe:  nop
08aa0bec +0x1eff:  push   %ebp
08aa0bed +0x1f00:  mov    %esp,%ebp
08aa0bef +0x1f02:  push   %esi
08aa0bf0 +0x1f03:  push   %ebx
08aa0bf1 +0x1f04:  sub    $0x40,%esp
08aa0bf4 +0x1f07:  mov    0x8(%ebp),%eax
08aa0bf7 +0x1f0a:  mov    0x4(%eax),%edx
08aa0bfa +0x1f0d:  mov    0x8(%ebp),%eax
08aa0bfd +0x1f10:  mov    0x8(%eax),%eax
08aa0c00 +0x1f13:  cmp    %eax,%edx
08aa0c02 +0x1f15:  je     08aa0cd1 <+0x1fe4>
08aa0c08 +0x1f1b:  mov    0x8(%ebp),%eax
08aa0c0b +0x1f1e:  mov    0x4(%eax),%eax
08aa0c0e +0x1f21:  sub    $0x14,%eax
08aa0c11 +0x1f24:  mov    %eax,(%esp)
08aa0c14 +0x1f27:  call   08aa2939 <+0x3c4c>
08aa0c19 +0x1f2c:  mov    0x8(%ebp),%edx
08aa0c1c +0x1f2f:  mov    0x4(%edx),%ecx
08aa0c1f +0x1f32:  mov    0x8(%ebp),%edx
08aa0c22 +0x1f35:  mov    %eax,0x8(%esp)
08aa0c26 +0x1f39:  mov    %ecx,0x4(%esp)
08aa0c2a +0x1f3d:  mov    %edx,(%esp)
08aa0c2d +0x1f40:  call   08aa2942 <+0x3c55>
08aa0c32 +0x1f45:  mov    0x8(%ebp),%eax
08aa0c35 +0x1f48:  mov    0x4(%eax),%eax
08aa0c38 +0x1f4b:  lea    0x14(%eax),%edx
08aa0c3b +0x1f4e:  mov    0x8(%ebp),%eax
08aa0c3e +0x1f51:  mov    %edx,0x4(%eax)
08aa0c41 +0x1f54:  mov    0x8(%ebp),%eax
08aa0c44 +0x1f57:  mov    0x4(%eax),%eax
08aa0c47 +0x1f5a:  lea    -0x14(%eax),%esi
08aa0c4a +0x1f5d:  mov    0x8(%ebp),%eax
08aa0c4d +0x1f60:  mov    0x4(%eax),%eax
08aa0c50 +0x1f63:  lea    -0x28(%eax),%ebx
08aa0c53 +0x1f66:  lea    0xc(%ebp),%eax
08aa0c56 +0x1f69:  mov    %eax,(%esp)
08aa0c59 +0x1f6c:  call   08aa29aa <+0x3cbd>
08aa0c5e +0x1f71:  mov    (%eax),%eax
08aa0c60 +0x1f73:  mov    %esi,0x8(%esp)
08aa0c64 +0x1f77:  mov    %ebx,0x4(%esp)
08aa0c68 +0x1f7b:  mov    %eax,(%esp)
08aa0c6b +0x1f7e:  call   08aa29b2 <+0x3cc5>
08aa0c70 +0x1f83:  mov    0x10(%ebp),%eax
08aa0c73 +0x1f86:  mov    %eax,(%esp)
08aa0c76 +0x1f89:  call   08aa29ea <+0x3cfd>
08aa0c7b +0x1f8e:  mov    %eax,0x4(%esp)
08aa0c7f +0x1f92:  lea    -0x30(%ebp),%eax
08aa0c82 +0x1f95:  mov    %eax,(%esp)
08aa0c85 +0x1f98:  call   08aa0af8 <+0x1e0b>
08aa0c8a +0x1f9d:  lea    0xc(%ebp),%eax
08aa0c8d +0x1fa0:  mov    %eax,(%esp)
08aa0c90 +0x1fa3:  call   08aa29f2 <+0x3d05>
08aa0c95 +0x1fa8:  lea    -0x30(%ebp),%edx
08aa0c98 +0x1fab:  mov    %edx,0x4(%esp)
08aa0c9c +0x1faf:  mov    %eax,(%esp)
08aa0c9f +0x1fb2:  call   08aa0bb2 <+0x1ec5>
08aa0ca4 +0x1fb7:  jmp    08aa0cc1 <+0x1fd4>
08aa0ca6 +0x1fb9:  mov    %edx,%ebx
08aa0ca8 +0x1fbb:  mov    %eax,%esi
08aa0caa +0x1fbd:  lea    -0x30(%ebp),%eax
08aa0cad +0x1fc0:  mov    %eax,(%esp)
08aa0cb0 +0x1fc3:  call   08a9ed60 <+0x73>
08aa0cb5 +0x1fc8:  mov    %esi,%eax
08aa0cb7 +0x1fca:  mov    %ebx,%edx
08aa0cb9 +0x1fcc:  mov    %eax,(%esp)
08aa0cbc +0x1fcf:  call   08ae3750 <_Unwind_Resume>
08aa0cc1 +0x1fd4:  lea    -0x30(%ebp),%eax
08aa0cc4 +0x1fd7:  mov    %eax,(%esp)
08aa0cc7 +0x1fda:  call   08a9ed60 <+0x73>
08aa0ccc +0x1fdf:  jmp    08aa0ef3 <+0x2206>
08aa0cd1 +0x1fe4:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa0cd9 +0x1fec:  movl   $0x1,0x4(%esp)
08aa0ce1 +0x1ff4:  mov    0x8(%ebp),%eax
08aa0ce4 +0x1ff7:  mov    %eax,(%esp)
08aa0ce7 +0x1ffa:  call   08aa29fc <+0x3d0f>
08aa0cec +0x1fff:  mov    %eax,-0x18(%ebp)
08aa0cef +0x2002:  lea    -0x1c(%ebp),%eax
08aa0cf2 +0x2005:  mov    0x8(%ebp),%edx
08aa0cf5 +0x2008:  mov    %edx,0x4(%esp)
08aa0cf9 +0x200c:  mov    %eax,(%esp)
08aa0cfc +0x200f:  call   08aa2aa2 <+0x3db5>
08aa0d01 +0x2014:  sub    $0x4,%esp
08aa0d04 +0x2017:  lea    -0x1c(%ebp),%eax
08aa0d07 +0x201a:  mov    %eax,0x4(%esp)
08aa0d0b +0x201e:  lea    0xc(%ebp),%eax
08aa0d0e +0x2021:  mov    %eax,(%esp)
08aa0d11 +0x2024:  call   08aa2ac5 <+0x3dd8>
08aa0d16 +0x2029:  mov    %eax,-0x14(%ebp)
08aa0d19 +0x202c:  mov    0x8(%ebp),%eax
08aa0d1c +0x202f:  mov    -0x18(%ebp),%edx
08aa0d1f +0x2032:  mov    %edx,0x4(%esp)
08aa0d23 +0x2036:  mov    %eax,(%esp)
08aa0d26 +0x2039:  call   08aa2afe <+0x3e11>
08aa0d2b +0x203e:  mov    %eax,-0x10(%ebp)
08aa0d2e +0x2041:  mov    -0x10(%ebp),%eax
08aa0d31 +0x2044:  mov    %eax,-0xc(%ebp)
08aa0d34 +0x2047:  mov    0x10(%ebp),%eax
08aa0d37 +0x204a:  mov    %eax,(%esp)
08aa0d3a +0x204d:  call   08aa29ea <+0x3cfd>
08aa0d3f +0x2052:  mov    %eax,%ecx
08aa0d41 +0x2054:  mov    -0x14(%ebp),%edx
08aa0d44 +0x2057:  mov    %edx,%eax
08aa0d46 +0x2059:  shl    $0x2,%eax
08aa0d49 +0x205c:  add    %edx,%eax
08aa0d4b +0x205e:  shl    $0x2,%eax
08aa0d4e +0x2061:  mov    %eax,%edx
08aa0d50 +0x2063:  add    -0x10(%ebp),%edx
08aa0d53 +0x2066:  mov    0x8(%ebp),%eax
08aa0d56 +0x2069:  mov    %ecx,0x8(%esp)
08aa0d5a +0x206d:  mov    %edx,0x4(%esp)
08aa0d5e +0x2071:  mov    %eax,(%esp)
08aa0d61 +0x2074:  call   08aa0b2e <+0x1e41>
08aa0d66 +0x2079:  movl   $0x0,-0xc(%ebp)
08aa0d6d +0x2080:  mov    0x8(%ebp),%eax
08aa0d70 +0x2083:  mov    %eax,(%esp)
08aa0d73 +0x2086:  call   08a9f986 <+0xc99>
08aa0d78 +0x208b:  mov    %eax,%ebx
08aa0d7a +0x208d:  lea    0xc(%ebp),%eax
08aa0d7d +0x2090:  mov    %eax,(%esp)
08aa0d80 +0x2093:  call   08aa29aa <+0x3cbd>
08aa0d85 +0x2098:  mov    (%eax),%edx
08aa0d87 +0x209a:  mov    0x8(%ebp),%eax
08aa0d8a +0x209d:  mov    (%eax),%eax
08aa0d8c +0x209f:  mov    %ebx,0xc(%esp)
08aa0d90 +0x20a3:  mov    -0x10(%ebp),%ecx
08aa0d93 +0x20a6:  mov    %ecx,0x8(%esp)
08aa0d97 +0x20aa:  mov    %edx,0x4(%esp)
08aa0d9b +0x20ae:  mov    %eax,(%esp)
08aa0d9e +0x20b1:  call   08aa2b2d <+0x3e40>
08aa0da3 +0x20b6:  mov    %eax,-0xc(%ebp)
08aa0da6 +0x20b9:  addl   $0x14,-0xc(%ebp)
08aa0daa +0x20bd:  mov    0x8(%ebp),%eax
08aa0dad +0x20c0:  mov    %eax,(%esp)
08aa0db0 +0x20c3:  call   08a9f986 <+0xc99>
08aa0db5 +0x20c8:  mov    %eax,%ebx
08aa0db7 +0x20ca:  mov    0x8(%ebp),%eax
08aa0dba +0x20cd:  mov    0x4(%eax),%esi
08aa0dbd +0x20d0:  lea    0xc(%ebp),%eax
08aa0dc0 +0x20d3:  mov    %eax,(%esp)
08aa0dc3 +0x20d6:  call   08aa29aa <+0x3cbd>
08aa0dc8 +0x20db:  mov    (%eax),%eax
08aa0dca +0x20dd:  mov    %ebx,0xc(%esp)
08aa0dce +0x20e1:  mov    -0xc(%ebp),%edx
08aa0dd1 +0x20e4:  mov    %edx,0x8(%esp)
08aa0dd5 +0x20e8:  mov    %esi,0x4(%esp)
08aa0dd9 +0x20ec:  mov    %eax,(%esp)
08aa0ddc +0x20ef:  call   08aa2b2d <+0x3e40>
08aa0de1 +0x20f4:  mov    %eax,-0xc(%ebp)
08aa0de4 +0x20f7:  mov    0x8(%ebp),%eax
08aa0de7 +0x20fa:  mov    %eax,(%esp)
08aa0dea +0x20fd:  call   08a9f986 <+0xc99>
08aa0def +0x2102:  mov    0x8(%ebp),%edx
08aa0df2 +0x2105:  mov    0x4(%edx),%ecx
08aa0df5 +0x2108:  mov    0x8(%ebp),%edx
08aa0df8 +0x210b:  mov    (%edx),%edx
08aa0dfa +0x210d:  mov    %eax,0x8(%esp)
08aa0dfe +0x2111:  mov    %ecx,0x4(%esp)
08aa0e02 +0x2115:  mov    %edx,(%esp)
08aa0e05 +0x2118:  call   08a9f98e <+0xca1>
08aa0e0a +0x211d:  mov    0x8(%ebp),%eax
08aa0e0d +0x2120:  mov    0x8(%eax),%eax
08aa0e10 +0x2123:  mov    %eax,%edx
08aa0e12 +0x2125:  mov    0x8(%ebp),%eax
08aa0e15 +0x2128:  mov    (%eax),%eax
08aa0e17 +0x212a:  mov    %edx,%ecx
08aa0e19 +0x212c:  sub    %eax,%ecx
08aa0e1b +0x212e:  mov    %ecx,%eax
08aa0e1d +0x2130:  sar    $0x2,%eax
08aa0e20 +0x2133:  imul   $0xcccccccd,%eax,%eax
08aa0e26 +0x2139:  mov    %eax,%ecx
08aa0e28 +0x213b:  mov    0x8(%ebp),%eax
08aa0e2b +0x213e:  mov    (%eax),%edx
08aa0e2d +0x2140:  mov    0x8(%ebp),%eax
08aa0e30 +0x2143:  mov    %ecx,0x8(%esp)
08aa0e34 +0x2147:  mov    %edx,0x4(%esp)
08aa0e38 +0x214b:  mov    %eax,(%esp)
08aa0e3b +0x214e:  call   08aa171a <+0x2a2d>
08aa0e40 +0x2153:  mov    0x8(%ebp),%eax
08aa0e43 +0x2156:  mov    -0x10(%ebp),%edx
08aa0e46 +0x2159:  mov    %edx,(%eax)
08aa0e48 +0x215b:  mov    0x8(%ebp),%eax
08aa0e4b +0x215e:  mov    -0xc(%ebp),%edx
08aa0e4e +0x2161:  mov    %edx,0x4(%eax)
08aa0e51 +0x2164:  mov    -0x18(%ebp),%edx
08aa0e54 +0x2167:  mov    %edx,%eax
08aa0e56 +0x2169:  shl    $0x2,%eax
08aa0e59 +0x216c:  add    %edx,%eax
08aa0e5b +0x216e:  shl    $0x2,%eax
08aa0e5e +0x2171:  mov    %eax,%edx
08aa0e60 +0x2173:  add    -0x10(%ebp),%edx
08aa0e63 +0x2176:  mov    0x8(%ebp),%eax
08aa0e66 +0x2179:  mov    %edx,0x8(%eax)
08aa0e69 +0x217c:  jmp    08aa0ef3 <+0x2206>
08aa0e6e +0x2181:  mov    %eax,(%esp)
08aa0e71 +0x2184:  call   08725ce0 <__cxa_begin_catch>
08aa0e76 +0x2189:  cmpl   $0x0,-0xc(%ebp)
08aa0e7a +0x218d:  jne    08aa0e9f <+0x21b2>
08aa0e7c +0x218f:  mov    -0x14(%ebp),%edx
08aa0e7f +0x2192:  mov    %edx,%eax
08aa0e81 +0x2194:  shl    $0x2,%eax
08aa0e84 +0x2197:  add    %edx,%eax
08aa0e86 +0x2199:  shl    $0x2,%eax
08aa0e89 +0x219c:  mov    %eax,%edx
08aa0e8b +0x219e:  add    -0x10(%ebp),%edx
08aa0e8e +0x21a1:  mov    0x8(%ebp),%eax
08aa0e91 +0x21a4:  mov    %edx,0x4(%esp)
08aa0e95 +0x21a8:  mov    %eax,(%esp)
08aa0e98 +0x21ab:  call   08aa2b80 <+0x3e93>
08aa0e9d +0x21b0:  jmp    08aa0ec0 <+0x21d3>
08aa0e9f +0x21b2:  mov    0x8(%ebp),%eax
08aa0ea2 +0x21b5:  mov    %eax,(%esp)
08aa0ea5 +0x21b8:  call   08a9f986 <+0xc99>
08aa0eaa +0x21bd:  mov    %eax,0x8(%esp)
08aa0eae +0x21c1:  mov    -0xc(%ebp),%eax
08aa0eb1 +0x21c4:  mov    %eax,0x4(%esp)
08aa0eb5 +0x21c8:  mov    -0x10(%ebp),%eax
08aa0eb8 +0x21cb:  mov    %eax,(%esp)
08aa0ebb +0x21ce:  call   08a9f98e <+0xca1>
08aa0ec0 +0x21d3:  mov    0x8(%ebp),%eax
08aa0ec3 +0x21d6:  mov    -0x18(%ebp),%edx
08aa0ec6 +0x21d9:  mov    %edx,0x8(%esp)
08aa0eca +0x21dd:  mov    -0x10(%ebp),%edx
08aa0ecd +0x21e0:  mov    %edx,0x4(%esp)
08aa0ed1 +0x21e4:  mov    %eax,(%esp)
08aa0ed4 +0x21e7:  call   08aa171a <+0x2a2d>
08aa0ed9 +0x21ec:  call   08724be0 <__cxa_rethrow>
08aa0ede +0x21f1:  mov    %edx,%ebx
08aa0ee0 +0x21f3:  mov    %eax,%esi
08aa0ee2 +0x21f5:  call   08725c30 <__cxa_end_catch>
08aa0ee7 +0x21fa:  mov    %esi,%eax
08aa0ee9 +0x21fc:  mov    %ebx,%edx
08aa0eeb +0x21fe:  mov    %eax,(%esp)
08aa0eee +0x2201:  call   08ae3750 <_Unwind_Resume>
08aa0ef3 +0x2206:  lea    -0x8(%ebp),%esp
08aa0ef6 +0x2209:  add    $0x0,%esp
08aa0ef9 +0x220c:  pop    %ebx
08aa0efa +0x220d:  pop    %esi
08aa0efb +0x220e:  pop    %ebp
08aa0efc +0x220f:  ret
08aa0efd +0x2210:  nop
08aa0efe +0x2211:  push   %ebp
08aa0eff +0x2212:  mov    %esp,%ebp
08aa0f01 +0x2214:  sub    $0x18,%esp
08aa0f04 +0x2217:  mov    0x8(%ebp),%eax
08aa0f07 +0x221a:  mov    %eax,(%esp)
08aa0f0a +0x221d:  call   08a9fa38 <+0xd4b>
08aa0f0f +0x2222:  mov    0x8(%ebp),%edx
08aa0f12 +0x2225:  mov    0x4(%edx),%edx
08aa0f15 +0x2228:  mov    %eax,0x8(%esp)
08aa0f19 +0x222c:  mov    %edx,0x4(%esp)
08aa0f1d +0x2230:  mov    0xc(%ebp),%eax
08aa0f20 +0x2233:  mov    %eax,(%esp)
08aa0f23 +0x2236:  call   08a9fa40 <+0xd53>
08aa0f28 +0x223b:  mov    0x8(%ebp),%eax
08aa0f2b +0x223e:  mov    0xc(%ebp),%edx
08aa0f2e +0x2241:  mov    %edx,0x4(%eax)
08aa0f31 +0x2244:  leave
08aa0f32 +0x2245:  ret
08aa0f33 +0x2246:  nop
08aa0f34 +0x2247:  push   %ebp
08aa0f35 +0x2248:  mov    %esp,%ebp
08aa0f37 +0x224a:  sub    $0x18,%esp
08aa0f3a +0x224d:  mov    0x8(%ebp),%eax
08aa0f3d +0x2250:  mov    %eax,(%esp)
08aa0f40 +0x2253:  call   08a9faea <+0xdfd>
08aa0f45 +0x2258:  mov    0x8(%ebp),%edx
08aa0f48 +0x225b:  mov    0x4(%edx),%edx
08aa0f4b +0x225e:  mov    %eax,0x8(%esp)
08aa0f4f +0x2262:  mov    %edx,0x4(%esp)
08aa0f53 +0x2266:  mov    0xc(%ebp),%eax
08aa0f56 +0x2269:  mov    %eax,(%esp)
08aa0f59 +0x226c:  call   08a9faf2 <+0xe05>
08aa0f5e +0x2271:  mov    0x8(%ebp),%eax
08aa0f61 +0x2274:  mov    0xc(%ebp),%edx
08aa0f64 +0x2277:  mov    %edx,0x4(%eax)
08aa0f67 +0x227a:  leave
08aa0f68 +0x227b:  ret
08aa0f69 +0x227c:  nop
08aa0f6a +0x227d:  push   %ebp
08aa0f6b +0x227e:  mov    %esp,%ebp
08aa0f6d +0x2280:  sub    $0x18,%esp
08aa0f70 +0x2283:  mov    0xc(%ebp),%eax
08aa0f73 +0x2286:  mov    %eax,0x4(%esp)
08aa0f77 +0x228a:  movl   $0x10,(%esp)
08aa0f7e +0x2291:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa0f83 +0x2296:  mov    %eax,%edx
08aa0f85 +0x2298:  test   %edx,%edx
08aa0f87 +0x229a:  je     08aa0fa2 <+0x22b5>
08aa0f89 +0x229c:  mov    0x10(%ebp),%edx
08aa0f8c +0x229f:  mov    (%edx),%ecx
08aa0f8e +0x22a1:  mov    %ecx,(%eax)
08aa0f90 +0x22a3:  mov    0x4(%edx),%ecx
08aa0f93 +0x22a6:  mov    %ecx,0x4(%eax)
08aa0f96 +0x22a9:  mov    0x8(%edx),%ecx
08aa0f99 +0x22ac:  mov    %ecx,0x8(%eax)
08aa0f9c +0x22af:  mov    0xc(%edx),%edx
08aa0f9f +0x22b2:  mov    %edx,0xc(%eax)
08aa0fa2 +0x22b5:  leave
08aa0fa3 +0x22b6:  ret
08aa0fa4 +0x22b7:  push   %ebp
08aa0fa5 +0x22b8:  mov    %esp,%ebp
08aa0fa7 +0x22ba:  push   %ebx
08aa0fa8 +0x22bb:  sub    $0x14,%esp
08aa0fab +0x22be:  mov    0x8(%ebp),%ebx
08aa0fae +0x22c1:  mov    0xc(%ebp),%eax
08aa0fb1 +0x22c4:  add    $0x4,%eax
08aa0fb4 +0x22c7:  mov    %eax,0x4(%esp)
08aa0fb8 +0x22cb:  mov    %ebx,(%esp)
08aa0fbb +0x22ce:  call   08aa2b94 <+0x3ea7>
08aa0fc0 +0x22d3:  mov    %ebx,%eax
08aa0fc2 +0x22d5:  add    $0x14,%esp
08aa0fc5 +0x22d8:  pop    %ebx
08aa0fc6 +0x22d9:  pop    %ebp
08aa0fc7 +0x22da:  ret    $0x4
08aa0fca +0x22dd:  push   %ebp
08aa0fcb +0x22de:  mov    %esp,%ebp
08aa0fcd +0x22e0:  push   %esi
08aa0fce +0x22e1:  push   %ebx
08aa0fcf +0x22e2:  sub    $0x30,%esp
08aa0fd2 +0x22e5:  mov    0x8(%ebp),%eax
08aa0fd5 +0x22e8:  mov    0x4(%eax),%edx
08aa0fd8 +0x22eb:  mov    0x8(%ebp),%eax
08aa0fdb +0x22ee:  mov    0x8(%eax),%eax
08aa0fde +0x22f1:  cmp    %eax,%edx
08aa0fe0 +0x22f3:  je     08aa1081 <+0x2394>
08aa0fe6 +0x22f9:  mov    0x8(%ebp),%eax
08aa0fe9 +0x22fc:  mov    0x4(%eax),%eax
08aa0fec +0x22ff:  sub    $0x10,%eax
08aa0fef +0x2302:  mov    %eax,(%esp)
08aa0ff2 +0x2305:  call   08aa2ba3 <+0x3eb6>
08aa0ff7 +0x230a:  mov    0x8(%ebp),%edx
08aa0ffa +0x230d:  mov    0x4(%edx),%ecx
08aa0ffd +0x2310:  mov    0x8(%ebp),%edx
08aa1000 +0x2313:  mov    %eax,0x8(%esp)
08aa1004 +0x2317:  mov    %ecx,0x4(%esp)
08aa1008 +0x231b:  mov    %edx,(%esp)
08aa100b +0x231e:  call   08aa2bac <+0x3ebf>
08aa1010 +0x2323:  mov    0x8(%ebp),%eax
08aa1013 +0x2326:  mov    0x4(%eax),%eax
08aa1016 +0x2329:  lea    0x10(%eax),%edx
08aa1019 +0x232c:  mov    0x8(%ebp),%eax
08aa101c +0x232f:  mov    %edx,0x4(%eax)
08aa101f +0x2332:  mov    0x8(%ebp),%eax
08aa1022 +0x2335:  mov    0x4(%eax),%eax
08aa1025 +0x2338:  lea    -0x10(%eax),%esi
08aa1028 +0x233b:  mov    0x8(%ebp),%eax
08aa102b +0x233e:  mov    0x4(%eax),%eax
08aa102e +0x2341:  lea    -0x20(%eax),%ebx
08aa1031 +0x2344:  lea    0xc(%ebp),%eax
08aa1034 +0x2347:  mov    %eax,(%esp)
08aa1037 +0x234a:  call   08aa2c06 <+0x3f19>
08aa103c +0x234f:  mov    (%eax),%eax
08aa103e +0x2351:  mov    %esi,0x8(%esp)
08aa1042 +0x2355:  mov    %ebx,0x4(%esp)
08aa1046 +0x2359:  mov    %eax,(%esp)
08aa1049 +0x235c:  call   08aa2c0e <+0x3f21>
08aa104e +0x2361:  lea    0xc(%ebp),%eax
08aa1051 +0x2364:  mov    %eax,(%esp)
08aa1054 +0x2367:  call   08aa2c4e <+0x3f61>
08aa1059 +0x236c:  mov    %eax,%ebx
08aa105b +0x236e:  mov    0x10(%ebp),%eax
08aa105e +0x2371:  mov    %eax,(%esp)
08aa1061 +0x2374:  call   08aa2c46 <+0x3f59>
08aa1066 +0x2379:  mov    (%eax),%edx
08aa1068 +0x237b:  mov    %edx,(%ebx)
08aa106a +0x237d:  mov    0x4(%eax),%edx
08aa106d +0x2380:  mov    %edx,0x4(%ebx)
08aa1070 +0x2383:  mov    0x8(%eax),%edx
08aa1073 +0x2386:  mov    %edx,0x8(%ebx)
08aa1076 +0x2389:  mov    0xc(%eax),%eax
08aa1079 +0x238c:  mov    %eax,0xc(%ebx)
08aa107c +0x238f:  jmp    08aa1283 <+0x2596>
08aa1081 +0x2394:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa1089 +0x239c:  movl   $0x1,0x4(%esp)
08aa1091 +0x23a4:  mov    0x8(%ebp),%eax
08aa1094 +0x23a7:  mov    %eax,(%esp)
08aa1097 +0x23aa:  call   08aa2c58 <+0x3f6b>
08aa109c +0x23af:  mov    %eax,-0x18(%ebp)
08aa109f +0x23b2:  lea    -0x1c(%ebp),%eax
08aa10a2 +0x23b5:  mov    0x8(%ebp),%edx
08aa10a5 +0x23b8:  mov    %edx,0x4(%esp)
08aa10a9 +0x23bc:  mov    %eax,(%esp)
08aa10ac +0x23bf:  call   08aa2cfe <+0x4011>
08aa10b1 +0x23c4:  sub    $0x4,%esp
08aa10b4 +0x23c7:  lea    -0x1c(%ebp),%eax
08aa10b7 +0x23ca:  mov    %eax,0x4(%esp)
08aa10bb +0x23ce:  lea    0xc(%ebp),%eax
08aa10be +0x23d1:  mov    %eax,(%esp)
08aa10c1 +0x23d4:  call   08aa2d21 <+0x4034>
08aa10c6 +0x23d9:  mov    %eax,-0x14(%ebp)
08aa10c9 +0x23dc:  mov    0x8(%ebp),%eax
08aa10cc +0x23df:  mov    -0x18(%ebp),%edx
08aa10cf +0x23e2:  mov    %edx,0x4(%esp)
08aa10d3 +0x23e6:  mov    %eax,(%esp)
08aa10d6 +0x23e9:  call   08aa2d54 <+0x4067>
08aa10db +0x23ee:  mov    %eax,-0x10(%ebp)
08aa10de +0x23f1:  mov    -0x10(%ebp),%eax
08aa10e1 +0x23f4:  mov    %eax,-0xc(%ebp)
08aa10e4 +0x23f7:  mov    0x10(%ebp),%eax
08aa10e7 +0x23fa:  mov    %eax,(%esp)
08aa10ea +0x23fd:  call   08aa2c46 <+0x3f59>
08aa10ef +0x2402:  mov    -0x14(%ebp),%edx
08aa10f2 +0x2405:  shl    $0x4,%edx
08aa10f5 +0x2408:  mov    %edx,%ecx
08aa10f7 +0x240a:  add    -0x10(%ebp),%ecx
08aa10fa +0x240d:  mov    0x8(%ebp),%edx
08aa10fd +0x2410:  mov    %eax,0x8(%esp)
08aa1101 +0x2414:  mov    %ecx,0x4(%esp)
08aa1105 +0x2418:  mov    %edx,(%esp)
08aa1108 +0x241b:  call   08aa0f6a <+0x227d>
08aa110d +0x2420:  movl   $0x0,-0xc(%ebp)
08aa1114 +0x2427:  mov    0x8(%ebp),%eax
08aa1117 +0x242a:  mov    %eax,(%esp)
08aa111a +0x242d:  call   08a9faea <+0xdfd>
08aa111f +0x2432:  mov    %eax,%ebx
08aa1121 +0x2434:  lea    0xc(%ebp),%eax
08aa1124 +0x2437:  mov    %eax,(%esp)
08aa1127 +0x243a:  call   08aa2c06 <+0x3f19>
08aa112c +0x243f:  mov    (%eax),%edx
08aa112e +0x2441:  mov    0x8(%ebp),%eax
08aa1131 +0x2444:  mov    (%eax),%eax
08aa1133 +0x2446:  mov    %ebx,0xc(%esp)
08aa1137 +0x244a:  mov    -0x10(%ebp),%ecx
08aa113a +0x244d:  mov    %ecx,0x8(%esp)
08aa113e +0x2451:  mov    %edx,0x4(%esp)
08aa1142 +0x2455:  mov    %eax,(%esp)
08aa1145 +0x2458:  call   08aa2d83 <+0x4096>
08aa114a +0x245d:  mov    %eax,-0xc(%ebp)
08aa114d +0x2460:  addl   $0x10,-0xc(%ebp)
08aa1151 +0x2464:  mov    0x8(%ebp),%eax
08aa1154 +0x2467:  mov    %eax,(%esp)
08aa1157 +0x246a:  call   08a9faea <+0xdfd>
08aa115c +0x246f:  mov    %eax,%ebx
08aa115e +0x2471:  mov    0x8(%ebp),%eax
08aa1161 +0x2474:  mov    0x4(%eax),%esi
08aa1164 +0x2477:  lea    0xc(%ebp),%eax
08aa1167 +0x247a:  mov    %eax,(%esp)
08aa116a +0x247d:  call   08aa2c06 <+0x3f19>
08aa116f +0x2482:  mov    (%eax),%eax
08aa1171 +0x2484:  mov    %ebx,0xc(%esp)
08aa1175 +0x2488:  mov    -0xc(%ebp),%edx
08aa1178 +0x248b:  mov    %edx,0x8(%esp)
08aa117c +0x248f:  mov    %esi,0x4(%esp)
08aa1180 +0x2493:  mov    %eax,(%esp)
08aa1183 +0x2496:  call   08aa2d83 <+0x4096>
08aa1188 +0x249b:  mov    %eax,-0xc(%ebp)
08aa118b +0x249e:  mov    0x8(%ebp),%eax
08aa118e +0x24a1:  mov    %eax,(%esp)
08aa1191 +0x24a4:  call   08a9faea <+0xdfd>
08aa1196 +0x24a9:  mov    0x8(%ebp),%edx
08aa1199 +0x24ac:  mov    0x4(%edx),%ecx
08aa119c +0x24af:  mov    0x8(%ebp),%edx
08aa119f +0x24b2:  mov    (%edx),%edx
08aa11a1 +0x24b4:  mov    %eax,0x8(%esp)
08aa11a5 +0x24b8:  mov    %ecx,0x4(%esp)
08aa11a9 +0x24bc:  mov    %edx,(%esp)
08aa11ac +0x24bf:  call   08a9faf2 <+0xe05>
08aa11b1 +0x24c4:  mov    0x8(%ebp),%eax
08aa11b4 +0x24c7:  mov    0x8(%eax),%eax
08aa11b7 +0x24ca:  mov    %eax,%edx
08aa11b9 +0x24cc:  mov    0x8(%ebp),%eax
08aa11bc +0x24cf:  mov    (%eax),%eax
08aa11be +0x24d1:  mov    %edx,%ecx
08aa11c0 +0x24d3:  sub    %eax,%ecx
08aa11c2 +0x24d5:  mov    %ecx,%eax
08aa11c4 +0x24d7:  sar    $0x4,%eax
08aa11c7 +0x24da:  mov    %eax,%ecx
08aa11c9 +0x24dc:  mov    0x8(%ebp),%eax
08aa11cc +0x24df:  mov    (%eax),%edx
08aa11ce +0x24e1:  mov    0x8(%ebp),%eax
08aa11d1 +0x24e4:  mov    %ecx,0x8(%esp)
08aa11d5 +0x24e8:  mov    %edx,0x4(%esp)
08aa11d9 +0x24ec:  mov    %eax,(%esp)
08aa11dc +0x24ef:  call   08aa1826 <+0x2b39>
08aa11e1 +0x24f4:  mov    0x8(%ebp),%eax
08aa11e4 +0x24f7:  mov    -0x10(%ebp),%edx
08aa11e7 +0x24fa:  mov    %edx,(%eax)
08aa11e9 +0x24fc:  mov    0x8(%ebp),%eax
08aa11ec +0x24ff:  mov    -0xc(%ebp),%edx
08aa11ef +0x2502:  mov    %edx,0x4(%eax)
08aa11f2 +0x2505:  mov    -0x18(%ebp),%eax
08aa11f5 +0x2508:  shl    $0x4,%eax
08aa11f8 +0x250b:  mov    %eax,%edx
08aa11fa +0x250d:  add    -0x10(%ebp),%edx
08aa11fd +0x2510:  mov    0x8(%ebp),%eax
08aa1200 +0x2513:  mov    %edx,0x8(%eax)
08aa1203 +0x2516:  jmp    08aa1283 <+0x2596>
08aa1205 +0x2518:  mov    %eax,(%esp)
08aa1208 +0x251b:  call   08725ce0 <__cxa_begin_catch>
08aa120d +0x2520:  cmpl   $0x0,-0xc(%ebp)
08aa1211 +0x2524:  jne    08aa122f <+0x2542>
08aa1213 +0x2526:  mov    -0x14(%ebp),%eax
08aa1216 +0x2529:  shl    $0x4,%eax
08aa1219 +0x252c:  mov    %eax,%edx
08aa121b +0x252e:  add    -0x10(%ebp),%edx
08aa121e +0x2531:  mov    0x8(%ebp),%eax
08aa1221 +0x2534:  mov    %edx,0x4(%esp)
08aa1225 +0x2538:  mov    %eax,(%esp)
08aa1228 +0x253b:  call   08aa2ddc <+0x40ef>
08aa122d +0x2540:  jmp    08aa1250 <+0x2563>
08aa122f +0x2542:  mov    0x8(%ebp),%eax
08aa1232 +0x2545:  mov    %eax,(%esp)
08aa1235 +0x2548:  call   08a9faea <+0xdfd>
08aa123a +0x254d:  mov    %eax,0x8(%esp)
08aa123e +0x2551:  mov    -0xc(%ebp),%eax
08aa1241 +0x2554:  mov    %eax,0x4(%esp)
08aa1245 +0x2558:  mov    -0x10(%ebp),%eax
08aa1248 +0x255b:  mov    %eax,(%esp)
08aa124b +0x255e:  call   08a9faf2 <+0xe05>
08aa1250 +0x2563:  mov    0x8(%ebp),%eax
08aa1253 +0x2566:  mov    -0x18(%ebp),%edx
08aa1256 +0x2569:  mov    %edx,0x8(%esp)
08aa125a +0x256d:  mov    -0x10(%ebp),%edx
08aa125d +0x2570:  mov    %edx,0x4(%esp)
08aa1261 +0x2574:  mov    %eax,(%esp)
08aa1264 +0x2577:  call   08aa1826 <+0x2b39>
08aa1269 +0x257c:  call   08724be0 <__cxa_rethrow>
08aa126e +0x2581:  mov    %edx,%ebx
08aa1270 +0x2583:  mov    %eax,%esi
08aa1272 +0x2585:  call   08725c30 <__cxa_end_catch>
08aa1277 +0x258a:  mov    %esi,%eax
08aa1279 +0x258c:  mov    %ebx,%edx
08aa127b +0x258e:  mov    %eax,(%esp)
08aa127e +0x2591:  call   08ae3750 <_Unwind_Resume>
08aa1283 +0x2596:  lea    -0x8(%ebp),%esp
08aa1286 +0x2599:  add    $0x0,%esp
08aa1289 +0x259c:  pop    %ebx
08aa128a +0x259d:  pop    %esi
08aa128b +0x259e:  pop    %ebp
08aa128c +0x259f:  ret
08aa128d +0x25a0:  nop
08aa128e +0x25a1:  push   %ebp
08aa128f +0x25a2:  mov    %esp,%ebp
08aa1291 +0x25a4:  sub    $0x18,%esp
08aa1294 +0x25a7:  mov    0xc(%ebp),%eax
08aa1297 +0x25aa:  mov    %eax,0x4(%esp)
08aa129b +0x25ae:  movl   $0x10,(%esp)
08aa12a2 +0x25b5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa12a7 +0x25ba:  mov    %eax,%edx
08aa12a9 +0x25bc:  test   %edx,%edx
08aa12ab +0x25be:  je     08aa12c6 <+0x25d9>
08aa12ad +0x25c0:  mov    0x10(%ebp),%edx
08aa12b0 +0x25c3:  mov    (%edx),%ecx
08aa12b2 +0x25c5:  mov    %ecx,(%eax)
08aa12b4 +0x25c7:  mov    0x4(%edx),%ecx
08aa12b7 +0x25ca:  mov    %ecx,0x4(%eax)
08aa12ba +0x25cd:  mov    0x8(%edx),%ecx
08aa12bd +0x25d0:  mov    %ecx,0x8(%eax)
08aa12c0 +0x25d3:  mov    0xc(%edx),%edx
08aa12c3 +0x25d6:  mov    %edx,0xc(%eax)
08aa12c6 +0x25d9:  leave
08aa12c7 +0x25da:  ret
08aa12c8 +0x25db:  push   %ebp
08aa12c9 +0x25dc:  mov    %esp,%ebp
08aa12cb +0x25de:  push   %ebx
08aa12cc +0x25df:  sub    $0x14,%esp
08aa12cf +0x25e2:  mov    0x8(%ebp),%ebx
08aa12d2 +0x25e5:  mov    0xc(%ebp),%eax
08aa12d5 +0x25e8:  add    $0x4,%eax
08aa12d8 +0x25eb:  mov    %eax,0x4(%esp)
08aa12dc +0x25ef:  mov    %ebx,(%esp)
08aa12df +0x25f2:  call   08aa2df0 <+0x4103>
08aa12e4 +0x25f7:  mov    %ebx,%eax
08aa12e6 +0x25f9:  add    $0x14,%esp
08aa12e9 +0x25fc:  pop    %ebx
08aa12ea +0x25fd:  pop    %ebp
08aa12eb +0x25fe:  ret    $0x4
08aa12ee +0x2601:  push   %ebp
08aa12ef +0x2602:  mov    %esp,%ebp
08aa12f1 +0x2604:  push   %esi
08aa12f2 +0x2605:  push   %ebx
08aa12f3 +0x2606:  sub    $0x30,%esp
08aa12f6 +0x2609:  mov    0x8(%ebp),%eax
08aa12f9 +0x260c:  mov    0x4(%eax),%edx
08aa12fc +0x260f:  mov    0x8(%ebp),%eax
08aa12ff +0x2612:  mov    0x8(%eax),%eax
08aa1302 +0x2615:  cmp    %eax,%edx
08aa1304 +0x2617:  je     08aa13a5 <+0x26b8>
08aa130a +0x261d:  mov    0x8(%ebp),%eax
08aa130d +0x2620:  mov    0x4(%eax),%eax
08aa1310 +0x2623:  sub    $0x10,%eax
08aa1313 +0x2626:  mov    %eax,(%esp)
08aa1316 +0x2629:  call   08aa2dff <+0x4112>
08aa131b +0x262e:  mov    0x8(%ebp),%edx
08aa131e +0x2631:  mov    0x4(%edx),%ecx
08aa1321 +0x2634:  mov    0x8(%ebp),%edx
08aa1324 +0x2637:  mov    %eax,0x8(%esp)
08aa1328 +0x263b:  mov    %ecx,0x4(%esp)
08aa132c +0x263f:  mov    %edx,(%esp)
08aa132f +0x2642:  call   08aa2e08 <+0x411b>
08aa1334 +0x2647:  mov    0x8(%ebp),%eax
08aa1337 +0x264a:  mov    0x4(%eax),%eax
08aa133a +0x264d:  lea    0x10(%eax),%edx
08aa133d +0x2650:  mov    0x8(%ebp),%eax
08aa1340 +0x2653:  mov    %edx,0x4(%eax)
08aa1343 +0x2656:  mov    0x8(%ebp),%eax
08aa1346 +0x2659:  mov    0x4(%eax),%eax
08aa1349 +0x265c:  lea    -0x10(%eax),%esi
08aa134c +0x265f:  mov    0x8(%ebp),%eax
08aa134f +0x2662:  mov    0x4(%eax),%eax
08aa1352 +0x2665:  lea    -0x20(%eax),%ebx
08aa1355 +0x2668:  lea    0xc(%ebp),%eax
08aa1358 +0x266b:  mov    %eax,(%esp)
08aa135b +0x266e:  call   08aa2e52 <+0x4165>
08aa1360 +0x2673:  mov    (%eax),%eax
08aa1362 +0x2675:  mov    %esi,0x8(%esp)
08aa1366 +0x2679:  mov    %ebx,0x4(%esp)
08aa136a +0x267d:  mov    %eax,(%esp)
08aa136d +0x2680:  call   08aa2e5a <+0x416d>
08aa1372 +0x2685:  lea    0xc(%ebp),%eax
08aa1375 +0x2688:  mov    %eax,(%esp)
08aa1378 +0x268b:  call   08aa2e9a <+0x41ad>
08aa137d +0x2690:  mov    %eax,%ebx
08aa137f +0x2692:  mov    0x10(%ebp),%eax
08aa1382 +0x2695:  mov    %eax,(%esp)
08aa1385 +0x2698:  call   08aa2e92 <+0x41a5>
08aa138a +0x269d:  mov    (%eax),%edx
08aa138c +0x269f:  mov    %edx,(%ebx)
08aa138e +0x26a1:  mov    0x4(%eax),%edx
08aa1391 +0x26a4:  mov    %edx,0x4(%ebx)
08aa1394 +0x26a7:  mov    0x8(%eax),%edx
08aa1397 +0x26aa:  mov    %edx,0x8(%ebx)
08aa139a +0x26ad:  mov    0xc(%eax),%eax
08aa139d +0x26b0:  mov    %eax,0xc(%ebx)
08aa13a0 +0x26b3:  jmp    08aa15a7 <+0x28ba>
08aa13a5 +0x26b8:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa13ad +0x26c0:  movl   $0x1,0x4(%esp)
08aa13b5 +0x26c8:  mov    0x8(%ebp),%eax
08aa13b8 +0x26cb:  mov    %eax,(%esp)
08aa13bb +0x26ce:  call   08aa2ea4 <+0x41b7>
08aa13c0 +0x26d3:  mov    %eax,-0x18(%ebp)
08aa13c3 +0x26d6:  lea    -0x1c(%ebp),%eax
08aa13c6 +0x26d9:  mov    0x8(%ebp),%edx
08aa13c9 +0x26dc:  mov    %edx,0x4(%esp)
08aa13cd +0x26e0:  mov    %eax,(%esp)
08aa13d0 +0x26e3:  call   08aa2f4a <+0x425d>
08aa13d5 +0x26e8:  sub    $0x4,%esp
08aa13d8 +0x26eb:  lea    -0x1c(%ebp),%eax
08aa13db +0x26ee:  mov    %eax,0x4(%esp)
08aa13df +0x26f2:  lea    0xc(%ebp),%eax
08aa13e2 +0x26f5:  mov    %eax,(%esp)
08aa13e5 +0x26f8:  call   08aa2f6d <+0x4280>
08aa13ea +0x26fd:  mov    %eax,-0x14(%ebp)
08aa13ed +0x2700:  mov    0x8(%ebp),%eax
08aa13f0 +0x2703:  mov    -0x18(%ebp),%edx
08aa13f3 +0x2706:  mov    %edx,0x4(%esp)
08aa13f7 +0x270a:  mov    %eax,(%esp)
08aa13fa +0x270d:  call   08aa2fa0 <+0x42b3>
08aa13ff +0x2712:  mov    %eax,-0x10(%ebp)
08aa1402 +0x2715:  mov    -0x10(%ebp),%eax
08aa1405 +0x2718:  mov    %eax,-0xc(%ebp)
08aa1408 +0x271b:  mov    0x10(%ebp),%eax
08aa140b +0x271e:  mov    %eax,(%esp)
08aa140e +0x2721:  call   08aa2e92 <+0x41a5>
08aa1413 +0x2726:  mov    -0x14(%ebp),%edx
08aa1416 +0x2729:  shl    $0x4,%edx
08aa1419 +0x272c:  mov    %edx,%ecx
08aa141b +0x272e:  add    -0x10(%ebp),%ecx
08aa141e +0x2731:  mov    0x8(%ebp),%edx
08aa1421 +0x2734:  mov    %eax,0x8(%esp)
08aa1425 +0x2738:  mov    %ecx,0x4(%esp)
08aa1429 +0x273c:  mov    %edx,(%esp)
08aa142c +0x273f:  call   08aa128e <+0x25a1>
08aa1431 +0x2744:  movl   $0x0,-0xc(%ebp)
08aa1438 +0x274b:  mov    0x8(%ebp),%eax
08aa143b +0x274e:  mov    %eax,(%esp)
08aa143e +0x2751:  call   08a9fa38 <+0xd4b>
08aa1443 +0x2756:  mov    %eax,%ebx
08aa1445 +0x2758:  lea    0xc(%ebp),%eax
08aa1448 +0x275b:  mov    %eax,(%esp)
08aa144b +0x275e:  call   08aa2e52 <+0x4165>
08aa1450 +0x2763:  mov    (%eax),%edx
08aa1452 +0x2765:  mov    0x8(%ebp),%eax
08aa1455 +0x2768:  mov    (%eax),%eax
08aa1457 +0x276a:  mov    %ebx,0xc(%esp)
08aa145b +0x276e:  mov    -0x10(%ebp),%ecx
08aa145e +0x2771:  mov    %ecx,0x8(%esp)
08aa1462 +0x2775:  mov    %edx,0x4(%esp)
08aa1466 +0x2779:  mov    %eax,(%esp)
08aa1469 +0x277c:  call   08aa2fcf <+0x42e2>
08aa146e +0x2781:  mov    %eax,-0xc(%ebp)
08aa1471 +0x2784:  addl   $0x10,-0xc(%ebp)
08aa1475 +0x2788:  mov    0x8(%ebp),%eax
08aa1478 +0x278b:  mov    %eax,(%esp)
08aa147b +0x278e:  call   08a9fa38 <+0xd4b>
08aa1480 +0x2793:  mov    %eax,%ebx
08aa1482 +0x2795:  mov    0x8(%ebp),%eax
08aa1485 +0x2798:  mov    0x4(%eax),%esi
08aa1488 +0x279b:  lea    0xc(%ebp),%eax
08aa148b +0x279e:  mov    %eax,(%esp)
08aa148e +0x27a1:  call   08aa2e52 <+0x4165>
08aa1493 +0x27a6:  mov    (%eax),%eax
08aa1495 +0x27a8:  mov    %ebx,0xc(%esp)
08aa1499 +0x27ac:  mov    -0xc(%ebp),%edx
08aa149c +0x27af:  mov    %edx,0x8(%esp)
08aa14a0 +0x27b3:  mov    %esi,0x4(%esp)
08aa14a4 +0x27b7:  mov    %eax,(%esp)
08aa14a7 +0x27ba:  call   08aa2fcf <+0x42e2>
08aa14ac +0x27bf:  mov    %eax,-0xc(%ebp)
08aa14af +0x27c2:  mov    0x8(%ebp),%eax
08aa14b2 +0x27c5:  mov    %eax,(%esp)
08aa14b5 +0x27c8:  call   08a9fa38 <+0xd4b>
08aa14ba +0x27cd:  mov    0x8(%ebp),%edx
08aa14bd +0x27d0:  mov    0x4(%edx),%ecx
08aa14c0 +0x27d3:  mov    0x8(%ebp),%edx
08aa14c3 +0x27d6:  mov    (%edx),%edx
08aa14c5 +0x27d8:  mov    %eax,0x8(%esp)
08aa14c9 +0x27dc:  mov    %ecx,0x4(%esp)
08aa14cd +0x27e0:  mov    %edx,(%esp)
08aa14d0 +0x27e3:  call   08a9fa40 <+0xd53>
08aa14d5 +0x27e8:  mov    0x8(%ebp),%eax
08aa14d8 +0x27eb:  mov    0x8(%eax),%eax
08aa14db +0x27ee:  mov    %eax,%edx
08aa14dd +0x27f0:  mov    0x8(%ebp),%eax
08aa14e0 +0x27f3:  mov    (%eax),%eax
08aa14e2 +0x27f5:  mov    %edx,%ecx
08aa14e4 +0x27f7:  sub    %eax,%ecx
08aa14e6 +0x27f9:  mov    %ecx,%eax
08aa14e8 +0x27fb:  sar    $0x4,%eax
08aa14eb +0x27fe:  mov    %eax,%ecx
08aa14ed +0x2800:  mov    0x8(%ebp),%eax
08aa14f0 +0x2803:  mov    (%eax),%edx
08aa14f2 +0x2805:  mov    0x8(%ebp),%eax
08aa14f5 +0x2808:  mov    %ecx,0x8(%esp)
08aa14f9 +0x280c:  mov    %edx,0x4(%esp)
08aa14fd +0x2810:  mov    %eax,(%esp)
08aa1500 +0x2813:  call   08aa17a0 <+0x2ab3>
08aa1505 +0x2818:  mov    0x8(%ebp),%eax
08aa1508 +0x281b:  mov    -0x10(%ebp),%edx
08aa150b +0x281e:  mov    %edx,(%eax)
08aa150d +0x2820:  mov    0x8(%ebp),%eax
08aa1510 +0x2823:  mov    -0xc(%ebp),%edx
08aa1513 +0x2826:  mov    %edx,0x4(%eax)
08aa1516 +0x2829:  mov    -0x18(%ebp),%eax
08aa1519 +0x282c:  shl    $0x4,%eax
08aa151c +0x282f:  mov    %eax,%edx
08aa151e +0x2831:  add    -0x10(%ebp),%edx
08aa1521 +0x2834:  mov    0x8(%ebp),%eax
08aa1524 +0x2837:  mov    %edx,0x8(%eax)
08aa1527 +0x283a:  jmp    08aa15a7 <+0x28ba>
08aa1529 +0x283c:  mov    %eax,(%esp)
08aa152c +0x283f:  call   08725ce0 <__cxa_begin_catch>
08aa1531 +0x2844:  cmpl   $0x0,-0xc(%ebp)
08aa1535 +0x2848:  jne    08aa1553 <+0x2866>
08aa1537 +0x284a:  mov    -0x14(%ebp),%eax
08aa153a +0x284d:  shl    $0x4,%eax
08aa153d +0x2850:  mov    %eax,%edx
08aa153f +0x2852:  add    -0x10(%ebp),%edx
08aa1542 +0x2855:  mov    0x8(%ebp),%eax
08aa1545 +0x2858:  mov    %edx,0x4(%esp)
08aa1549 +0x285c:  mov    %eax,(%esp)
08aa154c +0x285f:  call   08aa3028 <+0x433b>
08aa1551 +0x2864:  jmp    08aa1574 <+0x2887>
08aa1553 +0x2866:  mov    0x8(%ebp),%eax
08aa1556 +0x2869:  mov    %eax,(%esp)
08aa1559 +0x286c:  call   08a9fa38 <+0xd4b>
08aa155e +0x2871:  mov    %eax,0x8(%esp)
08aa1562 +0x2875:  mov    -0xc(%ebp),%eax
08aa1565 +0x2878:  mov    %eax,0x4(%esp)
08aa1569 +0x287c:  mov    -0x10(%ebp),%eax
08aa156c +0x287f:  mov    %eax,(%esp)
08aa156f +0x2882:  call   08a9fa40 <+0xd53>
08aa1574 +0x2887:  mov    0x8(%ebp),%eax
08aa1577 +0x288a:  mov    -0x18(%ebp),%edx
08aa157a +0x288d:  mov    %edx,0x8(%esp)
08aa157e +0x2891:  mov    -0x10(%ebp),%edx
08aa1581 +0x2894:  mov    %edx,0x4(%esp)
08aa1585 +0x2898:  mov    %eax,(%esp)
08aa1588 +0x289b:  call   08aa17a0 <+0x2ab3>
08aa158d +0x28a0:  call   08724be0 <__cxa_rethrow>
08aa1592 +0x28a5:  mov    %edx,%ebx
08aa1594 +0x28a7:  mov    %eax,%esi
08aa1596 +0x28a9:  call   08725c30 <__cxa_end_catch>
08aa159b +0x28ae:  mov    %esi,%eax
08aa159d +0x28b0:  mov    %ebx,%edx
08aa159f +0x28b2:  mov    %eax,(%esp)
08aa15a2 +0x28b5:  call   08ae3750 <_Unwind_Resume>
08aa15a7 +0x28ba:  lea    -0x8(%ebp),%esp
08aa15aa +0x28bd:  add    $0x0,%esp
08aa15ad +0x28c0:  pop    %ebx
08aa15ae +0x28c1:  pop    %esi
08aa15af +0x28c2:  pop    %ebp
08aa15b0 +0x28c3:  ret
08aa15b1 +0x28c4:  nop
08aa15b2 +0x28c5:  push   %ebp
08aa15b3 +0x28c6:  mov    %esp,%ebp
08aa15b5 +0x28c8:  mov    0xc(%ebp),%eax
08aa15b8 +0x28cb:  mov    (%eax),%edx
08aa15ba +0x28cd:  mov    0x8(%ebp),%eax
08aa15bd +0x28d0:  mov    %edx,(%eax)
08aa15bf +0x28d2:  pop    %ebp
08aa15c0 +0x28d3:  ret
08aa15c1 +0x28d4:  nop
08aa15c2 +0x28d5:  push   %ebp
08aa15c3 +0x28d6:  mov    %esp,%ebp
08aa15c5 +0x28d8:  mov    0x8(%ebp),%eax
08aa15c8 +0x28db:  pop    %ebp
08aa15c9 +0x28dc:  ret
08aa15ca +0x28dd:  push   %ebp
08aa15cb +0x28de:  mov    %esp,%ebp
08aa15cd +0x28e0:  sub    $0x18,%esp
08aa15d0 +0x28e3:  mov    0x8(%ebp),%eax
08aa15d3 +0x28e6:  mov    %eax,(%esp)
08aa15d6 +0x28e9:  call   08aa303c <+0x434f>
08aa15db +0x28ee:  mov    0x8(%ebp),%eax
08aa15de +0x28f1:  movl   $0x0,(%eax)
08aa15e4 +0x28f7:  mov    0x8(%ebp),%eax
08aa15e7 +0x28fa:  movl   $0x0,0x4(%eax)
08aa15ee +0x2901:  mov    0x8(%ebp),%eax
08aa15f1 +0x2904:  movl   $0x0,0x8(%eax)
08aa15f8 +0x290b:  leave
08aa15f9 +0x290c:  ret
08aa15fa +0x290d:  push   %ebp
08aa15fb +0x290e:  mov    %esp,%ebp
08aa15fd +0x2910:  sub    $0x18,%esp
08aa1600 +0x2913:  mov    0x8(%ebp),%eax
08aa1603 +0x2916:  mov    %eax,(%esp)
08aa1606 +0x2919:  call   08aa3050 <+0x4363>
08aa160b +0x291e:  leave
08aa160c +0x291f:  ret
08aa160d +0x2920:  nop
08aa160e +0x2921:  push   %ebp
08aa160f +0x2922:  mov    %esp,%ebp
08aa1611 +0x2924:  sub    $0x18,%esp
08aa1614 +0x2927:  cmpl   $0x0,0xc(%ebp)
08aa1618 +0x292b:  je     08aa1633 <+0x2946>
08aa161a +0x292d:  mov    0x8(%ebp),%eax
08aa161d +0x2930:  mov    0x10(%ebp),%edx
08aa1620 +0x2933:  mov    %edx,0x8(%esp)
08aa1624 +0x2937:  mov    0xc(%ebp),%edx
08aa1627 +0x293a:  mov    %edx,0x4(%esp)
08aa162b +0x293e:  mov    %eax,(%esp)
08aa162e +0x2941:  call   08aa3056 <+0x4369>
08aa1633 +0x2946:  leave
08aa1634 +0x2947:  ret
08aa1635 +0x2948:  push   %ebp
08aa1636 +0x2949:  mov    %esp,%ebp
08aa1638 +0x294b:  sub    $0x18,%esp
08aa163b +0x294e:  mov    0xc(%ebp),%eax
08aa163e +0x2951:  mov    %eax,0x4(%esp)
08aa1642 +0x2955:  mov    0x8(%ebp),%eax
08aa1645 +0x2958:  mov    %eax,(%esp)
08aa1648 +0x295b:  call   08aa3069 <+0x437c>
08aa164d +0x2960:  leave
08aa164e +0x2961:  ret
08aa164f +0x2962:  nop
08aa1650 +0x2963:  push   %ebp
08aa1651 +0x2964:  mov    %esp,%ebp
08aa1653 +0x2966:  sub    $0x18,%esp
08aa1656 +0x2969:  mov    0x8(%ebp),%eax
08aa1659 +0x296c:  mov    %eax,(%esp)
08aa165c +0x296f:  call   08aa306e <+0x4381>
08aa1661 +0x2974:  mov    0x8(%ebp),%eax
08aa1664 +0x2977:  movl   $0x0,(%eax)
08aa166a +0x297d:  mov    0x8(%ebp),%eax
08aa166d +0x2980:  movl   $0x0,0x4(%eax)
08aa1674 +0x2987:  mov    0x8(%ebp),%eax
08aa1677 +0x298a:  movl   $0x0,0x8(%eax)
08aa167e +0x2991:  leave
08aa167f +0x2992:  ret
08aa1680 +0x2993:  push   %ebp
08aa1681 +0x2994:  mov    %esp,%ebp
08aa1683 +0x2996:  sub    $0x18,%esp
08aa1686 +0x2999:  mov    0x8(%ebp),%eax
08aa1689 +0x299c:  mov    %eax,(%esp)
08aa168c +0x299f:  call   08aa3082 <+0x4395>
08aa1691 +0x29a4:  leave
08aa1692 +0x29a5:  ret
08aa1693 +0x29a6:  nop
08aa1694 +0x29a7:  push   %ebp
08aa1695 +0x29a8:  mov    %esp,%ebp
08aa1697 +0x29aa:  sub    $0x18,%esp
08aa169a +0x29ad:  cmpl   $0x0,0xc(%ebp)
08aa169e +0x29b1:  je     08aa16b9 <+0x29cc>
08aa16a0 +0x29b3:  mov    0x8(%ebp),%eax
08aa16a3 +0x29b6:  mov    0x10(%ebp),%edx
08aa16a6 +0x29b9:  mov    %edx,0x8(%esp)
08aa16aa +0x29bd:  mov    0xc(%ebp),%edx
08aa16ad +0x29c0:  mov    %edx,0x4(%esp)
08aa16b1 +0x29c4:  mov    %eax,(%esp)
08aa16b4 +0x29c7:  call   08aa3088 <+0x439b>
08aa16b9 +0x29cc:  leave
08aa16ba +0x29cd:  ret
08aa16bb +0x29ce:  push   %ebp
08aa16bc +0x29cf:  mov    %esp,%ebp
08aa16be +0x29d1:  sub    $0x18,%esp
08aa16c1 +0x29d4:  mov    0xc(%ebp),%eax
08aa16c4 +0x29d7:  mov    %eax,0x4(%esp)
08aa16c8 +0x29db:  mov    0x8(%ebp),%eax
08aa16cb +0x29de:  mov    %eax,(%esp)
08aa16ce +0x29e1:  call   08aa309b <+0x43ae>
08aa16d3 +0x29e6:  leave
08aa16d4 +0x29e7:  ret
08aa16d5 +0x29e8:  nop
08aa16d6 +0x29e9:  push   %ebp
08aa16d7 +0x29ea:  mov    %esp,%ebp
08aa16d9 +0x29ec:  sub    $0x18,%esp
08aa16dc +0x29ef:  mov    0x8(%ebp),%eax
08aa16df +0x29f2:  mov    %eax,(%esp)
08aa16e2 +0x29f5:  call   08aa30a0 <+0x43b3>
08aa16e7 +0x29fa:  mov    0x8(%ebp),%eax
08aa16ea +0x29fd:  movl   $0x0,(%eax)
08aa16f0 +0x2a03:  mov    0x8(%ebp),%eax
08aa16f3 +0x2a06:  movl   $0x0,0x4(%eax)
08aa16fa +0x2a0d:  mov    0x8(%ebp),%eax
08aa16fd +0x2a10:  movl   $0x0,0x8(%eax)
08aa1704 +0x2a17:  leave
08aa1705 +0x2a18:  ret
08aa1706 +0x2a19:  push   %ebp
08aa1707 +0x2a1a:  mov    %esp,%ebp
08aa1709 +0x2a1c:  sub    $0x18,%esp
08aa170c +0x2a1f:  mov    0x8(%ebp),%eax
08aa170f +0x2a22:  mov    %eax,(%esp)
08aa1712 +0x2a25:  call   08aa30b4 <+0x43c7>
08aa1717 +0x2a2a:  leave
08aa1718 +0x2a2b:  ret
08aa1719 +0x2a2c:  nop
08aa171a +0x2a2d:  push   %ebp
08aa171b +0x2a2e:  mov    %esp,%ebp
08aa171d +0x2a30:  sub    $0x18,%esp
08aa1720 +0x2a33:  cmpl   $0x0,0xc(%ebp)
08aa1724 +0x2a37:  je     08aa173f <+0x2a52>
08aa1726 +0x2a39:  mov    0x8(%ebp),%eax
08aa1729 +0x2a3c:  mov    0x10(%ebp),%edx
08aa172c +0x2a3f:  mov    %edx,0x8(%esp)
08aa1730 +0x2a43:  mov    0xc(%ebp),%edx
08aa1733 +0x2a46:  mov    %edx,0x4(%esp)
08aa1737 +0x2a4a:  mov    %eax,(%esp)
08aa173a +0x2a4d:  call   08aa30ba <+0x43cd>
08aa173f +0x2a52:  leave
08aa1740 +0x2a53:  ret
08aa1741 +0x2a54:  push   %ebp
08aa1742 +0x2a55:  mov    %esp,%ebp
08aa1744 +0x2a57:  sub    $0x18,%esp
08aa1747 +0x2a5a:  mov    0xc(%ebp),%eax
08aa174a +0x2a5d:  mov    %eax,0x4(%esp)
08aa174e +0x2a61:  mov    0x8(%ebp),%eax
08aa1751 +0x2a64:  mov    %eax,(%esp)
08aa1754 +0x2a67:  call   08aa30cd <+0x43e0>
08aa1759 +0x2a6c:  leave
08aa175a +0x2a6d:  ret
08aa175b +0x2a6e:  nop
08aa175c +0x2a6f:  push   %ebp
08aa175d +0x2a70:  mov    %esp,%ebp
08aa175f +0x2a72:  sub    $0x18,%esp
08aa1762 +0x2a75:  mov    0x8(%ebp),%eax
08aa1765 +0x2a78:  mov    %eax,(%esp)
08aa1768 +0x2a7b:  call   08aa30f4 <+0x4407>
08aa176d +0x2a80:  mov    0x8(%ebp),%eax
08aa1770 +0x2a83:  movl   $0x0,(%eax)
08aa1776 +0x2a89:  mov    0x8(%ebp),%eax
08aa1779 +0x2a8c:  movl   $0x0,0x4(%eax)
08aa1780 +0x2a93:  mov    0x8(%ebp),%eax
08aa1783 +0x2a96:  movl   $0x0,0x8(%eax)
08aa178a +0x2a9d:  leave
08aa178b +0x2a9e:  ret
08aa178c +0x2a9f:  push   %ebp
08aa178d +0x2aa0:  mov    %esp,%ebp
08aa178f +0x2aa2:  sub    $0x18,%esp
08aa1792 +0x2aa5:  mov    0x8(%ebp),%eax
08aa1795 +0x2aa8:  mov    %eax,(%esp)
08aa1798 +0x2aab:  call   08aa3108 <+0x441b>
08aa179d +0x2ab0:  leave
08aa179e +0x2ab1:  ret
08aa179f +0x2ab2:  nop
08aa17a0 +0x2ab3:  push   %ebp
08aa17a1 +0x2ab4:  mov    %esp,%ebp
08aa17a3 +0x2ab6:  sub    $0x18,%esp
08aa17a6 +0x2ab9:  cmpl   $0x0,0xc(%ebp)
08aa17aa +0x2abd:  je     08aa17c5 <+0x2ad8>
08aa17ac +0x2abf:  mov    0x8(%ebp),%eax
08aa17af +0x2ac2:  mov    0x10(%ebp),%edx
08aa17b2 +0x2ac5:  mov    %edx,0x8(%esp)
08aa17b6 +0x2ac9:  mov    0xc(%ebp),%edx
08aa17b9 +0x2acc:  mov    %edx,0x4(%esp)
08aa17bd +0x2ad0:  mov    %eax,(%esp)
08aa17c0 +0x2ad3:  call   08aa310e <+0x4421>
08aa17c5 +0x2ad8:  leave
08aa17c6 +0x2ad9:  ret
08aa17c7 +0x2ada:  push   %ebp
08aa17c8 +0x2adb:  mov    %esp,%ebp
08aa17ca +0x2add:  sub    $0x18,%esp
08aa17cd +0x2ae0:  mov    0xc(%ebp),%eax
08aa17d0 +0x2ae3:  mov    %eax,0x4(%esp)
08aa17d4 +0x2ae7:  mov    0x8(%ebp),%eax
08aa17d7 +0x2aea:  mov    %eax,(%esp)
08aa17da +0x2aed:  call   08aa3121 <+0x4434>
08aa17df +0x2af2:  leave
08aa17e0 +0x2af3:  ret
08aa17e1 +0x2af4:  nop
08aa17e2 +0x2af5:  push   %ebp
08aa17e3 +0x2af6:  mov    %esp,%ebp
08aa17e5 +0x2af8:  sub    $0x18,%esp
08aa17e8 +0x2afb:  mov    0x8(%ebp),%eax
08aa17eb +0x2afe:  mov    %eax,(%esp)
08aa17ee +0x2b01:  call   08aa3126 <+0x4439>
08aa17f3 +0x2b06:  mov    0x8(%ebp),%eax
08aa17f6 +0x2b09:  movl   $0x0,(%eax)
08aa17fc +0x2b0f:  mov    0x8(%ebp),%eax
08aa17ff +0x2b12:  movl   $0x0,0x4(%eax)
08aa1806 +0x2b19:  mov    0x8(%ebp),%eax
08aa1809 +0x2b1c:  movl   $0x0,0x8(%eax)
08aa1810 +0x2b23:  leave
08aa1811 +0x2b24:  ret
08aa1812 +0x2b25:  push   %ebp
08aa1813 +0x2b26:  mov    %esp,%ebp
08aa1815 +0x2b28:  sub    $0x18,%esp
08aa1818 +0x2b2b:  mov    0x8(%ebp),%eax
08aa181b +0x2b2e:  mov    %eax,(%esp)
08aa181e +0x2b31:  call   08aa313a <+0x444d>
08aa1823 +0x2b36:  leave
08aa1824 +0x2b37:  ret
08aa1825 +0x2b38:  nop
08aa1826 +0x2b39:  push   %ebp
08aa1827 +0x2b3a:  mov    %esp,%ebp
08aa1829 +0x2b3c:  sub    $0x18,%esp
08aa182c +0x2b3f:  cmpl   $0x0,0xc(%ebp)
08aa1830 +0x2b43:  je     08aa184b <+0x2b5e>
08aa1832 +0x2b45:  mov    0x8(%ebp),%eax
08aa1835 +0x2b48:  mov    0x10(%ebp),%edx
08aa1838 +0x2b4b:  mov    %edx,0x8(%esp)
08aa183c +0x2b4f:  mov    0xc(%ebp),%edx
08aa183f +0x2b52:  mov    %edx,0x4(%esp)
08aa1843 +0x2b56:  mov    %eax,(%esp)
08aa1846 +0x2b59:  call   08aa3140 <+0x4453>
08aa184b +0x2b5e:  leave
08aa184c +0x2b5f:  ret
08aa184d +0x2b60:  push   %ebp
08aa184e +0x2b61:  mov    %esp,%ebp
08aa1850 +0x2b63:  sub    $0x18,%esp
08aa1853 +0x2b66:  mov    0xc(%ebp),%eax
08aa1856 +0x2b69:  mov    %eax,0x4(%esp)
08aa185a +0x2b6d:  mov    0x8(%ebp),%eax
08aa185d +0x2b70:  mov    %eax,(%esp)
08aa1860 +0x2b73:  call   08aa3153 <+0x4466>
08aa1865 +0x2b78:  leave
08aa1866 +0x2b79:  ret
08aa1867 +0x2b7a:  nop
08aa1868 +0x2b7b:  push   %ebp
08aa1869 +0x2b7c:  mov    %esp,%ebp
08aa186b +0x2b7e:  sub    $0x18,%esp
08aa186e +0x2b81:  mov    0x8(%ebp),%eax
08aa1871 +0x2b84:  mov    %eax,(%esp)
08aa1874 +0x2b87:  call   08aa3158 <+0x446b>
08aa1879 +0x2b8c:  mov    0x8(%ebp),%eax
08aa187c +0x2b8f:  movl   $0x0,0x4(%eax)
08aa1883 +0x2b96:  mov    0x8(%ebp),%eax
08aa1886 +0x2b99:  movl   $0x0,0x8(%eax)
08aa188d +0x2ba0:  mov    0x8(%ebp),%eax
08aa1890 +0x2ba3:  movl   $0x0,0xc(%eax)
08aa1897 +0x2baa:  mov    0x8(%ebp),%eax
08aa189a +0x2bad:  movl   $0x0,0x10(%eax)
08aa18a1 +0x2bb4:  mov    0x8(%ebp),%eax
08aa18a4 +0x2bb7:  movl   $0x0,0x14(%eax)
08aa18ab +0x2bbe:  mov    0x8(%ebp),%eax
08aa18ae +0x2bc1:  mov    %eax,(%esp)
08aa18b1 +0x2bc4:  call   08aa316c <+0x447f>
08aa18b6 +0x2bc9:  leave
08aa18b7 +0x2bca:  ret
08aa18b8 +0x2bcb:  push   %ebp
08aa18b9 +0x2bcc:  mov    %esp,%ebp
08aa18bb +0x2bce:  pop    %ebp
08aa18bc +0x2bcf:  ret
08aa18bd +0x2bd0:  push   %ebp
08aa18be +0x2bd1:  mov    %esp,%ebp
08aa18c0 +0x2bd3:  mov    0x8(%ebp),%eax
08aa18c3 +0x2bd6:  mov    0xc(%eax),%eax
08aa18c6 +0x2bd9:  pop    %ebp
08aa18c7 +0x2bda:  ret
08aa18c8 +0x2bdb:  push   %ebp
08aa18c9 +0x2bdc:  mov    %esp,%ebp
08aa18cb +0x2bde:  mov    0x8(%ebp),%eax
08aa18ce +0x2be1:  mov    0x8(%eax),%eax
08aa18d1 +0x2be4:  pop    %ebp
08aa18d2 +0x2be5:  ret
08aa18d3 +0x2be6:  nop
08aa18d4 +0x2be7:  push   %ebp
08aa18d5 +0x2be8:  mov    %esp,%ebp
08aa18d7 +0x2bea:  sub    $0x18,%esp
08aa18da +0x2bed:  mov    0x8(%ebp),%eax
08aa18dd +0x2bf0:  mov    %eax,(%esp)
08aa18e0 +0x2bf3:  call   08aa319e <+0x44b1>
08aa18e5 +0x2bf8:  mov    0xc(%ebp),%edx
08aa18e8 +0x2bfb:  mov    %edx,0x4(%esp)
08aa18ec +0x2bff:  mov    %eax,(%esp)
08aa18ef +0x2c02:  call   08aa31ac <+0x44bf>
08aa18f4 +0x2c07:  mov    0xc(%ebp),%eax
08aa18f7 +0x2c0a:  mov    %eax,0x4(%esp)
08aa18fb +0x2c0e:  mov    0x8(%ebp),%eax
08aa18fe +0x2c11:  mov    %eax,(%esp)
08aa1901 +0x2c14:  call   08aa31c0 <+0x44d3>
08aa1906 +0x2c19:  leave
08aa1907 +0x2c1a:  ret
08aa1908 +0x2c1b:  push   %ebp
08aa1909 +0x2c1c:  mov    %esp,%ebp
08aa190b +0x2c1e:  sub    $0x18,%esp
08aa190e +0x2c21:  mov    0x8(%ebp),%eax
08aa1911 +0x2c24:  mov    %eax,(%esp)
08aa1914 +0x2c27:  call   08aa31e2 <+0x44f5>
08aa1919 +0x2c2c:  mov    0x8(%ebp),%eax
08aa191c +0x2c2f:  movl   $0x0,(%eax)
08aa1922 +0x2c35:  mov    0x8(%ebp),%eax
08aa1925 +0x2c38:  movl   $0x0,0x4(%eax)
08aa192c +0x2c3f:  mov    0x8(%ebp),%eax
08aa192f +0x2c42:  movl   $0x0,0x8(%eax)
08aa1936 +0x2c49:  leave
08aa1937 +0x2c4a:  ret
08aa1938 +0x2c4b:  push   %ebp
08aa1939 +0x2c4c:  mov    %esp,%ebp
08aa193b +0x2c4e:  sub    $0x18,%esp
08aa193e +0x2c51:  mov    0x8(%ebp),%eax
08aa1941 +0x2c54:  mov    %eax,(%esp)
08aa1944 +0x2c57:  call   08aa31f6 <+0x4509>
08aa1949 +0x2c5c:  leave
08aa194a +0x2c5d:  ret
08aa194b +0x2c5e:  nop
08aa194c +0x2c5f:  push   %ebp
08aa194d +0x2c60:  mov    %esp,%ebp
08aa194f +0x2c62:  sub    $0x18,%esp
08aa1952 +0x2c65:  cmpl   $0x0,0xc(%ebp)
08aa1956 +0x2c69:  je     08aa1971 <+0x2c84>
08aa1958 +0x2c6b:  mov    0x8(%ebp),%eax
08aa195b +0x2c6e:  mov    0x10(%ebp),%edx
08aa195e +0x2c71:  mov    %edx,0x8(%esp)
08aa1962 +0x2c75:  mov    0xc(%ebp),%edx
08aa1965 +0x2c78:  mov    %edx,0x4(%esp)
08aa1969 +0x2c7c:  mov    %eax,(%esp)
08aa196c +0x2c7f:  call   08aa31fc <+0x450f>
08aa1971 +0x2c84:  leave
08aa1972 +0x2c85:  ret
08aa1973 +0x2c86:  push   %ebp
08aa1974 +0x2c87:  mov    %esp,%ebp
08aa1976 +0x2c89:  sub    $0x18,%esp
08aa1979 +0x2c8c:  mov    0xc(%ebp),%eax
08aa197c +0x2c8f:  mov    %eax,0x4(%esp)
08aa1980 +0x2c93:  mov    0x8(%ebp),%eax
08aa1983 +0x2c96:  mov    %eax,(%esp)
08aa1986 +0x2c99:  call   08aa320f <+0x4522>
08aa198b +0x2c9e:  leave
08aa198c +0x2c9f:  ret
08aa198d +0x2ca0:  nop
08aa198e +0x2ca1:  push   %ebp
08aa198f +0x2ca2:  mov    %esp,%ebp
08aa1991 +0x2ca4:  mov    0xc(%ebp),%edx
08aa1994 +0x2ca7:  mov    0x8(%ebp),%eax
08aa1997 +0x2caa:  mov    %edx,(%eax)
08aa1999 +0x2cac:  pop    %ebp
08aa199a +0x2cad:  ret
08aa199b +0x2cae:  nop
08aa199c +0x2caf:  push   %ebp
08aa199d +0x2cb0:  mov    %esp,%ebp
08aa199f +0x2cb2:  sub    $0x18,%esp
08aa19a2 +0x2cb5:  mov    0x8(%ebp),%eax
08aa19a5 +0x2cb8:  mov    %eax,(%esp)
08aa19a8 +0x2cbb:  call   08aa3214 <+0x4527>
08aa19ad +0x2cc0:  leave
08aa19ae +0x2cc1:  ret
08aa19af +0x2cc2:  nop
08aa19b0 +0x2cc3:  push   %ebp
08aa19b1 +0x2cc4:  mov    %esp,%ebp
08aa19b3 +0x2cc6:  sub    $0x18,%esp
08aa19b6 +0x2cc9:  cmpl   $0x0,0xc(%ebp)
08aa19ba +0x2ccd:  je     08aa19d5 <+0x2ce8>
08aa19bc +0x2ccf:  mov    0x8(%ebp),%eax
08aa19bf +0x2cd2:  mov    0x10(%ebp),%edx
08aa19c2 +0x2cd5:  mov    %edx,0x8(%esp)
08aa19c6 +0x2cd9:  mov    0xc(%ebp),%edx
08aa19c9 +0x2cdc:  mov    %edx,0x4(%esp)
08aa19cd +0x2ce0:  mov    %eax,(%esp)
08aa19d0 +0x2ce3:  call   08aa321a <+0x452d>
08aa19d5 +0x2ce8:  leave
08aa19d6 +0x2ce9:  ret
08aa19d7 +0x2cea:  push   %ebp
08aa19d8 +0x2ceb:  mov    %esp,%ebp
08aa19da +0x2ced:  sub    $0x18,%esp
08aa19dd +0x2cf0:  mov    0xc(%ebp),%eax
08aa19e0 +0x2cf3:  mov    %eax,0x4(%esp)
08aa19e4 +0x2cf7:  mov    0x8(%ebp),%eax
08aa19e7 +0x2cfa:  mov    %eax,(%esp)
08aa19ea +0x2cfd:  call   08aa322d <+0x4540>
08aa19ef +0x2d02:  leave
08aa19f0 +0x2d03:  ret
08aa19f1 +0x2d04:  nop
08aa19f2 +0x2d05:  push   %ebp
08aa19f3 +0x2d06:  mov    %esp,%ebp
08aa19f5 +0x2d08:  mov    0x8(%ebp),%eax
08aa19f8 +0x2d0b:  add    $0x4,%eax
08aa19fb +0x2d0e:  pop    %ebp
08aa19fc +0x2d0f:  ret
08aa19fd +0x2d10:  nop
08aa19fe +0x2d11:  push   %ebp
08aa19ff +0x2d12:  mov    %esp,%ebp
08aa1a01 +0x2d14:  mov    0x8(%ebp),%eax
08aa1a04 +0x2d17:  add    $0xc,%eax
08aa1a07 +0x2d1a:  pop    %ebp
08aa1a08 +0x2d1b:  ret
08aa1a09 +0x2d1c:  nop
08aa1a0a +0x2d1d:  push   %ebp
08aa1a0b +0x2d1e:  mov    %esp,%ebp
08aa1a0d +0x2d20:  mov    0x8(%ebp),%eax
08aa1a10 +0x2d23:  add    $0x8,%eax
08aa1a13 +0x2d26:  pop    %ebp
08aa1a14 +0x2d27:  ret
08aa1a15 +0x2d28:  nop
08aa1a16 +0x2d29:  push   %ebp
08aa1a17 +0x2d2a:  mov    %esp,%ebp
08aa1a19 +0x2d2c:  mov    0x8(%ebp),%eax
08aa1a1c +0x2d2f:  add    $0x10,%eax
08aa1a1f +0x2d32:  pop    %ebp
08aa1a20 +0x2d33:  ret
08aa1a21 +0x2d34:  push   %ebp
08aa1a22 +0x2d35:  mov    %esp,%ebp
08aa1a24 +0x2d37:  mov    0x8(%ebp),%eax
08aa1a27 +0x2d3a:  pop    %ebp
08aa1a28 +0x2d3b:  ret
08aa1a29 +0x2d3c:  nop
08aa1a2a +0x2d3d:  push   %ebp
08aa1a2b +0x2d3e:  mov    %esp,%ebp
08aa1a2d +0x2d40:  push   %ebx
08aa1a2e +0x2d41:  sub    $0x14,%esp
08aa1a31 +0x2d44:  mov    0x10(%ebp),%eax
08aa1a34 +0x2d47:  mov    %eax,(%esp)
08aa1a37 +0x2d4a:  call   08aa1a21 <+0x2d34>
08aa1a3c +0x2d4f:  mov    (%eax),%ebx
08aa1a3e +0x2d51:  mov    0xc(%ebp),%eax
08aa1a41 +0x2d54:  mov    %eax,0x4(%esp)
08aa1a45 +0x2d58:  movl   $0x4,(%esp)
08aa1a4c +0x2d5f:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa1a51 +0x2d64:  mov    %eax,%edx
08aa1a53 +0x2d66:  test   %edx,%edx
08aa1a55 +0x2d68:  je     08aa1a59 <+0x2d6c>
08aa1a57 +0x2d6a:  mov    %ebx,(%eax)
08aa1a59 +0x2d6c:  add    $0x14,%esp
08aa1a5c +0x2d6f:  pop    %ebx
08aa1a5d +0x2d70:  pop    %ebp
08aa1a5e +0x2d71:  ret
08aa1a5f +0x2d72:  nop
08aa1a60 +0x2d73:  push   %ebp
08aa1a61 +0x2d74:  mov    %esp,%ebp
08aa1a63 +0x2d76:  push   %ebx
08aa1a64 +0x2d77:  sub    $0x14,%esp
08aa1a67 +0x2d7a:  mov    0x8(%ebp),%ebx
08aa1a6a +0x2d7d:  mov    0xc(%ebp),%eax
08aa1a6d +0x2d80:  add    $0x4,%eax
08aa1a70 +0x2d83:  mov    %eax,0x4(%esp)
08aa1a74 +0x2d87:  mov    %ebx,(%esp)
08aa1a77 +0x2d8a:  call   08aa3254 <+0x4567>
08aa1a7c +0x2d8f:  mov    %ebx,%eax
08aa1a7e +0x2d91:  add    $0x14,%esp
08aa1a81 +0x2d94:  pop    %ebx
08aa1a82 +0x2d95:  pop    %ebp
08aa1a83 +0x2d96:  ret    $0x4
08aa1a86 +0x2d99:  push   %ebp
08aa1a87 +0x2d9a:  mov    %esp,%ebp
08aa1a89 +0x2d9c:  push   %esi
08aa1a8a +0x2d9d:  push   %ebx
08aa1a8b +0x2d9e:  sub    $0x30,%esp
08aa1a8e +0x2da1:  mov    0x8(%ebp),%eax
08aa1a91 +0x2da4:  mov    0x4(%eax),%edx
08aa1a94 +0x2da7:  mov    0x8(%ebp),%eax
08aa1a97 +0x2daa:  mov    0x8(%eax),%eax
08aa1a9a +0x2dad:  cmp    %eax,%edx
08aa1a9c +0x2daf:  je     08aa1b33 <+0x2e46>
08aa1aa2 +0x2db5:  mov    0x8(%ebp),%eax
08aa1aa5 +0x2db8:  mov    0x4(%eax),%eax
08aa1aa8 +0x2dbb:  sub    $0x4,%eax
08aa1aab +0x2dbe:  mov    %eax,(%esp)
08aa1aae +0x2dc1:  call   08a9fde4 <+0x10f7>
08aa1ab3 +0x2dc6:  mov    (%eax),%eax
08aa1ab5 +0x2dc8:  mov    %eax,-0x24(%ebp)
08aa1ab8 +0x2dcb:  mov    0x8(%ebp),%eax
08aa1abb +0x2dce:  mov    0x4(%eax),%edx
08aa1abe +0x2dd1:  mov    0x8(%ebp),%eax
08aa1ac1 +0x2dd4:  lea    -0x24(%ebp),%ecx
08aa1ac4 +0x2dd7:  mov    %ecx,0x8(%esp)
08aa1ac8 +0x2ddb:  mov    %edx,0x4(%esp)
08aa1acc +0x2ddf:  mov    %eax,(%esp)
08aa1acf +0x2de2:  call   08aa1a2a <+0x2d3d>
08aa1ad4 +0x2de7:  mov    0x8(%ebp),%eax
08aa1ad7 +0x2dea:  mov    0x4(%eax),%eax
08aa1ada +0x2ded:  lea    0x4(%eax),%edx
08aa1add +0x2df0:  mov    0x8(%ebp),%eax
08aa1ae0 +0x2df3:  mov    %edx,0x4(%eax)
08aa1ae3 +0x2df6:  mov    0x8(%ebp),%eax
08aa1ae6 +0x2df9:  mov    0x4(%eax),%eax
08aa1ae9 +0x2dfc:  lea    -0x4(%eax),%esi
08aa1aec +0x2dff:  mov    0x8(%ebp),%eax
08aa1aef +0x2e02:  mov    0x4(%eax),%eax
08aa1af2 +0x2e05:  lea    -0x8(%eax),%ebx
08aa1af5 +0x2e08:  lea    0xc(%ebp),%eax
08aa1af8 +0x2e0b:  mov    %eax,(%esp)
08aa1afb +0x2e0e:  call   08aa3264 <+0x4577>
08aa1b00 +0x2e13:  mov    (%eax),%eax
08aa1b02 +0x2e15:  mov    %esi,0x8(%esp)
08aa1b06 +0x2e19:  mov    %ebx,0x4(%esp)
08aa1b0a +0x2e1d:  mov    %eax,(%esp)
08aa1b0d +0x2e20:  call   08aa326c <+0x457f>
08aa1b12 +0x2e25:  lea    0xc(%ebp),%eax
08aa1b15 +0x2e28:  mov    %eax,(%esp)
08aa1b18 +0x2e2b:  call   08aa32a4 <+0x45b7>
08aa1b1d +0x2e30:  mov    %eax,%ebx
08aa1b1f +0x2e32:  mov    0x10(%ebp),%eax
08aa1b22 +0x2e35:  mov    %eax,(%esp)
08aa1b25 +0x2e38:  call   08aa1a21 <+0x2d34>
08aa1b2a +0x2e3d:  mov    (%eax),%eax
08aa1b2c +0x2e3f:  mov    %eax,(%ebx)
08aa1b2e +0x2e41:  jmp    08aa1d3d <+0x3050>
08aa1b33 +0x2e46:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa1b3b +0x2e4e:  movl   $0x1,0x4(%esp)
08aa1b43 +0x2e56:  mov    0x8(%ebp),%eax
08aa1b46 +0x2e59:  mov    %eax,(%esp)
08aa1b49 +0x2e5c:  call   08aa32ae <+0x45c1>
08aa1b4e +0x2e61:  mov    %eax,-0x18(%ebp)
08aa1b51 +0x2e64:  lea    -0x20(%ebp),%eax
08aa1b54 +0x2e67:  mov    0x8(%ebp),%edx
08aa1b57 +0x2e6a:  mov    %edx,0x4(%esp)
08aa1b5b +0x2e6e:  mov    %eax,(%esp)
08aa1b5e +0x2e71:  call   08aa3354 <+0x4667>
08aa1b63 +0x2e76:  sub    $0x4,%esp
08aa1b66 +0x2e79:  lea    -0x20(%ebp),%eax
08aa1b69 +0x2e7c:  mov    %eax,0x4(%esp)
08aa1b6d +0x2e80:  lea    0xc(%ebp),%eax
08aa1b70 +0x2e83:  mov    %eax,(%esp)
08aa1b73 +0x2e86:  call   08aa3377 <+0x468a>
08aa1b78 +0x2e8b:  mov    %eax,-0x14(%ebp)
08aa1b7b +0x2e8e:  mov    0x8(%ebp),%eax
08aa1b7e +0x2e91:  mov    -0x18(%ebp),%edx
08aa1b81 +0x2e94:  mov    %edx,0x4(%esp)
08aa1b85 +0x2e98:  mov    %eax,(%esp)
08aa1b88 +0x2e9b:  call   08aa33aa <+0x46bd>
08aa1b8d +0x2ea0:  mov    %eax,-0x10(%ebp)
08aa1b90 +0x2ea3:  mov    -0x10(%ebp),%eax
08aa1b93 +0x2ea6:  mov    %eax,-0xc(%ebp)
08aa1b96 +0x2ea9:  mov    0x10(%ebp),%eax
08aa1b99 +0x2eac:  mov    %eax,(%esp)
08aa1b9c +0x2eaf:  call   08aa1a21 <+0x2d34>
08aa1ba1 +0x2eb4:  mov    (%eax),%eax
08aa1ba3 +0x2eb6:  mov    %eax,-0x1c(%ebp)
08aa1ba6 +0x2eb9:  mov    -0x14(%ebp),%eax
08aa1ba9 +0x2ebc:  shl    $0x2,%eax
08aa1bac +0x2ebf:  mov    %eax,%edx
08aa1bae +0x2ec1:  add    -0x10(%ebp),%edx
08aa1bb1 +0x2ec4:  mov    0x8(%ebp),%eax
08aa1bb4 +0x2ec7:  lea    -0x1c(%ebp),%ecx
08aa1bb7 +0x2eca:  mov    %ecx,0x8(%esp)
08aa1bbb +0x2ece:  mov    %edx,0x4(%esp)
08aa1bbf +0x2ed2:  mov    %eax,(%esp)
08aa1bc2 +0x2ed5:  call   08aa1a2a <+0x2d3d>
08aa1bc7 +0x2eda:  movl   $0x0,-0xc(%ebp)
08aa1bce +0x2ee1:  mov    0x8(%ebp),%eax
08aa1bd1 +0x2ee4:  mov    %eax,(%esp)
08aa1bd4 +0x2ee7:  call   08a9f81c <+0xb2f>
08aa1bd9 +0x2eec:  mov    %eax,%ebx
08aa1bdb +0x2eee:  lea    0xc(%ebp),%eax
08aa1bde +0x2ef1:  mov    %eax,(%esp)
08aa1be1 +0x2ef4:  call   08aa3264 <+0x4577>
08aa1be6 +0x2ef9:  mov    (%eax),%edx
08aa1be8 +0x2efb:  mov    0x8(%ebp),%eax
08aa1beb +0x2efe:  mov    (%eax),%eax
08aa1bed +0x2f00:  mov    %ebx,0xc(%esp)
08aa1bf1 +0x2f04:  mov    -0x10(%ebp),%ecx
08aa1bf4 +0x2f07:  mov    %ecx,0x8(%esp)
08aa1bf8 +0x2f0b:  mov    %edx,0x4(%esp)
08aa1bfc +0x2f0f:  mov    %eax,(%esp)
08aa1bff +0x2f12:  call   08aa33d9 <+0x46ec>
08aa1c04 +0x2f17:  mov    %eax,-0xc(%ebp)
08aa1c07 +0x2f1a:  addl   $0x4,-0xc(%ebp)
08aa1c0b +0x2f1e:  mov    0x8(%ebp),%eax
08aa1c0e +0x2f21:  mov    %eax,(%esp)
08aa1c11 +0x2f24:  call   08a9f81c <+0xb2f>
08aa1c16 +0x2f29:  mov    %eax,%ebx
08aa1c18 +0x2f2b:  mov    0x8(%ebp),%eax
08aa1c1b +0x2f2e:  mov    0x4(%eax),%esi
08aa1c1e +0x2f31:  lea    0xc(%ebp),%eax
08aa1c21 +0x2f34:  mov    %eax,(%esp)
08aa1c24 +0x2f37:  call   08aa3264 <+0x4577>
08aa1c29 +0x2f3c:  mov    (%eax),%eax
08aa1c2b +0x2f3e:  mov    %ebx,0xc(%esp)
08aa1c2f +0x2f42:  mov    -0xc(%ebp),%edx
08aa1c32 +0x2f45:  mov    %edx,0x8(%esp)
08aa1c36 +0x2f49:  mov    %esi,0x4(%esp)
08aa1c3a +0x2f4d:  mov    %eax,(%esp)
08aa1c3d +0x2f50:  call   08aa33d9 <+0x46ec>
08aa1c42 +0x2f55:  mov    %eax,-0xc(%ebp)
08aa1c45 +0x2f58:  mov    0x8(%ebp),%eax
08aa1c48 +0x2f5b:  mov    %eax,(%esp)
08aa1c4b +0x2f5e:  call   08a9f81c <+0xb2f>
08aa1c50 +0x2f63:  mov    0x8(%ebp),%edx
08aa1c53 +0x2f66:  mov    0x4(%edx),%ecx
08aa1c56 +0x2f69:  mov    0x8(%ebp),%edx
08aa1c59 +0x2f6c:  mov    (%edx),%edx
08aa1c5b +0x2f6e:  mov    %eax,0x8(%esp)
08aa1c5f +0x2f72:  mov    %ecx,0x4(%esp)
08aa1c63 +0x2f76:  mov    %edx,(%esp)
08aa1c66 +0x2f79:  call   08a9f824 <+0xb37>
08aa1c6b +0x2f7e:  mov    0x8(%ebp),%eax
08aa1c6e +0x2f81:  mov    0x8(%eax),%eax
08aa1c71 +0x2f84:  mov    %eax,%edx
08aa1c73 +0x2f86:  mov    0x8(%ebp),%eax
08aa1c76 +0x2f89:  mov    (%eax),%eax
08aa1c78 +0x2f8b:  mov    %edx,%ecx
08aa1c7a +0x2f8d:  sub    %eax,%ecx
08aa1c7c +0x2f8f:  mov    %ecx,%eax
08aa1c7e +0x2f91:  sar    $0x2,%eax
08aa1c81 +0x2f94:  mov    %eax,%ecx
08aa1c83 +0x2f96:  mov    0x8(%ebp),%eax
08aa1c86 +0x2f99:  mov    (%eax),%edx
08aa1c88 +0x2f9b:  mov    0x8(%ebp),%eax
08aa1c8b +0x2f9e:  mov    %ecx,0x8(%esp)
08aa1c8f +0x2fa2:  mov    %edx,0x4(%esp)
08aa1c93 +0x2fa6:  mov    %eax,(%esp)
08aa1c96 +0x2fa9:  call   08aa160e <+0x2921>
08aa1c9b +0x2fae:  mov    0x8(%ebp),%eax
08aa1c9e +0x2fb1:  mov    -0x10(%ebp),%edx
08aa1ca1 +0x2fb4:  mov    %edx,(%eax)
08aa1ca3 +0x2fb6:  mov    0x8(%ebp),%eax
08aa1ca6 +0x2fb9:  mov    -0xc(%ebp),%edx
08aa1ca9 +0x2fbc:  mov    %edx,0x4(%eax)
08aa1cac +0x2fbf:  mov    -0x18(%ebp),%eax
08aa1caf +0x2fc2:  shl    $0x2,%eax
08aa1cb2 +0x2fc5:  mov    %eax,%edx
08aa1cb4 +0x2fc7:  add    -0x10(%ebp),%edx
08aa1cb7 +0x2fca:  mov    0x8(%ebp),%eax
08aa1cba +0x2fcd:  mov    %edx,0x8(%eax)
08aa1cbd +0x2fd0:  jmp    08aa1d3d <+0x3050>
08aa1cbf +0x2fd2:  mov    %eax,(%esp)
08aa1cc2 +0x2fd5:  call   08725ce0 <__cxa_begin_catch>
08aa1cc7 +0x2fda:  cmpl   $0x0,-0xc(%ebp)
08aa1ccb +0x2fde:  jne    08aa1ce9 <+0x2ffc>
08aa1ccd +0x2fe0:  mov    -0x14(%ebp),%eax
08aa1cd0 +0x2fe3:  shl    $0x2,%eax
08aa1cd3 +0x2fe6:  mov    %eax,%edx
08aa1cd5 +0x2fe8:  add    -0x10(%ebp),%edx
08aa1cd8 +0x2feb:  mov    0x8(%ebp),%eax
08aa1cdb +0x2fee:  mov    %edx,0x4(%esp)
08aa1cdf +0x2ff2:  mov    %eax,(%esp)
08aa1ce2 +0x2ff5:  call   08aa342c <+0x473f>
08aa1ce7 +0x2ffa:  jmp    08aa1d0a <+0x301d>
08aa1ce9 +0x2ffc:  mov    0x8(%ebp),%eax
08aa1cec +0x2fff:  mov    %eax,(%esp)
08aa1cef +0x3002:  call   08a9f81c <+0xb2f>
08aa1cf4 +0x3007:  mov    %eax,0x8(%esp)
08aa1cf8 +0x300b:  mov    -0xc(%ebp),%eax
08aa1cfb +0x300e:  mov    %eax,0x4(%esp)
08aa1cff +0x3012:  mov    -0x10(%ebp),%eax
08aa1d02 +0x3015:  mov    %eax,(%esp)
08aa1d05 +0x3018:  call   08a9f824 <+0xb37>
08aa1d0a +0x301d:  mov    0x8(%ebp),%eax
08aa1d0d +0x3020:  mov    -0x18(%ebp),%edx
08aa1d10 +0x3023:  mov    %edx,0x8(%esp)
08aa1d14 +0x3027:  mov    -0x10(%ebp),%edx
08aa1d17 +0x302a:  mov    %edx,0x4(%esp)
08aa1d1b +0x302e:  mov    %eax,(%esp)
08aa1d1e +0x3031:  call   08aa160e <+0x2921>
08aa1d23 +0x3036:  call   08724be0 <__cxa_rethrow>
08aa1d28 +0x303b:  mov    %edx,%ebx
08aa1d2a +0x303d:  mov    %eax,%esi
08aa1d2c +0x303f:  call   08725c30 <__cxa_end_catch>
08aa1d31 +0x3044:  mov    %esi,%eax
08aa1d33 +0x3046:  mov    %ebx,%edx
08aa1d35 +0x3048:  mov    %eax,(%esp)
08aa1d38 +0x304b:  call   08ae3750 <_Unwind_Resume>
08aa1d3d +0x3050:  lea    -0x8(%ebp),%esp
08aa1d40 +0x3053:  add    $0x0,%esp
08aa1d43 +0x3056:  pop    %ebx
08aa1d44 +0x3057:  pop    %esi
08aa1d45 +0x3058:  pop    %ebp
08aa1d46 +0x3059:  ret
08aa1d47 +0x305a:  nop
08aa1d48 +0x305b:  push   %ebp
08aa1d49 +0x305c:  mov    %esp,%ebp
08aa1d4b +0x305e:  push   %ebx
08aa1d4c +0x305f:  sub    $0x14,%esp
08aa1d4f +0x3062:  mov    0x8(%ebp),%ebx
08aa1d52 +0x3065:  jmp    08aa1da0 <+0x30b3>
08aa1d54 +0x3067:  mov    0x10(%ebp),%eax
08aa1d57 +0x306a:  mov    %eax,(%esp)
08aa1d5a +0x306d:  call   08aa3431 <+0x4744>
08aa1d5f +0x3072:  mov    0xc(%ebp),%edx
08aa1d62 +0x3075:  mov    0x18(%ebp),%ecx
08aa1d65 +0x3078:  mov    %ecx,0x8(%esp)
08aa1d69 +0x307c:  mov    %eax,0x4(%esp)
08aa1d6d +0x3080:  mov    %edx,(%esp)
08aa1d70 +0x3083:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa1d75 +0x3088:  xor    $0x1,%eax
08aa1d78 +0x308b:  test   %al,%al
08aa1d7a +0x308d:  je     08aa1d92 <+0x30a5>
08aa1d7c +0x308f:  mov    0x10(%ebp),%eax
08aa1d7f +0x3092:  mov    %eax,0x14(%ebp)
08aa1d82 +0x3095:  mov    0x10(%ebp),%eax
08aa1d85 +0x3098:  mov    %eax,(%esp)
08aa1d88 +0x309b:  call   08aa18c8 <+0x2bdb>
08aa1d8d +0x30a0:  mov    %eax,0x10(%ebp)
08aa1d90 +0x30a3:  jmp    08aa1da0 <+0x30b3>
08aa1d92 +0x30a5:  mov    0x10(%ebp),%eax
08aa1d95 +0x30a8:  mov    %eax,(%esp)
08aa1d98 +0x30ab:  call   08aa18bd <+0x2bd0>
08aa1d9d +0x30b0:  mov    %eax,0x10(%ebp)
08aa1da0 +0x30b3:  cmpl   $0x0,0x10(%ebp)
08aa1da4 +0x30b7:  setne  %al
08aa1da7 +0x30ba:  test   %al,%al
08aa1da9 +0x30bc:  jne    08aa1d54 <+0x3067>
08aa1dab +0x30be:  mov    0x14(%ebp),%eax
08aa1dae +0x30c1:  mov    %eax,0x4(%esp)
08aa1db2 +0x30c5:  mov    %ebx,(%esp)
08aa1db5 +0x30c8:  call   08aa198e <+0x2ca1>
08aa1dba +0x30cd:  mov    %ebx,%eax
08aa1dbc +0x30cf:  add    $0x14,%esp
08aa1dbf +0x30d2:  pop    %ebx
08aa1dc0 +0x30d3:  pop    %ebp
08aa1dc1 +0x30d4:  ret    $0x4
08aa1dc4 +0x30d7:  push   %ebp
08aa1dc5 +0x30d8:  mov    %esp,%ebp
08aa1dc7 +0x30da:  sub    $0x28,%esp
08aa1dca +0x30dd:  mov    0x8(%ebp),%eax
08aa1dcd +0x30e0:  mov    %eax,(%esp)
08aa1dd0 +0x30e3:  call   08aa3453 <+0x4766>
08aa1dd5 +0x30e8:  mov    %eax,0x4(%esp)
08aa1dd9 +0x30ec:  lea    -0x9(%ebp),%eax
08aa1ddc +0x30ef:  mov    %eax,(%esp)
08aa1ddf +0x30f2:  call   08aa345e <+0x4771>
08aa1de4 +0x30f7:  leave
08aa1de5 +0x30f8:  ret
08aa1de6 +0x30f9:  push   %ebp
08aa1de7 +0x30fa:  mov    %esp,%ebp
08aa1de9 +0x30fc:  sub    $0x18,%esp
08aa1dec +0x30ff:  mov    0x8(%ebp),%eax
08aa1def +0x3102:  mov    %eax,(%esp)
08aa1df2 +0x3105:  call   08aa3466 <+0x4779>
08aa1df7 +0x310a:  mov    0x8(%ebp),%eax
08aa1dfa +0x310d:  movl   $0x0,(%eax)
08aa1e00 +0x3113:  mov    0x8(%ebp),%eax
08aa1e03 +0x3116:  movl   $0x0,0x4(%eax)
08aa1e0a +0x311d:  mov    0x8(%ebp),%eax
08aa1e0d +0x3120:  movl   $0x0,0x8(%eax)
08aa1e14 +0x3127:  leave
08aa1e15 +0x3128:  ret
08aa1e16 +0x3129:  push   %ebp
08aa1e17 +0x312a:  mov    %esp,%ebp
08aa1e19 +0x312c:  mov    0x8(%ebp),%eax
08aa1e1c +0x312f:  pop    %ebp
08aa1e1d +0x3130:  ret
08aa1e1e +0x3131:  push   %ebp
08aa1e1f +0x3132:  mov    %esp,%ebp
08aa1e21 +0x3134:  push   %edi
08aa1e22 +0x3135:  push   %esi
08aa1e23 +0x3136:  push   %ebx
08aa1e24 +0x3137:  sub    $0x2c,%esp
08aa1e27 +0x313a:  mov    0x10(%ebp),%eax
08aa1e2a +0x313d:  mov    %eax,(%esp)
08aa1e2d +0x3140:  call   08aa3479 <+0x478c>
08aa1e32 +0x3145:  mov    %eax,%edi
08aa1e34 +0x3147:  mov    0xc(%ebp),%esi
08aa1e37 +0x314a:  mov    %esi,0x4(%esp)
08aa1e3b +0x314e:  movl   $0x10,(%esp)
08aa1e42 +0x3155:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa1e47 +0x315a:  mov    %eax,%ebx
08aa1e49 +0x315c:  mov    %ebx,%eax
08aa1e4b +0x315e:  test   %eax,%eax
08aa1e4d +0x3160:  je     08aa1e7d <+0x3190>
08aa1e4f +0x3162:  mov    %ebx,%eax
08aa1e51 +0x3164:  mov    %edi,0x4(%esp)
08aa1e55 +0x3168:  mov    %eax,(%esp)
08aa1e58 +0x316b:  call   08a9ff52 <+0x1265>
08aa1e5d +0x3170:  jmp    08aa1e7d <+0x3190>
08aa1e5f +0x3172:  mov    %edx,%edi
08aa1e61 +0x3174:  mov    %eax,-0x1c(%ebp)
08aa1e64 +0x3177:  mov    %esi,0x4(%esp)
08aa1e68 +0x317b:  mov    %ebx,(%esp)
08aa1e6b +0x317e:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa1e70 +0x3183:  mov    -0x1c(%ebp),%eax
08aa1e73 +0x3186:  mov    %edi,%edx
08aa1e75 +0x3188:  mov    %eax,(%esp)
08aa1e78 +0x318b:  call   08ae3750 <_Unwind_Resume>
08aa1e7d +0x3190:  add    $0x2c,%esp
08aa1e80 +0x3193:  pop    %ebx
08aa1e81 +0x3194:  pop    %esi
08aa1e82 +0x3195:  pop    %edi
08aa1e83 +0x3196:  pop    %ebp
08aa1e84 +0x3197:  ret
08aa1e85 +0x3198:  push   %ebp
08aa1e86 +0x3199:  mov    %esp,%ebp
08aa1e88 +0x319b:  push   %ebx
08aa1e89 +0x319c:  sub    $0x14,%esp
08aa1e8c +0x319f:  mov    0xc(%ebp),%eax
08aa1e8f +0x31a2:  mov    %eax,(%esp)
08aa1e92 +0x31a5:  call   08aa3481 <+0x4794>
08aa1e97 +0x31aa:  mov    %eax,%ebx
08aa1e99 +0x31ac:  mov    0x8(%ebp),%eax
08aa1e9c +0x31af:  mov    %eax,(%esp)
08aa1e9f +0x31b2:  call   08aa3481 <+0x4794>
08aa1ea4 +0x31b7:  mov    0x10(%ebp),%edx
08aa1ea7 +0x31ba:  mov    %edx,0x8(%esp)
08aa1eab +0x31be:  mov    %ebx,0x4(%esp)
08aa1eaf +0x31c2:  mov    %eax,(%esp)
08aa1eb2 +0x31c5:  call   08aa3489 <+0x479c>
08aa1eb7 +0x31ca:  add    $0x14,%esp
08aa1eba +0x31cd:  pop    %ebx
08aa1ebb +0x31ce:  pop    %ebp
08aa1ebc +0x31cf:  ret
08aa1ebd +0x31d0:  push   %ebp
08aa1ebe +0x31d1:  mov    %esp,%ebp
08aa1ec0 +0x31d3:  mov    0x8(%ebp),%eax
08aa1ec3 +0x31d6:  pop    %ebp
08aa1ec4 +0x31d7:  ret
08aa1ec5 +0x31d8:  nop
08aa1ec6 +0x31d9:  push   %ebp
08aa1ec7 +0x31da:  mov    %esp,%ebp
08aa1ec9 +0x31dc:  mov    0x8(%ebp),%eax
08aa1ecc +0x31df:  mov    (%eax),%eax
08aa1ece +0x31e1:  pop    %ebp
08aa1ecf +0x31e2:  ret
08aa1ed0 +0x31e3:  push   %ebp
08aa1ed1 +0x31e4:  mov    %esp,%ebp
08aa1ed3 +0x31e6:  push   %ebx
08aa1ed4 +0x31e7:  sub    $0x24,%esp
08aa1ed7 +0x31ea:  mov    0x8(%ebp),%eax
08aa1eda +0x31ed:  mov    %eax,(%esp)
08aa1edd +0x31f0:  call   08aa34ce <+0x47e1>
08aa1ee2 +0x31f5:  mov    %eax,%ebx
08aa1ee4 +0x31f7:  mov    0x8(%ebp),%eax
08aa1ee7 +0x31fa:  mov    %eax,(%esp)
08aa1eea +0x31fd:  call   08a9f722 <+0xa35>
08aa1eef +0x3202:  mov    %ebx,%edx
08aa1ef1 +0x3204:  sub    %eax,%edx
08aa1ef3 +0x3206:  mov    0xc(%ebp),%eax
08aa1ef6 +0x3209:  cmp    %eax,%edx
08aa1ef8 +0x320b:  setb   %al
08aa1efb +0x320e:  test   %al,%al
08aa1efd +0x3210:  je     08aa1f0a <+0x321d>
08aa1eff +0x3212:  mov    0x10(%ebp),%eax
08aa1f02 +0x3215:  mov    %eax,(%esp)
08aa1f05 +0x3218:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa1f0a +0x321d:  mov    0x8(%ebp),%eax
08aa1f0d +0x3220:  mov    %eax,(%esp)
08aa1f10 +0x3223:  call   08a9f722 <+0xa35>
08aa1f15 +0x3228:  mov    %eax,%ebx
08aa1f17 +0x322a:  mov    0x8(%ebp),%eax
08aa1f1a +0x322d:  mov    %eax,(%esp)
08aa1f1d +0x3230:  call   08a9f722 <+0xa35>
08aa1f22 +0x3235:  mov    %eax,-0x10(%ebp)
08aa1f25 +0x3238:  lea    0xc(%ebp),%eax
08aa1f28 +0x323b:  mov    %eax,0x4(%esp)
08aa1f2c +0x323f:  lea    -0x10(%ebp),%eax
08aa1f2f +0x3242:  mov    %eax,(%esp)
08aa1f32 +0x3245:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa1f37 +0x324a:  mov    (%eax),%eax
08aa1f39 +0x324c:  lea    (%ebx,%eax,1),%eax
08aa1f3c +0x324f:  mov    %eax,-0xc(%ebp)
08aa1f3f +0x3252:  mov    0x8(%ebp),%eax
08aa1f42 +0x3255:  mov    %eax,(%esp)
08aa1f45 +0x3258:  call   08a9f722 <+0xa35>
08aa1f4a +0x325d:  cmp    -0xc(%ebp),%eax
08aa1f4d +0x3260:  ja     08aa1f5f <+0x3272>
08aa1f4f +0x3262:  mov    0x8(%ebp),%eax
08aa1f52 +0x3265:  mov    %eax,(%esp)
08aa1f55 +0x3268:  call   08aa34ce <+0x47e1>
08aa1f5a +0x326d:  cmp    -0xc(%ebp),%eax
08aa1f5d +0x3270:  jae    08aa1f6c <+0x327f>
08aa1f5f +0x3272:  mov    0x8(%ebp),%eax
08aa1f62 +0x3275:  mov    %eax,(%esp)
08aa1f65 +0x3278:  call   08aa34ce <+0x47e1>
08aa1f6a +0x327d:  jmp    08aa1f6f <+0x3282>
08aa1f6c +0x327f:  mov    -0xc(%ebp),%eax
08aa1f6f +0x3282:  add    $0x24,%esp
08aa1f72 +0x3285:  pop    %ebx
08aa1f73 +0x3286:  pop    %ebp
08aa1f74 +0x3287:  ret
08aa1f75 +0x3288:  push   %ebp
08aa1f76 +0x3289:  mov    %esp,%ebp
08aa1f78 +0x328b:  push   %ebx
08aa1f79 +0x328c:  sub    $0x14,%esp
08aa1f7c +0x328f:  mov    0x8(%ebp),%eax
08aa1f7f +0x3292:  mov    %eax,(%esp)
08aa1f82 +0x3295:  call   08aa15c2 <+0x28d5>
08aa1f87 +0x329a:  mov    (%eax),%eax
08aa1f89 +0x329c:  mov    %eax,%ebx
08aa1f8b +0x329e:  mov    0xc(%ebp),%eax
08aa1f8e +0x32a1:  mov    %eax,(%esp)
08aa1f91 +0x32a4:  call   08aa15c2 <+0x28d5>
08aa1f96 +0x32a9:  mov    (%eax),%eax
08aa1f98 +0x32ab:  mov    %ebx,%edx
08aa1f9a +0x32ad:  sub    %eax,%edx
08aa1f9c +0x32af:  mov    %edx,%eax
08aa1f9e +0x32b1:  sar    $0x4,%eax
08aa1fa1 +0x32b4:  add    $0x14,%esp
08aa1fa4 +0x32b7:  pop    %ebx
08aa1fa5 +0x32b8:  pop    %ebp
08aa1fa6 +0x32b9:  ret
08aa1fa7 +0x32ba:  nop
08aa1fa8 +0x32bb:  push   %ebp
08aa1fa9 +0x32bc:  mov    %esp,%ebp
08aa1fab +0x32be:  sub    $0x18,%esp
08aa1fae +0x32c1:  cmpl   $0x0,0xc(%ebp)
08aa1fb2 +0x32c5:  je     08aa1fd0 <+0x32e3>
08aa1fb4 +0x32c7:  mov    0x8(%ebp),%eax
08aa1fb7 +0x32ca:  movl   $0x0,0x8(%esp)
08aa1fbf +0x32d2:  mov    0xc(%ebp),%edx
08aa1fc2 +0x32d5:  mov    %edx,0x4(%esp)
08aa1fc6 +0x32d9:  mov    %eax,(%esp)
08aa1fc9 +0x32dc:  call   08aa34ea <+0x47fd>
08aa1fce +0x32e1:  jmp    08aa1fd5 <+0x32e8>
08aa1fd0 +0x32e3:  mov    $0x0,%eax
08aa1fd5 +0x32e8:  leave
08aa1fd6 +0x32e9:  ret
08aa1fd7 +0x32ea:  push   %ebp
08aa1fd8 +0x32eb:  mov    %esp,%ebp
08aa1fda +0x32ed:  sub    $0x28,%esp
08aa1fdd +0x32f0:  lea    -0x10(%ebp),%eax
08aa1fe0 +0x32f3:  lea    0xc(%ebp),%edx
08aa1fe3 +0x32f6:  mov    %edx,0x4(%esp)
08aa1fe7 +0x32fa:  mov    %eax,(%esp)
08aa1fea +0x32fd:  call   08aa3522 <+0x4835>
08aa1fef +0x3302:  sub    $0x4,%esp
08aa1ff2 +0x3305:  lea    -0xc(%ebp),%eax
08aa1ff5 +0x3308:  lea    0x8(%ebp),%edx
08aa1ff8 +0x330b:  mov    %edx,0x4(%esp)
08aa1ffc +0x330f:  mov    %eax,(%esp)
08aa1fff +0x3312:  call   08aa3522 <+0x4835>
08aa2004 +0x3317:  sub    $0x4,%esp
08aa2007 +0x331a:  mov    0x14(%ebp),%eax
08aa200a +0x331d:  mov    %eax,0xc(%esp)
08aa200e +0x3321:  mov    0x10(%ebp),%eax
08aa2011 +0x3324:  mov    %eax,0x8(%esp)
08aa2015 +0x3328:  mov    -0x10(%ebp),%eax
08aa2018 +0x332b:  mov    %eax,0x4(%esp)
08aa201c +0x332f:  mov    -0xc(%ebp),%eax
08aa201f +0x3332:  mov    %eax,(%esp)
08aa2022 +0x3335:  call   08aa3547 <+0x485a>
08aa2027 +0x333a:  leave
08aa2028 +0x333b:  ret
08aa2029 +0x333c:  nop
08aa202a +0x333d:  push   %ebp
08aa202b +0x333e:  mov    %esp,%ebp
08aa202d +0x3340:  sub    $0x18,%esp
08aa2030 +0x3343:  mov    0xc(%ebp),%eax
08aa2033 +0x3346:  mov    %eax,(%esp)
08aa2036 +0x3349:  call   08a9ed34 <+0x47>
08aa203b +0x334e:  leave
08aa203c +0x334f:  ret
08aa203d +0x3350:  nop
08aa203e +0x3351:  push   %ebp
08aa203f +0x3352:  mov    %esp,%ebp
08aa2041 +0x3354:  push   %esi
08aa2042 +0x3355:  push   %ebx
08aa2043 +0x3356:  sub    $0x20,%esp
08aa2046 +0x3359:  mov    0x8(%ebp),%esi
08aa2049 +0x335c:  mov    0xc(%ebp),%eax
08aa204c +0x335f:  mov    %eax,(%esp)
08aa204f +0x3362:  call   08aa19f2 <+0x2d05>
08aa2054 +0x3367:  mov    %eax,%ebx
08aa2056 +0x3369:  mov    0xc(%ebp),%eax
08aa2059 +0x336c:  mov    %eax,(%esp)
08aa205c +0x336f:  call   08a9fb8a <+0xe9d>
08aa2061 +0x3374:  mov    0x10(%ebp),%edx
08aa2064 +0x3377:  mov    %edx,0x10(%esp)
08aa2068 +0x337b:  mov    %ebx,0xc(%esp)
08aa206c +0x337f:  mov    %eax,0x8(%esp)
08aa2070 +0x3383:  mov    0xc(%ebp),%eax
08aa2073 +0x3386:  mov    %eax,0x4(%esp)
08aa2077 +0x338a:  mov    %esi,(%esp)
08aa207a +0x338d:  call   08aa1d48 <+0x305b>
08aa207f +0x3392:  sub    $0x4,%esp
08aa2082 +0x3395:  mov    %esi,%eax
08aa2084 +0x3397:  lea    -0x8(%ebp),%esp
08aa2087 +0x339a:  add    $0x0,%esp
08aa208a +0x339d:  pop    %ebx
08aa208b +0x339e:  pop    %esi
08aa208c +0x339f:  pop    %ebp
08aa208d +0x33a0:  ret    $0x4
08aa2090 +0x33a3:  push   %ebp
08aa2091 +0x33a4:  mov    %esp,%ebp
08aa2093 +0x33a6:  mov    0x8(%ebp),%eax
08aa2096 +0x33a9:  pop    %ebp
08aa2097 +0x33aa:  ret    $0x4
08aa209a +0x33ad:  push   %ebp
08aa209b +0x33ae:  mov    %esp,%ebp
08aa209d +0x33b0:  mov    0x8(%ebp),%eax
08aa20a0 +0x33b3:  pop    %ebp
08aa20a1 +0x33b4:  ret
08aa20a2 +0x33b5:  push   %ebp
08aa20a3 +0x33b6:  mov    %esp,%ebp
08aa20a5 +0x33b8:  mov    0xc(%ebp),%eax
08aa20a8 +0x33bb:  mov    (%eax),%edx
08aa20aa +0x33bd:  mov    0x8(%ebp),%eax
08aa20ad +0x33c0:  mov    %edx,(%eax)
08aa20af +0x33c2:  pop    %ebp
08aa20b0 +0x33c3:  ret
08aa20b1 +0x33c4:  nop
08aa20b2 +0x33c5:  push   %ebp
08aa20b3 +0x33c6:  mov    %esp,%ebp
08aa20b5 +0x33c8:  push   %esi
08aa20b6 +0x33c9:  push   %ebx
08aa20b7 +0x33ca:  sub    $0x50,%esp
08aa20ba +0x33cd:  mov    0x8(%ebp),%ebx
08aa20bd +0x33d0:  mov    0x10(%ebp),%esi
08aa20c0 +0x33d3:  mov    0xc(%ebp),%eax
08aa20c3 +0x33d6:  mov    %eax,(%esp)
08aa20c6 +0x33d9:  call   08aa19f2 <+0x2d05>
08aa20cb +0x33de:  cmp    %eax,%esi
08aa20cd +0x33e0:  sete   %al
08aa20d0 +0x33e3:  test   %al,%al
08aa20d2 +0x33e5:  je     08aa2194 <+0x34a7>
08aa20d8 +0x33eb:  mov    0xc(%ebp),%eax
08aa20db +0x33ee:  mov    %eax,(%esp)
08aa20de +0x33f1:  call   08aa3568 <+0x487b>
08aa20e3 +0x33f6:  test   %eax,%eax
08aa20e5 +0x33f8:  je     08aa212e <+0x3441>
08aa20e7 +0x33fa:  mov    0x14(%ebp),%eax
08aa20ea +0x33fd:  mov    %eax,0x4(%esp)
08aa20ee +0x3401:  lea    -0x29(%ebp),%eax
08aa20f1 +0x3404:  mov    %eax,(%esp)
08aa20f4 +0x3407:  call   08aa345e <+0x4771>
08aa20f9 +0x340c:  mov    %eax,%esi
08aa20fb +0x340e:  mov    0xc(%ebp),%eax
08aa20fe +0x3411:  mov    %eax,(%esp)
08aa2101 +0x3414:  call   08aa1a16 <+0x2d29>
08aa2106 +0x3419:  mov    (%eax),%eax
08aa2108 +0x341b:  mov    %eax,(%esp)
08aa210b +0x341e:  call   08aa1dc4 <+0x30d7>
08aa2110 +0x3423:  mov    0xc(%ebp),%edx
08aa2113 +0x3426:  mov    %esi,0x8(%esp)
08aa2117 +0x342a:  mov    %eax,0x4(%esp)
08aa211b +0x342e:  mov    %edx,(%esp)
08aa211e +0x3431:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa2123 +0x3436:  test   %al,%al
08aa2125 +0x3438:  je     08aa212e <+0x3441>
08aa2127 +0x343a:  mov    $0x1,%eax
08aa212c +0x343f:  jmp    08aa2133 <+0x3446>
08aa212e +0x3441:  mov    $0x0,%eax
08aa2133 +0x3446:  test   %al,%al
08aa2135 +0x3448:  je     08aa216e <+0x3481>
08aa2137 +0x344a:  mov    0xc(%ebp),%eax
08aa213a +0x344d:  mov    %eax,(%esp)
08aa213d +0x3450:  call   08aa1a16 <+0x2d29>
08aa2142 +0x3455:  mov    (%eax),%eax
08aa2144 +0x3457:  mov    0x14(%ebp),%edx
08aa2147 +0x345a:  mov    %edx,0x10(%esp)
08aa214b +0x345e:  mov    %eax,0xc(%esp)
08aa214f +0x3462:  movl   $0x0,0x8(%esp)
08aa2157 +0x346a:  mov    0xc(%ebp),%eax
08aa215a +0x346d:  mov    %eax,0x4(%esp)
08aa215e +0x3471:  mov    %ebx,(%esp)
08aa2161 +0x3474:  call   08aa3574 <+0x4887>
08aa2166 +0x3479:  sub    $0x4,%esp
08aa2169 +0x347c:  jmp    08aa2469 <+0x377c>
08aa216e +0x3481:  lea    -0x28(%ebp),%eax
08aa2171 +0x3484:  mov    0x14(%ebp),%edx
08aa2174 +0x3487:  mov    %edx,0x8(%esp)
08aa2178 +0x348b:  mov    0xc(%ebp),%edx
08aa217b +0x348e:  mov    %edx,0x4(%esp)
08aa217f +0x3492:  mov    %eax,(%esp)
08aa2182 +0x3495:  call   08aa363c <+0x494f>
08aa2187 +0x349a:  sub    $0x4,%esp
08aa218a +0x349d:  mov    -0x28(%ebp),%eax
08aa218d +0x34a0:  mov    %eax,(%ebx)
08aa218f +0x34a2:  jmp    08aa2469 <+0x377c>
08aa2194 +0x34a7:  mov    0x10(%ebp),%eax
08aa2197 +0x34aa:  mov    %eax,(%esp)
08aa219a +0x34ad:  call   08aa1dc4 <+0x30d7>
08aa219f +0x34b2:  mov    %eax,%esi
08aa21a1 +0x34b4:  mov    0x14(%ebp),%eax
08aa21a4 +0x34b7:  mov    %eax,0x4(%esp)
08aa21a8 +0x34bb:  lea    -0x1e(%ebp),%eax
08aa21ab +0x34be:  mov    %eax,(%esp)
08aa21ae +0x34c1:  call   08aa345e <+0x4771>
08aa21b3 +0x34c6:  mov    0xc(%ebp),%edx
08aa21b6 +0x34c9:  mov    %esi,0x8(%esp)
08aa21ba +0x34cd:  mov    %eax,0x4(%esp)
08aa21be +0x34d1:  mov    %edx,(%esp)
08aa21c1 +0x34d4:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa21c6 +0x34d9:  test   %al,%al
08aa21c8 +0x34db:  je     08aa2300 <+0x3613>
08aa21ce +0x34e1:  mov    0x10(%ebp),%eax
08aa21d1 +0x34e4:  mov    %eax,-0x30(%ebp)
08aa21d4 +0x34e7:  mov    0x10(%ebp),%esi
08aa21d7 +0x34ea:  mov    0xc(%ebp),%eax
08aa21da +0x34ed:  mov    %eax,(%esp)
08aa21dd +0x34f0:  call   08aa19fe <+0x2d11>
08aa21e2 +0x34f5:  mov    (%eax),%eax
08aa21e4 +0x34f7:  cmp    %eax,%esi
08aa21e6 +0x34f9:  sete   %al
08aa21e9 +0x34fc:  test   %al,%al
08aa21eb +0x34fe:  je     08aa222d <+0x3540>
08aa21ed +0x3500:  mov    0xc(%ebp),%eax
08aa21f0 +0x3503:  mov    %eax,(%esp)
08aa21f3 +0x3506:  call   08aa19fe <+0x2d11>
08aa21f8 +0x350b:  mov    (%eax),%esi
08aa21fa +0x350d:  mov    0xc(%ebp),%eax
08aa21fd +0x3510:  mov    %eax,(%esp)
08aa2200 +0x3513:  call   08aa19fe <+0x2d11>
08aa2205 +0x3518:  mov    (%eax),%eax
08aa2207 +0x351a:  mov    0x14(%ebp),%edx
08aa220a +0x351d:  mov    %edx,0x10(%esp)
08aa220e +0x3521:  mov    %esi,0xc(%esp)
08aa2212 +0x3525:  mov    %eax,0x8(%esp)
08aa2216 +0x3529:  mov    0xc(%ebp),%eax
08aa2219 +0x352c:  mov    %eax,0x4(%esp)
08aa221d +0x3530:  mov    %ebx,(%esp)
08aa2220 +0x3533:  call   08aa3574 <+0x4887>
08aa2225 +0x3538:  sub    $0x4,%esp
08aa2228 +0x353b:  jmp    08aa2469 <+0x377c>
08aa222d +0x3540:  mov    0x14(%ebp),%eax
08aa2230 +0x3543:  mov    %eax,0x4(%esp)
08aa2234 +0x3547:  lea    -0x1d(%ebp),%eax
08aa2237 +0x354a:  mov    %eax,(%esp)
08aa223a +0x354d:  call   08aa345e <+0x4771>
08aa223f +0x3552:  mov    %eax,%esi
08aa2241 +0x3554:  lea    -0x30(%ebp),%eax
08aa2244 +0x3557:  mov    %eax,(%esp)
08aa2247 +0x355a:  call   08aa380c <+0x4b1f>
08aa224c +0x355f:  mov    (%eax),%eax
08aa224e +0x3561:  mov    %eax,(%esp)
08aa2251 +0x3564:  call   08aa1dc4 <+0x30d7>
08aa2256 +0x3569:  mov    0xc(%ebp),%edx
08aa2259 +0x356c:  mov    %esi,0x8(%esp)
08aa225d +0x3570:  mov    %eax,0x4(%esp)
08aa2261 +0x3574:  mov    %edx,(%esp)
08aa2264 +0x3577:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa2269 +0x357c:  test   %al,%al
08aa226b +0x357e:  je     08aa22da <+0x35ed>
08aa226d +0x3580:  mov    -0x30(%ebp),%eax
08aa2270 +0x3583:  mov    %eax,(%esp)
08aa2273 +0x3586:  call   08aa3829 <+0x4b3c>
08aa2278 +0x358b:  test   %eax,%eax
08aa227a +0x358d:  sete   %al
08aa227d +0x3590:  test   %al,%al
08aa227f +0x3592:  je     08aa22ae <+0x35c1>
08aa2281 +0x3594:  mov    -0x30(%ebp),%eax
08aa2284 +0x3597:  mov    0x14(%ebp),%edx
08aa2287 +0x359a:  mov    %edx,0x10(%esp)
08aa228b +0x359e:  mov    %eax,0xc(%esp)
08aa228f +0x35a2:  movl   $0x0,0x8(%esp)
08aa2297 +0x35aa:  mov    0xc(%ebp),%eax
08aa229a +0x35ad:  mov    %eax,0x4(%esp)
08aa229e +0x35b1:  mov    %ebx,(%esp)
08aa22a1 +0x35b4:  call   08aa3574 <+0x4887>
08aa22a6 +0x35b9:  sub    $0x4,%esp
08aa22a9 +0x35bc:  jmp    08aa2469 <+0x377c>
08aa22ae +0x35c1:  mov    0x10(%ebp),%edx
08aa22b1 +0x35c4:  mov    0x10(%ebp),%eax
08aa22b4 +0x35c7:  mov    0x14(%ebp),%ecx
08aa22b7 +0x35ca:  mov    %ecx,0x10(%esp)
08aa22bb +0x35ce:  mov    %edx,0xc(%esp)
08aa22bf +0x35d2:  mov    %eax,0x8(%esp)
08aa22c3 +0x35d6:  mov    0xc(%ebp),%eax
08aa22c6 +0x35d9:  mov    %eax,0x4(%esp)
08aa22ca +0x35dd:  mov    %ebx,(%esp)
08aa22cd +0x35e0:  call   08aa3574 <+0x4887>
08aa22d2 +0x35e5:  sub    $0x4,%esp
08aa22d5 +0x35e8:  jmp    08aa2469 <+0x377c>
08aa22da +0x35ed:  lea    -0x1c(%ebp),%eax
08aa22dd +0x35f0:  mov    0x14(%ebp),%edx
08aa22e0 +0x35f3:  mov    %edx,0x8(%esp)
08aa22e4 +0x35f7:  mov    0xc(%ebp),%edx
08aa22e7 +0x35fa:  mov    %edx,0x4(%esp)
08aa22eb +0x35fe:  mov    %eax,(%esp)
08aa22ee +0x3601:  call   08aa363c <+0x494f>
08aa22f3 +0x3606:  sub    $0x4,%esp
08aa22f6 +0x3609:  mov    -0x1c(%ebp),%eax
08aa22f9 +0x360c:  mov    %eax,(%ebx)
08aa22fb +0x360e:  jmp    08aa2469 <+0x377c>
08aa2300 +0x3613:  mov    0x14(%ebp),%eax
08aa2303 +0x3616:  mov    %eax,0x4(%esp)
08aa2307 +0x361a:  lea    -0x12(%ebp),%eax
08aa230a +0x361d:  mov    %eax,(%esp)
08aa230d +0x3620:  call   08aa345e <+0x4771>
08aa2312 +0x3625:  mov    %eax,%esi
08aa2314 +0x3627:  mov    0x10(%ebp),%eax
08aa2317 +0x362a:  mov    %eax,(%esp)
08aa231a +0x362d:  call   08aa1dc4 <+0x30d7>
08aa231f +0x3632:  mov    0xc(%ebp),%edx
08aa2322 +0x3635:  mov    %esi,0x8(%esp)
08aa2326 +0x3639:  mov    %eax,0x4(%esp)
08aa232a +0x363d:  mov    %edx,(%esp)
08aa232d +0x3640:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa2332 +0x3645:  test   %al,%al
08aa2334 +0x3647:  je     08aa245a <+0x376d>
08aa233a +0x364d:  mov    0x10(%ebp),%eax
08aa233d +0x3650:  mov    %eax,-0x34(%ebp)
08aa2340 +0x3653:  mov    0x10(%ebp),%esi
08aa2343 +0x3656:  mov    0xc(%ebp),%eax
08aa2346 +0x3659:  mov    %eax,(%esp)
08aa2349 +0x365c:  call   08aa1a16 <+0x2d29>
08aa234e +0x3661:  mov    (%eax),%eax
08aa2350 +0x3663:  cmp    %eax,%esi
08aa2352 +0x3665:  sete   %al
08aa2355 +0x3668:  test   %al,%al
08aa2357 +0x366a:  je     08aa2390 <+0x36a3>
08aa2359 +0x366c:  mov    0xc(%ebp),%eax
08aa235c +0x366f:  mov    %eax,(%esp)
08aa235f +0x3672:  call   08aa1a16 <+0x2d29>
08aa2364 +0x3677:  mov    (%eax),%eax
08aa2366 +0x3679:  mov    0x14(%ebp),%edx
08aa2369 +0x367c:  mov    %edx,0x10(%esp)
08aa236d +0x3680:  mov    %eax,0xc(%esp)
08aa2371 +0x3684:  movl   $0x0,0x8(%esp)
08aa2379 +0x368c:  mov    0xc(%ebp),%eax
08aa237c +0x368f:  mov    %eax,0x4(%esp)
08aa2380 +0x3693:  mov    %ebx,(%esp)
08aa2383 +0x3696:  call   08aa3574 <+0x4887>
08aa2388 +0x369b:  sub    $0x4,%esp
08aa238b +0x369e:  jmp    08aa2469 <+0x377c>
08aa2390 +0x36a3:  lea    -0x34(%ebp),%eax
08aa2393 +0x36a6:  mov    %eax,(%esp)
08aa2396 +0x36a9:  call   08aa3834 <+0x4b47>
08aa239b +0x36ae:  mov    (%eax),%eax
08aa239d +0x36b0:  mov    %eax,(%esp)
08aa23a0 +0x36b3:  call   08aa1dc4 <+0x30d7>
08aa23a5 +0x36b8:  mov    %eax,%esi
08aa23a7 +0x36ba:  mov    0x14(%ebp),%eax
08aa23aa +0x36bd:  mov    %eax,0x4(%esp)
08aa23ae +0x36c1:  lea    -0x11(%ebp),%eax
08aa23b1 +0x36c4:  mov    %eax,(%esp)
08aa23b4 +0x36c7:  call   08aa345e <+0x4771>
08aa23b9 +0x36cc:  mov    0xc(%ebp),%edx
08aa23bc +0x36cf:  mov    %esi,0x8(%esp)
08aa23c0 +0x36d3:  mov    %eax,0x4(%esp)
08aa23c4 +0x36d7:  mov    %edx,(%esp)
08aa23c7 +0x36da:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa23cc +0x36df:  test   %al,%al
08aa23ce +0x36e1:  je     08aa2437 <+0x374a>
08aa23d0 +0x36e3:  mov    0x10(%ebp),%eax
08aa23d3 +0x36e6:  mov    %eax,(%esp)
08aa23d6 +0x36e9:  call   08aa3829 <+0x4b3c>
08aa23db +0x36ee:  test   %eax,%eax
08aa23dd +0x36f0:  sete   %al
08aa23e0 +0x36f3:  test   %al,%al
08aa23e2 +0x36f5:  je     08aa240e <+0x3721>
08aa23e4 +0x36f7:  mov    0x10(%ebp),%eax
08aa23e7 +0x36fa:  mov    0x14(%ebp),%edx
08aa23ea +0x36fd:  mov    %edx,0x10(%esp)
08aa23ee +0x3701:  mov    %eax,0xc(%esp)
08aa23f2 +0x3705:  movl   $0x0,0x8(%esp)
08aa23fa +0x370d:  mov    0xc(%ebp),%eax
08aa23fd +0x3710:  mov    %eax,0x4(%esp)
08aa2401 +0x3714:  mov    %ebx,(%esp)
08aa2404 +0x3717:  call   08aa3574 <+0x4887>
08aa2409 +0x371c:  sub    $0x4,%esp
08aa240c +0x371f:  jmp    08aa2469 <+0x377c>
08aa240e +0x3721:  mov    -0x34(%ebp),%edx
08aa2411 +0x3724:  mov    -0x34(%ebp),%eax
08aa2414 +0x3727:  mov    0x14(%ebp),%ecx
08aa2417 +0x372a:  mov    %ecx,0x10(%esp)
08aa241b +0x372e:  mov    %edx,0xc(%esp)
08aa241f +0x3732:  mov    %eax,0x8(%esp)
08aa2423 +0x3736:  mov    0xc(%ebp),%eax
08aa2426 +0x3739:  mov    %eax,0x4(%esp)
08aa242a +0x373d:  mov    %ebx,(%esp)
08aa242d +0x3740:  call   08aa3574 <+0x4887>
08aa2432 +0x3745:  sub    $0x4,%esp
08aa2435 +0x3748:  jmp    08aa2469 <+0x377c>
08aa2437 +0x374a:  lea    -0x10(%ebp),%eax
08aa243a +0x374d:  mov    0x14(%ebp),%edx
08aa243d +0x3750:  mov    %edx,0x8(%esp)
08aa2441 +0x3754:  mov    0xc(%ebp),%edx
08aa2444 +0x3757:  mov    %edx,0x4(%esp)
08aa2448 +0x375b:  mov    %eax,(%esp)
08aa244b +0x375e:  call   08aa363c <+0x494f>
08aa2450 +0x3763:  sub    $0x4,%esp
08aa2453 +0x3766:  mov    -0x10(%ebp),%eax
08aa2456 +0x3769:  mov    %eax,(%ebx)
08aa2458 +0x376b:  jmp    08aa2469 <+0x377c>
08aa245a +0x376d:  mov    0x10(%ebp),%eax
08aa245d +0x3770:  mov    %eax,0x4(%esp)
08aa2461 +0x3774:  mov    %ebx,(%esp)
08aa2464 +0x3777:  call   08aa198e <+0x2ca1>
08aa2469 +0x377c:  mov    %ebx,%eax
08aa246b +0x377e:  lea    -0x8(%ebp),%esp
08aa246e +0x3781:  add    $0x0,%esp
08aa2471 +0x3784:  pop    %ebx
08aa2472 +0x3785:  pop    %esi
08aa2473 +0x3786:  pop    %ebp
08aa2474 +0x3787:  ret    $0x4
08aa2477 +0x378a:  nop
08aa2478 +0x378b:  push   %ebp
08aa2479 +0x378c:  mov    %esp,%ebp
08aa247b +0x378e:  mov    0xc(%ebp),%eax
08aa247e +0x3791:  mov    (%eax),%edx
08aa2480 +0x3793:  mov    0x8(%ebp),%eax
08aa2483 +0x3796:  mov    %edx,(%eax)
08aa2485 +0x3798:  pop    %ebp
08aa2486 +0x3799:  ret
08aa2487 +0x379a:  push   %ebp
08aa2488 +0x379b:  mov    %esp,%ebp
08aa248a +0x379d:  mov    0x8(%ebp),%eax
08aa248d +0x37a0:  pop    %ebp
08aa248e +0x37a1:  ret
08aa248f +0x37a2:  nop
08aa2490 +0x37a3:  push   %ebp
08aa2491 +0x37a4:  mov    %esp,%ebp
08aa2493 +0x37a6:  sub    $0x28,%esp
08aa2496 +0x37a9:  mov    0x10(%ebp),%eax
08aa2499 +0x37ac:  mov    %eax,(%esp)
08aa249c +0x37af:  call   08aa3851 <+0x4b64>
08aa24a1 +0x37b4:  mov    (%eax),%edx
08aa24a3 +0x37b6:  mov    %edx,-0x14(%ebp)
08aa24a6 +0x37b9:  mov    0x4(%eax),%edx
08aa24a9 +0x37bc:  mov    %edx,-0x10(%ebp)
08aa24ac +0x37bf:  mov    0x8(%eax),%eax
08aa24af +0x37c2:  mov    %eax,-0xc(%ebp)
08aa24b2 +0x37c5:  mov    0xc(%ebp),%eax
08aa24b5 +0x37c8:  mov    %eax,0x4(%esp)
08aa24b9 +0x37cc:  movl   $0xc,(%esp)
08aa24c0 +0x37d3:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa24c5 +0x37d8:  mov    %eax,%edx
08aa24c7 +0x37da:  test   %edx,%edx
08aa24c9 +0x37dc:  je     08aa24dc <+0x37ef>
08aa24cb +0x37de:  mov    -0x14(%ebp),%edx
08aa24ce +0x37e1:  mov    %edx,(%eax)
08aa24d0 +0x37e3:  mov    -0x10(%ebp),%edx
08aa24d3 +0x37e6:  mov    %edx,0x4(%eax)
08aa24d6 +0x37e9:  mov    -0xc(%ebp),%edx
08aa24d9 +0x37ec:  mov    %edx,0x8(%eax)
08aa24dc +0x37ef:  leave
08aa24dd +0x37f0:  ret
08aa24de +0x37f1:  push   %ebp
08aa24df +0x37f2:  mov    %esp,%ebp
08aa24e1 +0x37f4:  mov    0x8(%ebp),%eax
08aa24e4 +0x37f7:  pop    %ebp
08aa24e5 +0x37f8:  ret
08aa24e6 +0x37f9:  push   %ebp
08aa24e7 +0x37fa:  mov    %esp,%ebp
08aa24e9 +0x37fc:  push   %ebx
08aa24ea +0x37fd:  sub    $0x14,%esp
08aa24ed +0x3800:  mov    0xc(%ebp),%eax
08aa24f0 +0x3803:  mov    %eax,(%esp)
08aa24f3 +0x3806:  call   08aa3859 <+0x4b6c>
08aa24f8 +0x380b:  mov    %eax,%ebx
08aa24fa +0x380d:  mov    0x8(%ebp),%eax
08aa24fd +0x3810:  mov    %eax,(%esp)
08aa2500 +0x3813:  call   08aa3859 <+0x4b6c>
08aa2505 +0x3818:  mov    0x10(%ebp),%edx
08aa2508 +0x381b:  mov    %edx,0x8(%esp)
08aa250c +0x381f:  mov    %ebx,0x4(%esp)
08aa2510 +0x3823:  mov    %eax,(%esp)
08aa2513 +0x3826:  call   08aa3861 <+0x4b74>
08aa2518 +0x382b:  add    $0x14,%esp
08aa251b +0x382e:  pop    %ebx
08aa251c +0x382f:  pop    %ebp
08aa251d +0x3830:  ret
08aa251e +0x3831:  push   %ebp
08aa251f +0x3832:  mov    %esp,%ebp
08aa2521 +0x3834:  mov    0x8(%ebp),%eax
08aa2524 +0x3837:  pop    %ebp
08aa2525 +0x3838:  ret
08aa2526 +0x3839:  push   %ebp
08aa2527 +0x383a:  mov    %esp,%ebp
08aa2529 +0x383c:  mov    0x8(%ebp),%eax
08aa252c +0x383f:  mov    (%eax),%eax
08aa252e +0x3841:  pop    %ebp
08aa252f +0x3842:  ret
08aa2530 +0x3843:  push   %ebp
08aa2531 +0x3844:  mov    %esp,%ebp
08aa2533 +0x3846:  push   %ebx
08aa2534 +0x3847:  sub    $0x24,%esp
08aa2537 +0x384a:  mov    0x8(%ebp),%eax
08aa253a +0x384d:  mov    %eax,(%esp)
08aa253d +0x3850:  call   08aa38a6 <+0x4bb9>
08aa2542 +0x3855:  mov    %eax,%ebx
08aa2544 +0x3857:  mov    0x8(%ebp),%eax
08aa2547 +0x385a:  mov    %eax,(%esp)
08aa254a +0x385d:  call   08a9f750 <+0xa63>
08aa254f +0x3862:  mov    %ebx,%edx
08aa2551 +0x3864:  sub    %eax,%edx
08aa2553 +0x3866:  mov    0xc(%ebp),%eax
08aa2556 +0x3869:  cmp    %eax,%edx
08aa2558 +0x386b:  setb   %al
08aa255b +0x386e:  test   %al,%al
08aa255d +0x3870:  je     08aa256a <+0x387d>
08aa255f +0x3872:  mov    0x10(%ebp),%eax
08aa2562 +0x3875:  mov    %eax,(%esp)
08aa2565 +0x3878:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa256a +0x387d:  mov    0x8(%ebp),%eax
08aa256d +0x3880:  mov    %eax,(%esp)
08aa2570 +0x3883:  call   08a9f750 <+0xa63>
08aa2575 +0x3888:  mov    %eax,%ebx
08aa2577 +0x388a:  mov    0x8(%ebp),%eax
08aa257a +0x388d:  mov    %eax,(%esp)
08aa257d +0x3890:  call   08a9f750 <+0xa63>
08aa2582 +0x3895:  mov    %eax,-0x10(%ebp)
08aa2585 +0x3898:  lea    0xc(%ebp),%eax
08aa2588 +0x389b:  mov    %eax,0x4(%esp)
08aa258c +0x389f:  lea    -0x10(%ebp),%eax
08aa258f +0x38a2:  mov    %eax,(%esp)
08aa2592 +0x38a5:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa2597 +0x38aa:  mov    (%eax),%eax
08aa2599 +0x38ac:  lea    (%ebx,%eax,1),%eax
08aa259c +0x38af:  mov    %eax,-0xc(%ebp)
08aa259f +0x38b2:  mov    0x8(%ebp),%eax
08aa25a2 +0x38b5:  mov    %eax,(%esp)
08aa25a5 +0x38b8:  call   08a9f750 <+0xa63>
08aa25aa +0x38bd:  cmp    -0xc(%ebp),%eax
08aa25ad +0x38c0:  ja     08aa25bf <+0x38d2>
08aa25af +0x38c2:  mov    0x8(%ebp),%eax
08aa25b2 +0x38c5:  mov    %eax,(%esp)
08aa25b5 +0x38c8:  call   08aa38a6 <+0x4bb9>
08aa25ba +0x38cd:  cmp    -0xc(%ebp),%eax
08aa25bd +0x38d0:  jae    08aa25cc <+0x38df>
08aa25bf +0x38d2:  mov    0x8(%ebp),%eax
08aa25c2 +0x38d5:  mov    %eax,(%esp)
08aa25c5 +0x38d8:  call   08aa38a6 <+0x4bb9>
08aa25ca +0x38dd:  jmp    08aa25cf <+0x38e2>
08aa25cc +0x38df:  mov    -0xc(%ebp),%eax
08aa25cf +0x38e2:  add    $0x24,%esp
08aa25d2 +0x38e5:  pop    %ebx
08aa25d3 +0x38e6:  pop    %ebp
08aa25d4 +0x38e7:  ret
08aa25d5 +0x38e8:  nop
08aa25d6 +0x38e9:  push   %ebp
08aa25d7 +0x38ea:  mov    %esp,%ebp
08aa25d9 +0x38ec:  push   %ebx
08aa25da +0x38ed:  sub    $0x14,%esp
08aa25dd +0x38f0:  mov    0x8(%ebp),%ebx
08aa25e0 +0x38f3:  mov    0xc(%ebp),%eax
08aa25e3 +0x38f6:  mov    %eax,0x4(%esp)
08aa25e7 +0x38fa:  mov    %ebx,(%esp)
08aa25ea +0x38fd:  call   08aa2478 <+0x378b>
08aa25ef +0x3902:  mov    %ebx,%eax
08aa25f1 +0x3904:  add    $0x14,%esp
08aa25f4 +0x3907:  pop    %ebx
08aa25f5 +0x3908:  pop    %ebp
08aa25f6 +0x3909:  ret    $0x4
08aa25f9 +0x390c:  push   %ebp
08aa25fa +0x390d:  mov    %esp,%ebp
08aa25fc +0x390f:  push   %ebx
08aa25fd +0x3910:  sub    $0x14,%esp
08aa2600 +0x3913:  mov    0x8(%ebp),%eax
08aa2603 +0x3916:  mov    %eax,(%esp)
08aa2606 +0x3919:  call   08aa24de <+0x37f1>
08aa260b +0x391e:  mov    (%eax),%eax
08aa260d +0x3920:  mov    %eax,%ebx
08aa260f +0x3922:  mov    0xc(%ebp),%eax
08aa2612 +0x3925:  mov    %eax,(%esp)
08aa2615 +0x3928:  call   08aa24de <+0x37f1>
08aa261a +0x392d:  mov    (%eax),%eax
08aa261c +0x392f:  mov    %ebx,%edx
08aa261e +0x3931:  sub    %eax,%edx
08aa2620 +0x3933:  mov    %edx,%eax
08aa2622 +0x3935:  sar    $0x2,%eax
08aa2625 +0x3938:  imul   $0xaaaaaaab,%eax,%eax
08aa262b +0x393e:  add    $0x14,%esp
08aa262e +0x3941:  pop    %ebx
08aa262f +0x3942:  pop    %ebp
08aa2630 +0x3943:  ret
08aa2631 +0x3944:  nop
08aa2632 +0x3945:  push   %ebp
08aa2633 +0x3946:  mov    %esp,%ebp
08aa2635 +0x3948:  sub    $0x18,%esp
08aa2638 +0x394b:  cmpl   $0x0,0xc(%ebp)
08aa263c +0x394f:  je     08aa265a <+0x396d>
08aa263e +0x3951:  mov    0x8(%ebp),%eax
08aa2641 +0x3954:  movl   $0x0,0x8(%esp)
08aa2649 +0x395c:  mov    0xc(%ebp),%edx
08aa264c +0x395f:  mov    %edx,0x4(%esp)
08aa2650 +0x3963:  mov    %eax,(%esp)
08aa2653 +0x3966:  call   08aa38c2 <+0x4bd5>
08aa2658 +0x396b:  jmp    08aa265f <+0x3972>
08aa265a +0x396d:  mov    $0x0,%eax
08aa265f +0x3972:  leave
08aa2660 +0x3973:  ret
08aa2661 +0x3974:  push   %ebp
08aa2662 +0x3975:  mov    %esp,%ebp
08aa2664 +0x3977:  sub    $0x28,%esp
08aa2667 +0x397a:  lea    -0x10(%ebp),%eax
08aa266a +0x397d:  lea    0xc(%ebp),%edx
08aa266d +0x3980:  mov    %edx,0x4(%esp)
08aa2671 +0x3984:  mov    %eax,(%esp)
08aa2674 +0x3987:  call   08aa3900 <+0x4c13>
08aa2679 +0x398c:  sub    $0x4,%esp
08aa267c +0x398f:  lea    -0xc(%ebp),%eax
08aa267f +0x3992:  lea    0x8(%ebp),%edx
08aa2682 +0x3995:  mov    %edx,0x4(%esp)
08aa2686 +0x3999:  mov    %eax,(%esp)
08aa2689 +0x399c:  call   08aa3900 <+0x4c13>
08aa268e +0x39a1:  sub    $0x4,%esp
08aa2691 +0x39a4:  mov    0x14(%ebp),%eax
08aa2694 +0x39a7:  mov    %eax,0xc(%esp)
08aa2698 +0x39ab:  mov    0x10(%ebp),%eax
08aa269b +0x39ae:  mov    %eax,0x8(%esp)
08aa269f +0x39b2:  mov    -0x10(%ebp),%eax
08aa26a2 +0x39b5:  mov    %eax,0x4(%esp)
08aa26a6 +0x39b9:  mov    -0xc(%ebp),%eax
08aa26a9 +0x39bc:  mov    %eax,(%esp)
08aa26ac +0x39bf:  call   08aa3925 <+0x4c38>
08aa26b1 +0x39c4:  leave
08aa26b2 +0x39c5:  ret
08aa26b3 +0x39c6:  nop
08aa26b4 +0x39c7:  push   %ebp
08aa26b5 +0x39c8:  mov    %esp,%ebp
08aa26b7 +0x39ca:  pop    %ebp
08aa26b8 +0x39cb:  ret
08aa26b9 +0x39cc:  nop
08aa26ba +0x39cd:  push   %ebp
08aa26bb +0x39ce:  mov    %esp,%ebp
08aa26bd +0x39d0:  sub    $0x18,%esp
08aa26c0 +0x39d3:  mov    0xc(%ebp),%eax
08aa26c3 +0x39d6:  mov    %eax,(%esp)
08aa26c6 +0x39d9:  call   08aa26b4 <+0x39c7>
08aa26cb +0x39de:  leave
08aa26cc +0x39df:  ret
08aa26cd +0x39e0:  nop
08aa26ce +0x39e1:  push   %ebp
08aa26cf +0x39e2:  mov    %esp,%ebp
08aa26d1 +0x39e4:  mov    0xc(%ebp),%eax
08aa26d4 +0x39e7:  mov    (%eax),%edx
08aa26d6 +0x39e9:  mov    0x8(%ebp),%eax
08aa26d9 +0x39ec:  mov    %edx,(%eax)
08aa26db +0x39ee:  pop    %ebp
08aa26dc +0x39ef:  ret
08aa26dd +0x39f0:  push   %ebp
08aa26de +0x39f1:  mov    %esp,%ebp
08aa26e0 +0x39f3:  mov    0x8(%ebp),%eax
08aa26e3 +0x39f6:  pop    %ebp
08aa26e4 +0x39f7:  ret
08aa26e5 +0x39f8:  nop
08aa26e6 +0x39f9:  push   %ebp
08aa26e7 +0x39fa:  mov    %esp,%ebp
08aa26e9 +0x39fc:  sub    $0x28,%esp
08aa26ec +0x39ff:  mov    0x10(%ebp),%eax
08aa26ef +0x3a02:  mov    %eax,(%esp)
08aa26f2 +0x3a05:  call   08aa3946 <+0x4c59>
08aa26f7 +0x3a0a:  mov    (%eax),%edx
08aa26f9 +0x3a0c:  mov    %edx,-0x18(%ebp)
08aa26fc +0x3a0f:  mov    0x4(%eax),%edx
08aa26ff +0x3a12:  mov    %edx,-0x14(%ebp)
08aa2702 +0x3a15:  mov    0x8(%eax),%edx
08aa2705 +0x3a18:  mov    %edx,-0x10(%ebp)
08aa2708 +0x3a1b:  mov    0xc(%eax),%eax
08aa270b +0x3a1e:  mov    %eax,-0xc(%ebp)
08aa270e +0x3a21:  mov    0xc(%ebp),%eax
08aa2711 +0x3a24:  mov    %eax,0x4(%esp)
08aa2715 +0x3a28:  movl   $0x10,(%esp)
08aa271c +0x3a2f:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa2721 +0x3a34:  mov    %eax,%edx
08aa2723 +0x3a36:  test   %edx,%edx
08aa2725 +0x3a38:  je     08aa273e <+0x3a51>
08aa2727 +0x3a3a:  mov    -0x18(%ebp),%edx
08aa272a +0x3a3d:  mov    %edx,(%eax)
08aa272c +0x3a3f:  mov    -0x14(%ebp),%edx
08aa272f +0x3a42:  mov    %edx,0x4(%eax)
08aa2732 +0x3a45:  mov    -0x10(%ebp),%edx
08aa2735 +0x3a48:  mov    %edx,0x8(%eax)
08aa2738 +0x3a4b:  mov    -0xc(%ebp),%edx
08aa273b +0x3a4e:  mov    %edx,0xc(%eax)
08aa273e +0x3a51:  leave
08aa273f +0x3a52:  ret
08aa2740 +0x3a53:  push   %ebp
08aa2741 +0x3a54:  mov    %esp,%ebp
08aa2743 +0x3a56:  mov    0x8(%ebp),%eax
08aa2746 +0x3a59:  pop    %ebp
08aa2747 +0x3a5a:  ret
08aa2748 +0x3a5b:  push   %ebp
08aa2749 +0x3a5c:  mov    %esp,%ebp
08aa274b +0x3a5e:  push   %ebx
08aa274c +0x3a5f:  sub    $0x14,%esp
08aa274f +0x3a62:  mov    0xc(%ebp),%eax
08aa2752 +0x3a65:  mov    %eax,(%esp)
08aa2755 +0x3a68:  call   08aa394e <+0x4c61>
08aa275a +0x3a6d:  mov    %eax,%ebx
08aa275c +0x3a6f:  mov    0x8(%ebp),%eax
08aa275f +0x3a72:  mov    %eax,(%esp)
08aa2762 +0x3a75:  call   08aa394e <+0x4c61>
08aa2767 +0x3a7a:  mov    0x10(%ebp),%edx
08aa276a +0x3a7d:  mov    %edx,0x8(%esp)
08aa276e +0x3a81:  mov    %ebx,0x4(%esp)
08aa2772 +0x3a85:  mov    %eax,(%esp)
08aa2775 +0x3a88:  call   08aa3956 <+0x4c69>
08aa277a +0x3a8d:  add    $0x14,%esp
08aa277d +0x3a90:  pop    %ebx
08aa277e +0x3a91:  pop    %ebp
08aa277f +0x3a92:  ret
08aa2780 +0x3a93:  push   %ebp
08aa2781 +0x3a94:  mov    %esp,%ebp
08aa2783 +0x3a96:  mov    0x8(%ebp),%eax
08aa2786 +0x3a99:  pop    %ebp
08aa2787 +0x3a9a:  ret
08aa2788 +0x3a9b:  push   %ebp
08aa2789 +0x3a9c:  mov    %esp,%ebp
08aa278b +0x3a9e:  mov    0x8(%ebp),%eax
08aa278e +0x3aa1:  mov    (%eax),%eax
08aa2790 +0x3aa3:  pop    %ebp
08aa2791 +0x3aa4:  ret
08aa2792 +0x3aa5:  push   %ebp
08aa2793 +0x3aa6:  mov    %esp,%ebp
08aa2795 +0x3aa8:  push   %ebx
08aa2796 +0x3aa9:  sub    $0x24,%esp
08aa2799 +0x3aac:  mov    0x8(%ebp),%eax
08aa279c +0x3aaf:  mov    %eax,(%esp)
08aa279f +0x3ab2:  call   08aa39b6 <+0x4cc9>
08aa27a4 +0x3ab7:  mov    %eax,%ebx
08aa27a6 +0x3ab9:  mov    0x8(%ebp),%eax
08aa27a9 +0x3abc:  mov    %eax,(%esp)
08aa27ac +0x3abf:  call   08aa399a <+0x4cad>
08aa27b1 +0x3ac4:  mov    %ebx,%edx
08aa27b3 +0x3ac6:  sub    %eax,%edx
08aa27b5 +0x3ac8:  mov    0xc(%ebp),%eax
08aa27b8 +0x3acb:  cmp    %eax,%edx
08aa27ba +0x3acd:  setb   %al
08aa27bd +0x3ad0:  test   %al,%al
08aa27bf +0x3ad2:  je     08aa27cc <+0x3adf>
08aa27c1 +0x3ad4:  mov    0x10(%ebp),%eax
08aa27c4 +0x3ad7:  mov    %eax,(%esp)
08aa27c7 +0x3ada:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa27cc +0x3adf:  mov    0x8(%ebp),%eax
08aa27cf +0x3ae2:  mov    %eax,(%esp)
08aa27d2 +0x3ae5:  call   08aa399a <+0x4cad>
08aa27d7 +0x3aea:  mov    %eax,%ebx
08aa27d9 +0x3aec:  mov    0x8(%ebp),%eax
08aa27dc +0x3aef:  mov    %eax,(%esp)
08aa27df +0x3af2:  call   08aa399a <+0x4cad>
08aa27e4 +0x3af7:  mov    %eax,-0x10(%ebp)
08aa27e7 +0x3afa:  lea    0xc(%ebp),%eax
08aa27ea +0x3afd:  mov    %eax,0x4(%esp)
08aa27ee +0x3b01:  lea    -0x10(%ebp),%eax
08aa27f1 +0x3b04:  mov    %eax,(%esp)
08aa27f4 +0x3b07:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa27f9 +0x3b0c:  mov    (%eax),%eax
08aa27fb +0x3b0e:  lea    (%ebx,%eax,1),%eax
08aa27fe +0x3b11:  mov    %eax,-0xc(%ebp)
08aa2801 +0x3b14:  mov    0x8(%ebp),%eax
08aa2804 +0x3b17:  mov    %eax,(%esp)
08aa2807 +0x3b1a:  call   08aa399a <+0x4cad>
08aa280c +0x3b1f:  cmp    -0xc(%ebp),%eax
08aa280f +0x3b22:  ja     08aa2821 <+0x3b34>
08aa2811 +0x3b24:  mov    0x8(%ebp),%eax
08aa2814 +0x3b27:  mov    %eax,(%esp)
08aa2817 +0x3b2a:  call   08aa39b6 <+0x4cc9>
08aa281c +0x3b2f:  cmp    -0xc(%ebp),%eax
08aa281f +0x3b32:  jae    08aa282e <+0x3b41>
08aa2821 +0x3b34:  mov    0x8(%ebp),%eax
08aa2824 +0x3b37:  mov    %eax,(%esp)
08aa2827 +0x3b3a:  call   08aa39b6 <+0x4cc9>
08aa282c +0x3b3f:  jmp    08aa2831 <+0x3b44>
08aa282e +0x3b41:  mov    -0xc(%ebp),%eax
08aa2831 +0x3b44:  add    $0x24,%esp
08aa2834 +0x3b47:  pop    %ebx
08aa2835 +0x3b48:  pop    %ebp
08aa2836 +0x3b49:  ret
08aa2837 +0x3b4a:  nop
08aa2838 +0x3b4b:  push   %ebp
08aa2839 +0x3b4c:  mov    %esp,%ebp
08aa283b +0x3b4e:  push   %ebx
08aa283c +0x3b4f:  sub    $0x14,%esp
08aa283f +0x3b52:  mov    0x8(%ebp),%ebx
08aa2842 +0x3b55:  mov    0xc(%ebp),%eax
08aa2845 +0x3b58:  mov    %eax,0x4(%esp)
08aa2849 +0x3b5c:  mov    %ebx,(%esp)
08aa284c +0x3b5f:  call   08aa26ce <+0x39e1>
08aa2851 +0x3b64:  mov    %ebx,%eax
08aa2853 +0x3b66:  add    $0x14,%esp
08aa2856 +0x3b69:  pop    %ebx
08aa2857 +0x3b6a:  pop    %ebp
08aa2858 +0x3b6b:  ret    $0x4
08aa285b +0x3b6e:  push   %ebp
08aa285c +0x3b6f:  mov    %esp,%ebp
08aa285e +0x3b71:  push   %ebx
08aa285f +0x3b72:  sub    $0x14,%esp
08aa2862 +0x3b75:  mov    0x8(%ebp),%eax
08aa2865 +0x3b78:  mov    %eax,(%esp)
08aa2868 +0x3b7b:  call   08aa2740 <+0x3a53>
08aa286d +0x3b80:  mov    (%eax),%eax
08aa286f +0x3b82:  mov    %eax,%ebx
08aa2871 +0x3b84:  mov    0xc(%ebp),%eax
08aa2874 +0x3b87:  mov    %eax,(%esp)
08aa2877 +0x3b8a:  call   08aa2740 <+0x3a53>
08aa287c +0x3b8f:  mov    (%eax),%eax
08aa287e +0x3b91:  mov    %ebx,%edx
08aa2880 +0x3b93:  sub    %eax,%edx
08aa2882 +0x3b95:  mov    %edx,%eax
08aa2884 +0x3b97:  sar    $0x4,%eax
08aa2887 +0x3b9a:  add    $0x14,%esp
08aa288a +0x3b9d:  pop    %ebx
08aa288b +0x3b9e:  pop    %ebp
08aa288c +0x3b9f:  ret
08aa288d +0x3ba0:  nop
08aa288e +0x3ba1:  push   %ebp
08aa288f +0x3ba2:  mov    %esp,%ebp
08aa2891 +0x3ba4:  sub    $0x18,%esp
08aa2894 +0x3ba7:  cmpl   $0x0,0xc(%ebp)
08aa2898 +0x3bab:  je     08aa28b6 <+0x3bc9>
08aa289a +0x3bad:  mov    0x8(%ebp),%eax
08aa289d +0x3bb0:  movl   $0x0,0x8(%esp)
08aa28a5 +0x3bb8:  mov    0xc(%ebp),%edx
08aa28a8 +0x3bbb:  mov    %edx,0x4(%esp)
08aa28ac +0x3bbf:  mov    %eax,(%esp)
08aa28af +0x3bc2:  call   08aa39d2 <+0x4ce5>
08aa28b4 +0x3bc7:  jmp    08aa28bb <+0x3bce>
08aa28b6 +0x3bc9:  mov    $0x0,%eax
08aa28bb +0x3bce:  leave
08aa28bc +0x3bcf:  ret
08aa28bd +0x3bd0:  push   %ebp
08aa28be +0x3bd1:  mov    %esp,%ebp
08aa28c0 +0x3bd3:  sub    $0x28,%esp
08aa28c3 +0x3bd6:  lea    -0x10(%ebp),%eax
08aa28c6 +0x3bd9:  lea    0xc(%ebp),%edx
08aa28c9 +0x3bdc:  mov    %edx,0x4(%esp)
08aa28cd +0x3be0:  mov    %eax,(%esp)
08aa28d0 +0x3be3:  call   08aa3a0a <+0x4d1d>
08aa28d5 +0x3be8:  sub    $0x4,%esp
08aa28d8 +0x3beb:  lea    -0xc(%ebp),%eax
08aa28db +0x3bee:  lea    0x8(%ebp),%edx
08aa28de +0x3bf1:  mov    %edx,0x4(%esp)
08aa28e2 +0x3bf5:  mov    %eax,(%esp)
08aa28e5 +0x3bf8:  call   08aa3a0a <+0x4d1d>
08aa28ea +0x3bfd:  sub    $0x4,%esp
08aa28ed +0x3c00:  mov    0x14(%ebp),%eax
08aa28f0 +0x3c03:  mov    %eax,0xc(%esp)
08aa28f4 +0x3c07:  mov    0x10(%ebp),%eax
08aa28f7 +0x3c0a:  mov    %eax,0x8(%esp)
08aa28fb +0x3c0e:  mov    -0x10(%ebp),%eax
08aa28fe +0x3c11:  mov    %eax,0x4(%esp)
08aa2902 +0x3c15:  mov    -0xc(%ebp),%eax
08aa2905 +0x3c18:  mov    %eax,(%esp)
08aa2908 +0x3c1b:  call   08aa3a2f <+0x4d42>
08aa290d +0x3c20:  leave
08aa290e +0x3c21:  ret
08aa290f +0x3c22:  nop
08aa2910 +0x3c23:  push   %ebp
08aa2911 +0x3c24:  mov    %esp,%ebp
08aa2913 +0x3c26:  pop    %ebp
08aa2914 +0x3c27:  ret
08aa2915 +0x3c28:  nop
08aa2916 +0x3c29:  push   %ebp
08aa2917 +0x3c2a:  mov    %esp,%ebp
08aa2919 +0x3c2c:  sub    $0x18,%esp
08aa291c +0x3c2f:  mov    0xc(%ebp),%eax
08aa291f +0x3c32:  mov    %eax,(%esp)
08aa2922 +0x3c35:  call   08aa2910 <+0x3c23>
08aa2927 +0x3c3a:  leave
08aa2928 +0x3c3b:  ret
08aa2929 +0x3c3c:  nop
08aa292a +0x3c3d:  push   %ebp
08aa292b +0x3c3e:  mov    %esp,%ebp
08aa292d +0x3c40:  mov    0xc(%ebp),%eax
08aa2930 +0x3c43:  mov    (%eax),%edx
08aa2932 +0x3c45:  mov    0x8(%ebp),%eax
08aa2935 +0x3c48:  mov    %edx,(%eax)
08aa2937 +0x3c4a:  pop    %ebp
08aa2938 +0x3c4b:  ret
08aa2939 +0x3c4c:  push   %ebp
08aa293a +0x3c4d:  mov    %esp,%ebp
08aa293c +0x3c4f:  mov    0x8(%ebp),%eax
08aa293f +0x3c52:  pop    %ebp
08aa2940 +0x3c53:  ret
08aa2941 +0x3c54:  nop
08aa2942 +0x3c55:  push   %ebp
08aa2943 +0x3c56:  mov    %esp,%ebp
08aa2945 +0x3c58:  push   %edi
08aa2946 +0x3c59:  push   %esi
08aa2947 +0x3c5a:  push   %ebx
08aa2948 +0x3c5b:  sub    $0x2c,%esp
08aa294b +0x3c5e:  mov    0x10(%ebp),%eax
08aa294e +0x3c61:  mov    %eax,(%esp)
08aa2951 +0x3c64:  call   08aa3a50 <+0x4d63>
08aa2956 +0x3c69:  mov    %eax,%edi
08aa2958 +0x3c6b:  mov    0xc(%ebp),%esi
08aa295b +0x3c6e:  mov    %esi,0x4(%esp)
08aa295f +0x3c72:  movl   $0x14,(%esp)
08aa2966 +0x3c79:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa296b +0x3c7e:  mov    %eax,%ebx
08aa296d +0x3c80:  mov    %ebx,%eax
08aa296f +0x3c82:  test   %eax,%eax
08aa2971 +0x3c84:  je     08aa29a1 <+0x3cb4>
08aa2973 +0x3c86:  mov    %ebx,%eax
08aa2975 +0x3c88:  mov    %edi,0x4(%esp)
08aa2979 +0x3c8c:  mov    %eax,(%esp)
08aa297c +0x3c8f:  call   08aa0af8 <+0x1e0b>
08aa2981 +0x3c94:  jmp    08aa29a1 <+0x3cb4>
08aa2983 +0x3c96:  mov    %edx,%edi
08aa2985 +0x3c98:  mov    %eax,-0x1c(%ebp)
08aa2988 +0x3c9b:  mov    %esi,0x4(%esp)
08aa298c +0x3c9f:  mov    %ebx,(%esp)
08aa298f +0x3ca2:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa2994 +0x3ca7:  mov    -0x1c(%ebp),%eax
08aa2997 +0x3caa:  mov    %edi,%edx
08aa2999 +0x3cac:  mov    %eax,(%esp)
08aa299c +0x3caf:  call   08ae3750 <_Unwind_Resume>
08aa29a1 +0x3cb4:  add    $0x2c,%esp
08aa29a4 +0x3cb7:  pop    %ebx
08aa29a5 +0x3cb8:  pop    %esi
08aa29a6 +0x3cb9:  pop    %edi
08aa29a7 +0x3cba:  pop    %ebp
08aa29a8 +0x3cbb:  ret
08aa29a9 +0x3cbc:  nop
08aa29aa +0x3cbd:  push   %ebp
08aa29ab +0x3cbe:  mov    %esp,%ebp
08aa29ad +0x3cc0:  mov    0x8(%ebp),%eax
08aa29b0 +0x3cc3:  pop    %ebp
08aa29b1 +0x3cc4:  ret
08aa29b2 +0x3cc5:  push   %ebp
08aa29b3 +0x3cc6:  mov    %esp,%ebp
08aa29b5 +0x3cc8:  push   %ebx
08aa29b6 +0x3cc9:  sub    $0x14,%esp
08aa29b9 +0x3ccc:  mov    0xc(%ebp),%eax
08aa29bc +0x3ccf:  mov    %eax,(%esp)
08aa29bf +0x3cd2:  call   08aa3a58 <+0x4d6b>
08aa29c4 +0x3cd7:  mov    %eax,%ebx
08aa29c6 +0x3cd9:  mov    0x8(%ebp),%eax
08aa29c9 +0x3cdc:  mov    %eax,(%esp)
08aa29cc +0x3cdf:  call   08aa3a58 <+0x4d6b>
08aa29d1 +0x3ce4:  mov    0x10(%ebp),%edx
08aa29d4 +0x3ce7:  mov    %edx,0x8(%esp)
08aa29d8 +0x3ceb:  mov    %ebx,0x4(%esp)
08aa29dc +0x3cef:  mov    %eax,(%esp)
08aa29df +0x3cf2:  call   08aa3a60 <+0x4d73>
08aa29e4 +0x3cf7:  add    $0x14,%esp
08aa29e7 +0x3cfa:  pop    %ebx
08aa29e8 +0x3cfb:  pop    %ebp
08aa29e9 +0x3cfc:  ret
08aa29ea +0x3cfd:  push   %ebp
08aa29eb +0x3cfe:  mov    %esp,%ebp
08aa29ed +0x3d00:  mov    0x8(%ebp),%eax
08aa29f0 +0x3d03:  pop    %ebp
08aa29f1 +0x3d04:  ret
08aa29f2 +0x3d05:  push   %ebp
08aa29f3 +0x3d06:  mov    %esp,%ebp
08aa29f5 +0x3d08:  mov    0x8(%ebp),%eax
08aa29f8 +0x3d0b:  mov    (%eax),%eax
08aa29fa +0x3d0d:  pop    %ebp
08aa29fb +0x3d0e:  ret
08aa29fc +0x3d0f:  push   %ebp
08aa29fd +0x3d10:  mov    %esp,%ebp
08aa29ff +0x3d12:  push   %ebx
08aa2a00 +0x3d13:  sub    $0x24,%esp
08aa2a03 +0x3d16:  mov    0x8(%ebp),%eax
08aa2a06 +0x3d19:  mov    %eax,(%esp)
08aa2a09 +0x3d1c:  call   08aa3ac6 <+0x4dd9>
08aa2a0e +0x3d21:  mov    %eax,%ebx
08aa2a10 +0x3d23:  mov    0x8(%ebp),%eax
08aa2a13 +0x3d26:  mov    %eax,(%esp)
08aa2a16 +0x3d29:  call   08aa3aa4 <+0x4db7>
08aa2a1b +0x3d2e:  mov    %ebx,%edx
08aa2a1d +0x3d30:  sub    %eax,%edx
08aa2a1f +0x3d32:  mov    0xc(%ebp),%eax
08aa2a22 +0x3d35:  cmp    %eax,%edx
08aa2a24 +0x3d37:  setb   %al
08aa2a27 +0x3d3a:  test   %al,%al
08aa2a29 +0x3d3c:  je     08aa2a36 <+0x3d49>
08aa2a2b +0x3d3e:  mov    0x10(%ebp),%eax
08aa2a2e +0x3d41:  mov    %eax,(%esp)
08aa2a31 +0x3d44:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa2a36 +0x3d49:  mov    0x8(%ebp),%eax
08aa2a39 +0x3d4c:  mov    %eax,(%esp)
08aa2a3c +0x3d4f:  call   08aa3aa4 <+0x4db7>
08aa2a41 +0x3d54:  mov    %eax,%ebx
08aa2a43 +0x3d56:  mov    0x8(%ebp),%eax
08aa2a46 +0x3d59:  mov    %eax,(%esp)
08aa2a49 +0x3d5c:  call   08aa3aa4 <+0x4db7>
08aa2a4e +0x3d61:  mov    %eax,-0x10(%ebp)
08aa2a51 +0x3d64:  lea    0xc(%ebp),%eax
08aa2a54 +0x3d67:  mov    %eax,0x4(%esp)
08aa2a58 +0x3d6b:  lea    -0x10(%ebp),%eax
08aa2a5b +0x3d6e:  mov    %eax,(%esp)
08aa2a5e +0x3d71:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa2a63 +0x3d76:  mov    (%eax),%eax
08aa2a65 +0x3d78:  lea    (%ebx,%eax,1),%eax
08aa2a68 +0x3d7b:  mov    %eax,-0xc(%ebp)
08aa2a6b +0x3d7e:  mov    0x8(%ebp),%eax
08aa2a6e +0x3d81:  mov    %eax,(%esp)
08aa2a71 +0x3d84:  call   08aa3aa4 <+0x4db7>
08aa2a76 +0x3d89:  cmp    -0xc(%ebp),%eax
08aa2a79 +0x3d8c:  ja     08aa2a8b <+0x3d9e>
08aa2a7b +0x3d8e:  mov    0x8(%ebp),%eax
08aa2a7e +0x3d91:  mov    %eax,(%esp)
08aa2a81 +0x3d94:  call   08aa3ac6 <+0x4dd9>
08aa2a86 +0x3d99:  cmp    -0xc(%ebp),%eax
08aa2a89 +0x3d9c:  jae    08aa2a98 <+0x3dab>
08aa2a8b +0x3d9e:  mov    0x8(%ebp),%eax
08aa2a8e +0x3da1:  mov    %eax,(%esp)
08aa2a91 +0x3da4:  call   08aa3ac6 <+0x4dd9>
08aa2a96 +0x3da9:  jmp    08aa2a9b <+0x3dae>
08aa2a98 +0x3dab:  mov    -0xc(%ebp),%eax
08aa2a9b +0x3dae:  add    $0x24,%esp
08aa2a9e +0x3db1:  pop    %ebx
08aa2a9f +0x3db2:  pop    %ebp
08aa2aa0 +0x3db3:  ret
08aa2aa1 +0x3db4:  nop
08aa2aa2 +0x3db5:  push   %ebp
08aa2aa3 +0x3db6:  mov    %esp,%ebp
08aa2aa5 +0x3db8:  push   %ebx
08aa2aa6 +0x3db9:  sub    $0x14,%esp
08aa2aa9 +0x3dbc:  mov    0x8(%ebp),%ebx
08aa2aac +0x3dbf:  mov    0xc(%ebp),%eax
08aa2aaf +0x3dc2:  mov    %eax,0x4(%esp)
08aa2ab3 +0x3dc6:  mov    %ebx,(%esp)
08aa2ab6 +0x3dc9:  call   08aa292a <+0x3c3d>
08aa2abb +0x3dce:  mov    %ebx,%eax
08aa2abd +0x3dd0:  add    $0x14,%esp
08aa2ac0 +0x3dd3:  pop    %ebx
08aa2ac1 +0x3dd4:  pop    %ebp
08aa2ac2 +0x3dd5:  ret    $0x4
08aa2ac5 +0x3dd8:  push   %ebp
08aa2ac6 +0x3dd9:  mov    %esp,%ebp
08aa2ac8 +0x3ddb:  push   %ebx
08aa2ac9 +0x3ddc:  sub    $0x14,%esp
08aa2acc +0x3ddf:  mov    0x8(%ebp),%eax
08aa2acf +0x3de2:  mov    %eax,(%esp)
08aa2ad2 +0x3de5:  call   08aa29aa <+0x3cbd>
08aa2ad7 +0x3dea:  mov    (%eax),%eax
08aa2ad9 +0x3dec:  mov    %eax,%ebx
08aa2adb +0x3dee:  mov    0xc(%ebp),%eax
08aa2ade +0x3df1:  mov    %eax,(%esp)
08aa2ae1 +0x3df4:  call   08aa29aa <+0x3cbd>
08aa2ae6 +0x3df9:  mov    (%eax),%eax
08aa2ae8 +0x3dfb:  mov    %ebx,%edx
08aa2aea +0x3dfd:  sub    %eax,%edx
08aa2aec +0x3dff:  mov    %edx,%eax
08aa2aee +0x3e01:  sar    $0x2,%eax
08aa2af1 +0x3e04:  imul   $0xcccccccd,%eax,%eax
08aa2af7 +0x3e0a:  add    $0x14,%esp
08aa2afa +0x3e0d:  pop    %ebx
08aa2afb +0x3e0e:  pop    %ebp
08aa2afc +0x3e0f:  ret
08aa2afd +0x3e10:  nop
08aa2afe +0x3e11:  push   %ebp
08aa2aff +0x3e12:  mov    %esp,%ebp
08aa2b01 +0x3e14:  sub    $0x18,%esp
08aa2b04 +0x3e17:  cmpl   $0x0,0xc(%ebp)
08aa2b08 +0x3e1b:  je     08aa2b26 <+0x3e39>
08aa2b0a +0x3e1d:  mov    0x8(%ebp),%eax
08aa2b0d +0x3e20:  movl   $0x0,0x8(%esp)
08aa2b15 +0x3e28:  mov    0xc(%ebp),%edx
08aa2b18 +0x3e2b:  mov    %edx,0x4(%esp)
08aa2b1c +0x3e2f:  mov    %eax,(%esp)
08aa2b1f +0x3e32:  call   08aa3ae2 <+0x4df5>
08aa2b24 +0x3e37:  jmp    08aa2b2b <+0x3e3e>
08aa2b26 +0x3e39:  mov    $0x0,%eax
08aa2b2b +0x3e3e:  leave
08aa2b2c +0x3e3f:  ret
08aa2b2d +0x3e40:  push   %ebp
08aa2b2e +0x3e41:  mov    %esp,%ebp
08aa2b30 +0x3e43:  sub    $0x28,%esp
08aa2b33 +0x3e46:  lea    -0x10(%ebp),%eax
08aa2b36 +0x3e49:  lea    0xc(%ebp),%edx
08aa2b39 +0x3e4c:  mov    %edx,0x4(%esp)
08aa2b3d +0x3e50:  mov    %eax,(%esp)
08aa2b40 +0x3e53:  call   08aa3b21 <+0x4e34>
08aa2b45 +0x3e58:  sub    $0x4,%esp
08aa2b48 +0x3e5b:  lea    -0xc(%ebp),%eax
08aa2b4b +0x3e5e:  lea    0x8(%ebp),%edx
08aa2b4e +0x3e61:  mov    %edx,0x4(%esp)
08aa2b52 +0x3e65:  mov    %eax,(%esp)
08aa2b55 +0x3e68:  call   08aa3b21 <+0x4e34>
08aa2b5a +0x3e6d:  sub    $0x4,%esp
08aa2b5d +0x3e70:  mov    0x14(%ebp),%eax
08aa2b60 +0x3e73:  mov    %eax,0xc(%esp)
08aa2b64 +0x3e77:  mov    0x10(%ebp),%eax
08aa2b67 +0x3e7a:  mov    %eax,0x8(%esp)
08aa2b6b +0x3e7e:  mov    -0x10(%ebp),%eax
08aa2b6e +0x3e81:  mov    %eax,0x4(%esp)
08aa2b72 +0x3e85:  mov    -0xc(%ebp),%eax
08aa2b75 +0x3e88:  mov    %eax,(%esp)
08aa2b78 +0x3e8b:  call   08aa3b46 <+0x4e59>
08aa2b7d +0x3e90:  leave
08aa2b7e +0x3e91:  ret
08aa2b7f +0x3e92:  nop
08aa2b80 +0x3e93:  push   %ebp
08aa2b81 +0x3e94:  mov    %esp,%ebp
08aa2b83 +0x3e96:  sub    $0x18,%esp
08aa2b86 +0x3e99:  mov    0xc(%ebp),%eax
08aa2b89 +0x3e9c:  mov    %eax,(%esp)
08aa2b8c +0x3e9f:  call   08a9ed60 <+0x73>
08aa2b91 +0x3ea4:  leave
08aa2b92 +0x3ea5:  ret
08aa2b93 +0x3ea6:  nop
08aa2b94 +0x3ea7:  push   %ebp
08aa2b95 +0x3ea8:  mov    %esp,%ebp
08aa2b97 +0x3eaa:  mov    0xc(%ebp),%eax
08aa2b9a +0x3ead:  mov    (%eax),%edx
08aa2b9c +0x3eaf:  mov    0x8(%ebp),%eax
08aa2b9f +0x3eb2:  mov    %edx,(%eax)
08aa2ba1 +0x3eb4:  pop    %ebp
08aa2ba2 +0x3eb5:  ret
08aa2ba3 +0x3eb6:  push   %ebp
08aa2ba4 +0x3eb7:  mov    %esp,%ebp
08aa2ba6 +0x3eb9:  mov    0x8(%ebp),%eax
08aa2ba9 +0x3ebc:  pop    %ebp
08aa2baa +0x3ebd:  ret
08aa2bab +0x3ebe:  nop
08aa2bac +0x3ebf:  push   %ebp
08aa2bad +0x3ec0:  mov    %esp,%ebp
08aa2baf +0x3ec2:  sub    $0x28,%esp
08aa2bb2 +0x3ec5:  mov    0x10(%ebp),%eax
08aa2bb5 +0x3ec8:  mov    %eax,(%esp)
08aa2bb8 +0x3ecb:  call   08aa3b67 <+0x4e7a>
08aa2bbd +0x3ed0:  mov    (%eax),%edx
08aa2bbf +0x3ed2:  mov    %edx,-0x18(%ebp)
08aa2bc2 +0x3ed5:  mov    0x4(%eax),%edx
08aa2bc5 +0x3ed8:  mov    %edx,-0x14(%ebp)
08aa2bc8 +0x3edb:  mov    0x8(%eax),%edx
08aa2bcb +0x3ede:  mov    %edx,-0x10(%ebp)
08aa2bce +0x3ee1:  mov    0xc(%eax),%eax
08aa2bd1 +0x3ee4:  mov    %eax,-0xc(%ebp)
08aa2bd4 +0x3ee7:  mov    0xc(%ebp),%eax
08aa2bd7 +0x3eea:  mov    %eax,0x4(%esp)
08aa2bdb +0x3eee:  movl   $0x10,(%esp)
08aa2be2 +0x3ef5:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa2be7 +0x3efa:  mov    %eax,%edx
08aa2be9 +0x3efc:  test   %edx,%edx
08aa2beb +0x3efe:  je     08aa2c04 <+0x3f17>
08aa2bed +0x3f00:  mov    -0x18(%ebp),%edx
08aa2bf0 +0x3f03:  mov    %edx,(%eax)
08aa2bf2 +0x3f05:  mov    -0x14(%ebp),%edx
08aa2bf5 +0x3f08:  mov    %edx,0x4(%eax)
08aa2bf8 +0x3f0b:  mov    -0x10(%ebp),%edx
08aa2bfb +0x3f0e:  mov    %edx,0x8(%eax)
08aa2bfe +0x3f11:  mov    -0xc(%ebp),%edx
08aa2c01 +0x3f14:  mov    %edx,0xc(%eax)
08aa2c04 +0x3f17:  leave
08aa2c05 +0x3f18:  ret
08aa2c06 +0x3f19:  push   %ebp
08aa2c07 +0x3f1a:  mov    %esp,%ebp
08aa2c09 +0x3f1c:  mov    0x8(%ebp),%eax
08aa2c0c +0x3f1f:  pop    %ebp
08aa2c0d +0x3f20:  ret
08aa2c0e +0x3f21:  push   %ebp
08aa2c0f +0x3f22:  mov    %esp,%ebp
08aa2c11 +0x3f24:  push   %ebx
08aa2c12 +0x3f25:  sub    $0x14,%esp
08aa2c15 +0x3f28:  mov    0xc(%ebp),%eax
08aa2c18 +0x3f2b:  mov    %eax,(%esp)
08aa2c1b +0x3f2e:  call   08aa3b6f <+0x4e82>
08aa2c20 +0x3f33:  mov    %eax,%ebx
08aa2c22 +0x3f35:  mov    0x8(%ebp),%eax
08aa2c25 +0x3f38:  mov    %eax,(%esp)
08aa2c28 +0x3f3b:  call   08aa3b6f <+0x4e82>
08aa2c2d +0x3f40:  mov    0x10(%ebp),%edx
08aa2c30 +0x3f43:  mov    %edx,0x8(%esp)
08aa2c34 +0x3f47:  mov    %ebx,0x4(%esp)
08aa2c38 +0x3f4b:  mov    %eax,(%esp)
08aa2c3b +0x3f4e:  call   08aa3b77 <+0x4e8a>
08aa2c40 +0x3f53:  add    $0x14,%esp
08aa2c43 +0x3f56:  pop    %ebx
08aa2c44 +0x3f57:  pop    %ebp
08aa2c45 +0x3f58:  ret
08aa2c46 +0x3f59:  push   %ebp
08aa2c47 +0x3f5a:  mov    %esp,%ebp
08aa2c49 +0x3f5c:  mov    0x8(%ebp),%eax
08aa2c4c +0x3f5f:  pop    %ebp
08aa2c4d +0x3f60:  ret
08aa2c4e +0x3f61:  push   %ebp
08aa2c4f +0x3f62:  mov    %esp,%ebp
08aa2c51 +0x3f64:  mov    0x8(%ebp),%eax
08aa2c54 +0x3f67:  mov    (%eax),%eax
08aa2c56 +0x3f69:  pop    %ebp
08aa2c57 +0x3f6a:  ret
08aa2c58 +0x3f6b:  push   %ebp
08aa2c59 +0x3f6c:  mov    %esp,%ebp
08aa2c5b +0x3f6e:  push   %ebx
08aa2c5c +0x3f6f:  sub    $0x24,%esp
08aa2c5f +0x3f72:  mov    0x8(%ebp),%eax
08aa2c62 +0x3f75:  mov    %eax,(%esp)
08aa2c65 +0x3f78:  call   08aa3bd8 <+0x4eeb>
08aa2c6a +0x3f7d:  mov    %eax,%ebx
08aa2c6c +0x3f7f:  mov    0x8(%ebp),%eax
08aa2c6f +0x3f82:  mov    %eax,(%esp)
08aa2c72 +0x3f85:  call   08aa3bbc <+0x4ecf>
08aa2c77 +0x3f8a:  mov    %ebx,%edx
08aa2c79 +0x3f8c:  sub    %eax,%edx
08aa2c7b +0x3f8e:  mov    0xc(%ebp),%eax
08aa2c7e +0x3f91:  cmp    %eax,%edx
08aa2c80 +0x3f93:  setb   %al
08aa2c83 +0x3f96:  test   %al,%al
08aa2c85 +0x3f98:  je     08aa2c92 <+0x3fa5>
08aa2c87 +0x3f9a:  mov    0x10(%ebp),%eax
08aa2c8a +0x3f9d:  mov    %eax,(%esp)
08aa2c8d +0x3fa0:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa2c92 +0x3fa5:  mov    0x8(%ebp),%eax
08aa2c95 +0x3fa8:  mov    %eax,(%esp)
08aa2c98 +0x3fab:  call   08aa3bbc <+0x4ecf>
08aa2c9d +0x3fb0:  mov    %eax,%ebx
08aa2c9f +0x3fb2:  mov    0x8(%ebp),%eax
08aa2ca2 +0x3fb5:  mov    %eax,(%esp)
08aa2ca5 +0x3fb8:  call   08aa3bbc <+0x4ecf>
08aa2caa +0x3fbd:  mov    %eax,-0x10(%ebp)
08aa2cad +0x3fc0:  lea    0xc(%ebp),%eax
08aa2cb0 +0x3fc3:  mov    %eax,0x4(%esp)
08aa2cb4 +0x3fc7:  lea    -0x10(%ebp),%eax
08aa2cb7 +0x3fca:  mov    %eax,(%esp)
08aa2cba +0x3fcd:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa2cbf +0x3fd2:  mov    (%eax),%eax
08aa2cc1 +0x3fd4:  lea    (%ebx,%eax,1),%eax
08aa2cc4 +0x3fd7:  mov    %eax,-0xc(%ebp)
08aa2cc7 +0x3fda:  mov    0x8(%ebp),%eax
08aa2cca +0x3fdd:  mov    %eax,(%esp)
08aa2ccd +0x3fe0:  call   08aa3bbc <+0x4ecf>
08aa2cd2 +0x3fe5:  cmp    -0xc(%ebp),%eax
08aa2cd5 +0x3fe8:  ja     08aa2ce7 <+0x3ffa>
08aa2cd7 +0x3fea:  mov    0x8(%ebp),%eax
08aa2cda +0x3fed:  mov    %eax,(%esp)
08aa2cdd +0x3ff0:  call   08aa3bd8 <+0x4eeb>
08aa2ce2 +0x3ff5:  cmp    -0xc(%ebp),%eax
08aa2ce5 +0x3ff8:  jae    08aa2cf4 <+0x4007>
08aa2ce7 +0x3ffa:  mov    0x8(%ebp),%eax
08aa2cea +0x3ffd:  mov    %eax,(%esp)
08aa2ced +0x4000:  call   08aa3bd8 <+0x4eeb>
08aa2cf2 +0x4005:  jmp    08aa2cf7 <+0x400a>
08aa2cf4 +0x4007:  mov    -0xc(%ebp),%eax
08aa2cf7 +0x400a:  add    $0x24,%esp
08aa2cfa +0x400d:  pop    %ebx
08aa2cfb +0x400e:  pop    %ebp
08aa2cfc +0x400f:  ret
08aa2cfd +0x4010:  nop
08aa2cfe +0x4011:  push   %ebp
08aa2cff +0x4012:  mov    %esp,%ebp
08aa2d01 +0x4014:  push   %ebx
08aa2d02 +0x4015:  sub    $0x14,%esp
08aa2d05 +0x4018:  mov    0x8(%ebp),%ebx
08aa2d08 +0x401b:  mov    0xc(%ebp),%eax
08aa2d0b +0x401e:  mov    %eax,0x4(%esp)
08aa2d0f +0x4022:  mov    %ebx,(%esp)
08aa2d12 +0x4025:  call   08aa2b94 <+0x3ea7>
08aa2d17 +0x402a:  mov    %ebx,%eax
08aa2d19 +0x402c:  add    $0x14,%esp
08aa2d1c +0x402f:  pop    %ebx
08aa2d1d +0x4030:  pop    %ebp
08aa2d1e +0x4031:  ret    $0x4
08aa2d21 +0x4034:  push   %ebp
08aa2d22 +0x4035:  mov    %esp,%ebp
08aa2d24 +0x4037:  push   %ebx
08aa2d25 +0x4038:  sub    $0x14,%esp
08aa2d28 +0x403b:  mov    0x8(%ebp),%eax
08aa2d2b +0x403e:  mov    %eax,(%esp)
08aa2d2e +0x4041:  call   08aa2c06 <+0x3f19>
08aa2d33 +0x4046:  mov    (%eax),%eax
08aa2d35 +0x4048:  mov    %eax,%ebx
08aa2d37 +0x404a:  mov    0xc(%ebp),%eax
08aa2d3a +0x404d:  mov    %eax,(%esp)
08aa2d3d +0x4050:  call   08aa2c06 <+0x3f19>
08aa2d42 +0x4055:  mov    (%eax),%eax
08aa2d44 +0x4057:  mov    %ebx,%edx
08aa2d46 +0x4059:  sub    %eax,%edx
08aa2d48 +0x405b:  mov    %edx,%eax
08aa2d4a +0x405d:  sar    $0x4,%eax
08aa2d4d +0x4060:  add    $0x14,%esp
08aa2d50 +0x4063:  pop    %ebx
08aa2d51 +0x4064:  pop    %ebp
08aa2d52 +0x4065:  ret
08aa2d53 +0x4066:  nop
08aa2d54 +0x4067:  push   %ebp
08aa2d55 +0x4068:  mov    %esp,%ebp
08aa2d57 +0x406a:  sub    $0x18,%esp
08aa2d5a +0x406d:  cmpl   $0x0,0xc(%ebp)
08aa2d5e +0x4071:  je     08aa2d7c <+0x408f>
08aa2d60 +0x4073:  mov    0x8(%ebp),%eax
08aa2d63 +0x4076:  movl   $0x0,0x8(%esp)
08aa2d6b +0x407e:  mov    0xc(%ebp),%edx
08aa2d6e +0x4081:  mov    %edx,0x4(%esp)
08aa2d72 +0x4085:  mov    %eax,(%esp)
08aa2d75 +0x4088:  call   08aa3bf4 <+0x4f07>
08aa2d7a +0x408d:  jmp    08aa2d81 <+0x4094>
08aa2d7c +0x408f:  mov    $0x0,%eax
08aa2d81 +0x4094:  leave
08aa2d82 +0x4095:  ret
08aa2d83 +0x4096:  push   %ebp
08aa2d84 +0x4097:  mov    %esp,%ebp
08aa2d86 +0x4099:  sub    $0x28,%esp
08aa2d89 +0x409c:  lea    -0x10(%ebp),%eax
08aa2d8c +0x409f:  lea    0xc(%ebp),%edx
08aa2d8f +0x40a2:  mov    %edx,0x4(%esp)
08aa2d93 +0x40a6:  mov    %eax,(%esp)
08aa2d96 +0x40a9:  call   08aa3c2c <+0x4f3f>
08aa2d9b +0x40ae:  sub    $0x4,%esp
08aa2d9e +0x40b1:  lea    -0xc(%ebp),%eax
08aa2da1 +0x40b4:  lea    0x8(%ebp),%edx
08aa2da4 +0x40b7:  mov    %edx,0x4(%esp)
08aa2da8 +0x40bb:  mov    %eax,(%esp)
08aa2dab +0x40be:  call   08aa3c2c <+0x4f3f>
08aa2db0 +0x40c3:  sub    $0x4,%esp
08aa2db3 +0x40c6:  mov    0x14(%ebp),%eax
08aa2db6 +0x40c9:  mov    %eax,0xc(%esp)
08aa2dba +0x40cd:  mov    0x10(%ebp),%eax
08aa2dbd +0x40d0:  mov    %eax,0x8(%esp)
08aa2dc1 +0x40d4:  mov    -0x10(%ebp),%eax
08aa2dc4 +0x40d7:  mov    %eax,0x4(%esp)
08aa2dc8 +0x40db:  mov    -0xc(%ebp),%eax
08aa2dcb +0x40de:  mov    %eax,(%esp)
08aa2dce +0x40e1:  call   08aa3c51 <+0x4f64>
08aa2dd3 +0x40e6:  leave
08aa2dd4 +0x40e7:  ret
08aa2dd5 +0x40e8:  nop
08aa2dd6 +0x40e9:  push   %ebp
08aa2dd7 +0x40ea:  mov    %esp,%ebp
08aa2dd9 +0x40ec:  pop    %ebp
08aa2dda +0x40ed:  ret
08aa2ddb +0x40ee:  nop
08aa2ddc +0x40ef:  push   %ebp
08aa2ddd +0x40f0:  mov    %esp,%ebp
08aa2ddf +0x40f2:  sub    $0x18,%esp
08aa2de2 +0x40f5:  mov    0xc(%ebp),%eax
08aa2de5 +0x40f8:  mov    %eax,(%esp)
08aa2de8 +0x40fb:  call   08aa2dd6 <+0x40e9>
08aa2ded +0x4100:  leave
08aa2dee +0x4101:  ret
08aa2def +0x4102:  nop
08aa2df0 +0x4103:  push   %ebp
08aa2df1 +0x4104:  mov    %esp,%ebp
08aa2df3 +0x4106:  mov    0xc(%ebp),%eax
08aa2df6 +0x4109:  mov    (%eax),%edx
08aa2df8 +0x410b:  mov    0x8(%ebp),%eax
08aa2dfb +0x410e:  mov    %edx,(%eax)
08aa2dfd +0x4110:  pop    %ebp
08aa2dfe +0x4111:  ret
08aa2dff +0x4112:  push   %ebp
08aa2e00 +0x4113:  mov    %esp,%ebp
08aa2e02 +0x4115:  mov    0x8(%ebp),%eax
08aa2e05 +0x4118:  pop    %ebp
08aa2e06 +0x4119:  ret
08aa2e07 +0x411a:  nop
08aa2e08 +0x411b:  push   %ebp
08aa2e09 +0x411c:  mov    %esp,%ebp
08aa2e0b +0x411e:  push   %ebx
08aa2e0c +0x411f:  sub    $0x14,%esp
08aa2e0f +0x4122:  mov    0x10(%ebp),%eax
08aa2e12 +0x4125:  mov    %eax,(%esp)
08aa2e15 +0x4128:  call   08aa3c72 <+0x4f85>
08aa2e1a +0x412d:  mov    %eax,%ebx
08aa2e1c +0x412f:  mov    0xc(%ebp),%eax
08aa2e1f +0x4132:  mov    %eax,0x4(%esp)
08aa2e23 +0x4136:  movl   $0x10,(%esp)
08aa2e2a +0x413d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa2e2f +0x4142:  mov    %eax,%edx
08aa2e31 +0x4144:  test   %edx,%edx
08aa2e33 +0x4146:  je     08aa2e4b <+0x415e>
08aa2e35 +0x4148:  mov    (%ebx),%edx
08aa2e37 +0x414a:  mov    %edx,(%eax)
08aa2e39 +0x414c:  mov    0x4(%ebx),%edx
08aa2e3c +0x414f:  mov    %edx,0x4(%eax)
08aa2e3f +0x4152:  mov    0x8(%ebx),%edx
08aa2e42 +0x4155:  mov    %edx,0x8(%eax)
08aa2e45 +0x4158:  mov    0xc(%ebx),%edx
08aa2e48 +0x415b:  mov    %edx,0xc(%eax)
08aa2e4b +0x415e:  add    $0x14,%esp
08aa2e4e +0x4161:  pop    %ebx
08aa2e4f +0x4162:  pop    %ebp
08aa2e50 +0x4163:  ret
08aa2e51 +0x4164:  nop
08aa2e52 +0x4165:  push   %ebp
08aa2e53 +0x4166:  mov    %esp,%ebp
08aa2e55 +0x4168:  mov    0x8(%ebp),%eax
08aa2e58 +0x416b:  pop    %ebp
08aa2e59 +0x416c:  ret
08aa2e5a +0x416d:  push   %ebp
08aa2e5b +0x416e:  mov    %esp,%ebp
08aa2e5d +0x4170:  push   %ebx
08aa2e5e +0x4171:  sub    $0x14,%esp
08aa2e61 +0x4174:  mov    0xc(%ebp),%eax
08aa2e64 +0x4177:  mov    %eax,(%esp)
08aa2e67 +0x417a:  call   08aa3c7a <+0x4f8d>
08aa2e6c +0x417f:  mov    %eax,%ebx
08aa2e6e +0x4181:  mov    0x8(%ebp),%eax
08aa2e71 +0x4184:  mov    %eax,(%esp)
08aa2e74 +0x4187:  call   08aa3c7a <+0x4f8d>
08aa2e79 +0x418c:  mov    0x10(%ebp),%edx
08aa2e7c +0x418f:  mov    %edx,0x8(%esp)
08aa2e80 +0x4193:  mov    %ebx,0x4(%esp)
08aa2e84 +0x4197:  mov    %eax,(%esp)
08aa2e87 +0x419a:  call   08aa3c82 <+0x4f95>
08aa2e8c +0x419f:  add    $0x14,%esp
08aa2e8f +0x41a2:  pop    %ebx
08aa2e90 +0x41a3:  pop    %ebp
08aa2e91 +0x41a4:  ret
08aa2e92 +0x41a5:  push   %ebp
08aa2e93 +0x41a6:  mov    %esp,%ebp
08aa2e95 +0x41a8:  mov    0x8(%ebp),%eax
08aa2e98 +0x41ab:  pop    %ebp
08aa2e99 +0x41ac:  ret
08aa2e9a +0x41ad:  push   %ebp
08aa2e9b +0x41ae:  mov    %esp,%ebp
08aa2e9d +0x41b0:  mov    0x8(%ebp),%eax
08aa2ea0 +0x41b3:  mov    (%eax),%eax
08aa2ea2 +0x41b5:  pop    %ebp
08aa2ea3 +0x41b6:  ret
08aa2ea4 +0x41b7:  push   %ebp
08aa2ea5 +0x41b8:  mov    %esp,%ebp
08aa2ea7 +0x41ba:  push   %ebx
08aa2ea8 +0x41bb:  sub    $0x24,%esp
08aa2eab +0x41be:  mov    0x8(%ebp),%eax
08aa2eae +0x41c1:  mov    %eax,(%esp)
08aa2eb1 +0x41c4:  call   08aa3ce2 <+0x4ff5>
08aa2eb6 +0x41c9:  mov    %eax,%ebx
08aa2eb8 +0x41cb:  mov    0x8(%ebp),%eax
08aa2ebb +0x41ce:  mov    %eax,(%esp)
08aa2ebe +0x41d1:  call   08aa3cc6 <+0x4fd9>
08aa2ec3 +0x41d6:  mov    %ebx,%edx
08aa2ec5 +0x41d8:  sub    %eax,%edx
08aa2ec7 +0x41da:  mov    0xc(%ebp),%eax
08aa2eca +0x41dd:  cmp    %eax,%edx
08aa2ecc +0x41df:  setb   %al
08aa2ecf +0x41e2:  test   %al,%al
08aa2ed1 +0x41e4:  je     08aa2ede <+0x41f1>
08aa2ed3 +0x41e6:  mov    0x10(%ebp),%eax
08aa2ed6 +0x41e9:  mov    %eax,(%esp)
08aa2ed9 +0x41ec:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa2ede +0x41f1:  mov    0x8(%ebp),%eax
08aa2ee1 +0x41f4:  mov    %eax,(%esp)
08aa2ee4 +0x41f7:  call   08aa3cc6 <+0x4fd9>
08aa2ee9 +0x41fc:  mov    %eax,%ebx
08aa2eeb +0x41fe:  mov    0x8(%ebp),%eax
08aa2eee +0x4201:  mov    %eax,(%esp)
08aa2ef1 +0x4204:  call   08aa3cc6 <+0x4fd9>
08aa2ef6 +0x4209:  mov    %eax,-0x10(%ebp)
08aa2ef9 +0x420c:  lea    0xc(%ebp),%eax
08aa2efc +0x420f:  mov    %eax,0x4(%esp)
08aa2f00 +0x4213:  lea    -0x10(%ebp),%eax
08aa2f03 +0x4216:  mov    %eax,(%esp)
08aa2f06 +0x4219:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa2f0b +0x421e:  mov    (%eax),%eax
08aa2f0d +0x4220:  lea    (%ebx,%eax,1),%eax
08aa2f10 +0x4223:  mov    %eax,-0xc(%ebp)
08aa2f13 +0x4226:  mov    0x8(%ebp),%eax
08aa2f16 +0x4229:  mov    %eax,(%esp)
08aa2f19 +0x422c:  call   08aa3cc6 <+0x4fd9>
08aa2f1e +0x4231:  cmp    -0xc(%ebp),%eax
08aa2f21 +0x4234:  ja     08aa2f33 <+0x4246>
08aa2f23 +0x4236:  mov    0x8(%ebp),%eax
08aa2f26 +0x4239:  mov    %eax,(%esp)
08aa2f29 +0x423c:  call   08aa3ce2 <+0x4ff5>
08aa2f2e +0x4241:  cmp    -0xc(%ebp),%eax
08aa2f31 +0x4244:  jae    08aa2f40 <+0x4253>
08aa2f33 +0x4246:  mov    0x8(%ebp),%eax
08aa2f36 +0x4249:  mov    %eax,(%esp)
08aa2f39 +0x424c:  call   08aa3ce2 <+0x4ff5>
08aa2f3e +0x4251:  jmp    08aa2f43 <+0x4256>
08aa2f40 +0x4253:  mov    -0xc(%ebp),%eax
08aa2f43 +0x4256:  add    $0x24,%esp
08aa2f46 +0x4259:  pop    %ebx
08aa2f47 +0x425a:  pop    %ebp
08aa2f48 +0x425b:  ret
08aa2f49 +0x425c:  nop
08aa2f4a +0x425d:  push   %ebp
08aa2f4b +0x425e:  mov    %esp,%ebp
08aa2f4d +0x4260:  push   %ebx
08aa2f4e +0x4261:  sub    $0x14,%esp
08aa2f51 +0x4264:  mov    0x8(%ebp),%ebx
08aa2f54 +0x4267:  mov    0xc(%ebp),%eax
08aa2f57 +0x426a:  mov    %eax,0x4(%esp)
08aa2f5b +0x426e:  mov    %ebx,(%esp)
08aa2f5e +0x4271:  call   08aa2df0 <+0x4103>
08aa2f63 +0x4276:  mov    %ebx,%eax
08aa2f65 +0x4278:  add    $0x14,%esp
08aa2f68 +0x427b:  pop    %ebx
08aa2f69 +0x427c:  pop    %ebp
08aa2f6a +0x427d:  ret    $0x4
08aa2f6d +0x4280:  push   %ebp
08aa2f6e +0x4281:  mov    %esp,%ebp
08aa2f70 +0x4283:  push   %ebx
08aa2f71 +0x4284:  sub    $0x14,%esp
08aa2f74 +0x4287:  mov    0x8(%ebp),%eax
08aa2f77 +0x428a:  mov    %eax,(%esp)
08aa2f7a +0x428d:  call   08aa2e52 <+0x4165>
08aa2f7f +0x4292:  mov    (%eax),%eax
08aa2f81 +0x4294:  mov    %eax,%ebx
08aa2f83 +0x4296:  mov    0xc(%ebp),%eax
08aa2f86 +0x4299:  mov    %eax,(%esp)
08aa2f89 +0x429c:  call   08aa2e52 <+0x4165>
08aa2f8e +0x42a1:  mov    (%eax),%eax
08aa2f90 +0x42a3:  mov    %ebx,%edx
08aa2f92 +0x42a5:  sub    %eax,%edx
08aa2f94 +0x42a7:  mov    %edx,%eax
08aa2f96 +0x42a9:  sar    $0x4,%eax
08aa2f99 +0x42ac:  add    $0x14,%esp
08aa2f9c +0x42af:  pop    %ebx
08aa2f9d +0x42b0:  pop    %ebp
08aa2f9e +0x42b1:  ret
08aa2f9f +0x42b2:  nop
08aa2fa0 +0x42b3:  push   %ebp
08aa2fa1 +0x42b4:  mov    %esp,%ebp
08aa2fa3 +0x42b6:  sub    $0x18,%esp
08aa2fa6 +0x42b9:  cmpl   $0x0,0xc(%ebp)
08aa2faa +0x42bd:  je     08aa2fc8 <+0x42db>
08aa2fac +0x42bf:  mov    0x8(%ebp),%eax
08aa2faf +0x42c2:  movl   $0x0,0x8(%esp)
08aa2fb7 +0x42ca:  mov    0xc(%ebp),%edx
08aa2fba +0x42cd:  mov    %edx,0x4(%esp)
08aa2fbe +0x42d1:  mov    %eax,(%esp)
08aa2fc1 +0x42d4:  call   08aa3cfe <+0x5011>
08aa2fc6 +0x42d9:  jmp    08aa2fcd <+0x42e0>
08aa2fc8 +0x42db:  mov    $0x0,%eax
08aa2fcd +0x42e0:  leave
08aa2fce +0x42e1:  ret
08aa2fcf +0x42e2:  push   %ebp
08aa2fd0 +0x42e3:  mov    %esp,%ebp
08aa2fd2 +0x42e5:  sub    $0x28,%esp
08aa2fd5 +0x42e8:  lea    -0x10(%ebp),%eax
08aa2fd8 +0x42eb:  lea    0xc(%ebp),%edx
08aa2fdb +0x42ee:  mov    %edx,0x4(%esp)
08aa2fdf +0x42f2:  mov    %eax,(%esp)
08aa2fe2 +0x42f5:  call   08aa3d36 <+0x5049>
08aa2fe7 +0x42fa:  sub    $0x4,%esp
08aa2fea +0x42fd:  lea    -0xc(%ebp),%eax
08aa2fed +0x4300:  lea    0x8(%ebp),%edx
08aa2ff0 +0x4303:  mov    %edx,0x4(%esp)
08aa2ff4 +0x4307:  mov    %eax,(%esp)
08aa2ff7 +0x430a:  call   08aa3d36 <+0x5049>
08aa2ffc +0x430f:  sub    $0x4,%esp
08aa2fff +0x4312:  mov    0x14(%ebp),%eax
08aa3002 +0x4315:  mov    %eax,0xc(%esp)
08aa3006 +0x4319:  mov    0x10(%ebp),%eax
08aa3009 +0x431c:  mov    %eax,0x8(%esp)
08aa300d +0x4320:  mov    -0x10(%ebp),%eax
08aa3010 +0x4323:  mov    %eax,0x4(%esp)
08aa3014 +0x4327:  mov    -0xc(%ebp),%eax
08aa3017 +0x432a:  mov    %eax,(%esp)
08aa301a +0x432d:  call   08aa3d5b <+0x506e>
08aa301f +0x4332:  leave
08aa3020 +0x4333:  ret
08aa3021 +0x4334:  nop
08aa3022 +0x4335:  push   %ebp
08aa3023 +0x4336:  mov    %esp,%ebp
08aa3025 +0x4338:  pop    %ebp
08aa3026 +0x4339:  ret
08aa3027 +0x433a:  nop
08aa3028 +0x433b:  push   %ebp
08aa3029 +0x433c:  mov    %esp,%ebp
08aa302b +0x433e:  sub    $0x18,%esp
08aa302e +0x4341:  mov    0xc(%ebp),%eax
08aa3031 +0x4344:  mov    %eax,(%esp)
08aa3034 +0x4347:  call   08aa3022 <+0x4335>
08aa3039 +0x434c:  leave
08aa303a +0x434d:  ret
08aa303b +0x434e:  nop
08aa303c +0x434f:  push   %ebp
08aa303d +0x4350:  mov    %esp,%ebp
08aa303f +0x4352:  sub    $0x18,%esp
08aa3042 +0x4355:  mov    0x8(%ebp),%eax
08aa3045 +0x4358:  mov    %eax,(%esp)
08aa3048 +0x435b:  call   08aa3d7c <+0x508f>
08aa304d +0x4360:  leave
08aa304e +0x4361:  ret
08aa304f +0x4362:  nop
08aa3050 +0x4363:  push   %ebp
08aa3051 +0x4364:  mov    %esp,%ebp
08aa3053 +0x4366:  pop    %ebp
08aa3054 +0x4367:  ret
08aa3055 +0x4368:  nop
08aa3056 +0x4369:  push   %ebp
08aa3057 +0x436a:  mov    %esp,%ebp
08aa3059 +0x436c:  sub    $0x18,%esp
08aa305c +0x436f:  mov    0xc(%ebp),%eax
08aa305f +0x4372:  mov    %eax,(%esp)
08aa3062 +0x4375:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa3067 +0x437a:  leave
08aa3068 +0x437b:  ret
08aa3069 +0x437c:  push   %ebp
08aa306a +0x437d:  mov    %esp,%ebp
08aa306c +0x437f:  pop    %ebp
08aa306d +0x4380:  ret
08aa306e +0x4381:  push   %ebp
08aa306f +0x4382:  mov    %esp,%ebp
08aa3071 +0x4384:  sub    $0x18,%esp
08aa3074 +0x4387:  mov    0x8(%ebp),%eax
08aa3077 +0x438a:  mov    %eax,(%esp)
08aa307a +0x438d:  call   08aa3d82 <+0x5095>
08aa307f +0x4392:  leave
08aa3080 +0x4393:  ret
08aa3081 +0x4394:  nop
08aa3082 +0x4395:  push   %ebp
08aa3083 +0x4396:  mov    %esp,%ebp
08aa3085 +0x4398:  pop    %ebp
08aa3086 +0x4399:  ret
08aa3087 +0x439a:  nop
08aa3088 +0x439b:  push   %ebp
08aa3089 +0x439c:  mov    %esp,%ebp
08aa308b +0x439e:  sub    $0x18,%esp
08aa308e +0x43a1:  mov    0xc(%ebp),%eax
08aa3091 +0x43a4:  mov    %eax,(%esp)
08aa3094 +0x43a7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa3099 +0x43ac:  leave
08aa309a +0x43ad:  ret
08aa309b +0x43ae:  push   %ebp
08aa309c +0x43af:  mov    %esp,%ebp
08aa309e +0x43b1:  pop    %ebp
08aa309f +0x43b2:  ret
08aa30a0 +0x43b3:  push   %ebp
08aa30a1 +0x43b4:  mov    %esp,%ebp
08aa30a3 +0x43b6:  sub    $0x18,%esp
08aa30a6 +0x43b9:  mov    0x8(%ebp),%eax
08aa30a9 +0x43bc:  mov    %eax,(%esp)
08aa30ac +0x43bf:  call   08aa3d88 <+0x509b>
08aa30b1 +0x43c4:  leave
08aa30b2 +0x43c5:  ret
08aa30b3 +0x43c6:  nop
08aa30b4 +0x43c7:  push   %ebp
08aa30b5 +0x43c8:  mov    %esp,%ebp
08aa30b7 +0x43ca:  pop    %ebp
08aa30b8 +0x43cb:  ret
08aa30b9 +0x43cc:  nop
08aa30ba +0x43cd:  push   %ebp
08aa30bb +0x43ce:  mov    %esp,%ebp
08aa30bd +0x43d0:  sub    $0x18,%esp
08aa30c0 +0x43d3:  mov    0xc(%ebp),%eax
08aa30c3 +0x43d6:  mov    %eax,(%esp)
08aa30c6 +0x43d9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa30cb +0x43de:  leave
08aa30cc +0x43df:  ret
08aa30cd +0x43e0:  push   %ebp
08aa30ce +0x43e1:  mov    %esp,%ebp
08aa30d0 +0x43e3:  sub    $0x18,%esp
08aa30d3 +0x43e6:  jmp    08aa30e4 <+0x43f7>
08aa30d5 +0x43e8:  mov    0x8(%ebp),%eax
08aa30d8 +0x43eb:  mov    %eax,(%esp)
08aa30db +0x43ee:  call   08aa3d8d <+0x50a0>
08aa30e0 +0x43f3:  addl   $0x14,0x8(%ebp)
08aa30e4 +0x43f7:  mov    0x8(%ebp),%eax
08aa30e7 +0x43fa:  cmp    0xc(%ebp),%eax
08aa30ea +0x43fd:  setne  %al
08aa30ed +0x4400:  test   %al,%al
08aa30ef +0x4402:  jne    08aa30d5 <+0x43e8>
08aa30f1 +0x4404:  leave
08aa30f2 +0x4405:  ret
08aa30f3 +0x4406:  nop
08aa30f4 +0x4407:  push   %ebp
08aa30f5 +0x4408:  mov    %esp,%ebp
08aa30f7 +0x440a:  sub    $0x18,%esp
08aa30fa +0x440d:  mov    0x8(%ebp),%eax
08aa30fd +0x4410:  mov    %eax,(%esp)
08aa3100 +0x4413:  call   08aa3da0 <+0x50b3>
08aa3105 +0x4418:  leave
08aa3106 +0x4419:  ret
08aa3107 +0x441a:  nop
08aa3108 +0x441b:  push   %ebp
08aa3109 +0x441c:  mov    %esp,%ebp
08aa310b +0x441e:  pop    %ebp
08aa310c +0x441f:  ret
08aa310d +0x4420:  nop
08aa310e +0x4421:  push   %ebp
08aa310f +0x4422:  mov    %esp,%ebp
08aa3111 +0x4424:  sub    $0x18,%esp
08aa3114 +0x4427:  mov    0xc(%ebp),%eax
08aa3117 +0x442a:  mov    %eax,(%esp)
08aa311a +0x442d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa311f +0x4432:  leave
08aa3120 +0x4433:  ret
08aa3121 +0x4434:  push   %ebp
08aa3122 +0x4435:  mov    %esp,%ebp
08aa3124 +0x4437:  pop    %ebp
08aa3125 +0x4438:  ret
08aa3126 +0x4439:  push   %ebp
08aa3127 +0x443a:  mov    %esp,%ebp
08aa3129 +0x443c:  sub    $0x18,%esp
08aa312c +0x443f:  mov    0x8(%ebp),%eax
08aa312f +0x4442:  mov    %eax,(%esp)
08aa3132 +0x4445:  call   08aa3da6 <+0x50b9>
08aa3137 +0x444a:  leave
08aa3138 +0x444b:  ret
08aa3139 +0x444c:  nop
08aa313a +0x444d:  push   %ebp
08aa313b +0x444e:  mov    %esp,%ebp
08aa313d +0x4450:  pop    %ebp
08aa313e +0x4451:  ret
08aa313f +0x4452:  nop
08aa3140 +0x4453:  push   %ebp
08aa3141 +0x4454:  mov    %esp,%ebp
08aa3143 +0x4456:  sub    $0x18,%esp
08aa3146 +0x4459:  mov    0xc(%ebp),%eax
08aa3149 +0x445c:  mov    %eax,(%esp)
08aa314c +0x445f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa3151 +0x4464:  leave
08aa3152 +0x4465:  ret
08aa3153 +0x4466:  push   %ebp
08aa3154 +0x4467:  mov    %esp,%ebp
08aa3156 +0x4469:  pop    %ebp
08aa3157 +0x446a:  ret
08aa3158 +0x446b:  push   %ebp
08aa3159 +0x446c:  mov    %esp,%ebp
08aa315b +0x446e:  sub    $0x18,%esp
08aa315e +0x4471:  mov    0x8(%ebp),%eax
08aa3161 +0x4474:  mov    %eax,(%esp)
08aa3164 +0x4477:  call   08aa3dac <+0x50bf>
08aa3169 +0x447c:  leave
08aa316a +0x447d:  ret
08aa316b +0x447e:  nop
08aa316c +0x447f:  push   %ebp
08aa316d +0x4480:  mov    %esp,%ebp
08aa316f +0x4482:  mov    0x8(%ebp),%eax
08aa3172 +0x4485:  movl   $0x0,0x4(%eax)
08aa3179 +0x448c:  mov    0x8(%ebp),%eax
08aa317c +0x448f:  movl   $0x0,0x8(%eax)
08aa3183 +0x4496:  mov    0x8(%ebp),%eax
08aa3186 +0x4499:  lea    0x4(%eax),%edx
08aa3189 +0x449c:  mov    0x8(%ebp),%eax
08aa318c +0x449f:  mov    %edx,0xc(%eax)
08aa318f +0x44a2:  mov    0x8(%ebp),%eax
08aa3192 +0x44a5:  lea    0x4(%eax),%edx
08aa3195 +0x44a8:  mov    0x8(%ebp),%eax
08aa3198 +0x44ab:  mov    %edx,0x10(%eax)
08aa319b +0x44ae:  pop    %ebp
08aa319c +0x44af:  ret
08aa319d +0x44b0:  nop
08aa319e +0x44b1:  push   %ebp
08aa319f +0x44b2:  mov    %esp,%ebp
08aa31a1 +0x44b4:  mov    0x8(%ebp),%eax
08aa31a4 +0x44b7:  pop    %ebp
08aa31a5 +0x44b8:  ret
08aa31a6 +0x44b9:  push   %ebp
08aa31a7 +0x44ba:  mov    %esp,%ebp
08aa31a9 +0x44bc:  pop    %ebp
08aa31aa +0x44bd:  ret
08aa31ab +0x44be:  nop
08aa31ac +0x44bf:  push   %ebp
08aa31ad +0x44c0:  mov    %esp,%ebp
08aa31af +0x44c2:  sub    $0x18,%esp
08aa31b2 +0x44c5:  mov    0xc(%ebp),%eax
08aa31b5 +0x44c8:  mov    %eax,(%esp)
08aa31b8 +0x44cb:  call   08aa31a6 <+0x44b9>
08aa31bd +0x44d0:  leave
08aa31be +0x44d1:  ret
08aa31bf +0x44d2:  nop
08aa31c0 +0x44d3:  push   %ebp
08aa31c1 +0x44d4:  mov    %esp,%ebp
08aa31c3 +0x44d6:  sub    $0x18,%esp
08aa31c6 +0x44d9:  mov    0x8(%ebp),%eax
08aa31c9 +0x44dc:  movl   $0x1,0x8(%esp)
08aa31d1 +0x44e4:  mov    0xc(%ebp),%edx
08aa31d4 +0x44e7:  mov    %edx,0x4(%esp)
08aa31d8 +0x44eb:  mov    %eax,(%esp)
08aa31db +0x44ee:  call   08aa3db2 <+0x50c5>
08aa31e0 +0x44f3:  leave
08aa31e1 +0x44f4:  ret
08aa31e2 +0x44f5:  push   %ebp
08aa31e3 +0x44f6:  mov    %esp,%ebp
08aa31e5 +0x44f8:  sub    $0x18,%esp
08aa31e8 +0x44fb:  mov    0x8(%ebp),%eax
08aa31eb +0x44fe:  mov    %eax,(%esp)
08aa31ee +0x4501:  call   08aa3dc6 <+0x50d9>
08aa31f3 +0x4506:  leave
08aa31f4 +0x4507:  ret
08aa31f5 +0x4508:  nop
08aa31f6 +0x4509:  push   %ebp
08aa31f7 +0x450a:  mov    %esp,%ebp
08aa31f9 +0x450c:  pop    %ebp
08aa31fa +0x450d:  ret
08aa31fb +0x450e:  nop
08aa31fc +0x450f:  push   %ebp
08aa31fd +0x4510:  mov    %esp,%ebp
08aa31ff +0x4512:  sub    $0x18,%esp
08aa3202 +0x4515:  mov    0xc(%ebp),%eax
08aa3205 +0x4518:  mov    %eax,(%esp)
08aa3208 +0x451b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa320d +0x4520:  leave
08aa320e +0x4521:  ret
08aa320f +0x4522:  push   %ebp
08aa3210 +0x4523:  mov    %esp,%ebp
08aa3212 +0x4525:  pop    %ebp
08aa3213 +0x4526:  ret
08aa3214 +0x4527:  push   %ebp
08aa3215 +0x4528:  mov    %esp,%ebp
08aa3217 +0x452a:  pop    %ebp
08aa3218 +0x452b:  ret
08aa3219 +0x452c:  nop
08aa321a +0x452d:  push   %ebp
08aa321b +0x452e:  mov    %esp,%ebp
08aa321d +0x4530:  sub    $0x18,%esp
08aa3220 +0x4533:  mov    0xc(%ebp),%eax
08aa3223 +0x4536:  mov    %eax,(%esp)
08aa3226 +0x4539:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa322b +0x453e:  leave
08aa322c +0x453f:  ret
08aa322d +0x4540:  push   %ebp
08aa322e +0x4541:  mov    %esp,%ebp
08aa3230 +0x4543:  sub    $0x18,%esp
08aa3233 +0x4546:  jmp    08aa3244 <+0x4557>
08aa3235 +0x4548:  mov    0x8(%ebp),%eax
08aa3238 +0x454b:  mov    %eax,(%esp)
08aa323b +0x454e:  call   08aa3dcb <+0x50de>
08aa3240 +0x4553:  addl   $0x10,0x8(%ebp)
08aa3244 +0x4557:  mov    0x8(%ebp),%eax
08aa3247 +0x455a:  cmp    0xc(%ebp),%eax
08aa324a +0x455d:  setne  %al
08aa324d +0x4560:  test   %al,%al
08aa324f +0x4562:  jne    08aa3235 <+0x4548>
08aa3251 +0x4564:  leave
08aa3252 +0x4565:  ret
08aa3253 +0x4566:  nop
08aa3254 +0x4567:  push   %ebp
08aa3255 +0x4568:  mov    %esp,%ebp
08aa3257 +0x456a:  mov    0xc(%ebp),%eax
08aa325a +0x456d:  mov    (%eax),%edx
08aa325c +0x456f:  mov    0x8(%ebp),%eax
08aa325f +0x4572:  mov    %edx,(%eax)
08aa3261 +0x4574:  pop    %ebp
08aa3262 +0x4575:  ret
08aa3263 +0x4576:  nop
08aa3264 +0x4577:  push   %ebp
08aa3265 +0x4578:  mov    %esp,%ebp
08aa3267 +0x457a:  mov    0x8(%ebp),%eax
08aa326a +0x457d:  pop    %ebp
08aa326b +0x457e:  ret
08aa326c +0x457f:  push   %ebp
08aa326d +0x4580:  mov    %esp,%ebp
08aa326f +0x4582:  push   %ebx
08aa3270 +0x4583:  sub    $0x14,%esp
08aa3273 +0x4586:  mov    0xc(%ebp),%eax
08aa3276 +0x4589:  mov    %eax,(%esp)
08aa3279 +0x458c:  call   08aa3dde <+0x50f1>
08aa327e +0x4591:  mov    %eax,%ebx
08aa3280 +0x4593:  mov    0x8(%ebp),%eax
08aa3283 +0x4596:  mov    %eax,(%esp)
08aa3286 +0x4599:  call   08aa3dde <+0x50f1>
08aa328b +0x459e:  mov    0x10(%ebp),%edx
08aa328e +0x45a1:  mov    %edx,0x8(%esp)
08aa3292 +0x45a5:  mov    %ebx,0x4(%esp)
08aa3296 +0x45a9:  mov    %eax,(%esp)
08aa3299 +0x45ac:  call   08aa3de6 <+0x50f9>
08aa329e +0x45b1:  add    $0x14,%esp
08aa32a1 +0x45b4:  pop    %ebx
08aa32a2 +0x45b5:  pop    %ebp
08aa32a3 +0x45b6:  ret
08aa32a4 +0x45b7:  push   %ebp
08aa32a5 +0x45b8:  mov    %esp,%ebp
08aa32a7 +0x45ba:  mov    0x8(%ebp),%eax
08aa32aa +0x45bd:  mov    (%eax),%eax
08aa32ac +0x45bf:  pop    %ebp
08aa32ad +0x45c0:  ret
08aa32ae +0x45c1:  push   %ebp
08aa32af +0x45c2:  mov    %esp,%ebp
08aa32b1 +0x45c4:  push   %ebx
08aa32b2 +0x45c5:  sub    $0x24,%esp
08aa32b5 +0x45c8:  mov    0x8(%ebp),%eax
08aa32b8 +0x45cb:  mov    %eax,(%esp)
08aa32bb +0x45ce:  call   08aa3e46 <+0x5159>
08aa32c0 +0x45d3:  mov    %eax,%ebx
08aa32c2 +0x45d5:  mov    0x8(%ebp),%eax
08aa32c5 +0x45d8:  mov    %eax,(%esp)
08aa32c8 +0x45db:  call   08aa3e2a <+0x513d>
08aa32cd +0x45e0:  mov    %ebx,%edx
08aa32cf +0x45e2:  sub    %eax,%edx
08aa32d1 +0x45e4:  mov    0xc(%ebp),%eax
08aa32d4 +0x45e7:  cmp    %eax,%edx
08aa32d6 +0x45e9:  setb   %al
08aa32d9 +0x45ec:  test   %al,%al
08aa32db +0x45ee:  je     08aa32e8 <+0x45fb>
08aa32dd +0x45f0:  mov    0x10(%ebp),%eax
08aa32e0 +0x45f3:  mov    %eax,(%esp)
08aa32e3 +0x45f6:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa32e8 +0x45fb:  mov    0x8(%ebp),%eax
08aa32eb +0x45fe:  mov    %eax,(%esp)
08aa32ee +0x4601:  call   08aa3e2a <+0x513d>
08aa32f3 +0x4606:  mov    %eax,%ebx
08aa32f5 +0x4608:  mov    0x8(%ebp),%eax
08aa32f8 +0x460b:  mov    %eax,(%esp)
08aa32fb +0x460e:  call   08aa3e2a <+0x513d>
08aa3300 +0x4613:  mov    %eax,-0x10(%ebp)
08aa3303 +0x4616:  lea    0xc(%ebp),%eax
08aa3306 +0x4619:  mov    %eax,0x4(%esp)
08aa330a +0x461d:  lea    -0x10(%ebp),%eax
08aa330d +0x4620:  mov    %eax,(%esp)
08aa3310 +0x4623:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa3315 +0x4628:  mov    (%eax),%eax
08aa3317 +0x462a:  lea    (%ebx,%eax,1),%eax
08aa331a +0x462d:  mov    %eax,-0xc(%ebp)
08aa331d +0x4630:  mov    0x8(%ebp),%eax
08aa3320 +0x4633:  mov    %eax,(%esp)
08aa3323 +0x4636:  call   08aa3e2a <+0x513d>
08aa3328 +0x463b:  cmp    -0xc(%ebp),%eax
08aa332b +0x463e:  ja     08aa333d <+0x4650>
08aa332d +0x4640:  mov    0x8(%ebp),%eax
08aa3330 +0x4643:  mov    %eax,(%esp)
08aa3333 +0x4646:  call   08aa3e46 <+0x5159>
08aa3338 +0x464b:  cmp    -0xc(%ebp),%eax
08aa333b +0x464e:  jae    08aa334a <+0x465d>
08aa333d +0x4650:  mov    0x8(%ebp),%eax
08aa3340 +0x4653:  mov    %eax,(%esp)
08aa3343 +0x4656:  call   08aa3e46 <+0x5159>
08aa3348 +0x465b:  jmp    08aa334d <+0x4660>
08aa334a +0x465d:  mov    -0xc(%ebp),%eax
08aa334d +0x4660:  add    $0x24,%esp
08aa3350 +0x4663:  pop    %ebx
08aa3351 +0x4664:  pop    %ebp
08aa3352 +0x4665:  ret
08aa3353 +0x4666:  nop
08aa3354 +0x4667:  push   %ebp
08aa3355 +0x4668:  mov    %esp,%ebp
08aa3357 +0x466a:  push   %ebx
08aa3358 +0x466b:  sub    $0x14,%esp
08aa335b +0x466e:  mov    0x8(%ebp),%ebx
08aa335e +0x4671:  mov    0xc(%ebp),%eax
08aa3361 +0x4674:  mov    %eax,0x4(%esp)
08aa3365 +0x4678:  mov    %ebx,(%esp)
08aa3368 +0x467b:  call   08aa3254 <+0x4567>
08aa336d +0x4680:  mov    %ebx,%eax
08aa336f +0x4682:  add    $0x14,%esp
08aa3372 +0x4685:  pop    %ebx
08aa3373 +0x4686:  pop    %ebp
08aa3374 +0x4687:  ret    $0x4
08aa3377 +0x468a:  push   %ebp
08aa3378 +0x468b:  mov    %esp,%ebp
08aa337a +0x468d:  push   %ebx
08aa337b +0x468e:  sub    $0x14,%esp
08aa337e +0x4691:  mov    0x8(%ebp),%eax
08aa3381 +0x4694:  mov    %eax,(%esp)
08aa3384 +0x4697:  call   08aa3264 <+0x4577>
08aa3389 +0x469c:  mov    (%eax),%eax
08aa338b +0x469e:  mov    %eax,%ebx
08aa338d +0x46a0:  mov    0xc(%ebp),%eax
08aa3390 +0x46a3:  mov    %eax,(%esp)
08aa3393 +0x46a6:  call   08aa3264 <+0x4577>
08aa3398 +0x46ab:  mov    (%eax),%eax
08aa339a +0x46ad:  mov    %ebx,%edx
08aa339c +0x46af:  sub    %eax,%edx
08aa339e +0x46b1:  mov    %edx,%eax
08aa33a0 +0x46b3:  sar    $0x2,%eax
08aa33a3 +0x46b6:  add    $0x14,%esp
08aa33a6 +0x46b9:  pop    %ebx
08aa33a7 +0x46ba:  pop    %ebp
08aa33a8 +0x46bb:  ret
08aa33a9 +0x46bc:  nop
08aa33aa +0x46bd:  push   %ebp
08aa33ab +0x46be:  mov    %esp,%ebp
08aa33ad +0x46c0:  sub    $0x18,%esp
08aa33b0 +0x46c3:  cmpl   $0x0,0xc(%ebp)
08aa33b4 +0x46c7:  je     08aa33d2 <+0x46e5>
08aa33b6 +0x46c9:  mov    0x8(%ebp),%eax
08aa33b9 +0x46cc:  movl   $0x0,0x8(%esp)
08aa33c1 +0x46d4:  mov    0xc(%ebp),%edx
08aa33c4 +0x46d7:  mov    %edx,0x4(%esp)
08aa33c8 +0x46db:  mov    %eax,(%esp)
08aa33cb +0x46de:  call   08aa3e62 <+0x5175>
08aa33d0 +0x46e3:  jmp    08aa33d7 <+0x46ea>
08aa33d2 +0x46e5:  mov    $0x0,%eax
08aa33d7 +0x46ea:  leave
08aa33d8 +0x46eb:  ret
08aa33d9 +0x46ec:  push   %ebp
08aa33da +0x46ed:  mov    %esp,%ebp
08aa33dc +0x46ef:  sub    $0x28,%esp
08aa33df +0x46f2:  lea    -0x10(%ebp),%eax
08aa33e2 +0x46f5:  lea    0xc(%ebp),%edx
08aa33e5 +0x46f8:  mov    %edx,0x4(%esp)
08aa33e9 +0x46fc:  mov    %eax,(%esp)
08aa33ec +0x46ff:  call   08aa3e9a <+0x51ad>
08aa33f1 +0x4704:  sub    $0x4,%esp
08aa33f4 +0x4707:  lea    -0xc(%ebp),%eax
08aa33f7 +0x470a:  lea    0x8(%ebp),%edx
08aa33fa +0x470d:  mov    %edx,0x4(%esp)
08aa33fe +0x4711:  mov    %eax,(%esp)
08aa3401 +0x4714:  call   08aa3e9a <+0x51ad>
08aa3406 +0x4719:  sub    $0x4,%esp
08aa3409 +0x471c:  mov    0x14(%ebp),%eax
08aa340c +0x471f:  mov    %eax,0xc(%esp)
08aa3410 +0x4723:  mov    0x10(%ebp),%eax
08aa3413 +0x4726:  mov    %eax,0x8(%esp)
08aa3417 +0x472a:  mov    -0x10(%ebp),%eax
08aa341a +0x472d:  mov    %eax,0x4(%esp)
08aa341e +0x4731:  mov    -0xc(%ebp),%eax
08aa3421 +0x4734:  mov    %eax,(%esp)
08aa3424 +0x4737:  call   08aa3ebf <+0x51d2>
08aa3429 +0x473c:  leave
08aa342a +0x473d:  ret
08aa342b +0x473e:  nop
08aa342c +0x473f:  push   %ebp
08aa342d +0x4740:  mov    %esp,%ebp
08aa342f +0x4742:  pop    %ebp
08aa3430 +0x4743:  ret
08aa3431 +0x4744:  push   %ebp
08aa3432 +0x4745:  mov    %esp,%ebp
08aa3434 +0x4747:  sub    $0x28,%esp
08aa3437 +0x474a:  mov    0x8(%ebp),%eax
08aa343a +0x474d:  mov    %eax,(%esp)
08aa343d +0x4750:  call   08aa3ee0 <+0x51f3>
08aa3442 +0x4755:  mov    %eax,0x4(%esp)
08aa3446 +0x4759:  lea    -0x9(%ebp),%eax
08aa3449 +0x475c:  mov    %eax,(%esp)
08aa344c +0x475f:  call   08aa345e <+0x4771>
08aa3451 +0x4764:  leave
08aa3452 +0x4765:  ret
08aa3453 +0x4766:  push   %ebp
08aa3454 +0x4767:  mov    %esp,%ebp
08aa3456 +0x4769:  mov    0x8(%ebp),%eax
08aa3459 +0x476c:  add    $0x10,%eax
08aa345c +0x476f:  pop    %ebp
08aa345d +0x4770:  ret
08aa345e +0x4771:  push   %ebp
08aa345f +0x4772:  mov    %esp,%ebp
08aa3461 +0x4774:  mov    0xc(%ebp),%eax
08aa3464 +0x4777:  pop    %ebp
08aa3465 +0x4778:  ret
08aa3466 +0x4779:  push   %ebp
08aa3467 +0x477a:  mov    %esp,%ebp
08aa3469 +0x477c:  sub    $0x18,%esp
08aa346c +0x477f:  mov    0x8(%ebp),%eax
08aa346f +0x4782:  mov    %eax,(%esp)
08aa3472 +0x4785:  call   08aa3eec <+0x51ff>
08aa3477 +0x478a:  leave
08aa3478 +0x478b:  ret
08aa3479 +0x478c:  push   %ebp
08aa347a +0x478d:  mov    %esp,%ebp
08aa347c +0x478f:  mov    0x8(%ebp),%eax
08aa347f +0x4792:  pop    %ebp
08aa3480 +0x4793:  ret
08aa3481 +0x4794:  push   %ebp
08aa3482 +0x4795:  mov    %esp,%ebp
08aa3484 +0x4797:  mov    0x8(%ebp),%eax
08aa3487 +0x479a:  pop    %ebp
08aa3488 +0x479b:  ret
08aa3489 +0x479c:  push   %ebp
08aa348a +0x479d:  mov    %esp,%ebp
08aa348c +0x479f:  push   %esi
08aa348d +0x47a0:  push   %ebx
08aa348e +0x47a1:  sub    $0x10,%esp
08aa3491 +0x47a4:  mov    0x10(%ebp),%eax
08aa3494 +0x47a7:  mov    %eax,(%esp)
08aa3497 +0x47aa:  call   08aa3ef1 <+0x5204>
08aa349c +0x47af:  mov    %eax,%esi
08aa349e +0x47b1:  mov    0xc(%ebp),%eax
08aa34a1 +0x47b4:  mov    %eax,(%esp)
08aa34a4 +0x47b7:  call   08aa3ef1 <+0x5204>
08aa34a9 +0x47bc:  mov    %eax,%ebx
08aa34ab +0x47be:  mov    0x8(%ebp),%eax
08aa34ae +0x47c1:  mov    %eax,(%esp)
08aa34b1 +0x47c4:  call   08aa3ef1 <+0x5204>
08aa34b6 +0x47c9:  mov    %esi,0x8(%esp)
08aa34ba +0x47cd:  mov    %ebx,0x4(%esp)
08aa34be +0x47d1:  mov    %eax,(%esp)
08aa34c1 +0x47d4:  call   08aa3ef9 <+0x520c>
08aa34c6 +0x47d9:  add    $0x10,%esp
08aa34c9 +0x47dc:  pop    %ebx
08aa34ca +0x47dd:  pop    %esi
08aa34cb +0x47de:  pop    %ebp
08aa34cc +0x47df:  ret
08aa34cd +0x47e0:  nop
08aa34ce +0x47e1:  push   %ebp
08aa34cf +0x47e2:  mov    %esp,%ebp
08aa34d1 +0x47e4:  sub    $0x18,%esp
08aa34d4 +0x47e7:  mov    0x8(%ebp),%eax
08aa34d7 +0x47ea:  mov    %eax,(%esp)
08aa34da +0x47ed:  call   08aa3f1e <+0x5231>
08aa34df +0x47f2:  mov    %eax,(%esp)
08aa34e2 +0x47f5:  call   08aa3f26 <+0x5239>
08aa34e7 +0x47fa:  leave
08aa34e8 +0x47fb:  ret
08aa34e9 +0x47fc:  nop
08aa34ea +0x47fd:  push   %ebp
08aa34eb +0x47fe:  mov    %esp,%ebp
08aa34ed +0x4800:  sub    $0x18,%esp
08aa34f0 +0x4803:  mov    0x8(%ebp),%eax
08aa34f3 +0x4806:  mov    %eax,(%esp)
08aa34f6 +0x4809:  call   08aa3f26 <+0x5239>
08aa34fb +0x480e:  cmp    0xc(%ebp),%eax
08aa34fe +0x4811:  setb   %al
08aa3501 +0x4814:  movzbl %al,%eax
08aa3504 +0x4817:  test   %eax,%eax
08aa3506 +0x4819:  setne  %al
08aa3509 +0x481c:  test   %al,%al
08aa350b +0x481e:  je     08aa3512 <+0x4825>
08aa350d +0x4820:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa3512 +0x4825:  mov    0xc(%ebp),%eax
08aa3515 +0x4828:  shl    $0x4,%eax
08aa3518 +0x482b:  mov    %eax,(%esp)
08aa351b +0x482e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa3520 +0x4833:  leave
08aa3521 +0x4834:  ret
08aa3522 +0x4835:  push   %ebp
08aa3523 +0x4836:  mov    %esp,%ebp
08aa3525 +0x4838:  push   %ebx
08aa3526 +0x4839:  sub    $0x14,%esp
08aa3529 +0x483c:  mov    0x8(%ebp),%ebx
08aa352c +0x483f:  mov    0xc(%ebp),%eax
08aa352f +0x4842:  mov    (%eax),%eax
08aa3531 +0x4844:  mov    %eax,0x4(%esp)
08aa3535 +0x4848:  mov    %ebx,(%esp)
08aa3538 +0x484b:  call   08aa3f30 <+0x5243>
08aa353d +0x4850:  mov    %ebx,%eax
08aa353f +0x4852:  add    $0x14,%esp
08aa3542 +0x4855:  pop    %ebx
08aa3543 +0x4856:  pop    %ebp
08aa3544 +0x4857:  ret    $0x4
08aa3547 +0x485a:  push   %ebp
08aa3548 +0x485b:  mov    %esp,%ebp
08aa354a +0x485d:  sub    $0x18,%esp
08aa354d +0x4860:  mov    0x10(%ebp),%eax
08aa3550 +0x4863:  mov    %eax,0x8(%esp)
08aa3554 +0x4867:  mov    0xc(%ebp),%eax
08aa3557 +0x486a:  mov    %eax,0x4(%esp)
08aa355b +0x486e:  mov    0x8(%ebp),%eax
08aa355e +0x4871:  mov    %eax,(%esp)
08aa3561 +0x4874:  call   08aa3f3d <+0x5250>
08aa3566 +0x4879:  leave
08aa3567 +0x487a:  ret
08aa3568 +0x487b:  push   %ebp
08aa3569 +0x487c:  mov    %esp,%ebp
08aa356b +0x487e:  mov    0x8(%ebp),%eax
08aa356e +0x4881:  mov    0x14(%eax),%eax
08aa3571 +0x4884:  pop    %ebp
08aa3572 +0x4885:  ret
08aa3573 +0x4886:  nop
08aa3574 +0x4887:  push   %ebp
08aa3575 +0x4888:  mov    %esp,%ebp
08aa3577 +0x488a:  push   %esi
08aa3578 +0x488b:  push   %ebx
08aa3579 +0x488c:  sub    $0x20,%esp
08aa357c +0x488f:  mov    0x8(%ebp),%esi
08aa357f +0x4892:  cmpl   $0x0,0x10(%ebp)
08aa3583 +0x4896:  jne    08aa35cb <+0x48de>
08aa3585 +0x4898:  mov    0xc(%ebp),%eax
08aa3588 +0x489b:  mov    %eax,(%esp)
08aa358b +0x489e:  call   08aa19f2 <+0x2d05>
08aa3590 +0x48a3:  cmp    0x14(%ebp),%eax
08aa3593 +0x48a6:  je     08aa35cb <+0x48de>
08aa3595 +0x48a8:  mov    0x14(%ebp),%eax
08aa3598 +0x48ab:  mov    %eax,(%esp)
08aa359b +0x48ae:  call   08aa1dc4 <+0x30d7>
08aa35a0 +0x48b3:  mov    %eax,%ebx
08aa35a2 +0x48b5:  mov    0x18(%ebp),%eax
08aa35a5 +0x48b8:  mov    %eax,0x4(%esp)
08aa35a9 +0x48bc:  lea    -0xe(%ebp),%eax
08aa35ac +0x48bf:  mov    %eax,(%esp)
08aa35af +0x48c2:  call   08aa345e <+0x4771>
08aa35b4 +0x48c7:  mov    0xc(%ebp),%edx
08aa35b7 +0x48ca:  mov    %ebx,0x8(%esp)
08aa35bb +0x48ce:  mov    %eax,0x4(%esp)
08aa35bf +0x48d2:  mov    %edx,(%esp)
08aa35c2 +0x48d5:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa35c7 +0x48da:  test   %al,%al
08aa35c9 +0x48dc:  je     08aa35d2 <+0x48e5>
08aa35cb +0x48de:  mov    $0x1,%eax
08aa35d0 +0x48e3:  jmp    08aa35d7 <+0x48ea>
08aa35d2 +0x48e5:  mov    $0x0,%eax
08aa35d7 +0x48ea:  mov    %al,-0xd(%ebp)
08aa35da +0x48ed:  mov    0x18(%ebp),%eax
08aa35dd +0x48f0:  mov    %eax,0x4(%esp)
08aa35e1 +0x48f4:  mov    0xc(%ebp),%eax
08aa35e4 +0x48f7:  mov    %eax,(%esp)
08aa35e7 +0x48fa:  call   08aa3f5e <+0x5271>
08aa35ec +0x48ff:  mov    %eax,-0xc(%ebp)
08aa35ef +0x4902:  mov    0xc(%ebp),%eax
08aa35f2 +0x4905:  lea    0x4(%eax),%ecx
08aa35f5 +0x4908:  mov    -0xc(%ebp),%edx
08aa35f8 +0x490b:  movzbl -0xd(%ebp),%eax
08aa35fc +0x490f:  mov    %ecx,0xc(%esp)
08aa3600 +0x4913:  mov    0x14(%ebp),%ecx
08aa3603 +0x4916:  mov    %ecx,0x8(%esp)
08aa3607 +0x491a:  mov    %edx,0x4(%esp)
08aa360b +0x491e:  mov    %eax,(%esp)
08aa360e +0x4921:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08aa3613 +0x4926:  mov    0xc(%ebp),%eax
08aa3616 +0x4929:  mov    0x14(%eax),%eax
08aa3619 +0x492c:  lea    0x1(%eax),%edx
08aa361c +0x492f:  mov    0xc(%ebp),%eax
08aa361f +0x4932:  mov    %edx,0x14(%eax)
08aa3622 +0x4935:  mov    -0xc(%ebp),%eax
08aa3625 +0x4938:  mov    %eax,0x4(%esp)
08aa3629 +0x493c:  mov    %esi,(%esp)
08aa362c +0x493f:  call   08aa198e <+0x2ca1>
08aa3631 +0x4944:  mov    %esi,%eax
08aa3633 +0x4946:  add    $0x20,%esp
08aa3636 +0x4949:  pop    %ebx
08aa3637 +0x494a:  pop    %esi
08aa3638 +0x494b:  pop    %ebp
08aa3639 +0x494c:  ret    $0x4
08aa363c +0x494f:  push   %ebp
08aa363d +0x4950:  mov    %esp,%ebp
08aa363f +0x4952:  push   %esi
08aa3640 +0x4953:  push   %ebx
08aa3641 +0x4954:  sub    $0x50,%esp
08aa3644 +0x4957:  mov    0x8(%ebp),%ebx
08aa3647 +0x495a:  mov    0xc(%ebp),%eax
08aa364a +0x495d:  mov    %eax,(%esp)
08aa364d +0x4960:  call   08a9fb8a <+0xe9d>
08aa3652 +0x4965:  mov    %eax,-0x14(%ebp)
08aa3655 +0x4968:  mov    0xc(%ebp),%eax
08aa3658 +0x496b:  mov    %eax,(%esp)
08aa365b +0x496e:  call   08aa19f2 <+0x2d05>
08aa3660 +0x4973:  mov    %eax,-0x10(%ebp)
08aa3663 +0x4976:  movb   $0x1,-0x9(%ebp)
08aa3667 +0x497a:  jmp    08aa36c5 <+0x49d8>
08aa3669 +0x497c:  mov    -0x14(%ebp),%eax
08aa366c +0x497f:  mov    %eax,-0x10(%ebp)
08aa366f +0x4982:  mov    -0x14(%ebp),%eax
08aa3672 +0x4985:  mov    %eax,(%esp)
08aa3675 +0x4988:  call   08aa3431 <+0x4744>
08aa367a +0x498d:  mov    %eax,%esi
08aa367c +0x498f:  mov    0x10(%ebp),%eax
08aa367f +0x4992:  mov    %eax,0x4(%esp)
08aa3683 +0x4996:  lea    -0x2d(%ebp),%eax
08aa3686 +0x4999:  mov    %eax,(%esp)
08aa3689 +0x499c:  call   08aa345e <+0x4771>
08aa368e +0x49a1:  mov    0xc(%ebp),%edx
08aa3691 +0x49a4:  mov    %esi,0x8(%esp)
08aa3695 +0x49a8:  mov    %eax,0x4(%esp)
08aa3699 +0x49ac:  mov    %edx,(%esp)
08aa369c +0x49af:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa36a1 +0x49b4:  mov    %al,-0x9(%ebp)
08aa36a4 +0x49b7:  cmpb   $0x0,-0x9(%ebp)
08aa36a8 +0x49bb:  je     08aa36b7 <+0x49ca>
08aa36aa +0x49bd:  mov    -0x14(%ebp),%eax
08aa36ad +0x49c0:  mov    %eax,(%esp)
08aa36b0 +0x49c3:  call   08aa18c8 <+0x2bdb>
08aa36b5 +0x49c8:  jmp    08aa36c2 <+0x49d5>
08aa36b7 +0x49ca:  mov    -0x14(%ebp),%eax
08aa36ba +0x49cd:  mov    %eax,(%esp)
08aa36bd +0x49d0:  call   08aa18bd <+0x2bd0>
08aa36c2 +0x49d5:  mov    %eax,-0x14(%ebp)
08aa36c5 +0x49d8:  cmpl   $0x0,-0x14(%ebp)
08aa36c9 +0x49dc:  setne  %al
08aa36cc +0x49df:  test   %al,%al
08aa36ce +0x49e1:  jne    08aa3669 <+0x497c>
08aa36d0 +0x49e3:  mov    -0x10(%ebp),%eax
08aa36d3 +0x49e6:  mov    %eax,0x4(%esp)
08aa36d7 +0x49ea:  lea    -0x34(%ebp),%eax
08aa36da +0x49ed:  mov    %eax,(%esp)
08aa36dd +0x49f0:  call   08aa198e <+0x2ca1>
08aa36e2 +0x49f5:  cmpb   $0x0,-0x9(%ebp)
08aa36e6 +0x49f9:  je     08aa3767 <+0x4a7a>
08aa36e8 +0x49fb:  lea    -0x2c(%ebp),%eax
08aa36eb +0x49fe:  mov    0xc(%ebp),%edx
08aa36ee +0x4a01:  mov    %edx,0x4(%esp)
08aa36f2 +0x4a05:  mov    %eax,(%esp)
08aa36f5 +0x4a08:  call   08a9fc84 <+0xf97>
08aa36fa +0x4a0d:  sub    $0x4,%esp
08aa36fd +0x4a10:  lea    -0x2c(%ebp),%eax
08aa3700 +0x4a13:  mov    %eax,0x4(%esp)
08aa3704 +0x4a17:  lea    -0x34(%ebp),%eax
08aa3707 +0x4a1a:  mov    %eax,(%esp)
08aa370a +0x4a1d:  call   08a9f20c <+0x51f>
08aa370f +0x4a22:  test   %al,%al
08aa3711 +0x4a24:  je     08aa375c <+0x4a6f>
08aa3713 +0x4a26:  movb   $0x1,-0x25(%ebp)
08aa3717 +0x4a2a:  mov    -0x10(%ebp),%ecx
08aa371a +0x4a2d:  mov    -0x14(%ebp),%edx
08aa371d +0x4a30:  lea    -0x24(%ebp),%eax
08aa3720 +0x4a33:  mov    0x10(%ebp),%esi
08aa3723 +0x4a36:  mov    %esi,0x10(%esp)
08aa3727 +0x4a3a:  mov    %ecx,0xc(%esp)
08aa372b +0x4a3e:  mov    %edx,0x8(%esp)
08aa372f +0x4a42:  mov    0xc(%ebp),%edx
08aa3732 +0x4a45:  mov    %edx,0x4(%esp)
08aa3736 +0x4a49:  mov    %eax,(%esp)
08aa3739 +0x4a4c:  call   08aa3574 <+0x4887>
08aa373e +0x4a51:  sub    $0x4,%esp
08aa3741 +0x4a54:  lea    -0x25(%ebp),%eax
08aa3744 +0x4a57:  mov    %eax,0x8(%esp)
08aa3748 +0x4a5b:  lea    -0x24(%ebp),%eax
08aa374b +0x4a5e:  mov    %eax,0x4(%esp)
08aa374f +0x4a62:  mov    %ebx,(%esp)
08aa3752 +0x4a65:  call   08aa3fe0 <+0x52f3>
08aa3757 +0x4a6a:  jmp    08aa37fd <+0x4b10>
08aa375c +0x4a6f:  lea    -0x34(%ebp),%eax
08aa375f +0x4a72:  mov    %eax,(%esp)
08aa3762 +0x4a75:  call   08aa400e <+0x5321>
08aa3767 +0x4a7a:  mov    0x10(%ebp),%eax
08aa376a +0x4a7d:  mov    %eax,0x4(%esp)
08aa376e +0x4a81:  lea    -0x1e(%ebp),%eax
08aa3771 +0x4a84:  mov    %eax,(%esp)
08aa3774 +0x4a87:  call   08aa345e <+0x4771>
08aa3779 +0x4a8c:  mov    %eax,%esi
08aa377b +0x4a8e:  mov    -0x34(%ebp),%eax
08aa377e +0x4a91:  mov    %eax,(%esp)
08aa3781 +0x4a94:  call   08aa1dc4 <+0x30d7>
08aa3786 +0x4a99:  mov    0xc(%ebp),%edx
08aa3789 +0x4a9c:  mov    %esi,0x8(%esp)
08aa378d +0x4aa0:  mov    %eax,0x4(%esp)
08aa3791 +0x4aa4:  mov    %edx,(%esp)
08aa3794 +0x4aa7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08aa3799 +0x4aac:  test   %al,%al
08aa379b +0x4aae:  je     08aa37e3 <+0x4af6>
08aa379d +0x4ab0:  movb   $0x1,-0x1d(%ebp)
08aa37a1 +0x4ab4:  mov    -0x10(%ebp),%ecx
08aa37a4 +0x4ab7:  mov    -0x14(%ebp),%edx
08aa37a7 +0x4aba:  lea    -0x1c(%ebp),%eax
08aa37aa +0x4abd:  mov    0x10(%ebp),%esi
08aa37ad +0x4ac0:  mov    %esi,0x10(%esp)
08aa37b1 +0x4ac4:  mov    %ecx,0xc(%esp)
08aa37b5 +0x4ac8:  mov    %edx,0x8(%esp)
08aa37b9 +0x4acc:  mov    0xc(%ebp),%edx
08aa37bc +0x4acf:  mov    %edx,0x4(%esp)
08aa37c0 +0x4ad3:  mov    %eax,(%esp)
08aa37c3 +0x4ad6:  call   08aa3574 <+0x4887>
08aa37c8 +0x4adb:  sub    $0x4,%esp
08aa37cb +0x4ade:  lea    -0x1d(%ebp),%eax
08aa37ce +0x4ae1:  mov    %eax,0x8(%esp)
08aa37d2 +0x4ae5:  lea    -0x1c(%ebp),%eax
08aa37d5 +0x4ae8:  mov    %eax,0x4(%esp)
08aa37d9 +0x4aec:  mov    %ebx,(%esp)
08aa37dc +0x4aef:  call   08aa3fe0 <+0x52f3>
08aa37e1 +0x4af4:  jmp    08aa37fd <+0x4b10>
08aa37e3 +0x4af6:  movb   $0x0,-0x15(%ebp)
08aa37e7 +0x4afa:  lea    -0x15(%ebp),%eax
08aa37ea +0x4afd:  mov    %eax,0x8(%esp)
08aa37ee +0x4b01:  lea    -0x34(%ebp),%eax
08aa37f1 +0x4b04:  mov    %eax,0x4(%esp)
08aa37f5 +0x4b08:  mov    %ebx,(%esp)
08aa37f8 +0x4b0b:  call   08aa402c <+0x533f>
08aa37fd +0x4b10:  mov    %ebx,%eax
08aa37ff +0x4b12:  lea    -0x8(%ebp),%esp
08aa3802 +0x4b15:  add    $0x0,%esp
08aa3805 +0x4b18:  pop    %ebx
08aa3806 +0x4b19:  pop    %esi
08aa3807 +0x4b1a:  pop    %ebp
08aa3808 +0x4b1b:  ret    $0x4
08aa380b +0x4b1e:  nop
08aa380c +0x4b1f:  push   %ebp
08aa380d +0x4b20:  mov    %esp,%ebp
08aa380f +0x4b22:  sub    $0x18,%esp
08aa3812 +0x4b25:  mov    0x8(%ebp),%eax
08aa3815 +0x4b28:  mov    (%eax),%eax
08aa3817 +0x4b2a:  mov    %eax,(%esp)
08aa381a +0x4b2d:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
08aa381f +0x4b32:  mov    0x8(%ebp),%edx
08aa3822 +0x4b35:  mov    %eax,(%edx)
08aa3824 +0x4b37:  mov    0x8(%ebp),%eax
08aa3827 +0x4b3a:  leave
08aa3828 +0x4b3b:  ret
08aa3829 +0x4b3c:  push   %ebp
08aa382a +0x4b3d:  mov    %esp,%ebp
08aa382c +0x4b3f:  mov    0x8(%ebp),%eax
08aa382f +0x4b42:  mov    0xc(%eax),%eax
08aa3832 +0x4b45:  pop    %ebp
08aa3833 +0x4b46:  ret
08aa3834 +0x4b47:  push   %ebp
08aa3835 +0x4b48:  mov    %esp,%ebp
08aa3837 +0x4b4a:  sub    $0x18,%esp
08aa383a +0x4b4d:  mov    0x8(%ebp),%eax
08aa383d +0x4b50:  mov    (%eax),%eax
08aa383f +0x4b52:  mov    %eax,(%esp)
08aa3842 +0x4b55:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08aa3847 +0x4b5a:  mov    0x8(%ebp),%edx
08aa384a +0x4b5d:  mov    %eax,(%edx)
08aa384c +0x4b5f:  mov    0x8(%ebp),%eax
08aa384f +0x4b62:  leave
08aa3850 +0x4b63:  ret
08aa3851 +0x4b64:  push   %ebp
08aa3852 +0x4b65:  mov    %esp,%ebp
08aa3854 +0x4b67:  mov    0x8(%ebp),%eax
08aa3857 +0x4b6a:  pop    %ebp
08aa3858 +0x4b6b:  ret
08aa3859 +0x4b6c:  push   %ebp
08aa385a +0x4b6d:  mov    %esp,%ebp
08aa385c +0x4b6f:  mov    0x8(%ebp),%eax
08aa385f +0x4b72:  pop    %ebp
08aa3860 +0x4b73:  ret
08aa3861 +0x4b74:  push   %ebp
08aa3862 +0x4b75:  mov    %esp,%ebp
08aa3864 +0x4b77:  push   %esi
08aa3865 +0x4b78:  push   %ebx
08aa3866 +0x4b79:  sub    $0x10,%esp
08aa3869 +0x4b7c:  mov    0x10(%ebp),%eax
08aa386c +0x4b7f:  mov    %eax,(%esp)
08aa386f +0x4b82:  call   08aa405a <+0x536d>
08aa3874 +0x4b87:  mov    %eax,%esi
08aa3876 +0x4b89:  mov    0xc(%ebp),%eax
08aa3879 +0x4b8c:  mov    %eax,(%esp)
08aa387c +0x4b8f:  call   08aa405a <+0x536d>
08aa3881 +0x4b94:  mov    %eax,%ebx
08aa3883 +0x4b96:  mov    0x8(%ebp),%eax
08aa3886 +0x4b99:  mov    %eax,(%esp)
08aa3889 +0x4b9c:  call   08aa405a <+0x536d>
08aa388e +0x4ba1:  mov    %esi,0x8(%esp)
08aa3892 +0x4ba5:  mov    %ebx,0x4(%esp)
08aa3896 +0x4ba9:  mov    %eax,(%esp)
08aa3899 +0x4bac:  call   08aa4062 <+0x5375>
08aa389e +0x4bb1:  add    $0x10,%esp
08aa38a1 +0x4bb4:  pop    %ebx
08aa38a2 +0x4bb5:  pop    %esi
08aa38a3 +0x4bb6:  pop    %ebp
08aa38a4 +0x4bb7:  ret
08aa38a5 +0x4bb8:  nop
08aa38a6 +0x4bb9:  push   %ebp
08aa38a7 +0x4bba:  mov    %esp,%ebp
08aa38a9 +0x4bbc:  sub    $0x18,%esp
08aa38ac +0x4bbf:  mov    0x8(%ebp),%eax
08aa38af +0x4bc2:  mov    %eax,(%esp)
08aa38b2 +0x4bc5:  call   08aa4088 <+0x539b>
08aa38b7 +0x4bca:  mov    %eax,(%esp)
08aa38ba +0x4bcd:  call   08aa4090 <+0x53a3>
08aa38bf +0x4bd2:  leave
08aa38c0 +0x4bd3:  ret
08aa38c1 +0x4bd4:  nop
08aa38c2 +0x4bd5:  push   %ebp
08aa38c3 +0x4bd6:  mov    %esp,%ebp
08aa38c5 +0x4bd8:  sub    $0x18,%esp
08aa38c8 +0x4bdb:  mov    0x8(%ebp),%eax
08aa38cb +0x4bde:  mov    %eax,(%esp)
08aa38ce +0x4be1:  call   08aa4090 <+0x53a3>
08aa38d3 +0x4be6:  cmp    0xc(%ebp),%eax
08aa38d6 +0x4be9:  setb   %al
08aa38d9 +0x4bec:  movzbl %al,%eax
08aa38dc +0x4bef:  test   %eax,%eax
08aa38de +0x4bf1:  setne  %al
08aa38e1 +0x4bf4:  test   %al,%al
08aa38e3 +0x4bf6:  je     08aa38ea <+0x4bfd>
08aa38e5 +0x4bf8:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa38ea +0x4bfd:  mov    0xc(%ebp),%edx
08aa38ed +0x4c00:  mov    %edx,%eax
08aa38ef +0x4c02:  add    %eax,%eax
08aa38f1 +0x4c04:  add    %edx,%eax
08aa38f3 +0x4c06:  shl    $0x2,%eax
08aa38f6 +0x4c09:  mov    %eax,(%esp)
08aa38f9 +0x4c0c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa38fe +0x4c11:  leave
08aa38ff +0x4c12:  ret
08aa3900 +0x4c13:  push   %ebp
08aa3901 +0x4c14:  mov    %esp,%ebp
08aa3903 +0x4c16:  push   %ebx
08aa3904 +0x4c17:  sub    $0x14,%esp
08aa3907 +0x4c1a:  mov    0x8(%ebp),%ebx
08aa390a +0x4c1d:  mov    0xc(%ebp),%eax
08aa390d +0x4c20:  mov    (%eax),%eax
08aa390f +0x4c22:  mov    %eax,0x4(%esp)
08aa3913 +0x4c26:  mov    %ebx,(%esp)
08aa3916 +0x4c29:  call   08aa409a <+0x53ad>
08aa391b +0x4c2e:  mov    %ebx,%eax
08aa391d +0x4c30:  add    $0x14,%esp
08aa3920 +0x4c33:  pop    %ebx
08aa3921 +0x4c34:  pop    %ebp
08aa3922 +0x4c35:  ret    $0x4
08aa3925 +0x4c38:  push   %ebp
08aa3926 +0x4c39:  mov    %esp,%ebp
08aa3928 +0x4c3b:  sub    $0x18,%esp
08aa392b +0x4c3e:  mov    0x10(%ebp),%eax
08aa392e +0x4c41:  mov    %eax,0x8(%esp)
08aa3932 +0x4c45:  mov    0xc(%ebp),%eax
08aa3935 +0x4c48:  mov    %eax,0x4(%esp)
08aa3939 +0x4c4c:  mov    0x8(%ebp),%eax
08aa393c +0x4c4f:  mov    %eax,(%esp)
08aa393f +0x4c52:  call   08aa40a7 <+0x53ba>
08aa3944 +0x4c57:  leave
08aa3945 +0x4c58:  ret
08aa3946 +0x4c59:  push   %ebp
08aa3947 +0x4c5a:  mov    %esp,%ebp
08aa3949 +0x4c5c:  mov    0x8(%ebp),%eax
08aa394c +0x4c5f:  pop    %ebp
08aa394d +0x4c60:  ret
08aa394e +0x4c61:  push   %ebp
08aa394f +0x4c62:  mov    %esp,%ebp
08aa3951 +0x4c64:  mov    0x8(%ebp),%eax
08aa3954 +0x4c67:  pop    %ebp
08aa3955 +0x4c68:  ret
08aa3956 +0x4c69:  push   %ebp
08aa3957 +0x4c6a:  mov    %esp,%ebp
08aa3959 +0x4c6c:  push   %esi
08aa395a +0x4c6d:  push   %ebx
08aa395b +0x4c6e:  sub    $0x10,%esp
08aa395e +0x4c71:  mov    0x10(%ebp),%eax
08aa3961 +0x4c74:  mov    %eax,(%esp)
08aa3964 +0x4c77:  call   08aa40c8 <+0x53db>
08aa3969 +0x4c7c:  mov    %eax,%esi
08aa396b +0x4c7e:  mov    0xc(%ebp),%eax
08aa396e +0x4c81:  mov    %eax,(%esp)
08aa3971 +0x4c84:  call   08aa40c8 <+0x53db>
08aa3976 +0x4c89:  mov    %eax,%ebx
08aa3978 +0x4c8b:  mov    0x8(%ebp),%eax
08aa397b +0x4c8e:  mov    %eax,(%esp)
08aa397e +0x4c91:  call   08aa40c8 <+0x53db>
08aa3983 +0x4c96:  mov    %esi,0x8(%esp)
08aa3987 +0x4c9a:  mov    %ebx,0x4(%esp)
08aa398b +0x4c9e:  mov    %eax,(%esp)
08aa398e +0x4ca1:  call   08aa40d0 <+0x53e3>
08aa3993 +0x4ca6:  add    $0x10,%esp
08aa3996 +0x4ca9:  pop    %ebx
08aa3997 +0x4caa:  pop    %esi
08aa3998 +0x4cab:  pop    %ebp
08aa3999 +0x4cac:  ret
08aa399a +0x4cad:  push   %ebp
08aa399b +0x4cae:  mov    %esp,%ebp
08aa399d +0x4cb0:  mov    0x8(%ebp),%eax
08aa39a0 +0x4cb3:  mov    0x4(%eax),%eax
08aa39a3 +0x4cb6:  mov    %eax,%edx
08aa39a5 +0x4cb8:  mov    0x8(%ebp),%eax
08aa39a8 +0x4cbb:  mov    (%eax),%eax
08aa39aa +0x4cbd:  mov    %edx,%ecx
08aa39ac +0x4cbf:  sub    %eax,%ecx
08aa39ae +0x4cc1:  mov    %ecx,%eax
08aa39b0 +0x4cc3:  sar    $0x4,%eax
08aa39b3 +0x4cc6:  pop    %ebp
08aa39b4 +0x4cc7:  ret
08aa39b5 +0x4cc8:  nop
08aa39b6 +0x4cc9:  push   %ebp
08aa39b7 +0x4cca:  mov    %esp,%ebp
08aa39b9 +0x4ccc:  sub    $0x18,%esp
08aa39bc +0x4ccf:  mov    0x8(%ebp),%eax
08aa39bf +0x4cd2:  mov    %eax,(%esp)
08aa39c2 +0x4cd5:  call   08aa40f6 <+0x5409>
08aa39c7 +0x4cda:  mov    %eax,(%esp)
08aa39ca +0x4cdd:  call   08aa40fe <+0x5411>
08aa39cf +0x4ce2:  leave
08aa39d0 +0x4ce3:  ret
08aa39d1 +0x4ce4:  nop
08aa39d2 +0x4ce5:  push   %ebp
08aa39d3 +0x4ce6:  mov    %esp,%ebp
08aa39d5 +0x4ce8:  sub    $0x18,%esp
08aa39d8 +0x4ceb:  mov    0x8(%ebp),%eax
08aa39db +0x4cee:  mov    %eax,(%esp)
08aa39de +0x4cf1:  call   08aa40fe <+0x5411>
08aa39e3 +0x4cf6:  cmp    0xc(%ebp),%eax
08aa39e6 +0x4cf9:  setb   %al
08aa39e9 +0x4cfc:  movzbl %al,%eax
08aa39ec +0x4cff:  test   %eax,%eax
08aa39ee +0x4d01:  setne  %al
08aa39f1 +0x4d04:  test   %al,%al
08aa39f3 +0x4d06:  je     08aa39fa <+0x4d0d>
08aa39f5 +0x4d08:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa39fa +0x4d0d:  mov    0xc(%ebp),%eax
08aa39fd +0x4d10:  shl    $0x4,%eax
08aa3a00 +0x4d13:  mov    %eax,(%esp)
08aa3a03 +0x4d16:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa3a08 +0x4d1b:  leave
08aa3a09 +0x4d1c:  ret
08aa3a0a +0x4d1d:  push   %ebp
08aa3a0b +0x4d1e:  mov    %esp,%ebp
08aa3a0d +0x4d20:  push   %ebx
08aa3a0e +0x4d21:  sub    $0x14,%esp
08aa3a11 +0x4d24:  mov    0x8(%ebp),%ebx
08aa3a14 +0x4d27:  mov    0xc(%ebp),%eax
08aa3a17 +0x4d2a:  mov    (%eax),%eax
08aa3a19 +0x4d2c:  mov    %eax,0x4(%esp)
08aa3a1d +0x4d30:  mov    %ebx,(%esp)
08aa3a20 +0x4d33:  call   08aa4108 <+0x541b>
08aa3a25 +0x4d38:  mov    %ebx,%eax
08aa3a27 +0x4d3a:  add    $0x14,%esp
08aa3a2a +0x4d3d:  pop    %ebx
08aa3a2b +0x4d3e:  pop    %ebp
08aa3a2c +0x4d3f:  ret    $0x4
08aa3a2f +0x4d42:  push   %ebp
08aa3a30 +0x4d43:  mov    %esp,%ebp
08aa3a32 +0x4d45:  sub    $0x18,%esp
08aa3a35 +0x4d48:  mov    0x10(%ebp),%eax
08aa3a38 +0x4d4b:  mov    %eax,0x8(%esp)
08aa3a3c +0x4d4f:  mov    0xc(%ebp),%eax
08aa3a3f +0x4d52:  mov    %eax,0x4(%esp)
08aa3a43 +0x4d56:  mov    0x8(%ebp),%eax
08aa3a46 +0x4d59:  mov    %eax,(%esp)
08aa3a49 +0x4d5c:  call   08aa4115 <+0x5428>
08aa3a4e +0x4d61:  leave
08aa3a4f +0x4d62:  ret
08aa3a50 +0x4d63:  push   %ebp
08aa3a51 +0x4d64:  mov    %esp,%ebp
08aa3a53 +0x4d66:  mov    0x8(%ebp),%eax
08aa3a56 +0x4d69:  pop    %ebp
08aa3a57 +0x4d6a:  ret
08aa3a58 +0x4d6b:  push   %ebp
08aa3a59 +0x4d6c:  mov    %esp,%ebp
08aa3a5b +0x4d6e:  mov    0x8(%ebp),%eax
08aa3a5e +0x4d71:  pop    %ebp
08aa3a5f +0x4d72:  ret
08aa3a60 +0x4d73:  push   %ebp
08aa3a61 +0x4d74:  mov    %esp,%ebp
08aa3a63 +0x4d76:  push   %esi
08aa3a64 +0x4d77:  push   %ebx
08aa3a65 +0x4d78:  sub    $0x10,%esp
08aa3a68 +0x4d7b:  mov    0x10(%ebp),%eax
08aa3a6b +0x4d7e:  mov    %eax,(%esp)
08aa3a6e +0x4d81:  call   08aa4136 <+0x5449>
08aa3a73 +0x4d86:  mov    %eax,%esi
08aa3a75 +0x4d88:  mov    0xc(%ebp),%eax
08aa3a78 +0x4d8b:  mov    %eax,(%esp)
08aa3a7b +0x4d8e:  call   08aa4136 <+0x5449>
08aa3a80 +0x4d93:  mov    %eax,%ebx
08aa3a82 +0x4d95:  mov    0x8(%ebp),%eax
08aa3a85 +0x4d98:  mov    %eax,(%esp)
08aa3a88 +0x4d9b:  call   08aa4136 <+0x5449>
08aa3a8d +0x4da0:  mov    %esi,0x8(%esp)
08aa3a91 +0x4da4:  mov    %ebx,0x4(%esp)
08aa3a95 +0x4da8:  mov    %eax,(%esp)
08aa3a98 +0x4dab:  call   08aa413e <+0x5451>
08aa3a9d +0x4db0:  add    $0x10,%esp
08aa3aa0 +0x4db3:  pop    %ebx
08aa3aa1 +0x4db4:  pop    %esi
08aa3aa2 +0x4db5:  pop    %ebp
08aa3aa3 +0x4db6:  ret
08aa3aa4 +0x4db7:  push   %ebp
08aa3aa5 +0x4db8:  mov    %esp,%ebp
08aa3aa7 +0x4dba:  mov    0x8(%ebp),%eax
08aa3aaa +0x4dbd:  mov    0x4(%eax),%eax
08aa3aad +0x4dc0:  mov    %eax,%edx
08aa3aaf +0x4dc2:  mov    0x8(%ebp),%eax
08aa3ab2 +0x4dc5:  mov    (%eax),%eax
08aa3ab4 +0x4dc7:  mov    %edx,%ecx
08aa3ab6 +0x4dc9:  sub    %eax,%ecx
08aa3ab8 +0x4dcb:  mov    %ecx,%eax
08aa3aba +0x4dcd:  sar    $0x2,%eax
08aa3abd +0x4dd0:  imul   $0xcccccccd,%eax,%eax
08aa3ac3 +0x4dd6:  pop    %ebp
08aa3ac4 +0x4dd7:  ret
08aa3ac5 +0x4dd8:  nop
08aa3ac6 +0x4dd9:  push   %ebp
08aa3ac7 +0x4dda:  mov    %esp,%ebp
08aa3ac9 +0x4ddc:  sub    $0x18,%esp
08aa3acc +0x4ddf:  mov    0x8(%ebp),%eax
08aa3acf +0x4de2:  mov    %eax,(%esp)
08aa3ad2 +0x4de5:  call   08aa4164 <+0x5477>
08aa3ad7 +0x4dea:  mov    %eax,(%esp)
08aa3ada +0x4ded:  call   08aa416c <+0x547f>
08aa3adf +0x4df2:  leave
08aa3ae0 +0x4df3:  ret
08aa3ae1 +0x4df4:  nop
08aa3ae2 +0x4df5:  push   %ebp
08aa3ae3 +0x4df6:  mov    %esp,%ebp
08aa3ae5 +0x4df8:  sub    $0x18,%esp
08aa3ae8 +0x4dfb:  mov    0x8(%ebp),%eax
08aa3aeb +0x4dfe:  mov    %eax,(%esp)
08aa3aee +0x4e01:  call   08aa416c <+0x547f>
08aa3af3 +0x4e06:  cmp    0xc(%ebp),%eax
08aa3af6 +0x4e09:  setb   %al
08aa3af9 +0x4e0c:  movzbl %al,%eax
08aa3afc +0x4e0f:  test   %eax,%eax
08aa3afe +0x4e11:  setne  %al
08aa3b01 +0x4e14:  test   %al,%al
08aa3b03 +0x4e16:  je     08aa3b0a <+0x4e1d>
08aa3b05 +0x4e18:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa3b0a +0x4e1d:  mov    0xc(%ebp),%edx
08aa3b0d +0x4e20:  mov    %edx,%eax
08aa3b0f +0x4e22:  shl    $0x2,%eax
08aa3b12 +0x4e25:  add    %edx,%eax
08aa3b14 +0x4e27:  shl    $0x2,%eax
08aa3b17 +0x4e2a:  mov    %eax,(%esp)
08aa3b1a +0x4e2d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa3b1f +0x4e32:  leave
08aa3b20 +0x4e33:  ret
08aa3b21 +0x4e34:  push   %ebp
08aa3b22 +0x4e35:  mov    %esp,%ebp
08aa3b24 +0x4e37:  push   %ebx
08aa3b25 +0x4e38:  sub    $0x14,%esp
08aa3b28 +0x4e3b:  mov    0x8(%ebp),%ebx
08aa3b2b +0x4e3e:  mov    0xc(%ebp),%eax
08aa3b2e +0x4e41:  mov    (%eax),%eax
08aa3b30 +0x4e43:  mov    %eax,0x4(%esp)
08aa3b34 +0x4e47:  mov    %ebx,(%esp)
08aa3b37 +0x4e4a:  call   08aa4176 <+0x5489>
08aa3b3c +0x4e4f:  mov    %ebx,%eax
08aa3b3e +0x4e51:  add    $0x14,%esp
08aa3b41 +0x4e54:  pop    %ebx
08aa3b42 +0x4e55:  pop    %ebp
08aa3b43 +0x4e56:  ret    $0x4
08aa3b46 +0x4e59:  push   %ebp
08aa3b47 +0x4e5a:  mov    %esp,%ebp
08aa3b49 +0x4e5c:  sub    $0x18,%esp
08aa3b4c +0x4e5f:  mov    0x10(%ebp),%eax
08aa3b4f +0x4e62:  mov    %eax,0x8(%esp)
08aa3b53 +0x4e66:  mov    0xc(%ebp),%eax
08aa3b56 +0x4e69:  mov    %eax,0x4(%esp)
08aa3b5a +0x4e6d:  mov    0x8(%ebp),%eax
08aa3b5d +0x4e70:  mov    %eax,(%esp)
08aa3b60 +0x4e73:  call   08aa4183 <+0x5496>
08aa3b65 +0x4e78:  leave
08aa3b66 +0x4e79:  ret
08aa3b67 +0x4e7a:  push   %ebp
08aa3b68 +0x4e7b:  mov    %esp,%ebp
08aa3b6a +0x4e7d:  mov    0x8(%ebp),%eax
08aa3b6d +0x4e80:  pop    %ebp
08aa3b6e +0x4e81:  ret
08aa3b6f +0x4e82:  push   %ebp
08aa3b70 +0x4e83:  mov    %esp,%ebp
08aa3b72 +0x4e85:  mov    0x8(%ebp),%eax
08aa3b75 +0x4e88:  pop    %ebp
08aa3b76 +0x4e89:  ret
08aa3b77 +0x4e8a:  push   %ebp
08aa3b78 +0x4e8b:  mov    %esp,%ebp
08aa3b7a +0x4e8d:  push   %esi
08aa3b7b +0x4e8e:  push   %ebx
08aa3b7c +0x4e8f:  sub    $0x10,%esp
08aa3b7f +0x4e92:  mov    0x10(%ebp),%eax
08aa3b82 +0x4e95:  mov    %eax,(%esp)
08aa3b85 +0x4e98:  call   08aa41a4 <+0x54b7>
08aa3b8a +0x4e9d:  mov    %eax,%esi
08aa3b8c +0x4e9f:  mov    0xc(%ebp),%eax
08aa3b8f +0x4ea2:  mov    %eax,(%esp)
08aa3b92 +0x4ea5:  call   08aa41a4 <+0x54b7>
08aa3b97 +0x4eaa:  mov    %eax,%ebx
08aa3b99 +0x4eac:  mov    0x8(%ebp),%eax
08aa3b9c +0x4eaf:  mov    %eax,(%esp)
08aa3b9f +0x4eb2:  call   08aa41a4 <+0x54b7>
08aa3ba4 +0x4eb7:  mov    %esi,0x8(%esp)
08aa3ba8 +0x4ebb:  mov    %ebx,0x4(%esp)
08aa3bac +0x4ebf:  mov    %eax,(%esp)
08aa3baf +0x4ec2:  call   08aa41ac <+0x54bf>
08aa3bb4 +0x4ec7:  add    $0x10,%esp
08aa3bb7 +0x4eca:  pop    %ebx
08aa3bb8 +0x4ecb:  pop    %esi
08aa3bb9 +0x4ecc:  pop    %ebp
08aa3bba +0x4ecd:  ret
08aa3bbb +0x4ece:  nop
08aa3bbc +0x4ecf:  push   %ebp
08aa3bbd +0x4ed0:  mov    %esp,%ebp
08aa3bbf +0x4ed2:  mov    0x8(%ebp),%eax
08aa3bc2 +0x4ed5:  mov    0x4(%eax),%eax
08aa3bc5 +0x4ed8:  mov    %eax,%edx
08aa3bc7 +0x4eda:  mov    0x8(%ebp),%eax
08aa3bca +0x4edd:  mov    (%eax),%eax
08aa3bcc +0x4edf:  mov    %edx,%ecx
08aa3bce +0x4ee1:  sub    %eax,%ecx
08aa3bd0 +0x4ee3:  mov    %ecx,%eax
08aa3bd2 +0x4ee5:  sar    $0x4,%eax
08aa3bd5 +0x4ee8:  pop    %ebp
08aa3bd6 +0x4ee9:  ret
08aa3bd7 +0x4eea:  nop
08aa3bd8 +0x4eeb:  push   %ebp
08aa3bd9 +0x4eec:  mov    %esp,%ebp
08aa3bdb +0x4eee:  sub    $0x18,%esp
08aa3bde +0x4ef1:  mov    0x8(%ebp),%eax
08aa3be1 +0x4ef4:  mov    %eax,(%esp)
08aa3be4 +0x4ef7:  call   08aa41d2 <+0x54e5>
08aa3be9 +0x4efc:  mov    %eax,(%esp)
08aa3bec +0x4eff:  call   08aa41da <+0x54ed>
08aa3bf1 +0x4f04:  leave
08aa3bf2 +0x4f05:  ret
08aa3bf3 +0x4f06:  nop
08aa3bf4 +0x4f07:  push   %ebp
08aa3bf5 +0x4f08:  mov    %esp,%ebp
08aa3bf7 +0x4f0a:  sub    $0x18,%esp
08aa3bfa +0x4f0d:  mov    0x8(%ebp),%eax
08aa3bfd +0x4f10:  mov    %eax,(%esp)
08aa3c00 +0x4f13:  call   08aa41da <+0x54ed>
08aa3c05 +0x4f18:  cmp    0xc(%ebp),%eax
08aa3c08 +0x4f1b:  setb   %al
08aa3c0b +0x4f1e:  movzbl %al,%eax
08aa3c0e +0x4f21:  test   %eax,%eax
08aa3c10 +0x4f23:  setne  %al
08aa3c13 +0x4f26:  test   %al,%al
08aa3c15 +0x4f28:  je     08aa3c1c <+0x4f2f>
08aa3c17 +0x4f2a:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa3c1c +0x4f2f:  mov    0xc(%ebp),%eax
08aa3c1f +0x4f32:  shl    $0x4,%eax
08aa3c22 +0x4f35:  mov    %eax,(%esp)
08aa3c25 +0x4f38:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa3c2a +0x4f3d:  leave
08aa3c2b +0x4f3e:  ret
08aa3c2c +0x4f3f:  push   %ebp
08aa3c2d +0x4f40:  mov    %esp,%ebp
08aa3c2f +0x4f42:  push   %ebx
08aa3c30 +0x4f43:  sub    $0x14,%esp
08aa3c33 +0x4f46:  mov    0x8(%ebp),%ebx
08aa3c36 +0x4f49:  mov    0xc(%ebp),%eax
08aa3c39 +0x4f4c:  mov    (%eax),%eax
08aa3c3b +0x4f4e:  mov    %eax,0x4(%esp)
08aa3c3f +0x4f52:  mov    %ebx,(%esp)
08aa3c42 +0x4f55:  call   08aa41e4 <+0x54f7>
08aa3c47 +0x4f5a:  mov    %ebx,%eax
08aa3c49 +0x4f5c:  add    $0x14,%esp
08aa3c4c +0x4f5f:  pop    %ebx
08aa3c4d +0x4f60:  pop    %ebp
08aa3c4e +0x4f61:  ret    $0x4
08aa3c51 +0x4f64:  push   %ebp
08aa3c52 +0x4f65:  mov    %esp,%ebp
08aa3c54 +0x4f67:  sub    $0x18,%esp
08aa3c57 +0x4f6a:  mov    0x10(%ebp),%eax
08aa3c5a +0x4f6d:  mov    %eax,0x8(%esp)
08aa3c5e +0x4f71:  mov    0xc(%ebp),%eax
08aa3c61 +0x4f74:  mov    %eax,0x4(%esp)
08aa3c65 +0x4f78:  mov    0x8(%ebp),%eax
08aa3c68 +0x4f7b:  mov    %eax,(%esp)
08aa3c6b +0x4f7e:  call   08aa41f1 <+0x5504>
08aa3c70 +0x4f83:  leave
08aa3c71 +0x4f84:  ret
08aa3c72 +0x4f85:  push   %ebp
08aa3c73 +0x4f86:  mov    %esp,%ebp
08aa3c75 +0x4f88:  mov    0x8(%ebp),%eax
08aa3c78 +0x4f8b:  pop    %ebp
08aa3c79 +0x4f8c:  ret
08aa3c7a +0x4f8d:  push   %ebp
08aa3c7b +0x4f8e:  mov    %esp,%ebp
08aa3c7d +0x4f90:  mov    0x8(%ebp),%eax
08aa3c80 +0x4f93:  pop    %ebp
08aa3c81 +0x4f94:  ret
08aa3c82 +0x4f95:  push   %ebp
08aa3c83 +0x4f96:  mov    %esp,%ebp
08aa3c85 +0x4f98:  push   %esi
08aa3c86 +0x4f99:  push   %ebx
08aa3c87 +0x4f9a:  sub    $0x10,%esp
08aa3c8a +0x4f9d:  mov    0x10(%ebp),%eax
08aa3c8d +0x4fa0:  mov    %eax,(%esp)
08aa3c90 +0x4fa3:  call   08aa4212 <+0x5525>
08aa3c95 +0x4fa8:  mov    %eax,%esi
08aa3c97 +0x4faa:  mov    0xc(%ebp),%eax
08aa3c9a +0x4fad:  mov    %eax,(%esp)
08aa3c9d +0x4fb0:  call   08aa4212 <+0x5525>
08aa3ca2 +0x4fb5:  mov    %eax,%ebx
08aa3ca4 +0x4fb7:  mov    0x8(%ebp),%eax
08aa3ca7 +0x4fba:  mov    %eax,(%esp)
08aa3caa +0x4fbd:  call   08aa4212 <+0x5525>
08aa3caf +0x4fc2:  mov    %esi,0x8(%esp)
08aa3cb3 +0x4fc6:  mov    %ebx,0x4(%esp)
08aa3cb7 +0x4fca:  mov    %eax,(%esp)
08aa3cba +0x4fcd:  call   08aa421a <+0x552d>
08aa3cbf +0x4fd2:  add    $0x10,%esp
08aa3cc2 +0x4fd5:  pop    %ebx
08aa3cc3 +0x4fd6:  pop    %esi
08aa3cc4 +0x4fd7:  pop    %ebp
08aa3cc5 +0x4fd8:  ret
08aa3cc6 +0x4fd9:  push   %ebp
08aa3cc7 +0x4fda:  mov    %esp,%ebp
08aa3cc9 +0x4fdc:  mov    0x8(%ebp),%eax
08aa3ccc +0x4fdf:  mov    0x4(%eax),%eax
08aa3ccf +0x4fe2:  mov    %eax,%edx
08aa3cd1 +0x4fe4:  mov    0x8(%ebp),%eax
08aa3cd4 +0x4fe7:  mov    (%eax),%eax
08aa3cd6 +0x4fe9:  mov    %edx,%ecx
08aa3cd8 +0x4feb:  sub    %eax,%ecx
08aa3cda +0x4fed:  mov    %ecx,%eax
08aa3cdc +0x4fef:  sar    $0x4,%eax
08aa3cdf +0x4ff2:  pop    %ebp
08aa3ce0 +0x4ff3:  ret
08aa3ce1 +0x4ff4:  nop
08aa3ce2 +0x4ff5:  push   %ebp
08aa3ce3 +0x4ff6:  mov    %esp,%ebp
08aa3ce5 +0x4ff8:  sub    $0x18,%esp
08aa3ce8 +0x4ffb:  mov    0x8(%ebp),%eax
08aa3ceb +0x4ffe:  mov    %eax,(%esp)
08aa3cee +0x5001:  call   08aa4240 <+0x5553>
08aa3cf3 +0x5006:  mov    %eax,(%esp)
08aa3cf6 +0x5009:  call   08aa4248 <+0x555b>
08aa3cfb +0x500e:  leave
08aa3cfc +0x500f:  ret
08aa3cfd +0x5010:  nop
08aa3cfe +0x5011:  push   %ebp
08aa3cff +0x5012:  mov    %esp,%ebp
08aa3d01 +0x5014:  sub    $0x18,%esp
08aa3d04 +0x5017:  mov    0x8(%ebp),%eax
08aa3d07 +0x501a:  mov    %eax,(%esp)
08aa3d0a +0x501d:  call   08aa4248 <+0x555b>
08aa3d0f +0x5022:  cmp    0xc(%ebp),%eax
08aa3d12 +0x5025:  setb   %al
08aa3d15 +0x5028:  movzbl %al,%eax
08aa3d18 +0x502b:  test   %eax,%eax
08aa3d1a +0x502d:  setne  %al
08aa3d1d +0x5030:  test   %al,%al
08aa3d1f +0x5032:  je     08aa3d26 <+0x5039>
08aa3d21 +0x5034:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa3d26 +0x5039:  mov    0xc(%ebp),%eax
08aa3d29 +0x503c:  shl    $0x4,%eax
08aa3d2c +0x503f:  mov    %eax,(%esp)
08aa3d2f +0x5042:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa3d34 +0x5047:  leave
08aa3d35 +0x5048:  ret
08aa3d36 +0x5049:  push   %ebp
08aa3d37 +0x504a:  mov    %esp,%ebp
08aa3d39 +0x504c:  push   %ebx
08aa3d3a +0x504d:  sub    $0x14,%esp
08aa3d3d +0x5050:  mov    0x8(%ebp),%ebx
08aa3d40 +0x5053:  mov    0xc(%ebp),%eax
08aa3d43 +0x5056:  mov    (%eax),%eax
08aa3d45 +0x5058:  mov    %eax,0x4(%esp)
08aa3d49 +0x505c:  mov    %ebx,(%esp)
08aa3d4c +0x505f:  call   08aa4252 <+0x5565>
08aa3d51 +0x5064:  mov    %ebx,%eax
08aa3d53 +0x5066:  add    $0x14,%esp
08aa3d56 +0x5069:  pop    %ebx
08aa3d57 +0x506a:  pop    %ebp
08aa3d58 +0x506b:  ret    $0x4
08aa3d5b +0x506e:  push   %ebp
08aa3d5c +0x506f:  mov    %esp,%ebp
08aa3d5e +0x5071:  sub    $0x18,%esp
08aa3d61 +0x5074:  mov    0x10(%ebp),%eax
08aa3d64 +0x5077:  mov    %eax,0x8(%esp)
08aa3d68 +0x507b:  mov    0xc(%ebp),%eax
08aa3d6b +0x507e:  mov    %eax,0x4(%esp)
08aa3d6f +0x5082:  mov    0x8(%ebp),%eax
08aa3d72 +0x5085:  mov    %eax,(%esp)
08aa3d75 +0x5088:  call   08aa425f <+0x5572>
08aa3d7a +0x508d:  leave
08aa3d7b +0x508e:  ret
08aa3d7c +0x508f:  push   %ebp
08aa3d7d +0x5090:  mov    %esp,%ebp
08aa3d7f +0x5092:  pop    %ebp
08aa3d80 +0x5093:  ret
08aa3d81 +0x5094:  nop
08aa3d82 +0x5095:  push   %ebp
08aa3d83 +0x5096:  mov    %esp,%ebp
08aa3d85 +0x5098:  pop    %ebp
08aa3d86 +0x5099:  ret
08aa3d87 +0x509a:  nop
08aa3d88 +0x509b:  push   %ebp
08aa3d89 +0x509c:  mov    %esp,%ebp
08aa3d8b +0x509e:  pop    %ebp
08aa3d8c +0x509f:  ret
08aa3d8d +0x50a0:  push   %ebp
08aa3d8e +0x50a1:  mov    %esp,%ebp
08aa3d90 +0x50a3:  sub    $0x18,%esp
08aa3d93 +0x50a6:  mov    0x8(%ebp),%eax
08aa3d96 +0x50a9:  mov    %eax,(%esp)
08aa3d99 +0x50ac:  call   08a9ed60 <+0x73>
08aa3d9e +0x50b1:  leave
08aa3d9f +0x50b2:  ret
08aa3da0 +0x50b3:  push   %ebp
08aa3da1 +0x50b4:  mov    %esp,%ebp
08aa3da3 +0x50b6:  pop    %ebp
08aa3da4 +0x50b7:  ret
08aa3da5 +0x50b8:  nop
08aa3da6 +0x50b9:  push   %ebp
08aa3da7 +0x50ba:  mov    %esp,%ebp
08aa3da9 +0x50bc:  pop    %ebp
08aa3daa +0x50bd:  ret
08aa3dab +0x50be:  nop
08aa3dac +0x50bf:  push   %ebp
08aa3dad +0x50c0:  mov    %esp,%ebp
08aa3daf +0x50c2:  pop    %ebp
08aa3db0 +0x50c3:  ret
08aa3db1 +0x50c4:  nop
08aa3db2 +0x50c5:  push   %ebp
08aa3db3 +0x50c6:  mov    %esp,%ebp
08aa3db5 +0x50c8:  sub    $0x18,%esp
08aa3db8 +0x50cb:  mov    0xc(%ebp),%eax
08aa3dbb +0x50ce:  mov    %eax,(%esp)
08aa3dbe +0x50d1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa3dc3 +0x50d6:  leave
08aa3dc4 +0x50d7:  ret
08aa3dc5 +0x50d8:  nop
08aa3dc6 +0x50d9:  push   %ebp
08aa3dc7 +0x50da:  mov    %esp,%ebp
08aa3dc9 +0x50dc:  pop    %ebp
08aa3dca +0x50dd:  ret
08aa3dcb +0x50de:  push   %ebp
08aa3dcc +0x50df:  mov    %esp,%ebp
08aa3dce +0x50e1:  sub    $0x18,%esp
08aa3dd1 +0x50e4:  mov    0x8(%ebp),%eax
08aa3dd4 +0x50e7:  mov    %eax,(%esp)
08aa3dd7 +0x50ea:  call   08a9ed34 <+0x47>
08aa3ddc +0x50ef:  leave
08aa3ddd +0x50f0:  ret
08aa3dde +0x50f1:  push   %ebp
08aa3ddf +0x50f2:  mov    %esp,%ebp
08aa3de1 +0x50f4:  mov    0x8(%ebp),%eax
08aa3de4 +0x50f7:  pop    %ebp
08aa3de5 +0x50f8:  ret
08aa3de6 +0x50f9:  push   %ebp
08aa3de7 +0x50fa:  mov    %esp,%ebp
08aa3de9 +0x50fc:  push   %esi
08aa3dea +0x50fd:  push   %ebx
08aa3deb +0x50fe:  sub    $0x10,%esp
08aa3dee +0x5101:  mov    0x10(%ebp),%eax
08aa3df1 +0x5104:  mov    %eax,(%esp)
08aa3df4 +0x5107:  call   08aa4280 <+0x5593>
08aa3df9 +0x510c:  mov    %eax,%esi
08aa3dfb +0x510e:  mov    0xc(%ebp),%eax
08aa3dfe +0x5111:  mov    %eax,(%esp)
08aa3e01 +0x5114:  call   08aa4280 <+0x5593>
08aa3e06 +0x5119:  mov    %eax,%ebx
08aa3e08 +0x511b:  mov    0x8(%ebp),%eax
08aa3e0b +0x511e:  mov    %eax,(%esp)
08aa3e0e +0x5121:  call   08aa4280 <+0x5593>
08aa3e13 +0x5126:  mov    %esi,0x8(%esp)
08aa3e17 +0x512a:  mov    %ebx,0x4(%esp)
08aa3e1b +0x512e:  mov    %eax,(%esp)
08aa3e1e +0x5131:  call   08aa4288 <+0x559b>
08aa3e23 +0x5136:  add    $0x10,%esp
08aa3e26 +0x5139:  pop    %ebx
08aa3e27 +0x513a:  pop    %esi
08aa3e28 +0x513b:  pop    %ebp
08aa3e29 +0x513c:  ret
08aa3e2a +0x513d:  push   %ebp
08aa3e2b +0x513e:  mov    %esp,%ebp
08aa3e2d +0x5140:  mov    0x8(%ebp),%eax
08aa3e30 +0x5143:  mov    0x4(%eax),%eax
08aa3e33 +0x5146:  mov    %eax,%edx
08aa3e35 +0x5148:  mov    0x8(%ebp),%eax
08aa3e38 +0x514b:  mov    (%eax),%eax
08aa3e3a +0x514d:  mov    %edx,%ecx
08aa3e3c +0x514f:  sub    %eax,%ecx
08aa3e3e +0x5151:  mov    %ecx,%eax
08aa3e40 +0x5153:  sar    $0x2,%eax
08aa3e43 +0x5156:  pop    %ebp
08aa3e44 +0x5157:  ret
08aa3e45 +0x5158:  nop
08aa3e46 +0x5159:  push   %ebp
08aa3e47 +0x515a:  mov    %esp,%ebp
08aa3e49 +0x515c:  sub    $0x18,%esp
08aa3e4c +0x515f:  mov    0x8(%ebp),%eax
08aa3e4f +0x5162:  mov    %eax,(%esp)
08aa3e52 +0x5165:  call   08aa42ae <+0x55c1>
08aa3e57 +0x516a:  mov    %eax,(%esp)
08aa3e5a +0x516d:  call   08aa42b6 <+0x55c9>
08aa3e5f +0x5172:  leave
08aa3e60 +0x5173:  ret
08aa3e61 +0x5174:  nop
08aa3e62 +0x5175:  push   %ebp
08aa3e63 +0x5176:  mov    %esp,%ebp
08aa3e65 +0x5178:  sub    $0x18,%esp
08aa3e68 +0x517b:  mov    0x8(%ebp),%eax
08aa3e6b +0x517e:  mov    %eax,(%esp)
08aa3e6e +0x5181:  call   08aa42b6 <+0x55c9>
08aa3e73 +0x5186:  cmp    0xc(%ebp),%eax
08aa3e76 +0x5189:  setb   %al
08aa3e79 +0x518c:  movzbl %al,%eax
08aa3e7c +0x518f:  test   %eax,%eax
08aa3e7e +0x5191:  setne  %al
08aa3e81 +0x5194:  test   %al,%al
08aa3e83 +0x5196:  je     08aa3e8a <+0x519d>
08aa3e85 +0x5198:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa3e8a +0x519d:  mov    0xc(%ebp),%eax
08aa3e8d +0x51a0:  shl    $0x2,%eax
08aa3e90 +0x51a3:  mov    %eax,(%esp)
08aa3e93 +0x51a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa3e98 +0x51ab:  leave
08aa3e99 +0x51ac:  ret
08aa3e9a +0x51ad:  push   %ebp
08aa3e9b +0x51ae:  mov    %esp,%ebp
08aa3e9d +0x51b0:  push   %ebx
08aa3e9e +0x51b1:  sub    $0x14,%esp
08aa3ea1 +0x51b4:  mov    0x8(%ebp),%ebx
08aa3ea4 +0x51b7:  mov    0xc(%ebp),%eax
08aa3ea7 +0x51ba:  mov    (%eax),%eax
08aa3ea9 +0x51bc:  mov    %eax,0x4(%esp)
08aa3ead +0x51c0:  mov    %ebx,(%esp)
08aa3eb0 +0x51c3:  call   08aa42c0 <+0x55d3>
08aa3eb5 +0x51c8:  mov    %ebx,%eax
08aa3eb7 +0x51ca:  add    $0x14,%esp
08aa3eba +0x51cd:  pop    %ebx
08aa3ebb +0x51ce:  pop    %ebp
08aa3ebc +0x51cf:  ret    $0x4
08aa3ebf +0x51d2:  push   %ebp
08aa3ec0 +0x51d3:  mov    %esp,%ebp
08aa3ec2 +0x51d5:  sub    $0x18,%esp
08aa3ec5 +0x51d8:  mov    0x10(%ebp),%eax
08aa3ec8 +0x51db:  mov    %eax,0x8(%esp)
08aa3ecc +0x51df:  mov    0xc(%ebp),%eax
08aa3ecf +0x51e2:  mov    %eax,0x4(%esp)
08aa3ed3 +0x51e6:  mov    0x8(%ebp),%eax
08aa3ed6 +0x51e9:  mov    %eax,(%esp)
08aa3ed9 +0x51ec:  call   08aa42cd <+0x55e0>
08aa3ede +0x51f1:  leave
08aa3edf +0x51f2:  ret
08aa3ee0 +0x51f3:  push   %ebp
08aa3ee1 +0x51f4:  mov    %esp,%ebp
08aa3ee3 +0x51f6:  mov    0x8(%ebp),%eax
08aa3ee6 +0x51f9:  add    $0x10,%eax
08aa3ee9 +0x51fc:  pop    %ebp
08aa3eea +0x51fd:  ret
08aa3eeb +0x51fe:  nop
08aa3eec +0x51ff:  push   %ebp
08aa3eed +0x5200:  mov    %esp,%ebp
08aa3eef +0x5202:  pop    %ebp
08aa3ef0 +0x5203:  ret
08aa3ef1 +0x5204:  push   %ebp
08aa3ef2 +0x5205:  mov    %esp,%ebp
08aa3ef4 +0x5207:  mov    0x8(%ebp),%eax
08aa3ef7 +0x520a:  pop    %ebp
08aa3ef8 +0x520b:  ret
08aa3ef9 +0x520c:  push   %ebp
08aa3efa +0x520d:  mov    %esp,%ebp
08aa3efc +0x520f:  sub    $0x28,%esp
08aa3eff +0x5212:  movb   $0x0,-0x9(%ebp)
08aa3f03 +0x5216:  mov    0x10(%ebp),%eax
08aa3f06 +0x5219:  mov    %eax,0x8(%esp)
08aa3f0a +0x521d:  mov    0xc(%ebp),%eax
08aa3f0d +0x5220:  mov    %eax,0x4(%esp)
08aa3f11 +0x5224:  mov    0x8(%ebp),%eax
08aa3f14 +0x5227:  mov    %eax,(%esp)
08aa3f17 +0x522a:  call   08aa42ee <+0x5601>
08aa3f1c +0x522f:  leave
08aa3f1d +0x5230:  ret
08aa3f1e +0x5231:  push   %ebp
08aa3f1f +0x5232:  mov    %esp,%ebp
08aa3f21 +0x5234:  mov    0x8(%ebp),%eax
08aa3f24 +0x5237:  pop    %ebp
08aa3f25 +0x5238:  ret
08aa3f26 +0x5239:  push   %ebp
08aa3f27 +0x523a:  mov    %esp,%ebp
08aa3f29 +0x523c:  mov    $0xfffffff,%eax
08aa3f2e +0x5241:  pop    %ebp
08aa3f2f +0x5242:  ret
08aa3f30 +0x5243:  push   %ebp
08aa3f31 +0x5244:  mov    %esp,%ebp
08aa3f33 +0x5246:  mov    0x8(%ebp),%eax
08aa3f36 +0x5249:  mov    0xc(%ebp),%edx
08aa3f39 +0x524c:  mov    %edx,(%eax)
08aa3f3b +0x524e:  pop    %ebp
08aa3f3c +0x524f:  ret
08aa3f3d +0x5250:  push   %ebp
08aa3f3e +0x5251:  mov    %esp,%ebp
08aa3f40 +0x5253:  sub    $0x18,%esp
08aa3f43 +0x5256:  mov    0x10(%ebp),%eax
08aa3f46 +0x5259:  mov    %eax,0x8(%esp)
08aa3f4a +0x525d:  mov    0xc(%ebp),%eax
08aa3f4d +0x5260:  mov    %eax,0x4(%esp)
08aa3f51 +0x5264:  mov    0x8(%ebp),%eax
08aa3f54 +0x5267:  mov    %eax,(%esp)
08aa3f57 +0x526a:  call   08aa433e <+0x5651>
08aa3f5c +0x526f:  leave
08aa3f5d +0x5270:  ret
08aa3f5e +0x5271:  push   %ebp
08aa3f5f +0x5272:  mov    %esp,%ebp
08aa3f61 +0x5274:  push   %esi
08aa3f62 +0x5275:  push   %ebx
08aa3f63 +0x5276:  sub    $0x20,%esp
08aa3f66 +0x5279:  mov    0x8(%ebp),%eax
08aa3f69 +0x527c:  mov    %eax,(%esp)
08aa3f6c +0x527f:  call   08aa4404 <+0x5717>
08aa3f71 +0x5284:  mov    %eax,-0xc(%ebp)
08aa3f74 +0x5287:  mov    0xc(%ebp),%eax
08aa3f77 +0x528a:  mov    %eax,(%esp)
08aa3f7a +0x528d:  call   08aa4427 <+0x573a>
08aa3f7f +0x5292:  mov    %eax,%ebx
08aa3f81 +0x5294:  mov    0x8(%ebp),%eax
08aa3f84 +0x5297:  mov    %eax,(%esp)
08aa3f87 +0x529a:  call   08aa319e <+0x44b1>
08aa3f8c +0x529f:  mov    %ebx,0x8(%esp)
08aa3f90 +0x52a3:  mov    -0xc(%ebp),%edx
08aa3f93 +0x52a6:  mov    %edx,0x4(%esp)
08aa3f97 +0x52aa:  mov    %eax,(%esp)
08aa3f9a +0x52ad:  call   08aa4430 <+0x5743>
08aa3f9f +0x52b2:  jmp    08aa3fd5 <+0x52e8>
08aa3fa1 +0x52b4:  mov    %eax,(%esp)
08aa3fa4 +0x52b7:  call   08725ce0 <__cxa_begin_catch>
08aa3fa9 +0x52bc:  mov    -0xc(%ebp),%eax
08aa3fac +0x52bf:  mov    %eax,0x4(%esp)
08aa3fb0 +0x52c3:  mov    0x8(%ebp),%eax
08aa3fb3 +0x52c6:  mov    %eax,(%esp)
08aa3fb6 +0x52c9:  call   08aa31c0 <+0x44d3>
08aa3fbb +0x52ce:  call   08724be0 <__cxa_rethrow>
08aa3fc0 +0x52d3:  mov    %edx,%ebx
08aa3fc2 +0x52d5:  mov    %eax,%esi
08aa3fc4 +0x52d7:  call   08725c30 <__cxa_end_catch>
08aa3fc9 +0x52dc:  mov    %esi,%eax
08aa3fcb +0x52de:  mov    %ebx,%edx
08aa3fcd +0x52e0:  mov    %eax,(%esp)
08aa3fd0 +0x52e3:  call   08ae3750 <_Unwind_Resume>
08aa3fd5 +0x52e8:  mov    -0xc(%ebp),%eax
08aa3fd8 +0x52eb:  add    $0x20,%esp
08aa3fdb +0x52ee:  pop    %ebx
08aa3fdc +0x52ef:  pop    %esi
08aa3fdd +0x52f0:  pop    %ebp
08aa3fde +0x52f1:  ret
08aa3fdf +0x52f2:  nop
08aa3fe0 +0x52f3:  push   %ebp
08aa3fe1 +0x52f4:  mov    %esp,%ebp
08aa3fe3 +0x52f6:  sub    $0x18,%esp
08aa3fe6 +0x52f9:  mov    0xc(%ebp),%eax
08aa3fe9 +0x52fc:  mov    %eax,(%esp)
08aa3fec +0x52ff:  call   08aa446f <+0x5782>
08aa3ff1 +0x5304:  mov    0x8(%ebp),%edx
08aa3ff4 +0x5307:  mov    (%eax),%eax
08aa3ff6 +0x5309:  mov    %eax,(%edx)
08aa3ff8 +0x530b:  mov    0x10(%ebp),%eax
08aa3ffb +0x530e:  mov    %eax,(%esp)
08aa3ffe +0x5311:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08aa4003 +0x5316:  movzbl (%eax),%edx
08aa4006 +0x5319:  mov    0x8(%ebp),%eax
08aa4009 +0x531c:  mov    %dl,0x4(%eax)
08aa400c +0x531f:  leave
08aa400d +0x5320:  ret
08aa400e +0x5321:  push   %ebp
08aa400f +0x5322:  mov    %esp,%ebp
08aa4011 +0x5324:  sub    $0x18,%esp
08aa4014 +0x5327:  mov    0x8(%ebp),%eax
08aa4017 +0x532a:  mov    (%eax),%eax
08aa4019 +0x532c:  mov    %eax,(%esp)
08aa401c +0x532f:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08aa4021 +0x5334:  mov    0x8(%ebp),%edx
08aa4024 +0x5337:  mov    %eax,(%edx)
08aa4026 +0x5339:  mov    0x8(%ebp),%eax
08aa4029 +0x533c:  leave
08aa402a +0x533d:  ret
08aa402b +0x533e:  nop
08aa402c +0x533f:  push   %ebp
08aa402d +0x5340:  mov    %esp,%ebp
08aa402f +0x5342:  sub    $0x18,%esp
08aa4032 +0x5345:  mov    0xc(%ebp),%eax
08aa4035 +0x5348:  mov    %eax,(%esp)
08aa4038 +0x534b:  call   08aa4477 <+0x578a>
08aa403d +0x5350:  mov    0x8(%ebp),%edx
08aa4040 +0x5353:  mov    (%eax),%eax
08aa4042 +0x5355:  mov    %eax,(%edx)
08aa4044 +0x5357:  mov    0x10(%ebp),%eax
08aa4047 +0x535a:  mov    %eax,(%esp)
08aa404a +0x535d:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08aa404f +0x5362:  movzbl (%eax),%edx
08aa4052 +0x5365:  mov    0x8(%ebp),%eax
08aa4055 +0x5368:  mov    %dl,0x4(%eax)
08aa4058 +0x536b:  leave
08aa4059 +0x536c:  ret
08aa405a +0x536d:  push   %ebp
08aa405b +0x536e:  mov    %esp,%ebp
08aa405d +0x5370:  mov    0x8(%ebp),%eax
08aa4060 +0x5373:  pop    %ebp
08aa4061 +0x5374:  ret
08aa4062 +0x5375:  push   %ebp
08aa4063 +0x5376:  mov    %esp,%ebp
08aa4065 +0x5378:  sub    $0x28,%esp
08aa4068 +0x537b:  movb   $0x1,-0x9(%ebp)
08aa406c +0x537f:  mov    0x10(%ebp),%eax
08aa406f +0x5382:  mov    %eax,0x8(%esp)
08aa4073 +0x5386:  mov    0xc(%ebp),%eax
08aa4076 +0x5389:  mov    %eax,0x4(%esp)
08aa407a +0x538d:  mov    0x8(%ebp),%eax
08aa407d +0x5390:  mov    %eax,(%esp)
08aa4080 +0x5393:  call   08aa447f <+0x5792>
08aa4085 +0x5398:  leave
08aa4086 +0x5399:  ret
08aa4087 +0x539a:  nop
08aa4088 +0x539b:  push   %ebp
08aa4089 +0x539c:  mov    %esp,%ebp
08aa408b +0x539e:  mov    0x8(%ebp),%eax
08aa408e +0x53a1:  pop    %ebp
08aa408f +0x53a2:  ret
08aa4090 +0x53a3:  push   %ebp
08aa4091 +0x53a4:  mov    %esp,%ebp
08aa4093 +0x53a6:  mov    $0x15555555,%eax
08aa4098 +0x53ab:  pop    %ebp
08aa4099 +0x53ac:  ret
08aa409a +0x53ad:  push   %ebp
08aa409b +0x53ae:  mov    %esp,%ebp
08aa409d +0x53b0:  mov    0x8(%ebp),%eax
08aa40a0 +0x53b3:  mov    0xc(%ebp),%edx
08aa40a3 +0x53b6:  mov    %edx,(%eax)
08aa40a5 +0x53b8:  pop    %ebp
08aa40a6 +0x53b9:  ret
08aa40a7 +0x53ba:  push   %ebp
08aa40a8 +0x53bb:  mov    %esp,%ebp
08aa40aa +0x53bd:  sub    $0x18,%esp
08aa40ad +0x53c0:  mov    0x10(%ebp),%eax
08aa40b0 +0x53c3:  mov    %eax,0x8(%esp)
08aa40b4 +0x53c7:  mov    0xc(%ebp),%eax
08aa40b7 +0x53ca:  mov    %eax,0x4(%esp)
08aa40bb +0x53ce:  mov    0x8(%ebp),%eax
08aa40be +0x53d1:  mov    %eax,(%esp)
08aa40c1 +0x53d4:  call   08aa44e2 <+0x57f5>
08aa40c6 +0x53d9:  leave
08aa40c7 +0x53da:  ret
08aa40c8 +0x53db:  push   %ebp
08aa40c9 +0x53dc:  mov    %esp,%ebp
08aa40cb +0x53de:  mov    0x8(%ebp),%eax
08aa40ce +0x53e1:  pop    %ebp
08aa40cf +0x53e2:  ret
08aa40d0 +0x53e3:  push   %ebp
08aa40d1 +0x53e4:  mov    %esp,%ebp
08aa40d3 +0x53e6:  sub    $0x28,%esp
08aa40d6 +0x53e9:  movb   $0x1,-0x9(%ebp)
08aa40da +0x53ed:  mov    0x10(%ebp),%eax
08aa40dd +0x53f0:  mov    %eax,0x8(%esp)
08aa40e1 +0x53f4:  mov    0xc(%ebp),%eax
08aa40e4 +0x53f7:  mov    %eax,0x4(%esp)
08aa40e8 +0x53fb:  mov    0x8(%ebp),%eax
08aa40eb +0x53fe:  mov    %eax,(%esp)
08aa40ee +0x5401:  call   08aa4503 <+0x5816>
08aa40f3 +0x5406:  leave
08aa40f4 +0x5407:  ret
08aa40f5 +0x5408:  nop
08aa40f6 +0x5409:  push   %ebp
08aa40f7 +0x540a:  mov    %esp,%ebp
08aa40f9 +0x540c:  mov    0x8(%ebp),%eax
08aa40fc +0x540f:  pop    %ebp
08aa40fd +0x5410:  ret
08aa40fe +0x5411:  push   %ebp
08aa40ff +0x5412:  mov    %esp,%ebp
08aa4101 +0x5414:  mov    $0xfffffff,%eax
08aa4106 +0x5419:  pop    %ebp
08aa4107 +0x541a:  ret
08aa4108 +0x541b:  push   %ebp
08aa4109 +0x541c:  mov    %esp,%ebp
08aa410b +0x541e:  mov    0x8(%ebp),%eax
08aa410e +0x5421:  mov    0xc(%ebp),%edx
08aa4111 +0x5424:  mov    %edx,(%eax)
08aa4113 +0x5426:  pop    %ebp
08aa4114 +0x5427:  ret
08aa4115 +0x5428:  push   %ebp
08aa4116 +0x5429:  mov    %esp,%ebp
08aa4118 +0x542b:  sub    $0x18,%esp
08aa411b +0x542e:  mov    0x10(%ebp),%eax
08aa411e +0x5431:  mov    %eax,0x8(%esp)
08aa4122 +0x5435:  mov    0xc(%ebp),%eax
08aa4125 +0x5438:  mov    %eax,0x4(%esp)
08aa4129 +0x543c:  mov    0x8(%ebp),%eax
08aa412c +0x543f:  mov    %eax,(%esp)
08aa412f +0x5442:  call   08aa454e <+0x5861>
08aa4134 +0x5447:  leave
08aa4135 +0x5448:  ret
08aa4136 +0x5449:  push   %ebp
08aa4137 +0x544a:  mov    %esp,%ebp
08aa4139 +0x544c:  mov    0x8(%ebp),%eax
08aa413c +0x544f:  pop    %ebp
08aa413d +0x5450:  ret
08aa413e +0x5451:  push   %ebp
08aa413f +0x5452:  mov    %esp,%ebp
08aa4141 +0x5454:  sub    $0x28,%esp
08aa4144 +0x5457:  movb   $0x0,-0x9(%ebp)
08aa4148 +0x545b:  mov    0x10(%ebp),%eax
08aa414b +0x545e:  mov    %eax,0x8(%esp)
08aa414f +0x5462:  mov    0xc(%ebp),%eax
08aa4152 +0x5465:  mov    %eax,0x4(%esp)
08aa4156 +0x5469:  mov    0x8(%ebp),%eax
08aa4159 +0x546c:  mov    %eax,(%esp)
08aa415c +0x546f:  call   08aa456f <+0x5882>
08aa4161 +0x5474:  leave
08aa4162 +0x5475:  ret
08aa4163 +0x5476:  nop
08aa4164 +0x5477:  push   %ebp
08aa4165 +0x5478:  mov    %esp,%ebp
08aa4167 +0x547a:  mov    0x8(%ebp),%eax
08aa416a +0x547d:  pop    %ebp
08aa416b +0x547e:  ret
08aa416c +0x547f:  push   %ebp
08aa416d +0x5480:  mov    %esp,%ebp
08aa416f +0x5482:  mov    $0xccccccc,%eax
08aa4174 +0x5487:  pop    %ebp
08aa4175 +0x5488:  ret
08aa4176 +0x5489:  push   %ebp
08aa4177 +0x548a:  mov    %esp,%ebp
08aa4179 +0x548c:  mov    0x8(%ebp),%eax
08aa417c +0x548f:  mov    0xc(%ebp),%edx
08aa417f +0x5492:  mov    %edx,(%eax)
08aa4181 +0x5494:  pop    %ebp
08aa4182 +0x5495:  ret
08aa4183 +0x5496:  push   %ebp
08aa4184 +0x5497:  mov    %esp,%ebp
08aa4186 +0x5499:  sub    $0x18,%esp
08aa4189 +0x549c:  mov    0x10(%ebp),%eax
08aa418c +0x549f:  mov    %eax,0x8(%esp)
08aa4190 +0x54a3:  mov    0xc(%ebp),%eax
08aa4193 +0x54a6:  mov    %eax,0x4(%esp)
08aa4197 +0x54aa:  mov    0x8(%ebp),%eax
08aa419a +0x54ad:  mov    %eax,(%esp)
08aa419d +0x54b0:  call   08aa45c5 <+0x58d8>
08aa41a2 +0x54b5:  leave
08aa41a3 +0x54b6:  ret
08aa41a4 +0x54b7:  push   %ebp
08aa41a5 +0x54b8:  mov    %esp,%ebp
08aa41a7 +0x54ba:  mov    0x8(%ebp),%eax
08aa41aa +0x54bd:  pop    %ebp
08aa41ab +0x54be:  ret
08aa41ac +0x54bf:  push   %ebp
08aa41ad +0x54c0:  mov    %esp,%ebp
08aa41af +0x54c2:  sub    $0x28,%esp
08aa41b2 +0x54c5:  movb   $0x1,-0x9(%ebp)
08aa41b6 +0x54c9:  mov    0x10(%ebp),%eax
08aa41b9 +0x54cc:  mov    %eax,0x8(%esp)
08aa41bd +0x54d0:  mov    0xc(%ebp),%eax
08aa41c0 +0x54d3:  mov    %eax,0x4(%esp)
08aa41c4 +0x54d7:  mov    0x8(%ebp),%eax
08aa41c7 +0x54da:  mov    %eax,(%esp)
08aa41ca +0x54dd:  call   08aa468a <+0x599d>
08aa41cf +0x54e2:  leave
08aa41d0 +0x54e3:  ret
08aa41d1 +0x54e4:  nop
08aa41d2 +0x54e5:  push   %ebp
08aa41d3 +0x54e6:  mov    %esp,%ebp
08aa41d5 +0x54e8:  mov    0x8(%ebp),%eax
08aa41d8 +0x54eb:  pop    %ebp
08aa41d9 +0x54ec:  ret
08aa41da +0x54ed:  push   %ebp
08aa41db +0x54ee:  mov    %esp,%ebp
08aa41dd +0x54f0:  mov    $0xfffffff,%eax
08aa41e2 +0x54f5:  pop    %ebp
08aa41e3 +0x54f6:  ret
08aa41e4 +0x54f7:  push   %ebp
08aa41e5 +0x54f8:  mov    %esp,%ebp
08aa41e7 +0x54fa:  mov    0x8(%ebp),%eax
08aa41ea +0x54fd:  mov    0xc(%ebp),%edx
08aa41ed +0x5500:  mov    %edx,(%eax)
08aa41ef +0x5502:  pop    %ebp
08aa41f0 +0x5503:  ret
08aa41f1 +0x5504:  push   %ebp
08aa41f2 +0x5505:  mov    %esp,%ebp
08aa41f4 +0x5507:  sub    $0x18,%esp
08aa41f7 +0x550a:  mov    0x10(%ebp),%eax
08aa41fa +0x550d:  mov    %eax,0x8(%esp)
08aa41fe +0x5511:  mov    0xc(%ebp),%eax
08aa4201 +0x5514:  mov    %eax,0x4(%esp)
08aa4205 +0x5518:  mov    0x8(%ebp),%eax
08aa4208 +0x551b:  mov    %eax,(%esp)
08aa420b +0x551e:  call   08aa46d5 <+0x59e8>
08aa4210 +0x5523:  leave
08aa4211 +0x5524:  ret
08aa4212 +0x5525:  push   %ebp
08aa4213 +0x5526:  mov    %esp,%ebp
08aa4215 +0x5528:  mov    0x8(%ebp),%eax
08aa4218 +0x552b:  pop    %ebp
08aa4219 +0x552c:  ret
08aa421a +0x552d:  push   %ebp
08aa421b +0x552e:  mov    %esp,%ebp
08aa421d +0x5530:  sub    $0x28,%esp
08aa4220 +0x5533:  movb   $0x0,-0x9(%ebp)
08aa4224 +0x5537:  mov    0x10(%ebp),%eax
08aa4227 +0x553a:  mov    %eax,0x8(%esp)
08aa422b +0x553e:  mov    0xc(%ebp),%eax
08aa422e +0x5541:  mov    %eax,0x4(%esp)
08aa4232 +0x5545:  mov    0x8(%ebp),%eax
08aa4235 +0x5548:  mov    %eax,(%esp)
08aa4238 +0x554b:  call   08aa46f6 <+0x5a09>
08aa423d +0x5550:  leave
08aa423e +0x5551:  ret
08aa423f +0x5552:  nop
08aa4240 +0x5553:  push   %ebp
08aa4241 +0x5554:  mov    %esp,%ebp
08aa4243 +0x5556:  mov    0x8(%ebp),%eax
08aa4246 +0x5559:  pop    %ebp
08aa4247 +0x555a:  ret
08aa4248 +0x555b:  push   %ebp
08aa4249 +0x555c:  mov    %esp,%ebp
08aa424b +0x555e:  mov    $0xfffffff,%eax
08aa4250 +0x5563:  pop    %ebp
08aa4251 +0x5564:  ret
08aa4252 +0x5565:  push   %ebp
08aa4253 +0x5566:  mov    %esp,%ebp
08aa4255 +0x5568:  mov    0x8(%ebp),%eax
08aa4258 +0x556b:  mov    0xc(%ebp),%edx
08aa425b +0x556e:  mov    %edx,(%eax)
08aa425d +0x5570:  pop    %ebp
08aa425e +0x5571:  ret
08aa425f +0x5572:  push   %ebp
08aa4260 +0x5573:  mov    %esp,%ebp
08aa4262 +0x5575:  sub    $0x18,%esp
08aa4265 +0x5578:  mov    0x10(%ebp),%eax
08aa4268 +0x557b:  mov    %eax,0x8(%esp)
08aa426c +0x557f:  mov    0xc(%ebp),%eax
08aa426f +0x5582:  mov    %eax,0x4(%esp)
08aa4273 +0x5586:  mov    0x8(%ebp),%eax
08aa4276 +0x5589:  mov    %eax,(%esp)
08aa4279 +0x558c:  call   08aa4755 <+0x5a68>
08aa427e +0x5591:  leave
08aa427f +0x5592:  ret
08aa4280 +0x5593:  push   %ebp
08aa4281 +0x5594:  mov    %esp,%ebp
08aa4283 +0x5596:  mov    0x8(%ebp),%eax
08aa4286 +0x5599:  pop    %ebp
08aa4287 +0x559a:  ret
08aa4288 +0x559b:  push   %ebp
08aa4289 +0x559c:  mov    %esp,%ebp
08aa428b +0x559e:  sub    $0x28,%esp
08aa428e +0x55a1:  movb   $0x1,-0x9(%ebp)
08aa4292 +0x55a5:  mov    0x10(%ebp),%eax
08aa4295 +0x55a8:  mov    %eax,0x8(%esp)
08aa4299 +0x55ac:  mov    0xc(%ebp),%eax
08aa429c +0x55af:  mov    %eax,0x4(%esp)
08aa42a0 +0x55b3:  mov    0x8(%ebp),%eax
08aa42a3 +0x55b6:  mov    %eax,(%esp)
08aa42a6 +0x55b9:  call   08aa4804 <+0x5b17>
08aa42ab +0x55be:  leave
08aa42ac +0x55bf:  ret
08aa42ad +0x55c0:  nop
08aa42ae +0x55c1:  push   %ebp
08aa42af +0x55c2:  mov    %esp,%ebp
08aa42b1 +0x55c4:  mov    0x8(%ebp),%eax
08aa42b4 +0x55c7:  pop    %ebp
08aa42b5 +0x55c8:  ret
08aa42b6 +0x55c9:  push   %ebp
08aa42b7 +0x55ca:  mov    %esp,%ebp
08aa42b9 +0x55cc:  mov    $0x3fffffff,%eax
08aa42be +0x55d1:  pop    %ebp
08aa42bf +0x55d2:  ret
08aa42c0 +0x55d3:  push   %ebp
08aa42c1 +0x55d4:  mov    %esp,%ebp
08aa42c3 +0x55d6:  mov    0x8(%ebp),%eax
08aa42c6 +0x55d9:  mov    0xc(%ebp),%edx
08aa42c9 +0x55dc:  mov    %edx,(%eax)
08aa42cb +0x55de:  pop    %ebp
08aa42cc +0x55df:  ret
08aa42cd +0x55e0:  push   %ebp
08aa42ce +0x55e1:  mov    %esp,%ebp
08aa42d0 +0x55e3:  sub    $0x18,%esp
08aa42d3 +0x55e6:  mov    0x10(%ebp),%eax
08aa42d6 +0x55e9:  mov    %eax,0x8(%esp)
08aa42da +0x55ed:  mov    0xc(%ebp),%eax
08aa42dd +0x55f0:  mov    %eax,0x4(%esp)
08aa42e1 +0x55f4:  mov    0x8(%ebp),%eax
08aa42e4 +0x55f7:  mov    %eax,(%esp)
08aa42e7 +0x55fa:  call   08aa4851 <+0x5b64>
08aa42ec +0x55ff:  leave
08aa42ed +0x5600:  ret
08aa42ee +0x5601:  push   %ebp
08aa42ef +0x5602:  mov    %esp,%ebp
08aa42f1 +0x5604:  sub    $0x28,%esp
08aa42f4 +0x5607:  mov    0xc(%ebp),%edx
08aa42f7 +0x560a:  mov    0x8(%ebp),%eax
08aa42fa +0x560d:  mov    %edx,%ecx
08aa42fc +0x560f:  sub    %eax,%ecx
08aa42fe +0x5611:  mov    %ecx,%eax
08aa4300 +0x5613:  sar    $0x4,%eax
08aa4303 +0x5616:  mov    %eax,-0xc(%ebp)
08aa4306 +0x5619:  jmp    08aa432e <+0x5641>
08aa4308 +0x561b:  subl   $0x10,0xc(%ebp)
08aa430c +0x561f:  mov    0xc(%ebp),%eax
08aa430f +0x5622:  mov    %eax,(%esp)
08aa4312 +0x5625:  call   08aa1e16 <+0x3129>
08aa4317 +0x562a:  subl   $0x10,0x10(%ebp)
08aa431b +0x562e:  mov    %eax,0x4(%esp)
08aa431f +0x5632:  mov    0x10(%ebp),%eax
08aa4322 +0x5635:  mov    %eax,(%esp)
08aa4325 +0x5638:  call   08a9fff2 <+0x1305>
08aa432a +0x563d:  subl   $0x1,-0xc(%ebp)
08aa432e +0x5641:  cmpl   $0x0,-0xc(%ebp)
08aa4332 +0x5645:  setg   %al
08aa4335 +0x5648:  test   %al,%al
08aa4337 +0x564a:  jne    08aa4308 <+0x561b>
08aa4339 +0x564c:  mov    0x10(%ebp),%eax
08aa433c +0x564f:  leave
08aa433d +0x5650:  ret
08aa433e +0x5651:  push   %ebp
08aa433f +0x5652:  mov    %esp,%ebp
08aa4341 +0x5654:  push   %edi
08aa4342 +0x5655:  push   %esi
08aa4343 +0x5656:  push   %ebx
08aa4344 +0x5657:  sub    $0x3c,%esp
08aa4347 +0x565a:  mov    0x10(%ebp),%eax
08aa434a +0x565d:  mov    %eax,-0x1c(%ebp)
08aa434d +0x5660:  jmp    08aa43ae <+0x56c1>
08aa434f +0x5662:  lea    0x8(%ebp),%eax
08aa4352 +0x5665:  mov    %eax,(%esp)
08aa4355 +0x5668:  call   08aa48a6 <+0x5bb9>
08aa435a +0x566d:  mov    %eax,%edi
08aa435c +0x566f:  mov    -0x1c(%ebp),%esi
08aa435f +0x5672:  mov    %esi,0x4(%esp)
08aa4363 +0x5676:  movl   $0x10,(%esp)
08aa436a +0x567d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa436f +0x5682:  mov    %eax,%ebx
08aa4371 +0x5684:  mov    %ebx,%eax
08aa4373 +0x5686:  test   %eax,%eax
08aa4375 +0x5688:  je     08aa439f <+0x56b2>
08aa4377 +0x568a:  mov    %ebx,%eax
08aa4379 +0x568c:  mov    %edi,0x4(%esp)
08aa437d +0x5690:  mov    %eax,(%esp)
08aa4380 +0x5693:  call   08a9ff52 <+0x1265>
08aa4385 +0x5698:  jmp    08aa439f <+0x56b2>
08aa4387 +0x569a:  mov    %edx,%edi
08aa4389 +0x569c:  mov    %eax,-0x2c(%ebp)
08aa438c +0x569f:  mov    %esi,0x4(%esp)
08aa4390 +0x56a3:  mov    %ebx,(%esp)
08aa4393 +0x56a6:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa4398 +0x56ab:  mov    -0x2c(%ebp),%eax
08aa439b +0x56ae:  mov    %edi,%edx
08aa439d +0x56b0:  jmp    08aa43cf <+0x56e2>
08aa439f +0x56b2:  lea    0x8(%ebp),%eax
08aa43a2 +0x56b5:  mov    %eax,(%esp)
08aa43a5 +0x56b8:  call   08aa4890 <+0x5ba3>
08aa43aa +0x56bd:  addl   $0x10,-0x1c(%ebp)
08aa43ae +0x56c1:  lea    0xc(%ebp),%eax
08aa43b1 +0x56c4:  mov    %eax,0x4(%esp)
08aa43b5 +0x56c8:  lea    0x8(%ebp),%eax
08aa43b8 +0x56cb:  mov    %eax,(%esp)
08aa43bb +0x56ce:  call   08aa4872 <+0x5b85>
08aa43c0 +0x56d3:  test   %al,%al
08aa43c2 +0x56d5:  jne    08aa434f <+0x5662>
08aa43c4 +0x56d7:  mov    -0x1c(%ebp),%eax
08aa43c7 +0x56da:  add    $0x3c,%esp
08aa43ca +0x56dd:  pop    %ebx
08aa43cb +0x56de:  pop    %esi
08aa43cc +0x56df:  pop    %edi
08aa43cd +0x56e0:  pop    %ebp
08aa43ce +0x56e1:  ret
08aa43cf +0x56e2:  mov    %eax,(%esp)
08aa43d2 +0x56e5:  call   08725ce0 <__cxa_begin_catch>
08aa43d7 +0x56ea:  mov    -0x1c(%ebp),%eax
08aa43da +0x56ed:  mov    %eax,0x4(%esp)
08aa43de +0x56f1:  mov    0x10(%ebp),%eax
08aa43e1 +0x56f4:  mov    %eax,(%esp)
08aa43e4 +0x56f7:  call   08aa19d7 <+0x2cea>
08aa43e9 +0x56fc:  call   08724be0 <__cxa_rethrow>
08aa43ee +0x5701:  mov    %edx,%ebx
08aa43f0 +0x5703:  mov    %eax,%esi
08aa43f2 +0x5705:  call   08725c30 <__cxa_end_catch>
08aa43f7 +0x570a:  mov    %esi,%eax
08aa43f9 +0x570c:  mov    %ebx,%edx
08aa43fb +0x570e:  mov    %eax,(%esp)
08aa43fe +0x5711:  call   08ae3750 <_Unwind_Resume>
08aa4403 +0x5716:  nop
08aa4404 +0x5717:  push   %ebp
08aa4405 +0x5718:  mov    %esp,%ebp
08aa4407 +0x571a:  sub    $0x18,%esp
08aa440a +0x571d:  mov    0x8(%ebp),%eax
08aa440d +0x5720:  movl   $0x0,0x8(%esp)
08aa4415 +0x5728:  movl   $0x1,0x4(%esp)
08aa441d +0x5730:  mov    %eax,(%esp)
08aa4420 +0x5733:  call   08aa48b0 <+0x5bc3>
08aa4425 +0x5738:  leave
08aa4426 +0x5739:  ret
08aa4427 +0x573a:  push   %ebp
08aa4428 +0x573b:  mov    %esp,%ebp
08aa442a +0x573d:  mov    0x8(%ebp),%eax
08aa442d +0x5740:  pop    %ebp
08aa442e +0x5741:  ret
08aa442f +0x5742:  nop
08aa4430 +0x5743:  push   %ebp
08aa4431 +0x5744:  mov    %esp,%ebp
08aa4433 +0x5746:  push   %ebx
08aa4434 +0x5747:  sub    $0x14,%esp
08aa4437 +0x574a:  mov    0x10(%ebp),%eax
08aa443a +0x574d:  mov    %eax,(%esp)
08aa443d +0x5750:  call   08aa4427 <+0x573a>
08aa4442 +0x5755:  mov    %eax,%ebx
08aa4444 +0x5757:  mov    0xc(%ebp),%eax
08aa4447 +0x575a:  mov    %eax,0x4(%esp)
08aa444b +0x575e:  movl   $0x18,(%esp)
08aa4452 +0x5765:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa4457 +0x576a:  mov    %eax,%edx
08aa4459 +0x576c:  test   %edx,%edx
08aa445b +0x576e:  je     08aa4469 <+0x577c>
08aa445d +0x5770:  mov    %ebx,0x4(%esp)
08aa4461 +0x5774:  mov    %eax,(%esp)
08aa4464 +0x5777:  call   08aa48ee <+0x5c01>
08aa4469 +0x577c:  add    $0x14,%esp
08aa446c +0x577f:  pop    %ebx
08aa446d +0x5780:  pop    %ebp
08aa446e +0x5781:  ret
08aa446f +0x5782:  push   %ebp
08aa4470 +0x5783:  mov    %esp,%ebp
08aa4472 +0x5785:  mov    0x8(%ebp),%eax
08aa4475 +0x5788:  pop    %ebp
08aa4476 +0x5789:  ret
08aa4477 +0x578a:  push   %ebp
08aa4478 +0x578b:  mov    %esp,%ebp
08aa447a +0x578d:  mov    0x8(%ebp),%eax
08aa447d +0x5790:  pop    %ebp
08aa447e +0x5791:  ret
08aa447f +0x5792:  push   %ebp
08aa4480 +0x5793:  mov    %esp,%ebp
08aa4482 +0x5795:  sub    $0x28,%esp
08aa4485 +0x5798:  mov    0xc(%ebp),%edx
08aa4488 +0x579b:  mov    0x8(%ebp),%eax
08aa448b +0x579e:  mov    %edx,%ecx
08aa448d +0x57a0:  sub    %eax,%ecx
08aa448f +0x57a2:  mov    %ecx,%eax
08aa4491 +0x57a4:  sar    $0x2,%eax
08aa4494 +0x57a7:  imul   $0xaaaaaaab,%eax,%eax
08aa449a +0x57ad:  mov    %eax,-0xc(%ebp)
08aa449d +0x57b0:  mov    -0xc(%ebp),%edx
08aa44a0 +0x57b3:  mov    %edx,%eax
08aa44a2 +0x57b5:  add    %eax,%eax
08aa44a4 +0x57b7:  add    %edx,%eax
08aa44a6 +0x57b9:  shl    $0x2,%eax
08aa44a9 +0x57bc:  mov    %eax,%ecx
08aa44ab +0x57be:  mov    -0xc(%ebp),%edx
08aa44ae +0x57c1:  mov    %edx,%eax
08aa44b0 +0x57c3:  add    %eax,%eax
08aa44b2 +0x57c5:  add    %edx,%eax
08aa44b4 +0x57c7:  shl    $0x2,%eax
08aa44b7 +0x57ca:  neg    %eax
08aa44b9 +0x57cc:  add    0x10(%ebp),%eax
08aa44bc +0x57cf:  mov    %ecx,0x8(%esp)
08aa44c0 +0x57d3:  mov    0x8(%ebp),%edx
08aa44c3 +0x57d6:  mov    %edx,0x4(%esp)
08aa44c7 +0x57da:  mov    %eax,(%esp)
08aa44ca +0x57dd:  call   0807d880 <_init+0x178>
08aa44cf +0x57e2:  mov    -0xc(%ebp),%edx
08aa44d2 +0x57e5:  mov    %edx,%eax
08aa44d4 +0x57e7:  add    %eax,%eax
08aa44d6 +0x57e9:  add    %edx,%eax
08aa44d8 +0x57eb:  shl    $0x2,%eax
08aa44db +0x57ee:  neg    %eax
08aa44dd +0x57f0:  add    0x10(%ebp),%eax
08aa44e0 +0x57f3:  leave
08aa44e1 +0x57f4:  ret
08aa44e2 +0x57f5:  push   %ebp
08aa44e3 +0x57f6:  mov    %esp,%ebp
08aa44e5 +0x57f8:  sub    $0x18,%esp
08aa44e8 +0x57fb:  mov    0x10(%ebp),%eax
08aa44eb +0x57fe:  mov    %eax,0x8(%esp)
08aa44ef +0x5802:  mov    0xc(%ebp),%eax
08aa44f2 +0x5805:  mov    %eax,0x4(%esp)
08aa44f6 +0x5809:  mov    0x8(%ebp),%eax
08aa44f9 +0x580c:  mov    %eax,(%esp)
08aa44fc +0x580f:  call   08aa4936 <+0x5c49>
08aa4501 +0x5814:  leave
08aa4502 +0x5815:  ret
08aa4503 +0x5816:  push   %ebp
08aa4504 +0x5817:  mov    %esp,%ebp
08aa4506 +0x5819:  sub    $0x28,%esp
08aa4509 +0x581c:  mov    0xc(%ebp),%edx
08aa450c +0x581f:  mov    0x8(%ebp),%eax
08aa450f +0x5822:  mov    %edx,%ecx
08aa4511 +0x5824:  sub    %eax,%ecx
08aa4513 +0x5826:  mov    %ecx,%eax
08aa4515 +0x5828:  sar    $0x4,%eax
08aa4518 +0x582b:  mov    %eax,-0xc(%ebp)
08aa451b +0x582e:  mov    -0xc(%ebp),%eax
08aa451e +0x5831:  mov    %eax,%edx
08aa4520 +0x5833:  shl    $0x4,%edx
08aa4523 +0x5836:  mov    -0xc(%ebp),%eax
08aa4526 +0x5839:  shl    $0x4,%eax
08aa4529 +0x583c:  neg    %eax
08aa452b +0x583e:  add    0x10(%ebp),%eax
08aa452e +0x5841:  mov    %edx,0x8(%esp)
08aa4532 +0x5845:  mov    0x8(%ebp),%edx
08aa4535 +0x5848:  mov    %edx,0x4(%esp)
08aa4539 +0x584c:  mov    %eax,(%esp)
08aa453c +0x584f:  call   0807d880 <_init+0x178>
08aa4541 +0x5854:  mov    -0xc(%ebp),%eax
08aa4544 +0x5857:  shl    $0x4,%eax
08aa4547 +0x585a:  neg    %eax
08aa4549 +0x585c:  add    0x10(%ebp),%eax
08aa454c +0x585f:  leave
08aa454d +0x5860:  ret
08aa454e +0x5861:  push   %ebp
08aa454f +0x5862:  mov    %esp,%ebp
08aa4551 +0x5864:  sub    $0x18,%esp
08aa4554 +0x5867:  mov    0x10(%ebp),%eax
08aa4557 +0x586a:  mov    %eax,0x8(%esp)
08aa455b +0x586e:  mov    0xc(%ebp),%eax
08aa455e +0x5871:  mov    %eax,0x4(%esp)
08aa4562 +0x5875:  mov    0x8(%ebp),%eax
08aa4565 +0x5878:  mov    %eax,(%esp)
08aa4568 +0x587b:  call   08aa496e <+0x5c81>
08aa456d +0x5880:  leave
08aa456e +0x5881:  ret
08aa456f +0x5882:  push   %ebp
08aa4570 +0x5883:  mov    %esp,%ebp
08aa4572 +0x5885:  sub    $0x28,%esp
08aa4575 +0x5888:  mov    0xc(%ebp),%edx
08aa4578 +0x588b:  mov    0x8(%ebp),%eax
08aa457b +0x588e:  mov    %edx,%ecx
08aa457d +0x5890:  sub    %eax,%ecx
08aa457f +0x5892:  mov    %ecx,%eax
08aa4581 +0x5894:  sar    $0x2,%eax
08aa4584 +0x5897:  imul   $0xcccccccd,%eax,%eax
08aa458a +0x589d:  mov    %eax,-0xc(%ebp)
08aa458d +0x58a0:  jmp    08aa45b5 <+0x58c8>
08aa458f +0x58a2:  subl   $0x14,0xc(%ebp)
08aa4593 +0x58a6:  mov    0xc(%ebp),%eax
08aa4596 +0x58a9:  mov    %eax,(%esp)
08aa4599 +0x58ac:  call   08aa2939 <+0x3c4c>
08aa459e +0x58b1:  subl   $0x14,0x10(%ebp)
08aa45a2 +0x58b5:  mov    %eax,0x4(%esp)
08aa45a6 +0x58b9:  mov    0x10(%ebp),%eax
08aa45a9 +0x58bc:  mov    %eax,(%esp)
08aa45ac +0x58bf:  call   08aa0bb2 <+0x1ec5>
08aa45b1 +0x58c4:  subl   $0x1,-0xc(%ebp)
08aa45b5 +0x58c8:  cmpl   $0x0,-0xc(%ebp)
08aa45b9 +0x58cc:  setg   %al
08aa45bc +0x58cf:  test   %al,%al
08aa45be +0x58d1:  jne    08aa458f <+0x58a2>
08aa45c0 +0x58d3:  mov    0x10(%ebp),%eax
08aa45c3 +0x58d6:  leave
08aa45c4 +0x58d7:  ret
08aa45c5 +0x58d8:  push   %ebp
08aa45c6 +0x58d9:  mov    %esp,%ebp
08aa45c8 +0x58db:  push   %edi
08aa45c9 +0x58dc:  push   %esi
08aa45ca +0x58dd:  push   %ebx
08aa45cb +0x58de:  sub    $0x3c,%esp
08aa45ce +0x58e1:  mov    0x10(%ebp),%eax
08aa45d1 +0x58e4:  mov    %eax,-0x1c(%ebp)
08aa45d4 +0x58e7:  jmp    08aa4635 <+0x5948>
08aa45d6 +0x58e9:  lea    0x8(%ebp),%eax
08aa45d9 +0x58ec:  mov    %eax,(%esp)
08aa45dc +0x58ef:  call   08aa49da <+0x5ced>
08aa45e1 +0x58f4:  mov    %eax,%edi
08aa45e3 +0x58f6:  mov    -0x1c(%ebp),%esi
08aa45e6 +0x58f9:  mov    %esi,0x4(%esp)
08aa45ea +0x58fd:  movl   $0x14,(%esp)
08aa45f1 +0x5904:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa45f6 +0x5909:  mov    %eax,%ebx
08aa45f8 +0x590b:  mov    %ebx,%eax
08aa45fa +0x590d:  test   %eax,%eax
08aa45fc +0x590f:  je     08aa4626 <+0x5939>
08aa45fe +0x5911:  mov    %ebx,%eax
08aa4600 +0x5913:  mov    %edi,0x4(%esp)
08aa4604 +0x5917:  mov    %eax,(%esp)
08aa4607 +0x591a:  call   08aa0af8 <+0x1e0b>
08aa460c +0x591f:  jmp    08aa4626 <+0x5939>
08aa460e +0x5921:  mov    %edx,%edi
08aa4610 +0x5923:  mov    %eax,-0x2c(%ebp)
08aa4613 +0x5926:  mov    %esi,0x4(%esp)
08aa4617 +0x592a:  mov    %ebx,(%esp)
08aa461a +0x592d:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa461f +0x5932:  mov    -0x2c(%ebp),%eax
08aa4622 +0x5935:  mov    %edi,%edx
08aa4624 +0x5937:  jmp    08aa4656 <+0x5969>
08aa4626 +0x5939:  lea    0x8(%ebp),%eax
08aa4629 +0x593c:  mov    %eax,(%esp)
08aa462c +0x593f:  call   08aa49c4 <+0x5cd7>
08aa4631 +0x5944:  addl   $0x14,-0x1c(%ebp)
08aa4635 +0x5948:  lea    0xc(%ebp),%eax
08aa4638 +0x594b:  mov    %eax,0x4(%esp)
08aa463c +0x594f:  lea    0x8(%ebp),%eax
08aa463f +0x5952:  mov    %eax,(%esp)
08aa4642 +0x5955:  call   08aa49a6 <+0x5cb9>
08aa4647 +0x595a:  test   %al,%al
08aa4649 +0x595c:  jne    08aa45d6 <+0x58e9>
08aa464b +0x595e:  mov    -0x1c(%ebp),%eax
08aa464e +0x5961:  add    $0x3c,%esp
08aa4651 +0x5964:  pop    %ebx
08aa4652 +0x5965:  pop    %esi
08aa4653 +0x5966:  pop    %edi
08aa4654 +0x5967:  pop    %ebp
08aa4655 +0x5968:  ret
08aa4656 +0x5969:  mov    %eax,(%esp)
08aa4659 +0x596c:  call   08725ce0 <__cxa_begin_catch>
08aa465e +0x5971:  mov    -0x1c(%ebp),%eax
08aa4661 +0x5974:  mov    %eax,0x4(%esp)
08aa4665 +0x5978:  mov    0x10(%ebp),%eax
08aa4668 +0x597b:  mov    %eax,(%esp)
08aa466b +0x597e:  call   08aa1741 <+0x2a54>
08aa4670 +0x5983:  call   08724be0 <__cxa_rethrow>
08aa4675 +0x5988:  mov    %edx,%ebx
08aa4677 +0x598a:  mov    %eax,%esi
08aa4679 +0x598c:  call   08725c30 <__cxa_end_catch>
08aa467e +0x5991:  mov    %esi,%eax
08aa4680 +0x5993:  mov    %ebx,%edx
08aa4682 +0x5995:  mov    %eax,(%esp)
08aa4685 +0x5998:  call   08ae3750 <_Unwind_Resume>
08aa468a +0x599d:  push   %ebp
08aa468b +0x599e:  mov    %esp,%ebp
08aa468d +0x59a0:  sub    $0x28,%esp
08aa4690 +0x59a3:  mov    0xc(%ebp),%edx
08aa4693 +0x59a6:  mov    0x8(%ebp),%eax
08aa4696 +0x59a9:  mov    %edx,%ecx
08aa4698 +0x59ab:  sub    %eax,%ecx
08aa469a +0x59ad:  mov    %ecx,%eax
08aa469c +0x59af:  sar    $0x4,%eax
08aa469f +0x59b2:  mov    %eax,-0xc(%ebp)
08aa46a2 +0x59b5:  mov    -0xc(%ebp),%eax
08aa46a5 +0x59b8:  mov    %eax,%edx
08aa46a7 +0x59ba:  shl    $0x4,%edx
08aa46aa +0x59bd:  mov    -0xc(%ebp),%eax
08aa46ad +0x59c0:  shl    $0x4,%eax
08aa46b0 +0x59c3:  neg    %eax
08aa46b2 +0x59c5:  add    0x10(%ebp),%eax
08aa46b5 +0x59c8:  mov    %edx,0x8(%esp)
08aa46b9 +0x59cc:  mov    0x8(%ebp),%edx
08aa46bc +0x59cf:  mov    %edx,0x4(%esp)
08aa46c0 +0x59d3:  mov    %eax,(%esp)
08aa46c3 +0x59d6:  call   0807d880 <_init+0x178>
08aa46c8 +0x59db:  mov    -0xc(%ebp),%eax
08aa46cb +0x59de:  shl    $0x4,%eax
08aa46ce +0x59e1:  neg    %eax
08aa46d0 +0x59e3:  add    0x10(%ebp),%eax
08aa46d3 +0x59e6:  leave
08aa46d4 +0x59e7:  ret
08aa46d5 +0x59e8:  push   %ebp
08aa46d6 +0x59e9:  mov    %esp,%ebp
08aa46d8 +0x59eb:  sub    $0x18,%esp
08aa46db +0x59ee:  mov    0x10(%ebp),%eax
08aa46de +0x59f1:  mov    %eax,0x8(%esp)
08aa46e2 +0x59f5:  mov    0xc(%ebp),%eax
08aa46e5 +0x59f8:  mov    %eax,0x4(%esp)
08aa46e9 +0x59fc:  mov    0x8(%ebp),%eax
08aa46ec +0x59ff:  mov    %eax,(%esp)
08aa46ef +0x5a02:  call   08aa49e4 <+0x5cf7>
08aa46f4 +0x5a07:  leave
08aa46f5 +0x5a08:  ret
08aa46f6 +0x5a09:  push   %ebp
08aa46f7 +0x5a0a:  mov    %esp,%ebp
08aa46f9 +0x5a0c:  push   %ebx
08aa46fa +0x5a0d:  sub    $0x24,%esp
08aa46fd +0x5a10:  mov    0xc(%ebp),%edx
08aa4700 +0x5a13:  mov    0x8(%ebp),%eax
08aa4703 +0x5a16:  mov    %edx,%ecx
08aa4705 +0x5a18:  sub    %eax,%ecx
08aa4707 +0x5a1a:  mov    %ecx,%eax
08aa4709 +0x5a1c:  sar    $0x4,%eax
08aa470c +0x5a1f:  mov    %eax,-0xc(%ebp)
08aa470f +0x5a22:  jmp    08aa4741 <+0x5a54>
08aa4711 +0x5a24:  subl   $0x10,0x10(%ebp)
08aa4715 +0x5a28:  mov    0x10(%ebp),%ebx
08aa4718 +0x5a2b:  subl   $0x10,0xc(%ebp)
08aa471c +0x5a2f:  mov    0xc(%ebp),%eax
08aa471f +0x5a32:  mov    %eax,(%esp)
08aa4722 +0x5a35:  call   08aa2dff <+0x4112>
08aa4727 +0x5a3a:  mov    (%eax),%edx
08aa4729 +0x5a3c:  mov    %edx,(%ebx)
08aa472b +0x5a3e:  mov    0x4(%eax),%edx
08aa472e +0x5a41:  mov    %edx,0x4(%ebx)
08aa4731 +0x5a44:  mov    0x8(%eax),%edx
08aa4734 +0x5a47:  mov    %edx,0x8(%ebx)
08aa4737 +0x5a4a:  mov    0xc(%eax),%eax
08aa473a +0x5a4d:  mov    %eax,0xc(%ebx)
08aa473d +0x5a50:  subl   $0x1,-0xc(%ebp)
08aa4741 +0x5a54:  cmpl   $0x0,-0xc(%ebp)
08aa4745 +0x5a58:  setg   %al
08aa4748 +0x5a5b:  test   %al,%al
08aa474a +0x5a5d:  jne    08aa4711 <+0x5a24>
08aa474c +0x5a5f:  mov    0x10(%ebp),%eax
08aa474f +0x5a62:  add    $0x24,%esp
08aa4752 +0x5a65:  pop    %ebx
08aa4753 +0x5a66:  pop    %ebp
08aa4754 +0x5a67:  ret
08aa4755 +0x5a68:  push   %ebp
08aa4756 +0x5a69:  mov    %esp,%ebp
08aa4758 +0x5a6b:  push   %esi
08aa4759 +0x5a6c:  push   %ebx
08aa475a +0x5a6d:  sub    $0x20,%esp
08aa475d +0x5a70:  mov    0x10(%ebp),%eax
08aa4760 +0x5a73:  mov    %eax,-0xc(%ebp)
08aa4763 +0x5a76:  jmp    08aa47b0 <+0x5ac3>
08aa4765 +0x5a78:  lea    0x8(%ebp),%eax
08aa4768 +0x5a7b:  mov    %eax,(%esp)
08aa476b +0x5a7e:  call   08aa4a50 <+0x5d63>
08aa4770 +0x5a83:  mov    %eax,%ebx
08aa4772 +0x5a85:  mov    -0xc(%ebp),%eax
08aa4775 +0x5a88:  mov    %eax,0x4(%esp)
08aa4779 +0x5a8c:  movl   $0x10,(%esp)
08aa4780 +0x5a93:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa4785 +0x5a98:  mov    %eax,%edx
08aa4787 +0x5a9a:  test   %edx,%edx
08aa4789 +0x5a9c:  je     08aa47a1 <+0x5ab4>
08aa478b +0x5a9e:  mov    (%ebx),%edx
08aa478d +0x5aa0:  mov    %edx,(%eax)
08aa478f +0x5aa2:  mov    0x4(%ebx),%edx
08aa4792 +0x5aa5:  mov    %edx,0x4(%eax)
08aa4795 +0x5aa8:  mov    0x8(%ebx),%edx
08aa4798 +0x5aab:  mov    %edx,0x8(%eax)
08aa479b +0x5aae:  mov    0xc(%ebx),%edx
08aa479e +0x5ab1:  mov    %edx,0xc(%eax)
08aa47a1 +0x5ab4:  lea    0x8(%ebp),%eax
08aa47a4 +0x5ab7:  mov    %eax,(%esp)
08aa47a7 +0x5aba:  call   08aa4a3a <+0x5d4d>
08aa47ac +0x5abf:  addl   $0x10,-0xc(%ebp)
08aa47b0 +0x5ac3:  lea    0xc(%ebp),%eax
08aa47b3 +0x5ac6:  mov    %eax,0x4(%esp)
08aa47b7 +0x5aca:  lea    0x8(%ebp),%eax
08aa47ba +0x5acd:  mov    %eax,(%esp)
08aa47bd +0x5ad0:  call   08aa4a1c <+0x5d2f>
08aa47c2 +0x5ad5:  test   %al,%al
08aa47c4 +0x5ad7:  jne    08aa4765 <+0x5a78>
08aa47c6 +0x5ad9:  mov    -0xc(%ebp),%eax
08aa47c9 +0x5adc:  add    $0x20,%esp
08aa47cc +0x5adf:  pop    %ebx
08aa47cd +0x5ae0:  pop    %esi
08aa47ce +0x5ae1:  pop    %ebp
08aa47cf +0x5ae2:  ret
08aa47d0 +0x5ae3:  mov    %eax,(%esp)
08aa47d3 +0x5ae6:  call   08725ce0 <__cxa_begin_catch>
08aa47d8 +0x5aeb:  mov    -0xc(%ebp),%eax
08aa47db +0x5aee:  mov    %eax,0x4(%esp)
08aa47df +0x5af2:  mov    0x10(%ebp),%eax
08aa47e2 +0x5af5:  mov    %eax,(%esp)
08aa47e5 +0x5af8:  call   08aa17c7 <+0x2ada>
08aa47ea +0x5afd:  call   08724be0 <__cxa_rethrow>
08aa47ef +0x5b02:  mov    %edx,%ebx
08aa47f1 +0x5b04:  mov    %eax,%esi
08aa47f3 +0x5b06:  call   08725c30 <__cxa_end_catch>
08aa47f8 +0x5b0b:  mov    %esi,%eax
08aa47fa +0x5b0d:  mov    %ebx,%edx
08aa47fc +0x5b0f:  mov    %eax,(%esp)
08aa47ff +0x5b12:  call   08ae3750 <_Unwind_Resume>
08aa4804 +0x5b17:  push   %ebp
08aa4805 +0x5b18:  mov    %esp,%ebp
08aa4807 +0x5b1a:  sub    $0x28,%esp
08aa480a +0x5b1d:  mov    0xc(%ebp),%edx
08aa480d +0x5b20:  mov    0x8(%ebp),%eax
08aa4810 +0x5b23:  mov    %edx,%ecx
08aa4812 +0x5b25:  sub    %eax,%ecx
08aa4814 +0x5b27:  mov    %ecx,%eax
08aa4816 +0x5b29:  sar    $0x2,%eax
08aa4819 +0x5b2c:  mov    %eax,-0xc(%ebp)
08aa481c +0x5b2f:  mov    -0xc(%ebp),%eax
08aa481f +0x5b32:  lea    0x0(,%eax,4),%edx
08aa4826 +0x5b39:  mov    -0xc(%ebp),%eax
08aa4829 +0x5b3c:  shl    $0x2,%eax
08aa482c +0x5b3f:  neg    %eax
08aa482e +0x5b41:  add    0x10(%ebp),%eax
08aa4831 +0x5b44:  mov    %edx,0x8(%esp)
08aa4835 +0x5b48:  mov    0x8(%ebp),%edx
08aa4838 +0x5b4b:  mov    %edx,0x4(%esp)
08aa483c +0x5b4f:  mov    %eax,(%esp)
08aa483f +0x5b52:  call   0807d880 <_init+0x178>
08aa4844 +0x5b57:  mov    -0xc(%ebp),%eax
08aa4847 +0x5b5a:  shl    $0x2,%eax
08aa484a +0x5b5d:  neg    %eax
08aa484c +0x5b5f:  add    0x10(%ebp),%eax
08aa484f +0x5b62:  leave
08aa4850 +0x5b63:  ret
08aa4851 +0x5b64:  push   %ebp
08aa4852 +0x5b65:  mov    %esp,%ebp
08aa4854 +0x5b67:  sub    $0x18,%esp
08aa4857 +0x5b6a:  mov    0x10(%ebp),%eax
08aa485a +0x5b6d:  mov    %eax,0x8(%esp)
08aa485e +0x5b71:  mov    0xc(%ebp),%eax
08aa4861 +0x5b74:  mov    %eax,0x4(%esp)
08aa4865 +0x5b78:  mov    0x8(%ebp),%eax
08aa4868 +0x5b7b:  mov    %eax,(%esp)
08aa486b +0x5b7e:  call   08aa4a5a <+0x5d6d>
08aa4870 +0x5b83:  leave
08aa4871 +0x5b84:  ret
08aa4872 +0x5b85:  push   %ebp
08aa4873 +0x5b86:  mov    %esp,%ebp
08aa4875 +0x5b88:  sub    $0x18,%esp
08aa4878 +0x5b8b:  mov    0xc(%ebp),%eax
08aa487b +0x5b8e:  mov    %eax,0x4(%esp)
08aa487f +0x5b92:  mov    0x8(%ebp),%eax
08aa4882 +0x5b95:  mov    %eax,(%esp)
08aa4885 +0x5b98:  call   08aa4a92 <+0x5da5>
08aa488a +0x5b9d:  xor    $0x1,%eax
08aa488d +0x5ba0:  leave
08aa488e +0x5ba1:  ret
08aa488f +0x5ba2:  nop
08aa4890 +0x5ba3:  push   %ebp
08aa4891 +0x5ba4:  mov    %esp,%ebp
08aa4893 +0x5ba6:  mov    0x8(%ebp),%eax
08aa4896 +0x5ba9:  mov    (%eax),%eax
08aa4898 +0x5bab:  lea    0x10(%eax),%edx
08aa489b +0x5bae:  mov    0x8(%ebp),%eax
08aa489e +0x5bb1:  mov    %edx,(%eax)
08aa48a0 +0x5bb3:  mov    0x8(%ebp),%eax
08aa48a3 +0x5bb6:  pop    %ebp
08aa48a4 +0x5bb7:  ret
08aa48a5 +0x5bb8:  nop
08aa48a6 +0x5bb9:  push   %ebp
08aa48a7 +0x5bba:  mov    %esp,%ebp
08aa48a9 +0x5bbc:  mov    0x8(%ebp),%eax
08aa48ac +0x5bbf:  mov    (%eax),%eax
08aa48ae +0x5bc1:  pop    %ebp
08aa48af +0x5bc2:  ret
08aa48b0 +0x5bc3:  push   %ebp
08aa48b1 +0x5bc4:  mov    %esp,%ebp
08aa48b3 +0x5bc6:  sub    $0x18,%esp
08aa48b6 +0x5bc9:  mov    0x8(%ebp),%eax
08aa48b9 +0x5bcc:  mov    %eax,(%esp)
08aa48bc +0x5bcf:  call   08aa4abc <+0x5dcf>
08aa48c1 +0x5bd4:  cmp    0xc(%ebp),%eax
08aa48c4 +0x5bd7:  setb   %al
08aa48c7 +0x5bda:  movzbl %al,%eax
08aa48ca +0x5bdd:  test   %eax,%eax
08aa48cc +0x5bdf:  setne  %al
08aa48cf +0x5be2:  test   %al,%al
08aa48d1 +0x5be4:  je     08aa48d8 <+0x5beb>
08aa48d3 +0x5be6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa48d8 +0x5beb:  mov    0xc(%ebp),%edx
08aa48db +0x5bee:  mov    %edx,%eax
08aa48dd +0x5bf0:  add    %eax,%eax
08aa48df +0x5bf2:  add    %edx,%eax
08aa48e1 +0x5bf4:  shl    $0x3,%eax
08aa48e4 +0x5bf7:  mov    %eax,(%esp)
08aa48e7 +0x5bfa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa48ec +0x5bff:  leave
08aa48ed +0x5c00:  ret
08aa48ee +0x5c01:  push   %ebp
08aa48ef +0x5c02:  mov    %esp,%ebp
08aa48f1 +0x5c04:  sub    $0x18,%esp
08aa48f4 +0x5c07:  mov    0x8(%ebp),%eax
08aa48f7 +0x5c0a:  movl   $0x0,(%eax)
08aa48fd +0x5c10:  mov    0x8(%ebp),%eax
08aa4900 +0x5c13:  movl   $0x0,0x4(%eax)
08aa4907 +0x5c1a:  mov    0x8(%ebp),%eax
08aa490a +0x5c1d:  movl   $0x0,0x8(%eax)
08aa4911 +0x5c24:  mov    0x8(%ebp),%eax
08aa4914 +0x5c27:  movl   $0x0,0xc(%eax)
08aa491b +0x5c2e:  mov    0xc(%ebp),%eax
08aa491e +0x5c31:  mov    %eax,(%esp)
08aa4921 +0x5c34:  call   08aa4427 <+0x573a>
08aa4926 +0x5c39:  mov    0x8(%ebp),%ecx
08aa4929 +0x5c3c:  mov    0x4(%eax),%edx
08aa492c +0x5c3f:  mov    (%eax),%eax
08aa492e +0x5c41:  mov    %eax,0x10(%ecx)
08aa4931 +0x5c44:  mov    %edx,0x14(%ecx)
08aa4934 +0x5c47:  leave
08aa4935 +0x5c48:  ret
08aa4936 +0x5c49:  push   %ebp
08aa4937 +0x5c4a:  mov    %esp,%ebp
08aa4939 +0x5c4c:  push   %ebx
08aa493a +0x5c4d:  sub    $0x14,%esp
08aa493d +0x5c50:  mov    0xc(%ebp),%eax
08aa4940 +0x5c53:  mov    %eax,(%esp)
08aa4943 +0x5c56:  call   08aa4ac6 <+0x5dd9>
08aa4948 +0x5c5b:  mov    %eax,%ebx
08aa494a +0x5c5d:  mov    0x8(%ebp),%eax
08aa494d +0x5c60:  mov    %eax,(%esp)
08aa4950 +0x5c63:  call   08aa4ac6 <+0x5dd9>
08aa4955 +0x5c68:  mov    0x10(%ebp),%edx
08aa4958 +0x5c6b:  mov    %edx,0x8(%esp)
08aa495c +0x5c6f:  mov    %ebx,0x4(%esp)
08aa4960 +0x5c73:  mov    %eax,(%esp)
08aa4963 +0x5c76:  call   08aa4ad9 <+0x5dec>
08aa4968 +0x5c7b:  add    $0x14,%esp
08aa496b +0x5c7e:  pop    %ebx
08aa496c +0x5c7f:  pop    %ebp
08aa496d +0x5c80:  ret
08aa496e +0x5c81:  push   %ebp
08aa496f +0x5c82:  mov    %esp,%ebp
08aa4971 +0x5c84:  push   %ebx
08aa4972 +0x5c85:  sub    $0x14,%esp
08aa4975 +0x5c88:  mov    0xc(%ebp),%eax
08aa4978 +0x5c8b:  mov    %eax,(%esp)
08aa497b +0x5c8e:  call   08aa4b1d <+0x5e30>
08aa4980 +0x5c93:  mov    %eax,%ebx
08aa4982 +0x5c95:  mov    0x8(%ebp),%eax
08aa4985 +0x5c98:  mov    %eax,(%esp)
08aa4988 +0x5c9b:  call   08aa4b1d <+0x5e30>
08aa498d +0x5ca0:  mov    0x10(%ebp),%edx
08aa4990 +0x5ca3:  mov    %edx,0x8(%esp)
08aa4994 +0x5ca7:  mov    %ebx,0x4(%esp)
08aa4998 +0x5cab:  mov    %eax,(%esp)
08aa499b +0x5cae:  call   08aa4b30 <+0x5e43>
08aa49a0 +0x5cb3:  add    $0x14,%esp
08aa49a3 +0x5cb6:  pop    %ebx
08aa49a4 +0x5cb7:  pop    %ebp
08aa49a5 +0x5cb8:  ret
08aa49a6 +0x5cb9:  push   %ebp
08aa49a7 +0x5cba:  mov    %esp,%ebp
08aa49a9 +0x5cbc:  sub    $0x18,%esp
08aa49ac +0x5cbf:  mov    0xc(%ebp),%eax
08aa49af +0x5cc2:  mov    %eax,0x4(%esp)
08aa49b3 +0x5cc6:  mov    0x8(%ebp),%eax
08aa49b6 +0x5cc9:  mov    %eax,(%esp)
08aa49b9 +0x5ccc:  call   08aa4b74 <+0x5e87>
08aa49be +0x5cd1:  xor    $0x1,%eax
08aa49c1 +0x5cd4:  leave
08aa49c2 +0x5cd5:  ret
08aa49c3 +0x5cd6:  nop
08aa49c4 +0x5cd7:  push   %ebp
08aa49c5 +0x5cd8:  mov    %esp,%ebp
08aa49c7 +0x5cda:  mov    0x8(%ebp),%eax
08aa49ca +0x5cdd:  mov    (%eax),%eax
08aa49cc +0x5cdf:  lea    0x14(%eax),%edx
08aa49cf +0x5ce2:  mov    0x8(%ebp),%eax
08aa49d2 +0x5ce5:  mov    %edx,(%eax)
08aa49d4 +0x5ce7:  mov    0x8(%ebp),%eax
08aa49d7 +0x5cea:  pop    %ebp
08aa49d8 +0x5ceb:  ret
08aa49d9 +0x5cec:  nop
08aa49da +0x5ced:  push   %ebp
08aa49db +0x5cee:  mov    %esp,%ebp
08aa49dd +0x5cf0:  mov    0x8(%ebp),%eax
08aa49e0 +0x5cf3:  mov    (%eax),%eax
08aa49e2 +0x5cf5:  pop    %ebp
08aa49e3 +0x5cf6:  ret
08aa49e4 +0x5cf7:  push   %ebp
08aa49e5 +0x5cf8:  mov    %esp,%ebp
08aa49e7 +0x5cfa:  push   %ebx
08aa49e8 +0x5cfb:  sub    $0x14,%esp
08aa49eb +0x5cfe:  mov    0xc(%ebp),%eax
08aa49ee +0x5d01:  mov    %eax,(%esp)
08aa49f1 +0x5d04:  call   08aa4b9e <+0x5eb1>
08aa49f6 +0x5d09:  mov    %eax,%ebx
08aa49f8 +0x5d0b:  mov    0x8(%ebp),%eax
08aa49fb +0x5d0e:  mov    %eax,(%esp)
08aa49fe +0x5d11:  call   08aa4b9e <+0x5eb1>
08aa4a03 +0x5d16:  mov    0x10(%ebp),%edx
08aa4a06 +0x5d19:  mov    %edx,0x8(%esp)
08aa4a0a +0x5d1d:  mov    %ebx,0x4(%esp)
08aa4a0e +0x5d21:  mov    %eax,(%esp)
08aa4a11 +0x5d24:  call   08aa4bb1 <+0x5ec4>
08aa4a16 +0x5d29:  add    $0x14,%esp
08aa4a19 +0x5d2c:  pop    %ebx
08aa4a1a +0x5d2d:  pop    %ebp
08aa4a1b +0x5d2e:  ret
08aa4a1c +0x5d2f:  push   %ebp
08aa4a1d +0x5d30:  mov    %esp,%ebp
08aa4a1f +0x5d32:  sub    $0x18,%esp
08aa4a22 +0x5d35:  mov    0xc(%ebp),%eax
08aa4a25 +0x5d38:  mov    %eax,0x4(%esp)
08aa4a29 +0x5d3c:  mov    0x8(%ebp),%eax
08aa4a2c +0x5d3f:  mov    %eax,(%esp)
08aa4a2f +0x5d42:  call   08aa4bf5 <+0x5f08>
08aa4a34 +0x5d47:  xor    $0x1,%eax
08aa4a37 +0x5d4a:  leave
08aa4a38 +0x5d4b:  ret
08aa4a39 +0x5d4c:  nop
08aa4a3a +0x5d4d:  push   %ebp
08aa4a3b +0x5d4e:  mov    %esp,%ebp
08aa4a3d +0x5d50:  mov    0x8(%ebp),%eax
08aa4a40 +0x5d53:  mov    (%eax),%eax
08aa4a42 +0x5d55:  lea    0x10(%eax),%edx
08aa4a45 +0x5d58:  mov    0x8(%ebp),%eax
08aa4a48 +0x5d5b:  mov    %edx,(%eax)
08aa4a4a +0x5d5d:  mov    0x8(%ebp),%eax
08aa4a4d +0x5d60:  pop    %ebp
08aa4a4e +0x5d61:  ret
08aa4a4f +0x5d62:  nop
08aa4a50 +0x5d63:  push   %ebp
08aa4a51 +0x5d64:  mov    %esp,%ebp
08aa4a53 +0x5d66:  mov    0x8(%ebp),%eax
08aa4a56 +0x5d69:  mov    (%eax),%eax
08aa4a58 +0x5d6b:  pop    %ebp
08aa4a59 +0x5d6c:  ret
08aa4a5a +0x5d6d:  push   %ebp
08aa4a5b +0x5d6e:  mov    %esp,%ebp
08aa4a5d +0x5d70:  push   %ebx
08aa4a5e +0x5d71:  sub    $0x14,%esp
08aa4a61 +0x5d74:  mov    0xc(%ebp),%eax
08aa4a64 +0x5d77:  mov    %eax,(%esp)
08aa4a67 +0x5d7a:  call   08aa4c1f <+0x5f32>
08aa4a6c +0x5d7f:  mov    %eax,%ebx
08aa4a6e +0x5d81:  mov    0x8(%ebp),%eax
08aa4a71 +0x5d84:  mov    %eax,(%esp)
08aa4a74 +0x5d87:  call   08aa4c1f <+0x5f32>
08aa4a79 +0x5d8c:  mov    0x10(%ebp),%edx
08aa4a7c +0x5d8f:  mov    %edx,0x8(%esp)
08aa4a80 +0x5d93:  mov    %ebx,0x4(%esp)
08aa4a84 +0x5d97:  mov    %eax,(%esp)
08aa4a87 +0x5d9a:  call   08aa4c32 <+0x5f45>
08aa4a8c +0x5d9f:  add    $0x14,%esp
08aa4a8f +0x5da2:  pop    %ebx
08aa4a90 +0x5da3:  pop    %ebp
08aa4a91 +0x5da4:  ret
08aa4a92 +0x5da5:  push   %ebp
08aa4a93 +0x5da6:  mov    %esp,%ebp
08aa4a95 +0x5da8:  push   %ebx
08aa4a96 +0x5da9:  sub    $0x14,%esp
08aa4a99 +0x5dac:  mov    0x8(%ebp),%eax
08aa4a9c +0x5daf:  mov    %eax,(%esp)
08aa4a9f +0x5db2:  call   08aa4c76 <+0x5f89>
08aa4aa4 +0x5db7:  mov    %eax,%ebx
08aa4aa6 +0x5db9:  mov    0xc(%ebp),%eax
08aa4aa9 +0x5dbc:  mov    %eax,(%esp)
08aa4aac +0x5dbf:  call   08aa4c76 <+0x5f89>
08aa4ab1 +0x5dc4:  cmp    %eax,%ebx
08aa4ab3 +0x5dc6:  sete   %al
08aa4ab6 +0x5dc9:  add    $0x14,%esp
08aa4ab9 +0x5dcc:  pop    %ebx
08aa4aba +0x5dcd:  pop    %ebp
08aa4abb +0x5dce:  ret
08aa4abc +0x5dcf:  push   %ebp
08aa4abd +0x5dd0:  mov    %esp,%ebp
08aa4abf +0x5dd2:  mov    $0xaaaaaaa,%eax
08aa4ac4 +0x5dd7:  pop    %ebp
08aa4ac5 +0x5dd8:  ret
08aa4ac6 +0x5dd9:  push   %ebp
08aa4ac7 +0x5dda:  mov    %esp,%ebp
08aa4ac9 +0x5ddc:  sub    $0x18,%esp
08aa4acc +0x5ddf:  lea    0x8(%ebp),%eax
08aa4acf +0x5de2:  mov    %eax,(%esp)
08aa4ad2 +0x5de5:  call   08aa4c80 <+0x5f93>
08aa4ad7 +0x5dea:  leave
08aa4ad8 +0x5deb:  ret
08aa4ad9 +0x5dec:  push   %ebp
08aa4ada +0x5ded:  mov    %esp,%ebp
08aa4adc +0x5def:  push   %esi
08aa4add +0x5df0:  push   %ebx
08aa4ade +0x5df1:  sub    $0x10,%esp
08aa4ae1 +0x5df4:  mov    0x10(%ebp),%eax
08aa4ae4 +0x5df7:  mov    %eax,(%esp)
08aa4ae7 +0x5dfa:  call   08aa405a <+0x536d>
08aa4aec +0x5dff:  mov    %eax,%esi
08aa4aee +0x5e01:  mov    0xc(%ebp),%eax
08aa4af1 +0x5e04:  mov    %eax,(%esp)
08aa4af4 +0x5e07:  call   08aa405a <+0x536d>
08aa4af9 +0x5e0c:  mov    %eax,%ebx
08aa4afb +0x5e0e:  mov    0x8(%ebp),%eax
08aa4afe +0x5e11:  mov    %eax,(%esp)
08aa4b01 +0x5e14:  call   08aa405a <+0x536d>
08aa4b06 +0x5e19:  mov    %esi,0x8(%esp)
08aa4b0a +0x5e1d:  mov    %ebx,0x4(%esp)
08aa4b0e +0x5e21:  mov    %eax,(%esp)
08aa4b11 +0x5e24:  call   08aa4c8a <+0x5f9d>
08aa4b16 +0x5e29:  add    $0x10,%esp
08aa4b19 +0x5e2c:  pop    %ebx
08aa4b1a +0x5e2d:  pop    %esi
08aa4b1b +0x5e2e:  pop    %ebp
08aa4b1c +0x5e2f:  ret
08aa4b1d +0x5e30:  push   %ebp
08aa4b1e +0x5e31:  mov    %esp,%ebp
08aa4b20 +0x5e33:  sub    $0x18,%esp
08aa4b23 +0x5e36:  lea    0x8(%ebp),%eax
08aa4b26 +0x5e39:  mov    %eax,(%esp)
08aa4b29 +0x5e3c:  call   08aa4cb0 <+0x5fc3>
08aa4b2e +0x5e41:  leave
08aa4b2f +0x5e42:  ret
08aa4b30 +0x5e43:  push   %ebp
08aa4b31 +0x5e44:  mov    %esp,%ebp
08aa4b33 +0x5e46:  push   %esi
08aa4b34 +0x5e47:  push   %ebx
08aa4b35 +0x5e48:  sub    $0x10,%esp
08aa4b38 +0x5e4b:  mov    0x10(%ebp),%eax
08aa4b3b +0x5e4e:  mov    %eax,(%esp)
08aa4b3e +0x5e51:  call   08aa40c8 <+0x53db>
08aa4b43 +0x5e56:  mov    %eax,%esi
08aa4b45 +0x5e58:  mov    0xc(%ebp),%eax
08aa4b48 +0x5e5b:  mov    %eax,(%esp)
08aa4b4b +0x5e5e:  call   08aa40c8 <+0x53db>
08aa4b50 +0x5e63:  mov    %eax,%ebx
08aa4b52 +0x5e65:  mov    0x8(%ebp),%eax
08aa4b55 +0x5e68:  mov    %eax,(%esp)
08aa4b58 +0x5e6b:  call   08aa40c8 <+0x53db>
08aa4b5d +0x5e70:  mov    %esi,0x8(%esp)
08aa4b61 +0x5e74:  mov    %ebx,0x4(%esp)
08aa4b65 +0x5e78:  mov    %eax,(%esp)
08aa4b68 +0x5e7b:  call   08aa4cba <+0x5fcd>
08aa4b6d +0x5e80:  add    $0x10,%esp
08aa4b70 +0x5e83:  pop    %ebx
08aa4b71 +0x5e84:  pop    %esi
08aa4b72 +0x5e85:  pop    %ebp
08aa4b73 +0x5e86:  ret
08aa4b74 +0x5e87:  push   %ebp
08aa4b75 +0x5e88:  mov    %esp,%ebp
08aa4b77 +0x5e8a:  push   %ebx
08aa4b78 +0x5e8b:  sub    $0x14,%esp
08aa4b7b +0x5e8e:  mov    0x8(%ebp),%eax
08aa4b7e +0x5e91:  mov    %eax,(%esp)
08aa4b81 +0x5e94:  call   08aa4ce0 <+0x5ff3>
08aa4b86 +0x5e99:  mov    %eax,%ebx
08aa4b88 +0x5e9b:  mov    0xc(%ebp),%eax
08aa4b8b +0x5e9e:  mov    %eax,(%esp)
08aa4b8e +0x5ea1:  call   08aa4ce0 <+0x5ff3>
08aa4b93 +0x5ea6:  cmp    %eax,%ebx
08aa4b95 +0x5ea8:  sete   %al
08aa4b98 +0x5eab:  add    $0x14,%esp
08aa4b9b +0x5eae:  pop    %ebx
08aa4b9c +0x5eaf:  pop    %ebp
08aa4b9d +0x5eb0:  ret
08aa4b9e +0x5eb1:  push   %ebp
08aa4b9f +0x5eb2:  mov    %esp,%ebp
08aa4ba1 +0x5eb4:  sub    $0x18,%esp
08aa4ba4 +0x5eb7:  lea    0x8(%ebp),%eax
08aa4ba7 +0x5eba:  mov    %eax,(%esp)
08aa4baa +0x5ebd:  call   08aa4cea <+0x5ffd>
08aa4baf +0x5ec2:  leave
08aa4bb0 +0x5ec3:  ret
08aa4bb1 +0x5ec4:  push   %ebp
08aa4bb2 +0x5ec5:  mov    %esp,%ebp
08aa4bb4 +0x5ec7:  push   %esi
08aa4bb5 +0x5ec8:  push   %ebx
08aa4bb6 +0x5ec9:  sub    $0x10,%esp
08aa4bb9 +0x5ecc:  mov    0x10(%ebp),%eax
08aa4bbc +0x5ecf:  mov    %eax,(%esp)
08aa4bbf +0x5ed2:  call   08aa41a4 <+0x54b7>
08aa4bc4 +0x5ed7:  mov    %eax,%esi
08aa4bc6 +0x5ed9:  mov    0xc(%ebp),%eax
08aa4bc9 +0x5edc:  mov    %eax,(%esp)
08aa4bcc +0x5edf:  call   08aa41a4 <+0x54b7>
08aa4bd1 +0x5ee4:  mov    %eax,%ebx
08aa4bd3 +0x5ee6:  mov    0x8(%ebp),%eax
08aa4bd6 +0x5ee9:  mov    %eax,(%esp)
08aa4bd9 +0x5eec:  call   08aa41a4 <+0x54b7>
08aa4bde +0x5ef1:  mov    %esi,0x8(%esp)
08aa4be2 +0x5ef5:  mov    %ebx,0x4(%esp)
08aa4be6 +0x5ef9:  mov    %eax,(%esp)
08aa4be9 +0x5efc:  call   08aa4cf4 <+0x6007>
08aa4bee +0x5f01:  add    $0x10,%esp
08aa4bf1 +0x5f04:  pop    %ebx
08aa4bf2 +0x5f05:  pop    %esi
08aa4bf3 +0x5f06:  pop    %ebp
08aa4bf4 +0x5f07:  ret
08aa4bf5 +0x5f08:  push   %ebp
08aa4bf6 +0x5f09:  mov    %esp,%ebp
08aa4bf8 +0x5f0b:  push   %ebx
08aa4bf9 +0x5f0c:  sub    $0x14,%esp
08aa4bfc +0x5f0f:  mov    0x8(%ebp),%eax
08aa4bff +0x5f12:  mov    %eax,(%esp)
08aa4c02 +0x5f15:  call   08aa4d1a <+0x602d>
08aa4c07 +0x5f1a:  mov    %eax,%ebx
08aa4c09 +0x5f1c:  mov    0xc(%ebp),%eax
08aa4c0c +0x5f1f:  mov    %eax,(%esp)
08aa4c0f +0x5f22:  call   08aa4d1a <+0x602d>
08aa4c14 +0x5f27:  cmp    %eax,%ebx
08aa4c16 +0x5f29:  sete   %al
08aa4c19 +0x5f2c:  add    $0x14,%esp
08aa4c1c +0x5f2f:  pop    %ebx
08aa4c1d +0x5f30:  pop    %ebp
08aa4c1e +0x5f31:  ret
08aa4c1f +0x5f32:  push   %ebp
08aa4c20 +0x5f33:  mov    %esp,%ebp
08aa4c22 +0x5f35:  sub    $0x18,%esp
08aa4c25 +0x5f38:  lea    0x8(%ebp),%eax
08aa4c28 +0x5f3b:  mov    %eax,(%esp)
08aa4c2b +0x5f3e:  call   08aa4d24 <+0x6037>
08aa4c30 +0x5f43:  leave
08aa4c31 +0x5f44:  ret
08aa4c32 +0x5f45:  push   %ebp
08aa4c33 +0x5f46:  mov    %esp,%ebp
08aa4c35 +0x5f48:  push   %esi
08aa4c36 +0x5f49:  push   %ebx
08aa4c37 +0x5f4a:  sub    $0x10,%esp
08aa4c3a +0x5f4d:  mov    0x10(%ebp),%eax
08aa4c3d +0x5f50:  mov    %eax,(%esp)
08aa4c40 +0x5f53:  call   08aa4280 <+0x5593>
08aa4c45 +0x5f58:  mov    %eax,%esi
08aa4c47 +0x5f5a:  mov    0xc(%ebp),%eax
08aa4c4a +0x5f5d:  mov    %eax,(%esp)
08aa4c4d +0x5f60:  call   08aa4280 <+0x5593>
08aa4c52 +0x5f65:  mov    %eax,%ebx
08aa4c54 +0x5f67:  mov    0x8(%ebp),%eax
08aa4c57 +0x5f6a:  mov    %eax,(%esp)
08aa4c5a +0x5f6d:  call   08aa4280 <+0x5593>
08aa4c5f +0x5f72:  mov    %esi,0x8(%esp)
08aa4c63 +0x5f76:  mov    %ebx,0x4(%esp)
08aa4c67 +0x5f7a:  mov    %eax,(%esp)
08aa4c6a +0x5f7d:  call   08aa4d2e <+0x6041>
08aa4c6f +0x5f82:  add    $0x10,%esp
08aa4c72 +0x5f85:  pop    %ebx
08aa4c73 +0x5f86:  pop    %esi
08aa4c74 +0x5f87:  pop    %ebp
08aa4c75 +0x5f88:  ret
08aa4c76 +0x5f89:  push   %ebp
08aa4c77 +0x5f8a:  mov    %esp,%ebp
08aa4c79 +0x5f8c:  mov    0x8(%ebp),%eax
08aa4c7c +0x5f8f:  mov    (%eax),%eax
08aa4c7e +0x5f91:  pop    %ebp
08aa4c7f +0x5f92:  ret
08aa4c80 +0x5f93:  push   %ebp
08aa4c81 +0x5f94:  mov    %esp,%ebp
08aa4c83 +0x5f96:  mov    0x8(%ebp),%eax
08aa4c86 +0x5f99:  mov    (%eax),%eax
08aa4c88 +0x5f9b:  pop    %ebp
08aa4c89 +0x5f9c:  ret
08aa4c8a +0x5f9d:  push   %ebp
08aa4c8b +0x5f9e:  mov    %esp,%ebp
08aa4c8d +0x5fa0:  sub    $0x28,%esp
08aa4c90 +0x5fa3:  movb   $0x1,-0x9(%ebp)
08aa4c94 +0x5fa7:  mov    0x10(%ebp),%eax
08aa4c97 +0x5faa:  mov    %eax,0x8(%esp)
08aa4c9b +0x5fae:  mov    0xc(%ebp),%eax
08aa4c9e +0x5fb1:  mov    %eax,0x4(%esp)
08aa4ca2 +0x5fb5:  mov    0x8(%ebp),%eax
08aa4ca5 +0x5fb8:  mov    %eax,(%esp)
08aa4ca8 +0x5fbb:  call   08aa4d53 <+0x6066>
08aa4cad +0x5fc0:  leave
08aa4cae +0x5fc1:  ret
08aa4caf +0x5fc2:  nop
08aa4cb0 +0x5fc3:  push   %ebp
08aa4cb1 +0x5fc4:  mov    %esp,%ebp
08aa4cb3 +0x5fc6:  mov    0x8(%ebp),%eax
08aa4cb6 +0x5fc9:  mov    (%eax),%eax
08aa4cb8 +0x5fcb:  pop    %ebp
08aa4cb9 +0x5fcc:  ret
08aa4cba +0x5fcd:  push   %ebp
08aa4cbb +0x5fce:  mov    %esp,%ebp
08aa4cbd +0x5fd0:  sub    $0x28,%esp
08aa4cc0 +0x5fd3:  movb   $0x1,-0x9(%ebp)
08aa4cc4 +0x5fd7:  mov    0x10(%ebp),%eax
08aa4cc7 +0x5fda:  mov    %eax,0x8(%esp)
08aa4ccb +0x5fde:  mov    0xc(%ebp),%eax
08aa4cce +0x5fe1:  mov    %eax,0x4(%esp)
08aa4cd2 +0x5fe5:  mov    0x8(%ebp),%eax
08aa4cd5 +0x5fe8:  mov    %eax,(%esp)
08aa4cd8 +0x5feb:  call   08aa4db4 <+0x60c7>
08aa4cdd +0x5ff0:  leave
08aa4cde +0x5ff1:  ret
08aa4cdf +0x5ff2:  nop
08aa4ce0 +0x5ff3:  push   %ebp
08aa4ce1 +0x5ff4:  mov    %esp,%ebp
08aa4ce3 +0x5ff6:  mov    0x8(%ebp),%eax
08aa4ce6 +0x5ff9:  mov    (%eax),%eax
08aa4ce8 +0x5ffb:  pop    %ebp
08aa4ce9 +0x5ffc:  ret
08aa4cea +0x5ffd:  push   %ebp
08aa4ceb +0x5ffe:  mov    %esp,%ebp
08aa4ced +0x6000:  mov    0x8(%ebp),%eax
08aa4cf0 +0x6003:  mov    (%eax),%eax
08aa4cf2 +0x6005:  pop    %ebp
08aa4cf3 +0x6006:  ret
08aa4cf4 +0x6007:  push   %ebp
08aa4cf5 +0x6008:  mov    %esp,%ebp
08aa4cf7 +0x600a:  sub    $0x28,%esp
08aa4cfa +0x600d:  movb   $0x1,-0x9(%ebp)
08aa4cfe +0x6011:  mov    0x10(%ebp),%eax
08aa4d01 +0x6014:  mov    %eax,0x8(%esp)
08aa4d05 +0x6018:  mov    0xc(%ebp),%eax
08aa4d08 +0x601b:  mov    %eax,0x4(%esp)
08aa4d0c +0x601f:  mov    0x8(%ebp),%eax
08aa4d0f +0x6022:  mov    %eax,(%esp)
08aa4d12 +0x6025:  call   08aa4df9 <+0x610c>
08aa4d17 +0x602a:  leave
08aa4d18 +0x602b:  ret
08aa4d19 +0x602c:  nop
08aa4d1a +0x602d:  push   %ebp
08aa4d1b +0x602e:  mov    %esp,%ebp
08aa4d1d +0x6030:  mov    0x8(%ebp),%eax
08aa4d20 +0x6033:  mov    (%eax),%eax
08aa4d22 +0x6035:  pop    %ebp
08aa4d23 +0x6036:  ret
08aa4d24 +0x6037:  push   %ebp
08aa4d25 +0x6038:  mov    %esp,%ebp
08aa4d27 +0x603a:  mov    0x8(%ebp),%eax
08aa4d2a +0x603d:  mov    (%eax),%eax
08aa4d2c +0x603f:  pop    %ebp
08aa4d2d +0x6040:  ret
08aa4d2e +0x6041:  push   %ebp
08aa4d2f +0x6042:  mov    %esp,%ebp
08aa4d31 +0x6044:  sub    $0x28,%esp
08aa4d34 +0x6047:  movb   $0x1,-0x9(%ebp)
08aa4d38 +0x604b:  mov    0x10(%ebp),%eax
08aa4d3b +0x604e:  mov    %eax,0x8(%esp)
08aa4d3f +0x6052:  mov    0xc(%ebp),%eax
08aa4d42 +0x6055:  mov    %eax,0x4(%esp)
08aa4d46 +0x6059:  mov    0x8(%ebp),%eax
08aa4d49 +0x605c:  mov    %eax,(%esp)
08aa4d4c +0x605f:  call   08aa4e3e <+0x6151>
08aa4d51 +0x6064:  leave
08aa4d52 +0x6065:  ret
08aa4d53 +0x6066:  push   %ebp
08aa4d54 +0x6067:  mov    %esp,%ebp
08aa4d56 +0x6069:  sub    $0x18,%esp
08aa4d59 +0x606c:  mov    0xc(%ebp),%edx
08aa4d5c +0x606f:  mov    0x8(%ebp),%eax
08aa4d5f +0x6072:  mov    %edx,%ecx
08aa4d61 +0x6074:  sub    %eax,%ecx
08aa4d63 +0x6076:  mov    %ecx,%eax
08aa4d65 +0x6078:  sar    $0x2,%eax
08aa4d68 +0x607b:  imul   $0xaaaaaaab,%eax,%eax
08aa4d6e +0x6081:  mov    %eax,%edx
08aa4d70 +0x6083:  mov    %edx,%eax
08aa4d72 +0x6085:  add    %eax,%eax
08aa4d74 +0x6087:  add    %edx,%eax
08aa4d76 +0x6089:  shl    $0x2,%eax
08aa4d79 +0x608c:  mov    %eax,0x8(%esp)
08aa4d7d +0x6090:  mov    0x8(%ebp),%eax
08aa4d80 +0x6093:  mov    %eax,0x4(%esp)
08aa4d84 +0x6097:  mov    0x10(%ebp),%eax
08aa4d87 +0x609a:  mov    %eax,(%esp)
08aa4d8a +0x609d:  call   0807d880 <_init+0x178>
08aa4d8f +0x60a2:  mov    0xc(%ebp),%edx
08aa4d92 +0x60a5:  mov    0x8(%ebp),%eax
08aa4d95 +0x60a8:  mov    %edx,%ecx
08aa4d97 +0x60aa:  sub    %eax,%ecx
08aa4d99 +0x60ac:  mov    %ecx,%eax
08aa4d9b +0x60ae:  sar    $0x2,%eax
08aa4d9e +0x60b1:  imul   $0xaaaaaaab,%eax,%eax
08aa4da4 +0x60b7:  mov    %eax,%edx
08aa4da6 +0x60b9:  mov    %edx,%eax
08aa4da8 +0x60bb:  add    %eax,%eax
08aa4daa +0x60bd:  add    %edx,%eax
08aa4dac +0x60bf:  shl    $0x2,%eax
08aa4daf +0x60c2:  add    0x10(%ebp),%eax
08aa4db2 +0x60c5:  leave
08aa4db3 +0x60c6:  ret
08aa4db4 +0x60c7:  push   %ebp
08aa4db5 +0x60c8:  mov    %esp,%ebp
08aa4db7 +0x60ca:  sub    $0x18,%esp
08aa4dba +0x60cd:  mov    0xc(%ebp),%edx
08aa4dbd +0x60d0:  mov    0x8(%ebp),%eax
08aa4dc0 +0x60d3:  mov    %edx,%ecx
08aa4dc2 +0x60d5:  sub    %eax,%ecx
08aa4dc4 +0x60d7:  mov    %ecx,%eax
08aa4dc6 +0x60d9:  sar    $0x4,%eax
08aa4dc9 +0x60dc:  shl    $0x4,%eax
08aa4dcc +0x60df:  mov    %eax,0x8(%esp)
08aa4dd0 +0x60e3:  mov    0x8(%ebp),%eax
08aa4dd3 +0x60e6:  mov    %eax,0x4(%esp)
08aa4dd7 +0x60ea:  mov    0x10(%ebp),%eax
08aa4dda +0x60ed:  mov    %eax,(%esp)
08aa4ddd +0x60f0:  call   0807d880 <_init+0x178>
08aa4de2 +0x60f5:  mov    0xc(%ebp),%edx
08aa4de5 +0x60f8:  mov    0x8(%ebp),%eax
08aa4de8 +0x60fb:  mov    %edx,%ecx
08aa4dea +0x60fd:  sub    %eax,%ecx
08aa4dec +0x60ff:  mov    %ecx,%eax
08aa4dee +0x6101:  sar    $0x4,%eax
08aa4df1 +0x6104:  shl    $0x4,%eax
08aa4df4 +0x6107:  add    0x10(%ebp),%eax
08aa4df7 +0x610a:  leave
08aa4df8 +0x610b:  ret
08aa4df9 +0x610c:  push   %ebp
08aa4dfa +0x610d:  mov    %esp,%ebp
08aa4dfc +0x610f:  sub    $0x18,%esp
08aa4dff +0x6112:  mov    0xc(%ebp),%edx
08aa4e02 +0x6115:  mov    0x8(%ebp),%eax
08aa4e05 +0x6118:  mov    %edx,%ecx
08aa4e07 +0x611a:  sub    %eax,%ecx
08aa4e09 +0x611c:  mov    %ecx,%eax
08aa4e0b +0x611e:  sar    $0x4,%eax
08aa4e0e +0x6121:  shl    $0x4,%eax
08aa4e11 +0x6124:  mov    %eax,0x8(%esp)
08aa4e15 +0x6128:  mov    0x8(%ebp),%eax
08aa4e18 +0x612b:  mov    %eax,0x4(%esp)
08aa4e1c +0x612f:  mov    0x10(%ebp),%eax
08aa4e1f +0x6132:  mov    %eax,(%esp)
08aa4e22 +0x6135:  call   0807d880 <_init+0x178>
08aa4e27 +0x613a:  mov    0xc(%ebp),%edx
08aa4e2a +0x613d:  mov    0x8(%ebp),%eax
08aa4e2d +0x6140:  mov    %edx,%ecx
08aa4e2f +0x6142:  sub    %eax,%ecx
08aa4e31 +0x6144:  mov    %ecx,%eax
08aa4e33 +0x6146:  sar    $0x4,%eax
08aa4e36 +0x6149:  shl    $0x4,%eax
08aa4e39 +0x614c:  add    0x10(%ebp),%eax
08aa4e3c +0x614f:  leave
08aa4e3d +0x6150:  ret
08aa4e3e +0x6151:  push   %ebp
08aa4e3f +0x6152:  mov    %esp,%ebp
08aa4e41 +0x6154:  sub    $0x18,%esp
08aa4e44 +0x6157:  mov    0xc(%ebp),%edx
08aa4e47 +0x615a:  mov    0x8(%ebp),%eax
08aa4e4a +0x615d:  mov    %edx,%ecx
08aa4e4c +0x615f:  sub    %eax,%ecx
08aa4e4e +0x6161:  mov    %ecx,%eax
08aa4e50 +0x6163:  sar    $0x2,%eax
08aa4e53 +0x6166:  shl    $0x2,%eax
08aa4e56 +0x6169:  mov    %eax,0x8(%esp)
08aa4e5a +0x616d:  mov    0x8(%ebp),%eax
08aa4e5d +0x6170:  mov    %eax,0x4(%esp)
08aa4e61 +0x6174:  mov    0x10(%ebp),%eax
08aa4e64 +0x6177:  mov    %eax,(%esp)
08aa4e67 +0x617a:  call   0807d880 <_init+0x178>
08aa4e6c +0x617f:  mov    0xc(%ebp),%edx
08aa4e6f +0x6182:  mov    0x8(%ebp),%eax
08aa4e72 +0x6185:  mov    %edx,%ecx
08aa4e74 +0x6187:  sub    %eax,%ecx
08aa4e76 +0x6189:  mov    %ecx,%eax
08aa4e78 +0x618b:  sar    $0x2,%eax
08aa4e7b +0x618e:  shl    $0x2,%eax
08aa4e7e +0x6191:  add    0x10(%ebp),%eax
08aa4e81 +0x6194:  leave
08aa4e82 +0x6195:  ret
08aa4e83 +0x6196:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8a9eced

/* TagSkillPenalty::TagSkillPenalty() */

void TagSkillPenalty::_GLOBAL__I_TagSkillPenalty(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
