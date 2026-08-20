# importAchievementRewardParameter

`_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc`

`advancealtar::RewardParameter::importAchievementRewardParameter(char const*)`

| 类 | 地址 |
|---|---|
| `advancealtar::RewardParameter` | `0x0889afb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889afb0  _ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc
#           advancealtar::RewardParameter::importAchievementRewardParameter(char const*)
# range [0x0889afb0, 0x0889b543]
0889afb0 +0x000:  push   %ebp
0889afb1 +0x001:  mov    %esp,%ebp
0889afb3 +0x003:  push   %esi
0889afb4 +0x004:  push   %ebx
0889afb5 +0x005:  sub    $0xc0,%esp
0889afbb +0x00b:  lea    -0x70(%ebp),%eax
0889afbe +0x00e:  mov    %eax,(%esp)
0889afc1 +0x011:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889afc6 +0x016:  movl   $0x0,-0xc(%ebp)
0889afcd +0x01d:  movb   $0x0,-0x71(%ebp)
0889afd1 +0x021:  mov    0x8(%ebp),%eax
0889afd4 +0x024:  mov    %eax,(%esp)
0889afd7 +0x027:  call   0889af9c <_ZN12advancealtar15RewardParameter5resetEv>  ; advancealtar::RewardParameter::reset()
0889afdc +0x02c:  mov    0xc(%ebp),%eax
0889afdf +0x02f:  mov    %eax,0x4(%esp)
0889afe3 +0x033:  movl   $"",(%esp)
0889afea +0x03a:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0889afef +0x03f:  xor    $0x1,%eax
0889aff2 +0x042:  test   %al,%al
0889aff4 +0x044:  je     0889b001 <+0x51>
0889aff6 +0x046:  mov    $0x0,%ebx
0889affb +0x04b:  jmp    0889b52c <+0x57c>
0889b000 +0x050:  nop
0889b001 +0x051:  movl   $0x1,0x4(%esp)
0889b009 +0x059:  lea    -0x70(%ebp),%eax
0889b00c +0x05c:  mov    %eax,(%esp)
0889b00f +0x05f:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0889b014 +0x064:  xor    $0x1,%eax
0889b017 +0x067:  test   %al,%al
0889b019 +0x069:  jne    0889b509 <+0x559>
0889b01f +0x06f:  movl   $"[reward data]",0x4(%esp)
0889b027 +0x077:  lea    -0x70(%ebp),%eax
0889b02a +0x07a:  mov    %eax,(%esp)
0889b02d +0x07d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b032 +0x082:  test   %al,%al
0889b034 +0x084:  je     0889b000 <+0x50>
0889b036 +0x086:  lea    -0xb4(%ebp),%eax
0889b03c +0x08c:  mov    %eax,(%esp)
0889b03f +0x08f:  call   0889ad06 <_ZN12advancealtar21AchievementRewardDataC1Ev>  ; advancealtar::AchievementRewardData::AchievementRewardData()
0889b044 +0x094:  jmp    0889b05f <+0xaf>
0889b046 +0x096:  nop
0889b047 +0x097:  jmp    0889b05f <+0xaf>
0889b049 +0x099:  nop
0889b04a +0x09a:  jmp    0889b05f <+0xaf>
0889b04c +0x09c:  nop
0889b04d +0x09d:  jmp    0889b05f <+0xaf>
0889b04f +0x09f:  nop
0889b050 +0x0a0:  jmp    0889b05f <+0xaf>
0889b052 +0x0a2:  nop
0889b053 +0x0a3:  jmp    0889b05f <+0xaf>
0889b055 +0x0a5:  nop
0889b056 +0x0a6:  jmp    0889b05f <+0xaf>
0889b058 +0x0a8:  nop
0889b059 +0x0a9:  jmp    0889b05f <+0xaf>
0889b05b +0x0ab:  nop
0889b05c +0x0ac:  jmp    0889b05f <+0xaf>
0889b05e +0x0ae:  nop
0889b05f +0x0af:  movl   $0x1,0x4(%esp)
0889b067 +0x0b7:  lea    -0x70(%ebp),%eax
0889b06a +0x0ba:  mov    %eax,(%esp)
0889b06d +0x0bd:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0889b072 +0x0c2:  xor    $0x1,%eax
0889b075 +0x0c5:  test   %al,%al
0889b077 +0x0c7:  jne    0889b4d2 <+0x522>
0889b07d +0x0cd:  movl   $"[/reward data]",0x4(%esp)
0889b085 +0x0d5:  lea    -0x70(%ebp),%eax
0889b088 +0x0d8:  mov    %eax,(%esp)
0889b08b +0x0db:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b090 +0x0e0:  test   %al,%al
0889b092 +0x0e2:  je     0889b132 <+0x182>
0889b098 +0x0e8:  lea    -0x38(%ebp),%eax
0889b09b +0x0eb:  lea    -0xb4(%ebp),%edx
0889b0a1 +0x0f1:  mov    %edx,0x8(%esp)
0889b0a5 +0x0f5:  lea    -0xb4(%ebp),%edx
0889b0ab +0x0fb:  mov    %edx,0x4(%esp)
0889b0af +0x0ff:  mov    %eax,(%esp)
0889b0b2 +0x102:  call   0889c4a7 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xb70>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xb70
0889b0b7 +0x107:  sub    $0x4,%esp
0889b0ba +0x10a:  lea    -0x38(%ebp),%eax
0889b0bd +0x10d:  mov    %eax,0x4(%esp)
0889b0c1 +0x111:  lea    -0x64(%ebp),%eax
0889b0c4 +0x114:  mov    %eax,(%esp)
0889b0c7 +0x117:  call   0889c5da <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xca3>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xca3
0889b0cc +0x11c:  mov    0x8(%ebp),%edx
0889b0cf +0x11f:  lea    -0x6c(%ebp),%eax
0889b0d2 +0x122:  lea    -0x64(%ebp),%ecx
0889b0d5 +0x125:  mov    %ecx,0x8(%esp)
0889b0d9 +0x129:  mov    %edx,0x4(%esp)
0889b0dd +0x12d:  mov    %eax,(%esp)
0889b0e0 +0x130:  call   0889c614 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xcdd>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xcdd
0889b0e5 +0x135:  sub    $0x4,%esp
0889b0e8 +0x138:  lea    -0x64(%ebp),%eax
0889b0eb +0x13b:  mov    %eax,(%esp)
0889b0ee +0x13e:  call   0889ba62 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x12b>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x12b
0889b0f3 +0x143:  jmp    0889b122 <+0x172>
0889b0f5 +0x145:  mov    %edx,%ebx
0889b0f7 +0x147:  mov    %eax,%esi
0889b0f9 +0x149:  lea    -0x64(%ebp),%eax
0889b0fc +0x14c:  mov    %eax,(%esp)
0889b0ff +0x14f:  call   0889ba62 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x12b>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x12b
0889b104 +0x154:  mov    %esi,%eax
0889b106 +0x156:  mov    %ebx,%edx
0889b108 +0x158:  jmp    0889b10a <+0x15a>
0889b10a +0x15a:  mov    %edx,%ebx
0889b10c +0x15c:  mov    %eax,%esi
0889b10e +0x15e:  lea    -0x38(%ebp),%eax
0889b111 +0x161:  mov    %eax,(%esp)
0889b114 +0x164:  call   0889ba4c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x115>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x115
0889b119 +0x169:  mov    %esi,%eax
0889b11b +0x16b:  mov    %ebx,%edx
0889b11d +0x16d:  jmp    0889b4da <+0x52a>
0889b122 +0x172:  lea    -0x38(%ebp),%eax
0889b125 +0x175:  mov    %eax,(%esp)
0889b128 +0x178:  call   0889ba4c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x115>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x115
0889b12d +0x17d:  jmp    0889b4d3 <+0x523>
0889b132 +0x182:  movl   $"[type]",0x4(%esp)
0889b13a +0x18a:  lea    -0x70(%ebp),%eax
0889b13d +0x18d:  mov    %eax,(%esp)
0889b140 +0x190:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b145 +0x195:  test   %al,%al
0889b147 +0x197:  je     0889b191 <+0x1e1>
0889b149 +0x199:  lea    -0x71(%ebp),%eax
0889b14c +0x19c:  mov    %eax,(%esp)
0889b14f +0x19f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b154 +0x1a4:  mov    %eax,-0xb4(%ebp)
0889b15a +0x1aa:  movzbl -0x71(%ebp),%eax
0889b15e +0x1ae:  xor    $0x1,%eax
0889b161 +0x1b1:  test   %al,%al
0889b163 +0x1b3:  je     0889b174 <+0x1c4>
0889b165 +0x1b5:  mov    $0x362,%ebx
0889b16a +0x1ba:  mov    $0x0,%esi
0889b16f +0x1bf:  jmp    0889b4f2 <+0x542>
0889b174 +0x1c4:  mov    -0xb4(%ebp),%eax
0889b17a +0x1ca:  test   %eax,%eax
0889b17c +0x1cc:  jg     0889b046 <+0x96>
0889b182 +0x1d2:  mov    $0x364,%ebx
0889b187 +0x1d7:  mov    $0x0,%esi
0889b18c +0x1dc:  jmp    0889b4f2 <+0x542>
0889b191 +0x1e1:  movl   $"[stage difficulty]",0x4(%esp)
0889b199 +0x1e9:  lea    -0x70(%ebp),%eax
0889b19c +0x1ec:  mov    %eax,(%esp)
0889b19f +0x1ef:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b1a4 +0x1f4:  test   %al,%al
0889b1a6 +0x1f6:  je     0889b23c <+0x28c>
0889b1ac +0x1fc:  lea    -0x78(%ebp),%eax
0889b1af +0x1ff:  mov    %eax,(%esp)
0889b1b2 +0x202:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889b1b7 +0x207:  lea    -0x78(%ebp),%eax
0889b1ba +0x20a:  mov    %eax,(%esp)
0889b1bd +0x20d:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889b1c2 +0x212:  xor    $0x1,%eax
0889b1c5 +0x215:  test   %al,%al
0889b1c7 +0x217:  je     0889b1d5 <+0x225>
0889b1c9 +0x219:  mov    $0x36a,%ebx
0889b1ce +0x21e:  mov    $0x0,%esi
0889b1d3 +0x223:  jmp    0889b21f <+0x26f>
0889b1d5 +0x225:  lea    -0xb4(%ebp),%eax
0889b1db +0x22b:  add    $0x4,%eax
0889b1de +0x22e:  mov    %eax,0x4(%esp)
0889b1e2 +0x232:  lea    -0x78(%ebp),%eax
0889b1e5 +0x235:  mov    %eax,(%esp)
0889b1e8 +0x238:  call   08899038 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE>  ; advancealtar::StageDifficulty::getDifficulty(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::StageDifficulty::T&)
0889b1ed +0x23d:  xor    $0x1,%eax
0889b1f0 +0x240:  test   %al,%al
0889b1f2 +0x242:  je     0889b200 <+0x250>
0889b1f4 +0x244:  mov    $0x36d,%ebx
0889b1f9 +0x249:  mov    $0x0,%esi
0889b1fe +0x24e:  jmp    0889b21f <+0x26f>
0889b200 +0x250:  mov    $0x1,%esi
0889b205 +0x255:  jmp    0889b21f <+0x26f>
0889b207 +0x257:  mov    %edx,%ebx
0889b209 +0x259:  mov    %eax,%esi
0889b20b +0x25b:  lea    -0x78(%ebp),%eax
0889b20e +0x25e:  mov    %eax,(%esp)
0889b211 +0x261:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b216 +0x266:  mov    %esi,%eax
0889b218 +0x268:  mov    %ebx,%edx
0889b21a +0x26a:  jmp    0889b4da <+0x52a>
0889b21f +0x26f:  lea    -0x78(%ebp),%eax
0889b222 +0x272:  mov    %eax,(%esp)
0889b225 +0x275:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b22a +0x27a:  test   %esi,%esi
0889b22c +0x27c:  jne    0889b049 <+0x99>
0889b232 +0x282:  mov    $0x0,%esi
0889b237 +0x287:  jmp    0889b4f2 <+0x542>
0889b23c +0x28c:  movl   $"[stage clear count]",0x4(%esp)
0889b244 +0x294:  lea    -0x70(%ebp),%eax
0889b247 +0x297:  mov    %eax,(%esp)
0889b24a +0x29a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b24f +0x29f:  test   %al,%al
0889b251 +0x2a1:  je     0889b282 <+0x2d2>
0889b253 +0x2a3:  lea    -0x71(%ebp),%eax
0889b256 +0x2a6:  mov    %eax,(%esp)
0889b259 +0x2a9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b25e +0x2ae:  mov    %eax,-0xac(%ebp)
0889b264 +0x2b4:  movzbl -0x71(%ebp),%eax
0889b268 +0x2b8:  xor    $0x1,%eax
0889b26b +0x2bb:  test   %al,%al
0889b26d +0x2bd:  je     0889b04c <+0x9c>
0889b273 +0x2c3:  mov    $0x373,%ebx
0889b278 +0x2c8:  mov    $0x0,%esi
0889b27d +0x2cd:  jmp    0889b4f2 <+0x542>
0889b282 +0x2d2:  movl   $"[icon image]",0x4(%esp)
0889b28a +0x2da:  lea    -0x70(%ebp),%eax
0889b28d +0x2dd:  mov    %eax,(%esp)
0889b290 +0x2e0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b295 +0x2e5:  test   %al,%al
0889b297 +0x2e7:  je     0889b2c8 <+0x318>
0889b299 +0x2e9:  lea    -0x71(%ebp),%eax
0889b29c +0x2ec:  mov    %eax,(%esp)
0889b29f +0x2ef:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b2a4 +0x2f4:  mov    %eax,-0xa8(%ebp)
0889b2aa +0x2fa:  movzbl -0x71(%ebp),%eax
0889b2ae +0x2fe:  xor    $0x1,%eax
0889b2b1 +0x301:  test   %al,%al
0889b2b3 +0x303:  je     0889b04f <+0x9f>
0889b2b9 +0x309:  mov    $0x37a,%ebx
0889b2be +0x30e:  mov    $0x0,%esi
0889b2c3 +0x313:  jmp    0889b4f2 <+0x542>
0889b2c8 +0x318:  movl   $"[reward item]",0x4(%esp)
0889b2d0 +0x320:  lea    -0x70(%ebp),%eax
0889b2d3 +0x323:  mov    %eax,(%esp)
0889b2d6 +0x326:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b2db +0x32b:  test   %al,%al
0889b2dd +0x32d:  je     0889b40e <+0x45e>
0889b2e3 +0x333:  jmp    0889b2e6 <+0x336>
0889b2e5 +0x335:  nop
0889b2e6 +0x336:  lea    -0x84(%ebp),%eax
0889b2ec +0x33c:  mov    %eax,(%esp)
0889b2ef +0x33f:  call   0889b9c0 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x89>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x89
0889b2f4 +0x344:  lea    -0x88(%ebp),%eax
0889b2fa +0x34a:  mov    %eax,(%esp)
0889b2fd +0x34d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889b302 +0x352:  lea    -0x88(%ebp),%eax
0889b308 +0x358:  mov    %eax,(%esp)
0889b30b +0x35b:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889b310 +0x360:  xor    $0x1,%eax
0889b313 +0x363:  test   %al,%al
0889b315 +0x365:  je     0889b321 <+0x371>
0889b317 +0x367:  mov    $0x0,%esi
0889b31c +0x36c:  jmp    0889b3e5 <+0x435>
0889b321 +0x371:  lea    -0x84(%ebp),%eax
0889b327 +0x377:  mov    %eax,0x4(%esp)
0889b32b +0x37b:  lea    -0x88(%ebp),%eax
0889b331 +0x381:  mov    %eax,(%esp)
0889b334 +0x384:  call   0889acaa <_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE>  ; advancealtar::RewardItemType::getRewardItemType(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, advancealtar::RewardItemType::T&)
0889b339 +0x389:  mov    %al,-0x89(%ebp)
0889b33f +0x38f:  movzbl -0x89(%ebp),%eax
0889b346 +0x396:  xor    $0x1,%eax
0889b349 +0x399:  test   %al,%al
0889b34b +0x39b:  je     0889b357 <+0x3a7>
0889b34d +0x39d:  mov    $0x0,%esi
0889b352 +0x3a2:  jmp    0889b3e5 <+0x435>
0889b357 +0x3a7:  lea    -0x89(%ebp),%eax
0889b35d +0x3ad:  mov    %eax,(%esp)
0889b360 +0x3b0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b365 +0x3b5:  mov    %eax,-0x80(%ebp)
0889b368 +0x3b8:  movzbl -0x89(%ebp),%eax
0889b36f +0x3bf:  xor    $0x1,%eax
0889b372 +0x3c2:  test   %al,%al
0889b374 +0x3c4:  je     0889b37d <+0x3cd>
0889b376 +0x3c6:  mov    $0x0,%esi
0889b37b +0x3cb:  jmp    0889b3e5 <+0x435>
0889b37d +0x3cd:  lea    -0x89(%ebp),%eax
0889b383 +0x3d3:  mov    %eax,(%esp)
0889b386 +0x3d6:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889b38b +0x3db:  mov    %eax,-0x7c(%ebp)
0889b38e +0x3de:  movzbl -0x89(%ebp),%eax
0889b395 +0x3e5:  xor    $0x1,%eax
0889b398 +0x3e8:  test   %al,%al
0889b39a +0x3ea:  je     0889b3a8 <+0x3f8>
0889b39c +0x3ec:  mov    $0x391,%ebx
0889b3a1 +0x3f1:  mov    $0x1,%esi
0889b3a6 +0x3f6:  jmp    0889b3e5 <+0x435>
0889b3a8 +0x3f8:  lea    -0x84(%ebp),%eax
0889b3ae +0x3fe:  mov    %eax,0x4(%esp)
0889b3b2 +0x402:  lea    -0xb4(%ebp),%eax
0889b3b8 +0x408:  add    $0x10,%eax
0889b3bb +0x40b:  mov    %eax,(%esp)
0889b3be +0x40e:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
0889b3c3 +0x413:  mov    $0x2,%esi
0889b3c8 +0x418:  jmp    0889b3e5 <+0x435>
0889b3ca +0x41a:  mov    %edx,%ebx
0889b3cc +0x41c:  mov    %eax,%esi
0889b3ce +0x41e:  lea    -0x88(%ebp),%eax
0889b3d4 +0x424:  mov    %eax,(%esp)
0889b3d7 +0x427:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b3dc +0x42c:  mov    %esi,%eax
0889b3de +0x42e:  mov    %ebx,%edx
0889b3e0 +0x430:  jmp    0889b4da <+0x52a>
0889b3e5 +0x435:  lea    -0x88(%ebp),%eax
0889b3eb +0x43b:  mov    %eax,(%esp)
0889b3ee +0x43e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b3f3 +0x443:  test   %esi,%esi
0889b3f5 +0x445:  je     0889b052 <+0xa2>
0889b3fb +0x44b:  cmp    $0x1,%esi
0889b3fe +0x44e:  jne    0889b2e5 <+0x335>
0889b404 +0x454:  mov    $0x0,%esi
0889b409 +0x459:  jmp    0889b4f2 <+0x542>
0889b40e +0x45e:  movl   $"[reward title]",0x4(%esp)
0889b416 +0x466:  lea    -0x70(%ebp),%eax
0889b419 +0x469:  mov    %eax,(%esp)
0889b41c +0x46c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b421 +0x471:  test   %al,%al
0889b423 +0x473:  je     0889b450 <+0x4a0>
0889b425 +0x475:  lea    -0xb4(%ebp),%eax
0889b42b +0x47b:  add    $0x1c,%eax
0889b42e +0x47e:  mov    %eax,(%esp)
0889b431 +0x481:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889b436 +0x486:  xor    $0x1,%eax
0889b439 +0x489:  test   %al,%al
0889b43b +0x48b:  je     0889b055 <+0xa5>
0889b441 +0x491:  mov    $0x399,%ebx
0889b446 +0x496:  mov    $0x0,%esi
0889b44b +0x49b:  jmp    0889b4f2 <+0x542>
0889b450 +0x4a0:  movl   $"[postal title]",0x4(%esp)
0889b458 +0x4a8:  lea    -0x70(%ebp),%eax
0889b45b +0x4ab:  mov    %eax,(%esp)
0889b45e +0x4ae:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b463 +0x4b3:  test   %al,%al
0889b465 +0x4b5:  je     0889b48f <+0x4df>
0889b467 +0x4b7:  lea    -0xb4(%ebp),%eax
0889b46d +0x4bd:  add    $0x20,%eax
0889b470 +0x4c0:  mov    %eax,(%esp)
0889b473 +0x4c3:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889b478 +0x4c8:  xor    $0x1,%eax
0889b47b +0x4cb:  test   %al,%al
0889b47d +0x4cd:  je     0889b058 <+0xa8>
0889b483 +0x4d3:  mov    $0x39e,%ebx
0889b488 +0x4d8:  mov    $0x0,%esi
0889b48d +0x4dd:  jmp    0889b4f2 <+0x542>
0889b48f +0x4df:  movl   $"[postal letter]",0x4(%esp)
0889b497 +0x4e7:  lea    -0x70(%ebp),%eax
0889b49a +0x4ea:  mov    %eax,(%esp)
0889b49d +0x4ed:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889b4a2 +0x4f2:  test   %al,%al
0889b4a4 +0x4f4:  je     0889b05b <+0xab>
0889b4aa +0x4fa:  lea    -0xb4(%ebp),%eax
0889b4b0 +0x500:  add    $0x24,%eax
0889b4b3 +0x503:  mov    %eax,(%esp)
0889b4b6 +0x506:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889b4bb +0x50b:  xor    $0x1,%eax
0889b4be +0x50e:  test   %al,%al
0889b4c0 +0x510:  je     0889b05e <+0xae>
0889b4c6 +0x516:  mov    $0x3a3,%ebx
0889b4cb +0x51b:  mov    $0x0,%esi
0889b4d0 +0x520:  jmp    0889b4f2 <+0x542>
0889b4d2 +0x522:  nop
0889b4d3 +0x523:  mov    $0x1,%esi
0889b4d8 +0x528:  jmp    0889b4f2 <+0x542>
0889b4da +0x52a:  mov    %edx,%ebx
0889b4dc +0x52c:  mov    %eax,%esi
0889b4de +0x52e:  lea    -0xb4(%ebp),%eax
0889b4e4 +0x534:  mov    %eax,(%esp)
0889b4e7 +0x537:  call   0889adba <_ZN12advancealtar21AchievementRewardDataD1Ev>  ; advancealtar::AchievementRewardData::~AchievementRewardData()
0889b4ec +0x53c:  mov    %esi,%eax
0889b4ee +0x53e:  mov    %ebx,%edx
0889b4f0 +0x540:  jmp    0889b511 <+0x561>
0889b4f2 +0x542:  lea    -0xb4(%ebp),%eax
0889b4f8 +0x548:  mov    %eax,(%esp)
0889b4fb +0x54b:  call   0889adba <_ZN12advancealtar21AchievementRewardDataD1Ev>  ; advancealtar::AchievementRewardData::~AchievementRewardData()
0889b500 +0x550:  test   %esi,%esi
0889b502 +0x552:  je     0889b52c <+0x57c>
0889b504 +0x554:  jmp    0889b001 <+0x51>
0889b509 +0x559:  nop
0889b50a +0x55a:  mov    $0x0,%ebx
0889b50f +0x55f:  jmp    0889b52c <+0x57c>
0889b511 +0x561:  mov    %edx,%ebx
0889b513 +0x563:  mov    %eax,%esi
0889b515 +0x565:  lea    -0x70(%ebp),%eax
0889b518 +0x568:  mov    %eax,(%esp)
0889b51b +0x56b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b520 +0x570:  mov    %esi,%eax
0889b522 +0x572:  mov    %ebx,%edx
0889b524 +0x574:  mov    %eax,(%esp)
0889b527 +0x577:  call   08ae3750 <_Unwind_Resume>
0889b52c +0x57c:  lea    -0x70(%ebp),%eax
0889b52f +0x57f:  mov    %eax,(%esp)
0889b532 +0x582:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889b537 +0x587:  mov    %ebx,%eax
0889b539 +0x589:  lea    -0x8(%ebp),%esp
0889b53c +0x58c:  add    $0x0,%esp
0889b53f +0x58f:  pop    %ebx
0889b540 +0x590:  pop    %esi
0889b541 +0x591:  pop    %ebp
0889b542 +0x592:  ret
0889b543 +0x593:  nop
```

