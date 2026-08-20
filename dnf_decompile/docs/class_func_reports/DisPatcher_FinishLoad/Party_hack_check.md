# Party_hack_check

`_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser`

`DisPatcher_FinishLoad::Party_hack_check(CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_FinishLoad` | `0x08264c28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264c28  _ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser
#           DisPatcher_FinishLoad::Party_hack_check(CUser*)
# range [0x08264c28, 0x0826503b]
08264c28 +0x000:  push   %ebp
08264c29 +0x001:  mov    %esp,%ebp
08264c2b +0x003:  push   %ebx
08264c2c +0x004:  sub    $0x94,%esp
08264c32 +0x00a:  movb   $0x1,-0x40(%ebp)
08264c36 +0x00e:  movb   $0x1,-0x3f(%ebp)
08264c3a +0x012:  movl   $0x0,-0x50(%ebp)
08264c41 +0x019:  movl   $0x0,-0x4c(%ebp)
08264c48 +0x020:  movl   $0x0,-0x48(%ebp)
08264c4f +0x027:  movl   $0x0,-0x44(%ebp)
08264c56 +0x02e:  movb   $0x0,-0x3e(%ebp)
08264c5a +0x032:  movb   $0x0,-0x3d(%ebp)
08264c5e +0x036:  movl   $0x0,-0x3c(%ebp)
08264c65 +0x03d:  movl   $0x0,-0x38(%ebp)
08264c6c +0x044:  movl   $0x0,-0x34(%ebp)
08264c73 +0x04b:  mov    0xc(%ebp),%eax
08264c76 +0x04e:  mov    %eax,(%esp)
08264c79 +0x051:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08264c7e +0x056:  mov    %eax,-0x30(%ebp)
08264c81 +0x059:  cmpl   $0x0,-0x30(%ebp)
08264c85 +0x05d:  je     08265032 <+0x40a>
08264c8b +0x063:  movl   $0x0,-0x2c(%ebp)
08264c92 +0x06a:  mov    -0x30(%ebp),%eax
08264c95 +0x06d:  mov    %eax,(%esp)
08264c98 +0x070:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08264c9d +0x075:  mov    %eax,-0x2c(%ebp)
08264ca0 +0x078:  cmpl   $0x2,-0x2c(%ebp)
08264ca4 +0x07c:  jle    08265032 <+0x40a>
08264caa +0x082:  movl   $0x0,-0x28(%ebp)
08264cb1 +0x089:  jmp    08264fa3 <+0x37b>
08264cb6 +0x08e:  mov    -0x28(%ebp),%eax
08264cb9 +0x091:  mov    %eax,0x4(%esp)
08264cbd +0x095:  mov    -0x30(%ebp),%eax
08264cc0 +0x098:  mov    %eax,(%esp)
08264cc3 +0x09b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08264cc8 +0x0a0:  xor    $0x1,%eax
08264ccb +0x0a3:  test   %al,%al
08264ccd +0x0a5:  jne    08264f9e <+0x376>
08264cd3 +0x0ab:  mov    -0x28(%ebp),%eax
08264cd6 +0x0ae:  mov    %eax,0x4(%esp)
08264cda +0x0b2:  mov    -0x30(%ebp),%eax
08264cdd +0x0b5:  mov    %eax,(%esp)
08264ce0 +0x0b8:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08264ce5 +0x0bd:  mov    %eax,-0x24(%ebp)
08264ce8 +0x0c0:  cmpl   $0x0,-0x24(%ebp)
08264cec +0x0c4:  je     08264f9f <+0x377>
08264cf2 +0x0ca:  cmpl   $0x0,-0x28(%ebp)
08264cf6 +0x0ce:  je     08264e44 <+0x21c>
08264cfc +0x0d4:  movsbl -0x3e(%ebp),%ebx
08264d00 +0x0d8:  mov    -0x24(%ebp),%eax
08264d03 +0x0db:  mov    %eax,(%esp)
08264d06 +0x0de:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08264d0b +0x0e3:  cmp    %eax,%ebx
08264d0d +0x0e5:  jne    08264d1f <+0xf7>
08264d0f +0x0e7:  mov    -0x24(%ebp),%eax
08264d12 +0x0ea:  mov    %eax,(%esp)
08264d15 +0x0ed:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08264d1a +0x0f2:  cmp    -0x3d(%ebp),%al
08264d1d +0x0f5:  je     08264d26 <+0xfe>
08264d1f +0x0f7:  mov    $0x1,%eax
08264d24 +0x0fc:  jmp    08264d2b <+0x103>
08264d26 +0x0fe:  mov    $0x0,%eax
08264d2b +0x103:  test   %al,%al
08264d2d +0x105:  je     08264d3c <+0x114>
08264d2f +0x107:  movb   $0x0,-0x40(%ebp)
08264d33 +0x10b:  movb   $0x0,-0x3f(%ebp)
08264d37 +0x10f:  jmp    08264fb2 <+0x38a>
08264d3c +0x114:  movl   $0x0,-0x20(%ebp)
08264d43 +0x11b:  movl   $0x0,-0x60(%ebp)
08264d4a +0x122:  movl   $0x0,-0x5c(%ebp)
08264d51 +0x129:  movl   $0x0,-0x58(%ebp)
08264d58 +0x130:  movl   $0x0,-0x54(%ebp)
08264d5f +0x137:  mov    -0x24(%ebp),%eax
08264d62 +0x13a:  lea    0xe0(%eax),%edx
08264d68 +0x140:  movl   $0x10,0x8(%esp)
08264d70 +0x148:  lea    -0x60(%ebp),%eax
08264d73 +0x14b:  mov    %eax,0x4(%esp)
08264d77 +0x14f:  mov    %edx,(%esp)
08264d7a +0x152:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08264d7f +0x157:  lea    -0x50(%ebp),%eax
08264d82 +0x15a:  mov    %eax,(%esp)
08264d85 +0x15d:  call   0807e3b0 <_init+0xca8>
08264d8a +0x162:  mov    %eax,-0x20(%ebp)
08264d8d +0x165:  mov    -0x20(%ebp),%eax
08264d90 +0x168:  mov    %eax,0x8(%esp)
08264d94 +0x16c:  lea    -0x60(%ebp),%eax
08264d97 +0x16f:  mov    %eax,0x4(%esp)
08264d9b +0x173:  lea    -0x50(%ebp),%eax
08264d9e +0x176:  mov    %eax,(%esp)
08264da1 +0x179:  call   0807e8c0 <_init+0x11b8>
08264da6 +0x17e:  test   %eax,%eax
08264da8 +0x180:  je     08264db7 <+0x18f>
08264daa +0x182:  movb   $0x0,-0x40(%ebp)
08264dae +0x186:  movb   $0x0,-0x3f(%ebp)
08264db2 +0x18a:  jmp    08264fb2 <+0x38a>
08264db7 +0x18f:  movl   $0x0,-0x1c(%ebp)
08264dbe +0x196:  mov    -0x24(%ebp),%eax
08264dc1 +0x199:  mov    %eax,(%esp)
08264dc4 +0x19c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
08264dc9 +0x1a1:  mov    %eax,-0x1c(%ebp)
08264dcc +0x1a4:  cmpl   $0x0,-0x1c(%ebp)
08264dd0 +0x1a8:  jne    08264ddf <+0x1b7>
08264dd2 +0x1aa:  movb   $0x0,-0x40(%ebp)
08264dd6 +0x1ae:  movb   $0x0,-0x3f(%ebp)
08264dda +0x1b2:  jmp    08264fb2 <+0x38a>
08264ddf +0x1b7:  movl   $0x0,0x4(%esp)
08264de7 +0x1bf:  mov    -0x1c(%ebp),%eax
08264dea +0x1c2:  mov    %eax,(%esp)
08264ded +0x1c5:  call   08606874 <_ZNK9SkillSlot15get_skill_indexEi>  ; SkillSlot::get_skill_index(int) const
08264df2 +0x1ca:  cmp    -0x3c(%ebp),%eax
08264df5 +0x1cd:  jne    08264e27 <+0x1ff>
08264df7 +0x1cf:  movl   $0x1,0x4(%esp)
08264dff +0x1d7:  mov    -0x1c(%ebp),%eax
08264e02 +0x1da:  mov    %eax,(%esp)
08264e05 +0x1dd:  call   08606874 <_ZNK9SkillSlot15get_skill_indexEi>  ; SkillSlot::get_skill_index(int) const
08264e0a +0x1e2:  cmp    -0x38(%ebp),%eax
08264e0d +0x1e5:  jne    08264e27 <+0x1ff>
08264e0f +0x1e7:  movl   $0x2,0x4(%esp)
08264e17 +0x1ef:  mov    -0x1c(%ebp),%eax
08264e1a +0x1f2:  mov    %eax,(%esp)
08264e1d +0x1f5:  call   08606874 <_ZNK9SkillSlot15get_skill_indexEi>  ; SkillSlot::get_skill_index(int) const
08264e22 +0x1fa:  cmp    -0x34(%ebp),%eax
08264e25 +0x1fd:  je     08264e2e <+0x206>
08264e27 +0x1ff:  mov    $0x1,%eax
08264e2c +0x204:  jmp    08264e33 <+0x20b>
08264e2e +0x206:  mov    $0x0,%eax
08264e33 +0x20b:  test   %al,%al
08264e35 +0x20d:  je     08264f9f <+0x377>
08264e3b +0x213:  movb   $0x0,-0x40(%ebp)
08264e3f +0x217:  jmp    08264f9f <+0x377>
08264e44 +0x21c:  mov    -0x24(%ebp),%eax
08264e47 +0x21f:  mov    %eax,(%esp)
08264e4a +0x222:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08264e4f +0x227:  mov    %al,-0x3e(%ebp)
08264e52 +0x22a:  mov    -0x24(%ebp),%eax
08264e55 +0x22d:  mov    %eax,(%esp)
08264e58 +0x230:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08264e5d +0x235:  mov    %al,-0x3d(%ebp)
08264e60 +0x238:  movl   $0x0,-0x18(%ebp)
08264e67 +0x23f:  movl   $0x0,-0x70(%ebp)
08264e6e +0x246:  movl   $0x0,-0x6c(%ebp)
08264e75 +0x24d:  movl   $0x0,-0x68(%ebp)
08264e7c +0x254:  movl   $0x0,-0x64(%ebp)
08264e83 +0x25b:  movl   $0x0,-0x14(%ebp)
08264e8a +0x262:  movl   $0x0,-0x10(%ebp)
08264e91 +0x269:  mov    -0x24(%ebp),%eax
08264e94 +0x26c:  lea    0xe0(%eax),%edx
08264e9a +0x272:  movl   $0x10,0x8(%esp)
08264ea2 +0x27a:  lea    -0x70(%ebp),%eax
08264ea5 +0x27d:  mov    %eax,0x4(%esp)
08264ea9 +0x281:  mov    %edx,(%esp)
08264eac +0x284:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08264eb1 +0x289:  lea    -0x70(%ebp),%eax
08264eb4 +0x28c:  mov    %eax,(%esp)
08264eb7 +0x28f:  call   0807e3b0 <_init+0xca8>
08264ebc +0x294:  cmp    $0x8,%eax
08264ebf +0x297:  ja     08264ece <+0x2a6>
08264ec1 +0x299:  movb   $0x0,-0x40(%ebp)
08264ec5 +0x29d:  movb   $0x0,-0x3f(%ebp)
08264ec9 +0x2a1:  jmp    08264fb2 <+0x38a>
08264ece +0x2a6:  movl   $0x2e,0x4(%esp)
08264ed6 +0x2ae:  lea    -0x70(%ebp),%eax
08264ed9 +0x2b1:  mov    %eax,(%esp)
08264edc +0x2b4:  call   08265244 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x1c>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x1c
08264ee1 +0x2b9:  mov    %eax,-0x18(%ebp)
08264ee4 +0x2bc:  cmpl   $0x0,-0x18(%ebp)
08264ee8 +0x2c0:  jne    08264ef7 <+0x2cf>
08264eea +0x2c2:  movb   $0x0,-0x40(%ebp)
08264eee +0x2c6:  movb   $0x0,-0x3f(%ebp)
08264ef2 +0x2ca:  jmp    08264fb2 <+0x38a>
08264ef7 +0x2cf:  lea    -0x70(%ebp),%eax
08264efa +0x2d2:  mov    %eax,(%esp)
08264efd +0x2d5:  call   0807e3b0 <_init+0xca8>
08264f02 +0x2da:  mov    %eax,-0x14(%ebp)
08264f05 +0x2dd:  mov    -0x18(%ebp),%eax
08264f08 +0x2e0:  mov    %eax,(%esp)
08264f0b +0x2e3:  call   0807e3b0 <_init+0xca8>
08264f10 +0x2e8:  mov    %eax,-0x10(%ebp)
08264f13 +0x2eb:  mov    -0x10(%ebp),%eax
08264f16 +0x2ee:  mov    -0x14(%ebp),%edx
08264f19 +0x2f1:  mov    %edx,%ecx
08264f1b +0x2f3:  sub    %eax,%ecx
08264f1d +0x2f5:  mov    %ecx,%eax
08264f1f +0x2f7:  mov    %eax,0x8(%esp)
08264f23 +0x2fb:  lea    -0x70(%ebp),%eax
08264f26 +0x2fe:  mov    %eax,0x4(%esp)
08264f2a +0x302:  lea    -0x50(%ebp),%eax
08264f2d +0x305:  mov    %eax,(%esp)
08264f30 +0x308:  call   0807d8d0 <_init+0x1c8>
08264f35 +0x30d:  movl   $0x0,-0xc(%ebp)
08264f3c +0x314:  mov    -0x24(%ebp),%eax
08264f3f +0x317:  mov    %eax,(%esp)
08264f42 +0x31a:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
08264f47 +0x31f:  mov    %eax,-0xc(%ebp)
08264f4a +0x322:  cmpl   $0x0,-0xc(%ebp)
08264f4e +0x326:  jne    08264f5a <+0x332>
08264f50 +0x328:  movb   $0x0,-0x40(%ebp)
08264f54 +0x32c:  movb   $0x0,-0x3f(%ebp)
08264f58 +0x330:  jmp    08264fb2 <+0x38a>
08264f5a +0x332:  movl   $0x0,0x4(%esp)
08264f62 +0x33a:  mov    -0xc(%ebp),%eax
08264f65 +0x33d:  mov    %eax,(%esp)
08264f68 +0x340:  call   08606874 <_ZNK9SkillSlot15get_skill_indexEi>  ; SkillSlot::get_skill_index(int) const
08264f6d +0x345:  mov    %eax,-0x3c(%ebp)
08264f70 +0x348:  movl   $0x1,0x4(%esp)
08264f78 +0x350:  mov    -0xc(%ebp),%eax
08264f7b +0x353:  mov    %eax,(%esp)
08264f7e +0x356:  call   08606874 <_ZNK9SkillSlot15get_skill_indexEi>  ; SkillSlot::get_skill_index(int) const
08264f83 +0x35b:  mov    %eax,-0x38(%ebp)
08264f86 +0x35e:  movl   $0x2,0x4(%esp)
08264f8e +0x366:  mov    -0xc(%ebp),%eax
08264f91 +0x369:  mov    %eax,(%esp)
08264f94 +0x36c:  call   08606874 <_ZNK9SkillSlot15get_skill_indexEi>  ; SkillSlot::get_skill_index(int) const
08264f99 +0x371:  mov    %eax,-0x34(%ebp)
08264f9c +0x374:  jmp    08264f9f <+0x377>
08264f9e +0x376:  nop
08264f9f +0x377:  addl   $0x1,-0x28(%ebp)
08264fa3 +0x37b:  cmpl   $0x3,-0x28(%ebp)
08264fa7 +0x37f:  setle  %al
08264faa +0x382:  test   %al,%al
08264fac +0x384:  jne    08264cb6 <+0x8e>
08264fb2 +0x38a:  cmpb   $0x0,-0x3f(%ebp)
08264fb6 +0x38e:  je     08265032 <+0x40a>
08264fb8 +0x390:  mov    0xc(%ebp),%eax
08264fbb +0x393:  mov    %eax,(%esp)
08264fbe +0x396:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08264fc3 +0x39b:  movl   $0x0,0x14(%esp)
08264fcb +0x3a3:  movl   $0x0,0x10(%esp)
08264fd3 +0x3ab:  movl   $0x1,0xc(%esp)
08264fdb +0x3b3:  movl   $0x330,0x8(%esp)
08264fe3 +0x3bb:  mov    0xc(%ebp),%edx
08264fe6 +0x3be:  mov    %edx,0x4(%esp)
08264fea +0x3c2:  mov    %eax,(%esp)
08264fed +0x3c5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08264ff2 +0x3ca:  cmpb   $0x0,-0x40(%ebp)
08264ff6 +0x3ce:  je     08265032 <+0x40a>
08264ff8 +0x3d0:  mov    0xc(%ebp),%eax
08264ffb +0x3d3:  mov    %eax,(%esp)
08264ffe +0x3d6:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08265003 +0x3db:  movl   $0x0,0x14(%esp)
0826500b +0x3e3:  movl   $0x0,0x10(%esp)
08265013 +0x3eb:  movl   $0x1,0xc(%esp)
0826501b +0x3f3:  movl   $0x32f,0x8(%esp)
08265023 +0x3fb:  mov    0xc(%ebp),%edx
08265026 +0x3fe:  mov    %edx,0x4(%esp)
0826502a +0x402:  mov    %eax,(%esp)
0826502d +0x405:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08265032 +0x40a:  add    $0x94,%esp
08265038 +0x410:  pop    %ebx
08265039 +0x411:  pop    %ebp
0826503a +0x412:  ret
0826503b +0x413:  nop
```

