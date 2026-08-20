# STItemScript

`_ZN12STItemScriptC1Ev`

`STItemScript::STItemScript()`

| 类 | 地址 |
|---|---|
| `STItemScript` | `0x0898d3c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d3c6  _ZN12STItemScriptC1Ev
#           STItemScript::STItemScript()
# range [0x0898d3c6, 0x0898d717]
0898d3c6 +0x000:  push   %ebp
0898d3c7 +0x001:  mov    %esp,%ebp
0898d3c9 +0x003:  push   %esi
0898d3ca +0x004:  push   %ebx
0898d3cb +0x005:  sub    $0x10,%esp
0898d3ce +0x008:  mov    0x8(%ebp),%eax
0898d3d1 +0x00b:  add    $0x28,%eax
0898d3d4 +0x00e:  mov    %eax,(%esp)
0898d3d7 +0x011:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0898d3dc +0x016:  mov    0x8(%ebp),%eax
0898d3df +0x019:  add    $0x44,%eax
0898d3e2 +0x01c:  mov    %eax,(%esp)
0898d3e5 +0x01f:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898d3ea +0x024:  mov    0x8(%ebp),%eax
0898d3ed +0x027:  add    $0x6c,%eax
0898d3f0 +0x02a:  mov    %eax,(%esp)
0898d3f3 +0x02d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d3f8 +0x032:  mov    0x8(%ebp),%eax
0898d3fb +0x035:  add    $0x74,%eax
0898d3fe +0x038:  mov    %eax,(%esp)
0898d401 +0x03b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d406 +0x040:  mov    0x8(%ebp),%eax
0898d409 +0x043:  add    $0x7c,%eax
0898d40c +0x046:  mov    %eax,(%esp)
0898d40f +0x049:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d414 +0x04e:  mov    0x8(%ebp),%eax
0898d417 +0x051:  add    $0x84,%eax
0898d41c +0x056:  mov    %eax,(%esp)
0898d41f +0x059:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d424 +0x05e:  mov    0x8(%ebp),%eax
0898d427 +0x061:  add    $0x88,%eax
0898d42c +0x066:  mov    %eax,(%esp)
0898d42f +0x069:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898d434 +0x06e:  mov    0x8(%ebp),%eax
0898d437 +0x071:  add    $0x94,%eax
0898d43c +0x076:  mov    %eax,(%esp)
0898d43f +0x079:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898d444 +0x07e:  mov    0x8(%ebp),%eax
0898d447 +0x081:  add    $0xac,%eax
0898d44c +0x086:  mov    %eax,(%esp)
0898d44f +0x089:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d454 +0x08e:  mov    0x8(%ebp),%eax
0898d457 +0x091:  add    $0xb0,%eax
0898d45c +0x096:  mov    %eax,(%esp)
0898d45f +0x099:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d464 +0x09e:  mov    0x8(%ebp),%eax
0898d467 +0x0a1:  add    $0xb4,%eax
0898d46c +0x0a6:  mov    %eax,(%esp)
0898d46f +0x0a9:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d474 +0x0ae:  mov    0x8(%ebp),%eax
0898d477 +0x0b1:  add    $0xb8,%eax
0898d47c +0x0b6:  mov    %eax,(%esp)
0898d47f +0x0b9:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d484 +0x0be:  mov    0x8(%ebp),%eax
0898d487 +0x0c1:  add    $0xbc,%eax
0898d48c +0x0c6:  mov    %eax,(%esp)
0898d48f +0x0c9:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d494 +0x0ce:  mov    0x8(%ebp),%eax
0898d497 +0x0d1:  add    $0xc0,%eax
0898d49c +0x0d6:  mov    %eax,(%esp)
0898d49f +0x0d9:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d4a4 +0x0de:  mov    0x8(%ebp),%eax
0898d4a7 +0x0e1:  add    $0xdc,%eax
0898d4ac +0x0e6:  mov    %eax,(%esp)
0898d4af +0x0e9:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898d4b4 +0x0ee:  mov    0x8(%ebp),%eax
0898d4b7 +0x0f1:  add    $0x105,%eax
0898d4bc +0x0f6:  mov    %eax,(%esp)
0898d4bf +0x0f9:  call   08513a10 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x45>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x45
0898d4c4 +0x0fe:  mov    0x8(%ebp),%eax
0898d4c7 +0x101:  add    $0x110,%eax
0898d4cc +0x106:  mov    %eax,(%esp)
0898d4cf +0x109:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898d4d4 +0x10e:  mov    0x8(%ebp),%eax
0898d4d7 +0x111:  add    $0x11c,%eax
0898d4dc +0x116:  mov    %eax,(%esp)
0898d4df +0x119:  call   085189c6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4ffb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4ffb
0898d4e4 +0x11e:  mov    0x8(%ebp),%eax
0898d4e7 +0x121:  add    $0x138,%eax
0898d4ec +0x126:  mov    %eax,(%esp)
0898d4ef +0x129:  call   089c36aa <_GLOBAL__I_g_npcNameVector+0xa85>  ; global constructors keyed to g_npcNameVector+0xa85
0898d4f4 +0x12e:  mov    0x8(%ebp),%eax
0898d4f7 +0x131:  add    $0x164,%eax
0898d4fc +0x136:  mov    %eax,(%esp)
0898d4ff +0x139:  call   08513ac6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xfb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xfb
0898d504 +0x13e:  mov    0x8(%ebp),%eax
0898d507 +0x141:  add    $0x174,%eax
0898d50c +0x146:  mov    %eax,(%esp)
0898d50f +0x149:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898d514 +0x14e:  mov    0x8(%ebp),%eax
0898d517 +0x151:  mov    %eax,(%esp)
0898d51a +0x154:  call   0898d718 <_ZN12STItemScript5ClearEv>  ; STItemScript::Clear()
0898d51f +0x159:  jmp    0898d710 <+0x34a>
0898d524 +0x15e:  mov    %edx,%ebx
0898d526 +0x160:  mov    %eax,%esi
0898d528 +0x162:  mov    0x8(%ebp),%eax
0898d52b +0x165:  add    $0x174,%eax
0898d530 +0x16a:  mov    %eax,(%esp)
0898d533 +0x16d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d538 +0x172:  mov    %esi,%eax
0898d53a +0x174:  mov    %ebx,%edx
0898d53c +0x176:  jmp    0898d53e <+0x178>
0898d53e +0x178:  mov    %edx,%ebx
0898d540 +0x17a:  mov    %eax,%esi
0898d542 +0x17c:  mov    0x8(%ebp),%eax
0898d545 +0x17f:  add    $0x164,%eax
0898d54a +0x184:  mov    %eax,(%esp)
0898d54d +0x187:  call   085141c4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x7f9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x7f9
0898d552 +0x18c:  mov    %esi,%eax
0898d554 +0x18e:  mov    %ebx,%edx
0898d556 +0x190:  jmp    0898d558 <+0x192>
0898d558 +0x192:  mov    %edx,%ebx
0898d55a +0x194:  mov    %eax,%esi
0898d55c +0x196:  mov    0x8(%ebp),%eax
0898d55f +0x199:  add    $0x138,%eax
0898d564 +0x19e:  mov    %eax,(%esp)
0898d567 +0x1a1:  call   089c36da <_GLOBAL__I_g_npcNameVector+0xab5>  ; global constructors keyed to g_npcNameVector+0xab5
0898d56c +0x1a6:  mov    %esi,%eax
0898d56e +0x1a8:  mov    %ebx,%edx
0898d570 +0x1aa:  jmp    0898d572 <+0x1ac>
0898d572 +0x1ac:  mov    %edx,%ebx
0898d574 +0x1ae:  mov    %eax,%esi
0898d576 +0x1b0:  mov    0x8(%ebp),%eax
0898d579 +0x1b3:  add    $0x11c,%eax
0898d57e +0x1b8:  mov    %eax,(%esp)
0898d581 +0x1bb:  call   085141da <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x80f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x80f
0898d586 +0x1c0:  mov    %esi,%eax
0898d588 +0x1c2:  mov    %ebx,%edx
0898d58a +0x1c4:  jmp    0898d58c <+0x1c6>
0898d58c +0x1c6:  mov    %edx,%ebx
0898d58e +0x1c8:  mov    %eax,%esi
0898d590 +0x1ca:  mov    0x8(%ebp),%eax
0898d593 +0x1cd:  add    $0x110,%eax
0898d598 +0x1d2:  mov    %eax,(%esp)
0898d59b +0x1d5:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898d5a0 +0x1da:  mov    %esi,%eax
0898d5a2 +0x1dc:  mov    %ebx,%edx
0898d5a4 +0x1de:  jmp    0898d5a6 <+0x1e0>
0898d5a6 +0x1e0:  mov    %edx,%ebx
0898d5a8 +0x1e2:  mov    %eax,%esi
0898d5aa +0x1e4:  mov    0x8(%ebp),%eax
0898d5ad +0x1e7:  add    $0xdc,%eax
0898d5b2 +0x1ec:  mov    %eax,(%esp)
0898d5b5 +0x1ef:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898d5ba +0x1f4:  mov    %esi,%eax
0898d5bc +0x1f6:  mov    %ebx,%edx
0898d5be +0x1f8:  jmp    0898d5c0 <+0x1fa>
0898d5c0 +0x1fa:  mov    %edx,%ebx
0898d5c2 +0x1fc:  mov    %eax,%esi
0898d5c4 +0x1fe:  mov    0x8(%ebp),%eax
0898d5c7 +0x201:  add    $0xc0,%eax
0898d5cc +0x206:  mov    %eax,(%esp)
0898d5cf +0x209:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d5d4 +0x20e:  mov    %esi,%eax
0898d5d6 +0x210:  mov    %ebx,%edx
0898d5d8 +0x212:  jmp    0898d5da <+0x214>
0898d5da +0x214:  mov    %edx,%ebx
0898d5dc +0x216:  mov    %eax,%esi
0898d5de +0x218:  mov    0x8(%ebp),%eax
0898d5e1 +0x21b:  add    $0xbc,%eax
0898d5e6 +0x220:  mov    %eax,(%esp)
0898d5e9 +0x223:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d5ee +0x228:  mov    %esi,%eax
0898d5f0 +0x22a:  mov    %ebx,%edx
0898d5f2 +0x22c:  jmp    0898d5f4 <+0x22e>
0898d5f4 +0x22e:  mov    %edx,%ebx
0898d5f6 +0x230:  mov    %eax,%esi
0898d5f8 +0x232:  mov    0x8(%ebp),%eax
0898d5fb +0x235:  add    $0xb8,%eax
0898d600 +0x23a:  mov    %eax,(%esp)
0898d603 +0x23d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d608 +0x242:  mov    %esi,%eax
0898d60a +0x244:  mov    %ebx,%edx
0898d60c +0x246:  jmp    0898d60e <+0x248>
0898d60e +0x248:  mov    %edx,%ebx
0898d610 +0x24a:  mov    %eax,%esi
0898d612 +0x24c:  mov    0x8(%ebp),%eax
0898d615 +0x24f:  add    $0xb4,%eax
0898d61a +0x254:  mov    %eax,(%esp)
0898d61d +0x257:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d622 +0x25c:  mov    %esi,%eax
0898d624 +0x25e:  mov    %ebx,%edx
0898d626 +0x260:  jmp    0898d628 <+0x262>
0898d628 +0x262:  mov    %edx,%ebx
0898d62a +0x264:  mov    %eax,%esi
0898d62c +0x266:  mov    0x8(%ebp),%eax
0898d62f +0x269:  add    $0xb0,%eax
0898d634 +0x26e:  mov    %eax,(%esp)
0898d637 +0x271:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d63c +0x276:  mov    %esi,%eax
0898d63e +0x278:  mov    %ebx,%edx
0898d640 +0x27a:  jmp    0898d642 <+0x27c>
0898d642 +0x27c:  mov    %edx,%ebx
0898d644 +0x27e:  mov    %eax,%esi
0898d646 +0x280:  mov    0x8(%ebp),%eax
0898d649 +0x283:  add    $0xac,%eax
0898d64e +0x288:  mov    %eax,(%esp)
0898d651 +0x28b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d656 +0x290:  mov    %esi,%eax
0898d658 +0x292:  mov    %ebx,%edx
0898d65a +0x294:  jmp    0898d65c <+0x296>
0898d65c +0x296:  mov    %edx,%ebx
0898d65e +0x298:  mov    %eax,%esi
0898d660 +0x29a:  mov    0x8(%ebp),%eax
0898d663 +0x29d:  add    $0x94,%eax
0898d668 +0x2a2:  mov    %eax,(%esp)
0898d66b +0x2a5:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898d670 +0x2aa:  mov    %esi,%eax
0898d672 +0x2ac:  mov    %ebx,%edx
0898d674 +0x2ae:  jmp    0898d676 <+0x2b0>
0898d676 +0x2b0:  mov    %edx,%ebx
0898d678 +0x2b2:  mov    %eax,%esi
0898d67a +0x2b4:  mov    0x8(%ebp),%eax
0898d67d +0x2b7:  add    $0x88,%eax
0898d682 +0x2bc:  mov    %eax,(%esp)
0898d685 +0x2bf:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898d68a +0x2c4:  mov    %esi,%eax
0898d68c +0x2c6:  mov    %ebx,%edx
0898d68e +0x2c8:  jmp    0898d690 <+0x2ca>
0898d690 +0x2ca:  mov    %edx,%ebx
0898d692 +0x2cc:  mov    %eax,%esi
0898d694 +0x2ce:  mov    0x8(%ebp),%eax
0898d697 +0x2d1:  add    $0x84,%eax
0898d69c +0x2d6:  mov    %eax,(%esp)
0898d69f +0x2d9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d6a4 +0x2de:  mov    %esi,%eax
0898d6a6 +0x2e0:  mov    %ebx,%edx
0898d6a8 +0x2e2:  jmp    0898d6aa <+0x2e4>
0898d6aa +0x2e4:  mov    %edx,%ebx
0898d6ac +0x2e6:  mov    %eax,%esi
0898d6ae +0x2e8:  mov    0x8(%ebp),%eax
0898d6b1 +0x2eb:  add    $0x7c,%eax
0898d6b4 +0x2ee:  mov    %eax,(%esp)
0898d6b7 +0x2f1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d6bc +0x2f6:  mov    %esi,%eax
0898d6be +0x2f8:  mov    %ebx,%edx
0898d6c0 +0x2fa:  jmp    0898d6c2 <+0x2fc>
0898d6c2 +0x2fc:  mov    %edx,%ebx
0898d6c4 +0x2fe:  mov    %eax,%esi
0898d6c6 +0x300:  mov    0x8(%ebp),%eax
0898d6c9 +0x303:  add    $0x74,%eax
0898d6cc +0x306:  mov    %eax,(%esp)
0898d6cf +0x309:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d6d4 +0x30e:  mov    %esi,%eax
0898d6d6 +0x310:  mov    %ebx,%edx
0898d6d8 +0x312:  jmp    0898d6da <+0x314>
0898d6da +0x314:  mov    %edx,%ebx
0898d6dc +0x316:  mov    %eax,%esi
0898d6de +0x318:  mov    0x8(%ebp),%eax
0898d6e1 +0x31b:  add    $0x6c,%eax
0898d6e4 +0x31e:  mov    %eax,(%esp)
0898d6e7 +0x321:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898d6ec +0x326:  mov    %esi,%eax
0898d6ee +0x328:  mov    %ebx,%edx
0898d6f0 +0x32a:  jmp    0898d6f2 <+0x32c>
0898d6f2 +0x32c:  mov    %edx,%ebx
0898d6f4 +0x32e:  mov    %eax,%esi
0898d6f6 +0x330:  mov    0x8(%ebp),%eax
0898d6f9 +0x333:  add    $0x44,%eax
0898d6fc +0x336:  mov    %eax,(%esp)
0898d6ff +0x339:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898d704 +0x33e:  mov    %esi,%eax
0898d706 +0x340:  mov    %ebx,%edx
0898d708 +0x342:  mov    %eax,(%esp)
0898d70b +0x345:  call   08ae3750 <_Unwind_Resume>
0898d710 +0x34a:  add    $0x10,%esp
0898d713 +0x34d:  pop    %ebx
0898d714 +0x34e:  pop    %esi
0898d715 +0x34f:  pop    %ebp
0898d716 +0x350:  ret
0898d717 +0x351:  nop
```

