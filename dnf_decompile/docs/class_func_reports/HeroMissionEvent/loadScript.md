# loadScript

`_ZN16HeroMissionEvent10loadScriptEv`

`HeroMissionEvent::loadScript()`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08167ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08167ac8  _ZN16HeroMissionEvent10loadScriptEv
#           HeroMissionEvent::loadScript()
# range [0x08167ac8, 0x0816800f]
08167ac8 +0x000:  push   %ebp
08167ac9 +0x001:  mov    %esp,%ebp
08167acb +0x003:  push   %edi
08167acc +0x004:  push   %esi
08167acd +0x005:  push   %ebx
08167ace +0x006:  sub    $0x6c,%esp
08167ad1 +0x009:  movl   $0x0,-0x20(%ebp)
08167ad8 +0x010:  movl   $0x34,(%esp)
08167adf +0x017:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08167ae4 +0x01c:  mov    %eax,%ebx
08167ae6 +0x01e:  mov    %ebx,%eax
08167ae8 +0x020:  mov    %eax,(%esp)
08167aeb +0x023:  call   08165342 <_ZN19ClearDungeonMissionC1Ev>  ; ClearDungeonMission::ClearDungeonMission()
08167af0 +0x028:  jmp    08167b07 <+0x3f>
08167af2 +0x02a:  mov    %edx,%esi
08167af4 +0x02c:  mov    %eax,%edi
08167af6 +0x02e:  mov    %ebx,(%esp)
08167af9 +0x031:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08167afe +0x036:  mov    %edi,%eax
08167b00 +0x038:  mov    %esi,%edx
08167b02 +0x03a:  jmp    08167e60 <+0x398>
08167b07 +0x03f:  mov    %ebx,%eax
08167b09 +0x041:  mov    %eax,-0x20(%ebp)
08167b0c +0x044:  cmpl   $0x0,-0x20(%ebp)
08167b10 +0x048:  jne    08167b3e <+0x76>
08167b12 +0x04a:  movl   $0x4,(%esp)
08167b19 +0x051:  call   08725800 <__cxa_allocate_exception>
08167b1e +0x056:  mov    %eax,%edx
08167b20 +0x058:  movl   $0x345,(%edx)
08167b26 +0x05e:  movl   $0x0,0x8(%esp)
08167b2e +0x066:  movl   $&_ZTIi,0x4(%esp)
08167b36 +0x06e:  mov    %eax,(%esp)
08167b39 +0x071:  call   08724c50 <__cxa_throw>
08167b3e +0x076:  mov    -0x20(%ebp),%eax
08167b41 +0x079:  mov    %eax,(%esp)
08167b44 +0x07c:  call   08164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>  ; BaseHeroMissionCondition::getMissionCode()
08167b49 +0x081:  mov    %eax,-0x40(%ebp)
08167b4c +0x084:  mov    0x8(%ebp),%eax
08167b4f +0x087:  lea    0xc(%eax),%edx
08167b52 +0x08a:  lea    -0x40(%ebp),%eax
08167b55 +0x08d:  mov    %eax,0x4(%esp)
08167b59 +0x091:  mov    %edx,(%esp)
08167b5c +0x094:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167b61 +0x099:  mov    -0x20(%ebp),%edx
08167b64 +0x09c:  mov    %edx,(%eax)
08167b66 +0x09e:  movl   $0x34,(%esp)
08167b6d +0x0a5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08167b72 +0x0aa:  mov    %eax,%ebx
08167b74 +0x0ac:  mov    %ebx,%eax
08167b76 +0x0ae:  mov    %eax,(%esp)
08167b79 +0x0b1:  call   08165694 <_ZN17UseFatigueMissionC1Ev>  ; UseFatigueMission::UseFatigueMission()
08167b7e +0x0b6:  jmp    08167b95 <+0xcd>
08167b80 +0x0b8:  mov    %edx,%esi
08167b82 +0x0ba:  mov    %eax,%edi
08167b84 +0x0bc:  mov    %ebx,(%esp)
08167b87 +0x0bf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08167b8c +0x0c4:  mov    %edi,%eax
08167b8e +0x0c6:  mov    %esi,%edx
08167b90 +0x0c8:  jmp    08167e60 <+0x398>
08167b95 +0x0cd:  mov    %ebx,%eax
08167b97 +0x0cf:  mov    %eax,-0x20(%ebp)
08167b9a +0x0d2:  cmpl   $0x0,-0x20(%ebp)
08167b9e +0x0d6:  jne    08167bcc <+0x104>
08167ba0 +0x0d8:  movl   $0x4,(%esp)
08167ba7 +0x0df:  call   08725800 <__cxa_allocate_exception>
08167bac +0x0e4:  mov    %eax,%edx
08167bae +0x0e6:  movl   $0x349,(%edx)
08167bb4 +0x0ec:  movl   $0x0,0x8(%esp)
08167bbc +0x0f4:  movl   $&_ZTIi,0x4(%esp)
08167bc4 +0x0fc:  mov    %eax,(%esp)
08167bc7 +0x0ff:  call   08724c50 <__cxa_throw>
08167bcc +0x104:  mov    -0x20(%ebp),%eax
08167bcf +0x107:  mov    %eax,(%esp)
08167bd2 +0x10a:  call   08164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>  ; BaseHeroMissionCondition::getMissionCode()
08167bd7 +0x10f:  mov    %eax,-0x3c(%ebp)
08167bda +0x112:  mov    0x8(%ebp),%eax
08167bdd +0x115:  lea    0xc(%eax),%edx
08167be0 +0x118:  lea    -0x3c(%ebp),%eax
08167be3 +0x11b:  mov    %eax,0x4(%esp)
08167be7 +0x11f:  mov    %edx,(%esp)
08167bea +0x122:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167bef +0x127:  mov    -0x20(%ebp),%edx
08167bf2 +0x12a:  mov    %edx,(%eax)
08167bf4 +0x12c:  movl   $0x34,(%esp)
08167bfb +0x133:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08167c00 +0x138:  mov    %eax,%ebx
08167c02 +0x13a:  mov    %ebx,%eax
08167c04 +0x13c:  mov    %eax,(%esp)
08167c07 +0x13f:  call   08165920 <_ZN14UseCubeMissionC1Ev>  ; UseCubeMission::UseCubeMission()
08167c0c +0x144:  jmp    08167c23 <+0x15b>
08167c0e +0x146:  mov    %edx,%esi
08167c10 +0x148:  mov    %eax,%edi
08167c12 +0x14a:  mov    %ebx,(%esp)
08167c15 +0x14d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08167c1a +0x152:  mov    %edi,%eax
08167c1c +0x154:  mov    %esi,%edx
08167c1e +0x156:  jmp    08167e60 <+0x398>
08167c23 +0x15b:  mov    %ebx,%eax
08167c25 +0x15d:  mov    %eax,-0x20(%ebp)
08167c28 +0x160:  cmpl   $0x0,-0x20(%ebp)
08167c2c +0x164:  jne    08167c5a <+0x192>
08167c2e +0x166:  movl   $0x4,(%esp)
08167c35 +0x16d:  call   08725800 <__cxa_allocate_exception>
08167c3a +0x172:  mov    %eax,%edx
08167c3c +0x174:  movl   $0x34d,(%edx)
08167c42 +0x17a:  movl   $0x0,0x8(%esp)
08167c4a +0x182:  movl   $&_ZTIi,0x4(%esp)
08167c52 +0x18a:  mov    %eax,(%esp)
08167c55 +0x18d:  call   08724c50 <__cxa_throw>
08167c5a +0x192:  mov    -0x20(%ebp),%eax
08167c5d +0x195:  mov    %eax,(%esp)
08167c60 +0x198:  call   08164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>  ; BaseHeroMissionCondition::getMissionCode()
08167c65 +0x19d:  mov    %eax,-0x38(%ebp)
08167c68 +0x1a0:  mov    0x8(%ebp),%eax
08167c6b +0x1a3:  lea    0xc(%eax),%edx
08167c6e +0x1a6:  lea    -0x38(%ebp),%eax
08167c71 +0x1a9:  mov    %eax,0x4(%esp)
08167c75 +0x1ad:  mov    %edx,(%esp)
08167c78 +0x1b0:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167c7d +0x1b5:  mov    -0x20(%ebp),%edx
08167c80 +0x1b8:  mov    %edx,(%eax)
08167c82 +0x1ba:  movl   $0x34,(%esp)
08167c89 +0x1c1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08167c8e +0x1c6:  mov    %eax,%ebx
08167c90 +0x1c8:  mov    %ebx,%eax
08167c92 +0x1ca:  mov    %eax,(%esp)
08167c95 +0x1cd:  call   08165bac <_ZN14LevelUpMissionC1Ev>  ; LevelUpMission::LevelUpMission()
08167c9a +0x1d2:  jmp    08167cb1 <+0x1e9>
08167c9c +0x1d4:  mov    %edx,%esi
08167c9e +0x1d6:  mov    %eax,%edi
08167ca0 +0x1d8:  mov    %ebx,(%esp)
08167ca3 +0x1db:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08167ca8 +0x1e0:  mov    %edi,%eax
08167caa +0x1e2:  mov    %esi,%edx
08167cac +0x1e4:  jmp    08167e60 <+0x398>
08167cb1 +0x1e9:  mov    %ebx,%eax
08167cb3 +0x1eb:  mov    %eax,-0x20(%ebp)
08167cb6 +0x1ee:  cmpl   $0x0,-0x20(%ebp)
08167cba +0x1f2:  jne    08167ce8 <+0x220>
08167cbc +0x1f4:  movl   $0x4,(%esp)
08167cc3 +0x1fb:  call   08725800 <__cxa_allocate_exception>
08167cc8 +0x200:  mov    %eax,%edx
08167cca +0x202:  movl   $0x351,(%edx)
08167cd0 +0x208:  movl   $0x0,0x8(%esp)
08167cd8 +0x210:  movl   $&_ZTIi,0x4(%esp)
08167ce0 +0x218:  mov    %eax,(%esp)
08167ce3 +0x21b:  call   08724c50 <__cxa_throw>
08167ce8 +0x220:  mov    -0x20(%ebp),%eax
08167ceb +0x223:  mov    %eax,(%esp)
08167cee +0x226:  call   08164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>  ; BaseHeroMissionCondition::getMissionCode()
08167cf3 +0x22b:  mov    %eax,-0x34(%ebp)
08167cf6 +0x22e:  mov    0x8(%ebp),%eax
08167cf9 +0x231:  lea    0xc(%eax),%edx
08167cfc +0x234:  lea    -0x34(%ebp),%eax
08167cff +0x237:  mov    %eax,0x4(%esp)
08167d03 +0x23b:  mov    %edx,(%esp)
08167d06 +0x23e:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167d0b +0x243:  mov    -0x20(%ebp),%edx
08167d0e +0x246:  mov    %edx,(%eax)
08167d10 +0x248:  movl   $0x34,(%esp)
08167d17 +0x24f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08167d1c +0x254:  mov    %eax,%ebx
08167d1e +0x256:  mov    %ebx,%eax
08167d20 +0x258:  mov    %eax,(%esp)
08167d23 +0x25b:  call   08165f90 <_ZN17AttendanceMissionC1Ev>  ; AttendanceMission::AttendanceMission()
08167d28 +0x260:  jmp    08167d3f <+0x277>
08167d2a +0x262:  mov    %edx,%esi
08167d2c +0x264:  mov    %eax,%edi
08167d2e +0x266:  mov    %ebx,(%esp)
08167d31 +0x269:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08167d36 +0x26e:  mov    %edi,%eax
08167d38 +0x270:  mov    %esi,%edx
08167d3a +0x272:  jmp    08167e60 <+0x398>
08167d3f +0x277:  mov    %ebx,%eax
08167d41 +0x279:  mov    %eax,-0x20(%ebp)
08167d44 +0x27c:  cmpl   $0x0,-0x20(%ebp)
08167d48 +0x280:  jne    08167d76 <+0x2ae>
08167d4a +0x282:  movl   $0x4,(%esp)
08167d51 +0x289:  call   08725800 <__cxa_allocate_exception>
08167d56 +0x28e:  mov    %eax,%edx
08167d58 +0x290:  movl   $0x355,(%edx)
08167d5e +0x296:  movl   $0x0,0x8(%esp)
08167d66 +0x29e:  movl   $&_ZTIi,0x4(%esp)
08167d6e +0x2a6:  mov    %eax,(%esp)
08167d71 +0x2a9:  call   08724c50 <__cxa_throw>
08167d76 +0x2ae:  mov    -0x20(%ebp),%eax
08167d79 +0x2b1:  mov    %eax,(%esp)
08167d7c +0x2b4:  call   08164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>  ; BaseHeroMissionCondition::getMissionCode()
08167d81 +0x2b9:  mov    %eax,-0x30(%ebp)
08167d84 +0x2bc:  mov    0x8(%ebp),%eax
08167d87 +0x2bf:  lea    0xc(%eax),%edx
08167d8a +0x2c2:  lea    -0x30(%ebp),%eax
08167d8d +0x2c5:  mov    %eax,0x4(%esp)
08167d91 +0x2c9:  mov    %edx,(%esp)
08167d94 +0x2cc:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167d99 +0x2d1:  mov    -0x20(%ebp),%edx
08167d9c +0x2d4:  mov    %edx,(%eax)
08167d9e +0x2d6:  movl   $0x34,(%esp)
08167da5 +0x2dd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08167daa +0x2e2:  mov    %eax,%ebx
08167dac +0x2e4:  mov    %ebx,%eax
08167dae +0x2e6:  mov    %eax,(%esp)
08167db1 +0x2e9:  call   08166306 <_ZN12TotalMissionC1Ev>  ; TotalMission::TotalMission()
08167db6 +0x2ee:  jmp    08167dcd <+0x305>
08167db8 +0x2f0:  mov    %edx,%esi
08167dba +0x2f2:  mov    %eax,%edi
08167dbc +0x2f4:  mov    %ebx,(%esp)
08167dbf +0x2f7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08167dc4 +0x2fc:  mov    %edi,%eax
08167dc6 +0x2fe:  mov    %esi,%edx
08167dc8 +0x300:  jmp    08167e60 <+0x398>
08167dcd +0x305:  mov    %ebx,%eax
08167dcf +0x307:  mov    %eax,-0x20(%ebp)
08167dd2 +0x30a:  cmpl   $0x0,-0x20(%ebp)
08167dd6 +0x30e:  jne    08167e04 <+0x33c>
08167dd8 +0x310:  movl   $0x4,(%esp)
08167ddf +0x317:  call   08725800 <__cxa_allocate_exception>
08167de4 +0x31c:  mov    %eax,%edx
08167de6 +0x31e:  movl   $0x359,(%edx)
08167dec +0x324:  movl   $0x0,0x8(%esp)
08167df4 +0x32c:  movl   $&_ZTIi,0x4(%esp)
08167dfc +0x334:  mov    %eax,(%esp)
08167dff +0x337:  call   08724c50 <__cxa_throw>
08167e04 +0x33c:  mov    -0x20(%ebp),%eax
08167e07 +0x33f:  mov    %eax,(%esp)
08167e0a +0x342:  call   08164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>  ; BaseHeroMissionCondition::getMissionCode()
08167e0f +0x347:  mov    %eax,-0x2c(%ebp)
08167e12 +0x34a:  mov    0x8(%ebp),%eax
08167e15 +0x34d:  lea    0xc(%eax),%edx
08167e18 +0x350:  lea    -0x2c(%ebp),%eax
08167e1b +0x353:  mov    %eax,0x4(%esp)
08167e1f +0x357:  mov    %edx,(%esp)
08167e22 +0x35a:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167e27 +0x35f:  mov    -0x20(%ebp),%edx
08167e2a +0x362:  mov    %edx,(%eax)
08167e2c +0x364:  movl   $0x0,-0x24(%ebp)
08167e33 +0x36b:  lea    -0x4c(%ebp),%eax
08167e36 +0x36e:  mov    %eax,(%esp)
08167e39 +0x371:  call   08168abc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x91d>  ; global constructors keyed to HeroMissionValue::clear()+0x91d
08167e3e +0x376:  movl   $"Event/HeroMissionEvent.evt",0x4(%esp)
08167e46 +0x37e:  lea    -0x4c(%ebp),%eax
08167e49 +0x381:  mov    %eax,(%esp)
08167e4c +0x384:  call   0896171b <_Z31importHeroMissionConditionsDataPSt6vectorI20HeroMissionConditionSaIS0_EEPKc>  ; importHeroMissionConditionsData(std::vector<HeroMissionCondition, std::allocator<HeroMissionCondition> >*, char const*)
08167e51 +0x389:  mov    %eax,-0x24(%ebp)
08167e54 +0x38c:  cmpl   $0x0,-0x24(%ebp)
08167e58 +0x390:  je     08167f0e <+0x446>
08167e5e +0x396:  jmp    08167ed1 <+0x409>
08167e60 +0x398:  cmp    $0x1,%edx
08167e63 +0x39b:  je     08167e6d <+0x3a5>
08167e65 +0x39d:  mov    %eax,(%esp)
08167e68 +0x3a0:  call   08ae3750 <_Unwind_Resume>
08167e6d +0x3a5:  mov    %eax,(%esp)
08167e70 +0x3a8:  call   08725ce0 <__cxa_begin_catch>
08167e75 +0x3ad:  mov    (%eax),%eax
08167e77 +0x3af:  mov    %eax,-0x1c(%ebp)
08167e7a +0x3b2:  mov    -0x1c(%ebp),%eax
08167e7d +0x3b5:  mov    %eax,0x14(%esp)
08167e81 +0x3b9:  movl   $"[HeroMission] Fail create mission. (line:%d)",0x10(%esp)
08167e89 +0x3c1:  movl   $0x35e,0xc(%esp)
08167e91 +0x3c9:  movl   $&_ZZN16HeroMissionEvent10loadScriptEvE19__PRETTY_FUNCTION__,0x8(%esp)
08167e99 +0x3d1:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167ea1 +0x3d9:  movl   $0x1,(%esp)
08167ea8 +0x3e0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08167ead +0x3e5:  mov    $0x0,%ebx
08167eb2 +0x3ea:  call   08725c30 <__cxa_end_catch>
08167eb7 +0x3ef:  jmp    08168002 <+0x53a>
08167ebc +0x3f4:  mov    %edx,%ebx
08167ebe +0x3f6:  mov    %eax,%esi
08167ec0 +0x3f8:  call   08725c30 <__cxa_end_catch>
08167ec5 +0x3fd:  mov    %esi,%eax
08167ec7 +0x3ff:  mov    %ebx,%edx
08167ec9 +0x401:  mov    %eax,(%esp)
08167ecc +0x404:  call   08ae3750 <_Unwind_Resume>
08167ed1 +0x409:  mov    -0x24(%ebp),%eax
08167ed4 +0x40c:  mov    %eax,0x14(%esp)
08167ed8 +0x410:  movl   $"[HeroMission] Load script fail. (line:%d)",0x10(%esp)
08167ee0 +0x418:  movl   $0x367,0xc(%esp)
08167ee8 +0x420:  movl   $&_ZZN16HeroMissionEvent10loadScriptEvE19__PRETTY_FUNCTION__,0x8(%esp)
08167ef0 +0x428:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167ef8 +0x430:  movl   $0x1,(%esp)
08167eff +0x437:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08167f04 +0x43c:  mov    $0x0,%ebx
08167f09 +0x441:  jmp    08167ff7 <+0x52f>
08167f0e +0x446:  lea    -0x50(%ebp),%eax
08167f11 +0x449:  lea    -0x4c(%ebp),%edx
08167f14 +0x44c:  mov    %edx,0x4(%esp)
08167f18 +0x450:  mov    %eax,(%esp)
08167f1b +0x453:  call   08168b2e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x98f>  ; global constructors keyed to HeroMissionValue::clear()+0x98f
08167f20 +0x458:  sub    $0x4,%esp
08167f23 +0x45b:  jmp    08167f9b <+0x4d3>
08167f25 +0x45d:  lea    -0x50(%ebp),%eax
08167f28 +0x460:  mov    %eax,(%esp)
08167f2b +0x463:  call   08168bba <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa1b>  ; global constructors keyed to HeroMissionValue::clear()+0xa1b
08167f30 +0x468:  mov    (%eax),%eax
08167f32 +0x46a:  test   %eax,%eax
08167f34 +0x46c:  jle    08167f4f <+0x487>
08167f36 +0x46e:  lea    -0x50(%ebp),%eax
08167f39 +0x471:  mov    %eax,(%esp)
08167f3c +0x474:  call   08168bba <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa1b>  ; global constructors keyed to HeroMissionValue::clear()+0xa1b
08167f41 +0x479:  mov    (%eax),%eax
08167f43 +0x47b:  cmp    $0x6,%eax
08167f46 +0x47e:  jg     08167f4f <+0x487>
08167f48 +0x480:  mov    $0x1,%eax
08167f4d +0x485:  jmp    08167f54 <+0x48c>
08167f4f +0x487:  mov    $0x0,%eax
08167f54 +0x48c:  test   %al,%al
08167f56 +0x48e:  je     08167f90 <+0x4c8>
08167f58 +0x490:  lea    -0x50(%ebp),%eax
08167f5b +0x493:  mov    %eax,(%esp)
08167f5e +0x496:  call   08168bc4 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa25>  ; global constructors keyed to HeroMissionValue::clear()+0xa25
08167f63 +0x49b:  mov    %eax,%ebx
08167f65 +0x49d:  lea    -0x50(%ebp),%eax
08167f68 +0x4a0:  mov    %eax,(%esp)
08167f6b +0x4a3:  call   08168bba <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa1b>  ; global constructors keyed to HeroMissionValue::clear()+0xa1b
08167f70 +0x4a8:  mov    0x8(%ebp),%edx
08167f73 +0x4ab:  add    $0xc,%edx
08167f76 +0x4ae:  mov    %eax,0x4(%esp)
08167f7a +0x4b2:  mov    %edx,(%esp)
08167f7d +0x4b5:  call   081689c6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x827>  ; global constructors keyed to HeroMissionValue::clear()+0x827
08167f82 +0x4ba:  mov    (%eax),%eax
08167f84 +0x4bc:  mov    %ebx,0x4(%esp)
08167f88 +0x4c0:  mov    %eax,(%esp)
08167f8b +0x4c3:  call   08164f8c <_ZN24BaseHeroMissionCondition16setConditionDataER20HeroMissionCondition>  ; BaseHeroMissionCondition::setConditionData(HeroMissionCondition&)
08167f90 +0x4c8:  lea    -0x50(%ebp),%eax
08167f93 +0x4cb:  mov    %eax,(%esp)
08167f96 +0x4ce:  call   08168ba4 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa05>  ; global constructors keyed to HeroMissionValue::clear()+0xa05
08167f9b +0x4d3:  lea    -0x28(%ebp),%eax
08167f9e +0x4d6:  lea    -0x4c(%ebp),%edx
08167fa1 +0x4d9:  mov    %edx,0x4(%esp)
08167fa5 +0x4dd:  mov    %eax,(%esp)
08167fa8 +0x4e0:  call   08168b52 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x9b3>  ; global constructors keyed to HeroMissionValue::clear()+0x9b3
08167fad +0x4e5:  sub    $0x4,%esp
08167fb0 +0x4e8:  lea    -0x28(%ebp),%eax
08167fb3 +0x4eb:  mov    %eax,0x4(%esp)
08167fb7 +0x4ef:  lea    -0x50(%ebp),%eax
08167fba +0x4f2:  mov    %eax,(%esp)
08167fbd +0x4f5:  call   08168b78 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x9d9>  ; global constructors keyed to HeroMissionValue::clear()+0x9d9
08167fc2 +0x4fa:  test   %al,%al
08167fc4 +0x4fc:  jne    08167f25 <+0x45d>
08167fca +0x502:  lea    -0x4c(%ebp),%eax
08167fcd +0x505:  mov    %eax,(%esp)
08167fd0 +0x508:  call   08168bce <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa2f>  ; global constructors keyed to HeroMissionValue::clear()+0xa2f
08167fd5 +0x50d:  mov    $0x1,%ebx
08167fda +0x512:  jmp    08167ff7 <+0x52f>
08167fdc +0x514:  mov    %edx,%ebx
08167fde +0x516:  mov    %eax,%esi
08167fe0 +0x518:  lea    -0x4c(%ebp),%eax
08167fe3 +0x51b:  mov    %eax,(%esp)
08167fe6 +0x51e:  call   08168ad0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x931>  ; global constructors keyed to HeroMissionValue::clear()+0x931
08167feb +0x523:  mov    %esi,%eax
08167fed +0x525:  mov    %ebx,%edx
08167fef +0x527:  mov    %eax,(%esp)
08167ff2 +0x52a:  call   08ae3750 <_Unwind_Resume>
08167ff7 +0x52f:  lea    -0x4c(%ebp),%eax
08167ffa +0x532:  mov    %eax,(%esp)
08167ffd +0x535:  call   08168ad0 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x931>  ; global constructors keyed to HeroMissionValue::clear()+0x931
08168002 +0x53a:  mov    %ebx,%eax
08168004 +0x53c:  lea    -0xc(%ebp),%esp
08168007 +0x53f:  add    $0x0,%esp
0816800a +0x542:  pop    %ebx
0816800b +0x543:  pop    %esi
0816800c +0x544:  pop    %edi
0816800d +0x545:  pop    %ebp
0816800e +0x546:  ret
0816800f +0x547:  nop
```

## 反编译 C

```c
// HeroMissionEvent::loadScript @ 0x8167ac8

