# ~STEquipmentScript

`_ZN17STEquipmentScriptD1Ev`

`STEquipmentScript::~STEquipmentScript()`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898e298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898e298  _ZN17STEquipmentScriptD1Ev
#           STEquipmentScript::~STEquipmentScript()
# range [0x0898e298, 0x0898e9e3]
0898e298 +0x000:  push   %ebp
0898e299 +0x001:  mov    %esp,%ebp
0898e29b +0x003:  push   %esi
0898e29c +0x004:  push   %ebx
0898e29d +0x005:  sub    $0x10,%esp
0898e2a0 +0x008:  mov    0x8(%ebp),%eax
0898e2a3 +0x00b:  mov    0x804(%eax),%eax
0898e2a9 +0x011:  test   %eax,%eax
0898e2ab +0x013:  je     0898e2ca <+0x32>
0898e2ad +0x015:  mov    0x8(%ebp),%eax
0898e2b0 +0x018:  mov    0x804(%eax),%ebx
0898e2b6 +0x01e:  test   %ebx,%ebx
0898e2b8 +0x020:  je     0898e2ca <+0x32>
0898e2ba +0x022:  mov    %ebx,(%esp)
0898e2bd +0x025:  call   083755fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf5c8>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf5c8
0898e2c2 +0x02a:  mov    %ebx,(%esp)
0898e2c5 +0x02d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0898e2ca +0x032:  mov    0x8(%ebp),%eax
0898e2cd +0x035:  movl   $0x0,0x804(%eax)
0898e2d7 +0x03f:  mov    0x8(%ebp),%eax
0898e2da +0x042:  add    $0x878,%eax
0898e2df +0x047:  mov    %eax,(%esp)
0898e2e2 +0x04a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e2e7 +0x04f:  jmp    0898e31d <+0x85>
0898e2e9 +0x051:  mov    %edx,%ebx
0898e2eb +0x053:  mov    %eax,%esi
0898e2ed +0x055:  mov    0x8(%ebp),%eax
0898e2f0 +0x058:  add    $0x878,%eax
0898e2f5 +0x05d:  mov    %eax,(%esp)
0898e2f8 +0x060:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e2fd +0x065:  mov    %esi,%eax
0898e2ff +0x067:  mov    %ebx,%edx
0898e301 +0x069:  jmp    0898e303 <+0x6b>
0898e303 +0x06b:  mov    %edx,%ebx
0898e305 +0x06d:  mov    %eax,%esi
0898e307 +0x06f:  mov    0x8(%ebp),%eax
0898e30a +0x072:  add    $0x864,%eax
0898e30f +0x077:  mov    %eax,(%esp)
0898e312 +0x07a:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
0898e317 +0x07f:  mov    %esi,%eax
0898e319 +0x081:  mov    %ebx,%edx
0898e31b +0x083:  jmp    0898e32f <+0x97>
0898e31d +0x085:  mov    0x8(%ebp),%eax
0898e320 +0x088:  add    $0x864,%eax
0898e325 +0x08d:  mov    %eax,(%esp)
0898e328 +0x090:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
0898e32d +0x095:  jmp    0898e349 <+0xb1>
0898e32f +0x097:  mov    %edx,%ebx
0898e331 +0x099:  mov    %eax,%esi
0898e333 +0x09b:  mov    0x8(%ebp),%eax
0898e336 +0x09e:  add    $0x858,%eax
0898e33b +0x0a3:  mov    %eax,(%esp)
0898e33e +0x0a6:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e343 +0x0ab:  mov    %esi,%eax
0898e345 +0x0ad:  mov    %ebx,%edx
0898e347 +0x0af:  jmp    0898e35b <+0xc3>
0898e349 +0x0b1:  mov    0x8(%ebp),%eax
0898e34c +0x0b4:  add    $0x858,%eax
0898e351 +0x0b9:  mov    %eax,(%esp)
0898e354 +0x0bc:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e359 +0x0c1:  jmp    0898e375 <+0xdd>
0898e35b +0x0c3:  mov    %edx,%ebx
0898e35d +0x0c5:  mov    %eax,%esi
0898e35f +0x0c7:  mov    0x8(%ebp),%eax
0898e362 +0x0ca:  add    $0x84c,%eax
0898e367 +0x0cf:  mov    %eax,(%esp)
0898e36a +0x0d2:  call   089c56dc <_GLOBAL__I_g_npcNameVector+0x2ab7>  ; global constructors keyed to g_npcNameVector+0x2ab7
0898e36f +0x0d7:  mov    %esi,%eax
0898e371 +0x0d9:  mov    %ebx,%edx
0898e373 +0x0db:  jmp    0898e387 <+0xef>
0898e375 +0x0dd:  mov    0x8(%ebp),%eax
0898e378 +0x0e0:  add    $0x84c,%eax
0898e37d +0x0e5:  mov    %eax,(%esp)
0898e380 +0x0e8:  call   089c56dc <_GLOBAL__I_g_npcNameVector+0x2ab7>  ; global constructors keyed to g_npcNameVector+0x2ab7
0898e385 +0x0ed:  jmp    0898e3a1 <+0x109>
0898e387 +0x0ef:  mov    %edx,%ebx
0898e389 +0x0f1:  mov    %eax,%esi
0898e38b +0x0f3:  mov    0x8(%ebp),%eax
0898e38e +0x0f6:  add    $0x840,%eax
0898e393 +0x0fb:  mov    %eax,(%esp)
0898e396 +0x0fe:  call   089c566a <_GLOBAL__I_g_npcNameVector+0x2a45>  ; global constructors keyed to g_npcNameVector+0x2a45
0898e39b +0x103:  mov    %esi,%eax
0898e39d +0x105:  mov    %ebx,%edx
0898e39f +0x107:  jmp    0898e3b3 <+0x11b>
0898e3a1 +0x109:  mov    0x8(%ebp),%eax
0898e3a4 +0x10c:  add    $0x840,%eax
0898e3a9 +0x111:  mov    %eax,(%esp)
0898e3ac +0x114:  call   089c566a <_GLOBAL__I_g_npcNameVector+0x2a45>  ; global constructors keyed to g_npcNameVector+0x2a45
0898e3b1 +0x119:  jmp    0898e3cd <+0x135>
0898e3b3 +0x11b:  mov    %edx,%ebx
0898e3b5 +0x11d:  mov    %eax,%esi
0898e3b7 +0x11f:  mov    0x8(%ebp),%eax
0898e3ba +0x122:  add    $0x83c,%eax
0898e3bf +0x127:  mov    %eax,(%esp)
0898e3c2 +0x12a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e3c7 +0x12f:  mov    %esi,%eax
0898e3c9 +0x131:  mov    %ebx,%edx
0898e3cb +0x133:  jmp    0898e3df <+0x147>
0898e3cd +0x135:  mov    0x8(%ebp),%eax
0898e3d0 +0x138:  add    $0x83c,%eax
0898e3d5 +0x13d:  mov    %eax,(%esp)
0898e3d8 +0x140:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e3dd +0x145:  jmp    0898e3f9 <+0x161>
0898e3df +0x147:  mov    %edx,%ebx
0898e3e1 +0x149:  mov    %eax,%esi
0898e3e3 +0x14b:  mov    0x8(%ebp),%eax
0898e3e6 +0x14e:  add    $0x830,%eax
0898e3eb +0x153:  mov    %eax,(%esp)
0898e3ee +0x156:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e3f3 +0x15b:  mov    %esi,%eax
0898e3f5 +0x15d:  mov    %ebx,%edx
0898e3f7 +0x15f:  jmp    0898e40b <+0x173>
0898e3f9 +0x161:  mov    0x8(%ebp),%eax
0898e3fc +0x164:  add    $0x830,%eax
0898e401 +0x169:  mov    %eax,(%esp)
0898e404 +0x16c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e409 +0x171:  jmp    0898e425 <+0x18d>
0898e40b +0x173:  mov    %edx,%ebx
0898e40d +0x175:  mov    %eax,%esi
0898e40f +0x177:  mov    0x8(%ebp),%eax
0898e412 +0x17a:  add    $0x7f4,%eax
0898e417 +0x17f:  mov    %eax,(%esp)
0898e41a +0x182:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e41f +0x187:  mov    %esi,%eax
0898e421 +0x189:  mov    %ebx,%edx
0898e423 +0x18b:  jmp    0898e437 <+0x19f>
0898e425 +0x18d:  mov    0x8(%ebp),%eax
0898e428 +0x190:  add    $0x7f4,%eax
0898e42d +0x195:  mov    %eax,(%esp)
0898e430 +0x198:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e435 +0x19d:  jmp    0898e451 <+0x1b9>
0898e437 +0x19f:  mov    %edx,%ebx
0898e439 +0x1a1:  mov    %eax,%esi
0898e43b +0x1a3:  mov    0x8(%ebp),%eax
0898e43e +0x1a6:  add    $0x7f0,%eax
0898e443 +0x1ab:  mov    %eax,(%esp)
0898e446 +0x1ae:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e44b +0x1b3:  mov    %esi,%eax
0898e44d +0x1b5:  mov    %ebx,%edx
0898e44f +0x1b7:  jmp    0898e463 <+0x1cb>
0898e451 +0x1b9:  mov    0x8(%ebp),%eax
0898e454 +0x1bc:  add    $0x7f0,%eax
0898e459 +0x1c1:  mov    %eax,(%esp)
0898e45c +0x1c4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e461 +0x1c9:  jmp    0898e47d <+0x1e5>
0898e463 +0x1cb:  mov    %edx,%ebx
0898e465 +0x1cd:  mov    %eax,%esi
0898e467 +0x1cf:  mov    0x8(%ebp),%eax
0898e46a +0x1d2:  add    $0x7e4,%eax
0898e46f +0x1d7:  mov    %eax,(%esp)
0898e472 +0x1da:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898e477 +0x1df:  mov    %esi,%eax
0898e479 +0x1e1:  mov    %ebx,%edx
0898e47b +0x1e3:  jmp    0898e48f <+0x1f7>
0898e47d +0x1e5:  mov    0x8(%ebp),%eax
0898e480 +0x1e8:  add    $0x7e4,%eax
0898e485 +0x1ed:  mov    %eax,(%esp)
0898e488 +0x1f0:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898e48d +0x1f5:  jmp    0898e4a9 <+0x211>
0898e48f +0x1f7:  mov    %edx,%ebx
0898e491 +0x1f9:  mov    %eax,%esi
0898e493 +0x1fb:  mov    0x8(%ebp),%eax
0898e496 +0x1fe:  add    $0x7d8,%eax
0898e49b +0x203:  mov    %eax,(%esp)
0898e49e +0x206:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898e4a3 +0x20b:  mov    %esi,%eax
0898e4a5 +0x20d:  mov    %ebx,%edx
0898e4a7 +0x20f:  jmp    0898e4bb <+0x223>
0898e4a9 +0x211:  mov    0x8(%ebp),%eax
0898e4ac +0x214:  add    $0x7d8,%eax
0898e4b1 +0x219:  mov    %eax,(%esp)
0898e4b4 +0x21c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898e4b9 +0x221:  jmp    0898e4d5 <+0x23d>
0898e4bb +0x223:  mov    %edx,%ebx
0898e4bd +0x225:  mov    %eax,%esi
0898e4bf +0x227:  mov    0x8(%ebp),%eax
0898e4c2 +0x22a:  add    $0x7cc,%eax
0898e4c7 +0x22f:  mov    %eax,(%esp)
0898e4ca +0x232:  call   08516090 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x26c5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x26c5
0898e4cf +0x237:  mov    %esi,%eax
0898e4d1 +0x239:  mov    %ebx,%edx
0898e4d3 +0x23b:  jmp    0898e4e7 <+0x24f>
0898e4d5 +0x23d:  mov    0x8(%ebp),%eax
0898e4d8 +0x240:  add    $0x7cc,%eax
0898e4dd +0x245:  mov    %eax,(%esp)
0898e4e0 +0x248:  call   08516090 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x26c5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x26c5
0898e4e5 +0x24d:  jmp    0898e501 <+0x269>
0898e4e7 +0x24f:  mov    %edx,%ebx
0898e4e9 +0x251:  mov    %eax,%esi
0898e4eb +0x253:  mov    0x8(%ebp),%eax
0898e4ee +0x256:  add    $0x7b0,%eax
0898e4f3 +0x25b:  mov    %eax,(%esp)
0898e4f6 +0x25e:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e4fb +0x263:  mov    %esi,%eax
0898e4fd +0x265:  mov    %ebx,%edx
0898e4ff +0x267:  jmp    0898e513 <+0x27b>
0898e501 +0x269:  mov    0x8(%ebp),%eax
0898e504 +0x26c:  add    $0x7b0,%eax
0898e509 +0x271:  mov    %eax,(%esp)
0898e50c +0x274:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e511 +0x279:  jmp    0898e52d <+0x295>
0898e513 +0x27b:  mov    %edx,%ebx
0898e515 +0x27d:  mov    %eax,%esi
0898e517 +0x27f:  mov    0x8(%ebp),%eax
0898e51a +0x282:  add    $0x7a0,%eax
0898e51f +0x287:  mov    %eax,(%esp)
0898e522 +0x28a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e527 +0x28f:  mov    %esi,%eax
0898e529 +0x291:  mov    %ebx,%edx
0898e52b +0x293:  jmp    0898e53f <+0x2a7>
0898e52d +0x295:  mov    0x8(%ebp),%eax
0898e530 +0x298:  add    $0x7a0,%eax
0898e535 +0x29d:  mov    %eax,(%esp)
0898e538 +0x2a0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e53d +0x2a5:  jmp    0898e559 <+0x2c1>
0898e53f +0x2a7:  mov    %edx,%ebx
0898e541 +0x2a9:  mov    %eax,%esi
0898e543 +0x2ab:  mov    0x8(%ebp),%eax
0898e546 +0x2ae:  add    $0x780,%eax
0898e54b +0x2b3:  mov    %eax,(%esp)
0898e54e +0x2b6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e553 +0x2bb:  mov    %esi,%eax
0898e555 +0x2bd:  mov    %ebx,%edx
0898e557 +0x2bf:  jmp    0898e56b <+0x2d3>
0898e559 +0x2c1:  mov    0x8(%ebp),%eax
0898e55c +0x2c4:  add    $0x780,%eax
0898e561 +0x2c9:  mov    %eax,(%esp)
0898e564 +0x2cc:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e569 +0x2d1:  jmp    0898e585 <+0x2ed>
0898e56b +0x2d3:  mov    %edx,%ebx
0898e56d +0x2d5:  mov    %eax,%esi
0898e56f +0x2d7:  mov    0x8(%ebp),%eax
0898e572 +0x2da:  add    $0x774,%eax
0898e577 +0x2df:  mov    %eax,(%esp)
0898e57a +0x2e2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e57f +0x2e7:  mov    %esi,%eax
0898e581 +0x2e9:  mov    %ebx,%edx
0898e583 +0x2eb:  jmp    0898e597 <+0x2ff>
0898e585 +0x2ed:  mov    0x8(%ebp),%eax
0898e588 +0x2f0:  add    $0x774,%eax
0898e58d +0x2f5:  mov    %eax,(%esp)
0898e590 +0x2f8:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e595 +0x2fd:  jmp    0898e5b1 <+0x319>
0898e597 +0x2ff:  mov    %edx,%ebx
0898e599 +0x301:  mov    %eax,%esi
0898e59b +0x303:  mov    0x8(%ebp),%eax
0898e59e +0x306:  add    $0x768,%eax
0898e5a3 +0x30b:  mov    %eax,(%esp)
0898e5a6 +0x30e:  call   089c55f8 <_GLOBAL__I_g_npcNameVector+0x29d3>  ; global constructors keyed to g_npcNameVector+0x29d3
0898e5ab +0x313:  mov    %esi,%eax
0898e5ad +0x315:  mov    %ebx,%edx
0898e5af +0x317:  jmp    0898e5c3 <+0x32b>
0898e5b1 +0x319:  mov    0x8(%ebp),%eax
0898e5b4 +0x31c:  add    $0x768,%eax
0898e5b9 +0x321:  mov    %eax,(%esp)
0898e5bc +0x324:  call   089c55f8 <_GLOBAL__I_g_npcNameVector+0x29d3>  ; global constructors keyed to g_npcNameVector+0x29d3
0898e5c1 +0x329:  jmp    0898e5dd <+0x345>
0898e5c3 +0x32b:  mov    %edx,%ebx
0898e5c5 +0x32d:  mov    %eax,%esi
0898e5c7 +0x32f:  mov    0x8(%ebp),%eax
0898e5ca +0x332:  add    $0x714,%eax
0898e5cf +0x337:  mov    %eax,(%esp)
0898e5d2 +0x33a:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898e5d7 +0x33f:  mov    %esi,%eax
0898e5d9 +0x341:  mov    %ebx,%edx
0898e5db +0x343:  jmp    0898e5ef <+0x357>
0898e5dd +0x345:  mov    0x8(%ebp),%eax
0898e5e0 +0x348:  add    $0x714,%eax
0898e5e5 +0x34d:  mov    %eax,(%esp)
0898e5e8 +0x350:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898e5ed +0x355:  jmp    0898e609 <+0x371>
0898e5ef +0x357:  mov    %edx,%ebx
0898e5f1 +0x359:  mov    %eax,%esi
0898e5f3 +0x35b:  mov    0x8(%ebp),%eax
0898e5f6 +0x35e:  add    $0x6fc,%eax
0898e5fb +0x363:  mov    %eax,(%esp)
0898e5fe +0x366:  call   08514b5c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1191>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1191
0898e603 +0x36b:  mov    %esi,%eax
0898e605 +0x36d:  mov    %ebx,%edx
0898e607 +0x36f:  jmp    0898e61b <+0x383>
0898e609 +0x371:  mov    0x8(%ebp),%eax
0898e60c +0x374:  add    $0x6fc,%eax
0898e611 +0x379:  mov    %eax,(%esp)
0898e614 +0x37c:  call   08514b5c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1191>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1191
0898e619 +0x381:  jmp    0898e635 <+0x39d>
0898e61b +0x383:  mov    %edx,%ebx
0898e61d +0x385:  mov    %eax,%esi
0898e61f +0x387:  mov    0x8(%ebp),%eax
0898e622 +0x38a:  add    $0x6e8,%eax
0898e627 +0x38f:  mov    %eax,(%esp)
0898e62a +0x392:  call   089c5586 <_GLOBAL__I_g_npcNameVector+0x2961>  ; global constructors keyed to g_npcNameVector+0x2961
0898e62f +0x397:  mov    %esi,%eax
0898e631 +0x399:  mov    %ebx,%edx
0898e633 +0x39b:  jmp    0898e647 <+0x3af>
0898e635 +0x39d:  mov    0x8(%ebp),%eax
0898e638 +0x3a0:  add    $0x6e8,%eax
0898e63d +0x3a5:  mov    %eax,(%esp)
0898e640 +0x3a8:  call   089c5586 <_GLOBAL__I_g_npcNameVector+0x2961>  ; global constructors keyed to g_npcNameVector+0x2961
0898e645 +0x3ad:  jmp    0898e661 <+0x3c9>
0898e647 +0x3af:  mov    %edx,%ebx
0898e649 +0x3b1:  mov    %eax,%esi
0898e64b +0x3b3:  mov    0x8(%ebp),%eax
0898e64e +0x3b6:  add    $0x6cc,%eax
0898e653 +0x3bb:  mov    %eax,(%esp)
0898e656 +0x3be:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
0898e65b +0x3c3:  mov    %esi,%eax
0898e65d +0x3c5:  mov    %ebx,%edx
0898e65f +0x3c7:  jmp    0898e673 <+0x3db>
0898e661 +0x3c9:  mov    0x8(%ebp),%eax
0898e664 +0x3cc:  add    $0x6cc,%eax
0898e669 +0x3d1:  mov    %eax,(%esp)
0898e66c +0x3d4:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
0898e671 +0x3d9:  jmp    0898e68d <+0x3f5>
0898e673 +0x3db:  mov    %edx,%ebx
0898e675 +0x3dd:  mov    %eax,%esi
0898e677 +0x3df:  mov    0x8(%ebp),%eax
0898e67a +0x3e2:  add    $0x6c0,%eax
0898e67f +0x3e7:  mov    %eax,(%esp)
0898e682 +0x3ea:  call   08516032 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2667>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2667
0898e687 +0x3ef:  mov    %esi,%eax
0898e689 +0x3f1:  mov    %ebx,%edx
0898e68b +0x3f3:  jmp    0898e69f <+0x407>
0898e68d +0x3f5:  mov    0x8(%ebp),%eax
0898e690 +0x3f8:  add    $0x6c0,%eax
0898e695 +0x3fd:  mov    %eax,(%esp)
0898e698 +0x400:  call   08516032 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2667>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2667
0898e69d +0x405:  jmp    0898e6b9 <+0x421>
0898e69f +0x407:  mov    %edx,%ebx
0898e6a1 +0x409:  mov    %eax,%esi
0898e6a3 +0x40b:  mov    0x8(%ebp),%eax
0898e6a6 +0x40e:  add    $0x6b8,%eax
0898e6ab +0x413:  mov    %eax,(%esp)
0898e6ae +0x416:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e6b3 +0x41b:  mov    %esi,%eax
0898e6b5 +0x41d:  mov    %ebx,%edx
0898e6b7 +0x41f:  jmp    0898e6cb <+0x433>
0898e6b9 +0x421:  mov    0x8(%ebp),%eax
0898e6bc +0x424:  add    $0x6b8,%eax
0898e6c1 +0x429:  mov    %eax,(%esp)
0898e6c4 +0x42c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e6c9 +0x431:  jmp    0898e6e5 <+0x44d>
0898e6cb +0x433:  mov    %edx,%ebx
0898e6cd +0x435:  mov    %eax,%esi
0898e6cf +0x437:  mov    0x8(%ebp),%eax
0898e6d2 +0x43a:  add    $0x6b4,%eax
0898e6d7 +0x43f:  mov    %eax,(%esp)
0898e6da +0x442:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e6df +0x447:  mov    %esi,%eax
0898e6e1 +0x449:  mov    %ebx,%edx
0898e6e3 +0x44b:  jmp    0898e6f7 <+0x45f>
0898e6e5 +0x44d:  mov    0x8(%ebp),%eax
0898e6e8 +0x450:  add    $0x6b4,%eax
0898e6ed +0x455:  mov    %eax,(%esp)
0898e6f0 +0x458:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e6f5 +0x45d:  jmp    0898e711 <+0x479>
0898e6f7 +0x45f:  mov    %edx,%ebx
0898e6f9 +0x461:  mov    %eax,%esi
0898e6fb +0x463:  mov    0x8(%ebp),%eax
0898e6fe +0x466:  add    $0x6b0,%eax
0898e703 +0x46b:  mov    %eax,(%esp)
0898e706 +0x46e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e70b +0x473:  mov    %esi,%eax
0898e70d +0x475:  mov    %ebx,%edx
0898e70f +0x477:  jmp    0898e723 <+0x48b>
0898e711 +0x479:  mov    0x8(%ebp),%eax
0898e714 +0x47c:  add    $0x6b0,%eax
0898e719 +0x481:  mov    %eax,(%esp)
0898e71c +0x484:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e721 +0x489:  jmp    0898e73d <+0x4a5>
0898e723 +0x48b:  mov    %edx,%ebx
0898e725 +0x48d:  mov    %eax,%esi
0898e727 +0x48f:  mov    0x8(%ebp),%eax
0898e72a +0x492:  add    $0x6ac,%eax
0898e72f +0x497:  mov    %eax,(%esp)
0898e732 +0x49a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e737 +0x49f:  mov    %esi,%eax
0898e739 +0x4a1:  mov    %ebx,%edx
0898e73b +0x4a3:  jmp    0898e74f <+0x4b7>
0898e73d +0x4a5:  mov    0x8(%ebp),%eax
0898e740 +0x4a8:  add    $0x6ac,%eax
0898e745 +0x4ad:  mov    %eax,(%esp)
0898e748 +0x4b0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e74d +0x4b5:  jmp    0898e769 <+0x4d1>
0898e74f +0x4b7:  mov    %edx,%ebx
0898e751 +0x4b9:  mov    %eax,%esi
0898e753 +0x4bb:  mov    0x8(%ebp),%eax
0898e756 +0x4be:  add    $0x6a8,%eax
0898e75b +0x4c3:  mov    %eax,(%esp)
0898e75e +0x4c6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e763 +0x4cb:  mov    %esi,%eax
0898e765 +0x4cd:  mov    %ebx,%edx
0898e767 +0x4cf:  jmp    0898e77b <+0x4e3>
0898e769 +0x4d1:  mov    0x8(%ebp),%eax
0898e76c +0x4d4:  add    $0x6a8,%eax
0898e771 +0x4d9:  mov    %eax,(%esp)
0898e774 +0x4dc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e779 +0x4e1:  jmp    0898e795 <+0x4fd>
0898e77b +0x4e3:  mov    %edx,%ebx
0898e77d +0x4e5:  mov    %eax,%esi
0898e77f +0x4e7:  mov    0x8(%ebp),%eax
0898e782 +0x4ea:  add    $0x6a4,%eax
0898e787 +0x4ef:  mov    %eax,(%esp)
0898e78a +0x4f2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e78f +0x4f7:  mov    %esi,%eax
0898e791 +0x4f9:  mov    %ebx,%edx
0898e793 +0x4fb:  jmp    0898e7a7 <+0x50f>
0898e795 +0x4fd:  mov    0x8(%ebp),%eax
0898e798 +0x500:  add    $0x6a4,%eax
0898e79d +0x505:  mov    %eax,(%esp)
0898e7a0 +0x508:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e7a5 +0x50d:  jmp    0898e7c1 <+0x529>
0898e7a7 +0x50f:  mov    %edx,%ebx
0898e7a9 +0x511:  mov    %eax,%esi
0898e7ab +0x513:  mov    0x8(%ebp),%eax
0898e7ae +0x516:  add    $0x690,%eax
0898e7b3 +0x51b:  mov    %eax,(%esp)
0898e7b6 +0x51e:  call   089c5514 <_GLOBAL__I_g_npcNameVector+0x28ef>  ; global constructors keyed to g_npcNameVector+0x28ef
0898e7bb +0x523:  mov    %esi,%eax
0898e7bd +0x525:  mov    %ebx,%edx
0898e7bf +0x527:  jmp    0898e7d3 <+0x53b>
0898e7c1 +0x529:  mov    0x8(%ebp),%eax
0898e7c4 +0x52c:  add    $0x690,%eax
0898e7c9 +0x531:  mov    %eax,(%esp)
0898e7cc +0x534:  call   089c5514 <_GLOBAL__I_g_npcNameVector+0x28ef>  ; global constructors keyed to g_npcNameVector+0x28ef
0898e7d1 +0x539:  jmp    0898e7ed <+0x555>
0898e7d3 +0x53b:  mov    %edx,%ebx
0898e7d5 +0x53d:  mov    %eax,%esi
0898e7d7 +0x53f:  mov    0x8(%ebp),%eax
0898e7da +0x542:  add    $0x678,%eax
0898e7df +0x547:  mov    %eax,(%esp)
0898e7e2 +0x54a:  call   089c3a32 <_GLOBAL__I_g_npcNameVector+0xe0d>  ; global constructors keyed to g_npcNameVector+0xe0d
0898e7e7 +0x54f:  mov    %esi,%eax
0898e7e9 +0x551:  mov    %ebx,%edx
0898e7eb +0x553:  jmp    0898e7ff <+0x567>
0898e7ed +0x555:  mov    0x8(%ebp),%eax
0898e7f0 +0x558:  add    $0x678,%eax
0898e7f5 +0x55d:  mov    %eax,(%esp)
0898e7f8 +0x560:  call   089c3a32 <_GLOBAL__I_g_npcNameVector+0xe0d>  ; global constructors keyed to g_npcNameVector+0xe0d
0898e7fd +0x565:  jmp    0898e819 <+0x581>
0898e7ff +0x567:  mov    %edx,%ebx
0898e801 +0x569:  mov    %eax,%esi
0898e803 +0x56b:  mov    0x8(%ebp),%eax
0898e806 +0x56e:  add    $0x66c,%eax
0898e80b +0x573:  mov    %eax,(%esp)
0898e80e +0x576:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e813 +0x57b:  mov    %esi,%eax
0898e815 +0x57d:  mov    %ebx,%edx
0898e817 +0x57f:  jmp    0898e82b <+0x593>
0898e819 +0x581:  mov    0x8(%ebp),%eax
0898e81c +0x584:  add    $0x66c,%eax
0898e821 +0x589:  mov    %eax,(%esp)
0898e824 +0x58c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e829 +0x591:  jmp    0898e845 <+0x5ad>
0898e82b +0x593:  mov    %edx,%ebx
0898e82d +0x595:  mov    %eax,%esi
0898e82f +0x597:  mov    0x8(%ebp),%eax
0898e832 +0x59a:  add    $0x668,%eax
0898e837 +0x59f:  mov    %eax,(%esp)
0898e83a +0x5a2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e83f +0x5a7:  mov    %esi,%eax
0898e841 +0x5a9:  mov    %ebx,%edx
0898e843 +0x5ab:  jmp    0898e857 <+0x5bf>
0898e845 +0x5ad:  mov    0x8(%ebp),%eax
0898e848 +0x5b0:  add    $0x668,%eax
0898e84d +0x5b5:  mov    %eax,(%esp)
0898e850 +0x5b8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e855 +0x5bd:  jmp    0898e871 <+0x5d9>
0898e857 +0x5bf:  mov    %edx,%ebx
0898e859 +0x5c1:  mov    %eax,%esi
0898e85b +0x5c3:  mov    0x8(%ebp),%eax
0898e85e +0x5c6:  add    $0x664,%eax
0898e863 +0x5cb:  mov    %eax,(%esp)
0898e866 +0x5ce:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e86b +0x5d3:  mov    %esi,%eax
0898e86d +0x5d5:  mov    %ebx,%edx
0898e86f +0x5d7:  jmp    0898e883 <+0x5eb>
0898e871 +0x5d9:  mov    0x8(%ebp),%eax
0898e874 +0x5dc:  add    $0x664,%eax
0898e879 +0x5e1:  mov    %eax,(%esp)
0898e87c +0x5e4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e881 +0x5e9:  jmp    0898e89d <+0x605>
0898e883 +0x5eb:  mov    %edx,%ebx
0898e885 +0x5ed:  mov    %eax,%esi
0898e887 +0x5ef:  mov    0x8(%ebp),%eax
0898e88a +0x5f2:  add    $0x658,%eax
0898e88f +0x5f7:  mov    %eax,(%esp)
0898e892 +0x5fa:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e897 +0x5ff:  mov    %esi,%eax
0898e899 +0x601:  mov    %ebx,%edx
0898e89b +0x603:  jmp    0898e8af <+0x617>
0898e89d +0x605:  mov    0x8(%ebp),%eax
0898e8a0 +0x608:  add    $0x658,%eax
0898e8a5 +0x60d:  mov    %eax,(%esp)
0898e8a8 +0x610:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e8ad +0x615:  jmp    0898e8c9 <+0x631>
0898e8af +0x617:  mov    %edx,%ebx
0898e8b1 +0x619:  mov    %eax,%esi
0898e8b3 +0x61b:  mov    0x8(%ebp),%eax
0898e8b6 +0x61e:  add    $0x640,%eax
0898e8bb +0x623:  mov    %eax,(%esp)
0898e8be +0x626:  call   089c3a1e <_GLOBAL__I_g_npcNameVector+0xdf9>  ; global constructors keyed to g_npcNameVector+0xdf9
0898e8c3 +0x62b:  mov    %esi,%eax
0898e8c5 +0x62d:  mov    %ebx,%edx
0898e8c7 +0x62f:  jmp    0898e8db <+0x643>
0898e8c9 +0x631:  mov    0x8(%ebp),%eax
0898e8cc +0x634:  add    $0x640,%eax
0898e8d1 +0x639:  mov    %eax,(%esp)
0898e8d4 +0x63c:  call   089c3a1e <_GLOBAL__I_g_npcNameVector+0xdf9>  ; global constructors keyed to g_npcNameVector+0xdf9
0898e8d9 +0x641:  jmp    0898e8f5 <+0x65d>
0898e8db +0x643:  mov    %edx,%ebx
0898e8dd +0x645:  mov    %eax,%esi
0898e8df +0x647:  mov    0x8(%ebp),%eax
0898e8e2 +0x64a:  add    $0x1c0,%eax
0898e8e7 +0x64f:  mov    %eax,(%esp)
0898e8ea +0x652:  call   0891a4c6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x11a5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x11a5
0898e8ef +0x657:  mov    %esi,%eax
0898e8f1 +0x659:  mov    %ebx,%edx
0898e8f3 +0x65b:  jmp    0898e907 <+0x66f>
0898e8f5 +0x65d:  mov    0x8(%ebp),%eax
0898e8f8 +0x660:  add    $0x1c0,%eax
0898e8fd +0x665:  mov    %eax,(%esp)
0898e900 +0x668:  call   0891a4c6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x11a5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x11a5
0898e905 +0x66d:  jmp    0898e921 <+0x689>
0898e907 +0x66f:  mov    %edx,%ebx
0898e909 +0x671:  mov    %eax,%esi
0898e90b +0x673:  mov    0x8(%ebp),%eax
0898e90e +0x676:  add    $0x1a8,%eax
0898e913 +0x67b:  mov    %eax,(%esp)
0898e916 +0x67e:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e91b +0x683:  mov    %esi,%eax
0898e91d +0x685:  mov    %ebx,%edx
0898e91f +0x687:  jmp    0898e933 <+0x69b>
0898e921 +0x689:  mov    0x8(%ebp),%eax
0898e924 +0x68c:  add    $0x1a8,%eax
0898e929 +0x691:  mov    %eax,(%esp)
0898e92c +0x694:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e931 +0x699:  jmp    0898e94d <+0x6b5>
0898e933 +0x69b:  mov    %edx,%ebx
0898e935 +0x69d:  mov    %eax,%esi
0898e937 +0x69f:  mov    0x8(%ebp),%eax
0898e93a +0x6a2:  add    $0x1a4,%eax
0898e93f +0x6a7:  mov    %eax,(%esp)
0898e942 +0x6aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e947 +0x6af:  mov    %esi,%eax
0898e949 +0x6b1:  mov    %ebx,%edx
0898e94b +0x6b3:  jmp    0898e95f <+0x6c7>
0898e94d +0x6b5:  mov    0x8(%ebp),%eax
0898e950 +0x6b8:  add    $0x1a4,%eax
0898e955 +0x6bd:  mov    %eax,(%esp)
0898e958 +0x6c0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e95d +0x6c5:  jmp    0898e979 <+0x6e1>
0898e95f +0x6c7:  mov    %edx,%ebx
0898e961 +0x6c9:  mov    %eax,%esi
0898e963 +0x6cb:  mov    0x8(%ebp),%eax
0898e966 +0x6ce:  add    $0x198,%eax
0898e96b +0x6d3:  mov    %eax,(%esp)
0898e96e +0x6d6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e973 +0x6db:  mov    %esi,%eax
0898e975 +0x6dd:  mov    %ebx,%edx
0898e977 +0x6df:  jmp    0898e98b <+0x6f3>
0898e979 +0x6e1:  mov    0x8(%ebp),%eax
0898e97c +0x6e4:  add    $0x198,%eax
0898e981 +0x6e9:  mov    %eax,(%esp)
0898e984 +0x6ec:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e989 +0x6f1:  jmp    0898e9a5 <+0x70d>
0898e98b +0x6f3:  mov    %edx,%ebx
0898e98d +0x6f5:  mov    %eax,%esi
0898e98f +0x6f7:  mov    0x8(%ebp),%eax
0898e992 +0x6fa:  add    $0x18c,%eax
0898e997 +0x6ff:  mov    %eax,(%esp)
0898e99a +0x702:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e99f +0x707:  mov    %esi,%eax
0898e9a1 +0x709:  mov    %ebx,%edx
0898e9a3 +0x70b:  jmp    0898e9b7 <+0x71f>
0898e9a5 +0x70d:  mov    0x8(%ebp),%eax
0898e9a8 +0x710:  add    $0x18c,%eax
0898e9ad +0x715:  mov    %eax,(%esp)
0898e9b0 +0x718:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e9b5 +0x71d:  jmp    0898e9d2 <+0x73a>
0898e9b7 +0x71f:  mov    %edx,%ebx
0898e9b9 +0x721:  mov    %eax,%esi
0898e9bb +0x723:  mov    0x8(%ebp),%eax
0898e9be +0x726:  mov    %eax,(%esp)
0898e9c1 +0x729:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
0898e9c6 +0x72e:  mov    %esi,%eax
0898e9c8 +0x730:  mov    %ebx,%edx
0898e9ca +0x732:  mov    %eax,(%esp)
0898e9cd +0x735:  call   08ae3750 <_Unwind_Resume>
0898e9d2 +0x73a:  mov    0x8(%ebp),%eax
0898e9d5 +0x73d:  mov    %eax,(%esp)
0898e9d8 +0x740:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
0898e9dd +0x745:  add    $0x10,%esp
0898e9e0 +0x748:  pop    %ebx
0898e9e1 +0x749:  pop    %esi
0898e9e2 +0x74a:  pop    %ebp
0898e9e3 +0x74b:  ret
```

## 反编译 C

```c
// STEquipmentScript::~STEquipmentScript @ 0x898e298

