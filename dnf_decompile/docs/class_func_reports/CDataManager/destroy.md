# destroy

`_ZN12CDataManager7destroyEv`

`CDataManager::destroy()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08357a66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08357a66  _ZN12CDataManager7destroyEv
#           CDataManager::destroy()
# range [0x08357a66, 0x08357e9d]
08357a66 +0x000:  push   %ebp
08357a67 +0x001:  mov    %esp,%ebp
08357a69 +0x003:  push   %ebx
08357a6a +0x004:  sub    $0x14,%esp
08357a6d +0x007:  mov    0x8(%ebp),%eax
08357a70 +0x00a:  mov    0x1c(%eax),%eax
08357a73 +0x00d:  test   %eax,%eax
08357a75 +0x00f:  je     08357a9b <+0x35>
08357a77 +0x011:  mov    0x8(%ebp),%eax
08357a7a +0x014:  mov    0x1c(%eax),%ebx
08357a7d +0x017:  test   %ebx,%ebx
08357a7f +0x019:  je     08357a91 <+0x2b>
08357a81 +0x01b:  mov    %ebx,(%esp)
08357a84 +0x01e:  call   0837e11c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdbbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdbbc
08357a89 +0x023:  mov    %ebx,(%esp)
08357a8c +0x026:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357a91 +0x02b:  mov    0x8(%ebp),%eax
08357a94 +0x02e:  movl   $0x0,0x1c(%eax)
08357a9b +0x035:  mov    0x8(%ebp),%eax
08357a9e +0x038:  mov    0x14(%eax),%eax
08357aa1 +0x03b:  test   %eax,%eax
08357aa3 +0x03d:  je     08357ac9 <+0x63>
08357aa5 +0x03f:  mov    0x8(%ebp),%eax
08357aa8 +0x042:  mov    0x14(%eax),%ebx
08357aab +0x045:  test   %ebx,%ebx
08357aad +0x047:  je     08357abf <+0x59>
08357aaf +0x049:  mov    %ebx,(%esp)
08357ab2 +0x04c:  call   0834945e <_ZN11CCharacListD1Ev>  ; CCharacList::~CCharacList()
08357ab7 +0x051:  mov    %ebx,(%esp)
08357aba +0x054:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357abf +0x059:  mov    0x8(%ebp),%eax
08357ac2 +0x05c:  movl   $0x0,0x14(%eax)
08357ac9 +0x063:  mov    0x8(%ebp),%eax
08357acc +0x066:  mov    0x18(%eax),%eax
08357acf +0x069:  test   %eax,%eax
08357ad1 +0x06b:  je     08357af7 <+0x91>
08357ad3 +0x06d:  mov    0x8(%ebp),%eax
08357ad6 +0x070:  mov    0x18(%eax),%ebx
08357ad9 +0x073:  test   %ebx,%ebx
08357adb +0x075:  je     08357aed <+0x87>
08357add +0x077:  mov    %ebx,(%esp)
08357ae0 +0x07a:  call   08353aa0 <_ZN9QuestListD1Ev>  ; QuestList::~QuestList()
08357ae5 +0x07f:  mov    %ebx,(%esp)
08357ae8 +0x082:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357aed +0x087:  mov    0x8(%ebp),%eax
08357af0 +0x08a:  movl   $0x0,0x18(%eax)
08357af7 +0x091:  mov    0x8(%ebp),%eax
08357afa +0x094:  mov    0xc(%eax),%eax
08357afd +0x097:  test   %eax,%eax
08357aff +0x099:  je     08357b25 <+0xbf>
08357b01 +0x09b:  mov    0x8(%ebp),%eax
08357b04 +0x09e:  mov    0xc(%eax),%ebx
08357b07 +0x0a1:  test   %ebx,%ebx
08357b09 +0x0a3:  je     08357b1b <+0xb5>
08357b0b +0x0a5:  mov    %ebx,(%esp)
08357b0e +0x0a8:  call   08510df6 <_ZN9CItemListD1Ev>  ; CItemList::~CItemList()
08357b13 +0x0ad:  mov    %ebx,(%esp)
08357b16 +0x0b0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357b1b +0x0b5:  mov    0x8(%ebp),%eax
08357b1e +0x0b8:  movl   $0x0,0xc(%eax)
08357b25 +0x0bf:  mov    0x8(%ebp),%eax
08357b28 +0x0c2:  mov    0x10(%eax),%eax
08357b2b +0x0c5:  test   %eax,%eax
08357b2d +0x0c7:  je     08357b53 <+0xed>
08357b2f +0x0c9:  mov    0x8(%ebp),%eax
08357b32 +0x0cc:  mov    0x10(%eax),%ebx
08357b35 +0x0cf:  test   %ebx,%ebx
08357b37 +0x0d1:  je     08357b49 <+0xe3>
08357b39 +0x0d3:  mov    %ebx,(%esp)
08357b3c +0x0d6:  call   083509ec <_ZN10CSkillListD1Ev>  ; CSkillList::~CSkillList()
08357b41 +0x0db:  mov    %ebx,(%esp)
08357b44 +0x0de:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357b49 +0x0e3:  mov    0x8(%ebp),%eax
08357b4c +0x0e6:  movl   $0x0,0x10(%eax)
08357b53 +0x0ed:  mov    0x8(%ebp),%eax
08357b56 +0x0f0:  mov    0x8(%eax),%eax
08357b59 +0x0f3:  test   %eax,%eax
08357b5b +0x0f5:  je     08357b81 <+0x11b>
08357b5d +0x0f7:  mov    0x8(%ebp),%eax
08357b60 +0x0fa:  mov    0x8(%eax),%ebx
08357b63 +0x0fd:  test   %ebx,%ebx
08357b65 +0x0ff:  je     08357b77 <+0x111>
08357b67 +0x101:  mov    %ebx,(%esp)
08357b6a +0x104:  call   0834f954 <_ZN15CMonsterManagerD1Ev>  ; CMonsterManager::~CMonsterManager()
08357b6f +0x109:  mov    %ebx,(%esp)
08357b72 +0x10c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357b77 +0x111:  mov    0x8(%ebp),%eax
08357b7a +0x114:  movl   $0x0,0x8(%eax)
08357b81 +0x11b:  mov    0x8(%ebp),%eax
08357b84 +0x11e:  mov    0x4(%eax),%eax
08357b87 +0x121:  test   %eax,%eax
08357b89 +0x123:  je     08357baf <+0x149>
08357b8b +0x125:  mov    0x8(%ebp),%eax
08357b8e +0x128:  mov    0x4(%eax),%ebx
08357b91 +0x12b:  test   %ebx,%ebx
08357b93 +0x12d:  je     08357ba5 <+0x13f>
08357b95 +0x12f:  mov    %ebx,(%esp)
08357b98 +0x132:  call   0834ef04 <_ZN8CMapListD1Ev>  ; CMapList::~CMapList()
08357b9d +0x137:  mov    %ebx,(%esp)
08357ba0 +0x13a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357ba5 +0x13f:  mov    0x8(%ebp),%eax
08357ba8 +0x142:  movl   $0x0,0x4(%eax)
08357baf +0x149:  mov    0x8(%ebp),%eax
08357bb2 +0x14c:  mov    (%eax),%eax
08357bb4 +0x14e:  test   %eax,%eax
08357bb6 +0x150:  je     08357bda <+0x174>
08357bb8 +0x152:  mov    0x8(%ebp),%eax
08357bbb +0x155:  mov    (%eax),%ebx
08357bbd +0x157:  test   %ebx,%ebx
08357bbf +0x159:  je     08357bd1 <+0x16b>
08357bc1 +0x15b:  mov    %ebx,(%esp)
08357bc4 +0x15e:  call   0834d334 <_ZN12CDungeonListD1Ev>  ; CDungeonList::~CDungeonList()
08357bc9 +0x163:  mov    %ebx,(%esp)
08357bcc +0x166:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357bd1 +0x16b:  mov    0x8(%ebp),%eax
08357bd4 +0x16e:  movl   $0x0,(%eax)
08357bda +0x174:  mov    0x8(%ebp),%eax
08357bdd +0x177:  mov    0x20(%eax),%eax
08357be0 +0x17a:  test   %eax,%eax
08357be2 +0x17c:  je     08357c08 <+0x1a2>
08357be4 +0x17e:  mov    0x8(%ebp),%eax
08357be7 +0x181:  mov    0x20(%eax),%ebx
08357bea +0x184:  test   %ebx,%ebx
08357bec +0x186:  je     08357bfe <+0x198>
08357bee +0x188:  mov    %ebx,(%esp)
08357bf1 +0x18b:  call   085462c6 <_ZN8WongWork12CItemUpgradeD1Ev>  ; WongWork::CItemUpgrade::~CItemUpgrade()
08357bf6 +0x190:  mov    %ebx,(%esp)
08357bf9 +0x193:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357bfe +0x198:  mov    0x8(%ebp),%eax
08357c01 +0x19b:  movl   $0x0,0x20(%eax)
08357c08 +0x1a2:  mov    0x8(%ebp),%eax
08357c0b +0x1a5:  mov    0x24(%eax),%eax
08357c0e +0x1a8:  test   %eax,%eax
08357c10 +0x1aa:  je     08357c36 <+0x1d0>
08357c12 +0x1ac:  mov    0x8(%ebp),%eax
08357c15 +0x1af:  mov    0x24(%eax),%ebx
08357c18 +0x1b2:  test   %ebx,%ebx
08357c1a +0x1b4:  je     08357c2c <+0x1c6>
08357c1c +0x1b6:  mov    %ebx,(%esp)
08357c1f +0x1b9:  call   0811e0be <_ZN8WongWork21CItemUpgrade_SeparateD1Ev>  ; WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate()
08357c24 +0x1be:  mov    %ebx,(%esp)
08357c27 +0x1c1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357c2c +0x1c6:  mov    0x8(%ebp),%eax
08357c2f +0x1c9:  movl   $0x0,0x24(%eax)
08357c36 +0x1d0:  mov    0x8(%ebp),%eax
08357c39 +0x1d3:  mov    0x28(%eax),%eax
08357c3c +0x1d6:  test   %eax,%eax
08357c3e +0x1d8:  je     08357c64 <+0x1fe>
08357c40 +0x1da:  mov    0x8(%ebp),%eax
08357c43 +0x1dd:  mov    0x28(%eax),%ebx
08357c46 +0x1e0:  test   %ebx,%ebx
08357c48 +0x1e2:  je     08357c5a <+0x1f4>
08357c4a +0x1e4:  mov    %ebx,(%esp)
08357c4d +0x1e7:  call   0837e1aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdc4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdc4a
08357c52 +0x1ec:  mov    %ebx,(%esp)
08357c55 +0x1ef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357c5a +0x1f4:  mov    0x8(%ebp),%eax
08357c5d +0x1f7:  movl   $0x0,0x28(%eax)
08357c64 +0x1fe:  mov    0x8(%ebp),%eax
08357c67 +0x201:  mov    0x8cc0(%eax),%eax
08357c6d +0x207:  test   %eax,%eax
08357c6f +0x209:  je     08357c9b <+0x235>
08357c71 +0x20b:  mov    0x8(%ebp),%eax
08357c74 +0x20e:  mov    0x8cc0(%eax),%ebx
08357c7a +0x214:  test   %ebx,%ebx
08357c7c +0x216:  je     08357c8e <+0x228>
08357c7e +0x218:  mov    %ebx,(%esp)
08357c81 +0x21b:  call   08374f0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeed8>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeed8
08357c86 +0x220:  mov    %ebx,(%esp)
08357c89 +0x223:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357c8e +0x228:  mov    0x8(%ebp),%eax
08357c91 +0x22b:  movl   $0x0,0x8cc0(%eax)
08357c9b +0x235:  mov    0x8(%ebp),%eax
08357c9e +0x238:  mov    0x86f4(%eax),%eax
08357ca4 +0x23e:  test   %eax,%eax
08357ca6 +0x240:  je     08357ce0 <+0x27a>
08357ca8 +0x242:  mov    0x8(%ebp),%eax
08357cab +0x245:  mov    0x86f4(%eax),%eax
08357cb1 +0x24b:  test   %eax,%eax
08357cb3 +0x24d:  je     08357cd3 <+0x26d>
08357cb5 +0x24f:  mov    0x8(%ebp),%eax
08357cb8 +0x252:  mov    0x86f4(%eax),%eax
08357cbe +0x258:  mov    (%eax),%eax
08357cc0 +0x25a:  add    $0x4,%eax
08357cc3 +0x25d:  mov    (%eax),%edx
08357cc5 +0x25f:  mov    0x8(%ebp),%eax
08357cc8 +0x262:  mov    0x86f4(%eax),%eax
08357cce +0x268:  mov    %eax,(%esp)
08357cd1 +0x26b:  call   *%edx
08357cd3 +0x26d:  mov    0x8(%ebp),%eax
08357cd6 +0x270:  movl   $0x0,0x86f4(%eax)
08357ce0 +0x27a:  mov    0x8(%ebp),%eax
08357ce3 +0x27d:  mov    0x869c(%eax),%eax
08357ce9 +0x283:  test   %eax,%eax
08357ceb +0x285:  je     08357d17 <+0x2b1>
08357ced +0x287:  mov    0x8(%ebp),%eax
08357cf0 +0x28a:  mov    0x869c(%eax),%ebx
08357cf6 +0x290:  test   %ebx,%ebx
08357cf8 +0x292:  je     08357d0a <+0x2a4>
08357cfa +0x294:  mov    %ebx,(%esp)
08357cfd +0x297:  call   08373d9e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdd6a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdd6a
08357d02 +0x29c:  mov    %ebx,(%esp)
08357d05 +0x29f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357d0a +0x2a4:  mov    0x8(%ebp),%eax
08357d0d +0x2a7:  movl   $0x0,0x869c(%eax)
08357d17 +0x2b1:  mov    0x8(%ebp),%eax
08357d1a +0x2b4:  mov    0x8cc4(%eax),%eax
08357d20 +0x2ba:  test   %eax,%eax
08357d22 +0x2bc:  je     08357d4e <+0x2e8>
08357d24 +0x2be:  mov    0x8(%ebp),%eax
08357d27 +0x2c1:  mov    0x8cc4(%eax),%ebx
08357d2d +0x2c7:  test   %ebx,%ebx
08357d2f +0x2c9:  je     08357d41 <+0x2db>
08357d31 +0x2cb:  mov    %ebx,(%esp)
08357d34 +0x2ce:  call   082f8144 <_ZN28CAutoMarketConditionsControlD1Ev>  ; CAutoMarketConditionsControl::~CAutoMarketConditionsControl()
08357d39 +0x2d3:  mov    %ebx,(%esp)
08357d3c +0x2d6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357d41 +0x2db:  mov    0x8(%ebp),%eax
08357d44 +0x2de:  movl   $0x0,0x8cc4(%eax)
08357d4e +0x2e8:  mov    0x8(%ebp),%eax
08357d51 +0x2eb:  mov    0xa8d0(%eax),%eax
08357d57 +0x2f1:  test   %eax,%eax
08357d59 +0x2f3:  je     08357d85 <+0x31f>
08357d5b +0x2f5:  mov    0x8(%ebp),%eax
08357d5e +0x2f8:  mov    0xa8d0(%eax),%ebx
08357d64 +0x2fe:  test   %ebx,%ebx
08357d66 +0x300:  je     08357d78 <+0x312>
08357d68 +0x302:  mov    %ebx,(%esp)
08357d6b +0x305:  call   083762a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5d48>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5d48
08357d70 +0x30a:  mov    %ebx,(%esp)
08357d73 +0x30d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357d78 +0x312:  mov    0x8(%ebp),%eax
08357d7b +0x315:  movl   $0x0,0xa8d0(%eax)
08357d85 +0x31f:  mov    0x8(%ebp),%eax
08357d88 +0x322:  mov    0xa8d4(%eax),%eax
08357d8e +0x328:  test   %eax,%eax
08357d90 +0x32a:  je     08357dbc <+0x356>
08357d92 +0x32c:  mov    0x8(%ebp),%eax
08357d95 +0x32f:  mov    0xa8d4(%eax),%ebx
08357d9b +0x335:  test   %ebx,%ebx
08357d9d +0x337:  je     08357daf <+0x349>
08357d9f +0x339:  mov    %ebx,(%esp)
08357da2 +0x33c:  call   08376106 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ba6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ba6
08357da7 +0x341:  mov    %ebx,(%esp)
08357daa +0x344:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357daf +0x349:  mov    0x8(%ebp),%eax
08357db2 +0x34c:  movl   $0x0,0xa8d4(%eax)
08357dbc +0x356:  mov    0x8(%ebp),%eax
08357dbf +0x359:  mov    0x4d40(%eax),%eax
08357dc5 +0x35f:  test   %eax,%eax
08357dc7 +0x361:  je     08357df3 <+0x38d>
08357dc9 +0x363:  mov    0x8(%ebp),%eax
08357dcc +0x366:  mov    0x4d40(%eax),%ebx
08357dd2 +0x36c:  test   %ebx,%ebx
08357dd4 +0x36e:  je     08357de6 <+0x380>
08357dd6 +0x370:  mov    %ebx,(%esp)
08357dd9 +0x373:  call   08374e20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xedec>  ; global constructors keyed to CServerEvent::m_nExpRate+0xedec
08357dde +0x378:  mov    %ebx,(%esp)
08357de1 +0x37b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357de6 +0x380:  mov    0x8(%ebp),%eax
08357de9 +0x383:  movl   $0x0,0x4d40(%eax)
08357df3 +0x38d:  mov    0x8(%ebp),%eax
08357df6 +0x390:  mov    0x6390(%eax),%eax
08357dfc +0x396:  test   %eax,%eax
08357dfe +0x398:  je     08357e2a <+0x3c4>
08357e00 +0x39a:  mov    0x8(%ebp),%eax
08357e03 +0x39d:  mov    0x6390(%eax),%ebx
08357e09 +0x3a3:  test   %ebx,%ebx
08357e0b +0x3a5:  je     08357e1d <+0x3b7>
08357e0d +0x3a7:  mov    %ebx,(%esp)
08357e10 +0x3aa:  call   08a9da28 <_ZN13StrikerScriptD1Ev>  ; StrikerScript::~StrikerScript()
08357e15 +0x3af:  mov    %ebx,(%esp)
08357e18 +0x3b2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357e1d +0x3b7:  mov    0x8(%ebp),%eax
08357e20 +0x3ba:  movl   $0x0,0x6390(%eax)
08357e2a +0x3c4:  mov    0x8(%ebp),%eax
08357e2d +0x3c7:  mov    0x6394(%eax),%eax
08357e33 +0x3cd:  test   %eax,%eax
08357e35 +0x3cf:  je     08357e61 <+0x3fb>
08357e37 +0x3d1:  mov    0x8(%ebp),%eax
08357e3a +0x3d4:  mov    0x6394(%eax),%ebx
08357e40 +0x3da:  test   %ebx,%ebx
08357e42 +0x3dc:  je     08357e54 <+0x3ee>
08357e44 +0x3de:  mov    %ebx,(%esp)
08357e47 +0x3e1:  call   088e07f6 <_ZN18CharacManageScriptD1Ev>  ; CharacManageScript::~CharacManageScript()
08357e4c +0x3e6:  mov    %ebx,(%esp)
08357e4f +0x3e9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357e54 +0x3ee:  mov    0x8(%ebp),%eax
08357e57 +0x3f1:  movl   $0x0,0x6394(%eax)
08357e61 +0x3fb:  mov    0x8(%ebp),%eax
08357e64 +0x3fe:  mov    0xb4a8(%eax),%eax
08357e6a +0x404:  test   %eax,%eax
08357e6c +0x406:  je     08357e8b <+0x425>
08357e6e +0x408:  mov    0x8(%ebp),%eax
08357e71 +0x40b:  mov    0xb4a8(%eax),%ebx
08357e77 +0x411:  test   %ebx,%ebx
08357e79 +0x413:  je     08357e8b <+0x425>
08357e7b +0x415:  mov    %ebx,(%esp)
08357e7e +0x418:  call   0837e354 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xddf4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xddf4
08357e83 +0x41d:  mov    %ebx,(%esp)
08357e86 +0x420:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08357e8b +0x425:  mov    0x8(%ebp),%eax
08357e8e +0x428:  movl   $0x0,0xb4a8(%eax)
08357e98 +0x432:  add    $0x14,%esp
08357e9b +0x435:  pop    %ebx
08357e9c +0x436:  pop    %ebp
08357e9d +0x437:  ret
```

