# importEventCharacterParameterScript

`_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc`

`EventCharacterParameterScript::importEventCharacterParameterScript(char const*)`

| 类 | 地址 |
|---|---|
| `EventCharacterParameterScript` | `0x0895b006` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0895b006  _ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc
#           EventCharacterParameterScript::importEventCharacterParameterScript(char const*)
# range [0x0895b006, 0x0895b721]
0895b006 +0x000:  push   %ebp
0895b007 +0x001:  mov    %esp,%ebp
0895b009 +0x003:  push   %esi
0895b00a +0x004:  push   %ebx
0895b00b +0x005:  sub    $0x100,%esp
0895b011 +0x00b:  mov    0xc(%ebp),%eax
0895b014 +0x00e:  mov    %eax,0x4(%esp)
0895b018 +0x012:  movl   $&g_eventCharacterScriptBaseDirectory,(%esp)
0895b01f +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0895b024 +0x01e:  xor    $0x1,%eax
0895b027 +0x021:  test   %al,%al
0895b029 +0x023:  je     0895b035 <+0x2f>
0895b02b +0x025:  mov    $0x0,%ebx
0895b030 +0x02a:  jmp    0895b716 <+0x710>
0895b035 +0x02f:  lea    -0x94(%ebp),%eax
0895b03b +0x035:  mov    %eax,(%esp)
0895b03e +0x038:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0895b043 +0x03d:  movl   $0x0,-0x98(%ebp)
0895b04d +0x047:  movl   $0x0,-0x9c(%ebp)
0895b057 +0x051:  lea    -0xb4(%ebp),%eax
0895b05d +0x057:  mov    %eax,(%esp)
0895b060 +0x05a:  call   0895b890 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x1c>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x1c
0895b065 +0x05f:  movl   $0x1,0x4(%esp)
0895b06d +0x067:  lea    -0x94(%ebp),%eax
0895b073 +0x06d:  mov    %eax,(%esp)
0895b076 +0x070:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0895b07b +0x075:  xor    $0x1,%eax
0895b07e +0x078:  test   %al,%al
0895b080 +0x07a:  jne    0895b6ba <+0x6b4>
0895b086 +0x080:  movl   $"[level]",0x4(%esp)
0895b08e +0x088:  lea    -0x94(%ebp),%eax
0895b094 +0x08e:  mov    %eax,(%esp)
0895b097 +0x091:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b09c +0x096:  test   %al,%al
0895b09e +0x098:  je     0895b109 <+0x103>
0895b0a0 +0x09a:  lea    -0xb5(%ebp),%eax
0895b0a6 +0x0a0:  mov    %eax,(%esp)
0895b0a9 +0x0a3:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b0ae +0x0a8:  mov    %eax,-0x9c(%ebp)
0895b0b4 +0x0ae:  movzbl -0xb5(%ebp),%eax
0895b0bb +0x0b5:  xor    $0x1,%eax
0895b0be +0x0b8:  test   %al,%al
0895b0c0 +0x0ba:  je     0895b109 <+0x103>
0895b0c2 +0x0bc:  mov    -0x98(%ebp),%eax
0895b0c8 +0x0c2:  mov    %eax,0x18(%esp)
0895b0cc +0x0c6:  mov    0xc(%ebp),%eax
0895b0cf +0x0c9:  mov    %eax,0x14(%esp)
0895b0d3 +0x0cd:  movl   $"file name(%s) job name [%d]",0x10(%esp)
0895b0db +0x0d5:  movl   $0x5f,0xc(%esp)
0895b0e3 +0x0dd:  movl   $&_ZZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKcE12__FUNCTION__,0x8(%esp)
0895b0eb +0x0e5:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895b0f3 +0x0ed:  movl   $0x0,(%esp)
0895b0fa +0x0f4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895b0ff +0x0f9:  mov    $0x0,%ebx
0895b104 +0x0fe:  jmp    0895b6da <+0x6d4>
0895b109 +0x103:  lea    -0xd4(%ebp),%eax
0895b10f +0x109:  mov    %eax,(%esp)
0895b112 +0x10c:  call   0848ecce <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x1c>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x1c
0895b117 +0x111:  jmp    0895b123 <+0x11d>
0895b119 +0x113:  nop
0895b11a +0x114:  jmp    0895b123 <+0x11d>
0895b11c +0x116:  nop
0895b11d +0x117:  jmp    0895b123 <+0x11d>
0895b11f +0x119:  nop
0895b120 +0x11a:  jmp    0895b123 <+0x11d>
0895b122 +0x11c:  nop
0895b123 +0x11d:  movl   $0x1,0x4(%esp)
0895b12b +0x125:  lea    -0x94(%ebp),%eax
0895b131 +0x12b:  mov    %eax,(%esp)
0895b134 +0x12e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0895b139 +0x133:  xor    $0x1,%eax
0895b13c +0x136:  test   %al,%al
0895b13e +0x138:  jne    0895b680 <+0x67a>
0895b144 +0x13e:  movl   $"[job const]",0x4(%esp)
0895b14c +0x146:  lea    -0x94(%ebp),%eax
0895b152 +0x14c:  mov    %eax,(%esp)
0895b155 +0x14f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b15a +0x154:  test   %al,%al
0895b15c +0x156:  je     0895b185 <+0x17f>
0895b15e +0x158:  lea    -0xb5(%ebp),%eax
0895b164 +0x15e:  mov    %eax,(%esp)
0895b167 +0x161:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b16c +0x166:  mov    %eax,-0x98(%ebp)
0895b172 +0x16c:  movzbl -0xb5(%ebp),%eax
0895b179 +0x173:  xor    $0x1,%eax
0895b17c +0x176:  test   %al,%al
0895b17e +0x178:  je     0895b119 <+0x113>
0895b180 +0x17a:  jmp    0895b684 <+0x67e>
0895b185 +0x17f:  movl   $"[grow type]",0x4(%esp)
0895b18d +0x187:  lea    -0x94(%ebp),%eax
0895b193 +0x18d:  mov    %eax,(%esp)
0895b196 +0x190:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b19b +0x195:  test   %al,%al
0895b19d +0x197:  je     0895b211 <+0x20b>
0895b19f +0x199:  lea    -0xb5(%ebp),%eax
0895b1a5 +0x19f:  mov    %eax,(%esp)
0895b1a8 +0x1a2:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b1ad +0x1a7:  mov    %al,-0xd4(%ebp)
0895b1b3 +0x1ad:  movzbl -0xb5(%ebp),%eax
0895b1ba +0x1b4:  xor    $0x1,%eax
0895b1bd +0x1b7:  test   %al,%al
0895b1bf +0x1b9:  je     0895b11c <+0x116>
0895b1c5 +0x1bf:  mov    -0x98(%ebp),%eax
0895b1cb +0x1c5:  mov    %eax,0x18(%esp)
0895b1cf +0x1c9:  mov    0xc(%ebp),%eax
0895b1d2 +0x1cc:  mov    %eax,0x14(%esp)
0895b1d6 +0x1d0:  movl   $"file name(%s) job name [%d]",0x10(%esp)
0895b1de +0x1d8:  movl   $0x79,0xc(%esp)
0895b1e6 +0x1e0:  movl   $&_ZZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKcE12__FUNCTION__,0x8(%esp)
0895b1ee +0x1e8:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895b1f6 +0x1f0:  movl   $0x0,(%esp)
0895b1fd +0x1f7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895b202 +0x1fc:  mov    $0x0,%ebx
0895b207 +0x201:  mov    $0x0,%esi
0895b20c +0x206:  jmp    0895b6a3 <+0x69d>
0895b211 +0x20b:  movl   $"[awakening type]",0x4(%esp)
0895b219 +0x213:  lea    -0x94(%ebp),%eax
0895b21f +0x219:  mov    %eax,(%esp)
0895b222 +0x21c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b227 +0x221:  test   %al,%al
0895b229 +0x223:  je     0895b29d <+0x297>
0895b22b +0x225:  lea    -0xb5(%ebp),%eax
0895b231 +0x22b:  mov    %eax,(%esp)
0895b234 +0x22e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b239 +0x233:  mov    %al,-0xd3(%ebp)
0895b23f +0x239:  movzbl -0xb5(%ebp),%eax
0895b246 +0x240:  xor    $0x1,%eax
0895b249 +0x243:  test   %al,%al
0895b24b +0x245:  je     0895b11f <+0x119>
0895b251 +0x24b:  mov    -0x98(%ebp),%eax
0895b257 +0x251:  mov    %eax,0x18(%esp)
0895b25b +0x255:  mov    0xc(%ebp),%eax
0895b25e +0x258:  mov    %eax,0x14(%esp)
0895b262 +0x25c:  movl   $"file name(%s) job name [%d]",0x10(%esp)
0895b26a +0x264:  movl   $0x82,0xc(%esp)
0895b272 +0x26c:  movl   $&_ZZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKcE12__FUNCTION__,0x8(%esp)
0895b27a +0x274:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895b282 +0x27c:  movl   $0x0,(%esp)
0895b289 +0x283:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895b28e +0x288:  mov    $0x0,%ebx
0895b293 +0x28d:  mov    $0x0,%esi
0895b298 +0x292:  jmp    0895b6a3 <+0x69d>
0895b29d +0x297:  movl   $"[skill]",0x4(%esp)
0895b2a5 +0x29f:  lea    -0x94(%ebp),%eax
0895b2ab +0x2a5:  mov    %eax,(%esp)
0895b2ae +0x2a8:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b2b3 +0x2ad:  test   %al,%al
0895b2b5 +0x2af:  je     0895b32f <+0x329>
0895b2b7 +0x2b1:  lea    -0xdc(%ebp),%eax
0895b2bd +0x2b7:  mov    %eax,(%esp)
0895b2c0 +0x2ba:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0895b2c5 +0x2bf:  lea    -0xb5(%ebp),%eax
0895b2cb +0x2c5:  mov    %eax,(%esp)
0895b2ce +0x2c8:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b2d3 +0x2cd:  mov    %eax,-0xdc(%ebp)
0895b2d9 +0x2d3:  movzbl -0xb5(%ebp),%eax
0895b2e0 +0x2da:  xor    $0x1,%eax
0895b2e3 +0x2dd:  test   %al,%al
0895b2e5 +0x2df:  je     0895b2e9 <+0x2e3>
0895b2e7 +0x2e1:  jmp    0895b32a <+0x324>
0895b2e9 +0x2e3:  lea    -0xb5(%ebp),%eax
0895b2ef +0x2e9:  mov    %eax,(%esp)
0895b2f2 +0x2ec:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b2f7 +0x2f1:  mov    %eax,-0xd8(%ebp)
0895b2fd +0x2f7:  movzbl -0xb5(%ebp),%eax
0895b304 +0x2fe:  xor    $0x1,%eax
0895b307 +0x301:  test   %al,%al
0895b309 +0x303:  je     0895b30d <+0x307>
0895b30b +0x305:  jmp    0895b32a <+0x324>
0895b30d +0x307:  lea    -0xdc(%ebp),%eax
0895b313 +0x30d:  mov    %eax,0x4(%esp)
0895b317 +0x311:  lea    -0xd4(%ebp),%eax
0895b31d +0x317:  add    $0x4,%eax
0895b320 +0x31a:  mov    %eax,(%esp)
0895b323 +0x31d:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0895b328 +0x322:  jmp    0895b2b7 <+0x2b1>
0895b32a +0x324:  jmp    0895b123 <+0x11d>
0895b32f +0x329:  movl   $"[item]",0x4(%esp)
0895b337 +0x331:  lea    -0x94(%ebp),%eax
0895b33d +0x337:  mov    %eax,(%esp)
0895b340 +0x33a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b345 +0x33f:  test   %al,%al
0895b347 +0x341:  je     0895b445 <+0x43f>
0895b34d +0x347:  lea    -0xb5(%ebp),%eax
0895b353 +0x34d:  mov    %eax,(%esp)
0895b356 +0x350:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b35b +0x355:  mov    %eax,-0xe8(%ebp)
0895b361 +0x35b:  movzbl -0xb5(%ebp),%eax
0895b368 +0x362:  xor    $0x1,%eax
0895b36b +0x365:  test   %al,%al
0895b36d +0x367:  je     0895b374 <+0x36e>
0895b36f +0x369:  jmp    0895b440 <+0x43a>
0895b374 +0x36e:  lea    -0xb5(%ebp),%eax
0895b37a +0x374:  mov    %eax,(%esp)
0895b37d +0x377:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b382 +0x37c:  mov    %eax,-0xe4(%ebp)
0895b388 +0x382:  movzbl -0xb5(%ebp),%eax
0895b38f +0x389:  xor    $0x1,%eax
0895b392 +0x38c:  test   %al,%al
0895b394 +0x38e:  je     0895b39b <+0x395>
0895b396 +0x390:  jmp    0895b440 <+0x43a>
0895b39b +0x395:  lea    -0xb5(%ebp),%eax
0895b3a1 +0x39b:  mov    %eax,(%esp)
0895b3a4 +0x39e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0895b3a9 +0x3a3:  mov    %eax,-0xe0(%ebp)
0895b3af +0x3a9:  mov    -0xe0(%ebp),%eax
0895b3b5 +0x3af:  test   %eax,%eax
0895b3b7 +0x3b1:  js     0895b3c4 <+0x3be>
0895b3b9 +0x3b3:  mov    -0xe0(%ebp),%eax
0895b3bf +0x3b9:  cmp    $0x1f,%eax
0895b3c2 +0x3bc:  jle    0895b410 <+0x40a>
0895b3c4 +0x3be:  mov    -0xe0(%ebp),%eax
0895b3ca +0x3c4:  mov    %eax,0x18(%esp)
0895b3ce +0x3c8:  mov    0xc(%ebp),%eax
0895b3d1 +0x3cb:  mov    %eax,0x14(%esp)
0895b3d5 +0x3cf:  movl   $"file name(%s) upgrade script error [%d] upgrade < 0 || upgrade > 31",0x10(%esp)
0895b3dd +0x3d7:  movl   $0xa4,0xc(%esp)
0895b3e5 +0x3df:  movl   $&_ZZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKcE12__FUNCTION__,0x8(%esp)
0895b3ed +0x3e7:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895b3f5 +0x3ef:  movl   $0x0,(%esp)
0895b3fc +0x3f6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895b401 +0x3fb:  mov    $0x0,%ebx
0895b406 +0x400:  mov    $0x0,%esi
0895b40b +0x405:  jmp    0895b6a3 <+0x69d>
0895b410 +0x40a:  movzbl -0xb5(%ebp),%eax
0895b417 +0x411:  xor    $0x1,%eax
0895b41a +0x414:  test   %al,%al
0895b41c +0x416:  je     0895b420 <+0x41a>
0895b41e +0x418:  jmp    0895b440 <+0x43a>
0895b420 +0x41a:  lea    -0xe8(%ebp),%eax
0895b426 +0x420:  mov    %eax,0x4(%esp)
0895b42a +0x424:  lea    -0xd4(%ebp),%eax
0895b430 +0x42a:  add    $0x10,%eax
0895b433 +0x42d:  mov    %eax,(%esp)
0895b436 +0x430:  call   0895b97a <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x106>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x106
0895b43b +0x435:  jmp    0895b34d <+0x347>
0895b440 +0x43a:  jmp    0895b123 <+0x11d>
0895b445 +0x43f:  movl   $"[/job const]",0x4(%esp)
0895b44d +0x447:  lea    -0x94(%ebp),%eax
0895b453 +0x44d:  mov    %eax,(%esp)
0895b456 +0x450:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b45b +0x455:  test   %al,%al
0895b45d +0x457:  je     0895b56e <+0x568>
0895b463 +0x45d:  lea    -0x68(%ebp),%eax
0895b466 +0x460:  lea    -0xd4(%ebp),%edx
0895b46c +0x466:  mov    %edx,0x8(%esp)
0895b470 +0x46a:  lea    -0x98(%ebp),%edx
0895b476 +0x470:  mov    %edx,0x4(%esp)
0895b47a +0x474:  mov    %eax,(%esp)
0895b47d +0x477:  call   0895b9ed <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x179>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x179
0895b482 +0x47c:  sub    $0x4,%esp
0895b485 +0x47f:  lea    -0x68(%ebp),%eax
0895b488 +0x482:  mov    %eax,0x4(%esp)
0895b48c +0x486:  lea    -0x88(%ebp),%eax
0895b492 +0x48c:  mov    %eax,(%esp)
0895b495 +0x48f:  call   0895baaa <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x236>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x236
0895b49a +0x494:  lea    -0x90(%ebp),%eax
0895b4a0 +0x49a:  lea    -0x88(%ebp),%edx
0895b4a6 +0x4a0:  mov    %edx,0x8(%esp)
0895b4aa +0x4a4:  lea    -0xb4(%ebp),%edx
0895b4b0 +0x4aa:  mov    %edx,0x4(%esp)
0895b4b4 +0x4ae:  mov    %eax,(%esp)
0895b4b7 +0x4b1:  call   0895bae4 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x270>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x270
0895b4bc +0x4b6:  sub    $0x4,%esp
0895b4bf +0x4b9:  movzbl -0x8c(%ebp),%eax
0895b4c6 +0x4c0:  mov    $0x1,%esi
0895b4cb +0x4c5:  xor    %eax,%esi
0895b4cd +0x4c7:  lea    -0x88(%ebp),%eax
0895b4d3 +0x4cd:  mov    %eax,(%esp)
0895b4d6 +0x4d0:  call   083ce43a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68406>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68406
0895b4db +0x4d5:  jmp    0895b50d <+0x507>
0895b4dd +0x4d7:  mov    %edx,%ebx
0895b4df +0x4d9:  mov    %eax,%esi
0895b4e1 +0x4db:  lea    -0x88(%ebp),%eax
0895b4e7 +0x4e1:  mov    %eax,(%esp)
0895b4ea +0x4e4:  call   083ce43a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68406>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68406
0895b4ef +0x4e9:  mov    %esi,%eax
0895b4f1 +0x4eb:  mov    %ebx,%edx
0895b4f3 +0x4ed:  jmp    0895b4f5 <+0x4ef>
0895b4f5 +0x4ef:  mov    %edx,%ebx
0895b4f7 +0x4f1:  mov    %eax,%esi
0895b4f9 +0x4f3:  lea    -0x68(%ebp),%eax
0895b4fc +0x4f6:  mov    %eax,(%esp)
0895b4ff +0x4f9:  call   0895b8d2 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x5e>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x5e
0895b504 +0x4fe:  mov    %esi,%eax
0895b506 +0x500:  mov    %ebx,%edx
0895b508 +0x502:  jmp    0895b68b <+0x685>
0895b50d +0x507:  lea    -0x68(%ebp),%eax
0895b510 +0x50a:  mov    %eax,(%esp)
0895b513 +0x50d:  call   0895b8d2 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x5e>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x5e
0895b518 +0x512:  mov    %esi,%eax
0895b51a +0x514:  test   %al,%al
0895b51c +0x516:  je     0895b683 <+0x67d>
0895b522 +0x51c:  mov    -0x98(%ebp),%eax
0895b528 +0x522:  mov    %eax,0x18(%esp)
0895b52c +0x526:  mov    0xc(%ebp),%eax
0895b52f +0x529:  mov    %eax,0x14(%esp)
0895b533 +0x52d:  movl   $"file name(%s) job name [%d]",0x10(%esp)
0895b53b +0x535:  movl   $0xb3,0xc(%esp)
0895b543 +0x53d:  movl   $&_ZZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKcE12__FUNCTION__,0x8(%esp)
0895b54b +0x545:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895b553 +0x54d:  movl   $0x0,(%esp)
0895b55a +0x554:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895b55f +0x559:  mov    $0x0,%ebx
0895b564 +0x55e:  mov    $0x0,%esi
0895b569 +0x563:  jmp    0895b6a3 <+0x69d>
0895b56e +0x568:  movl   $"[/level]",0x4(%esp)
0895b576 +0x570:  lea    -0x94(%ebp),%eax
0895b57c +0x576:  mov    %eax,(%esp)
0895b57f +0x579:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0895b584 +0x57e:  test   %al,%al
0895b586 +0x580:  je     0895b122 <+0x11c>
0895b58c +0x586:  lea    -0x24(%ebp),%eax
0895b58f +0x589:  lea    -0xb4(%ebp),%edx
0895b595 +0x58f:  mov    %edx,0x8(%esp)
0895b599 +0x593:  lea    -0x9c(%ebp),%edx
0895b59f +0x599:  mov    %edx,0x4(%esp)
0895b5a3 +0x59d:  mov    %eax,(%esp)
0895b5a6 +0x5a0:  call   0895bb10 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x29c>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x29c
0895b5ab +0x5a5:  sub    $0x4,%esp
0895b5ae +0x5a8:  lea    -0x24(%ebp),%eax
0895b5b1 +0x5ab:  mov    %eax,0x4(%esp)
0895b5b5 +0x5af:  lea    -0x40(%ebp),%eax
0895b5b8 +0x5b2:  mov    %eax,(%esp)
0895b5bb +0x5b5:  call   0895bb6e <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x2fa>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x2fa
0895b5c0 +0x5ba:  mov    0x8(%ebp),%edx
0895b5c3 +0x5bd:  lea    -0x48(%ebp),%eax
0895b5c6 +0x5c0:  lea    -0x40(%ebp),%ecx
0895b5c9 +0x5c3:  mov    %ecx,0x8(%esp)
0895b5cd +0x5c7:  mov    %edx,0x4(%esp)
0895b5d1 +0x5cb:  mov    %eax,(%esp)
0895b5d4 +0x5ce:  call   0895bba8 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x334>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x334
0895b5d9 +0x5d3:  sub    $0x4,%esp
0895b5dc +0x5d6:  movzbl -0x44(%ebp),%eax
0895b5e0 +0x5da:  mov    %eax,%ebx
0895b5e2 +0x5dc:  xor    $0x1,%ebx
0895b5e5 +0x5df:  lea    -0x40(%ebp),%eax
0895b5e8 +0x5e2:  mov    %eax,(%esp)
0895b5eb +0x5e5:  call   083ce4fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x684ca>  ; global constructors keyed to CServerEvent::m_nExpRate+0x684ca
0895b5f0 +0x5ea:  jmp    0895b61c <+0x616>
0895b5f2 +0x5ec:  mov    %edx,%ebx
0895b5f4 +0x5ee:  mov    %eax,%esi
0895b5f6 +0x5f0:  lea    -0x40(%ebp),%eax
0895b5f9 +0x5f3:  mov    %eax,(%esp)
0895b5fc +0x5f6:  call   083ce4fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x684ca>  ; global constructors keyed to CServerEvent::m_nExpRate+0x684ca
0895b601 +0x5fb:  mov    %esi,%eax
0895b603 +0x5fd:  mov    %ebx,%edx
0895b605 +0x5ff:  jmp    0895b607 <+0x601>
0895b607 +0x601:  mov    %edx,%ebx
0895b609 +0x603:  mov    %eax,%esi
0895b60b +0x605:  lea    -0x24(%ebp),%eax
0895b60e +0x608:  mov    %eax,(%esp)
0895b611 +0x60b:  call   0895b8e8 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x74>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x74
0895b616 +0x610:  mov    %esi,%eax
0895b618 +0x612:  mov    %ebx,%edx
0895b61a +0x614:  jmp    0895b68b <+0x685>
0895b61c +0x616:  lea    -0x24(%ebp),%eax
0895b61f +0x619:  mov    %eax,(%esp)
0895b622 +0x61c:  call   0895b8e8 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x74>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x74
0895b627 +0x621:  test   %bl,%bl
0895b629 +0x623:  je     0895b674 <+0x66e>
0895b62b +0x625:  mov    -0x9c(%ebp),%eax
0895b631 +0x62b:  mov    %eax,0x18(%esp)
0895b635 +0x62f:  mov    0xc(%ebp),%eax
0895b638 +0x632:  mov    %eax,0x14(%esp)
0895b63c +0x636:  movl   $"file name(%s) same level exist[%d]",0x10(%esp)
0895b644 +0x63e:  movl   $0xbd,0xc(%esp)
0895b64c +0x646:  movl   $&_ZZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKcE12__FUNCTION__,0x8(%esp)
0895b654 +0x64e:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895b65c +0x656:  movl   $0x0,(%esp)
0895b663 +0x65d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895b668 +0x662:  mov    $0x0,%ebx
0895b66d +0x667:  mov    $0x0,%esi
0895b672 +0x66c:  jmp    0895b6a3 <+0x69d>
0895b674 +0x66e:  mov    $0x1,%ebx
0895b679 +0x673:  mov    $0x0,%esi
0895b67e +0x678:  jmp    0895b6a3 <+0x69d>
0895b680 +0x67a:  nop
0895b681 +0x67b:  jmp    0895b684 <+0x67e>
0895b683 +0x67d:  nop
0895b684 +0x67e:  mov    $0x1,%esi
0895b689 +0x683:  jmp    0895b6a3 <+0x69d>
0895b68b +0x685:  mov    %edx,%ebx
0895b68d +0x687:  mov    %eax,%esi
0895b68f +0x689:  lea    -0xd4(%ebp),%eax
0895b695 +0x68f:  mov    %eax,(%esp)
0895b698 +0x692:  call   083ce3ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x683ba>  ; global constructors keyed to CServerEvent::m_nExpRate+0x683ba
0895b69d +0x697:  mov    %esi,%eax
0895b69f +0x699:  mov    %ebx,%edx
0895b6a1 +0x69b:  jmp    0895b6c2 <+0x6bc>
0895b6a3 +0x69d:  lea    -0xd4(%ebp),%eax
0895b6a9 +0x6a3:  mov    %eax,(%esp)
0895b6ac +0x6a6:  call   083ce3ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x683ba>  ; global constructors keyed to CServerEvent::m_nExpRate+0x683ba
0895b6b1 +0x6ab:  test   %esi,%esi
0895b6b3 +0x6ad:  je     0895b6da <+0x6d4>
0895b6b5 +0x6af:  jmp    0895b109 <+0x103>
0895b6ba +0x6b4:  nop
0895b6bb +0x6b5:  mov    $0x0,%ebx
0895b6c0 +0x6ba:  jmp    0895b6da <+0x6d4>
0895b6c2 +0x6bc:  mov    %edx,%ebx
0895b6c4 +0x6be:  mov    %eax,%esi
0895b6c6 +0x6c0:  lea    -0xb4(%ebp),%eax
0895b6cc +0x6c6:  mov    %eax,(%esp)
0895b6cf +0x6c9:  call   083ce4ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x684b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x684b6
0895b6d4 +0x6ce:  mov    %esi,%eax
0895b6d6 +0x6d0:  mov    %ebx,%edx
0895b6d8 +0x6d2:  jmp    0895b6ea <+0x6e4>
0895b6da +0x6d4:  lea    -0xb4(%ebp),%eax
0895b6e0 +0x6da:  mov    %eax,(%esp)
0895b6e3 +0x6dd:  call   083ce4ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x684b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x684b6
0895b6e8 +0x6e2:  jmp    0895b708 <+0x702>
0895b6ea +0x6e4:  mov    %edx,%ebx
0895b6ec +0x6e6:  mov    %eax,%esi
0895b6ee +0x6e8:  lea    -0x94(%ebp),%eax
0895b6f4 +0x6ee:  mov    %eax,(%esp)
0895b6f7 +0x6f1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0895b6fc +0x6f6:  mov    %esi,%eax
0895b6fe +0x6f8:  mov    %ebx,%edx
0895b700 +0x6fa:  mov    %eax,(%esp)
0895b703 +0x6fd:  call   08ae3750 <_Unwind_Resume>
0895b708 +0x702:  lea    -0x94(%ebp),%eax
0895b70e +0x708:  mov    %eax,(%esp)
0895b711 +0x70b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0895b716 +0x710:  mov    %ebx,%eax
0895b718 +0x712:  lea    -0x8(%ebp),%esp
0895b71b +0x715:  add    $0x0,%esp
0895b71e +0x718:  pop    %ebx
0895b71f +0x719:  pop    %esi
0895b720 +0x71a:  pop    %ebp
0895b721 +0x71b:  ret
```

## 反编译 C

```c
// EventCharacterParameterScript::importEventCharacterParameterScript @ 0x895b006

