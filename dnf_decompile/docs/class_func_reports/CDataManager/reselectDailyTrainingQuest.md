# reselectDailyTrainingQuest

`_ZN12CDataManager26reselectDailyTrainingQuestEv`

`CDataManager::reselectDailyTrainingQuest()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363ce0  _ZN12CDataManager26reselectDailyTrainingQuestEv
#           CDataManager::reselectDailyTrainingQuest()
# range [0x08363ce0, 0x083640fd]
08363ce0 +0x000:  push   %ebp
08363ce1 +0x001:  mov    %esp,%ebp
08363ce3 +0x003:  push   %edi
08363ce4 +0x004:  push   %esi
08363ce5 +0x005:  push   %ebx
08363ce6 +0x006:  sub    $0x70c,%esp
08363cec +0x00c:  movl   $0x0,-0x28(%ebp)
08363cf3 +0x013:  mov    0x8(%ebp),%eax
08363cf6 +0x016:  add    $0x8d34,%eax
08363cfb +0x01b:  mov    %eax,(%esp)
08363cfe +0x01e:  call   08aafcbc <_ZN19TrainingQuestScript20suffleTrainingQuestsEv>  ; TrainingQuestScript::suffleTrainingQuests()
08363d03 +0x023:  lea    -0x6e4(%ebp),%ebx
08363d09 +0x029:  mov    %ebx,%edi
08363d0b +0x02b:  mov    $0x45,%esi
08363d10 +0x030:  jmp    08363d20 <+0x40>
08363d12 +0x032:  mov    %edi,(%esp)
08363d15 +0x035:  call   08395140 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24be0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24be0
08363d1a +0x03a:  add    $0x18,%edi
08363d1d +0x03d:  sub    $0x1,%esi
08363d20 +0x040:  cmp    $0xffffffff,%esi
08363d23 +0x043:  setne  %al
08363d26 +0x046:  test   %al,%al
08363d28 +0x048:  jne    08363d12 <+0x32>
08363d2a +0x04a:  jmp    08363d6e <+0x8e>
08363d2c +0x04c:  mov    %edx,%edi
08363d2e +0x04e:  mov    %eax,-0x6ec(%ebp)
08363d34 +0x054:  test   %ebx,%ebx
08363d36 +0x056:  je     08363d5e <+0x7e>
08363d38 +0x058:  mov    $0x45,%eax
08363d3d +0x05d:  sub    %esi,%eax
08363d3f +0x05f:  mov    %eax,%edx
08363d41 +0x061:  mov    %edx,%eax
08363d43 +0x063:  add    %eax,%eax
08363d45 +0x065:  add    %edx,%eax
08363d47 +0x067:  shl    $0x3,%eax
08363d4a +0x06a:  lea    (%ebx,%eax,1),%esi
08363d4d +0x06d:  cmp    %ebx,%esi
08363d4f +0x06f:  je     08363d5e <+0x7e>
08363d51 +0x071:  sub    $0x18,%esi
08363d54 +0x074:  mov    %esi,(%esp)
08363d57 +0x077:  call   0837f56c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf00c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf00c
08363d5c +0x07c:  jmp    08363d4d <+0x6d>
08363d5e +0x07e:  mov    -0x6ec(%ebp),%eax
08363d64 +0x084:  mov    %edi,%edx
08363d66 +0x086:  mov    %eax,(%esp)
08363d69 +0x089:  call   08ae3750 <_Unwind_Resume>
08363d6e +0x08e:  mov    0x8(%ebp),%eax
08363d71 +0x091:  lea    0x8d34(%eax),%edx
08363d77 +0x097:  lea    -0x6e4(%ebp),%eax
08363d7d +0x09d:  mov    %eax,0x4(%esp)
08363d81 +0x0a1:  mov    %edx,(%esp)
08363d84 +0x0a4:  call   08aaf8b6 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE>  ; TrainingQuestScript::getApplyLevel(std::multiset<int, std::less<int>, std::allocator<int> >*)
08363d89 +0x0a9:  movl   $0x1,-0x24(%ebp)
08363d90 +0x0b0:  jmp    08364084 <+0x3a4>
08363d95 +0x0b5:  mov    -0x24(%ebp),%eax
08363d98 +0x0b8:  lea    -0x1(%eax),%edx
08363d9b +0x0bb:  mov    %edx,%eax
08363d9d +0x0bd:  add    %eax,%eax
08363d9f +0x0bf:  add    %edx,%eax
08363da1 +0x0c1:  shl    $0x2,%eax
08363da4 +0x0c4:  add    $0xa1c0,%eax
08363da9 +0x0c9:  add    0x8(%ebp),%eax
08363dac +0x0cc:  add    $0x4,%eax
08363daf +0x0cf:  mov    %eax,(%esp)
08363db2 +0x0d2:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08363db7 +0x0d7:  movl   $0x7fffffff,-0x20(%ebp)
08363dbe +0x0de:  movl   $0x7fffffff,-0x1c(%ebp)
08363dc5 +0x0e5:  movl   $0x0,-0x50(%ebp)
08363dcc +0x0ec:  mov    -0x24(%ebp),%eax
08363dcf +0x0ef:  lea    -0x1(%eax),%edx
08363dd2 +0x0f2:  lea    -0x6e4(%ebp),%ecx
08363dd8 +0x0f8:  mov    %edx,%eax
08363dda +0x0fa:  add    %eax,%eax
08363ddc +0x0fc:  add    %edx,%eax
08363dde +0x0fe:  shl    $0x3,%eax
08363de1 +0x101:  lea    (%ecx,%eax,1),%edx
08363de4 +0x104:  lea    -0x54(%ebp),%eax
08363de7 +0x107:  mov    %edx,0x4(%esp)
08363deb +0x10b:  mov    %eax,(%esp)
08363dee +0x10e:  call   08395154 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24bf4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24bf4
08363df3 +0x113:  sub    $0x4,%esp
08363df6 +0x116:  jmp    08363ee7 <+0x207>
08363dfb +0x11b:  lea    -0x54(%ebp),%eax
08363dfe +0x11e:  mov    %eax,(%esp)
08363e01 +0x121:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
08363e06 +0x126:  mov    (%eax),%eax
08363e08 +0x128:  mov    %eax,-0x1c(%ebp)
08363e0b +0x12b:  mov    0x8(%ebp),%eax
08363e0e +0x12e:  lea    0x8d34(%eax),%edx
08363e14 +0x134:  mov    -0x20(%ebp),%eax
08363e17 +0x137:  mov    %eax,0xc(%esp)
08363e1b +0x13b:  mov    -0x1c(%ebp),%eax
08363e1e +0x13e:  mov    %eax,0x8(%esp)
08363e22 +0x142:  mov    -0x24(%ebp),%eax
08363e25 +0x145:  mov    %eax,0x4(%esp)
08363e29 +0x149:  mov    %edx,(%esp)
08363e2c +0x14c:  call   08aafb44 <_ZN19TrainingQuestScript16getTrainingQuestEiii>  ; TrainingQuestScript::getTrainingQuest(int, int, int)
08363e31 +0x151:  mov    %eax,-0x50(%ebp)
08363e34 +0x154:  mov    -0x1c(%ebp),%eax
08363e37 +0x157:  mov    %eax,-0x20(%ebp)
08363e3a +0x15a:  mov    -0x50(%ebp),%eax
08363e3d +0x15d:  cmp    $0x7fffffff,%eax
08363e42 +0x162:  je     08363ed8 <+0x1f8>
08363e48 +0x168:  mov    -0x50(%ebp),%edx
08363e4b +0x16b:  mov    0x8(%ebp),%eax
08363e4e +0x16e:  mov    0x18(%eax),%eax
08363e51 +0x171:  mov    %edx,0x4(%esp)
08363e55 +0x175:  mov    %eax,(%esp)
08363e58 +0x178:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
08363e5d +0x17d:  mov    %eax,-0x28(%ebp)
08363e60 +0x180:  cmpl   $0x0,-0x28(%ebp)
08363e64 +0x184:  je     08363edb <+0x1fb>
08363e66 +0x186:  mov    -0x28(%ebp),%eax
08363e69 +0x189:  mov    0x8(%eax),%eax
08363e6c +0x18c:  cmp    $0x1,%eax
08363e6f +0x18f:  je     08363ead <+0x1cd>
08363e71 +0x191:  mov    -0x50(%ebp),%eax
08363e74 +0x194:  mov    -0x24(%ebp),%edx
08363e77 +0x197:  mov    %edx,0x18(%esp)
08363e7b +0x19b:  mov    %eax,0x14(%esp)
08363e7f +0x19f:  movl   $"reselectDailyTrainingQuest() ERROR : quest(%d), level(%d)",0x10(%esp)
08363e87 +0x1a7:  movl   $0x2ac8,0xc(%esp)
08363e8f +0x1af:  movl   $&_ZZN12CDataManager26reselectDailyTrainingQuestEvE19__PRETTY_FUNCTION__,0x8(%esp)
08363e97 +0x1b7:  movl   $"data_manager.cpp",0x4(%esp)
08363e9f +0x1bf:  movl   $0x1,(%esp)
08363ea6 +0x1c6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08363eab +0x1cb:  jmp    08363edc <+0x1fc>
08363ead +0x1cd:  mov    -0x24(%ebp),%eax
08363eb0 +0x1d0:  lea    -0x1(%eax),%edx
08363eb3 +0x1d3:  mov    %edx,%eax
08363eb5 +0x1d5:  add    %eax,%eax
08363eb7 +0x1d7:  add    %edx,%eax
08363eb9 +0x1d9:  shl    $0x2,%eax
08363ebc +0x1dc:  add    $0xa1c0,%eax
08363ec1 +0x1e1:  add    0x8(%ebp),%eax
08363ec4 +0x1e4:  lea    0x4(%eax),%edx
08363ec7 +0x1e7:  lea    -0x50(%ebp),%eax
08363eca +0x1ea:  mov    %eax,0x4(%esp)
08363ece +0x1ee:  mov    %edx,(%esp)
08363ed1 +0x1f1:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08363ed6 +0x1f6:  jmp    08363edc <+0x1fc>
08363ed8 +0x1f8:  nop
08363ed9 +0x1f9:  jmp    08363edc <+0x1fc>
08363edb +0x1fb:  nop
08363edc +0x1fc:  lea    -0x54(%ebp),%eax
08363edf +0x1ff:  mov    %eax,(%esp)
08363ee2 +0x202:  call   080e618c <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2c2>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2c2
08363ee7 +0x207:  mov    -0x24(%ebp),%eax
08363eea +0x20a:  lea    -0x1(%eax),%edx
08363eed +0x20d:  lea    -0x6e4(%ebp),%ecx
08363ef3 +0x213:  mov    %edx,%eax
08363ef5 +0x215:  add    %eax,%eax
08363ef7 +0x217:  add    %edx,%eax
08363ef9 +0x219:  shl    $0x3,%eax
08363efc +0x21c:  lea    (%ecx,%eax,1),%edx
08363eff +0x21f:  lea    -0x4c(%ebp),%eax
08363f02 +0x222:  mov    %edx,0x4(%esp)
08363f06 +0x226:  mov    %eax,(%esp)
08363f09 +0x229:  call   0839517a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c1a
08363f0e +0x22e:  sub    $0x4,%esp
08363f11 +0x231:  lea    -0x4c(%ebp),%eax
08363f14 +0x234:  mov    %eax,0x4(%esp)
08363f18 +0x238:  lea    -0x54(%ebp),%eax
08363f1b +0x23b:  mov    %eax,(%esp)
08363f1e +0x23e:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
08363f23 +0x243:  test   %al,%al
08363f25 +0x245:  jne    08363dfb <+0x11b>
08363f2b +0x24b:  mov    0x8(%ebp),%eax
08363f2e +0x24e:  add    $0x8d34,%eax
08363f33 +0x253:  mov    %eax,(%esp)
08363f36 +0x256:  call   08371e48 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xbe14>  ; global constructors keyed to CServerEvent::m_nExpRate+0xbe14
08363f3b +0x25b:  mov    -0x24(%ebp),%eax
08363f3e +0x25e:  lea    -0x1(%eax),%edx
08363f41 +0x261:  mov    %edx,%eax
08363f43 +0x263:  add    %eax,%eax
08363f45 +0x265:  add    %edx,%eax
08363f47 +0x267:  shl    $0x2,%eax
08363f4a +0x26a:  add    $0xa1c0,%eax
08363f4f +0x26f:  add    0x8(%ebp),%eax
08363f52 +0x272:  add    $0x4,%eax
08363f55 +0x275:  mov    %eax,(%esp)
08363f58 +0x278:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08363f5d +0x27d:  xor    $0x1,%eax
08363f60 +0x280:  test   %al,%al
08363f62 +0x282:  je     08364080 <+0x3a0>
08363f68 +0x288:  lea    -0x44(%ebp),%eax
08363f6b +0x28b:  mov    %eax,(%esp)
08363f6e +0x28e:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08363f73 +0x293:  mov    -0x24(%ebp),%eax
08363f76 +0x296:  lea    -0x1(%eax),%edx
08363f79 +0x299:  mov    %edx,%eax
08363f7b +0x29b:  add    %eax,%eax
08363f7d +0x29d:  add    %edx,%eax
08363f7f +0x29f:  shl    $0x2,%eax
08363f82 +0x2a2:  add    $0xa1c0,%eax
08363f87 +0x2a7:  add    0x8(%ebp),%eax
08363f8a +0x2aa:  lea    0x4(%eax),%edx
08363f8d +0x2ad:  lea    -0x40(%ebp),%eax
08363f90 +0x2b0:  mov    %edx,0x4(%esp)
08363f94 +0x2b4:  mov    %eax,(%esp)
08363f97 +0x2b7:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08363f9c +0x2bc:  sub    $0x4,%esp
08363f9f +0x2bf:  mov    -0x24(%ebp),%eax
08363fa2 +0x2c2:  lea    -0x1(%eax),%edx
08363fa5 +0x2c5:  mov    %edx,%eax
08363fa7 +0x2c7:  add    %eax,%eax
08363fa9 +0x2c9:  add    %edx,%eax
08363fab +0x2cb:  shl    $0x2,%eax
08363fae +0x2ce:  add    $0xa1c0,%eax
08363fb3 +0x2d3:  add    0x8(%ebp),%eax
08363fb6 +0x2d6:  lea    0x4(%eax),%edx
08363fb9 +0x2d9:  lea    -0x3c(%ebp),%eax
08363fbc +0x2dc:  mov    %edx,0x4(%esp)
08363fc0 +0x2e0:  mov    %eax,(%esp)
08363fc3 +0x2e3:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08363fc8 +0x2e8:  sub    $0x4,%esp
08363fcb +0x2eb:  lea    -0x48(%ebp),%eax
08363fce +0x2ee:  lea    -0x44(%ebp),%edx
08363fd1 +0x2f1:  mov    %edx,0xc(%esp)
08363fd5 +0x2f5:  mov    -0x40(%ebp),%edx
08363fd8 +0x2f8:  mov    %edx,0x8(%esp)
08363fdc +0x2fc:  mov    -0x3c(%ebp),%edx
08363fdf +0x2ff:  mov    %edx,0x4(%esp)
08363fe3 +0x303:  mov    %eax,(%esp)
08363fe6 +0x306:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
08363feb +0x30b:  sub    $0x4,%esp
08363fee +0x30e:  lea    -0x48(%ebp),%eax
08363ff1 +0x311:  mov    %eax,(%esp)
08363ff4 +0x314:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08363ff9 +0x319:  mov    %eax,%ebx
08363ffb +0x31b:  movl   $0x0,0xc(%esp)
08364003 +0x323:  movl   $0x2ad2,0x8(%esp)
0836400b +0x32b:  movl   $&_ZZN12CDataManager26reselectDailyTrainingQuestEvE19__PRETTY_FUNCTION__,0x4(%esp)
08364013 +0x333:  lea    -0x38(%ebp),%eax
08364016 +0x336:  mov    %eax,(%esp)
08364019 +0x339:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0836401e +0x33e:  mov    %ebx,0xc(%esp)
08364022 +0x342:  mov    -0x24(%ebp),%eax
08364025 +0x345:  mov    %eax,0x8(%esp)
08364029 +0x349:  movl   $"TRAINING_QUEST level(%d), quest(%s)",0x4(%esp)
08364031 +0x351:  lea    -0x38(%ebp),%eax
08364034 +0x354:  mov    %eax,(%esp)
08364037 +0x357:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0836403c +0x35c:  jmp    08364053 <+0x373>
0836403e +0x35e:  mov    %edx,%ebx
08364040 +0x360:  mov    %eax,%esi
08364042 +0x362:  lea    -0x48(%ebp),%eax
08364045 +0x365:  mov    %eax,(%esp)
08364048 +0x368:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0836404d +0x36d:  mov    %esi,%eax
0836404f +0x36f:  mov    %ebx,%edx
08364051 +0x371:  jmp    08364060 <+0x380>
08364053 +0x373:  lea    -0x48(%ebp),%eax
08364056 +0x376:  mov    %eax,(%esp)
08364059 +0x379:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0836405e +0x37e:  jmp    08364075 <+0x395>
08364060 +0x380:  mov    %edx,%ebx
08364062 +0x382:  mov    %eax,%esi
08364064 +0x384:  lea    -0x44(%ebp),%eax
08364067 +0x387:  mov    %eax,(%esp)
0836406a +0x38a:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0836406f +0x38f:  mov    %esi,%eax
08364071 +0x391:  mov    %ebx,%edx
08364073 +0x393:  jmp    083640a6 <+0x3c6>
08364075 +0x395:  lea    -0x44(%ebp),%eax
08364078 +0x398:  mov    %eax,(%esp)
0836407b +0x39b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08364080 +0x3a0:  addl   $0x1,-0x24(%ebp)
08364084 +0x3a4:  cmpl   $0x46,-0x24(%ebp)
08364088 +0x3a8:  setle  %al
0836408b +0x3ab:  test   %al,%al
0836408d +0x3ad:  jne    08363d95 <+0xb5>
08364093 +0x3b3:  mov    $0x1,%esi
08364098 +0x3b8:  lea    -0x6e4(%ebp),%eax
0836409e +0x3be:  lea    0x690(%eax),%ebx
083640a4 +0x3c4:  jmp    083640d9 <+0x3f9>
083640a6 +0x3c6:  mov    %edx,%esi
083640a8 +0x3c8:  mov    %eax,%edi
083640aa +0x3ca:  lea    -0x6e4(%ebp),%eax
083640b0 +0x3d0:  lea    0x690(%eax),%ebx
083640b6 +0x3d6:  lea    -0x6e4(%ebp),%eax
083640bc +0x3dc:  cmp    %eax,%ebx
083640be +0x3de:  je     083640cd <+0x3ed>
083640c0 +0x3e0:  sub    $0x18,%ebx
083640c3 +0x3e3:  mov    %ebx,(%esp)
083640c6 +0x3e6:  call   0837f56c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf00c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf00c
083640cb +0x3eb:  jmp    083640b6 <+0x3d6>
083640cd +0x3ed:  mov    %edi,%eax
083640cf +0x3ef:  mov    %esi,%edx
083640d1 +0x3f1:  mov    %eax,(%esp)
083640d4 +0x3f4:  call   08ae3750 <_Unwind_Resume>
083640d9 +0x3f9:  lea    -0x6e4(%ebp),%eax
083640df +0x3ff:  cmp    %eax,%ebx
083640e1 +0x401:  je     083640f0 <+0x410>
083640e3 +0x403:  sub    $0x18,%ebx
083640e6 +0x406:  mov    %ebx,(%esp)
083640e9 +0x409:  call   0837f56c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf00c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf00c
083640ee +0x40e:  jmp    083640d9 <+0x3f9>
083640f0 +0x410:  mov    %esi,%eax
083640f2 +0x412:  lea    -0xc(%ebp),%esp
083640f5 +0x415:  add    $0x0,%esp
083640f8 +0x418:  pop    %ebx
083640f9 +0x419:  pop    %esi
083640fa +0x41a:  pop    %edi
083640fb +0x41b:  pop    %ebp
083640fc +0x41c:  ret
083640fd +0x41d:  nop
```

