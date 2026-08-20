# STStackableScript

`_ZN17STStackableScriptC1Ev`

`STStackableScript::STStackableScript()`

| 类 | 地址 |
|---|---|
| `STStackableScript` | `0x0898f218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898f218  _ZN17STStackableScriptC1Ev
#           STStackableScript::STStackableScript()
# range [0x0898f218, 0x0898f8e5]
0898f218 +0x000:  push   %ebp
0898f219 +0x001:  mov    %esp,%ebp
0898f21b +0x003:  push   %esi
0898f21c +0x004:  push   %ebx
0898f21d +0x005:  sub    $0x10,%esp
0898f220 +0x008:  mov    0x8(%ebp),%eax
0898f223 +0x00b:  mov    %eax,(%esp)
0898f226 +0x00e:  call   0898d3c6 <_ZN12STItemScriptC1Ev>  ; STItemScript::STItemScript()
0898f22b +0x013:  mov    0x8(%ebp),%eax
0898f22e +0x016:  add    $0x178,%eax
0898f233 +0x01b:  mov    %eax,(%esp)
0898f236 +0x01e:  call   089c33fa <_GLOBAL__I_g_npcNameVector+0x7d5>  ; global constructors keyed to g_npcNameVector+0x7d5
0898f23b +0x023:  mov    0x8(%ebp),%eax
0898f23e +0x026:  add    $0x190,%eax
0898f243 +0x02b:  mov    %eax,(%esp)
0898f246 +0x02e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f24b +0x033:  mov    0x8(%ebp),%eax
0898f24e +0x036:  add    $0x19c,%eax
0898f253 +0x03b:  mov    %eax,(%esp)
0898f256 +0x03e:  call   08518a16 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x504b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x504b
0898f25b +0x043:  mov    0x8(%ebp),%eax
0898f25e +0x046:  add    $0x1b9,%eax
0898f263 +0x04b:  mov    %eax,(%esp)
0898f266 +0x04e:  call   0898c770 <_ZN21CountinuousItemOptionC1Ev>  ; CountinuousItemOption::CountinuousItemOption()
0898f26b +0x053:  mov    0x8(%ebp),%eax
0898f26e +0x056:  add    $0x1bc,%eax
0898f273 +0x05b:  mov    %eax,(%esp)
0898f276 +0x05e:  call   0898c770 <_ZN21CountinuousItemOptionC1Ev>  ; CountinuousItemOption::CountinuousItemOption()
0898f27b +0x063:  mov    0x8(%ebp),%eax
0898f27e +0x066:  add    $0x1d8,%eax
0898f283 +0x06b:  mov    %eax,(%esp)
0898f286 +0x06e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f28b +0x073:  mov    0x8(%ebp),%eax
0898f28e +0x076:  add    $0x1ec,%eax
0898f293 +0x07b:  mov    %eax,(%esp)
0898f296 +0x07e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f29b +0x083:  mov    0x8(%ebp),%eax
0898f29e +0x086:  add    $0x1f8,%eax
0898f2a3 +0x08b:  mov    %eax,(%esp)
0898f2a6 +0x08e:  call   08518aa2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x50d7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x50d7
0898f2ab +0x093:  mov    0x8(%ebp),%eax
0898f2ae +0x096:  add    $0x208,%eax
0898f2b3 +0x09b:  mov    %eax,(%esp)
0898f2b6 +0x09e:  call   089c5ae6 <_GLOBAL__I_g_npcNameVector+0x2ec1>  ; global constructors keyed to g_npcNameVector+0x2ec1
0898f2bb +0x0a3:  mov    0x8(%ebp),%eax
0898f2be +0x0a6:  add    $0x214,%eax
0898f2c3 +0x0ab:  mov    %eax,(%esp)
0898f2c6 +0x0ae:  call   08518ab6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x50eb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x50eb
0898f2cb +0x0b3:  mov    0x8(%ebp),%eax
0898f2ce +0x0b6:  add    $0x224,%eax
0898f2d3 +0x0bb:  mov    %eax,(%esp)
0898f2d6 +0x0be:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f2db +0x0c3:  mov    0x8(%ebp),%eax
0898f2de +0x0c6:  add    $0x230,%eax
0898f2e3 +0x0cb:  mov    %eax,(%esp)
0898f2e6 +0x0ce:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f2eb +0x0d3:  mov    0x8(%ebp),%eax
0898f2ee +0x0d6:  add    $0x234,%eax
0898f2f3 +0x0db:  mov    %eax,(%esp)
0898f2f6 +0x0de:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f2fb +0x0e3:  mov    0x8(%ebp),%eax
0898f2fe +0x0e6:  add    $0x238,%eax
0898f303 +0x0eb:  mov    %eax,(%esp)
0898f306 +0x0ee:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f30b +0x0f3:  mov    0x8(%ebp),%eax
0898f30e +0x0f6:  add    $0x244,%eax
0898f313 +0x0fb:  mov    %eax,(%esp)
0898f316 +0x0fe:  call   0838193e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x113de>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x113de
0898f31b +0x103:  mov    0x8(%ebp),%eax
0898f31e +0x106:  add    $0x250,%eax
0898f323 +0x10b:  mov    %eax,(%esp)
0898f326 +0x10e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f32b +0x113:  mov    0x8(%ebp),%eax
0898f32e +0x116:  add    $0x25c,%eax
0898f333 +0x11b:  mov    %eax,(%esp)
0898f336 +0x11e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f33b +0x123:  mov    0x8(%ebp),%eax
0898f33e +0x126:  add    $0x268,%eax
0898f343 +0x12b:  mov    %eax,(%esp)
0898f346 +0x12e:  call   08518a2a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x505f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x505f
0898f34b +0x133:  mov    0x8(%ebp),%eax
0898f34e +0x136:  add    $0x274,%eax
0898f353 +0x13b:  mov    %eax,(%esp)
0898f356 +0x13e:  call   08518a3e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5073>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5073
0898f35b +0x143:  mov    0x8(%ebp),%eax
0898f35e +0x146:  add    $0x280,%eax
0898f363 +0x14b:  mov    %eax,(%esp)
0898f366 +0x14e:  call   085156d6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d0b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d0b
0898f36b +0x153:  mov    0x8(%ebp),%eax
0898f36e +0x156:  add    $0x2a4,%eax
0898f373 +0x15b:  mov    %eax,(%esp)
0898f376 +0x15e:  call   08518a2a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x505f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x505f
0898f37b +0x163:  mov    0x8(%ebp),%eax
0898f37e +0x166:  add    $0x2b0,%eax
0898f383 +0x16b:  mov    %eax,(%esp)
0898f386 +0x16e:  call   089c3098 <_GLOBAL__I_g_npcNameVector+0x473>  ; global constructors keyed to g_npcNameVector+0x473
0898f38b +0x173:  mov    0x8(%ebp),%eax
0898f38e +0x176:  add    $0x2c4,%eax
0898f393 +0x17b:  mov    %eax,(%esp)
0898f396 +0x17e:  call   089c3098 <_GLOBAL__I_g_npcNameVector+0x473>  ; global constructors keyed to g_npcNameVector+0x473
0898f39b +0x183:  mov    0x8(%ebp),%eax
0898f39e +0x186:  add    $0x2d8,%eax
0898f3a3 +0x18b:  mov    %eax,(%esp)
0898f3a6 +0x18e:  call   089c30dc <_GLOBAL__I_g_npcNameVector+0x4b7>  ; global constructors keyed to g_npcNameVector+0x4b7
0898f3ab +0x193:  mov    0x8(%ebp),%eax
0898f3ae +0x196:  add    $0x2ec,%eax
0898f3b3 +0x19b:  mov    %eax,(%esp)
0898f3b6 +0x19e:  call   089c3124 <_GLOBAL__I_g_npcNameVector+0x4ff>  ; global constructors keyed to g_npcNameVector+0x4ff
0898f3bb +0x1a3:  mov    0x8(%ebp),%eax
0898f3be +0x1a6:  add    $0x304,%eax
0898f3c3 +0x1ab:  mov    %eax,(%esp)
0898f3c6 +0x1ae:  call   089c3194 <_GLOBAL__I_g_npcNameVector+0x56f>  ; global constructors keyed to g_npcNameVector+0x56f
0898f3cb +0x1b3:  mov    0x8(%ebp),%eax
0898f3ce +0x1b6:  add    $0x314,%eax
0898f3d3 +0x1bb:  mov    %eax,(%esp)
0898f3d6 +0x1be:  call   089c31d2 <_GLOBAL__I_g_npcNameVector+0x5ad>  ; global constructors keyed to g_npcNameVector+0x5ad
0898f3db +0x1c3:  mov    0x8(%ebp),%eax
0898f3de +0x1c6:  add    $0x330,%eax
0898f3e3 +0x1cb:  mov    %eax,(%esp)
0898f3e6 +0x1ce:  call   089c3238 <_GLOBAL__I_g_npcNameVector+0x613>  ; global constructors keyed to g_npcNameVector+0x613
0898f3eb +0x1d3:  mov    0x8(%ebp),%eax
0898f3ee +0x1d6:  add    $0x34c,%eax
0898f3f3 +0x1db:  mov    %eax,(%esp)
0898f3f6 +0x1de:  call   089c32c8 <_GLOBAL__I_g_npcNameVector+0x6a3>  ; global constructors keyed to g_npcNameVector+0x6a3
0898f3fb +0x1e3:  mov    0x8(%ebp),%eax
0898f3fe +0x1e6:  add    $0x368,%eax
0898f403 +0x1eb:  mov    %eax,(%esp)
0898f406 +0x1ee:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f40b +0x1f3:  mov    0x8(%ebp),%eax
0898f40e +0x1f6:  add    $0x374,%eax
0898f413 +0x1fb:  mov    %eax,(%esp)
0898f416 +0x1fe:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898f41b +0x203:  mov    0x8(%ebp),%eax
0898f41e +0x206:  add    $0x3a4,%eax
0898f423 +0x20b:  mov    %eax,(%esp)
0898f426 +0x20e:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0898f42b +0x213:  mov    0x8(%ebp),%eax
0898f42e +0x216:  add    $0x3c0,%eax
0898f433 +0x21b:  mov    %eax,(%esp)
0898f436 +0x21e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898f43b +0x223:  mov    0x8(%ebp),%eax
0898f43e +0x226:  add    $0x3d4,%eax
0898f443 +0x22b:  mov    %eax,(%esp)
0898f446 +0x22e:  call   0851571c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d51>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d51
0898f44b +0x233:  mov    0x8(%ebp),%eax
0898f44e +0x236:  add    $0x3f4,%eax
0898f453 +0x23b:  mov    %eax,(%esp)
0898f456 +0x23e:  call   08515b9c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x21d1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x21d1
0898f45b +0x243:  mov    0x8(%ebp),%eax
0898f45e +0x246:  add    $0x410,%eax
0898f463 +0x24b:  mov    %eax,(%esp)
0898f466 +0x24e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f46b +0x253:  mov    0x8(%ebp),%eax
0898f46e +0x256:  add    $0x41c,%eax
0898f473 +0x25b:  mov    %eax,(%esp)
0898f476 +0x25e:  call   08513b82 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1b7
0898f47b +0x263:  mov    0x8(%ebp),%eax
0898f47e +0x266:  add    $0x43c,%eax
0898f483 +0x26b:  mov    %eax,(%esp)
0898f486 +0x26e:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0898f48b +0x273:  mov    0x8(%ebp),%eax
0898f48e +0x276:  add    $0x47c,%eax
0898f493 +0x27b:  mov    %eax,(%esp)
0898f496 +0x27e:  call   08513b6e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1a3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1a3
0898f49b +0x283:  mov    0x8(%ebp),%eax
0898f49e +0x286:  add    $0x480,%eax
0898f4a3 +0x28b:  mov    %eax,(%esp)
0898f4a6 +0x28e:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898f4ab +0x293:  mov    0x8(%ebp),%eax
0898f4ae +0x296:  add    $0x498,%eax
0898f4b3 +0x29b:  mov    %eax,(%esp)
0898f4b6 +0x29e:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898f4bb +0x2a3:  mov    0x8(%ebp),%eax
0898f4be +0x2a6:  add    $0x4b4,%eax
0898f4c3 +0x2ab:  mov    %eax,(%esp)
0898f4c6 +0x2ae:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f4cb +0x2b3:  mov    0x8(%ebp),%eax
0898f4ce +0x2b6:  add    $0x4bc,%eax
0898f4d3 +0x2bb:  mov    %eax,(%esp)
0898f4d6 +0x2be:  call   089c5b58 <_GLOBAL__I_g_npcNameVector+0x2f33>  ; global constructors keyed to g_npcNameVector+0x2f33
0898f4db +0x2c3:  mov    0x8(%ebp),%eax
0898f4de +0x2c6:  add    $0x4d4,%eax
0898f4e3 +0x2cb:  mov    %eax,(%esp)
0898f4e6 +0x2ce:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898f4eb +0x2d3:  mov    0x8(%ebp),%eax
0898f4ee +0x2d6:  add    $0x4fc,%eax
0898f4f3 +0x2db:  mov    %eax,(%esp)
0898f4f6 +0x2de:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f4fb +0x2e3:  mov    0x8(%ebp),%eax
0898f4fe +0x2e6:  add    $0x50c,%eax
0898f503 +0x2eb:  mov    %eax,(%esp)
0898f506 +0x2ee:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898f50b +0x2f3:  mov    0x8(%ebp),%eax
0898f50e +0x2f6:  mov    %eax,(%esp)
0898f511 +0x2f9:  call   0899087a <_ZN17STStackableScript5ClearEv>  ; STStackableScript::Clear()
0898f516 +0x2fe:  jmp    0898f8de <+0x6c6>
0898f51b +0x303:  mov    %edx,%ebx
0898f51d +0x305:  mov    %eax,%esi
0898f51f +0x307:  mov    0x8(%ebp),%eax
0898f522 +0x30a:  add    $0x50c,%eax
0898f527 +0x30f:  mov    %eax,(%esp)
0898f52a +0x312:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898f52f +0x317:  mov    %esi,%eax
0898f531 +0x319:  mov    %ebx,%edx
0898f533 +0x31b:  jmp    0898f535 <+0x31d>
0898f535 +0x31d:  mov    %edx,%ebx
0898f537 +0x31f:  mov    %eax,%esi
0898f539 +0x321:  mov    0x8(%ebp),%eax
0898f53c +0x324:  add    $0x4fc,%eax
0898f541 +0x329:  mov    %eax,(%esp)
0898f544 +0x32c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898f549 +0x331:  mov    %esi,%eax
0898f54b +0x333:  mov    %ebx,%edx
0898f54d +0x335:  jmp    0898f54f <+0x337>
0898f54f +0x337:  mov    %edx,%ebx
0898f551 +0x339:  mov    %eax,%esi
0898f553 +0x33b:  mov    0x8(%ebp),%eax
0898f556 +0x33e:  add    $0x4d4,%eax
0898f55b +0x343:  mov    %eax,(%esp)
0898f55e +0x346:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898f563 +0x34b:  mov    %esi,%eax
0898f565 +0x34d:  mov    %ebx,%edx
0898f567 +0x34f:  jmp    0898f569 <+0x351>
0898f569 +0x351:  mov    %edx,%ebx
0898f56b +0x353:  mov    %eax,%esi
0898f56d +0x355:  mov    0x8(%ebp),%eax
0898f570 +0x358:  add    $0x4bc,%eax
0898f575 +0x35d:  mov    %eax,(%esp)
0898f578 +0x360:  call   089c3ae2 <_GLOBAL__I_g_npcNameVector+0xebd>  ; global constructors keyed to g_npcNameVector+0xebd
0898f57d +0x365:  mov    %esi,%eax
0898f57f +0x367:  mov    %ebx,%edx
0898f581 +0x369:  jmp    0898f583 <+0x36b>
0898f583 +0x36b:  mov    %edx,%ebx
0898f585 +0x36d:  mov    %eax,%esi
0898f587 +0x36f:  mov    0x8(%ebp),%eax
0898f58a +0x372:  add    $0x4b4,%eax
0898f58f +0x377:  mov    %eax,(%esp)
0898f592 +0x37a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f597 +0x37f:  mov    %esi,%eax
0898f599 +0x381:  mov    %ebx,%edx
0898f59b +0x383:  jmp    0898f59d <+0x385>
0898f59d +0x385:  mov    %edx,%ebx
0898f59f +0x387:  mov    %eax,%esi
0898f5a1 +0x389:  mov    0x8(%ebp),%eax
0898f5a4 +0x38c:  add    $0x498,%eax
0898f5a9 +0x391:  mov    %eax,(%esp)
0898f5ac +0x394:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898f5b1 +0x399:  mov    %esi,%eax
0898f5b3 +0x39b:  mov    %ebx,%edx
0898f5b5 +0x39d:  jmp    0898f5b7 <+0x39f>
0898f5b7 +0x39f:  mov    %edx,%ebx
0898f5b9 +0x3a1:  mov    %eax,%esi
0898f5bb +0x3a3:  mov    0x8(%ebp),%eax
0898f5be +0x3a6:  add    $0x480,%eax
0898f5c3 +0x3ab:  mov    %eax,(%esp)
0898f5c6 +0x3ae:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898f5cb +0x3b3:  mov    %esi,%eax
0898f5cd +0x3b5:  mov    %ebx,%edx
0898f5cf +0x3b7:  jmp    0898f5d1 <+0x3b9>
0898f5d1 +0x3b9:  mov    %edx,%ebx
0898f5d3 +0x3bb:  mov    %eax,%esi
0898f5d5 +0x3bd:  mov    0x8(%ebp),%eax
0898f5d8 +0x3c0:  add    $0x41c,%eax
0898f5dd +0x3c5:  mov    %eax,(%esp)
0898f5e0 +0x3c8:  call   08514658 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc8d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc8d
0898f5e5 +0x3cd:  mov    %esi,%eax
0898f5e7 +0x3cf:  mov    %ebx,%edx
0898f5e9 +0x3d1:  jmp    0898f5eb <+0x3d3>
0898f5eb +0x3d3:  mov    %edx,%ebx
0898f5ed +0x3d5:  mov    %eax,%esi
0898f5ef +0x3d7:  mov    0x8(%ebp),%eax
0898f5f2 +0x3da:  add    $0x410,%eax
0898f5f7 +0x3df:  mov    %eax,(%esp)
0898f5fa +0x3e2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f5ff +0x3e7:  mov    %esi,%eax
0898f601 +0x3e9:  mov    %ebx,%edx
0898f603 +0x3eb:  jmp    0898f605 <+0x3ed>
0898f605 +0x3ed:  mov    %edx,%ebx
0898f607 +0x3ef:  mov    %eax,%esi
0898f609 +0x3f1:  mov    0x8(%ebp),%eax
0898f60c +0x3f4:  add    $0x3f4,%eax
0898f611 +0x3f9:  mov    %eax,(%esp)
0898f614 +0x3fc:  call   08513b34 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x169>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x169
0898f619 +0x401:  mov    %esi,%eax
0898f61b +0x403:  mov    %ebx,%edx
0898f61d +0x405:  jmp    0898f61f <+0x407>
0898f61f +0x407:  mov    %edx,%ebx
0898f621 +0x409:  mov    %eax,%esi
0898f623 +0x40b:  mov    0x8(%ebp),%eax
0898f626 +0x40e:  add    $0x3d4,%eax
0898f62b +0x413:  mov    %eax,(%esp)
0898f62e +0x416:  call   0851466e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xca3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xca3
0898f633 +0x41b:  mov    %esi,%eax
0898f635 +0x41d:  mov    %ebx,%edx
0898f637 +0x41f:  jmp    0898f639 <+0x421>
0898f639 +0x421:  mov    %edx,%ebx
0898f63b +0x423:  mov    %eax,%esi
0898f63d +0x425:  mov    0x8(%ebp),%eax
0898f640 +0x428:  add    $0x3c0,%eax
0898f645 +0x42d:  mov    %eax,(%esp)
0898f648 +0x430:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898f64d +0x435:  mov    %esi,%eax
0898f64f +0x437:  mov    %ebx,%edx
0898f651 +0x439:  jmp    0898f653 <+0x43b>
0898f653 +0x43b:  mov    %edx,%ebx
0898f655 +0x43d:  mov    %eax,%esi
0898f657 +0x43f:  mov    0x8(%ebp),%eax
0898f65a +0x442:  add    $0x3a4,%eax
0898f65f +0x447:  mov    %eax,(%esp)
0898f662 +0x44a:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0898f667 +0x44f:  mov    %esi,%eax
0898f669 +0x451:  mov    %ebx,%edx
0898f66b +0x453:  jmp    0898f66d <+0x455>
0898f66d +0x455:  mov    %edx,%ebx
0898f66f +0x457:  mov    %eax,%esi
0898f671 +0x459:  mov    0x8(%ebp),%eax
0898f674 +0x45c:  add    $0x374,%eax
0898f679 +0x461:  mov    %eax,(%esp)
0898f67c +0x464:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898f681 +0x469:  mov    %esi,%eax
0898f683 +0x46b:  mov    %ebx,%edx
0898f685 +0x46d:  jmp    0898f687 <+0x46f>
0898f687 +0x46f:  mov    %edx,%ebx
0898f689 +0x471:  mov    %eax,%esi
0898f68b +0x473:  mov    0x8(%ebp),%eax
0898f68e +0x476:  add    $0x368,%eax
0898f693 +0x47b:  mov    %eax,(%esp)
0898f696 +0x47e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f69b +0x483:  mov    %esi,%eax
0898f69d +0x485:  mov    %ebx,%edx
0898f69f +0x487:  jmp    0898f6a1 <+0x489>
0898f6a1 +0x489:  mov    %edx,%ebx
0898f6a3 +0x48b:  mov    %eax,%esi
0898f6a5 +0x48d:  mov    0x8(%ebp),%eax
0898f6a8 +0x490:  add    $0x34c,%eax
0898f6ad +0x495:  mov    %eax,(%esp)
0898f6b0 +0x498:  call   089c3ace <_GLOBAL__I_g_npcNameVector+0xea9>  ; global constructors keyed to g_npcNameVector+0xea9
0898f6b5 +0x49d:  mov    %esi,%eax
0898f6b7 +0x49f:  mov    %ebx,%edx
0898f6b9 +0x4a1:  jmp    0898f6bb <+0x4a3>
0898f6bb +0x4a3:  mov    %edx,%ebx
0898f6bd +0x4a5:  mov    %eax,%esi
0898f6bf +0x4a7:  mov    0x8(%ebp),%eax
0898f6c2 +0x4aa:  add    $0x2ec,%eax
0898f6c7 +0x4af:  mov    %eax,(%esp)
0898f6ca +0x4b2:  call   089c3aba <_GLOBAL__I_g_npcNameVector+0xe95>  ; global constructors keyed to g_npcNameVector+0xe95
0898f6cf +0x4b7:  mov    %esi,%eax
0898f6d1 +0x4b9:  mov    %ebx,%edx
0898f6d3 +0x4bb:  jmp    0898f6d5 <+0x4bd>
0898f6d5 +0x4bd:  mov    %edx,%ebx
0898f6d7 +0x4bf:  mov    %eax,%esi
0898f6d9 +0x4c1:  mov    0x8(%ebp),%eax
0898f6dc +0x4c4:  add    $0x2a4,%eax
0898f6e1 +0x4c9:  mov    %eax,(%esp)
0898f6e4 +0x4cc:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0898f6e9 +0x4d1:  mov    %esi,%eax
0898f6eb +0x4d3:  mov    %ebx,%edx
0898f6ed +0x4d5:  jmp    0898f6ef <+0x4d7>
0898f6ef +0x4d7:  mov    %edx,%ebx
0898f6f1 +0x4d9:  mov    %eax,%esi
0898f6f3 +0x4db:  mov    0x8(%ebp),%eax
0898f6f6 +0x4de:  add    $0x280,%eax
0898f6fb +0x4e3:  mov    %eax,(%esp)
0898f6fe +0x4e6:  call   08514612 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc47>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc47
0898f703 +0x4eb:  mov    %esi,%eax
0898f705 +0x4ed:  mov    %ebx,%edx
0898f707 +0x4ef:  jmp    0898f709 <+0x4f1>
0898f709 +0x4f1:  mov    %edx,%ebx
0898f70b +0x4f3:  mov    %eax,%esi
0898f70d +0x4f5:  mov    0x8(%ebp),%eax
0898f710 +0x4f8:  add    $0x274,%eax
0898f715 +0x4fd:  mov    %eax,(%esp)
0898f718 +0x500:  call   08387968 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17408>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17408
0898f71d +0x505:  mov    %esi,%eax
0898f71f +0x507:  mov    %ebx,%edx
0898f721 +0x509:  jmp    0898f723 <+0x50b>
0898f723 +0x50b:  mov    %edx,%ebx
0898f725 +0x50d:  mov    %eax,%esi
0898f727 +0x50f:  mov    0x8(%ebp),%eax
0898f72a +0x512:  add    $0x268,%eax
0898f72f +0x517:  mov    %eax,(%esp)
0898f732 +0x51a:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0898f737 +0x51f:  mov    %esi,%eax
0898f739 +0x521:  mov    %ebx,%edx
0898f73b +0x523:  jmp    0898f73d <+0x525>
0898f73d +0x525:  mov    %edx,%ebx
0898f73f +0x527:  mov    %eax,%esi
0898f741 +0x529:  mov    0x8(%ebp),%eax
0898f744 +0x52c:  add    $0x25c,%eax
0898f749 +0x531:  mov    %eax,(%esp)
0898f74c +0x534:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898f751 +0x539:  mov    %esi,%eax
0898f753 +0x53b:  mov    %ebx,%edx
0898f755 +0x53d:  jmp    0898f757 <+0x53f>
0898f757 +0x53f:  mov    %edx,%ebx
0898f759 +0x541:  mov    %eax,%esi
0898f75b +0x543:  mov    0x8(%ebp),%eax
0898f75e +0x546:  add    $0x250,%eax
0898f763 +0x54b:  mov    %eax,(%esp)
0898f766 +0x54e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898f76b +0x553:  mov    %esi,%eax
0898f76d +0x555:  mov    %ebx,%edx
0898f76f +0x557:  jmp    0898f771 <+0x559>
0898f771 +0x559:  mov    %edx,%ebx
0898f773 +0x55b:  mov    %eax,%esi
0898f775 +0x55d:  mov    0x8(%ebp),%eax
0898f778 +0x560:  add    $0x244,%eax
0898f77d +0x565:  mov    %eax,(%esp)
0898f780 +0x568:  call   08381952 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x113f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x113f2
0898f785 +0x56d:  mov    %esi,%eax
0898f787 +0x56f:  mov    %ebx,%edx
0898f789 +0x571:  jmp    0898f78b <+0x573>
0898f78b +0x573:  mov    %edx,%ebx
0898f78d +0x575:  mov    %eax,%esi
0898f78f +0x577:  mov    0x8(%ebp),%eax
0898f792 +0x57a:  add    $0x238,%eax
0898f797 +0x57f:  mov    %eax,(%esp)
0898f79a +0x582:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f79f +0x587:  mov    %esi,%eax
0898f7a1 +0x589:  mov    %ebx,%edx
0898f7a3 +0x58b:  jmp    0898f7a5 <+0x58d>
0898f7a5 +0x58d:  mov    %edx,%ebx
0898f7a7 +0x58f:  mov    %eax,%esi
0898f7a9 +0x591:  mov    0x8(%ebp),%eax
0898f7ac +0x594:  add    $0x234,%eax
0898f7b1 +0x599:  mov    %eax,(%esp)
0898f7b4 +0x59c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f7b9 +0x5a1:  mov    %esi,%eax
0898f7bb +0x5a3:  mov    %ebx,%edx
0898f7bd +0x5a5:  jmp    0898f7bf <+0x5a7>
0898f7bf +0x5a7:  mov    %edx,%ebx
0898f7c1 +0x5a9:  mov    %eax,%esi
0898f7c3 +0x5ab:  mov    0x8(%ebp),%eax
0898f7c6 +0x5ae:  add    $0x230,%eax
0898f7cb +0x5b3:  mov    %eax,(%esp)
0898f7ce +0x5b6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f7d3 +0x5bb:  mov    %esi,%eax
0898f7d5 +0x5bd:  mov    %ebx,%edx
0898f7d7 +0x5bf:  jmp    0898f7d9 <+0x5c1>
0898f7d9 +0x5c1:  mov    %edx,%ebx
0898f7db +0x5c3:  mov    %eax,%esi
0898f7dd +0x5c5:  mov    0x8(%ebp),%eax
0898f7e0 +0x5c8:  add    $0x224,%eax
0898f7e5 +0x5cd:  mov    %eax,(%esp)
0898f7e8 +0x5d0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898f7ed +0x5d5:  mov    %esi,%eax
0898f7ef +0x5d7:  mov    %ebx,%edx
0898f7f1 +0x5d9:  jmp    0898f7f3 <+0x5db>
0898f7f3 +0x5db:  mov    %edx,%ebx
0898f7f5 +0x5dd:  mov    %eax,%esi
0898f7f7 +0x5df:  mov    0x8(%ebp),%eax
0898f7fa +0x5e2:  add    $0x214,%eax
0898f7ff +0x5e7:  mov    %eax,(%esp)
0898f802 +0x5ea:  call   08515fd4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2609>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2609
0898f807 +0x5ef:  mov    %esi,%eax
0898f809 +0x5f1:  mov    %ebx,%edx
0898f80b +0x5f3:  jmp    0898f80d <+0x5f5>
0898f80d +0x5f5:  mov    %edx,%ebx
0898f80f +0x5f7:  mov    %eax,%esi
0898f811 +0x5f9:  mov    0x8(%ebp),%eax
0898f814 +0x5fc:  add    $0x208,%eax
0898f819 +0x601:  mov    %eax,(%esp)
0898f81c +0x604:  call   089c5afa <_GLOBAL__I_g_npcNameVector+0x2ed5>  ; global constructors keyed to g_npcNameVector+0x2ed5
0898f821 +0x609:  mov    %esi,%eax
0898f823 +0x60b:  mov    %ebx,%edx
0898f825 +0x60d:  jmp    0898f827 <+0x60f>
0898f827 +0x60f:  mov    %edx,%ebx
0898f829 +0x611:  mov    %eax,%esi
0898f82b +0x613:  mov    0x8(%ebp),%eax
0898f82e +0x616:  add    $0x1f8,%eax
0898f833 +0x61b:  mov    %eax,(%esp)
0898f836 +0x61e:  call   08515f76 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x25ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x25ab
0898f83b +0x623:  mov    %esi,%eax
0898f83d +0x625:  mov    %ebx,%edx
0898f83f +0x627:  jmp    0898f841 <+0x629>
0898f841 +0x629:  mov    %edx,%ebx
0898f843 +0x62b:  mov    %eax,%esi
0898f845 +0x62d:  mov    0x8(%ebp),%eax
0898f848 +0x630:  add    $0x1ec,%eax
0898f84d +0x635:  mov    %eax,(%esp)
0898f850 +0x638:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898f855 +0x63d:  mov    %esi,%eax
0898f857 +0x63f:  mov    %ebx,%edx
0898f859 +0x641:  jmp    0898f85b <+0x643>
0898f85b +0x643:  mov    %edx,%ebx
0898f85d +0x645:  mov    %eax,%esi
0898f85f +0x647:  mov    0x8(%ebp),%eax
0898f862 +0x64a:  add    $0x1d8,%eax
0898f867 +0x64f:  mov    %eax,(%esp)
0898f86a +0x652:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898f86f +0x657:  mov    %esi,%eax
0898f871 +0x659:  mov    %ebx,%edx
0898f873 +0x65b:  jmp    0898f875 <+0x65d>
0898f875 +0x65d:  mov    %edx,%ebx
0898f877 +0x65f:  mov    %eax,%esi
0898f879 +0x661:  mov    0x8(%ebp),%eax
0898f87c +0x664:  add    $0x19c,%eax
0898f881 +0x669:  mov    %eax,(%esp)
0898f884 +0x66c:  call   08515df6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x242b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x242b
0898f889 +0x671:  mov    %esi,%eax
0898f88b +0x673:  mov    %ebx,%edx
0898f88d +0x675:  jmp    0898f88f <+0x677>
0898f88f +0x677:  mov    %edx,%ebx
0898f891 +0x679:  mov    %eax,%esi
0898f893 +0x67b:  mov    0x8(%ebp),%eax
0898f896 +0x67e:  add    $0x190,%eax
0898f89b +0x683:  mov    %eax,(%esp)
0898f89e +0x686:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898f8a3 +0x68b:  mov    %esi,%eax
0898f8a5 +0x68d:  mov    %ebx,%edx
0898f8a7 +0x68f:  jmp    0898f8a9 <+0x691>
0898f8a9 +0x691:  mov    %edx,%ebx
0898f8ab +0x693:  mov    %eax,%esi
0898f8ad +0x695:  mov    0x8(%ebp),%eax
0898f8b0 +0x698:  add    $0x178,%eax
0898f8b5 +0x69d:  mov    %eax,(%esp)
0898f8b8 +0x6a0:  call   089c3a46 <_GLOBAL__I_g_npcNameVector+0xe21>  ; global constructors keyed to g_npcNameVector+0xe21
0898f8bd +0x6a5:  mov    %esi,%eax
0898f8bf +0x6a7:  mov    %ebx,%edx
0898f8c1 +0x6a9:  jmp    0898f8c3 <+0x6ab>
0898f8c3 +0x6ab:  mov    %edx,%ebx
0898f8c5 +0x6ad:  mov    %eax,%esi
0898f8c7 +0x6af:  mov    0x8(%ebp),%eax
0898f8ca +0x6b2:  mov    %eax,(%esp)
0898f8cd +0x6b5:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
0898f8d2 +0x6ba:  mov    %esi,%eax
0898f8d4 +0x6bc:  mov    %ebx,%edx
0898f8d6 +0x6be:  mov    %eax,(%esp)
0898f8d9 +0x6c1:  call   08ae3750 <_Unwind_Resume>
0898f8de +0x6c6:  add    $0x10,%esp
0898f8e1 +0x6c9:  pop    %ebx
0898f8e2 +0x6ca:  pop    %esi
0898f8e3 +0x6cb:  pop    %ebp
0898f8e4 +0x6cc:  ret
0898f8e5 +0x6cd:  nop
```

