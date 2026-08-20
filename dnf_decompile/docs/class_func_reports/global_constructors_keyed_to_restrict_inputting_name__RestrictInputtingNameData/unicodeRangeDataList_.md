# unicodeRangeDataList_

`_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E`

`global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to restrict_inputting_name::RestrictInputtingNameData` | `0x08ac2ea3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac2ea3  _GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E
#           global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_
# range [0x08ac2ea3, 0x08ac3433]
08ac2ea3 +0x000:  push   %ebp
08ac2ea4 +0x001:  mov    %esp,%ebp
08ac2ea6 +0x003:  sub    $0x18,%esp
08ac2ea9 +0x006:  movl   $0xffff,0x4(%esp)
08ac2eb1 +0x00e:  movl   $0x1,(%esp)
08ac2eb8 +0x015:  call   08ac2e3a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08ac2ebd +0x01a:  leave
08ac2ebe +0x01b:  ret
08ac2ebf +0x01c:  nop
08ac2ec0 +0x01d:  push   %ebp
08ac2ec1 +0x01e:  mov    %esp,%ebp
08ac2ec3 +0x020:  mov    0x8(%ebp),%eax
08ac2ec6 +0x023:  mov    (%eax),%eax
08ac2ec8 +0x025:  pop    %ebp
08ac2ec9 +0x026:  ret
08ac2eca +0x027:  push   %ebp
08ac2ecb +0x028:  mov    %esp,%ebp
08ac2ecd +0x02a:  push   %esi
08ac2ece +0x02b:  push   %ebx
08ac2ecf +0x02c:  sub    $0x50,%esp
08ac2ed2 +0x02f:  mov    0xc(%ebp),%eax
08ac2ed5 +0x032:  mov    %eax,0x4(%esp)
08ac2ed9 +0x036:  movl   $"",(%esp)
08ac2ee0 +0x03d:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08ac2ee5 +0x042:  xor    $0x1,%eax
08ac2ee8 +0x045:  test   %al,%al
08ac2eea +0x047:  je     08ac2ef6 <+0x53>
08ac2eec +0x049:  mov    $0x0,%ebx
08ac2ef1 +0x04e:  jmp    08ac315c <+0x2b9>
08ac2ef6 +0x053:  lea    -0x18(%ebp),%eax
08ac2ef9 +0x056:  mov    %eax,(%esp)
08ac2efc +0x059:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac2f01 +0x05e:  jmp    08ac2f04 <+0x61>
08ac2f03 +0x060:  nop
08ac2f04 +0x061:  movl   $0x1,0x4(%esp)
08ac2f0c +0x069:  lea    -0x18(%ebp),%eax
08ac2f0f +0x06c:  mov    %eax,(%esp)
08ac2f12 +0x06f:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac2f17 +0x074:  xor    $0x1,%eax
08ac2f1a +0x077:  test   %al,%al
08ac2f1c +0x079:  je     08ac2f4a <+0xa7>
08ac2f1e +0x07b:  movl   $0x4,(%esp)
08ac2f25 +0x082:  call   08725800 <__cxa_allocate_exception>
08ac2f2a +0x087:  mov    %eax,%edx
08ac2f2c +0x089:  movl   $"[allow unicode range] 태그가 아님\n",(%edx)
08ac2f32 +0x08f:  movl   $0x0,0x8(%esp)
08ac2f3a +0x097:  movl   $&_ZTIPKc,0x4(%esp)
08ac2f42 +0x09f:  mov    %eax,(%esp)
08ac2f45 +0x0a2:  call   08724c50 <__cxa_throw>
08ac2f4a +0x0a7:  movl   $"[allow unicode range]",0x4(%esp)
08ac2f52 +0x0af:  lea    -0x18(%ebp),%eax
08ac2f55 +0x0b2:  mov    %eax,(%esp)
08ac2f58 +0x0b5:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac2f5d +0x0ba:  test   %al,%al
08ac2f5f +0x0bc:  je     08ac2f03 <+0x60>
08ac2f61 +0x0be:  lea    -0x24(%ebp),%eax
08ac2f64 +0x0c1:  mov    %eax,(%esp)
08ac2f67 +0x0c4:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08ac2f6c +0x0c9:  jmp    08ac2f6f <+0xcc>
08ac2f6e +0x0cb:  nop
08ac2f6f +0x0cc:  movl   $0x1,0x4(%esp)
08ac2f77 +0x0d4:  lea    -0x18(%ebp),%eax
08ac2f7a +0x0d7:  mov    %eax,(%esp)
08ac2f7d +0x0da:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08ac2f82 +0x0df:  xor    $0x1,%eax
08ac2f85 +0x0e2:  test   %al,%al
08ac2f87 +0x0e4:  je     08ac2fb5 <+0x112>
08ac2f89 +0x0e6:  movl   $0x4,(%esp)
08ac2f90 +0x0ed:  call   08725800 <__cxa_allocate_exception>
08ac2f95 +0x0f2:  mov    %eax,%edx
08ac2f97 +0x0f4:  movl   $"태그가 와야 할 자리에 다른 값이 파싱 됨\n",(%edx)
08ac2f9d +0x0fa:  movl   $0x0,0x8(%esp)
08ac2fa5 +0x102:  movl   $&_ZTIPKc,0x4(%esp)
08ac2fad +0x10a:  mov    %eax,(%esp)
08ac2fb0 +0x10d:  call   08724c50 <__cxa_throw>
08ac2fb5 +0x112:  movl   $"[/allow unicode range]",0x4(%esp)
08ac2fbd +0x11a:  lea    -0x18(%ebp),%eax
08ac2fc0 +0x11d:  mov    %eax,(%esp)
08ac2fc3 +0x120:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac2fc8 +0x125:  test   %al,%al
08ac2fca +0x127:  je     08ac2fe3 <+0x140>
08ac2fcc +0x129:  lea    -0x24(%ebp),%eax
08ac2fcf +0x12c:  mov    %eax,0x4(%esp)
08ac2fd3 +0x130:  mov    0x10(%ebp),%eax
08ac2fd6 +0x133:  mov    %eax,(%esp)
08ac2fd9 +0x136:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
08ac2fde +0x13b:  jmp    08ac30bb <+0x218>
08ac2fe3 +0x140:  movl   $"[range]",0x4(%esp)
08ac2feb +0x148:  lea    -0x18(%ebp),%eax
08ac2fee +0x14b:  mov    %eax,(%esp)
08ac2ff1 +0x14e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08ac2ff6 +0x153:  test   %al,%al
08ac2ff8 +0x155:  je     08ac2f6e <+0xcb>
08ac2ffe +0x15b:  movl   $0x0,-0x28(%ebp)
08ac3005 +0x162:  movl   $0x0,-0x2c(%ebp)
08ac300c +0x169:  lea    -0x28(%ebp),%eax
08ac300f +0x16c:  mov    %eax,(%esp)
08ac3012 +0x16f:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ac3017 +0x174:  xor    $0x1,%eax
08ac301a +0x177:  test   %al,%al
08ac301c +0x179:  je     08ac304a <+0x1a7>
08ac301e +0x17b:  movl   $0x4,(%esp)
08ac3025 +0x182:  call   08725800 <__cxa_allocate_exception>
08ac302a +0x187:  mov    %eax,%edx
08ac302c +0x189:  movl   $"range의 left값을 읽어 오다 실패\n",(%edx)
08ac3032 +0x18f:  movl   $0x0,0x8(%esp)
08ac303a +0x197:  movl   $&_ZTIPKc,0x4(%esp)
08ac3042 +0x19f:  mov    %eax,(%esp)
08ac3045 +0x1a2:  call   08724c50 <__cxa_throw>
08ac304a +0x1a7:  lea    -0x2c(%ebp),%eax
08ac304d +0x1aa:  mov    %eax,(%esp)
08ac3050 +0x1ad:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ac3055 +0x1b2:  xor    $0x1,%eax
08ac3058 +0x1b5:  test   %al,%al
08ac305a +0x1b7:  je     08ac3088 <+0x1e5>
08ac305c +0x1b9:  movl   $0x4,(%esp)
08ac3063 +0x1c0:  call   08725800 <__cxa_allocate_exception>
08ac3068 +0x1c5:  mov    %eax,%edx
08ac306a +0x1c7:  movl   $"range의 right값을 읽어 오다 실패\n",(%edx)
08ac3070 +0x1cd:  movl   $0x0,0x8(%esp)
08ac3078 +0x1d5:  movl   $&_ZTIPKc,0x4(%esp)
08ac3080 +0x1dd:  mov    %eax,(%esp)
08ac3083 +0x1e0:  call   08724c50 <__cxa_throw>
08ac3088 +0x1e5:  lea    -0x14(%ebp),%eax
08ac308b +0x1e8:  lea    -0x2c(%ebp),%edx
08ac308e +0x1eb:  mov    %edx,0x8(%esp)
08ac3092 +0x1ef:  lea    -0x28(%ebp),%edx
08ac3095 +0x1f2:  mov    %edx,0x4(%esp)
08ac3099 +0x1f6:  mov    %eax,(%esp)
08ac309c +0x1f9:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08ac30a1 +0x1fe:  sub    $0x4,%esp
08ac30a4 +0x201:  lea    -0x14(%ebp),%eax
08ac30a7 +0x204:  mov    %eax,0x4(%esp)
08ac30ab +0x208:  lea    -0x24(%ebp),%eax
08ac30ae +0x20b:  mov    %eax,(%esp)
08ac30b1 +0x20e:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08ac30b6 +0x213:  jmp    08ac2f6f <+0xcc>
08ac30bb +0x218:  lea    -0x24(%ebp),%eax
08ac30be +0x21b:  mov    %eax,(%esp)
08ac30c1 +0x21e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08ac30c6 +0x223:  jmp    08ac2f04 <+0x61>
08ac30cb +0x228:  mov    %edx,%ebx
08ac30cd +0x22a:  mov    %eax,%esi
08ac30cf +0x22c:  lea    -0x24(%ebp),%eax
08ac30d2 +0x22f:  mov    %eax,(%esp)
08ac30d5 +0x232:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08ac30da +0x237:  mov    %esi,%eax
08ac30dc +0x239:  mov    %ebx,%edx
08ac30de +0x23b:  jmp    08ac30e0 <+0x23d>
08ac30e0 +0x23d:  cmp    $0x1,%edx
08ac30e3 +0x240:  jne    08ac3136 <+0x293>
08ac30e5 +0x242:  mov    %eax,(%esp)
08ac30e8 +0x245:  call   08725ce0 <__cxa_begin_catch>
08ac30ed +0x24a:  mov    %eax,-0xc(%ebp)
08ac30f0 +0x24d:  mov    -0xc(%ebp),%eax
08ac30f3 +0x250:  mov    %eax,0x10(%esp)
08ac30f7 +0x254:  movl   $0x48,0xc(%esp)
08ac30ff +0x25c:  movl   $&_ZZN23restrict_inputting_name25RestrictInputtingNameData22importUnicodeRangeDataEPKcPSt6vectorISt4pairIiiESaIS5_EEE12__FUNCTION__,0x8(%esp)
08ac3107 +0x264:  movl   $"../../RestrictInputtingName.cpp",0x4(%esp)
08ac310f +0x26c:  movl   $0x0,(%esp)
08ac3116 +0x273:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08ac311b +0x278:  mov    $0x0,%ebx
08ac3120 +0x27d:  call   08725c30 <__cxa_end_catch>
08ac3125 +0x282:  jmp    08ac3151 <+0x2ae>
08ac3127 +0x284:  mov    %edx,%ebx
08ac3129 +0x286:  mov    %eax,%esi
08ac312b +0x288:  call   08725c30 <__cxa_end_catch>
08ac3130 +0x28d:  mov    %esi,%eax
08ac3132 +0x28f:  mov    %ebx,%edx
08ac3134 +0x291:  jmp    08ac3136 <+0x293>
08ac3136 +0x293:  mov    %edx,%ebx
08ac3138 +0x295:  mov    %eax,%esi
08ac313a +0x297:  lea    -0x18(%ebp),%eax
08ac313d +0x29a:  mov    %eax,(%esp)
08ac3140 +0x29d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac3145 +0x2a2:  mov    %esi,%eax
08ac3147 +0x2a4:  mov    %ebx,%edx
08ac3149 +0x2a6:  mov    %eax,(%esp)
08ac314c +0x2a9:  call   08ae3750 <_Unwind_Resume>
08ac3151 +0x2ae:  lea    -0x18(%ebp),%eax
08ac3154 +0x2b1:  mov    %eax,(%esp)
08ac3157 +0x2b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac315c +0x2b9:  mov    %ebx,%eax
08ac315e +0x2bb:  lea    -0x8(%ebp),%esp
08ac3161 +0x2be:  add    $0x0,%esp
08ac3164 +0x2c1:  pop    %ebx
08ac3165 +0x2c2:  pop    %esi
08ac3166 +0x2c3:  pop    %ebp
08ac3167 +0x2c4:  ret
08ac3168 +0x2c5:  push   %ebp
08ac3169 +0x2c6:  mov    %esp,%ebp
08ac316b +0x2c8:  sub    $0x18,%esp
08ac316e +0x2cb:  movzbl &_ZN23restrict_inputting_name25RestrictInputtingNameData9isLoaded_E,%eax
08ac3175 +0x2d2:  xor    $0x1,%eax
08ac3178 +0x2d5:  test   %al,%al
08ac317a +0x2d7:  je     08ac319d <+0x2fa>
08ac317c +0x2d9:  mov    &_ZZN23restrict_inputting_name25RestrictInputtingNameDataC1EvE10scriptPath,%eax
08ac3181 +0x2de:  movl   $&_ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E,0x8(%esp)
08ac3189 +0x2e6:  mov    %eax,0x4(%esp)
08ac318d +0x2ea:  mov    0x8(%ebp),%eax
08ac3190 +0x2ed:  mov    %eax,(%esp)
08ac3193 +0x2f0:  call   08ac2eca <+0x27>
08ac3198 +0x2f5:  mov    %al,&_ZN23restrict_inputting_name25RestrictInputtingNameData9isLoaded_E
08ac319d +0x2fa:  leave
08ac319e +0x2fb:  ret
08ac319f +0x2fc:  nop
08ac31a0 +0x2fd:  push   %ebp
08ac31a1 +0x2fe:  mov    %esp,%ebp
08ac31a3 +0x300:  sub    $0x28,%esp
08ac31a6 +0x303:  movl   $0x0,-0xc(%ebp)
08ac31ad +0x30a:  jmp    08ac31ff <+0x35c>
08ac31af +0x30c:  mov    -0xc(%ebp),%eax
08ac31b2 +0x30f:  mov    %eax,0x4(%esp)
08ac31b6 +0x313:  movl   $&_ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E,(%esp)
08ac31bd +0x31a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08ac31c2 +0x31f:  mov    (%eax),%eax
08ac31c4 +0x321:  cmp    0xc(%ebp),%eax
08ac31c7 +0x324:  jg     08ac31eb <+0x348>
08ac31c9 +0x326:  mov    -0xc(%ebp),%eax
08ac31cc +0x329:  mov    %eax,0x4(%esp)
08ac31d0 +0x32d:  movl   $&_ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E,(%esp)
08ac31d7 +0x334:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08ac31dc +0x339:  mov    0x4(%eax),%eax
08ac31df +0x33c:  cmp    0xc(%ebp),%eax
08ac31e2 +0x33f:  jl     08ac31eb <+0x348>
08ac31e4 +0x341:  mov    $0x1,%eax
08ac31e9 +0x346:  jmp    08ac31f0 <+0x34d>
08ac31eb +0x348:  mov    $0x0,%eax
08ac31f0 +0x34d:  test   %al,%al
08ac31f2 +0x34f:  je     08ac31fb <+0x358>
08ac31f4 +0x351:  mov    $0x1,%eax
08ac31f9 +0x356:  jmp    08ac321a <+0x377>
08ac31fb +0x358:  addl   $0x1,-0xc(%ebp)
08ac31ff +0x35c:  movl   $&_ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E,(%esp)
08ac3206 +0x363:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08ac320b +0x368:  cmp    -0xc(%ebp),%eax
08ac320e +0x36b:  seta   %al
08ac3211 +0x36e:  test   %al,%al
08ac3213 +0x370:  jne    08ac31af <+0x30c>
08ac3215 +0x372:  mov    $0x0,%eax
08ac321a +0x377:  leave
08ac321b +0x378:  ret
08ac321c +0x379:  push   %ebp
08ac321d +0x37a:  mov    %esp,%ebp
08ac321f +0x37c:  sub    $0x28,%esp
08ac3222 +0x37f:  mov    0x8(%ebp),%eax
08ac3225 +0x382:  mov    0xc(%ebp),%edx
08ac3228 +0x385:  mov    %edx,0x4(%esp)
08ac322c +0x389:  mov    %eax,(%esp)
08ac322f +0x38c:  call   08ac31a0 <+0x2fd>
08ac3234 +0x391:  xor    $0x1,%eax
08ac3237 +0x394:  mov    %al,-0x9(%ebp)
08ac323a +0x397:  movzbl -0x9(%ebp),%eax
08ac323e +0x39b:  leave
08ac323f +0x39c:  ret
08ac3240 +0x39d:  push   %ebp
08ac3241 +0x39e:  mov    %esp,%ebp
08ac3243 +0x3a0:  sub    $0x18,%esp
08ac3246 +0x3a3:  mov    0x8(%ebp),%eax
08ac3249 +0x3a6:  mov    %eax,(%esp)
08ac324c +0x3a9:  call   08ac3168 <+0x2c5>
08ac3251 +0x3ae:  leave
08ac3252 +0x3af:  ret
08ac3253 +0x3b0:  push   %ebp
08ac3254 +0x3b1:  mov    %esp,%ebp
08ac3256 +0x3b3:  sub    $0x18,%esp
08ac3259 +0x3b6:  movzbl 0x10(%ebp),%eax
08ac325d +0x3ba:  mov    %al,0x8(%esp)
08ac3261 +0x3be:  mov    0xc(%ebp),%eax
08ac3264 +0x3c1:  mov    %eax,0x4(%esp)
08ac3268 +0x3c5:  mov    0x8(%ebp),%eax
08ac326b +0x3c8:  mov    %eax,(%esp)
08ac326e +0x3cb:  call   08ac3278 <+0x3d5>
08ac3273 +0x3d0:  xor    $0x1,%eax
08ac3276 +0x3d3:  leave
08ac3277 +0x3d4:  ret
08ac3278 +0x3d5:  push   %ebp
08ac3279 +0x3d6:  mov    %esp,%ebp
08ac327b +0x3d8:  sub    $0x18,%esp
08ac327e +0x3db:  movzbl 0x10(%ebp),%eax
08ac3282 +0x3df:  mov    %al,0x8(%esp)
08ac3286 +0x3e3:  mov    0xc(%ebp),%eax
08ac3289 +0x3e6:  mov    %eax,0x4(%esp)
08ac328d +0x3ea:  mov    0x8(%ebp),%eax
08ac3290 +0x3ed:  mov    %eax,(%esp)
08ac3293 +0x3f0:  call   08ac32a0 <+0x3fd>
08ac3298 +0x3f5:  cmp    0xc(%ebp),%eax
08ac329b +0x3f8:  sete   %al
08ac329e +0x3fb:  leave
08ac329f +0x3fc:  ret
08ac32a0 +0x3fd:  push   %ebp
08ac32a1 +0x3fe:  mov    %esp,%ebp
08ac32a3 +0x400:  push   %ebx
08ac32a4 +0x401:  sub    $0x24,%esp
08ac32a7 +0x404:  lea    -0x9(%ebp),%eax
08ac32aa +0x407:  lea    0x8(%ebp),%edx
08ac32ad +0x40a:  mov    %edx,0x4(%esp)
08ac32b1 +0x40e:  mov    %eax,(%esp)
08ac32b4 +0x411:  call   08ac32df <+0x43c>
08ac32b9 +0x416:  sub    $0x4,%esp
08ac32bc +0x419:  mov    0x8(%ebp),%eax
08ac32bf +0x41c:  mov    %bl,0xc(%esp)
08ac32c3 +0x420:  movzbl 0x10(%ebp),%edx
08ac32c7 +0x424:  mov    %dl,0x8(%esp)
08ac32cb +0x428:  mov    0xc(%ebp),%edx
08ac32ce +0x42b:  mov    %edx,0x4(%esp)
08ac32d2 +0x42f:  mov    %eax,(%esp)
08ac32d5 +0x432:  call   08ac32e9 <+0x446>
08ac32da +0x437:  mov    -0x4(%ebp),%ebx
08ac32dd +0x43a:  leave
08ac32de +0x43b:  ret
08ac32df +0x43c:  push   %ebp
08ac32e0 +0x43d:  mov    %esp,%ebp
08ac32e2 +0x43f:  mov    0x8(%ebp),%eax
08ac32e5 +0x442:  pop    %ebp
08ac32e6 +0x443:  ret    $0x4
08ac32e9 +0x446:  push   %ebp
08ac32ea +0x447:  mov    %esp,%ebp
08ac32ec +0x449:  sub    $0x28,%esp
08ac32ef +0x44c:  mov    0xc(%ebp),%edx
08ac32f2 +0x44f:  mov    0x8(%ebp),%eax
08ac32f5 +0x452:  mov    %edx,%ecx
08ac32f7 +0x454:  sub    %eax,%ecx
08ac32f9 +0x456:  mov    %ecx,%eax
08ac32fb +0x458:  sar    $0x2,%eax
08ac32fe +0x45b:  sar    $0x2,%eax
08ac3301 +0x45e:  mov    %eax,-0xc(%ebp)
08ac3304 +0x461:  jmp    08ac339d <+0x4fa>
08ac3309 +0x466:  mov    0x8(%ebp),%eax
08ac330c +0x469:  mov    (%eax),%eax
08ac330e +0x46b:  mov    %eax,0x4(%esp)
08ac3312 +0x46f:  lea    0x10(%ebp),%eax
08ac3315 +0x472:  mov    %eax,(%esp)
08ac3318 +0x475:  call   08ac321c <+0x379>
08ac331d +0x47a:  test   %al,%al
08ac331f +0x47c:  je     08ac3329 <+0x486>
08ac3321 +0x47e:  mov    0x8(%ebp),%eax
08ac3324 +0x481:  jmp    08ac3432 <+0x58f>
08ac3329 +0x486:  addl   $0x4,0x8(%ebp)
08ac332d +0x48a:  mov    0x8(%ebp),%eax
08ac3330 +0x48d:  mov    (%eax),%eax
08ac3332 +0x48f:  mov    %eax,0x4(%esp)
08ac3336 +0x493:  lea    0x10(%ebp),%eax
08ac3339 +0x496:  mov    %eax,(%esp)
08ac333c +0x499:  call   08ac321c <+0x379>
08ac3341 +0x49e:  test   %al,%al
08ac3343 +0x4a0:  je     08ac334d <+0x4aa>
08ac3345 +0x4a2:  mov    0x8(%ebp),%eax
08ac3348 +0x4a5:  jmp    08ac3432 <+0x58f>
08ac334d +0x4aa:  addl   $0x4,0x8(%ebp)
08ac3351 +0x4ae:  mov    0x8(%ebp),%eax
08ac3354 +0x4b1:  mov    (%eax),%eax
08ac3356 +0x4b3:  mov    %eax,0x4(%esp)
08ac335a +0x4b7:  lea    0x10(%ebp),%eax
08ac335d +0x4ba:  mov    %eax,(%esp)
08ac3360 +0x4bd:  call   08ac321c <+0x379>
08ac3365 +0x4c2:  test   %al,%al
08ac3367 +0x4c4:  je     08ac3371 <+0x4ce>
08ac3369 +0x4c6:  mov    0x8(%ebp),%eax
08ac336c +0x4c9:  jmp    08ac3432 <+0x58f>
08ac3371 +0x4ce:  addl   $0x4,0x8(%ebp)
08ac3375 +0x4d2:  mov    0x8(%ebp),%eax
08ac3378 +0x4d5:  mov    (%eax),%eax
08ac337a +0x4d7:  mov    %eax,0x4(%esp)
08ac337e +0x4db:  lea    0x10(%ebp),%eax
08ac3381 +0x4de:  mov    %eax,(%esp)
08ac3384 +0x4e1:  call   08ac321c <+0x379>
08ac3389 +0x4e6:  test   %al,%al
08ac338b +0x4e8:  je     08ac3395 <+0x4f2>
08ac338d +0x4ea:  mov    0x8(%ebp),%eax
08ac3390 +0x4ed:  jmp    08ac3432 <+0x58f>
08ac3395 +0x4f2:  addl   $0x4,0x8(%ebp)
08ac3399 +0x4f6:  subl   $0x1,-0xc(%ebp)
08ac339d +0x4fa:  cmpl   $0x0,-0xc(%ebp)
08ac33a1 +0x4fe:  setg   %al
08ac33a4 +0x501:  test   %al,%al
08ac33a6 +0x503:  jne    08ac3309 <+0x466>
08ac33ac +0x509:  mov    0xc(%ebp),%edx
08ac33af +0x50c:  mov    0x8(%ebp),%eax
08ac33b2 +0x50f:  mov    %edx,%ecx
08ac33b4 +0x511:  sub    %eax,%ecx
08ac33b6 +0x513:  mov    %ecx,%eax
08ac33b8 +0x515:  sar    $0x2,%eax
08ac33bb +0x518:  cmp    $0x2,%eax
08ac33be +0x51b:  je     08ac33ed <+0x54a>
08ac33c0 +0x51d:  cmp    $0x3,%eax
08ac33c3 +0x520:  je     08ac33cc <+0x529>
08ac33c5 +0x522:  cmp    $0x1,%eax
08ac33c8 +0x525:  je     08ac340e <+0x56b>
08ac33ca +0x527:  jmp    08ac342f <+0x58c>
08ac33cc +0x529:  mov    0x8(%ebp),%eax
08ac33cf +0x52c:  mov    (%eax),%eax
08ac33d1 +0x52e:  mov    %eax,0x4(%esp)
08ac33d5 +0x532:  lea    0x10(%ebp),%eax
08ac33d8 +0x535:  mov    %eax,(%esp)
08ac33db +0x538:  call   08ac321c <+0x379>
08ac33e0 +0x53d:  test   %al,%al
08ac33e2 +0x53f:  je     08ac33e9 <+0x546>
08ac33e4 +0x541:  mov    0x8(%ebp),%eax
08ac33e7 +0x544:  jmp    08ac3432 <+0x58f>
08ac33e9 +0x546:  addl   $0x4,0x8(%ebp)
08ac33ed +0x54a:  mov    0x8(%ebp),%eax
08ac33f0 +0x54d:  mov    (%eax),%eax
08ac33f2 +0x54f:  mov    %eax,0x4(%esp)
08ac33f6 +0x553:  lea    0x10(%ebp),%eax
08ac33f9 +0x556:  mov    %eax,(%esp)
08ac33fc +0x559:  call   08ac321c <+0x379>
08ac3401 +0x55e:  test   %al,%al
08ac3403 +0x560:  je     08ac340a <+0x567>
08ac3405 +0x562:  mov    0x8(%ebp),%eax
08ac3408 +0x565:  jmp    08ac3432 <+0x58f>
08ac340a +0x567:  addl   $0x4,0x8(%ebp)
08ac340e +0x56b:  mov    0x8(%ebp),%eax
08ac3411 +0x56e:  mov    (%eax),%eax
08ac3413 +0x570:  mov    %eax,0x4(%esp)
08ac3417 +0x574:  lea    0x10(%ebp),%eax
08ac341a +0x577:  mov    %eax,(%esp)
08ac341d +0x57a:  call   08ac321c <+0x379>
08ac3422 +0x57f:  test   %al,%al
08ac3424 +0x581:  je     08ac342b <+0x588>
08ac3426 +0x583:  mov    0x8(%ebp),%eax
08ac3429 +0x586:  jmp    08ac3432 <+0x58f>
08ac342b +0x588:  addl   $0x4,0x8(%ebp)
08ac342f +0x58c:  mov    0xc(%ebp),%eax
08ac3432 +0x58f:  leave
08ac3433 +0x590:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8ac2ea3

/* restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_ */

void restrict_inputting_name::RestrictInputtingNameData::_GLOBAL__I_unicodeRangeDataList_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
