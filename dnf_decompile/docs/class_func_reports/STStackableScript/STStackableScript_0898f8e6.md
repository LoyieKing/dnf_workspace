# STStackableScript

`_ZN17STStackableScriptC1ERS_`

`STStackableScript::STStackableScript(STStackableScript&)`

| 类 | 地址 |
|---|---|
| `STStackableScript` | `0x0898f8e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898f8e6  _ZN17STStackableScriptC1ERS_
#           STStackableScript::STStackableScript(STStackableScript&)
# range [0x0898f8e6, 0x0899013b]
0898f8e6 +0x000:  push   %ebp
0898f8e7 +0x001:  mov    %esp,%ebp
0898f8e9 +0x003:  push   %edi
0898f8ea +0x004:  push   %esi
0898f8eb +0x005:  push   %ebx
0898f8ec +0x006:  sub    $0x4c,%esp
0898f8ef +0x009:  mov    0x8(%ebp),%eax
0898f8f2 +0x00c:  mov    %eax,(%esp)
0898f8f5 +0x00f:  call   0898d3c6 <_ZN12STItemScriptC1Ev>  ; STItemScript::STItemScript()
0898f8fa +0x014:  mov    0x8(%ebp),%eax
0898f8fd +0x017:  add    $0x178,%eax
0898f902 +0x01c:  mov    %eax,(%esp)
0898f905 +0x01f:  call   089c33fa <_GLOBAL__I_g_npcNameVector+0x7d5>  ; global constructors keyed to g_npcNameVector+0x7d5
0898f90a +0x024:  mov    0x8(%ebp),%eax
0898f90d +0x027:  add    $0x190,%eax
0898f912 +0x02c:  mov    %eax,(%esp)
0898f915 +0x02f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f91a +0x034:  mov    0x8(%ebp),%eax
0898f91d +0x037:  add    $0x19c,%eax
0898f922 +0x03c:  mov    %eax,(%esp)
0898f925 +0x03f:  call   08518a16 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x504b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x504b
0898f92a +0x044:  mov    0x8(%ebp),%eax
0898f92d +0x047:  add    $0x1b9,%eax
0898f932 +0x04c:  mov    %eax,(%esp)
0898f935 +0x04f:  call   0898c770 <_ZN21CountinuousItemOptionC1Ev>  ; CountinuousItemOption::CountinuousItemOption()
0898f93a +0x054:  mov    0x8(%ebp),%eax
0898f93d +0x057:  add    $0x1bc,%eax
0898f942 +0x05c:  mov    %eax,(%esp)
0898f945 +0x05f:  call   0898c770 <_ZN21CountinuousItemOptionC1Ev>  ; CountinuousItemOption::CountinuousItemOption()
0898f94a +0x064:  mov    0x8(%ebp),%eax
0898f94d +0x067:  add    $0x1d8,%eax
0898f952 +0x06c:  mov    %eax,(%esp)
0898f955 +0x06f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f95a +0x074:  mov    0x8(%ebp),%eax
0898f95d +0x077:  add    $0x1ec,%eax
0898f962 +0x07c:  mov    %eax,(%esp)
0898f965 +0x07f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f96a +0x084:  mov    0x8(%ebp),%eax
0898f96d +0x087:  add    $0x1f8,%eax
0898f972 +0x08c:  mov    %eax,(%esp)
0898f975 +0x08f:  call   08518aa2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x50d7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x50d7
0898f97a +0x094:  mov    0x8(%ebp),%eax
0898f97d +0x097:  add    $0x208,%eax
0898f982 +0x09c:  mov    %eax,(%esp)
0898f985 +0x09f:  call   089c5ae6 <_GLOBAL__I_g_npcNameVector+0x2ec1>  ; global constructors keyed to g_npcNameVector+0x2ec1
0898f98a +0x0a4:  mov    0x8(%ebp),%eax
0898f98d +0x0a7:  add    $0x214,%eax
0898f992 +0x0ac:  mov    %eax,(%esp)
0898f995 +0x0af:  call   08518ab6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x50eb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x50eb
0898f99a +0x0b4:  mov    0x8(%ebp),%eax
0898f99d +0x0b7:  add    $0x224,%eax
0898f9a2 +0x0bc:  mov    %eax,(%esp)
0898f9a5 +0x0bf:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f9aa +0x0c4:  mov    0x8(%ebp),%eax
0898f9ad +0x0c7:  add    $0x230,%eax
0898f9b2 +0x0cc:  mov    %eax,(%esp)
0898f9b5 +0x0cf:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f9ba +0x0d4:  mov    0x8(%ebp),%eax
0898f9bd +0x0d7:  add    $0x234,%eax
0898f9c2 +0x0dc:  mov    %eax,(%esp)
0898f9c5 +0x0df:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f9ca +0x0e4:  mov    0x8(%ebp),%eax
0898f9cd +0x0e7:  add    $0x238,%eax
0898f9d2 +0x0ec:  mov    %eax,(%esp)
0898f9d5 +0x0ef:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898f9da +0x0f4:  mov    0x8(%ebp),%eax
0898f9dd +0x0f7:  add    $0x244,%eax
0898f9e2 +0x0fc:  mov    %eax,(%esp)
0898f9e5 +0x0ff:  call   0838193e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x113de>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x113de
0898f9ea +0x104:  mov    0x8(%ebp),%eax
0898f9ed +0x107:  add    $0x250,%eax
0898f9f2 +0x10c:  mov    %eax,(%esp)
0898f9f5 +0x10f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898f9fa +0x114:  mov    0x8(%ebp),%eax
0898f9fd +0x117:  add    $0x25c,%eax
0898fa02 +0x11c:  mov    %eax,(%esp)
0898fa05 +0x11f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898fa0a +0x124:  mov    0x8(%ebp),%eax
0898fa0d +0x127:  add    $0x268,%eax
0898fa12 +0x12c:  mov    %eax,(%esp)
0898fa15 +0x12f:  call   08518a2a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x505f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x505f
0898fa1a +0x134:  mov    0x8(%ebp),%eax
0898fa1d +0x137:  add    $0x274,%eax
0898fa22 +0x13c:  mov    %eax,(%esp)
0898fa25 +0x13f:  call   08518a3e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5073>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5073
0898fa2a +0x144:  mov    0x8(%ebp),%eax
0898fa2d +0x147:  add    $0x280,%eax
0898fa32 +0x14c:  mov    %eax,(%esp)
0898fa35 +0x14f:  call   085156d6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d0b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d0b
0898fa3a +0x154:  mov    0x8(%ebp),%eax
0898fa3d +0x157:  add    $0x2a4,%eax
0898fa42 +0x15c:  mov    %eax,(%esp)
0898fa45 +0x15f:  call   08518a2a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x505f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x505f
0898fa4a +0x164:  mov    0x8(%ebp),%eax
0898fa4d +0x167:  add    $0x2b0,%eax
0898fa52 +0x16c:  mov    %eax,(%esp)
0898fa55 +0x16f:  call   089c3098 <_GLOBAL__I_g_npcNameVector+0x473>  ; global constructors keyed to g_npcNameVector+0x473
0898fa5a +0x174:  mov    0x8(%ebp),%eax
0898fa5d +0x177:  add    $0x2c4,%eax
0898fa62 +0x17c:  mov    %eax,(%esp)
0898fa65 +0x17f:  call   089c3098 <_GLOBAL__I_g_npcNameVector+0x473>  ; global constructors keyed to g_npcNameVector+0x473
0898fa6a +0x184:  mov    0x8(%ebp),%eax
0898fa6d +0x187:  add    $0x2d8,%eax
0898fa72 +0x18c:  mov    %eax,(%esp)
0898fa75 +0x18f:  call   089c30dc <_GLOBAL__I_g_npcNameVector+0x4b7>  ; global constructors keyed to g_npcNameVector+0x4b7
0898fa7a +0x194:  mov    0x8(%ebp),%eax
0898fa7d +0x197:  add    $0x2ec,%eax
0898fa82 +0x19c:  mov    %eax,(%esp)
0898fa85 +0x19f:  call   089c3124 <_GLOBAL__I_g_npcNameVector+0x4ff>  ; global constructors keyed to g_npcNameVector+0x4ff
0898fa8a +0x1a4:  mov    0x8(%ebp),%eax
0898fa8d +0x1a7:  add    $0x304,%eax
0898fa92 +0x1ac:  mov    %eax,(%esp)
0898fa95 +0x1af:  call   089c3194 <_GLOBAL__I_g_npcNameVector+0x56f>  ; global constructors keyed to g_npcNameVector+0x56f
0898fa9a +0x1b4:  mov    0x8(%ebp),%eax
0898fa9d +0x1b7:  add    $0x314,%eax
0898faa2 +0x1bc:  mov    %eax,(%esp)
0898faa5 +0x1bf:  call   089c31d2 <_GLOBAL__I_g_npcNameVector+0x5ad>  ; global constructors keyed to g_npcNameVector+0x5ad
0898faaa +0x1c4:  mov    0x8(%ebp),%eax
0898faad +0x1c7:  add    $0x330,%eax
0898fab2 +0x1cc:  mov    %eax,(%esp)
0898fab5 +0x1cf:  call   089c3238 <_GLOBAL__I_g_npcNameVector+0x613>  ; global constructors keyed to g_npcNameVector+0x613
0898faba +0x1d4:  mov    0x8(%ebp),%eax
0898fabd +0x1d7:  add    $0x34c,%eax
0898fac2 +0x1dc:  mov    %eax,(%esp)
0898fac5 +0x1df:  call   089c32c8 <_GLOBAL__I_g_npcNameVector+0x6a3>  ; global constructors keyed to g_npcNameVector+0x6a3
0898faca +0x1e4:  mov    0x8(%ebp),%eax
0898facd +0x1e7:  add    $0x368,%eax
0898fad2 +0x1ec:  mov    %eax,(%esp)
0898fad5 +0x1ef:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898fada +0x1f4:  mov    0x8(%ebp),%eax
0898fadd +0x1f7:  add    $0x374,%eax
0898fae2 +0x1fc:  mov    %eax,(%esp)
0898fae5 +0x1ff:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898faea +0x204:  mov    0x8(%ebp),%eax
0898faed +0x207:  add    $0x3a4,%eax
0898faf2 +0x20c:  mov    %eax,(%esp)
0898faf5 +0x20f:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0898fafa +0x214:  mov    0x8(%ebp),%eax
0898fafd +0x217:  add    $0x3c0,%eax
0898fb02 +0x21c:  mov    %eax,(%esp)
0898fb05 +0x21f:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0898fb0a +0x224:  mov    0x8(%ebp),%eax
0898fb0d +0x227:  add    $0x3d4,%eax
0898fb12 +0x22c:  mov    %eax,(%esp)
0898fb15 +0x22f:  call   0851571c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d51>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d51
0898fb1a +0x234:  mov    0x8(%ebp),%eax
0898fb1d +0x237:  add    $0x3f4,%eax
0898fb22 +0x23c:  mov    %eax,(%esp)
0898fb25 +0x23f:  call   08515b9c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x21d1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x21d1
0898fb2a +0x244:  mov    0x8(%ebp),%eax
0898fb2d +0x247:  add    $0x410,%eax
0898fb32 +0x24c:  mov    %eax,(%esp)
0898fb35 +0x24f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898fb3a +0x254:  mov    0x8(%ebp),%eax
0898fb3d +0x257:  add    $0x41c,%eax
0898fb42 +0x25c:  mov    %eax,(%esp)
0898fb45 +0x25f:  call   08513b82 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1b7
0898fb4a +0x264:  mov    0x8(%ebp),%eax
0898fb4d +0x267:  add    $0x43c,%eax
0898fb52 +0x26c:  mov    %eax,(%esp)
0898fb55 +0x26f:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0898fb5a +0x274:  mov    0x8(%ebp),%eax
0898fb5d +0x277:  add    $0x47c,%eax
0898fb62 +0x27c:  mov    %eax,(%esp)
0898fb65 +0x27f:  call   08513b6e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1a3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1a3
0898fb6a +0x284:  mov    0x8(%ebp),%eax
0898fb6d +0x287:  add    $0x480,%eax
0898fb72 +0x28c:  mov    %eax,(%esp)
0898fb75 +0x28f:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898fb7a +0x294:  mov    0x8(%ebp),%eax
0898fb7d +0x297:  add    $0x498,%eax
0898fb82 +0x29c:  mov    %eax,(%esp)
0898fb85 +0x29f:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898fb8a +0x2a4:  mov    0x8(%ebp),%eax
0898fb8d +0x2a7:  add    $0x4b4,%eax
0898fb92 +0x2ac:  mov    %eax,(%esp)
0898fb95 +0x2af:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0898fb9a +0x2b4:  mov    0x8(%ebp),%eax
0898fb9d +0x2b7:  add    $0x4bc,%eax
0898fba2 +0x2bc:  mov    %eax,(%esp)
0898fba5 +0x2bf:  call   089c5b58 <_GLOBAL__I_g_npcNameVector+0x2f33>  ; global constructors keyed to g_npcNameVector+0x2f33
0898fbaa +0x2c4:  mov    0x8(%ebp),%eax
0898fbad +0x2c7:  add    $0x4d4,%eax
0898fbb2 +0x2cc:  mov    %eax,(%esp)
0898fbb5 +0x2cf:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898fbba +0x2d4:  mov    0x8(%ebp),%eax
0898fbbd +0x2d7:  add    $0x4fc,%eax
0898fbc2 +0x2dc:  mov    %eax,(%esp)
0898fbc5 +0x2df:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0898fbca +0x2e4:  mov    0x8(%ebp),%eax
0898fbcd +0x2e7:  add    $0x50c,%eax
0898fbd2 +0x2ec:  mov    %eax,(%esp)
0898fbd5 +0x2ef:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
0898fbda +0x2f4:  mov    0xc(%ebp),%eax
0898fbdd +0x2f7:  mov    %eax,0x4(%esp)
0898fbe1 +0x2fb:  mov    0x8(%ebp),%eax
0898fbe4 +0x2fe:  mov    %eax,(%esp)
0898fbe7 +0x301:  call   089c418e <_GLOBAL__I_g_npcNameVector+0x1569>  ; global constructors keyed to g_npcNameVector+0x1569
0898fbec +0x306:  mov    0xc(%ebp),%eax
0898fbef +0x309:  add    $0x4bc,%eax
0898fbf4 +0x30e:  mov    %eax,(%esp)
0898fbf7 +0x311:  call   089c632a <_GLOBAL__I_g_npcNameVector+0x3705>  ; global constructors keyed to g_npcNameVector+0x3705
0898fbfc +0x316:  xor    $0x1,%eax
0898fbff +0x319:  test   %al,%al
0898fc01 +0x31b:  je     08990130 <+0x84a>
0898fc07 +0x321:  mov    0xc(%ebp),%eax
0898fc0a +0x324:  lea    0x4bc(%eax),%edx
0898fc10 +0x32a:  lea    -0x38(%ebp),%eax
0898fc13 +0x32d:  mov    %edx,0x4(%esp)
0898fc17 +0x331:  mov    %eax,(%esp)
0898fc1a +0x334:  call   089c633e <_GLOBAL__I_g_npcNameVector+0x3719>  ; global constructors keyed to g_npcNameVector+0x3719
0898fc1f +0x339:  sub    $0x4,%esp
0898fc22 +0x33c:  jmp    0898fd33 <+0x44d>
0898fc27 +0x341:  mov    0x8(%ebp),%eax
0898fc2a +0x344:  lea    0x4bc(%eax),%edx
0898fc30 +0x34a:  lea    -0x30(%ebp),%eax
0898fc33 +0x34d:  mov    %edx,0x4(%esp)
0898fc37 +0x351:  mov    %eax,(%esp)
0898fc3a +0x354:  call   08629cba <_GLOBAL__I__Z22GetSocketTypeCharactert+0x3318>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x3318
0898fc3f +0x359:  sub    $0x4,%esp
0898fc42 +0x35c:  lea    -0x38(%ebp),%eax
0898fc45 +0x35f:  mov    %eax,(%esp)
0898fc48 +0x362:  call   089c6396 <_GLOBAL__I_g_npcNameVector+0x3771>  ; global constructors keyed to g_npcNameVector+0x3771
0898fc4d +0x367:  mov    %eax,%edx
0898fc4f +0x369:  mov    0x8(%ebp),%eax
0898fc52 +0x36c:  lea    0x4bc(%eax),%ecx
0898fc58 +0x372:  lea    -0x2c(%ebp),%eax
0898fc5b +0x375:  mov    %edx,0x8(%esp)
0898fc5f +0x379:  mov    %ecx,0x4(%esp)
0898fc63 +0x37d:  mov    %eax,(%esp)
0898fc66 +0x380:  call   089c63a4 <_GLOBAL__I_g_npcNameVector+0x377f>  ; global constructors keyed to g_npcNameVector+0x377f
0898fc6b +0x385:  sub    $0x4,%esp
0898fc6e +0x388:  lea    -0x30(%ebp),%eax
0898fc71 +0x38b:  mov    %eax,0x4(%esp)
0898fc75 +0x38f:  lea    -0x2c(%ebp),%eax
0898fc78 +0x392:  mov    %eax,(%esp)
0898fc7b +0x395:  call   089c6364 <_GLOBAL__I_g_npcNameVector+0x373f>  ; global constructors keyed to g_npcNameVector+0x373f
0898fc80 +0x39a:  test   %al,%al
0898fc82 +0x39c:  je     0898fd28 <+0x442>
0898fc88 +0x3a2:  lea    -0x40(%ebp),%eax
0898fc8b +0x3a5:  mov    %eax,(%esp)
0898fc8e +0x3a8:  call   089c63d0 <_GLOBAL__I_g_npcNameVector+0x37ab>  ; global constructors keyed to g_npcNameVector+0x37ab
0898fc93 +0x3ad:  lea    -0x38(%ebp),%eax
0898fc96 +0x3b0:  mov    %eax,(%esp)
0898fc99 +0x3b3:  call   089c6396 <_GLOBAL__I_g_npcNameVector+0x3771>  ; global constructors keyed to g_npcNameVector+0x3771
0898fc9e +0x3b8:  mov    (%eax),%eax
0898fca0 +0x3ba:  mov    %eax,-0x40(%ebp)
0898fca3 +0x3bd:  movl   $0x480,(%esp)
0898fcaa +0x3c4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0898fcaf +0x3c9:  mov    %eax,%ebx
0898fcb1 +0x3cb:  mov    %ebx,%eax
0898fcb3 +0x3cd:  mov    %eax,(%esp)
0898fcb6 +0x3d0:  call   08919ce8 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x9c7>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x9c7
0898fcbb +0x3d5:  jmp    0898fcd2 <+0x3ec>
0898fcbd +0x3d7:  mov    %edx,%esi
0898fcbf +0x3d9:  mov    %eax,%edi
0898fcc1 +0x3db:  mov    %ebx,(%esp)
0898fcc4 +0x3de:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0898fcc9 +0x3e3:  mov    %edi,%eax
0898fccb +0x3e5:  mov    %esi,%edx
0898fccd +0x3e7:  jmp    0898fd6d <+0x487>
0898fcd2 +0x3ec:  mov    %ebx,%eax
0898fcd4 +0x3ee:  mov    %eax,-0x3c(%ebp)
0898fcd7 +0x3f1:  lea    -0x38(%ebp),%eax
0898fcda +0x3f4:  mov    %eax,(%esp)
0898fcdd +0x3f7:  call   089c6396 <_GLOBAL__I_g_npcNameVector+0x3771>  ; global constructors keyed to g_npcNameVector+0x3771
0898fce2 +0x3fc:  mov    0x4(%eax),%edx
0898fce5 +0x3ff:  mov    -0x3c(%ebp),%eax
0898fce8 +0x402:  mov    %edx,0x4(%esp)
0898fcec +0x406:  mov    %eax,(%esp)
0898fcef +0x409:  call   083662ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x296>  ; global constructors keyed to CServerEvent::m_nExpRate+0x296
0898fcf4 +0x40e:  lea    -0x40(%ebp),%eax
0898fcf7 +0x411:  mov    %eax,0x4(%esp)
0898fcfb +0x415:  lea    -0x20(%ebp),%eax
0898fcfe +0x418:  mov    %eax,(%esp)
0898fd01 +0x41b:  call   089c63e8 <_GLOBAL__I_g_npcNameVector+0x37c3>  ; global constructors keyed to g_npcNameVector+0x37c3
0898fd06 +0x420:  mov    0x8(%ebp),%eax
0898fd09 +0x423:  lea    0x4bc(%eax),%ecx
0898fd0f +0x429:  lea    -0x28(%ebp),%eax
0898fd12 +0x42c:  lea    -0x20(%ebp),%edx
0898fd15 +0x42f:  mov    %edx,0x8(%esp)
0898fd19 +0x433:  mov    %ecx,0x4(%esp)
0898fd1d +0x437:  mov    %eax,(%esp)
0898fd20 +0x43a:  call   089c6404 <_GLOBAL__I_g_npcNameVector+0x37df>  ; global constructors keyed to g_npcNameVector+0x37df
0898fd25 +0x43f:  sub    $0x4,%esp
0898fd28 +0x442:  lea    -0x38(%ebp),%eax
0898fd2b +0x445:  mov    %eax,(%esp)
0898fd2e +0x448:  call   089c6378 <_GLOBAL__I_g_npcNameVector+0x3753>  ; global constructors keyed to g_npcNameVector+0x3753
0898fd33 +0x44d:  mov    0xc(%ebp),%eax
0898fd36 +0x450:  lea    0x4bc(%eax),%edx
0898fd3c +0x456:  lea    -0x34(%ebp),%eax
0898fd3f +0x459:  mov    %edx,0x4(%esp)
0898fd43 +0x45d:  mov    %eax,(%esp)
0898fd46 +0x460:  call   08629cba <_GLOBAL__I__Z22GetSocketTypeCharactert+0x3318>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x3318
0898fd4b +0x465:  sub    $0x4,%esp
0898fd4e +0x468:  lea    -0x34(%ebp),%eax
0898fd51 +0x46b:  mov    %eax,0x4(%esp)
0898fd55 +0x46f:  lea    -0x38(%ebp),%eax
0898fd58 +0x472:  mov    %eax,(%esp)
0898fd5b +0x475:  call   089c6364 <_GLOBAL__I_g_npcNameVector+0x373f>  ; global constructors keyed to g_npcNameVector+0x373f
0898fd60 +0x47a:  test   %al,%al
0898fd62 +0x47c:  jne    0898fc27 <+0x341>
0898fd68 +0x482:  jmp    08990130 <+0x84a>
0898fd6d +0x487:  mov    %edx,%ebx
0898fd6f +0x489:  mov    %eax,%esi
0898fd71 +0x48b:  mov    0x8(%ebp),%eax
0898fd74 +0x48e:  add    $0x50c,%eax
0898fd79 +0x493:  mov    %eax,(%esp)
0898fd7c +0x496:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898fd81 +0x49b:  mov    %esi,%eax
0898fd83 +0x49d:  mov    %ebx,%edx
0898fd85 +0x49f:  jmp    0898fd87 <+0x4a1>
0898fd87 +0x4a1:  mov    %edx,%ebx
0898fd89 +0x4a3:  mov    %eax,%esi
0898fd8b +0x4a5:  mov    0x8(%ebp),%eax
0898fd8e +0x4a8:  add    $0x4fc,%eax
0898fd93 +0x4ad:  mov    %eax,(%esp)
0898fd96 +0x4b0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898fd9b +0x4b5:  mov    %esi,%eax
0898fd9d +0x4b7:  mov    %ebx,%edx
0898fd9f +0x4b9:  jmp    0898fda1 <+0x4bb>
0898fda1 +0x4bb:  mov    %edx,%ebx
0898fda3 +0x4bd:  mov    %eax,%esi
0898fda5 +0x4bf:  mov    0x8(%ebp),%eax
0898fda8 +0x4c2:  add    $0x4d4,%eax
0898fdad +0x4c7:  mov    %eax,(%esp)
0898fdb0 +0x4ca:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898fdb5 +0x4cf:  mov    %esi,%eax
0898fdb7 +0x4d1:  mov    %ebx,%edx
0898fdb9 +0x4d3:  jmp    0898fdbb <+0x4d5>
0898fdbb +0x4d5:  mov    %edx,%ebx
0898fdbd +0x4d7:  mov    %eax,%esi
0898fdbf +0x4d9:  mov    0x8(%ebp),%eax
0898fdc2 +0x4dc:  add    $0x4bc,%eax
0898fdc7 +0x4e1:  mov    %eax,(%esp)
0898fdca +0x4e4:  call   089c3ae2 <_GLOBAL__I_g_npcNameVector+0xebd>  ; global constructors keyed to g_npcNameVector+0xebd
0898fdcf +0x4e9:  mov    %esi,%eax
0898fdd1 +0x4eb:  mov    %ebx,%edx
0898fdd3 +0x4ed:  jmp    0898fdd5 <+0x4ef>
0898fdd5 +0x4ef:  mov    %edx,%ebx
0898fdd7 +0x4f1:  mov    %eax,%esi
0898fdd9 +0x4f3:  mov    0x8(%ebp),%eax
0898fddc +0x4f6:  add    $0x4b4,%eax
0898fde1 +0x4fb:  mov    %eax,(%esp)
0898fde4 +0x4fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898fde9 +0x503:  mov    %esi,%eax
0898fdeb +0x505:  mov    %ebx,%edx
0898fded +0x507:  jmp    0898fdef <+0x509>
0898fdef +0x509:  mov    %edx,%ebx
0898fdf1 +0x50b:  mov    %eax,%esi
0898fdf3 +0x50d:  mov    0x8(%ebp),%eax
0898fdf6 +0x510:  add    $0x498,%eax
0898fdfb +0x515:  mov    %eax,(%esp)
0898fdfe +0x518:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898fe03 +0x51d:  mov    %esi,%eax
0898fe05 +0x51f:  mov    %ebx,%edx
0898fe07 +0x521:  jmp    0898fe09 <+0x523>
0898fe09 +0x523:  mov    %edx,%ebx
0898fe0b +0x525:  mov    %eax,%esi
0898fe0d +0x527:  mov    0x8(%ebp),%eax
0898fe10 +0x52a:  add    $0x480,%eax
0898fe15 +0x52f:  mov    %eax,(%esp)
0898fe18 +0x532:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
0898fe1d +0x537:  mov    %esi,%eax
0898fe1f +0x539:  mov    %ebx,%edx
0898fe21 +0x53b:  jmp    0898fe23 <+0x53d>
0898fe23 +0x53d:  mov    %edx,%ebx
0898fe25 +0x53f:  mov    %eax,%esi
0898fe27 +0x541:  mov    0x8(%ebp),%eax
0898fe2a +0x544:  add    $0x41c,%eax
0898fe2f +0x549:  mov    %eax,(%esp)
0898fe32 +0x54c:  call   08514658 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc8d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc8d
0898fe37 +0x551:  mov    %esi,%eax
0898fe39 +0x553:  mov    %ebx,%edx
0898fe3b +0x555:  jmp    0898fe3d <+0x557>
0898fe3d +0x557:  mov    %edx,%ebx
0898fe3f +0x559:  mov    %eax,%esi
0898fe41 +0x55b:  mov    0x8(%ebp),%eax
0898fe44 +0x55e:  add    $0x410,%eax
0898fe49 +0x563:  mov    %eax,(%esp)
0898fe4c +0x566:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898fe51 +0x56b:  mov    %esi,%eax
0898fe53 +0x56d:  mov    %ebx,%edx
0898fe55 +0x56f:  jmp    0898fe57 <+0x571>
0898fe57 +0x571:  mov    %edx,%ebx
0898fe59 +0x573:  mov    %eax,%esi
0898fe5b +0x575:  mov    0x8(%ebp),%eax
0898fe5e +0x578:  add    $0x3f4,%eax
0898fe63 +0x57d:  mov    %eax,(%esp)
0898fe66 +0x580:  call   08513b34 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x169>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x169
0898fe6b +0x585:  mov    %esi,%eax
0898fe6d +0x587:  mov    %ebx,%edx
0898fe6f +0x589:  jmp    0898fe71 <+0x58b>
0898fe71 +0x58b:  mov    %edx,%ebx
0898fe73 +0x58d:  mov    %eax,%esi
0898fe75 +0x58f:  mov    0x8(%ebp),%eax
0898fe78 +0x592:  add    $0x3d4,%eax
0898fe7d +0x597:  mov    %eax,(%esp)
0898fe80 +0x59a:  call   0851466e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xca3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xca3
0898fe85 +0x59f:  mov    %esi,%eax
0898fe87 +0x5a1:  mov    %ebx,%edx
0898fe89 +0x5a3:  jmp    0898fe8b <+0x5a5>
0898fe8b +0x5a5:  mov    %edx,%ebx
0898fe8d +0x5a7:  mov    %eax,%esi
0898fe8f +0x5a9:  mov    0x8(%ebp),%eax
0898fe92 +0x5ac:  add    $0x3c0,%eax
0898fe97 +0x5b1:  mov    %eax,(%esp)
0898fe9a +0x5b4:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898fe9f +0x5b9:  mov    %esi,%eax
0898fea1 +0x5bb:  mov    %ebx,%edx
0898fea3 +0x5bd:  jmp    0898fea5 <+0x5bf>
0898fea5 +0x5bf:  mov    %edx,%ebx
0898fea7 +0x5c1:  mov    %eax,%esi
0898fea9 +0x5c3:  mov    0x8(%ebp),%eax
0898feac +0x5c6:  add    $0x3a4,%eax
0898feb1 +0x5cb:  mov    %eax,(%esp)
0898feb4 +0x5ce:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0898feb9 +0x5d3:  mov    %esi,%eax
0898febb +0x5d5:  mov    %ebx,%edx
0898febd +0x5d7:  jmp    0898febf <+0x5d9>
0898febf +0x5d9:  mov    %edx,%ebx
0898fec1 +0x5db:  mov    %eax,%esi
0898fec3 +0x5dd:  mov    0x8(%ebp),%eax
0898fec6 +0x5e0:  add    $0x374,%eax
0898fecb +0x5e5:  mov    %eax,(%esp)
0898fece +0x5e8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0898fed3 +0x5ed:  mov    %esi,%eax
0898fed5 +0x5ef:  mov    %ebx,%edx
0898fed7 +0x5f1:  jmp    0898fed9 <+0x5f3>
0898fed9 +0x5f3:  mov    %edx,%ebx
0898fedb +0x5f5:  mov    %eax,%esi
0898fedd +0x5f7:  mov    0x8(%ebp),%eax
0898fee0 +0x5fa:  add    $0x368,%eax
0898fee5 +0x5ff:  mov    %eax,(%esp)
0898fee8 +0x602:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898feed +0x607:  mov    %esi,%eax
0898feef +0x609:  mov    %ebx,%edx
0898fef1 +0x60b:  jmp    0898fef3 <+0x60d>
0898fef3 +0x60d:  mov    %edx,%ebx
0898fef5 +0x60f:  mov    %eax,%esi
0898fef7 +0x611:  mov    0x8(%ebp),%eax
0898fefa +0x614:  add    $0x34c,%eax
0898feff +0x619:  mov    %eax,(%esp)
0898ff02 +0x61c:  call   089c3ace <_GLOBAL__I_g_npcNameVector+0xea9>  ; global constructors keyed to g_npcNameVector+0xea9
0898ff07 +0x621:  mov    %esi,%eax
0898ff09 +0x623:  mov    %ebx,%edx
0898ff0b +0x625:  jmp    0898ff0d <+0x627>
0898ff0d +0x627:  mov    %edx,%ebx
0898ff0f +0x629:  mov    %eax,%esi
0898ff11 +0x62b:  mov    0x8(%ebp),%eax
0898ff14 +0x62e:  add    $0x2ec,%eax
0898ff19 +0x633:  mov    %eax,(%esp)
0898ff1c +0x636:  call   089c3aba <_GLOBAL__I_g_npcNameVector+0xe95>  ; global constructors keyed to g_npcNameVector+0xe95
0898ff21 +0x63b:  mov    %esi,%eax
0898ff23 +0x63d:  mov    %ebx,%edx
0898ff25 +0x63f:  jmp    0898ff27 <+0x641>
0898ff27 +0x641:  mov    %edx,%ebx
0898ff29 +0x643:  mov    %eax,%esi
0898ff2b +0x645:  mov    0x8(%ebp),%eax
0898ff2e +0x648:  add    $0x2a4,%eax
0898ff33 +0x64d:  mov    %eax,(%esp)
0898ff36 +0x650:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0898ff3b +0x655:  mov    %esi,%eax
0898ff3d +0x657:  mov    %ebx,%edx
0898ff3f +0x659:  jmp    0898ff41 <+0x65b>
0898ff41 +0x65b:  mov    %edx,%ebx
0898ff43 +0x65d:  mov    %eax,%esi
0898ff45 +0x65f:  mov    0x8(%ebp),%eax
0898ff48 +0x662:  add    $0x280,%eax
0898ff4d +0x667:  mov    %eax,(%esp)
0898ff50 +0x66a:  call   08514612 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0xc47>  ; global constructors keyed to CItem::GetNeedMaterial() const+0xc47
0898ff55 +0x66f:  mov    %esi,%eax
0898ff57 +0x671:  mov    %ebx,%edx
0898ff59 +0x673:  jmp    0898ff5b <+0x675>
0898ff5b +0x675:  mov    %edx,%ebx
0898ff5d +0x677:  mov    %eax,%esi
0898ff5f +0x679:  mov    0x8(%ebp),%eax
0898ff62 +0x67c:  add    $0x274,%eax
0898ff67 +0x681:  mov    %eax,(%esp)
0898ff6a +0x684:  call   08387968 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17408>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17408
0898ff6f +0x689:  mov    %esi,%eax
0898ff71 +0x68b:  mov    %ebx,%edx
0898ff73 +0x68d:  jmp    0898ff75 <+0x68f>
0898ff75 +0x68f:  mov    %edx,%ebx
0898ff77 +0x691:  mov    %eax,%esi
0898ff79 +0x693:  mov    0x8(%ebp),%eax
0898ff7c +0x696:  add    $0x268,%eax
0898ff81 +0x69b:  mov    %eax,(%esp)
0898ff84 +0x69e:  call   0827df44 <_GLOBAL__I__ZN18SpecialItemHandlerC2EPN8WongWork9CCeraShopE+0x66>  ; global constructors keyed to SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*)+0x66
0898ff89 +0x6a3:  mov    %esi,%eax
0898ff8b +0x6a5:  mov    %ebx,%edx
0898ff8d +0x6a7:  jmp    0898ff8f <+0x6a9>
0898ff8f +0x6a9:  mov    %edx,%ebx
0898ff91 +0x6ab:  mov    %eax,%esi
0898ff93 +0x6ad:  mov    0x8(%ebp),%eax
0898ff96 +0x6b0:  add    $0x25c,%eax
0898ff9b +0x6b5:  mov    %eax,(%esp)
0898ff9e +0x6b8:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898ffa3 +0x6bd:  mov    %esi,%eax
0898ffa5 +0x6bf:  mov    %ebx,%edx
0898ffa7 +0x6c1:  jmp    0898ffa9 <+0x6c3>
0898ffa9 +0x6c3:  mov    %edx,%ebx
0898ffab +0x6c5:  mov    %eax,%esi
0898ffad +0x6c7:  mov    0x8(%ebp),%eax
0898ffb0 +0x6ca:  add    $0x250,%eax
0898ffb5 +0x6cf:  mov    %eax,(%esp)
0898ffb8 +0x6d2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0898ffbd +0x6d7:  mov    %esi,%eax
0898ffbf +0x6d9:  mov    %ebx,%edx
0898ffc1 +0x6db:  jmp    0898ffc3 <+0x6dd>
0898ffc3 +0x6dd:  mov    %edx,%ebx
0898ffc5 +0x6df:  mov    %eax,%esi
0898ffc7 +0x6e1:  mov    0x8(%ebp),%eax
0898ffca +0x6e4:  add    $0x244,%eax
0898ffcf +0x6e9:  mov    %eax,(%esp)
0898ffd2 +0x6ec:  call   08381952 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x113f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x113f2
0898ffd7 +0x6f1:  mov    %esi,%eax
0898ffd9 +0x6f3:  mov    %ebx,%edx
0898ffdb +0x6f5:  jmp    0898ffdd <+0x6f7>
0898ffdd +0x6f7:  mov    %edx,%ebx
0898ffdf +0x6f9:  mov    %eax,%esi
0898ffe1 +0x6fb:  mov    0x8(%ebp),%eax
0898ffe4 +0x6fe:  add    $0x238,%eax
0898ffe9 +0x703:  mov    %eax,(%esp)
0898ffec +0x706:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0898fff1 +0x70b:  mov    %esi,%eax
0898fff3 +0x70d:  mov    %ebx,%edx
0898fff5 +0x70f:  jmp    0898fff7 <+0x711>
0898fff7 +0x711:  mov    %edx,%ebx
0898fff9 +0x713:  mov    %eax,%esi
0898fffb +0x715:  mov    0x8(%ebp),%eax
0898fffe +0x718:  add    $0x234,%eax
08990003 +0x71d:  mov    %eax,(%esp)
08990006 +0x720:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0899000b +0x725:  mov    %esi,%eax
0899000d +0x727:  mov    %ebx,%edx
0899000f +0x729:  jmp    08990011 <+0x72b>
08990011 +0x72b:  mov    %edx,%ebx
08990013 +0x72d:  mov    %eax,%esi
08990015 +0x72f:  mov    0x8(%ebp),%eax
08990018 +0x732:  add    $0x230,%eax
0899001d +0x737:  mov    %eax,(%esp)
08990020 +0x73a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08990025 +0x73f:  mov    %esi,%eax
08990027 +0x741:  mov    %ebx,%edx
08990029 +0x743:  jmp    0899002b <+0x745>
0899002b +0x745:  mov    %edx,%ebx
0899002d +0x747:  mov    %eax,%esi
0899002f +0x749:  mov    0x8(%ebp),%eax
08990032 +0x74c:  add    $0x224,%eax
08990037 +0x751:  mov    %eax,(%esp)
0899003a +0x754:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0899003f +0x759:  mov    %esi,%eax
08990041 +0x75b:  mov    %ebx,%edx
08990043 +0x75d:  jmp    08990045 <+0x75f>
08990045 +0x75f:  mov    %edx,%ebx
08990047 +0x761:  mov    %eax,%esi
08990049 +0x763:  mov    0x8(%ebp),%eax
0899004c +0x766:  add    $0x214,%eax
08990051 +0x76b:  mov    %eax,(%esp)
08990054 +0x76e:  call   08515fd4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2609>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2609
08990059 +0x773:  mov    %esi,%eax
0899005b +0x775:  mov    %ebx,%edx
0899005d +0x777:  jmp    0899005f <+0x779>
0899005f +0x779:  mov    %edx,%ebx
08990061 +0x77b:  mov    %eax,%esi
08990063 +0x77d:  mov    0x8(%ebp),%eax
08990066 +0x780:  add    $0x208,%eax
0899006b +0x785:  mov    %eax,(%esp)
0899006e +0x788:  call   089c5afa <_GLOBAL__I_g_npcNameVector+0x2ed5>  ; global constructors keyed to g_npcNameVector+0x2ed5
08990073 +0x78d:  mov    %esi,%eax
08990075 +0x78f:  mov    %ebx,%edx
08990077 +0x791:  jmp    08990079 <+0x793>
08990079 +0x793:  mov    %edx,%ebx
0899007b +0x795:  mov    %eax,%esi
0899007d +0x797:  mov    0x8(%ebp),%eax
08990080 +0x79a:  add    $0x1f8,%eax
08990085 +0x79f:  mov    %eax,(%esp)
08990088 +0x7a2:  call   08515f76 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x25ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x25ab
0899008d +0x7a7:  mov    %esi,%eax
0899008f +0x7a9:  mov    %ebx,%edx
08990091 +0x7ab:  jmp    08990093 <+0x7ad>
08990093 +0x7ad:  mov    %edx,%ebx
08990095 +0x7af:  mov    %eax,%esi
08990097 +0x7b1:  mov    0x8(%ebp),%eax
0899009a +0x7b4:  add    $0x1ec,%eax
0899009f +0x7b9:  mov    %eax,(%esp)
089900a2 +0x7bc:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089900a7 +0x7c1:  mov    %esi,%eax
089900a9 +0x7c3:  mov    %ebx,%edx
089900ab +0x7c5:  jmp    089900ad <+0x7c7>
089900ad +0x7c7:  mov    %edx,%ebx
089900af +0x7c9:  mov    %eax,%esi
089900b1 +0x7cb:  mov    0x8(%ebp),%eax
089900b4 +0x7ce:  add    $0x1d8,%eax
089900b9 +0x7d3:  mov    %eax,(%esp)
089900bc +0x7d6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089900c1 +0x7db:  mov    %esi,%eax
089900c3 +0x7dd:  mov    %ebx,%edx
089900c5 +0x7df:  jmp    089900c7 <+0x7e1>
089900c7 +0x7e1:  mov    %edx,%ebx
089900c9 +0x7e3:  mov    %eax,%esi
089900cb +0x7e5:  mov    0x8(%ebp),%eax
089900ce +0x7e8:  add    $0x19c,%eax
089900d3 +0x7ed:  mov    %eax,(%esp)
089900d6 +0x7f0:  call   08515df6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x242b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x242b
089900db +0x7f5:  mov    %esi,%eax
089900dd +0x7f7:  mov    %ebx,%edx
089900df +0x7f9:  jmp    089900e1 <+0x7fb>
089900e1 +0x7fb:  mov    %edx,%ebx
089900e3 +0x7fd:  mov    %eax,%esi
089900e5 +0x7ff:  mov    0x8(%ebp),%eax
089900e8 +0x802:  add    $0x190,%eax
089900ed +0x807:  mov    %eax,(%esp)
089900f0 +0x80a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
089900f5 +0x80f:  mov    %esi,%eax
089900f7 +0x811:  mov    %ebx,%edx
089900f9 +0x813:  jmp    089900fb <+0x815>
089900fb +0x815:  mov    %edx,%ebx
089900fd +0x817:  mov    %eax,%esi
089900ff +0x819:  mov    0x8(%ebp),%eax
08990102 +0x81c:  add    $0x178,%eax
08990107 +0x821:  mov    %eax,(%esp)
0899010a +0x824:  call   089c3a46 <_GLOBAL__I_g_npcNameVector+0xe21>  ; global constructors keyed to g_npcNameVector+0xe21
0899010f +0x829:  mov    %esi,%eax
08990111 +0x82b:  mov    %ebx,%edx
08990113 +0x82d:  jmp    08990115 <+0x82f>
08990115 +0x82f:  mov    %edx,%ebx
08990117 +0x831:  mov    %eax,%esi
08990119 +0x833:  mov    0x8(%ebp),%eax
0899011c +0x836:  mov    %eax,(%esp)
0899011f +0x839:  call   089c36f0 <_GLOBAL__I_g_npcNameVector+0xacb>  ; global constructors keyed to g_npcNameVector+0xacb
08990124 +0x83e:  mov    %esi,%eax
08990126 +0x840:  mov    %ebx,%edx
08990128 +0x842:  mov    %eax,(%esp)
0899012b +0x845:  call   08ae3750 <_Unwind_Resume>
08990130 +0x84a:  lea    -0xc(%ebp),%esp
08990133 +0x84d:  add    $0x0,%esp
08990136 +0x850:  pop    %ebx
08990137 +0x851:  pop    %esi
08990138 +0x852:  pop    %edi
08990139 +0x853:  pop    %ebp
0899013a +0x854:  ret
0899013b +0x855:  nop
```

