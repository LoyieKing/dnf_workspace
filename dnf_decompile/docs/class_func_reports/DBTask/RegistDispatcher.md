# RegistDispatcher

`_ZN6DBTask16RegistDispatcherEv`

`DBTask::RegistDispatcher()`

| 类 | 地址 |
|---|---|
| `DBTask` | `0x083fbfee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fbfee  _ZN6DBTask16RegistDispatcherEv
#           DBTask::RegistDispatcher()
# range [0x083fbfee, 0x083ff155]
083fbfee +0x0000:  push   %ebp
083fbfef +0x0001:  mov    %esp,%ebp
083fbff1 +0x0003:  push   %edi
083fbff2 +0x0004:  push   %esi
083fbff3 +0x0005:  push   %ebx
083fbff4 +0x0006:  sub    $0x3c,%esp
083fbff7 +0x0009:  movl   $0x0,-0x1c(%ebp)
083fbffe +0x0010:  jmp    083fc012 <+0x24>
083fc000 +0x0012:  mov    -0x1c(%ebp),%edx
083fc003 +0x0015:  mov    0x8(%ebp),%eax
083fc006 +0x0018:  movl   $0x0,0x4(%eax,%edx,4)
083fc00e +0x0020:  addl   $0x1,-0x1c(%ebp)
083fc012 +0x0024:  cmpl   $0x353,-0x1c(%ebp)
083fc019 +0x002b:  setle  %al
083fc01c +0x002e:  test   %al,%al
083fc01e +0x0030:  jne    083fc000 <+0x12>
083fc020 +0x0032:  movl   $0x4,(%esp)
083fc027 +0x0039:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc02c +0x003e:  mov    %eax,%ebx
083fc02e +0x0040:  mov    %ebx,%eax
083fc030 +0x0042:  mov    %eax,(%esp)
083fc033 +0x0045:  call   0840f48e <_ZN8DB_LoginC1Ev>  ; DB_Login::DB_Login()
083fc038 +0x004a:  mov    %ebx,%eax
083fc03a +0x004c:  mov    %eax,%edx
083fc03c +0x004e:  mov    0x8(%ebp),%eax
083fc03f +0x0051:  mov    %edx,0x10(%eax)
083fc042 +0x0054:  movl   $0x4,(%esp)
083fc049 +0x005b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc04e +0x0060:  mov    %eax,%ebx
083fc050 +0x0062:  mov    %ebx,%eax
083fc052 +0x0064:  mov    %eax,(%esp)
083fc055 +0x0067:  call   08400cc2 <_ZN15DB_CreateCharacC1Ev>  ; DB_CreateCharac::DB_CreateCharac()
083fc05a +0x006c:  mov    %ebx,%eax
083fc05c +0x006e:  mov    %eax,%edx
083fc05e +0x0070:  mov    0x8(%ebp),%eax
083fc061 +0x0073:  mov    %edx,0x14(%eax)
083fc064 +0x0076:  movl   $0x4,(%esp)
083fc06b +0x007d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc070 +0x0082:  mov    %eax,%ebx
083fc072 +0x0084:  mov    %ebx,%eax
083fc074 +0x0086:  mov    %eax,(%esp)
083fc077 +0x0089:  call   08402bce <_ZN15DB_DeleteCharacC1Ev>  ; DB_DeleteCharac::DB_DeleteCharac()
083fc07c +0x008e:  mov    %ebx,%eax
083fc07e +0x0090:  mov    %eax,%edx
083fc080 +0x0092:  mov    0x8(%ebp),%eax
083fc083 +0x0095:  mov    %edx,0x18(%eax)
083fc086 +0x0098:  movl   $0x4,(%esp)
083fc08d +0x009f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc092 +0x00a4:  mov    %eax,%ebx
083fc094 +0x00a6:  mov    %ebx,%eax
083fc096 +0x00a8:  mov    %eax,(%esp)
083fc099 +0x00ab:  call   0844d85c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x472>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x472
083fc09e +0x00b0:  mov    %ebx,%eax
083fc0a0 +0x00b2:  mov    %eax,%edx
083fc0a2 +0x00b4:  mov    0x8(%ebp),%eax
083fc0a5 +0x00b7:  mov    %edx,0x1c(%eax)
083fc0a8 +0x00ba:  movl   $0x4,(%esp)
083fc0af +0x00c1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc0b4 +0x00c6:  mov    %eax,%ebx
083fc0b6 +0x00c8:  mov    %ebx,%eax
083fc0b8 +0x00ca:  mov    %eax,(%esp)
083fc0bb +0x00cd:  call   0844d8c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4dc
083fc0c0 +0x00d2:  mov    %ebx,%eax
083fc0c2 +0x00d4:  mov    %eax,%edx
083fc0c4 +0x00d6:  mov    0x8(%ebp),%eax
083fc0c7 +0x00d9:  mov    %edx,0x20(%eax)
083fc0ca +0x00dc:  movl   $0x4,(%esp)
083fc0d1 +0x00e3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc0d6 +0x00e8:  mov    %eax,%ebx
083fc0d8 +0x00ea:  mov    %ebx,%eax
083fc0da +0x00ec:  mov    %eax,(%esp)
083fc0dd +0x00ef:  call   0840a604 <_ZN16DB_LoadInventoryC1Ev>  ; DB_LoadInventory::DB_LoadInventory()
083fc0e2 +0x00f4:  mov    %ebx,%eax
083fc0e4 +0x00f6:  mov    %eax,%edx
083fc0e6 +0x00f8:  mov    0x8(%ebp),%eax
083fc0e9 +0x00fb:  mov    %edx,0x24(%eax)
083fc0ec +0x00fe:  movl   $0x4,(%esp)
083fc0f3 +0x0105:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc0f8 +0x010a:  mov    %eax,%ebx
083fc0fa +0x010c:  mov    %ebx,%eax
083fc0fc +0x010e:  mov    %eax,(%esp)
083fc0ff +0x0111:  call   0844d930 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x546>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x546
083fc104 +0x0116:  mov    %ebx,%eax
083fc106 +0x0118:  mov    %eax,%edx
083fc108 +0x011a:  mov    0x8(%ebp),%eax
083fc10b +0x011d:  mov    %edx,0x2c(%eax)
083fc10e +0x0120:  movl   $0x4,(%esp)
083fc115 +0x0127:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc11a +0x012c:  mov    %eax,%ebx
083fc11c +0x012e:  mov    %ebx,%eax
083fc11e +0x0130:  mov    %eax,(%esp)
083fc121 +0x0133:  call   0844dd7a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x990>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x990
083fc126 +0x0138:  mov    %ebx,%eax
083fc128 +0x013a:  mov    %eax,%edx
083fc12a +0x013c:  mov    0x8(%ebp),%eax
083fc12d +0x013f:  mov    %edx,0x48(%eax)
083fc130 +0x0142:  movl   $0x4,(%esp)
083fc137 +0x0149:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc13c +0x014e:  mov    %eax,%ebx
083fc13e +0x0150:  mov    %ebx,%eax
083fc140 +0x0152:  mov    %eax,(%esp)
083fc143 +0x0155:  call   0844dd96 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x9ac>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x9ac
083fc148 +0x015a:  mov    %ebx,%eax
083fc14a +0x015c:  mov    %eax,%edx
083fc14c +0x015e:  mov    0x8(%ebp),%eax
083fc14f +0x0161:  mov    %edx,0x50(%eax)
083fc152 +0x0164:  movl   $0x4,(%esp)
083fc159 +0x016b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc15e +0x0170:  mov    %eax,%ebx
083fc160 +0x0172:  mov    %ebx,%eax
083fc162 +0x0174:  mov    %eax,(%esp)
083fc165 +0x0177:  call   0844ddb2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x9c8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x9c8
083fc16a +0x017c:  mov    %ebx,%eax
083fc16c +0x017e:  mov    %eax,%edx
083fc16e +0x0180:  mov    0x8(%ebp),%eax
083fc171 +0x0183:  mov    %edx,0x54(%eax)
083fc174 +0x0186:  movl   $0x4,(%esp)
083fc17b +0x018d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc180 +0x0192:  mov    %eax,%ebx
083fc182 +0x0194:  mov    %ebx,%eax
083fc184 +0x0196:  mov    %eax,(%esp)
083fc187 +0x0199:  call   0844ddce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x9e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x9e4
083fc18c +0x019e:  mov    %ebx,%eax
083fc18e +0x01a0:  mov    %eax,%edx
083fc190 +0x01a2:  mov    0x8(%ebp),%eax
083fc193 +0x01a5:  mov    %edx,0x58(%eax)
083fc196 +0x01a8:  movl   $0x4,(%esp)
083fc19d +0x01af:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc1a2 +0x01b4:  mov    %eax,%ebx
083fc1a4 +0x01b6:  mov    %ebx,%eax
083fc1a6 +0x01b8:  mov    %eax,(%esp)
083fc1a9 +0x01bb:  call   08403b84 <_ZN10DB_LoadEtcC1Ev>  ; DB_LoadEtc::DB_LoadEtc()
083fc1ae +0x01c0:  mov    %ebx,%eax
083fc1b0 +0x01c2:  mov    %eax,%edx
083fc1b2 +0x01c4:  mov    0x8(%ebp),%eax
083fc1b5 +0x01c7:  mov    %edx,0x84(%eax)
083fc1bb +0x01cd:  movl   $0x4,(%esp)
083fc1c2 +0x01d4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc1c7 +0x01d9:  mov    %eax,%ebx
083fc1c9 +0x01db:  mov    %ebx,%eax
083fc1cb +0x01dd:  mov    %eax,(%esp)
083fc1ce +0x01e0:  call   08415c2e <_ZN13DB_SaveCharacC1Ev>  ; DB_SaveCharac::DB_SaveCharac()
083fc1d3 +0x01e5:  mov    %ebx,%eax
083fc1d5 +0x01e7:  mov    %eax,%edx
083fc1d7 +0x01e9:  mov    0x8(%ebp),%eax
083fc1da +0x01ec:  mov    %edx,0x8c(%eax)
083fc1e0 +0x01f2:  movl   $0x4,(%esp)
083fc1e7 +0x01f9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc1ec +0x01fe:  mov    %eax,%ebx
083fc1ee +0x0200:  mov    %ebx,%eax
083fc1f0 +0x0202:  mov    %eax,(%esp)
083fc1f3 +0x0205:  call   08416a42 <_ZN12DB_SaveInvenC1Ev>  ; DB_SaveInven::DB_SaveInven()
083fc1f8 +0x020a:  mov    %ebx,%eax
083fc1fa +0x020c:  mov    %eax,%edx
083fc1fc +0x020e:  mov    0x8(%ebp),%eax
083fc1ff +0x0211:  mov    %edx,0x90(%eax)
083fc205 +0x0217:  movl   $0x4,(%esp)
083fc20c +0x021e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc211 +0x0223:  mov    %eax,%ebx
083fc213 +0x0225:  mov    %ebx,%eax
083fc215 +0x0227:  mov    %eax,(%esp)
083fc218 +0x022a:  call   08417770 <_ZN12DB_SaveSkillC1Ev>  ; DB_SaveSkill::DB_SaveSkill()
083fc21d +0x022f:  mov    %ebx,%eax
083fc21f +0x0231:  mov    %eax,%edx
083fc221 +0x0233:  mov    0x8(%ebp),%eax
083fc224 +0x0236:  mov    %edx,0x94(%eax)
083fc22a +0x023c:  movl   $0x4,(%esp)
083fc231 +0x0243:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc236 +0x0248:  mov    %eax,%ebx
083fc238 +0x024a:  mov    %ebx,%eax
083fc23a +0x024c:  mov    %eax,(%esp)
083fc23d +0x024f:  call   0841720e <_ZN10DB_SavePvpC1Ev>  ; DB_SavePvp::DB_SavePvp()
083fc242 +0x0254:  mov    %ebx,%eax
083fc244 +0x0256:  mov    %eax,%edx
083fc246 +0x0258:  mov    0x8(%ebp),%eax
083fc249 +0x025b:  mov    %edx,0x98(%eax)
083fc24f +0x0261:  movl   $0x4,(%esp)
083fc256 +0x0268:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc25b +0x026d:  mov    %eax,%ebx
083fc25d +0x026f:  mov    %ebx,%eax
083fc25f +0x0271:  mov    %eax,(%esp)
083fc262 +0x0274:  call   08418b74 <_ZN14DB_UpdateQuestC1Ev>  ; DB_UpdateQuest::DB_UpdateQuest()
083fc267 +0x0279:  mov    %ebx,%eax
083fc269 +0x027b:  mov    %eax,%edx
083fc26b +0x027d:  mov    0x8(%ebp),%eax
083fc26e +0x0280:  mov    %edx,0xa8(%eax)
083fc274 +0x0286:  movl   $0x4,(%esp)
083fc27b +0x028d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc280 +0x0292:  mov    %eax,%ebx
083fc282 +0x0294:  mov    %ebx,%eax
083fc284 +0x0296:  mov    %eax,(%esp)
083fc287 +0x0299:  call   08418130 <_ZN17DB_UpdateGrowTypeC1Ev>  ; DB_UpdateGrowType::DB_UpdateGrowType()
083fc28c +0x029e:  mov    %ebx,%eax
083fc28e +0x02a0:  mov    %eax,%edx
083fc290 +0x02a2:  mov    0x8(%ebp),%eax
083fc293 +0x02a5:  mov    %edx,0xac(%eax)
083fc299 +0x02ab:  movl   $0x4,(%esp)
083fc2a0 +0x02b2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc2a5 +0x02b7:  mov    %eax,%ebx
083fc2a7 +0x02b9:  mov    %ebx,%eax
083fc2a9 +0x02bb:  mov    %eax,(%esp)
083fc2ac +0x02be:  call   0844da04 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x61a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x61a
083fc2b1 +0x02c3:  mov    %ebx,%eax
083fc2b3 +0x02c5:  mov    %eax,%edx
083fc2b5 +0x02c7:  mov    0x8(%ebp),%eax
083fc2b8 +0x02ca:  mov    %edx,0xb0(%eax)
083fc2be +0x02d0:  movl   $0x4,(%esp)
083fc2c5 +0x02d7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc2ca +0x02dc:  mov    %eax,%ebx
083fc2cc +0x02de:  mov    %ebx,%eax
083fc2ce +0x02e0:  mov    %eax,(%esp)
083fc2d1 +0x02e3:  call   084183d8 <_ZN15DB_UpdateLogoutC1Ev>  ; DB_UpdateLogout::DB_UpdateLogout()
083fc2d6 +0x02e8:  mov    %ebx,%eax
083fc2d8 +0x02ea:  mov    %eax,%edx
083fc2da +0x02ec:  mov    0x8(%ebp),%eax
083fc2dd +0x02ef:  mov    %edx,0xb4(%eax)
083fc2e3 +0x02f5:  movl   $0x4,(%esp)
083fc2ea +0x02fc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc2ef +0x0301:  mov    %eax,%ebx
083fc2f1 +0x0303:  mov    %ebx,%eax
083fc2f3 +0x0305:  mov    %eax,(%esp)
083fc2f6 +0x0308:  call   08417f4a <_ZN16DB_UpdateChannelC1Ev>  ; DB_UpdateChannel::DB_UpdateChannel()
083fc2fb +0x030d:  mov    %ebx,%eax
083fc2fd +0x030f:  mov    %eax,%edx
083fc2ff +0x0311:  mov    0x8(%ebp),%eax
083fc302 +0x0314:  mov    %edx,0xbc(%eax)
083fc308 +0x031a:  movl   $0x4,(%esp)
083fc30f +0x0321:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc314 +0x0326:  mov    %eax,%ebx
083fc316 +0x0328:  mov    %ebx,%eax
083fc318 +0x032a:  mov    %eax,(%esp)
083fc31b +0x032d:  call   08402892 <_ZN16DB_DeleteChannelC1Ev>  ; DB_DeleteChannel::DB_DeleteChannel()
083fc320 +0x0332:  mov    %ebx,%eax
083fc322 +0x0334:  mov    %eax,%edx
083fc324 +0x0336:  mov    0x8(%ebp),%eax
083fc327 +0x0339:  mov    %edx,0xc0(%eax)
083fc32d +0x033f:  movl   $0x4,(%esp)
083fc334 +0x0346:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc339 +0x034b:  mov    %eax,%ebx
083fc33b +0x034d:  mov    %ebx,%eax
083fc33d +0x034f:  mov    %eax,(%esp)
083fc340 +0x0352:  call   0840364c <_ZN16DB_InsertChannelC1Ev>  ; DB_InsertChannel::DB_InsertChannel()
083fc345 +0x0357:  mov    %ebx,%eax
083fc347 +0x0359:  mov    %eax,%edx
083fc349 +0x035b:  mov    0x8(%ebp),%eax
083fc34c +0x035e:  mov    %edx,0xb8(%eax)
083fc352 +0x0364:  movl   $0x4,(%esp)
083fc359 +0x036b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc35e +0x0370:  mov    %eax,%ebx
083fc360 +0x0372:  mov    %ebx,%eax
083fc362 +0x0374:  mov    %eax,(%esp)
083fc365 +0x0377:  call   083ffd50 <_ZN19DB_AvatarItemInsertC1Ev>  ; DB_AvatarItemInsert::DB_AvatarItemInsert()
083fc36a +0x037c:  mov    %ebx,%eax
083fc36c +0x037e:  mov    %eax,%edx
083fc36e +0x0380:  mov    0x8(%ebp),%eax
083fc371 +0x0383:  mov    %edx,0xc8(%eax)
083fc377 +0x0389:  movl   $0x4,(%esp)
083fc37e +0x0390:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc383 +0x0395:  mov    %eax,%ebx
083fc385 +0x0397:  mov    %ebx,%eax
083fc387 +0x0399:  mov    %eax,(%esp)
083fc38a +0x039c:  call   083ffc42 <_ZN16DB_AvatarItemDelC1Ev>  ; DB_AvatarItemDel::DB_AvatarItemDel()
083fc38f +0x03a1:  mov    %ebx,%eax
083fc391 +0x03a3:  mov    %eax,%edx
083fc393 +0x03a5:  mov    0x8(%ebp),%eax
083fc396 +0x03a8:  mov    %edx,0xd0(%eax)
083fc39c +0x03ae:  movl   $0x4,(%esp)
083fc3a3 +0x03b5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc3a8 +0x03ba:  mov    %eax,%ebx
083fc3aa +0x03bc:  mov    %ebx,%eax
083fc3ac +0x03be:  mov    %eax,(%esp)
083fc3af +0x03c1:  call   0840031e <_ZN17DB_AvatarItemMoveC1Ev>  ; DB_AvatarItemMove::DB_AvatarItemMove()
083fc3b4 +0x03c6:  mov    %ebx,%eax
083fc3b6 +0x03c8:  mov    %eax,%edx
083fc3b8 +0x03ca:  mov    0x8(%ebp),%eax
083fc3bb +0x03cd:  mov    %edx,0xcc(%eax)
083fc3c1 +0x03d3:  movl   $0x4,(%esp)
083fc3c8 +0x03da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc3cd +0x03df:  mov    %eax,%ebx
083fc3cf +0x03e1:  mov    %ebx,%eax
083fc3d1 +0x03e3:  mov    %eax,(%esp)
083fc3d4 +0x03e6:  call   083ffab8 <_ZN21DB_AvatarExtendPeriodC1Ev>  ; DB_AvatarExtendPeriod::DB_AvatarExtendPeriod()
083fc3d9 +0x03eb:  mov    %ebx,%eax
083fc3db +0x03ed:  mov    %eax,%edx
083fc3dd +0x03ef:  mov    0x8(%ebp),%eax
083fc3e0 +0x03f2:  mov    %edx,0xd4(%eax)
083fc3e6 +0x03f8:  movl   $0x4,(%esp)
083fc3ed +0x03ff:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc3f2 +0x0404:  mov    %eax,%ebx
083fc3f4 +0x0406:  mov    %ebx,%eax
083fc3f6 +0x0408:  mov    %eax,(%esp)
083fc3f9 +0x040b:  call   0844d7f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x408>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x408
083fc3fe +0x0410:  mov    %ebx,%eax
083fc400 +0x0412:  mov    %eax,%edx
083fc402 +0x0414:  mov    0x8(%ebp),%eax
083fc405 +0x0417:  mov    %edx,0xd8(%eax)
083fc40b +0x041d:  movl   $0x4,(%esp)
083fc412 +0x0424:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc417 +0x0429:  mov    %eax,%ebx
083fc419 +0x042b:  mov    %ebx,%eax
083fc41b +0x042d:  mov    %eax,(%esp)
083fc41e +0x0430:  call   0844e0aa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xcc0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xcc0
083fc423 +0x0435:  mov    %ebx,%eax
083fc425 +0x0437:  mov    %eax,%edx
083fc427 +0x0439:  mov    0x8(%ebp),%eax
083fc42a +0x043c:  mov    %edx,0xdc(%eax)
083fc430 +0x0442:  movl   $0x4,(%esp)
083fc437 +0x0449:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc43c +0x044e:  mov    %eax,%ebx
083fc43e +0x0450:  mov    %ebx,%eax
083fc440 +0x0452:  mov    %eax,(%esp)
083fc443 +0x0455:  call   0844d99a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5b0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5b0
083fc448 +0x045a:  mov    %ebx,%eax
083fc44a +0x045c:  mov    %eax,%edx
083fc44c +0x045e:  mov    0x8(%ebp),%eax
083fc44f +0x0461:  mov    %edx,0x9c(%eax)
083fc455 +0x0467:  movl   $0x4,(%esp)
083fc45c +0x046e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc461 +0x0473:  mov    %eax,%ebx
083fc463 +0x0475:  mov    %ebx,%eax
083fc465 +0x0477:  mov    %eax,(%esp)
083fc468 +0x047a:  call   08403a4e <_ZN15DB_InsertTicketC1Ev>  ; DB_InsertTicket::DB_InsertTicket()
083fc46d +0x047f:  mov    %ebx,%eax
083fc46f +0x0481:  mov    %eax,%edx
083fc471 +0x0483:  mov    0x8(%ebp),%eax
083fc474 +0x0486:  mov    %edx,0xa4(%eax)
083fc47a +0x048c:  movl   $0x4,(%esp)
083fc481 +0x0493:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc486 +0x0498:  mov    %eax,%ebx
083fc488 +0x049a:  mov    %ebx,%eax
083fc48a +0x049c:  mov    %eax,(%esp)
083fc48d +0x049f:  call   08419572 <_ZN13DB_LoadTicketC1Ev>  ; DB_LoadTicket::DB_LoadTicket()
083fc492 +0x04a4:  mov    %ebx,%eax
083fc494 +0x04a6:  mov    %eax,%edx
083fc496 +0x04a8:  mov    0x8(%ebp),%eax
083fc499 +0x04ab:  mov    %edx,0x30(%eax)
083fc49c +0x04ae:  movl   $0x4,(%esp)
083fc4a3 +0x04b5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc4a8 +0x04ba:  mov    %eax,%ebx
083fc4aa +0x04bc:  mov    %ebx,%eax
083fc4ac +0x04be:  mov    %eax,(%esp)
083fc4af +0x04c1:  call   08419852 <_ZN19DB_LoadDungeonClearC1Ev>  ; DB_LoadDungeonClear::DB_LoadDungeonClear()
083fc4b4 +0x04c6:  mov    %ebx,%eax
083fc4b6 +0x04c8:  mov    %eax,%edx
083fc4b8 +0x04ca:  mov    0x8(%ebp),%eax
083fc4bb +0x04cd:  mov    %edx,0x34(%eax)
083fc4be +0x04d0:  movl   $0x4,(%esp)
083fc4c5 +0x04d7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc4ca +0x04dc:  mov    %eax,%ebx
083fc4cc +0x04de:  mov    %ebx,%eax
083fc4ce +0x04e0:  mov    %eax,(%esp)
083fc4d1 +0x04e3:  call   08419fec <_ZN19DB_SaveDungeonClearC1Ev>  ; DB_SaveDungeonClear::DB_SaveDungeonClear()
083fc4d6 +0x04e8:  mov    %ebx,%eax
083fc4d8 +0x04ea:  mov    %eax,%edx
083fc4da +0x04ec:  mov    0x8(%ebp),%eax
083fc4dd +0x04ef:  mov    %edx,0xa0(%eax)
083fc4e3 +0x04f5:  movl   $0x4,(%esp)
083fc4ea +0x04fc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc4ef +0x0501:  mov    %eax,%ebx
083fc4f1 +0x0503:  mov    %ebx,%eax
083fc4f3 +0x0505:  mov    %eax,(%esp)
083fc4f6 +0x0508:  call   0841a284 <_ZN18DB_TerminateServerC1Ev>  ; DB_TerminateServer::DB_TerminateServer()
083fc4fb +0x050d:  mov    %ebx,%eax
083fc4fd +0x050f:  mov    %eax,%edx
083fc4ff +0x0511:  mov    0x8(%ebp),%eax
083fc502 +0x0514:  mov    %edx,0x100(%eax)
083fc508 +0x051a:  movl   $0x4,(%esp)
083fc50f +0x0521:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc514 +0x0526:  mov    %eax,%ebx
083fc516 +0x0528:  mov    %ebx,%eax
083fc518 +0x052a:  mov    %eax,(%esp)
083fc51b +0x052d:  call   08417a12 <_ZN15DB_StatBreakJarC1Ev>  ; DB_StatBreakJar::DB_StatBreakJar()
083fc520 +0x0532:  mov    %ebx,%eax
083fc522 +0x0534:  mov    %eax,%edx
083fc524 +0x0536:  mov    0x8(%ebp),%eax
083fc527 +0x0539:  mov    %edx,0xe0(%eax)
083fc52d +0x053f:  movl   $0x4,(%esp)
083fc534 +0x0546:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc539 +0x054b:  mov    %eax,%ebx
083fc53b +0x054d:  mov    %ebx,%eax
083fc53d +0x054f:  mov    %eax,(%esp)
083fc540 +0x0552:  call   08417b82 <_ZN18DB_StatCompositionC1Ev>  ; DB_StatComposition::DB_StatComposition()
083fc545 +0x0557:  mov    %ebx,%eax
083fc547 +0x0559:  mov    %eax,%edx
083fc549 +0x055b:  mov    0x8(%ebp),%eax
083fc54c +0x055e:  mov    %edx,0xe4(%eax)
083fc552 +0x0564:  movl   $0x4,(%esp)
083fc559 +0x056b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc55e +0x0570:  mov    %eax,%ebx
083fc560 +0x0572:  mov    %ebx,%eax
083fc562 +0x0574:  mov    %eax,(%esp)
083fc565 +0x0577:  call   08417b04 <_ZN14DB_StatCoinUseC1Ev>  ; DB_StatCoinUse::DB_StatCoinUse()
083fc56a +0x057c:  mov    %ebx,%eax
083fc56c +0x057e:  mov    %eax,%edx
083fc56e +0x0580:  mov    0x8(%ebp),%eax
083fc571 +0x0583:  mov    %edx,0xe8(%eax)
083fc577 +0x0589:  movl   $0x4,(%esp)
083fc57e +0x0590:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc583 +0x0595:  mov    %eax,%ebx
083fc585 +0x0597:  mov    %ebx,%eax
083fc587 +0x0599:  mov    %eax,(%esp)
083fc58a +0x059c:  call   08417e58 <_ZN14DB_StatPvpPlayC1Ev>  ; DB_StatPvpPlay::DB_StatPvpPlay()
083fc58f +0x05a1:  mov    %ebx,%eax
083fc591 +0x05a3:  mov    %eax,%edx
083fc593 +0x05a5:  mov    0x8(%ebp),%eax
083fc596 +0x05a8:  mov    %edx,0xec(%eax)
083fc59c +0x05ae:  movl   $0x4,(%esp)
083fc5a3 +0x05b5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc5a8 +0x05ba:  mov    %eax,%ebx
083fc5aa +0x05bc:  mov    %ebx,%eax
083fc5ac +0x05be:  mov    %eax,(%esp)
083fc5af +0x05c1:  call   08417d66 <_ZN15DB_StatGameRankC1Ev>  ; DB_StatGameRank::DB_StatGameRank()
083fc5b4 +0x05c6:  mov    %ebx,%eax
083fc5b6 +0x05c8:  mov    %eax,%edx
083fc5b8 +0x05ca:  mov    0x8(%ebp),%eax
083fc5bb +0x05cd:  mov    %edx,0xf0(%eax)
083fc5c1 +0x05d3:  movl   $0x4,(%esp)
083fc5c8 +0x05da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc5cd +0x05df:  mov    %eax,%ebx
083fc5cf +0x05e1:  mov    %ebx,%eax
083fc5d1 +0x05e3:  mov    %eax,(%esp)
083fc5d4 +0x05e6:  call   08417c74 <_ZN19DB_StatDungeonClearC1Ev>  ; DB_StatDungeonClear::DB_StatDungeonClear()
083fc5d9 +0x05eb:  mov    %ebx,%eax
083fc5db +0x05ed:  mov    %eax,%edx
083fc5dd +0x05ef:  mov    0x8(%ebp),%eax
083fc5e0 +0x05f2:  mov    %edx,0xf4(%eax)
083fc5e6 +0x05f8:  movl   $0x4,(%esp)
083fc5ed +0x05ff:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc5f2 +0x0604:  mov    %eax,%ebx
083fc5f4 +0x0606:  mov    %ebx,%eax
083fc5f6 +0x0608:  mov    %eax,(%esp)
083fc5f9 +0x060b:  call   0844e0c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xcdc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xcdc
083fc5fe +0x0610:  mov    %ebx,%eax
083fc600 +0x0612:  mov    %eax,%edx
083fc602 +0x0614:  mov    0x8(%ebp),%eax
083fc605 +0x0617:  mov    %edx,0x144(%eax)
083fc60b +0x061d:  movl   $0x4,(%esp)
083fc612 +0x0624:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc617 +0x0629:  mov    %eax,%ebx
083fc619 +0x062b:  mov    %ebx,%eax
083fc61b +0x062d:  mov    %eax,(%esp)
083fc61e +0x0630:  call   0844e0e2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xcf8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xcf8
083fc623 +0x0635:  mov    %ebx,%eax
083fc625 +0x0637:  mov    %eax,%edx
083fc627 +0x0639:  mov    0x8(%ebp),%eax
083fc62a +0x063c:  mov    %edx,0x14c(%eax)
083fc630 +0x0642:  movl   $0x4,(%esp)
083fc637 +0x0649:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc63c +0x064e:  mov    %eax,%ebx
083fc63e +0x0650:  mov    %ebx,%eax
083fc640 +0x0652:  mov    %eax,(%esp)
083fc643 +0x0655:  call   0844e0fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd14>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd14
083fc648 +0x065a:  mov    %ebx,%eax
083fc64a +0x065c:  mov    %eax,%edx
083fc64c +0x065e:  mov    0x8(%ebp),%eax
083fc64f +0x0661:  mov    %edx,0x150(%eax)
083fc655 +0x0667:  movl   $0x4,(%esp)
083fc65c +0x066e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc661 +0x0673:  mov    %eax,%ebx
083fc663 +0x0675:  mov    %ebx,%eax
083fc665 +0x0677:  mov    %eax,(%esp)
083fc668 +0x067a:  call   0844da6e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x684>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x684
083fc66d +0x067f:  mov    %ebx,%eax
083fc66f +0x0681:  mov    %eax,%edx
083fc671 +0x0683:  mov    0x8(%ebp),%eax
083fc674 +0x0686:  mov    %edx,0x128(%eax)
083fc67a +0x068c:  movl   $0x4,(%esp)
083fc681 +0x0693:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc686 +0x0698:  mov    %eax,%ebx
083fc688 +0x069a:  mov    %ebx,%eax
083fc68a +0x069c:  mov    %eax,(%esp)
083fc68d +0x069f:  call   0844dad8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6ee>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6ee
083fc692 +0x06a4:  mov    %ebx,%eax
083fc694 +0x06a6:  mov    %eax,%edx
083fc696 +0x06a8:  mov    0x8(%ebp),%eax
083fc699 +0x06ab:  mov    %edx,0x134(%eax)
083fc69f +0x06b1:  movl   $0x4,(%esp)
083fc6a6 +0x06b8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc6ab +0x06bd:  mov    %eax,%ebx
083fc6ad +0x06bf:  mov    %ebx,%eax
083fc6af +0x06c1:  mov    %eax,(%esp)
083fc6b2 +0x06c4:  call   0844db42 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x758>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x758
083fc6b7 +0x06c9:  mov    %ebx,%eax
083fc6b9 +0x06cb:  mov    %eax,%edx
083fc6bb +0x06cd:  mov    0x8(%ebp),%eax
083fc6be +0x06d0:  mov    %edx,0x138(%eax)
083fc6c4 +0x06d6:  movl   $0x4,(%esp)
083fc6cb +0x06dd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc6d0 +0x06e2:  mov    %eax,%ebx
083fc6d2 +0x06e4:  mov    %ebx,%eax
083fc6d4 +0x06e6:  mov    %eax,(%esp)
083fc6d7 +0x06e9:  call   0844dbac <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7c2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7c2
083fc6dc +0x06ee:  mov    %ebx,%eax
083fc6de +0x06f0:  mov    %eax,%edx
083fc6e0 +0x06f2:  mov    0x8(%ebp),%eax
083fc6e3 +0x06f5:  mov    %edx,0x13c(%eax)
083fc6e9 +0x06fb:  movl   $0x4,(%esp)
083fc6f0 +0x0702:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc6f5 +0x0707:  mov    %eax,%ebx
083fc6f7 +0x0709:  mov    %ebx,%eax
083fc6f9 +0x070b:  mov    %eax,(%esp)
083fc6fc +0x070e:  call   0844e11a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd30>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd30
083fc701 +0x0713:  mov    %ebx,%eax
083fc703 +0x0715:  mov    %eax,%edx
083fc705 +0x0717:  mov    0x8(%ebp),%eax
083fc708 +0x071a:  mov    %edx,0x148(%eax)
083fc70e +0x0720:  movl   $0x4,(%esp)
083fc715 +0x0727:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc71a +0x072c:  mov    %eax,%ebx
083fc71c +0x072e:  mov    %ebx,%eax
083fc71e +0x0730:  mov    %eax,(%esp)
083fc721 +0x0733:  call   0844e136 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd4c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd4c
083fc726 +0x0738:  mov    %ebx,%eax
083fc728 +0x073a:  mov    %eax,%edx
083fc72a +0x073c:  mov    0x8(%ebp),%eax
083fc72d +0x073f:  mov    %edx,0x154(%eax)
083fc733 +0x0745:  movl   $0x4,(%esp)
083fc73a +0x074c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc73f +0x0751:  mov    %eax,%ebx
083fc741 +0x0753:  mov    %ebx,%eax
083fc743 +0x0755:  mov    %eax,(%esp)
083fc746 +0x0758:  call   0844e152 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd68>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd68
083fc74b +0x075d:  mov    %ebx,%eax
083fc74d +0x075f:  mov    %eax,%edx
083fc74f +0x0761:  mov    0x8(%ebp),%eax
083fc752 +0x0764:  mov    %edx,0x190(%eax)
083fc758 +0x076a:  movl   $0x4,(%esp)
083fc75f +0x0771:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc764 +0x0776:  mov    %eax,%ebx
083fc766 +0x0778:  mov    %ebx,%eax
083fc768 +0x077a:  mov    %eax,(%esp)
083fc76b +0x077d:  call   0844e16e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd84>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd84
083fc770 +0x0782:  mov    %ebx,%eax
083fc772 +0x0784:  mov    %eax,%edx
083fc774 +0x0786:  mov    0x8(%ebp),%eax
083fc777 +0x0789:  mov    %edx,0x1a0(%eax)
083fc77d +0x078f:  movl   $0x4,(%esp)
083fc784 +0x0796:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc789 +0x079b:  mov    %eax,%ebx
083fc78b +0x079d:  mov    %ebx,%eax
083fc78d +0x079f:  mov    %eax,(%esp)
083fc790 +0x07a2:  call   0844e18a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xda0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xda0
083fc795 +0x07a7:  mov    %ebx,%eax
083fc797 +0x07a9:  mov    %eax,%edx
083fc799 +0x07ab:  mov    0x8(%ebp),%eax
083fc79c +0x07ae:  mov    %edx,0x1a4(%eax)
083fc7a2 +0x07b4:  movl   $0x4,(%esp)
083fc7a9 +0x07bb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc7ae +0x07c0:  mov    %eax,%ebx
083fc7b0 +0x07c2:  mov    %ebx,%eax
083fc7b2 +0x07c4:  mov    %eax,(%esp)
083fc7b5 +0x07c7:  call   0844e1a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xdbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xdbc
083fc7ba +0x07cc:  mov    %ebx,%eax
083fc7bc +0x07ce:  mov    %eax,%edx
083fc7be +0x07d0:  mov    0x8(%ebp),%eax
083fc7c1 +0x07d3:  mov    %edx,0x1a8(%eax)
083fc7c7 +0x07d9:  movl   $0x4,(%esp)
083fc7ce +0x07e0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc7d3 +0x07e5:  mov    %eax,%ebx
083fc7d5 +0x07e7:  mov    %ebx,%eax
083fc7d7 +0x07e9:  mov    %eax,(%esp)
083fc7da +0x07ec:  call   0844e1c2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xdd8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xdd8
083fc7df +0x07f1:  mov    %ebx,%eax
083fc7e1 +0x07f3:  mov    %eax,%edx
083fc7e3 +0x07f5:  mov    0x8(%ebp),%eax
083fc7e6 +0x07f8:  mov    %edx,0x1ac(%eax)
083fc7ec +0x07fe:  movl   $0x4,(%esp)
083fc7f3 +0x0805:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc7f8 +0x080a:  mov    %eax,%ebx
083fc7fa +0x080c:  mov    %ebx,%eax
083fc7fc +0x080e:  mov    %eax,(%esp)
083fc7ff +0x0811:  call   0844e1de <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xdf4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xdf4
083fc804 +0x0816:  mov    %ebx,%eax
083fc806 +0x0818:  mov    %eax,%edx
083fc808 +0x081a:  mov    0x8(%ebp),%eax
083fc80b +0x081d:  mov    %edx,0x1b0(%eax)
083fc811 +0x0823:  movl   $0x4,(%esp)
083fc818 +0x082a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc81d +0x082f:  mov    %eax,%ebx
083fc81f +0x0831:  mov    %ebx,%eax
083fc821 +0x0833:  mov    %eax,(%esp)
083fc824 +0x0836:  call   0844e1fa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe10>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe10
083fc829 +0x083b:  mov    %ebx,%eax
083fc82b +0x083d:  mov    %eax,%edx
083fc82d +0x083f:  mov    0x8(%ebp),%eax
083fc830 +0x0842:  mov    %edx,0x1e0(%eax)
083fc836 +0x0848:  movl   $0x4,(%esp)
083fc83d +0x084f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc842 +0x0854:  mov    %eax,%ebx
083fc844 +0x0856:  mov    %ebx,%eax
083fc846 +0x0858:  mov    %eax,(%esp)
083fc849 +0x085b:  call   0844e216 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe2c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe2c
083fc84e +0x0860:  mov    %ebx,%eax
083fc850 +0x0862:  mov    %eax,%edx
083fc852 +0x0864:  mov    0x8(%ebp),%eax
083fc855 +0x0867:  mov    %edx,0x1e4(%eax)
083fc85b +0x086d:  movl   $0x4,(%esp)
083fc862 +0x0874:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc867 +0x0879:  mov    %eax,%ebx
083fc869 +0x087b:  mov    %ebx,%eax
083fc86b +0x087d:  mov    %eax,(%esp)
083fc86e +0x0880:  call   0844e232 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe48>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe48
083fc873 +0x0885:  mov    %ebx,%eax
083fc875 +0x0887:  mov    %eax,%edx
083fc877 +0x0889:  mov    0x8(%ebp),%eax
083fc87a +0x088c:  mov    %edx,0x1e8(%eax)
083fc880 +0x0892:  movl   $0x4,(%esp)
083fc887 +0x0899:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc88c +0x089e:  mov    %eax,%ebx
083fc88e +0x08a0:  mov    %ebx,%eax
083fc890 +0x08a2:  mov    %eax,(%esp)
083fc893 +0x08a5:  call   0844e24e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe64>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe64
083fc898 +0x08aa:  mov    %ebx,%eax
083fc89a +0x08ac:  mov    %eax,%edx
083fc89c +0x08ae:  mov    0x8(%ebp),%eax
083fc89f +0x08b1:  mov    %edx,0x1f0(%eax)
083fc8a5 +0x08b7:  movl   $0x4,(%esp)
083fc8ac +0x08be:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc8b1 +0x08c3:  mov    %eax,%ebx
083fc8b3 +0x08c5:  mov    %ebx,%eax
083fc8b5 +0x08c7:  mov    %eax,(%esp)
083fc8b8 +0x08ca:  call   0844e26a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe80>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe80
083fc8bd +0x08cf:  mov    %ebx,%eax
083fc8bf +0x08d1:  mov    %eax,%edx
083fc8c1 +0x08d3:  mov    0x8(%ebp),%eax
083fc8c4 +0x08d6:  mov    %edx,0x1f4(%eax)
083fc8ca +0x08dc:  movl   $0x4,(%esp)
083fc8d1 +0x08e3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc8d6 +0x08e8:  mov    %eax,%ebx
083fc8d8 +0x08ea:  mov    %ebx,%eax
083fc8da +0x08ec:  mov    %eax,(%esp)
083fc8dd +0x08ef:  call   0844e286 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xe9c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xe9c
083fc8e2 +0x08f4:  mov    %ebx,%eax
083fc8e4 +0x08f6:  mov    %eax,%edx
083fc8e6 +0x08f8:  mov    0x8(%ebp),%eax
083fc8e9 +0x08fb:  mov    %edx,0x1f8(%eax)
083fc8ef +0x0901:  movl   $0x4,(%esp)
083fc8f6 +0x0908:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc8fb +0x090d:  mov    %eax,%ebx
083fc8fd +0x090f:  mov    %ebx,%eax
083fc8ff +0x0911:  mov    %eax,(%esp)
083fc902 +0x0914:  call   0844e2a2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xeb8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xeb8
083fc907 +0x0919:  mov    %ebx,%eax
083fc909 +0x091b:  mov    %eax,%edx
083fc90b +0x091d:  mov    0x8(%ebp),%eax
083fc90e +0x0920:  mov    %edx,0x210(%eax)
083fc914 +0x0926:  movl   $0x4,(%esp)
083fc91b +0x092d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc920 +0x0932:  mov    %eax,%ebx
083fc922 +0x0934:  mov    %ebx,%eax
083fc924 +0x0936:  mov    %eax,(%esp)
083fc927 +0x0939:  call   0844e2be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xed4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xed4
083fc92c +0x093e:  mov    %ebx,%eax
083fc92e +0x0940:  mov    %eax,%edx
083fc930 +0x0942:  mov    0x8(%ebp),%eax
083fc933 +0x0945:  mov    %edx,0x214(%eax)
083fc939 +0x094b:  movl   $0x4,(%esp)
083fc940 +0x0952:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc945 +0x0957:  mov    %eax,%ebx
083fc947 +0x0959:  mov    %ebx,%eax
083fc949 +0x095b:  mov    %eax,(%esp)
083fc94c +0x095e:  call   0844e2da <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xef0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xef0
083fc951 +0x0963:  mov    %ebx,%eax
083fc953 +0x0965:  mov    %eax,%edx
083fc955 +0x0967:  mov    0x8(%ebp),%eax
083fc958 +0x096a:  mov    %edx,0x1fc(%eax)
083fc95e +0x0970:  movl   $0x4,(%esp)
083fc965 +0x0977:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc96a +0x097c:  mov    %eax,%ebx
083fc96c +0x097e:  mov    %ebx,%eax
083fc96e +0x0980:  mov    %eax,(%esp)
083fc971 +0x0983:  call   0844e2f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xf0c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xf0c
083fc976 +0x0988:  mov    %ebx,%eax
083fc978 +0x098a:  mov    %eax,%edx
083fc97a +0x098c:  mov    0x8(%ebp),%eax
083fc97d +0x098f:  mov    %edx,0x200(%eax)
083fc983 +0x0995:  movl   $0x4,(%esp)
083fc98a +0x099c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc98f +0x09a1:  mov    %eax,%ebx
083fc991 +0x09a3:  mov    %ebx,%eax
083fc993 +0x09a5:  mov    %eax,(%esp)
083fc996 +0x09a8:  call   0844e312 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xf28>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xf28
083fc99b +0x09ad:  mov    %ebx,%eax
083fc99d +0x09af:  mov    %eax,%edx
083fc99f +0x09b1:  mov    0x8(%ebp),%eax
083fc9a2 +0x09b4:  mov    %edx,0x208(%eax)
083fc9a8 +0x09ba:  movl   $0x4,(%esp)
083fc9af +0x09c1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc9b4 +0x09c6:  mov    %eax,%ebx
083fc9b6 +0x09c8:  mov    %ebx,%eax
083fc9b8 +0x09ca:  mov    %eax,(%esp)
083fc9bb +0x09cd:  call   0844e32e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xf44>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xf44
083fc9c0 +0x09d2:  mov    %ebx,%eax
083fc9c2 +0x09d4:  mov    %eax,%edx
083fc9c4 +0x09d6:  mov    0x8(%ebp),%eax
083fc9c7 +0x09d9:  mov    %edx,0x204(%eax)
083fc9cd +0x09df:  movl   $0x4,(%esp)
083fc9d4 +0x09e6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc9d9 +0x09eb:  mov    %eax,%ebx
083fc9db +0x09ed:  mov    %ebx,%eax
083fc9dd +0x09ef:  mov    %eax,(%esp)
083fc9e0 +0x09f2:  call   0844e34a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xf60>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xf60
083fc9e5 +0x09f7:  mov    %ebx,%eax
083fc9e7 +0x09f9:  mov    %eax,%edx
083fc9e9 +0x09fb:  mov    0x8(%ebp),%eax
083fc9ec +0x09fe:  mov    %edx,0x220(%eax)
083fc9f2 +0x0a04:  movl   $0x4,(%esp)
083fc9f9 +0x0a0b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fc9fe +0x0a10:  mov    %eax,%ebx
083fca00 +0x0a12:  mov    %ebx,%eax
083fca02 +0x0a14:  mov    %eax,(%esp)
083fca05 +0x0a17:  call   0844e366 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xf7c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xf7c
083fca0a +0x0a1c:  mov    %ebx,%eax
083fca0c +0x0a1e:  mov    %eax,%edx
083fca0e +0x0a20:  mov    0x8(%ebp),%eax
083fca11 +0x0a23:  mov    %edx,0x228(%eax)
083fca17 +0x0a29:  movl   $0x4,(%esp)
083fca1e +0x0a30:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fca23 +0x0a35:  mov    %eax,%ebx
083fca25 +0x0a37:  mov    %ebx,%eax
083fca27 +0x0a39:  mov    %eax,(%esp)
083fca2a +0x0a3c:  call   0844e382 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xf98>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xf98
083fca2f +0x0a41:  mov    %ebx,%eax
083fca31 +0x0a43:  mov    %eax,%edx
083fca33 +0x0a45:  mov    0x8(%ebp),%eax
083fca36 +0x0a48:  mov    %edx,0x22c(%eax)
083fca3c +0x0a4e:  movl   $0x4,(%esp)
083fca43 +0x0a55:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fca48 +0x0a5a:  mov    %eax,%ebx
083fca4a +0x0a5c:  mov    %ebx,%eax
083fca4c +0x0a5e:  mov    %eax,(%esp)
083fca4f +0x0a61:  call   0844e39e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xfb4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xfb4
083fca54 +0x0a66:  mov    %ebx,%eax
083fca56 +0x0a68:  mov    %eax,%edx
083fca58 +0x0a6a:  mov    0x8(%ebp),%eax
083fca5b +0x0a6d:  mov    %edx,0x234(%eax)
083fca61 +0x0a73:  movl   $0x4,(%esp)
083fca68 +0x0a7a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fca6d +0x0a7f:  mov    %eax,%ebx
083fca6f +0x0a81:  mov    %ebx,%eax
083fca71 +0x0a83:  mov    %eax,(%esp)
083fca74 +0x0a86:  call   0844e3ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xfd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xfd0
083fca79 +0x0a8b:  mov    %ebx,%eax
083fca7b +0x0a8d:  mov    %eax,%edx
083fca7d +0x0a8f:  mov    0x8(%ebp),%eax
083fca80 +0x0a92:  mov    %edx,0x23c(%eax)
083fca86 +0x0a98:  movl   $0x4,(%esp)
083fca8d +0x0a9f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fca92 +0x0aa4:  mov    %eax,%ebx
083fca94 +0x0aa6:  mov    %ebx,%eax
083fca96 +0x0aa8:  mov    %eax,(%esp)
083fca99 +0x0aab:  call   0844e3d6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xfec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xfec
083fca9e +0x0ab0:  mov    %ebx,%eax
083fcaa0 +0x0ab2:  mov    %eax,%edx
083fcaa2 +0x0ab4:  mov    0x8(%ebp),%eax
083fcaa5 +0x0ab7:  mov    %edx,0x250(%eax)
083fcaab +0x0abd:  movl   $0x4,(%esp)
083fcab2 +0x0ac4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcab7 +0x0ac9:  mov    %eax,%ebx
083fcab9 +0x0acb:  mov    %ebx,%eax
083fcabb +0x0acd:  mov    %eax,(%esp)
083fcabe +0x0ad0:  call   0844e3f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1008>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1008
083fcac3 +0x0ad5:  mov    %ebx,%eax
083fcac5 +0x0ad7:  mov    %eax,%edx
083fcac7 +0x0ad9:  mov    0x8(%ebp),%eax
083fcaca +0x0adc:  mov    %edx,0x258(%eax)
083fcad0 +0x0ae2:  movl   $0x4,(%esp)
083fcad7 +0x0ae9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcadc +0x0aee:  mov    %eax,%ebx
083fcade +0x0af0:  mov    %ebx,%eax
083fcae0 +0x0af2:  mov    %eax,(%esp)
083fcae3 +0x0af5:  call   0844e40e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1024>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1024
083fcae8 +0x0afa:  mov    %ebx,%eax
083fcaea +0x0afc:  mov    %eax,%edx
083fcaec +0x0afe:  mov    0x8(%ebp),%eax
083fcaef +0x0b01:  mov    %edx,0x25c(%eax)
083fcaf5 +0x0b07:  movl   $0x4,(%esp)
083fcafc +0x0b0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcb01 +0x0b13:  mov    %eax,%ebx
083fcb03 +0x0b15:  mov    %ebx,%eax
083fcb05 +0x0b17:  mov    %eax,(%esp)
083fcb08 +0x0b1a:  call   0844e42a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1040>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1040
083fcb0d +0x0b1f:  mov    %ebx,%eax
083fcb0f +0x0b21:  mov    %eax,%edx
083fcb11 +0x0b23:  mov    0x8(%ebp),%eax
083fcb14 +0x0b26:  mov    %edx,0x26c(%eax)
083fcb1a +0x0b2c:  movl   $0x4,(%esp)
083fcb21 +0x0b33:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcb26 +0x0b38:  mov    %eax,%ebx
083fcb28 +0x0b3a:  mov    %ebx,%eax
083fcb2a +0x0b3c:  mov    %eax,(%esp)
083fcb2d +0x0b3f:  call   0844e446 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x105c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x105c
083fcb32 +0x0b44:  mov    %ebx,%eax
083fcb34 +0x0b46:  mov    %eax,%edx
083fcb36 +0x0b48:  mov    0x8(%ebp),%eax
083fcb39 +0x0b4b:  mov    %edx,0x270(%eax)
083fcb3f +0x0b51:  movl   $0x4,(%esp)
083fcb46 +0x0b58:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcb4b +0x0b5d:  mov    %eax,%ebx
083fcb4d +0x0b5f:  mov    %ebx,%eax
083fcb4f +0x0b61:  mov    %eax,(%esp)
083fcb52 +0x0b64:  call   0844e462 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1078>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1078
083fcb57 +0x0b69:  mov    %ebx,%eax
083fcb59 +0x0b6b:  mov    %eax,%edx
083fcb5b +0x0b6d:  mov    0x8(%ebp),%eax
083fcb5e +0x0b70:  mov    %edx,0x278(%eax)
083fcb64 +0x0b76:  movl   $0x4,(%esp)
083fcb6b +0x0b7d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcb70 +0x0b82:  mov    %eax,%ebx
083fcb72 +0x0b84:  mov    %ebx,%eax
083fcb74 +0x0b86:  mov    %eax,(%esp)
083fcb77 +0x0b89:  call   0844e47e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1094>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1094
083fcb7c +0x0b8e:  mov    %ebx,%eax
083fcb7e +0x0b90:  mov    %eax,%edx
083fcb80 +0x0b92:  mov    0x8(%ebp),%eax
083fcb83 +0x0b95:  mov    %edx,0x27c(%eax)
083fcb89 +0x0b9b:  movl   $0x4,(%esp)
083fcb90 +0x0ba2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcb95 +0x0ba7:  mov    %eax,%ebx
083fcb97 +0x0ba9:  mov    %ebx,%eax
083fcb99 +0x0bab:  mov    %eax,(%esp)
083fcb9c +0x0bae:  call   0844e49a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x10b0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x10b0
083fcba1 +0x0bb3:  mov    %ebx,%eax
083fcba3 +0x0bb5:  mov    %eax,%edx
083fcba5 +0x0bb7:  mov    0x8(%ebp),%eax
083fcba8 +0x0bba:  mov    %edx,0x288(%eax)
083fcbae +0x0bc0:  movl   $0x4,(%esp)
083fcbb5 +0x0bc7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcbba +0x0bcc:  mov    %eax,%ebx
083fcbbc +0x0bce:  mov    %ebx,%eax
083fcbbe +0x0bd0:  mov    %eax,(%esp)
083fcbc1 +0x0bd3:  call   0844e4b6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x10cc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x10cc
083fcbc6 +0x0bd8:  mov    %ebx,%eax
083fcbc8 +0x0bda:  mov    %eax,%edx
083fcbca +0x0bdc:  mov    0x8(%ebp),%eax
083fcbcd +0x0bdf:  mov    %edx,0x290(%eax)
083fcbd3 +0x0be5:  movl   $0x4,(%esp)
083fcbda +0x0bec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcbdf +0x0bf1:  mov    %eax,%ebx
083fcbe1 +0x0bf3:  mov    %ebx,%eax
083fcbe3 +0x0bf5:  mov    %eax,(%esp)
083fcbe6 +0x0bf8:  call   0844e4d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x10e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x10e8
083fcbeb +0x0bfd:  mov    %ebx,%eax
083fcbed +0x0bff:  mov    %eax,%edx
083fcbef +0x0c01:  mov    0x8(%ebp),%eax
083fcbf2 +0x0c04:  mov    %edx,0x294(%eax)
083fcbf8 +0x0c0a:  movl   $0x4,(%esp)
083fcbff +0x0c11:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcc04 +0x0c16:  mov    %eax,%ebx
083fcc06 +0x0c18:  mov    %ebx,%eax
083fcc08 +0x0c1a:  mov    %eax,(%esp)
083fcc0b +0x0c1d:  call   0844e4ee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1104>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1104
083fcc10 +0x0c22:  mov    %ebx,%eax
083fcc12 +0x0c24:  mov    %eax,%edx
083fcc14 +0x0c26:  mov    0x8(%ebp),%eax
083fcc17 +0x0c29:  mov    %edx,0x298(%eax)
083fcc1d +0x0c2f:  movl   $0x4,(%esp)
083fcc24 +0x0c36:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcc29 +0x0c3b:  mov    %eax,%ebx
083fcc2b +0x0c3d:  mov    %ebx,%eax
083fcc2d +0x0c3f:  mov    %eax,(%esp)
083fcc30 +0x0c42:  call   0844e50a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1120>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1120
083fcc35 +0x0c47:  mov    %ebx,%eax
083fcc37 +0x0c49:  mov    %eax,%edx
083fcc39 +0x0c4b:  mov    0x8(%ebp),%eax
083fcc3c +0x0c4e:  mov    %edx,0x2c0(%eax)
083fcc42 +0x0c54:  movl   $0x4,(%esp)
083fcc49 +0x0c5b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcc4e +0x0c60:  mov    %eax,%ebx
083fcc50 +0x0c62:  mov    %ebx,%eax
083fcc52 +0x0c64:  mov    %eax,(%esp)
083fcc55 +0x0c67:  call   0844e526 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x113c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x113c
083fcc5a +0x0c6c:  mov    %ebx,%eax
083fcc5c +0x0c6e:  mov    %eax,%edx
083fcc5e +0x0c70:  mov    0x8(%ebp),%eax
083fcc61 +0x0c73:  mov    %edx,0x2c4(%eax)
083fcc67 +0x0c79:  movl   $0x4,(%esp)
083fcc6e +0x0c80:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcc73 +0x0c85:  mov    %eax,%ebx
083fcc75 +0x0c87:  mov    %ebx,%eax
083fcc77 +0x0c89:  mov    %eax,(%esp)
083fcc7a +0x0c8c:  call   0844e542 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1158>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1158
083fcc7f +0x0c91:  mov    %ebx,%eax
083fcc81 +0x0c93:  mov    %eax,%edx
083fcc83 +0x0c95:  mov    0x8(%ebp),%eax
083fcc86 +0x0c98:  mov    %edx,0x2d0(%eax)
083fcc8c +0x0c9e:  movl   $0x4,(%esp)
083fcc93 +0x0ca5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcc98 +0x0caa:  mov    %eax,%ebx
083fcc9a +0x0cac:  mov    %ebx,%eax
083fcc9c +0x0cae:  mov    %eax,(%esp)
083fcc9f +0x0cb1:  call   0844e55e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1174>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1174
083fcca4 +0x0cb6:  mov    %ebx,%eax
083fcca6 +0x0cb8:  mov    %eax,%edx
083fcca8 +0x0cba:  mov    0x8(%ebp),%eax
083fccab +0x0cbd:  mov    %edx,0x2d4(%eax)
083fccb1 +0x0cc3:  movl   $0x4,(%esp)
083fccb8 +0x0cca:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fccbd +0x0ccf:  mov    %eax,%ebx
083fccbf +0x0cd1:  mov    %ebx,%eax
083fccc1 +0x0cd3:  mov    %eax,(%esp)
083fccc4 +0x0cd6:  call   0844e57a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1190>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1190
083fccc9 +0x0cdb:  mov    %ebx,%eax
083fcccb +0x0cdd:  mov    %eax,%edx
083fcccd +0x0cdf:  mov    0x8(%ebp),%eax
083fccd0 +0x0ce2:  mov    %edx,0x2d8(%eax)
083fccd6 +0x0ce8:  movl   $0x4,(%esp)
083fccdd +0x0cef:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcce2 +0x0cf4:  mov    %eax,%ebx
083fcce4 +0x0cf6:  mov    %ebx,%eax
083fcce6 +0x0cf8:  mov    %eax,(%esp)
083fcce9 +0x0cfb:  call   0844e596 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x11ac>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x11ac
083fccee +0x0d00:  mov    %ebx,%eax
083fccf0 +0x0d02:  mov    %eax,%edx
083fccf2 +0x0d04:  mov    0x8(%ebp),%eax
083fccf5 +0x0d07:  mov    %edx,0x2dc(%eax)
083fccfb +0x0d0d:  movl   $0x4,(%esp)
083fcd02 +0x0d14:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcd07 +0x0d19:  mov    %eax,%ebx
083fcd09 +0x0d1b:  mov    %ebx,%eax
083fcd0b +0x0d1d:  mov    %eax,(%esp)
083fcd0e +0x0d20:  call   0844e5b2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x11c8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x11c8
083fcd13 +0x0d25:  mov    %ebx,%eax
083fcd15 +0x0d27:  mov    %eax,%edx
083fcd17 +0x0d29:  mov    0x8(%ebp),%eax
083fcd1a +0x0d2c:  mov    %edx,0x2f0(%eax)
083fcd20 +0x0d32:  movl   $0x4,(%esp)
083fcd27 +0x0d39:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcd2c +0x0d3e:  mov    %eax,%ebx
083fcd2e +0x0d40:  mov    %ebx,%eax
083fcd30 +0x0d42:  mov    %eax,(%esp)
083fcd33 +0x0d45:  call   0844e5ce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x11e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x11e4
083fcd38 +0x0d4a:  mov    %ebx,%eax
083fcd3a +0x0d4c:  mov    %eax,%edx
083fcd3c +0x0d4e:  mov    0x8(%ebp),%eax
083fcd3f +0x0d51:  mov    %edx,0x2fc(%eax)
083fcd45 +0x0d57:  movl   $0x4,(%esp)
083fcd4c +0x0d5e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcd51 +0x0d63:  mov    %eax,%ebx
083fcd53 +0x0d65:  mov    %ebx,%eax
083fcd55 +0x0d67:  mov    %eax,(%esp)
083fcd58 +0x0d6a:  call   0844e5ea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1200>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1200
083fcd5d +0x0d6f:  mov    %ebx,%eax
083fcd5f +0x0d71:  mov    %eax,%edx
083fcd61 +0x0d73:  mov    0x8(%ebp),%eax
083fcd64 +0x0d76:  mov    %edx,0x300(%eax)
083fcd6a +0x0d7c:  movl   $0x4,(%esp)
083fcd71 +0x0d83:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcd76 +0x0d88:  mov    %eax,%ebx
083fcd78 +0x0d8a:  mov    %ebx,%eax
083fcd7a +0x0d8c:  mov    %eax,(%esp)
083fcd7d +0x0d8f:  call   0844e606 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x121c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x121c
083fcd82 +0x0d94:  mov    %ebx,%eax
083fcd84 +0x0d96:  mov    %eax,%edx
083fcd86 +0x0d98:  mov    0x8(%ebp),%eax
083fcd89 +0x0d9b:  mov    %edx,0x304(%eax)
083fcd8f +0x0da1:  movl   $0x4,(%esp)
083fcd96 +0x0da8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcd9b +0x0dad:  mov    %eax,%ebx
083fcd9d +0x0daf:  mov    %ebx,%eax
083fcd9f +0x0db1:  mov    %eax,(%esp)
083fcda2 +0x0db4:  call   0844e622 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1238>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1238
083fcda7 +0x0db9:  mov    %ebx,%eax
083fcda9 +0x0dbb:  mov    %eax,%edx
083fcdab +0x0dbd:  mov    0x8(%ebp),%eax
083fcdae +0x0dc0:  mov    %edx,0x30c(%eax)
083fcdb4 +0x0dc6:  movl   $0x4,(%esp)
083fcdbb +0x0dcd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcdc0 +0x0dd2:  mov    %eax,%ebx
083fcdc2 +0x0dd4:  mov    %ebx,%eax
083fcdc4 +0x0dd6:  mov    %eax,(%esp)
083fcdc7 +0x0dd9:  call   0844e63e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1254>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1254
083fcdcc +0x0dde:  mov    %ebx,%eax
083fcdce +0x0de0:  mov    %eax,%edx
083fcdd0 +0x0de2:  mov    0x8(%ebp),%eax
083fcdd3 +0x0de5:  mov    %edx,0x310(%eax)
083fcdd9 +0x0deb:  movl   $0x4,(%esp)
083fcde0 +0x0df2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcde5 +0x0df7:  mov    %eax,%ebx
083fcde7 +0x0df9:  mov    %ebx,%eax
083fcde9 +0x0dfb:  mov    %eax,(%esp)
083fcdec +0x0dfe:  call   0844e65a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1270>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1270
083fcdf1 +0x0e03:  mov    %ebx,%eax
083fcdf3 +0x0e05:  mov    %eax,%edx
083fcdf5 +0x0e07:  mov    0x8(%ebp),%eax
083fcdf8 +0x0e0a:  mov    %edx,0x314(%eax)
083fcdfe +0x0e10:  movl   $0x4,(%esp)
083fce05 +0x0e17:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fce0a +0x0e1c:  mov    %eax,%ebx
083fce0c +0x0e1e:  mov    %ebx,%eax
083fce0e +0x0e20:  mov    %eax,(%esp)
083fce11 +0x0e23:  call   0844e676 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x128c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x128c
083fce16 +0x0e28:  mov    %ebx,%eax
083fce18 +0x0e2a:  mov    %eax,%edx
083fce1a +0x0e2c:  mov    0x8(%ebp),%eax
083fce1d +0x0e2f:  mov    %edx,0x318(%eax)
083fce23 +0x0e35:  movl   $0x4,(%esp)
083fce2a +0x0e3c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fce2f +0x0e41:  mov    %eax,%ebx
083fce31 +0x0e43:  mov    %ebx,%eax
083fce33 +0x0e45:  mov    %eax,(%esp)
083fce36 +0x0e48:  call   0844e692 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x12a8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x12a8
083fce3b +0x0e4d:  mov    %ebx,%eax
083fce3d +0x0e4f:  mov    %eax,%edx
083fce3f +0x0e51:  mov    0x8(%ebp),%eax
083fce42 +0x0e54:  mov    %edx,0x32c(%eax)
083fce48 +0x0e5a:  movl   $0x4,(%esp)
083fce4f +0x0e61:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fce54 +0x0e66:  mov    %eax,%ebx
083fce56 +0x0e68:  mov    %ebx,%eax
083fce58 +0x0e6a:  mov    %eax,(%esp)
083fce5b +0x0e6d:  call   0844e6ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x12c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x12c4
083fce60 +0x0e72:  mov    %ebx,%eax
083fce62 +0x0e74:  mov    %eax,%edx
083fce64 +0x0e76:  mov    0x8(%ebp),%eax
083fce67 +0x0e79:  mov    %edx,0x330(%eax)
083fce6d +0x0e7f:  movl   $0x4,(%esp)
083fce74 +0x0e86:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fce79 +0x0e8b:  mov    %eax,%ebx
083fce7b +0x0e8d:  mov    %ebx,%eax
083fce7d +0x0e8f:  mov    %eax,(%esp)
083fce80 +0x0e92:  call   0844e6ca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x12e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x12e0
083fce85 +0x0e97:  mov    %ebx,%eax
083fce87 +0x0e99:  mov    %eax,%edx
083fce89 +0x0e9b:  mov    0x8(%ebp),%eax
083fce8c +0x0e9e:  mov    %edx,0x334(%eax)
083fce92 +0x0ea4:  movl   $0x4,(%esp)
083fce99 +0x0eab:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fce9e +0x0eb0:  mov    %eax,%ebx
083fcea0 +0x0eb2:  mov    %ebx,%eax
083fcea2 +0x0eb4:  mov    %eax,(%esp)
083fcea5 +0x0eb7:  call   0844e6e6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x12fc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x12fc
083fceaa +0x0ebc:  mov    %ebx,%eax
083fceac +0x0ebe:  mov    %eax,%edx
083fceae +0x0ec0:  mov    0x8(%ebp),%eax
083fceb1 +0x0ec3:  mov    %edx,0x338(%eax)
083fceb7 +0x0ec9:  movl   $0x4,(%esp)
083fcebe +0x0ed0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcec3 +0x0ed5:  mov    %eax,%ebx
083fcec5 +0x0ed7:  mov    %ebx,%eax
083fcec7 +0x0ed9:  mov    %eax,(%esp)
083fceca +0x0edc:  call   0844e702 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1318>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1318
083fcecf +0x0ee1:  mov    %ebx,%eax
083fced1 +0x0ee3:  mov    %eax,%edx
083fced3 +0x0ee5:  mov    0x8(%ebp),%eax
083fced6 +0x0ee8:  mov    %edx,0x33c(%eax)
083fcedc +0x0eee:  movl   $0x4,(%esp)
083fcee3 +0x0ef5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcee8 +0x0efa:  mov    %eax,%ebx
083fceea +0x0efc:  mov    %ebx,%eax
083fceec +0x0efe:  mov    %eax,(%esp)
083fceef +0x0f01:  call   0844e71e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1334>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1334
083fcef4 +0x0f06:  mov    %ebx,%eax
083fcef6 +0x0f08:  mov    %eax,%edx
083fcef8 +0x0f0a:  mov    0x8(%ebp),%eax
083fcefb +0x0f0d:  mov    %edx,0x340(%eax)
083fcf01 +0x0f13:  movl   $0x4,(%esp)
083fcf08 +0x0f1a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcf0d +0x0f1f:  mov    %eax,%ebx
083fcf0f +0x0f21:  mov    %ebx,%eax
083fcf11 +0x0f23:  mov    %eax,(%esp)
083fcf14 +0x0f26:  call   0844e73a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1350>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1350
083fcf19 +0x0f2b:  mov    %ebx,%eax
083fcf1b +0x0f2d:  mov    %eax,%edx
083fcf1d +0x0f2f:  mov    0x8(%ebp),%eax
083fcf20 +0x0f32:  mov    %edx,0x448(%eax)
083fcf26 +0x0f38:  movl   $0x4,(%esp)
083fcf2d +0x0f3f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcf32 +0x0f44:  mov    %eax,%ebx
083fcf34 +0x0f46:  mov    %ebx,%eax
083fcf36 +0x0f48:  mov    %eax,(%esp)
083fcf39 +0x0f4b:  call   0844e756 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x136c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x136c
083fcf3e +0x0f50:  mov    %ebx,%eax
083fcf40 +0x0f52:  mov    %eax,%edx
083fcf42 +0x0f54:  mov    0x8(%ebp),%eax
083fcf45 +0x0f57:  mov    %edx,0x348(%eax)
083fcf4b +0x0f5d:  movl   $0x4,(%esp)
083fcf52 +0x0f64:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcf57 +0x0f69:  mov    %eax,%ebx
083fcf59 +0x0f6b:  mov    %ebx,%eax
083fcf5b +0x0f6d:  mov    %eax,(%esp)
083fcf5e +0x0f70:  call   0844e772 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1388>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1388
083fcf63 +0x0f75:  mov    %ebx,%eax
083fcf65 +0x0f77:  mov    %eax,%edx
083fcf67 +0x0f79:  mov    0x8(%ebp),%eax
083fcf6a +0x0f7c:  mov    %edx,0x344(%eax)
083fcf70 +0x0f82:  movl   $0x4,(%esp)
083fcf77 +0x0f89:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcf7c +0x0f8e:  mov    %eax,%ebx
083fcf7e +0x0f90:  mov    %ebx,%eax
083fcf80 +0x0f92:  mov    %eax,(%esp)
083fcf83 +0x0f95:  call   0844e78e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x13a4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x13a4
083fcf88 +0x0f9a:  mov    %ebx,%eax
083fcf8a +0x0f9c:  mov    %eax,%edx
083fcf8c +0x0f9e:  mov    0x8(%ebp),%eax
083fcf8f +0x0fa1:  mov    %edx,0x34c(%eax)
083fcf95 +0x0fa7:  movl   $0x4,(%esp)
083fcf9c +0x0fae:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcfa1 +0x0fb3:  mov    %eax,%ebx
083fcfa3 +0x0fb5:  mov    %ebx,%eax
083fcfa5 +0x0fb7:  mov    %eax,(%esp)
083fcfa8 +0x0fba:  call   0844e7aa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x13c0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x13c0
083fcfad +0x0fbf:  mov    %ebx,%eax
083fcfaf +0x0fc1:  mov    %eax,%edx
083fcfb1 +0x0fc3:  mov    0x8(%ebp),%eax
083fcfb4 +0x0fc6:  mov    %edx,0x354(%eax)
083fcfba +0x0fcc:  movl   $0x4,(%esp)
083fcfc1 +0x0fd3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcfc6 +0x0fd8:  mov    %eax,%ebx
083fcfc8 +0x0fda:  mov    %ebx,%eax
083fcfca +0x0fdc:  mov    %eax,(%esp)
083fcfcd +0x0fdf:  call   0844e7c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x13dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x13dc
083fcfd2 +0x0fe4:  mov    %ebx,%eax
083fcfd4 +0x0fe6:  mov    %eax,%edx
083fcfd6 +0x0fe8:  mov    0x8(%ebp),%eax
083fcfd9 +0x0feb:  mov    %edx,0x358(%eax)
083fcfdf +0x0ff1:  movl   $0x4,(%esp)
083fcfe6 +0x0ff8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fcfeb +0x0ffd:  mov    %eax,%ebx
083fcfed +0x0fff:  mov    %ebx,%eax
083fcfef +0x1001:  mov    %eax,(%esp)
083fcff2 +0x1004:  call   0844e7e2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x13f8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x13f8
083fcff7 +0x1009:  mov    %ebx,%eax
083fcff9 +0x100b:  mov    %eax,%edx
083fcffb +0x100d:  mov    0x8(%ebp),%eax
083fcffe +0x1010:  mov    %edx,0x384(%eax)
083fd004 +0x1016:  movl   $0x4,(%esp)
083fd00b +0x101d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd010 +0x1022:  mov    %eax,%ebx
083fd012 +0x1024:  mov    %ebx,%eax
083fd014 +0x1026:  mov    %eax,(%esp)
083fd017 +0x1029:  call   0844e7fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1414>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1414
083fd01c +0x102e:  mov    %ebx,%eax
083fd01e +0x1030:  mov    %eax,%edx
083fd020 +0x1032:  mov    0x8(%ebp),%eax
083fd023 +0x1035:  mov    %edx,0x388(%eax)
083fd029 +0x103b:  movl   $0x4,(%esp)
083fd030 +0x1042:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd035 +0x1047:  mov    %eax,%ebx
083fd037 +0x1049:  mov    %ebx,%eax
083fd039 +0x104b:  mov    %eax,(%esp)
083fd03c +0x104e:  call   0844e81a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1430>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1430
083fd041 +0x1053:  mov    %ebx,%eax
083fd043 +0x1055:  mov    %eax,%edx
083fd045 +0x1057:  mov    0x8(%ebp),%eax
083fd048 +0x105a:  mov    %edx,0x38c(%eax)
083fd04e +0x1060:  movl   $0x4,(%esp)
083fd055 +0x1067:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd05a +0x106c:  mov    %eax,%ebx
083fd05c +0x106e:  mov    %ebx,%eax
083fd05e +0x1070:  mov    %eax,(%esp)
083fd061 +0x1073:  call   0844e836 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x144c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x144c
083fd066 +0x1078:  mov    %ebx,%eax
083fd068 +0x107a:  mov    %eax,%edx
083fd06a +0x107c:  mov    0x8(%ebp),%eax
083fd06d +0x107f:  mov    %edx,0x390(%eax)
083fd073 +0x1085:  movl   $0x4,(%esp)
083fd07a +0x108c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd07f +0x1091:  mov    %eax,%ebx
083fd081 +0x1093:  mov    %ebx,%eax
083fd083 +0x1095:  mov    %eax,(%esp)
083fd086 +0x1098:  call   0844e852 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1468>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1468
083fd08b +0x109d:  mov    %ebx,%eax
083fd08d +0x109f:  mov    %eax,%edx
083fd08f +0x10a1:  mov    0x8(%ebp),%eax
083fd092 +0x10a4:  mov    %edx,0x394(%eax)
083fd098 +0x10aa:  movl   $0x4,(%esp)
083fd09f +0x10b1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd0a4 +0x10b6:  mov    %eax,%ebx
083fd0a6 +0x10b8:  mov    %ebx,%eax
083fd0a8 +0x10ba:  mov    %eax,(%esp)
083fd0ab +0x10bd:  call   0844e86e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1484>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1484
083fd0b0 +0x10c2:  mov    %ebx,%eax
083fd0b2 +0x10c4:  mov    %eax,%edx
083fd0b4 +0x10c6:  mov    0x8(%ebp),%eax
083fd0b7 +0x10c9:  mov    %edx,0x3b0(%eax)
083fd0bd +0x10cf:  movl   $0x4,(%esp)
083fd0c4 +0x10d6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd0c9 +0x10db:  mov    %eax,%ebx
083fd0cb +0x10dd:  mov    %ebx,%eax
083fd0cd +0x10df:  mov    %eax,(%esp)
083fd0d0 +0x10e2:  call   0844e88a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x14a0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x14a0
083fd0d5 +0x10e7:  mov    %ebx,%eax
083fd0d7 +0x10e9:  mov    %eax,%edx
083fd0d9 +0x10eb:  mov    0x8(%ebp),%eax
083fd0dc +0x10ee:  mov    %edx,0x3b4(%eax)
083fd0e2 +0x10f4:  movl   $0x4,(%esp)
083fd0e9 +0x10fb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd0ee +0x1100:  mov    %eax,%ebx
083fd0f0 +0x1102:  mov    %ebx,%eax
083fd0f2 +0x1104:  mov    %eax,(%esp)
083fd0f5 +0x1107:  call   0844e8a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x14bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x14bc
083fd0fa +0x110c:  mov    %ebx,%eax
083fd0fc +0x110e:  mov    %eax,%edx
083fd0fe +0x1110:  mov    0x8(%ebp),%eax
083fd101 +0x1113:  mov    %edx,0x3bc(%eax)
083fd107 +0x1119:  movl   $0x4,(%esp)
083fd10e +0x1120:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd113 +0x1125:  mov    %eax,%ebx
083fd115 +0x1127:  mov    %ebx,%eax
083fd117 +0x1129:  mov    %eax,(%esp)
083fd11a +0x112c:  call   0844e8c2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x14d8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x14d8
083fd11f +0x1131:  mov    %ebx,%eax
083fd121 +0x1133:  mov    %eax,%edx
083fd123 +0x1135:  mov    0x8(%ebp),%eax
083fd126 +0x1138:  mov    %edx,0x3f8(%eax)
083fd12c +0x113e:  movl   $0x4,(%esp)
083fd133 +0x1145:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd138 +0x114a:  mov    %eax,%ebx
083fd13a +0x114c:  mov    %ebx,%eax
083fd13c +0x114e:  mov    %eax,(%esp)
083fd13f +0x1151:  call   0844e8de <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x14f4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x14f4
083fd144 +0x1156:  mov    %ebx,%eax
083fd146 +0x1158:  mov    %eax,%edx
083fd148 +0x115a:  mov    0x8(%ebp),%eax
083fd14b +0x115d:  mov    %edx,0x3fc(%eax)
083fd151 +0x1163:  movl   $0x4,(%esp)
083fd158 +0x116a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd15d +0x116f:  mov    %eax,%ebx
083fd15f +0x1171:  mov    %ebx,%eax
083fd161 +0x1173:  mov    %eax,(%esp)
083fd164 +0x1176:  call   0844e8fa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1510>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1510
083fd169 +0x117b:  mov    %ebx,%eax
083fd16b +0x117d:  mov    %eax,%edx
083fd16d +0x117f:  mov    0x8(%ebp),%eax
083fd170 +0x1182:  mov    %edx,0x400(%eax)
083fd176 +0x1188:  movl   $0x4,(%esp)
083fd17d +0x118f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd182 +0x1194:  mov    %eax,%ebx
083fd184 +0x1196:  mov    %ebx,%eax
083fd186 +0x1198:  mov    %eax,(%esp)
083fd189 +0x119b:  call   0844e916 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x152c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x152c
083fd18e +0x11a0:  mov    %ebx,%eax
083fd190 +0x11a2:  mov    %eax,%edx
083fd192 +0x11a4:  mov    0x8(%ebp),%eax
083fd195 +0x11a7:  mov    %edx,0x404(%eax)
083fd19b +0x11ad:  movl   $0x4,(%esp)
083fd1a2 +0x11b4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd1a7 +0x11b9:  mov    %eax,%ebx
083fd1a9 +0x11bb:  mov    %ebx,%eax
083fd1ab +0x11bd:  mov    %eax,(%esp)
083fd1ae +0x11c0:  call   0844e932 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1548>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1548
083fd1b3 +0x11c5:  mov    %ebx,%eax
083fd1b5 +0x11c7:  mov    %eax,%edx
083fd1b7 +0x11c9:  mov    0x8(%ebp),%eax
083fd1ba +0x11cc:  mov    %edx,0x408(%eax)
083fd1c0 +0x11d2:  movl   $0x4,(%esp)
083fd1c7 +0x11d9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd1cc +0x11de:  mov    %eax,%ebx
083fd1ce +0x11e0:  mov    %ebx,%eax
083fd1d0 +0x11e2:  mov    %eax,(%esp)
083fd1d3 +0x11e5:  call   0844e94e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1564>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1564
083fd1d8 +0x11ea:  mov    %ebx,%eax
083fd1da +0x11ec:  mov    %eax,%edx
083fd1dc +0x11ee:  mov    0x8(%ebp),%eax
083fd1df +0x11f1:  mov    %edx,0x40c(%eax)
083fd1e5 +0x11f7:  movl   $0x4,(%esp)
083fd1ec +0x11fe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd1f1 +0x1203:  mov    %eax,%ebx
083fd1f3 +0x1205:  mov    %ebx,%eax
083fd1f5 +0x1207:  mov    %eax,(%esp)
083fd1f8 +0x120a:  call   0844e96a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1580>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1580
083fd1fd +0x120f:  mov    %ebx,%eax
083fd1ff +0x1211:  mov    %eax,%edx
083fd201 +0x1213:  mov    0x8(%ebp),%eax
083fd204 +0x1216:  mov    %edx,0x4e4(%eax)
083fd20a +0x121c:  movl   $0x4,(%esp)
083fd211 +0x1223:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd216 +0x1228:  mov    %eax,%ebx
083fd218 +0x122a:  mov    %ebx,%eax
083fd21a +0x122c:  mov    %eax,(%esp)
083fd21d +0x122f:  call   0844e986 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x159c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x159c
083fd222 +0x1234:  mov    %ebx,%eax
083fd224 +0x1236:  mov    %eax,%edx
083fd226 +0x1238:  mov    0x8(%ebp),%eax
083fd229 +0x123b:  mov    %edx,0x410(%eax)
083fd22f +0x1241:  movl   $0x4,(%esp)
083fd236 +0x1248:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd23b +0x124d:  mov    %eax,%ebx
083fd23d +0x124f:  mov    %ebx,%eax
083fd23f +0x1251:  mov    %eax,(%esp)
083fd242 +0x1254:  call   0844e9a2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x15b8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x15b8
083fd247 +0x1259:  mov    %ebx,%eax
083fd249 +0x125b:  mov    %eax,%edx
083fd24b +0x125d:  mov    0x8(%ebp),%eax
083fd24e +0x1260:  mov    %edx,0x414(%eax)
083fd254 +0x1266:  movl   $0x4,(%esp)
083fd25b +0x126d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd260 +0x1272:  mov    %eax,%ebx
083fd262 +0x1274:  mov    %ebx,%eax
083fd264 +0x1276:  mov    %eax,(%esp)
083fd267 +0x1279:  call   0844e9be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x15d4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x15d4
083fd26c +0x127e:  mov    %ebx,%eax
083fd26e +0x1280:  mov    %eax,%edx
083fd270 +0x1282:  mov    0x8(%ebp),%eax
083fd273 +0x1285:  mov    %edx,0x418(%eax)
083fd279 +0x128b:  movl   $0x4,(%esp)
083fd280 +0x1292:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd285 +0x1297:  mov    %eax,%ebx
083fd287 +0x1299:  mov    %ebx,%eax
083fd289 +0x129b:  mov    %eax,(%esp)
083fd28c +0x129e:  call   0844e9da <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x15f0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x15f0
083fd291 +0x12a3:  mov    %ebx,%eax
083fd293 +0x12a5:  mov    %eax,%edx
083fd295 +0x12a7:  mov    0x8(%ebp),%eax
083fd298 +0x12aa:  mov    %edx,0x41c(%eax)
083fd29e +0x12b0:  movl   $0x4,(%esp)
083fd2a5 +0x12b7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd2aa +0x12bc:  mov    %eax,%ebx
083fd2ac +0x12be:  mov    %ebx,%eax
083fd2ae +0x12c0:  mov    %eax,(%esp)
083fd2b1 +0x12c3:  call   0844e9f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x160c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x160c
083fd2b6 +0x12c8:  mov    %ebx,%eax
083fd2b8 +0x12ca:  mov    %eax,%edx
083fd2ba +0x12cc:  mov    0x8(%ebp),%eax
083fd2bd +0x12cf:  mov    %edx,0x420(%eax)
083fd2c3 +0x12d5:  movl   $0x4,(%esp)
083fd2ca +0x12dc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd2cf +0x12e1:  mov    %eax,%ebx
083fd2d1 +0x12e3:  mov    %ebx,%eax
083fd2d3 +0x12e5:  mov    %eax,(%esp)
083fd2d6 +0x12e8:  call   0844ea12 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1628>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1628
083fd2db +0x12ed:  mov    %ebx,%eax
083fd2dd +0x12ef:  mov    %eax,%edx
083fd2df +0x12f1:  mov    0x8(%ebp),%eax
083fd2e2 +0x12f4:  mov    %edx,0x424(%eax)
083fd2e8 +0x12fa:  movl   $0x4,(%esp)
083fd2ef +0x1301:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd2f4 +0x1306:  mov    %eax,%ebx
083fd2f6 +0x1308:  mov    %ebx,%eax
083fd2f8 +0x130a:  mov    %eax,(%esp)
083fd2fb +0x130d:  call   0844ea2e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1644>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1644
083fd300 +0x1312:  mov    %ebx,%eax
083fd302 +0x1314:  mov    %eax,%edx
083fd304 +0x1316:  mov    0x8(%ebp),%eax
083fd307 +0x1319:  mov    %edx,0x428(%eax)
083fd30d +0x131f:  movl   $0x4,(%esp)
083fd314 +0x1326:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd319 +0x132b:  mov    %eax,%ebx
083fd31b +0x132d:  mov    %ebx,%eax
083fd31d +0x132f:  mov    %eax,(%esp)
083fd320 +0x1332:  call   0844ea4a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1660>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1660
083fd325 +0x1337:  mov    %ebx,%eax
083fd327 +0x1339:  mov    %eax,%edx
083fd329 +0x133b:  mov    0x8(%ebp),%eax
083fd32c +0x133e:  mov    %edx,0x42c(%eax)
083fd332 +0x1344:  movl   $0x4,(%esp)
083fd339 +0x134b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd33e +0x1350:  mov    %eax,%ebx
083fd340 +0x1352:  mov    %ebx,%eax
083fd342 +0x1354:  mov    %eax,(%esp)
083fd345 +0x1357:  call   0844ea66 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x167c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x167c
083fd34a +0x135c:  mov    %ebx,%eax
083fd34c +0x135e:  mov    %eax,%edx
083fd34e +0x1360:  mov    0x8(%ebp),%eax
083fd351 +0x1363:  mov    %edx,0x430(%eax)
083fd357 +0x1369:  movl   $0x4,(%esp)
083fd35e +0x1370:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd363 +0x1375:  mov    %eax,%ebx
083fd365 +0x1377:  mov    %ebx,%eax
083fd367 +0x1379:  mov    %eax,(%esp)
083fd36a +0x137c:  call   0844ea82 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1698>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1698
083fd36f +0x1381:  mov    %ebx,%eax
083fd371 +0x1383:  mov    %eax,%edx
083fd373 +0x1385:  mov    0x8(%ebp),%eax
083fd376 +0x1388:  mov    %edx,0x54c(%eax)
083fd37c +0x138e:  movl   $0x4,(%esp)
083fd383 +0x1395:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd388 +0x139a:  mov    %eax,%ebx
083fd38a +0x139c:  mov    %ebx,%eax
083fd38c +0x139e:  mov    %eax,(%esp)
083fd38f +0x13a1:  call   0844ea9e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x16b4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x16b4
083fd394 +0x13a6:  mov    %ebx,%eax
083fd396 +0x13a8:  mov    %eax,%edx
083fd398 +0x13aa:  mov    0x8(%ebp),%eax
083fd39b +0x13ad:  mov    %edx,0x554(%eax)
083fd3a1 +0x13b3:  movl   $0x4,(%esp)
083fd3a8 +0x13ba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd3ad +0x13bf:  mov    %eax,%ebx
083fd3af +0x13c1:  mov    %ebx,%eax
083fd3b1 +0x13c3:  mov    %eax,(%esp)
083fd3b4 +0x13c6:  call   0844eaba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x16d0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x16d0
083fd3b9 +0x13cb:  mov    %ebx,%eax
083fd3bb +0x13cd:  mov    %eax,%edx
083fd3bd +0x13cf:  mov    0x8(%ebp),%eax
083fd3c0 +0x13d2:  mov    %edx,0x558(%eax)
083fd3c6 +0x13d8:  movl   $0x4,(%esp)
083fd3cd +0x13df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd3d2 +0x13e4:  mov    %eax,%ebx
083fd3d4 +0x13e6:  mov    %ebx,%eax
083fd3d6 +0x13e8:  mov    %eax,(%esp)
083fd3d9 +0x13eb:  call   0844ead6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x16ec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x16ec
083fd3de +0x13f0:  mov    %ebx,%eax
083fd3e0 +0x13f2:  mov    %eax,%edx
083fd3e2 +0x13f4:  mov    0x8(%ebp),%eax
083fd3e5 +0x13f7:  mov    %edx,0x44c(%eax)
083fd3eb +0x13fd:  movl   $0x4,(%esp)
083fd3f2 +0x1404:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd3f7 +0x1409:  mov    %eax,%ebx
083fd3f9 +0x140b:  mov    %ebx,%eax
083fd3fb +0x140d:  mov    %eax,(%esp)
083fd3fe +0x1410:  call   0844ead6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x16ec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x16ec
083fd403 +0x1415:  mov    %ebx,%eax
083fd405 +0x1417:  mov    %eax,%edx
083fd407 +0x1419:  mov    0x8(%ebp),%eax
083fd40a +0x141c:  mov    %edx,0x450(%eax)
083fd410 +0x1422:  movl   $0x4,(%esp)
083fd417 +0x1429:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd41c +0x142e:  mov    %eax,%ebx
083fd41e +0x1430:  mov    %ebx,%eax
083fd420 +0x1432:  mov    %eax,(%esp)
083fd423 +0x1435:  call   0844eaf2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1708>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1708
083fd428 +0x143a:  mov    %ebx,%eax
083fd42a +0x143c:  mov    %eax,%edx
083fd42c +0x143e:  mov    0x8(%ebp),%eax
083fd42f +0x1441:  mov    %edx,0x460(%eax)
083fd435 +0x1447:  movl   $0x4,(%esp)
083fd43c +0x144e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd441 +0x1453:  mov    %eax,%ebx
083fd443 +0x1455:  mov    %ebx,%eax
083fd445 +0x1457:  mov    %eax,(%esp)
083fd448 +0x145a:  call   0844eb0e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1724>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1724
083fd44d +0x145f:  mov    %ebx,%eax
083fd44f +0x1461:  mov    %eax,%edx
083fd451 +0x1463:  mov    0x8(%ebp),%eax
083fd454 +0x1466:  mov    %edx,0x45c(%eax)
083fd45a +0x146c:  movl   $0x4,(%esp)
083fd461 +0x1473:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd466 +0x1478:  mov    %eax,%ebx
083fd468 +0x147a:  mov    %ebx,%eax
083fd46a +0x147c:  mov    %eax,(%esp)
083fd46d +0x147f:  call   0844eb2a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1740>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1740
083fd472 +0x1484:  mov    %ebx,%eax
083fd474 +0x1486:  mov    %eax,%edx
083fd476 +0x1488:  mov    0x8(%ebp),%eax
083fd479 +0x148b:  mov    %edx,0x470(%eax)
083fd47f +0x1491:  movl   $0x4,(%esp)
083fd486 +0x1498:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd48b +0x149d:  mov    %eax,%ebx
083fd48d +0x149f:  mov    %ebx,%eax
083fd48f +0x14a1:  mov    %eax,(%esp)
083fd492 +0x14a4:  call   0844eb46 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x175c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x175c
083fd497 +0x14a9:  mov    %ebx,%eax
083fd499 +0x14ab:  mov    %eax,%edx
083fd49b +0x14ad:  mov    0x8(%ebp),%eax
083fd49e +0x14b0:  mov    %edx,0x48c(%eax)
083fd4a4 +0x14b6:  movl   $0x4,(%esp)
083fd4ab +0x14bd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd4b0 +0x14c2:  mov    %eax,%ebx
083fd4b2 +0x14c4:  mov    %ebx,%eax
083fd4b4 +0x14c6:  mov    %eax,(%esp)
083fd4b7 +0x14c9:  call   0844eb62 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1778>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1778
083fd4bc +0x14ce:  mov    %ebx,%eax
083fd4be +0x14d0:  mov    %eax,%edx
083fd4c0 +0x14d2:  mov    0x8(%ebp),%eax
083fd4c3 +0x14d5:  mov    %edx,0x4a0(%eax)
083fd4c9 +0x14db:  movl   $0x4,(%esp)
083fd4d0 +0x14e2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd4d5 +0x14e7:  mov    %eax,%ebx
083fd4d7 +0x14e9:  mov    %ebx,%eax
083fd4d9 +0x14eb:  mov    %eax,(%esp)
083fd4dc +0x14ee:  call   0844eb7e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1794>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1794
083fd4e1 +0x14f3:  mov    %ebx,%eax
083fd4e3 +0x14f5:  mov    %eax,%edx
083fd4e5 +0x14f7:  mov    0x8(%ebp),%eax
083fd4e8 +0x14fa:  mov    %edx,0x4a8(%eax)
083fd4ee +0x1500:  movl   $0x4,(%esp)
083fd4f5 +0x1507:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd4fa +0x150c:  mov    %eax,%ebx
083fd4fc +0x150e:  mov    %ebx,%eax
083fd4fe +0x1510:  mov    %eax,(%esp)
083fd501 +0x1513:  call   0844eb9a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x17b0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x17b0
083fd506 +0x1518:  mov    %ebx,%eax
083fd508 +0x151a:  mov    %eax,%edx
083fd50a +0x151c:  mov    0x8(%ebp),%eax
083fd50d +0x151f:  mov    %edx,0x544(%eax)
083fd513 +0x1525:  movl   $0x4,(%esp)
083fd51a +0x152c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd51f +0x1531:  mov    %eax,%ebx
083fd521 +0x1533:  mov    %ebx,%eax
083fd523 +0x1535:  mov    %eax,(%esp)
083fd526 +0x1538:  call   0844ebb6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x17cc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x17cc
083fd52b +0x153d:  mov    %ebx,%eax
083fd52d +0x153f:  mov    %eax,%edx
083fd52f +0x1541:  mov    0x8(%ebp),%eax
083fd532 +0x1544:  mov    %edx,0x4b0(%eax)
083fd538 +0x154a:  movl   $0x4,(%esp)
083fd53f +0x1551:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd544 +0x1556:  mov    %eax,%ebx
083fd546 +0x1558:  mov    %ebx,%eax
083fd548 +0x155a:  mov    %eax,(%esp)
083fd54b +0x155d:  call   0844ebd2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x17e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x17e8
083fd550 +0x1562:  mov    %ebx,%eax
083fd552 +0x1564:  mov    %eax,%edx
083fd554 +0x1566:  mov    0x8(%ebp),%eax
083fd557 +0x1569:  mov    %edx,0x4b4(%eax)
083fd55d +0x156f:  movl   $0x4,(%esp)
083fd564 +0x1576:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd569 +0x157b:  mov    %eax,%ebx
083fd56b +0x157d:  mov    %ebx,%eax
083fd56d +0x157f:  mov    %eax,(%esp)
083fd570 +0x1582:  call   0844ebee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1804>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1804
083fd575 +0x1587:  mov    %ebx,%eax
083fd577 +0x1589:  mov    %eax,%edx
083fd579 +0x158b:  mov    0x8(%ebp),%eax
083fd57c +0x158e:  mov    %edx,0x4bc(%eax)
083fd582 +0x1594:  movl   $0x4,(%esp)
083fd589 +0x159b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd58e +0x15a0:  mov    %eax,%ebx
083fd590 +0x15a2:  mov    %ebx,%eax
083fd592 +0x15a4:  mov    %eax,(%esp)
083fd595 +0x15a7:  call   0844ec0a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1820>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1820
083fd59a +0x15ac:  mov    %ebx,%eax
083fd59c +0x15ae:  mov    %eax,%edx
083fd59e +0x15b0:  mov    0x8(%ebp),%eax
083fd5a1 +0x15b3:  mov    %edx,0x4c4(%eax)
083fd5a7 +0x15b9:  movl   $0x4,(%esp)
083fd5ae +0x15c0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd5b3 +0x15c5:  mov    %eax,%ebx
083fd5b5 +0x15c7:  mov    %ebx,%eax
083fd5b7 +0x15c9:  mov    %eax,(%esp)
083fd5ba +0x15cc:  call   0844ec26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x183c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x183c
083fd5bf +0x15d1:  mov    %ebx,%eax
083fd5c1 +0x15d3:  mov    %eax,%edx
083fd5c3 +0x15d5:  mov    0x8(%ebp),%eax
083fd5c6 +0x15d8:  mov    %edx,0x4c8(%eax)
083fd5cc +0x15de:  movl   $0x4,(%esp)
083fd5d3 +0x15e5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd5d8 +0x15ea:  mov    %eax,%ebx
083fd5da +0x15ec:  mov    %ebx,%eax
083fd5dc +0x15ee:  mov    %eax,(%esp)
083fd5df +0x15f1:  call   0844ec42 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1858>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1858
083fd5e4 +0x15f6:  mov    %ebx,%eax
083fd5e6 +0x15f8:  mov    %eax,%edx
083fd5e8 +0x15fa:  mov    0x8(%ebp),%eax
083fd5eb +0x15fd:  mov    %edx,0xad8(%eax)
083fd5f1 +0x1603:  movl   $0x4,(%esp)
083fd5f8 +0x160a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd5fd +0x160f:  mov    %eax,%ebx
083fd5ff +0x1611:  mov    %ebx,%eax
083fd601 +0x1613:  mov    %eax,(%esp)
083fd604 +0x1616:  call   0844ec5e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1874>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1874
083fd609 +0x161b:  mov    %ebx,%eax
083fd60b +0x161d:  mov    %eax,%edx
083fd60d +0x161f:  mov    0x8(%ebp),%eax
083fd610 +0x1622:  mov    %edx,0x4cc(%eax)
083fd616 +0x1628:  movl   $0x4,(%esp)
083fd61d +0x162f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd622 +0x1634:  mov    %eax,%ebx
083fd624 +0x1636:  mov    %ebx,%eax
083fd626 +0x1638:  mov    %eax,(%esp)
083fd629 +0x163b:  call   0844ec7a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1890>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1890
083fd62e +0x1640:  mov    %ebx,%eax
083fd630 +0x1642:  mov    %eax,%edx
083fd632 +0x1644:  mov    0x8(%ebp),%eax
083fd635 +0x1647:  mov    %edx,0x4e0(%eax)
083fd63b +0x164d:  movl   $0x4,(%esp)
083fd642 +0x1654:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd647 +0x1659:  mov    %eax,%ebx
083fd649 +0x165b:  mov    %ebx,%eax
083fd64b +0x165d:  mov    %eax,(%esp)
083fd64e +0x1660:  call   0844ec96 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x18ac>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x18ac
083fd653 +0x1665:  mov    %ebx,%eax
083fd655 +0x1667:  mov    %eax,%edx
083fd657 +0x1669:  mov    0x8(%ebp),%eax
083fd65a +0x166c:  mov    %edx,0x4e8(%eax)
083fd660 +0x1672:  movl   $0x4,(%esp)
083fd667 +0x1679:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd66c +0x167e:  mov    %eax,%ebx
083fd66e +0x1680:  mov    %ebx,%eax
083fd670 +0x1682:  mov    %eax,(%esp)
083fd673 +0x1685:  call   0844ecb2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x18c8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x18c8
083fd678 +0x168a:  mov    %ebx,%eax
083fd67a +0x168c:  mov    %eax,%edx
083fd67c +0x168e:  mov    0x8(%ebp),%eax
083fd67f +0x1691:  mov    %edx,0x4d8(%eax)
083fd685 +0x1697:  movl   $0x4,(%esp)
083fd68c +0x169e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd691 +0x16a3:  mov    %eax,%ebx
083fd693 +0x16a5:  mov    %ebx,%eax
083fd695 +0x16a7:  mov    %eax,(%esp)
083fd698 +0x16aa:  call   0844ecce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x18e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x18e4
083fd69d +0x16af:  mov    %ebx,%eax
083fd69f +0x16b1:  mov    %eax,%edx
083fd6a1 +0x16b3:  mov    0x8(%ebp),%eax
083fd6a4 +0x16b6:  mov    %edx,0x4dc(%eax)
083fd6aa +0x16bc:  movl   $0x4,(%esp)
083fd6b1 +0x16c3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd6b6 +0x16c8:  mov    %eax,%ebx
083fd6b8 +0x16ca:  mov    %ebx,%eax
083fd6ba +0x16cc:  mov    %eax,(%esp)
083fd6bd +0x16cf:  call   0844ecea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1900>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1900
083fd6c2 +0x16d4:  mov    %ebx,%eax
083fd6c4 +0x16d6:  mov    %eax,%edx
083fd6c6 +0x16d8:  mov    0x8(%ebp),%eax
083fd6c9 +0x16db:  mov    %edx,0x500(%eax)
083fd6cf +0x16e1:  movl   $0x4,(%esp)
083fd6d6 +0x16e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd6db +0x16ed:  mov    %eax,%ebx
083fd6dd +0x16ef:  mov    %ebx,%eax
083fd6df +0x16f1:  mov    %eax,(%esp)
083fd6e2 +0x16f4:  call   0844ed06 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x191c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x191c
083fd6e7 +0x16f9:  mov    %ebx,%eax
083fd6e9 +0x16fb:  mov    %eax,%edx
083fd6eb +0x16fd:  mov    0x8(%ebp),%eax
083fd6ee +0x1700:  mov    %edx,0x504(%eax)
083fd6f4 +0x1706:  movl   $0x4,(%esp)
083fd6fb +0x170d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd700 +0x1712:  mov    %eax,%ebx
083fd702 +0x1714:  mov    %ebx,%eax
083fd704 +0x1716:  mov    %eax,(%esp)
083fd707 +0x1719:  call   0844ed22 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1938>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1938
083fd70c +0x171e:  mov    %ebx,%eax
083fd70e +0x1720:  mov    %eax,%edx
083fd710 +0x1722:  mov    0x8(%ebp),%eax
083fd713 +0x1725:  mov    %edx,0x508(%eax)
083fd719 +0x172b:  movl   $0x4,(%esp)
083fd720 +0x1732:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd725 +0x1737:  mov    %eax,%ebx
083fd727 +0x1739:  mov    %ebx,%eax
083fd729 +0x173b:  mov    %eax,(%esp)
083fd72c +0x173e:  call   0844ed3e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1954>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1954
083fd731 +0x1743:  mov    %ebx,%eax
083fd733 +0x1745:  mov    %eax,%edx
083fd735 +0x1747:  mov    0x8(%ebp),%eax
083fd738 +0x174a:  mov    %edx,0x50c(%eax)
083fd73e +0x1750:  movl   $0x4,(%esp)
083fd745 +0x1757:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd74a +0x175c:  mov    %eax,%ebx
083fd74c +0x175e:  mov    %ebx,%eax
083fd74e +0x1760:  mov    %eax,(%esp)
083fd751 +0x1763:  call   0844ed5a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1970>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1970
083fd756 +0x1768:  mov    %ebx,%eax
083fd758 +0x176a:  mov    %eax,%edx
083fd75a +0x176c:  mov    0x8(%ebp),%eax
083fd75d +0x176f:  mov    %edx,0x51c(%eax)
083fd763 +0x1775:  movl   $0x4,(%esp)
083fd76a +0x177c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd76f +0x1781:  mov    %eax,%ebx
083fd771 +0x1783:  mov    %ebx,%eax
083fd773 +0x1785:  mov    %eax,(%esp)
083fd776 +0x1788:  call   0844ed76 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x198c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x198c
083fd77b +0x178d:  mov    %ebx,%eax
083fd77d +0x178f:  mov    %eax,%edx
083fd77f +0x1791:  mov    0x8(%ebp),%eax
083fd782 +0x1794:  mov    %edx,0x520(%eax)
083fd788 +0x179a:  movl   $0x4,(%esp)
083fd78f +0x17a1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd794 +0x17a6:  mov    %eax,%ebx
083fd796 +0x17a8:  mov    %ebx,%eax
083fd798 +0x17aa:  mov    %eax,(%esp)
083fd79b +0x17ad:  call   0844ed92 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x19a8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x19a8
083fd7a0 +0x17b2:  mov    %ebx,%eax
083fd7a2 +0x17b4:  mov    %eax,%edx
083fd7a4 +0x17b6:  mov    0x8(%ebp),%eax
083fd7a7 +0x17b9:  mov    %edx,0x528(%eax)
083fd7ad +0x17bf:  movl   $0x4,(%esp)
083fd7b4 +0x17c6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd7b9 +0x17cb:  mov    %eax,%ebx
083fd7bb +0x17cd:  mov    %ebx,%eax
083fd7bd +0x17cf:  mov    %eax,(%esp)
083fd7c0 +0x17d2:  call   0844edae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x19c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x19c4
083fd7c5 +0x17d7:  mov    %ebx,%eax
083fd7c7 +0x17d9:  mov    %eax,%edx
083fd7c9 +0x17db:  mov    0x8(%ebp),%eax
083fd7cc +0x17de:  mov    %edx,0x514(%eax)
083fd7d2 +0x17e4:  movl   $0x4,(%esp)
083fd7d9 +0x17eb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd7de +0x17f0:  mov    %eax,%ebx
083fd7e0 +0x17f2:  mov    %ebx,%eax
083fd7e2 +0x17f4:  mov    %eax,(%esp)
083fd7e5 +0x17f7:  call   0844edca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x19e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x19e0
083fd7ea +0x17fc:  mov    %ebx,%eax
083fd7ec +0x17fe:  mov    %eax,%edx
083fd7ee +0x1800:  mov    0x8(%ebp),%eax
083fd7f1 +0x1803:  mov    %edx,0x518(%eax)
083fd7f7 +0x1809:  movl   $0x4,(%esp)
083fd7fe +0x1810:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd803 +0x1815:  mov    %eax,%ebx
083fd805 +0x1817:  mov    %ebx,%eax
083fd807 +0x1819:  mov    %eax,(%esp)
083fd80a +0x181c:  call   0844ede6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x19fc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x19fc
083fd80f +0x1821:  mov    %ebx,%eax
083fd811 +0x1823:  mov    %eax,%edx
083fd813 +0x1825:  mov    0x8(%ebp),%eax
083fd816 +0x1828:  mov    %edx,0x52c(%eax)
083fd81c +0x182e:  movl   $0x4,(%esp)
083fd823 +0x1835:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd828 +0x183a:  mov    %eax,%ebx
083fd82a +0x183c:  mov    %ebx,%eax
083fd82c +0x183e:  mov    %eax,(%esp)
083fd82f +0x1841:  call   0844ee02 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1a18>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1a18
083fd834 +0x1846:  mov    %ebx,%eax
083fd836 +0x1848:  mov    %eax,%edx
083fd838 +0x184a:  mov    0x8(%ebp),%eax
083fd83b +0x184d:  mov    %edx,0x53c(%eax)
083fd841 +0x1853:  movl   $0x4,(%esp)
083fd848 +0x185a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd84d +0x185f:  mov    %eax,%ebx
083fd84f +0x1861:  mov    %ebx,%eax
083fd851 +0x1863:  mov    %eax,(%esp)
083fd854 +0x1866:  call   0844ee1e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1a34>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1a34
083fd859 +0x186b:  mov    %ebx,%eax
083fd85b +0x186d:  mov    %eax,%edx
083fd85d +0x186f:  mov    0x8(%ebp),%eax
083fd860 +0x1872:  mov    %edx,0x540(%eax)
083fd866 +0x1878:  movl   $0x4,(%esp)
083fd86d +0x187f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd872 +0x1884:  mov    %eax,%ebx
083fd874 +0x1886:  mov    %ebx,%eax
083fd876 +0x1888:  mov    %eax,(%esp)
083fd879 +0x188b:  call   0844ee3a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1a50>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1a50
083fd87e +0x1890:  mov    %ebx,%eax
083fd880 +0x1892:  mov    %eax,%edx
083fd882 +0x1894:  mov    0x8(%ebp),%eax
083fd885 +0x1897:  mov    %edx,0x548(%eax)
083fd88b +0x189d:  movl   $0x4,(%esp)
083fd892 +0x18a4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd897 +0x18a9:  mov    %eax,%ebx
083fd899 +0x18ab:  mov    %ebx,%eax
083fd89b +0x18ad:  mov    %eax,(%esp)
083fd89e +0x18b0:  call   0844ee56 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1a6c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1a6c
083fd8a3 +0x18b5:  mov    %ebx,%eax
083fd8a5 +0x18b7:  mov    %eax,%edx
083fd8a7 +0x18b9:  mov    0x8(%ebp),%eax
083fd8aa +0x18bc:  mov    %edx,0x56c(%eax)
083fd8b0 +0x18c2:  movl   $0x4,(%esp)
083fd8b7 +0x18c9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd8bc +0x18ce:  mov    %eax,%ebx
083fd8be +0x18d0:  mov    %ebx,%eax
083fd8c0 +0x18d2:  mov    %eax,(%esp)
083fd8c3 +0x18d5:  call   0844ee72 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1a88>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1a88
083fd8c8 +0x18da:  mov    %ebx,%eax
083fd8ca +0x18dc:  mov    %eax,%edx
083fd8cc +0x18de:  mov    0x8(%ebp),%eax
083fd8cf +0x18e1:  mov    %edx,0x570(%eax)
083fd8d5 +0x18e7:  movl   $0x4,(%esp)
083fd8dc +0x18ee:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd8e1 +0x18f3:  mov    %eax,%ebx
083fd8e3 +0x18f5:  mov    %ebx,%eax
083fd8e5 +0x18f7:  mov    %eax,(%esp)
083fd8e8 +0x18fa:  call   0844ee8e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1aa4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1aa4
083fd8ed +0x18ff:  mov    %ebx,%eax
083fd8ef +0x1901:  mov    %eax,%edx
083fd8f1 +0x1903:  mov    0x8(%ebp),%eax
083fd8f4 +0x1906:  mov    %edx,0x574(%eax)
083fd8fa +0x190c:  movl   $0x4,(%esp)
083fd901 +0x1913:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd906 +0x1918:  mov    %eax,%ebx
083fd908 +0x191a:  mov    %ebx,%eax
083fd90a +0x191c:  mov    %eax,(%esp)
083fd90d +0x191f:  call   0844eeaa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1ac0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1ac0
083fd912 +0x1924:  mov    %ebx,%eax
083fd914 +0x1926:  mov    %eax,%edx
083fd916 +0x1928:  mov    0x8(%ebp),%eax
083fd919 +0x192b:  mov    %edx,0x590(%eax)
083fd91f +0x1931:  movl   $0x4,(%esp)
083fd926 +0x1938:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd92b +0x193d:  mov    %eax,%ebx
083fd92d +0x193f:  mov    %ebx,%eax
083fd92f +0x1941:  mov    %eax,(%esp)
083fd932 +0x1944:  call   0844eec6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1adc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1adc
083fd937 +0x1949:  mov    %ebx,%eax
083fd939 +0x194b:  mov    %eax,%edx
083fd93b +0x194d:  mov    0x8(%ebp),%eax
083fd93e +0x1950:  mov    %edx,0x598(%eax)
083fd944 +0x1956:  movl   $0x4,(%esp)
083fd94b +0x195d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd950 +0x1962:  mov    %eax,%ebx
083fd952 +0x1964:  mov    %ebx,%eax
083fd954 +0x1966:  mov    %eax,(%esp)
083fd957 +0x1969:  call   0844eee2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1af8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1af8
083fd95c +0x196e:  mov    %ebx,%eax
083fd95e +0x1970:  mov    %eax,%edx
083fd960 +0x1972:  mov    0x8(%ebp),%eax
083fd963 +0x1975:  mov    %edx,0x59c(%eax)
083fd969 +0x197b:  movl   $0x4,(%esp)
083fd970 +0x1982:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd975 +0x1987:  mov    %eax,%ebx
083fd977 +0x1989:  mov    %ebx,%eax
083fd979 +0x198b:  mov    %eax,(%esp)
083fd97c +0x198e:  call   0844eefe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1b14>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1b14
083fd981 +0x1993:  mov    %ebx,%eax
083fd983 +0x1995:  mov    %eax,%edx
083fd985 +0x1997:  mov    0x8(%ebp),%eax
083fd988 +0x199a:  mov    %edx,0x594(%eax)
083fd98e +0x19a0:  movl   $0x4,(%esp)
083fd995 +0x19a7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd99a +0x19ac:  mov    %eax,%ebx
083fd99c +0x19ae:  mov    %ebx,%eax
083fd99e +0x19b0:  mov    %eax,(%esp)
083fd9a1 +0x19b3:  call   0844ef1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1b30>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1b30
083fd9a6 +0x19b8:  mov    %ebx,%eax
083fd9a8 +0x19ba:  mov    %eax,%edx
083fd9aa +0x19bc:  mov    0x8(%ebp),%eax
083fd9ad +0x19bf:  mov    %edx,0x5b4(%eax)
083fd9b3 +0x19c5:  movl   $0x4,(%esp)
083fd9ba +0x19cc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd9bf +0x19d1:  mov    %eax,%ebx
083fd9c1 +0x19d3:  mov    %ebx,%eax
083fd9c3 +0x19d5:  mov    %eax,(%esp)
083fd9c6 +0x19d8:  call   0844ef36 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1b4c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1b4c
083fd9cb +0x19dd:  mov    %ebx,%eax
083fd9cd +0x19df:  mov    %eax,%edx
083fd9cf +0x19e1:  mov    0x8(%ebp),%eax
083fd9d2 +0x19e4:  mov    %edx,0x5b8(%eax)
083fd9d8 +0x19ea:  movl   $0x4,(%esp)
083fd9df +0x19f1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fd9e4 +0x19f6:  mov    %eax,%ebx
083fd9e6 +0x19f8:  mov    %ebx,%eax
083fd9e8 +0x19fa:  mov    %eax,(%esp)
083fd9eb +0x19fd:  call   0844ef52 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1b68>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1b68
083fd9f0 +0x1a02:  mov    %ebx,%eax
083fd9f2 +0x1a04:  mov    %eax,%edx
083fd9f4 +0x1a06:  mov    0x8(%ebp),%eax
083fd9f7 +0x1a09:  mov    %edx,0x5bc(%eax)
083fd9fd +0x1a0f:  movl   $0x4,(%esp)
083fda04 +0x1a16:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fda09 +0x1a1b:  mov    %eax,%ebx
083fda0b +0x1a1d:  mov    %ebx,%eax
083fda0d +0x1a1f:  mov    %eax,(%esp)
083fda10 +0x1a22:  call   0844ef6e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1b84>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1b84
083fda15 +0x1a27:  mov    %ebx,%eax
083fda17 +0x1a29:  mov    %eax,%edx
083fda19 +0x1a2b:  mov    0x8(%ebp),%eax
083fda1c +0x1a2e:  mov    %edx,0x5c0(%eax)
083fda22 +0x1a34:  movl   $0x4,(%esp)
083fda29 +0x1a3b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fda2e +0x1a40:  mov    %eax,%ebx
083fda30 +0x1a42:  mov    %ebx,%eax
083fda32 +0x1a44:  mov    %eax,(%esp)
083fda35 +0x1a47:  call   0844ef8a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1ba0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1ba0
083fda3a +0x1a4c:  mov    %ebx,%eax
083fda3c +0x1a4e:  mov    %eax,%edx
083fda3e +0x1a50:  mov    0x8(%ebp),%eax
083fda41 +0x1a53:  mov    %edx,0x5f4(%eax)
083fda47 +0x1a59:  movl   $0x4,(%esp)
083fda4e +0x1a60:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fda53 +0x1a65:  mov    %eax,%ebx
083fda55 +0x1a67:  mov    %ebx,%eax
083fda57 +0x1a69:  mov    %eax,(%esp)
083fda5a +0x1a6c:  call   0844efa6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1bbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1bbc
083fda5f +0x1a71:  mov    %ebx,%eax
083fda61 +0x1a73:  mov    %eax,%edx
083fda63 +0x1a75:  mov    0x8(%ebp),%eax
083fda66 +0x1a78:  mov    %edx,0x604(%eax)
083fda6c +0x1a7e:  movl   $0x4,(%esp)
083fda73 +0x1a85:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fda78 +0x1a8a:  mov    %eax,%ebx
083fda7a +0x1a8c:  mov    %ebx,%eax
083fda7c +0x1a8e:  mov    %eax,(%esp)
083fda7f +0x1a91:  call   0844efc2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1bd8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1bd8
083fda84 +0x1a96:  mov    %ebx,%eax
083fda86 +0x1a98:  mov    %eax,%edx
083fda88 +0x1a9a:  mov    0x8(%ebp),%eax
083fda8b +0x1a9d:  mov    %edx,0x608(%eax)
083fda91 +0x1aa3:  movl   $0x4,(%esp)
083fda98 +0x1aaa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fda9d +0x1aaf:  mov    %eax,%ebx
083fda9f +0x1ab1:  mov    %ebx,%eax
083fdaa1 +0x1ab3:  mov    %eax,(%esp)
083fdaa4 +0x1ab6:  call   0844efde <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1bf4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1bf4
083fdaa9 +0x1abb:  mov    %ebx,%eax
083fdaab +0x1abd:  mov    %eax,%edx
083fdaad +0x1abf:  mov    0x8(%ebp),%eax
083fdab0 +0x1ac2:  mov    %edx,0x60c(%eax)
083fdab6 +0x1ac8:  movl   $0x4,(%esp)
083fdabd +0x1acf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdac2 +0x1ad4:  mov    %eax,%ebx
083fdac4 +0x1ad6:  mov    %ebx,%eax
083fdac6 +0x1ad8:  mov    %eax,(%esp)
083fdac9 +0x1adb:  call   0844effa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c10>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c10
083fdace +0x1ae0:  mov    %ebx,%eax
083fdad0 +0x1ae2:  mov    %eax,%edx
083fdad2 +0x1ae4:  mov    0x8(%ebp),%eax
083fdad5 +0x1ae7:  mov    %edx,0x610(%eax)
083fdadb +0x1aed:  movl   $0x4,(%esp)
083fdae2 +0x1af4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdae7 +0x1af9:  mov    %eax,%ebx
083fdae9 +0x1afb:  mov    %ebx,%eax
083fdaeb +0x1afd:  mov    %eax,(%esp)
083fdaee +0x1b00:  call   0844f016 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c2c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c2c
083fdaf3 +0x1b05:  mov    %ebx,%eax
083fdaf5 +0x1b07:  mov    %eax,%edx
083fdaf7 +0x1b09:  mov    0x8(%ebp),%eax
083fdafa +0x1b0c:  mov    %edx,0x62c(%eax)
083fdb00 +0x1b12:  movl   $0x4,(%esp)
083fdb07 +0x1b19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdb0c +0x1b1e:  mov    %eax,%ebx
083fdb0e +0x1b20:  mov    %ebx,%eax
083fdb10 +0x1b22:  mov    %eax,(%esp)
083fdb13 +0x1b25:  call   0844f032 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c48>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c48
083fdb18 +0x1b2a:  mov    %ebx,%eax
083fdb1a +0x1b2c:  mov    %eax,%edx
083fdb1c +0x1b2e:  mov    0x8(%ebp),%eax
083fdb1f +0x1b31:  mov    %edx,0x644(%eax)
083fdb25 +0x1b37:  movl   $0x4,(%esp)
083fdb2c +0x1b3e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdb31 +0x1b43:  mov    %eax,%ebx
083fdb33 +0x1b45:  mov    %ebx,%eax
083fdb35 +0x1b47:  mov    %eax,(%esp)
083fdb38 +0x1b4a:  call   0844f04e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c64>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c64
083fdb3d +0x1b4f:  mov    %ebx,%eax
083fdb3f +0x1b51:  mov    %eax,%edx
083fdb41 +0x1b53:  mov    0x8(%ebp),%eax
083fdb44 +0x1b56:  mov    %edx,0x658(%eax)
083fdb4a +0x1b5c:  movl   $0x4,(%esp)
083fdb51 +0x1b63:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdb56 +0x1b68:  mov    %eax,%ebx
083fdb58 +0x1b6a:  mov    %ebx,%eax
083fdb5a +0x1b6c:  mov    %eax,(%esp)
083fdb5d +0x1b6f:  call   0844f06a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c80>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c80
083fdb62 +0x1b74:  mov    %ebx,%eax
083fdb64 +0x1b76:  mov    %eax,%edx
083fdb66 +0x1b78:  mov    0x8(%ebp),%eax
083fdb69 +0x1b7b:  mov    %edx,0x660(%eax)
083fdb6f +0x1b81:  movl   $0x4,(%esp)
083fdb76 +0x1b88:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdb7b +0x1b8d:  mov    %eax,%ebx
083fdb7d +0x1b8f:  mov    %ebx,%eax
083fdb7f +0x1b91:  mov    %eax,(%esp)
083fdb82 +0x1b94:  call   0844f086 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c9c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c9c
083fdb87 +0x1b99:  mov    %ebx,%eax
083fdb89 +0x1b9b:  mov    %eax,%edx
083fdb8b +0x1b9d:  mov    0x8(%ebp),%eax
083fdb8e +0x1ba0:  mov    %edx,0x670(%eax)
083fdb94 +0x1ba6:  movl   $0x4,(%esp)
083fdb9b +0x1bad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdba0 +0x1bb2:  mov    %eax,%ebx
083fdba2 +0x1bb4:  mov    %ebx,%eax
083fdba4 +0x1bb6:  mov    %eax,(%esp)
083fdba7 +0x1bb9:  call   0844f0a2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1cb8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1cb8
083fdbac +0x1bbe:  mov    %ebx,%eax
083fdbae +0x1bc0:  mov    %eax,%edx
083fdbb0 +0x1bc2:  mov    0x8(%ebp),%eax
083fdbb3 +0x1bc5:  mov    %edx,0x678(%eax)
083fdbb9 +0x1bcb:  movl   $0x4,(%esp)
083fdbc0 +0x1bd2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdbc5 +0x1bd7:  mov    %eax,%ebx
083fdbc7 +0x1bd9:  mov    %ebx,%eax
083fdbc9 +0x1bdb:  mov    %eax,(%esp)
083fdbcc +0x1bde:  call   0844f0be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1cd4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1cd4
083fdbd1 +0x1be3:  mov    %ebx,%eax
083fdbd3 +0x1be5:  mov    %eax,%edx
083fdbd5 +0x1be7:  mov    0x8(%ebp),%eax
083fdbd8 +0x1bea:  mov    %edx,0x684(%eax)
083fdbde +0x1bf0:  movl   $0x4,(%esp)
083fdbe5 +0x1bf7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdbea +0x1bfc:  mov    %eax,%ebx
083fdbec +0x1bfe:  mov    %ebx,%eax
083fdbee +0x1c00:  mov    %eax,(%esp)
083fdbf1 +0x1c03:  call   0844f0da <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1cf0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1cf0
083fdbf6 +0x1c08:  mov    %ebx,%eax
083fdbf8 +0x1c0a:  mov    %eax,%edx
083fdbfa +0x1c0c:  mov    0x8(%ebp),%eax
083fdbfd +0x1c0f:  mov    %edx,0x680(%eax)
083fdc03 +0x1c15:  movl   $0x4,(%esp)
083fdc0a +0x1c1c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdc0f +0x1c21:  mov    %eax,%ebx
083fdc11 +0x1c23:  mov    %ebx,%eax
083fdc13 +0x1c25:  mov    %eax,(%esp)
083fdc16 +0x1c28:  call   0844f0f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1d0c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1d0c
083fdc1b +0x1c2d:  mov    %ebx,%eax
083fdc1d +0x1c2f:  mov    %eax,%edx
083fdc1f +0x1c31:  mov    0x8(%ebp),%eax
083fdc22 +0x1c34:  mov    %edx,0x698(%eax)
083fdc28 +0x1c3a:  movl   $0x4,(%esp)
083fdc2f +0x1c41:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdc34 +0x1c46:  mov    %eax,%ebx
083fdc36 +0x1c48:  mov    %ebx,%eax
083fdc38 +0x1c4a:  mov    %eax,(%esp)
083fdc3b +0x1c4d:  call   0844f112 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1d28>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1d28
083fdc40 +0x1c52:  mov    %ebx,%eax
083fdc42 +0x1c54:  mov    %eax,%edx
083fdc44 +0x1c56:  mov    0x8(%ebp),%eax
083fdc47 +0x1c59:  mov    %edx,0x6a0(%eax)
083fdc4d +0x1c5f:  movl   $0x4,(%esp)
083fdc54 +0x1c66:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdc59 +0x1c6b:  mov    %eax,%ebx
083fdc5b +0x1c6d:  mov    %ebx,%eax
083fdc5d +0x1c6f:  mov    %eax,(%esp)
083fdc60 +0x1c72:  call   0844f12e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1d44>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1d44
083fdc65 +0x1c77:  mov    %ebx,%eax
083fdc67 +0x1c79:  mov    %eax,%edx
083fdc69 +0x1c7b:  mov    0x8(%ebp),%eax
083fdc6c +0x1c7e:  mov    %edx,0x6e4(%eax)
083fdc72 +0x1c84:  movl   $0x4,(%esp)
083fdc79 +0x1c8b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdc7e +0x1c90:  mov    %eax,%ebx
083fdc80 +0x1c92:  mov    %ebx,%eax
083fdc82 +0x1c94:  mov    %eax,(%esp)
083fdc85 +0x1c97:  call   0844f14a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1d60>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1d60
083fdc8a +0x1c9c:  mov    %ebx,%eax
083fdc8c +0x1c9e:  mov    %eax,%edx
083fdc8e +0x1ca0:  mov    0x8(%ebp),%eax
083fdc91 +0x1ca3:  mov    %edx,0x708(%eax)
083fdc97 +0x1ca9:  movl   $0x4,(%esp)
083fdc9e +0x1cb0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdca3 +0x1cb5:  mov    %eax,%ebx
083fdca5 +0x1cb7:  mov    %ebx,%eax
083fdca7 +0x1cb9:  mov    %eax,(%esp)
083fdcaa +0x1cbc:  call   0844f166 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1d7c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1d7c
083fdcaf +0x1cc1:  mov    %ebx,%eax
083fdcb1 +0x1cc3:  mov    %eax,%edx
083fdcb3 +0x1cc5:  mov    0x8(%ebp),%eax
083fdcb6 +0x1cc8:  mov    %edx,0x70c(%eax)
083fdcbc +0x1cce:  movl   $0x4,(%esp)
083fdcc3 +0x1cd5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdcc8 +0x1cda:  mov    %eax,%ebx
083fdcca +0x1cdc:  mov    %ebx,%eax
083fdccc +0x1cde:  mov    %eax,(%esp)
083fdccf +0x1ce1:  call   0844f182 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1d98>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1d98
083fdcd4 +0x1ce6:  mov    %ebx,%eax
083fdcd6 +0x1ce8:  mov    %eax,%edx
083fdcd8 +0x1cea:  mov    0x8(%ebp),%eax
083fdcdb +0x1ced:  mov    %edx,0x710(%eax)
083fdce1 +0x1cf3:  movl   $0x4,(%esp)
083fdce8 +0x1cfa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdced +0x1cff:  mov    %eax,%ebx
083fdcef +0x1d01:  mov    %ebx,%eax
083fdcf1 +0x1d03:  mov    %eax,(%esp)
083fdcf4 +0x1d06:  call   0844f19e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1db4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1db4
083fdcf9 +0x1d0b:  mov    %ebx,%eax
083fdcfb +0x1d0d:  mov    %eax,%edx
083fdcfd +0x1d0f:  mov    0x8(%ebp),%eax
083fdd00 +0x1d12:  mov    %edx,0x714(%eax)
083fdd06 +0x1d18:  movl   $0x4,(%esp)
083fdd0d +0x1d1f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdd12 +0x1d24:  mov    %eax,%ebx
083fdd14 +0x1d26:  mov    %ebx,%eax
083fdd16 +0x1d28:  mov    %eax,(%esp)
083fdd19 +0x1d2b:  call   0844f1ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1dd0
083fdd1e +0x1d30:  mov    %ebx,%eax
083fdd20 +0x1d32:  mov    %eax,%edx
083fdd22 +0x1d34:  mov    0x8(%ebp),%eax
083fdd25 +0x1d37:  mov    %edx,0x630(%eax)
083fdd2b +0x1d3d:  movl   $0x4,(%esp)
083fdd32 +0x1d44:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdd37 +0x1d49:  mov    %eax,%ebx
083fdd39 +0x1d4b:  mov    %ebx,%eax
083fdd3b +0x1d4d:  mov    %eax,(%esp)
083fdd3e +0x1d50:  call   0844f1d6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1dec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1dec
083fdd43 +0x1d55:  mov    %ebx,%eax
083fdd45 +0x1d57:  mov    %eax,%edx
083fdd47 +0x1d59:  mov    0x8(%ebp),%eax
083fdd4a +0x1d5c:  mov    %edx,0x728(%eax)
083fdd50 +0x1d62:  movl   $0x4,(%esp)
083fdd57 +0x1d69:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdd5c +0x1d6e:  mov    %eax,%ebx
083fdd5e +0x1d70:  mov    %ebx,%eax
083fdd60 +0x1d72:  mov    %eax,(%esp)
083fdd63 +0x1d75:  call   0844f1f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1e08>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1e08
083fdd68 +0x1d7a:  mov    %ebx,%eax
083fdd6a +0x1d7c:  mov    %eax,%edx
083fdd6c +0x1d7e:  mov    0x8(%ebp),%eax
083fdd6f +0x1d81:  mov    %edx,0x72c(%eax)
083fdd75 +0x1d87:  movl   $0x4,(%esp)
083fdd7c +0x1d8e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdd81 +0x1d93:  mov    %eax,%ebx
083fdd83 +0x1d95:  mov    %ebx,%eax
083fdd85 +0x1d97:  mov    %eax,(%esp)
083fdd88 +0x1d9a:  call   0844f20e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1e24>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1e24
083fdd8d +0x1d9f:  mov    %ebx,%eax
083fdd8f +0x1da1:  mov    %eax,%edx
083fdd91 +0x1da3:  mov    0x8(%ebp),%eax
083fdd94 +0x1da6:  mov    %edx,0x754(%eax)
083fdd9a +0x1dac:  movl   $0x4,(%esp)
083fdda1 +0x1db3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdda6 +0x1db8:  mov    %eax,%ebx
083fdda8 +0x1dba:  mov    %ebx,%eax
083fddaa +0x1dbc:  mov    %eax,(%esp)
083fddad +0x1dbf:  call   0844f22a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1e40>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1e40
083fddb2 +0x1dc4:  mov    %ebx,%eax
083fddb4 +0x1dc6:  mov    %eax,%edx
083fddb6 +0x1dc8:  mov    0x8(%ebp),%eax
083fddb9 +0x1dcb:  mov    %edx,0x758(%eax)
083fddbf +0x1dd1:  movl   $0x4,(%esp)
083fddc6 +0x1dd8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fddcb +0x1ddd:  mov    %eax,%ebx
083fddcd +0x1ddf:  mov    %ebx,%eax
083fddcf +0x1de1:  mov    %eax,(%esp)
083fddd2 +0x1de4:  call   0844f246 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1e5c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1e5c
083fddd7 +0x1de9:  mov    %ebx,%eax
083fddd9 +0x1deb:  mov    %eax,%edx
083fdddb +0x1ded:  mov    0x8(%ebp),%eax
083fddde +0x1df0:  mov    %edx,0x770(%eax)
083fdde4 +0x1df6:  movl   $0x4,(%esp)
083fddeb +0x1dfd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fddf0 +0x1e02:  mov    %eax,%ebx
083fddf2 +0x1e04:  mov    %ebx,%eax
083fddf4 +0x1e06:  mov    %eax,(%esp)
083fddf7 +0x1e09:  call   0844f262 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1e78>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1e78
083fddfc +0x1e0e:  mov    %ebx,%eax
083fddfe +0x1e10:  mov    %eax,%edx
083fde00 +0x1e12:  mov    0x8(%ebp),%eax
083fde03 +0x1e15:  mov    %edx,0x774(%eax)
083fde09 +0x1e1b:  movl   $0x4,(%esp)
083fde10 +0x1e22:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fde15 +0x1e27:  mov    %eax,%ebx
083fde17 +0x1e29:  mov    %ebx,%eax
083fde19 +0x1e2b:  mov    %eax,(%esp)
083fde1c +0x1e2e:  call   0844f27e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1e94>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1e94
083fde21 +0x1e33:  mov    %ebx,%eax
083fde23 +0x1e35:  mov    %eax,%edx
083fde25 +0x1e37:  mov    0x8(%ebp),%eax
083fde28 +0x1e3a:  mov    %edx,0x778(%eax)
083fde2e +0x1e40:  movl   $0x4,(%esp)
083fde35 +0x1e47:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fde3a +0x1e4c:  mov    %eax,%ebx
083fde3c +0x1e4e:  mov    %ebx,%eax
083fde3e +0x1e50:  mov    %eax,(%esp)
083fde41 +0x1e53:  call   0844f29a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1eb0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1eb0
083fde46 +0x1e58:  mov    %ebx,%eax
083fde48 +0x1e5a:  mov    %eax,%edx
083fde4a +0x1e5c:  mov    0x8(%ebp),%eax
083fde4d +0x1e5f:  mov    %edx,0x780(%eax)
083fde53 +0x1e65:  movl   $0x4,(%esp)
083fde5a +0x1e6c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fde5f +0x1e71:  mov    %eax,%ebx
083fde61 +0x1e73:  mov    %ebx,%eax
083fde63 +0x1e75:  mov    %eax,(%esp)
083fde66 +0x1e78:  call   0844f2b6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1ecc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1ecc
083fde6b +0x1e7d:  mov    %ebx,%eax
083fde6d +0x1e7f:  mov    %eax,%edx
083fde6f +0x1e81:  mov    0x8(%ebp),%eax
083fde72 +0x1e84:  mov    %edx,0x784(%eax)
083fde78 +0x1e8a:  movl   $0x4,(%esp)
083fde7f +0x1e91:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fde84 +0x1e96:  mov    %eax,%ebx
083fde86 +0x1e98:  mov    %ebx,%eax
083fde88 +0x1e9a:  mov    %eax,(%esp)
083fde8b +0x1e9d:  call   0844f2d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1ee8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1ee8
083fde90 +0x1ea2:  mov    %ebx,%eax
083fde92 +0x1ea4:  mov    %eax,%edx
083fde94 +0x1ea6:  mov    0x8(%ebp),%eax
083fde97 +0x1ea9:  mov    %edx,0x788(%eax)
083fde9d +0x1eaf:  movl   $0x4,(%esp)
083fdea4 +0x1eb6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdea9 +0x1ebb:  mov    %eax,%ebx
083fdeab +0x1ebd:  mov    %ebx,%eax
083fdead +0x1ebf:  mov    %eax,(%esp)
083fdeb0 +0x1ec2:  call   0844f2ee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1f04>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1f04
083fdeb5 +0x1ec7:  mov    %ebx,%eax
083fdeb7 +0x1ec9:  mov    %eax,%edx
083fdeb9 +0x1ecb:  mov    0x8(%ebp),%eax
083fdebc +0x1ece:  mov    %edx,0x79c(%eax)
083fdec2 +0x1ed4:  movl   $0x4,(%esp)
083fdec9 +0x1edb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdece +0x1ee0:  mov    %eax,%ebx
083fded0 +0x1ee2:  mov    %ebx,%eax
083fded2 +0x1ee4:  mov    %eax,(%esp)
083fded5 +0x1ee7:  call   0844f30a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1f20>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1f20
083fdeda +0x1eec:  mov    %ebx,%eax
083fdedc +0x1eee:  mov    %eax,%edx
083fdede +0x1ef0:  mov    0x8(%ebp),%eax
083fdee1 +0x1ef3:  mov    %edx,0x7a0(%eax)
083fdee7 +0x1ef9:  movl   $0x4,(%esp)
083fdeee +0x1f00:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdef3 +0x1f05:  mov    %eax,%ebx
083fdef5 +0x1f07:  mov    %ebx,%eax
083fdef7 +0x1f09:  mov    %eax,(%esp)
083fdefa +0x1f0c:  call   0844f326 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1f3c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1f3c
083fdeff +0x1f11:  mov    %ebx,%eax
083fdf01 +0x1f13:  mov    %eax,%edx
083fdf03 +0x1f15:  mov    0x8(%ebp),%eax
083fdf06 +0x1f18:  mov    %edx,0x7a4(%eax)
083fdf0c +0x1f1e:  movl   $0x4,(%esp)
083fdf13 +0x1f25:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdf18 +0x1f2a:  mov    %eax,%ebx
083fdf1a +0x1f2c:  mov    %ebx,%eax
083fdf1c +0x1f2e:  mov    %eax,(%esp)
083fdf1f +0x1f31:  call   0844f342 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1f58>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1f58
083fdf24 +0x1f36:  mov    %ebx,%eax
083fdf26 +0x1f38:  mov    %eax,%edx
083fdf28 +0x1f3a:  mov    0x8(%ebp),%eax
083fdf2b +0x1f3d:  mov    %edx,0x7a8(%eax)
083fdf31 +0x1f43:  movl   $0x4,(%esp)
083fdf38 +0x1f4a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdf3d +0x1f4f:  mov    %eax,%ebx
083fdf3f +0x1f51:  mov    %ebx,%eax
083fdf41 +0x1f53:  mov    %eax,(%esp)
083fdf44 +0x1f56:  call   0844f35e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1f74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1f74
083fdf49 +0x1f5b:  mov    %ebx,%eax
083fdf4b +0x1f5d:  mov    %eax,%edx
083fdf4d +0x1f5f:  mov    0x8(%ebp),%eax
083fdf50 +0x1f62:  mov    %edx,0x7b0(%eax)
083fdf56 +0x1f68:  movl   $0x4,(%esp)
083fdf5d +0x1f6f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdf62 +0x1f74:  mov    %eax,%ebx
083fdf64 +0x1f76:  mov    %ebx,%eax
083fdf66 +0x1f78:  mov    %eax,(%esp)
083fdf69 +0x1f7b:  call   0844f37a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1f90>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1f90
083fdf6e +0x1f80:  mov    %ebx,%eax
083fdf70 +0x1f82:  mov    %eax,%edx
083fdf72 +0x1f84:  mov    0x8(%ebp),%eax
083fdf75 +0x1f87:  mov    %edx,0x7b4(%eax)
083fdf7b +0x1f8d:  movl   $0x4,(%esp)
083fdf82 +0x1f94:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdf87 +0x1f99:  mov    %eax,%ebx
083fdf89 +0x1f9b:  mov    %ebx,%eax
083fdf8b +0x1f9d:  mov    %eax,(%esp)
083fdf8e +0x1fa0:  call   0844f396 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1fac>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1fac
083fdf93 +0x1fa5:  mov    %ebx,%eax
083fdf95 +0x1fa7:  mov    %eax,%edx
083fdf97 +0x1fa9:  mov    0x8(%ebp),%eax
083fdf9a +0x1fac:  mov    %edx,0x7b8(%eax)
083fdfa0 +0x1fb2:  movl   $0x4,(%esp)
083fdfa7 +0x1fb9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdfac +0x1fbe:  mov    %eax,%ebx
083fdfae +0x1fc0:  mov    %ebx,%eax
083fdfb0 +0x1fc2:  mov    %eax,(%esp)
083fdfb3 +0x1fc5:  call   0844f3b2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1fc8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1fc8
083fdfb8 +0x1fca:  mov    %ebx,%eax
083fdfba +0x1fcc:  mov    %eax,%edx
083fdfbc +0x1fce:  mov    0x8(%ebp),%eax
083fdfbf +0x1fd1:  mov    %edx,0x7d4(%eax)
083fdfc5 +0x1fd7:  movl   $0x4,(%esp)
083fdfcc +0x1fde:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdfd1 +0x1fe3:  mov    %eax,%ebx
083fdfd3 +0x1fe5:  mov    %ebx,%eax
083fdfd5 +0x1fe7:  mov    %eax,(%esp)
083fdfd8 +0x1fea:  call   0844f3ce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1fe4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1fe4
083fdfdd +0x1fef:  mov    %ebx,%eax
083fdfdf +0x1ff1:  mov    %eax,%edx
083fdfe1 +0x1ff3:  mov    0x8(%ebp),%eax
083fdfe4 +0x1ff6:  mov    %edx,0x7bc(%eax)
083fdfea +0x1ffc:  movl   $0x4,(%esp)
083fdff1 +0x2003:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fdff6 +0x2008:  mov    %eax,%ebx
083fdff8 +0x200a:  mov    %ebx,%eax
083fdffa +0x200c:  mov    %eax,(%esp)
083fdffd +0x200f:  call   0844f3ea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2000>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2000
083fe002 +0x2014:  mov    %ebx,%eax
083fe004 +0x2016:  mov    %eax,%edx
083fe006 +0x2018:  mov    0x8(%ebp),%eax
083fe009 +0x201b:  mov    %edx,0x7c0(%eax)
083fe00f +0x2021:  movl   $0x4,(%esp)
083fe016 +0x2028:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe01b +0x202d:  mov    %eax,%ebx
083fe01d +0x202f:  mov    %ebx,%eax
083fe01f +0x2031:  mov    %eax,(%esp)
083fe022 +0x2034:  call   0844f406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x201c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x201c
083fe027 +0x2039:  mov    %ebx,%eax
083fe029 +0x203b:  mov    %eax,%edx
083fe02b +0x203d:  mov    0x8(%ebp),%eax
083fe02e +0x2040:  mov    %edx,0x7c4(%eax)
083fe034 +0x2046:  movl   $0x4,(%esp)
083fe03b +0x204d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe040 +0x2052:  mov    %eax,%ebx
083fe042 +0x2054:  mov    %ebx,%eax
083fe044 +0x2056:  mov    %eax,(%esp)
083fe047 +0x2059:  call   0844f422 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2038>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2038
083fe04c +0x205e:  mov    %ebx,%eax
083fe04e +0x2060:  mov    %eax,%edx
083fe050 +0x2062:  mov    0x8(%ebp),%eax
083fe053 +0x2065:  mov    %edx,0x7cc(%eax)
083fe059 +0x206b:  movl   $0x4,(%esp)
083fe060 +0x2072:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe065 +0x2077:  mov    %eax,%ebx
083fe067 +0x2079:  mov    %ebx,%eax
083fe069 +0x207b:  mov    %eax,(%esp)
083fe06c +0x207e:  call   0844f43e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2054>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2054
083fe071 +0x2083:  mov    %ebx,%eax
083fe073 +0x2085:  mov    %eax,%edx
083fe075 +0x2087:  mov    0x8(%ebp),%eax
083fe078 +0x208a:  mov    %edx,0x7c8(%eax)
083fe07e +0x2090:  movl   $0x4,(%esp)
083fe085 +0x2097:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe08a +0x209c:  mov    %eax,%ebx
083fe08c +0x209e:  mov    %ebx,%eax
083fe08e +0x20a0:  mov    %eax,(%esp)
083fe091 +0x20a3:  call   0844f45a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2070>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2070
083fe096 +0x20a8:  mov    %ebx,%eax
083fe098 +0x20aa:  mov    %eax,%edx
083fe09a +0x20ac:  mov    0x8(%ebp),%eax
083fe09d +0x20af:  mov    %edx,0x7f4(%eax)
083fe0a3 +0x20b5:  movl   $0x4,(%esp)
083fe0aa +0x20bc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe0af +0x20c1:  mov    %eax,%ebx
083fe0b1 +0x20c3:  mov    %ebx,%eax
083fe0b3 +0x20c5:  mov    %eax,(%esp)
083fe0b6 +0x20c8:  call   0844f476 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x208c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x208c
083fe0bb +0x20cd:  mov    %ebx,%eax
083fe0bd +0x20cf:  mov    %eax,%edx
083fe0bf +0x20d1:  mov    0x8(%ebp),%eax
083fe0c2 +0x20d4:  mov    %edx,0x7f8(%eax)
083fe0c8 +0x20da:  movl   $0x4,(%esp)
083fe0cf +0x20e1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe0d4 +0x20e6:  mov    %eax,%ebx
083fe0d6 +0x20e8:  mov    %ebx,%eax
083fe0d8 +0x20ea:  mov    %eax,(%esp)
083fe0db +0x20ed:  call   0844ddea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa00>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa00
083fe0e0 +0x20f2:  mov    %ebx,%eax
083fe0e2 +0x20f4:  mov    %eax,%edx
083fe0e4 +0x20f6:  mov    0x8(%ebp),%eax
083fe0e7 +0x20f9:  mov    %edx,0x68(%eax)
083fe0ea +0x20fc:  movl   $0x4,(%esp)
083fe0f1 +0x2103:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe0f6 +0x2108:  mov    %eax,%ebx
083fe0f8 +0x210a:  mov    %ebx,%eax
083fe0fa +0x210c:  mov    %eax,(%esp)
083fe0fd +0x210f:  call   0844de06 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa1c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa1c
083fe102 +0x2114:  mov    %ebx,%eax
083fe104 +0x2116:  mov    %eax,%edx
083fe106 +0x2118:  mov    0x8(%ebp),%eax
083fe109 +0x211b:  mov    %edx,0x6c(%eax)
083fe10c +0x211e:  movl   $0x4,(%esp)
083fe113 +0x2125:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe118 +0x212a:  mov    %eax,%ebx
083fe11a +0x212c:  mov    %ebx,%eax
083fe11c +0x212e:  mov    %eax,(%esp)
083fe11f +0x2131:  call   0844f492 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x20a8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x20a8
083fe124 +0x2136:  mov    %ebx,%eax
083fe126 +0x2138:  mov    %eax,%edx
083fe128 +0x213a:  mov    0x8(%ebp),%eax
083fe12b +0x213d:  mov    %edx,0x7d8(%eax)
083fe131 +0x2143:  movl   $0x4,(%esp)
083fe138 +0x214a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe13d +0x214f:  mov    %eax,%ebx
083fe13f +0x2151:  mov    %ebx,%eax
083fe141 +0x2153:  mov    %eax,(%esp)
083fe144 +0x2156:  call   0844f4ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x20c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x20c4
083fe149 +0x215b:  mov    %ebx,%eax
083fe14b +0x215d:  mov    %eax,%edx
083fe14d +0x215f:  mov    0x8(%ebp),%eax
083fe150 +0x2162:  mov    %edx,0x7dc(%eax)
083fe156 +0x2168:  movl   $0x4,(%esp)
083fe15d +0x216f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe162 +0x2174:  mov    %eax,%ebx
083fe164 +0x2176:  mov    %ebx,%eax
083fe166 +0x2178:  mov    %eax,(%esp)
083fe169 +0x217b:  call   0844f4ca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x20e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x20e0
083fe16e +0x2180:  mov    %ebx,%eax
083fe170 +0x2182:  mov    %eax,%edx
083fe172 +0x2184:  mov    0x8(%ebp),%eax
083fe175 +0x2187:  mov    %edx,0x828(%eax)
083fe17b +0x218d:  movl   $0x4,(%esp)
083fe182 +0x2194:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe187 +0x2199:  mov    %eax,%ebx
083fe189 +0x219b:  mov    %ebx,%eax
083fe18b +0x219d:  mov    %eax,(%esp)
083fe18e +0x21a0:  call   0844f4e6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x20fc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x20fc
083fe193 +0x21a5:  mov    %ebx,%eax
083fe195 +0x21a7:  mov    %eax,%edx
083fe197 +0x21a9:  mov    0x8(%ebp),%eax
083fe19a +0x21ac:  mov    %edx,0x834(%eax)
083fe1a0 +0x21b2:  movl   $0x4,(%esp)
083fe1a7 +0x21b9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe1ac +0x21be:  mov    %eax,%ebx
083fe1ae +0x21c0:  mov    %ebx,%eax
083fe1b0 +0x21c2:  mov    %eax,(%esp)
083fe1b3 +0x21c5:  call   0844f502 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2118>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2118
083fe1b8 +0x21ca:  mov    %ebx,%eax
083fe1ba +0x21cc:  mov    %eax,%edx
083fe1bc +0x21ce:  mov    0x8(%ebp),%eax
083fe1bf +0x21d1:  mov    %edx,0x850(%eax)
083fe1c5 +0x21d7:  movl   $0x4,(%esp)
083fe1cc +0x21de:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe1d1 +0x21e3:  mov    %eax,%ebx
083fe1d3 +0x21e5:  mov    %ebx,%eax
083fe1d5 +0x21e7:  mov    %eax,(%esp)
083fe1d8 +0x21ea:  call   0844f51e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2134>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2134
083fe1dd +0x21ef:  mov    %ebx,%eax
083fe1df +0x21f1:  mov    %eax,%edx
083fe1e1 +0x21f3:  mov    0x8(%ebp),%eax
083fe1e4 +0x21f6:  mov    %edx,0x85c(%eax)
083fe1ea +0x21fc:  movl   $0x4,(%esp)
083fe1f1 +0x2203:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe1f6 +0x2208:  mov    %eax,%ebx
083fe1f8 +0x220a:  mov    %ebx,%eax
083fe1fa +0x220c:  mov    %eax,(%esp)
083fe1fd +0x220f:  call   0844f53a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2150>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2150
083fe202 +0x2214:  mov    %ebx,%eax
083fe204 +0x2216:  mov    %eax,%edx
083fe206 +0x2218:  mov    0x8(%ebp),%eax
083fe209 +0x221b:  mov    %edx,0x860(%eax)
083fe20f +0x2221:  movl   $0x4,(%esp)
083fe216 +0x2228:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe21b +0x222d:  mov    %eax,%ebx
083fe21d +0x222f:  mov    %ebx,%eax
083fe21f +0x2231:  mov    %eax,(%esp)
083fe222 +0x2234:  call   0844f556 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x216c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x216c
083fe227 +0x2239:  mov    %ebx,%eax
083fe229 +0x223b:  mov    %eax,%edx
083fe22b +0x223d:  mov    0x8(%ebp),%eax
083fe22e +0x2240:  mov    %edx,0x868(%eax)
083fe234 +0x2246:  movl   $0x4,(%esp)
083fe23b +0x224d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe240 +0x2252:  mov    %eax,%ebx
083fe242 +0x2254:  mov    %ebx,%eax
083fe244 +0x2256:  mov    %eax,(%esp)
083fe247 +0x2259:  call   0844f572 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2188>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2188
083fe24c +0x225e:  mov    %ebx,%eax
083fe24e +0x2260:  mov    %eax,%edx
083fe250 +0x2262:  mov    0x8(%ebp),%eax
083fe253 +0x2265:  mov    %edx,0x864(%eax)
083fe259 +0x226b:  movl   $0x4,(%esp)
083fe260 +0x2272:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe265 +0x2277:  mov    %eax,%ebx
083fe267 +0x2279:  mov    %ebx,%eax
083fe269 +0x227b:  mov    %eax,(%esp)
083fe26c +0x227e:  call   0844f58e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x21a4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x21a4
083fe271 +0x2283:  mov    %ebx,%eax
083fe273 +0x2285:  mov    %eax,%edx
083fe275 +0x2287:  mov    0x8(%ebp),%eax
083fe278 +0x228a:  mov    %edx,0x86c(%eax)
083fe27e +0x2290:  movl   $0x4,(%esp)
083fe285 +0x2297:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe28a +0x229c:  mov    %eax,%ebx
083fe28c +0x229e:  mov    %ebx,%eax
083fe28e +0x22a0:  mov    %eax,(%esp)
083fe291 +0x22a3:  call   0844f5aa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x21c0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x21c0
083fe296 +0x22a8:  mov    %ebx,%eax
083fe298 +0x22aa:  mov    %eax,%edx
083fe29a +0x22ac:  mov    0x8(%ebp),%eax
083fe29d +0x22af:  mov    %edx,0x874(%eax)
083fe2a3 +0x22b5:  movl   $0x4,(%esp)
083fe2aa +0x22bc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe2af +0x22c1:  mov    %eax,%ebx
083fe2b1 +0x22c3:  mov    %ebx,%eax
083fe2b3 +0x22c5:  mov    %eax,(%esp)
083fe2b6 +0x22c8:  call   0844f5c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x21dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x21dc
083fe2bb +0x22cd:  mov    %ebx,%eax
083fe2bd +0x22cf:  mov    %eax,%edx
083fe2bf +0x22d1:  mov    0x8(%ebp),%eax
083fe2c2 +0x22d4:  mov    %edx,0x880(%eax)
083fe2c8 +0x22da:  movl   $0x4,(%esp)
083fe2cf +0x22e1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe2d4 +0x22e6:  mov    %eax,%ebx
083fe2d6 +0x22e8:  mov    %ebx,%eax
083fe2d8 +0x22ea:  mov    %eax,(%esp)
083fe2db +0x22ed:  call   0844f5e2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x21f8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x21f8
083fe2e0 +0x22f2:  mov    %ebx,%eax
083fe2e2 +0x22f4:  mov    %eax,%edx
083fe2e4 +0x22f6:  mov    0x8(%ebp),%eax
083fe2e7 +0x22f9:  mov    %edx,0x97c(%eax)
083fe2ed +0x22ff:  movl   $0x4,(%esp)
083fe2f4 +0x2306:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe2f9 +0x230b:  mov    %eax,%ebx
083fe2fb +0x230d:  mov    %ebx,%eax
083fe2fd +0x230f:  mov    %eax,(%esp)
083fe300 +0x2312:  call   0844f5fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2214>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2214
083fe305 +0x2317:  mov    %ebx,%eax
083fe307 +0x2319:  mov    %eax,%edx
083fe309 +0x231b:  mov    0x8(%ebp),%eax
083fe30c +0x231e:  mov    %edx,0x8e8(%eax)
083fe312 +0x2324:  movl   $0x4,(%esp)
083fe319 +0x232b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe31e +0x2330:  mov    %eax,%ebx
083fe320 +0x2332:  mov    %ebx,%eax
083fe322 +0x2334:  mov    %eax,(%esp)
083fe325 +0x2337:  call   0844f61a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2230>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2230
083fe32a +0x233c:  mov    %ebx,%eax
083fe32c +0x233e:  mov    %eax,%edx
083fe32e +0x2340:  mov    0x8(%ebp),%eax
083fe331 +0x2343:  mov    %edx,0x8f4(%eax)
083fe337 +0x2349:  movl   $0x4,(%esp)
083fe33e +0x2350:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe343 +0x2355:  mov    %eax,%ebx
083fe345 +0x2357:  mov    %ebx,%eax
083fe347 +0x2359:  mov    %eax,(%esp)
083fe34a +0x235c:  call   0844f636 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x224c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x224c
083fe34f +0x2361:  mov    %ebx,%eax
083fe351 +0x2363:  mov    %eax,%edx
083fe353 +0x2365:  mov    0x8(%ebp),%eax
083fe356 +0x2368:  mov    %edx,0x904(%eax)
083fe35c +0x236e:  movl   $0x4,(%esp)
083fe363 +0x2375:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe368 +0x237a:  mov    %eax,%ebx
083fe36a +0x237c:  mov    %ebx,%eax
083fe36c +0x237e:  mov    %eax,(%esp)
083fe36f +0x2381:  call   0844f652 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2268>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2268
083fe374 +0x2386:  mov    %ebx,%eax
083fe376 +0x2388:  mov    %eax,%edx
083fe378 +0x238a:  mov    0x8(%ebp),%eax
083fe37b +0x238d:  mov    %edx,0x908(%eax)
083fe381 +0x2393:  movl   $0x4,(%esp)
083fe388 +0x239a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe38d +0x239f:  mov    %eax,%ebx
083fe38f +0x23a1:  mov    %ebx,%eax
083fe391 +0x23a3:  mov    %eax,(%esp)
083fe394 +0x23a6:  call   0844f66e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2284>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2284
083fe399 +0x23ab:  mov    %ebx,%eax
083fe39b +0x23ad:  mov    %eax,%edx
083fe39d +0x23af:  mov    0x8(%ebp),%eax
083fe3a0 +0x23b2:  mov    %edx,0x948(%eax)
083fe3a6 +0x23b8:  movl   $0x4,(%esp)
083fe3ad +0x23bf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe3b2 +0x23c4:  mov    %eax,%ebx
083fe3b4 +0x23c6:  mov    %ebx,%eax
083fe3b6 +0x23c8:  mov    %eax,(%esp)
083fe3b9 +0x23cb:  call   0844f68a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x22a0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x22a0
083fe3be +0x23d0:  mov    %ebx,%eax
083fe3c0 +0x23d2:  mov    %eax,%edx
083fe3c2 +0x23d4:  mov    0x8(%ebp),%eax
083fe3c5 +0x23d7:  mov    %edx,0x914(%eax)
083fe3cb +0x23dd:  movl   $0x4,(%esp)
083fe3d2 +0x23e4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe3d7 +0x23e9:  mov    %eax,%ebx
083fe3d9 +0x23eb:  mov    %ebx,%eax
083fe3db +0x23ed:  mov    %eax,(%esp)
083fe3de +0x23f0:  call   0844f6a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x22bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x22bc
083fe3e3 +0x23f5:  mov    %ebx,%eax
083fe3e5 +0x23f7:  mov    %eax,%edx
083fe3e7 +0x23f9:  mov    0x8(%ebp),%eax
083fe3ea +0x23fc:  mov    %edx,0x920(%eax)
083fe3f0 +0x2402:  movl   $0x4,(%esp)
083fe3f7 +0x2409:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe3fc +0x240e:  mov    %eax,%ebx
083fe3fe +0x2410:  mov    %ebx,%eax
083fe400 +0x2412:  mov    %eax,(%esp)
083fe403 +0x2415:  call   0844f6c2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x22d8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x22d8
083fe408 +0x241a:  mov    %ebx,%eax
083fe40a +0x241c:  mov    %eax,%edx
083fe40c +0x241e:  mov    0x8(%ebp),%eax
083fe40f +0x2421:  mov    %edx,0x93c(%eax)
083fe415 +0x2427:  movl   $0x4,(%esp)
083fe41c +0x242e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe421 +0x2433:  mov    %eax,%ebx
083fe423 +0x2435:  mov    %ebx,%eax
083fe425 +0x2437:  mov    %eax,(%esp)
083fe428 +0x243a:  call   0844f6de <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x22f4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x22f4
083fe42d +0x243f:  mov    %ebx,%eax
083fe42f +0x2441:  mov    %eax,%edx
083fe431 +0x2443:  mov    0x8(%ebp),%eax
083fe434 +0x2446:  mov    %edx,0x9b8(%eax)
083fe43a +0x244c:  movl   $0x4,(%esp)
083fe441 +0x2453:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe446 +0x2458:  mov    %eax,%ebx
083fe448 +0x245a:  mov    %ebx,%eax
083fe44a +0x245c:  mov    %eax,(%esp)
083fe44d +0x245f:  call   0844f6fa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2310>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2310
083fe452 +0x2464:  mov    %ebx,%eax
083fe454 +0x2466:  mov    %eax,%edx
083fe456 +0x2468:  mov    0x8(%ebp),%eax
083fe459 +0x246b:  mov    %edx,0x988(%eax)
083fe45f +0x2471:  movl   $0x4,(%esp)
083fe466 +0x2478:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe46b +0x247d:  mov    %eax,%ebx
083fe46d +0x247f:  mov    %ebx,%eax
083fe46f +0x2481:  mov    %eax,(%esp)
083fe472 +0x2484:  call   0844f716 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x232c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x232c
083fe477 +0x2489:  mov    %ebx,%eax
083fe479 +0x248b:  mov    %eax,%edx
083fe47b +0x248d:  mov    0x8(%ebp),%eax
083fe47e +0x2490:  mov    %edx,0x990(%eax)
083fe484 +0x2496:  movl   $0x4,(%esp)
083fe48b +0x249d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe490 +0x24a2:  mov    %eax,%ebx
083fe492 +0x24a4:  mov    %ebx,%eax
083fe494 +0x24a6:  mov    %eax,(%esp)
083fe497 +0x24a9:  call   0844f732 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2348>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2348
083fe49c +0x24ae:  mov    %ebx,%eax
083fe49e +0x24b0:  mov    %eax,%edx
083fe4a0 +0x24b2:  mov    0x8(%ebp),%eax
083fe4a3 +0x24b5:  mov    %edx,0x9b4(%eax)
083fe4a9 +0x24bb:  movl   $0x4,(%esp)
083fe4b0 +0x24c2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe4b5 +0x24c7:  mov    %eax,%ebx
083fe4b7 +0x24c9:  mov    %ebx,%eax
083fe4b9 +0x24cb:  mov    %eax,(%esp)
083fe4bc +0x24ce:  call   0844f74e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2364>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2364
083fe4c1 +0x24d3:  mov    %ebx,%eax
083fe4c3 +0x24d5:  mov    %eax,%edx
083fe4c5 +0x24d7:  mov    0x8(%ebp),%eax
083fe4c8 +0x24da:  mov    %edx,0x9bc(%eax)
083fe4ce +0x24e0:  movl   $0x4,(%esp)
083fe4d5 +0x24e7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe4da +0x24ec:  mov    %eax,%ebx
083fe4dc +0x24ee:  mov    %ebx,%eax
083fe4de +0x24f0:  mov    %eax,(%esp)
083fe4e1 +0x24f3:  call   0844f76a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2380>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2380
083fe4e6 +0x24f8:  mov    %ebx,%eax
083fe4e8 +0x24fa:  mov    %eax,%edx
083fe4ea +0x24fc:  mov    0x8(%ebp),%eax
083fe4ed +0x24ff:  mov    %edx,0x9d8(%eax)
083fe4f3 +0x2505:  movl   $0x4,(%esp)
083fe4fa +0x250c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe4ff +0x2511:  mov    %eax,%ebx
083fe501 +0x2513:  mov    %ebx,%eax
083fe503 +0x2515:  mov    %eax,(%esp)
083fe506 +0x2518:  call   0844f786 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x239c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x239c
083fe50b +0x251d:  mov    %ebx,%eax
083fe50d +0x251f:  mov    %eax,%edx
083fe50f +0x2521:  mov    0x8(%ebp),%eax
083fe512 +0x2524:  mov    %edx,0x9e0(%eax)
083fe518 +0x252a:  movl   $0x4,(%esp)
083fe51f +0x2531:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe524 +0x2536:  mov    %eax,%ebx
083fe526 +0x2538:  mov    %ebx,%eax
083fe528 +0x253a:  mov    %eax,(%esp)
083fe52b +0x253d:  call   0844f7a2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x23b8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x23b8
083fe530 +0x2542:  mov    %ebx,%eax
083fe532 +0x2544:  mov    %eax,%edx
083fe534 +0x2546:  mov    0x8(%ebp),%eax
083fe537 +0x2549:  mov    %edx,0x9e4(%eax)
083fe53d +0x254f:  movl   $0x4,(%esp)
083fe544 +0x2556:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe549 +0x255b:  mov    %eax,%ebx
083fe54b +0x255d:  mov    %ebx,%eax
083fe54d +0x255f:  mov    %eax,(%esp)
083fe550 +0x2562:  call   0844f7be <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x23d4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x23d4
083fe555 +0x2567:  mov    %ebx,%eax
083fe557 +0x2569:  mov    %eax,%edx
083fe559 +0x256b:  mov    0x8(%ebp),%eax
083fe55c +0x256e:  mov    %edx,0x9e8(%eax)
083fe562 +0x2574:  movl   $0x4,(%esp)
083fe569 +0x257b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe56e +0x2580:  mov    %eax,%ebx
083fe570 +0x2582:  mov    %ebx,%eax
083fe572 +0x2584:  mov    %eax,(%esp)
083fe575 +0x2587:  call   0844f7da <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x23f0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x23f0
083fe57a +0x258c:  mov    %ebx,%eax
083fe57c +0x258e:  mov    %eax,%edx
083fe57e +0x2590:  mov    0x8(%ebp),%eax
083fe581 +0x2593:  mov    %edx,0xa04(%eax)
083fe587 +0x2599:  movl   $0x4,(%esp)
083fe58e +0x25a0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe593 +0x25a5:  mov    %eax,%ebx
083fe595 +0x25a7:  mov    %ebx,%eax
083fe597 +0x25a9:  mov    %eax,(%esp)
083fe59a +0x25ac:  call   0844f7f6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x240c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x240c
083fe59f +0x25b1:  mov    %ebx,%eax
083fe5a1 +0x25b3:  mov    %eax,%edx
083fe5a3 +0x25b5:  mov    0x8(%ebp),%eax
083fe5a6 +0x25b8:  mov    %edx,0xa08(%eax)
083fe5ac +0x25be:  movl   $0x4,(%esp)
083fe5b3 +0x25c5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe5b8 +0x25ca:  mov    %eax,%ebx
083fe5ba +0x25cc:  mov    %ebx,%eax
083fe5bc +0x25ce:  mov    %eax,(%esp)
083fe5bf +0x25d1:  call   0844f812 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2428>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2428
083fe5c4 +0x25d6:  mov    %ebx,%eax
083fe5c6 +0x25d8:  mov    %eax,%edx
083fe5c8 +0x25da:  mov    0x8(%ebp),%eax
083fe5cb +0x25dd:  mov    %edx,0xa0c(%eax)
083fe5d1 +0x25e3:  movl   $0x4,(%esp)
083fe5d8 +0x25ea:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe5dd +0x25ef:  mov    %eax,%ebx
083fe5df +0x25f1:  mov    %ebx,%eax
083fe5e1 +0x25f3:  mov    %eax,(%esp)
083fe5e4 +0x25f6:  call   0844f82e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2444>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2444
083fe5e9 +0x25fb:  mov    %ebx,%eax
083fe5eb +0x25fd:  mov    %eax,%edx
083fe5ed +0x25ff:  mov    0x8(%ebp),%eax
083fe5f0 +0x2602:  mov    %edx,0xa18(%eax)
083fe5f6 +0x2608:  movl   $0x4,(%esp)
083fe5fd +0x260f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe602 +0x2614:  mov    %eax,%ebx
083fe604 +0x2616:  mov    %ebx,%eax
083fe606 +0x2618:  mov    %eax,(%esp)
083fe609 +0x261b:  call   0844f84a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2460>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2460
083fe60e +0x2620:  mov    %ebx,%eax
083fe610 +0x2622:  mov    %eax,%edx
083fe612 +0x2624:  mov    0x8(%ebp),%eax
083fe615 +0x2627:  mov    %edx,0xa1c(%eax)
083fe61b +0x262d:  movl   $0x4,(%esp)
083fe622 +0x2634:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe627 +0x2639:  mov    %eax,%ebx
083fe629 +0x263b:  mov    %ebx,%eax
083fe62b +0x263d:  mov    %eax,(%esp)
083fe62e +0x2640:  call   0844f866 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x247c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x247c
083fe633 +0x2645:  mov    %ebx,%eax
083fe635 +0x2647:  mov    %eax,%edx
083fe637 +0x2649:  mov    0x8(%ebp),%eax
083fe63a +0x264c:  mov    %edx,0xa20(%eax)
083fe640 +0x2652:  movl   $0x4,(%esp)
083fe647 +0x2659:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe64c +0x265e:  mov    %eax,%ebx
083fe64e +0x2660:  mov    %ebx,%eax
083fe650 +0x2662:  mov    %eax,(%esp)
083fe653 +0x2665:  call   0844f882 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2498>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2498
083fe658 +0x266a:  mov    %ebx,%eax
083fe65a +0x266c:  mov    %eax,%edx
083fe65c +0x266e:  mov    0x8(%ebp),%eax
083fe65f +0x2671:  mov    %edx,0xa24(%eax)
083fe665 +0x2677:  movl   $0x4,(%esp)
083fe66c +0x267e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe671 +0x2683:  mov    %eax,%ebx
083fe673 +0x2685:  mov    %ebx,%eax
083fe675 +0x2687:  mov    %eax,(%esp)
083fe678 +0x268a:  call   0844f89e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x24b4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x24b4
083fe67d +0x268f:  mov    %ebx,%eax
083fe67f +0x2691:  mov    %eax,%edx
083fe681 +0x2693:  mov    0x8(%ebp),%eax
083fe684 +0x2696:  mov    %edx,0xa2c(%eax)
083fe68a +0x269c:  movl   $0x4,(%esp)
083fe691 +0x26a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe696 +0x26a8:  mov    %eax,%ebx
083fe698 +0x26aa:  mov    %ebx,%eax
083fe69a +0x26ac:  mov    %eax,(%esp)
083fe69d +0x26af:  call   0844f8ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x24d0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x24d0
083fe6a2 +0x26b4:  mov    %ebx,%eax
083fe6a4 +0x26b6:  mov    %eax,%edx
083fe6a6 +0x26b8:  mov    0x8(%ebp),%eax
083fe6a9 +0x26bb:  mov    %edx,0xa38(%eax)
083fe6af +0x26c1:  movl   $0x4,(%esp)
083fe6b6 +0x26c8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe6bb +0x26cd:  mov    %eax,%ebx
083fe6bd +0x26cf:  mov    %ebx,%eax
083fe6bf +0x26d1:  mov    %eax,(%esp)
083fe6c2 +0x26d4:  call   0844f8d6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x24ec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x24ec
083fe6c7 +0x26d9:  mov    %ebx,%eax
083fe6c9 +0x26db:  mov    %eax,%edx
083fe6cb +0x26dd:  mov    0x8(%ebp),%eax
083fe6ce +0x26e0:  mov    %edx,0xa3c(%eax)
083fe6d4 +0x26e6:  movl   $0x4,(%esp)
083fe6db +0x26ed:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe6e0 +0x26f2:  mov    %eax,%ebx
083fe6e2 +0x26f4:  mov    %ebx,%eax
083fe6e4 +0x26f6:  mov    %eax,(%esp)
083fe6e7 +0x26f9:  call   0844f5c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x21dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x21dc
083fe6ec +0x26fe:  mov    %ebx,%eax
083fe6ee +0x2700:  mov    %eax,%edx
083fe6f0 +0x2702:  mov    0x8(%ebp),%eax
083fe6f3 +0x2705:  mov    %edx,0x880(%eax)
083fe6f9 +0x270b:  movl   $0x4,(%esp)
083fe700 +0x2712:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe705 +0x2717:  mov    %eax,%ebx
083fe707 +0x2719:  mov    %ebx,%eax
083fe709 +0x271b:  mov    %eax,(%esp)
083fe70c +0x271e:  call   0844f8f2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2508>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2508
083fe711 +0x2723:  mov    %ebx,%eax
083fe713 +0x2725:  mov    %eax,%edx
083fe715 +0x2727:  mov    0x8(%ebp),%eax
083fe718 +0x272a:  mov    %edx,0xa68(%eax)
083fe71e +0x2730:  movl   $0x4,(%esp)
083fe725 +0x2737:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe72a +0x273c:  mov    %eax,%ebx
083fe72c +0x273e:  mov    %ebx,%eax
083fe72e +0x2740:  mov    %eax,(%esp)
083fe731 +0x2743:  call   0844f90e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2524>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2524
083fe736 +0x2748:  mov    %ebx,%eax
083fe738 +0x274a:  mov    %eax,%edx
083fe73a +0x274c:  mov    0x8(%ebp),%eax
083fe73d +0x274f:  mov    %edx,0xa74(%eax)
083fe743 +0x2755:  movl   $0x4,(%esp)
083fe74a +0x275c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe74f +0x2761:  mov    %eax,%ebx
083fe751 +0x2763:  mov    %ebx,%eax
083fe753 +0x2765:  mov    %eax,(%esp)
083fe756 +0x2768:  call   0844f92a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2540>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2540
083fe75b +0x276d:  mov    %ebx,%eax
083fe75d +0x276f:  mov    %eax,%edx
083fe75f +0x2771:  mov    0x8(%ebp),%eax
083fe762 +0x2774:  mov    %edx,0xa88(%eax)
083fe768 +0x277a:  movl   $0x4,(%esp)
083fe76f +0x2781:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe774 +0x2786:  mov    %eax,%ebx
083fe776 +0x2788:  mov    %ebx,%eax
083fe778 +0x278a:  mov    %eax,(%esp)
083fe77b +0x278d:  call   0844f946 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x255c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x255c
083fe780 +0x2792:  mov    %ebx,%eax
083fe782 +0x2794:  mov    %eax,%edx
083fe784 +0x2796:  mov    0x8(%ebp),%eax
083fe787 +0x2799:  mov    %edx,0xa60(%eax)
083fe78d +0x279f:  movl   $0x4,(%esp)
083fe794 +0x27a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe799 +0x27ab:  mov    %eax,%ebx
083fe79b +0x27ad:  mov    %ebx,%eax
083fe79d +0x27af:  mov    %eax,(%esp)
083fe7a0 +0x27b2:  call   0844f962 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2578>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2578
083fe7a5 +0x27b7:  mov    %ebx,%eax
083fe7a7 +0x27b9:  mov    %eax,%edx
083fe7a9 +0x27bb:  mov    0x8(%ebp),%eax
083fe7ac +0x27be:  mov    %edx,0xa64(%eax)
083fe7b2 +0x27c4:  movl   $0x4,(%esp)
083fe7b9 +0x27cb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe7be +0x27d0:  mov    %eax,%ebx
083fe7c0 +0x27d2:  mov    %ebx,%eax
083fe7c2 +0x27d4:  mov    %eax,(%esp)
083fe7c5 +0x27d7:  call   0844f97e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2594>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2594
083fe7ca +0x27dc:  mov    %ebx,%eax
083fe7cc +0x27de:  mov    %eax,%edx
083fe7ce +0x27e0:  mov    0x8(%ebp),%eax
083fe7d1 +0x27e3:  mov    %edx,0xa8c(%eax)
083fe7d7 +0x27e9:  movl   $0x4,(%esp)
083fe7de +0x27f0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe7e3 +0x27f5:  mov    %eax,%ebx
083fe7e5 +0x27f7:  mov    %ebx,%eax
083fe7e7 +0x27f9:  mov    %eax,(%esp)
083fe7ea +0x27fc:  call   0844f99a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x25b0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x25b0
083fe7ef +0x2801:  mov    %ebx,%eax
083fe7f1 +0x2803:  mov    %eax,%edx
083fe7f3 +0x2805:  mov    0x8(%ebp),%eax
083fe7f6 +0x2808:  mov    %edx,0xa94(%eax)
083fe7fc +0x280e:  movl   $0x4,(%esp)
083fe803 +0x2815:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe808 +0x281a:  mov    %eax,%ebx
083fe80a +0x281c:  mov    %ebx,%eax
083fe80c +0x281e:  mov    %eax,(%esp)
083fe80f +0x2821:  call   0844f9b6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x25cc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x25cc
083fe814 +0x2826:  mov    %ebx,%eax
083fe816 +0x2828:  mov    %eax,%edx
083fe818 +0x282a:  mov    0x8(%ebp),%eax
083fe81b +0x282d:  mov    %edx,0xab0(%eax)
083fe821 +0x2833:  movl   $0x4,(%esp)
083fe828 +0x283a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe82d +0x283f:  mov    %eax,%ebx
083fe82f +0x2841:  mov    %ebx,%eax
083fe831 +0x2843:  mov    %eax,(%esp)
083fe834 +0x2846:  call   0844f9d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x25e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x25e8
083fe839 +0x284b:  mov    %ebx,%eax
083fe83b +0x284d:  mov    %eax,%edx
083fe83d +0x284f:  mov    0x8(%ebp),%eax
083fe840 +0x2852:  mov    %edx,0xab4(%eax)
083fe846 +0x2858:  movl   $0x4,(%esp)
083fe84d +0x285f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe852 +0x2864:  mov    %eax,%ebx
083fe854 +0x2866:  mov    %ebx,%eax
083fe856 +0x2868:  mov    %eax,(%esp)
083fe859 +0x286b:  call   0844f9ee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2604>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2604
083fe85e +0x2870:  mov    %ebx,%eax
083fe860 +0x2872:  mov    %eax,%edx
083fe862 +0x2874:  mov    0x8(%ebp),%eax
083fe865 +0x2877:  mov    %edx,0xab8(%eax)
083fe86b +0x287d:  movl   $0x4,(%esp)
083fe872 +0x2884:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe877 +0x2889:  mov    %eax,%ebx
083fe879 +0x288b:  mov    %ebx,%eax
083fe87b +0x288d:  mov    %eax,(%esp)
083fe87e +0x2890:  call   0844fa0a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2620>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2620
083fe883 +0x2895:  mov    %ebx,%eax
083fe885 +0x2897:  mov    %eax,%edx
083fe887 +0x2899:  mov    0x8(%ebp),%eax
083fe88a +0x289c:  mov    %edx,0xabc(%eax)
083fe890 +0x28a2:  movl   $0x4,(%esp)
083fe897 +0x28a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe89c +0x28ae:  mov    %eax,%ebx
083fe89e +0x28b0:  mov    %ebx,%eax
083fe8a0 +0x28b2:  mov    %eax,(%esp)
083fe8a3 +0x28b5:  call   0844fa26 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x263c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x263c
083fe8a8 +0x28ba:  mov    %ebx,%eax
083fe8aa +0x28bc:  mov    %eax,%edx
083fe8ac +0x28be:  mov    0x8(%ebp),%eax
083fe8af +0x28c1:  mov    %edx,0xac0(%eax)
083fe8b5 +0x28c7:  movl   $0x4,(%esp)
083fe8bc +0x28ce:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe8c1 +0x28d3:  mov    %eax,%ebx
083fe8c3 +0x28d5:  mov    %ebx,%eax
083fe8c5 +0x28d7:  mov    %eax,(%esp)
083fe8c8 +0x28da:  call   0844fa42 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2658>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2658
083fe8cd +0x28df:  mov    %ebx,%eax
083fe8cf +0x28e1:  mov    %eax,%edx
083fe8d1 +0x28e3:  mov    0x8(%ebp),%eax
083fe8d4 +0x28e6:  mov    %edx,0xac8(%eax)
083fe8da +0x28ec:  movl   $0x4,(%esp)
083fe8e1 +0x28f3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe8e6 +0x28f8:  mov    %eax,%ebx
083fe8e8 +0x28fa:  mov    %ebx,%eax
083fe8ea +0x28fc:  mov    %eax,(%esp)
083fe8ed +0x28ff:  call   0844fa5e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2674>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2674
083fe8f2 +0x2904:  mov    %ebx,%eax
083fe8f4 +0x2906:  mov    %eax,%edx
083fe8f6 +0x2908:  mov    0x8(%ebp),%eax
083fe8f9 +0x290b:  mov    %edx,0xac4(%eax)
083fe8ff +0x2911:  movl   $0x4,(%esp)
083fe906 +0x2918:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe90b +0x291d:  mov    %eax,%ebx
083fe90d +0x291f:  mov    %ebx,%eax
083fe90f +0x2921:  mov    %eax,(%esp)
083fe912 +0x2924:  call   0844fa7a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2690>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2690
083fe917 +0x2929:  mov    %ebx,%eax
083fe919 +0x292b:  mov    %eax,%edx
083fe91b +0x292d:  mov    0x8(%ebp),%eax
083fe91e +0x2930:  mov    %edx,0xacc(%eax)
083fe924 +0x2936:  movl   $0x4,(%esp)
083fe92b +0x293d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe930 +0x2942:  mov    %eax,%ebx
083fe932 +0x2944:  mov    %ebx,%eax
083fe934 +0x2946:  mov    %eax,(%esp)
083fe937 +0x2949:  call   0844fa96 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x26ac>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x26ac
083fe93c +0x294e:  mov    %ebx,%eax
083fe93e +0x2950:  mov    %eax,%edx
083fe940 +0x2952:  mov    0x8(%ebp),%eax
083fe943 +0x2955:  mov    %edx,0xad0(%eax)
083fe949 +0x295b:  movl   $0x4,(%esp)
083fe950 +0x2962:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe955 +0x2967:  mov    %eax,%ebx
083fe957 +0x2969:  mov    %ebx,%eax
083fe959 +0x296b:  mov    %eax,(%esp)
083fe95c +0x296e:  call   0844fab2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x26c8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x26c8
083fe961 +0x2973:  mov    %ebx,%eax
083fe963 +0x2975:  mov    %eax,%edx
083fe965 +0x2977:  mov    0x8(%ebp),%eax
083fe968 +0x297a:  mov    %edx,0xadc(%eax)
083fe96e +0x2980:  movl   $0x4,(%esp)
083fe975 +0x2987:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe97a +0x298c:  mov    %eax,%ebx
083fe97c +0x298e:  mov    %ebx,%eax
083fe97e +0x2990:  mov    %eax,(%esp)
083fe981 +0x2993:  call   0844face <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x26e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x26e4
083fe986 +0x2998:  mov    %ebx,%eax
083fe988 +0x299a:  mov    %eax,%edx
083fe98a +0x299c:  mov    0x8(%ebp),%eax
083fe98d +0x299f:  mov    %edx,0xae0(%eax)
083fe993 +0x29a5:  movl   $0x4,(%esp)
083fe99a +0x29ac:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe99f +0x29b1:  mov    %eax,%ebx
083fe9a1 +0x29b3:  mov    %ebx,%eax
083fe9a3 +0x29b5:  mov    %eax,(%esp)
083fe9a6 +0x29b8:  call   0844faea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2700>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2700
083fe9ab +0x29bd:  mov    %ebx,%eax
083fe9ad +0x29bf:  mov    %eax,%edx
083fe9af +0x29c1:  mov    0x8(%ebp),%eax
083fe9b2 +0x29c4:  mov    %edx,0xae4(%eax)
083fe9b8 +0x29ca:  movl   $0x4,(%esp)
083fe9bf +0x29d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe9c4 +0x29d6:  mov    %eax,%ebx
083fe9c6 +0x29d8:  mov    %ebx,%eax
083fe9c8 +0x29da:  mov    %eax,(%esp)
083fe9cb +0x29dd:  call   0844fb06 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x271c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x271c
083fe9d0 +0x29e2:  mov    %ebx,%eax
083fe9d2 +0x29e4:  mov    %eax,%edx
083fe9d4 +0x29e6:  mov    0x8(%ebp),%eax
083fe9d7 +0x29e9:  mov    %edx,0xae8(%eax)
083fe9dd +0x29ef:  movl   $0x4,(%esp)
083fe9e4 +0x29f6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fe9e9 +0x29fb:  mov    %eax,%ebx
083fe9eb +0x29fd:  mov    %ebx,%eax
083fe9ed +0x29ff:  mov    %eax,(%esp)
083fe9f0 +0x2a02:  call   0844fb22 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2738>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2738
083fe9f5 +0x2a07:  mov    %ebx,%eax
083fe9f7 +0x2a09:  mov    %eax,%edx
083fe9f9 +0x2a0b:  mov    0x8(%ebp),%eax
083fe9fc +0x2a0e:  mov    %edx,0xb10(%eax)
083fea02 +0x2a14:  movl   $0x4,(%esp)
083fea09 +0x2a1b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fea0e +0x2a20:  mov    %eax,%ebx
083fea10 +0x2a22:  mov    %ebx,%eax
083fea12 +0x2a24:  mov    %eax,(%esp)
083fea15 +0x2a27:  call   0844fb3e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2754>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2754
083fea1a +0x2a2c:  mov    %ebx,%eax
083fea1c +0x2a2e:  mov    %eax,%edx
083fea1e +0x2a30:  mov    0x8(%ebp),%eax
083fea21 +0x2a33:  mov    %edx,0xb2c(%eax)
083fea27 +0x2a39:  movl   $0x4,(%esp)
083fea2e +0x2a40:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fea33 +0x2a45:  mov    %eax,%ebx
083fea35 +0x2a47:  mov    %ebx,%eax
083fea37 +0x2a49:  mov    %eax,(%esp)
083fea3a +0x2a4c:  call   0844fb5a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2770>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2770
083fea3f +0x2a51:  mov    %ebx,%eax
083fea41 +0x2a53:  mov    %eax,%edx
083fea43 +0x2a55:  mov    0x8(%ebp),%eax
083fea46 +0x2a58:  mov    %edx,0xb60(%eax)
083fea4c +0x2a5e:  movl   $0x4,(%esp)
083fea53 +0x2a65:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fea58 +0x2a6a:  mov    %eax,%ebx
083fea5a +0x2a6c:  mov    %ebx,%eax
083fea5c +0x2a6e:  mov    %eax,(%esp)
083fea5f +0x2a71:  call   0844fb76 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x278c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x278c
083fea64 +0x2a76:  mov    %ebx,%eax
083fea66 +0x2a78:  mov    %eax,%edx
083fea68 +0x2a7a:  mov    0x8(%ebp),%eax
083fea6b +0x2a7d:  mov    %edx,0xb64(%eax)
083fea71 +0x2a83:  movl   $0x4,(%esp)
083fea78 +0x2a8a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fea7d +0x2a8f:  mov    %eax,%ebx
083fea7f +0x2a91:  mov    %ebx,%eax
083fea81 +0x2a93:  mov    %eax,(%esp)
083fea84 +0x2a96:  call   0844fb92 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x27a8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x27a8
083fea89 +0x2a9b:  mov    %ebx,%eax
083fea8b +0x2a9d:  mov    %eax,%edx
083fea8d +0x2a9f:  mov    0x8(%ebp),%eax
083fea90 +0x2aa2:  mov    %edx,0xb78(%eax)
083fea96 +0x2aa8:  movl   $0x4,(%esp)
083fea9d +0x2aaf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feaa2 +0x2ab4:  mov    %eax,%ebx
083feaa4 +0x2ab6:  mov    %ebx,%eax
083feaa6 +0x2ab8:  mov    %eax,(%esp)
083feaa9 +0x2abb:  call   0844fbae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x27c4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x27c4
083feaae +0x2ac0:  mov    %ebx,%eax
083feab0 +0x2ac2:  mov    %eax,%edx
083feab2 +0x2ac4:  mov    0x8(%ebp),%eax
083feab5 +0x2ac7:  mov    %edx,0xb7c(%eax)
083feabb +0x2acd:  movl   $0x4,(%esp)
083feac2 +0x2ad4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feac7 +0x2ad9:  mov    %eax,%ebx
083feac9 +0x2adb:  mov    %ebx,%eax
083feacb +0x2add:  mov    %eax,(%esp)
083feace +0x2ae0:  call   0844fbca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x27e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x27e0
083fead3 +0x2ae5:  mov    %ebx,%eax
083fead5 +0x2ae7:  mov    %eax,%edx
083fead7 +0x2ae9:  mov    0x8(%ebp),%eax
083feada +0x2aec:  mov    %edx,0xb84(%eax)
083feae0 +0x2af2:  movl   $0x4,(%esp)
083feae7 +0x2af9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feaec +0x2afe:  mov    %eax,%ebx
083feaee +0x2b00:  mov    %ebx,%eax
083feaf0 +0x2b02:  mov    %eax,(%esp)
083feaf3 +0x2b05:  call   0844fbe6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x27fc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x27fc
083feaf8 +0x2b0a:  mov    %ebx,%eax
083feafa +0x2b0c:  mov    %eax,%edx
083feafc +0x2b0e:  mov    0x8(%ebp),%eax
083feaff +0x2b11:  mov    %edx,0xb68(%eax)
083feb05 +0x2b17:  movl   $0x1c,(%esp)
083feb0c +0x2b1e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feb11 +0x2b23:  mov    %eax,%ebx
083feb13 +0x2b25:  mov    %ebx,%eax
083feb15 +0x2b27:  mov    %eax,(%esp)
083feb18 +0x2b2a:  call   0844bc38 <_ZN25DB_AradDatabaseDispatcherC1Ev>  ; DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher()
083feb1d +0x2b2f:  jmp    083feb34 <+0x2b46>
083feb1f +0x2b31:  mov    %edx,%esi
083feb21 +0x2b33:  mov    %eax,%edi
083feb23 +0x2b35:  mov    %ebx,(%esp)
083feb26 +0x2b38:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083feb2b +0x2b3d:  mov    %edi,%eax
083feb2d +0x2b3f:  mov    %esi,%edx
083feb2f +0x2b41:  jmp    083ff0dd <+0x30ef>
083feb34 +0x2b46:  mov    %ebx,%eax
083feb36 +0x2b48:  mov    %eax,%edx
083feb38 +0x2b4a:  mov    0x8(%ebp),%eax
083feb3b +0x2b4d:  mov    %edx,0xb74(%eax)
083feb41 +0x2b53:  movl   $0x4,(%esp)
083feb48 +0x2b5a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feb4d +0x2b5f:  mov    %eax,%ebx
083feb4f +0x2b61:  mov    %ebx,%eax
083feb51 +0x2b63:  mov    %eax,(%esp)
083feb54 +0x2b66:  call   0844fc02 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2818>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2818
083feb59 +0x2b6b:  mov    %ebx,%eax
083feb5b +0x2b6d:  mov    %eax,%edx
083feb5d +0x2b6f:  mov    0x8(%ebp),%eax
083feb60 +0x2b72:  mov    %edx,0xb88(%eax)
083feb66 +0x2b78:  movl   $0x4,(%esp)
083feb6d +0x2b7f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feb72 +0x2b84:  mov    %eax,%ebx
083feb74 +0x2b86:  mov    %ebx,%eax
083feb76 +0x2b88:  mov    %eax,(%esp)
083feb79 +0x2b8b:  call   0844fc1e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2834>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2834
083feb7e +0x2b90:  mov    %ebx,%eax
083feb80 +0x2b92:  mov    %eax,%edx
083feb82 +0x2b94:  mov    0x8(%ebp),%eax
083feb85 +0x2b97:  mov    %edx,0xb8c(%eax)
083feb8b +0x2b9d:  movl   $0x4,(%esp)
083feb92 +0x2ba4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feb97 +0x2ba9:  mov    %eax,%ebx
083feb99 +0x2bab:  mov    %ebx,%eax
083feb9b +0x2bad:  mov    %eax,(%esp)
083feb9e +0x2bb0:  call   0844fc3a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2850>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2850
083feba3 +0x2bb5:  mov    %ebx,%eax
083feba5 +0x2bb7:  mov    %eax,%edx
083feba7 +0x2bb9:  mov    0x8(%ebp),%eax
083febaa +0x2bbc:  mov    %edx,0xcf0(%eax)
083febb0 +0x2bc2:  movl   $0x4,(%esp)
083febb7 +0x2bc9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083febbc +0x2bce:  mov    %eax,%ebx
083febbe +0x2bd0:  mov    %ebx,%eax
083febc0 +0x2bd2:  mov    %eax,(%esp)
083febc3 +0x2bd5:  call   0844fc56 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x286c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x286c
083febc8 +0x2bda:  mov    %ebx,%eax
083febca +0x2bdc:  mov    %eax,%edx
083febcc +0x2bde:  mov    0x8(%ebp),%eax
083febcf +0x2be1:  mov    %edx,0xcfc(%eax)
083febd5 +0x2be7:  movl   $0x4,(%esp)
083febdc +0x2bee:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083febe1 +0x2bf3:  mov    %eax,%ebx
083febe3 +0x2bf5:  mov    %ebx,%eax
083febe5 +0x2bf7:  mov    %eax,(%esp)
083febe8 +0x2bfa:  call   0844fc72 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2888>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2888
083febed +0x2bff:  mov    %ebx,%eax
083febef +0x2c01:  mov    %eax,%edx
083febf1 +0x2c03:  mov    0x8(%ebp),%eax
083febf4 +0x2c06:  mov    %edx,0xbd8(%eax)
083febfa +0x2c0c:  movl   $0x4,(%esp)
083fec01 +0x2c13:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fec06 +0x2c18:  mov    %eax,%ebx
083fec08 +0x2c1a:  mov    %ebx,%eax
083fec0a +0x2c1c:  mov    %eax,(%esp)
083fec0d +0x2c1f:  call   0844fc8e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x28a4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x28a4
083fec12 +0x2c24:  mov    %ebx,%eax
083fec14 +0x2c26:  mov    %eax,%edx
083fec16 +0x2c28:  mov    0x8(%ebp),%eax
083fec19 +0x2c2b:  mov    %edx,0xbe4(%eax)
083fec1f +0x2c31:  movl   $0x4,(%esp)
083fec26 +0x2c38:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fec2b +0x2c3d:  mov    %eax,%ebx
083fec2d +0x2c3f:  mov    %ebx,%eax
083fec2f +0x2c41:  mov    %eax,(%esp)
083fec32 +0x2c44:  call   0844fcaa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x28c0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x28c0
083fec37 +0x2c49:  mov    %ebx,%eax
083fec39 +0x2c4b:  mov    %eax,%edx
083fec3b +0x2c4d:  mov    0x8(%ebp),%eax
083fec3e +0x2c50:  mov    %edx,0xbf8(%eax)
083fec44 +0x2c56:  movl   $0x4,(%esp)
083fec4b +0x2c5d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fec50 +0x2c62:  mov    %eax,%ebx
083fec52 +0x2c64:  mov    %ebx,%eax
083fec54 +0x2c66:  mov    %eax,(%esp)
083fec57 +0x2c69:  call   0844fcc6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x28dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x28dc
083fec5c +0x2c6e:  mov    %ebx,%eax
083fec5e +0x2c70:  mov    %eax,%edx
083fec60 +0x2c72:  mov    0x8(%ebp),%eax
083fec63 +0x2c75:  mov    %edx,0xbfc(%eax)
083fec69 +0x2c7b:  movl   $0x4,(%esp)
083fec70 +0x2c82:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fec75 +0x2c87:  mov    %eax,%ebx
083fec77 +0x2c89:  mov    %ebx,%eax
083fec79 +0x2c8b:  mov    %eax,(%esp)
083fec7c +0x2c8e:  call   0844fce2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x28f8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x28f8
083fec81 +0x2c93:  mov    %ebx,%eax
083fec83 +0x2c95:  mov    %eax,%edx
083fec85 +0x2c97:  mov    0x8(%ebp),%eax
083fec88 +0x2c9a:  mov    %edx,0xc00(%eax)
083fec8e +0x2ca0:  movl   $0x4,(%esp)
083fec95 +0x2ca7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fec9a +0x2cac:  mov    %eax,%ebx
083fec9c +0x2cae:  mov    %ebx,%eax
083fec9e +0x2cb0:  mov    %eax,(%esp)
083feca1 +0x2cb3:  call   0844fcfe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2914>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2914
083feca6 +0x2cb8:  mov    %ebx,%eax
083feca8 +0x2cba:  mov    %eax,%edx
083fecaa +0x2cbc:  mov    0x8(%ebp),%eax
083fecad +0x2cbf:  mov    %edx,0xc04(%eax)
083fecb3 +0x2cc5:  movl   $0x4,(%esp)
083fecba +0x2ccc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fecbf +0x2cd1:  mov    %eax,%ebx
083fecc1 +0x2cd3:  mov    %ebx,%eax
083fecc3 +0x2cd5:  mov    %eax,(%esp)
083fecc6 +0x2cd8:  call   0844fd1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2930>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2930
083feccb +0x2cdd:  mov    %ebx,%eax
083feccd +0x2cdf:  mov    %eax,%edx
083feccf +0x2ce1:  mov    0x8(%ebp),%eax
083fecd2 +0x2ce4:  mov    %edx,0xc28(%eax)
083fecd8 +0x2cea:  movl   $0x4,(%esp)
083fecdf +0x2cf1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fece4 +0x2cf6:  mov    %eax,%ebx
083fece6 +0x2cf8:  mov    %ebx,%eax
083fece8 +0x2cfa:  mov    %eax,(%esp)
083feceb +0x2cfd:  call   0844fd36 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x294c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x294c
083fecf0 +0x2d02:  mov    %ebx,%eax
083fecf2 +0x2d04:  mov    %eax,%edx
083fecf4 +0x2d06:  mov    0x8(%ebp),%eax
083fecf7 +0x2d09:  mov    %edx,0xc34(%eax)
083fecfd +0x2d0f:  movl   $0x4,(%esp)
083fed04 +0x2d16:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fed09 +0x2d1b:  mov    %eax,%ebx
083fed0b +0x2d1d:  mov    %ebx,%eax
083fed0d +0x2d1f:  mov    %eax,(%esp)
083fed10 +0x2d22:  call   0844fd52 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2968>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2968
083fed15 +0x2d27:  mov    %ebx,%eax
083fed17 +0x2d29:  mov    %eax,%edx
083fed19 +0x2d2b:  mov    0x8(%ebp),%eax
083fed1c +0x2d2e:  mov    %edx,0xc3c(%eax)
083fed22 +0x2d34:  movl   $0x4,(%esp)
083fed29 +0x2d3b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fed2e +0x2d40:  mov    %eax,%ebx
083fed30 +0x2d42:  mov    %ebx,%eax
083fed32 +0x2d44:  mov    %eax,(%esp)
083fed35 +0x2d47:  call   0844fd6e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2984>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2984
083fed3a +0x2d4c:  mov    %ebx,%eax
083fed3c +0x2d4e:  mov    %eax,%edx
083fed3e +0x2d50:  mov    0x8(%ebp),%eax
083fed41 +0x2d53:  mov    %edx,0xc80(%eax)
083fed47 +0x2d59:  movl   $0x4,(%esp)
083fed4e +0x2d60:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fed53 +0x2d65:  mov    %eax,%ebx
083fed55 +0x2d67:  mov    %ebx,%eax
083fed57 +0x2d69:  mov    %eax,(%esp)
083fed5a +0x2d6c:  call   0844fd8a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x29a0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x29a0
083fed5f +0x2d71:  mov    %ebx,%eax
083fed61 +0x2d73:  mov    %eax,%edx
083fed63 +0x2d75:  mov    0x8(%ebp),%eax
083fed66 +0x2d78:  mov    %edx,0xc50(%eax)
083fed6c +0x2d7e:  movl   $0x4,(%esp)
083fed73 +0x2d85:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fed78 +0x2d8a:  mov    %eax,%ebx
083fed7a +0x2d8c:  mov    %ebx,%eax
083fed7c +0x2d8e:  mov    %eax,(%esp)
083fed7f +0x2d91:  call   0844fda6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x29bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x29bc
083fed84 +0x2d96:  mov    %ebx,%eax
083fed86 +0x2d98:  mov    %eax,%edx
083fed88 +0x2d9a:  mov    0x8(%ebp),%eax
083fed8b +0x2d9d:  mov    %edx,0xc54(%eax)
083fed91 +0x2da3:  movl   $0x4,(%esp)
083fed98 +0x2daa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fed9d +0x2daf:  mov    %eax,%ebx
083fed9f +0x2db1:  mov    %ebx,%eax
083feda1 +0x2db3:  mov    %eax,(%esp)
083feda4 +0x2db6:  call   0844fdc2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x29d8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x29d8
083feda9 +0x2dbb:  mov    %ebx,%eax
083fedab +0x2dbd:  mov    %eax,%edx
083fedad +0x2dbf:  mov    0x8(%ebp),%eax
083fedb0 +0x2dc2:  mov    %edx,0xc58(%eax)
083fedb6 +0x2dc8:  movl   $0x4,(%esp)
083fedbd +0x2dcf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fedc2 +0x2dd4:  mov    %eax,%ebx
083fedc4 +0x2dd6:  mov    %ebx,%eax
083fedc6 +0x2dd8:  mov    %eax,(%esp)
083fedc9 +0x2ddb:  call   0844fdde <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x29f4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x29f4
083fedce +0x2de0:  mov    %ebx,%eax
083fedd0 +0x2de2:  mov    %eax,%edx
083fedd2 +0x2de4:  mov    0x8(%ebp),%eax
083fedd5 +0x2de7:  mov    %edx,0xc5c(%eax)
083feddb +0x2ded:  movl   $0x4,(%esp)
083fede2 +0x2df4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fede7 +0x2df9:  mov    %eax,%ebx
083fede9 +0x2dfb:  mov    %ebx,%eax
083fedeb +0x2dfd:  mov    %eax,(%esp)
083fedee +0x2e00:  call   0844fdfa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2a10>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2a10
083fedf3 +0x2e05:  mov    %ebx,%eax
083fedf5 +0x2e07:  mov    %eax,%edx
083fedf7 +0x2e09:  mov    0x8(%ebp),%eax
083fedfa +0x2e0c:  mov    %edx,0xc60(%eax)
083fee00 +0x2e12:  movl   $0x4,(%esp)
083fee07 +0x2e19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fee0c +0x2e1e:  mov    %eax,%ebx
083fee0e +0x2e20:  mov    %ebx,%eax
083fee10 +0x2e22:  mov    %eax,(%esp)
083fee13 +0x2e25:  call   0844fe16 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2a2c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2a2c
083fee18 +0x2e2a:  mov    %ebx,%eax
083fee1a +0x2e2c:  mov    %eax,%edx
083fee1c +0x2e2e:  mov    0x8(%ebp),%eax
083fee1f +0x2e31:  mov    %edx,0xc64(%eax)
083fee25 +0x2e37:  movl   $0x4,(%esp)
083fee2c +0x2e3e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fee31 +0x2e43:  mov    %eax,%ebx
083fee33 +0x2e45:  mov    %ebx,%eax
083fee35 +0x2e47:  mov    %eax,(%esp)
083fee38 +0x2e4a:  call   0844fe32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2a48>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2a48
083fee3d +0x2e4f:  mov    %ebx,%eax
083fee3f +0x2e51:  mov    %eax,%edx
083fee41 +0x2e53:  mov    0x8(%ebp),%eax
083fee44 +0x2e56:  mov    %edx,0xc68(%eax)
083fee4a +0x2e5c:  movl   $0x4,(%esp)
083fee51 +0x2e63:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fee56 +0x2e68:  mov    %eax,%ebx
083fee58 +0x2e6a:  mov    %ebx,%eax
083fee5a +0x2e6c:  mov    %eax,(%esp)
083fee5d +0x2e6f:  call   0844fe4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2a64>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2a64
083fee62 +0x2e74:  mov    %ebx,%eax
083fee64 +0x2e76:  mov    %eax,%edx
083fee66 +0x2e78:  mov    0x8(%ebp),%eax
083fee69 +0x2e7b:  mov    %edx,0xc6c(%eax)
083fee6f +0x2e81:  movl   $0x4,(%esp)
083fee76 +0x2e88:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fee7b +0x2e8d:  mov    %eax,%ebx
083fee7d +0x2e8f:  mov    %ebx,%eax
083fee7f +0x2e91:  mov    %eax,(%esp)
083fee82 +0x2e94:  call   0844fe6a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2a80>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2a80
083fee87 +0x2e99:  mov    %ebx,%eax
083fee89 +0x2e9b:  mov    %eax,%edx
083fee8b +0x2e9d:  mov    0x8(%ebp),%eax
083fee8e +0x2ea0:  mov    %edx,0xc74(%eax)
083fee94 +0x2ea6:  movl   $0x4,(%esp)
083fee9b +0x2ead:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feea0 +0x2eb2:  mov    %eax,%ebx
083feea2 +0x2eb4:  mov    %ebx,%eax
083feea4 +0x2eb6:  mov    %eax,(%esp)
083feea7 +0x2eb9:  call   0844fe86 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2a9c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2a9c
083feeac +0x2ebe:  mov    %ebx,%eax
083feeae +0x2ec0:  mov    %eax,%edx
083feeb0 +0x2ec2:  mov    0x8(%ebp),%eax
083feeb3 +0x2ec5:  mov    %edx,0xc78(%eax)
083feeb9 +0x2ecb:  movl   $0x4,(%esp)
083feec0 +0x2ed2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feec5 +0x2ed7:  mov    %eax,%ebx
083feec7 +0x2ed9:  mov    %ebx,%eax
083feec9 +0x2edb:  mov    %eax,(%esp)
083feecc +0x2ede:  call   0844fea2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ab8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ab8
083feed1 +0x2ee3:  mov    %ebx,%eax
083feed3 +0x2ee5:  mov    %eax,%edx
083feed5 +0x2ee7:  mov    0x8(%ebp),%eax
083feed8 +0x2eea:  mov    %edx,0xc48(%eax)
083feede +0x2ef0:  movl   $0x4,(%esp)
083feee5 +0x2ef7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083feeea +0x2efc:  mov    %eax,%ebx
083feeec +0x2efe:  mov    %ebx,%eax
083feeee +0x2f00:  mov    %eax,(%esp)
083feef1 +0x2f03:  call   0844febe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2ad4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2ad4
083feef6 +0x2f08:  mov    %ebx,%eax
083feef8 +0x2f0a:  mov    %eax,%edx
083feefa +0x2f0c:  mov    0x8(%ebp),%eax
083feefd +0x2f0f:  mov    %edx,0xc7c(%eax)
083fef03 +0x2f15:  movl   $0x4,(%esp)
083fef0a +0x2f1c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fef0f +0x2f21:  mov    %eax,%ebx
083fef11 +0x2f23:  mov    %ebx,%eax
083fef13 +0x2f25:  mov    %eax,(%esp)
083fef16 +0x2f28:  call   0844feda <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2af0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2af0
083fef1b +0x2f2d:  mov    %ebx,%eax
083fef1d +0x2f2f:  mov    %eax,%edx
083fef1f +0x2f31:  mov    0x8(%ebp),%eax
083fef22 +0x2f34:  mov    %edx,0xc84(%eax)
083fef28 +0x2f3a:  movl   $0x4,(%esp)
083fef2f +0x2f41:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fef34 +0x2f46:  mov    %eax,%ebx
083fef36 +0x2f48:  mov    %ebx,%eax
083fef38 +0x2f4a:  mov    %eax,(%esp)
083fef3b +0x2f4d:  call   0844fef6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2b0c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2b0c
083fef40 +0x2f52:  mov    %ebx,%eax
083fef42 +0x2f54:  mov    %eax,%edx
083fef44 +0x2f56:  mov    0x8(%ebp),%eax
083fef47 +0x2f59:  mov    %edx,0xcb4(%eax)
083fef4d +0x2f5f:  movl   $0x4,(%esp)
083fef54 +0x2f66:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fef59 +0x2f6b:  mov    %eax,%ebx
083fef5b +0x2f6d:  mov    %ebx,%eax
083fef5d +0x2f6f:  mov    %eax,(%esp)
083fef60 +0x2f72:  call   0844ff12 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2b28>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2b28
083fef65 +0x2f77:  mov    %ebx,%eax
083fef67 +0x2f79:  mov    %eax,%edx
083fef69 +0x2f7b:  mov    0x8(%ebp),%eax
083fef6c +0x2f7e:  mov    %edx,0xcbc(%eax)
083fef72 +0x2f84:  movl   $0x4,(%esp)
083fef79 +0x2f8b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fef7e +0x2f90:  mov    %eax,%ebx
083fef80 +0x2f92:  mov    %ebx,%eax
083fef82 +0x2f94:  mov    %eax,(%esp)
083fef85 +0x2f97:  call   0844ff2e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2b44>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2b44
083fef8a +0x2f9c:  mov    %ebx,%eax
083fef8c +0x2f9e:  mov    %eax,%edx
083fef8e +0x2fa0:  mov    0x8(%ebp),%eax
083fef91 +0x2fa3:  mov    %edx,0xccc(%eax)
083fef97 +0x2fa9:  movl   $0x4,(%esp)
083fef9e +0x2fb0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fefa3 +0x2fb5:  mov    %eax,%ebx
083fefa5 +0x2fb7:  mov    %ebx,%eax
083fefa7 +0x2fb9:  mov    %eax,(%esp)
083fefaa +0x2fbc:  call   0844ff4a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2b60>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2b60
083fefaf +0x2fc1:  mov    %ebx,%eax
083fefb1 +0x2fc3:  mov    %eax,%edx
083fefb3 +0x2fc5:  mov    0x8(%ebp),%eax
083fefb6 +0x2fc8:  mov    %edx,0xcd0(%eax)
083fefbc +0x2fce:  movl   $0x1c,(%esp)
083fefc3 +0x2fd5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083fefc8 +0x2fda:  mov    %eax,%ebx
083fefca +0x2fdc:  mov    %ebx,%eax
083fefcc +0x2fde:  mov    %eax,(%esp)
083fefcf +0x2fe1:  call   0844c9d4 <_ZN19DB_DispatcherTaiwanC1Ev>  ; DB_DispatcherTaiwan::DB_DispatcherTaiwan()
083fefd4 +0x2fe6:  jmp    083fefeb <+0x2ffd>
083fefd6 +0x2fe8:  mov    %edx,%esi
083fefd8 +0x2fea:  mov    %eax,%edi
083fefda +0x2fec:  mov    %ebx,(%esp)
083fefdd +0x2fef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083fefe2 +0x2ff4:  mov    %edi,%eax
083fefe4 +0x2ff6:  mov    %esi,%edx
083fefe6 +0x2ff8:  jmp    083ff0dd <+0x30ef>
083fefeb +0x2ffd:  mov    %ebx,%eax
083fefed +0x2fff:  mov    %eax,%edx
083fefef +0x3001:  mov    0x8(%ebp),%eax
083feff2 +0x3004:  mov    %edx,0xd3c(%eax)
083feff8 +0x300a:  movl   $0x4,(%esp)
083fefff +0x3011:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff004 +0x3016:  mov    %eax,%ebx
083ff006 +0x3018:  mov    %ebx,%eax
083ff008 +0x301a:  mov    %eax,(%esp)
083ff00b +0x301d:  call   0844ff66 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2b7c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2b7c
083ff010 +0x3022:  mov    %ebx,%eax
083ff012 +0x3024:  mov    %eax,%edx
083ff014 +0x3026:  mov    0x8(%ebp),%eax
083ff017 +0x3029:  mov    %edx,0xd04(%eax)
083ff01d +0x302f:  movl   $0x4,(%esp)
083ff024 +0x3036:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff029 +0x303b:  mov    %eax,%ebx
083ff02b +0x303d:  mov    %ebx,%eax
083ff02d +0x303f:  mov    %eax,(%esp)
083ff030 +0x3042:  call   0844ff82 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2b98>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2b98
083ff035 +0x3047:  mov    %ebx,%eax
083ff037 +0x3049:  mov    %eax,%edx
083ff039 +0x304b:  mov    0x8(%ebp),%eax
083ff03c +0x304e:  mov    %edx,0xd08(%eax)
083ff042 +0x3054:  movl   $0x4,(%esp)
083ff049 +0x305b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff04e +0x3060:  mov    %eax,%ebx
083ff050 +0x3062:  mov    %ebx,%eax
083ff052 +0x3064:  mov    %eax,(%esp)
083ff055 +0x3067:  call   0844ff9e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2bb4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2bb4
083ff05a +0x306c:  mov    %ebx,%eax
083ff05c +0x306e:  mov    %eax,%edx
083ff05e +0x3070:  mov    0x8(%ebp),%eax
083ff061 +0x3073:  mov    %edx,0xd0c(%eax)
083ff067 +0x3079:  movl   $0x4,(%esp)
083ff06e +0x3080:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff073 +0x3085:  mov    %eax,%ebx
083ff075 +0x3087:  mov    %ebx,%eax
083ff077 +0x3089:  mov    %eax,(%esp)
083ff07a +0x308c:  call   0844ffba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2bd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2bd0
083ff07f +0x3091:  mov    %ebx,%eax
083ff081 +0x3093:  mov    %eax,%edx
083ff083 +0x3095:  mov    0x8(%ebp),%eax
083ff086 +0x3098:  mov    %edx,0xd40(%eax)
083ff08c +0x309e:  movl   $0x4,(%esp)
083ff093 +0x30a5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff098 +0x30aa:  mov    %eax,%ebx
083ff09a +0x30ac:  mov    %ebx,%eax
083ff09c +0x30ae:  mov    %eax,(%esp)
083ff09f +0x30b1:  call   0844ffd6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2bec>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2bec
083ff0a4 +0x30b6:  mov    %ebx,%eax
083ff0a6 +0x30b8:  mov    %eax,%edx
083ff0a8 +0x30ba:  mov    0x8(%ebp),%eax
083ff0ab +0x30bd:  mov    %edx,0xd44(%eax)
083ff0b1 +0x30c3:  movl   $0x4,(%esp)
083ff0b8 +0x30ca:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083ff0bd +0x30cf:  mov    %eax,%ebx
083ff0bf +0x30d1:  mov    %ebx,%eax
083ff0c1 +0x30d3:  mov    %eax,(%esp)
083ff0c4 +0x30d6:  call   0844fff2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2c08>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2c08
083ff0c9 +0x30db:  mov    %ebx,%eax
083ff0cb +0x30dd:  mov    %eax,%edx
083ff0cd +0x30df:  mov    0x8(%ebp),%eax
083ff0d0 +0x30e2:  mov    %edx,0xd4c(%eax)
083ff0d6 +0x30e8:  mov    $0x1,%ebx
083ff0db +0x30ed:  jmp    083ff14c <+0x315e>
083ff0dd +0x30ef:  mov    %eax,(%esp)
083ff0e0 +0x30f2:  call   08725ce0 <__cxa_begin_catch>
083ff0e5 +0x30f7:  movl   $0x5,0xc(%esp)
083ff0ed +0x30ff:  movl   $0x8b2,0x8(%esp)
083ff0f5 +0x3107:  movl   $&_ZZN6DBTask16RegistDispatcherEvE19__PRETTY_FUNCTION__,0x4(%esp)
083ff0fd +0x310f:  lea    -0x2c(%ebp),%eax
083ff100 +0x3112:  mov    %eax,(%esp)
083ff103 +0x3115:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff108 +0x311a:  movl   $0x8b2,0xc(%esp)
083ff110 +0x3122:  movl   $&_ZZN6DBTask16RegistDispatcherEvE19__PRETTY_FUNCTION__,0x8(%esp)
083ff118 +0x312a:  movl   $"[%s][%d]",0x4(%esp)
083ff120 +0x3132:  lea    -0x2c(%ebp),%eax
083ff123 +0x3135:  mov    %eax,(%esp)
083ff126 +0x3138:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff12b +0x313d:  mov    $0x0,%ebx
083ff130 +0x3142:  call   08725c30 <__cxa_end_catch>
083ff135 +0x3147:  jmp    083ff14c <+0x315e>
083ff137 +0x3149:  mov    %edx,%ebx
083ff139 +0x314b:  mov    %eax,%esi
083ff13b +0x314d:  call   08725c30 <__cxa_end_catch>
083ff140 +0x3152:  mov    %esi,%eax
083ff142 +0x3154:  mov    %ebx,%edx
083ff144 +0x3156:  mov    %eax,(%esp)
083ff147 +0x3159:  call   08ae3750 <_Unwind_Resume>
083ff14c +0x315e:  mov    %ebx,%eax
083ff14e +0x3160:  add    $0x3c,%esp
083ff151 +0x3163:  pop    %ebx
083ff152 +0x3164:  pop    %esi
083ff153 +0x3165:  pop    %edi
083ff154 +0x3166:  pop    %ebp
083ff155 +0x3167:  ret
```

