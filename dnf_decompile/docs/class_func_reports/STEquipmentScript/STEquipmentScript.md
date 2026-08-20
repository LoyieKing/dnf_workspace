# STEquipmentScript

`_ZN17STEquipmentScriptC1Ev`

`STEquipmentScript::STEquipmentScript()`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898db82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898db82  _ZN17STEquipmentScriptC1Ev
#           STEquipmentScript::STEquipmentScript()
# range [0x0898db82, 0x0898e297]
0898db82 +0x000:  push   %ebp
0898db83 +0x001:  mov    %esp,%ebp
0898db85 +0x003:  push   %esi
0898db86 +0x004:  push   %ebx
0898db87 +0x005:  sub    $0x10,%esp
0898db8a +0x008:  mov    0x8(%ebp),%eax
0898db8d +0x00b:  mov    %eax,(%esp)
0898db90 +0x00e:  call   0898d3c6 <_ZN12STItemScriptC1Ev>  ; STItemScript::STItemScript()
0898db95 +0x013:  mov    0x8(%ebp),%eax
0898db98 +0x016:  add    $0x18c,%eax
0898db9d +0x01b:  mov    %eax,(%esp)
0898dba0 +0x01e:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898dba5 +0x023:  mov    0x8(%ebp),%eax
0898dba8 +0x026:  add    $0x198,%eax
0898dbad +0x02b:  mov    %eax,(%esp)
0898dbb0 +0x02e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898dbb5 +0x033:  mov    0x8(%ebp),%eax
0898dbb8 +0x036:  add    $0x1a4,%eax
0898dbbd +0x03b:  mov    %eax,(%esp)
0898dbc0 +0x03e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dbc5 +0x043:  mov    0x8(%ebp),%eax
0898dbc8 +0x046:  add    $0x1a8,%eax
0898dbcd +0x04b:  mov    %eax,(%esp)
0898dbd0 +0x04e:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898dbd5 +0x053:  mov    0x8(%ebp),%eax
0898dbd8 +0x056:  add    $0x1c0,%eax
0898dbdd +0x05b:  mov    %eax,(%esp)
0898dbe0 +0x05e:  call   08919ce8 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x9c7>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x9c7
0898dbe5 +0x063:  mov    0x8(%ebp),%eax
0898dbe8 +0x066:  add    $0x640,%eax
0898dbed +0x06b:  mov    %eax,(%esp)
0898dbf0 +0x06e:  call   089c540c <_GLOBAL__I_g_npcNameVector+0x27e7>  ; global constructors keyed to g_npcNameVector+0x27e7
0898dbf5 +0x073:  mov    0x8(%ebp),%eax
0898dbf8 +0x076:  add    $0x658,%eax
0898dbfd +0x07b:  mov    %eax,(%esp)
0898dc00 +0x07e:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898dc05 +0x083:  mov    0x8(%ebp),%eax
0898dc08 +0x086:  add    $0x664,%eax
0898dc0d +0x08b:  mov    %eax,(%esp)
0898dc10 +0x08e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dc15 +0x093:  mov    0x8(%ebp),%eax
0898dc18 +0x096:  add    $0x668,%eax
0898dc1d +0x09b:  mov    %eax,(%esp)
0898dc20 +0x09e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dc25 +0x0a3:  mov    0x8(%ebp),%eax
0898dc28 +0x0a6:  add    $0x66c,%eax
0898dc2d +0x0ab:  mov    %eax,(%esp)
0898dc30 +0x0ae:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898dc35 +0x0b3:  mov    0x8(%ebp),%eax
0898dc38 +0x0b6:  add    $0x678,%eax
0898dc3d +0x0bb:  mov    %eax,(%esp)
0898dc40 +0x0be:  call   089c5486 <_GLOBAL__I_g_npcNameVector+0x2861>  ; global constructors keyed to g_npcNameVector+0x2861
0898dc45 +0x0c3:  mov    0x8(%ebp),%eax
0898dc48 +0x0c6:  add    $0x690,%eax
0898dc4d +0x0cb:  mov    %eax,(%esp)
0898dc50 +0x0ce:  call   089c5500 <_GLOBAL__I_g_npcNameVector+0x28db>  ; global constructors keyed to g_npcNameVector+0x28db
0898dc55 +0x0d3:  mov    0x8(%ebp),%eax
0898dc58 +0x0d6:  add    $0x6a4,%eax
0898dc5d +0x0db:  mov    %eax,(%esp)
0898dc60 +0x0de:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dc65 +0x0e3:  mov    0x8(%ebp),%eax
0898dc68 +0x0e6:  add    $0x6a8,%eax
0898dc6d +0x0eb:  mov    %eax,(%esp)
0898dc70 +0x0ee:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dc75 +0x0f3:  mov    0x8(%ebp),%eax
0898dc78 +0x0f6:  add    $0x6ac,%eax
0898dc7d +0x0fb:  mov    %eax,(%esp)
0898dc80 +0x0fe:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dc85 +0x103:  mov    0x8(%ebp),%eax
0898dc88 +0x106:  add    $0x6b0,%eax
0898dc8d +0x10b:  mov    %eax,(%esp)
0898dc90 +0x10e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dc95 +0x113:  mov    0x8(%ebp),%eax
0898dc98 +0x116:  add    $0x6b4,%eax
0898dc9d +0x11b:  mov    %eax,(%esp)
0898dca0 +0x11e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dca5 +0x123:  mov    0x8(%ebp),%eax
0898dca8 +0x126:  add    $0x6b8,%eax
0898dcad +0x12b:  mov    %eax,(%esp)
0898dcb0 +0x12e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dcb5 +0x133:  mov    0x8(%ebp),%eax
0898dcb8 +0x136:  add    $0x6c0,%eax
0898dcbd +0x13b:  mov    %eax,(%esp)
0898dcc0 +0x13e:  call   085189da <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x500f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x500f
0898dcc5 +0x143:  mov    0x8(%ebp),%eax
0898dcc8 +0x146:  add    $0x6cc,%eax
0898dccd +0x14b:  mov    %eax,(%esp)
0898dcd0 +0x14e:  call   08168420 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x281>  ; global constructors keyed to HeroMissionValue::clear()+0x281
0898dcd5 +0x153:  mov    0x8(%ebp),%eax
0898dcd8 +0x156:  add    $0x6e8,%eax
0898dcdd +0x15b:  mov    %eax,(%esp)
0898dce0 +0x15e:  call   089c5572 <_GLOBAL__I_g_npcNameVector+0x294d>  ; global constructors keyed to g_npcNameVector+0x294d
0898dce5 +0x163:  mov    0x8(%ebp),%eax
0898dce8 +0x166:  add    $0x6fc,%eax
0898dced +0x16b:  mov    %eax,(%esp)
0898dcf0 +0x16e:  call   08518a02 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5037>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5037
0898dcf5 +0x173:  mov    0x8(%ebp),%eax
0898dcf8 +0x176:  add    $0x714,%eax
0898dcfd +0x17b:  mov    %eax,(%esp)
0898dd00 +0x17e:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898dd05 +0x183:  mov    0x8(%ebp),%eax
0898dd08 +0x186:  add    $0x738,%eax
0898dd0d +0x18b:  mov    %eax,(%esp)
0898dd10 +0x18e:  call   0898f084 <_ZN17STEquipmentScript13artifact_infoC1Ev>  ; STEquipmentScript::artifact_info::artifact_info()
0898dd15 +0x193:  mov    0x8(%ebp),%eax
0898dd18 +0x196:  add    $0x768,%eax
0898dd1d +0x19b:  mov    %eax,(%esp)
0898dd20 +0x19e:  call   089c55e4 <_GLOBAL__I_g_npcNameVector+0x29bf>  ; global constructors keyed to g_npcNameVector+0x29bf
0898dd25 +0x1a3:  mov    0x8(%ebp),%eax
0898dd28 +0x1a6:  add    $0x774,%eax
0898dd2d +0x1ab:  mov    %eax,(%esp)
0898dd30 +0x1ae:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898dd35 +0x1b3:  mov    0x8(%ebp),%eax
0898dd38 +0x1b6:  add    $0x780,%eax
0898dd3d +0x1bb:  mov    %eax,(%esp)
0898dd40 +0x1be:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898dd45 +0x1c3:  mov    0x8(%ebp),%eax
0898dd48 +0x1c6:  add    $0x7a0,%eax
0898dd4d +0x1cb:  mov    %eax,(%esp)
0898dd50 +0x1ce:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898dd55 +0x1d3:  mov    0x8(%ebp),%eax
0898dd58 +0x1d6:  add    $0x7b0,%eax
0898dd5d +0x1db:  mov    %eax,(%esp)
0898dd60 +0x1de:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898dd65 +0x1e3:  mov    0x8(%ebp),%eax
0898dd68 +0x1e6:  add    $0x7cc,%eax
0898dd6d +0x1eb:  mov    %eax,(%esp)
0898dd70 +0x1ee:  call   085189ee <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5023>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5023
0898dd75 +0x1f3:  mov    0x8(%ebp),%eax
0898dd78 +0x1f6:  add    $0x7d8,%eax
0898dd7d +0x1fb:  mov    %eax,(%esp)
0898dd80 +0x1fe:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898dd85 +0x203:  mov    0x8(%ebp),%eax
0898dd88 +0x206:  add    $0x7e4,%eax
0898dd8d +0x20b:  mov    %eax,(%esp)
0898dd90 +0x20e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898dd95 +0x213:  mov    0x8(%ebp),%eax
0898dd98 +0x216:  add    $0x7f0,%eax
0898dd9d +0x21b:  mov    %eax,(%esp)
0898dda0 +0x21e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898dda5 +0x223:  mov    0x8(%ebp),%eax
0898dda8 +0x226:  add    $0x7f4,%eax
0898ddad +0x22b:  mov    %eax,(%esp)
0898ddb0 +0x22e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898ddb5 +0x233:  mov    0x8(%ebp),%eax
0898ddb8 +0x236:  add    $0x7f8,%eax
0898ddbd +0x23b:  mov    %eax,(%esp)
0898ddc0 +0x23e:  call   089c2c42 <_GLOBAL__I_g_npcNameVector+0x1d>  ; global constructors keyed to g_npcNameVector+0x1d
0898ddc5 +0x243:  mov    0x8(%ebp),%eax
0898ddc8 +0x246:  add    $0x81c,%eax
0898ddcd +0x24b:  mov    %eax,(%esp)
0898ddd0 +0x24e:  call   08513a6e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xa3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xa3
0898ddd5 +0x253:  mov    0x8(%ebp),%eax
0898ddd8 +0x256:  add    $0x824,%eax
0898dddd +0x25b:  mov    %eax,(%esp)
0898dde0 +0x25e:  call   08513a9a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xcf>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xcf
0898dde5 +0x263:  mov    0x8(%ebp),%eax
0898dde8 +0x266:  add    $0x830,%eax
0898dded +0x26b:  mov    %eax,(%esp)
0898ddf0 +0x26e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898ddf5 +0x273:  mov    0x8(%ebp),%eax
0898ddf8 +0x276:  add    $0x83c,%eax
0898ddfd +0x27b:  mov    %eax,(%esp)
0898de00 +0x27e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898de05 +0x283:  mov    0x8(%ebp),%eax
0898de08 +0x286:  add    $0x840,%eax
0898de0d +0x28b:  mov    %eax,(%esp)
0898de10 +0x28e:  call   089c5656 <_GLOBAL__I_g_npcNameVector+0x2a31>  ; global constructors keyed to g_npcNameVector+0x2a31
0898de15 +0x293:  mov    0x8(%ebp),%eax
0898de18 +0x296:  add    $0x84c,%eax
0898de1d +0x29b:  mov    %eax,(%esp)
0898de20 +0x29e:  call   089c56c8 <_GLOBAL__I_g_npcNameVector+0x2aa3>  ; global constructors keyed to g_npcNameVector+0x2aa3
0898de25 +0x2a3:  mov    0x8(%ebp),%eax
0898de28 +0x2a6:  add    $0x858,%eax
0898de2d +0x2ab:  mov    %eax,(%esp)
0898de30 +0x2ae:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0898de35 +0x2b3:  mov    0x8(%ebp),%eax
0898de38 +0x2b6:  add    $0x864,%eax
0898de3d +0x2bb:  mov    %eax,(%esp)
0898de40 +0x2be:  call   0814ab92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x931>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x931
0898de45 +0x2c3:  mov    0x8(%ebp),%eax
0898de48 +0x2c6:  add    $0x878,%eax
0898de4d +0x2cb:  mov    %eax,(%esp)
0898de50 +0x2ce:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898de55 +0x2d3:  mov    0x8(%ebp),%eax
0898de58 +0x2d6:  mov    %eax,(%esp)
0898de5b +0x2d9:  call   0898e9e4 <_ZN17STEquipmentScript5ClearEv>  ; STEquipmentScript::Clear()
0898de60 +0x2de:  jmp    0898e290 <+0x70e>
0898de65 +0x2e3:  mov    %edx,%ebx
0898de67 +0x2e5:  mov    %eax,%esi
0898de69 +0x2e7:  mov    0x8(%ebp),%eax
0898de6c +0x2ea:  add    $0x878,%eax
0898de71 +0x2ef:  mov    %eax,(%esp)
0898de74 +0x2f2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898de79 +0x2f7:  mov    %esi,%eax
0898de7b +0x2f9:  mov    %ebx,%edx
0898de7d +0x2fb:  jmp    0898de7f <+0x2fd>
0898de7f +0x2fd:  mov    %edx,%ebx
0898de81 +0x2ff:  mov    %eax,%esi
0898de83 +0x301:  mov    0x8(%ebp),%eax
0898de86 +0x304:  add    $0x864,%eax
0898de8b +0x309:  mov    %eax,(%esp)
0898de8e +0x30c:  call   0814aba6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x945>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x945
0898de93 +0x311:  mov    %esi,%eax
0898de95 +0x313:  mov    %ebx,%edx
0898de97 +0x315:  jmp    0898de99 <+0x317>
0898de99 +0x317:  mov    %edx,%ebx
0898de9b +0x319:  mov    %eax,%esi
0898de9d +0x31b:  mov    0x8(%ebp),%eax
0898dea0 +0x31e:  add    $0x858,%eax
0898dea5 +0x323:  mov    %eax,(%esp)
0898dea8 +0x326:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898dead +0x32b:  mov    %esi,%eax
0898deaf +0x32d:  mov    %ebx,%edx
0898deb1 +0x32f:  jmp    0898deb3 <+0x331>
0898deb3 +0x331:  mov    %edx,%ebx
0898deb5 +0x333:  mov    %eax,%esi
0898deb7 +0x335:  mov    0x8(%ebp),%eax
0898deba +0x338:  add    $0x84c,%eax
0898debf +0x33d:  mov    %eax,(%esp)
0898dec2 +0x340:  call   089c56dc <_GLOBAL__I_g_npcNameVector+0x2ab7>  ; global constructors keyed to g_npcNameVector+0x2ab7
0898dec7 +0x345:  mov    %esi,%eax
0898dec9 +0x347:  mov    %ebx,%edx
0898decb +0x349:  jmp    0898decd <+0x34b>
0898decd +0x34b:  mov    %edx,%ebx
0898decf +0x34d:  mov    %eax,%esi
0898ded1 +0x34f:  mov    0x8(%ebp),%eax
0898ded4 +0x352:  add    $0x840,%eax
0898ded9 +0x357:  mov    %eax,(%esp)
0898dedc +0x35a:  call   089c566a <_GLOBAL__I_g_npcNameVector+0x2a45>  ; global constructors keyed to g_npcNameVector+0x2a45
0898dee1 +0x35f:  mov    %esi,%eax
0898dee3 +0x361:  mov    %ebx,%edx
0898dee5 +0x363:  jmp    0898dee7 <+0x365>
0898dee7 +0x365:  mov    %edx,%ebx
0898dee9 +0x367:  mov    %eax,%esi
0898deeb +0x369:  mov    0x8(%ebp),%eax
0898deee +0x36c:  add    $0x83c,%eax
0898def3 +0x371:  mov    %eax,(%esp)
0898def6 +0x374:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898defb +0x379:  mov    %esi,%eax
0898defd +0x37b:  mov    %ebx,%edx
0898deff +0x37d:  jmp    0898df01 <+0x37f>
0898df01 +0x37f:  mov    %edx,%ebx
0898df03 +0x381:  mov    %eax,%esi
0898df05 +0x383:  mov    0x8(%ebp),%eax
0898df08 +0x386:  add    $0x830,%eax
0898df0d +0x38b:  mov    %eax,(%esp)
0898df10 +0x38e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898df15 +0x393:  mov    %esi,%eax
0898df17 +0x395:  mov    %ebx,%edx
0898df19 +0x397:  jmp    0898df1b <+0x399>
0898df1b +0x399:  mov    %edx,%ebx
0898df1d +0x39b:  mov    %eax,%esi
0898df1f +0x39d:  mov    0x8(%ebp),%eax
0898df22 +0x3a0:  add    $0x7f4,%eax
0898df27 +0x3a5:  mov    %eax,(%esp)
0898df2a +0x3a8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898df2f +0x3ad:  mov    %esi,%eax
0898df31 +0x3af:  mov    %ebx,%edx
0898df33 +0x3b1:  jmp    0898df35 <+0x3b3>
0898df35 +0x3b3:  mov    %edx,%ebx
0898df37 +0x3b5:  mov    %eax,%esi
0898df39 +0x3b7:  mov    0x8(%ebp),%eax
0898df3c +0x3ba:  add    $0x7f0,%eax
0898df41 +0x3bf:  mov    %eax,(%esp)
0898df44 +0x3c2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898df49 +0x3c7:  mov    %esi,%eax
0898df4b +0x3c9:  mov    %ebx,%edx
0898df4d +0x3cb:  jmp    0898df4f <+0x3cd>
0898df4f +0x3cd:  mov    %edx,%ebx
0898df51 +0x3cf:  mov    %eax,%esi
0898df53 +0x3d1:  mov    0x8(%ebp),%eax
0898df56 +0x3d4:  add    $0x7e4,%eax
0898df5b +0x3d9:  mov    %eax,(%esp)
0898df5e +0x3dc:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898df63 +0x3e1:  mov    %esi,%eax
0898df65 +0x3e3:  mov    %ebx,%edx
0898df67 +0x3e5:  jmp    0898df69 <+0x3e7>
0898df69 +0x3e7:  mov    %edx,%ebx
0898df6b +0x3e9:  mov    %eax,%esi
0898df6d +0x3eb:  mov    0x8(%ebp),%eax
0898df70 +0x3ee:  add    $0x7d8,%eax
0898df75 +0x3f3:  mov    %eax,(%esp)
0898df78 +0x3f6:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898df7d +0x3fb:  mov    %esi,%eax
0898df7f +0x3fd:  mov    %ebx,%edx
0898df81 +0x3ff:  jmp    0898df83 <+0x401>
0898df83 +0x401:  mov    %edx,%ebx
0898df85 +0x403:  mov    %eax,%esi
0898df87 +0x405:  mov    0x8(%ebp),%eax
0898df8a +0x408:  add    $0x7cc,%eax
0898df8f +0x40d:  mov    %eax,(%esp)
0898df92 +0x410:  call   08516090 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x26c5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x26c5
0898df97 +0x415:  mov    %esi,%eax
0898df99 +0x417:  mov    %ebx,%edx
0898df9b +0x419:  jmp    0898df9d <+0x41b>
0898df9d +0x41b:  mov    %edx,%ebx
0898df9f +0x41d:  mov    %eax,%esi
0898dfa1 +0x41f:  mov    0x8(%ebp),%eax
0898dfa4 +0x422:  add    $0x7b0,%eax
0898dfa9 +0x427:  mov    %eax,(%esp)
0898dfac +0x42a:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898dfb1 +0x42f:  mov    %esi,%eax
0898dfb3 +0x431:  mov    %ebx,%edx
0898dfb5 +0x433:  jmp    0898dfb7 <+0x435>
0898dfb7 +0x435:  mov    %edx,%ebx
0898dfb9 +0x437:  mov    %eax,%esi
0898dfbb +0x439:  mov    0x8(%ebp),%eax
0898dfbe +0x43c:  add    $0x7a0,%eax
0898dfc3 +0x441:  mov    %eax,(%esp)
0898dfc6 +0x444:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898dfcb +0x449:  mov    %esi,%eax
0898dfcd +0x44b:  mov    %ebx,%edx
0898dfcf +0x44d:  jmp    0898dfd1 <+0x44f>
0898dfd1 +0x44f:  mov    %edx,%ebx
0898dfd3 +0x451:  mov    %eax,%esi
0898dfd5 +0x453:  mov    0x8(%ebp),%eax
0898dfd8 +0x456:  add    $0x780,%eax
0898dfdd +0x45b:  mov    %eax,(%esp)
0898dfe0 +0x45e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898dfe5 +0x463:  mov    %esi,%eax
0898dfe7 +0x465:  mov    %ebx,%edx
0898dfe9 +0x467:  jmp    0898dfeb <+0x469>
0898dfeb +0x469:  mov    %edx,%ebx
0898dfed +0x46b:  mov    %eax,%esi
0898dfef +0x46d:  mov    0x8(%ebp),%eax
0898dff2 +0x470:  add    $0x774,%eax
0898dff7 +0x475:  mov    %eax,(%esp)
0898dffa +0x478:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898dfff +0x47d:  mov    %esi,%eax
0898e001 +0x47f:  mov    %ebx,%edx
0898e003 +0x481:  jmp    0898e005 <+0x483>
0898e005 +0x483:  mov    %edx,%ebx
0898e007 +0x485:  mov    %eax,%esi
0898e009 +0x487:  mov    0x8(%ebp),%eax
0898e00c +0x48a:  add    $0x768,%eax
0898e011 +0x48f:  mov    %eax,(%esp)
0898e014 +0x492:  call   089c55f8 <_GLOBAL__I_g_npcNameVector+0x29d3>  ; global constructors keyed to g_npcNameVector+0x29d3
0898e019 +0x497:  mov    %esi,%eax
0898e01b +0x499:  mov    %ebx,%edx
0898e01d +0x49b:  jmp    0898e01f <+0x49d>
0898e01f +0x49d:  mov    %edx,%ebx
0898e021 +0x49f:  mov    %eax,%esi
0898e023 +0x4a1:  mov    0x8(%ebp),%eax
0898e026 +0x4a4:  add    $0x714,%eax
0898e02b +0x4a9:  mov    %eax,(%esp)
0898e02e +0x4ac:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898e033 +0x4b1:  mov    %esi,%eax
0898e035 +0x4b3:  mov    %ebx,%edx
0898e037 +0x4b5:  jmp    0898e039 <+0x4b7>
0898e039 +0x4b7:  mov    %edx,%ebx
0898e03b +0x4b9:  mov    %eax,%esi
0898e03d +0x4bb:  mov    0x8(%ebp),%eax
0898e040 +0x4be:  add    $0x6fc,%eax
0898e045 +0x4c3:  mov    %eax,(%esp)
0898e048 +0x4c6:  call   08514b5c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1191>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1191
0898e04d +0x4cb:  mov    %esi,%eax
0898e04f +0x4cd:  mov    %ebx,%edx
0898e051 +0x4cf:  jmp    0898e053 <+0x4d1>
0898e053 +0x4d1:  mov    %edx,%ebx
0898e055 +0x4d3:  mov    %eax,%esi
0898e057 +0x4d5:  mov    0x8(%ebp),%eax
0898e05a +0x4d8:  add    $0x6e8,%eax
0898e05f +0x4dd:  mov    %eax,(%esp)
0898e062 +0x4e0:  call   089c5586 <_GLOBAL__I_g_npcNameVector+0x2961>  ; global constructors keyed to g_npcNameVector+0x2961
0898e067 +0x4e5:  mov    %esi,%eax
0898e069 +0x4e7:  mov    %ebx,%edx
0898e06b +0x4e9:  jmp    0898e06d <+0x4eb>
0898e06d +0x4eb:  mov    %edx,%ebx
0898e06f +0x4ed:  mov    %eax,%esi
0898e071 +0x4ef:  mov    0x8(%ebp),%eax
0898e074 +0x4f2:  add    $0x6cc,%eax
0898e079 +0x4f7:  mov    %eax,(%esp)
0898e07c +0x4fa:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
0898e081 +0x4ff:  mov    %esi,%eax
0898e083 +0x501:  mov    %ebx,%edx
0898e085 +0x503:  jmp    0898e087 <+0x505>
0898e087 +0x505:  mov    %edx,%ebx
0898e089 +0x507:  mov    %eax,%esi
0898e08b +0x509:  mov    0x8(%ebp),%eax
0898e08e +0x50c:  add    $0x6c0,%eax
0898e093 +0x511:  mov    %eax,(%esp)
0898e096 +0x514:  call   08516032 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2667>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2667
0898e09b +0x519:  mov    %esi,%eax
0898e09d +0x51b:  mov    %ebx,%edx
0898e09f +0x51d:  jmp    0898e0a1 <+0x51f>
0898e0a1 +0x51f:  mov    %edx,%ebx
0898e0a3 +0x521:  mov    %eax,%esi
0898e0a5 +0x523:  mov    0x8(%ebp),%eax
0898e0a8 +0x526:  add    $0x6b8,%eax
0898e0ad +0x52b:  mov    %eax,(%esp)
0898e0b0 +0x52e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e0b5 +0x533:  mov    %esi,%eax
0898e0b7 +0x535:  mov    %ebx,%edx
0898e0b9 +0x537:  jmp    0898e0bb <+0x539>
0898e0bb +0x539:  mov    %edx,%ebx
0898e0bd +0x53b:  mov    %eax,%esi
0898e0bf +0x53d:  mov    0x8(%ebp),%eax
0898e0c2 +0x540:  add    $0x6b4,%eax
0898e0c7 +0x545:  mov    %eax,(%esp)
0898e0ca +0x548:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e0cf +0x54d:  mov    %esi,%eax
0898e0d1 +0x54f:  mov    %ebx,%edx
0898e0d3 +0x551:  jmp    0898e0d5 <+0x553>
0898e0d5 +0x553:  mov    %edx,%ebx
0898e0d7 +0x555:  mov    %eax,%esi
0898e0d9 +0x557:  mov    0x8(%ebp),%eax
0898e0dc +0x55a:  add    $0x6b0,%eax
0898e0e1 +0x55f:  mov    %eax,(%esp)
0898e0e4 +0x562:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e0e9 +0x567:  mov    %esi,%eax
0898e0eb +0x569:  mov    %ebx,%edx
0898e0ed +0x56b:  jmp    0898e0ef <+0x56d>
0898e0ef +0x56d:  mov    %edx,%ebx
0898e0f1 +0x56f:  mov    %eax,%esi
0898e0f3 +0x571:  mov    0x8(%ebp),%eax
0898e0f6 +0x574:  add    $0x6ac,%eax
0898e0fb +0x579:  mov    %eax,(%esp)
0898e0fe +0x57c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e103 +0x581:  mov    %esi,%eax
0898e105 +0x583:  mov    %ebx,%edx
0898e107 +0x585:  jmp    0898e109 <+0x587>
0898e109 +0x587:  mov    %edx,%ebx
0898e10b +0x589:  mov    %eax,%esi
0898e10d +0x58b:  mov    0x8(%ebp),%eax
0898e110 +0x58e:  add    $0x6a8,%eax
0898e115 +0x593:  mov    %eax,(%esp)
0898e118 +0x596:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e11d +0x59b:  mov    %esi,%eax
0898e11f +0x59d:  mov    %ebx,%edx
0898e121 +0x59f:  jmp    0898e123 <+0x5a1>
0898e123 +0x5a1:  mov    %edx,%ebx
0898e125 +0x5a3:  mov    %eax,%esi
0898e127 +0x5a5:  mov    0x8(%ebp),%eax
0898e12a +0x5a8:  add    $0x6a4,%eax
0898e12f +0x5ad:  mov    %eax,(%esp)
0898e132 +0x5b0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e137 +0x5b5:  mov    %esi,%eax
0898e139 +0x5b7:  mov    %ebx,%edx
0898e13b +0x5b9:  jmp    0898e13d <+0x5bb>
0898e13d +0x5bb:  mov    %edx,%ebx
0898e13f +0x5bd:  mov    %eax,%esi
0898e141 +0x5bf:  mov    0x8(%ebp),%eax
0898e144 +0x5c2:  add    $0x690,%eax
0898e149 +0x5c7:  mov    %eax,(%esp)
0898e14c +0x5ca:  call   089c5514 <_GLOBAL__I_g_npcNameVector+0x28ef>  ; global constructors keyed to g_npcNameVector+0x28ef
0898e151 +0x5cf:  mov    %esi,%eax
0898e153 +0x5d1:  mov    %ebx,%edx
0898e155 +0x5d3:  jmp    0898e157 <+0x5d5>
0898e157 +0x5d5:  mov    %edx,%ebx
0898e159 +0x5d7:  mov    %eax,%esi
0898e15b +0x5d9:  mov    0x8(%ebp),%eax
0898e15e +0x5dc:  add    $0x678,%eax
0898e163 +0x5e1:  mov    %eax,(%esp)
0898e166 +0x5e4:  call   089c3a32 <_GLOBAL__I_g_npcNameVector+0xe0d>  ; global constructors keyed to g_npcNameVector+0xe0d
0898e16b +0x5e9:  mov    %esi,%eax
0898e16d +0x5eb:  mov    %ebx,%edx
0898e16f +0x5ed:  jmp    0898e171 <+0x5ef>
0898e171 +0x5ef:  mov    %edx,%ebx
0898e173 +0x5f1:  mov    %eax,%esi
0898e175 +0x5f3:  mov    0x8(%ebp),%eax
0898e178 +0x5f6:  add    $0x66c,%eax
0898e17d +0x5fb:  mov    %eax,(%esp)
0898e180 +0x5fe:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e185 +0x603:  mov    %esi,%eax
0898e187 +0x605:  mov    %ebx,%edx
0898e189 +0x607:  jmp    0898e18b <+0x609>
0898e18b +0x609:  mov    %edx,%ebx
0898e18d +0x60b:  mov    %eax,%esi
0898e18f +0x60d:  mov    0x8(%ebp),%eax
0898e192 +0x610:  add    $0x668,%eax
0898e197 +0x615:  mov    %eax,(%esp)
0898e19a +0x618:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e19f +0x61d:  mov    %esi,%eax
0898e1a1 +0x61f:  mov    %ebx,%edx
0898e1a3 +0x621:  jmp    0898e1a5 <+0x623>
0898e1a5 +0x623:  mov    %edx,%ebx
0898e1a7 +0x625:  mov    %eax,%esi
0898e1a9 +0x627:  mov    0x8(%ebp),%eax
0898e1ac +0x62a:  add    $0x664,%eax
0898e1b1 +0x62f:  mov    %eax,(%esp)
0898e1b4 +0x632:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e1b9 +0x637:  mov    %esi,%eax
0898e1bb +0x639:  mov    %ebx,%edx
0898e1bd +0x63b:  jmp    0898e1bf <+0x63d>
0898e1bf +0x63d:  mov    %edx,%ebx
0898e1c1 +0x63f:  mov    %eax,%esi
0898e1c3 +0x641:  mov    0x8(%ebp),%eax
0898e1c6 +0x644:  add    $0x658,%eax
0898e1cb +0x649:  mov    %eax,(%esp)
0898e1ce +0x64c:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e1d3 +0x651:  mov    %esi,%eax
0898e1d5 +0x653:  mov    %ebx,%edx
0898e1d7 +0x655:  jmp    0898e1d9 <+0x657>
0898e1d9 +0x657:  mov    %edx,%ebx
0898e1db +0x659:  mov    %eax,%esi
0898e1dd +0x65b:  mov    0x8(%ebp),%eax
0898e1e0 +0x65e:  add    $0x640,%eax
0898e1e5 +0x663:  mov    %eax,(%esp)
0898e1e8 +0x666:  call   089c3a1e <_GLOBAL__I_g_npcNameVector+0xdf9>  ; global constructors keyed to g_npcNameVector+0xdf9
0898e1ed +0x66b:  mov    %esi,%eax
0898e1ef +0x66d:  mov    %ebx,%edx
0898e1f1 +0x66f:  jmp    0898e1f3 <+0x671>
0898e1f3 +0x671:  mov    %edx,%ebx
0898e1f5 +0x673:  mov    %eax,%esi
0898e1f7 +0x675:  mov    0x8(%ebp),%eax
0898e1fa +0x678:  add    $0x1c0,%eax
0898e1ff +0x67d:  mov    %eax,(%esp)
0898e202 +0x680:  call   0891a4c6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x11a5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x11a5
0898e207 +0x685:  mov    %esi,%eax
0898e209 +0x687:  mov    %ebx,%edx
0898e20b +0x689:  jmp    0898e20d <+0x68b>
0898e20d +0x68b:  mov    %edx,%ebx
0898e20f +0x68d:  mov    %eax,%esi
0898e211 +0x68f:  mov    0x8(%ebp),%eax
0898e214 +0x692:  add    $0x1a8,%eax
0898e219 +0x697:  mov    %eax,(%esp)
0898e21c +0x69a:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e221 +0x69f:  mov    %esi,%eax
0898e223 +0x6a1:  mov    %ebx,%edx
0898e225 +0x6a3:  jmp    0898e227 <+0x6a5>
0898e227 +0x6a5:  mov    %edx,%ebx
0898e229 +0x6a7:  mov    %eax,%esi
0898e22b +0x6a9:  mov    0x8(%ebp),%eax
0898e22e +0x6ac:  add    $0x1a4,%eax
0898e233 +0x6b1:  mov    %eax,(%esp)
0898e236 +0x6b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898e23b +0x6b9:  mov    %esi,%eax
0898e23d +0x6bb:  mov    %ebx,%edx
0898e23f +0x6bd:  jmp    0898e241 <+0x6bf>
0898e241 +0x6bf:  mov    %edx,%ebx
0898e243 +0x6c1:  mov    %eax,%esi
0898e245 +0x6c3:  mov    0x8(%ebp),%eax
0898e248 +0x6c6:  add    $0x198,%eax
0898e24d +0x6cb:  mov    %eax,(%esp)
0898e250 +0x6ce:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898e255 +0x6d3:  mov    %esi,%eax
0898e257 +0x6d5:  mov    %ebx,%edx
0898e259 +0x6d7:  jmp    0898e25b <+0x6d9>
0898e25b +0x6d9:  mov    %edx,%ebx
0898e25d +0x6db:  mov    %eax,%esi
0898e25f +0x6dd:  mov    0x8(%ebp),%eax
0898e262 +0x6e0:  add    $0x18c,%eax
0898e267 +0x6e5:  mov    %eax,(%esp)
0898e26a +0x6e8:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0898e26f +0x6ed:  mov    %esi,%eax
0898e271 +0x6ef:  mov    %ebx,%edx
0898e273 +0x6f1:  jmp    0898e275 <+0x6f3>
0898e275 +0x6f3:  mov    %edx,%ebx
0898e277 +0x6f5:  mov    %eax,%esi
0898e279 +0x6f7:  mov    0x8(%ebp),%eax
0898e27c +0x6fa:  mov    %eax,(%esp)
0898e27f +0x6fd:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
0898e284 +0x702:  mov    %esi,%eax
0898e286 +0x704:  mov    %ebx,%edx
0898e288 +0x706:  mov    %eax,(%esp)
0898e28b +0x709:  call   08ae3750 <_Unwind_Resume>
0898e290 +0x70e:  add    $0x10,%esp
0898e293 +0x711:  pop    %ebx
0898e294 +0x712:  pop    %esi
0898e295 +0x713:  pop    %ebp
0898e296 +0x714:  ret
0898e297 +0x715:  nop
```

## 反编译 C

```c
// STEquipmentScript::STEquipmentScript @ 0x898db82

