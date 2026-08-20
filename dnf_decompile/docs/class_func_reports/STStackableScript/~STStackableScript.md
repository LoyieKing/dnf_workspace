# ~STStackableScript

`_ZN17STStackableScriptD1Ev`

`STStackableScript::~STStackableScript()`

| 类 | 地址 |
|---|---|
| `STStackableScript` | `0x0899013c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0899013c  _ZN17STStackableScriptD1Ev
#           STStackableScript::~STStackableScript()
# range [0x0899013c, 0x08990879]
0899013c +0x000:  push   %ebp
0899013d +0x001:  mov    %esp,%ebp
0899013f +0x003:  push   %esi
08990140 +0x004:  push   %ebx
08990141 +0x005:  sub    $0x20,%esp
08990144 +0x008:  mov    0x8(%ebp),%eax
08990147 +0x00b:  add    $0x4bc,%eax
0899014c +0x010:  mov    %eax,(%esp)
0899014f +0x013:  call   089c632a <_GLOBAL__I_g_npcNameVector+0x3705>  ; global constructors keyed to g_npcNameVector+0x3705
08990154 +0x018:  xor    $0x1,%eax
08990157 +0x01b:  test   %al,%al
08990159 +0x01d:  je     08990233 <+0xf7>
0899015f +0x023:  mov    0x8(%ebp),%eax
08990162 +0x026:  lea    0x4bc(%eax),%edx
08990168 +0x02c:  lea    -0x10(%ebp),%eax
0899016b +0x02f:  mov    %edx,0x4(%esp)
0899016f +0x033:  mov    %eax,(%esp)
08990172 +0x036:  call   089c633e <_GLOBAL__I_g_npcNameVector+0x3719>  ; global constructors keyed to g_npcNameVector+0x3719
08990177 +0x03b:  sub    $0x4,%esp
0899017a +0x03e:  jmp    089901d2 <+0x96>
0899017c +0x040:  lea    -0x10(%ebp),%eax
0899017f +0x043:  mov    %eax,(%esp)
08990182 +0x046:  call   089c6396 <_GLOBAL__I_g_npcNameVector+0x3771>  ; global constructors keyed to g_npcNameVector+0x3771
08990187 +0x04b:  mov    0x4(%eax),%eax
0899018a +0x04e:  test   %eax,%eax
0899018c +0x050:  setne  %al
0899018f +0x053:  test   %al,%al
08990191 +0x055:  je     089901b5 <+0x79>
08990193 +0x057:  lea    -0x10(%ebp),%eax
08990196 +0x05a:  mov    %eax,(%esp)
08990199 +0x05d:  call   089c6396 <_GLOBAL__I_g_npcNameVector+0x3771>  ; global constructors keyed to g_npcNameVector+0x3771
0899019e +0x062:  mov    0x4(%eax),%ebx
089901a1 +0x065:  test   %ebx,%ebx
089901a3 +0x067:  je     089901b5 <+0x79>
089901a5 +0x069:  mov    %ebx,(%esp)
089901a8 +0x06c:  call   0891a4c6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x11a5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x11a5
089901ad +0x071:  mov    %ebx,(%esp)
089901b0 +0x074:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
089901b5 +0x079:  lea    -0x10(%ebp),%eax
089901b8 +0x07c:  mov    %eax,(%esp)
089901bb +0x07f:  call   089c6396 <_GLOBAL__I_g_npcNameVector+0x3771>  ; global constructors keyed to g_npcNameVector+0x3771
089901c0 +0x084:  movl   $0x0,0x4(%eax)
089901c7 +0x08b:  lea    -0x10(%ebp),%eax
089901ca +0x08e:  mov    %eax,(%esp)
089901cd +0x091:  call   089c6378 <_GLOBAL__I_g_npcNameVector+0x3753>  ; global constructors keyed to g_npcNameVector+0x3753
089901d2 +0x096:  mov    0x8(%ebp),%eax
089901d5 +0x099:  lea    0x4bc(%eax),%edx
089901db +0x09f:  lea    -0xc(%ebp),%eax
089901de +0x0a2:  mov    %edx,0x4(%esp)
089901e2 +0x0a6:  mov    %eax,(%esp)
089901e5 +0x0a9:  call   08629cba <_GLOBAL__I__Z22GetSocketTypeCharactert+0x3318>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x3318
089901ea +0x0ae:  sub    $0x4,%esp
089901ed +0x0b1:  lea    -0xc(%ebp),%eax
089901f0 +0x0b4:  mov    %eax,0x4(%esp)
089901f4 +0x0b8:  lea    -0x10(%ebp),%eax
089901f7 +0x0bb:  mov    %eax,(%esp)
089901fa +0x0be:  call   089c6364 <_GLOBAL__I_g_npcNameVector+0x373f>  ; global constructors keyed to g_npcNameVector+0x373f
089901ff +0x0c3:  test   %al,%al
08990201 +0x0c5:  jne    0899017c <+0x40>
08990207 +0x0cb:  mov    0x8(%ebp),%eax
0899020a +0x0ce:  add    $0x4bc,%eax
0899020f +0x0d3:  mov    %eax,(%esp)
08990212 +0x0d6:  call   089c6430 <_GLOBAL__I_g_npcNameVector+0x380b>  ; global constructors keyed to g_npcNameVector+0x380b
08990217 +0x0db:  jmp    08990233 <+0xf7>
08990219 +0x0dd:  mov    %edx,%ebx
0899021b +0x0df:  mov    %eax,%esi
0899021d +0x0e1:  mov    0x8(%ebp),%eax
08990220 +0x0e4:  add    $0x50c,%eax
08990225 +0x0e9:  mov    %eax,(%esp)
08990228 +0x0ec:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0899022d +0x0f1:  mov    %esi,%eax
0899022f +0x0f3:  mov    %ebx,%edx
08990231 +0x0f5:  jmp    08990245 <+0x109>
08990233 +0x0f7:  mov    0x8(%ebp),%eax
08990236 +0x0fa:  add    $0x50c,%eax
0899023b +0x0ff:  mov    %eax,(%esp)
0899023e +0x102:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08990243 +0x107:  jmp    0899025f <+0x123>
08990245 +0x109:  mov    %edx,%ebx
08990247 +0x10b:  mov    %eax,%esi
08990249 +0x10d:  mov    0x8(%ebp),%eax
0899024c +0x110:  add    $0x4fc,%eax
08990251 +0x115:  mov    %eax,(%esp)
08990254 +0x118:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08990259 +0x11d:  mov    %esi,%eax
0899025b +0x11f:  mov    %ebx,%edx
0899025d +0x121:  jmp    08990271 <+0x135>
0899025f +0x123:  mov    0x8(%ebp),%eax
08990262 +0x126:  add    $0x4fc,%eax
08990267 +0x12b:  mov    %eax,(%esp)
0899026a +0x12e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0899026f +0x133:  jmp    0899028b <+0x14f>
08990271 +0x135:  mov    %edx,%ebx
08990273 +0x137:  mov    %eax,%esi
08990275 +0x139:  mov    0x8(%ebp),%eax
08990278 +0x13c:  add    $0x4d4,%eax
0899027d +0x141:  mov    %eax,(%esp)
08990280 +0x144:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08990285 +0x149:  mov    %esi,%eax
08990287 +0x14b:  mov    %ebx,%edx
08990289 +0x14d:  jmp    0899029d <+0x161>
0899028b +0x14f:  mov    0x8(%ebp),%eax
0899028e +0x152:  add    $0x4d4,%eax
08990293 +0x157:  mov    %eax,(%esp)
08990296 +0x15a:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0899029b +0x15f:  jmp    089902b7 <+0x17b>
0899029d +0x161:  mov    %edx,%ebx
0899029f +0x163:  mov    %eax,%esi
089902a1 +0x165:  mov    0x8(%ebp),%eax
089902a4 +0x168:  add    $0x4bc,%eax
089902a9 +0x16d:  mov    %eax,(%esp)
089902ac +0x170:  call   089c3ae2 <_GLOBAL__I_g_npcNameVector+0xebd>  ; global constructors keyed to g_npcNameVector+0xebd
089902b1 +0x175:  mov    %esi,%eax
089902b3 +0x177:  mov    %ebx,%edx
089902b5 +0x179:  jmp    089902c9 <+0x18d>
089902b7 +0x17b:  mov    0x8(%ebp),%eax
089902ba +0x17e:  add    $0x4bc,%eax
089902bf +0x183:  mov    %eax,(%esp)
089902c2 +0x186:  call   089c3ae2 <_GLOBAL__I_g_npcNameVector+0xebd>  ; global constructors keyed to g_npcNameVector+0xebd
089902c7 +0x18b:  jmp    089902e3 <+0x1a7>
089902c9 +0x18d:  mov    %edx,%ebx
089902cb +0x18f:  mov    %eax,%esi
089902cd +0x191:  mov    0x8(%ebp),%eax
089902d0 +0x194:  add    $0x4b4,%eax
089902d5 +0x199:  mov    %eax,(%esp)
089902d8 +0x19c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089902dd +0x1a1:  mov    %esi,%eax
089902df +0x1a3:  mov    %ebx,%edx
089902e1 +0x1a5:  jmp    089902f5 <+0x1b9>
089902e3 +0x1a7:  mov    0x8(%ebp),%eax
089902e6 +0x1aa:  add    $0x4b4,%eax
089902eb +0x1af:  mov    %eax,(%esp)
089902ee +0x1b2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089902f3 +0x1b7:  jmp    0899030f <+0x1d3>
089902f5 +0x1b9:  mov    %edx,%ebx
089902f7 +0x1bb:  mov    %eax,%esi
089902f9 +0x1bd:  mov    0x8(%ebp),%eax
089902fc +0x1c0:  add    $0x498,%eax
08990301 +0x1c5:  mov    %eax,(%esp)
08990304 +0x1c8:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08990309 +0x1cd:  mov    %esi,%eax
0899030b +0x1cf:  mov    %ebx,%edx
0899030d +0x1d1:  jmp    08990321 <+0x1e5>
0899030f +0x1d3:  mov    0x8(%ebp),%eax
08990312 +0x1d6:  add    $0x498,%eax
08990317 +0x1db:  mov    %eax,(%esp)
0899031a +0x1de:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0899031f +0x1e3:  jmp    0899033b <+0x1ff>
08990321 +0x1e5:  mov    %edx,%ebx
08990323 +0x1e7:  mov    %eax,%esi
08990325 +0x1e9:  mov    0x8(%ebp),%eax
08990328 +0x1ec:  add    $0x480,%eax
0899032d +0x1f1:  mov    %eax,(%esp)
08990330 +0x1f4:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08990335 +0x1f9:  mov    %esi,%eax
08990337 +0x1fb:  mov    %ebx,%edx
08990339 +0x1fd:  jmp    0899034d <+0x211>
0899033b +0x1ff:  mov    0x8(%ebp),%eax
0899033e +0x202:  add    $0x480,%eax
08990343 +0x207:  mov    %eax,(%esp)
08990346 +0x20a:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0899034b +0x20f:  jmp    08990367 <+0x22b>
0899034d +0x211:  mov    %edx,%ebx
0899034f +0x213:  mov    %eax,%esi
08990351 +0x215:  mov    0x8(%ebp),%eax
08990354 +0x218:  add    $0x41c,%eax
08990359 +0x21d:  mov    %eax,(%esp)
0899035c +0x220:  call   08514658 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc8d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc8d
08990361 +0x225:  mov    %esi,%eax
08990363 +0x227:  mov    %ebx,%edx
08990365 +0x229:  jmp    08990379 <+0x23d>
08990367 +0x22b:  mov    0x8(%ebp),%eax
0899036a +0x22e:  add    $0x41c,%eax
0899036f +0x233:  mov    %eax,(%esp)
08990372 +0x236:  call   08514658 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc8d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc8d
08990377 +0x23b:  jmp    08990393 <+0x257>
08990379 +0x23d:  mov    %edx,%ebx
0899037b +0x23f:  mov    %eax,%esi
0899037d +0x241:  mov    0x8(%ebp),%eax
08990380 +0x244:  add    $0x410,%eax
08990385 +0x249:  mov    %eax,(%esp)
08990388 +0x24c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0899038d +0x251:  mov    %esi,%eax
0899038f +0x253:  mov    %ebx,%edx
08990391 +0x255:  jmp    089903a5 <+0x269>
08990393 +0x257:  mov    0x8(%ebp),%eax
08990396 +0x25a:  add    $0x410,%eax
0899039b +0x25f:  mov    %eax,(%esp)
0899039e +0x262:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089903a3 +0x267:  jmp    089903bf <+0x283>
089903a5 +0x269:  mov    %edx,%ebx
089903a7 +0x26b:  mov    %eax,%esi
089903a9 +0x26d:  mov    0x8(%ebp),%eax
089903ac +0x270:  add    $0x3f4,%eax
089903b1 +0x275:  mov    %eax,(%esp)
089903b4 +0x278:  call   08513b34 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x169>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x169
089903b9 +0x27d:  mov    %esi,%eax
089903bb +0x27f:  mov    %ebx,%edx
089903bd +0x281:  jmp    089903d1 <+0x295>
089903bf +0x283:  mov    0x8(%ebp),%eax
089903c2 +0x286:  add    $0x3f4,%eax
089903c7 +0x28b:  mov    %eax,(%esp)
089903ca +0x28e:  call   08513b34 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x169>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x169
089903cf +0x293:  jmp    089903eb <+0x2af>
089903d1 +0x295:  mov    %edx,%ebx
089903d3 +0x297:  mov    %eax,%esi
089903d5 +0x299:  mov    0x8(%ebp),%eax
089903d8 +0x29c:  add    $0x3d4,%eax
089903dd +0x2a1:  mov    %eax,(%esp)
089903e0 +0x2a4:  call   0851466e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xca3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xca3
089903e5 +0x2a9:  mov    %esi,%eax
089903e7 +0x2ab:  mov    %ebx,%edx
089903e9 +0x2ad:  jmp    089903fd <+0x2c1>
089903eb +0x2af:  mov    0x8(%ebp),%eax
089903ee +0x2b2:  add    $0x3d4,%eax
089903f3 +0x2b7:  mov    %eax,(%esp)
089903f6 +0x2ba:  call   0851466e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xca3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xca3
089903fb +0x2bf:  jmp    08990417 <+0x2db>
089903fd +0x2c1:  mov    %edx,%ebx
089903ff +0x2c3:  mov    %eax,%esi
08990401 +0x2c5:  mov    0x8(%ebp),%eax
08990404 +0x2c8:  add    $0x3c0,%eax
08990409 +0x2cd:  mov    %eax,(%esp)
0899040c +0x2d0:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08990411 +0x2d5:  mov    %esi,%eax
08990413 +0x2d7:  mov    %ebx,%edx
08990415 +0x2d9:  jmp    08990429 <+0x2ed>
08990417 +0x2db:  mov    0x8(%ebp),%eax
0899041a +0x2de:  add    $0x3c0,%eax
0899041f +0x2e3:  mov    %eax,(%esp)
08990422 +0x2e6:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08990427 +0x2eb:  jmp    08990443 <+0x307>
08990429 +0x2ed:  mov    %edx,%ebx
0899042b +0x2ef:  mov    %eax,%esi
0899042d +0x2f1:  mov    0x8(%ebp),%eax
08990430 +0x2f4:  add    $0x3a4,%eax
08990435 +0x2f9:  mov    %eax,(%esp)
08990438 +0x2fc:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0899043d +0x301:  mov    %esi,%eax
0899043f +0x303:  mov    %ebx,%edx
08990441 +0x305:  jmp    08990455 <+0x319>
08990443 +0x307:  mov    0x8(%ebp),%eax
08990446 +0x30a:  add    $0x3a4,%eax
0899044b +0x30f:  mov    %eax,(%esp)
0899044e +0x312:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08990453 +0x317:  jmp    0899046f <+0x333>
08990455 +0x319:  mov    %edx,%ebx
08990457 +0x31b:  mov    %eax,%esi
08990459 +0x31d:  mov    0x8(%ebp),%eax
0899045c +0x320:  add    $0x374,%eax
08990461 +0x325:  mov    %eax,(%esp)
08990464 +0x328:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08990469 +0x32d:  mov    %esi,%eax
0899046b +0x32f:  mov    %ebx,%edx
0899046d +0x331:  jmp    08990481 <+0x345>
0899046f +0x333:  mov    0x8(%ebp),%eax
08990472 +0x336:  add    $0x374,%eax
08990477 +0x33b:  mov    %eax,(%esp)
0899047a +0x33e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0899047f +0x343:  jmp    0899049b <+0x35f>
08990481 +0x345:  mov    %edx,%ebx
08990483 +0x347:  mov    %eax,%esi
08990485 +0x349:  mov    0x8(%ebp),%eax
08990488 +0x34c:  add    $0x368,%eax
0899048d +0x351:  mov    %eax,(%esp)
08990490 +0x354:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08990495 +0x359:  mov    %esi,%eax
08990497 +0x35b:  mov    %ebx,%edx
08990499 +0x35d:  jmp    089904ad <+0x371>
0899049b +0x35f:  mov    0x8(%ebp),%eax
0899049e +0x362:  add    $0x368,%eax
089904a3 +0x367:  mov    %eax,(%esp)
089904a6 +0x36a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089904ab +0x36f:  jmp    089904c7 <+0x38b>
089904ad +0x371:  mov    %edx,%ebx
089904af +0x373:  mov    %eax,%esi
089904b1 +0x375:  mov    0x8(%ebp),%eax
089904b4 +0x378:  add    $0x34c,%eax
089904b9 +0x37d:  mov    %eax,(%esp)
089904bc +0x380:  call   089c3ace <_GLOBAL__I_g_npcNameVector+0xea9>  ; global constructors keyed to g_npcNameVector+0xea9
089904c1 +0x385:  mov    %esi,%eax
089904c3 +0x387:  mov    %ebx,%edx
089904c5 +0x389:  jmp    089904d9 <+0x39d>
089904c7 +0x38b:  mov    0x8(%ebp),%eax
089904ca +0x38e:  add    $0x34c,%eax
089904cf +0x393:  mov    %eax,(%esp)
089904d2 +0x396:  call   089c3ace <_GLOBAL__I_g_npcNameVector+0xea9>  ; global constructors keyed to g_npcNameVector+0xea9
089904d7 +0x39b:  jmp    089904f3 <+0x3b7>
089904d9 +0x39d:  mov    %edx,%ebx
089904db +0x39f:  mov    %eax,%esi
089904dd +0x3a1:  mov    0x8(%ebp),%eax
089904e0 +0x3a4:  add    $0x2ec,%eax
089904e5 +0x3a9:  mov    %eax,(%esp)
089904e8 +0x3ac:  call   089c3aba <_GLOBAL__I_g_npcNameVector+0xe95>  ; global constructors keyed to g_npcNameVector+0xe95
089904ed +0x3b1:  mov    %esi,%eax
089904ef +0x3b3:  mov    %ebx,%edx
089904f1 +0x3b5:  jmp    08990505 <+0x3c9>
089904f3 +0x3b7:  mov    0x8(%ebp),%eax
089904f6 +0x3ba:  add    $0x2ec,%eax
089904fb +0x3bf:  mov    %eax,(%esp)
089904fe +0x3c2:  call   089c3aba <_GLOBAL__I_g_npcNameVector+0xe95>  ; global constructors keyed to g_npcNameVector+0xe95
08990503 +0x3c7:  jmp    0899051f <+0x3e3>
08990505 +0x3c9:  mov    %edx,%ebx
08990507 +0x3cb:  mov    %eax,%esi
08990509 +0x3cd:  mov    0x8(%ebp),%eax
0899050c +0x3d0:  add    $0x2a4,%eax
08990511 +0x3d5:  mov    %eax,(%esp)
08990514 +0x3d8:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
08990519 +0x3dd:  mov    %esi,%eax
0899051b +0x3df:  mov    %ebx,%edx
0899051d +0x3e1:  jmp    08990531 <+0x3f5>
0899051f +0x3e3:  mov    0x8(%ebp),%eax
08990522 +0x3e6:  add    $0x2a4,%eax
08990527 +0x3eb:  mov    %eax,(%esp)
0899052a +0x3ee:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0899052f +0x3f3:  jmp    0899054b <+0x40f>
08990531 +0x3f5:  mov    %edx,%ebx
08990533 +0x3f7:  mov    %eax,%esi
08990535 +0x3f9:  mov    0x8(%ebp),%eax
08990538 +0x3fc:  add    $0x280,%eax
0899053d +0x401:  mov    %eax,(%esp)
08990540 +0x404:  call   08514612 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc47>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc47
08990545 +0x409:  mov    %esi,%eax
08990547 +0x40b:  mov    %ebx,%edx
08990549 +0x40d:  jmp    0899055d <+0x421>
0899054b +0x40f:  mov    0x8(%ebp),%eax
0899054e +0x412:  add    $0x280,%eax
08990553 +0x417:  mov    %eax,(%esp)
08990556 +0x41a:  call   08514612 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc47>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc47
0899055b +0x41f:  jmp    08990577 <+0x43b>
0899055d +0x421:  mov    %edx,%ebx
0899055f +0x423:  mov    %eax,%esi
08990561 +0x425:  mov    0x8(%ebp),%eax
08990564 +0x428:  add    $0x274,%eax
08990569 +0x42d:  mov    %eax,(%esp)
0899056c +0x430:  call   08387968 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17408>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17408
08990571 +0x435:  mov    %esi,%eax
08990573 +0x437:  mov    %ebx,%edx
08990575 +0x439:  jmp    08990589 <+0x44d>
08990577 +0x43b:  mov    0x8(%ebp),%eax
0899057a +0x43e:  add    $0x274,%eax
0899057f +0x443:  mov    %eax,(%esp)
08990582 +0x446:  call   08387968 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17408>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17408
08990587 +0x44b:  jmp    089905a3 <+0x467>
08990589 +0x44d:  mov    %edx,%ebx
0899058b +0x44f:  mov    %eax,%esi
0899058d +0x451:  mov    0x8(%ebp),%eax
08990590 +0x454:  add    $0x268,%eax
08990595 +0x459:  mov    %eax,(%esp)
08990598 +0x45c:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0899059d +0x461:  mov    %esi,%eax
0899059f +0x463:  mov    %ebx,%edx
089905a1 +0x465:  jmp    089905b5 <+0x479>
089905a3 +0x467:  mov    0x8(%ebp),%eax
089905a6 +0x46a:  add    $0x268,%eax
089905ab +0x46f:  mov    %eax,(%esp)
089905ae +0x472:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
089905b3 +0x477:  jmp    089905cf <+0x493>
089905b5 +0x479:  mov    %edx,%ebx
089905b7 +0x47b:  mov    %eax,%esi
089905b9 +0x47d:  mov    0x8(%ebp),%eax
089905bc +0x480:  add    $0x25c,%eax
089905c1 +0x485:  mov    %eax,(%esp)
089905c4 +0x488:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089905c9 +0x48d:  mov    %esi,%eax
089905cb +0x48f:  mov    %ebx,%edx
089905cd +0x491:  jmp    089905e1 <+0x4a5>
089905cf +0x493:  mov    0x8(%ebp),%eax
089905d2 +0x496:  add    $0x25c,%eax
089905d7 +0x49b:  mov    %eax,(%esp)
089905da +0x49e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089905df +0x4a3:  jmp    089905fb <+0x4bf>
089905e1 +0x4a5:  mov    %edx,%ebx
089905e3 +0x4a7:  mov    %eax,%esi
089905e5 +0x4a9:  mov    0x8(%ebp),%eax
089905e8 +0x4ac:  add    $0x250,%eax
089905ed +0x4b1:  mov    %eax,(%esp)
089905f0 +0x4b4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089905f5 +0x4b9:  mov    %esi,%eax
089905f7 +0x4bb:  mov    %ebx,%edx
089905f9 +0x4bd:  jmp    0899060d <+0x4d1>
089905fb +0x4bf:  mov    0x8(%ebp),%eax
089905fe +0x4c2:  add    $0x250,%eax
08990603 +0x4c7:  mov    %eax,(%esp)
08990606 +0x4ca:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0899060b +0x4cf:  jmp    08990627 <+0x4eb>
0899060d +0x4d1:  mov    %edx,%ebx
0899060f +0x4d3:  mov    %eax,%esi
08990611 +0x4d5:  mov    0x8(%ebp),%eax
08990614 +0x4d8:  add    $0x244,%eax
08990619 +0x4dd:  mov    %eax,(%esp)
0899061c +0x4e0:  call   08381952 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x113f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x113f2
08990621 +0x4e5:  mov    %esi,%eax
08990623 +0x4e7:  mov    %ebx,%edx
08990625 +0x4e9:  jmp    08990639 <+0x4fd>
08990627 +0x4eb:  mov    0x8(%ebp),%eax
0899062a +0x4ee:  add    $0x244,%eax
0899062f +0x4f3:  mov    %eax,(%esp)
08990632 +0x4f6:  call   08381952 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x113f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x113f2
08990637 +0x4fb:  jmp    08990653 <+0x517>
08990639 +0x4fd:  mov    %edx,%ebx
0899063b +0x4ff:  mov    %eax,%esi
0899063d +0x501:  mov    0x8(%ebp),%eax
08990640 +0x504:  add    $0x238,%eax
08990645 +0x509:  mov    %eax,(%esp)
08990648 +0x50c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0899064d +0x511:  mov    %esi,%eax
0899064f +0x513:  mov    %ebx,%edx
08990651 +0x515:  jmp    08990665 <+0x529>
08990653 +0x517:  mov    0x8(%ebp),%eax
08990656 +0x51a:  add    $0x238,%eax
0899065b +0x51f:  mov    %eax,(%esp)
0899065e +0x522:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08990663 +0x527:  jmp    0899067f <+0x543>
08990665 +0x529:  mov    %edx,%ebx
08990667 +0x52b:  mov    %eax,%esi
08990669 +0x52d:  mov    0x8(%ebp),%eax
0899066c +0x530:  add    $0x234,%eax
08990671 +0x535:  mov    %eax,(%esp)
08990674 +0x538:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08990679 +0x53d:  mov    %esi,%eax
0899067b +0x53f:  mov    %ebx,%edx
0899067d +0x541:  jmp    08990691 <+0x555>
0899067f +0x543:  mov    0x8(%ebp),%eax
08990682 +0x546:  add    $0x234,%eax
08990687 +0x54b:  mov    %eax,(%esp)
0899068a +0x54e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0899068f +0x553:  jmp    089906ab <+0x56f>
08990691 +0x555:  mov    %edx,%ebx
08990693 +0x557:  mov    %eax,%esi
08990695 +0x559:  mov    0x8(%ebp),%eax
08990698 +0x55c:  add    $0x230,%eax
0899069d +0x561:  mov    %eax,(%esp)
089906a0 +0x564:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089906a5 +0x569:  mov    %esi,%eax
089906a7 +0x56b:  mov    %ebx,%edx
089906a9 +0x56d:  jmp    089906bd <+0x581>
089906ab +0x56f:  mov    0x8(%ebp),%eax
089906ae +0x572:  add    $0x230,%eax
089906b3 +0x577:  mov    %eax,(%esp)
089906b6 +0x57a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089906bb +0x57f:  jmp    089906d7 <+0x59b>
089906bd +0x581:  mov    %edx,%ebx
089906bf +0x583:  mov    %eax,%esi
089906c1 +0x585:  mov    0x8(%ebp),%eax
089906c4 +0x588:  add    $0x224,%eax
089906c9 +0x58d:  mov    %eax,(%esp)
089906cc +0x590:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089906d1 +0x595:  mov    %esi,%eax
089906d3 +0x597:  mov    %ebx,%edx
089906d5 +0x599:  jmp    089906e9 <+0x5ad>
089906d7 +0x59b:  mov    0x8(%ebp),%eax
089906da +0x59e:  add    $0x224,%eax
089906df +0x5a3:  mov    %eax,(%esp)
089906e2 +0x5a6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089906e7 +0x5ab:  jmp    08990703 <+0x5c7>
089906e9 +0x5ad:  mov    %edx,%ebx
089906eb +0x5af:  mov    %eax,%esi
089906ed +0x5b1:  mov    0x8(%ebp),%eax
089906f0 +0x5b4:  add    $0x214,%eax
089906f5 +0x5b9:  mov    %eax,(%esp)
089906f8 +0x5bc:  call   08515fd4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2609>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2609
089906fd +0x5c1:  mov    %esi,%eax
089906ff +0x5c3:  mov    %ebx,%edx
08990701 +0x5c5:  jmp    08990715 <+0x5d9>
08990703 +0x5c7:  mov    0x8(%ebp),%eax
08990706 +0x5ca:  add    $0x214,%eax
0899070b +0x5cf:  mov    %eax,(%esp)
0899070e +0x5d2:  call   08515fd4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2609>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2609
08990713 +0x5d7:  jmp    0899072f <+0x5f3>
08990715 +0x5d9:  mov    %edx,%ebx
08990717 +0x5db:  mov    %eax,%esi
08990719 +0x5dd:  mov    0x8(%ebp),%eax
0899071c +0x5e0:  add    $0x208,%eax
08990721 +0x5e5:  mov    %eax,(%esp)
08990724 +0x5e8:  call   089c5afa <_GLOBAL__I_g_npcNameVector+0x2ed5>  ; global constructors keyed to g_npcNameVector+0x2ed5
08990729 +0x5ed:  mov    %esi,%eax
0899072b +0x5ef:  mov    %ebx,%edx
0899072d +0x5f1:  jmp    08990741 <+0x605>
0899072f +0x5f3:  mov    0x8(%ebp),%eax
08990732 +0x5f6:  add    $0x208,%eax
08990737 +0x5fb:  mov    %eax,(%esp)
0899073a +0x5fe:  call   089c5afa <_GLOBAL__I_g_npcNameVector+0x2ed5>  ; global constructors keyed to g_npcNameVector+0x2ed5
0899073f +0x603:  jmp    0899075b <+0x61f>
08990741 +0x605:  mov    %edx,%ebx
08990743 +0x607:  mov    %eax,%esi
08990745 +0x609:  mov    0x8(%ebp),%eax
08990748 +0x60c:  add    $0x1f8,%eax
0899074d +0x611:  mov    %eax,(%esp)
08990750 +0x614:  call   08515f76 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x25ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x25ab
08990755 +0x619:  mov    %esi,%eax
08990757 +0x61b:  mov    %ebx,%edx
08990759 +0x61d:  jmp    0899076d <+0x631>
0899075b +0x61f:  mov    0x8(%ebp),%eax
0899075e +0x622:  add    $0x1f8,%eax
08990763 +0x627:  mov    %eax,(%esp)
08990766 +0x62a:  call   08515f76 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x25ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x25ab
0899076b +0x62f:  jmp    08990787 <+0x64b>
0899076d +0x631:  mov    %edx,%ebx
0899076f +0x633:  mov    %eax,%esi
08990771 +0x635:  mov    0x8(%ebp),%eax
08990774 +0x638:  add    $0x1ec,%eax
08990779 +0x63d:  mov    %eax,(%esp)
0899077c +0x640:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08990781 +0x645:  mov    %esi,%eax
08990783 +0x647:  mov    %ebx,%edx
08990785 +0x649:  jmp    08990799 <+0x65d>
08990787 +0x64b:  mov    0x8(%ebp),%eax
0899078a +0x64e:  add    $0x1ec,%eax
0899078f +0x653:  mov    %eax,(%esp)
08990792 +0x656:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08990797 +0x65b:  jmp    089907b3 <+0x677>
08990799 +0x65d:  mov    %edx,%ebx
0899079b +0x65f:  mov    %eax,%esi
0899079d +0x661:  mov    0x8(%ebp),%eax
089907a0 +0x664:  add    $0x1d8,%eax
089907a5 +0x669:  mov    %eax,(%esp)
089907a8 +0x66c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089907ad +0x671:  mov    %esi,%eax
089907af +0x673:  mov    %ebx,%edx
089907b1 +0x675:  jmp    089907c5 <+0x689>
089907b3 +0x677:  mov    0x8(%ebp),%eax
089907b6 +0x67a:  add    $0x1d8,%eax
089907bb +0x67f:  mov    %eax,(%esp)
089907be +0x682:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089907c3 +0x687:  jmp    089907df <+0x6a3>
089907c5 +0x689:  mov    %edx,%ebx
089907c7 +0x68b:  mov    %eax,%esi
089907c9 +0x68d:  mov    0x8(%ebp),%eax
089907cc +0x690:  add    $0x19c,%eax
089907d1 +0x695:  mov    %eax,(%esp)
089907d4 +0x698:  call   08515df6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x242b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x242b
089907d9 +0x69d:  mov    %esi,%eax
089907db +0x69f:  mov    %ebx,%edx
089907dd +0x6a1:  jmp    089907f1 <+0x6b5>
089907df +0x6a3:  mov    0x8(%ebp),%eax
089907e2 +0x6a6:  add    $0x19c,%eax
089907e7 +0x6ab:  mov    %eax,(%esp)
089907ea +0x6ae:  call   08515df6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x242b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x242b
089907ef +0x6b3:  jmp    0899080b <+0x6cf>
089907f1 +0x6b5:  mov    %edx,%ebx
089907f3 +0x6b7:  mov    %eax,%esi
089907f5 +0x6b9:  mov    0x8(%ebp),%eax
089907f8 +0x6bc:  add    $0x190,%eax
089907fd +0x6c1:  mov    %eax,(%esp)
08990800 +0x6c4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08990805 +0x6c9:  mov    %esi,%eax
08990807 +0x6cb:  mov    %ebx,%edx
08990809 +0x6cd:  jmp    0899081d <+0x6e1>
0899080b +0x6cf:  mov    0x8(%ebp),%eax
0899080e +0x6d2:  add    $0x190,%eax
08990813 +0x6d7:  mov    %eax,(%esp)
08990816 +0x6da:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0899081b +0x6df:  jmp    08990837 <+0x6fb>
0899081d +0x6e1:  mov    %edx,%ebx
0899081f +0x6e3:  mov    %eax,%esi
08990821 +0x6e5:  mov    0x8(%ebp),%eax
08990824 +0x6e8:  add    $0x178,%eax
08990829 +0x6ed:  mov    %eax,(%esp)
0899082c +0x6f0:  call   089c3a46 <_GLOBAL__I_g_npcNameVector+0xe21>  ; global constructors keyed to g_npcNameVector+0xe21
08990831 +0x6f5:  mov    %esi,%eax
08990833 +0x6f7:  mov    %ebx,%edx
08990835 +0x6f9:  jmp    08990849 <+0x70d>
08990837 +0x6fb:  mov    0x8(%ebp),%eax
0899083a +0x6fe:  add    $0x178,%eax
0899083f +0x703:  mov    %eax,(%esp)
08990842 +0x706:  call   089c3a46 <_GLOBAL__I_g_npcNameVector+0xe21>  ; global constructors keyed to g_npcNameVector+0xe21
08990847 +0x70b:  jmp    08990864 <+0x728>
08990849 +0x70d:  mov    %edx,%ebx
0899084b +0x70f:  mov    %eax,%esi
0899084d +0x711:  mov    0x8(%ebp),%eax
08990850 +0x714:  mov    %eax,(%esp)
08990853 +0x717:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
08990858 +0x71c:  mov    %esi,%eax
0899085a +0x71e:  mov    %ebx,%edx
0899085c +0x720:  mov    %eax,(%esp)
0899085f +0x723:  call   08ae3750 <_Unwind_Resume>
08990864 +0x728:  mov    0x8(%ebp),%eax
08990867 +0x72b:  mov    %eax,(%esp)
0899086a +0x72e:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
0899086f +0x733:  lea    -0x8(%ebp),%esp
08990872 +0x736:  add    $0x0,%esp
08990875 +0x739:  pop    %ebx
08990876 +0x73a:  pop    %esi
08990877 +0x73b:  pop    %ebp
08990878 +0x73c:  ret
08990879 +0x73d:  nop
```

