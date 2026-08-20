# CDataManager

`_ZN12CDataManagerC1Ev`

`CDataManager::CDataManager()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08355b30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355b30  _ZN12CDataManagerC1Ev
#           CDataManager::CDataManager()
# range [0x08355b30, 0x08356b63]
08355b30 +0x0000:  push   %ebp
08355b31 +0x0001:  mov    %esp,%ebp
08355b33 +0x0003:  push   %edi
08355b34 +0x0004:  push   %esi
08355b35 +0x0005:  push   %ebx
08355b36 +0x0006:  sub    $0x2c,%esp
08355b39 +0x0009:  mov    0x8(%ebp),%eax
08355b3c +0x000c:  add    $0x2c,%eax
08355b3f +0x000f:  mov    %eax,(%esp)
08355b42 +0x0012:  call   08370742 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xa70e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xa70e
08355b47 +0x0017:  mov    0x8(%ebp),%eax
08355b4a +0x001a:  add    $0x68,%eax
08355b4d +0x001d:  mov    %eax,(%esp)
08355b50 +0x0020:  call   0836fca4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x9c70>  ; global constructors keyed to CServerEvent::m_nExpRate+0x9c70
08355b55 +0x0025:  mov    0x8(%ebp),%eax
08355b58 +0x0028:  add    $0x4a5c,%eax
08355b5d +0x002d:  mov    %eax,(%esp)
08355b60 +0x0030:  call   083732f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd2bc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd2bc
08355b65 +0x0035:  mov    0x8(%ebp),%eax
08355b68 +0x0038:  add    $0x4af4,%eax
08355b6d +0x003d:  mov    %eax,(%esp)
08355b70 +0x0040:  call   0837c27a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbd1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbd1a
08355b75 +0x0045:  mov    0x8(%ebp),%eax
08355b78 +0x0048:  add    $0x4b18,%eax
08355b7d +0x004d:  mov    %eax,(%esp)
08355b80 +0x0050:  call   08371422 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb3ee>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb3ee
08355b85 +0x0055:  mov    0x8(%ebp),%eax
08355b88 +0x0058:  add    $0x4b70,%eax
08355b8d +0x005d:  mov    %eax,(%esp)
08355b90 +0x0060:  call   08372ef4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xcec0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xcec0
08355b95 +0x0065:  mov    0x8(%ebp),%eax
08355b98 +0x0068:  add    $0x4bac,%eax
08355b9d +0x006d:  mov    %eax,(%esp)
08355ba0 +0x0070:  call   08372fbc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xcf88>  ; global constructors keyed to CServerEvent::m_nExpRate+0xcf88
08355ba5 +0x0075:  mov    0x8(%ebp),%eax
08355ba8 +0x0078:  add    $0x4bd4,%eax
08355bad +0x007d:  mov    %eax,(%esp)
08355bb0 +0x0080:  call   08373042 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd00e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd00e
08355bb5 +0x0085:  mov    0x8(%ebp),%eax
08355bb8 +0x0088:  add    $0x4bec,%eax
08355bbd +0x008d:  mov    %eax,(%esp)
08355bc0 +0x0090:  call   08373098 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd064>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd064
08355bc5 +0x0095:  mov    0x8(%ebp),%eax
08355bc8 +0x0098:  add    $0x4c04,%eax
08355bcd +0x009d:  mov    %eax,(%esp)
08355bd0 +0x00a0:  call   083730ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd0ba>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd0ba
08355bd5 +0x00a5:  mov    0x8(%ebp),%eax
08355bd8 +0x00a8:  add    $0x4c50,%eax
08355bdd +0x00ad:  mov    %eax,(%esp)
08355be0 +0x00b0:  call   083731ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd196>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd196
08355be5 +0x00b5:  mov    0x8(%ebp),%eax
08355be8 +0x00b8:  add    $0x4ca8,%eax
08355bed +0x00bd:  mov    %eax,(%esp)
08355bf0 +0x00c0:  call   0837c53c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbfdc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbfdc
08355bf5 +0x00c5:  mov    0x8(%ebp),%eax
08355bf8 +0x00c8:  add    $0x4cf8,%eax
08355bfd +0x00cd:  mov    %eax,(%esp)
08355c00 +0x00d0:  call   0837c736 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc1d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc1d6
08355c05 +0x00d5:  mov    0x8(%ebp),%eax
08355c08 +0x00d8:  add    $0x4d1c,%eax
08355c0d +0x00dd:  mov    %eax,(%esp)
08355c10 +0x00e0:  call   0839205a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21afa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21afa
08355c15 +0x00e5:  mov    0x8(%ebp),%eax
08355c18 +0x00e8:  add    $0x4d28,%eax
08355c1d +0x00ed:  mov    %eax,(%esp)
08355c20 +0x00f0:  call   0890ce20 <_ZN24CNPCRelationEventManagerC1Ev>  ; CNPCRelationEventManager::CNPCRelationEventManager()
08355c25 +0x00f5:  mov    0x8(%ebp),%eax
08355c28 +0x00f8:  add    $0x4d44,%eax
08355c2d +0x00fd:  mov    %eax,(%esp)
08355c30 +0x0100:  call   08370c4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xac18>  ; global constructors keyed to CServerEvent::m_nExpRate+0xac18
08355c35 +0x0105:  mov    0x8(%ebp),%eax
08355c38 +0x0108:  add    $0x4d5c,%eax
08355c3d +0x010d:  mov    %eax,(%esp)
08355c40 +0x0110:  call   0837c810 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc2b0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc2b0
08355c45 +0x0115:  mov    0x8(%ebp),%eax
08355c48 +0x0118:  add    $0x4d98,%eax
08355c4d +0x011d:  mov    %eax,(%esp)
08355c50 +0x0120:  call   0837c8c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc366>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc366
08355c55 +0x0125:  mov    0x8(%ebp),%eax
08355c58 +0x0128:  add    $0x4de8,%eax
08355c5d +0x012d:  mov    %eax,(%esp)
08355c60 +0x0130:  call   0837c9ac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc44c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc44c
08355c65 +0x0135:  mov    0x8(%ebp),%eax
08355c68 +0x0138:  add    $0x4df8,%eax
08355c6d +0x013d:  mov    %eax,(%esp)
08355c70 +0x0140:  call   083724f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc4bc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc4bc
08355c75 +0x0145:  mov    0x8(%ebp),%eax
08355c78 +0x0148:  add    $0x4e10,%eax
08355c7d +0x014d:  mov    %eax,(%esp)
08355c80 +0x0150:  call   08372904 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc8d0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc8d0
08355c85 +0x0155:  mov    0x8(%ebp),%eax
08355c88 +0x0158:  add    $0x5040,%eax
08355c8d +0x015d:  mov    %eax,(%esp)
08355c90 +0x0160:  call   085f8496 <_ZN15RegenerationROIC1Ev>  ; RegenerationROI::RegenerationROI()
08355c95 +0x0165:  mov    0x8(%ebp),%eax
08355c98 +0x0168:  add    $0x5094,%eax
08355c9d +0x016d:  mov    %eax,(%esp)
08355ca0 +0x0170:  call   0837ce24 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8c4
08355ca5 +0x0175:  mov    0x8(%ebp),%eax
08355ca8 +0x0178:  add    $0x50ac,%eax
08355cad +0x017d:  mov    %eax,(%esp)
08355cb0 +0x0180:  call   08371194 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb160>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb160
08355cb5 +0x0185:  mov    0x8(%ebp),%eax
08355cb8 +0x0188:  add    $0x50c4,%eax
08355cbd +0x018d:  mov    %eax,(%esp)
08355cc0 +0x0190:  call   0837114a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb116>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb116
08355cc5 +0x0195:  mov    0x8(%ebp),%eax
08355cc8 +0x0198:  add    $0x5108,%eax
08355ccd +0x019d:  mov    %eax,(%esp)
08355cd0 +0x01a0:  call   08370eba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xae86>  ; global constructors keyed to CServerEvent::m_nExpRate+0xae86
08355cd5 +0x01a5:  mov    0x8(%ebp),%eax
08355cd8 +0x01a8:  add    $0x5180,%eax
08355cdd +0x01ad:  mov    %eax,(%esp)
08355ce0 +0x01b0:  call   083921c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21c60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21c60
08355ce5 +0x01b5:  mov    0x8(%ebp),%eax
08355ce8 +0x01b8:  add    $0x5198,%eax
08355ced +0x01bd:  mov    %eax,(%esp)
08355cf0 +0x01c0:  call   08370970 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xa93c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xa93c
08355cf5 +0x01c5:  mov    0x8(%ebp),%eax
08355cf8 +0x01c8:  add    $0x5e30,%eax
08355cfd +0x01cd:  mov    %eax,(%esp)
08355d00 +0x01d0:  call   08370a3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xaa06>  ; global constructors keyed to CServerEvent::m_nExpRate+0xaa06
08355d05 +0x01d5:  mov    0x8(%ebp),%eax
08355d08 +0x01d8:  add    $0x61a0,%eax
08355d0d +0x01dd:  mov    %eax,(%esp)
08355d10 +0x01e0:  call   0837cf1e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9be>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9be
08355d15 +0x01e5:  mov    0x8(%ebp),%eax
08355d18 +0x01e8:  add    $0x61ac,%eax
08355d1d +0x01ed:  mov    %eax,(%esp)
08355d20 +0x01f0:  call   0837227e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc24a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc24a
08355d25 +0x01f5:  mov    0x8(%ebp),%eax
08355d28 +0x01f8:  add    $0x6224,%eax
08355d2d +0x01fd:  mov    %eax,(%esp)
08355d30 +0x0200:  call   0837227e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc24a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc24a
08355d35 +0x0205:  mov    0x8(%ebp),%eax
08355d38 +0x0208:  add    $0x629c,%eax
08355d3d +0x020d:  mov    %eax,(%esp)
08355d40 +0x0210:  call   0837cf46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9e6
08355d45 +0x0215:  mov    0x8(%ebp),%eax
08355d48 +0x0218:  add    $0x62d0,%eax
08355d4d +0x021d:  mov    %eax,(%esp)
08355d50 +0x0220:  call   08899e1c <_ZN12advancealtar22StageTimeLineParameterC1Ev>  ; advancealtar::StageTimeLineParameter::StageTimeLineParameter()
08355d55 +0x0225:  mov    0x8(%ebp),%eax
08355d58 +0x0228:  add    $0x631c,%eax
08355d5d +0x022d:  mov    %eax,(%esp)
08355d60 +0x0230:  call   088a0f5c <_ZN12advancealtar25AdvanceAltarShopParameterC1Ev>  ; advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()
08355d65 +0x0235:  mov    0x8(%ebp),%eax
08355d68 +0x0238:  add    $0x634c,%eax
08355d6d +0x023d:  mov    %eax,(%esp)
08355d70 +0x0240:  call   0889af74 <_ZN12advancealtar15RewardParameterC1Ev>  ; advancealtar::RewardParameter::RewardParameter()
08355d75 +0x0245:  mov    0x8(%ebp),%eax
08355d78 +0x0248:  add    $0x6364,%eax
08355d7d +0x024d:  mov    %eax,(%esp)
08355d80 +0x0250:  call   0889b662 <_ZN12advancealtar15ConfigParameterC1Ev>  ; advancealtar::ConfigParameter::ConfigParameter()
08355d85 +0x0255:  mov    0x8(%ebp),%eax
08355d88 +0x0258:  add    $0x6398,%eax
08355d8d +0x025d:  mov    %eax,(%esp)
08355d90 +0x0260:  call   083710d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb0a0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb0a0
08355d95 +0x0265:  mov    0x8(%ebp),%eax
08355d98 +0x0268:  lea    0x6734(%eax),%esi
08355d9e +0x026e:  mov    %esi,%edi
08355da0 +0x0270:  mov    $0xc8,%ebx
08355da5 +0x0275:  jmp    08355db5 <+0x285>
08355da7 +0x0277:  mov    %edi,(%esp)
08355daa +0x027a:  call   08374ec8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xee94>  ; global constructors keyed to CServerEvent::m_nExpRate+0xee94
08355daf +0x027f:  add    $0x14,%edi
08355db2 +0x0282:  sub    $0x1,%ebx
08355db5 +0x0285:  cmp    $0xffffffff,%ebx
08355db8 +0x0288:  setne  %al
08355dbb +0x028b:  test   %al,%al
08355dbd +0x028d:  jne    08355da7 <+0x277>
08355dbf +0x028f:  jmp    08355dfb <+0x2cb>
08355dc1 +0x0291:  mov    %edx,%edi
08355dc3 +0x0293:  mov    %eax,-0x24(%ebp)
08355dc6 +0x0296:  test   %esi,%esi
08355dc8 +0x0298:  je     08355df1 <+0x2c1>
08355dca +0x029a:  mov    $0xc8,%eax
08355dcf +0x029f:  sub    %ebx,%eax
08355dd1 +0x02a1:  mov    %eax,%edx
08355dd3 +0x02a3:  mov    %edx,%eax
08355dd5 +0x02a5:  shl    $0x2,%eax
08355dd8 +0x02a8:  add    %edx,%eax
08355dda +0x02aa:  shl    $0x2,%eax
08355ddd +0x02ad:  lea    (%esi,%eax,1),%ebx
08355de0 +0x02b0:  cmp    %esi,%ebx
08355de2 +0x02b2:  je     08355df1 <+0x2c1>
08355de4 +0x02b4:  sub    $0x14,%ebx
08355de7 +0x02b7:  mov    %ebx,(%esp)
08355dea +0x02ba:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
08355def +0x02bf:  jmp    08355de0 <+0x2b0>
08355df1 +0x02c1:  mov    -0x24(%ebp),%eax
08355df4 +0x02c4:  mov    %edi,%edx
08355df6 +0x02c6:  jmp    083567d8 <+0xca8>
08355dfb +0x02cb:  mov    0x8(%ebp),%eax
08355dfe +0x02ce:  lea    0x76e8(%eax),%esi
08355e04 +0x02d4:  mov    %esi,%edi
08355e06 +0x02d6:  mov    $0xc8,%ebx
08355e0b +0x02db:  jmp    08355e1b <+0x2eb>
08355e0d +0x02dd:  mov    %edi,(%esp)
08355e10 +0x02e0:  call   08374ec8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xee94>  ; global constructors keyed to CServerEvent::m_nExpRate+0xee94
08355e15 +0x02e5:  add    $0x14,%edi
08355e18 +0x02e8:  sub    $0x1,%ebx
08355e1b +0x02eb:  cmp    $0xffffffff,%ebx
08355e1e +0x02ee:  setne  %al
08355e21 +0x02f1:  test   %al,%al
08355e23 +0x02f3:  jne    08355e0d <+0x2dd>
08355e25 +0x02f5:  jmp    08355e61 <+0x331>
08355e27 +0x02f7:  mov    %edx,%edi
08355e29 +0x02f9:  mov    %eax,-0x20(%ebp)
08355e2c +0x02fc:  test   %esi,%esi
08355e2e +0x02fe:  je     08355e57 <+0x327>
08355e30 +0x0300:  mov    $0xc8,%eax
08355e35 +0x0305:  sub    %ebx,%eax
08355e37 +0x0307:  mov    %eax,%edx
08355e39 +0x0309:  mov    %edx,%eax
08355e3b +0x030b:  shl    $0x2,%eax
08355e3e +0x030e:  add    %edx,%eax
08355e40 +0x0310:  shl    $0x2,%eax
08355e43 +0x0313:  lea    (%esi,%eax,1),%ebx
08355e46 +0x0316:  cmp    %esi,%ebx
08355e48 +0x0318:  je     08355e57 <+0x327>
08355e4a +0x031a:  sub    $0x14,%ebx
08355e4d +0x031d:  mov    %ebx,(%esp)
08355e50 +0x0320:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
08355e55 +0x0325:  jmp    08355e46 <+0x316>
08355e57 +0x0327:  mov    -0x20(%ebp),%eax
08355e5a +0x032a:  mov    %edi,%edx
08355e5c +0x032c:  jmp    0835679d <+0xc6d>
08355e61 +0x0331:  mov    0x8(%ebp),%eax
08355e64 +0x0334:  add    $0x86a0,%eax
08355e69 +0x0339:  mov    %eax,(%esp)
08355e6c +0x033c:  call   0837d08e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb2e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb2e
08355e71 +0x0341:  mov    0x8(%ebp),%eax
08355e74 +0x0344:  add    $0x86c4,%eax
08355e79 +0x0349:  mov    %eax,(%esp)
08355e7c +0x034c:  call   0837d168 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcc08>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcc08
08355e81 +0x0351:  mov    0x8(%ebp),%eax
08355e84 +0x0354:  add    $0x86f8,%eax
08355e89 +0x0359:  mov    %eax,(%esp)
08355e8c +0x035c:  call   08385006 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x14aa6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x14aa6
08355e91 +0x0361:  mov    0x8(%ebp),%eax
08355e94 +0x0364:  add    $0x8710,%eax
08355e99 +0x0369:  mov    %eax,(%esp)
08355e9c +0x036c:  call   083711fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb1ca>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb1ca
08355ea1 +0x0371:  mov    0x8(%ebp),%eax
08355ea4 +0x0374:  add    $0x8740,%eax
08355ea9 +0x0379:  mov    %eax,(%esp)
08355eac +0x037c:  call   0837d312 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcdb2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcdb2
08355eb1 +0x0381:  mov    0x8(%ebp),%eax
08355eb4 +0x0384:  add    $0x8770,%eax
08355eb9 +0x0389:  mov    %eax,(%esp)
08355ebc +0x038c:  call   083712a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb274>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb274
08355ec1 +0x0391:  mov    0x8(%ebp),%eax
08355ec4 +0x0394:  add    $0x8780,%eax
08355ec9 +0x0399:  mov    %eax,(%esp)
08355ecc +0x039c:  call   0837480a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe7d6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe7d6
08355ed1 +0x03a1:  mov    0x8(%ebp),%eax
08355ed4 +0x03a4:  add    $0x8798,%eax
08355ed9 +0x03a9:  mov    %eax,(%esp)
08355edc +0x03ac:  call   08374874 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe840>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe840
08355ee1 +0x03b1:  mov    0x8(%ebp),%eax
08355ee4 +0x03b4:  add    $0x87b4,%eax
08355ee9 +0x03b9:  mov    %eax,(%esp)
08355eec +0x03bc:  call   083708c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xa892>  ; global constructors keyed to CServerEvent::m_nExpRate+0xa892
08355ef1 +0x03c1:  mov    0x8(%ebp),%eax
08355ef4 +0x03c4:  add    $0x8cb8,%eax
08355ef9 +0x03c9:  mov    %eax,(%esp)
08355efc +0x03cc:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08355f01 +0x03d1:  mov    0x8(%ebp),%eax
08355f04 +0x03d4:  add    $0x8cc8,%eax
08355f09 +0x03d9:  mov    %eax,(%esp)
08355f0c +0x03dc:  call   0836f1c2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x918e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x918e
08355f11 +0x03e1:  mov    0x8(%ebp),%eax
08355f14 +0x03e4:  add    $0x8d34,%eax
08355f19 +0x03e9:  mov    %eax,(%esp)
08355f1c +0x03ec:  call   08371cc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xbc94>  ; global constructors keyed to CServerEvent::m_nExpRate+0xbc94
08355f21 +0x03f1:  mov    0x8(%ebp),%eax
08355f24 +0x03f4:  lea    0xa1c4(%eax),%esi
08355f2a +0x03fa:  mov    %esi,%edi
08355f2c +0x03fc:  mov    $0x45,%ebx
08355f31 +0x0401:  jmp    08355f41 <+0x411>
08355f33 +0x0403:  mov    %edi,(%esp)
08355f36 +0x0406:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08355f3b +0x040b:  add    $0xc,%edi
08355f3e +0x040e:  sub    $0x1,%ebx
08355f41 +0x0411:  cmp    $0xffffffff,%ebx
08355f44 +0x0414:  setne  %al
08355f47 +0x0417:  test   %al,%al
08355f49 +0x0419:  jne    08355f33 <+0x403>
08355f4b +0x041b:  jmp    08355f86 <+0x456>
08355f4d +0x041d:  mov    %edx,%edi
08355f4f +0x041f:  mov    %eax,-0x1c(%ebp)
08355f52 +0x0422:  test   %esi,%esi
08355f54 +0x0424:  je     08355f7c <+0x44c>
08355f56 +0x0426:  mov    $0x45,%eax
08355f5b +0x042b:  sub    %ebx,%eax
08355f5d +0x042d:  mov    %eax,%edx
08355f5f +0x042f:  mov    %edx,%eax
08355f61 +0x0431:  add    %eax,%eax
08355f63 +0x0433:  add    %edx,%eax
08355f65 +0x0435:  shl    $0x2,%eax
08355f68 +0x0438:  lea    (%esi,%eax,1),%ebx
08355f6b +0x043b:  cmp    %esi,%ebx
08355f6d +0x043d:  je     08355f7c <+0x44c>
08355f6f +0x043f:  sub    $0xc,%ebx
08355f72 +0x0442:  mov    %ebx,(%esp)
08355f75 +0x0445:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08355f7a +0x044a:  jmp    08355f6b <+0x43b>
08355f7c +0x044c:  mov    -0x1c(%ebp),%eax
08355f7f +0x044f:  mov    %edi,%edx
08355f81 +0x0451:  jmp    0835662a <+0xafa>
08355f86 +0x0456:  mov    0x8(%ebp),%eax
08355f89 +0x0459:  add    $0xa50c,%eax
08355f8e +0x045e:  mov    %eax,(%esp)
08355f91 +0x0461:  call   0837058a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xa556>  ; global constructors keyed to CServerEvent::m_nExpRate+0xa556
08355f96 +0x0466:  mov    0x8(%ebp),%eax
08355f99 +0x0469:  add    $0xa628,%eax
08355f9e +0x046e:  mov    %eax,(%esp)
08355fa1 +0x0471:  call   08371a26 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb9f2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb9f2
08355fa6 +0x0476:  mov    0x8(%ebp),%eax
08355fa9 +0x0479:  add    $0xa700,%eax
08355fae +0x047e:  mov    %eax,(%esp)
08355fb1 +0x0481:  call   083720f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc0c0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc0c0
08355fb6 +0x0486:  mov    0x8(%ebp),%eax
08355fb9 +0x0489:  add    $0xa788,%eax
08355fbe +0x048e:  mov    %eax,(%esp)
08355fc1 +0x0491:  call   0837d828 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd2c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd2c8
08355fc6 +0x0496:  mov    0x8(%ebp),%eax
08355fc9 +0x0499:  add    $0xa7e0,%eax
08355fce +0x049e:  mov    %eax,(%esp)
08355fd1 +0x04a1:  call   08372480 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc44c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc44c
08355fd6 +0x04a6:  mov    0x8(%ebp),%eax
08355fd9 +0x04a9:  add    $0xa800,%eax
08355fde +0x04ae:  mov    %eax,(%esp)
08355fe1 +0x04b1:  call   08371eee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xbeba>  ; global constructors keyed to CServerEvent::m_nExpRate+0xbeba
08355fe6 +0x04b6:  mov    0x8(%ebp),%eax
08355fe9 +0x04b9:  add    $0xa86c,%eax
08355fee +0x04be:  mov    %eax,(%esp)
08355ff1 +0x04c1:  call   08371fde <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xbfaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xbfaa
08355ff6 +0x04c6:  mov    0x8(%ebp),%eax
08355ff9 +0x04c9:  add    $0xa884,%eax
08355ffe +0x04ce:  mov    %eax,(%esp)
08356001 +0x04d1:  call   08372d46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xcd12>  ; global constructors keyed to CServerEvent::m_nExpRate+0xcd12
08356006 +0x04d6:  mov    0x8(%ebp),%eax
08356009 +0x04d9:  add    $0xa8c0,%eax
0835600e +0x04de:  mov    %eax,(%esp)
08356011 +0x04e1:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08356016 +0x04e6:  mov    0x8(%ebp),%eax
08356019 +0x04e9:  add    $0xa8c4,%eax
0835601e +0x04ee:  mov    %eax,(%esp)
08356021 +0x04f1:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08356026 +0x04f6:  mov    0x8(%ebp),%eax
08356029 +0x04f9:  add    $0xa8c8,%eax
0835602e +0x04fe:  mov    %eax,(%esp)
08356031 +0x0501:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08356036 +0x0506:  mov    0x8(%ebp),%eax
08356039 +0x0509:  add    $0xa8cc,%eax
0835603e +0x050e:  mov    %eax,(%esp)
08356041 +0x0511:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08356046 +0x0516:  mov    0x8(%ebp),%eax
08356049 +0x0519:  add    $0xa8dc,%eax
0835604e +0x051e:  mov    %eax,(%esp)
08356051 +0x0521:  call   08373328 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd2f4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd2f4
08356056 +0x0526:  mov    0x8(%ebp),%eax
08356059 +0x0529:  add    $0xa928,%eax
0835605e +0x052e:  mov    %eax,(%esp)
08356061 +0x0531:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
08356066 +0x0536:  mov    0x8(%ebp),%eax
08356069 +0x0539:  add    $0xa940,%eax
0835606e +0x053e:  mov    %eax,(%esp)
08356071 +0x0541:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
08356076 +0x0546:  mov    0x8(%ebp),%eax
08356079 +0x0549:  add    $0xb3f4,%eax
0835607e +0x054e:  mov    %eax,(%esp)
08356081 +0x0551:  call   0837dc56 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd6f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd6f6
08356086 +0x0556:  mov    0x8(%ebp),%eax
08356089 +0x0559:  add    $0xb424,%eax
0835608e +0x055e:  mov    %eax,(%esp)
08356091 +0x0561:  call   08392740 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x221e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x221e0
08356096 +0x0566:  mov    0x8(%ebp),%eax
08356099 +0x0569:  add    $0xb430,%eax
0835609e +0x056e:  mov    %eax,(%esp)
083560a1 +0x0571:  call   08370912 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xa8de>  ; global constructors keyed to CServerEvent::m_nExpRate+0xa8de
083560a6 +0x0576:  mov    0x8(%ebp),%eax
083560a9 +0x0579:  add    $0xb458,%eax
083560ae +0x057e:  mov    %eax,(%esp)
083560b1 +0x0581:  call   08370ff2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xafbe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xafbe
083560b6 +0x0586:  mov    0x8(%ebp),%eax
083560b9 +0x0589:  add    $0xb488,%eax
083560be +0x058e:  mov    %eax,(%esp)
083560c1 +0x0591:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
083560c6 +0x0596:  mov    0x8(%ebp),%eax
083560c9 +0x0599:  add    $0xb4a0,%eax
083560ce +0x059e:  mov    %eax,(%esp)
083560d1 +0x05a1:  call   0837390a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd8d6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd8d6
083560d6 +0x05a6:  mov    0x8(%ebp),%eax
083560d9 +0x05a9:  add    $0xb4ac,%eax
083560de +0x05ae:  mov    %eax,(%esp)
083560e1 +0x05b1:  call   081ab6de <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x30>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x30
083560e6 +0x05b6:  mov    0x8(%ebp),%eax
083560e9 +0x05b9:  add    $0xb4c4,%eax
083560ee +0x05be:  mov    %eax,(%esp)
083560f1 +0x05c1:  call   083712fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb2ca>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb2ca
083560f6 +0x05c6:  mov    0x8(%ebp),%eax
083560f9 +0x05c9:  add    $0xb4c8,%eax
083560fe +0x05ce:  mov    %eax,(%esp)
08356101 +0x05d1:  call   08371732 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb6fe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb6fe
08356106 +0x05d6:  mov    0x8(%ebp),%eax
08356109 +0x05d9:  add    $0xb4d4,%eax
0835610e +0x05de:  mov    %eax,(%esp)
08356111 +0x05e1:  call   0837dd28 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd7c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd7c8
08356116 +0x05e6:  mov    0x8(%ebp),%eax
08356119 +0x05e9:  add    $0xb4ec,%eax
0835611e +0x05ee:  mov    %eax,(%esp)
08356121 +0x05f1:  call   0837dd64 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd804>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd804
08356126 +0x05f6:  mov    0x8(%ebp),%eax
08356129 +0x05f9:  add    $0xb508,%eax
0835612e +0x05fe:  mov    %eax,(%esp)
08356131 +0x0601:  call   08372e10 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xcddc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xcddc
08356136 +0x0606:  mov    0x8(%ebp),%eax
08356139 +0x0609:  add    $0xb520,%eax
0835613e +0x060e:  mov    %eax,(%esp)
08356141 +0x0611:  call   08372e66 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xce32>  ; global constructors keyed to CServerEvent::m_nExpRate+0xce32
08356146 +0x0616:  mov    0x8(%ebp),%eax
08356149 +0x0619:  add    $0xb544,%eax
0835614e +0x061e:  mov    %eax,(%esp)
08356151 +0x0621:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08356156 +0x0626:  mov    0x8(%ebp),%eax
08356159 +0x0629:  add    $0xb548,%eax
0835615e +0x062e:  mov    %eax,(%esp)
08356161 +0x0631:  call   08371544 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb510>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb510
08356166 +0x0636:  mov    0x8(%ebp),%eax
08356169 +0x0639:  add    $0xb568,%eax
0835616e +0x063e:  mov    %eax,(%esp)
08356171 +0x0641:  call   083715b6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb582>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb582
08356176 +0x0646:  mov    0x8(%ebp),%eax
08356179 +0x0649:  add    $0xb5bc,%eax
0835617e +0x064e:  mov    %eax,(%esp)
08356181 +0x0651:  call   08371694 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb660>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb660
08356186 +0x0656:  mov    0x8(%ebp),%eax
08356189 +0x0659:  add    $0xb5e0,%eax
0835618e +0x065e:  mov    %eax,(%esp)
08356191 +0x0661:  call   0837ded8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd978>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd978
08356196 +0x0666:  mov    0x8(%ebp),%eax
08356199 +0x0669:  add    $0xb628,%eax
0835619e +0x066e:  mov    %eax,(%esp)
083561a1 +0x0671:  call   083738a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xd86e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xd86e
083561a6 +0x0676:  mov    0x8(%ebp),%eax
083561a9 +0x0679:  add    $0xb658,%eax
083561ae +0x067e:  mov    %eax,(%esp)
083561b1 +0x0681:  call   08ac1d40 <_ZN23DeleteInvalidItemScriptC1Ev>  ; DeleteInvalidItemScript::DeleteInvalidItemScript()
083561b6 +0x0686:  mov    0x8(%ebp),%eax
083561b9 +0x0689:  movl   $0x0,0x1c(%eax)
083561c0 +0x0690:  mov    0x8(%ebp),%eax
083561c3 +0x0693:  movl   $0x0,0x14(%eax)
083561ca +0x069a:  mov    0x8(%ebp),%eax
083561cd +0x069d:  movl   $0x0,0x18(%eax)
083561d4 +0x06a4:  mov    0x8(%ebp),%eax
083561d7 +0x06a7:  movl   $0x0,0xc(%eax)
083561de +0x06ae:  mov    0x8(%ebp),%eax
083561e1 +0x06b1:  movl   $0x0,0x10(%eax)
083561e8 +0x06b8:  mov    0x8(%ebp),%eax
083561eb +0x06bb:  movl   $0x0,0x8(%eax)
083561f2 +0x06c2:  mov    0x8(%ebp),%eax
083561f5 +0x06c5:  movl   $0x0,0x4(%eax)
083561fc +0x06cc:  mov    0x8(%ebp),%eax
083561ff +0x06cf:  movl   $0x0,(%eax)
08356205 +0x06d5:  mov    0x8(%ebp),%eax
08356208 +0x06d8:  movl   $0x0,0x20(%eax)
0835620f +0x06df:  mov    0x8(%ebp),%eax
08356212 +0x06e2:  movl   $0x0,0x24(%eax)
08356219 +0x06e9:  mov    0x8(%ebp),%eax
0835621c +0x06ec:  movl   $0x0,0x28(%eax)
08356223 +0x06f3:  mov    0x8(%ebp),%eax
08356226 +0x06f6:  movl   $0x0,0x8cc0(%eax)
08356230 +0x0700:  mov    0x8(%ebp),%eax
08356233 +0x0703:  movl   $0x0,0x86f4(%eax)
0835623d +0x070d:  mov    0x8(%ebp),%eax
08356240 +0x0710:  movl   $0x0,0x869c(%eax)
0835624a +0x071a:  mov    0x8(%ebp),%eax
0835624d +0x071d:  movl   $0x0,0x8cc4(%eax)
08356257 +0x0727:  mov    0x8(%ebp),%eax
0835625a +0x072a:  movl   $0x0,0xa8d0(%eax)
08356264 +0x0734:  mov    0x8(%ebp),%eax
08356267 +0x0737:  movl   $0x0,0xa8d4(%eax)
08356271 +0x0741:  mov    0x8(%ebp),%eax
08356274 +0x0744:  movl   $0x0,0x4d40(%eax)
0835627e +0x074e:  mov    0x8(%ebp),%eax
08356281 +0x0751:  mov    $0x3f800000,%edx
08356286 +0x0756:  mov    %edx,0xb3ec(%eax)
0835628c +0x075c:  mov    0x8(%ebp),%eax
0835628f +0x075f:  mov    $0x3f800000,%edx
08356294 +0x0764:  mov    %edx,0xb3f0(%eax)
0835629a +0x076a:  mov    0x8(%ebp),%eax
0835629d +0x076d:  movl   $0x0,0x6390(%eax)
083562a7 +0x0777:  mov    0x8(%ebp),%eax
083562aa +0x077a:  movl   $0x0,0x6394(%eax)
083562b4 +0x0784:  mov    0x8(%ebp),%eax
083562b7 +0x0787:  movl   $0x0,0xb4a8(%eax)
083562c1 +0x0791:  add    $0x2c,%esp
083562c4 +0x0794:  pop    %ebx
083562c5 +0x0795:  pop    %esi
083562c6 +0x0796:  pop    %edi
083562c7 +0x0797:  pop    %ebp
083562c8 +0x0798:  ret
083562c9 +0x0799:  mov    %edx,%ebx
083562cb +0x079b:  mov    %eax,%esi
083562cd +0x079d:  mov    0x8(%ebp),%eax
083562d0 +0x07a0:  add    $0xb628,%eax
083562d5 +0x07a5:  mov    %eax,(%esp)
083562d8 +0x07a8:  call   0837dfb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xda52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xda52
083562dd +0x07ad:  mov    %esi,%eax
083562df +0x07af:  mov    %ebx,%edx
083562e1 +0x07b1:  jmp    083562e3 <+0x7b3>
083562e3 +0x07b3:  mov    %edx,%ebx
083562e5 +0x07b5:  mov    %eax,%esi
083562e7 +0x07b7:  mov    0x8(%ebp),%eax
083562ea +0x07ba:  add    $0xb5e0,%eax
083562ef +0x07bf:  mov    %eax,(%esp)
083562f2 +0x07c2:  call   0837df44 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd9e4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd9e4
083562f7 +0x07c7:  mov    %esi,%eax
083562f9 +0x07c9:  mov    %ebx,%edx
083562fb +0x07cb:  jmp    083562fd <+0x7cd>
083562fd +0x07cd:  mov    %edx,%ebx
083562ff +0x07cf:  mov    %eax,%esi
08356301 +0x07d1:  mov    0x8(%ebp),%eax
08356304 +0x07d4:  add    $0xb5bc,%eax
08356309 +0x07d9:  mov    %eax,(%esp)
0835630c +0x07dc:  call   0837de92 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd932>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd932
08356311 +0x07e1:  mov    %esi,%eax
08356313 +0x07e3:  mov    %ebx,%edx
08356315 +0x07e5:  jmp    08356317 <+0x7e7>
08356317 +0x07e7:  mov    %edx,%ebx
08356319 +0x07e9:  mov    %eax,%esi
0835631b +0x07eb:  mov    0x8(%ebp),%eax
0835631e +0x07ee:  add    $0xb568,%eax
08356323 +0x07f3:  mov    %eax,(%esp)
08356326 +0x07f6:  call   0837ddfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd89c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd89c
0835632b +0x07fb:  mov    %esi,%eax
0835632d +0x07fd:  mov    %ebx,%edx
0835632f +0x07ff:  jmp    08356331 <+0x801>
08356331 +0x0801:  mov    %edx,%ebx
08356333 +0x0803:  mov    %eax,%esi
08356335 +0x0805:  mov    0x8(%ebp),%eax
08356338 +0x0808:  add    $0xb548,%eax
0835633d +0x080d:  mov    %eax,(%esp)
08356340 +0x0810:  call   0837dde6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd886>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd886
08356345 +0x0815:  mov    %esi,%eax
08356347 +0x0817:  mov    %ebx,%edx
08356349 +0x0819:  jmp    0835634b <+0x81b>
0835634b +0x081b:  mov    %edx,%ebx
0835634d +0x081d:  mov    %eax,%esi
0835634f +0x081f:  mov    0x8(%ebp),%eax
08356352 +0x0822:  add    $0xb544,%eax
08356357 +0x0827:  mov    %eax,(%esp)
0835635a +0x082a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0835635f +0x082f:  mov    %esi,%eax
08356361 +0x0831:  mov    %ebx,%edx
08356363 +0x0833:  jmp    08356365 <+0x835>
08356365 +0x0835:  mov    %edx,%ebx
08356367 +0x0837:  mov    %eax,%esi
08356369 +0x0839:  mov    0x8(%ebp),%eax
0835636c +0x083c:  add    $0xb520,%eax
08356371 +0x0841:  mov    %eax,(%esp)
08356374 +0x0844:  call   0837dda0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd840>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd840
08356379 +0x0849:  mov    %esi,%eax
0835637b +0x084b:  mov    %ebx,%edx
0835637d +0x084d:  jmp    0835637f <+0x84f>
0835637f +0x084f:  mov    %edx,%ebx
08356381 +0x0851:  mov    %eax,%esi
08356383 +0x0853:  mov    0x8(%ebp),%eax
08356386 +0x0856:  add    $0xb508,%eax
0835638b +0x085b:  mov    %eax,(%esp)
0835638e +0x085e:  call   0837dd8c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd82c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd82c
08356393 +0x0863:  mov    %esi,%eax
08356395 +0x0865:  mov    %ebx,%edx
08356397 +0x0867:  jmp    08356399 <+0x869>
08356399 +0x0869:  mov    %edx,%ebx
0835639b +0x086b:  mov    %eax,%esi
0835639d +0x086d:  mov    0x8(%ebp),%eax
083563a0 +0x0870:  add    $0xb4ec,%eax
083563a5 +0x0875:  mov    %eax,(%esp)
083563a8 +0x0878:  call   0837dd78 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd818>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd818
083563ad +0x087d:  mov    %esi,%eax
083563af +0x087f:  mov    %ebx,%edx
083563b1 +0x0881:  jmp    083563b3 <+0x883>
083563b3 +0x0883:  mov    %edx,%ebx
083563b5 +0x0885:  mov    %eax,%esi
083563b7 +0x0887:  mov    0x8(%ebp),%eax
083563ba +0x088a:  add    $0xb4d4,%eax
083563bf +0x088f:  mov    %eax,(%esp)
083563c2 +0x0892:  call   0837dd3c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd7dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd7dc
083563c7 +0x0897:  mov    %esi,%eax
083563c9 +0x0899:  mov    %ebx,%edx
083563cb +0x089b:  jmp    083563cd <+0x89d>
083563cd +0x089d:  mov    %edx,%ebx
083563cf +0x089f:  mov    %eax,%esi
083563d1 +0x08a1:  mov    0x8(%ebp),%eax
083563d4 +0x08a4:  add    $0xb4c8,%eax
083563d9 +0x08a9:  mov    %eax,(%esp)
083563dc +0x08ac:  call   08371746 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb712>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb712
083563e1 +0x08b1:  mov    %esi,%eax
083563e3 +0x08b3:  mov    %ebx,%edx
083563e5 +0x08b5:  jmp    083563e7 <+0x8b7>
083563e7 +0x08b7:  mov    %edx,%ebx
083563e9 +0x08b9:  mov    %eax,%esi
083563eb +0x08bb:  mov    0x8(%ebp),%eax
083563ee +0x08be:  add    $0xb4ac,%eax
083563f3 +0x08c3:  mov    %eax,(%esp)
083563f6 +0x08c6:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
083563fb +0x08cb:  mov    %esi,%eax
083563fd +0x08cd:  mov    %ebx,%edx
083563ff +0x08cf:  jmp    08356401 <+0x8d1>
08356401 +0x08d1:  mov    %edx,%ebx
08356403 +0x08d3:  mov    %eax,%esi
08356405 +0x08d5:  mov    0x8(%ebp),%eax
08356408 +0x08d8:  add    $0xb488,%eax
0835640d +0x08dd:  mov    %eax,(%esp)
08356410 +0x08e0:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08356415 +0x08e5:  mov    %esi,%eax
08356417 +0x08e7:  mov    %ebx,%edx
08356419 +0x08e9:  jmp    0835641b <+0x8eb>
0835641b +0x08eb:  mov    %edx,%ebx
0835641d +0x08ed:  mov    %eax,%esi
0835641f +0x08ef:  mov    0x8(%ebp),%eax
08356422 +0x08f2:  add    $0xb458,%eax
08356427 +0x08f7:  mov    %eax,(%esp)
0835642a +0x08fa:  call   0837dce2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd782>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd782
0835642f +0x08ff:  mov    %esi,%eax
08356431 +0x0901:  mov    %ebx,%edx
08356433 +0x0903:  jmp    08356435 <+0x905>
08356435 +0x0905:  mov    %edx,%ebx
08356437 +0x0907:  mov    %eax,%esi
08356439 +0x0909:  mov    0x8(%ebp),%eax
0835643c +0x090c:  add    $0xb424,%eax
08356441 +0x0911:  mov    %eax,(%esp)
08356444 +0x0914:  call   08392754 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x221f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x221f4
08356449 +0x0919:  mov    %esi,%eax
0835644b +0x091b:  mov    %ebx,%edx
0835644d +0x091d:  jmp    0835644f <+0x91f>
0835644f +0x091f:  mov    %edx,%ebx
08356451 +0x0921:  mov    %eax,%esi
08356453 +0x0923:  mov    0x8(%ebp),%eax
08356456 +0x0926:  add    $0xb3f4,%eax
0835645b +0x092b:  mov    %eax,(%esp)
0835645e +0x092e:  call   0837dc9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd73c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd73c
08356463 +0x0933:  mov    %esi,%eax
08356465 +0x0935:  mov    %ebx,%edx
08356467 +0x0937:  jmp    08356469 <+0x939>
08356469 +0x0939:  mov    %edx,%ebx
0835646b +0x093b:  mov    %eax,%esi
0835646d +0x093d:  mov    0x8(%ebp),%eax
08356470 +0x0940:  add    $0xa940,%eax
08356475 +0x0945:  mov    %eax,(%esp)
08356478 +0x0948:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0835647d +0x094d:  mov    %esi,%eax
0835647f +0x094f:  mov    %ebx,%edx
08356481 +0x0951:  jmp    08356483 <+0x953>
08356483 +0x0953:  mov    %edx,%ebx
08356485 +0x0955:  mov    %eax,%esi
08356487 +0x0957:  mov    0x8(%ebp),%eax
0835648a +0x095a:  add    $0xa928,%eax
0835648f +0x095f:  mov    %eax,(%esp)
08356492 +0x0962:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08356497 +0x0967:  mov    %esi,%eax
08356499 +0x0969:  mov    %ebx,%edx
0835649b +0x096b:  jmp    0835649d <+0x96d>
0835649d +0x096d:  mov    %edx,%ebx
0835649f +0x096f:  mov    %eax,%esi
083564a1 +0x0971:  mov    0x8(%ebp),%eax
083564a4 +0x0974:  add    $0xa8dc,%eax
083564a9 +0x0979:  mov    %eax,(%esp)
083564ac +0x097c:  call   0837db42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd5e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd5e2
083564b1 +0x0981:  mov    %esi,%eax
083564b3 +0x0983:  mov    %ebx,%edx
083564b5 +0x0985:  jmp    083564b7 <+0x987>
083564b7 +0x0987:  mov    %edx,%ebx
083564b9 +0x0989:  mov    %eax,%esi
083564bb +0x098b:  mov    0x8(%ebp),%eax
083564be +0x098e:  add    $0xa8cc,%eax
083564c3 +0x0993:  mov    %eax,(%esp)
083564c6 +0x0996:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083564cb +0x099b:  mov    %esi,%eax
083564cd +0x099d:  mov    %ebx,%edx
083564cf +0x099f:  jmp    083564d1 <+0x9a1>
083564d1 +0x09a1:  mov    %edx,%ebx
083564d3 +0x09a3:  mov    %eax,%esi
083564d5 +0x09a5:  mov    0x8(%ebp),%eax
083564d8 +0x09a8:  add    $0xa8c8,%eax
083564dd +0x09ad:  mov    %eax,(%esp)
083564e0 +0x09b0:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083564e5 +0x09b5:  mov    %esi,%eax
083564e7 +0x09b7:  mov    %ebx,%edx
083564e9 +0x09b9:  jmp    083564eb <+0x9bb>
083564eb +0x09bb:  mov    %edx,%ebx
083564ed +0x09bd:  mov    %eax,%esi
083564ef +0x09bf:  mov    0x8(%ebp),%eax
083564f2 +0x09c2:  add    $0xa8c4,%eax
083564f7 +0x09c7:  mov    %eax,(%esp)
083564fa +0x09ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083564ff +0x09cf:  mov    %esi,%eax
08356501 +0x09d1:  mov    %ebx,%edx
08356503 +0x09d3:  jmp    08356505 <+0x9d5>
08356505 +0x09d5:  mov    %edx,%ebx
08356507 +0x09d7:  mov    %eax,%esi
08356509 +0x09d9:  mov    0x8(%ebp),%eax
0835650c +0x09dc:  add    $0xa8c0,%eax
08356511 +0x09e1:  mov    %eax,(%esp)
08356514 +0x09e4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356519 +0x09e9:  mov    %esi,%eax
0835651b +0x09eb:  mov    %ebx,%edx
0835651d +0x09ed:  jmp    0835651f <+0x9ef>
0835651f +0x09ef:  mov    %edx,%ebx
08356521 +0x09f1:  mov    %eax,%esi
08356523 +0x09f3:  mov    0x8(%ebp),%eax
08356526 +0x09f6:  add    $0xa884,%eax
0835652b +0x09fb:  mov    %eax,(%esp)
0835652e +0x09fe:  call   0837daac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd54c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd54c
08356533 +0x0a03:  mov    %esi,%eax
08356535 +0x0a05:  mov    %ebx,%edx
08356537 +0x0a07:  jmp    08356539 <+0xa09>
08356539 +0x0a09:  mov    %edx,%ebx
0835653b +0x0a0b:  mov    %eax,%esi
0835653d +0x0a0d:  mov    0x8(%ebp),%eax
08356540 +0x0a10:  add    $0xa86c,%eax
08356545 +0x0a15:  mov    %eax,(%esp)
08356548 +0x0a18:  call   0837da98 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd538>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd538
0835654d +0x0a1d:  mov    %esi,%eax
0835654f +0x0a1f:  mov    %ebx,%edx
08356551 +0x0a21:  jmp    08356553 <+0xa23>
08356553 +0x0a23:  mov    %edx,%ebx
08356555 +0x0a25:  mov    %eax,%esi
08356557 +0x0a27:  mov    0x8(%ebp),%eax
0835655a +0x0a2a:  add    $0xa800,%eax
0835655f +0x0a2f:  mov    %eax,(%esp)
08356562 +0x0a32:  call   0837da02 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd4a2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd4a2
08356567 +0x0a37:  mov    %esi,%eax
08356569 +0x0a39:  mov    %ebx,%edx
0835656b +0x0a3b:  jmp    0835656d <+0xa3d>
0835656d +0x0a3d:  mov    %edx,%ebx
0835656f +0x0a3f:  mov    %eax,%esi
08356571 +0x0a41:  mov    0x8(%ebp),%eax
08356574 +0x0a44:  add    $0xa7e0,%eax
08356579 +0x0a49:  mov    %eax,(%esp)
0835657c +0x0a4c:  call   0837d9ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd48c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd48c
08356581 +0x0a51:  mov    %esi,%eax
08356583 +0x0a53:  mov    %ebx,%edx
08356585 +0x0a55:  jmp    08356587 <+0xa57>
08356587 +0x0a57:  mov    %edx,%ebx
08356589 +0x0a59:  mov    %eax,%esi
0835658b +0x0a5b:  mov    0x8(%ebp),%eax
0835658e +0x0a5e:  add    $0xa788,%eax
08356593 +0x0a63:  mov    %eax,(%esp)
08356596 +0x0a66:  call   0837d906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd3a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd3a6
0835659b +0x0a6b:  mov    %esi,%eax
0835659d +0x0a6d:  mov    %ebx,%edx
0835659f +0x0a6f:  jmp    083565a1 <+0xa71>
083565a1 +0x0a71:  mov    %edx,%ebx
083565a3 +0x0a73:  mov    %eax,%esi
083565a5 +0x0a75:  mov    0x8(%ebp),%eax
083565a8 +0x0a78:  add    $0xa700,%eax
083565ad +0x0a7d:  mov    %eax,(%esp)
083565b0 +0x0a80:  call   0837d756 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd1f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd1f6
083565b5 +0x0a85:  mov    %esi,%eax
083565b7 +0x0a87:  mov    %ebx,%edx
083565b9 +0x0a89:  jmp    083565bb <+0xa8b>
083565bb +0x0a8b:  mov    %edx,%ebx
083565bd +0x0a8d:  mov    %eax,%esi
083565bf +0x0a8f:  mov    0x8(%ebp),%eax
083565c2 +0x0a92:  add    $0xa628,%eax
083565c7 +0x0a97:  mov    %eax,(%esp)
083565ca +0x0a9a:  call   0837d634 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd0d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd0d4
083565cf +0x0a9f:  mov    %esi,%eax
083565d1 +0x0aa1:  mov    %ebx,%edx
083565d3 +0x0aa3:  jmp    083565d5 <+0xaa5>
083565d5 +0x0aa5:  mov    %edx,%ebx
083565d7 +0x0aa7:  mov    %eax,%esi
083565d9 +0x0aa9:  mov    0x8(%ebp),%eax
083565dc +0x0aac:  add    $0xa50c,%eax
083565e1 +0x0ab1:  mov    %eax,(%esp)
083565e4 +0x0ab4:  call   0837d542 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcfe2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcfe2
083565e9 +0x0ab9:  mov    %esi,%eax
083565eb +0x0abb:  mov    %ebx,%edx
083565ed +0x0abd:  jmp    083565ef <+0xabf>
083565ef +0x0abf:  mov    %edx,%esi
083565f1 +0x0ac1:  mov    %eax,%edi
083565f3 +0x0ac3:  mov    0x8(%ebp),%eax
083565f6 +0x0ac6:  add    $0xa1c4,%eax
083565fb +0x0acb:  test   %eax,%eax
083565fd +0x0acd:  je     08356626 <+0xaf6>
083565ff +0x0acf:  mov    0x8(%ebp),%eax
08356602 +0x0ad2:  add    $0xa1c4,%eax
08356607 +0x0ad7:  lea    0x348(%eax),%ebx
0835660d +0x0add:  mov    0x8(%ebp),%eax
08356610 +0x0ae0:  add    $0xa1c4,%eax
08356615 +0x0ae5:  cmp    %eax,%ebx
08356617 +0x0ae7:  je     08356626 <+0xaf6>
08356619 +0x0ae9:  sub    $0xc,%ebx
0835661c +0x0aec:  mov    %ebx,(%esp)
0835661f +0x0aef:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08356624 +0x0af4:  jmp    0835660d <+0xadd>
08356626 +0x0af6:  mov    %edi,%eax
08356628 +0x0af8:  mov    %esi,%edx
0835662a +0x0afa:  mov    %edx,%ebx
0835662c +0x0afc:  mov    %eax,%esi
0835662e +0x0afe:  mov    0x8(%ebp),%eax
08356631 +0x0b01:  add    $0x8d34,%eax
08356636 +0x0b06:  mov    %eax,(%esp)
08356639 +0x0b09:  call   0837d488 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcf28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcf28
0835663e +0x0b0e:  mov    %esi,%eax
08356640 +0x0b10:  mov    %ebx,%edx
08356642 +0x0b12:  jmp    08356644 <+0xb14>
08356644 +0x0b14:  mov    %edx,%ebx
08356646 +0x0b16:  mov    %eax,%esi
08356648 +0x0b18:  mov    0x8(%ebp),%eax
0835664b +0x0b1b:  add    $0x8cc8,%eax
08356650 +0x0b20:  mov    %eax,(%esp)
08356653 +0x0b23:  call   0837d3ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce6a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce6a
08356658 +0x0b28:  mov    %esi,%eax
0835665a +0x0b2a:  mov    %ebx,%edx
0835665c +0x0b2c:  jmp    0835665e <+0xb2e>
0835665e +0x0b2e:  mov    %edx,%ebx
08356660 +0x0b30:  mov    %eax,%esi
08356662 +0x0b32:  mov    0x8(%ebp),%eax
08356665 +0x0b35:  add    $0x8cb8,%eax
0835666a +0x0b3a:  mov    %eax,(%esp)
0835666d +0x0b3d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356672 +0x0b42:  mov    %esi,%eax
08356674 +0x0b44:  mov    %ebx,%edx
08356676 +0x0b46:  jmp    08356678 <+0xb48>
08356678 +0x0b48:  mov    %edx,%ebx
0835667a +0x0b4a:  mov    %eax,%esi
0835667c +0x0b4c:  mov    0x8(%ebp),%eax
0835667f +0x0b4f:  add    $0x87b4,%eax
08356684 +0x0b54:  mov    %eax,(%esp)
08356687 +0x0b57:  call   0837d3b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce52
0835668c +0x0b5c:  mov    %esi,%eax
0835668e +0x0b5e:  mov    %ebx,%edx
08356690 +0x0b60:  jmp    08356692 <+0xb62>
08356692 +0x0b62:  mov    %edx,%ebx
08356694 +0x0b64:  mov    %eax,%esi
08356696 +0x0b66:  mov    0x8(%ebp),%eax
08356699 +0x0b69:  add    $0x8798,%eax
0835669e +0x0b6e:  mov    %eax,(%esp)
083566a1 +0x0b71:  call   08374894 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe860>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe860
083566a6 +0x0b76:  mov    %esi,%eax
083566a8 +0x0b78:  mov    %ebx,%edx
083566aa +0x0b7a:  jmp    083566ac <+0xb7c>
083566ac +0x0b7c:  mov    %edx,%ebx
083566ae +0x0b7e:  mov    %eax,%esi
083566b0 +0x0b80:  mov    0x8(%ebp),%eax
083566b3 +0x0b83:  add    $0x8780,%eax
083566b8 +0x0b88:  mov    %eax,(%esp)
083566bb +0x0b8b:  call   0837481e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe7ea>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe7ea
083566c0 +0x0b90:  mov    %esi,%eax
083566c2 +0x0b92:  mov    %ebx,%edx
083566c4 +0x0b94:  jmp    083566c6 <+0xb96>
083566c6 +0x0b96:  mov    %edx,%ebx
083566c8 +0x0b98:  mov    %eax,%esi
083566ca +0x0b9a:  mov    0x8(%ebp),%eax
083566cd +0x0b9d:  add    $0x8770,%eax
083566d2 +0x0ba2:  mov    %eax,(%esp)
083566d5 +0x0ba5:  call   0837d39e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce3e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce3e
083566da +0x0baa:  mov    %esi,%eax
083566dc +0x0bac:  mov    %ebx,%edx
083566de +0x0bae:  jmp    083566e0 <+0xbb0>
083566e0 +0x0bb0:  mov    %edx,%ebx
083566e2 +0x0bb2:  mov    %eax,%esi
083566e4 +0x0bb4:  mov    0x8(%ebp),%eax
083566e7 +0x0bb7:  add    $0x8740,%eax
083566ec +0x0bbc:  mov    %eax,(%esp)
083566ef +0x0bbf:  call   0837d358 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcdf8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcdf8
083566f4 +0x0bc4:  mov    %esi,%eax
083566f6 +0x0bc6:  mov    %ebx,%edx
083566f8 +0x0bc8:  jmp    083566fa <+0xbca>
083566fa +0x0bca:  mov    %edx,%ebx
083566fc +0x0bcc:  mov    %eax,%esi
083566fe +0x0bce:  mov    0x8(%ebp),%eax
08356701 +0x0bd1:  add    $0x8710,%eax
08356706 +0x0bd6:  mov    %eax,(%esp)
08356709 +0x0bd9:  call   0837d290 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcd30>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcd30
0835670e +0x0bde:  mov    %esi,%eax
08356710 +0x0be0:  mov    %ebx,%edx
08356712 +0x0be2:  jmp    08356714 <+0xbe4>
08356714 +0x0be4:  mov    %edx,%ebx
08356716 +0x0be6:  mov    %eax,%esi
08356718 +0x0be8:  mov    0x8(%ebp),%eax
0835671b +0x0beb:  add    $0x86f8,%eax
08356720 +0x0bf0:  mov    %eax,(%esp)
08356723 +0x0bf3:  call   083711ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb1b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb1b6
08356728 +0x0bf8:  mov    %esi,%eax
0835672a +0x0bfa:  mov    %ebx,%edx
0835672c +0x0bfc:  jmp    0835672e <+0xbfe>
0835672e +0x0bfe:  mov    %edx,%ebx
08356730 +0x0c00:  mov    %eax,%esi
08356732 +0x0c02:  mov    0x8(%ebp),%eax
08356735 +0x0c05:  add    $0x86c4,%eax
0835673a +0x0c0a:  mov    %eax,(%esp)
0835673d +0x0c0d:  call   0837d1fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcc9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcc9a
08356742 +0x0c12:  mov    %esi,%eax
08356744 +0x0c14:  mov    %ebx,%edx
08356746 +0x0c16:  jmp    08356748 <+0xc18>
08356748 +0x0c18:  mov    %edx,%ebx
0835674a +0x0c1a:  mov    %eax,%esi
0835674c +0x0c1c:  mov    0x8(%ebp),%eax
0835674f +0x0c1f:  add    $0x86a0,%eax
08356754 +0x0c24:  mov    %eax,(%esp)
08356757 +0x0c27:  call   0837d0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb9a
0835675c +0x0c2c:  mov    %esi,%eax
0835675e +0x0c2e:  mov    %ebx,%edx
08356760 +0x0c30:  jmp    08356762 <+0xc32>
08356762 +0x0c32:  mov    %edx,%esi
08356764 +0x0c34:  mov    %eax,%edi
08356766 +0x0c36:  mov    0x8(%ebp),%eax
08356769 +0x0c39:  add    $0x76e8,%eax
0835676e +0x0c3e:  test   %eax,%eax
08356770 +0x0c40:  je     08356799 <+0xc69>
08356772 +0x0c42:  mov    0x8(%ebp),%eax
08356775 +0x0c45:  add    $0x76e8,%eax
0835677a +0x0c4a:  lea    0xfb4(%eax),%ebx
08356780 +0x0c50:  mov    0x8(%ebp),%eax
08356783 +0x0c53:  add    $0x76e8,%eax
08356788 +0x0c58:  cmp    %eax,%ebx
0835678a +0x0c5a:  je     08356799 <+0xc69>
0835678c +0x0c5c:  sub    $0x14,%ebx
0835678f +0x0c5f:  mov    %ebx,(%esp)
08356792 +0x0c62:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
08356797 +0x0c67:  jmp    08356780 <+0xc50>
08356799 +0x0c69:  mov    %edi,%eax
0835679b +0x0c6b:  mov    %esi,%edx
0835679d +0x0c6d:  mov    %edx,%esi
0835679f +0x0c6f:  mov    %eax,%edi
083567a1 +0x0c71:  mov    0x8(%ebp),%eax
083567a4 +0x0c74:  add    $0x6734,%eax
083567a9 +0x0c79:  test   %eax,%eax
083567ab +0x0c7b:  je     083567d4 <+0xca4>
083567ad +0x0c7d:  mov    0x8(%ebp),%eax
083567b0 +0x0c80:  add    $0x6734,%eax
083567b5 +0x0c85:  lea    0xfb4(%eax),%ebx
083567bb +0x0c8b:  mov    0x8(%ebp),%eax
083567be +0x0c8e:  add    $0x6734,%eax
083567c3 +0x0c93:  cmp    %eax,%ebx
083567c5 +0x0c95:  je     083567d4 <+0xca4>
083567c7 +0x0c97:  sub    $0x14,%ebx
083567ca +0x0c9a:  mov    %ebx,(%esp)
083567cd +0x0c9d:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
083567d2 +0x0ca2:  jmp    083567bb <+0xc8b>
083567d4 +0x0ca4:  mov    %edi,%eax
083567d6 +0x0ca6:  mov    %esi,%edx
083567d8 +0x0ca8:  mov    %edx,%ebx
083567da +0x0caa:  mov    %eax,%esi
083567dc +0x0cac:  mov    0x8(%ebp),%eax
083567df +0x0caf:  add    $0x6398,%eax
083567e4 +0x0cb4:  mov    %eax,(%esp)
083567e7 +0x0cb7:  call   0837d07a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb1a
083567ec +0x0cbc:  mov    %esi,%eax
083567ee +0x0cbe:  mov    %ebx,%edx
083567f0 +0x0cc0:  jmp    083567f2 <+0xcc2>
083567f2 +0x0cc2:  mov    %edx,%ebx
083567f4 +0x0cc4:  mov    %eax,%esi
083567f6 +0x0cc6:  mov    0x8(%ebp),%eax
083567f9 +0x0cc9:  add    $0x6364,%eax
083567fe +0x0cce:  mov    %eax,(%esp)
08356801 +0x0cd1:  call   0889b6c6 <_ZN12advancealtar15ConfigParameterD1Ev>  ; advancealtar::ConfigParameter::~ConfigParameter()
08356806 +0x0cd6:  mov    %esi,%eax
08356808 +0x0cd8:  mov    %ebx,%edx
0835680a +0x0cda:  jmp    0835680c <+0xcdc>
0835680c +0x0cdc:  mov    %edx,%ebx
0835680e +0x0cde:  mov    %eax,%esi
08356810 +0x0ce0:  mov    0x8(%ebp),%eax
08356813 +0x0ce3:  add    $0x634c,%eax
08356818 +0x0ce8:  mov    %eax,(%esp)
0835681b +0x0ceb:  call   0889af88 <_ZN12advancealtar15RewardParameterD1Ev>  ; advancealtar::RewardParameter::~RewardParameter()
08356820 +0x0cf0:  mov    %esi,%eax
08356822 +0x0cf2:  mov    %ebx,%edx
08356824 +0x0cf4:  jmp    08356826 <+0xcf6>
08356826 +0x0cf6:  mov    %edx,%ebx
08356828 +0x0cf8:  mov    %eax,%esi
0835682a +0x0cfa:  mov    0x8(%ebp),%eax
0835682d +0x0cfd:  add    $0x631c,%eax
08356832 +0x0d02:  mov    %eax,(%esp)
08356835 +0x0d05:  call   088a0fa2 <_ZN12advancealtar25AdvanceAltarShopParameterD1Ev>  ; advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter()
0835683a +0x0d0a:  mov    %esi,%eax
0835683c +0x0d0c:  mov    %ebx,%edx
0835683e +0x0d0e:  jmp    08356840 <+0xd10>
08356840 +0x0d10:  mov    %edx,%ebx
08356842 +0x0d12:  mov    %eax,%esi
08356844 +0x0d14:  mov    0x8(%ebp),%eax
08356847 +0x0d17:  add    $0x62d0,%eax
0835684c +0x0d1c:  mov    %eax,(%esp)
0835684f +0x0d1f:  call   08899e88 <_ZN12advancealtar22StageTimeLineParameterD1Ev>  ; advancealtar::StageTimeLineParameter::~StageTimeLineParameter()
08356854 +0x0d24:  mov    %esi,%eax
08356856 +0x0d26:  mov    %ebx,%edx
08356858 +0x0d28:  jmp    0835685a <+0xd2a>
0835685a +0x0d2a:  mov    %edx,%ebx
0835685c +0x0d2c:  mov    %eax,%esi
0835685e +0x0d2e:  mov    0x8(%ebp),%eax
08356861 +0x0d31:  add    $0x629c,%eax
08356866 +0x0d36:  mov    %eax,(%esp)
08356869 +0x0d39:  call   0837cfde <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xca7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xca7e
0835686e +0x0d3e:  mov    %esi,%eax
08356870 +0x0d40:  mov    %ebx,%edx
08356872 +0x0d42:  jmp    08356874 <+0xd44>
08356874 +0x0d44:  mov    %edx,%ebx
08356876 +0x0d46:  mov    %eax,%esi
08356878 +0x0d48:  mov    0x8(%ebp),%eax
0835687b +0x0d4b:  add    $0x6224,%eax
08356880 +0x0d50:  mov    %eax,(%esp)
08356883 +0x0d53:  call   0837235c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc328>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc328
08356888 +0x0d58:  mov    %esi,%eax
0835688a +0x0d5a:  mov    %ebx,%edx
0835688c +0x0d5c:  jmp    0835688e <+0xd5e>
0835688e +0x0d5e:  mov    %edx,%ebx
08356890 +0x0d60:  mov    %eax,%esi
08356892 +0x0d62:  mov    0x8(%ebp),%eax
08356895 +0x0d65:  add    $0x61ac,%eax
0835689a +0x0d6a:  mov    %eax,(%esp)
0835689d +0x0d6d:  call   0837235c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc328>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc328
083568a2 +0x0d72:  mov    %esi,%eax
083568a4 +0x0d74:  mov    %ebx,%edx
083568a6 +0x0d76:  jmp    083568a8 <+0xd78>
083568a8 +0x0d78:  mov    %edx,%ebx
083568aa +0x0d7a:  mov    %eax,%esi
083568ac +0x0d7c:  mov    0x8(%ebp),%eax
083568af +0x0d7f:  add    $0x61a0,%eax
083568b4 +0x0d84:  mov    %eax,(%esp)
083568b7 +0x0d87:  call   0837cf32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9d2
083568bc +0x0d8c:  mov    %esi,%eax
083568be +0x0d8e:  mov    %ebx,%edx
083568c0 +0x0d90:  jmp    083568c2 <+0xd92>
083568c2 +0x0d92:  mov    %edx,%ebx
083568c4 +0x0d94:  mov    %eax,%esi
083568c6 +0x0d96:  mov    0x8(%ebp),%eax
083568c9 +0x0d99:  add    $0x5e30,%eax
083568ce +0x0d9e:  mov    %eax,(%esp)
083568d1 +0x0da1:  call   08370ab0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xaa7c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xaa7c
083568d6 +0x0da6:  mov    %esi,%eax
083568d8 +0x0da8:  mov    %ebx,%edx
083568da +0x0daa:  jmp    083568dc <+0xdac>
083568dc +0x0dac:  mov    %edx,%ebx
083568de +0x0dae:  mov    %eax,%esi
083568e0 +0x0db0:  mov    0x8(%ebp),%eax
083568e3 +0x0db3:  add    $0x5180,%eax
083568e8 +0x0db8:  mov    %eax,(%esp)
083568eb +0x0dbb:  call   0837cf0a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9aa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9aa
083568f0 +0x0dc0:  mov    %esi,%eax
083568f2 +0x0dc2:  mov    %ebx,%edx
083568f4 +0x0dc4:  jmp    083568f6 <+0xdc6>
083568f6 +0x0dc6:  mov    %edx,%ebx
083568f8 +0x0dc8:  mov    %eax,%esi
083568fa +0x0dca:  mov    0x8(%ebp),%eax
083568fd +0x0dcd:  add    $0x5108,%eax
08356902 +0x0dd2:  mov    %eax,(%esp)
08356905 +0x0dd5:  call   0837ce4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8ec
0835690a +0x0dda:  mov    %esi,%eax
0835690c +0x0ddc:  mov    %ebx,%edx
0835690e +0x0dde:  jmp    08356910 <+0xde0>
08356910 +0x0de0:  mov    %edx,%ebx
08356912 +0x0de2:  mov    %eax,%esi
08356914 +0x0de4:  mov    0x8(%ebp),%eax
08356917 +0x0de7:  add    $0x50ac,%eax
0835691c +0x0dec:  mov    %eax,(%esp)
0835691f +0x0def:  call   08371530 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb4fc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb4fc
08356924 +0x0df4:  mov    %esi,%eax
08356926 +0x0df6:  mov    %ebx,%edx
08356928 +0x0df8:  jmp    0835692a <+0xdfa>
0835692a +0x0dfa:  mov    %edx,%ebx
0835692c +0x0dfc:  mov    %eax,%esi
0835692e +0x0dfe:  mov    0x8(%ebp),%eax
08356931 +0x0e01:  add    $0x5094,%eax
08356936 +0x0e06:  mov    %eax,(%esp)
08356939 +0x0e09:  call   0837ce38 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8d8
0835693e +0x0e0e:  mov    %esi,%eax
08356940 +0x0e10:  mov    %ebx,%edx
08356942 +0x0e12:  jmp    08356944 <+0xe14>
08356944 +0x0e14:  mov    %edx,%ebx
08356946 +0x0e16:  mov    %eax,%esi
08356948 +0x0e18:  mov    0x8(%ebp),%eax
0835694b +0x0e1b:  add    $0x5040,%eax
08356950 +0x0e20:  mov    %eax,(%esp)
08356953 +0x0e23:  call   085f8506 <_ZN15RegenerationROID1Ev>  ; RegenerationROI::~RegenerationROI()
08356958 +0x0e28:  mov    %esi,%eax
0835695a +0x0e2a:  mov    %ebx,%edx
0835695c +0x0e2c:  jmp    0835695e <+0xe2e>
0835695e +0x0e2e:  mov    %edx,%ebx
08356960 +0x0e30:  mov    %eax,%esi
08356962 +0x0e32:  mov    0x8(%ebp),%eax
08356965 +0x0e35:  add    $0x4e10,%eax
0835696a +0x0e3a:  mov    %eax,(%esp)
0835696d +0x0e3d:  call   0837c9e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc488>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc488
08356972 +0x0e42:  mov    %esi,%eax
08356974 +0x0e44:  mov    %ebx,%edx
08356976 +0x0e46:  jmp    08356978 <+0xe48>
08356978 +0x0e48:  mov    %edx,%ebx
0835697a +0x0e4a:  mov    %eax,%esi
0835697c +0x0e4c:  mov    0x8(%ebp),%eax
0835697f +0x0e4f:  add    $0x4df8,%eax
08356984 +0x0e54:  mov    %eax,(%esp)
08356987 +0x0e57:  call   0837c9d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc474>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc474
0835698c +0x0e5c:  mov    %esi,%eax
0835698e +0x0e5e:  mov    %ebx,%edx
08356990 +0x0e60:  jmp    08356992 <+0xe62>
08356992 +0x0e62:  mov    %edx,%ebx
08356994 +0x0e64:  mov    %eax,%esi
08356996 +0x0e66:  mov    0x8(%ebp),%eax
08356999 +0x0e69:  add    $0x4de8,%eax
0835699e +0x0e6e:  mov    %eax,(%esp)
083569a1 +0x0e71:  call   0837c9c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc460>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc460
083569a6 +0x0e76:  mov    %esi,%eax
083569a8 +0x0e78:  mov    %ebx,%edx
083569aa +0x0e7a:  jmp    083569ac <+0xe7c>
083569ac +0x0e7c:  mov    %edx,%ebx
083569ae +0x0e7e:  mov    %eax,%esi
083569b0 +0x0e80:  mov    0x8(%ebp),%eax
083569b3 +0x0e83:  add    $0x4d98,%eax
083569b8 +0x0e88:  mov    %eax,(%esp)
083569bb +0x0e8b:  call   0837c938 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc3d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc3d8
083569c0 +0x0e90:  mov    %esi,%eax
083569c2 +0x0e92:  mov    %ebx,%edx
083569c4 +0x0e94:  jmp    083569c6 <+0xe96>
083569c6 +0x0e96:  mov    %edx,%ebx
083569c8 +0x0e98:  mov    %eax,%esi
083569ca +0x0e9a:  mov    0x8(%ebp),%eax
083569cd +0x0e9d:  add    $0x4d5c,%eax
083569d2 +0x0ea2:  mov    %eax,(%esp)
083569d5 +0x0ea5:  call   0837c884 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc324>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc324
083569da +0x0eaa:  mov    %esi,%eax
083569dc +0x0eac:  mov    %ebx,%edx
083569de +0x0eae:  jmp    083569e0 <+0xeb0>
083569e0 +0x0eb0:  mov    %edx,%ebx
083569e2 +0x0eb2:  mov    %eax,%esi
083569e4 +0x0eb4:  mov    0x8(%ebp),%eax
083569e7 +0x0eb7:  add    $0x4d44,%eax
083569ec +0x0ebc:  mov    %eax,(%esp)
083569ef +0x0ebf:  call   08370cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xac80>  ; global constructors keyed to CServerEvent::m_nExpRate+0xac80
083569f4 +0x0ec4:  mov    %esi,%eax
083569f6 +0x0ec6:  mov    %ebx,%edx
083569f8 +0x0ec8:  jmp    083569fa <+0xeca>
083569fa +0x0eca:  mov    %edx,%ebx
083569fc +0x0ecc:  mov    %eax,%esi
083569fe +0x0ece:  mov    0x8(%ebp),%eax
08356a01 +0x0ed1:  add    $0x4d28,%eax
08356a06 +0x0ed6:  mov    %eax,(%esp)
08356a09 +0x0ed9:  call   0890ce34 <_ZN24CNPCRelationEventManagerD1Ev>  ; CNPCRelationEventManager::~CNPCRelationEventManager()
08356a0e +0x0ede:  mov    %esi,%eax
08356a10 +0x0ee0:  mov    %ebx,%edx
08356a12 +0x0ee2:  jmp    08356a14 <+0xee4>
08356a14 +0x0ee4:  mov    %edx,%ebx
08356a16 +0x0ee6:  mov    %eax,%esi
08356a18 +0x0ee8:  mov    0x8(%ebp),%eax
08356a1b +0x0eeb:  add    $0x4d1c,%eax
08356a20 +0x0ef0:  mov    %eax,(%esp)
08356a23 +0x0ef3:  call   0839206e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21b0e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21b0e
08356a28 +0x0ef8:  mov    %esi,%eax
08356a2a +0x0efa:  mov    %ebx,%edx
08356a2c +0x0efc:  jmp    08356a2e <+0xefe>
08356a2e +0x0efe:  mov    %edx,%ebx
08356a30 +0x0f00:  mov    %eax,%esi
08356a32 +0x0f02:  mov    0x8(%ebp),%eax
08356a35 +0x0f05:  add    $0x4cf8,%eax
08356a3a +0x0f0a:  mov    %eax,(%esp)
08356a3d +0x0f0d:  call   0837c7a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc242>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc242
08356a42 +0x0f12:  mov    %esi,%eax
08356a44 +0x0f14:  mov    %ebx,%edx
08356a46 +0x0f16:  jmp    08356a48 <+0xf18>
08356a48 +0x0f18:  mov    %edx,%ebx
08356a4a +0x0f1a:  mov    %eax,%esi
08356a4c +0x0f1c:  mov    0x8(%ebp),%eax
08356a4f +0x0f1f:  add    $0x4ca8,%eax
08356a54 +0x0f24:  mov    %eax,(%esp)
08356a57 +0x0f27:  call   0837c5fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc09a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc09a
08356a5c +0x0f2c:  mov    %esi,%eax
08356a5e +0x0f2e:  mov    %ebx,%edx
08356a60 +0x0f30:  jmp    08356a62 <+0xf32>
08356a62 +0x0f32:  mov    %edx,%ebx
08356a64 +0x0f34:  mov    %eax,%esi
08356a66 +0x0f36:  mov    0x8(%ebp),%eax
08356a69 +0x0f39:  add    $0x4c50,%eax
08356a6e +0x0f3e:  mov    %eax,(%esp)
08356a71 +0x0f41:  call   0837c46a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbf0a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbf0a
08356a76 +0x0f46:  mov    %esi,%eax
08356a78 +0x0f48:  mov    %ebx,%edx
08356a7a +0x0f4a:  jmp    08356a7c <+0xf4c>
08356a7c +0x0f4c:  mov    %edx,%ebx
08356a7e +0x0f4e:  mov    %eax,%esi
08356a80 +0x0f50:  mov    0x8(%ebp),%eax
08356a83 +0x0f53:  add    $0x4c04,%eax
08356a88 +0x0f58:  mov    %eax,(%esp)
08356a8b +0x0f5b:  call   0837c3fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe9c
08356a90 +0x0f60:  mov    %esi,%eax
08356a92 +0x0f62:  mov    %ebx,%edx
08356a94 +0x0f64:  jmp    08356a96 <+0xf66>
08356a96 +0x0f66:  mov    %edx,%ebx
08356a98 +0x0f68:  mov    %eax,%esi
08356a9a +0x0f6a:  mov    0x8(%ebp),%eax
08356a9d +0x0f6d:  add    $0x4bec,%eax
08356aa2 +0x0f72:  mov    %eax,(%esp)
08356aa5 +0x0f75:  call   0837c3e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe88>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe88
08356aaa +0x0f7a:  mov    %esi,%eax
08356aac +0x0f7c:  mov    %ebx,%edx
08356aae +0x0f7e:  jmp    08356ab0 <+0xf80>
08356ab0 +0x0f80:  mov    %edx,%ebx
08356ab2 +0x0f82:  mov    %eax,%esi
08356ab4 +0x0f84:  mov    0x8(%ebp),%eax
08356ab7 +0x0f87:  add    $0x4bd4,%eax
08356abc +0x0f8c:  mov    %eax,(%esp)
08356abf +0x0f8f:  call   0837c3d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe74>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe74
08356ac4 +0x0f94:  mov    %esi,%eax
08356ac6 +0x0f96:  mov    %ebx,%edx
08356ac8 +0x0f98:  jmp    08356aca <+0xf9a>
08356aca +0x0f9a:  mov    %edx,%ebx
08356acc +0x0f9c:  mov    %eax,%esi
08356ace +0x0f9e:  mov    0x8(%ebp),%eax
08356ad1 +0x0fa1:  add    $0x4bac,%eax
08356ad6 +0x0fa6:  mov    %eax,(%esp)
08356ad9 +0x0fa9:  call   0837c3c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe60
08356ade +0x0fae:  mov    %esi,%eax
08356ae0 +0x0fb0:  mov    %ebx,%edx
08356ae2 +0x0fb2:  jmp    08356ae4 <+0xfb4>
08356ae4 +0x0fb4:  mov    %edx,%ebx
08356ae6 +0x0fb6:  mov    %eax,%esi
08356ae8 +0x0fb8:  mov    0x8(%ebp),%eax
08356aeb +0x0fbb:  add    $0x4b70,%eax
08356af0 +0x0fc0:  mov    %eax,(%esp)
08356af3 +0x0fc3:  call   0837c352 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbdf2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbdf2
08356af8 +0x0fc8:  mov    %esi,%eax
08356afa +0x0fca:  mov    %ebx,%edx
08356afc +0x0fcc:  jmp    08356afe <+0xfce>
08356afe +0x0fce:  mov    %edx,%ebx
08356b00 +0x0fd0:  mov    %eax,%esi
08356b02 +0x0fd2:  mov    0x8(%ebp),%eax
08356b05 +0x0fd5:  add    $0x4b18,%eax
08356b0a +0x0fda:  mov    %eax,(%esp)
08356b0d +0x0fdd:  call   0837c306 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbda6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbda6
08356b12 +0x0fe2:  mov    %esi,%eax
08356b14 +0x0fe4:  mov    %ebx,%edx
08356b16 +0x0fe6:  jmp    08356b18 <+0xfe8>
08356b18 +0x0fe8:  mov    %edx,%ebx
08356b1a +0x0fea:  mov    %eax,%esi
08356b1c +0x0fec:  mov    0x8(%ebp),%eax
08356b1f +0x0fef:  add    $0x4af4,%eax
08356b24 +0x0ff4:  mov    %eax,(%esp)
08356b27 +0x0ff7:  call   0837c2c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbd60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbd60
08356b2c +0x0ffc:  mov    %esi,%eax
08356b2e +0x0ffe:  mov    %ebx,%edx
08356b30 +0x1000:  jmp    08356b32 <+0x1002>
08356b32 +0x1002:  mov    %edx,%ebx
08356b34 +0x1004:  mov    %eax,%esi
08356b36 +0x1006:  mov    0x8(%ebp),%eax
08356b39 +0x1009:  add    $0x68,%eax
08356b3c +0x100c:  mov    %eax,(%esp)
08356b3f +0x100f:  call   0837bb42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xb5e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xb5e2
08356b44 +0x1014:  mov    %esi,%eax
08356b46 +0x1016:  mov    %ebx,%edx
08356b48 +0x1018:  jmp    08356b4a <+0x101a>
08356b4a +0x101a:  mov    %edx,%ebx
08356b4c +0x101c:  mov    %eax,%esi
08356b4e +0x101e:  mov    0x8(%ebp),%eax
08356b51 +0x1021:  add    $0x2c,%eax
08356b54 +0x1024:  mov    %eax,(%esp)
08356b57 +0x1027:  call   0837bb2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xb5ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xb5ce
08356b5c +0x102c:  mov    %esi,%eax
08356b5e +0x102e:  mov    %ebx,%edx
08356b60 +0x1030:  mov    %eax,(%esp)
08356b63 +0x1033:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CDataManager::CDataManager @ 0x8355b30

/* CDataManager::CDataManager() */

void __thiscall CDataManager::CDataManager(CDataManager *this)

{
  int iVar1;
  WorldDropInfo *pWVar2;
  vector<int,std::allocator<int>> *this_00;
  
  reseal_table_t::reseal_table_t((reseal_table_t *)(this + 0x2c));
                    /* try { // try from 08355b50 to 08355b54 has its CatchHandler @ 08356b4a */
  ServerParameterScript::ServerParameterScript((ServerParameterScript *)(this + 0x68));
  InGameAdvertisementScript::InGameAdvertisementScript((InGameAdvertisementScript *)(this + 0x4a5c))
  ;
                    /* try { // try from 08355b70 to 08355b74 has its CatchHandler @ 08356b32 */
  PcBangItemRentarData::PcBangItemRentarData((PcBangItemRentarData *)(this + 0x4af4));
                    /* try { // try from 08355b80 to 08355b84 has its CatchHandler @ 08356b18 */
  DimensionActivationData::DimensionActivationData((DimensionActivationData *)(this + 0x4b18));
                    /* try { // try from 08355b90 to 08355b94 has its CatchHandler @ 08356afe */
  seriaRoomDecoEventScript::seriaRoomDecoEventScript((seriaRoomDecoEventScript *)(this + 0x4b70));
                    /* try { // try from 08355ba0 to 08355ba4 has its CatchHandler @ 08356ae4 */
  growthEquipmentScript::growthEquipmentScript((growthEquipmentScript *)(this + 0x4bac));
                    /* try { // try from 08355bb0 to 08355bb4 has its CatchHandler @ 08356aca */
  createChracScript::createChracScript((createChracScript *)(this + 0x4bd4));
                    /* try { // try from 08355bc0 to 08355bc4 has its CatchHandler @ 08356ab0 */
  useCharacterJobFatigue::useCharacterJobFatigue((useCharacterJobFatigue *)(this + 0x4bec));
                    /* try { // try from 08355bd0 to 08355bd4 has its CatchHandler @ 08356a96 */
  CharacterCreateCreatureGiftScript::CharacterCreateCreatureGiftScript
            ((CharacterCreateCreatureGiftScript *)(this + 0x4c04));
                    /* try { // try from 08355be0 to 08355be4 has its CatchHandler @ 08356a7c */
  seriaRoomDecoAniEventScript::seriaRoomDecoAniEventScript
            ((seriaRoomDecoAniEventScript *)(this + 0x4c50));
                    /* try { // try from 08355bf0 to 08355bf4 has its CatchHandler @ 08356a62 */
  stUnlimitChallengeInfo::stUnlimitChallengeInfo((stUnlimitChallengeInfo *)(this + 0x4ca8));
                    /* try { // try from 08355c00 to 08355c04 has its CatchHandler @ 08356a48 */
  stLimitItemUsageInfoEx::stLimitItemUsageInfoEx((stLimitItemUsageInfoEx *)(this + 0x4cf8));
                    /* try { // try from 08355c10 to 08355c14 has its CatchHandler @ 08356a2e */
  std::vector<stDBLogItem,std::allocator<stDBLogItem>>::vector
            ((vector<stDBLogItem,std::allocator<stDBLogItem>> *)(this + 0x4d1c));
                    /* try { // try from 08355c20 to 08355c24 has its CatchHandler @ 08356a14 */
  CNPCRelationEventManager::CNPCRelationEventManager((CNPCRelationEventManager *)(this + 0x4d28));
                    /* try { // try from 08355c30 to 08355c34 has its CatchHandler @ 083569fa */
  stEmotionTypeTagsInfo::stEmotionTypeTagsInfo((stEmotionTypeTagsInfo *)(this + 0x4d44));
                    /* try { // try from 08355c40 to 08355c44 has its CatchHandler @ 083569e0 */
  stEquipmentGradeSample::stEquipmentGradeSample((stEquipmentGradeSample *)(this + 0x4d5c));
                    /* try { // try from 08355c50 to 08355c54 has its CatchHandler @ 083569c6 */
  stConditionEventInfo::stConditionEventInfo((stConditionEventInfo *)(this + 0x4d98));
                    /* try { // try from 08355c60 to 08355c64 has its CatchHandler @ 083569ac */
  ConditionLevelChkDungeon::ConditionLevelChkDungeon((ConditionLevelChkDungeon *)(this + 0x4de8));
                    /* try { // try from 08355c70 to 08355c74 has its CatchHandler @ 08356992 */
  FairPvPStatScript::FairPvPStatScript((FairPvPStatScript *)(this + 0x4df8));
                    /* try { // try from 08355c80 to 08355c84 has its CatchHandler @ 08356978 */
  RandomOptionScript::RandomOptionScript((RandomOptionScript *)(this + 0x4e10));
                    /* try { // try from 08355c90 to 08355c94 has its CatchHandler @ 0835695e */
  RegenerationROI::RegenerationROI((RegenerationROI *)(this + 0x5040));
                    /* try { // try from 08355ca0 to 08355ca4 has its CatchHandler @ 08356944 */
  stSeriaBlessingScript::stSeriaBlessingScript((stSeriaBlessingScript *)(this + 0x5094));
                    /* try { // try from 08355cb0 to 08355cb4 has its CatchHandler @ 0835692a */
  stLevelUpRewardItemScript::stLevelUpRewardItemScript((stLevelUpRewardItemScript *)(this + 0x50ac))
  ;
  stGrowthCapsuleScript::stGrowthCapsuleScript((stGrowthCapsuleScript *)(this + 0x50c4));
                    /* try { // try from 08355cd0 to 08355cd4 has its CatchHandler @ 08356910 */
  stRankSystemInfo::stRankSystemInfo((stRankSystemInfo *)(this + 0x5108));
                    /* try { // try from 08355ce0 to 08355ce4 has its CatchHandler @ 083568f6 */
  std::
  map<unsigned_int,stDeathTower_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stDeathTower_t>>>
  ::map((map<unsigned_int,stDeathTower_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stDeathTower_t>>>
         *)(this + 0x5180));
  stDeathTower_t::stDeathTower_t((stDeathTower_t *)(this + 0x5198));
                    /* try { // try from 08355d00 to 08355d04 has its CatchHandler @ 083568dc */
  stBloodDungeon_t::stBloodDungeon_t((stBloodDungeon_t *)(this + 0x5e30));
                    /* try { // try from 08355d10 to 08355d14 has its CatchHandler @ 083568c2 */
  stVillageAttacked_t::stVillageAttacked_t((stVillageAttacked_t *)(this + 0x61a0));
                    /* try { // try from 08355d20 to 08355d24 has its CatchHandler @ 083568a8 */
  APSystem::CActionPointEtcParameter::CActionPointEtcParameter
            ((CActionPointEtcParameter *)(this + 0x61ac));
                    /* try { // try from 08355d30 to 08355d34 has its CatchHandler @ 0835688e */
  APSystem::CActionPointEtcParameter::CActionPointEtcParameter
            ((CActionPointEtcParameter *)(this + 0x6224));
                    /* try { // try from 08355d40 to 08355d44 has its CatchHandler @ 08356874 */
  stCharacLinkSystem_t::stCharacLinkSystem_t((stCharacLinkSystem_t *)(this + 0x629c));
                    /* try { // try from 08355d50 to 08355d54 has its CatchHandler @ 0835685a */
  advancealtar::StageTimeLineParameter::StageTimeLineParameter
            ((StageTimeLineParameter *)(this + 0x62d0));
                    /* try { // try from 08355d60 to 08355d64 has its CatchHandler @ 08356840 */
  advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter
            ((AdvanceAltarShopParameter *)(this + 0x631c));
                    /* try { // try from 08355d70 to 08355d74 has its CatchHandler @ 08356826 */
  advancealtar::RewardParameter::RewardParameter((RewardParameter *)(this + 0x634c));
                    /* try { // try from 08355d80 to 08355d84 has its CatchHandler @ 0835680c */
  advancealtar::ConfigParameter::ConfigParameter((ConfigParameter *)(this + 0x6364));
                    /* try { // try from 08355d90 to 08355d94 has its CatchHandler @ 083567f2 */
  stQuestShop::stQuestShop((stQuestShop *)(this + 0x6398));
  pWVar2 = (WorldDropInfo *)(this + 0x6734);
  for (iVar1 = 200; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08355daa to 08355dae has its CatchHandler @ 08355dc1 */
    WorldDropInfo::WorldDropInfo(pWVar2);
    pWVar2 = pWVar2 + 0x14;
  }
  pWVar2 = (WorldDropInfo *)(this + 0x76e8);
  for (iVar1 = 200; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08355e10 to 08355e14 has its CatchHandler @ 08355e27 */
    WorldDropInfo::WorldDropInfo(pWVar2);
    pWVar2 = pWVar2 + 0x14;
  }
                    /* try { // try from 08355e6c to 08355e70 has its CatchHandler @ 08356762 */
  SlangNameData::SlangNameData((SlangNameData *)(this + 0x86a0));
                    /* try { // try from 08355e7c to 08355e80 has its CatchHandler @ 08356748 */
  InvalidCharData::InvalidCharData((InvalidCharData *)(this + 0x86c4));
                    /* try { // try from 08355e8c to 08355e90 has its CatchHandler @ 0835672e */
  std::
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  ::map((map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
         *)(this + 0x86f8));
                    /* try { // try from 08355e9c to 08355ea0 has its CatchHandler @ 08356714 */
  STGrowthPowerData::STGrowthPowerData((STGrowthPowerData *)(this + 0x8710));
                    /* try { // try from 08355eac to 08355eb0 has its CatchHandler @ 083566fa */
  AvatarVariation::AvatarColorInfo::AvatarColorInfo((AvatarColorInfo *)(this + 0x8740));
                    /* try { // try from 08355ebc to 08355ec0 has its CatchHandler @ 083566e0 */
  BoosterGageData::BoosterGageData((BoosterGageData *)(this + 0x8770));
                    /* try { // try from 08355ecc to 08355ed0 has its CatchHandler @ 083566c6 */
  CWorldMapList::CWorldMapList((CWorldMapList *)(this + 0x8780));
                    /* try { // try from 08355edc to 08355ee0 has its CatchHandler @ 083566ac */
  StageMapList::StageMapList((StageMapList *)(this + 0x8798));
                    /* try { // try from 08355eec to 08355ef0 has its CatchHandler @ 08356692 */
  WarAreaCounter::WarAreaCounter((WarAreaCounter *)(this + 0x87b4));
                    /* try { // try from 08355efc to 08355f00 has its CatchHandler @ 08356678 */
  std::string::string((string *)(this + 0x8cb8));
                    /* try { // try from 08355f0c to 08355f10 has its CatchHandler @ 0835665e */
  QuestParameterScript::QuestParameterScript((QuestParameterScript *)(this + 0x8cc8));
                    /* try { // try from 08355f1c to 08355f20 has its CatchHandler @ 08356644 */
  TrainingQuestScript::TrainingQuestScript((TrainingQuestScript *)(this + 0x8d34));
  this_00 = (vector<int,std::allocator<int>> *)(this + 0xa1c4);
  for (iVar1 = 0x45; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08355f36 to 08355f3a has its CatchHandler @ 08355f4d */
    std::vector<int,std::allocator<int>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
                    /* try { // try from 08355f91 to 08355f95 has its CatchHandler @ 083565ef */
  GuildParameterScript::GuildParameterScript((GuildParameterScript *)(this + 0xa50c));
                    /* try { // try from 08355fa1 to 08355fa5 has its CatchHandler @ 083565d5 */
  PowerParameterScript::PowerParameterScript((PowerParameterScript *)(this + 0xa628));
                    /* try { // try from 08355fb1 to 08355fb5 has its CatchHandler @ 083565bb */
  SecretShopScript::SecretShopScript((SecretShopScript *)(this + 0xa700));
                    /* try { // try from 08355fc1 to 08355fc5 has its CatchHandler @ 083565a1 */
  stTitleBookInfo::stTitleBookInfo((stTitleBookInfo *)(this + 0xa788));
                    /* try { // try from 08355fd1 to 08355fd5 has its CatchHandler @ 08356587 */
  AccountCargoScript::AccountCargoScript((AccountCargoScript *)(this + 0xa7e0));
                    /* try { // try from 08355fe1 to 08355fe5 has its CatchHandler @ 0835656d */
  PvPSkillTreeParameterScript::PvPSkillTreeParameterScript
            ((PvPSkillTreeParameterScript *)(this + 0xa800));
                    /* try { // try from 08355ff1 to 08355ff5 has its CatchHandler @ 08356553 */
  EventCharacterParameterScript::EventCharacterParameterScript
            ((EventCharacterParameterScript *)(this + 0xa86c));
                    /* try { // try from 08356001 to 08356005 has its CatchHandler @ 08356539 */
  IndependentDropParameterScript::IndependentDropParameterScript
            ((IndependentDropParameterScript *)(this + 0xa884));
                    /* try { // try from 08356011 to 08356015 has its CatchHandler @ 0835651f */
  std::string::string((string *)(this + 0xa8c0));
                    /* try { // try from 08356021 to 08356025 has its CatchHandler @ 08356505 */
  std::string::string((string *)(this + 0xa8c4));
                    /* try { // try from 08356031 to 08356035 has its CatchHandler @ 083564eb */
  std::string::string((string *)(this + 0xa8c8));
                    /* try { // try from 08356041 to 08356045 has its CatchHandler @ 083564d1 */
  std::string::string((string *)(this + 0xa8cc));
                    /* try { // try from 08356051 to 08356055 has its CatchHandler @ 083564b7 */
  stMercenarySystemInfo::stMercenarySystemInfo((stMercenarySystemInfo *)(this + 0xa8dc));
                    /* try { // try from 08356061 to 08356065 has its CatchHandler @ 0835649d */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa928)
            );
                    /* try { // try from 08356071 to 08356075 has its CatchHandler @ 08356483 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa940)
            );
                    /* try { // try from 08356081 to 08356085 has its CatchHandler @ 08356469 */
  channel_script_t::channel_script_t((channel_script_t *)(this + 0xb3f4));
                    /* try { // try from 08356091 to 08356095 has its CatchHandler @ 0835644f */
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::vector
            ((vector<stVendingMachine_t,std::allocator<stVendingMachine_t>> *)(this + 0xb424));
  pvp_channel_info_t::pvp_channel_info_t((pvp_channel_info_t *)(this + 0xb430));
                    /* try { // try from 083560b1 to 083560b5 has its CatchHandler @ 08356435 */
  stItemMakingSkill::stItemMakingSkill((stItemMakingSkill *)(this + 0xb458));
                    /* try { // try from 083560c1 to 083560c5 has its CatchHandler @ 0835641b */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xb488));
  ChoiceItemInfo::ChoiceItemInfo((ChoiceItemInfo *)(this + 0xb4a0));
                    /* try { // try from 083560e1 to 083560e5 has its CatchHandler @ 08356401 */
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
             (this + 0xb4ac));
  ImageCommunicationData::ImageCommunicationData((ImageCommunicationData *)(this + 0xb4c4));
                    /* try { // try from 08356101 to 08356105 has its CatchHandler @ 083563e7 */
  ARAD::SCRIPT::AradJumping_Script::AradJumping_Script((AradJumping_Script *)(this + 0xb4c8));
                    /* try { // try from 08356111 to 08356115 has its CatchHandler @ 083563cd */
  CLottery_NeedMoney::CLottery_NeedMoney((CLottery_NeedMoney *)(this + 0xb4d4));
                    /* try { // try from 08356121 to 08356125 has its CatchHandler @ 083563b3 */
  live_server_info_t::live_server_info_t((live_server_info_t *)(this + 0xb4ec));
                    /* try { // try from 08356131 to 08356135 has its CatchHandler @ 08356399 */
  EventAvatarListScript::EventAvatarListScript((EventAvatarListScript *)(this + 0xb508));
                    /* try { // try from 08356141 to 08356145 has its CatchHandler @ 0835637f */
  EventEtcScript::EventEtcScript((EventEtcScript *)(this + 0xb520));
                    /* try { // try from 08356151 to 08356155 has its CatchHandler @ 08356365 */
  std::string::string((string *)(this + 0xb544));
                    /* try { // try from 08356161 to 08356165 has its CatchHandler @ 0835634b */
  stReturnUserRewardScript::stReturnUserRewardScript((stReturnUserRewardScript *)(this + 0xb548));
                    /* try { // try from 08356171 to 08356175 has its CatchHandler @ 08356331 */
  stBingoScript::stBingoScript((stBingoScript *)(this + 0xb568));
                    /* try { // try from 08356181 to 08356185 has its CatchHandler @ 08356317 */
  stBroadCastItemScript::stBroadCastItemScript((stBroadCastItemScript *)(this + 0xb5bc));
                    /* try { // try from 08356191 to 08356195 has its CatchHandler @ 083562fd */
  stNewAccountLevelUpToJobScript::stNewAccountLevelUpToJobScript
            ((stNewAccountLevelUpToJobScript *)(this + 0xb5e0));
                    /* try { // try from 083561a1 to 083561a5 has its CatchHandler @ 083562e3 */
  eventReward::eventReward((eventReward *)(this + 0xb628));
                    /* try { // try from 083561b1 to 083561b5 has its CatchHandler @ 083562c9 */
  DeleteInvalidItemScript::DeleteInvalidItemScript((DeleteInvalidItemScript *)(this + 0xb658));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x8cc0) = 0;
  *(undefined4 *)(this + 0x86f4) = 0;
  *(undefined4 *)(this + 0x869c) = 0;
  *(undefined4 *)(this + 0x8cc4) = 0;
  *(undefined4 *)(this + 0xa8d0) = 0;
  *(undefined4 *)(this + 0xa8d4) = 0;
  *(undefined4 *)(this + 0x4d40) = 0;
  *(undefined4 *)(this + 0xb3ec) = 0x3f800000;
  *(undefined4 *)(this + 0xb3f0) = 0x3f800000;
  *(undefined4 *)(this + 0x6390) = 0;
  *(undefined4 *)(this + 0x6394) = 0;
  *(undefined4 *)(this + 0xb4a8) = 0;
  return;
}
```