## 反编译 C

```c
// advancealtar::RewardParameter::importAchievementRewardParameter @ 0x889afb0

/* advancealtar::RewardParameter::importAchievementRewardParameter(char const*) */

undefined4 __thiscall
advancealtar::RewardParameter::importAchievementRewardParameter(RewardParameter *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int local_b8;
  T aTStack_b4 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> avStack_a8 [12];
  string asStack_9c [4];
  string asStack_98 [4];
  string asStack_94 [7];
  bool local_8d;
  string local_8c [4];
  _RewardItem local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  string local_7c [7];
  bool local_75;
  string local_74;
  pair local_70 [8];
  pair<int_const,advancealtar::AchievementRewardData> local_68 [44];
  pair<int,advancealtar::AchievementRewardData> local_3c [44];
  undefined4 local_10;
  
  std::string::string((string *)&local_74);
  local_10 = 0;
  local_75 = false;
                    /* try { // try from 0889afd7 to 0889b043 has its CatchHandler @ 0889b511 */
  reset(this);
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    do {
      do {
        cVar1 = ScanType((string *)&local_74,true);
        if (cVar1 != '\x01') {
          unaff_EBX = 0;
          goto LAB_0889b52c;
        }
        bVar2 = std::operator==(&local_74,"[reward data]");
      } while (!bVar2);
      AchievementRewardData::AchievementRewardData((AchievementRewardData *)&local_b8);
LAB_0889b05f:
      do {
                    /* try { // try from 0889b06d to 0889b0b6 has its CatchHandler @ 0889b4da */
        cVar1 = ScanType((string *)&local_74,true);
        if (cVar1 != '\x01') {
LAB_0889b4d3:
          bVar2 = true;
          goto LAB_0889b4f2;
        }
        bVar2 = std::operator==(&local_74,"[/reward data]");
        if (bVar2) {
          std::make_pair<int&,advancealtar::AchievementRewardData&>
                    ((int *)local_3c,(AchievementRewardData *)&local_b8);
                    /* try { // try from 0889b0c7 to 0889b0cb has its CatchHandler @ 0889b10a */
          std::pair<int_const,advancealtar::AchievementRewardData>::
          pair<int,advancealtar::AchievementRewardData>(local_68,local_3c);
                    /* try { // try from 0889b0e0 to 0889b0e4 has its CatchHandler @ 0889b0f5 */
          std::
          map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
          ::insert(local_70);
                    /* try { // try from 0889b0ee to 0889b0f2 has its CatchHandler @ 0889b10a */
          std::pair<int_const,advancealtar::AchievementRewardData>::~pair(local_68);
                    /* try { // try from 0889b128 to 0889b1b6 has its CatchHandler @ 0889b4da */
          std::pair<int,advancealtar::AchievementRewardData>::~pair(local_3c);
          goto LAB_0889b4d3;
        }
        bVar2 = std::operator==(&local_74,"[type]");
        if (!bVar2) {
          bVar2 = std::operator==(&local_74,"[stage difficulty]");
          if (bVar2) {
            std::string::string(local_7c);
                    /* try { // try from 0889b1bd to 0889b1ec has its CatchHandler @ 0889b207 */
            cVar1 = ScanStr(local_7c);
            if (cVar1 == '\x01') {
              cVar1 = StageDifficulty::getDifficulty(local_7c,aTStack_b4);
              if (cVar1 == '\x01') {
                bVar2 = true;
              }
              else {
                unaff_EBX = 0x36d;
                bVar2 = false;
              }
            }
            else {
              unaff_EBX = 0x36a;
              bVar2 = false;
            }
                    /* try { // try from 0889b225 to 0889b301 has its CatchHandler @ 0889b4da */
            std::string::~string(local_7c);
            if (!bVar2) {
              bVar2 = false;
              goto LAB_0889b4f2;
            }
          }
          else {
            bVar2 = std::operator==(&local_74,"[stage clear count]");
            if (bVar2) {
              local_b0 = ScanInt(&local_75);
              if (local_75 != true) {
                unaff_EBX = 0x373;
                bVar2 = false;
                goto LAB_0889b4f2;
              }
            }
            else {
              bVar2 = std::operator==(&local_74,"[icon image]");
              if (bVar2) {
                local_ac = ScanInt(&local_75);
                if (local_75 != true) {
                  unaff_EBX = 0x37a;
                  bVar2 = false;
                  goto LAB_0889b4f2;
                }
              }
              else {
                bVar2 = std::operator==(&local_74,"[reward item]");
                if (bVar2) {
                  while( true ) {
                    _RewardItem::_RewardItem(local_88);
                    std::string::string(local_8c);
                    /* try { // try from 0889b30b to 0889b3c2 has its CatchHandler @ 0889b3ca */
                    cVar1 = ScanStr(local_8c);
                    if (cVar1 == '\x01') {
                      local_8d = (bool)RewardItemType::getRewardItemType(local_8c,(T *)local_88);
                      if (local_8d == true) {
                        local_84 = ScanInt(&local_8d);
                        if (local_8d == true) {
                          local_80 = ScanInt(&local_8d);
                          if (local_8d == true) {
                            std::
                            vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>
                            ::push_back(avStack_a8,local_88);
                            iVar3 = 2;
                          }
                          else {
                            unaff_EBX = 0x391;
                            iVar3 = 1;
                          }
                        }
                        else {
                          iVar3 = 0;
                        }
                      }
                      else {
                        iVar3 = 0;
                      }
                    }
                    else {
                      iVar3 = 0;
                    }
                    /* try { // try from 0889b3ee to 0889b4ba has its CatchHandler @ 0889b4da */
                    std::string::~string(local_8c);
                    if (iVar3 == 0) break;
                    if (iVar3 == 1) {
                      bVar2 = false;
                      goto LAB_0889b4f2;
                    }
                  }
                }
                else {
                  bVar2 = std::operator==(&local_74,"[reward title]");
                  if (bVar2) {
                    cVar1 = ScanStr(asStack_9c);
                    if (cVar1 != '\x01') {
                      unaff_EBX = 0x399;
                      bVar2 = false;
                      goto LAB_0889b4f2;
                    }
                  }
                  else {
                    bVar2 = std::operator==(&local_74,"[postal title]");
                    if (bVar2) {
                      cVar1 = ScanStr(asStack_98);
                      if (cVar1 != '\x01') {
                        unaff_EBX = 0x39e;
                        bVar2 = false;
                        goto LAB_0889b4f2;
                      }
                    }
                    else {
                      bVar2 = std::operator==(&local_74,"[postal letter]");
                      if ((bVar2) && (cVar1 = ScanStr(asStack_94), cVar1 != '\x01')) {
                        unaff_EBX = 0x3a3;
                        bVar2 = false;
                        goto LAB_0889b4f2;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0889b05f;
        }
        local_b8 = ScanInt(&local_75);
        if (local_75 != true) {
          unaff_EBX = 0x362;
          bVar2 = false;
          goto LAB_0889b4f2;
        }
      } while (0 < local_b8);
      unaff_EBX = 0x364;
      bVar2 = false;
LAB_0889b4f2:
                    /* try { // try from 0889b4fb to 0889b4ff has its CatchHandler @ 0889b511 */
      AchievementRewardData::~AchievementRewardData((AchievementRewardData *)&local_b8);
    } while (bVar2);
  }
  else {
    unaff_EBX = 0;
  }
LAB_0889b52c:
  std::string::~string((string *)&local_74);
  return unaff_EBX;
}
```