/* EventCharacterParameterScript::importEventCharacterParameterScript(char const*) */

undefined4 __thiscall
EventCharacterParameterScript::importEventCharacterParameterScript
          (EventCharacterParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  STEventCharacterInfo local_d8;
  undefined1 local_d7;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_d4 [12];
  vector<STEventCharacterItem,std::allocator<STEventCharacterItem>> avStack_c8 [15];
  bool local_b9;
  STEventCharacterInfo_level local_b8 [24];
  undefined4 local_a0;
  undefined4 local_9c;
  string local_98;
  pair local_94 [4];
  char local_90;
  pair<int_const,STEventCharacterInfo> local_8c [32];
  pair<int,STEventCharacterInfo> local_6c [32];
  pair local_4c [4];
  char local_48;
  pair<int_const,STEventCharacterInfo_level> local_44 [28];
  pair<int,STEventCharacterInfo_level> local_28 [28];
  
  cVar1 = loadRDARScriptFile(g_eventCharacterScriptBaseDirectory,param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_98);
    local_9c = 0;
    local_a0 = 0;
                    /* try { // try from 0895b060 to 0895b064 has its CatchHandler @ 0895b6ea */
    STEventCharacterInfo_level::STEventCharacterInfo_level(local_b8);
                    /* try { // try from 0895b076 to 0895b116 has its CatchHandler @ 0895b6c2 */
    cVar1 = ScanType((string *)&local_98,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_98,"[level]");
      if ((bVar2) && (local_a0 = ScanInt(&local_b9), local_b9 != true)) {
        LogManager::logFormat
                  (0,"../RDARScriptEventCharacterParameter.cpp",
                   "importEventCharacterParameterScript",0x5f,"file name(%s) job name [%d]",param_1,
                   local_9c);
        unaff_EBX = 0;
      }
      else {
        do {
          STEventCharacterInfo::STEventCharacterInfo(&local_d8);
LAB_0895b123:
          do {
                    /* try { // try from 0895b134 to 0895b481 has its CatchHandler @ 0895b68b */
            cVar1 = ScanType((string *)&local_98,true);
            if (cVar1 != '\x01') break;
            bVar2 = std::operator==(&local_98,"[job const]");
            if (!bVar2) {
              bVar2 = std::operator==(&local_98,"[grow type]");
              if (bVar2) {
                local_d8 = (STEventCharacterInfo)ScanInt(&local_b9);
                if (local_b9 != true) {
                  LogManager::logFormat
                            (0,"../RDARScriptEventCharacterParameter.cpp",
                             "importEventCharacterParameterScript",0x79,
                             "file name(%s) job name [%d]",param_1,local_9c);
                  unaff_EBX = 0;
                  bVar2 = false;
                  goto LAB_0895b6a3;
                }
              }
              else {
                bVar2 = std::operator==(&local_98,"[awakening type]");
                if (bVar2) {
                  local_d7 = ScanInt(&local_b9);
                  if (local_b9 != true) {
                    LogManager::logFormat
                              (0,"../RDARScriptEventCharacterParameter.cpp",
                               "importEventCharacterParameterScript",0x82,
                               "file name(%s) job name [%d]",param_1,local_9c);
                    unaff_EBX = 0;
                    bVar2 = false;
                    goto LAB_0895b6a3;
                  }
                }
                else {
                  bVar2 = std::operator==(&local_98,"[skill]");
                  if (bVar2) {
                    while( true ) {
                      std::pair<int,int>::pair((pair<int,int> *)&local_e0);
                      local_e0 = ScanInt(&local_b9);
                      if ((local_b9 != true) || (local_dc = ScanInt(&local_b9), local_b9 != true))
                      break;
                      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                                (avStack_d4,(pair *)&local_e0);
                    }
                  }
                  else {
                    bVar2 = std::operator==(&local_98,"[item]");
                    if (bVar2) {
                      while ((local_ec = ScanInt(&local_b9), local_b9 == true &&
                             (local_e8 = ScanInt(&local_b9), local_b9 == true))) {
                        local_e4 = ScanInt(&local_b9);
                        if ((local_e4 < 0) || (0x1f < local_e4)) {
                          LogManager::logFormat
                                    (0,"../RDARScriptEventCharacterParameter.cpp",
                                     "importEventCharacterParameterScript",0xa4,
                                     "file name(%s) upgrade script error [%d] upgrade < 0 || upgrade > 31"
                                     ,param_1,local_e4);
                          unaff_EBX = 0;
                          bVar2 = false;
                          goto LAB_0895b6a3;
                        }
                        if (local_b9 != true) break;
                        std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>::
                        push_back(avStack_c8,(STEventCharacterItem *)&local_ec);
                      }
                    }
                    else {
                      bVar2 = std::operator==(&local_98,"[/job const]");
                      if (bVar2) {
                        std::make_pair<int&,STEventCharacterInfo&>
                                  ((int *)local_6c,(STEventCharacterInfo *)&local_9c);
                    /* try { // try from 0895b495 to 0895b499 has its CatchHandler @ 0895b4f5 */
                        std::pair<int_const,STEventCharacterInfo>::pair<int,STEventCharacterInfo>
                                  (local_8c,local_6c);
                    /* try { // try from 0895b4b7 to 0895b4bb has its CatchHandler @ 0895b4dd */
                        std::
                        map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
                        ::insert(local_94);
                        cVar1 = local_90;
                    /* try { // try from 0895b4d6 to 0895b4da has its CatchHandler @ 0895b4f5 */
                        std::pair<int_const,STEventCharacterInfo>::~pair(local_8c);
                    /* try { // try from 0895b513 to 0895b5aa has its CatchHandler @ 0895b68b */
                        std::pair<int,STEventCharacterInfo>::~pair(local_6c);
                        if (cVar1 != '\x01') {
                          LogManager::logFormat
                                    (0,"../RDARScriptEventCharacterParameter.cpp",
                                     "importEventCharacterParameterScript",0xb3,
                                     "file name(%s) job name [%d]",param_1,local_9c);
                          unaff_EBX = 0;
                          bVar2 = false;
                          goto LAB_0895b6a3;
                        }
                        break;
                      }
                      bVar2 = std::operator==(&local_98,"[/level]");
                      if (bVar2) {
                        std::make_pair<int&,STEventCharacterInfo_level&>
                                  ((int *)local_28,(STEventCharacterInfo_level *)&local_a0);
                    /* try { // try from 0895b5bb to 0895b5bf has its CatchHandler @ 0895b607 */
                        std::pair<int_const,STEventCharacterInfo_level>::
                        pair<int,STEventCharacterInfo_level>(local_44,local_28);
                    /* try { // try from 0895b5d4 to 0895b5d8 has its CatchHandler @ 0895b5f2 */
                        std::
                        map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
                        ::insert(local_4c);
                        cVar1 = local_48;
                    /* try { // try from 0895b5eb to 0895b5ef has its CatchHandler @ 0895b607 */
                        std::pair<int_const,STEventCharacterInfo_level>::~pair(local_44);
                    /* try { // try from 0895b622 to 0895b667 has its CatchHandler @ 0895b68b */
                        std::pair<int,STEventCharacterInfo_level>::~pair(local_28);
                        if (cVar1 == '\x01') {
                          unaff_EBX = 1;
                          bVar2 = false;
                        }
                        else {
                          LogManager::logFormat
                                    (0,"../RDARScriptEventCharacterParameter.cpp",
                                     "importEventCharacterParameterScript",0xbd,
                                     "file name(%s) same level exist[%d]",param_1,local_a0);
                          unaff_EBX = 0;
                          bVar2 = false;
                        }
                        goto LAB_0895b6a3;
                      }
                    }
                  }
                }
              }
              goto LAB_0895b123;
            }
            local_9c = ScanInt(&local_b9);
          } while (local_b9 == true);
          bVar2 = true;
LAB_0895b6a3:
                    /* try { // try from 0895b6ac to 0895b6b0 has its CatchHandler @ 0895b6c2 */
          STEventCharacterInfo::~STEventCharacterInfo(&local_d8);
        } while (bVar2);
      }
    }
    else {
      unaff_EBX = 0;
    }
                    /* try { // try from 0895b6e3 to 0895b6e7 has its CatchHandler @ 0895b6ea */
    STEventCharacterInfo_level::~STEventCharacterInfo_level(local_b8);
    std::string::~string((string *)&local_98);
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```