/* HeroMissionEvent::loadScript() */

undefined4 __thiscall HeroMissionEvent::loadScript(HeroMissionEvent *this)

{
  bool bVar1;
  ClearDungeonMission *this_00;
  undefined4 *puVar2;
  UseFatigueMission *this_01;
  UseCubeMission *this_02;
  LevelUpMission *this_03;
  AttendanceMission *this_04;
  TotalMission *this_05;
  int *piVar3;
  HeroMissionCondition *pHVar4;
  T *pTVar5;
  undefined4 uVar6;
  __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
  local_54 [4];
  vector<HeroMissionCondition,std::allocator<HeroMissionCondition>> local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  __normal_iterator local_2c [4];
  int local_28;
  ClearDungeonMission *local_24;
  
  local_24 = (ClearDungeonMission *)0x0;
                    /* try { // try from 08167adf to 08167ae3 has its CatchHandler @ 08167e60 */
  this_00 = operator_new(0x34);
                    /* try { // try from 08167aeb to 08167aef has its CatchHandler @ 08167af2 */
  ClearDungeonMission::ClearDungeonMission(this_00);
  local_24 = this_00;
  if (this_00 == (ClearDungeonMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x345;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167b39 to 08167b71 has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_44 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_00);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_44);
  *puVar2 = local_24;
  this_01 = operator_new(0x34);
                    /* try { // try from 08167b79 to 08167b7d has its CatchHandler @ 08167b80 */
  UseFatigueMission::UseFatigueMission(this_01);
  local_24 = (ClearDungeonMission *)this_01;
  if (this_01 == (UseFatigueMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x349;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167bc7 to 08167bff has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_40 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_01);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_40);
  *puVar2 = local_24;
  this_02 = operator_new(0x34);
                    /* try { // try from 08167c07 to 08167c0b has its CatchHandler @ 08167c0e */
  UseCubeMission::UseCubeMission(this_02);
  local_24 = (ClearDungeonMission *)this_02;
  if (this_02 == (UseCubeMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x34d;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167c55 to 08167c8d has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_3c = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_02);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_3c);
  *puVar2 = local_24;
  this_03 = operator_new(0x34);
                    /* try { // try from 08167c95 to 08167c99 has its CatchHandler @ 08167c9c */
  LevelUpMission::LevelUpMission(this_03);
  local_24 = (ClearDungeonMission *)this_03;
  if (this_03 == (LevelUpMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x351;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167ce3 to 08167d1b has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_38 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_03);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_38);
  *puVar2 = local_24;
  this_04 = operator_new(0x34);
                    /* try { // try from 08167d23 to 08167d27 has its CatchHandler @ 08167d2a */
  AttendanceMission::AttendanceMission(this_04);
  local_24 = (ClearDungeonMission *)this_04;
  if (this_04 == (AttendanceMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x355;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167d71 to 08167da9 has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_34 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_04);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_34);
  *puVar2 = local_24;
  this_05 = operator_new(0x34);
                    /* try { // try from 08167db1 to 08167db5 has its CatchHandler @ 08167db8 */
  TotalMission::TotalMission(this_05);
  local_24 = (ClearDungeonMission *)this_05;
  if (this_05 == (TotalMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x359;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167dff to 08167e26 has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_30 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_05);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_30);
  *puVar2 = local_24;
  local_28 = 0;
  std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::vector(local_50);
                    /* try { // try from 08167e4c to 08167e50 has its CatchHandler @ 08167fdc */
  local_28 = importHeroMissionConditionsData((vector *)local_50,"Event/HeroMissionEvent.evt");
  if (local_28 == 0) {
    std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::begin();
    while( true ) {
      std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::end();
      bVar1 = __gnu_cxx::operator!=(local_54,local_2c);
      if (!bVar1) break;
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                      ::operator->(local_54);
      if (*piVar3 < 1) {
LAB_08167f4f:
        bVar1 = false;
      }
      else {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                        ::operator->(local_54);
        if (6 < *piVar3) goto LAB_08167f4f;
        bVar1 = true;
      }
      if (bVar1) {
        pHVar4 = (HeroMissionCondition *)
                 __gnu_cxx::
                 __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                 ::operator*(local_54);
        pTVar5 = (T *)__gnu_cxx::
                      __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                      ::operator->(local_54);
        puVar2 = (undefined4 *)
                 std::
                 map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                 ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                               *)(this + 0xc),pTVar5);
        BaseHeroMissionCondition::setConditionData((BaseHeroMissionCondition *)*puVar2,pHVar4);
      }
      __gnu_cxx::
      __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
      ::operator++(local_54);
    }
    std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::clear(local_50);
    uVar6 = 1;
  }
  else {
                    /* try { // try from 08167eff to 08167fd4 has its CatchHandler @ 08167fdc */
    LogManager::logFormat
              (1,"localtaiwan/Event/EventHeroMission.cpp","bool HeroMissionEvent::loadScript()",
               0x367,"[HeroMission] Load script fail. (line:%d)",local_28);
    uVar6 = 0;
  }
  std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::~vector(local_50);
  return uVar6;
}
```
