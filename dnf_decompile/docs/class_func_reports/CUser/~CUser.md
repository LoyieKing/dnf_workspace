# ~CUser

`_ZN5CUserD1Ev`

`CUser::~CUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864ef9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864ef9c  _ZN5CUserD1Ev
#           CUser::~CUser()
# range [0x0864ef9c, 0x0864f7fd]
0864ef9c +0x000:  push   %ebp
0864ef9d +0x001:  mov    %esp,%ebp
0864ef9f +0x003:  push   %edi
0864efa0 +0x004:  push   %esi
0864efa1 +0x005:  push   %ebx
0864efa2 +0x006:  sub    $0x1c,%esp
0864efa5 +0x009:  mov    0x8(%ebp),%eax
0864efa8 +0x00c:  movb   $0x0,0x8d253(%eax)
0864efaf +0x013:  mov    0x8(%ebp),%eax
0864efb2 +0x016:  add    $0x8ec04,%eax
0864efb7 +0x01b:  mov    %eax,(%esp)
0864efba +0x01e:  call   08697c2a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x447f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x447f
0864efbf +0x023:  jmp    0864efdb <+0x3f>
0864efc1 +0x025:  mov    %edx,%ebx
0864efc3 +0x027:  mov    %eax,%esi
0864efc5 +0x029:  mov    0x8(%ebp),%eax
0864efc8 +0x02c:  add    $0x8ebf8,%eax
0864efcd +0x031:  mov    %eax,(%esp)
0864efd0 +0x034:  call   08697c16 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x446b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x446b
0864efd5 +0x039:  mov    %esi,%eax
0864efd7 +0x03b:  mov    %ebx,%edx
0864efd9 +0x03d:  jmp    0864efed <+0x51>
0864efdb +0x03f:  mov    0x8(%ebp),%eax
0864efde +0x042:  add    $0x8ebf8,%eax
0864efe3 +0x047:  mov    %eax,(%esp)
0864efe6 +0x04a:  call   08697c16 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x446b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x446b
0864efeb +0x04f:  jmp    0864f007 <+0x6b>
0864efed +0x051:  mov    %edx,%ebx
0864efef +0x053:  mov    %eax,%esi
0864eff1 +0x055:  mov    0x8(%ebp),%eax
0864eff4 +0x058:  add    $0x8ebc4,%eax
0864eff9 +0x05d:  mov    %eax,(%esp)
0864effc +0x060:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0864f001 +0x065:  mov    %esi,%eax
0864f003 +0x067:  mov    %ebx,%edx
0864f005 +0x069:  jmp    0864f019 <+0x7d>
0864f007 +0x06b:  mov    0x8(%ebp),%eax
0864f00a +0x06e:  add    $0x8ebc4,%eax
0864f00f +0x073:  mov    %eax,(%esp)
0864f012 +0x076:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0864f017 +0x07b:  jmp    0864f033 <+0x97>
0864f019 +0x07d:  mov    %edx,%ebx
0864f01b +0x07f:  mov    %eax,%esi
0864f01d +0x081:  mov    0x8(%ebp),%eax
0864f020 +0x084:  add    $0x8eb80,%eax
0864f025 +0x089:  mov    %eax,(%esp)
0864f028 +0x08c:  call   0836a05e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x402a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x402a
0864f02d +0x091:  mov    %esi,%eax
0864f02f +0x093:  mov    %ebx,%edx
0864f031 +0x095:  jmp    0864f045 <+0xa9>
0864f033 +0x097:  mov    0x8(%ebp),%eax
0864f036 +0x09a:  add    $0x8eb80,%eax
0864f03b +0x09f:  mov    %eax,(%esp)
0864f03e +0x0a2:  call   0836a05e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x402a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x402a
0864f043 +0x0a7:  jmp    0864f05f <+0xc3>
0864f045 +0x0a9:  mov    %edx,%ebx
0864f047 +0x0ab:  mov    %eax,%esi
0864f049 +0x0ad:  mov    0x8(%ebp),%eax
0864f04c +0x0b0:  add    $0x8eb68,%eax
0864f051 +0x0b5:  mov    %eax,(%esp)
0864f054 +0x0b8:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
0864f059 +0x0bd:  mov    %esi,%eax
0864f05b +0x0bf:  mov    %ebx,%edx
0864f05d +0x0c1:  jmp    0864f071 <+0xd5>
0864f05f +0x0c3:  mov    0x8(%ebp),%eax
0864f062 +0x0c6:  add    $0x8eb68,%eax
0864f067 +0x0cb:  mov    %eax,(%esp)
0864f06a +0x0ce:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
0864f06f +0x0d3:  jmp    0864f08b <+0xef>
0864f071 +0x0d5:  mov    %edx,%ebx
0864f073 +0x0d7:  mov    %eax,%esi
0864f075 +0x0d9:  mov    0x8(%ebp),%eax
0864f078 +0x0dc:  add    $0x8eb50,%eax
0864f07d +0x0e1:  mov    %eax,(%esp)
0864f080 +0x0e4:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
0864f085 +0x0e9:  mov    %esi,%eax
0864f087 +0x0eb:  mov    %ebx,%edx
0864f089 +0x0ed:  jmp    0864f09d <+0x101>
0864f08b +0x0ef:  mov    0x8(%ebp),%eax
0864f08e +0x0f2:  add    $0x8eb50,%eax
0864f093 +0x0f7:  mov    %eax,(%esp)
0864f096 +0x0fa:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
0864f09b +0x0ff:  jmp    0864f0b7 <+0x11b>
0864f09d +0x101:  mov    %edx,%ebx
0864f09f +0x103:  mov    %eax,%esi
0864f0a1 +0x105:  mov    0x8(%ebp),%eax
0864f0a4 +0x108:  add    $0x8eb00,%eax
0864f0a9 +0x10d:  mov    %eax,(%esp)
0864f0ac +0x110:  call   08697c02 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4457>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4457
0864f0b1 +0x115:  mov    %esi,%eax
0864f0b3 +0x117:  mov    %ebx,%edx
0864f0b5 +0x119:  jmp    0864f0c9 <+0x12d>
0864f0b7 +0x11b:  mov    0x8(%ebp),%eax
0864f0ba +0x11e:  add    $0x8eb00,%eax
0864f0bf +0x123:  mov    %eax,(%esp)
0864f0c2 +0x126:  call   08697c02 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4457>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4457
0864f0c7 +0x12b:  jmp    0864f113 <+0x177>
0864f0c9 +0x12d:  mov    %edx,%ebx
0864f0cb +0x12f:  mov    %eax,%esi
0864f0cd +0x131:  mov    0x8(%ebp),%eax
0864f0d0 +0x134:  add    $0x8eaec,%eax
0864f0d5 +0x139:  mov    %eax,(%esp)
0864f0d8 +0x13c:  call   0808c0ec <_GLOBAL__I_hashkey_map+0x1d>  ; global constructors keyed to hashkey_map+0x1d
0864f0dd +0x141:  mov    %esi,%eax
0864f0df +0x143:  mov    %ebx,%edx
0864f0e1 +0x145:  mov    %edx,%ebx
0864f0e3 +0x147:  mov    %eax,%esi
0864f0e5 +0x149:  mov    0x8(%ebp),%eax
0864f0e8 +0x14c:  add    $0x8eae4,%eax
0864f0ed +0x151:  mov    %eax,(%esp)
0864f0f0 +0x154:  call   0808c130 <_GLOBAL__I_hashkey_map+0x61>  ; global constructors keyed to hashkey_map+0x61
0864f0f5 +0x159:  mov    %esi,%eax
0864f0f7 +0x15b:  mov    %ebx,%edx
0864f0f9 +0x15d:  mov    %edx,%ebx
0864f0fb +0x15f:  mov    %eax,%esi
0864f0fd +0x161:  mov    0x8(%ebp),%eax
0864f100 +0x164:  add    $0x8eabc,%eax
0864f105 +0x169:  mov    %eax,(%esp)
0864f108 +0x16c:  call   08697bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4443
0864f10d +0x171:  mov    %esi,%eax
0864f10f +0x173:  mov    %ebx,%edx
0864f111 +0x175:  jmp    0864f145 <+0x1a9>
0864f113 +0x177:  mov    0x8(%ebp),%eax
0864f116 +0x17a:  add    $0x8eaec,%eax
0864f11b +0x17f:  mov    %eax,(%esp)
0864f11e +0x182:  call   0808c0ec <_GLOBAL__I_hashkey_map+0x1d>  ; global constructors keyed to hashkey_map+0x1d
0864f123 +0x187:  mov    0x8(%ebp),%eax
0864f126 +0x18a:  add    $0x8eae4,%eax
0864f12b +0x18f:  mov    %eax,(%esp)
0864f12e +0x192:  call   0808c130 <_GLOBAL__I_hashkey_map+0x61>  ; global constructors keyed to hashkey_map+0x61
0864f133 +0x197:  mov    0x8(%ebp),%eax
0864f136 +0x19a:  add    $0x8eabc,%eax
0864f13b +0x19f:  mov    %eax,(%esp)
0864f13e +0x1a2:  call   08697bee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4443>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4443
0864f143 +0x1a7:  jmp    0864f15f <+0x1c3>
0864f145 +0x1a9:  mov    %edx,%ebx
0864f147 +0x1ab:  mov    %eax,%esi
0864f149 +0x1ad:  mov    0x8(%ebp),%eax
0864f14c +0x1b0:  add    $0x8eaa4,%eax
0864f151 +0x1b5:  mov    %eax,(%esp)
0864f154 +0x1b8:  call   08697bda <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x442f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x442f
0864f159 +0x1bd:  mov    %esi,%eax
0864f15b +0x1bf:  mov    %ebx,%edx
0864f15d +0x1c1:  jmp    0864f171 <+0x1d5>
0864f15f +0x1c3:  mov    0x8(%ebp),%eax
0864f162 +0x1c6:  add    $0x8eaa4,%eax
0864f167 +0x1cb:  mov    %eax,(%esp)
0864f16a +0x1ce:  call   08697bda <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x442f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x442f
0864f16f +0x1d3:  jmp    0864f1bb <+0x21f>
0864f171 +0x1d5:  mov    %edx,%ebx
0864f173 +0x1d7:  mov    %eax,%esi
0864f175 +0x1d9:  mov    0x8(%ebp),%eax
0864f178 +0x1dc:  add    $0x8ea68,%eax
0864f17d +0x1e1:  mov    %eax,(%esp)
0864f180 +0x1e4:  call   08695af8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x234d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x234d
0864f185 +0x1e9:  mov    %esi,%eax
0864f187 +0x1eb:  mov    %ebx,%edx
0864f189 +0x1ed:  mov    %edx,%ebx
0864f18b +0x1ef:  mov    %eax,%esi
0864f18d +0x1f1:  mov    0x8(%ebp),%eax
0864f190 +0x1f4:  add    $0x8e980,%eax
0864f195 +0x1f9:  mov    %eax,(%esp)
0864f198 +0x1fc:  call   08694f9a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17ef
0864f19d +0x201:  mov    %esi,%eax
0864f19f +0x203:  mov    %ebx,%edx
0864f1a1 +0x205:  mov    %edx,%ebx
0864f1a3 +0x207:  mov    %eax,%esi
0864f1a5 +0x209:  mov    0x8(%ebp),%eax
0864f1a8 +0x20c:  add    $0x8e954,%eax
0864f1ad +0x211:  mov    %eax,(%esp)
0864f1b0 +0x214:  call   08694f54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17a9
0864f1b5 +0x219:  mov    %esi,%eax
0864f1b7 +0x21b:  mov    %ebx,%edx
0864f1b9 +0x21d:  jmp    0864f1ed <+0x251>
0864f1bb +0x21f:  mov    0x8(%ebp),%eax
0864f1be +0x222:  add    $0x8ea68,%eax
0864f1c3 +0x227:  mov    %eax,(%esp)
0864f1c6 +0x22a:  call   08695af8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x234d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x234d
0864f1cb +0x22f:  mov    0x8(%ebp),%eax
0864f1ce +0x232:  add    $0x8e980,%eax
0864f1d3 +0x237:  mov    %eax,(%esp)
0864f1d6 +0x23a:  call   08694f9a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17ef
0864f1db +0x23f:  mov    0x8(%ebp),%eax
0864f1de +0x242:  add    $0x8e954,%eax
0864f1e3 +0x247:  mov    %eax,(%esp)
0864f1e6 +0x24a:  call   08694f54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17a9
0864f1eb +0x24f:  jmp    0864f21f <+0x283>
0864f1ed +0x251:  mov    %edx,%ebx
0864f1ef +0x253:  mov    %eax,%esi
0864f1f1 +0x255:  mov    0x8(%ebp),%eax
0864f1f4 +0x258:  add    $0x8e3f0,%eax
0864f1f9 +0x25d:  mov    %eax,(%esp)
0864f1fc +0x260:  call   08695080 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18d5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18d5
0864f201 +0x265:  mov    %esi,%eax
0864f203 +0x267:  mov    %ebx,%edx
0864f205 +0x269:  mov    %edx,%ebx
0864f207 +0x26b:  mov    %eax,%esi
0864f209 +0x26d:  mov    0x8(%ebp),%eax
0864f20c +0x270:  add    $0x8e080,%eax
0864f211 +0x275:  mov    %eax,(%esp)
0864f214 +0x278:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864f219 +0x27d:  mov    %esi,%eax
0864f21b +0x27f:  mov    %ebx,%edx
0864f21d +0x281:  jmp    0864f241 <+0x2a5>
0864f21f +0x283:  mov    0x8(%ebp),%eax
0864f222 +0x286:  add    $0x8e3f0,%eax
0864f227 +0x28b:  mov    %eax,(%esp)
0864f22a +0x28e:  call   08695080 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x18d5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x18d5
0864f22f +0x293:  mov    0x8(%ebp),%eax
0864f232 +0x296:  add    $0x8e080,%eax
0864f237 +0x29b:  mov    %eax,(%esp)
0864f23a +0x29e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864f23f +0x2a3:  jmp    0864f273 <+0x2d7>
0864f241 +0x2a5:  mov    %edx,%ebx
0864f243 +0x2a7:  mov    %eax,%esi
0864f245 +0x2a9:  mov    0x8(%ebp),%eax
0864f248 +0x2ac:  add    $0x8e034,%eax
0864f24d +0x2b1:  mov    %eax,(%esp)
0864f250 +0x2b4:  call   08486866 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x2a0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x2a0
0864f255 +0x2b9:  mov    %esi,%eax
0864f257 +0x2bb:  mov    %ebx,%edx
0864f259 +0x2bd:  mov    %edx,%ebx
0864f25b +0x2bf:  mov    %eax,%esi
0864f25d +0x2c1:  mov    0x8(%ebp),%eax
0864f260 +0x2c4:  add    $0x8df60,%eax
0864f265 +0x2c9:  mov    %eax,(%esp)
0864f268 +0x2cc:  call   0813121a <_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev>  ; advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager()
0864f26d +0x2d1:  mov    %esi,%eax
0864f26f +0x2d3:  mov    %ebx,%edx
0864f271 +0x2d5:  jmp    0864f295 <+0x2f9>
0864f273 +0x2d7:  mov    0x8(%ebp),%eax
0864f276 +0x2da:  add    $0x8e034,%eax
0864f27b +0x2df:  mov    %eax,(%esp)
0864f27e +0x2e2:  call   08486866 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x2a0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x2a0
0864f283 +0x2e7:  mov    0x8(%ebp),%eax
0864f286 +0x2ea:  add    $0x8df60,%eax
0864f28b +0x2ef:  mov    %eax,(%esp)
0864f28e +0x2f2:  call   0813121a <_ZN12advancealtar25CharacAdvanceAltarManagerD1Ev>  ; advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager()
0864f293 +0x2f7:  jmp    0864f2c7 <+0x32b>
0864f295 +0x2f9:  mov    %edx,%ebx
0864f297 +0x2fb:  mov    %eax,%esi
0864f299 +0x2fd:  mov    0x8(%ebp),%eax
0864f29c +0x300:  add    $0x8d264,%eax
0864f2a1 +0x305:  mov    %eax,(%esp)
0864f2a4 +0x308:  call   08694bf6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x144b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x144b
0864f2a9 +0x30d:  mov    %esi,%eax
0864f2ab +0x30f:  mov    %ebx,%edx
0864f2ad +0x311:  mov    %edx,%ebx
0864f2af +0x313:  mov    %eax,%esi
0864f2b1 +0x315:  mov    0x8(%ebp),%eax
0864f2b4 +0x318:  add    $0x8d1e4,%eax
0864f2b9 +0x31d:  mov    %eax,(%esp)
0864f2bc +0x320:  call   08695bb2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2407>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2407
0864f2c1 +0x325:  mov    %esi,%eax
0864f2c3 +0x327:  mov    %ebx,%edx
0864f2c5 +0x329:  jmp    0864f2e9 <+0x34d>
0864f2c7 +0x32b:  mov    0x8(%ebp),%eax
0864f2ca +0x32e:  add    $0x8d264,%eax
0864f2cf +0x333:  mov    %eax,(%esp)
0864f2d2 +0x336:  call   08694bf6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x144b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x144b
0864f2d7 +0x33b:  mov    0x8(%ebp),%eax
0864f2da +0x33e:  add    $0x8d1e4,%eax
0864f2df +0x343:  mov    %eax,(%esp)
0864f2e2 +0x346:  call   08695bb2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2407>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2407
0864f2e7 +0x34b:  jmp    0864f303 <+0x367>
0864f2e9 +0x34d:  mov    %edx,%ebx
0864f2eb +0x34f:  mov    %eax,%esi
0864f2ed +0x351:  mov    0x8(%ebp),%eax
0864f2f0 +0x354:  add    $0x8d1d0,%eax
0864f2f5 +0x359:  mov    %eax,(%esp)
0864f2f8 +0x35c:  call   08699038 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x588d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x588d
0864f2fd +0x361:  mov    %esi,%eax
0864f2ff +0x363:  mov    %ebx,%edx
0864f301 +0x365:  jmp    0864f315 <+0x379>
0864f303 +0x367:  mov    0x8(%ebp),%eax
0864f306 +0x36a:  add    $0x8d1d0,%eax
0864f30b +0x36f:  mov    %eax,(%esp)
0864f30e +0x372:  call   08699038 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x588d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x588d
0864f313 +0x377:  jmp    0864f32f <+0x393>
0864f315 +0x379:  mov    %edx,%ebx
0864f317 +0x37b:  mov    %eax,%esi
0864f319 +0x37d:  mov    0x8(%ebp),%eax
0864f31c +0x380:  add    $0x8d1c4,%eax
0864f321 +0x385:  mov    %eax,(%esp)
0864f324 +0x388:  call   08698fc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x581b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x581b
0864f329 +0x38d:  mov    %esi,%eax
0864f32b +0x38f:  mov    %ebx,%edx
0864f32d +0x391:  jmp    0864f341 <+0x3a5>
0864f32f +0x393:  mov    0x8(%ebp),%eax
0864f332 +0x396:  add    $0x8d1c4,%eax
0864f337 +0x39b:  mov    %eax,(%esp)
0864f33a +0x39e:  call   08698fc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x581b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x581b
0864f33f +0x3a3:  jmp    0864f35b <+0x3bf>
0864f341 +0x3a5:  mov    %edx,%ebx
0864f343 +0x3a7:  mov    %eax,%esi
0864f345 +0x3a9:  mov    0x8(%ebp),%eax
0864f348 +0x3ac:  add    $0x8d1b8,%eax
0864f34d +0x3b1:  mov    %eax,(%esp)
0864f350 +0x3b4:  call   08698fc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x581b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x581b
0864f355 +0x3b9:  mov    %esi,%eax
0864f357 +0x3bb:  mov    %ebx,%edx
0864f359 +0x3bd:  jmp    0864f36d <+0x3d1>
0864f35b +0x3bf:  mov    0x8(%ebp),%eax
0864f35e +0x3c2:  add    $0x8d1b8,%eax
0864f363 +0x3c7:  mov    %eax,(%esp)
0864f366 +0x3ca:  call   08698fc6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x581b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x581b
0864f36b +0x3cf:  jmp    0864f3b7 <+0x41b>
0864f36d +0x3d1:  mov    %edx,%ebx
0864f36f +0x3d3:  mov    %eax,%esi
0864f371 +0x3d5:  mov    0x8(%ebp),%eax
0864f374 +0x3d8:  add    $0x8d160,%eax
0864f379 +0x3dd:  mov    %eax,(%esp)
0864f37c +0x3e0:  call   086959d6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x222b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x222b
0864f381 +0x3e5:  mov    %esi,%eax
0864f383 +0x3e7:  mov    %ebx,%edx
0864f385 +0x3e9:  mov    %edx,%ebx
0864f387 +0x3eb:  mov    %eax,%esi
0864f389 +0x3ed:  mov    0x8(%ebp),%eax
0864f38c +0x3f0:  add    $0x8d114,%eax
0864f391 +0x3f5:  mov    %eax,(%esp)
0864f394 +0x3f8:  call   086959ca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x221f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x221f
0864f399 +0x3fd:  mov    %esi,%eax
0864f39b +0x3ff:  mov    %ebx,%edx
0864f39d +0x401:  mov    %edx,%ebx
0864f39f +0x403:  mov    %eax,%esi
0864f3a1 +0x405:  mov    0x8(%ebp),%eax
0864f3a4 +0x408:  add    $0x8d0e4,%eax
0864f3a9 +0x40d:  mov    %eax,(%esp)
0864f3ac +0x410:  call   08147b70 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x63>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x63
0864f3b1 +0x415:  mov    %esi,%eax
0864f3b3 +0x417:  mov    %ebx,%edx
0864f3b5 +0x419:  jmp    0864f3e9 <+0x44d>
0864f3b7 +0x41b:  mov    0x8(%ebp),%eax
0864f3ba +0x41e:  add    $0x8d160,%eax
0864f3bf +0x423:  mov    %eax,(%esp)
0864f3c2 +0x426:  call   086959d6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x222b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x222b
0864f3c7 +0x42b:  mov    0x8(%ebp),%eax
0864f3ca +0x42e:  add    $0x8d114,%eax
0864f3cf +0x433:  mov    %eax,(%esp)
0864f3d2 +0x436:  call   086959ca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x221f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x221f
0864f3d7 +0x43b:  mov    0x8(%ebp),%eax
0864f3da +0x43e:  add    $0x8d0e4,%eax
0864f3df +0x443:  mov    %eax,(%esp)
0864f3e2 +0x446:  call   08147b70 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x63>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x63
0864f3e7 +0x44b:  jmp    0864f403 <+0x467>
0864f3e9 +0x44d:  mov    %edx,%ebx
0864f3eb +0x44f:  mov    %eax,%esi
0864f3ed +0x451:  mov    0x8(%ebp),%eax
0864f3f0 +0x454:  add    $0x8cfe4,%eax
0864f3f5 +0x459:  mov    %eax,(%esp)
0864f3f8 +0x45c:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
0864f3fd +0x461:  mov    %esi,%eax
0864f3ff +0x463:  mov    %ebx,%edx
0864f401 +0x465:  jmp    0864f415 <+0x479>
0864f403 +0x467:  mov    0x8(%ebp),%eax
0864f406 +0x46a:  add    $0x8cfe4,%eax
0864f40b +0x46f:  mov    %eax,(%esp)
0864f40e +0x472:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
0864f413 +0x477:  jmp    0864f45f <+0x4c3>
0864f415 +0x479:  mov    %edx,%ebx
0864f417 +0x47b:  mov    %eax,%esi
0864f419 +0x47d:  mov    0x8(%ebp),%eax
0864f41c +0x480:  add    $0x8cfa0,%eax
0864f421 +0x485:  mov    %eax,(%esp)
0864f424 +0x488:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0864f429 +0x48d:  mov    %esi,%eax
0864f42b +0x48f:  mov    %ebx,%edx
0864f42d +0x491:  mov    %edx,%ebx
0864f42f +0x493:  mov    %eax,%esi
0864f431 +0x495:  mov    0x8(%ebp),%eax
0864f434 +0x498:  add    $0x8cf88,%eax
0864f439 +0x49d:  mov    %eax,(%esp)
0864f43c +0x4a0:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0864f441 +0x4a5:  mov    %esi,%eax
0864f443 +0x4a7:  mov    %ebx,%edx
0864f445 +0x4a9:  mov    %edx,%ebx
0864f447 +0x4ab:  mov    %eax,%esi
0864f449 +0x4ad:  mov    0x8(%ebp),%eax
0864f44c +0x4b0:  add    $0x8cf80,%eax
0864f451 +0x4b5:  mov    %eax,(%esp)
0864f454 +0x4b8:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0864f459 +0x4bd:  mov    %esi,%eax
0864f45b +0x4bf:  mov    %ebx,%edx
0864f45d +0x4c1:  jmp    0864f491 <+0x4f5>
0864f45f +0x4c3:  mov    0x8(%ebp),%eax
0864f462 +0x4c6:  add    $0x8cfa0,%eax
0864f467 +0x4cb:  mov    %eax,(%esp)
0864f46a +0x4ce:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0864f46f +0x4d3:  mov    0x8(%ebp),%eax
0864f472 +0x4d6:  add    $0x8cf88,%eax
0864f477 +0x4db:  mov    %eax,(%esp)
0864f47a +0x4de:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0864f47f +0x4e3:  mov    0x8(%ebp),%eax
0864f482 +0x4e6:  add    $0x8cf80,%eax
0864f487 +0x4eb:  mov    %eax,(%esp)
0864f48a +0x4ee:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0864f48f +0x4f3:  jmp    0864f4ab <+0x50f>
0864f491 +0x4f5:  mov    %edx,%ebx
0864f493 +0x4f7:  mov    %eax,%esi
0864f495 +0x4f9:  mov    0x8(%ebp),%eax
0864f498 +0x4fc:  add    $0x8cf74,%eax
0864f49d +0x501:  mov    %eax,(%esp)
0864f4a0 +0x504:  call   08698f54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x57a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x57a9
0864f4a5 +0x509:  mov    %esi,%eax
0864f4a7 +0x50b:  mov    %ebx,%edx
0864f4a9 +0x50d:  jmp    0864f4bd <+0x521>
0864f4ab +0x50f:  mov    0x8(%ebp),%eax
0864f4ae +0x512:  add    $0x8cf74,%eax
0864f4b3 +0x517:  mov    %eax,(%esp)
0864f4b6 +0x51a:  call   08698f54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x57a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x57a9
0864f4bb +0x51f:  jmp    0864f4d7 <+0x53b>
0864f4bd +0x521:  mov    %edx,%ebx
0864f4bf +0x523:  mov    %eax,%esi
0864f4c1 +0x525:  mov    0x8(%ebp),%eax
0864f4c4 +0x528:  add    $0x8cf68,%eax
0864f4c9 +0x52d:  mov    %eax,(%esp)
0864f4cc +0x530:  call   08698ee2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5737>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5737
0864f4d1 +0x535:  mov    %esi,%eax
0864f4d3 +0x537:  mov    %ebx,%edx
0864f4d5 +0x539:  jmp    0864f4e9 <+0x54d>
0864f4d7 +0x53b:  mov    0x8(%ebp),%eax
0864f4da +0x53e:  add    $0x8cf68,%eax
0864f4df +0x543:  mov    %eax,(%esp)
0864f4e2 +0x546:  call   08698ee2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5737>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5737
0864f4e7 +0x54b:  jmp    0864f51b <+0x57f>
0864f4e9 +0x54d:  mov    %edx,%ebx
0864f4eb +0x54f:  mov    %eax,%esi
0864f4ed +0x551:  mov    0x8(%ebp),%eax
0864f4f0 +0x554:  add    $0x8cf64,%eax
0864f4f5 +0x559:  mov    %eax,(%esp)
0864f4f8 +0x55c:  call   08697062 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38b7
0864f4fd +0x561:  mov    %esi,%eax
0864f4ff +0x563:  mov    %ebx,%edx
0864f501 +0x565:  mov    %edx,%ebx
0864f503 +0x567:  mov    %eax,%esi
0864f505 +0x569:  mov    0x8(%ebp),%eax
0864f508 +0x56c:  add    $0x8cef4,%eax
0864f50d +0x571:  mov    %eax,(%esp)
0864f510 +0x574:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
0864f515 +0x579:  mov    %esi,%eax
0864f517 +0x57b:  mov    %ebx,%edx
0864f519 +0x57d:  jmp    0864f53d <+0x5a1>
0864f51b +0x57f:  mov    0x8(%ebp),%eax
0864f51e +0x582:  add    $0x8cf64,%eax
0864f523 +0x587:  mov    %eax,(%esp)
0864f526 +0x58a:  call   08697062 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x38b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x38b7
0864f52b +0x58f:  mov    0x8(%ebp),%eax
0864f52e +0x592:  add    $0x8cef4,%eax
0864f533 +0x597:  mov    %eax,(%esp)
0864f536 +0x59a:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
0864f53b +0x59f:  jmp    0864f56f <+0x5d3>
0864f53d +0x5a1:  mov    %edx,%ebx
0864f53f +0x5a3:  mov    %eax,%esi
0864f541 +0x5a5:  mov    0x8(%ebp),%eax
0864f544 +0x5a8:  add    $0x858d4,%eax
0864f549 +0x5ad:  mov    %eax,(%esp)
0864f54c +0x5b0:  call   08697bb0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4405>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4405
0864f551 +0x5b5:  mov    %esi,%eax
0864f553 +0x5b7:  mov    %ebx,%edx
0864f555 +0x5b9:  mov    %edx,%ebx
0864f557 +0x5bb:  mov    %eax,%esi
0864f559 +0x5bd:  mov    0x8(%ebp),%eax
0864f55c +0x5c0:  add    $0x79744,%eax
0864f561 +0x5c5:  mov    %eax,(%esp)
0864f564 +0x5c8:  call   0832ac48 <_ZN13charac_expand8CDataMgrD1Ev>  ; charac_expand::CDataMgr::~CDataMgr()
0864f569 +0x5cd:  mov    %esi,%eax
0864f56b +0x5cf:  mov    %ebx,%edx
0864f56d +0x5d1:  jmp    0864f591 <+0x5f5>
0864f56f +0x5d3:  mov    0x8(%ebp),%eax
0864f572 +0x5d6:  add    $0x858d4,%eax
0864f577 +0x5db:  mov    %eax,(%esp)
0864f57a +0x5de:  call   08697bb0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4405>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4405
0864f57f +0x5e3:  mov    0x8(%ebp),%eax
0864f582 +0x5e6:  add    $0x79744,%eax
0864f587 +0x5eb:  mov    %eax,(%esp)
0864f58a +0x5ee:  call   0832ac48 <_ZN13charac_expand8CDataMgrD1Ev>  ; charac_expand::CDataMgr::~CDataMgr()
0864f58f +0x5f3:  jmp    0864f5c3 <+0x627>
0864f591 +0x5f5:  mov    %edx,%ebx
0864f593 +0x5f7:  mov    %eax,%esi
0864f595 +0x5f9:  mov    0x8(%ebp),%eax
0864f598 +0x5fc:  add    $0x796f4,%eax
0864f59d +0x601:  mov    %eax,(%esp)
0864f5a0 +0x604:  call   0869703e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3893>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3893
0864f5a5 +0x609:  mov    %esi,%eax
0864f5a7 +0x60b:  mov    %ebx,%edx
0864f5a9 +0x60d:  mov    %edx,%ebx
0864f5ab +0x60f:  mov    %eax,%esi
0864f5ad +0x611:  mov    0x8(%ebp),%eax
0864f5b0 +0x614:  add    $0x796e8,%eax
0864f5b5 +0x619:  mov    %eax,(%esp)
0864f5b8 +0x61c:  call   08698e70 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x56c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x56c5
0864f5bd +0x621:  mov    %esi,%eax
0864f5bf +0x623:  mov    %ebx,%edx
0864f5c1 +0x625:  jmp    0864f5e5 <+0x649>
0864f5c3 +0x627:  mov    0x8(%ebp),%eax
0864f5c6 +0x62a:  add    $0x796f4,%eax
0864f5cb +0x62f:  mov    %eax,(%esp)
0864f5ce +0x632:  call   0869703e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3893>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3893
0864f5d3 +0x637:  mov    0x8(%ebp),%eax
0864f5d6 +0x63a:  add    $0x796e8,%eax
0864f5db +0x63f:  mov    %eax,(%esp)
0864f5de +0x642:  call   08698e70 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x56c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x56c5
0864f5e3 +0x647:  jmp    0864f61f <+0x683>
0864f5e5 +0x649:  mov    %edx,%esi
0864f5e7 +0x64b:  mov    %eax,%edi
0864f5e9 +0x64d:  mov    0x8(%ebp),%eax
0864f5ec +0x650:  add    $0x79664,%eax
0864f5f1 +0x655:  test   %eax,%eax
0864f5f3 +0x657:  je     0864f619 <+0x67d>
0864f5f5 +0x659:  mov    0x8(%ebp),%eax
0864f5f8 +0x65c:  add    $0x79664,%eax
0864f5fd +0x661:  lea    0x8(%eax),%ebx
0864f600 +0x664:  mov    0x8(%ebp),%eax
0864f603 +0x667:  add    $0x79664,%eax
0864f608 +0x66c:  cmp    %eax,%ebx
0864f60a +0x66e:  je     0864f619 <+0x67d>
0864f60c +0x670:  sub    $0x4,%ebx
0864f60f +0x673:  mov    %ebx,(%esp)
0864f612 +0x676:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864f617 +0x67b:  jmp    0864f600 <+0x664>
0864f619 +0x67d:  mov    %edi,%eax
0864f61b +0x67f:  mov    %esi,%edx
0864f61d +0x681:  jmp    0864f64f <+0x6b3>
0864f61f +0x683:  mov    0x8(%ebp),%eax
0864f622 +0x686:  add    $0x79664,%eax
0864f627 +0x68b:  test   %eax,%eax
0864f629 +0x68d:  je     0864f669 <+0x6cd>
0864f62b +0x68f:  mov    0x8(%ebp),%eax
0864f62e +0x692:  add    $0x79664,%eax
0864f633 +0x697:  lea    0x8(%eax),%ebx
0864f636 +0x69a:  mov    0x8(%ebp),%eax
0864f639 +0x69d:  add    $0x79664,%eax
0864f63e +0x6a2:  cmp    %eax,%ebx
0864f640 +0x6a4:  je     0864f669 <+0x6cd>
0864f642 +0x6a6:  sub    $0x4,%ebx
0864f645 +0x6a9:  mov    %ebx,(%esp)
0864f648 +0x6ac:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0864f64d +0x6b1:  jmp    0864f636 <+0x69a>
0864f64f +0x6b3:  mov    %edx,%ebx
0864f651 +0x6b5:  mov    %eax,%esi
0864f653 +0x6b7:  mov    0x8(%ebp),%eax
0864f656 +0x6ba:  add    $0x795fc,%eax
0864f65b +0x6bf:  mov    %eax,(%esp)
0864f65e +0x6c2:  call   08697b76 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43cb
0864f663 +0x6c7:  mov    %esi,%eax
0864f665 +0x6c9:  mov    %ebx,%edx
0864f667 +0x6cb:  jmp    0864f67b <+0x6df>
0864f669 +0x6cd:  mov    0x8(%ebp),%eax
0864f66c +0x6d0:  add    $0x795fc,%eax
0864f671 +0x6d5:  mov    %eax,(%esp)
0864f674 +0x6d8:  call   08697b76 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43cb
0864f679 +0x6dd:  jmp    0864f6ad <+0x711>
0864f67b +0x6df:  mov    %edx,%ebx
0864f67d +0x6e1:  mov    %eax,%esi
0864f67f +0x6e3:  mov    0x8(%ebp),%eax
0864f682 +0x6e6:  add    $0x795e8,%eax
0864f687 +0x6eb:  mov    %eax,(%esp)
0864f68a +0x6ee:  call   08695aaa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22ff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22ff
0864f68f +0x6f3:  mov    %esi,%eax
0864f691 +0x6f5:  mov    %ebx,%edx
0864f693 +0x6f7:  mov    %edx,%ebx
0864f695 +0x6f9:  mov    %eax,%esi
0864f697 +0x6fb:  mov    0x8(%ebp),%eax
0864f69a +0x6fe:  add    $0x71bac,%eax
0864f69f +0x703:  mov    %eax,(%esp)
0864f6a2 +0x706:  call   086951ea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1a3f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1a3f
0864f6a7 +0x70b:  mov    %esi,%eax
0864f6a9 +0x70d:  mov    %ebx,%edx
0864f6ab +0x70f:  jmp    0864f6cf <+0x733>
0864f6ad +0x711:  mov    0x8(%ebp),%eax
0864f6b0 +0x714:  add    $0x795e8,%eax
0864f6b5 +0x719:  mov    %eax,(%esp)
0864f6b8 +0x71c:  call   08695aaa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22ff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22ff
0864f6bd +0x721:  mov    0x8(%ebp),%eax
0864f6c0 +0x724:  add    $0x71bac,%eax
0864f6c5 +0x729:  mov    %eax,(%esp)
0864f6c8 +0x72c:  call   086951ea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1a3f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1a3f
0864f6cd +0x731:  jmp    0864f6e9 <+0x74d>
0864f6cf +0x733:  mov    %edx,%ebx
0864f6d1 +0x735:  mov    %eax,%esi
0864f6d3 +0x737:  mov    0x8(%ebp),%eax
0864f6d6 +0x73a:  add    $0x7121c,%eax
0864f6db +0x73f:  mov    %eax,(%esp)
0864f6de +0x742:  call   08694b7a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x13cf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x13cf
0864f6e3 +0x747:  mov    %esi,%eax
0864f6e5 +0x749:  mov    %ebx,%edx
0864f6e7 +0x74b:  jmp    0864f6fb <+0x75f>
0864f6e9 +0x74d:  mov    0x8(%ebp),%eax
0864f6ec +0x750:  add    $0x7121c,%eax
0864f6f1 +0x755:  mov    %eax,(%esp)
0864f6f4 +0x758:  call   08694b7a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x13cf>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x13cf
0864f6f9 +0x75d:  jmp    0864f72d <+0x791>
0864f6fb +0x75f:  mov    %edx,%ebx
0864f6fd +0x761:  mov    %eax,%esi
0864f6ff +0x763:  mov    0x8(%ebp),%eax
0864f702 +0x766:  add    $0x711f4,%eax
0864f707 +0x76b:  mov    %eax,(%esp)
0864f70a +0x76e:  call   08697002 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3857>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3857
0864f70f +0x773:  mov    %esi,%eax
0864f711 +0x775:  mov    %ebx,%edx
0864f713 +0x777:  mov    %edx,%ebx
0864f715 +0x779:  mov    %eax,%esi
0864f717 +0x77b:  mov    0x8(%ebp),%eax
0864f71a +0x77e:  add    $0x711ec,%eax
0864f71f +0x783:  mov    %eax,(%esp)
0864f722 +0x786:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0864f727 +0x78b:  mov    %esi,%eax
0864f729 +0x78d:  mov    %ebx,%edx
0864f72b +0x78f:  jmp    0864f74f <+0x7b3>
0864f72d +0x791:  mov    0x8(%ebp),%eax
0864f730 +0x794:  add    $0x711f4,%eax
0864f735 +0x799:  mov    %eax,(%esp)
0864f738 +0x79c:  call   08697002 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3857>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3857
0864f73d +0x7a1:  mov    0x8(%ebp),%eax
0864f740 +0x7a4:  add    $0x711ec,%eax
0864f745 +0x7a9:  mov    %eax,(%esp)
0864f748 +0x7ac:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0864f74d +0x7b1:  jmp    0864f769 <+0x7cd>
0864f74f +0x7b3:  mov    %edx,%ebx
0864f751 +0x7b5:  mov    %eax,%esi
0864f753 +0x7b7:  mov    0x8(%ebp),%eax
0864f756 +0x7ba:  add    $0x6ef78,%eax
0864f75b +0x7bf:  mov    %eax,(%esp)
0864f75e +0x7c2:  call   08697b62 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43b7
0864f763 +0x7c7:  mov    %esi,%eax
0864f765 +0x7c9:  mov    %ebx,%edx
0864f767 +0x7cb:  jmp    0864f77b <+0x7df>
0864f769 +0x7cd:  mov    0x8(%ebp),%eax
0864f76c +0x7d0:  add    $0x6ef78,%eax
0864f771 +0x7d5:  mov    %eax,(%esp)
0864f774 +0x7d8:  call   08697b62 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43b7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43b7
0864f779 +0x7dd:  jmp    0864f795 <+0x7f9>
0864f77b +0x7df:  mov    %edx,%ebx
0864f77d +0x7e1:  mov    %eax,%esi
0864f77f +0x7e3:  mov    0x8(%ebp),%eax
0864f782 +0x7e6:  add    $0x6ef6c,%eax
0864f787 +0x7eb:  mov    %eax,(%esp)
0864f78a +0x7ee:  call   08697b4e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43a3
0864f78f +0x7f3:  mov    %esi,%eax
0864f791 +0x7f5:  mov    %ebx,%edx
0864f793 +0x7f7:  jmp    0864f7a7 <+0x80b>
0864f795 +0x7f9:  mov    0x8(%ebp),%eax
0864f798 +0x7fc:  add    $0x6ef6c,%eax
0864f79d +0x801:  mov    %eax,(%esp)
0864f7a0 +0x804:  call   08697b4e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x43a3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x43a3
0864f7a5 +0x809:  jmp    0864f7da <+0x83e>
0864f7a7 +0x80b:  mov    %edx,%ebx
0864f7a9 +0x80d:  mov    %eax,%esi
0864f7ab +0x80f:  mov    0x8(%ebp),%eax
0864f7ae +0x812:  add    $0xe0,%eax
0864f7b3 +0x817:  mov    %eax,(%esp)
0864f7b6 +0x81a:  call   08698d58 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x55ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x55ad
0864f7bb +0x81f:  mov    %esi,%eax
0864f7bd +0x821:  mov    %ebx,%edx
0864f7bf +0x823:  mov    %edx,%ebx
0864f7c1 +0x825:  mov    %eax,%esi
0864f7c3 +0x827:  mov    0x8(%ebp),%eax
0864f7c6 +0x82a:  mov    %eax,(%esp)
0864f7c9 +0x82d:  call   08697ac0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4315>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4315
0864f7ce +0x832:  mov    %esi,%eax
0864f7d0 +0x834:  mov    %ebx,%edx
0864f7d2 +0x836:  mov    %eax,(%esp)
0864f7d5 +0x839:  call   08ae3750 <_Unwind_Resume>
0864f7da +0x83e:  mov    0x8(%ebp),%eax
0864f7dd +0x841:  add    $0xe0,%eax
0864f7e2 +0x846:  mov    %eax,(%esp)
0864f7e5 +0x849:  call   08698d58 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x55ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x55ad
0864f7ea +0x84e:  mov    0x8(%ebp),%eax
0864f7ed +0x851:  mov    %eax,(%esp)
0864f7f0 +0x854:  call   08697ac0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4315>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4315
0864f7f5 +0x859:  add    $0x1c,%esp
0864f7f8 +0x85c:  pop    %ebx
0864f7f9 +0x85d:  pop    %esi
0864f7fa +0x85e:  pop    %edi
0864f7fb +0x85f:  pop    %ebp
0864f7fc +0x860:  ret
0864f7fd +0x861:  nop
```

