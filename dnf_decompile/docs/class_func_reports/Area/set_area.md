# set_area

`_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript`

`Area::set_area(int, TownAreaScript&, STMapScript&)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c1d14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1d14  _ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript
#           Area::set_area(int, TownAreaScript&, STMapScript&)
# range [0x086c1d14, 0x086c214b]
086c1d14 +0x000:  push   %ebp
086c1d15 +0x001:  mov    %esp,%ebp
086c1d17 +0x003:  push   %edi
086c1d18 +0x004:  push   %esi
086c1d19 +0x005:  push   %ebx
086c1d1a +0x006:  sub    $0x8c,%esp
086c1d20 +0x00c:  mov    0x8(%ebp),%eax
086c1d23 +0x00f:  add    $0x5c,%eax
086c1d26 +0x012:  mov    %eax,(%esp)
086c1d29 +0x015:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
086c1d2e +0x01a:  mov    0x8(%ebp),%eax
086c1d31 +0x01d:  mov    0xc(%ebp),%edx
086c1d34 +0x020:  mov    %edx,0x4(%eax)
086c1d37 +0x023:  mov    0x10(%ebp),%eax
086c1d3a +0x026:  mov    (%eax),%edx
086c1d3c +0x028:  mov    0x8(%ebp),%eax
086c1d3f +0x02b:  mov    %edx,(%eax)
086c1d41 +0x02d:  mov    0x10(%ebp),%eax
086c1d44 +0x030:  mov    0x8(%eax),%eax
086c1d47 +0x033:  mov    %eax,%edx
086c1d49 +0x035:  mov    0x8(%ebp),%eax
086c1d4c +0x038:  mov    %edx,0x68(%eax)
086c1d4f +0x03b:  mov    0x10(%ebp),%eax
086c1d52 +0x03e:  movzbl 0x24(%eax),%edx
086c1d56 +0x042:  mov    0x8(%ebp),%eax
086c1d59 +0x045:  mov    %dl,0x6c(%eax)
086c1d5c +0x048:  mov    0x8(%ebp),%eax
086c1d5f +0x04b:  mov    0x68(%eax),%eax
086c1d62 +0x04e:  cmp    $0x2,%eax
086c1d65 +0x051:  jne    086c1d7f <+0x6b>
086c1d67 +0x053:  mov    0x10(%ebp),%eax
086c1d6a +0x056:  lea    0x18(%eax),%edx
086c1d6d +0x059:  mov    0x8(%ebp),%eax
086c1d70 +0x05c:  add    $0x24,%eax
086c1d73 +0x05f:  mov    %edx,0x4(%esp)
086c1d77 +0x063:  mov    %eax,(%esp)
086c1d7a +0x066:  call   089bab64 <_Z17createLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>  ; createLotteryInfo(LotteryInfo*, std::vector<int, std::allocator<int> >*)
086c1d7f +0x06b:  mov    0x8(%ebp),%eax
086c1d82 +0x06e:  mov    0x68(%eax),%eax
086c1d85 +0x071:  cmp    $0x4,%eax
086c1d88 +0x074:  jne    086c1daa <+0x96>
086c1d8a +0x076:  mov    0x10(%ebp),%eax
086c1d8d +0x079:  add    $0x18,%eax
086c1d90 +0x07c:  movl   $0x0,0x4(%esp)
086c1d98 +0x084:  mov    %eax,(%esp)
086c1d9b +0x087:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
086c1da0 +0x08c:  mov    (%eax),%edx
086c1da2 +0x08e:  mov    0x8(%ebp),%eax
086c1da5 +0x091:  mov    %edx,0x8(%eax)
086c1da8 +0x094:  jmp    086c1db4 <+0xa0>
086c1daa +0x096:  mov    0x8(%ebp),%eax
086c1dad +0x099:  movl   $0xffffffff,0x8(%eax)
086c1db4 +0x0a0:  mov    0x14(%ebp),%eax
086c1db7 +0x0a3:  add    $0x60,%eax
086c1dba +0x0a6:  mov    %eax,(%esp)
086c1dbd +0x0a9:  call   086d340a <_GLOBAL__I_MAX_VILLAGE_NUM+0x1c3b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1c3b
086c1dc2 +0x0ae:  xor    $0x1,%eax
086c1dc5 +0x0b1:  test   %al,%al
086c1dc7 +0x0b3:  je     086c1f7d <+0x269>
086c1dcd +0x0b9:  lea    -0x40(%ebp),%eax
086c1dd0 +0x0bc:  mov    %eax,(%esp)
086c1dd3 +0x0bf:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
086c1dd8 +0x0c4:  mov    0x14(%ebp),%eax
086c1ddb +0x0c7:  lea    0x60(%eax),%edx
086c1dde +0x0ca:  lea    -0x44(%ebp),%eax
086c1de1 +0x0cd:  mov    %edx,0x4(%esp)
086c1de5 +0x0d1:  mov    %eax,(%esp)
086c1de8 +0x0d4:  call   086d344e <_GLOBAL__I_MAX_VILLAGE_NUM+0x1c7f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1c7f
086c1ded +0x0d9:  sub    $0x4,%esp
086c1df0 +0x0dc:  mov    0x14(%ebp),%eax
086c1df3 +0x0df:  lea    0x60(%eax),%edx
086c1df6 +0x0e2:  lea    -0x48(%ebp),%eax
086c1df9 +0x0e5:  mov    %edx,0x4(%esp)
086c1dfd +0x0e9:  mov    %eax,(%esp)
086c1e00 +0x0ec:  call   086d3474 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1ca5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1ca5
086c1e05 +0x0f1:  sub    $0x4,%esp
086c1e08 +0x0f4:  jmp    086c1f63 <+0x24f>
086c1e0d +0x0f9:  lea    -0x48(%ebp),%eax
086c1e10 +0x0fc:  mov    %eax,(%esp)
086c1e13 +0x0ff:  call   086d34da <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d0b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d0b
086c1e18 +0x104:  mov    0x10(%eax),%eax
086c1e1b +0x107:  mov    %eax,-0x40(%ebp)
086c1e1e +0x10a:  lea    -0x48(%ebp),%eax
086c1e21 +0x10d:  mov    %eax,(%esp)
086c1e24 +0x110:  call   086d34da <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d0b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d0b
086c1e29 +0x115:  mov    0x14(%eax),%eax
086c1e2c +0x118:  mov    %eax,-0x3c(%ebp)
086c1e2f +0x11b:  mov    0x8(%ebp),%eax
086c1e32 +0x11e:  lea    0x70(%eax),%edx
086c1e35 +0x121:  lea    -0x40(%ebp),%eax
086c1e38 +0x124:  mov    %eax,0x4(%esp)
086c1e3c +0x128:  mov    %edx,(%esp)
086c1e3f +0x12b:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
086c1e44 +0x130:  lea    -0x48(%ebp),%eax
086c1e47 +0x133:  mov    %eax,(%esp)
086c1e4a +0x136:  call   086d34e4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d15>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d15
086c1e4f +0x13b:  mov    0x8(%ebp),%edx
086c1e52 +0x13e:  add    $0x5c,%edx
086c1e55 +0x141:  mov    %eax,0x4(%esp)
086c1e59 +0x145:  mov    %edx,(%esp)
086c1e5c +0x148:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
086c1e61 +0x14d:  mov    0x8(%ebp),%eax
086c1e64 +0x150:  movzbl 0x94(%eax),%eax
086c1e6b +0x157:  xor    $0x1,%eax
086c1e6e +0x15a:  test   %al,%al
086c1e70 +0x15c:  je     086c1ebd <+0x1a9>
086c1e72 +0x15e:  lea    -0x48(%ebp),%eax
086c1e75 +0x161:  mov    %eax,(%esp)
086c1e78 +0x164:  call   086d34e4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d15>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d15
086c1e7d +0x169:  mov    (%eax),%eax
086c1e7f +0x16b:  mov    %eax,%ebx
086c1e81 +0x16d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c1e86 +0x172:  mov    0xa8d0(%eax),%eax
086c1e8c +0x178:  mov    %ebx,0x4(%esp)
086c1e90 +0x17c:  mov    %eax,(%esp)
086c1e93 +0x17f:  call   08581680 <_ZNK14CNPCScriptList4findEj>  ; CNPCScriptList::find(unsigned int) const
086c1e98 +0x184:  mov    %eax,-0x24(%ebp)
086c1e9b +0x187:  cmpl   $0x0,-0x24(%ebp)
086c1e9f +0x18b:  je     086c1ebd <+0x1a9>
086c1ea1 +0x18d:  movl   $0x0,0x4(%esp)
086c1ea9 +0x195:  mov    -0x24(%ebp),%eax
086c1eac +0x198:  mov    %eax,(%esp)
086c1eaf +0x19b:  call   086d2736 <_GLOBAL__I_MAX_VILLAGE_NUM+0xf67>  ; global constructors keyed to MAX_VILLAGE_NUM+0xf67
086c1eb4 +0x1a0:  mov    0x8(%ebp),%edx
086c1eb7 +0x1a3:  mov    %al,0x94(%edx)
086c1ebd +0x1a9:  lea    -0x48(%ebp),%eax
086c1ec0 +0x1ac:  mov    %eax,(%esp)
086c1ec3 +0x1af:  call   086d34e4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d15>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d15
086c1ec8 +0x1b4:  mov    (%eax),%eax
086c1eca +0x1b6:  cmp    $0x7f,%eax
086c1ecd +0x1b9:  sete   %al
086c1ed0 +0x1bc:  test   %al,%al
086c1ed2 +0x1be:  je     086c1f58 <+0x244>
086c1ed8 +0x1c4:  lea    -0x48(%ebp),%eax
086c1edb +0x1c7:  mov    %eax,(%esp)
086c1ede +0x1ca:  call   086d34e4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d15>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d15
086c1ee3 +0x1cf:  mov    (%eax),%ecx
086c1ee5 +0x1d1:  mov    0x8(%ebp),%eax
086c1ee8 +0x1d4:  mov    (%eax),%edx
086c1eea +0x1d6:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
086c1eef +0x1db:  movl   $0x11bc,0x14(%esp)
086c1ef7 +0x1e3:  movl   $0x118a,0x10(%esp)
086c1eff +0x1eb:  mov    %ecx,0xc(%esp)
086c1f03 +0x1ef:  mov    %edx,0x8(%esp)
086c1f07 +0x1f3:  mov    0xc(%ebp),%edx
086c1f0a +0x1f6:  mov    %edx,0x4(%esp)
086c1f0e +0x1fa:  mov    %eax,(%esp)
086c1f11 +0x1fd:  call   086d2788 <_GLOBAL__I_MAX_VILLAGE_NUM+0xfb9>  ; global constructors keyed to MAX_VILLAGE_NUM+0xfb9
086c1f16 +0x202:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
086c1f1b +0x207:  mov    %eax,%ebx
086c1f1d +0x209:  mov    0x8(%ebp),%eax
086c1f20 +0x20c:  mov    (%eax),%eax
086c1f22 +0x20e:  movzbl %al,%edx
086c1f25 +0x211:  mov    0xc(%ebp),%eax
086c1f28 +0x214:  movzbl %al,%eax
086c1f2b +0x217:  mov    %edx,0x8(%esp)
086c1f2f +0x21b:  mov    %eax,0x4(%esp)
086c1f33 +0x21f:  lea    -0x36(%ebp),%eax
086c1f36 +0x222:  mov    %eax,(%esp)
086c1f39 +0x225:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
086c1f3e +0x22a:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
086c1f43 +0x22f:  mov    %ebx,0x8(%esp)
086c1f47 +0x233:  movzwl -0x36(%ebp),%edx
086c1f4b +0x237:  mov    %dx,0x4(%esp)
086c1f50 +0x23c:  mov    %eax,(%esp)
086c1f53 +0x23f:  call   086b6f58 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE>  ; village_object::CVillageObjectMgr::register_object(village_object::Zone, village_object::IObject*)
086c1f58 +0x244:  lea    -0x48(%ebp),%eax
086c1f5b +0x247:  mov    %eax,(%esp)
086c1f5e +0x24a:  call   086d34c4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1cf5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1cf5
086c1f63 +0x24f:  lea    -0x44(%ebp),%eax
086c1f66 +0x252:  mov    %eax,0x4(%esp)
086c1f6a +0x256:  lea    -0x48(%ebp),%eax
086c1f6d +0x259:  mov    %eax,(%esp)
086c1f70 +0x25c:  call   086d3497 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1cc8>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1cc8
086c1f75 +0x261:  test   %al,%al
086c1f77 +0x263:  jne    086c1e0d <+0xf9>
086c1f7d +0x269:  mov    0x14(%ebp),%eax
086c1f80 +0x26c:  lea    0xe8(%eax),%edx
086c1f86 +0x272:  mov    0x8(%ebp),%eax
086c1f89 +0x275:  add    $0x7c,%eax
086c1f8c +0x278:  mov    %edx,0x4(%esp)
086c1f90 +0x27c:  mov    %eax,(%esp)
086c1f93 +0x27f:  call   086d34ee <_GLOBAL__I_MAX_VILLAGE_NUM+0x1d1f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1d1f
086c1f98 +0x284:  movl   $0x0,-0x20(%ebp)
086c1f9f +0x28b:  jmp    086c2009 <+0x2f5>
086c1fa1 +0x28d:  mov    0x14(%ebp),%eax
086c1fa4 +0x290:  lea    0xdc(%eax),%edx
086c1faa +0x296:  mov    -0x20(%ebp),%eax
086c1fad +0x299:  mov    %eax,0x4(%esp)
086c1fb1 +0x29d:  mov    %edx,(%esp)
086c1fb4 +0x2a0:  call   086d3776 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1fa7>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1fa7
086c1fb9 +0x2a5:  lea    0x20(%eax),%ebx
086c1fbc +0x2a8:  mov    0x14(%ebp),%eax
086c1fbf +0x2ab:  lea    0xdc(%eax),%edx
086c1fc5 +0x2b1:  mov    -0x20(%ebp),%eax
086c1fc8 +0x2b4:  mov    %eax,0x4(%esp)
086c1fcc +0x2b8:  mov    %edx,(%esp)
086c1fcf +0x2bb:  call   086d3776 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1fa7>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1fa7
086c1fd4 +0x2c0:  lea    0x1c(%eax),%edx
086c1fd7 +0x2c3:  lea    -0x34(%ebp),%eax
086c1fda +0x2c6:  mov    %ebx,0x8(%esp)
086c1fde +0x2ca:  mov    %edx,0x4(%esp)
086c1fe2 +0x2ce:  mov    %eax,(%esp)
086c1fe5 +0x2d1:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
086c1fea +0x2d6:  sub    $0x4,%esp
086c1fed +0x2d9:  mov    0x8(%ebp),%eax
086c1ff0 +0x2dc:  lea    0x88(%eax),%edx
086c1ff6 +0x2e2:  lea    -0x34(%ebp),%eax
086c1ff9 +0x2e5:  mov    %eax,0x4(%esp)
086c1ffd +0x2e9:  mov    %edx,(%esp)
086c2000 +0x2ec:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
086c2005 +0x2f1:  addl   $0x1,-0x20(%ebp)
086c2009 +0x2f5:  mov    0x14(%ebp),%eax
086c200c +0x2f8:  add    $0xdc,%eax
086c2011 +0x2fd:  mov    %eax,(%esp)
086c2014 +0x300:  call   083b116e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4b13a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4b13a
086c2019 +0x305:  cmp    -0x20(%ebp),%eax
086c201c +0x308:  seta   %al
086c201f +0x30b:  test   %al,%al
086c2021 +0x30d:  jne    086c1fa1 <+0x28d>
086c2027 +0x313:  movl   $0x0,-0x28(%ebp)
086c202e +0x31a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c2033 +0x31f:  lea    0x61a0(%eax),%edx
086c2039 +0x325:  lea    -0x4c(%ebp),%eax
086c203c +0x328:  mov    %edx,0x4(%esp)
086c2040 +0x32c:  mov    %eax,(%esp)
086c2043 +0x32f:  call   086d3790 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1fc1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1fc1
086c2048 +0x334:  sub    $0x4,%esp
086c204b +0x337:  jmp    086c208a <+0x376>
086c204d +0x339:  lea    -0x4c(%ebp),%eax
086c2050 +0x33c:  mov    %eax,(%esp)
086c2053 +0x33f:  call   086d381c <_GLOBAL__I_MAX_VILLAGE_NUM+0x204d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x204d
086c2058 +0x344:  mov    %eax,-0x1c(%ebp)
086c205b +0x347:  mov    -0x1c(%ebp),%eax
086c205e +0x34a:  mov    (%eax),%edx
086c2060 +0x34c:  mov    0x8(%ebp),%eax
086c2063 +0x34f:  mov    0x4(%eax),%eax
086c2066 +0x352:  cmp    %eax,%edx
086c2068 +0x354:  jne    086c207f <+0x36b>
086c206a +0x356:  mov    -0x1c(%ebp),%eax
086c206d +0x359:  mov    0x4(%eax),%edx
086c2070 +0x35c:  mov    0x8(%ebp),%eax
086c2073 +0x35f:  mov    (%eax),%eax
086c2075 +0x361:  cmp    %eax,%edx
086c2077 +0x363:  jne    086c207f <+0x36b>
086c2079 +0x365:  mov    -0x1c(%ebp),%eax
086c207c +0x368:  mov    %eax,-0x28(%ebp)
086c207f +0x36b:  lea    -0x4c(%ebp),%eax
086c2082 +0x36e:  mov    %eax,(%esp)
086c2085 +0x371:  call   086d3806 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2037>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2037
086c208a +0x376:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c208f +0x37b:  lea    0x61a0(%eax),%edx
086c2095 +0x381:  lea    -0x2c(%ebp),%eax
086c2098 +0x384:  mov    %edx,0x4(%esp)
086c209c +0x388:  mov    %eax,(%esp)
086c209f +0x38b:  call   086d37b4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1fe5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1fe5
086c20a4 +0x390:  sub    $0x4,%esp
086c20a7 +0x393:  lea    -0x2c(%ebp),%eax
086c20aa +0x396:  mov    %eax,0x4(%esp)
086c20ae +0x39a:  lea    -0x4c(%ebp),%eax
086c20b1 +0x39d:  mov    %eax,(%esp)
086c20b4 +0x3a0:  call   086d37da <_GLOBAL__I_MAX_VILLAGE_NUM+0x200b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x200b
086c20b9 +0x3a5:  test   %al,%al
086c20bb +0x3a7:  jne    086c204d <+0x339>
086c20bd +0x3a9:  mov    0x14(%ebp),%eax
086c20c0 +0x3ac:  add    $0x318,%eax
086c20c5 +0x3b1:  mov    %eax,(%esp)
086c20c8 +0x3b4:  call   086b506c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x596>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x596
086c20cd +0x3b9:  xor    $0x1,%eax
086c20d0 +0x3bc:  test   %al,%al
086c20d2 +0x3be:  je     086c20e1 <+0x3cd>
086c20d4 +0x3c0:  cmpl   $0x0,-0x28(%ebp)
086c20d8 +0x3c4:  je     086c20e1 <+0x3cd>
086c20da +0x3c6:  mov    $0x1,%eax
086c20df +0x3cb:  jmp    086c20e6 <+0x3d2>
086c20e1 +0x3cd:  mov    $0x0,%eax
086c20e6 +0x3d2:  test   %al,%al
086c20e8 +0x3d4:  je     086c2141 <+0x42d>
086c20ea +0x3d6:  mov    0x8(%ebp),%eax
086c20ed +0x3d9:  add    $0x7c,%eax
086c20f0 +0x3dc:  mov    %eax,-0x5c(%ebp)
086c20f3 +0x3df:  mov    0x14(%ebp),%eax
086c20f6 +0x3e2:  lea    0x318(%eax),%edi
086c20fc +0x3e8:  mov    -0x28(%ebp),%eax
086c20ff +0x3eb:  mov    0xc(%eax),%esi
086c2102 +0x3ee:  mov    -0x28(%ebp),%eax
086c2105 +0x3f1:  mov    0x8(%eax),%ebx
086c2108 +0x3f4:  mov    0x8(%ebp),%eax
086c210b +0x3f7:  mov    (%eax),%ecx
086c210d +0x3f9:  mov    0x8(%ebp),%eax
086c2110 +0x3fc:  mov    0x4(%eax),%edx
086c2113 +0x3ff:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
086c2118 +0x404:  mov    %eax,-0x6c(%ebp)
086c211b +0x407:  mov    -0x5c(%ebp),%eax
086c211e +0x40a:  mov    %eax,0x18(%esp)
086c2122 +0x40e:  mov    %edi,0x14(%esp)
086c2126 +0x412:  mov    %esi,0x10(%esp)
086c212a +0x416:  mov    %ebx,0xc(%esp)
086c212e +0x41a:  mov    %ecx,0x8(%esp)
086c2132 +0x41e:  mov    %edx,0x4(%esp)
086c2136 +0x422:  mov    -0x6c(%ebp),%eax
086c2139 +0x425:  mov    %eax,(%esp)
086c213c +0x428:  call   086b4144 <_ZN16village_attacked18CVillageMonsterMgr20InsertVillageMonsterEiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE>  ; village_attacked::CVillageMonsterMgr::InsertVillageMonster(int, int, int, int, std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea, std::allocator<MapArea> >*)
086c2141 +0x42d:  lea    -0xc(%ebp),%esp
086c2144 +0x430:  add    $0x0,%esp
086c2147 +0x433:  pop    %ebx
086c2148 +0x434:  pop    %esi
086c2149 +0x435:  pop    %edi
086c214a +0x436:  pop    %ebp
086c214b +0x437:  ret
```