/* STEquipmentScript::~STEquipmentScript() */

void __thiscall STEquipmentScript::~STEquipmentScript(STEquipmentScript *this)

{
  STKeyCommand *this_00;
  
  if ((*(int *)(this + 0x804) != 0) &&
     (this_00 = *(STKeyCommand **)(this + 0x804), this_00 != (STKeyCommand *)0x0)) {
                    /* try { // try from 0898e2bd to 0898e2c1 has its CatchHandler @ 0898e2e9 */
    STKeyCommand::~STKeyCommand(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x804) = 0;
                    /* try { // try from 0898e2e2 to 0898e2e6 has its CatchHandler @ 0898e303 */
  std::string::~string((string *)(this + 0x878));
                    /* try { // try from 0898e328 to 0898e32c has its CatchHandler @ 0898e32f */
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x864));
                    /* try { // try from 0898e354 to 0898e358 has its CatchHandler @ 0898e35b */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x858));
                    /* try { // try from 0898e380 to 0898e384 has its CatchHandler @ 0898e387 */
  std::vector<effect::STEffect,std::allocator<effect::STEffect>>::~vector
            ((vector<effect::STEffect,std::allocator<effect::STEffect>> *)(this + 0x84c));
                    /* try { // try from 0898e3ac to 0898e3b0 has its CatchHandler @ 0898e3b3 */
  std::vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>>::~vector
            ((vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>> *)(this + 0x840)
            );
                    /* try { // try from 0898e3d8 to 0898e3dc has its CatchHandler @ 0898e3df */
  std::string::~string((string *)(this + 0x83c));
                    /* try { // try from 0898e404 to 0898e408 has its CatchHandler @ 0898e40b */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x830));
                    /* try { // try from 0898e430 to 0898e434 has its CatchHandler @ 0898e437 */
  std::string::~string((string *)(this + 0x7f4));
                    /* try { // try from 0898e45c to 0898e460 has its CatchHandler @ 0898e463 */
  std::string::~string((string *)(this + 0x7f0));
                    /* try { // try from 0898e488 to 0898e48c has its CatchHandler @ 0898e48f */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x7e4));
                    /* try { // try from 0898e4b4 to 0898e4b8 has its CatchHandler @ 0898e4bb */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x7d8));
                    /* try { // try from 0898e4e0 to 0898e4e4 has its CatchHandler @ 0898e4e7 */
  std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::~vector
            ((vector<STEnchantSystemData,std::allocator<STEnchantSystemData>> *)(this + 0x7cc));
                    /* try { // try from 0898e50c to 0898e510 has its CatchHandler @ 0898e513 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x7b0));
                    /* try { // try from 0898e538 to 0898e53c has its CatchHandler @ 0898e53f */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x7a0));
                    /* try { // try from 0898e564 to 0898e568 has its CatchHandler @ 0898e56b */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x780));
                    /* try { // try from 0898e590 to 0898e594 has its CatchHandler @ 0898e597 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x774));
                    /* try { // try from 0898e5bc to 0898e5c0 has its CatchHandler @ 0898e5c3 */
  std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::~vector
            ((vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>> *)(this + 0x768));
                    /* try { // try from 0898e5e8 to 0898e5ec has its CatchHandler @ 0898e5ef */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x714));
                    /* try { // try from 0898e614 to 0898e618 has its CatchHandler @ 0898e61b */
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::~map((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
          *)(this + 0x6fc));
                    /* try { // try from 0898e640 to 0898e644 has its CatchHandler @ 0898e647 */
  std::vector<STChangeStatusRate,std::allocator<STChangeStatusRate>>::~vector
            ((vector<STChangeStatusRate,std::allocator<STChangeStatusRate>> *)(this + 0x6e8));
                    /* try { // try from 0898e66c to 0898e670 has its CatchHandler @ 0898e673 */
  std::vector<unsigned_short,std::allocator<unsigned_short>>::~vector
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x6cc));
                    /* try { // try from 0898e698 to 0898e69c has its CatchHandler @ 0898e69f */
  std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::~vector
            ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)(this + 0x6c0));
                    /* try { // try from 0898e6c4 to 0898e6c8 has its CatchHandler @ 0898e6cb */
  std::string::~string((string *)(this + 0x6b8));
                    /* try { // try from 0898e6f0 to 0898e6f4 has its CatchHandler @ 0898e6f7 */
  std::string::~string((string *)(this + 0x6b4));
                    /* try { // try from 0898e71c to 0898e720 has its CatchHandler @ 0898e723 */
  std::string::~string((string *)(this + 0x6b0));
                    /* try { // try from 0898e748 to 0898e74c has its CatchHandler @ 0898e74f */
  std::string::~string((string *)(this + 0x6ac));
                    /* try { // try from 0898e774 to 0898e778 has its CatchHandler @ 0898e77b */
  std::string::~string((string *)(this + 0x6a8));
                    /* try { // try from 0898e7a0 to 0898e7a4 has its CatchHandler @ 0898e7a7 */
  std::string::~string((string *)(this + 0x6a4));
                    /* try { // try from 0898e7cc to 0898e7d0 has its CatchHandler @ 0898e7d3 */
  std::vector<EquipmentParameterInfo,std::allocator<EquipmentParameterInfo>>::~vector
            ((vector<EquipmentParameterInfo,std::allocator<EquipmentParameterInfo>> *)(this + 0x690)
            );
                    /* try { // try from 0898e7f8 to 0898e7fc has its CatchHandler @ 0898e7ff */
  std::
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  ::~map((map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
          *)(this + 0x678));
                    /* try { // try from 0898e824 to 0898e828 has its CatchHandler @ 0898e82b */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x66c));
                    /* try { // try from 0898e850 to 0898e854 has its CatchHandler @ 0898e857 */
  std::string::~string((string *)(this + 0x668));
                    /* try { // try from 0898e87c to 0898e880 has its CatchHandler @ 0898e883 */
  std::string::~string((string *)(this + 0x664));
                    /* try { // try from 0898e8a8 to 0898e8ac has its CatchHandler @ 0898e8af */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x658));
                    /* try { // try from 0898e8d4 to 0898e8d8 has its CatchHandler @ 0898e8db */
  std::
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  ::~map((map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
          *)(this + 0x640));
                    /* try { // try from 0898e900 to 0898e904 has its CatchHandler @ 0898e907 */
  EquipmentParameterInfo::~EquipmentParameterInfo((EquipmentParameterInfo *)(this + 0x1c0));
                    /* try { // try from 0898e92c to 0898e930 has its CatchHandler @ 0898e933 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a8));
                    /* try { // try from 0898e958 to 0898e95c has its CatchHandler @ 0898e95f */
  std::string::~string((string *)(this + 0x1a4));
                    /* try { // try from 0898e984 to 0898e988 has its CatchHandler @ 0898e98b */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x198));
                    /* try { // try from 0898e9b0 to 0898e9b4 has its CatchHandler @ 0898e9b7 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18c));
  STItemScript::~STItemScript((STItemScript *)this);
  return;
}
```