## 反编译 C

```c
// DBTask::RegistDispatcher @ 0x83fbfee

/* DBTask::RegistDispatcher() */

undefined4 __thiscall DBTask::RegistDispatcher(DBTask *this)

{
  DB_Login *this_00;
  DB_CreateCharac *this_01;
  DB_DeleteCharac *this_02;
  DB_UpdateCharacView *this_03;
  DB_LoadCharac *this_04;
  DB_LoadInventory *this_05;
  DB_LoadQuest *this_06;
  DB_LoadActionPoint *this_07;
  DB_UpdateActionPoint *this_08;
  DB_LoadRewardMedal *this_09;
  DB_UpdateRewardMedal *this_10;
  DB_LoadEtc *this_11;
  DB_SaveCharac *this_12;
  DB_SaveInven *this_13;
  DB_SaveSkill *this_14;
  DB_SavePvp *this_15;
  DB_UpdateQuest *this_16;
  DB_UpdateGrowType *this_17;
  DB_UpdateLogin *this_18;
  DB_UpdateLogout *this_19;
  DB_UpdateChannel *this_20;
  DB_DeleteChannel *this_21;
  DB_InsertChannel *this_22;
  DB_AvatarItemInsert *this_23;
  DB_AvatarItemDel *this_24;
  DB_AvatarItemMove *this_25;
  DB_AvatarExtendPeriod *this_26;
  DB_AvatarChangeOwner *this_27;
  DB_AvatarChangeStat *this_28;
  DB_SaveRank *this_29;
  DB_InsertTicket *this_30;
  DB_LoadTicket *this_31;
  DB_LoadDungeonClear *this_32;
  DB_SaveDungeonClear *this_33;
  DB_TerminateServer *this_34;
  DB_StatBreakJar *this_35;
  DB_StatComposition *this_36;
  DB_StatCoinUse *this_37;
  DB_StatPvpPlay *this_38;
  DB_StatGameRank *this_39;
  DB_StatDungeonClear *this_40;
  DB_CrashDownReport *this_41;
  DB_SaveFeaturedGoodsIdx *this_42;
  DB_RemoveFeaturedGoodsIdx *this_43;
  DB_GenCeraTicket *this_44;
  DB_SaveEventItem *this_45;
  DB_RemoveEventItem *this_46;
  DB_FatigueResetTimer *this_47;
  DB_SuicideWhenQueueIsEmpty *this_48;
  DB_SavePremiumInfo *this_49;
  DB_SaveCharacInfo4Guild *this_50;
  DB_StatDungeonFail *this_51;
  DB_StatPVPPlay2 *this_52;
  DB_StatUseShusiaService *this_53;
  DB_UpdateDetailChannel *this_54;
  DB_SaveChannelUserLevel *this_55;
  DB_SavePrivateStore *this_56;
  DB_LoadPrivateStore *this_57;
  DB_SaveGamechannel *this_58;
  DB_UpdateQueryCountTimerLogdb *this_59;
  DB_UpdateQueryCountTimerDb *this_60;
  DB_UpdateQueryCountDbLogdb *this_61;
  DB_UpdateNatType *this_62;
  DB_UpdateNatTypeUser *this_63;
  DB_MailBox_Req_CheckReceiver *this_64;
  DB_MailBox_Req_List *this_65;
  DB_MailBox_Req_Delete *this_66;
  DB_MailBox_Req_Send *this_67;
  DB_InsertCreatureItem *this_68;
  DB_UpdateCreatureItemList *this_69;
  DB_UpdateCreatureItem *this_70;
  DB_SwapCreatureItem *this_71;
  DB_GatheringParyStatus *this_72;
  DB_ForbidUserToPlay *this_73;
  DB_LastMsgDb *this_74;
  DB_LastMsgLogDb *this_75;
  DB_SaveClientHackLog *this_76;
  DB_InsertQueueSizeLog *this_77;
  DB_SaveSameMIDOtherCharLoginHack *this_78;
  DB_SaveProxyLog *this_79;
  DB_SaveGoldZeroTradeLog *this_80;
  DB_MouseRegister *this_81;
  DB_PassPadUpdateFailCnt *this_82;
  DB_PassPadUpdateCancelCnt *this_83;
  DB_UpdateDungeonDataStatisticLogdb *this_84;
  DB_BillingRecord *this_85;
  DB_ReqBlackCount *this_86;
  DB_ReqSaveCrazyLevelupEvent *this_87;
  DB_ReqSaveHackUserPunish *this_88;
  DB_InsertUserPlayTime *this_89;
  DB_UpdateHappyBeanInfo *this_90;
  DB_InsertQueryCounterDb *this_91;
  DB_InsertQueryCounterLogdb *this_92;
  DB_ReqItemUpgradeLog *this_93;
  DB_ChangeLetterStat *this_94;
  DB_ReqChangeCharacName *this_95;
  DB_ReqQueryCharacInfo *this_96;
  DB_MailBoxSendNewMailWithDBWork *this_97;
  DB_ReportMannerlessUser_Upgrade *this_98;
  DB_ReportMannerlessUser *this_99;
  DB_UpdateClientCrashDownLog *this_x00100;
  DB_TimerStatisticsLog *this_x00101;
  DB_SaveUserHandicap *this_x00102;
  DB_ForceSaveSimpleSSO *this_x00103;
  DB_CountOfHumanCertify *this_x00104;
  DB_UpdateGiftCount *this_x00105;
  DB_UpdateMemberDoubtTrade *this_x00106;
  DB_UpdateItemDropStatistics *this_x00107;
  DB_UpdatePvPGrade *this_x00108;
  DB_InsertValueStatistic *this_x00109;
  DB_InsertDungeonEntrance *this_x00110;
  DB_InsertDungeonEntrance_hour *this_x00111;
  DB_GetDeathTowerBestRecord *this_x00112;
  DB_UpdateDeathTowerBestRecord *this_x00113;
  DB_DeathTowerLoadTopRanker *this_x00114;
  DB_CheckDoubleGuildName *this_x00115;
  DB_CheckDoubleGuildAddress *this_x00116;
  DB_ArrangeUserLoginInfo *this_x00117;
  DB_SecurityCardIssue *this_x00118;
  DB_SecurityCardDisuse *this_x00119;
  DB_SecurityCardActivate *this_x00120;
  DB_SecurityCardUpdateValidityTime *this_x00121;
  DB_SecurityCardUpdateFailCnt *this_x00122;
  DB_SecurityCardUpdateCancelCnt *this_x00123;
  DB_SecurityCardRetransfer *this_x00124;
  DB_InsertPartyType *this_x00125;
  DB_InsertPVPPlayerRate *this_x00126;
  DB_InsertPVPMap *this_x00127;
  DB_LoadDnfHackLog *this_x00128;
  DB_InsertLevelDungeonPlay *this_x00129;
  DB_ReloadAutoPunishRuleBackIP *this_x00130;
  DB_ReloadAutoPunishRuleHackType *this_x00131;
  DB_InsertAutoPunishFirstUser *this_x00132;
  DB_InsertAutoPunishSecondUser *this_x00133;
  DB_BlackIPMonitor *this_x00134;
  DB_SaveCleanpadPoint *this_x00135;
  DB_BlackIPMonitorPartLoad *this_x00136;
  DB_Insert0712WinterEventCoupon *pDVar1;
  DB_InsertArchieveEventLog *this_x00137;
  DB_InsertDungeonExp *this_x00138;
  DB_WriteGeoReject *this_x00139;
  DB_InsertUnlimitSupportLog *this_x00140;
  DB_LoadCleanPadPoint *this_x00141;
  DB_UpdateSchoolPoint *this_x00142;
  DB_SaveAccountInfo *this_x00143;
  DB_GoblinPadUpdateReward *this_x00144;
  DB_GoblinPadUpdateValidityTime *this_x00145;
  DB_LoadGameOption *this_x00146;
  DB_SaveGameOption_1 *this_x00147;
  DB_SaveGameOption_2 *this_x00148;
  DB_SaveCharacterOption *this_x00149;
  DB_UpdateCoolTimeItem *this_x00150;
  DB_UpdateEffectItem *this_x00151;
  DB_UpdateAvatarJewelSlot *this_x00152;
  DB_UpdatePvPResult *this_x00153;
  DB_UpdatePvPLastPlayTime *this_x00154;
  DB_LoadBloodBestRecord *this_x00155;
  DB_UpdateBloodBestRecord *this_x00156;
  DB_LoadBreakAwayPreventData *this_x00157;
  DB_LoadBreakAwayRewardData *this_x00158;
  DB_UpdateBreakAwayAccruedCera *this_x00159;
  DB_UpdateBreakAwayUvList *this_x00160;
  DB_UpdateBreakAwayRuckPoint *this_x00161;
  DB_UpdateBreakAwayClearAddInfo *this_x00162;
  DB_UpdateBreakAwayDungeonClearCnt *this_x00163;
  DB_UpdateGMData *this_x00164;
  DB_LoadDimension *this_x00165;
  DB_UpdateDimension *this_x00166;
  DB_InsertCirculationStatistic *this_x00167;
  DB_LoadAutoMarketConditionsControl *this_x00168;
  DB_UpdateAutoMarketConditionsControl *this_x00169;
  DB_UpdateOneDayLetheSkill *this_x00170;
  DB_UpdateVendingMachineStatistic *this_x00171;
  DB_LoadPowerWarStatueRanker *this_x00172;
  DB_LoadPowerWarStatueInfo *this_x00173;
  DB_BlackipPrivateSecurityValuation *this_x00174;
  DB_UpdateServerMessage *this_x00175;
  DB_LoadServerMessage *this_x00176;
  DB_UpdateCharacterDay *this_x00177;
  DB_UpdateNPCRelationship *this_x00178;
  DB_SecurityCardAddCertCnt *this_x00179;
  DB_LoadExpertJob *this_x00180;
  DB_SaveExpertJob *this_x00181;
  DB_UpdateExpertJobStatistic *this_x00182;
  DB_InsertServerLoadStatistic *this_x00183;
  DB_FindFactoryHub *this_x00184;
  DB_HackIPSave *this_x00185;
  DB_CancelRestingUserRestrict *this_x00186;
  DB_SaveBloodDungeon *this_x00187;
  DB_LoadPowerWarInfo *this_x00188;
  DB_SecuServiceReward *this_x00189;
  DB_Find_Factory_Hub_User *this_x00190;
  DB_SaveConditionEventInfo *this_x00191;
  DB_DeletePowerWarStatueMessage *this_x00192;
  DB_LoadNoCacheData *this_x00193;
  DB_UpdateItemLock *this_x00194;
  DB_UpdateCreatureItemLock *this_x00195;
  DB_UpdateAvatarItemLock *this_x00196;
  DB_UpdateMemberPlayInfoPcRoom *this_x00197;
  DB_UpdateCompoundEmblemStatics *this_x00198;
  DB_AccountHack_CheckMyAccount *this_x00199;
  DB_SecuServiceUpdateValidityTime *this_x00200;
  DB_AutoPunishedSecondUserData *this_x00201;
  DB_SaveProperDungeonClearCount *this_x00202;
  DB_LoadPvPBuddy *this_x00203;
  DB_InsertPvPBuddy *this_x00204;
  DB_DeletePvPBuddy *this_x00205;
  DB_UpdatePvPBuddy *this_x00206;
  DB_DeleteGuild *this_x00207;
  DB_LoadPvPLiveEventData *this_x00208;
  DB_UpdatePvPLiveEventData *this_x00209;
  DB_LoadOnlinePreliminaryMember *this_x00210;
  DB_UpdateOnlinePreliminaryMember *this_x00211;
  DB_LoadOnlinePreliminaryTeam *this_x00212;
  DB_UpdateOnlinePreliminaryTeam *this_x00213;
  DB_UpdateOnlinePreliminaryMemberMatchList *this_x00214;
  DB_LoadOnlinePreliminaryTeamMatchList *this_x00215;
  DB_UpdateOnlinePreliminaryTeamMatchList *this_x00216;
  DB_SaveRedeemItemList *this_x00217;
  DB_CreateAccountCargo *this_x00218;
  DB_UpgradeAccountCargo *this_x00219;
  DB_DeleteAccountCargo *this_x00220;
  DB_LoadAccountCargo *this_x00221;
  DB_SaveAccountCargo *this_x00222;
  DB_SaveMileage *this_x00223;
  DB_LoadMileage *this_x00224;
  DB_Load *this_x00225;
  DB_Update *this_x00226;
  DB_Multi_MailBox_Req_Send *this_x00227;
  DB_ReqQueryCharacInfoMailbox *this_x00228;
  DB_GuildExpBookDelete *this_x00229;
  DB_InsertPoliceSaveChatting *this_x00230;
  DB_UpdateChuseokPackagePurchase *this_x00231;
  DB_CheckJoinGuild *this_x00232;
  DB_RequestJoinGuild *this_x00233;
  DB_JoinGuildInfo *this_x00234;
  DB_CancelJoinGuild *this_x00235;
  DB_GuildJoinList *this_x00236;
  DB_DenyJoinGuild *this_x00237;
  DB_UpdateReturnUserFirstLogin *pDVar2;
  DB_InsertAccountFirstLoginFlag *this_x00238;
  DB_SaveGameOption_QuickChatting *this_x00239;
  DB_UpdatePurchaseCashItemBonus *this_x00240;
  DB_UpdateItemCountValue *this_x00241;
  DB_UpdateLimitItemUsage *this_x00242;
  DB_LogBuyItem *this_x00243;
  DB_UpdateRevengeData *this_x00244;
  DB_UpdateGoblinPadAdvicePwdRewardTime *this_x00245;
  DB_UpdateCharacPlayTime *this_x00246;
  DB_SaveExpandEquipslot *this_x00247;
  DB_UpdateFairPvPScore *this_x00248;
  DB_SavePvPMissionList *this_x00249;
  DB_InsertResponseTime *this_x00250;
  DB_UpdateItemMakingSkill *this_x00251;
  DB_TOD_Random_Select_UserAPC *this_x00252;
  DB_TOD_Reset_UserAPC *this_x00253;
  DB_TOD_Update_UserState *this_x00254;
  DB_UpdateQuestShopBuyingStatusList *this_x00255;
  DB_UpdateAddItemCountValue *this_x00256;
  DB_SaveKillMonsterInfo *this_x00257;
  DB_LoadKillMonsterInfo *this_x00258;
  DB_SaveTitleBook *this_x00259;
  DB_SaveAchievement *this_x00260;
  DB_UpdateUserFatigueQuantity *this_x00261;
  DB_UpdateUserGiftFatigueQuantity *this_x00262;
  DB_SaveCharacSlotExtend *this_x00263;
  DB_SaveGiveAvengerTitleFlag *this_x00264;
  DB_SelectLevelUpReward *this_x00265;
  DB_InsertRandomOptionItemInform *this_x00266;
  DB_StatisticCeraShopGiftLog *this_x00267;
  DB_GetUserRegdate *this_x00268;
  DB_UpdateOntimeLastRecvIdx *this_x00269;
  DB_InsertOnTimeRewardUserLog *this_x00270;
  DB_CheckCharacName *this_x00271;
  DB_MailBox_Req_System_Multi_Mail *this_x00272;
  DB_CheckSecuReward *this_x00273;
  DB_UpdateFatigueAttendance *this_x00274;
  DB_UpdateInGameEventHistory *this_x00275;
  DB_UpdateInventoryCapacity *this_x00276;
  DB_UpdateAuraAvatarOption *this_x00277;
  DB_InsertCeraItemHistory *this_x00278;
  DB_UpdateAvatarHistory *this_x00279;
  DB_SaveItemDictionaryFlag *this_x00280;
  DB_SaveMercenaryData *this_x00281;
  DB_HadesPunish *this_x00282;
  DB_Check3rdPartyConcent *this_x00283;
  DB_MercenaryLogInfo *this_x00284;
  DB_SelectCharacMid *this_x00285;
  DB_AvatarOptionChange *this_x00286;
  DB_SaveObjectBringUp *this_x00287;
  DB_SaveGameOption_ChattingEmoticon *this_x00288;
  DB_UpdateBoosterGageData *this_x00289;
  CLocalChina_DB_BreakAwayReset *this_x00290;
  CLocalChina_DB_LastDay_BreakAway *this_x00291;
  CLocalGlobal_DB_STATICS_BOSSTOWER *this_x00292;
  DB_UpdateCeraShopPurchaseCount *this_x00293;
  DB_AradDatabaseDispatcher *this_x00294;
  DB_LoadPuUserCheck *this_x00295;
  DB_SavePuUserCheck *this_x00296;
  DB_StatisticAdvanceAltar *this_x00297;
  DB_CheckAddFriend *this_x00298;
  DB_SaveInformNotice *this_x00299;
  DB_NoticeIngameAdvertisement *this_x00300;
  DB_RequestCharacSkillInfo *this_x00301;
  DB_RequestTagCharacInfo *this_x00302;
  DB_SavePcRoomPlayTimeEvent *this_x00303;
  DB_SaveBestClearTime *this_x00304;
  DB_AuctionSubMoney *this_x00305;
  DB_UpdateBlueMarbleEnterCount *this_x00306;
  DB_InsertAttendanceEvent *this_x00307;
  DB_UpdateBingoEvent *this_x00308;
  DB_EventSaveGrowthWeapon *this_x00309;
  DB_EventUpdateGrowthWeaponCharac *this_x00310;
  DB_EventUpdateGrowthWeaponTimepiece *this_x00311;
  DB_EventGrowthWeaponReset *this_x00312;
  DB_EventSaveGiveGrowCreature *this_x00313;
  DB_EventUpdateGiveGrowCreature *this_x00314;
  DB_EventAccountCharacterLevelUpOnceGift *this_x00315;
  DB_AvatarColorChange *this_x00316;
  DB_TestTradeRestrict *this_x00317;
  DB_UpdateComboSkill *this_x00318;
  DB_SaveCharacInformNotice *this_x00319;
  DB_UpdateSeriaRoomAnimationDeco *this_x00320;
  DB_LoadCharacHotKeyOption *this_x00321;
  DB_LogIngameAdvertisement *this_x00322;
  DB_LogCeraShopError *this_x00323;
  DB_GetPremiumSelectedCubeInfo *this_x00324;
  DB_InsertEventStageLog *this_x00325;
  DB_DispatcherTaiwan *this_x00326;
  DB_SaveCerashopAddRestrictType *this_x00327;
  DB_LoadCerashopAddRestrictType *this_x00328;
  DB_InsertAccountFirstLoginDailyFlag *this_x00329;
  DB_SaveEventLevelupSupport *this_x00330;
  DB_LoadEventLevelupSupport *this_x00331;
  DB_SelectAllowProxyUser *this_x00332;
  int local_20;
  
  for (local_20 = 0; local_20 < 0x354; local_20 = local_20 + 1) {
    *(undefined4 *)(this + local_20 * 4 + 4) = 0;
  }
                    /* try { // try from 083fc027 to 083feb10 has its CatchHandler @ 083ff0dd */
  this_00 = operator_new(4);
  DB_Login::DB_Login(this_00);
  *(DB_Login **)(this + 0x10) = this_00;
  this_01 = operator_new(4);
  DB_CreateCharac::DB_CreateCharac(this_01);
  *(DB_CreateCharac **)(this + 0x14) = this_01;
  this_02 = operator_new(4);
  DB_DeleteCharac::DB_DeleteCharac(this_02);
  *(DB_DeleteCharac **)(this + 0x18) = this_02;
  this_03 = operator_new(4);
  DB_UpdateCharacView::DB_UpdateCharacView(this_03);
  *(DB_UpdateCharacView **)(this + 0x1c) = this_03;
  this_04 = operator_new(4);
  DB_LoadCharac::DB_LoadCharac(this_04);
  *(DB_LoadCharac **)(this + 0x20) = this_04;
  this_05 = operator_new(4);
  DB_LoadInventory::DB_LoadInventory(this_05);
  *(DB_LoadInventory **)(this + 0x24) = this_05;
  this_06 = operator_new(4);
  DB_LoadQuest::DB_LoadQuest(this_06);
  *(DB_LoadQuest **)(this + 0x2c) = this_06;
  this_07 = operator_new(4);
  APSystem::DB_LoadActionPoint::DB_LoadActionPoint(this_07);
  *(DB_LoadActionPoint **)(this + 0x48) = this_07;
  this_08 = operator_new(4);
  APSystem::DB_UpdateActionPoint::DB_UpdateActionPoint(this_08);
  *(DB_UpdateActionPoint **)(this + 0x50) = this_08;
  this_09 = operator_new(4);
  APSystem::DB_LoadRewardMedal::DB_LoadRewardMedal(this_09);
  *(DB_LoadRewardMedal **)(this + 0x54) = this_09;
  this_10 = operator_new(4);
  APSystem::DB_UpdateRewardMedal::DB_UpdateRewardMedal(this_10);
  *(DB_UpdateRewardMedal **)(this + 0x58) = this_10;
  this_11 = operator_new(4);
  DB_LoadEtc::DB_LoadEtc(this_11);
  *(DB_LoadEtc **)(this + 0x84) = this_11;
  this_12 = operator_new(4);
  DB_SaveCharac::DB_SaveCharac(this_12);
  *(DB_SaveCharac **)(this + 0x8c) = this_12;
  this_13 = operator_new(4);
  DB_SaveInven::DB_SaveInven(this_13);
  *(DB_SaveInven **)(this + 0x90) = this_13;
  this_14 = operator_new(4);
  DB_SaveSkill::DB_SaveSkill(this_14);
  *(DB_SaveSkill **)(this + 0x94) = this_14;
  this_15 = operator_new(4);
  DB_SavePvp::DB_SavePvp(this_15);
  *(DB_SavePvp **)(this + 0x98) = this_15;
  this_16 = operator_new(4);
  DB_UpdateQuest::DB_UpdateQuest(this_16);
  *(DB_UpdateQuest **)(this + 0xa8) = this_16;
  this_17 = operator_new(4);
  DB_UpdateGrowType::DB_UpdateGrowType(this_17);
  *(DB_UpdateGrowType **)(this + 0xac) = this_17;
  this_18 = operator_new(4);
  DB_UpdateLogin::DB_UpdateLogin(this_18);
  *(DB_UpdateLogin **)(this + 0xb0) = this_18;
  this_19 = operator_new(4);
  DB_UpdateLogout::DB_UpdateLogout(this_19);
  *(DB_UpdateLogout **)(this + 0xb4) = this_19;
  this_20 = operator_new(4);
  DB_UpdateChannel::DB_UpdateChannel(this_20);
  *(DB_UpdateChannel **)(this + 0xbc) = this_20;
  this_21 = operator_new(4);
  DB_DeleteChannel::DB_DeleteChannel(this_21);
  *(DB_DeleteChannel **)(this + 0xc0) = this_21;
  this_22 = operator_new(4);
  DB_InsertChannel::DB_InsertChannel(this_22);
  *(DB_InsertChannel **)(this + 0xb8) = this_22;
  this_23 = operator_new(4);
  DB_AvatarItemInsert::DB_AvatarItemInsert(this_23);
  *(DB_AvatarItemInsert **)(this + 200) = this_23;
  this_24 = operator_new(4);
  DB_AvatarItemDel::DB_AvatarItemDel(this_24);
  *(DB_AvatarItemDel **)(this + 0xd0) = this_24;
  this_25 = operator_new(4);
  DB_AvatarItemMove::DB_AvatarItemMove(this_25);
  *(DB_AvatarItemMove **)(this + 0xcc) = this_25;
  this_26 = operator_new(4);
  DB_AvatarExtendPeriod::DB_AvatarExtendPeriod(this_26);
  *(DB_AvatarExtendPeriod **)(this + 0xd4) = this_26;
  this_27 = operator_new(4);
  DB_AvatarChangeOwner::DB_AvatarChangeOwner(this_27);
  *(DB_AvatarChangeOwner **)(this + 0xd8) = this_27;
  this_28 = operator_new(4);
  DB_AvatarChangeStat::DB_AvatarChangeStat(this_28);
  *(DB_AvatarChangeStat **)(this + 0xdc) = this_28;
  this_29 = operator_new(4);
  DB_SaveRank::DB_SaveRank(this_29);
  *(DB_SaveRank **)(this + 0x9c) = this_29;
  this_30 = operator_new(4);
  DB_InsertTicket::DB_InsertTicket(this_30);
  *(DB_InsertTicket **)(this + 0xa4) = this_30;
  this_31 = operator_new(4);
  DB_LoadTicket::DB_LoadTicket(this_31);
  *(DB_LoadTicket **)(this + 0x30) = this_31;
  this_32 = operator_new(4);
  DB_LoadDungeonClear::DB_LoadDungeonClear(this_32);
  *(DB_LoadDungeonClear **)(this + 0x34) = this_32;
  this_33 = operator_new(4);
  DB_SaveDungeonClear::DB_SaveDungeonClear(this_33);
  *(DB_SaveDungeonClear **)(this + 0xa0) = this_33;
  this_34 = operator_new(4);
  DB_TerminateServer::DB_TerminateServer(this_34);
  *(DB_TerminateServer **)(this + 0x100) = this_34;
  this_35 = operator_new(4);
  DB_StatBreakJar::DB_StatBreakJar(this_35);
  *(DB_StatBreakJar **)(this + 0xe0) = this_35;
  this_36 = operator_new(4);
  DB_StatComposition::DB_StatComposition(this_36);
  *(DB_StatComposition **)(this + 0xe4) = this_36;
  this_37 = operator_new(4);
  DB_StatCoinUse::DB_StatCoinUse(this_37);
  *(DB_StatCoinUse **)(this + 0xe8) = this_37;
  this_38 = operator_new(4);
  DB_StatPvpPlay::DB_StatPvpPlay(this_38);
  *(DB_StatPvpPlay **)(this + 0xec) = this_38;
  this_39 = operator_new(4);
  DB_StatGameRank::DB_StatGameRank(this_39);
  *(DB_StatGameRank **)(this + 0xf0) = this_39;
  this_40 = operator_new(4);
  DB_StatDungeonClear::DB_StatDungeonClear(this_40);
  *(DB_StatDungeonClear **)(this + 0xf4) = this_40;
  this_41 = operator_new(4);
  DB_CrashDownReport::DB_CrashDownReport(this_41);
  *(DB_CrashDownReport **)(this + 0x144) = this_41;
  this_42 = operator_new(4);
  DB_SaveFeaturedGoodsIdx::DB_SaveFeaturedGoodsIdx(this_42);
  *(DB_SaveFeaturedGoodsIdx **)(this + 0x14c) = this_42;
  this_43 = operator_new(4);
  DB_RemoveFeaturedGoodsIdx::DB_RemoveFeaturedGoodsIdx(this_43);
  *(DB_RemoveFeaturedGoodsIdx **)(this + 0x150) = this_43;
  this_44 = operator_new(4);
  DB_GenCeraTicket::DB_GenCeraTicket(this_44);
  *(DB_GenCeraTicket **)(this + 0x128) = this_44;
  this_45 = operator_new(4);
  DB_SaveEventItem::DB_SaveEventItem(this_45);
  *(DB_SaveEventItem **)(this + 0x134) = this_45;
  this_46 = operator_new(4);
  DB_RemoveEventItem::DB_RemoveEventItem(this_46);
  *(DB_RemoveEventItem **)(this + 0x138) = this_46;
  this_47 = operator_new(4);
  DB_FatigueResetTimer::DB_FatigueResetTimer(this_47);
  *(DB_FatigueResetTimer **)(this + 0x13c) = this_47;
  this_48 = operator_new(4);
  DB_SuicideWhenQueueIsEmpty::DB_SuicideWhenQueueIsEmpty(this_48);
  *(DB_SuicideWhenQueueIsEmpty **)(this + 0x148) = this_48;
  this_49 = operator_new(4);
  DB_SavePremiumInfo::DB_SavePremiumInfo(this_49);
  *(DB_SavePremiumInfo **)(this + 0x154) = this_49;
  this_50 = operator_new(4);
  DB_SaveCharacInfo4Guild::DB_SaveCharacInfo4Guild(this_50);
  *(DB_SaveCharacInfo4Guild **)(this + 400) = this_50;
  this_51 = operator_new(4);
  DB_StatDungeonFail::DB_StatDungeonFail(this_51);
  *(DB_StatDungeonFail **)(this + 0x1a0) = this_51;
  this_52 = operator_new(4);
  DB_StatPVPPlay2::DB_StatPVPPlay2(this_52);
  *(DB_StatPVPPlay2 **)(this + 0x1a4) = this_52;
  this_53 = operator_new(4);
  DB_StatUseShusiaService::DB_StatUseShusiaService(this_53);
  *(DB_StatUseShusiaService **)(this + 0x1a8) = this_53;
  this_54 = operator_new(4);
  DB_UpdateDetailChannel::DB_UpdateDetailChannel(this_54);
  *(DB_UpdateDetailChannel **)(this + 0x1ac) = this_54;
  this_55 = operator_new(4);
  DB_SaveChannelUserLevel::DB_SaveChannelUserLevel(this_55);
  *(DB_SaveChannelUserLevel **)(this + 0x1b0) = this_55;
  this_56 = operator_new(4);
  DB_SavePrivateStore::DB_SavePrivateStore(this_56);
  *(DB_SavePrivateStore **)(this + 0x1e0) = this_56;
  this_57 = operator_new(4);
  DB_LoadPrivateStore::DB_LoadPrivateStore(this_57);
  *(DB_LoadPrivateStore **)(this + 0x1e4) = this_57;
  this_58 = operator_new(4);
  DB_SaveGamechannel::DB_SaveGamechannel(this_58);
  *(DB_SaveGamechannel **)(this + 0x1e8) = this_58;
  this_59 = operator_new(4);
  DB_UpdateQueryCountTimerLogdb::DB_UpdateQueryCountTimerLogdb(this_59);
  *(DB_UpdateQueryCountTimerLogdb **)(this + 0x1f0) = this_59;
  this_60 = operator_new(4);
  DB_UpdateQueryCountTimerDb::DB_UpdateQueryCountTimerDb(this_60);
  *(DB_UpdateQueryCountTimerDb **)(this + 500) = this_60;
  this_61 = operator_new(4);
  DB_UpdateQueryCountDbLogdb::DB_UpdateQueryCountDbLogdb(this_61);
  *(DB_UpdateQueryCountDbLogdb **)(this + 0x1f8) = this_61;
  this_62 = operator_new(4);
  DB_UpdateNatType::DB_UpdateNatType(this_62);
  *(DB_UpdateNatType **)(this + 0x210) = this_62;
  this_63 = operator_new(4);
  DB_UpdateNatTypeUser::DB_UpdateNatTypeUser(this_63);
  *(DB_UpdateNatTypeUser **)(this + 0x214) = this_63;
  this_64 = operator_new(4);
  DB_MailBox_Req_CheckReceiver::DB_MailBox_Req_CheckReceiver(this_64);
  *(DB_MailBox_Req_CheckReceiver **)(this + 0x1fc) = this_64;
  this_65 = operator_new(4);
  DB_MailBox_Req_List::DB_MailBox_Req_List(this_65);
  *(DB_MailBox_Req_List **)(this + 0x200) = this_65;
  this_66 = operator_new(4);
  DB_MailBox_Req_Delete::DB_MailBox_Req_Delete(this_66);
  *(DB_MailBox_Req_Delete **)(this + 0x208) = this_66;
  this_67 = operator_new(4);
  DB_MailBox_Req_Send::DB_MailBox_Req_Send(this_67);
  *(DB_MailBox_Req_Send **)(this + 0x204) = this_67;
  this_68 = operator_new(4);
  DB_InsertCreatureItem::DB_InsertCreatureItem(this_68);
  *(DB_InsertCreatureItem **)(this + 0x220) = this_68;
  this_69 = operator_new(4);
  DB_UpdateCreatureItemList::DB_UpdateCreatureItemList(this_69);
  *(DB_UpdateCreatureItemList **)(this + 0x228) = this_69;
  this_70 = operator_new(4);
  DB_UpdateCreatureItem::DB_UpdateCreatureItem(this_70);
  *(DB_UpdateCreatureItem **)(this + 0x22c) = this_70;
  this_71 = operator_new(4);
  DB_SwapCreatureItem::DB_SwapCreatureItem(this_71);
  *(DB_SwapCreatureItem **)(this + 0x234) = this_71;
  this_72 = operator_new(4);
  DB_GatheringParyStatus::DB_GatheringParyStatus(this_72);
  *(DB_GatheringParyStatus **)(this + 0x23c) = this_72;
  this_73 = operator_new(4);
  DB_ForbidUserToPlay::DB_ForbidUserToPlay(this_73);
  *(DB_ForbidUserToPlay **)(this + 0x250) = this_73;
  this_74 = operator_new(4);
  DB_LastMsgDb::DB_LastMsgDb(this_74);
  *(DB_LastMsgDb **)(this + 600) = this_74;
  this_75 = operator_new(4);
  DB_LastMsgLogDb::DB_LastMsgLogDb(this_75);
  *(DB_LastMsgLogDb **)(this + 0x25c) = this_75;
  this_76 = operator_new(4);
  DB_SaveClientHackLog::DB_SaveClientHackLog(this_76);
  *(DB_SaveClientHackLog **)(this + 0x26c) = this_76;
  this_77 = operator_new(4);
  DB_InsertQueueSizeLog::DB_InsertQueueSizeLog(this_77);
  *(DB_InsertQueueSizeLog **)(this + 0x270) = this_77;
  this_78 = operator_new(4);
  DB_SaveSameMIDOtherCharLoginHack::DB_SaveSameMIDOtherCharLoginHack(this_78);
  *(DB_SaveSameMIDOtherCharLoginHack **)(this + 0x278) = this_78;
  this_79 = operator_new(4);
  DB_SaveProxyLog::DB_SaveProxyLog(this_79);
  *(DB_SaveProxyLog **)(this + 0x27c) = this_79;
  this_80 = operator_new(4);
  DB_SaveGoldZeroTradeLog::DB_SaveGoldZeroTradeLog(this_80);
  *(DB_SaveGoldZeroTradeLog **)(this + 0x288) = this_80;
  this_81 = operator_new(4);
  DB_MouseRegister::DB_MouseRegister(this_81);
  *(DB_MouseRegister **)(this + 0x290) = this_81;
  this_82 = operator_new(4);
  DB_PassPadUpdateFailCnt::DB_PassPadUpdateFailCnt(this_82);
  *(DB_PassPadUpdateFailCnt **)(this + 0x294) = this_82;
  this_83 = operator_new(4);
  DB_PassPadUpdateCancelCnt::DB_PassPadUpdateCancelCnt(this_83);
  *(DB_PassPadUpdateCancelCnt **)(this + 0x298) = this_83;
  this_84 = operator_new(4);
  DB_UpdateDungeonDataStatisticLogdb::DB_UpdateDungeonDataStatisticLogdb(this_84);
  *(DB_UpdateDungeonDataStatisticLogdb **)(this + 0x2c0) = this_84;
  this_85 = operator_new(4);
  DB_BillingRecord::DB_BillingRecord(this_85);
  *(DB_BillingRecord **)(this + 0x2c4) = this_85;
  this_86 = operator_new(4);
  DB_ReqBlackCount::DB_ReqBlackCount(this_86);
  *(DB_ReqBlackCount **)(this + 0x2d0) = this_86;
  this_87 = operator_new(4);
  DB_ReqSaveCrazyLevelupEvent::DB_ReqSaveCrazyLevelupEvent(this_87);
  *(DB_ReqSaveCrazyLevelupEvent **)(this + 0x2d4) = this_87;
  this_88 = operator_new(4);
  DB_ReqSaveHackUserPunish::DB_ReqSaveHackUserPunish(this_88);
  *(DB_ReqSaveHackUserPunish **)(this + 0x2d8) = this_88;
  this_89 = operator_new(4);
  DB_InsertUserPlayTime::DB_InsertUserPlayTime(this_89);
  *(DB_InsertUserPlayTime **)(this + 0x2dc) = this_89;
  this_90 = operator_new(4);
  DB_UpdateHappyBeanInfo::DB_UpdateHappyBeanInfo(this_90);
  *(DB_UpdateHappyBeanInfo **)(this + 0x2f0) = this_90;
  this_91 = operator_new(4);
  DB_InsertQueryCounterDb::DB_InsertQueryCounterDb(this_91);
  *(DB_InsertQueryCounterDb **)(this + 0x2fc) = this_91;
  this_92 = operator_new(4);
  DB_InsertQueryCounterLogdb::DB_InsertQueryCounterLogdb(this_92);
  *(DB_InsertQueryCounterLogdb **)(this + 0x300) = this_92;
  this_93 = operator_new(4);
  DB_ReqItemUpgradeLog::DB_ReqItemUpgradeLog(this_93);
  *(DB_ReqItemUpgradeLog **)(this + 0x304) = this_93;
  this_94 = operator_new(4);
  DB_ChangeLetterStat::DB_ChangeLetterStat(this_94);
  *(DB_ChangeLetterStat **)(this + 0x30c) = this_94;
  this_95 = operator_new(4);
  DB_ReqChangeCharacName::DB_ReqChangeCharacName(this_95);
  *(DB_ReqChangeCharacName **)(this + 0x310) = this_95;
  this_96 = operator_new(4);
  DB_ReqQueryCharacInfo::DB_ReqQueryCharacInfo(this_96);
  *(DB_ReqQueryCharacInfo **)(this + 0x314) = this_96;
  this_97 = operator_new(4);
  DB_MailBoxSendNewMailWithDBWork::DB_MailBoxSendNewMailWithDBWork(this_97);
  *(DB_MailBoxSendNewMailWithDBWork **)(this + 0x318) = this_97;
  this_98 = operator_new(4);
  DB_ReportMannerlessUser_Upgrade::DB_ReportMannerlessUser_Upgrade(this_98);
  *(DB_ReportMannerlessUser_Upgrade **)(this + 0x32c) = this_98;
  this_99 = operator_new(4);
  DB_ReportMannerlessUser::DB_ReportMannerlessUser(this_99);
  *(DB_ReportMannerlessUser **)(this + 0x330) = this_99;
  this_x00100 = operator_new(4);
  DB_UpdateClientCrashDownLog::DB_UpdateClientCrashDownLog(this_x00100);
  *(DB_UpdateClientCrashDownLog **)(this + 0x334) = this_x00100;
  this_x00101 = operator_new(4);
  DB_TimerStatisticsLog::DB_TimerStatisticsLog(this_x00101);
  *(DB_TimerStatisticsLog **)(this + 0x338) = this_x00101;
  this_x00102 = operator_new(4);
  DB_SaveUserHandicap::DB_SaveUserHandicap(this_x00102);
  *(DB_SaveUserHandicap **)(this + 0x33c) = this_x00102;
  this_x00103 = operator_new(4);
  DB_ForceSaveSimpleSSO::DB_ForceSaveSimpleSSO(this_x00103);
  *(DB_ForceSaveSimpleSSO **)(this + 0x340) = this_x00103;
  this_x00104 = operator_new(4);
  DB_CountOfHumanCertify::DB_CountOfHumanCertify(this_x00104);
  *(DB_CountOfHumanCertify **)(this + 0x448) = this_x00104;
  this_x00105 = operator_new(4);
  DB_UpdateGiftCount::DB_UpdateGiftCount(this_x00105);
  *(DB_UpdateGiftCount **)(this + 0x348) = this_x00105;
  this_x00106 = operator_new(4);
  DB_UpdateMemberDoubtTrade::DB_UpdateMemberDoubtTrade(this_x00106);
  *(DB_UpdateMemberDoubtTrade **)(this + 0x344) = this_x00106;
  this_x00107 = operator_new(4);
  DB_UpdateItemDropStatistics::DB_UpdateItemDropStatistics(this_x00107);
  *(DB_UpdateItemDropStatistics **)(this + 0x34c) = this_x00107;
  this_x00108 = operator_new(4);
  DB_UpdatePvPGrade::DB_UpdatePvPGrade(this_x00108);
  *(DB_UpdatePvPGrade **)(this + 0x354) = this_x00108;
  this_x00109 = operator_new(4);
  DB_InsertValueStatistic::DB_InsertValueStatistic(this_x00109);
  *(DB_InsertValueStatistic **)(this + 0x358) = this_x00109;
  this_x00110 = operator_new(4);
  DB_InsertDungeonEntrance::DB_InsertDungeonEntrance(this_x00110);
  *(DB_InsertDungeonEntrance **)(this + 900) = this_x00110;
  this_x00111 = operator_new(4);
  DB_InsertDungeonEntrance_hour::DB_InsertDungeonEntrance_hour(this_x00111);
  *(DB_InsertDungeonEntrance_hour **)(this + 0x388) = this_x00111;
  this_x00112 = operator_new(4);
  DB_GetDeathTowerBestRecord::DB_GetDeathTowerBestRecord(this_x00112);
  *(DB_GetDeathTowerBestRecord **)(this + 0x38c) = this_x00112;
  this_x00113 = operator_new(4);
  DB_UpdateDeathTowerBestRecord::DB_UpdateDeathTowerBestRecord(this_x00113);
  *(DB_UpdateDeathTowerBestRecord **)(this + 0x390) = this_x00113;
  this_x00114 = operator_new(4);
  DB_DeathTowerLoadTopRanker::DB_DeathTowerLoadTopRanker(this_x00114);
  *(DB_DeathTowerLoadTopRanker **)(this + 0x394) = this_x00114;
  this_x00115 = operator_new(4);
  DB_CheckDoubleGuildName::DB_CheckDoubleGuildName(this_x00115);
  *(DB_CheckDoubleGuildName **)(this + 0x3b0) = this_x00115;
  this_x00116 = operator_new(4);
  DB_CheckDoubleGuildAddress::DB_CheckDoubleGuildAddress(this_x00116);
  *(DB_CheckDoubleGuildAddress **)(this + 0x3b4) = this_x00116;
  this_x00117 = operator_new(4);
  DB_ArrangeUserLoginInfo::DB_ArrangeUserLoginInfo(this_x00117);
  *(DB_ArrangeUserLoginInfo **)(this + 0x3bc) = this_x00117;
  this_x00118 = operator_new(4);
  DB_SecurityCardIssue::DB_SecurityCardIssue(this_x00118);
  *(DB_SecurityCardIssue **)(this + 0x3f8) = this_x00118;
  this_x00119 = operator_new(4);
  DB_SecurityCardDisuse::DB_SecurityCardDisuse(this_x00119);
  *(DB_SecurityCardDisuse **)(this + 0x3fc) = this_x00119;
  this_x00120 = operator_new(4);
  DB_SecurityCardActivate::DB_SecurityCardActivate(this_x00120);
  *(DB_SecurityCardActivate **)(this + 0x400) = this_x00120;
  this_x00121 = operator_new(4);
  DB_SecurityCardUpdateValidityTime::DB_SecurityCardUpdateValidityTime(this_x00121);
  *(DB_SecurityCardUpdateValidityTime **)(this + 0x404) = this_x00121;
  this_x00122 = operator_new(4);
  DB_SecurityCardUpdateFailCnt::DB_SecurityCardUpdateFailCnt(this_x00122);
  *(DB_SecurityCardUpdateFailCnt **)(this + 0x408) = this_x00122;
  this_x00123 = operator_new(4);
  DB_SecurityCardUpdateCancelCnt::DB_SecurityCardUpdateCancelCnt(this_x00123);
  *(DB_SecurityCardUpdateCancelCnt **)(this + 0x40c) = this_x00123;
  this_x00124 = operator_new(4);
  DB_SecurityCardRetransfer::DB_SecurityCardRetransfer(this_x00124);
  *(DB_SecurityCardRetransfer **)(this + 0x4e4) = this_x00124;
  this_x00125 = operator_new(4);
  DB_InsertPartyType::DB_InsertPartyType(this_x00125);
  *(DB_InsertPartyType **)(this + 0x410) = this_x00125;
  this_x00126 = operator_new(4);
  DB_InsertPVPPlayerRate::DB_InsertPVPPlayerRate(this_x00126);
  *(DB_InsertPVPPlayerRate **)(this + 0x414) = this_x00126;
  this_x00127 = operator_new(4);
  DB_InsertPVPMap::DB_InsertPVPMap(this_x00127);
  *(DB_InsertPVPMap **)(this + 0x418) = this_x00127;
  this_x00128 = operator_new(4);
  DB_LoadDnfHackLog::DB_LoadDnfHackLog(this_x00128);
  *(DB_LoadDnfHackLog **)(this + 0x41c) = this_x00128;
  this_x00129 = operator_new(4);
  DB_InsertLevelDungeonPlay::DB_InsertLevelDungeonPlay(this_x00129);
  *(DB_InsertLevelDungeonPlay **)(this + 0x420) = this_x00129;
  this_x00130 = operator_new(4);
  DB_ReloadAutoPunishRuleBackIP::DB_ReloadAutoPunishRuleBackIP(this_x00130);
  *(DB_ReloadAutoPunishRuleBackIP **)(this + 0x424) = this_x00130;
  this_x00131 = operator_new(4);
  DB_ReloadAutoPunishRuleHackType::DB_ReloadAutoPunishRuleHackType(this_x00131);
  *(DB_ReloadAutoPunishRuleHackType **)(this + 0x428) = this_x00131;
  this_x00132 = operator_new(4);
  DB_InsertAutoPunishFirstUser::DB_InsertAutoPunishFirstUser(this_x00132);
  *(DB_InsertAutoPunishFirstUser **)(this + 0x42c) = this_x00132;
  this_x00133 = operator_new(4);
  DB_InsertAutoPunishSecondUser::DB_InsertAutoPunishSecondUser(this_x00133);
  *(DB_InsertAutoPunishSecondUser **)(this + 0x430) = this_x00133;
  this_x00134 = operator_new(4);
  DB_BlackIPMonitor::DB_BlackIPMonitor(this_x00134);
  *(DB_BlackIPMonitor **)(this + 0x54c) = this_x00134;
  this_x00135 = operator_new(4);
  DB_SaveCleanpadPoint::DB_SaveCleanpadPoint(this_x00135);
  *(DB_SaveCleanpadPoint **)(this + 0x554) = this_x00135;
  this_x00136 = operator_new(4);
  DB_BlackIPMonitorPartLoad::DB_BlackIPMonitorPartLoad(this_x00136);
  *(DB_BlackIPMonitorPartLoad **)(this + 0x558) = this_x00136;
  pDVar1 = operator_new(4);
  DB_Insert0712WinterEventCoupon::DB_Insert0712WinterEventCoupon(pDVar1);
  *(DB_Insert0712WinterEventCoupon **)(this + 0x44c) = pDVar1;
  pDVar1 = operator_new(4);
  DB_Insert0712WinterEventCoupon::DB_Insert0712WinterEventCoupon(pDVar1);
  *(DB_Insert0712WinterEventCoupon **)(this + 0x450) = pDVar1;
  this_x00137 = operator_new(4);
  DB_InsertArchieveEventLog::DB_InsertArchieveEventLog(this_x00137);
  *(DB_InsertArchieveEventLog **)(this + 0x460) = this_x00137;
  this_x00138 = operator_new(4);
  DB_InsertDungeonExp::DB_InsertDungeonExp(this_x00138);
  *(DB_InsertDungeonExp **)(this + 0x45c) = this_x00138;
  this_x00139 = operator_new(4);
  DB_WriteGeoReject::DB_WriteGeoReject(this_x00139);
  *(DB_WriteGeoReject **)(this + 0x470) = this_x00139;
  this_x00140 = operator_new(4);
  DB_InsertUnlimitSupportLog::DB_InsertUnlimitSupportLog(this_x00140);
  *(DB_InsertUnlimitSupportLog **)(this + 0x48c) = this_x00140;
  this_x00141 = operator_new(4);
  DB_LoadCleanPadPoint::DB_LoadCleanPadPoint(this_x00141);
  *(DB_LoadCleanPadPoint **)(this + 0x4a0) = this_x00141;
  this_x00142 = operator_new(4);
  DB_UpdateSchoolPoint::DB_UpdateSchoolPoint(this_x00142);
  *(DB_UpdateSchoolPoint **)(this + 0x4a8) = this_x00142;
  this_x00143 = operator_new(4);
  DB_SaveAccountInfo::DB_SaveAccountInfo(this_x00143);
  *(DB_SaveAccountInfo **)(this + 0x544) = this_x00143;
  this_x00144 = operator_new(4);
  DB_GoblinPadUpdateReward::DB_GoblinPadUpdateReward(this_x00144);
  *(DB_GoblinPadUpdateReward **)(this + 0x4b0) = this_x00144;
  this_x00145 = operator_new(4);
  DB_GoblinPadUpdateValidityTime::DB_GoblinPadUpdateValidityTime(this_x00145);
  *(DB_GoblinPadUpdateValidityTime **)(this + 0x4b4) = this_x00145;
  this_x00146 = operator_new(4);
  DB_LoadGameOption::DB_LoadGameOption(this_x00146);
  *(DB_LoadGameOption **)(this + 0x4bc) = this_x00146;
  this_x00147 = operator_new(4);
  DB_SaveGameOption_1::DB_SaveGameOption_1(this_x00147);
  *(DB_SaveGameOption_1 **)(this + 0x4c4) = this_x00147;
  this_x00148 = operator_new(4);
  DB_SaveGameOption_2::DB_SaveGameOption_2(this_x00148);
  *(DB_SaveGameOption_2 **)(this + 0x4c8) = this_x00148;
  this_x00149 = operator_new(4);
  DB_SaveCharacterOption::DB_SaveCharacterOption(this_x00149);
  *(DB_SaveCharacterOption **)(this + 0xad8) = this_x00149;
  this_x00150 = operator_new(4);
  DB_UpdateCoolTimeItem::DB_UpdateCoolTimeItem(this_x00150);
  *(DB_UpdateCoolTimeItem **)(this + 0x4cc) = this_x00150;
  this_x00151 = operator_new(4);
  DB_UpdateEffectItem::DB_UpdateEffectItem(this_x00151);
  *(DB_UpdateEffectItem **)(this + 0x4e0) = this_x00151;
  this_x00152 = operator_new(4);
  DB_UpdateAvatarJewelSlot::DB_UpdateAvatarJewelSlot(this_x00152);
  *(DB_UpdateAvatarJewelSlot **)(this + 0x4e8) = this_x00152;
  this_x00153 = operator_new(4);
  DB_UpdatePvPResult::DB_UpdatePvPResult(this_x00153);
  *(DB_UpdatePvPResult **)(this + 0x4d8) = this_x00153;
  this_x00154 = operator_new(4);
  DB_UpdatePvPLastPlayTime::DB_UpdatePvPLastPlayTime(this_x00154);
  *(DB_UpdatePvPLastPlayTime **)(this + 0x4dc) = this_x00154;
  this_x00155 = operator_new(4);
  DB_LoadBloodBestRecord::DB_LoadBloodBestRecord(this_x00155);
  *(DB_LoadBloodBestRecord **)(this + 0x500) = this_x00155;
  this_x00156 = operator_new(4);
  DB_UpdateBloodBestRecord::DB_UpdateBloodBestRecord(this_x00156);
  *(DB_UpdateBloodBestRecord **)(this + 0x504) = this_x00156;
  this_x00157 = operator_new(4);
  DB_LoadBreakAwayPreventData::DB_LoadBreakAwayPreventData(this_x00157);
  *(DB_LoadBreakAwayPreventData **)(this + 0x508) = this_x00157;
  this_x00158 = operator_new(4);
  DB_LoadBreakAwayRewardData::DB_LoadBreakAwayRewardData(this_x00158);
  *(DB_LoadBreakAwayRewardData **)(this + 0x50c) = this_x00158;
  this_x00159 = operator_new(4);
  DB_UpdateBreakAwayAccruedCera::DB_UpdateBreakAwayAccruedCera(this_x00159);
  *(DB_UpdateBreakAwayAccruedCera **)(this + 0x51c) = this_x00159;
  this_x00160 = operator_new(4);
  DB_UpdateBreakAwayUvList::DB_UpdateBreakAwayUvList(this_x00160);
  *(DB_UpdateBreakAwayUvList **)(this + 0x520) = this_x00160;
  this_x00161 = operator_new(4);
  DB_UpdateBreakAwayRuckPoint::DB_UpdateBreakAwayRuckPoint(this_x00161);
  *(DB_UpdateBreakAwayRuckPoint **)(this + 0x528) = this_x00161;
  this_x00162 = operator_new(4);
  DB_UpdateBreakAwayClearAddInfo::DB_UpdateBreakAwayClearAddInfo(this_x00162);
  *(DB_UpdateBreakAwayClearAddInfo **)(this + 0x514) = this_x00162;
  this_x00163 = operator_new(4);
  DB_UpdateBreakAwayDungeonClearCnt::DB_UpdateBreakAwayDungeonClearCnt(this_x00163);
  *(DB_UpdateBreakAwayDungeonClearCnt **)(this + 0x518) = this_x00163;
  this_x00164 = operator_new(4);
  DB_UpdateGMData::DB_UpdateGMData(this_x00164);
  *(DB_UpdateGMData **)(this + 0x52c) = this_x00164;
  this_x00165 = operator_new(4);
  DB_LoadDimension::DB_LoadDimension(this_x00165);
  *(DB_LoadDimension **)(this + 0x53c) = this_x00165;
  this_x00166 = operator_new(4);
  DB_UpdateDimension::DB_UpdateDimension(this_x00166);
  *(DB_UpdateDimension **)(this + 0x540) = this_x00166;
  this_x00167 = operator_new(4);
  DB_InsertCirculationStatistic::DB_InsertCirculationStatistic(this_x00167);
  *(DB_InsertCirculationStatistic **)(this + 0x548) = this_x00167;
  this_x00168 = operator_new(4);
  DB_LoadAutoMarketConditionsControl::DB_LoadAutoMarketConditionsControl(this_x00168);
  *(DB_LoadAutoMarketConditionsControl **)(this + 0x56c) = this_x00168;
  this_x00169 = operator_new(4);
  DB_UpdateAutoMarketConditionsControl::DB_UpdateAutoMarketConditionsControl(this_x00169);
  *(DB_UpdateAutoMarketConditionsControl **)(this + 0x570) = this_x00169;
  this_x00170 = operator_new(4);
  DB_UpdateOneDayLetheSkill::DB_UpdateOneDayLetheSkill(this_x00170);
  *(DB_UpdateOneDayLetheSkill **)(this + 0x574) = this_x00170;
  this_x00171 = operator_new(4);
  DB_UpdateVendingMachineStatistic::DB_UpdateVendingMachineStatistic(this_x00171);
  *(DB_UpdateVendingMachineStatistic **)(this + 0x590) = this_x00171;
  this_x00172 = operator_new(4);
  DB_LoadPowerWarStatueRanker::DB_LoadPowerWarStatueRanker(this_x00172);
  *(DB_LoadPowerWarStatueRanker **)(this + 0x598) = this_x00172;
  this_x00173 = operator_new(4);
  DB_LoadPowerWarStatueInfo::DB_LoadPowerWarStatueInfo(this_x00173);
  *(DB_LoadPowerWarStatueInfo **)(this + 0x59c) = this_x00173;
  this_x00174 = operator_new(4);
  DB_BlackipPrivateSecurityValuation::DB_BlackipPrivateSecurityValuation(this_x00174);
  *(DB_BlackipPrivateSecurityValuation **)(this + 0x594) = this_x00174;
  this_x00175 = operator_new(4);
  DB_UpdateServerMessage::DB_UpdateServerMessage(this_x00175);
  *(DB_UpdateServerMessage **)(this + 0x5b4) = this_x00175;
  this_x00176 = operator_new(4);
  DB_LoadServerMessage::DB_LoadServerMessage(this_x00176);
  *(DB_LoadServerMessage **)(this + 0x5b8) = this_x00176;
  this_x00177 = operator_new(4);
  DB_UpdateCharacterDay::DB_UpdateCharacterDay(this_x00177);
  *(DB_UpdateCharacterDay **)(this + 0x5bc) = this_x00177;
  this_x00178 = operator_new(4);
  DB_UpdateNPCRelationship::DB_UpdateNPCRelationship(this_x00178);
  *(DB_UpdateNPCRelationship **)(this + 0x5c0) = this_x00178;
  this_x00179 = operator_new(4);
  DB_SecurityCardAddCertCnt::DB_SecurityCardAddCertCnt(this_x00179);
  *(DB_SecurityCardAddCertCnt **)(this + 0x5f4) = this_x00179;
  this_x00180 = operator_new(4);
  DB_LoadExpertJob::DB_LoadExpertJob(this_x00180);
  *(DB_LoadExpertJob **)(this + 0x604) = this_x00180;
  this_x00181 = operator_new(4);
  DB_SaveExpertJob::DB_SaveExpertJob(this_x00181);
  *(DB_SaveExpertJob **)(this + 0x608) = this_x00181;
  this_x00182 = operator_new(4);
  DB_UpdateExpertJobStatistic::DB_UpdateExpertJobStatistic(this_x00182);
  *(DB_UpdateExpertJobStatistic **)(this + 0x60c) = this_x00182;
  this_x00183 = operator_new(4);
  DB_InsertServerLoadStatistic::DB_InsertServerLoadStatistic(this_x00183);
  *(DB_InsertServerLoadStatistic **)(this + 0x610) = this_x00183;
  this_x00184 = operator_new(4);
  DB_FindFactoryHub::DB_FindFactoryHub(this_x00184);
  *(DB_FindFactoryHub **)(this + 0x62c) = this_x00184;
  this_x00185 = operator_new(4);
  DB_HackIPSave::DB_HackIPSave(this_x00185);
  *(DB_HackIPSave **)(this + 0x644) = this_x00185;
  this_x00186 = operator_new(4);
  DB_CancelRestingUserRestrict::DB_CancelRestingUserRestrict(this_x00186);
  *(DB_CancelRestingUserRestrict **)(this + 0x658) = this_x00186;
  this_x00187 = operator_new(4);
  DB_SaveBloodDungeon::DB_SaveBloodDungeon(this_x00187);
  *(DB_SaveBloodDungeon **)(this + 0x660) = this_x00187;
  this_x00188 = operator_new(4);
  DB_LoadPowerWarInfo::DB_LoadPowerWarInfo(this_x00188);
  *(DB_LoadPowerWarInfo **)(this + 0x670) = this_x00188;
  this_x00189 = operator_new(4);
  DB_SecuServiceReward::DB_SecuServiceReward(this_x00189);
  *(DB_SecuServiceReward **)(this + 0x678) = this_x00189;
  this_x00190 = operator_new(4);
  DB_Find_Factory_Hub_User::DB_Find_Factory_Hub_User(this_x00190);
  *(DB_Find_Factory_Hub_User **)(this + 0x684) = this_x00190;
  this_x00191 = operator_new(4);
  DB_SaveConditionEventInfo::DB_SaveConditionEventInfo(this_x00191);
  *(DB_SaveConditionEventInfo **)(this + 0x680) = this_x00191;
  this_x00192 = operator_new(4);
  DB_DeletePowerWarStatueMessage::DB_DeletePowerWarStatueMessage(this_x00192);
  *(DB_DeletePowerWarStatueMessage **)(this + 0x698) = this_x00192;
  this_x00193 = operator_new(4);
  DB_LoadNoCacheData::DB_LoadNoCacheData(this_x00193);
  *(DB_LoadNoCacheData **)(this + 0x6a0) = this_x00193;
  this_x00194 = operator_new(4);
  DB_UpdateItemLock::DB_UpdateItemLock(this_x00194);
  *(DB_UpdateItemLock **)(this + 0x6e4) = this_x00194;
  this_x00195 = operator_new(4);
  DB_UpdateCreatureItemLock::DB_UpdateCreatureItemLock(this_x00195);
  *(DB_UpdateCreatureItemLock **)(this + 0x708) = this_x00195;
  this_x00196 = operator_new(4);
  DB_UpdateAvatarItemLock::DB_UpdateAvatarItemLock(this_x00196);
  *(DB_UpdateAvatarItemLock **)(this + 0x70c) = this_x00196;
  this_x00197 = operator_new(4);
  DB_UpdateMemberPlayInfoPcRoom::DB_UpdateMemberPlayInfoPcRoom(this_x00197);
  *(DB_UpdateMemberPlayInfoPcRoom **)(this + 0x710) = this_x00197;
  this_x00198 = operator_new(4);
  DB_UpdateCompoundEmblemStatics::DB_UpdateCompoundEmblemStatics(this_x00198);
  *(DB_UpdateCompoundEmblemStatics **)(this + 0x714) = this_x00198;
  this_x00199 = operator_new(4);
  DB_AccountHack_CheckMyAccount::DB_AccountHack_CheckMyAccount(this_x00199);
  *(DB_AccountHack_CheckMyAccount **)(this + 0x630) = this_x00199;
  this_x00200 = operator_new(4);
  DB_SecuServiceUpdateValidityTime::DB_SecuServiceUpdateValidityTime(this_x00200);
  *(DB_SecuServiceUpdateValidityTime **)(this + 0x728) = this_x00200;
  this_x00201 = operator_new(4);
  DB_AutoPunishedSecondUserData::DB_AutoPunishedSecondUserData(this_x00201);
  *(DB_AutoPunishedSecondUserData **)(this + 0x72c) = this_x00201;
  this_x00202 = operator_new(4);
  DB_SaveProperDungeonClearCount::DB_SaveProperDungeonClearCount(this_x00202);
  *(DB_SaveProperDungeonClearCount **)(this + 0x754) = this_x00202;
  this_x00203 = operator_new(4);
  DB_LoadPvPBuddy::DB_LoadPvPBuddy(this_x00203);
  *(DB_LoadPvPBuddy **)(this + 0x758) = this_x00203;
  this_x00204 = operator_new(4);
  DB_InsertPvPBuddy::DB_InsertPvPBuddy(this_x00204);
  *(DB_InsertPvPBuddy **)(this + 0x770) = this_x00204;
  this_x00205 = operator_new(4);
  DB_DeletePvPBuddy::DB_DeletePvPBuddy(this_x00205);
  *(DB_DeletePvPBuddy **)(this + 0x774) = this_x00205;
  this_x00206 = operator_new(4);
  DB_UpdatePvPBuddy::DB_UpdatePvPBuddy(this_x00206);
  *(DB_UpdatePvPBuddy **)(this + 0x778) = this_x00206;
  this_x00207 = operator_new(4);
  DB_DeleteGuild::DB_DeleteGuild(this_x00207);
  *(DB_DeleteGuild **)(this + 0x780) = this_x00207;
  this_x00208 = operator_new(4);
  DB_LoadPvPLiveEventData::DB_LoadPvPLiveEventData(this_x00208);
  *(DB_LoadPvPLiveEventData **)(this + 0x784) = this_x00208;
  this_x00209 = operator_new(4);
  DB_UpdatePvPLiveEventData::DB_UpdatePvPLiveEventData(this_x00209);
  *(DB_UpdatePvPLiveEventData **)(this + 0x788) = this_x00209;
  this_x00210 = operator_new(4);
  DB_LoadOnlinePreliminaryMember::DB_LoadOnlinePreliminaryMember(this_x00210);
  *(DB_LoadOnlinePreliminaryMember **)(this + 0x79c) = this_x00210;
  this_x00211 = operator_new(4);
  DB_UpdateOnlinePreliminaryMember::DB_UpdateOnlinePreliminaryMember(this_x00211);
  *(DB_UpdateOnlinePreliminaryMember **)(this + 0x7a0) = this_x00211;
  this_x00212 = operator_new(4);
  DB_LoadOnlinePreliminaryTeam::DB_LoadOnlinePreliminaryTeam(this_x00212);
  *(DB_LoadOnlinePreliminaryTeam **)(this + 0x7a4) = this_x00212;
  this_x00213 = operator_new(4);
  DB_UpdateOnlinePreliminaryTeam::DB_UpdateOnlinePreliminaryTeam(this_x00213);
  *(DB_UpdateOnlinePreliminaryTeam **)(this + 0x7a8) = this_x00213;
  this_x00214 = operator_new(4);
  DB_UpdateOnlinePreliminaryMemberMatchList::DB_UpdateOnlinePreliminaryMemberMatchList(this_x00214);
  *(DB_UpdateOnlinePreliminaryMemberMatchList **)(this + 0x7b0) = this_x00214;
  this_x00215 = operator_new(4);
  DB_LoadOnlinePreliminaryTeamMatchList::DB_LoadOnlinePreliminaryTeamMatchList(this_x00215);
  *(DB_LoadOnlinePreliminaryTeamMatchList **)(this + 0x7b4) = this_x00215;
  this_x00216 = operator_new(4);
  DB_UpdateOnlinePreliminaryTeamMatchList::DB_UpdateOnlinePreliminaryTeamMatchList(this_x00216);
  *(DB_UpdateOnlinePreliminaryTeamMatchList **)(this + 0x7b8) = this_x00216;
  this_x00217 = operator_new(4);
  DB_SaveRedeemItemList::DB_SaveRedeemItemList(this_x00217);
  *(DB_SaveRedeemItemList **)(this + 0x7d4) = this_x00217;
  this_x00218 = operator_new(4);
  DB_CreateAccountCargo::DB_CreateAccountCargo(this_x00218);
  *(DB_CreateAccountCargo **)(this + 0x7bc) = this_x00218;
  this_x00219 = operator_new(4);
  DB_UpgradeAccountCargo::DB_UpgradeAccountCargo(this_x00219);
  *(DB_UpgradeAccountCargo **)(this + 0x7c0) = this_x00219;
  this_x00220 = operator_new(4);
  DB_DeleteAccountCargo::DB_DeleteAccountCargo(this_x00220);
  *(DB_DeleteAccountCargo **)(this + 0x7c4) = this_x00220;
  this_x00221 = operator_new(4);
  DB_LoadAccountCargo::DB_LoadAccountCargo(this_x00221);
  *(DB_LoadAccountCargo **)(this + 0x7cc) = this_x00221;
  this_x00222 = operator_new(4);
  DB_SaveAccountCargo::DB_SaveAccountCargo(this_x00222);
  *(DB_SaveAccountCargo **)(this + 0x7c8) = this_x00222;
  this_x00223 = operator_new(4);
  DB_SaveMileage::DB_SaveMileage(this_x00223);
  *(DB_SaveMileage **)(this + 0x7f4) = this_x00223;
  this_x00224 = operator_new(4);
  DB_LoadMileage::DB_LoadMileage(this_x00224);
  *(DB_LoadMileage **)(this + 0x7f8) = this_x00224;
  this_x00225 = operator_new(4);
  advancealtar::DB_Load::DB_Load(this_x00225);
  *(DB_Load **)(this + 0x68) = this_x00225;
  this_x00226 = operator_new(4);
  advancealtar::DB_Update::DB_Update(this_x00226);
  *(DB_Update **)(this + 0x6c) = this_x00226;
  this_x00227 = operator_new(4);
  DB_Multi_MailBox_Req_Send::DB_Multi_MailBox_Req_Send(this_x00227);
  *(DB_Multi_MailBox_Req_Send **)(this + 0x7d8) = this_x00227;
  this_x00228 = operator_new(4);
  DB_ReqQueryCharacInfoMailbox::DB_ReqQueryCharacInfoMailbox(this_x00228);
  *(DB_ReqQueryCharacInfoMailbox **)(this + 0x7dc) = this_x00228;
  this_x00229 = operator_new(4);
  DB_GuildExpBookDelete::DB_GuildExpBookDelete(this_x00229);
  *(DB_GuildExpBookDelete **)(this + 0x828) = this_x00229;
  this_x00230 = operator_new(4);
  DB_InsertPoliceSaveChatting::DB_InsertPoliceSaveChatting(this_x00230);
  *(DB_InsertPoliceSaveChatting **)(this + 0x834) = this_x00230;
  this_x00231 = operator_new(4);
  DB_UpdateChuseokPackagePurchase::DB_UpdateChuseokPackagePurchase(this_x00231);
  *(DB_UpdateChuseokPackagePurchase **)(this + 0x850) = this_x00231;
  this_x00232 = operator_new(4);
  DB_CheckJoinGuild::DB_CheckJoinGuild(this_x00232);
  *(DB_CheckJoinGuild **)(this + 0x85c) = this_x00232;
  this_x00233 = operator_new(4);
  DB_RequestJoinGuild::DB_RequestJoinGuild(this_x00233);
  *(DB_RequestJoinGuild **)(this + 0x860) = this_x00233;
  this_x00234 = operator_new(4);
  DB_JoinGuildInfo::DB_JoinGuildInfo(this_x00234);
  *(DB_JoinGuildInfo **)(this + 0x868) = this_x00234;
  this_x00235 = operator_new(4);
  DB_CancelJoinGuild::DB_CancelJoinGuild(this_x00235);
  *(DB_CancelJoinGuild **)(this + 0x864) = this_x00235;
  this_x00236 = operator_new(4);
  DB_GuildJoinList::DB_GuildJoinList(this_x00236);
  *(DB_GuildJoinList **)(this + 0x86c) = this_x00236;
  this_x00237 = operator_new(4);
  DB_DenyJoinGuild::DB_DenyJoinGuild(this_x00237);
  *(DB_DenyJoinGuild **)(this + 0x874) = this_x00237;
  pDVar2 = operator_new(4);
  DB_UpdateReturnUserFirstLogin::DB_UpdateReturnUserFirstLogin(pDVar2);
  *(DB_UpdateReturnUserFirstLogin **)(this + 0x880) = pDVar2;
  this_x00238 = operator_new(4);
  DB_InsertAccountFirstLoginFlag::DB_InsertAccountFirstLoginFlag(this_x00238);
  *(DB_InsertAccountFirstLoginFlag **)(this + 0x97c) = this_x00238;
  this_x00239 = operator_new(4);
  DB_SaveGameOption_QuickChatting::DB_SaveGameOption_QuickChatting(this_x00239);
  *(DB_SaveGameOption_QuickChatting **)(this + 0x8e8) = this_x00239;
  this_x00240 = operator_new(4);
  DB_UpdatePurchaseCashItemBonus::DB_UpdatePurchaseCashItemBonus(this_x00240);
  *(DB_UpdatePurchaseCashItemBonus **)(this + 0x8f4) = this_x00240;
  this_x00241 = operator_new(4);
  DB_UpdateItemCountValue::DB_UpdateItemCountValue(this_x00241);
  *(DB_UpdateItemCountValue **)(this + 0x904) = this_x00241;
  this_x00242 = operator_new(4);
  DB_UpdateLimitItemUsage::DB_UpdateLimitItemUsage(this_x00242);
  *(DB_UpdateLimitItemUsage **)(this + 0x908) = this_x00242;
  this_x00243 = operator_new(4);
  DB_LogBuyItem::DB_LogBuyItem(this_x00243);
  *(DB_LogBuyItem **)(this + 0x948) = this_x00243;
  this_x00244 = operator_new(4);
  DB_UpdateRevengeData::DB_UpdateRevengeData(this_x00244);
  *(DB_UpdateRevengeData **)(this + 0x914) = this_x00244;
  this_x00245 = operator_new(4);
  DB_UpdateGoblinPadAdvicePwdRewardTime::DB_UpdateGoblinPadAdvicePwdRewardTime(this_x00245);
  *(DB_UpdateGoblinPadAdvicePwdRewardTime **)(this + 0x920) = this_x00245;
  this_x00246 = operator_new(4);
  DB_UpdateCharacPlayTime::DB_UpdateCharacPlayTime(this_x00246);
  *(DB_UpdateCharacPlayTime **)(this + 0x93c) = this_x00246;
  this_x00247 = operator_new(4);
  DB_SaveExpandEquipslot::DB_SaveExpandEquipslot(this_x00247);
  *(DB_SaveExpandEquipslot **)(this + 0x9b8) = this_x00247;
  this_x00248 = operator_new(4);
  DB_UpdateFairPvPScore::DB_UpdateFairPvPScore(this_x00248);
  *(DB_UpdateFairPvPScore **)(this + 0x988) = this_x00248;
  this_x00249 = operator_new(4);
  DB_SavePvPMissionList::DB_SavePvPMissionList(this_x00249);
  *(DB_SavePvPMissionList **)(this + 0x990) = this_x00249;
  this_x00250 = operator_new(4);
  DB_InsertResponseTime::DB_InsertResponseTime(this_x00250);
  *(DB_InsertResponseTime **)(this + 0x9b4) = this_x00250;
  this_x00251 = operator_new(4);
  DB_UpdateItemMakingSkill::DB_UpdateItemMakingSkill(this_x00251);
  *(DB_UpdateItemMakingSkill **)(this + 0x9bc) = this_x00251;
  this_x00252 = operator_new(4);
  DB_TOD_Random_Select_UserAPC::DB_TOD_Random_Select_UserAPC(this_x00252);
  *(DB_TOD_Random_Select_UserAPC **)(this + 0x9d8) = this_x00252;
  this_x00253 = operator_new(4);
  DB_TOD_Reset_UserAPC::DB_TOD_Reset_UserAPC(this_x00253);
  *(DB_TOD_Reset_UserAPC **)(this + 0x9e0) = this_x00253;
  this_x00254 = operator_new(4);
  DB_TOD_Update_UserState::DB_TOD_Update_UserState(this_x00254);
  *(DB_TOD_Update_UserState **)(this + 0x9e4) = this_x00254;
  this_x00255 = operator_new(4);
  DB_UpdateQuestShopBuyingStatusList::DB_UpdateQuestShopBuyingStatusList(this_x00255);
  *(DB_UpdateQuestShopBuyingStatusList **)(this + 0x9e8) = this_x00255;
  this_x00256 = operator_new(4);
  DB_UpdateAddItemCountValue::DB_UpdateAddItemCountValue(this_x00256);
  *(DB_UpdateAddItemCountValue **)(this + 0xa04) = this_x00256;
  this_x00257 = operator_new(4);
  DB_SaveKillMonsterInfo::DB_SaveKillMonsterInfo(this_x00257);
  *(DB_SaveKillMonsterInfo **)(this + 0xa08) = this_x00257;
  this_x00258 = operator_new(4);
  DB_LoadKillMonsterInfo::DB_LoadKillMonsterInfo(this_x00258);
  *(DB_LoadKillMonsterInfo **)(this + 0xa0c) = this_x00258;
  this_x00259 = operator_new(4);
  DB_SaveTitleBook::DB_SaveTitleBook(this_x00259);
  *(DB_SaveTitleBook **)(this + 0xa18) = this_x00259;
  this_x00260 = operator_new(4);
  DB_SaveAchievement::DB_SaveAchievement(this_x00260);
  *(DB_SaveAchievement **)(this + 0xa1c) = this_x00260;
  this_x00261 = operator_new(4);
  DB_UpdateUserFatigueQuantity::DB_UpdateUserFatigueQuantity(this_x00261);
  *(DB_UpdateUserFatigueQuantity **)(this + 0xa20) = this_x00261;
  this_x00262 = operator_new(4);
  DB_UpdateUserGiftFatigueQuantity::DB_UpdateUserGiftFatigueQuantity(this_x00262);
  *(DB_UpdateUserGiftFatigueQuantity **)(this + 0xa24) = this_x00262;
  this_x00263 = operator_new(4);
  DB_SaveCharacSlotExtend::DB_SaveCharacSlotExtend(this_x00263);
  *(DB_SaveCharacSlotExtend **)(this + 0xa2c) = this_x00263;
  this_x00264 = operator_new(4);
  DB_SaveGiveAvengerTitleFlag::DB_SaveGiveAvengerTitleFlag(this_x00264);
  *(DB_SaveGiveAvengerTitleFlag **)(this + 0xa38) = this_x00264;
  this_x00265 = operator_new(4);
  DB_SelectLevelUpReward::DB_SelectLevelUpReward(this_x00265);
  *(DB_SelectLevelUpReward **)(this + 0xa3c) = this_x00265;
  pDVar2 = operator_new(4);
  DB_UpdateReturnUserFirstLogin::DB_UpdateReturnUserFirstLogin(pDVar2);
  *(DB_UpdateReturnUserFirstLogin **)(this + 0x880) = pDVar2;
  this_x00266 = operator_new(4);
  DB_InsertRandomOptionItemInform::DB_InsertRandomOptionItemInform(this_x00266);
  *(DB_InsertRandomOptionItemInform **)(this + 0xa68) = this_x00266;
  this_x00267 = operator_new(4);
  DB_StatisticCeraShopGiftLog::DB_StatisticCeraShopGiftLog(this_x00267);
  *(DB_StatisticCeraShopGiftLog **)(this + 0xa74) = this_x00267;
  this_x00268 = operator_new(4);
  DB_GetUserRegdate::DB_GetUserRegdate(this_x00268);
  *(DB_GetUserRegdate **)(this + 0xa88) = this_x00268;
  this_x00269 = operator_new(4);
  DB_UpdateOntimeLastRecvIdx::DB_UpdateOntimeLastRecvIdx(this_x00269);
  *(DB_UpdateOntimeLastRecvIdx **)(this + 0xa60) = this_x00269;
  this_x00270 = operator_new(4);
  DB_InsertOnTimeRewardUserLog::DB_InsertOnTimeRewardUserLog(this_x00270);
  *(DB_InsertOnTimeRewardUserLog **)(this + 0xa64) = this_x00270;
  this_x00271 = operator_new(4);
  DB_CheckCharacName::DB_CheckCharacName(this_x00271);
  *(DB_CheckCharacName **)(this + 0xa8c) = this_x00271;
  this_x00272 = operator_new(4);
  DB_MailBox_Req_System_Multi_Mail::DB_MailBox_Req_System_Multi_Mail(this_x00272);
  *(DB_MailBox_Req_System_Multi_Mail **)(this + 0xa94) = this_x00272;
  this_x00273 = operator_new(4);
  DB_CheckSecuReward::DB_CheckSecuReward(this_x00273);
  *(DB_CheckSecuReward **)(this + 0xab0) = this_x00273;
  this_x00274 = operator_new(4);
  DB_UpdateFatigueAttendance::DB_UpdateFatigueAttendance(this_x00274);
  *(DB_UpdateFatigueAttendance **)(this + 0xab4) = this_x00274;
  this_x00275 = operator_new(4);
  DB_UpdateInGameEventHistory::DB_UpdateInGameEventHistory(this_x00275);
  *(DB_UpdateInGameEventHistory **)(this + 0xab8) = this_x00275;
  this_x00276 = operator_new(4);
  DB_UpdateInventoryCapacity::DB_UpdateInventoryCapacity(this_x00276);
  *(DB_UpdateInventoryCapacity **)(this + 0xabc) = this_x00276;
  this_x00277 = operator_new(4);
  DB_UpdateAuraAvatarOption::DB_UpdateAuraAvatarOption(this_x00277);
  *(DB_UpdateAuraAvatarOption **)(this + 0xac0) = this_x00277;
  this_x00278 = operator_new(4);
  DB_InsertCeraItemHistory::DB_InsertCeraItemHistory(this_x00278);
  *(DB_InsertCeraItemHistory **)(this + 0xac8) = this_x00278;
  this_x00279 = operator_new(4);
  DB_UpdateAvatarHistory::DB_UpdateAvatarHistory(this_x00279);
  *(DB_UpdateAvatarHistory **)(this + 0xac4) = this_x00279;
  this_x00280 = operator_new(4);
  DB_SaveItemDictionaryFlag::DB_SaveItemDictionaryFlag(this_x00280);
  *(DB_SaveItemDictionaryFlag **)(this + 0xacc) = this_x00280;
  this_x00281 = operator_new(4);
  DB_SaveMercenaryData::DB_SaveMercenaryData(this_x00281);
  *(DB_SaveMercenaryData **)(this + 0xad0) = this_x00281;
  this_x00282 = operator_new(4);
  DB_HadesPunish::DB_HadesPunish(this_x00282);
  *(DB_HadesPunish **)(this + 0xadc) = this_x00282;
  this_x00283 = operator_new(4);
  DB_Check3rdPartyConcent::DB_Check3rdPartyConcent(this_x00283);
  *(DB_Check3rdPartyConcent **)(this + 0xae0) = this_x00283;
  this_x00284 = operator_new(4);
  DB_MercenaryLogInfo::DB_MercenaryLogInfo(this_x00284);
  *(DB_MercenaryLogInfo **)(this + 0xae4) = this_x00284;
  this_x00285 = operator_new(4);
  DB_SelectCharacMid::DB_SelectCharacMid(this_x00285);
  *(DB_SelectCharacMid **)(this + 0xae8) = this_x00285;
  this_x00286 = operator_new(4);
  DB_AvatarOptionChange::DB_AvatarOptionChange(this_x00286);
  *(DB_AvatarOptionChange **)(this + 0xb10) = this_x00286;
  this_x00287 = operator_new(4);
  DB_SaveObjectBringUp::DB_SaveObjectBringUp(this_x00287);
  *(DB_SaveObjectBringUp **)(this + 0xb2c) = this_x00287;
  this_x00288 = operator_new(4);
  DB_SaveGameOption_ChattingEmoticon::DB_SaveGameOption_ChattingEmoticon(this_x00288);
  *(DB_SaveGameOption_ChattingEmoticon **)(this + 0xb60) = this_x00288;
  this_x00289 = operator_new(4);
  DB_UpdateBoosterGageData::DB_UpdateBoosterGageData(this_x00289);
  *(DB_UpdateBoosterGageData **)(this + 0xb64) = this_x00289;
  this_x00290 = operator_new(4);
  CLocalChina_DB_BreakAwayReset::CLocalChina_DB_BreakAwayReset(this_x00290);
  *(CLocalChina_DB_BreakAwayReset **)(this + 0xb78) = this_x00290;
  this_x00291 = operator_new(4);
  CLocalChina_DB_LastDay_BreakAway::CLocalChina_DB_LastDay_BreakAway(this_x00291);
  *(CLocalChina_DB_LastDay_BreakAway **)(this + 0xb7c) = this_x00291;
  this_x00292 = operator_new(4);
  CLocalGlobal_DB_STATICS_BOSSTOWER::CLocalGlobal_DB_STATICS_BOSSTOWER(this_x00292);
  *(CLocalGlobal_DB_STATICS_BOSSTOWER **)(this + 0xb84) = this_x00292;
  this_x00293 = operator_new(4);
  DB_UpdateCeraShopPurchaseCount::DB_UpdateCeraShopPurchaseCount(this_x00293);
  *(DB_UpdateCeraShopPurchaseCount **)(this + 0xb68) = this_x00293;
  this_x00294 = operator_new(0x1c);
                    /* try { // try from 083feb18 to 083feb1c has its CatchHandler @ 083feb1f */
  DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher(this_x00294);
  *(DB_AradDatabaseDispatcher **)(this + 0xb74) = this_x00294;
                    /* try { // try from 083feb48 to 083fefc7 has its CatchHandler @ 083ff0dd */
  this_x00295 = operator_new(4);
  DB_LoadPuUserCheck::DB_LoadPuUserCheck(this_x00295);
  *(DB_LoadPuUserCheck **)(this + 0xb88) = this_x00295;
  this_x00296 = operator_new(4);
  DB_SavePuUserCheck::DB_SavePuUserCheck(this_x00296);
  *(DB_SavePuUserCheck **)(this + 0xb8c) = this_x00296;
  this_x00297 = operator_new(4);
  advancealtar::DB_StatisticAdvanceAltar::DB_StatisticAdvanceAltar(this_x00297);
  *(DB_StatisticAdvanceAltar **)(this + 0xcf0) = this_x00297;
  this_x00298 = operator_new(4);
  DB_CheckAddFriend::DB_CheckAddFriend(this_x00298);
  *(DB_CheckAddFriend **)(this + 0xcfc) = this_x00298;
  this_x00299 = operator_new(4);
  DB_SaveInformNotice::DB_SaveInformNotice(this_x00299);
  *(DB_SaveInformNotice **)(this + 0xbd8) = this_x00299;
  this_x00300 = operator_new(4);
  DB_NoticeIngameAdvertisement::DB_NoticeIngameAdvertisement(this_x00300);
  *(DB_NoticeIngameAdvertisement **)(this + 0xbe4) = this_x00300;
  this_x00301 = operator_new(4);
  DB_RequestCharacSkillInfo::DB_RequestCharacSkillInfo(this_x00301);
  *(DB_RequestCharacSkillInfo **)(this + 0xbf8) = this_x00301;
  this_x00302 = operator_new(4);
  DB_RequestTagCharacInfo::DB_RequestTagCharacInfo(this_x00302);
  *(DB_RequestTagCharacInfo **)(this + 0xbfc) = this_x00302;
  this_x00303 = operator_new(4);
  DB_SavePcRoomPlayTimeEvent::DB_SavePcRoomPlayTimeEvent(this_x00303);
  *(DB_SavePcRoomPlayTimeEvent **)(this + 0xc00) = this_x00303;
  this_x00304 = operator_new(4);
  DB_SaveBestClearTime::DB_SaveBestClearTime(this_x00304);
  *(DB_SaveBestClearTime **)(this + 0xc04) = this_x00304;
  this_x00305 = operator_new(4);
  DB_AuctionSubMoney::DB_AuctionSubMoney(this_x00305);
  *(DB_AuctionSubMoney **)(this + 0xc28) = this_x00305;
  this_x00306 = operator_new(4);
  DB_UpdateBlueMarbleEnterCount::DB_UpdateBlueMarbleEnterCount(this_x00306);
  *(DB_UpdateBlueMarbleEnterCount **)(this + 0xc34) = this_x00306;
  this_x00307 = operator_new(4);
  DB_InsertAttendanceEvent::DB_InsertAttendanceEvent(this_x00307);
  *(DB_InsertAttendanceEvent **)(this + 0xc3c) = this_x00307;
  this_x00308 = operator_new(4);
  DB_UpdateBingoEvent::DB_UpdateBingoEvent(this_x00308);
  *(DB_UpdateBingoEvent **)(this + 0xc80) = this_x00308;
  this_x00309 = operator_new(4);
  DB_EventSaveGrowthWeapon::DB_EventSaveGrowthWeapon(this_x00309);
  *(DB_EventSaveGrowthWeapon **)(this + 0xc50) = this_x00309;
  this_x00310 = operator_new(4);
  DB_EventUpdateGrowthWeaponCharac::DB_EventUpdateGrowthWeaponCharac(this_x00310);
  *(DB_EventUpdateGrowthWeaponCharac **)(this + 0xc54) = this_x00310;
  this_x00311 = operator_new(4);
  DB_EventUpdateGrowthWeaponTimepiece::DB_EventUpdateGrowthWeaponTimepiece(this_x00311);
  *(DB_EventUpdateGrowthWeaponTimepiece **)(this + 0xc58) = this_x00311;
  this_x00312 = operator_new(4);
  DB_EventGrowthWeaponReset::DB_EventGrowthWeaponReset(this_x00312);
  *(DB_EventGrowthWeaponReset **)(this + 0xc5c) = this_x00312;
  this_x00313 = operator_new(4);
  DB_EventSaveGiveGrowCreature::DB_EventSaveGiveGrowCreature(this_x00313);
  *(DB_EventSaveGiveGrowCreature **)(this + 0xc60) = this_x00313;
  this_x00314 = operator_new(4);
  DB_EventUpdateGiveGrowCreature::DB_EventUpdateGiveGrowCreature(this_x00314);
  *(DB_EventUpdateGiveGrowCreature **)(this + 0xc64) = this_x00314;
  this_x00315 = operator_new(4);
  DB_EventAccountCharacterLevelUpOnceGift::DB_EventAccountCharacterLevelUpOnceGift(this_x00315);
  *(DB_EventAccountCharacterLevelUpOnceGift **)(this + 0xc68) = this_x00315;
  this_x00316 = operator_new(4);
  DB_AvatarColorChange::DB_AvatarColorChange(this_x00316);
  *(DB_AvatarColorChange **)(this + 0xc6c) = this_x00316;
  this_x00317 = operator_new(4);
  DB_TestTradeRestrict::DB_TestTradeRestrict(this_x00317);
  *(DB_TestTradeRestrict **)(this + 0xc74) = this_x00317;
  this_x00318 = operator_new(4);
  DB_UpdateComboSkill::DB_UpdateComboSkill(this_x00318);
  *(DB_UpdateComboSkill **)(this + 0xc78) = this_x00318;
  this_x00319 = operator_new(4);
  DB_SaveCharacInformNotice::DB_SaveCharacInformNotice(this_x00319);
  *(DB_SaveCharacInformNotice **)(this + 0xc48) = this_x00319;
  this_x00320 = operator_new(4);
  DB_UpdateSeriaRoomAnimationDeco::DB_UpdateSeriaRoomAnimationDeco(this_x00320);
  *(DB_UpdateSeriaRoomAnimationDeco **)(this + 0xc7c) = this_x00320;
  this_x00321 = operator_new(4);
  DB_LoadCharacHotKeyOption::DB_LoadCharacHotKeyOption(this_x00321);
  *(DB_LoadCharacHotKeyOption **)(this + 0xc84) = this_x00321;
  this_x00322 = operator_new(4);
  DB_LogIngameAdvertisement::DB_LogIngameAdvertisement(this_x00322);
  *(DB_LogIngameAdvertisement **)(this + 0xcb4) = this_x00322;
  this_x00323 = operator_new(4);
  DB_LogCeraShopError::DB_LogCeraShopError(this_x00323);
  *(DB_LogCeraShopError **)(this + 0xcbc) = this_x00323;
  this_x00324 = operator_new(4);
  DB_GetPremiumSelectedCubeInfo::DB_GetPremiumSelectedCubeInfo(this_x00324);
  *(DB_GetPremiumSelectedCubeInfo **)(this + 0xccc) = this_x00324;
  this_x00325 = operator_new(4);
  DB_InsertEventStageLog::DB_InsertEventStageLog(this_x00325);
  *(DB_InsertEventStageLog **)(this + 0xcd0) = this_x00325;
  this_x00326 = operator_new(0x1c);
                    /* try { // try from 083fefcf to 083fefd3 has its CatchHandler @ 083fefd6 */
  DB_DispatcherTaiwan::DB_DispatcherTaiwan(this_x00326);
  *(DB_DispatcherTaiwan **)(this + 0xd3c) = this_x00326;
                    /* try { // try from 083fefff to 083ff0bc has its CatchHandler @ 083ff0dd */
  this_x00327 = operator_new(4);
  DB_SaveCerashopAddRestrictType::DB_SaveCerashopAddRestrictType(this_x00327);
  *(DB_SaveCerashopAddRestrictType **)(this + 0xd04) = this_x00327;
  this_x00328 = operator_new(4);
  DB_LoadCerashopAddRestrictType::DB_LoadCerashopAddRestrictType(this_x00328);
  *(DB_LoadCerashopAddRestrictType **)(this + 0xd08) = this_x00328;
  this_x00329 = operator_new(4);
  DB_InsertAccountFirstLoginDailyFlag::DB_InsertAccountFirstLoginDailyFlag(this_x00329);
  *(DB_InsertAccountFirstLoginDailyFlag **)(this + 0xd0c) = this_x00329;
  this_x00330 = operator_new(4);
  DB_SaveEventLevelupSupport::DB_SaveEventLevelupSupport(this_x00330);
  *(DB_SaveEventLevelupSupport **)(this + 0xd40) = this_x00330;
  this_x00331 = operator_new(4);
  DB_LoadEventLevelupSupport::DB_LoadEventLevelupSupport(this_x00331);
  *(DB_LoadEventLevelupSupport **)(this + 0xd44) = this_x00331;
  this_x00332 = operator_new(4);
  DB_SelectAllowProxyUser::DB_SelectAllowProxyUser(this_x00332);
  *(DB_SelectAllowProxyUser **)(this + 0xd4c) = this_x00332;
  return 1;
}
```