## 反编译 C

```c
// Area::set_area @ 0x86c1d14

/* Area::set_area(int, TownAreaScript&, STMapScript&) */

void __thiscall Area::set_area(Area *this,int param_1,TownAreaScript *param_2,STMapScript *param_3)

{
  CTimeGate *pCVar1;
  char cVar2;
  Area AVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined2 uVar9;
  int iVar7;
  uint uVar8;
  __normal_iterator<stAttackedMapInfo_t*,std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>>
  local_50 [4];
  __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>> local_4c [4];
  __normal_iterator local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3a;
  int local_38 [2];
  __normal_iterator local_30 [4];
  int *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x5c));
  *(int *)(this + 4) = param_1;
  *(undefined4 *)this = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_2 + 8);
  this[0x6c] = *(Area *)(param_2 + 0x24);
  if (*(int *)(this + 0x68) == 2) {
    createLotteryInfo((LotteryInfo *)(this + 0x24),(vector *)(param_2 + 0x18));
  }
  if (*(int *)(this + 0x68) == 4) {
    puVar5 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(param_2 + 0x18),0);
    *(undefined4 *)(this + 8) = *puVar5;
  }
  else {
    *(undefined4 *)(this + 8) = 0xffffffff;
  }
  cVar2 = std::vector<AssignNpc,std::allocator<AssignNpc>>::empty();
  if (cVar2 != '\x01') {
    std::pair<int,int>::pair((pair<int,int> *)&local_44);
    std::vector<AssignNpc,std::allocator<AssignNpc>>::end();
    std::vector<AssignNpc,std::allocator<AssignNpc>>::begin();
    while( true ) {
      bVar4 = __gnu_cxx::operator!=(local_4c,local_48);
      if (!bVar4) break;
      iVar7 = __gnu_cxx::
              __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
              operator*(local_4c);
      local_44 = *(undefined4 *)(iVar7 + 0x10);
      iVar7 = __gnu_cxx::
              __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
              operator*(local_4c);
      local_40 = *(undefined4 *)(iVar7 + 0x14);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x70),
                 (pair *)&local_44);
      piVar6 = (int *)__gnu_cxx::
                      __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>
                      ::operator->(local_4c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x5c),piVar6);
      if (this[0x94] != (Area)0x1) {
        __gnu_cxx::__normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
        operator->(local_4c);
        iVar7 = G_CDataManager();
        local_28 = CNPCScriptList::find(*(uint *)(iVar7 + 0xa8d0));
        if (local_28 != 0) {
          AVar3 = (Area)CNPCScript::isExistRole(local_28,0);
          this[0x94] = AVar3;
        }
      }
      piVar6 = (int *)__gnu_cxx::
                      __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>
                      ::operator->(local_4c);
      if (*piVar6 == 0x7f) {
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>
                        ::operator->(local_4c);
        CTimeGate::SetTimeGate(GlobalData::s_timeGate_,param_1,*(int *)this,*piVar6,0x118a,0x11bc);
        pCVar1 = GlobalData::s_timeGate_;
        uVar9 = 0;
        village_object::Zone::Zone((Zone *)&local_3a,(uchar)param_1,(uchar)*(undefined4 *)this);
        village_object::CVillageObjectMgr::register_object
                  (GlobalData::s_villageObjectMgr,CONCAT22(uVar9,local_3a),pCVar1);
      }
      __gnu_cxx::__normal_iterator<AssignNpc*,std::vector<AssignNpc,std::allocator<AssignNpc>>>::
      operator++(local_4c);
    }
  }
  std::vector<MapArea,std::allocator<MapArea>>::operator=
            ((vector<MapArea,std::allocator<MapArea>> *)(this + 0x7c),(vector *)(param_3 + 0xe8));
  local_24 = 0;
  while( true ) {
    uVar8 = std::vector<TownPath,std::allocator<TownPath>>::size
                      ((vector<TownPath,std::allocator<TownPath>> *)(param_3 + 0xdc));
    if (uVar8 <= local_24) break;
    std::vector<TownPath,std::allocator<TownPath>>::operator[]
              ((vector<TownPath,std::allocator<TownPath>> *)(param_3 + 0xdc),local_24);
    iVar7 = std::vector<TownPath,std::allocator<TownPath>>::operator[]
                      ((vector<TownPath,std::allocator<TownPath>> *)(param_3 + 0xdc),local_24);
    std::make_pair<int&,int&>(local_38,(int *)(iVar7 + 0x1c));
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x88),
               (pair *)local_38);
    local_24 = local_24 + 1;
  }
  local_2c = (int *)0x0;
  G_CDataManager();
  std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>::begin();
  while( true ) {
    G_CDataManager();
    std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>::end();
    bVar4 = __gnu_cxx::operator!=(local_50,local_30);
    if (!bVar4) break;
    local_20 = (int *)__gnu_cxx::
                      __normal_iterator<stAttackedMapInfo_t*,std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>>
                      ::operator*(local_50);
    if ((*local_20 == *(int *)(this + 4)) && (local_20[1] == *(int *)this)) {
      local_2c = local_20;
    }
    __gnu_cxx::
    __normal_iterator<stAttackedMapInfo_t*,std::vector<stAttackedMapInfo_t,std::allocator<stAttackedMapInfo_t>>>
    ::operator++(local_50);
  }
  cVar2 = std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::empty();
  if ((cVar2 == '\x01') || (local_2c == (int *)0x0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    village_attacked::CVillageMonsterMgr::InsertVillageMonster
              (GlobalData::s_villageMonsterMgr,*(int *)(this + 4),*(int *)this,local_2c[2],
               local_2c[3],(vector *)(param_3 + 0x318),(vector *)(this + 0x7c));
  }
  return;
}
```