## 反编译 C

```c
// STItemScript::STItemScript @ 0x898d3c6

/* STItemScript::STItemScript() */

void __thiscall STItemScript::STItemScript(STItemScript *this)

{
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x28));
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x44));
                    /* try { // try from 0898d3f3 to 0898d3f7 has its CatchHandler @ 0898d6f2 */
  std::string::string((string *)(this + 0x6c));
                    /* try { // try from 0898d401 to 0898d405 has its CatchHandler @ 0898d6da */
  std::string::string((string *)(this + 0x74));
                    /* try { // try from 0898d40f to 0898d413 has its CatchHandler @ 0898d6c2 */
  std::string::string((string *)(this + 0x7c));
                    /* try { // try from 0898d41f to 0898d423 has its CatchHandler @ 0898d6aa */
  std::string::string((string *)(this + 0x84));
                    /* try { // try from 0898d42f to 0898d433 has its CatchHandler @ 0898d690 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x88));
                    /* try { // try from 0898d43f to 0898d443 has its CatchHandler @ 0898d676 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x94));
                    /* try { // try from 0898d44f to 0898d453 has its CatchHandler @ 0898d65c */
  std::string::string((string *)(this + 0xac));
                    /* try { // try from 0898d45f to 0898d463 has its CatchHandler @ 0898d642 */
  std::string::string((string *)(this + 0xb0));
                    /* try { // try from 0898d46f to 0898d473 has its CatchHandler @ 0898d628 */
  std::string::string((string *)(this + 0xb4));
                    /* try { // try from 0898d47f to 0898d483 has its CatchHandler @ 0898d60e */
  std::string::string((string *)(this + 0xb8));
                    /* try { // try from 0898d48f to 0898d493 has its CatchHandler @ 0898d5f4 */
  std::string::string((string *)(this + 0xbc));
                    /* try { // try from 0898d49f to 0898d4a3 has its CatchHandler @ 0898d5da */
  std::string::string((string *)(this + 0xc0));
                    /* try { // try from 0898d4af to 0898d4b3 has its CatchHandler @ 0898d5c0 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xdc));
  STSpecialMonsterDrop::STSpecialMonsterDrop((STSpecialMonsterDrop *)(this + 0x105));
                    /* try { // try from 0898d4cf to 0898d4d3 has its CatchHandler @ 0898d5a6 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x110));
                    /* try { // try from 0898d4df to 0898d4e3 has its CatchHandler @ 0898d58c */
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::set((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
         *)(this + 0x11c));
                    /* try { // try from 0898d4ef to 0898d4f3 has its CatchHandler @ 0898d572 */
  SEXPERTJOB::SEXPERTJOB((SEXPERTJOB *)(this + 0x138));
                    /* try { // try from 0898d4ff to 0898d503 has its CatchHandler @ 0898d558 */
  DyeInfo::DyeInfo((DyeInfo *)(this + 0x164));
                    /* try { // try from 0898d50f to 0898d513 has its CatchHandler @ 0898d53e */
  std::string::string((string *)(this + 0x174));
                    /* try { // try from 0898d51a to 0898d51e has its CatchHandler @ 0898d524 */
  Clear(this);
  return;
}
```