## 反编译 C

```c
// STStackableScript::STStackableScript @ 0x898f8e6

/* STStackableScript::STStackableScript(STStackableScript&) */

void __thiscall
STStackableScript::STStackableScript(STStackableScript *this,STStackableScript *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  EquipmentParameterInfo *this_00;
  int iVar3;
  undefined4 local_44;
  EquipmentParameterInfo *local_40;
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_3c [4];
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_38 [4];
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> local_30 [4];
  pair local_2c [8];
  pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*> local_24 [20];
  
  STItemScript::STItemScript((STItemScript *)this);
                    /* try { // try from 0898f905 to 0898f909 has its CatchHandler @ 08990115 */
  Arad_STStackableScript::Arad_STStackableScript((Arad_STStackableScript *)(this + 0x178));
                    /* try { // try from 0898f915 to 0898f919 has its CatchHandler @ 089900fb */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 400));
                    /* try { // try from 0898f925 to 0898f929 has its CatchHandler @ 089900e1 */
  std::vector<CRabbitBox,std::allocator<CRabbitBox>>::vector
            ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x19c));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1b9));
  CountinuousItemOption::CountinuousItemOption((CountinuousItemOption *)(this + 0x1bc));
                    /* try { // try from 0898f955 to 0898f959 has its CatchHandler @ 089900c7 */
  std::string::string((string *)(this + 0x1d8));
                    /* try { // try from 0898f965 to 0898f969 has its CatchHandler @ 089900ad */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1ec));
                    /* try { // try from 0898f975 to 0898f979 has its CatchHandler @ 08990093 */
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::vector
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             (this + 0x1f8));
                    /* try { // try from 0898f985 to 0898f989 has its CatchHandler @ 08990079 */
  std::vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>>::vector
            ((vector<STPassiveObjectInStackable,std::allocator<STPassiveObjectInStackable>> *)
             (this + 0x208));
                    /* try { // try from 0898f995 to 0898f999 has its CatchHandler @ 0899005f */
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  vector((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
          *)(this + 0x214));
                    /* try { // try from 0898f9a5 to 0898f9a9 has its CatchHandler @ 08990045 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x224));
                    /* try { // try from 0898f9b5 to 0898f9b9 has its CatchHandler @ 0899002b */
  std::string::string((string *)(this + 0x230));
                    /* try { // try from 0898f9c5 to 0898f9c9 has its CatchHandler @ 08990011 */
  std::string::string((string *)(this + 0x234));
                    /* try { // try from 0898f9d5 to 0898f9d9 has its CatchHandler @ 0898fff7 */
  std::string::string((string *)(this + 0x238));
                    /* try { // try from 0898f9e5 to 0898f9e9 has its CatchHandler @ 0898ffdd */
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            *)(this + 0x244));
                    /* try { // try from 0898f9f5 to 0898f9f9 has its CatchHandler @ 0898ffc3 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x250));
                    /* try { // try from 0898fa05 to 0898fa09 has its CatchHandler @ 0898ffa9 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x25c));
                    /* try { // try from 0898fa15 to 0898fa19 has its CatchHandler @ 0898ff8f */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x268)
            );
                    /* try { // try from 0898fa25 to 0898fa29 has its CatchHandler @ 0898ff75 */
  std::
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  ::vector((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
            *)(this + 0x274));
                    /* try { // try from 0898fa35 to 0898fa39 has its CatchHandler @ 0898ff5b */
  stStackableBooster_t::stStackableBooster_t((stStackableBooster_t *)(this + 0x280));
                    /* try { // try from 0898fa45 to 0898fa49 has its CatchHandler @ 0898ff41 */
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)(this + 0x2a4)
            );
  STRecovery::STRecovery((STRecovery *)(this + 0x2b0));
  STRecovery::STRecovery((STRecovery *)(this + 0x2c4));
  STStatusRecovery::STStatusRecovery((STStatusRecovery *)(this + 0x2d8));
                    /* try { // try from 0898fa85 to 0898fa89 has its CatchHandler @ 0898ff27 */
  STStatusGenerate::STStatusGenerate((STStatusGenerate *)(this + 0x2ec));
  STBuff::STBuff((STBuff *)(this + 0x304));
  STSummonMonster::STSummonMonster((STSummonMonster *)(this + 0x314));
  STSummonApc::STSummonApc((STSummonApc *)(this + 0x330));
                    /* try { // try from 0898fac5 to 0898fac9 has its CatchHandler @ 0898ff0d */
  STStatChangeVector::STStatChangeVector((STStatChangeVector *)(this + 0x34c));
                    /* try { // try from 0898fad5 to 0898fad9 has its CatchHandler @ 0898fef3 */
  std::string::string((string *)(this + 0x368));
                    /* try { // try from 0898fae5 to 0898fae9 has its CatchHandler @ 0898fed9 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x374));
                    /* try { // try from 0898faf5 to 0898faf9 has its CatchHandler @ 0898febf */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x3a4))
  ;
                    /* try { // try from 0898fb05 to 0898fb09 has its CatchHandler @ 0898fea5 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c0));
                    /* try { // try from 0898fb15 to 0898fb19 has its CatchHandler @ 0898fe8b */
  stLimitCubeInfo::stLimitCubeInfo((stLimitCubeInfo *)(this + 0x3d4));
                    /* try { // try from 0898fb25 to 0898fb29 has its CatchHandler @ 0898fe71 */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::map((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
         *)(this + 0x3f4));
                    /* try { // try from 0898fb35 to 0898fb39 has its CatchHandler @ 0898fe57 */
  std::string::string((string *)(this + 0x410));
                    /* try { // try from 0898fb45 to 0898fb49 has its CatchHandler @ 0898fe3d */
  BoosterSelectInfo::BoosterSelectInfo((BoosterSelectInfo *)(this + 0x41c));
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x43c));
  AvatarOptionChangeType::AvatarOptionChangeType((AvatarOptionChangeType *)(this + 0x47c));
                    /* try { // try from 0898fb75 to 0898fb79 has its CatchHandler @ 0898fe23 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x480));
                    /* try { // try from 0898fb85 to 0898fb89 has its CatchHandler @ 0898fe09 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x498));
                    /* try { // try from 0898fb95 to 0898fb99 has its CatchHandler @ 0898fdef */
  std::string::string((string *)(this + 0x4b4));
                    /* try { // try from 0898fba5 to 0898fba9 has its CatchHandler @ 0898fdd5 */
  std::
  map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
  ::map((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
         *)(this + 0x4bc));
                    /* try { // try from 0898fbb5 to 0898fbb9 has its CatchHandler @ 0898fdbb */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x4d4));
                    /* try { // try from 0898fbc5 to 0898fbc9 has its CatchHandler @ 0898fda1 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x4fc));
                    /* try { // try from 0898fbd5 to 0898fbd9 has its CatchHandler @ 0898fd87 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x50c));
                    /* try { // try from 0898fbe7 to 0898fcae has its CatchHandler @ 0898fd6d */
  operator=(this,param_1);
  cVar1 = std::
          map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
          ::empty((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                   *)(param_1 + 0x4bc));
  if (cVar1 != '\x01') {
    std::
    map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
    ::begin(local_3c);
    while( true ) {
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator!=((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                          *)local_3c,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') break;
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::end(local_34);
      std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::operator->
                ((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> *)
                 local_3c);
      std::
      map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
      ::find(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
              operator!=(local_30,(_Rb_tree_iterator *)local_34);
      if (cVar1 != '\0') {
        std::pair<ENUM_MODULE_TYPE,EquipmentParameterInfo*>::pair
                  ((pair<ENUM_MODULE_TYPE,EquipmentParameterInfo*> *)&local_44);
        puVar2 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
                 operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                             *)local_3c);
        local_44 = *puVar2;
        this_00 = operator_new(0x480);
                    /* try { // try from 0898fcb6 to 0898fcba has its CatchHandler @ 0898fcbd */
        EquipmentParameterInfo::EquipmentParameterInfo(this_00);
        local_40 = this_00;
        iVar3 = std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::
                operator->((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>
                            *)local_3c);
                    /* try { // try from 0898fcef to 0898fd4a has its CatchHandler @ 0898fd6d */
        EquipmentParameterInfo::operator=(local_40,*(EquipmentParameterInfo **)(iVar3 + 4));
        std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>::
        pair<ENUM_MODULE_TYPE,EquipmentParameterInfo*>(local_24,(pair *)&local_44);
        std::
        map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
        ::insert(local_2c);
      }
      std::_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>> *)
                 local_3c);
    }
  }
  return;
}
```