/* STEquipmentScript::STEquipmentScript() */

void __thiscall STEquipmentScript::STEquipmentScript(STEquipmentScript *this)

{
  STItemScript::STItemScript((STItemScript *)this);
                    /* try { // try from 0898dba0 to 0898dba4 has its CatchHandler @ 0898e275 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18c));
                    /* try { // try from 0898dbb0 to 0898dbb4 has its CatchHandler @ 0898e25b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x198));
                    /* try { // try from 0898dbc0 to 0898dbc4 has its CatchHandler @ 0898e241 */
  std::string::string((string *)(this + 0x1a4));
                    /* try { // try from 0898dbd0 to 0898dbd4 has its CatchHandler @ 0898e227 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a8));
                    /* try { // try from 0898dbe0 to 0898dbe4 has its CatchHandler @ 0898e20d */
  EquipmentParameterInfo::EquipmentParameterInfo((EquipmentParameterInfo *)(this + 0x1c0));
                    /* try { // try from 0898dbf0 to 0898dbf4 has its CatchHandler @ 0898e1f3 */
  std::
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  ::map((map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
         *)(this + 0x640));
                    /* try { // try from 0898dc00 to 0898dc04 has its CatchHandler @ 0898e1d9 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x658));
                    /* try { // try from 0898dc10 to 0898dc14 has its CatchHandler @ 0898e1bf */
  std::string::string((string *)(this + 0x664));
                    /* try { // try from 0898dc20 to 0898dc24 has its CatchHandler @ 0898e1a5 */
  std::string::string((string *)(this + 0x668));
                    /* try { // try from 0898dc30 to 0898dc34 has its CatchHandler @ 0898e18b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x66c));
                    /* try { // try from 0898dc40 to 0898dc44 has its CatchHandler @ 0898e171 */
  std::
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  ::map((map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
         *)(this + 0x678));
                    /* try { // try from 0898dc50 to 0898dc54 has its CatchHandler @ 0898e157 */
  std::vector<EquipmentParameterInfo,std::allocator<EquipmentParameterInfo>>::vector
            ((vector<EquipmentParameterInfo,std::allocator<EquipmentParameterInfo>> *)(this + 0x690)
            );
                    /* try { // try from 0898dc60 to 0898dc64 has its CatchHandler @ 0898e13d */
  std::string::string((string *)(this + 0x6a4));
                    /* try { // try from 0898dc70 to 0898dc74 has its CatchHandler @ 0898e123 */
  std::string::string((string *)(this + 0x6a8));
                    /* try { // try from 0898dc80 to 0898dc84 has its CatchHandler @ 0898e109 */
  std::string::string((string *)(this + 0x6ac));
                    /* try { // try from 0898dc90 to 0898dc94 has its CatchHandler @ 0898e0ef */
  std::string::string((string *)(this + 0x6b0));
                    /* try { // try from 0898dca0 to 0898dca4 has its CatchHandler @ 0898e0d5 */
  std::string::string((string *)(this + 0x6b4));
                    /* try { // try from 0898dcb0 to 0898dcb4 has its CatchHandler @ 0898e0bb */
  std::string::string((string *)(this + 0x6b8));
                    /* try { // try from 0898dcc0 to 0898dcc4 has its CatchHandler @ 0898e0a1 */
  std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::vector
            ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)(this + 0x6c0));
                    /* try { // try from 0898dcd0 to 0898dcd4 has its CatchHandler @ 0898e087 */
  std::vector<unsigned_short,std::allocator<unsigned_short>>::vector
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x6cc));
                    /* try { // try from 0898dce0 to 0898dce4 has its CatchHandler @ 0898e06d */
  std::vector<STChangeStatusRate,std::allocator<STChangeStatusRate>>::vector
            ((vector<STChangeStatusRate,std::allocator<STChangeStatusRate>> *)(this + 0x6e8));
                    /* try { // try from 0898dcf0 to 0898dcf4 has its CatchHandler @ 0898e053 */
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::map((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
         *)(this + 0x6fc));
                    /* try { // try from 0898dd00 to 0898dd04 has its CatchHandler @ 0898e039 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x714));
  artifact_info::artifact_info((artifact_info *)(this + 0x738));
                    /* try { // try from 0898dd20 to 0898dd24 has its CatchHandler @ 0898e01f */
  std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::vector
            ((vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>> *)(this + 0x768));
                    /* try { // try from 0898dd30 to 0898dd34 has its CatchHandler @ 0898e005 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x774));
                    /* try { // try from 0898dd40 to 0898dd44 has its CatchHandler @ 0898dfeb */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x780));
                    /* try { // try from 0898dd50 to 0898dd54 has its CatchHandler @ 0898dfd1 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x7a0));
                    /* try { // try from 0898dd60 to 0898dd64 has its CatchHandler @ 0898dfb7 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x7b0));
                    /* try { // try from 0898dd70 to 0898dd74 has its CatchHandler @ 0898df9d */
  std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::vector
            ((vector<STEnchantSystemData,std::allocator<STEnchantSystemData>> *)(this + 0x7cc));
                    /* try { // try from 0898dd80 to 0898dd84 has its CatchHandler @ 0898df83 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x7d8));
                    /* try { // try from 0898dd90 to 0898dd94 has its CatchHandler @ 0898df69 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x7e4));
                    /* try { // try from 0898dda0 to 0898dda4 has its CatchHandler @ 0898df4f */
  std::string::string((string *)(this + 0x7f0));
                    /* try { // try from 0898ddb0 to 0898ddb4 has its CatchHandler @ 0898df35 */
  std::string::string((string *)(this + 0x7f4));
  Position::Position((Position *)(this + 0x7f8));
  WpBonusPointData::WpBonusPointData((WpBonusPointData *)(this + 0x81c));
  ExpBonusPointData::ExpBonusPointData((ExpBonusPointData *)(this + 0x824));
                    /* try { // try from 0898ddf0 to 0898ddf4 has its CatchHandler @ 0898df1b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x830));
                    /* try { // try from 0898de00 to 0898de04 has its CatchHandler @ 0898df01 */
  std::string::string((string *)(this + 0x83c));
                    /* try { // try from 0898de10 to 0898de14 has its CatchHandler @ 0898dee7 */
  std::vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>>::vector
            ((vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>> *)(this + 0x840)
            );
                    /* try { // try from 0898de20 to 0898de24 has its CatchHandler @ 0898decd */
  std::vector<effect::STEffect,std::allocator<effect::STEffect>>::vector
            ((vector<effect::STEffect,std::allocator<effect::STEffect>> *)(this + 0x84c));
                    /* try { // try from 0898de30 to 0898de34 has its CatchHandler @ 0898deb3 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x858));
                    /* try { // try from 0898de40 to 0898de44 has its CatchHandler @ 0898de99 */
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x864));
                    /* try { // try from 0898de50 to 0898de54 has its CatchHandler @ 0898de7f */
  std::string::string((string *)(this + 0x878));
                    /* try { // try from 0898de5b to 0898de5f has its CatchHandler @ 0898de65 */
  Clear(this);
  return;
}
```