## 反编译 C

```c
// CDataManager::destroy @ 0x8357a66

/* CDataManager::destroy() */

void __thiscall CDataManager::destroy(CDataManager *this)

{
  DisJoint *this_00;
  CCharacList *this_01;
  QuestList *this_02;
  CItemList *this_03;
  CSkillList *this_04;
  CMonsterManager *this_05;
  CMapList *this_06;
  CDungeonList *this_07;
  CItemUpgrade *this_08;
  CItemUpgrade_Separate *this_09;
  CChattingEmoticonList *this_10;
  CItemGeneratorMgr *this_11;
  CAICharacterList *this_12;
  CAutoMarketConditionsControl *this_13;
  CNPCScriptList *this_14;
  CNPCDynamicInfoManager *this_15;
  CItemLimitEditionMgr *this_16;
  StrikerScript *this_17;
  CharacManageScript *this_18;
  BlueMarbleScriptManager *this_19;
  
  if (*(int *)(this + 0x1c) != 0) {
    this_00 = *(DisJoint **)(this + 0x1c);
    if (this_00 != (DisJoint *)0x0) {
      DisJoint::~DisJoint(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x14) != 0) {
    this_01 = *(CCharacList **)(this + 0x14);
    if (this_01 != (CCharacList *)0x0) {
      CCharacList::~CCharacList(this_01);
      operator_delete(this_01);
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    this_02 = *(QuestList **)(this + 0x18);
    if (this_02 != (QuestList *)0x0) {
      QuestList::~QuestList(this_02);
      operator_delete(this_02);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    this_03 = *(CItemList **)(this + 0xc);
    if (this_03 != (CItemList *)0x0) {
      CItemList::~CItemList(this_03);
      operator_delete(this_03);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    this_04 = *(CSkillList **)(this + 0x10);
    if (this_04 != (CSkillList *)0x0) {
      CSkillList::~CSkillList(this_04);
      operator_delete(this_04);
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    this_05 = *(CMonsterManager **)(this + 8);
    if (this_05 != (CMonsterManager *)0x0) {
      CMonsterManager::~CMonsterManager(this_05);
      operator_delete(this_05);
    }
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    this_06 = *(CMapList **)(this + 4);
    if (this_06 != (CMapList *)0x0) {
      CMapList::~CMapList(this_06);
      operator_delete(this_06);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  if (*(int *)this != 0) {
    this_07 = *(CDungeonList **)this;
    if (this_07 != (CDungeonList *)0x0) {
      CDungeonList::~CDungeonList(this_07);
      operator_delete(this_07);
    }
    *(undefined4 *)this = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    this_08 = *(CItemUpgrade **)(this + 0x20);
    if (this_08 != (CItemUpgrade *)0x0) {
      WongWork::CItemUpgrade::~CItemUpgrade(this_08);
      operator_delete(this_08);
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    this_09 = *(CItemUpgrade_Separate **)(this + 0x24);
    if (this_09 != (CItemUpgrade_Separate *)0x0) {
      WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate(this_09);
      operator_delete(this_09);
    }
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    this_10 = *(CChattingEmoticonList **)(this + 0x28);
    if (this_10 != (CChattingEmoticonList *)0x0) {
      CChattingEmoticonList::~CChattingEmoticonList(this_10);
      operator_delete(this_10);
    }
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x8cc0) != 0) {
    this_11 = *(CItemGeneratorMgr **)(this + 0x8cc0);
    if (this_11 != (CItemGeneratorMgr *)0x0) {
      WongWork::CItemGeneratorMgr::~CItemGeneratorMgr(this_11);
      operator_delete(this_11);
    }
    *(undefined4 *)(this + 0x8cc0) = 0;
  }
  if (*(int *)(this + 0x86f4) != 0) {
    if (*(int *)(this + 0x86f4) != 0) {
      (**(code **)(**(int **)(this + 0x86f4) + 4))(*(undefined4 *)(this + 0x86f4));
    }
    *(undefined4 *)(this + 0x86f4) = 0;
  }
  if (*(int *)(this + 0x869c) != 0) {
    this_12 = *(CAICharacterList **)(this + 0x869c);
    if (this_12 != (CAICharacterList *)0x0) {
      CAICharacterList::~CAICharacterList(this_12);
      operator_delete(this_12);
    }
    *(undefined4 *)(this + 0x869c) = 0;
  }
  if (*(int *)(this + 0x8cc4) != 0) {
    this_13 = *(CAutoMarketConditionsControl **)(this + 0x8cc4);
    if (this_13 != (CAutoMarketConditionsControl *)0x0) {
      CAutoMarketConditionsControl::~CAutoMarketConditionsControl(this_13);
      operator_delete(this_13);
    }
    *(undefined4 *)(this + 0x8cc4) = 0;
  }
  if (*(int *)(this + 0xa8d0) != 0) {
    this_14 = *(CNPCScriptList **)(this + 0xa8d0);
    if (this_14 != (CNPCScriptList *)0x0) {
      CNPCScriptList::~CNPCScriptList(this_14);
      operator_delete(this_14);
    }
    *(undefined4 *)(this + 0xa8d0) = 0;
  }
  if (*(int *)(this + 0xa8d4) != 0) {
    this_15 = *(CNPCDynamicInfoManager **)(this + 0xa8d4);
    if (this_15 != (CNPCDynamicInfoManager *)0x0) {
      CNPCDynamicInfoManager::~CNPCDynamicInfoManager(this_15);
      operator_delete(this_15);
    }
    *(undefined4 *)(this + 0xa8d4) = 0;
  }
  if (*(int *)(this + 0x4d40) != 0) {
    this_16 = *(CItemLimitEditionMgr **)(this + 0x4d40);
    if (this_16 != (CItemLimitEditionMgr *)0x0) {
      CItemLimitEditionMgr::~CItemLimitEditionMgr(this_16);
      operator_delete(this_16);
    }
    *(undefined4 *)(this + 0x4d40) = 0;
  }
  if (*(int *)(this + 0x6390) != 0) {
    this_17 = *(StrikerScript **)(this + 0x6390);
    if (this_17 != (StrikerScript *)0x0) {
      StrikerScript::~StrikerScript(this_17);
      operator_delete(this_17);
    }
    *(undefined4 *)(this + 0x6390) = 0;
  }
  if (*(int *)(this + 0x6394) != 0) {
    this_18 = *(CharacManageScript **)(this + 0x6394);
    if (this_18 != (CharacManageScript *)0x0) {
      CharacManageScript::~CharacManageScript(this_18);
      operator_delete(this_18);
    }
    *(undefined4 *)(this + 0x6394) = 0;
  }
  if ((*(int *)(this + 0xb4a8) != 0) &&
     (this_19 = *(BlueMarbleScriptManager **)(this + 0xb4a8),
     this_19 != (BlueMarbleScriptManager *)0x0)) {
    BlueMarbleScriptManager::~BlueMarbleScriptManager(this_19);
    operator_delete(this_19);
  }
  *(undefined4 *)(this + 0xb4a8) = 0;
  return;
}
```