## 反编译 C

```c
// DisPatcher_FinishLoad::Party_hack_check @ 0x8264c28

/* DisPatcher_FinishLoad::Party_hack_check(CUser*) */

void __thiscall DisPatcher_FinishLoad::Party_hack_check(DisPatcher_FinishLoad *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  CHackAnalyzer *pCVar5;
  int iVar6;
  char local_74 [52];
  int local_40;
  int local_3c;
  int local_38;
  CParty *local_34;
  int local_30;
  int local_2c;
  CUserCharacInfo *local_28;
  size_t local_24;
  SkillSlot *local_20;
  char *local_1c;
  size_t local_18;
  size_t local_14;
  SkillSlot *local_10;
  
  local_74[0x30] = '\x01';
  local_74[0x31] = '\x01';
  local_74[0x20] = '\0';
  local_74[0x21] = '\0';
  local_74[0x22] = '\0';
  local_74[0x23] = '\0';
  local_74[0x24] = '\0';
  local_74[0x25] = '\0';
  local_74[0x26] = '\0';
  local_74[0x27] = '\0';
  local_74[0x28] = '\0';
  local_74[0x29] = '\0';
  local_74[0x2a] = '\0';
  local_74[0x2b] = '\0';
  local_74[0x2c] = '\0';
  local_74[0x2d] = '\0';
  local_74[0x2e] = '\0';
  local_74[0x2f] = '\0';
  local_74[0x32] = '\0';
  local_74[0x33] = '\0';
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (CParty *)CUser::GetParty(param_1);
  if (local_34 != (CParty *)0x0) {
    local_30 = 0;
    local_30 = CParty::get_member_count(local_34);
    if (2 < local_30) {
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        cVar2 = CParty::checkValidUser(local_34,local_2c);
        if (cVar2 == '\x01') {
          local_28 = (CUserCharacInfo *)CParty::get_user(local_34,local_2c);
          if (local_28 != (CUserCharacInfo *)0x0) {
            if (local_2c == 0) {
              local_74[0x32] = CUserCharacInfo::get_charac_job(local_28);
              local_74[0x33] = CUserCharacInfo::getCurCharFirstGrowType(local_28);
              local_1c = (char *)0x0;
              local_74[0] = '\0';
              local_74[1] = '\0';
              local_74[2] = '\0';
              local_74[3] = '\0';
              local_74[4] = '\0';
              local_74[5] = '\0';
              local_74[6] = '\0';
              local_74[7] = '\0';
              local_74[8] = '\0';
              local_74[9] = '\0';
              local_74[10] = '\0';
              local_74[0xb] = '\0';
              local_74[0xc] = '\0';
              local_74[0xd] = '\0';
              local_74[0xe] = '\0';
              local_74[0xf] = '\0';
              local_18 = 0;
              local_14 = 0;
              CNetwork<4096,450000>::GetPeerIP2
                        ((CNetwork<4096,450000> *)(local_28 + 0xe0),local_74,0x10);
              sVar4 = strlen(local_74);
              if (sVar4 < 9) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_1c = (char *)std::strrchr(local_74,0x2e);
              if (local_1c == (char *)0x0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_18 = strlen(local_74);
              local_14 = strlen(local_1c);
              strncpy(local_74 + 0x20,local_74,local_18 - local_14);
              local_10 = (SkillSlot *)0x0;
              local_10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(local_28);
              if (local_10 == (SkillSlot *)0x0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_40 = SkillSlot::get_skill_index(local_10,0);
              local_3c = SkillSlot::get_skill_index(local_10,1);
              local_38 = SkillSlot::get_skill_index(local_10,2);
            }
            else {
              iVar6 = (int)local_74[0x32];
              iVar3 = CUserCharacInfo::get_charac_job(local_28);
              if (iVar6 == iVar3) {
                cVar2 = CUserCharacInfo::getCurCharFirstGrowType(local_28);
                if (cVar2 != local_74[0x33]) goto LAB_08264d1f;
                bVar1 = false;
              }
              else {
LAB_08264d1f:
                bVar1 = true;
              }
              if (bVar1) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_24 = 0;
              local_74[0x10] = '\0';
              local_74[0x11] = '\0';
              local_74[0x12] = '\0';
              local_74[0x13] = '\0';
              local_74[0x14] = '\0';
              local_74[0x15] = '\0';
              local_74[0x16] = '\0';
              local_74[0x17] = '\0';
              local_74[0x18] = '\0';
              local_74[0x19] = '\0';
              local_74[0x1a] = '\0';
              local_74[0x1b] = '\0';
              local_74[0x1c] = '\0';
              local_74[0x1d] = '\0';
              local_74[0x1e] = '\0';
              local_74[0x1f] = '\0';
              CNetwork<4096,450000>::GetPeerIP2
                        ((CNetwork<4096,450000> *)(local_28 + 0xe0),local_74 + 0x10,0x10);
              local_24 = strlen(local_74 + 0x20);
              iVar3 = strncmp(local_74 + 0x20,local_74 + 0x10,local_24);
              if (iVar3 != 0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_20 = (SkillSlot *)0x0;
              local_20 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(local_28);
              if (local_20 == (SkillSlot *)0x0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              iVar3 = SkillSlot::get_skill_index(local_20,0);
              if (iVar3 == local_40) {
                iVar3 = SkillSlot::get_skill_index(local_20,1);
                if (iVar3 != local_3c) goto LAB_08264e27;
                iVar3 = SkillSlot::get_skill_index(local_20,2);
                if (iVar3 != local_38) goto LAB_08264e27;
                bVar1 = false;
              }
              else {
LAB_08264e27:
                bVar1 = true;
              }
              if (bVar1) {
                local_74[0x30] = '\0';
              }
            }
          }
        }
      }
      if (local_74[0x31] != '\0') {
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x330,1,0,0);
        if (local_74[0x30] != '\0') {
          pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x32f,1,0,0);
        }
      }
    }
  }
  return;
}
```