## 反编译 C

```c
// CUser::~CUser @ 0x864ef9c

/* CUser::~CUser() */

void __thiscall CUser::~CUser(CUser *this)

{
  string *this_00;
  
  this[0x8d253] = (CUser)0x0;
                    /* try { // try from 0864efba to 0864efbe has its CatchHandler @ 0864efc1 */
  CharacLevelUpGiftAccountOnce::~CharacLevelUpGiftAccountOnce
            ((CharacLevelUpGiftAccountOnce *)(this + 0x8ec04));
                    /* try { // try from 0864efe6 to 0864efea has its CatchHandler @ 0864efed */
  GrowthCreatureEvent::~GrowthCreatureEvent((GrowthCreatureEvent *)(this + 0x8ebf8));
                    /* try { // try from 0864f012 to 0864f016 has its CatchHandler @ 0864f019 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x8ebc4));
                    /* try { // try from 0864f03e to 0864f042 has its CatchHandler @ 0864f045 */
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::~map
            ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
             (this + 0x8eb80));
                    /* try { // try from 0864f06a to 0864f06e has its CatchHandler @ 0864f071 */
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::~map((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          *)(this + 0x8eb68));
                    /* try { // try from 0864f096 to 0864f09a has its CatchHandler @ 0864f09d */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::~map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          *)(this + 0x8eb50));
                    /* try { // try from 0864f0c2 to 0864f0c6 has its CatchHandler @ 0864f0c9 */
  std::
  set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
  ::~set((set<std::pair<unsigned_char,unsigned_short>,std::less<std::pair<unsigned_char,unsigned_short>>,std::allocator<std::pair<unsigned_char,unsigned_short>>>
          *)(this + 0x8eb00));
  PISenderManager::~PISenderManager((PISenderManager *)(this + 0x8eaec));
  PIReceiverManager::~PIReceiverManager((PIReceiverManager *)(this + 0x8eae4));
                    /* try { // try from 0864f13e to 0864f142 has its CatchHandler @ 0864f145 */
  std::
  map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
  ::~map((map<std::pair<char,char>,int,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,int>>>
          *)(this + 0x8eabc));
                    /* try { // try from 0864f16a to 0864f16e has its CatchHandler @ 0864f171 */
  std::map<short,int,std::less<short>,std::allocator<std::pair<short_const,int>>>::~map
            ((map<short,int,std::less<short>,std::allocator<std::pair<short_const,int>>> *)
             (this + 0x8eaa4));
  Secu_HackLogCheck::~Secu_HackLogCheck((Secu_HackLogCheck *)(this + 0x8ea68));
  Secu_GoldControl::~Secu_GoldControl((Secu_GoldControl *)(this + 0x8e980));
                    /* try { // try from 0864f1e6 to 0864f1ea has its CatchHandler @ 0864f1ed */
  XNuclear::CHades::~CHades((CHades *)(this + 0x8e954));
  WongWork::CMCAPManager::~CMCAPManager((CMCAPManager *)(this + 0x8e3f0));
                    /* try { // try from 0864f23a to 0864f23e has its CatchHandler @ 0864f241 */
  std::string::~string((string *)(this + 0x8e080));
  Character::~Character((Character *)(this + 0x8e034));
                    /* try { // try from 0864f28e to 0864f292 has its CatchHandler @ 0864f295 */
  advancealtar::CharacAdvanceAltarManager::~CharacAdvanceAltarManager
            ((CharacAdvanceAltarManager *)(this + 0x8df60));
  APSystem::CActionPointManager::~CActionPointManager((CActionPointManager *)(this + 0x8d264));
                    /* try { // try from 0864f2e2 to 0864f2e6 has its CatchHandler @ 0864f2e9 */
  CerashopAddRestrict::UserInfo::~UserInfo((UserInfo *)(this + 0x8d1e4));
                    /* try { // try from 0864f30e to 0864f312 has its CatchHandler @ 0864f315 */
  std::vector<tyIPCounters,std::allocator<tyIPCounters>>::~vector
            ((vector<tyIPCounters,std::allocator<tyIPCounters>> *)(this + 0x8d1d0));
                    /* try { // try from 0864f33a to 0864f33e has its CatchHandler @ 0864f341 */
  std::vector<stLookOuts,std::allocator<stLookOuts>>::~vector
            ((vector<stLookOuts,std::allocator<stLookOuts>> *)(this + 0x8d1c4));
                    /* try { // try from 0864f366 to 0864f36a has its CatchHandler @ 0864f36d */
  std::vector<stLookOuts,std::allocator<stLookOuts>>::~vector
            ((vector<stLookOuts,std::allocator<stLookOuts>> *)(this + 0x8d1b8));
  Sanicova::CPad::~CPad((CPad *)(this + 0x8d160));
  WongWork::CSecurityCard::~CSecurityCard((CSecurityCard *)(this + 0x8d114));
                    /* try { // try from 0864f3e2 to 0864f3e6 has its CatchHandler @ 0864f3e9 */
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::~vector((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(this + 0x8d0e4));
                    /* try { // try from 0864f40e to 0864f412 has its CatchHandler @ 0864f415 */
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
             (this + 0x8cfe4));
  Mutex::~Mutex((Mutex *)(this + 0x8cfa0));
  Mutex::~Mutex((Mutex *)(this + 0x8cf88));
                    /* try { // try from 0864f48a to 0864f48e has its CatchHandler @ 0864f491 */
  std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)(this + 0x8cf80));
                    /* try { // try from 0864f4b6 to 0864f4ba has its CatchHandler @ 0864f4bd */
  std::vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>>::~vector
            ((vector<CUser::_DBLogItemInfo,std::allocator<CUser::_DBLogItemInfo>> *)(this + 0x8cf74)
            );
                    /* try { // try from 0864f4e2 to 0864f4e6 has its CatchHandler @ 0864f4e9 */
  std::vector<LimitItemUsage,std::allocator<LimitItemUsage>>::~vector
            ((vector<LimitItemUsage,std::allocator<LimitItemUsage>> *)(this + 0x8cf68));
  CDungeonGainedGold::~CDungeonGainedGold((CDungeonGainedGold *)(this + 0x8cf64));
                    /* try { // try from 0864f536 to 0864f53a has its CatchHandler @ 0864f53d */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x8cef4));
  UserQuest::~UserQuest((UserQuest *)(this + 0x858d4));
                    /* try { // try from 0864f58a to 0864f58e has its CatchHandler @ 0864f591 */
  charac_expand::CDataMgr::~CDataMgr((CDataMgr *)(this + 0x79744));
  CCharacterView::~CCharacterView((CCharacterView *)(this + 0x796f4));
                    /* try { // try from 0864f5de to 0864f5e2 has its CatchHandler @ 0864f5e5 */
  std::vector<_Charac_info,std::allocator<_Charac_info>>::~vector
            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
  if (this != (CUser *)0xfff8699c) {
    this_00 = (string *)(this + 0x7966c);
    while (this_00 != (string *)(this + 0x79664)) {
      this_00 = this_00 + -4;
                    /* try { // try from 0864f648 to 0864f64c has its CatchHandler @ 0864f64f */
      std::string::~string(this_00);
    }
  }
                    /* try { // try from 0864f674 to 0864f678 has its CatchHandler @ 0864f67b */
  CodeHackCheckStorage::~CodeHackCheckStorage((CodeHackCheckStorage *)(this + 0x795fc));
  Secu_AccountHacking::~Secu_AccountHacking((Secu_AccountHacking *)(this + 0x795e8));
                    /* try { // try from 0864f6c8 to 0864f6cc has its CatchHandler @ 0864f6cf */
  WongWork::CHackAnalyzer::~CHackAnalyzer((CHackAnalyzer *)(this + 0x71bac));
                    /* try { // try from 0864f6f4 to 0864f6f8 has its CatchHandler @ 0864f6fb */
  WongWork::CUserPremium::~CUserPremium((CUserPremium *)(this + 0x7121c));
  CPacketVerifier::~CPacketVerifier((CPacketVerifier *)(this + 0x711f4));
                    /* try { // try from 0864f748 to 0864f74c has its CatchHandler @ 0864f74f */
  std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)(this + 0x711ec));
                    /* try { // try from 0864f774 to 0864f778 has its CatchHandler @ 0864f77b */
  std::
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  ::~map((map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
          *)(this + 0x6ef78));
                    /* try { // try from 0864f7a0 to 0864f7a4 has its CatchHandler @ 0864f7a7 */
  UserMercenaryInfoMgr::~UserMercenaryInfoMgr((UserMercenaryInfoMgr *)(this + 0x6ef6c));
  CNetwork<4096,450000>::~CNetwork((CNetwork<4096,450000> *)(this + 0xe0));
  CUserCharacInfo::~CUserCharacInfo((CUserCharacInfo *)this);
  return;
}
```