## 反编译 C

```c
// CDataManager::reselectDailyTrainingQuest @ 0x8363ce0

/* CDataManager::reselectDailyTrainingQuest() */

undefined4 __thiscall CDataManager::reselectDailyTrainingQuest(CDataManager *this)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  multiset<int,std::less<int>,std::allocator<int>> *pmVar4;
  int *piVar5;
  int iVar6;
  int local_724 [2];
  multiset<int,std::less<int>,std::allocator<int>> local_6e8 [1680];
  multiset<int,std::less<int>,std::allocator<int>> local_58 [4];
  int local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_2c = 0;
  TrainingQuestScript::suffleTrainingQuests((TrainingQuestScript *)(this + 0x8d34));
  pmVar4 = local_6e8;
  for (iVar6 = 0x45; iVar6 != -1; iVar6 = iVar6 + -1) {
                    /* try { // try from 08363d15 to 08363d19 has its CatchHandler @ 08363d2c */
    std::multiset<int,std::less<int>,std::allocator<int>>::multiset(pmVar4);
    pmVar4 = pmVar4 + 0x18;
  }
                    /* try { // try from 08363d84 to 08363f72 has its CatchHandler @ 083640a6 */
  TrainingQuestScript::getApplyLevel((multiset *)(this + 0x8d34));
  piVar5 = (int *)&stack0xfffff8e4;
  for (local_28 = 1; local_28 < 0x47; local_28 = local_28 + 1) {
    *piVar5 = (int)(this + (local_28 + -1) * 0xc + 0xa1c4);
    piVar5[-1] = 0x8363db7;
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)*piVar5);
    local_24 = 0x7fffffff;
    local_20 = 0x7fffffff;
    local_54 = 0;
    piVar5[1] = (int)(local_6e8 + (local_28 + -1) * 0x18);
    *piVar5 = (int)local_58;
    piVar5[-1] = 0x8363df3;
    std::multiset<int,std::less<int>,std::allocator<int>>::begin
              ((multiset<int,std::less<int>,std::allocator<int>> *)*piVar5);
    while( true ) {
      piVar5[1] = (int)(local_6e8 + (local_28 + -1) * 0x18);
      *piVar5 = (int)local_50;
      piVar5[-1] = 0x8363f0e;
      std::multiset<int,std::less<int>,std::allocator<int>>::end
                ((multiset<int,std::less<int>,std::allocator<int>> *)*piVar5);
      piVar5[1] = (int)local_50;
      *piVar5 = (int)local_58;
      piVar5[-1] = 0x8363f23;
      cVar2 = std::_Rb_tree_const_iterator<int>::operator!=
                        ((_Rb_tree_const_iterator<int> *)*piVar5,
                         (_Rb_tree_const_iterator *)piVar5[1]);
      if (cVar2 == '\0') break;
      *piVar5 = (int)local_58;
      piVar5[-1] = 0x8363e06;
      piVar3 = (int *)std::_Rb_tree_const_iterator<int>::operator*
                                ((_Rb_tree_const_iterator<int> *)*piVar5);
      local_20 = *piVar3;
      piVar5[3] = local_24;
      piVar5[2] = local_20;
      piVar5[1] = local_28;
      *piVar5 = (int)(this + 0x8d34);
      piVar5[-1] = 0x8363e31;
      local_54 = TrainingQuestScript::getTrainingQuest
                           ((TrainingQuestScript *)*piVar5,piVar5[1],piVar5[2],piVar5[3]);
      local_24 = local_20;
      if (local_54 != 0x7fffffff) {
        uVar1 = *(undefined4 *)(this + 0x18);
        piVar5[1] = local_54;
        *piVar5 = uVar1;
        piVar5[-1] = 0x8363e5d;
        local_2c = QuestList::find_quest(*piVar5);
        if (local_2c != 0) {
          if (*(int *)(local_2c + 8) == 1) {
            piVar5[1] = (int)&local_54;
            *piVar5 = (int)(this + (local_28 + -1) * 0xc + 0xa1c4);
            piVar5[-1] = 0x8363ed6;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)*piVar5,(int *)piVar5[1]);
          }
          else {
            piVar5[6] = local_28;
            piVar5[5] = local_54;
            piVar5[4] = (int)"reselectDailyTrainingQuest() ERROR : quest(%d), level(%d)";
            piVar5[3] = 0x2ac8;
            piVar5[2] = (int)"bool CDataManager::reselectDailyTrainingQuest()";
            piVar5[1] = (int)"data_manager.cpp";
            *piVar5 = 1;
            piVar5[-1] = 0x8363eab;
            LogManager::logFormat
                      (*piVar5,(char *)piVar5[1],(char *)piVar5[2],piVar5[3],(char *)piVar5[4]);
          }
        }
      }
      *piVar5 = (int)local_58;
      piVar5[-1] = 0x8363ee7;
      std::_Rb_tree_const_iterator<int>::operator++((_Rb_tree_const_iterator<int> *)*piVar5);
    }
    *piVar5 = (int)(this + 0x8d34);
    piVar5[-1] = 0x8363f3b;
    TrainingQuestScript::reset_same_apply_level_cnt((TrainingQuestScript *)*piVar5);
    *piVar5 = (int)(this + (local_28 + -1) * 0xc + 0xa1c4);
    piVar5[-1] = 0x8363f5d;
    cVar2 = std::vector<int,std::allocator<int>>::empty();
    piVar3 = piVar5;
    if (cVar2 != '\x01') {
      *piVar5 = (int)local_48;
      piVar5[-1] = 0x8363f73;
      sync_script::CStringMaker::CStringMaker((CStringMaker *)*piVar5);
      piVar5[1] = (int)(this + (local_28 + -1) * 0xc + 0xa1c4);
      *piVar5 = (int)&local_44;
                    /* try { // try from 08363f97 to 08363fea has its CatchHandler @ 08364060 */
      piVar5[-1] = 0x8363f9c;
      std::vector<int,std::allocator<int>>::end();
      piVar5[1] = (int)(this + (local_28 + -1) * 0xc + 0xa1c4);
      *piVar5 = (int)&local_40;
      piVar5[-1] = 0x8363fc8;
      std::vector<int,std::allocator<int>>::begin();
      piVar5[3] = (int)local_48;
      piVar5[2] = local_44;
      piVar5[1] = local_40;
      *piVar5 = (int)local_4c;
      piVar5[-1] = 0x8363feb;
      std::
      for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
                ();
      piVar3 = piVar5 + -1;
      piVar5[-1] = (int)local_4c;
                    /* try { // try from 08363ff4 to 0836403b has its CatchHandler @ 0836403e */
      piVar5[-2] = 0x8363ff9;
      iVar6 = sync_script::CStringMaker::c_str((CStringMaker *)piVar5[-1]);
      piVar5[2] = 0;
      piVar5[1] = 0x2ad2;
      *piVar5 = (int)"bool CDataManager::reselectDailyTrainingQuest()";
      piVar5[-1] = (int)local_3c;
      piVar5[-2] = 0x836401e;
      cMyTrace::cMyTrace((cMyTrace *)piVar5[-1],(char *)*piVar5,piVar5[1],piVar5[2]);
      piVar5[2] = iVar6;
      piVar5[1] = local_28;
      *piVar5 = (int)"TRAINING_QUEST level(%d), quest(%s)";
      piVar5[-1] = (int)local_3c;
      piVar5[-2] = 0x836403c;
      cMyTrace::operator()((cMyTrace *)piVar5[-1],(char *)*piVar5);
      piVar5[-1] = (int)local_4c;
                    /* try { // try from 08364059 to 0836405d has its CatchHandler @ 08364060 */
      piVar5[-2] = 0x836405e;
      sync_script::CStringMaker::~CStringMaker((CStringMaker *)piVar5[-1]);
      piVar5[-1] = (int)local_48;
                    /* try { // try from 0836407b to 0836407f has its CatchHandler @ 083640a6 */
      piVar5[-2] = 0x8364080;
      sync_script::CStringMaker::~CStringMaker((CStringMaker *)piVar5[-1]);
    }
    piVar5 = piVar3;
  }
  pmVar4 = local_58;
  while (pmVar4 != local_6e8) {
    pmVar4 = pmVar4 + -0x18;
    *piVar5 = (int)pmVar4;
    piVar5[-1] = 0x83640ee;
    std::multiset<int,std::less<int>,std::allocator<int>>::~multiset
              ((multiset<int,std::less<int>,std::allocator<int>> *)*piVar5);
  }
  return 1;
}
```