## 反编译 C

```c
// STStackableScript::~STStackableScript @ 0x899013c

/* STStackableScript::~STStackableScript() */

void __thiscall STStackableScript::~STStackableScript(STStackableScript *this)

{
  EquipmentParameterInfo *this_00;
  char cVar1;
  int iVar2;
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_14 [4];
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_10 [4];
  
                    /* try { // try from 0899014f to 08990216 has its CatchHandler @ 08990219 */
  cVar1 = std::
          map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
          ::empty((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                   *)(this + 0x4bc));
  if (cVar1 != '\x01') {
    std::
    map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::end(local_10);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator!=((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_14);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
                operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                            *)local_14);
        this_00 = *(EquipmentParameterInfo **)(iVar2 + 4);
        if (this_00 != (EquipmentParameterInfo *)0x0) {
          EquipmentParameterInfo::~EquipmentParameterInfo(this_00);
          operator_delete(this_00);
        }
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_14);
      *(undefined4 *)(iVar2 + 4) = 0;
      std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> *)
                 local_14);
    }
    std::
    map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
    ::clear((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
             *)(this + 0x4bc));
  }
                    /* try { // try from 0899023e to 08990242 has its CatchHandler @ 08990245 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
                    /* try { // try from 0899026a to 0899026e has its CatchHandler @ 08990271 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x4fc));
                    /* try { // try from 08990296 to 0899029a has its CatchHandler @ 0899029d */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
                    /* try { // try from 089902c2 to 089902c6 has its CatchHandler @ 089902c9 */
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::~map((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
          *)(this + 0x4bc));
                    /* try { // try from 089902ee to 089902f2 has its CatchHandler @ 089902f5 */
  std::string::~string((string *)(this + 0x4b4));
                    /* try { // try from 0899031a to 0899031e has its CatchHandler @ 08990321 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
                    /* try { // try from 08990346 to 0899034a has its CatchHandler @ 0899034d */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
                    /* try { // try from 08990372 to 08990376 has its CatchHandler @ 08990379 */
  BoosterSelectInfo::~BoosterSelectInfo((BoosterSelectInfo *)(this + 0x41c));
                    /* try { // try from 0899039e to 089903a2 has its CatchHandler @ 089903a5 */
  std::string::~string((string *)(this + 0x410));
                    /* try { // try from 089903ca to 089903ce has its CatchHandler @ 089903d1 */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::~map((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
          *)(this + 0x3f4));
                    /* try { // try from 089903f6 to 089903fa has its CatchHandler @ 089903fd */
  stLimitCubeInfo::~stLimitCubeInfo((stLimitCubeInfo *)(this + 0x3d4));
                    /* try { // try from 08990422 to 08990426 has its CatchHandler @ 08990429 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
                    /* try { // try from 0899044e to 08990452 has its CatchHandler @ 08990455 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
                    /* try { // try from 0899047a to 0899047e has its CatchHandler @ 08990481 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
                    /* try { // try from 089904a6 to 089904aa has its CatchHandler @ 089904ad */
  std::string::~string((string *)(this + 0x368));
                    /* try { // try from 089904d2 to 089904d6 has its CatchHandler @ 089904d9 */
  STStatChangeVector::~STStatChangeVector((STStatChangeVector *)(this + 0x34c));
                    /* try { // try from 089904fe to 08990502 has its CatchHandler @ 08990505 */
  STStatusGenerate::~STStatusGenerate((STStatusGenerate *)(this + 0x2ec));
                    /* try { // try from 0899052a to 0899052e has its CatchHandler @ 08990531 */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x2a4)
            );
                    /* try { // try from 08990556 to 0899055a has its CatchHandler @ 0899055d */
  stStackableBooster_t::~stStackableBooster_t((stStackableBooster_t *)(this + 0x280));
                    /* try { // try from 08990582 to 08990586 has its CatchHandler @ 08990589 */
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::~vector((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
             *)(this + 0x274));
                    /* try { // try from 089905ae to 089905b2 has its CatchHandler @ 089905b5 */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
                    /* try { // try from 089905da to 089905de has its CatchHandler @ 089905e1 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x25c));
                    /* try { // try from 08990606 to 0899060a has its CatchHandler @ 0899060d */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x250));
                    /* try { // try from 08990632 to 08990636 has its CatchHandler @ 08990639 */
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x244));
                    /* try { // try from 0899065e to 08990662 has its CatchHandler @ 08990665 */
  std::string::~string((string *)(this + 0x238));
                    /* try { // try from 0899068a to 0899068e has its CatchHandler @ 08990691 */
  std::string::~string((string *)(this + 0x234));
                    /* try { // try from 089906b6 to 089906ba has its CatchHandler @ 089906bd */
  std::string::~string((string *)(this + 0x230));
                    /* try { // try from 089906e2 to 089906e6 has its CatchHandler @ 089906e9 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x224));
                    /* try { // try from 0899070e to 08990712 has its CatchHandler @ 08990715 */
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  ~vector((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
           *)(this + 0x214));
                    /* try { // try from 0899073a to 0899073e has its CatchHandler @ 08990741 */
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::~vector
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
                    /* try { // try from 08990766 to 0899076a has its CatchHandler @ 0899076d */
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::~vector
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
                    /* try { // try from 08990792 to 08990796 has its CatchHandler @ 08990799 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1ec));
                    /* try { // try from 089907be to 089907c2 has its CatchHandler @ 089907c5 */
  std::string::~string((string *)(this + 0x1d8));
                    /* try { // try from 089907ea to 089907ee has its CatchHandler @ 089907f1 */
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::~vector
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
                    /* try { // try from 08990816 to 0899081a has its CatchHandler @ 0899081d */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 400));
                    /* try { // try from 08990842 to 08990846 has its CatchHandler @ 08990849 */
  Arad_STStackableScript::~Arad_STStackableScript((Arad_STStackableScript *)(this + 0x178));
  STItemScript::~STItemScript((STItemScript *)this);
  return;
}
```