## 反编译 C

```c
// STStackableScript::STStackableScript @ 0x898f218

/* STStackableScript::STStackableScript() */

void __thiscall STStackableScript::STStackableScript(STStackableScript *this)

{
  STItemScript::STItemScript((STItemScript *)this);
                    /* try { // try from 0898f236 to 0898f23a has its CatchHandler @ 0898f8c3 */
  Arad_STStackableScript::Arad_STStackableScript((Arad_STStackableScript *)(this + 0x178));
                    /* try { // try from 0898f246 to 0898f24a has its CatchHandler @ 0898f8a9 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 400));
                    /* try { // try from 0898f256 to 0898f25a has its CatchHandler @ 0898f88f */
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::vector
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1b9));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1bc));
                    /* try { // try from 0898f286 to 0898f28a has its CatchHandler @ 0898f875 */
  std::string::string((string *)(this + 0x1d8));
                    /* try { // try from 0898f296 to 0898f29a has its CatchHandler @ 0898f85b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1ec));
                    /* try { // try from 0898f2a6 to 0898f2aa has its CatchHandler @ 0898f841 */
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::vector
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
                    /* try { // try from 0898f2b6 to 0898f2ba has its CatchHandler @ 0898f827 */
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::vector
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
                    /* try { // try from 0898f2c6 to 0898f2ca has its CatchHandler @ 0898f80d */
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  vector((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
          *)(this + 0x214));
                    /* try { // try from 0898f2d6 to 0898f2da has its CatchHandler @ 0898f7f3 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x224));
                    /* try { // try from 0898f2e6 to 0898f2ea has its CatchHandler @ 0898f7d9 */
  std::string::string((string *)(this + 0x230));
                    /* try { // try from 0898f2f6 to 0898f2fa has its CatchHandler @ 0898f7bf */
  std::string::string((string *)(this + 0x234));
                    /* try { // try from 0898f306 to 0898f30a has its CatchHandler @ 0898f7a5 */
  std::string::string((string *)(this + 0x238));
                    /* try { // try from 0898f316 to 0898f31a has its CatchHandler @ 0898f78b */
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            *)(this + 0x244));
                    /* try { // try from 0898f326 to 0898f32a has its CatchHandler @ 0898f771 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x250));
                    /* try { // try from 0898f336 to 0898f33a has its CatchHandler @ 0898f757 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x25c));
                    /* try { // try from 0898f346 to 0898f34a has its CatchHandler @ 0898f73d */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
                    /* try { // try from 0898f356 to 0898f35a has its CatchHandler @ 0898f723 */
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::vector((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
            *)(this + 0x274));
                    /* try { // try from 0898f366 to 0898f36a has its CatchHandler @ 0898f709 */
  stStackableBooster_t::stStackableBooster_t((stStackableBooster_t *)(this + 0x280));
                    /* try { // try from 0898f376 to 0898f37a has its CatchHandler @ 0898f6ef */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x2a4)
            );
  STRecovery::STRecovery((STRecovery *)(this + 0x2b0));
  STRecovery::STRecovery((STRecovery *)(this + 0x2c4));
  STStatusRecovery::STStatusRecovery((STStatusRecovery *)(this + 0x2d8));
                    /* try { // try from 0898f3b6 to 0898f3ba has its CatchHandler @ 0898f6d5 */
  STStatusGenerate::STStatusGenerate((STStatusGenerate *)(this + 0x2ec));
  STBuff::STBuff((STBuff *)(this + 0x304));
  STSummonMonster::STSummonMonster((STSummonMonster *)(this + 0x314));
  STSummonApc::STSummonApc((STSummonApc *)(this + 0x330));
                    /* try { // try from 0898f3f6 to 0898f3fa has its CatchHandler @ 0898f6bb */
  STStatChangeVector::STStatChangeVector((STStatChangeVector *)(this + 0x34c));
                    /* try { // try from 0898f406 to 0898f40a has its CatchHandler @ 0898f6a1 */
  std::string::string((string *)(this + 0x368));
                    /* try { // try from 0898f416 to 0898f41a has its CatchHandler @ 0898f687 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
                    /* try { // try from 0898f426 to 0898f42a has its CatchHandler @ 0898f66d */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
                    /* try { // try from 0898f436 to 0898f43a has its CatchHandler @ 0898f653 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
                    /* try { // try from 0898f446 to 0898f44a has its CatchHandler @ 0898f639 */
  stLimitCubeInfo::stLimitCubeInfo((stLimitCubeInfo *)(this + 0x3d4));
                    /* try { // try from 0898f456 to 0898f45a has its CatchHandler @ 0898f61f */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::map((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
         *)(this + 0x3f4));
                    /* try { // try from 0898f466 to 0898f46a has its CatchHandler @ 0898f605 */
  std::string::string((string *)(this + 0x410));
                    /* try { // try from 0898f476 to 0898f47a has its CatchHandler @ 0898f5eb */
  BoosterSelectInfo::BoosterSelectInfo((BoosterSelectInfo *)(this + 0x41c));
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x43c));
  AvatarOptionChangeType::AvatarOptionChangeType((AvatarOptionChangeType *)(this + 0x47c));
                    /* try { // try from 0898f4a6 to 0898f4aa has its CatchHandler @ 0898f5d1 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
                    /* try { // try from 0898f4b6 to 0898f4ba has its CatchHandler @ 0898f5b7 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
                    /* try { // try from 0898f4c6 to 0898f4ca has its CatchHandler @ 0898f59d */
  std::string::string((string *)(this + 0x4b4));
                    /* try { // try from 0898f4d6 to 0898f4da has its CatchHandler @ 0898f583 */
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::map((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
         *)(this + 0x4bc));
                    /* try { // try from 0898f4e6 to 0898f4ea has its CatchHandler @ 0898f569 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
                    /* try { // try from 0898f4f6 to 0898f4fa has its CatchHandler @ 0898f54f */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x4fc));
                    /* try { // try from 0898f506 to 0898f50a has its CatchHandler @ 0898f535 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
                    /* try { // try from 0898f511 to 0898f515 has its CatchHandler @ 0898f51b */
  Clear(this);
  return;
}
```
