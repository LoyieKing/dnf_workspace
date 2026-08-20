# CVillageMonster

`_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii`

`global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to village_attacked::CVillageMonster` | `0x086b4ad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4ad6  _GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii
#           global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)
# range [0x086b4ad6, 0x086b6f1b]
086b4ad6 +0x0000:  push   %ebp
086b4ad7 +0x0001:  mov    %esp,%ebp
086b4ad9 +0x0003:  sub    $0x18,%esp
086b4adc +0x0006:  movl   $0xffff,0x4(%esp)
086b4ae4 +0x000e:  movl   $0x1,(%esp)
086b4aeb +0x0015:  call   086b4a96 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086b4af0 +0x001a:  leave
086b4af1 +0x001b:  ret
086b4af2 +0x001c:  push   %ebp
086b4af3 +0x001d:  mov    %esp,%ebp
086b4af5 +0x001f:  mov    0x8(%ebp),%eax
086b4af8 +0x0022:  movzbl (%eax),%edx
086b4afb +0x0025:  mov    0xc(%ebp),%eax
086b4afe +0x0028:  movzbl (%eax),%eax
086b4b01 +0x002b:  cmp    %al,%dl
086b4b03 +0x002d:  jae    086b4b0c <+0x36>
086b4b05 +0x002f:  mov    $0x1,%eax
086b4b0a +0x0034:  jmp    086b4b3a <+0x64>
086b4b0c +0x0036:  mov    0x8(%ebp),%eax
086b4b0f +0x0039:  movzbl (%eax),%edx
086b4b12 +0x003c:  mov    0xc(%ebp),%eax
086b4b15 +0x003f:  movzbl (%eax),%eax
086b4b18 +0x0042:  cmp    %al,%dl
086b4b1a +0x0044:  jne    086b4b35 <+0x5f>
086b4b1c +0x0046:  mov    0x8(%ebp),%eax
086b4b1f +0x0049:  movzbl 0x1(%eax),%edx
086b4b23 +0x004d:  mov    0xc(%ebp),%eax
086b4b26 +0x0050:  movzbl 0x1(%eax),%eax
086b4b2a +0x0054:  cmp    %al,%dl
086b4b2c +0x0056:  jae    086b4b35 <+0x5f>
086b4b2e +0x0058:  mov    $0x1,%eax
086b4b33 +0x005d:  jmp    086b4b3a <+0x64>
086b4b35 +0x005f:  mov    $0x0,%eax
086b4b3a +0x0064:  pop    %ebp
086b4b3b +0x0065:  ret
086b4b3c +0x0066:  push   %ebp
086b4b3d +0x0067:  mov    %esp,%ebp
086b4b3f +0x0069:  sub    $0x8,%esp
086b4b42 +0x006c:  mov    0xc(%ebp),%edx
086b4b45 +0x006f:  mov    0x10(%ebp),%eax
086b4b48 +0x0072:  mov    %dl,-0x4(%ebp)
086b4b4b +0x0075:  mov    %al,-0x8(%ebp)
086b4b4e +0x0078:  mov    0x8(%ebp),%eax
086b4b51 +0x007b:  movzbl -0x4(%ebp),%edx
086b4b55 +0x007f:  mov    %dl,(%eax)
086b4b57 +0x0081:  mov    0x8(%ebp),%eax
086b4b5a +0x0084:  movzbl -0x8(%ebp),%edx
086b4b5e +0x0088:  mov    %dl,0x1(%eax)
086b4b61 +0x008b:  leave
086b4b62 +0x008c:  ret
086b4b63 +0x008d:  nop
086b4b64 +0x008e:  push   %ebp
086b4b65 +0x008f:  mov    %esp,%ebp
086b4b67 +0x0091:  mov    0x8(%ebp),%eax
086b4b6a +0x0094:  movzwl (%eax),%eax
086b4b6d +0x0097:  pop    %ebp
086b4b6e +0x0098:  ret
086b4b6f +0x0099:  nop
086b4b70 +0x009a:  push   %ebp
086b4b71 +0x009b:  mov    %esp,%ebp
086b4b73 +0x009d:  sub    $0x18,%esp
086b4b76 +0x00a0:  mov    0x8(%ebp),%eax
086b4b79 +0x00a3:  mov    %eax,(%esp)
086b4b7c +0x00a6:  call   086b4cf2 <+0x21c>
086b4b81 +0x00ab:  leave
086b4b82 +0x00ac:  ret
086b4b83 +0x00ad:  nop
086b4b84 +0x00ae:  push   %ebp
086b4b85 +0x00af:  mov    %esp,%ebp
086b4b87 +0x00b1:  sub    $0x28,%esp
086b4b8a +0x00b4:  mov    0x8(%ebp),%eax
086b4b8d +0x00b7:  movl   $0x2b,0x8(%esp)
086b4b95 +0x00bf:  movl   $0x1772,0x4(%esp)
086b4b9d +0x00c7:  mov    %eax,(%esp)
086b4ba0 +0x00ca:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
086b4ba5 +0x00cf:  mov    0x8(%ebp),%eax
086b4ba8 +0x00d2:  movb   $0x0,0x2a(%eax)
086b4bac +0x00d6:  movl   $0x0,-0xc(%ebp)
086b4bb3 +0x00dd:  jmp    086b4bd8 <+0x102>
086b4bb5 +0x00df:  mov    -0xc(%ebp),%edx
086b4bb8 +0x00e2:  mov    0x8(%ebp),%eax
086b4bbb +0x00e5:  movl   $0x0,0xa(%eax,%edx,4)
086b4bc3 +0x00ed:  mov    -0xc(%ebp),%edx
086b4bc6 +0x00f0:  mov    0x8(%ebp),%eax
086b4bc9 +0x00f3:  add    $0x4,%edx
086b4bcc +0x00f6:  movl   $0x0,0xa(%eax,%edx,4)
086b4bd4 +0x00fe:  addl   $0x1,-0xc(%ebp)
086b4bd8 +0x0102:  cmpl   $0x3,-0xc(%ebp)
086b4bdc +0x0106:  setle  %al
086b4bdf +0x0109:  test   %al,%al
086b4be1 +0x010b:  jne    086b4bb5 <+0xdf>
086b4be3 +0x010d:  leave
086b4be4 +0x010e:  ret
086b4be5 +0x010f:  nop
086b4be6 +0x0110:  push   %ebp
086b4be7 +0x0111:  mov    %esp,%ebp
086b4be9 +0x0113:  mov    0x8(%ebp),%eax
086b4bec +0x0116:  mov    0x10(%eax),%eax
086b4bef +0x0119:  test   %eax,%eax
086b4bf1 +0x011b:  je     086b4c16 <+0x140>
086b4bf3 +0x011d:  mov    0x8(%ebp),%eax
086b4bf6 +0x0120:  mov    0x10(%eax),%eax
086b4bf9 +0x0123:  movzbl 0x1242(%eax),%edx
086b4c00 +0x012a:  add    $0x1,%edx
086b4c03 +0x012d:  mov    %dl,0x1242(%eax)
086b4c09 +0x0133:  mov    0x8(%ebp),%eax
086b4c0c +0x0136:  mov    0x10(%eax),%eax
086b4c0f +0x0139:  movb   $0x1,0x1244(%eax)
086b4c16 +0x0140:  pop    %ebp
086b4c17 +0x0141:  ret
086b4c18 +0x0142:  push   %ebp
086b4c19 +0x0143:  mov    %esp,%ebp
086b4c1b +0x0145:  sub    $0x4,%esp
086b4c1e +0x0148:  mov    0x8(%ebp),%eax
086b4c21 +0x014b:  add    $0x4,%eax
086b4c24 +0x014e:  mov    %eax,(%esp)
086b4c27 +0x0151:  call   086b3106 <_ZN16village_attacked15CVillageMonsterD1Ev>  ; village_attacked::CVillageMonster::~CVillageMonster()
086b4c2c +0x0156:  leave
086b4c2d +0x0157:  ret
086b4c2e +0x0158:  push   %ebp
086b4c2f +0x0159:  mov    %esp,%ebp
086b4c31 +0x015b:  sub    $0x4,%esp
086b4c34 +0x015e:  mov    0x8(%ebp),%eax
086b4c37 +0x0161:  add    $0x4,%eax
086b4c3a +0x0164:  mov    %eax,(%esp)
086b4c3d +0x0167:  call   086b3106 <_ZN16village_attacked15CVillageMonsterD1Ev>  ; village_attacked::CVillageMonster::~CVillageMonster()
086b4c42 +0x016c:  leave
086b4c43 +0x016d:  ret
086b4c44 +0x016e:  push   %ebp
086b4c45 +0x016f:  mov    %esp,%ebp
086b4c47 +0x0171:  push   %esi
086b4c48 +0x0172:  push   %ebx
086b4c49 +0x0173:  sub    $0x10,%esp
086b4c4c +0x0176:  mov    0x8(%ebp),%eax
086b4c4f +0x0179:  add    $0x1c,%eax
086b4c52 +0x017c:  mov    %eax,(%esp)
086b4c55 +0x017f:  call   08383490 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12f30>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12f30
086b4c5a +0x0184:  jmp    086b4c77 <+0x1a1>
086b4c5c +0x0186:  mov    %edx,%ebx
086b4c5e +0x0188:  mov    %eax,%esi
086b4c60 +0x018a:  mov    0x8(%ebp),%eax
086b4c63 +0x018d:  mov    %eax,(%esp)
086b4c66 +0x0190:  call   086b4b70 <+0x9a>
086b4c6b +0x0195:  mov    %esi,%eax
086b4c6d +0x0197:  mov    %ebx,%edx
086b4c6f +0x0199:  mov    %eax,(%esp)
086b4c72 +0x019c:  call   08ae3750 <_Unwind_Resume>
086b4c77 +0x01a1:  mov    0x8(%ebp),%eax
086b4c7a +0x01a4:  mov    %eax,(%esp)
086b4c7d +0x01a7:  call   086b4b70 <+0x9a>
086b4c82 +0x01ac:  add    $0x10,%esp
086b4c85 +0x01af:  pop    %ebx
086b4c86 +0x01b0:  pop    %esi
086b4c87 +0x01b1:  pop    %ebp
086b4c88 +0x01b2:  ret
086b4c89 +0x01b3:  nop
086b4c8a +0x01b4:  push   %ebp
086b4c8b +0x01b5:  mov    %esp,%ebp
086b4c8d +0x01b7:  sub    $0x18,%esp
086b4c90 +0x01ba:  mov    0x8(%ebp),%eax
086b4c93 +0x01bd:  add    $0x4,%eax
086b4c96 +0x01c0:  mov    %eax,(%esp)
086b4c99 +0x01c3:  call   086b4c44 <+0x16e>
086b4c9e +0x01c8:  leave
086b4c9f +0x01c9:  ret
086b4ca0 +0x01ca:  push   %ebp
086b4ca1 +0x01cb:  mov    %esp,%ebp
086b4ca3 +0x01cd:  sub    $0x18,%esp
086b4ca6 +0x01d0:  mov    0x8(%ebp),%eax
086b4ca9 +0x01d3:  add    $0x4,%eax
086b4cac +0x01d6:  mov    %eax,(%esp)
086b4caf +0x01d9:  call   086b4c44 <+0x16e>
086b4cb4 +0x01de:  leave
086b4cb5 +0x01df:  ret
086b4cb6 +0x01e0:  push   %ebp
086b4cb7 +0x01e1:  mov    %esp,%ebp
086b4cb9 +0x01e3:  sub    $0x18,%esp
086b4cbc +0x01e6:  mov    0x8(%ebp),%eax
086b4cbf +0x01e9:  mov    %eax,(%esp)
086b4cc2 +0x01ec:  call   086b54ee <+0xa18>
086b4cc7 +0x01f1:  leave
086b4cc8 +0x01f2:  ret
086b4cc9 +0x01f3:  nop
086b4cca +0x01f4:  push   %ebp
086b4ccb +0x01f5:  mov    %esp,%ebp
086b4ccd +0x01f7:  sub    $0x18,%esp
086b4cd0 +0x01fa:  mov    0x8(%ebp),%eax
086b4cd3 +0x01fd:  mov    %eax,(%esp)
086b4cd6 +0x0200:  call   086b5540 <+0xa6a>
086b4cdb +0x0205:  leave
086b4cdc +0x0206:  ret
086b4cdd +0x0207:  nop
086b4cde +0x0208:  push   %ebp
086b4cdf +0x0209:  mov    %esp,%ebp
086b4ce1 +0x020b:  sub    $0x18,%esp
086b4ce4 +0x020e:  mov    0x8(%ebp),%eax
086b4ce7 +0x0211:  mov    %eax,(%esp)
086b4cea +0x0214:  call   086b5554 <+0xa7e>
086b4cef +0x0219:  leave
086b4cf0 +0x021a:  ret
086b4cf1 +0x021b:  nop
086b4cf2 +0x021c:  push   %ebp
086b4cf3 +0x021d:  mov    %esp,%ebp
086b4cf5 +0x021f:  push   %esi
086b4cf6 +0x0220:  push   %ebx
086b4cf7 +0x0221:  sub    $0x10,%esp
086b4cfa +0x0224:  mov    0x8(%ebp),%eax
086b4cfd +0x0227:  mov    %eax,(%esp)
086b4d00 +0x022a:  call   086b55be <+0xae8>
086b4d05 +0x022f:  mov    %eax,0x4(%esp)
086b4d09 +0x0233:  mov    0x8(%ebp),%eax
086b4d0c +0x0236:  mov    %eax,(%esp)
086b4d0f +0x0239:  call   086b5568 <+0xa92>
086b4d14 +0x023e:  jmp    086b4d31 <+0x25b>
086b4d16 +0x0240:  mov    %edx,%ebx
086b4d18 +0x0242:  mov    %eax,%esi
086b4d1a +0x0244:  mov    0x8(%ebp),%eax
086b4d1d +0x0247:  mov    %eax,(%esp)
086b4d20 +0x024a:  call   086b4cde <+0x208>
086b4d25 +0x024f:  mov    %esi,%eax
086b4d27 +0x0251:  mov    %ebx,%edx
086b4d29 +0x0253:  mov    %eax,(%esp)
086b4d2c +0x0256:  call   08ae3750 <_Unwind_Resume>
086b4d31 +0x025b:  mov    0x8(%ebp),%eax
086b4d34 +0x025e:  mov    %eax,(%esp)
086b4d37 +0x0261:  call   086b4cde <+0x208>
086b4d3c +0x0266:  add    $0x10,%esp
086b4d3f +0x0269:  pop    %ebx
086b4d40 +0x026a:  pop    %esi
086b4d41 +0x026b:  pop    %ebp
086b4d42 +0x026c:  ret
086b4d43 +0x026d:  nop
086b4d44 +0x026e:  push   %ebp
086b4d45 +0x026f:  mov    %esp,%ebp
086b4d47 +0x0271:  push   %edi
086b4d48 +0x0272:  push   %esi
086b4d49 +0x0273:  push   %ebx
086b4d4a +0x0274:  sub    $0x5c,%esp
086b4d4d +0x0277:  mov    0xc(%ebp),%eax
086b4d50 +0x027a:  cmp    0x8(%ebp),%eax
086b4d53 +0x027d:  je     086b4fbe <+0x4e8>
086b4d59 +0x0283:  mov    0xc(%ebp),%eax
086b4d5c +0x0286:  mov    %eax,(%esp)
086b4d5f +0x0289:  call   083b1b22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4baee>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4baee
086b4d64 +0x028e:  mov    %eax,-0x20(%ebp)
086b4d67 +0x0291:  mov    0x8(%ebp),%eax
086b4d6a +0x0294:  mov    %eax,(%esp)
086b4d6d +0x0297:  call   086b55ca <+0xaf4>
086b4d72 +0x029c:  cmp    -0x20(%ebp),%eax
086b4d75 +0x029f:  setb   %al
086b4d78 +0x02a2:  test   %al,%al
086b4d7a +0x02a4:  je     086b4e56 <+0x380>
086b4d80 +0x02aa:  lea    -0x3c(%ebp),%eax
086b4d83 +0x02ad:  mov    0xc(%ebp),%edx
086b4d86 +0x02b0:  mov    %edx,0x4(%esp)
086b4d8a +0x02b4:  mov    %eax,(%esp)
086b4d8d +0x02b7:  call   083b1bf6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bbc2>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bbc2
086b4d92 +0x02bc:  sub    $0x4,%esp
086b4d95 +0x02bf:  lea    -0x38(%ebp),%eax
086b4d98 +0x02c2:  mov    0xc(%ebp),%edx
086b4d9b +0x02c5:  mov    %edx,0x4(%esp)
086b4d9f +0x02c9:  mov    %eax,(%esp)
086b4da2 +0x02cc:  call   083b1bca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bb96>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bb96
086b4da7 +0x02d1:  sub    $0x4,%esp
086b4daa +0x02d4:  mov    -0x3c(%ebp),%eax
086b4dad +0x02d7:  mov    %eax,0xc(%esp)
086b4db1 +0x02db:  mov    -0x38(%ebp),%eax
086b4db4 +0x02de:  mov    %eax,0x8(%esp)
086b4db8 +0x02e2:  mov    -0x20(%ebp),%eax
086b4dbb +0x02e5:  mov    %eax,0x4(%esp)
086b4dbf +0x02e9:  mov    0x8(%ebp),%eax
086b4dc2 +0x02ec:  mov    %eax,(%esp)
086b4dc5 +0x02ef:  call   086b55ec <+0xb16>
086b4dca +0x02f4:  mov    %eax,-0x1c(%ebp)
086b4dcd +0x02f7:  mov    0x8(%ebp),%eax
086b4dd0 +0x02fa:  mov    %eax,(%esp)
086b4dd3 +0x02fd:  call   0839b618 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x30b4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x30b4
086b4dd8 +0x0302:  mov    0x8(%ebp),%edx
086b4ddb +0x0305:  mov    0x4(%edx),%ecx
086b4dde +0x0308:  mov    0x8(%ebp),%edx
086b4de1 +0x030b:  mov    (%edx),%edx
086b4de3 +0x030d:  mov    %eax,0x8(%esp)
086b4de7 +0x0311:  mov    %ecx,0x4(%esp)
086b4deb +0x0315:  mov    %edx,(%esp)
086b4dee +0x0318:  call   0839b620 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x30bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x30bc
086b4df3 +0x031d:  mov    0x8(%ebp),%eax
086b4df6 +0x0320:  mov    0x8(%eax),%eax
086b4df9 +0x0323:  mov    %eax,%edx
086b4dfb +0x0325:  mov    0x8(%ebp),%eax
086b4dfe +0x0328:  mov    (%eax),%eax
086b4e00 +0x032a:  mov    %edx,%ecx
086b4e02 +0x032c:  sub    %eax,%ecx
086b4e04 +0x032e:  mov    %ecx,%eax
086b4e06 +0x0330:  sar    $0x2,%eax
086b4e09 +0x0333:  imul   $0xb6db6db7,%eax,%eax
086b4e0f +0x0339:  mov    %eax,%ecx
086b4e11 +0x033b:  mov    0x8(%ebp),%eax
086b4e14 +0x033e:  mov    (%eax),%edx
086b4e16 +0x0340:  mov    0x8(%ebp),%eax
086b4e19 +0x0343:  mov    %ecx,0x8(%esp)
086b4e1d +0x0347:  mov    %edx,0x4(%esp)
086b4e21 +0x034b:  mov    %eax,(%esp)
086b4e24 +0x034e:  call   083b751c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x514e8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x514e8
086b4e29 +0x0353:  mov    0x8(%ebp),%eax
086b4e2c +0x0356:  mov    -0x1c(%ebp),%edx
086b4e2f +0x0359:  mov    %edx,(%eax)
086b4e31 +0x035b:  mov    0x8(%ebp),%eax
086b4e34 +0x035e:  mov    (%eax),%edx
086b4e36 +0x0360:  mov    -0x20(%ebp),%eax
086b4e39 +0x0363:  shl    $0x2,%eax
086b4e3c +0x0366:  lea    0x0(,%eax,8),%ecx
086b4e43 +0x036d:  mov    %ecx,%ebx
086b4e45 +0x036f:  sub    %eax,%ebx
086b4e47 +0x0371:  mov    %ebx,%eax
086b4e49 +0x0373:  add    %eax,%edx
086b4e4b +0x0375:  mov    0x8(%ebp),%eax
086b4e4e +0x0378:  mov    %edx,0x8(%eax)
086b4e51 +0x037b:  jmp    086b4f9e <+0x4c8>
086b4e56 +0x0380:  mov    0x8(%ebp),%eax
086b4e59 +0x0383:  mov    %eax,(%esp)
086b4e5c +0x0386:  call   083b1b22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4baee>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4baee
086b4e61 +0x038b:  cmp    -0x20(%ebp),%eax
086b4e64 +0x038e:  setae  %al
086b4e67 +0x0391:  test   %al,%al
086b4e69 +0x0393:  je     086b4f0e <+0x438>
086b4e6f +0x0399:  mov    0x8(%ebp),%eax
086b4e72 +0x039c:  mov    %eax,(%esp)
086b4e75 +0x039f:  call   0839b618 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x30b4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x30b4
086b4e7a +0x03a4:  mov    %eax,%ebx
086b4e7c +0x03a6:  lea    -0x34(%ebp),%eax
086b4e7f +0x03a9:  mov    0x8(%ebp),%edx
086b4e82 +0x03ac:  mov    %edx,0x4(%esp)
086b4e86 +0x03b0:  mov    %eax,(%esp)
086b4e89 +0x03b3:  call   086b50d4 <+0x5fe>
086b4e8e +0x03b8:  sub    $0x4,%esp
086b4e91 +0x03bb:  lea    -0x2c(%ebp),%eax
086b4e94 +0x03be:  mov    0x8(%ebp),%edx
086b4e97 +0x03c1:  mov    %edx,0x4(%esp)
086b4e9b +0x03c5:  mov    %eax,(%esp)
086b4e9e +0x03c8:  call   086b50b0 <+0x5da>
086b4ea3 +0x03cd:  sub    $0x4,%esp
086b4ea6 +0x03d0:  lea    -0x28(%ebp),%eax
086b4ea9 +0x03d3:  mov    0xc(%ebp),%edx
086b4eac +0x03d6:  mov    %edx,0x4(%esp)
086b4eb0 +0x03da:  mov    %eax,(%esp)
086b4eb3 +0x03dd:  call   083b1bf6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bbc2>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bbc2
086b4eb8 +0x03e2:  sub    $0x4,%esp
086b4ebb +0x03e5:  lea    -0x24(%ebp),%eax
086b4ebe +0x03e8:  mov    0xc(%ebp),%edx
086b4ec1 +0x03eb:  mov    %edx,0x4(%esp)
086b4ec5 +0x03ef:  mov    %eax,(%esp)
086b4ec8 +0x03f2:  call   083b1bca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bb96>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bb96
086b4ecd +0x03f7:  sub    $0x4,%esp
086b4ed0 +0x03fa:  lea    -0x30(%ebp),%eax
086b4ed3 +0x03fd:  mov    -0x2c(%ebp),%edx
086b4ed6 +0x0400:  mov    %edx,0xc(%esp)
086b4eda +0x0404:  mov    -0x28(%ebp),%edx
086b4edd +0x0407:  mov    %edx,0x8(%esp)
086b4ee1 +0x040b:  mov    -0x24(%ebp),%edx
086b4ee4 +0x040e:  mov    %edx,0x4(%esp)
086b4ee8 +0x0412:  mov    %eax,(%esp)
086b4eeb +0x0415:  call   086b5676 <+0xba0>
086b4ef0 +0x041a:  sub    $0x4,%esp
086b4ef3 +0x041d:  mov    %ebx,0x8(%esp)
086b4ef7 +0x0421:  mov    -0x34(%ebp),%eax
086b4efa +0x0424:  mov    %eax,0x4(%esp)
086b4efe +0x0428:  mov    -0x30(%ebp),%eax
086b4f01 +0x042b:  mov    %eax,(%esp)
086b4f04 +0x042e:  call   086b56d3 <+0xbfd>
086b4f09 +0x0433:  jmp    086b4f9e <+0x4c8>
086b4f0e +0x0438:  mov    0x8(%ebp),%eax
086b4f11 +0x043b:  mov    (%eax),%ebx
086b4f13 +0x043d:  mov    0xc(%ebp),%eax
086b4f16 +0x0440:  mov    (%eax),%esi
086b4f18 +0x0442:  mov    0x8(%ebp),%eax
086b4f1b +0x0445:  mov    %eax,(%esp)
086b4f1e +0x0448:  call   083b1b22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4baee>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4baee
086b4f23 +0x044d:  shl    $0x2,%eax
086b4f26 +0x0450:  lea    0x0(,%eax,8),%edx
086b4f2d +0x0457:  mov    %edx,%ecx
086b4f2f +0x0459:  sub    %eax,%ecx
086b4f31 +0x045b:  mov    %ecx,%eax
086b4f33 +0x045d:  lea    (%esi,%eax,1),%edx
086b4f36 +0x0460:  mov    0xc(%ebp),%eax
086b4f39 +0x0463:  mov    (%eax),%eax
086b4f3b +0x0465:  mov    %ebx,0x8(%esp)
086b4f3f +0x0469:  mov    %edx,0x4(%esp)
086b4f43 +0x046d:  mov    %eax,(%esp)
086b4f46 +0x0470:  call   086b56ed <+0xc17>
086b4f4b +0x0475:  mov    0x8(%ebp),%eax
086b4f4e +0x0478:  mov    %eax,(%esp)
086b4f51 +0x047b:  call   0839b618 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x30b4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x30b4
086b4f56 +0x0480:  mov    %eax,%ebx
086b4f58 +0x0482:  mov    0x8(%ebp),%eax
086b4f5b +0x0485:  mov    0x4(%eax),%edi
086b4f5e +0x0488:  mov    0xc(%ebp),%eax
086b4f61 +0x048b:  mov    0x4(%eax),%esi
086b4f64 +0x048e:  mov    0xc(%ebp),%eax
086b4f67 +0x0491:  mov    (%eax),%eax
086b4f69 +0x0493:  mov    %eax,-0x4c(%ebp)
086b4f6c +0x0496:  mov    0x8(%ebp),%eax
086b4f6f +0x0499:  mov    %eax,(%esp)
086b4f72 +0x049c:  call   083b1b22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4baee>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4baee
086b4f77 +0x04a1:  shl    $0x2,%eax
086b4f7a +0x04a4:  lea    0x0(,%eax,8),%edx
086b4f81 +0x04ab:  mov    %edx,%ecx
086b4f83 +0x04ad:  sub    %eax,%ecx
086b4f85 +0x04af:  mov    %ecx,%eax
086b4f87 +0x04b1:  add    -0x4c(%ebp),%eax
086b4f8a +0x04b4:  mov    %ebx,0xc(%esp)
086b4f8e +0x04b8:  mov    %edi,0x8(%esp)
086b4f92 +0x04bc:  mov    %esi,0x4(%esp)
086b4f96 +0x04c0:  mov    %eax,(%esp)
086b4f99 +0x04c3:  call   086b5725 <+0xc4f>
086b4f9e +0x04c8:  mov    0x8(%ebp),%eax
086b4fa1 +0x04cb:  mov    (%eax),%edx
086b4fa3 +0x04cd:  mov    -0x20(%ebp),%eax
086b4fa6 +0x04d0:  shl    $0x2,%eax
086b4fa9 +0x04d3:  lea    0x0(,%eax,8),%ecx
086b4fb0 +0x04da:  mov    %ecx,%ebx
086b4fb2 +0x04dc:  sub    %eax,%ebx
086b4fb4 +0x04de:  mov    %ebx,%eax
086b4fb6 +0x04e0:  add    %eax,%edx
086b4fb8 +0x04e2:  mov    0x8(%ebp),%eax
086b4fbb +0x04e5:  mov    %edx,0x4(%eax)
086b4fbe +0x04e8:  mov    0x8(%ebp),%eax
086b4fc1 +0x04eb:  lea    -0xc(%ebp),%esp
086b4fc4 +0x04ee:  add    $0x0,%esp
086b4fc7 +0x04f1:  pop    %ebx
086b4fc8 +0x04f2:  pop    %esi
086b4fc9 +0x04f3:  pop    %edi
086b4fca +0x04f4:  pop    %ebp
086b4fcb +0x04f5:  ret
086b4fcc +0x04f6:  push   %ebp
086b4fcd +0x04f7:  mov    %esp,%ebp
086b4fcf +0x04f9:  push   %ebx
086b4fd0 +0x04fa:  sub    $0x14,%esp
086b4fd3 +0x04fd:  mov    0x8(%ebp),%ebx
086b4fd6 +0x0500:  mov    0xc(%ebp),%eax
086b4fd9 +0x0503:  mov    %eax,0x4(%esp)
086b4fdd +0x0507:  mov    %ebx,(%esp)
086b4fe0 +0x050a:  call   086b5746 <+0xc70>
086b4fe5 +0x050f:  sub    $0x4,%esp
086b4fe8 +0x0512:  mov    %ebx,%eax
086b4fea +0x0514:  mov    -0x4(%ebp),%ebx
086b4fed +0x0517:  leave
086b4fee +0x0518:  ret    $0x4
086b4ff1 +0x051b:  nop
086b4ff2 +0x051c:  push   %ebp
086b4ff3 +0x051d:  mov    %esp,%ebp
086b4ff5 +0x051f:  push   %ebx
086b4ff6 +0x0520:  sub    $0x14,%esp
086b4ff9 +0x0523:  mov    0x8(%ebp),%ebx
086b4ffc +0x0526:  mov    0xc(%ebp),%eax
086b4fff +0x0529:  mov    %eax,0x4(%esp)
086b5003 +0x052d:  mov    %ebx,(%esp)
086b5006 +0x0530:  call   086b576c <+0xc96>
086b500b +0x0535:  sub    $0x4,%esp
086b500e +0x0538:  mov    %ebx,%eax
086b5010 +0x053a:  mov    -0x4(%ebp),%ebx
086b5013 +0x053d:  leave
086b5014 +0x053e:  ret    $0x4
086b5017 +0x0541:  nop
086b5018 +0x0542:  push   %ebp
086b5019 +0x0543:  mov    %esp,%ebp
086b501b +0x0545:  mov    0x8(%ebp),%eax
086b501e +0x0548:  mov    (%eax),%edx
086b5020 +0x054a:  mov    0xc(%ebp),%eax
086b5023 +0x054d:  mov    (%eax),%eax
086b5025 +0x054f:  cmp    %eax,%edx
086b5027 +0x0551:  setne  %al
086b502a +0x0554:  pop    %ebp
086b502b +0x0555:  ret
086b502c +0x0556:  push   %ebp
086b502d +0x0557:  mov    %esp,%ebp
086b502f +0x0559:  sub    $0x18,%esp
086b5032 +0x055c:  mov    0x8(%ebp),%eax
086b5035 +0x055f:  mov    (%eax),%eax
086b5037 +0x0561:  mov    %eax,(%esp)
086b503a +0x0564:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
086b503f +0x0569:  mov    0x8(%ebp),%edx
086b5042 +0x056c:  mov    %eax,(%edx)
086b5044 +0x056e:  mov    0x8(%ebp),%eax
086b5047 +0x0571:  leave
086b5048 +0x0572:  ret
086b5049 +0x0573:  nop
086b504a +0x0574:  push   %ebp
086b504b +0x0575:  mov    %esp,%ebp
086b504d +0x0577:  mov    0x8(%ebp),%eax
086b5050 +0x057a:  mov    (%eax),%eax
086b5052 +0x057c:  add    $0x10,%eax
086b5055 +0x057f:  pop    %ebp
086b5056 +0x0580:  ret
086b5057 +0x0581:  nop
086b5058 +0x0582:  push   %ebp
086b5059 +0x0583:  mov    %esp,%ebp
086b505b +0x0585:  sub    $0x18,%esp
086b505e +0x0588:  mov    0x8(%ebp),%eax
086b5061 +0x058b:  mov    %eax,(%esp)
086b5064 +0x058e:  call   086b5792 <+0xcbc>
086b5069 +0x0593:  leave
086b506a +0x0594:  ret
086b506b +0x0595:  nop
086b506c +0x0596:  push   %ebp
086b506d +0x0597:  mov    %esp,%ebp
086b506f +0x0599:  sub    $0x28,%esp
086b5072 +0x059c:  lea    -0x10(%ebp),%eax
086b5075 +0x059f:  mov    0x8(%ebp),%edx
086b5078 +0x05a2:  mov    %edx,0x4(%esp)
086b507c +0x05a6:  mov    %eax,(%esp)
086b507f +0x05a9:  call   083b1bf6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bbc2>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bbc2
086b5084 +0x05ae:  sub    $0x4,%esp
086b5087 +0x05b1:  lea    -0xc(%ebp),%eax
086b508a +0x05b4:  mov    0x8(%ebp),%edx
086b508d +0x05b7:  mov    %edx,0x4(%esp)
086b5091 +0x05bb:  mov    %eax,(%esp)
086b5094 +0x05be:  call   083b1bca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bb96>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bb96
086b5099 +0x05c3:  sub    $0x4,%esp
086b509c +0x05c6:  lea    -0x10(%ebp),%eax
086b509f +0x05c9:  mov    %eax,0x4(%esp)
086b50a3 +0x05cd:  lea    -0xc(%ebp),%eax
086b50a6 +0x05d0:  mov    %eax,(%esp)
086b50a9 +0x05d3:  call   086b57a2 <+0xccc>
086b50ae +0x05d8:  leave
086b50af +0x05d9:  ret
086b50b0 +0x05da:  push   %ebp
086b50b1 +0x05db:  mov    %esp,%ebp
086b50b3 +0x05dd:  push   %ebx
086b50b4 +0x05de:  sub    $0x14,%esp
086b50b7 +0x05e1:  mov    0x8(%ebp),%ebx
086b50ba +0x05e4:  mov    0xc(%ebp),%eax
086b50bd +0x05e7:  mov    %eax,0x4(%esp)
086b50c1 +0x05eb:  mov    %ebx,(%esp)
086b50c4 +0x05ee:  call   086b57ce <+0xcf8>
086b50c9 +0x05f3:  mov    %ebx,%eax
086b50cb +0x05f5:  add    $0x14,%esp
086b50ce +0x05f8:  pop    %ebx
086b50cf +0x05f9:  pop    %ebp
086b50d0 +0x05fa:  ret    $0x4
086b50d3 +0x05fd:  nop
086b50d4 +0x05fe:  push   %ebp
086b50d5 +0x05ff:  mov    %esp,%ebp
086b50d7 +0x0601:  push   %ebx
086b50d8 +0x0602:  sub    $0x14,%esp
086b50db +0x0605:  mov    0x8(%ebp),%ebx
086b50de +0x0608:  mov    0xc(%ebp),%eax
086b50e1 +0x060b:  add    $0x4,%eax
086b50e4 +0x060e:  mov    %eax,0x4(%esp)
086b50e8 +0x0612:  mov    %ebx,(%esp)
086b50eb +0x0615:  call   086b57ce <+0xcf8>
086b50f0 +0x061a:  mov    %ebx,%eax
086b50f2 +0x061c:  add    $0x14,%esp
086b50f5 +0x061f:  pop    %ebx
086b50f6 +0x0620:  pop    %ebp
086b50f7 +0x0621:  ret    $0x4
086b50fa +0x0624:  push   %ebp
086b50fb +0x0625:  mov    %esp,%ebp
086b50fd +0x0627:  push   %ebx
086b50fe +0x0628:  sub    $0x14,%esp
086b5101 +0x062b:  mov    0x8(%ebp),%eax
086b5104 +0x062e:  mov    %eax,(%esp)
086b5107 +0x0631:  call   086b57de <+0xd08>
086b510c +0x0636:  mov    (%eax),%ebx
086b510e +0x0638:  mov    0xc(%ebp),%eax
086b5111 +0x063b:  mov    %eax,(%esp)
086b5114 +0x063e:  call   086b57de <+0xd08>
086b5119 +0x0643:  mov    (%eax),%eax
086b511b +0x0645:  cmp    %eax,%ebx
086b511d +0x0647:  setne  %al
086b5120 +0x064a:  add    $0x14,%esp
086b5123 +0x064d:  pop    %ebx
086b5124 +0x064e:  pop    %ebp
086b5125 +0x064f:  ret
086b5126 +0x0650:  push   %ebp
086b5127 +0x0651:  mov    %esp,%ebp
086b5129 +0x0653:  mov    0x8(%ebp),%eax
086b512c +0x0656:  mov    (%eax),%eax
086b512e +0x0658:  lea    0x1c(%eax),%edx
086b5131 +0x065b:  mov    0x8(%ebp),%eax
086b5134 +0x065e:  mov    %edx,(%eax)
086b5136 +0x0660:  mov    0x8(%ebp),%eax
086b5139 +0x0663:  pop    %ebp
086b513a +0x0664:  ret
086b513b +0x0665:  nop
086b513c +0x0666:  push   %ebp
086b513d +0x0667:  mov    %esp,%ebp
086b513f +0x0669:  mov    0x8(%ebp),%eax
086b5142 +0x066c:  mov    (%eax),%eax
086b5144 +0x066e:  pop    %ebp
086b5145 +0x066f:  ret
086b5146 +0x0670:  push   %ebp
086b5147 +0x0671:  mov    %esp,%ebp
086b5149 +0x0673:  mov    0x8(%ebp),%eax
086b514c +0x0676:  mov    (%eax),%eax
086b514e +0x0678:  lea    -0x1c(%eax),%edx
086b5151 +0x067b:  mov    0x8(%ebp),%eax
086b5154 +0x067e:  mov    %edx,(%eax)
086b5156 +0x0680:  mov    0x8(%ebp),%eax
086b5159 +0x0683:  pop    %ebp
086b515a +0x0684:  ret
086b515b +0x0685:  nop
086b515c +0x0686:  push   %ebp
086b515d +0x0687:  mov    %esp,%ebp
086b515f +0x0689:  sub    $0x18,%esp
086b5162 +0x068c:  mov    0x8(%ebp),%eax
086b5165 +0x068f:  mov    %eax,(%esp)
086b5168 +0x0692:  call   086b57e6 <+0xd10>
086b516d +0x0697:  leave
086b516e +0x0698:  ret
086b516f +0x0699:  push   %ebp
086b5170 +0x069a:  mov    %esp,%ebp
086b5172 +0x069c:  push   %edi
086b5173 +0x069d:  push   %esi
086b5174 +0x069e:  push   %ebx
086b5175 +0x069f:  sub    $0x2c,%esp
086b5178 +0x06a2:  mov    0x8(%ebp),%ebx
086b517b +0x06a5:  mov    %ebx,%edi
086b517d +0x06a7:  mov    0x10(%ebp),%eax
086b5180 +0x06aa:  mov    %eax,(%esp)
086b5183 +0x06ad:  call   086b57f1 <+0xd1b>
086b5188 +0x06b2:  mov    %eax,%esi
086b518a +0x06b4:  mov    0xc(%ebp),%eax
086b518d +0x06b7:  mov    %eax,(%esp)
086b5190 +0x06ba:  call   085c25d5 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x3b33>  ; global constructors keyed to CParty::cMember::cMember()+0x3b33
086b5195 +0x06bf:  movzwl (%eax),%eax
086b5198 +0x06c2:  mov    %ax,-0x1a(%ebp)
086b519c +0x06c6:  mov    %esi,0x8(%esp)
086b51a0 +0x06ca:  lea    -0x1a(%ebp),%eax
086b51a3 +0x06cd:  mov    %eax,0x4(%esp)
086b51a7 +0x06d1:  mov    %edi,(%esp)
086b51aa +0x06d4:  call   086b57fa <+0xd24>
086b51af +0x06d9:  mov    %ebx,%eax
086b51b1 +0x06db:  mov    %ebx,%eax
086b51b3 +0x06dd:  add    $0x2c,%esp
086b51b6 +0x06e0:  pop    %ebx
086b51b7 +0x06e1:  pop    %esi
086b51b8 +0x06e2:  pop    %edi
086b51b9 +0x06e3:  pop    %ebp
086b51ba +0x06e4:  ret    $0x4
086b51bd +0x06e7:  nop
086b51be +0x06e8:  push   %ebp
086b51bf +0x06e9:  mov    %esp,%ebp
086b51c1 +0x06eb:  sub    $0x18,%esp
086b51c4 +0x06ee:  mov    0xc(%ebp),%eax
086b51c7 +0x06f1:  mov    %eax,(%esp)
086b51ca +0x06f4:  call   08112442 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1954>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1954
086b51cf +0x06f9:  movzwl (%eax),%edx
086b51d2 +0x06fc:  mov    0x8(%ebp),%eax
086b51d5 +0x06ff:  mov    %dx,(%eax)
086b51d8 +0x0702:  mov    0xc(%ebp),%eax
086b51db +0x0705:  add    $0x4,%eax
086b51de +0x0708:  mov    %eax,(%esp)
086b51e1 +0x070b:  call   086b585f <+0xd89>
086b51e6 +0x0710:  mov    0x8(%ebp),%edx
086b51e9 +0x0713:  mov    (%eax),%ecx
086b51eb +0x0715:  mov    %ecx,0x4(%edx)
086b51ee +0x0718:  mov    0x4(%eax),%ecx
086b51f1 +0x071b:  mov    %ecx,0x8(%edx)
086b51f4 +0x071e:  mov    0x8(%eax),%ecx
086b51f7 +0x0721:  mov    %ecx,0xc(%edx)
086b51fa +0x0724:  mov    0xc(%eax),%ecx
086b51fd +0x0727:  mov    %ecx,0x10(%edx)
086b5200 +0x072a:  mov    0x10(%eax),%ecx
086b5203 +0x072d:  mov    %ecx,0x14(%edx)
086b5206 +0x0730:  mov    0x14(%eax),%ecx
086b5209 +0x0733:  mov    %ecx,0x18(%edx)
086b520c +0x0736:  mov    0x18(%eax),%ecx
086b520f +0x0739:  mov    %ecx,0x1c(%edx)
086b5212 +0x073c:  mov    0x1c(%eax),%ecx
086b5215 +0x073f:  mov    %ecx,0x20(%edx)
086b5218 +0x0742:  mov    0x20(%eax),%ecx
086b521b +0x0745:  mov    %ecx,0x24(%edx)
086b521e +0x0748:  mov    0x24(%eax),%eax
086b5221 +0x074b:  mov    %eax,0x28(%edx)
086b5224 +0x074e:  leave
086b5225 +0x074f:  ret
086b5226 +0x0750:  push   %ebp
086b5227 +0x0751:  mov    %esp,%ebp
086b5229 +0x0753:  push   %ebx
086b522a +0x0754:  sub    $0x14,%esp
086b522d +0x0757:  mov    0x8(%ebp),%ebx
086b5230 +0x075a:  mov    0xc(%ebp),%eax
086b5233 +0x075d:  mov    0x10(%ebp),%edx
086b5236 +0x0760:  mov    %edx,0x8(%esp)
086b523a +0x0764:  mov    %eax,0x4(%esp)
086b523e +0x0768:  mov    %ebx,(%esp)
086b5241 +0x076b:  call   086b5868 <+0xd92>
086b5246 +0x0770:  sub    $0x4,%esp
086b5249 +0x0773:  mov    %ebx,%eax
086b524b +0x0775:  mov    -0x4(%ebp),%ebx
086b524e +0x0778:  leave
086b524f +0x0779:  ret    $0x4
086b5252 +0x077c:  push   %ebp
086b5253 +0x077d:  mov    %esp,%ebp
086b5255 +0x077f:  sub    $0x18,%esp
086b5258 +0x0782:  mov    0x8(%ebp),%eax
086b525b +0x0785:  mov    %eax,(%esp)
086b525e +0x0788:  call   086b5a38 <+0xf62>
086b5263 +0x078d:  leave
086b5264 +0x078e:  ret
086b5265 +0x078f:  nop
086b5266 +0x0790:  push   %ebp
086b5267 +0x0791:  mov    %esp,%ebp
086b5269 +0x0793:  push   %ebx
086b526a +0x0794:  sub    $0x14,%esp
086b526d +0x0797:  mov    0x8(%ebp),%ebx
086b5270 +0x079a:  mov    0xc(%ebp),%eax
086b5273 +0x079d:  mov    0x10(%ebp),%edx
086b5276 +0x07a0:  mov    %edx,0x8(%esp)
086b527a +0x07a4:  mov    %eax,0x4(%esp)
086b527e +0x07a8:  mov    %ebx,(%esp)
086b5281 +0x07ab:  call   086b5aae <+0xfd8>
086b5286 +0x07b0:  sub    $0x4,%esp
086b5289 +0x07b3:  mov    %ebx,%eax
086b528b +0x07b5:  mov    -0x4(%ebp),%ebx
086b528e +0x07b8:  leave
086b528f +0x07b9:  ret    $0x4
086b5292 +0x07bc:  push   %ebp
086b5293 +0x07bd:  mov    %esp,%ebp
086b5295 +0x07bf:  sub    $0x18,%esp
086b5298 +0x07c2:  mov    0x8(%ebp),%eax
086b529b +0x07c5:  mov    0xc(%ebp),%edx
086b529e +0x07c8:  mov    %edx,0x4(%esp)
086b52a2 +0x07cc:  mov    %eax,(%esp)
086b52a5 +0x07cf:  call   086b5b6c <+0x1096>
086b52aa +0x07d4:  leave
086b52ab +0x07d5:  ret
086b52ac +0x07d6:  push   %ebp
086b52ad +0x07d7:  mov    %esp,%ebp
086b52af +0x07d9:  push   %edi
086b52b0 +0x07da:  push   %esi
086b52b1 +0x07db:  push   %ebx
086b52b2 +0x07dc:  sub    $0x1c,%esp
086b52b5 +0x07df:  mov    0x8(%ebp),%ebx
086b52b8 +0x07e2:  mov    %ebx,%edi
086b52ba +0x07e4:  mov    0x10(%ebp),%eax
086b52bd +0x07e7:  mov    %eax,(%esp)
086b52c0 +0x07ea:  call   086b5bb5 <+0x10df>
086b52c5 +0x07ef:  mov    %eax,%esi
086b52c7 +0x07f1:  mov    0xc(%ebp),%eax
086b52ca +0x07f4:  mov    %eax,(%esp)
086b52cd +0x07f7:  call   086b5bad <+0x10d7>
086b52d2 +0x07fc:  mov    %esi,0x8(%esp)
086b52d6 +0x0800:  mov    %eax,0x4(%esp)
086b52da +0x0804:  mov    %edi,(%esp)
086b52dd +0x0807:  call   086b5bbe <+0x10e8>
086b52e2 +0x080c:  mov    %ebx,%eax
086b52e4 +0x080e:  mov    %ebx,%eax
086b52e6 +0x0810:  add    $0x1c,%esp
086b52e9 +0x0813:  pop    %ebx
086b52ea +0x0814:  pop    %esi
086b52eb +0x0815:  pop    %edi
086b52ec +0x0816:  pop    %ebp
086b52ed +0x0817:  ret    $0x4
086b52f0 +0x081a:  push   %ebp
086b52f1 +0x081b:  mov    %esp,%ebp
086b52f3 +0x081d:  push   %esi
086b52f4 +0x081e:  push   %ebx
086b52f5 +0x081f:  sub    $0x10,%esp
086b52f8 +0x0822:  mov    0xc(%ebp),%edx
086b52fb +0x0825:  mov    0x8(%ebp),%eax
086b52fe +0x0828:  mov    %edx,0x4(%esp)
086b5302 +0x082c:  mov    %eax,(%esp)
086b5305 +0x082f:  call   086b5c08 <+0x1132>
086b530a +0x0834:  mov    0xc(%ebp),%eax
086b530d +0x0837:  mov    0x18(%eax),%edx
086b5310 +0x083a:  mov    0x8(%ebp),%eax
086b5313 +0x083d:  mov    %edx,0x18(%eax)
086b5316 +0x0840:  mov    0xc(%ebp),%eax
086b5319 +0x0843:  lea    0x1c(%eax),%edx
086b531c +0x0846:  mov    0x8(%ebp),%eax
086b531f +0x0849:  add    $0x1c,%eax
086b5322 +0x084c:  mov    %edx,0x4(%esp)
086b5326 +0x0850:  mov    %eax,(%esp)
086b5329 +0x0853:  call   08394194 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x23c34>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x23c34
086b532e +0x0858:  mov    0xc(%ebp),%eax
086b5331 +0x085b:  mov    0x28(%eax),%edx
086b5334 +0x085e:  mov    0x8(%ebp),%eax
086b5337 +0x0861:  mov    %edx,0x28(%eax)
086b533a +0x0864:  mov    0xc(%ebp),%eax
086b533d +0x0867:  mov    0x2c(%eax),%edx
086b5340 +0x086a:  mov    0x8(%ebp),%eax
086b5343 +0x086d:  mov    %edx,0x2c(%eax)
086b5346 +0x0870:  mov    0xc(%ebp),%eax
086b5349 +0x0873:  mov    0x30(%eax),%edx
086b534c +0x0876:  mov    0x8(%ebp),%eax
086b534f +0x0879:  mov    %edx,0x30(%eax)
086b5352 +0x087c:  mov    0xc(%ebp),%eax
086b5355 +0x087f:  mov    0x34(%eax),%edx
086b5358 +0x0882:  mov    0x8(%ebp),%eax
086b535b +0x0885:  mov    %edx,0x34(%eax)
086b535e +0x0888:  mov    0xc(%ebp),%eax
086b5361 +0x088b:  mov    0x38(%eax),%edx
086b5364 +0x088e:  mov    0x8(%ebp),%eax
086b5367 +0x0891:  mov    %edx,0x38(%eax)
086b536a +0x0894:  add    $0x10,%esp
086b536d +0x0897:  pop    %ebx
086b536e +0x0898:  pop    %esi
086b536f +0x0899:  pop    %ebp
086b5370 +0x089a:  ret
086b5371 +0x089b:  mov    %edx,%ebx
086b5373 +0x089d:  mov    %eax,%esi
086b5375 +0x089f:  mov    0x8(%ebp),%eax
086b5378 +0x08a2:  mov    %eax,(%esp)
086b537b +0x08a5:  call   086b4b70 <+0x9a>
086b5380 +0x08aa:  mov    %esi,%eax
086b5382 +0x08ac:  mov    %ebx,%edx
086b5384 +0x08ae:  mov    %eax,(%esp)
086b5387 +0x08b1:  call   08ae3750 <_Unwind_Resume>
086b538c +0x08b6:  push   %ebp
086b538d +0x08b7:  mov    %esp,%ebp
086b538f +0x08b9:  push   %ebx
086b5390 +0x08ba:  sub    $0x14,%esp
086b5393 +0x08bd:  mov    0x8(%ebp),%ebx
086b5396 +0x08c0:  mov    0xc(%ebp),%eax
086b5399 +0x08c3:  mov    %eax,(%esp)
086b539c +0x08c6:  call   086b5bf7 <+0x1121>
086b53a1 +0x08cb:  movzwl (%eax),%eax
086b53a4 +0x08ce:  mov    %ax,(%ebx)
086b53a7 +0x08d1:  mov    0xc(%ebp),%eax
086b53aa +0x08d4:  add    $0x4,%eax
086b53ad +0x08d7:  mov    %eax,(%esp)
086b53b0 +0x08da:  call   086b5bff <+0x1129>
086b53b5 +0x08df:  mov    0x8(%ebp),%edx
086b53b8 +0x08e2:  add    $0x4,%edx
086b53bb +0x08e5:  mov    %eax,0x4(%esp)
086b53bf +0x08e9:  mov    %edx,(%esp)
086b53c2 +0x08ec:  call   086b52f0 <+0x81a>
086b53c7 +0x08f1:  add    $0x14,%esp
086b53ca +0x08f4:  pop    %ebx
086b53cb +0x08f5:  pop    %ebp
086b53cc +0x08f6:  ret
086b53cd +0x08f7:  nop
086b53ce +0x08f8:  push   %ebp
086b53cf +0x08f9:  mov    %esp,%ebp
086b53d1 +0x08fb:  push   %ebx
086b53d2 +0x08fc:  sub    $0x14,%esp
086b53d5 +0x08ff:  mov    0x8(%ebp),%ebx
086b53d8 +0x0902:  mov    0xc(%ebp),%eax
086b53db +0x0905:  mov    0x10(%ebp),%edx
086b53de +0x0908:  mov    %edx,0x8(%esp)
086b53e2 +0x090c:  mov    %eax,0x4(%esp)
086b53e6 +0x0910:  mov    %ebx,(%esp)
086b53e9 +0x0913:  call   086b5c22 <+0x114c>
086b53ee +0x0918:  sub    $0x4,%esp
086b53f1 +0x091b:  mov    %ebx,%eax
086b53f3 +0x091d:  mov    -0x4(%ebp),%ebx
086b53f6 +0x0920:  leave
086b53f7 +0x0921:  ret    $0x4
086b53fa +0x0924:  push   %ebp
086b53fb +0x0925:  mov    %esp,%ebp
086b53fd +0x0927:  push   %ebx
086b53fe +0x0928:  sub    $0x14,%esp
086b5401 +0x092b:  mov    0x8(%ebp),%ebx
086b5404 +0x092e:  mov    0xc(%ebp),%eax
086b5407 +0x0931:  mov    %eax,0x4(%esp)
086b540b +0x0935:  mov    %ebx,(%esp)
086b540e +0x0938:  call   086b5df2 <+0x131c>
086b5413 +0x093d:  sub    $0x4,%esp
086b5416 +0x0940:  mov    %ebx,%eax
086b5418 +0x0942:  mov    -0x4(%ebp),%ebx
086b541b +0x0945:  leave
086b541c +0x0946:  ret    $0x4
086b541f +0x0949:  nop
086b5420 +0x094a:  push   %ebp
086b5421 +0x094b:  mov    %esp,%ebp
086b5423 +0x094d:  push   %ebx
086b5424 +0x094e:  sub    $0x14,%esp
086b5427 +0x0951:  mov    0x8(%ebp),%ebx
086b542a +0x0954:  mov    0xc(%ebp),%eax
086b542d +0x0957:  mov    %eax,0x4(%esp)
086b5431 +0x095b:  mov    %ebx,(%esp)
086b5434 +0x095e:  call   086b5e18 <+0x1342>
086b5439 +0x0963:  sub    $0x4,%esp
086b543c +0x0966:  mov    %ebx,%eax
086b543e +0x0968:  mov    -0x4(%ebp),%ebx
086b5441 +0x096b:  leave
086b5442 +0x096c:  ret    $0x4
086b5445 +0x096f:  nop
086b5446 +0x0970:  push   %ebp
086b5447 +0x0971:  mov    %esp,%ebp
086b5449 +0x0973:  mov    0x8(%ebp),%eax
086b544c +0x0976:  mov    (%eax),%edx
086b544e +0x0978:  mov    0xc(%ebp),%eax
086b5451 +0x097b:  mov    (%eax),%eax
086b5453 +0x097d:  cmp    %eax,%edx
086b5455 +0x097f:  setne  %al
086b5458 +0x0982:  pop    %ebp
086b5459 +0x0983:  ret
086b545a +0x0984:  push   %ebp
086b545b +0x0985:  mov    %esp,%ebp
086b545d +0x0987:  sub    $0x18,%esp
086b5460 +0x098a:  mov    0x8(%ebp),%eax
086b5463 +0x098d:  mov    (%eax),%eax
086b5465 +0x098f:  mov    %eax,(%esp)
086b5468 +0x0992:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
086b546d +0x0997:  mov    0x8(%ebp),%edx
086b5470 +0x099a:  mov    %eax,(%edx)
086b5472 +0x099c:  mov    0x8(%ebp),%eax
086b5475 +0x099f:  leave
086b5476 +0x09a0:  ret
086b5477 +0x09a1:  nop
086b5478 +0x09a2:  push   %ebp
086b5479 +0x09a3:  mov    %esp,%ebp
086b547b +0x09a5:  mov    0x8(%ebp),%eax
086b547e +0x09a8:  mov    (%eax),%eax
086b5480 +0x09aa:  add    $0x10,%eax
086b5483 +0x09ad:  pop    %ebp
086b5484 +0x09ae:  ret
086b5485 +0x09af:  nop
086b5486 +0x09b0:  push   %ebp
086b5487 +0x09b1:  mov    %esp,%ebp
086b5489 +0x09b3:  push   %ebx
086b548a +0x09b4:  sub    $0x14,%esp
086b548d +0x09b7:  mov    0x8(%ebp),%ebx
086b5490 +0x09ba:  mov    0xc(%ebp),%eax
086b5493 +0x09bd:  mov    0x10(%ebp),%edx
086b5496 +0x09c0:  mov    %edx,0x8(%esp)
086b549a +0x09c4:  mov    %eax,0x4(%esp)
086b549e +0x09c8:  mov    %ebx,(%esp)
086b54a1 +0x09cb:  call   086b5e3e <+0x1368>
086b54a6 +0x09d0:  sub    $0x4,%esp
086b54a9 +0x09d3:  mov    %ebx,%eax
086b54ab +0x09d5:  mov    -0x4(%ebp),%ebx
086b54ae +0x09d8:  leave
086b54af +0x09d9:  ret    $0x4
086b54b2 +0x09dc:  push   %ebp
086b54b3 +0x09dd:  mov    %esp,%ebp
086b54b5 +0x09df:  mov    0x8(%ebp),%eax
086b54b8 +0x09e2:  mov    (%eax),%edx
086b54ba +0x09e4:  mov    0xc(%ebp),%eax
086b54bd +0x09e7:  mov    (%eax),%eax
086b54bf +0x09e9:  cmp    %eax,%edx
086b54c1 +0x09eb:  sete   %al
086b54c4 +0x09ee:  pop    %ebp
086b54c5 +0x09ef:  ret
086b54c6 +0x09f0:  push   %ebp
086b54c7 +0x09f1:  mov    %esp,%ebp
086b54c9 +0x09f3:  sub    $0x18,%esp
086b54cc +0x09f6:  mov    0x8(%ebp),%eax
086b54cf +0x09f9:  mov    %eax,(%esp)
086b54d2 +0x09fc:  call   086b5efc <+0x1426>
086b54d7 +0x0a01:  leave
086b54d8 +0x0a02:  ret
086b54d9 +0x0a03:  nop
086b54da +0x0a04:  push   %ebp
086b54db +0x0a05:  mov    %esp,%ebp
086b54dd +0x0a07:  sub    $0x18,%esp
086b54e0 +0x0a0a:  mov    0x8(%ebp),%eax
086b54e3 +0x0a0d:  mov    %eax,(%esp)
086b54e6 +0x0a10:  call   086b5f10 <+0x143a>
086b54eb +0x0a15:  leave
086b54ec +0x0a16:  ret
086b54ed +0x0a17:  nop
086b54ee +0x0a18:  push   %ebp
086b54ef +0x0a19:  mov    %esp,%ebp
086b54f1 +0x0a1b:  push   %esi
086b54f2 +0x0a1c:  push   %ebx
086b54f3 +0x0a1d:  sub    $0x10,%esp
086b54f6 +0x0a20:  mov    0x8(%ebp),%eax
086b54f9 +0x0a23:  mov    %eax,(%esp)
086b54fc +0x0a26:  call   086b5f7a <+0x14a4>
086b5501 +0x0a2b:  mov    %eax,0x4(%esp)
086b5505 +0x0a2f:  mov    0x8(%ebp),%eax
086b5508 +0x0a32:  mov    %eax,(%esp)
086b550b +0x0a35:  call   086b5f24 <+0x144e>
086b5510 +0x0a3a:  jmp    086b552d <+0xa57>
086b5512 +0x0a3c:  mov    %edx,%ebx
086b5514 +0x0a3e:  mov    %eax,%esi
086b5516 +0x0a40:  mov    0x8(%ebp),%eax
086b5519 +0x0a43:  mov    %eax,(%esp)
086b551c +0x0a46:  call   086b54da <+0xa04>
086b5521 +0x0a4b:  mov    %esi,%eax
086b5523 +0x0a4d:  mov    %ebx,%edx
086b5525 +0x0a4f:  mov    %eax,(%esp)
086b5528 +0x0a52:  call   08ae3750 <_Unwind_Resume>
086b552d +0x0a57:  mov    0x8(%ebp),%eax
086b5530 +0x0a5a:  mov    %eax,(%esp)
086b5533 +0x0a5d:  call   086b54da <+0xa04>
086b5538 +0x0a62:  add    $0x10,%esp
086b553b +0x0a65:  pop    %ebx
086b553c +0x0a66:  pop    %esi
086b553d +0x0a67:  pop    %ebp
086b553e +0x0a68:  ret
086b553f +0x0a69:  nop
086b5540 +0x0a6a:  push   %ebp
086b5541 +0x0a6b:  mov    %esp,%ebp
086b5543 +0x0a6d:  sub    $0x18,%esp
086b5546 +0x0a70:  mov    0x8(%ebp),%eax
086b5549 +0x0a73:  mov    %eax,(%esp)
086b554c +0x0a76:  call   086b5f86 <+0x14b0>
086b5551 +0x0a7b:  leave
086b5552 +0x0a7c:  ret
086b5553 +0x0a7d:  nop
086b5554 +0x0a7e:  push   %ebp
086b5555 +0x0a7f:  mov    %esp,%ebp
086b5557 +0x0a81:  sub    $0x18,%esp
086b555a +0x0a84:  mov    0x8(%ebp),%eax
086b555d +0x0a87:  mov    %eax,(%esp)
086b5560 +0x0a8a:  call   086b5fd6 <+0x1500>
086b5565 +0x0a8f:  leave
086b5566 +0x0a90:  ret
086b5567 +0x0a91:  nop
086b5568 +0x0a92:  push   %ebp
086b5569 +0x0a93:  mov    %esp,%ebp
086b556b +0x0a95:  sub    $0x28,%esp
086b556e +0x0a98:  jmp    086b55b0 <+0xada>
086b5570 +0x0a9a:  mov    0xc(%ebp),%eax
086b5573 +0x0a9d:  mov    %eax,(%esp)
086b5576 +0x0aa0:  call   086b5fdb <+0x1505>
086b557b +0x0aa5:  mov    %eax,0x4(%esp)
086b557f +0x0aa9:  mov    0x8(%ebp),%eax
086b5582 +0x0aac:  mov    %eax,(%esp)
086b5585 +0x0aaf:  call   086b5568 <+0xa92>
086b558a +0x0ab4:  mov    0xc(%ebp),%eax
086b558d +0x0ab7:  mov    %eax,(%esp)
086b5590 +0x0aba:  call   086b5fe6 <+0x1510>
086b5595 +0x0abf:  mov    %eax,-0xc(%ebp)
086b5598 +0x0ac2:  mov    0xc(%ebp),%eax
086b559b +0x0ac5:  mov    %eax,0x4(%esp)
086b559f +0x0ac9:  mov    0x8(%ebp),%eax
086b55a2 +0x0acc:  mov    %eax,(%esp)
086b55a5 +0x0acf:  call   086b5ff2 <+0x151c>
086b55aa +0x0ad4:  mov    -0xc(%ebp),%eax
086b55ad +0x0ad7:  mov    %eax,0xc(%ebp)
086b55b0 +0x0ada:  cmpl   $0x0,0xc(%ebp)
086b55b4 +0x0ade:  setne  %al
086b55b7 +0x0ae1:  test   %al,%al
086b55b9 +0x0ae3:  jne    086b5570 <+0xa9a>
086b55bb +0x0ae5:  leave
086b55bc +0x0ae6:  ret
086b55bd +0x0ae7:  nop
086b55be +0x0ae8:  push   %ebp
086b55bf +0x0ae9:  mov    %esp,%ebp
086b55c1 +0x0aeb:  mov    0x8(%ebp),%eax
086b55c4 +0x0aee:  mov    0x8(%eax),%eax
086b55c7 +0x0af1:  pop    %ebp
086b55c8 +0x0af2:  ret
086b55c9 +0x0af3:  nop
086b55ca +0x0af4:  push   %ebp
086b55cb +0x0af5:  mov    %esp,%ebp
086b55cd +0x0af7:  mov    0x8(%ebp),%eax
086b55d0 +0x0afa:  mov    0x8(%eax),%eax
086b55d3 +0x0afd:  mov    %eax,%edx
086b55d5 +0x0aff:  mov    0x8(%ebp),%eax
086b55d8 +0x0b02:  mov    (%eax),%eax
086b55da +0x0b04:  mov    %edx,%ecx
086b55dc +0x0b06:  sub    %eax,%ecx
086b55de +0x0b08:  mov    %ecx,%eax
086b55e0 +0x0b0a:  sar    $0x2,%eax
086b55e3 +0x0b0d:  imul   $0xb6db6db7,%eax,%eax
086b55e9 +0x0b13:  pop    %ebp
086b55ea +0x0b14:  ret
086b55eb +0x0b15:  nop
086b55ec +0x0b16:  push   %ebp
086b55ed +0x0b17:  mov    %esp,%ebp
086b55ef +0x0b19:  push   %esi
086b55f0 +0x0b1a:  push   %ebx
086b55f1 +0x0b1b:  sub    $0x20,%esp
086b55f4 +0x0b1e:  mov    0x8(%ebp),%eax
086b55f7 +0x0b21:  mov    0xc(%ebp),%edx
086b55fa +0x0b24:  mov    %edx,0x4(%esp)
086b55fe +0x0b28:  mov    %eax,(%esp)
086b5601 +0x0b2b:  call   083c8a04 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x629d0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x629d0
086b5606 +0x0b30:  mov    %eax,-0xc(%ebp)
086b5609 +0x0b33:  mov    0x8(%ebp),%eax
086b560c +0x0b36:  mov    %eax,(%esp)
086b560f +0x0b39:  call   0839b618 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x30b4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x30b4
086b5614 +0x0b3e:  mov    %eax,0xc(%esp)
086b5618 +0x0b42:  mov    -0xc(%ebp),%eax
086b561b +0x0b45:  mov    %eax,0x8(%esp)
086b561f +0x0b49:  mov    0x14(%ebp),%eax
086b5622 +0x0b4c:  mov    %eax,0x4(%esp)
086b5626 +0x0b50:  mov    0x10(%ebp),%eax
086b5629 +0x0b53:  mov    %eax,(%esp)
086b562c +0x0b56:  call   083b1c22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x4bbee>  ; global constructors keyed to CServerEvent::m_nExpRate+0x4bbee
086b5631 +0x0b5b:  mov    -0xc(%ebp),%eax
086b5634 +0x0b5e:  add    $0x20,%esp
086b5637 +0x0b61:  pop    %ebx
086b5638 +0x0b62:  pop    %esi
086b5639 +0x0b63:  pop    %ebp
086b563a +0x0b64:  ret
086b563b +0x0b65:  mov    %eax,(%esp)
086b563e +0x0b68:  call   08725ce0 <__cxa_begin_catch>
086b5643 +0x0b6d:  mov    0x8(%ebp),%eax
086b5646 +0x0b70:  mov    0xc(%ebp),%edx
086b5649 +0x0b73:  mov    %edx,0x8(%esp)
086b564d +0x0b77:  mov    -0xc(%ebp),%edx
086b5650 +0x0b7a:  mov    %edx,0x4(%esp)
086b5654 +0x0b7e:  mov    %eax,(%esp)
086b5657 +0x0b81:  call   083b751c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x514e8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x514e8
086b565c +0x0b86:  call   08724be0 <__cxa_rethrow>
086b5661 +0x0b8b:  mov    %edx,%ebx
086b5663 +0x0b8d:  mov    %eax,%esi
086b5665 +0x0b8f:  call   08725c30 <__cxa_end_catch>
086b566a +0x0b94:  mov    %esi,%eax
086b566c +0x0b96:  mov    %ebx,%edx
086b566e +0x0b98:  mov    %eax,(%esp)
086b5671 +0x0b9b:  call   08ae3750 <_Unwind_Resume>
086b5676 +0x0ba0:  push   %ebp
086b5677 +0x0ba1:  mov    %esp,%ebp
086b5679 +0x0ba3:  push   %ebx
086b567a +0x0ba4:  sub    $0x24,%esp
086b567d +0x0ba7:  mov    0x8(%ebp),%ebx
086b5680 +0x0baa:  lea    -0x10(%ebp),%eax
086b5683 +0x0bad:  mov    0x10(%ebp),%edx
086b5686 +0x0bb0:  mov    %edx,0x4(%esp)
086b568a +0x0bb4:  mov    %eax,(%esp)
086b568d +0x0bb7:  call   083ec599 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x86565>  ; global constructors keyed to CServerEvent::m_nExpRate+0x86565
086b5692 +0x0bbc:  sub    $0x4,%esp
086b5695 +0x0bbf:  lea    -0xc(%ebp),%eax
086b5698 +0x0bc2:  mov    0xc(%ebp),%edx
086b569b +0x0bc5:  mov    %edx,0x4(%esp)
086b569f +0x0bc9:  mov    %eax,(%esp)
086b56a2 +0x0bcc:  call   083ec599 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x86565>  ; global constructors keyed to CServerEvent::m_nExpRate+0x86565
086b56a7 +0x0bd1:  sub    $0x4,%esp
086b56aa +0x0bd4:  mov    0x14(%ebp),%eax
086b56ad +0x0bd7:  mov    %eax,0xc(%esp)
086b56b1 +0x0bdb:  mov    -0x10(%ebp),%eax
086b56b4 +0x0bde:  mov    %eax,0x8(%esp)
086b56b8 +0x0be2:  mov    -0xc(%ebp),%eax
086b56bb +0x0be5:  mov    %eax,0x4(%esp)
086b56bf +0x0be9:  mov    %ebx,(%esp)
086b56c2 +0x0bec:  call   086b6026 <+0x1550>
086b56c7 +0x0bf1:  sub    $0x4,%esp
086b56ca +0x0bf4:  mov    %ebx,%eax
086b56cc +0x0bf6:  mov    -0x4(%ebp),%ebx
086b56cf +0x0bf9:  leave
086b56d0 +0x0bfa:  ret    $0x4
086b56d3 +0x0bfd:  push   %ebp
086b56d4 +0x0bfe:  mov    %esp,%ebp
086b56d6 +0x0c00:  sub    $0x18,%esp
086b56d9 +0x0c03:  mov    0xc(%ebp),%eax
086b56dc +0x0c06:  mov    %eax,0x4(%esp)
086b56e0 +0x0c0a:  mov    0x8(%ebp),%eax
086b56e3 +0x0c0d:  mov    %eax,(%esp)
086b56e6 +0x0c10:  call   086b6085 <+0x15af>
086b56eb +0x0c15:  leave
086b56ec +0x0c16:  ret
086b56ed +0x0c17:  push   %ebp
086b56ee +0x0c18:  mov    %esp,%ebp
086b56f0 +0x0c1a:  push   %ebx
086b56f1 +0x0c1b:  sub    $0x14,%esp
086b56f4 +0x0c1e:  mov    0xc(%ebp),%eax
086b56f7 +0x0c21:  mov    %eax,(%esp)
086b56fa +0x0c24:  call   086b609f <+0x15c9>
086b56ff +0x0c29:  mov    %eax,%ebx
086b5701 +0x0c2b:  mov    0x8(%ebp),%eax
086b5704 +0x0c2e:  mov    %eax,(%esp)
086b5707 +0x0c31:  call   086b609f <+0x15c9>
086b570c +0x0c36:  mov    0x10(%ebp),%edx
086b570f +0x0c39:  mov    %edx,0x8(%esp)
086b5713 +0x0c3d:  mov    %ebx,0x4(%esp)
086b5717 +0x0c41:  mov    %eax,(%esp)
086b571a +0x0c44:  call   086b60a7 <+0x15d1>
086b571f +0x0c49:  add    $0x14,%esp
086b5722 +0x0c4c:  pop    %ebx
086b5723 +0x0c4d:  pop    %ebp
086b5724 +0x0c4e:  ret
086b5725 +0x0c4f:  push   %ebp
086b5726 +0x0c50:  mov    %esp,%ebp
086b5728 +0x0c52:  sub    $0x18,%esp
086b572b +0x0c55:  mov    0x10(%ebp),%eax
086b572e +0x0c58:  mov    %eax,0x8(%esp)
086b5732 +0x0c5c:  mov    0xc(%ebp),%eax
086b5735 +0x0c5f:  mov    %eax,0x4(%esp)
086b5739 +0x0c63:  mov    0x8(%ebp),%eax
086b573c +0x0c66:  mov    %eax,(%esp)
086b573f +0x0c69:  call   086b60eb <+0x1615>
086b5744 +0x0c6e:  leave
086b5745 +0x0c6f:  ret
086b5746 +0x0c70:  push   %ebp
086b5747 +0x0c71:  mov    %esp,%ebp
086b5749 +0x0c73:  push   %ebx
086b574a +0x0c74:  sub    $0x14,%esp
086b574d +0x0c77:  mov    0x8(%ebp),%ebx
086b5750 +0x0c7a:  mov    0xc(%ebp),%eax
086b5753 +0x0c7d:  mov    0xc(%eax),%eax
086b5756 +0x0c80:  mov    %eax,0x4(%esp)
086b575a +0x0c84:  mov    %ebx,(%esp)
086b575d +0x0c87:  call   086b610c <+0x1636>
086b5762 +0x0c8c:  mov    %ebx,%eax
086b5764 +0x0c8e:  add    $0x14,%esp
086b5767 +0x0c91:  pop    %ebx
086b5768 +0x0c92:  pop    %ebp
086b5769 +0x0c93:  ret    $0x4
086b576c +0x0c96:  push   %ebp
086b576d +0x0c97:  mov    %esp,%ebp
086b576f +0x0c99:  push   %ebx
086b5770 +0x0c9a:  sub    $0x14,%esp
086b5773 +0x0c9d:  mov    0x8(%ebp),%ebx
086b5776 +0x0ca0:  mov    0xc(%ebp),%eax
086b5779 +0x0ca3:  add    $0x4,%eax
086b577c +0x0ca6:  mov    %eax,0x4(%esp)
086b5780 +0x0caa:  mov    %ebx,(%esp)
086b5783 +0x0cad:  call   086b610c <+0x1636>
086b5788 +0x0cb2:  mov    %ebx,%eax
086b578a +0x0cb4:  add    $0x14,%esp
086b578d +0x0cb7:  pop    %ebx
086b578e +0x0cb8:  pop    %ebp
086b578f +0x0cb9:  ret    $0x4
086b5792 +0x0cbc:  push   %ebp
086b5793 +0x0cbd:  mov    %esp,%ebp
086b5795 +0x0cbf:  mov    0x8(%ebp),%eax
086b5798 +0x0cc2:  mov    0x14(%eax),%eax
086b579b +0x0cc5:  test   %eax,%eax
086b579d +0x0cc7:  sete   %al
086b57a0 +0x0cca:  pop    %ebp
086b57a1 +0x0ccb:  ret
086b57a2 +0x0ccc:  push   %ebp
086b57a3 +0x0ccd:  mov    %esp,%ebp
086b57a5 +0x0ccf:  push   %ebx
086b57a6 +0x0cd0:  sub    $0x14,%esp
086b57a9 +0x0cd3:  mov    0x8(%ebp),%eax
086b57ac +0x0cd6:  mov    %eax,(%esp)
086b57af +0x0cd9:  call   083f1518 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8b4e4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8b4e4
086b57b4 +0x0cde:  mov    (%eax),%ebx
086b57b6 +0x0ce0:  mov    0xc(%ebp),%eax
086b57b9 +0x0ce3:  mov    %eax,(%esp)
086b57bc +0x0ce6:  call   083f1518 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8b4e4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8b4e4
086b57c1 +0x0ceb:  mov    (%eax),%eax
086b57c3 +0x0ced:  cmp    %eax,%ebx
086b57c5 +0x0cef:  sete   %al
086b57c8 +0x0cf2:  add    $0x14,%esp
086b57cb +0x0cf5:  pop    %ebx
086b57cc +0x0cf6:  pop    %ebp
086b57cd +0x0cf7:  ret
086b57ce +0x0cf8:  push   %ebp
086b57cf +0x0cf9:  mov    %esp,%ebp
086b57d1 +0x0cfb:  mov    0xc(%ebp),%eax
086b57d4 +0x0cfe:  mov    (%eax),%edx
086b57d6 +0x0d00:  mov    0x8(%ebp),%eax
086b57d9 +0x0d03:  mov    %edx,(%eax)
086b57db +0x0d05:  pop    %ebp
086b57dc +0x0d06:  ret
086b57dd +0x0d07:  nop
086b57de +0x0d08:  push   %ebp
086b57df +0x0d09:  mov    %esp,%ebp
086b57e1 +0x0d0b:  mov    0x8(%ebp),%eax
086b57e4 +0x0d0e:  pop    %ebp
086b57e5 +0x0d0f:  ret
086b57e6 +0x0d10:  push   %ebp
086b57e7 +0x0d11:  mov    %esp,%ebp
086b57e9 +0x0d13:  mov    0x8(%ebp),%eax
086b57ec +0x0d16:  mov    0x14(%eax),%eax
086b57ef +0x0d19:  pop    %ebp
086b57f0 +0x0d1a:  ret
086b57f1 +0x0d1b:  push   %ebp
086b57f2 +0x0d1c:  mov    %esp,%ebp
086b57f4 +0x0d1e:  mov    0x8(%ebp),%eax
086b57f7 +0x0d21:  pop    %ebp
086b57f8 +0x0d22:  ret
086b57f9 +0x0d23:  nop
086b57fa +0x0d24:  push   %ebp
086b57fb +0x0d25:  mov    %esp,%ebp
086b57fd +0x0d27:  sub    $0x18,%esp
086b5800 +0x0d2a:  mov    0xc(%ebp),%eax
086b5803 +0x0d2d:  mov    %eax,(%esp)
086b5806 +0x0d30:  call   085c25d5 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x3b33>  ; global constructors keyed to CParty::cMember::cMember()+0x3b33
086b580b +0x0d35:  movzwl (%eax),%edx
086b580e +0x0d38:  mov    0x8(%ebp),%eax
086b5811 +0x0d3b:  mov    %dx,(%eax)
086b5814 +0x0d3e:  mov    0x10(%ebp),%eax
086b5817 +0x0d41:  mov    %eax,(%esp)
086b581a +0x0d44:  call   086b57f1 <+0xd1b>
086b581f +0x0d49:  mov    0x8(%ebp),%edx
086b5822 +0x0d4c:  mov    (%eax),%ecx
086b5824 +0x0d4e:  mov    %ecx,0x4(%edx)
086b5827 +0x0d51:  mov    0x4(%eax),%ecx
086b582a +0x0d54:  mov    %ecx,0x8(%edx)
086b582d +0x0d57:  mov    0x8(%eax),%ecx
086b5830 +0x0d5a:  mov    %ecx,0xc(%edx)
086b5833 +0x0d5d:  mov    0xc(%eax),%ecx
086b5836 +0x0d60:  mov    %ecx,0x10(%edx)
086b5839 +0x0d63:  mov    0x10(%eax),%ecx
086b583c +0x0d66:  mov    %ecx,0x14(%edx)
086b583f +0x0d69:  mov    0x14(%eax),%ecx
086b5842 +0x0d6c:  mov    %ecx,0x18(%edx)
086b5845 +0x0d6f:  mov    0x18(%eax),%ecx
086b5848 +0x0d72:  mov    %ecx,0x1c(%edx)
086b584b +0x0d75:  mov    0x1c(%eax),%ecx
086b584e +0x0d78:  mov    %ecx,0x20(%edx)
086b5851 +0x0d7b:  mov    0x20(%eax),%ecx
086b5854 +0x0d7e:  mov    %ecx,0x24(%edx)
086b5857 +0x0d81:  mov    0x24(%eax),%eax
086b585a +0x0d84:  mov    %eax,0x28(%edx)
086b585d +0x0d87:  leave
086b585e +0x0d88:  ret
086b585f +0x0d89:  push   %ebp
086b5860 +0x0d8a:  mov    %esp,%ebp
086b5862 +0x0d8c:  mov    0x8(%ebp),%eax
086b5865 +0x0d8f:  pop    %ebp
086b5866 +0x0d90:  ret
086b5867 +0x0d91:  nop
086b5868 +0x0d92:  push   %ebp
086b5869 +0x0d93:  mov    %esp,%ebp
086b586b +0x0d95:  push   %esi
086b586c +0x0d96:  push   %ebx
086b586d +0x0d97:  sub    $0x50,%esp
086b5870 +0x0d9a:  mov    0x8(%ebp),%ebx
086b5873 +0x0d9d:  mov    0xc(%ebp),%eax
086b5876 +0x0da0:  mov    %eax,(%esp)
086b5879 +0x0da3:  call   086b55be <+0xae8>
086b587e +0x0da8:  mov    %eax,-0x14(%ebp)
086b5881 +0x0dab:  mov    0xc(%ebp),%eax
086b5884 +0x0dae:  mov    %eax,(%esp)
086b5887 +0x0db1:  call   086b611a <+0x1644>
086b588c +0x0db6:  mov    %eax,-0x10(%ebp)
086b588f +0x0db9:  movb   $0x1,-0x9(%ebp)
086b5893 +0x0dbd:  jmp    086b58f1 <+0xe1b>
086b5895 +0x0dbf:  mov    -0x14(%ebp),%eax
086b5898 +0x0dc2:  mov    %eax,-0x10(%ebp)
086b589b +0x0dc5:  mov    -0x14(%ebp),%eax
086b589e +0x0dc8:  mov    %eax,(%esp)
086b58a1 +0x0dcb:  call   086b612e <+0x1658>
086b58a6 +0x0dd0:  mov    %eax,%esi
086b58a8 +0x0dd2:  mov    0x10(%ebp),%eax
086b58ab +0x0dd5:  mov    %eax,0x4(%esp)
086b58af +0x0dd9:  lea    -0x2d(%ebp),%eax
086b58b2 +0x0ddc:  mov    %eax,(%esp)
086b58b5 +0x0ddf:  call   086b6126 <+0x1650>
086b58ba +0x0de4:  mov    0xc(%ebp),%edx
086b58bd +0x0de7:  mov    %esi,0x8(%esp)
086b58c1 +0x0deb:  mov    %eax,0x4(%esp)
086b58c5 +0x0def:  mov    %edx,(%esp)
086b58c8 +0x0df2:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
086b58cd +0x0df7:  mov    %al,-0x9(%ebp)
086b58d0 +0x0dfa:  cmpb   $0x0,-0x9(%ebp)
086b58d4 +0x0dfe:  je     086b58e3 <+0xe0d>
086b58d6 +0x0e00:  mov    -0x14(%ebp),%eax
086b58d9 +0x0e03:  mov    %eax,(%esp)
086b58dc +0x0e06:  call   086b5fe6 <+0x1510>
086b58e1 +0x0e0b:  jmp    086b58ee <+0xe18>
086b58e3 +0x0e0d:  mov    -0x14(%ebp),%eax
086b58e6 +0x0e10:  mov    %eax,(%esp)
086b58e9 +0x0e13:  call   086b5fdb <+0x1505>
086b58ee +0x0e18:  mov    %eax,-0x14(%ebp)
086b58f1 +0x0e1b:  cmpl   $0x0,-0x14(%ebp)
086b58f5 +0x0e1f:  setne  %al
086b58f8 +0x0e22:  test   %al,%al
086b58fa +0x0e24:  jne    086b5895 <+0xdbf>
086b58fc +0x0e26:  mov    -0x10(%ebp),%eax
086b58ff +0x0e29:  mov    %eax,0x4(%esp)
086b5903 +0x0e2d:  lea    -0x34(%ebp),%eax
086b5906 +0x0e30:  mov    %eax,(%esp)
086b5909 +0x0e33:  call   086b610c <+0x1636>
086b590e +0x0e38:  cmpb   $0x0,-0x9(%ebp)
086b5912 +0x0e3c:  je     086b5993 <+0xebd>
086b5914 +0x0e3e:  lea    -0x2c(%ebp),%eax
086b5917 +0x0e41:  mov    0xc(%ebp),%edx
086b591a +0x0e44:  mov    %edx,0x4(%esp)
086b591e +0x0e48:  mov    %eax,(%esp)
086b5921 +0x0e4b:  call   086b5746 <+0xc70>
086b5926 +0x0e50:  sub    $0x4,%esp
086b5929 +0x0e53:  lea    -0x2c(%ebp),%eax
086b592c +0x0e56:  mov    %eax,0x4(%esp)
086b5930 +0x0e5a:  lea    -0x34(%ebp),%eax
086b5933 +0x0e5d:  mov    %eax,(%esp)
086b5936 +0x0e60:  call   086b6150 <+0x167a>
086b593b +0x0e65:  test   %al,%al
086b593d +0x0e67:  je     086b5988 <+0xeb2>
086b593f +0x0e69:  movb   $0x1,-0x25(%ebp)
086b5943 +0x0e6d:  mov    -0x10(%ebp),%ecx
086b5946 +0x0e70:  mov    -0x14(%ebp),%edx
086b5949 +0x0e73:  lea    -0x24(%ebp),%eax
086b594c +0x0e76:  mov    0x10(%ebp),%esi
086b594f +0x0e79:  mov    %esi,0x10(%esp)
086b5953 +0x0e7d:  mov    %ecx,0xc(%esp)
086b5957 +0x0e81:  mov    %edx,0x8(%esp)
086b595b +0x0e85:  mov    0xc(%ebp),%edx
086b595e +0x0e88:  mov    %edx,0x4(%esp)
086b5962 +0x0e8c:  mov    %eax,(%esp)
086b5965 +0x0e8f:  call   086b6164 <+0x168e>
086b596a +0x0e94:  sub    $0x4,%esp
086b596d +0x0e97:  lea    -0x25(%ebp),%eax
086b5970 +0x0e9a:  mov    %eax,0x8(%esp)
086b5974 +0x0e9e:  lea    -0x24(%ebp),%eax
086b5977 +0x0ea1:  mov    %eax,0x4(%esp)
086b597b +0x0ea5:  mov    %ebx,(%esp)
086b597e +0x0ea8:  call   086b622c <+0x1756>
086b5983 +0x0ead:  jmp    086b5a29 <+0xf53>
086b5988 +0x0eb2:  lea    -0x34(%ebp),%eax
086b598b +0x0eb5:  mov    %eax,(%esp)
086b598e +0x0eb8:  call   086b625a <+0x1784>
086b5993 +0x0ebd:  mov    0x10(%ebp),%eax
086b5996 +0x0ec0:  mov    %eax,0x4(%esp)
086b599a +0x0ec4:  lea    -0x1e(%ebp),%eax
086b599d +0x0ec7:  mov    %eax,(%esp)
086b59a0 +0x0eca:  call   086b6126 <+0x1650>
086b59a5 +0x0ecf:  mov    %eax,%esi
086b59a7 +0x0ed1:  mov    -0x34(%ebp),%eax
086b59aa +0x0ed4:  mov    %eax,(%esp)
086b59ad +0x0ed7:  call   086b6277 <+0x17a1>
086b59b2 +0x0edc:  mov    0xc(%ebp),%edx
086b59b5 +0x0edf:  mov    %esi,0x8(%esp)
086b59b9 +0x0ee3:  mov    %eax,0x4(%esp)
086b59bd +0x0ee7:  mov    %edx,(%esp)
086b59c0 +0x0eea:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
086b59c5 +0x0eef:  test   %al,%al
086b59c7 +0x0ef1:  je     086b5a0f <+0xf39>
086b59c9 +0x0ef3:  movb   $0x1,-0x1d(%ebp)
086b59cd +0x0ef7:  mov    -0x10(%ebp),%ecx
086b59d0 +0x0efa:  mov    -0x14(%ebp),%edx
086b59d3 +0x0efd:  lea    -0x1c(%ebp),%eax
086b59d6 +0x0f00:  mov    0x10(%ebp),%esi
086b59d9 +0x0f03:  mov    %esi,0x10(%esp)
086b59dd +0x0f07:  mov    %ecx,0xc(%esp)
086b59e1 +0x0f0b:  mov    %edx,0x8(%esp)
086b59e5 +0x0f0f:  mov    0xc(%ebp),%edx
086b59e8 +0x0f12:  mov    %edx,0x4(%esp)
086b59ec +0x0f16:  mov    %eax,(%esp)
086b59ef +0x0f19:  call   086b6164 <+0x168e>
086b59f4 +0x0f1e:  sub    $0x4,%esp
086b59f7 +0x0f21:  lea    -0x1d(%ebp),%eax
086b59fa +0x0f24:  mov    %eax,0x8(%esp)
086b59fe +0x0f28:  lea    -0x1c(%ebp),%eax
086b5a01 +0x0f2b:  mov    %eax,0x4(%esp)
086b5a05 +0x0f2f:  mov    %ebx,(%esp)
086b5a08 +0x0f32:  call   086b622c <+0x1756>
086b5a0d +0x0f37:  jmp    086b5a29 <+0xf53>
086b5a0f +0x0f39:  movb   $0x0,-0x15(%ebp)
086b5a13 +0x0f3d:  lea    -0x15(%ebp),%eax
086b5a16 +0x0f40:  mov    %eax,0x8(%esp)
086b5a1a +0x0f44:  lea    -0x34(%ebp),%eax
086b5a1d +0x0f47:  mov    %eax,0x4(%esp)
086b5a21 +0x0f4b:  mov    %ebx,(%esp)
086b5a24 +0x0f4e:  call   086b629a <+0x17c4>
086b5a29 +0x0f53:  mov    %ebx,%eax
086b5a2b +0x0f55:  lea    -0x8(%ebp),%esp
086b5a2e +0x0f58:  add    $0x0,%esp
086b5a31 +0x0f5b:  pop    %ebx
086b5a32 +0x0f5c:  pop    %esi
086b5a33 +0x0f5d:  pop    %ebp
086b5a34 +0x0f5e:  ret    $0x4
086b5a37 +0x0f61:  nop
086b5a38 +0x0f62:  push   %ebp
086b5a39 +0x0f63:  mov    %esp,%ebp
086b5a3b +0x0f65:  push   %ebx
086b5a3c +0x0f66:  sub    $0x14,%esp
086b5a3f +0x0f69:  mov    0x8(%ebp),%eax
086b5a42 +0x0f6c:  mov    %eax,(%esp)
086b5a45 +0x0f6f:  call   086b55be <+0xae8>
086b5a4a +0x0f74:  mov    %eax,0x4(%esp)
086b5a4e +0x0f78:  mov    0x8(%ebp),%eax
086b5a51 +0x0f7b:  mov    %eax,(%esp)
086b5a54 +0x0f7e:  call   086b5568 <+0xa92>
086b5a59 +0x0f83:  mov    0x8(%ebp),%eax
086b5a5c +0x0f86:  mov    %eax,(%esp)
086b5a5f +0x0f89:  call   086b62c8 <+0x17f2>
086b5a64 +0x0f8e:  mov    %eax,%ebx
086b5a66 +0x0f90:  mov    0x8(%ebp),%eax
086b5a69 +0x0f93:  mov    %eax,(%esp)
086b5a6c +0x0f96:  call   086b611a <+0x1644>
086b5a71 +0x0f9b:  mov    %eax,(%ebx)
086b5a73 +0x0f9d:  mov    0x8(%ebp),%eax
086b5a76 +0x0fa0:  mov    %eax,(%esp)
086b5a79 +0x0fa3:  call   086b62d4 <+0x17fe>
086b5a7e +0x0fa8:  movl   $0x0,(%eax)
086b5a84 +0x0fae:  mov    0x8(%ebp),%eax
086b5a87 +0x0fb1:  mov    %eax,(%esp)
086b5a8a +0x0fb4:  call   086b62e0 <+0x180a>
086b5a8f +0x0fb9:  mov    %eax,%ebx
086b5a91 +0x0fbb:  mov    0x8(%ebp),%eax
086b5a94 +0x0fbe:  mov    %eax,(%esp)
086b5a97 +0x0fc1:  call   086b611a <+0x1644>
086b5a9c +0x0fc6:  mov    %eax,(%ebx)
086b5a9e +0x0fc8:  mov    0x8(%ebp),%eax
086b5aa1 +0x0fcb:  movl   $0x0,0x14(%eax)
086b5aa8 +0x0fd2:  add    $0x14,%esp
086b5aab +0x0fd5:  pop    %ebx
086b5aac +0x0fd6:  pop    %ebp
086b5aad +0x0fd7:  ret
086b5aae +0x0fd8:  push   %ebp
086b5aaf +0x0fd9:  mov    %esp,%ebp
086b5ab1 +0x0fdb:  push   %esi
086b5ab2 +0x0fdc:  push   %ebx
086b5ab3 +0x0fdd:  sub    $0x30,%esp
086b5ab6 +0x0fe0:  mov    0x8(%ebp),%ebx
086b5ab9 +0x0fe3:  mov    0xc(%ebp),%eax
086b5abc +0x0fe6:  mov    %eax,(%esp)
086b5abf +0x0fe9:  call   086b611a <+0x1644>
086b5ac4 +0x0fee:  mov    %eax,%esi
086b5ac6 +0x0ff0:  mov    0xc(%ebp),%eax
086b5ac9 +0x0ff3:  mov    %eax,(%esp)
086b5acc +0x0ff6:  call   086b55be <+0xae8>
086b5ad1 +0x0ffb:  lea    -0x10(%ebp),%edx
086b5ad4 +0x0ffe:  mov    0x10(%ebp),%ecx
086b5ad7 +0x1001:  mov    %ecx,0x10(%esp)
086b5adb +0x1005:  mov    %esi,0xc(%esp)
086b5adf +0x1009:  mov    %eax,0x8(%esp)
086b5ae3 +0x100d:  mov    0xc(%ebp),%eax
086b5ae6 +0x1010:  mov    %eax,0x4(%esp)
086b5aea +0x1014:  mov    %edx,(%esp)
086b5aed +0x1017:  call   086b62ec <+0x1816>
086b5af2 +0x101c:  sub    $0x4,%esp
086b5af5 +0x101f:  lea    -0xc(%ebp),%eax
086b5af8 +0x1022:  mov    0xc(%ebp),%edx
086b5afb +0x1025:  mov    %edx,0x4(%esp)
086b5aff +0x1029:  mov    %eax,(%esp)
086b5b02 +0x102c:  call   086b576c <+0xc96>
086b5b07 +0x1031:  sub    $0x4,%esp
086b5b0a +0x1034:  lea    -0xc(%ebp),%eax
086b5b0d +0x1037:  mov    %eax,0x4(%esp)
086b5b11 +0x103b:  lea    -0x10(%ebp),%eax
086b5b14 +0x103e:  mov    %eax,(%esp)
086b5b17 +0x1041:  call   086b6150 <+0x167a>
086b5b1c +0x1046:  test   %al,%al
086b5b1e +0x1048:  jne    086b5b45 <+0x106f>
086b5b20 +0x104a:  mov    -0x10(%ebp),%eax
086b5b23 +0x104d:  mov    %eax,(%esp)
086b5b26 +0x1050:  call   086b6277 <+0x17a1>
086b5b2b +0x1055:  mov    0xc(%ebp),%edx
086b5b2e +0x1058:  mov    %eax,0x8(%esp)
086b5b32 +0x105c:  mov    0x10(%ebp),%eax
086b5b35 +0x105f:  mov    %eax,0x4(%esp)
086b5b39 +0x1063:  mov    %edx,(%esp)
086b5b3c +0x1066:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
086b5b41 +0x106b:  test   %al,%al
086b5b43 +0x106d:  je     086b5b59 <+0x1083>
086b5b45 +0x106f:  mov    0xc(%ebp),%eax
086b5b48 +0x1072:  mov    %eax,0x4(%esp)
086b5b4c +0x1076:  mov    %ebx,(%esp)
086b5b4f +0x1079:  call   086b576c <+0xc96>
086b5b54 +0x107e:  sub    $0x4,%esp
086b5b57 +0x1081:  jmp    086b5b5e <+0x1088>
086b5b59 +0x1083:  mov    -0x10(%ebp),%eax
086b5b5c +0x1086:  mov    %eax,(%ebx)
086b5b5e +0x1088:  mov    %ebx,%eax
086b5b60 +0x108a:  lea    -0x8(%ebp),%esp
086b5b63 +0x108d:  add    $0x0,%esp
086b5b66 +0x1090:  pop    %ebx
086b5b67 +0x1091:  pop    %esi
086b5b68 +0x1092:  pop    %ebp
086b5b69 +0x1093:  ret    $0x4
086b5b6c +0x1096:  push   %ebp
086b5b6d +0x1097:  mov    %esp,%ebp
086b5b6f +0x1099:  sub    $0x28,%esp
086b5b72 +0x109c:  mov    0x8(%ebp),%eax
086b5b75 +0x109f:  lea    0x4(%eax),%edx
086b5b78 +0x10a2:  mov    0xc(%ebp),%eax
086b5b7b +0x10a5:  mov    %edx,0x4(%esp)
086b5b7f +0x10a9:  mov    %eax,(%esp)
086b5b82 +0x10ac:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
086b5b87 +0x10b1:  mov    %eax,-0xc(%ebp)
086b5b8a +0x10b4:  mov    -0xc(%ebp),%eax
086b5b8d +0x10b7:  mov    %eax,0x4(%esp)
086b5b91 +0x10bb:  mov    0x8(%ebp),%eax
086b5b94 +0x10be:  mov    %eax,(%esp)
086b5b97 +0x10c1:  call   086b5ff2 <+0x151c>
086b5b9c +0x10c6:  mov    0x8(%ebp),%eax
086b5b9f +0x10c9:  mov    0x14(%eax),%eax
086b5ba2 +0x10cc:  lea    -0x1(%eax),%edx
086b5ba5 +0x10cf:  mov    0x8(%ebp),%eax
086b5ba8 +0x10d2:  mov    %edx,0x14(%eax)
086b5bab +0x10d5:  leave
086b5bac +0x10d6:  ret
086b5bad +0x10d7:  push   %ebp
086b5bae +0x10d8:  mov    %esp,%ebp
086b5bb0 +0x10da:  mov    0x8(%ebp),%eax
086b5bb3 +0x10dd:  pop    %ebp
086b5bb4 +0x10de:  ret
086b5bb5 +0x10df:  push   %ebp
086b5bb6 +0x10e0:  mov    %esp,%ebp
086b5bb8 +0x10e2:  mov    0x8(%ebp),%eax
086b5bbb +0x10e5:  pop    %ebp
086b5bbc +0x10e6:  ret
086b5bbd +0x10e7:  nop
086b5bbe +0x10e8:  push   %ebp
086b5bbf +0x10e9:  mov    %esp,%ebp
086b5bc1 +0x10eb:  sub    $0x18,%esp
086b5bc4 +0x10ee:  mov    0xc(%ebp),%eax
086b5bc7 +0x10f1:  mov    %eax,(%esp)
086b5bca +0x10f4:  call   086b5bad <+0x10d7>
086b5bcf +0x10f9:  mov    0x8(%ebp),%edx
086b5bd2 +0x10fc:  movzwl (%eax),%eax
086b5bd5 +0x10ff:  mov    %ax,(%edx)
086b5bd8 +0x1102:  mov    0x10(%ebp),%eax
086b5bdb +0x1105:  mov    %eax,(%esp)
086b5bde +0x1108:  call   086b5bb5 <+0x10df>
086b5be3 +0x110d:  mov    0x8(%ebp),%edx
086b5be6 +0x1110:  add    $0x4,%edx
086b5be9 +0x1113:  mov    %eax,0x4(%esp)
086b5bed +0x1117:  mov    %edx,(%esp)
086b5bf0 +0x111a:  call   086b52f0 <+0x81a>
086b5bf5 +0x111f:  leave
086b5bf6 +0x1120:  ret
086b5bf7 +0x1121:  push   %ebp
086b5bf8 +0x1122:  mov    %esp,%ebp
086b5bfa +0x1124:  mov    0x8(%ebp),%eax
086b5bfd +0x1127:  pop    %ebp
086b5bfe +0x1128:  ret
086b5bff +0x1129:  push   %ebp
086b5c00 +0x112a:  mov    %esp,%ebp
086b5c02 +0x112c:  mov    0x8(%ebp),%eax
086b5c05 +0x112f:  pop    %ebp
086b5c06 +0x1130:  ret
086b5c07 +0x1131:  nop
086b5c08 +0x1132:  push   %ebp
086b5c09 +0x1133:  mov    %esp,%ebp
086b5c0b +0x1135:  sub    $0x18,%esp
086b5c0e +0x1138:  mov    0xc(%ebp),%edx
086b5c11 +0x113b:  mov    0x8(%ebp),%eax
086b5c14 +0x113e:  mov    %edx,0x4(%esp)
086b5c18 +0x1142:  mov    %eax,(%esp)
086b5c1b +0x1145:  call   086b6368 <+0x1892>
086b5c20 +0x114a:  leave
086b5c21 +0x114b:  ret
086b5c22 +0x114c:  push   %ebp
086b5c23 +0x114d:  mov    %esp,%ebp
086b5c25 +0x114f:  push   %esi
086b5c26 +0x1150:  push   %ebx
086b5c27 +0x1151:  sub    $0x50,%esp
086b5c2a +0x1154:  mov    0x8(%ebp),%ebx
086b5c2d +0x1157:  mov    0xc(%ebp),%eax
086b5c30 +0x115a:  mov    %eax,(%esp)
086b5c33 +0x115d:  call   086b5f7a <+0x14a4>
086b5c38 +0x1162:  mov    %eax,-0x14(%ebp)
086b5c3b +0x1165:  mov    0xc(%ebp),%eax
086b5c3e +0x1168:  mov    %eax,(%esp)
086b5c41 +0x116b:  call   086b645c <+0x1986>
086b5c46 +0x1170:  mov    %eax,-0x10(%ebp)
086b5c49 +0x1173:  movb   $0x1,-0x9(%ebp)
086b5c4d +0x1177:  jmp    086b5cab <+0x11d5>
086b5c4f +0x1179:  mov    -0x14(%ebp),%eax
086b5c52 +0x117c:  mov    %eax,-0x10(%ebp)
086b5c55 +0x117f:  mov    -0x14(%ebp),%eax
086b5c58 +0x1182:  mov    %eax,(%esp)
086b5c5b +0x1185:  call   086b6470 <+0x199a>
086b5c60 +0x118a:  mov    %eax,%esi
086b5c62 +0x118c:  mov    0x10(%ebp),%eax
086b5c65 +0x118f:  mov    %eax,0x4(%esp)
086b5c69 +0x1193:  lea    -0x2d(%ebp),%eax
086b5c6c +0x1196:  mov    %eax,(%esp)
086b5c6f +0x1199:  call   086b6468 <+0x1992>
086b5c74 +0x119e:  mov    0xc(%ebp),%edx
086b5c77 +0x11a1:  mov    %esi,0x8(%esp)
086b5c7b +0x11a5:  mov    %eax,0x4(%esp)
086b5c7f +0x11a9:  mov    %edx,(%esp)
086b5c82 +0x11ac:  call   086b6492 <+0x19bc>
086b5c87 +0x11b1:  mov    %al,-0x9(%ebp)
086b5c8a +0x11b4:  cmpb   $0x0,-0x9(%ebp)
086b5c8e +0x11b8:  je     086b5c9d <+0x11c7>
086b5c90 +0x11ba:  mov    -0x14(%ebp),%eax
086b5c93 +0x11bd:  mov    %eax,(%esp)
086b5c96 +0x11c0:  call   086b64b7 <+0x19e1>
086b5c9b +0x11c5:  jmp    086b5ca8 <+0x11d2>
086b5c9d +0x11c7:  mov    -0x14(%ebp),%eax
086b5ca0 +0x11ca:  mov    %eax,(%esp)
086b5ca3 +0x11cd:  call   086b64ac <+0x19d6>
086b5ca8 +0x11d2:  mov    %eax,-0x14(%ebp)
086b5cab +0x11d5:  cmpl   $0x0,-0x14(%ebp)
086b5caf +0x11d9:  setne  %al
086b5cb2 +0x11dc:  test   %al,%al
086b5cb4 +0x11de:  jne    086b5c4f <+0x1179>
086b5cb6 +0x11e0:  mov    -0x10(%ebp),%eax
086b5cb9 +0x11e3:  mov    %eax,0x4(%esp)
086b5cbd +0x11e7:  lea    -0x34(%ebp),%eax
086b5cc0 +0x11ea:  mov    %eax,(%esp)
086b5cc3 +0x11ed:  call   086b64c2 <+0x19ec>
086b5cc8 +0x11f2:  cmpb   $0x0,-0x9(%ebp)
086b5ccc +0x11f6:  je     086b5d4d <+0x1277>
086b5cce +0x11f8:  lea    -0x2c(%ebp),%eax
086b5cd1 +0x11fb:  mov    0xc(%ebp),%edx
086b5cd4 +0x11fe:  mov    %edx,0x4(%esp)
086b5cd8 +0x1202:  mov    %eax,(%esp)
086b5cdb +0x1205:  call   086b5df2 <+0x131c>
086b5ce0 +0x120a:  sub    $0x4,%esp
086b5ce3 +0x120d:  lea    -0x2c(%ebp),%eax
086b5ce6 +0x1210:  mov    %eax,0x4(%esp)
086b5cea +0x1214:  lea    -0x34(%ebp),%eax
086b5ced +0x1217:  mov    %eax,(%esp)
086b5cf0 +0x121a:  call   086b54b2 <+0x9dc>
086b5cf5 +0x121f:  test   %al,%al
086b5cf7 +0x1221:  je     086b5d42 <+0x126c>
086b5cf9 +0x1223:  movb   $0x1,-0x25(%ebp)
086b5cfd +0x1227:  mov    -0x10(%ebp),%ecx
086b5d00 +0x122a:  mov    -0x14(%ebp),%edx
086b5d03 +0x122d:  lea    -0x24(%ebp),%eax
086b5d06 +0x1230:  mov    0x10(%ebp),%esi
086b5d09 +0x1233:  mov    %esi,0x10(%esp)
086b5d0d +0x1237:  mov    %ecx,0xc(%esp)
086b5d11 +0x123b:  mov    %edx,0x8(%esp)
086b5d15 +0x123f:  mov    0xc(%ebp),%edx
086b5d18 +0x1242:  mov    %edx,0x4(%esp)
086b5d1c +0x1246:  mov    %eax,(%esp)
086b5d1f +0x1249:  call   086b64d0 <+0x19fa>
086b5d24 +0x124e:  sub    $0x4,%esp
086b5d27 +0x1251:  lea    -0x25(%ebp),%eax
086b5d2a +0x1254:  mov    %eax,0x8(%esp)
086b5d2e +0x1258:  lea    -0x24(%ebp),%eax
086b5d31 +0x125b:  mov    %eax,0x4(%esp)
086b5d35 +0x125f:  mov    %ebx,(%esp)
086b5d38 +0x1262:  call   086b6598 <+0x1ac2>
086b5d3d +0x1267:  jmp    086b5de3 <+0x130d>
086b5d42 +0x126c:  lea    -0x34(%ebp),%eax
086b5d45 +0x126f:  mov    %eax,(%esp)
086b5d48 +0x1272:  call   086b65c6 <+0x1af0>
086b5d4d +0x1277:  mov    0x10(%ebp),%eax
086b5d50 +0x127a:  mov    %eax,0x4(%esp)
086b5d54 +0x127e:  lea    -0x1e(%ebp),%eax
086b5d57 +0x1281:  mov    %eax,(%esp)
086b5d5a +0x1284:  call   086b6468 <+0x1992>
086b5d5f +0x1289:  mov    %eax,%esi
086b5d61 +0x128b:  mov    -0x34(%ebp),%eax
086b5d64 +0x128e:  mov    %eax,(%esp)
086b5d67 +0x1291:  call   086b65e3 <+0x1b0d>
086b5d6c +0x1296:  mov    0xc(%ebp),%edx
086b5d6f +0x1299:  mov    %esi,0x8(%esp)
086b5d73 +0x129d:  mov    %eax,0x4(%esp)
086b5d77 +0x12a1:  mov    %edx,(%esp)
086b5d7a +0x12a4:  call   086b6492 <+0x19bc>
086b5d7f +0x12a9:  test   %al,%al
086b5d81 +0x12ab:  je     086b5dc9 <+0x12f3>
086b5d83 +0x12ad:  movb   $0x1,-0x1d(%ebp)
086b5d87 +0x12b1:  mov    -0x10(%ebp),%ecx
086b5d8a +0x12b4:  mov    -0x14(%ebp),%edx
086b5d8d +0x12b7:  lea    -0x1c(%ebp),%eax
086b5d90 +0x12ba:  mov    0x10(%ebp),%esi
086b5d93 +0x12bd:  mov    %esi,0x10(%esp)
086b5d97 +0x12c1:  mov    %ecx,0xc(%esp)
086b5d9b +0x12c5:  mov    %edx,0x8(%esp)
086b5d9f +0x12c9:  mov    0xc(%ebp),%edx
086b5da2 +0x12cc:  mov    %edx,0x4(%esp)
086b5da6 +0x12d0:  mov    %eax,(%esp)
086b5da9 +0x12d3:  call   086b64d0 <+0x19fa>
086b5dae +0x12d8:  sub    $0x4,%esp
086b5db1 +0x12db:  lea    -0x1d(%ebp),%eax
086b5db4 +0x12de:  mov    %eax,0x8(%esp)
086b5db8 +0x12e2:  lea    -0x1c(%ebp),%eax
086b5dbb +0x12e5:  mov    %eax,0x4(%esp)
086b5dbf +0x12e9:  mov    %ebx,(%esp)
086b5dc2 +0x12ec:  call   086b6598 <+0x1ac2>
086b5dc7 +0x12f1:  jmp    086b5de3 <+0x130d>
086b5dc9 +0x12f3:  movb   $0x0,-0x15(%ebp)
086b5dcd +0x12f7:  lea    -0x15(%ebp),%eax
086b5dd0 +0x12fa:  mov    %eax,0x8(%esp)
086b5dd4 +0x12fe:  lea    -0x34(%ebp),%eax
086b5dd7 +0x1301:  mov    %eax,0x4(%esp)
086b5ddb +0x1305:  mov    %ebx,(%esp)
086b5dde +0x1308:  call   086b6606 <+0x1b30>
086b5de3 +0x130d:  mov    %ebx,%eax
086b5de5 +0x130f:  lea    -0x8(%ebp),%esp
086b5de8 +0x1312:  add    $0x0,%esp
086b5deb +0x1315:  pop    %ebx
086b5dec +0x1316:  pop    %esi
086b5ded +0x1317:  pop    %ebp
086b5dee +0x1318:  ret    $0x4
086b5df1 +0x131b:  nop
086b5df2 +0x131c:  push   %ebp
086b5df3 +0x131d:  mov    %esp,%ebp
086b5df5 +0x131f:  push   %ebx
086b5df6 +0x1320:  sub    $0x14,%esp
086b5df9 +0x1323:  mov    0x8(%ebp),%ebx
086b5dfc +0x1326:  mov    0xc(%ebp),%eax
086b5dff +0x1329:  mov    0xc(%eax),%eax
086b5e02 +0x132c:  mov    %eax,0x4(%esp)
086b5e06 +0x1330:  mov    %ebx,(%esp)
086b5e09 +0x1333:  call   086b64c2 <+0x19ec>
086b5e0e +0x1338:  mov    %ebx,%eax
086b5e10 +0x133a:  add    $0x14,%esp
086b5e13 +0x133d:  pop    %ebx
086b5e14 +0x133e:  pop    %ebp
086b5e15 +0x133f:  ret    $0x4
086b5e18 +0x1342:  push   %ebp
086b5e19 +0x1343:  mov    %esp,%ebp
086b5e1b +0x1345:  push   %ebx
086b5e1c +0x1346:  sub    $0x14,%esp
086b5e1f +0x1349:  mov    0x8(%ebp),%ebx
086b5e22 +0x134c:  mov    0xc(%ebp),%eax
086b5e25 +0x134f:  add    $0x4,%eax
086b5e28 +0x1352:  mov    %eax,0x4(%esp)
086b5e2c +0x1356:  mov    %ebx,(%esp)
086b5e2f +0x1359:  call   086b64c2 <+0x19ec>
086b5e34 +0x135e:  mov    %ebx,%eax
086b5e36 +0x1360:  add    $0x14,%esp
086b5e39 +0x1363:  pop    %ebx
086b5e3a +0x1364:  pop    %ebp
086b5e3b +0x1365:  ret    $0x4
086b5e3e +0x1368:  push   %ebp
086b5e3f +0x1369:  mov    %esp,%ebp
086b5e41 +0x136b:  push   %esi
086b5e42 +0x136c:  push   %ebx
086b5e43 +0x136d:  sub    $0x30,%esp
086b5e46 +0x1370:  mov    0x8(%ebp),%ebx
086b5e49 +0x1373:  mov    0xc(%ebp),%eax
086b5e4c +0x1376:  mov    %eax,(%esp)
086b5e4f +0x1379:  call   086b645c <+0x1986>
086b5e54 +0x137e:  mov    %eax,%esi
086b5e56 +0x1380:  mov    0xc(%ebp),%eax
086b5e59 +0x1383:  mov    %eax,(%esp)
086b5e5c +0x1386:  call   086b5f7a <+0x14a4>
086b5e61 +0x138b:  lea    -0x10(%ebp),%edx
086b5e64 +0x138e:  mov    0x10(%ebp),%ecx
086b5e67 +0x1391:  mov    %ecx,0x10(%esp)
086b5e6b +0x1395:  mov    %esi,0xc(%esp)
086b5e6f +0x1399:  mov    %eax,0x8(%esp)
086b5e73 +0x139d:  mov    0xc(%ebp),%eax
086b5e76 +0x13a0:  mov    %eax,0x4(%esp)
086b5e7a +0x13a4:  mov    %edx,(%esp)
086b5e7d +0x13a7:  call   086b6634 <+0x1b5e>
086b5e82 +0x13ac:  sub    $0x4,%esp
086b5e85 +0x13af:  lea    -0xc(%ebp),%eax
086b5e88 +0x13b2:  mov    0xc(%ebp),%edx
086b5e8b +0x13b5:  mov    %edx,0x4(%esp)
086b5e8f +0x13b9:  mov    %eax,(%esp)
086b5e92 +0x13bc:  call   086b5e18 <+0x1342>
086b5e97 +0x13c1:  sub    $0x4,%esp
086b5e9a +0x13c4:  lea    -0xc(%ebp),%eax
086b5e9d +0x13c7:  mov    %eax,0x4(%esp)
086b5ea1 +0x13cb:  lea    -0x10(%ebp),%eax
086b5ea4 +0x13ce:  mov    %eax,(%esp)
086b5ea7 +0x13d1:  call   086b54b2 <+0x9dc>
086b5eac +0x13d6:  test   %al,%al
086b5eae +0x13d8:  jne    086b5ed5 <+0x13ff>
086b5eb0 +0x13da:  mov    -0x10(%ebp),%eax
086b5eb3 +0x13dd:  mov    %eax,(%esp)
086b5eb6 +0x13e0:  call   086b65e3 <+0x1b0d>
086b5ebb +0x13e5:  mov    0xc(%ebp),%edx
086b5ebe +0x13e8:  mov    %eax,0x8(%esp)
086b5ec2 +0x13ec:  mov    0x10(%ebp),%eax
086b5ec5 +0x13ef:  mov    %eax,0x4(%esp)
086b5ec9 +0x13f3:  mov    %edx,(%esp)
086b5ecc +0x13f6:  call   086b6492 <+0x19bc>
086b5ed1 +0x13fb:  test   %al,%al
086b5ed3 +0x13fd:  je     086b5ee9 <+0x1413>
086b5ed5 +0x13ff:  mov    0xc(%ebp),%eax
086b5ed8 +0x1402:  mov    %eax,0x4(%esp)
086b5edc +0x1406:  mov    %ebx,(%esp)
086b5edf +0x1409:  call   086b5e18 <+0x1342>
086b5ee4 +0x140e:  sub    $0x4,%esp
086b5ee7 +0x1411:  jmp    086b5eee <+0x1418>
086b5ee9 +0x1413:  mov    -0x10(%ebp),%eax
086b5eec +0x1416:  mov    %eax,(%ebx)
086b5eee +0x1418:  mov    %ebx,%eax
086b5ef0 +0x141a:  lea    -0x8(%ebp),%esp
086b5ef3 +0x141d:  add    $0x0,%esp
086b5ef6 +0x1420:  pop    %ebx
086b5ef7 +0x1421:  pop    %esi
086b5ef8 +0x1422:  pop    %ebp
086b5ef9 +0x1423:  ret    $0x4
086b5efc +0x1426:  push   %ebp
086b5efd +0x1427:  mov    %esp,%ebp
086b5eff +0x1429:  sub    $0x18,%esp
086b5f02 +0x142c:  mov    0x8(%ebp),%eax
086b5f05 +0x142f:  mov    %eax,(%esp)
086b5f08 +0x1432:  call   086b66b0 <+0x1bda>
086b5f0d +0x1437:  leave
086b5f0e +0x1438:  ret
086b5f0f +0x1439:  nop
086b5f10 +0x143a:  push   %ebp
086b5f11 +0x143b:  mov    %esp,%ebp
086b5f13 +0x143d:  sub    $0x18,%esp
086b5f16 +0x1440:  mov    0x8(%ebp),%eax
086b5f19 +0x1443:  mov    %eax,(%esp)
086b5f1c +0x1446:  call   086b6700 <+0x1c2a>
086b5f21 +0x144b:  leave
086b5f22 +0x144c:  ret
086b5f23 +0x144d:  nop
086b5f24 +0x144e:  push   %ebp
086b5f25 +0x144f:  mov    %esp,%ebp
086b5f27 +0x1451:  sub    $0x28,%esp
086b5f2a +0x1454:  jmp    086b5f6c <+0x1496>
086b5f2c +0x1456:  mov    0xc(%ebp),%eax
086b5f2f +0x1459:  mov    %eax,(%esp)
086b5f32 +0x145c:  call   086b64ac <+0x19d6>
086b5f37 +0x1461:  mov    %eax,0x4(%esp)
086b5f3b +0x1465:  mov    0x8(%ebp),%eax
086b5f3e +0x1468:  mov    %eax,(%esp)
086b5f41 +0x146b:  call   086b5f24 <+0x144e>
086b5f46 +0x1470:  mov    0xc(%ebp),%eax
086b5f49 +0x1473:  mov    %eax,(%esp)
086b5f4c +0x1476:  call   086b64b7 <+0x19e1>
086b5f51 +0x147b:  mov    %eax,-0xc(%ebp)
086b5f54 +0x147e:  mov    0xc(%ebp),%eax
086b5f57 +0x1481:  mov    %eax,0x4(%esp)
086b5f5b +0x1485:  mov    0x8(%ebp),%eax
086b5f5e +0x1488:  mov    %eax,(%esp)
086b5f61 +0x148b:  call   086b6706 <+0x1c30>
086b5f66 +0x1490:  mov    -0xc(%ebp),%eax
086b5f69 +0x1493:  mov    %eax,0xc(%ebp)
086b5f6c +0x1496:  cmpl   $0x0,0xc(%ebp)
086b5f70 +0x149a:  setne  %al
086b5f73 +0x149d:  test   %al,%al
086b5f75 +0x149f:  jne    086b5f2c <+0x1456>
086b5f77 +0x14a1:  leave
086b5f78 +0x14a2:  ret
086b5f79 +0x14a3:  nop
086b5f7a +0x14a4:  push   %ebp
086b5f7b +0x14a5:  mov    %esp,%ebp
086b5f7d +0x14a7:  mov    0x8(%ebp),%eax
086b5f80 +0x14aa:  mov    0x8(%eax),%eax
086b5f83 +0x14ad:  pop    %ebp
086b5f84 +0x14ae:  ret
086b5f85 +0x14af:  nop
086b5f86 +0x14b0:  push   %ebp
086b5f87 +0x14b1:  mov    %esp,%ebp
086b5f89 +0x14b3:  sub    $0x18,%esp
086b5f8c +0x14b6:  mov    0x8(%ebp),%eax
086b5f8f +0x14b9:  mov    %eax,(%esp)
086b5f92 +0x14bc:  call   086b673a <+0x1c64>
086b5f97 +0x14c1:  mov    0x8(%ebp),%eax
086b5f9a +0x14c4:  movl   $0x0,0x4(%eax)
086b5fa1 +0x14cb:  mov    0x8(%ebp),%eax
086b5fa4 +0x14ce:  movl   $0x0,0x8(%eax)
086b5fab +0x14d5:  mov    0x8(%ebp),%eax
086b5fae +0x14d8:  movl   $0x0,0xc(%eax)
086b5fb5 +0x14df:  mov    0x8(%ebp),%eax
086b5fb8 +0x14e2:  movl   $0x0,0x10(%eax)
086b5fbf +0x14e9:  mov    0x8(%ebp),%eax
086b5fc2 +0x14ec:  movl   $0x0,0x14(%eax)
086b5fc9 +0x14f3:  mov    0x8(%ebp),%eax
086b5fcc +0x14f6:  mov    %eax,(%esp)
086b5fcf +0x14f9:  call   086b674e <+0x1c78>
086b5fd4 +0x14fe:  leave
086b5fd5 +0x14ff:  ret
086b5fd6 +0x1500:  push   %ebp
086b5fd7 +0x1501:  mov    %esp,%ebp
086b5fd9 +0x1503:  pop    %ebp
086b5fda +0x1504:  ret
086b5fdb +0x1505:  push   %ebp
086b5fdc +0x1506:  mov    %esp,%ebp
086b5fde +0x1508:  mov    0x8(%ebp),%eax
086b5fe1 +0x150b:  mov    0xc(%eax),%eax
086b5fe4 +0x150e:  pop    %ebp
086b5fe5 +0x150f:  ret
086b5fe6 +0x1510:  push   %ebp
086b5fe7 +0x1511:  mov    %esp,%ebp
086b5fe9 +0x1513:  mov    0x8(%ebp),%eax
086b5fec +0x1516:  mov    0x8(%eax),%eax
086b5fef +0x1519:  pop    %ebp
086b5ff0 +0x151a:  ret
086b5ff1 +0x151b:  nop
086b5ff2 +0x151c:  push   %ebp
086b5ff3 +0x151d:  mov    %esp,%ebp
086b5ff5 +0x151f:  sub    $0x18,%esp
086b5ff8 +0x1522:  mov    0x8(%ebp),%eax
086b5ffb +0x1525:  mov    %eax,(%esp)
086b5ffe +0x1528:  call   086b6780 <+0x1caa>
086b6003 +0x152d:  mov    0xc(%ebp),%edx
086b6006 +0x1530:  mov    %edx,0x4(%esp)
086b600a +0x1534:  mov    %eax,(%esp)
086b600d +0x1537:  call   086b679e <+0x1cc8>
086b6012 +0x153c:  mov    0xc(%ebp),%eax
086b6015 +0x153f:  mov    %eax,0x4(%esp)
086b6019 +0x1543:  mov    0x8(%ebp),%eax
086b601c +0x1546:  mov    %eax,(%esp)
086b601f +0x1549:  call   086b67b2 <+0x1cdc>
086b6024 +0x154e:  leave
086b6025 +0x154f:  ret
086b6026 +0x1550:  push   %ebp
086b6027 +0x1551:  mov    %esp,%ebp
086b6029 +0x1553:  push   %edi
086b602a +0x1554:  push   %esi
086b602b +0x1555:  push   %ebx
086b602c +0x1556:  sub    $0x2c,%esp
086b602f +0x1559:  mov    0x8(%ebp),%edi
086b6032 +0x155c:  mov    0x14(%ebp),%eax
086b6035 +0x155f:  mov    %eax,(%esp)
086b6038 +0x1562:  call   086b67d4 <+0x1cfe>
086b603d +0x1567:  mov    %eax,%esi
086b603f +0x1569:  mov    0x10(%ebp),%eax
086b6042 +0x156c:  mov    %eax,(%esp)
086b6045 +0x156f:  call   083ef992 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8995e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8995e
086b604a +0x1574:  mov    %eax,%ebx
086b604c +0x1576:  mov    0xc(%ebp),%eax
086b604f +0x1579:  mov    %eax,(%esp)
086b6052 +0x157c:  call   083ef992 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8995e>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8995e
086b6057 +0x1581:  mov    %esi,0x8(%esp)
086b605b +0x1585:  mov    %ebx,0x4(%esp)
086b605f +0x1589:  mov    %eax,(%esp)
086b6062 +0x158c:  call   083ef9af <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8997b>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8997b
086b6067 +0x1591:  mov    %eax,-0x1c(%ebp)
086b606a +0x1594:  lea    -0x1c(%ebp),%eax
086b606d +0x1597:  mov    %eax,0x4(%esp)
086b6071 +0x159b:  mov    %edi,(%esp)
086b6074 +0x159e:  call   086b57ce <+0xcf8>
086b6079 +0x15a3:  mov    %edi,%eax
086b607b +0x15a5:  add    $0x2c,%esp
086b607e +0x15a8:  pop    %ebx
086b607f +0x15a9:  pop    %esi
086b6080 +0x15aa:  pop    %edi
086b6081 +0x15ab:  pop    %ebp
086b6082 +0x15ac:  ret    $0x4
086b6085 +0x15af:  push   %ebp
086b6086 +0x15b0:  mov    %esp,%ebp
086b6088 +0x15b2:  sub    $0x18,%esp
086b608b +0x15b5:  mov    0xc(%ebp),%eax
086b608e +0x15b8:  mov    %eax,0x4(%esp)
086b6092 +0x15bc:  mov    0x8(%ebp),%eax
086b6095 +0x15bf:  mov    %eax,(%esp)
086b6098 +0x15c2:  call   086b67e9 <+0x1d13>
086b609d +0x15c7:  leave
086b609e +0x15c8:  ret
086b609f +0x15c9:  push   %ebp
086b60a0 +0x15ca:  mov    %esp,%ebp
086b60a2 +0x15cc:  mov    0x8(%ebp),%eax
086b60a5 +0x15cf:  pop    %ebp
086b60a6 +0x15d0:  ret
086b60a7 +0x15d1:  push   %ebp
086b60a8 +0x15d2:  mov    %esp,%ebp
086b60aa +0x15d4:  push   %esi
086b60ab +0x15d5:  push   %ebx
086b60ac +0x15d6:  sub    $0x10,%esp
086b60af +0x15d9:  mov    0x10(%ebp),%eax
086b60b2 +0x15dc:  mov    %eax,(%esp)
086b60b5 +0x15df:  call   083ef9a7 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89973>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89973
086b60ba +0x15e4:  mov    %eax,%esi
086b60bc +0x15e6:  mov    0xc(%ebp),%eax
086b60bf +0x15e9:  mov    %eax,(%esp)
086b60c2 +0x15ec:  call   083ef9a7 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89973>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89973
086b60c7 +0x15f1:  mov    %eax,%ebx
086b60c9 +0x15f3:  mov    0x8(%ebp),%eax
086b60cc +0x15f6:  mov    %eax,(%esp)
086b60cf +0x15f9:  call   083ef9a7 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89973>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89973
086b60d4 +0x15fe:  mov    %esi,0x8(%esp)
086b60d8 +0x1602:  mov    %ebx,0x4(%esp)
086b60dc +0x1606:  mov    %eax,(%esp)
086b60df +0x1609:  call   086b67ee <+0x1d18>
086b60e4 +0x160e:  add    $0x10,%esp
086b60e7 +0x1611:  pop    %ebx
086b60e8 +0x1612:  pop    %esi
086b60e9 +0x1613:  pop    %ebp
086b60ea +0x1614:  ret
086b60eb +0x1615:  push   %ebp
086b60ec +0x1616:  mov    %esp,%ebp
086b60ee +0x1618:  sub    $0x18,%esp
086b60f1 +0x161b:  mov    0x10(%ebp),%eax
086b60f4 +0x161e:  mov    %eax,0x8(%esp)
086b60f8 +0x1622:  mov    0xc(%ebp),%eax
086b60fb +0x1625:  mov    %eax,0x4(%esp)
086b60ff +0x1629:  mov    0x8(%ebp),%eax
086b6102 +0x162c:  mov    %eax,(%esp)
086b6105 +0x162f:  call   086b6813 <+0x1d3d>
086b610a +0x1634:  leave
086b610b +0x1635:  ret
086b610c +0x1636:  push   %ebp
086b610d +0x1637:  mov    %esp,%ebp
086b610f +0x1639:  mov    0xc(%ebp),%edx
086b6112 +0x163c:  mov    0x8(%ebp),%eax
086b6115 +0x163f:  mov    %edx,(%eax)
086b6117 +0x1641:  pop    %ebp
086b6118 +0x1642:  ret
086b6119 +0x1643:  nop
086b611a +0x1644:  push   %ebp
086b611b +0x1645:  mov    %esp,%ebp
086b611d +0x1647:  mov    0x8(%ebp),%eax
086b6120 +0x164a:  add    $0x4,%eax
086b6123 +0x164d:  pop    %ebp
086b6124 +0x164e:  ret
086b6125 +0x164f:  nop
086b6126 +0x1650:  push   %ebp
086b6127 +0x1651:  mov    %esp,%ebp
086b6129 +0x1653:  mov    0xc(%ebp),%eax
086b612c +0x1656:  pop    %ebp
086b612d +0x1657:  ret
086b612e +0x1658:  push   %ebp
086b612f +0x1659:  mov    %esp,%ebp
086b6131 +0x165b:  sub    $0x28,%esp
086b6134 +0x165e:  mov    0x8(%ebp),%eax
086b6137 +0x1661:  mov    %eax,(%esp)
086b613a +0x1664:  call   086b6834 <+0x1d5e>
086b613f +0x1669:  mov    %eax,0x4(%esp)
086b6143 +0x166d:  lea    -0x9(%ebp),%eax
086b6146 +0x1670:  mov    %eax,(%esp)
086b6149 +0x1673:  call   086b6126 <+0x1650>
086b614e +0x1678:  leave
086b614f +0x1679:  ret
086b6150 +0x167a:  push   %ebp
086b6151 +0x167b:  mov    %esp,%ebp
086b6153 +0x167d:  mov    0x8(%ebp),%eax
086b6156 +0x1680:  mov    (%eax),%edx
086b6158 +0x1682:  mov    0xc(%ebp),%eax
086b615b +0x1685:  mov    (%eax),%eax
086b615d +0x1687:  cmp    %eax,%edx
086b615f +0x1689:  sete   %al
086b6162 +0x168c:  pop    %ebp
086b6163 +0x168d:  ret
086b6164 +0x168e:  push   %ebp
086b6165 +0x168f:  mov    %esp,%ebp
086b6167 +0x1691:  push   %esi
086b6168 +0x1692:  push   %ebx
086b6169 +0x1693:  sub    $0x20,%esp
086b616c +0x1696:  mov    0x8(%ebp),%esi
086b616f +0x1699:  cmpl   $0x0,0x10(%ebp)
086b6173 +0x169d:  jne    086b61bb <+0x16e5>
086b6175 +0x169f:  mov    0xc(%ebp),%eax
086b6178 +0x16a2:  mov    %eax,(%esp)
086b617b +0x16a5:  call   086b611a <+0x1644>
086b6180 +0x16aa:  cmp    0x14(%ebp),%eax
086b6183 +0x16ad:  je     086b61bb <+0x16e5>
086b6185 +0x16af:  mov    0x14(%ebp),%eax
086b6188 +0x16b2:  mov    %eax,(%esp)
086b618b +0x16b5:  call   086b6277 <+0x17a1>
086b6190 +0x16ba:  mov    %eax,%ebx
086b6192 +0x16bc:  mov    0x18(%ebp),%eax
086b6195 +0x16bf:  mov    %eax,0x4(%esp)
086b6199 +0x16c3:  lea    -0xe(%ebp),%eax
086b619c +0x16c6:  mov    %eax,(%esp)
086b619f +0x16c9:  call   086b6126 <+0x1650>
086b61a4 +0x16ce:  mov    0xc(%ebp),%edx
086b61a7 +0x16d1:  mov    %ebx,0x8(%esp)
086b61ab +0x16d5:  mov    %eax,0x4(%esp)
086b61af +0x16d9:  mov    %edx,(%esp)
086b61b2 +0x16dc:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
086b61b7 +0x16e1:  test   %al,%al
086b61b9 +0x16e3:  je     086b61c2 <+0x16ec>
086b61bb +0x16e5:  mov    $0x1,%eax
086b61c0 +0x16ea:  jmp    086b61c7 <+0x16f1>
086b61c2 +0x16ec:  mov    $0x0,%eax
086b61c7 +0x16f1:  mov    %al,-0xd(%ebp)
086b61ca +0x16f4:  mov    0x18(%ebp),%eax
086b61cd +0x16f7:  mov    %eax,0x4(%esp)
086b61d1 +0x16fb:  mov    0xc(%ebp),%eax
086b61d4 +0x16fe:  mov    %eax,(%esp)
086b61d7 +0x1701:  call   086b6840 <+0x1d6a>
086b61dc +0x1706:  mov    %eax,-0xc(%ebp)
086b61df +0x1709:  mov    0xc(%ebp),%eax
086b61e2 +0x170c:  lea    0x4(%eax),%ecx
086b61e5 +0x170f:  mov    -0xc(%ebp),%edx
086b61e8 +0x1712:  movzbl -0xd(%ebp),%eax
086b61ec +0x1716:  mov    %ecx,0xc(%esp)
086b61f0 +0x171a:  mov    0x14(%ebp),%ecx
086b61f3 +0x171d:  mov    %ecx,0x8(%esp)
086b61f7 +0x1721:  mov    %edx,0x4(%esp)
086b61fb +0x1725:  mov    %eax,(%esp)
086b61fe +0x1728:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
086b6203 +0x172d:  mov    0xc(%ebp),%eax
086b6206 +0x1730:  mov    0x14(%eax),%eax
086b6209 +0x1733:  lea    0x1(%eax),%edx
086b620c +0x1736:  mov    0xc(%ebp),%eax
086b620f +0x1739:  mov    %edx,0x14(%eax)
086b6212 +0x173c:  mov    -0xc(%ebp),%eax
086b6215 +0x173f:  mov    %eax,0x4(%esp)
086b6219 +0x1743:  mov    %esi,(%esp)
086b621c +0x1746:  call   086b610c <+0x1636>
086b6221 +0x174b:  mov    %esi,%eax
086b6223 +0x174d:  add    $0x20,%esp
086b6226 +0x1750:  pop    %ebx
086b6227 +0x1751:  pop    %esi
086b6228 +0x1752:  pop    %ebp
086b6229 +0x1753:  ret    $0x4
086b622c +0x1756:  push   %ebp
086b622d +0x1757:  mov    %esp,%ebp
086b622f +0x1759:  sub    $0x18,%esp
086b6232 +0x175c:  mov    0xc(%ebp),%eax
086b6235 +0x175f:  mov    %eax,(%esp)
086b6238 +0x1762:  call   086b68c1 <+0x1deb>
086b623d +0x1767:  mov    0x8(%ebp),%edx
086b6240 +0x176a:  mov    (%eax),%eax
086b6242 +0x176c:  mov    %eax,(%edx)
086b6244 +0x176e:  mov    0x10(%ebp),%eax
086b6247 +0x1771:  mov    %eax,(%esp)
086b624a +0x1774:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
086b624f +0x1779:  movzbl (%eax),%edx
086b6252 +0x177c:  mov    0x8(%ebp),%eax
086b6255 +0x177f:  mov    %dl,0x4(%eax)
086b6258 +0x1782:  leave
086b6259 +0x1783:  ret
086b625a +0x1784:  push   %ebp
086b625b +0x1785:  mov    %esp,%ebp
086b625d +0x1787:  sub    $0x18,%esp
086b6260 +0x178a:  mov    0x8(%ebp),%eax
086b6263 +0x178d:  mov    (%eax),%eax
086b6265 +0x178f:  mov    %eax,(%esp)
086b6268 +0x1792:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
086b626d +0x1797:  mov    0x8(%ebp),%edx
086b6270 +0x179a:  mov    %eax,(%edx)
086b6272 +0x179c:  mov    0x8(%ebp),%eax
086b6275 +0x179f:  leave
086b6276 +0x17a0:  ret
086b6277 +0x17a1:  push   %ebp
086b6278 +0x17a2:  mov    %esp,%ebp
086b627a +0x17a4:  sub    $0x28,%esp
086b627d +0x17a7:  mov    0x8(%ebp),%eax
086b6280 +0x17aa:  mov    %eax,(%esp)
086b6283 +0x17ad:  call   086b68c9 <+0x1df3>
086b6288 +0x17b2:  mov    %eax,0x4(%esp)
086b628c +0x17b6:  lea    -0x9(%ebp),%eax
086b628f +0x17b9:  mov    %eax,(%esp)
086b6292 +0x17bc:  call   086b6126 <+0x1650>
086b6297 +0x17c1:  leave
086b6298 +0x17c2:  ret
086b6299 +0x17c3:  nop
086b629a +0x17c4:  push   %ebp
086b629b +0x17c5:  mov    %esp,%ebp
086b629d +0x17c7:  sub    $0x18,%esp
086b62a0 +0x17ca:  mov    0xc(%ebp),%eax
086b62a3 +0x17cd:  mov    %eax,(%esp)
086b62a6 +0x17d0:  call   086b68d4 <+0x1dfe>
086b62ab +0x17d5:  mov    0x8(%ebp),%edx
086b62ae +0x17d8:  mov    (%eax),%eax
086b62b0 +0x17da:  mov    %eax,(%edx)
086b62b2 +0x17dc:  mov    0x10(%ebp),%eax
086b62b5 +0x17df:  mov    %eax,(%esp)
086b62b8 +0x17e2:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
086b62bd +0x17e7:  movzbl (%eax),%edx
086b62c0 +0x17ea:  mov    0x8(%ebp),%eax
086b62c3 +0x17ed:  mov    %dl,0x4(%eax)
086b62c6 +0x17f0:  leave
086b62c7 +0x17f1:  ret
086b62c8 +0x17f2:  push   %ebp
086b62c9 +0x17f3:  mov    %esp,%ebp
086b62cb +0x17f5:  mov    0x8(%ebp),%eax
086b62ce +0x17f8:  add    $0xc,%eax
086b62d1 +0x17fb:  pop    %ebp
086b62d2 +0x17fc:  ret
086b62d3 +0x17fd:  nop
086b62d4 +0x17fe:  push   %ebp
086b62d5 +0x17ff:  mov    %esp,%ebp
086b62d7 +0x1801:  mov    0x8(%ebp),%eax
086b62da +0x1804:  add    $0x8,%eax
086b62dd +0x1807:  pop    %ebp
086b62de +0x1808:  ret
086b62df +0x1809:  nop
086b62e0 +0x180a:  push   %ebp
086b62e1 +0x180b:  mov    %esp,%ebp
086b62e3 +0x180d:  mov    0x8(%ebp),%eax
086b62e6 +0x1810:  add    $0x10,%eax
086b62e9 +0x1813:  pop    %ebp
086b62ea +0x1814:  ret
086b62eb +0x1815:  nop
086b62ec +0x1816:  push   %ebp
086b62ed +0x1817:  mov    %esp,%ebp
086b62ef +0x1819:  push   %ebx
086b62f0 +0x181a:  sub    $0x14,%esp
086b62f3 +0x181d:  mov    0x8(%ebp),%ebx
086b62f6 +0x1820:  jmp    086b6344 <+0x186e>
086b62f8 +0x1822:  mov    0x10(%ebp),%eax
086b62fb +0x1825:  mov    %eax,(%esp)
086b62fe +0x1828:  call   086b612e <+0x1658>
086b6303 +0x182d:  mov    0xc(%ebp),%edx
086b6306 +0x1830:  mov    0x18(%ebp),%ecx
086b6309 +0x1833:  mov    %ecx,0x8(%esp)
086b630d +0x1837:  mov    %eax,0x4(%esp)
086b6311 +0x183b:  mov    %edx,(%esp)
086b6314 +0x183e:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
086b6319 +0x1843:  xor    $0x1,%eax
086b631c +0x1846:  test   %al,%al
086b631e +0x1848:  je     086b6336 <+0x1860>
086b6320 +0x184a:  mov    0x10(%ebp),%eax
086b6323 +0x184d:  mov    %eax,0x14(%ebp)
086b6326 +0x1850:  mov    0x10(%ebp),%eax
086b6329 +0x1853:  mov    %eax,(%esp)
086b632c +0x1856:  call   086b5fe6 <+0x1510>
086b6331 +0x185b:  mov    %eax,0x10(%ebp)
086b6334 +0x185e:  jmp    086b6344 <+0x186e>
086b6336 +0x1860:  mov    0x10(%ebp),%eax
086b6339 +0x1863:  mov    %eax,(%esp)
086b633c +0x1866:  call   086b5fdb <+0x1505>
086b6341 +0x186b:  mov    %eax,0x10(%ebp)
086b6344 +0x186e:  cmpl   $0x0,0x10(%ebp)
086b6348 +0x1872:  setne  %al
086b634b +0x1875:  test   %al,%al
086b634d +0x1877:  jne    086b62f8 <+0x1822>
086b634f +0x1879:  mov    0x14(%ebp),%eax
086b6352 +0x187c:  mov    %eax,0x4(%esp)
086b6356 +0x1880:  mov    %ebx,(%esp)
086b6359 +0x1883:  call   086b610c <+0x1636>
086b635e +0x1888:  mov    %ebx,%eax
086b6360 +0x188a:  add    $0x14,%esp
086b6363 +0x188d:  pop    %ebx
086b6364 +0x188e:  pop    %ebp
086b6365 +0x188f:  ret    $0x4
086b6368 +0x1892:  push   %ebp
086b6369 +0x1893:  mov    %esp,%ebp
086b636b +0x1895:  push   %esi
086b636c +0x1896:  push   %ebx
086b636d +0x1897:  sub    $0x10,%esp
086b6370 +0x189a:  mov    0xc(%ebp),%eax
086b6373 +0x189d:  mov    %eax,(%esp)
086b6376 +0x18a0:  call   086b68dc <+0x1e06>
086b637b +0x18a5:  mov    0xc(%ebp),%ecx
086b637e +0x18a8:  mov    0x8(%ebp),%edx
086b6381 +0x18ab:  mov    %eax,0x8(%esp)
086b6385 +0x18af:  mov    %ecx,0x4(%esp)
086b6389 +0x18b3:  mov    %edx,(%esp)
086b638c +0x18b6:  call   086b68e4 <+0x1e0e>
086b6391 +0x18bb:  mov    0xc(%ebp),%eax
086b6394 +0x18be:  mov    %eax,(%esp)
086b6397 +0x18c1:  call   086b693c <+0x1e66>
086b639c +0x18c6:  test   %eax,%eax
086b639e +0x18c8:  setne  %al
086b63a1 +0x18cb:  test   %al,%al
086b63a3 +0x18cd:  je     086b6454 <+0x197e>
086b63a9 +0x18d3:  mov    0x8(%ebp),%eax
086b63ac +0x18d6:  mov    %eax,(%esp)
086b63af +0x18d9:  call   086b62d4 <+0x17fe>
086b63b4 +0x18de:  mov    %eax,%ebx
086b63b6 +0x18e0:  mov    0x8(%ebp),%eax
086b63b9 +0x18e3:  mov    %eax,(%esp)
086b63bc +0x18e6:  call   086b611a <+0x1644>
086b63c1 +0x18eb:  mov    %eax,%esi
086b63c3 +0x18ed:  mov    0xc(%ebp),%eax
086b63c6 +0x18f0:  mov    %eax,(%esp)
086b63c9 +0x18f3:  call   086b6a70 <+0x1f9a>
086b63ce +0x18f8:  mov    %esi,0x8(%esp)
086b63d2 +0x18fc:  mov    %eax,0x4(%esp)
086b63d6 +0x1900:  mov    0x8(%ebp),%eax
086b63d9 +0x1903:  mov    %eax,(%esp)
086b63dc +0x1906:  call   086b6948 <+0x1e72>
086b63e1 +0x190b:  mov    %eax,(%ebx)
086b63e3 +0x190d:  mov    0x8(%ebp),%eax
086b63e6 +0x1910:  mov    %eax,(%esp)
086b63e9 +0x1913:  call   086b62c8 <+0x17f2>
086b63ee +0x1918:  mov    %eax,%ebx
086b63f0 +0x191a:  mov    0x8(%ebp),%eax
086b63f3 +0x191d:  mov    %eax,(%esp)
086b63f6 +0x1920:  call   086b62d4 <+0x17fe>
086b63fb +0x1925:  mov    (%eax),%eax
086b63fd +0x1927:  mov    %eax,(%esp)
086b6400 +0x192a:  call   086b6a7b <+0x1fa5>
086b6405 +0x192f:  mov    %eax,(%ebx)
086b6407 +0x1931:  mov    0x8(%ebp),%eax
086b640a +0x1934:  mov    %eax,(%esp)
086b640d +0x1937:  call   086b62e0 <+0x180a>
086b6412 +0x193c:  mov    %eax,%ebx
086b6414 +0x193e:  mov    0x8(%ebp),%eax
086b6417 +0x1941:  mov    %eax,(%esp)
086b641a +0x1944:  call   086b62d4 <+0x17fe>
086b641f +0x1949:  mov    (%eax),%eax
086b6421 +0x194b:  mov    %eax,(%esp)
086b6424 +0x194e:  call   086b6a8e <+0x1fb8>
086b6429 +0x1953:  mov    %eax,(%ebx)
086b642b +0x1955:  mov    0xc(%ebp),%eax
086b642e +0x1958:  mov    0x14(%eax),%edx
086b6431 +0x195b:  mov    0x8(%ebp),%eax
086b6434 +0x195e:  mov    %edx,0x14(%eax)
086b6437 +0x1961:  jmp    086b6454 <+0x197e>
086b6439 +0x1963:  mov    %edx,%ebx
086b643b +0x1965:  mov    %eax,%esi
086b643d +0x1967:  mov    0x8(%ebp),%eax
086b6440 +0x196a:  mov    %eax,(%esp)
086b6443 +0x196d:  call   086b4cde <+0x208>
086b6448 +0x1972:  mov    %esi,%eax
086b644a +0x1974:  mov    %ebx,%edx
086b644c +0x1976:  mov    %eax,(%esp)
086b644f +0x1979:  call   08ae3750 <_Unwind_Resume>
086b6454 +0x197e:  add    $0x10,%esp
086b6457 +0x1981:  pop    %ebx
086b6458 +0x1982:  pop    %esi
086b6459 +0x1983:  pop    %ebp
086b645a +0x1984:  ret
086b645b +0x1985:  nop
086b645c +0x1986:  push   %ebp
086b645d +0x1987:  mov    %esp,%ebp
086b645f +0x1989:  mov    0x8(%ebp),%eax
086b6462 +0x198c:  add    $0x4,%eax
086b6465 +0x198f:  pop    %ebp
086b6466 +0x1990:  ret
086b6467 +0x1991:  nop
086b6468 +0x1992:  push   %ebp
086b6469 +0x1993:  mov    %esp,%ebp
086b646b +0x1995:  mov    0xc(%ebp),%eax
086b646e +0x1998:  pop    %ebp
086b646f +0x1999:  ret
086b6470 +0x199a:  push   %ebp
086b6471 +0x199b:  mov    %esp,%ebp
086b6473 +0x199d:  sub    $0x28,%esp
086b6476 +0x19a0:  mov    0x8(%ebp),%eax
086b6479 +0x19a3:  mov    %eax,(%esp)
086b647c +0x19a6:  call   086b6aa1 <+0x1fcb>
086b6481 +0x19ab:  mov    %eax,0x4(%esp)
086b6485 +0x19af:  lea    -0x9(%ebp),%eax
086b6488 +0x19b2:  mov    %eax,(%esp)
086b648b +0x19b5:  call   086b6468 <+0x1992>
086b6490 +0x19ba:  leave
086b6491 +0x19bb:  ret
086b6492 +0x19bc:  push   %ebp
086b6493 +0x19bd:  mov    %esp,%ebp
086b6495 +0x19bf:  sub    $0x18,%esp
086b6498 +0x19c2:  mov    0x10(%ebp),%eax
086b649b +0x19c5:  mov    %eax,0x4(%esp)
086b649f +0x19c9:  mov    0xc(%ebp),%eax
086b64a2 +0x19cc:  mov    %eax,(%esp)
086b64a5 +0x19cf:  call   086b4af2 <+0x1c>
086b64aa +0x19d4:  leave
086b64ab +0x19d5:  ret
086b64ac +0x19d6:  push   %ebp
086b64ad +0x19d7:  mov    %esp,%ebp
086b64af +0x19d9:  mov    0x8(%ebp),%eax
086b64b2 +0x19dc:  mov    0xc(%eax),%eax
086b64b5 +0x19df:  pop    %ebp
086b64b6 +0x19e0:  ret
086b64b7 +0x19e1:  push   %ebp
086b64b8 +0x19e2:  mov    %esp,%ebp
086b64ba +0x19e4:  mov    0x8(%ebp),%eax
086b64bd +0x19e7:  mov    0x8(%eax),%eax
086b64c0 +0x19ea:  pop    %ebp
086b64c1 +0x19eb:  ret
086b64c2 +0x19ec:  push   %ebp
086b64c3 +0x19ed:  mov    %esp,%ebp
086b64c5 +0x19ef:  mov    0xc(%ebp),%edx
086b64c8 +0x19f2:  mov    0x8(%ebp),%eax
086b64cb +0x19f5:  mov    %edx,(%eax)
086b64cd +0x19f7:  pop    %ebp
086b64ce +0x19f8:  ret
086b64cf +0x19f9:  nop
086b64d0 +0x19fa:  push   %ebp
086b64d1 +0x19fb:  mov    %esp,%ebp
086b64d3 +0x19fd:  push   %esi
086b64d4 +0x19fe:  push   %ebx
086b64d5 +0x19ff:  sub    $0x20,%esp
086b64d8 +0x1a02:  mov    0x8(%ebp),%esi
086b64db +0x1a05:  cmpl   $0x0,0x10(%ebp)
086b64df +0x1a09:  jne    086b6527 <+0x1a51>
086b64e1 +0x1a0b:  mov    0xc(%ebp),%eax
086b64e4 +0x1a0e:  mov    %eax,(%esp)
086b64e7 +0x1a11:  call   086b645c <+0x1986>
086b64ec +0x1a16:  cmp    0x14(%ebp),%eax
086b64ef +0x1a19:  je     086b6527 <+0x1a51>
086b64f1 +0x1a1b:  mov    0x14(%ebp),%eax
086b64f4 +0x1a1e:  mov    %eax,(%esp)
086b64f7 +0x1a21:  call   086b65e3 <+0x1b0d>
086b64fc +0x1a26:  mov    %eax,%ebx
086b64fe +0x1a28:  mov    0x18(%ebp),%eax
086b6501 +0x1a2b:  mov    %eax,0x4(%esp)
086b6505 +0x1a2f:  lea    -0xe(%ebp),%eax
086b6508 +0x1a32:  mov    %eax,(%esp)
086b650b +0x1a35:  call   086b6468 <+0x1992>
086b6510 +0x1a3a:  mov    0xc(%ebp),%edx
086b6513 +0x1a3d:  mov    %ebx,0x8(%esp)
086b6517 +0x1a41:  mov    %eax,0x4(%esp)
086b651b +0x1a45:  mov    %edx,(%esp)
086b651e +0x1a48:  call   086b6492 <+0x19bc>
086b6523 +0x1a4d:  test   %al,%al
086b6525 +0x1a4f:  je     086b652e <+0x1a58>
086b6527 +0x1a51:  mov    $0x1,%eax
086b652c +0x1a56:  jmp    086b6533 <+0x1a5d>
086b652e +0x1a58:  mov    $0x0,%eax
086b6533 +0x1a5d:  mov    %al,-0xd(%ebp)
086b6536 +0x1a60:  mov    0x18(%ebp),%eax
086b6539 +0x1a63:  mov    %eax,0x4(%esp)
086b653d +0x1a67:  mov    0xc(%ebp),%eax
086b6540 +0x1a6a:  mov    %eax,(%esp)
086b6543 +0x1a6d:  call   086b6aac <+0x1fd6>
086b6548 +0x1a72:  mov    %eax,-0xc(%ebp)
086b654b +0x1a75:  mov    0xc(%ebp),%eax
086b654e +0x1a78:  lea    0x4(%eax),%ecx
086b6551 +0x1a7b:  mov    -0xc(%ebp),%edx
086b6554 +0x1a7e:  movzbl -0xd(%ebp),%eax
086b6558 +0x1a82:  mov    %ecx,0xc(%esp)
086b655c +0x1a86:  mov    0x14(%ebp),%ecx
086b655f +0x1a89:  mov    %ecx,0x8(%esp)
086b6563 +0x1a8d:  mov    %edx,0x4(%esp)
086b6567 +0x1a91:  mov    %eax,(%esp)
086b656a +0x1a94:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
086b656f +0x1a99:  mov    0xc(%ebp),%eax
086b6572 +0x1a9c:  mov    0x14(%eax),%eax
086b6575 +0x1a9f:  lea    0x1(%eax),%edx
086b6578 +0x1aa2:  mov    0xc(%ebp),%eax
086b657b +0x1aa5:  mov    %edx,0x14(%eax)
086b657e +0x1aa8:  mov    -0xc(%ebp),%eax
086b6581 +0x1aab:  mov    %eax,0x4(%esp)
086b6585 +0x1aaf:  mov    %esi,(%esp)
086b6588 +0x1ab2:  call   086b64c2 <+0x19ec>
086b658d +0x1ab7:  mov    %esi,%eax
086b658f +0x1ab9:  add    $0x20,%esp
086b6592 +0x1abc:  pop    %ebx
086b6593 +0x1abd:  pop    %esi
086b6594 +0x1abe:  pop    %ebp
086b6595 +0x1abf:  ret    $0x4
086b6598 +0x1ac2:  push   %ebp
086b6599 +0x1ac3:  mov    %esp,%ebp
086b659b +0x1ac5:  sub    $0x18,%esp
086b659e +0x1ac8:  mov    0xc(%ebp),%eax
086b65a1 +0x1acb:  mov    %eax,(%esp)
086b65a4 +0x1ace:  call   086b6b2d <+0x2057>
086b65a9 +0x1ad3:  mov    0x8(%ebp),%edx
086b65ac +0x1ad6:  mov    (%eax),%eax
086b65ae +0x1ad8:  mov    %eax,(%edx)
086b65b0 +0x1ada:  mov    0x10(%ebp),%eax
086b65b3 +0x1add:  mov    %eax,(%esp)
086b65b6 +0x1ae0:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
086b65bb +0x1ae5:  movzbl (%eax),%edx
086b65be +0x1ae8:  mov    0x8(%ebp),%eax
086b65c1 +0x1aeb:  mov    %dl,0x4(%eax)
086b65c4 +0x1aee:  leave
086b65c5 +0x1aef:  ret
086b65c6 +0x1af0:  push   %ebp
086b65c7 +0x1af1:  mov    %esp,%ebp
086b65c9 +0x1af3:  sub    $0x18,%esp
086b65cc +0x1af6:  mov    0x8(%ebp),%eax
086b65cf +0x1af9:  mov    (%eax),%eax
086b65d1 +0x1afb:  mov    %eax,(%esp)
086b65d4 +0x1afe:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
086b65d9 +0x1b03:  mov    0x8(%ebp),%edx
086b65dc +0x1b06:  mov    %eax,(%edx)
086b65de +0x1b08:  mov    0x8(%ebp),%eax
086b65e1 +0x1b0b:  leave
086b65e2 +0x1b0c:  ret
086b65e3 +0x1b0d:  push   %ebp
086b65e4 +0x1b0e:  mov    %esp,%ebp
086b65e6 +0x1b10:  sub    $0x28,%esp
086b65e9 +0x1b13:  mov    0x8(%ebp),%eax
086b65ec +0x1b16:  mov    %eax,(%esp)
086b65ef +0x1b19:  call   086b6b35 <+0x205f>
086b65f4 +0x1b1e:  mov    %eax,0x4(%esp)
086b65f8 +0x1b22:  lea    -0x9(%ebp),%eax
086b65fb +0x1b25:  mov    %eax,(%esp)
086b65fe +0x1b28:  call   086b6468 <+0x1992>
086b6603 +0x1b2d:  leave
086b6604 +0x1b2e:  ret
086b6605 +0x1b2f:  nop
086b6606 +0x1b30:  push   %ebp
086b6607 +0x1b31:  mov    %esp,%ebp
086b6609 +0x1b33:  sub    $0x18,%esp
086b660c +0x1b36:  mov    0xc(%ebp),%eax
086b660f +0x1b39:  mov    %eax,(%esp)
086b6612 +0x1b3c:  call   086b6b40 <+0x206a>
086b6617 +0x1b41:  mov    0x8(%ebp),%edx
086b661a +0x1b44:  mov    (%eax),%eax
086b661c +0x1b46:  mov    %eax,(%edx)
086b661e +0x1b48:  mov    0x10(%ebp),%eax
086b6621 +0x1b4b:  mov    %eax,(%esp)
086b6624 +0x1b4e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
086b6629 +0x1b53:  movzbl (%eax),%edx
086b662c +0x1b56:  mov    0x8(%ebp),%eax
086b662f +0x1b59:  mov    %dl,0x4(%eax)
086b6632 +0x1b5c:  leave
086b6633 +0x1b5d:  ret
086b6634 +0x1b5e:  push   %ebp
086b6635 +0x1b5f:  mov    %esp,%ebp
086b6637 +0x1b61:  push   %ebx
086b6638 +0x1b62:  sub    $0x14,%esp
086b663b +0x1b65:  mov    0x8(%ebp),%ebx
086b663e +0x1b68:  jmp    086b668c <+0x1bb6>
086b6640 +0x1b6a:  mov    0x10(%ebp),%eax
086b6643 +0x1b6d:  mov    %eax,(%esp)
086b6646 +0x1b70:  call   086b6470 <+0x199a>
086b664b +0x1b75:  mov    0xc(%ebp),%edx
086b664e +0x1b78:  mov    0x18(%ebp),%ecx
086b6651 +0x1b7b:  mov    %ecx,0x8(%esp)
086b6655 +0x1b7f:  mov    %eax,0x4(%esp)
086b6659 +0x1b83:  mov    %edx,(%esp)
086b665c +0x1b86:  call   086b6492 <+0x19bc>
086b6661 +0x1b8b:  xor    $0x1,%eax
086b6664 +0x1b8e:  test   %al,%al
086b6666 +0x1b90:  je     086b667e <+0x1ba8>
086b6668 +0x1b92:  mov    0x10(%ebp),%eax
086b666b +0x1b95:  mov    %eax,0x14(%ebp)
086b666e +0x1b98:  mov    0x10(%ebp),%eax
086b6671 +0x1b9b:  mov    %eax,(%esp)
086b6674 +0x1b9e:  call   086b64b7 <+0x19e1>
086b6679 +0x1ba3:  mov    %eax,0x10(%ebp)
086b667c +0x1ba6:  jmp    086b668c <+0x1bb6>
086b667e +0x1ba8:  mov    0x10(%ebp),%eax
086b6681 +0x1bab:  mov    %eax,(%esp)
086b6684 +0x1bae:  call   086b64ac <+0x19d6>
086b6689 +0x1bb3:  mov    %eax,0x10(%ebp)
086b668c +0x1bb6:  cmpl   $0x0,0x10(%ebp)
086b6690 +0x1bba:  setne  %al
086b6693 +0x1bbd:  test   %al,%al
086b6695 +0x1bbf:  jne    086b6640 <+0x1b6a>
086b6697 +0x1bc1:  mov    0x14(%ebp),%eax
086b669a +0x1bc4:  mov    %eax,0x4(%esp)
086b669e +0x1bc8:  mov    %ebx,(%esp)
086b66a1 +0x1bcb:  call   086b64c2 <+0x19ec>
086b66a6 +0x1bd0:  mov    %ebx,%eax
086b66a8 +0x1bd2:  add    $0x14,%esp
086b66ab +0x1bd5:  pop    %ebx
086b66ac +0x1bd6:  pop    %ebp
086b66ad +0x1bd7:  ret    $0x4
086b66b0 +0x1bda:  push   %ebp
086b66b1 +0x1bdb:  mov    %esp,%ebp
086b66b3 +0x1bdd:  sub    $0x18,%esp
086b66b6 +0x1be0:  mov    0x8(%ebp),%eax
086b66b9 +0x1be3:  mov    %eax,(%esp)
086b66bc +0x1be6:  call   086b6b48 <+0x2072>
086b66c1 +0x1beb:  mov    0x8(%ebp),%eax
086b66c4 +0x1bee:  movl   $0x0,0x4(%eax)
086b66cb +0x1bf5:  mov    0x8(%ebp),%eax
086b66ce +0x1bf8:  movl   $0x0,0x8(%eax)
086b66d5 +0x1bff:  mov    0x8(%ebp),%eax
086b66d8 +0x1c02:  movl   $0x0,0xc(%eax)
086b66df +0x1c09:  mov    0x8(%ebp),%eax
086b66e2 +0x1c0c:  movl   $0x0,0x10(%eax)
086b66e9 +0x1c13:  mov    0x8(%ebp),%eax
086b66ec +0x1c16:  movl   $0x0,0x14(%eax)
086b66f3 +0x1c1d:  mov    0x8(%ebp),%eax
086b66f6 +0x1c20:  mov    %eax,(%esp)
086b66f9 +0x1c23:  call   086b6b5c <+0x2086>
086b66fe +0x1c28:  leave
086b66ff +0x1c29:  ret
086b6700 +0x1c2a:  push   %ebp
086b6701 +0x1c2b:  mov    %esp,%ebp
086b6703 +0x1c2d:  pop    %ebp
086b6704 +0x1c2e:  ret
086b6705 +0x1c2f:  nop
086b6706 +0x1c30:  push   %ebp
086b6707 +0x1c31:  mov    %esp,%ebp
086b6709 +0x1c33:  sub    $0x18,%esp
086b670c +0x1c36:  mov    0x8(%ebp),%eax
086b670f +0x1c39:  mov    %eax,(%esp)
086b6712 +0x1c3c:  call   086b6b8e <+0x20b8>
086b6717 +0x1c41:  mov    0xc(%ebp),%edx
086b671a +0x1c44:  mov    %edx,0x4(%esp)
086b671e +0x1c48:  mov    %eax,(%esp)
086b6721 +0x1c4b:  call   086b6bac <+0x20d6>
086b6726 +0x1c50:  mov    0xc(%ebp),%eax
086b6729 +0x1c53:  mov    %eax,0x4(%esp)
086b672d +0x1c57:  mov    0x8(%ebp),%eax
086b6730 +0x1c5a:  mov    %eax,(%esp)
086b6733 +0x1c5d:  call   086b6bc0 <+0x20ea>
086b6738 +0x1c62:  leave
086b6739 +0x1c63:  ret
086b673a +0x1c64:  push   %ebp
086b673b +0x1c65:  mov    %esp,%ebp
086b673d +0x1c67:  sub    $0x18,%esp
086b6740 +0x1c6a:  mov    0x8(%ebp),%eax
086b6743 +0x1c6d:  mov    %eax,(%esp)
086b6746 +0x1c70:  call   086b6be2 <+0x210c>
086b674b +0x1c75:  leave
086b674c +0x1c76:  ret
086b674d +0x1c77:  nop
086b674e +0x1c78:  push   %ebp
086b674f +0x1c79:  mov    %esp,%ebp
086b6751 +0x1c7b:  mov    0x8(%ebp),%eax
086b6754 +0x1c7e:  movl   $0x0,0x4(%eax)
086b675b +0x1c85:  mov    0x8(%ebp),%eax
086b675e +0x1c88:  movl   $0x0,0x8(%eax)
086b6765 +0x1c8f:  mov    0x8(%ebp),%eax
086b6768 +0x1c92:  lea    0x4(%eax),%edx
086b676b +0x1c95:  mov    0x8(%ebp),%eax
086b676e +0x1c98:  mov    %edx,0xc(%eax)
086b6771 +0x1c9b:  mov    0x8(%ebp),%eax
086b6774 +0x1c9e:  lea    0x4(%eax),%edx
086b6777 +0x1ca1:  mov    0x8(%ebp),%eax
086b677a +0x1ca4:  mov    %edx,0x10(%eax)
086b677d +0x1ca7:  pop    %ebp
086b677e +0x1ca8:  ret
086b677f +0x1ca9:  nop
086b6780 +0x1caa:  push   %ebp
086b6781 +0x1cab:  mov    %esp,%ebp
086b6783 +0x1cad:  mov    0x8(%ebp),%eax
086b6786 +0x1cb0:  pop    %ebp
086b6787 +0x1cb1:  ret
086b6788 +0x1cb2:  push   %ebp
086b6789 +0x1cb3:  mov    %esp,%ebp
086b678b +0x1cb5:  sub    $0x18,%esp
086b678e +0x1cb8:  mov    0x8(%ebp),%eax
086b6791 +0x1cbb:  add    $0x10,%eax
086b6794 +0x1cbe:  mov    %eax,(%esp)
086b6797 +0x1cc1:  call   086b4c2e <+0x158>
086b679c +0x1cc6:  leave
086b679d +0x1cc7:  ret
086b679e +0x1cc8:  push   %ebp
086b679f +0x1cc9:  mov    %esp,%ebp
086b67a1 +0x1ccb:  sub    $0x18,%esp
086b67a4 +0x1cce:  mov    0xc(%ebp),%eax
086b67a7 +0x1cd1:  mov    %eax,(%esp)
086b67aa +0x1cd4:  call   086b6788 <+0x1cb2>
086b67af +0x1cd9:  leave
086b67b0 +0x1cda:  ret
086b67b1 +0x1cdb:  nop
086b67b2 +0x1cdc:  push   %ebp
086b67b3 +0x1cdd:  mov    %esp,%ebp
086b67b5 +0x1cdf:  sub    $0x18,%esp
086b67b8 +0x1ce2:  mov    0x8(%ebp),%eax
086b67bb +0x1ce5:  movl   $0x1,0x8(%esp)
086b67c3 +0x1ced:  mov    0xc(%ebp),%edx
086b67c6 +0x1cf0:  mov    %edx,0x4(%esp)
086b67ca +0x1cf4:  mov    %eax,(%esp)
086b67cd +0x1cf7:  call   086b6be8 <+0x2112>
086b67d2 +0x1cfc:  leave
086b67d3 +0x1cfd:  ret
086b67d4 +0x1cfe:  push   %ebp
086b67d5 +0x1cff:  mov    %esp,%ebp
086b67d7 +0x1d01:  sub    $0x18,%esp
086b67da +0x1d04:  lea    0x8(%ebp),%eax
086b67dd +0x1d07:  mov    %eax,(%esp)
086b67e0 +0x1d0a:  call   086b57de <+0xd08>
086b67e5 +0x1d0f:  mov    (%eax),%eax
086b67e7 +0x1d11:  leave
086b67e8 +0x1d12:  ret
086b67e9 +0x1d13:  push   %ebp
086b67ea +0x1d14:  mov    %esp,%ebp
086b67ec +0x1d16:  pop    %ebp
086b67ed +0x1d17:  ret
086b67ee +0x1d18:  push   %ebp
086b67ef +0x1d19:  mov    %esp,%ebp
086b67f1 +0x1d1b:  sub    $0x28,%esp
086b67f4 +0x1d1e:  movb   $0x1,-0x9(%ebp)
086b67f8 +0x1d22:  mov    0x10(%ebp),%eax
086b67fb +0x1d25:  mov    %eax,0x8(%esp)
086b67ff +0x1d29:  mov    0xc(%ebp),%eax
086b6802 +0x1d2c:  mov    %eax,0x4(%esp)
086b6806 +0x1d30:  mov    0x8(%ebp),%eax
086b6809 +0x1d33:  mov    %eax,(%esp)
086b680c +0x1d36:  call   083f1520 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8b4ec>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8b4ec
086b6811 +0x1d3b:  leave
086b6812 +0x1d3c:  ret
086b6813 +0x1d3d:  push   %ebp
086b6814 +0x1d3e:  mov    %esp,%ebp
086b6816 +0x1d40:  sub    $0x18,%esp
086b6819 +0x1d43:  mov    0x10(%ebp),%eax
086b681c +0x1d46:  mov    %eax,0x8(%esp)
086b6820 +0x1d4a:  mov    0xc(%ebp),%eax
086b6823 +0x1d4d:  mov    %eax,0x4(%esp)
086b6827 +0x1d51:  mov    0x8(%ebp),%eax
086b682a +0x1d54:  mov    %eax,(%esp)
086b682d +0x1d57:  call   086b56ed <+0xc17>
086b6832 +0x1d5c:  leave
086b6833 +0x1d5d:  ret
086b6834 +0x1d5e:  push   %ebp
086b6835 +0x1d5f:  mov    %esp,%ebp
086b6837 +0x1d61:  mov    0x8(%ebp),%eax
086b683a +0x1d64:  add    $0x10,%eax
086b683d +0x1d67:  pop    %ebp
086b683e +0x1d68:  ret
086b683f +0x1d69:  nop
086b6840 +0x1d6a:  push   %ebp
086b6841 +0x1d6b:  mov    %esp,%ebp
086b6843 +0x1d6d:  push   %esi
086b6844 +0x1d6e:  push   %ebx
086b6845 +0x1d6f:  sub    $0x20,%esp
086b6848 +0x1d72:  mov    0x8(%ebp),%eax
086b684b +0x1d75:  mov    %eax,(%esp)
086b684e +0x1d78:  call   086b6bfc <+0x2126>
086b6853 +0x1d7d:  mov    %eax,-0xc(%ebp)
086b6856 +0x1d80:  mov    0xc(%ebp),%eax
086b6859 +0x1d83:  mov    %eax,(%esp)
086b685c +0x1d86:  call   086b6c1f <+0x2149>
086b6861 +0x1d8b:  mov    %eax,%ebx
086b6863 +0x1d8d:  mov    0x8(%ebp),%eax
086b6866 +0x1d90:  mov    %eax,(%esp)
086b6869 +0x1d93:  call   086b6780 <+0x1caa>
086b686e +0x1d98:  mov    %ebx,0x8(%esp)
086b6872 +0x1d9c:  mov    -0xc(%ebp),%edx
086b6875 +0x1d9f:  mov    %edx,0x4(%esp)
086b6879 +0x1da3:  mov    %eax,(%esp)
086b687c +0x1da6:  call   086b6c28 <+0x2152>
086b6881 +0x1dab:  jmp    086b68b7 <+0x1de1>
086b6883 +0x1dad:  mov    %eax,(%esp)
086b6886 +0x1db0:  call   08725ce0 <__cxa_begin_catch>
086b688b +0x1db5:  mov    -0xc(%ebp),%eax
086b688e +0x1db8:  mov    %eax,0x4(%esp)
086b6892 +0x1dbc:  mov    0x8(%ebp),%eax
086b6895 +0x1dbf:  mov    %eax,(%esp)
086b6898 +0x1dc2:  call   086b67b2 <+0x1cdc>
086b689d +0x1dc7:  call   08724be0 <__cxa_rethrow>
086b68a2 +0x1dcc:  mov    %edx,%ebx
086b68a4 +0x1dce:  mov    %eax,%esi
086b68a6 +0x1dd0:  call   08725c30 <__cxa_end_catch>
086b68ab +0x1dd5:  mov    %esi,%eax
086b68ad +0x1dd7:  mov    %ebx,%edx
086b68af +0x1dd9:  mov    %eax,(%esp)
086b68b2 +0x1ddc:  call   08ae3750 <_Unwind_Resume>
086b68b7 +0x1de1:  mov    -0xc(%ebp),%eax
086b68ba +0x1de4:  add    $0x20,%esp
086b68bd +0x1de7:  pop    %ebx
086b68be +0x1de8:  pop    %esi
086b68bf +0x1de9:  pop    %ebp
086b68c0 +0x1dea:  ret
086b68c1 +0x1deb:  push   %ebp
086b68c2 +0x1dec:  mov    %esp,%ebp
086b68c4 +0x1dee:  mov    0x8(%ebp),%eax
086b68c7 +0x1df1:  pop    %ebp
086b68c8 +0x1df2:  ret
086b68c9 +0x1df3:  push   %ebp
086b68ca +0x1df4:  mov    %esp,%ebp
086b68cc +0x1df6:  mov    0x8(%ebp),%eax
086b68cf +0x1df9:  add    $0x10,%eax
086b68d2 +0x1dfc:  pop    %ebp
086b68d3 +0x1dfd:  ret
086b68d4 +0x1dfe:  push   %ebp
086b68d5 +0x1dff:  mov    %esp,%ebp
086b68d7 +0x1e01:  mov    0x8(%ebp),%eax
086b68da +0x1e04:  pop    %ebp
086b68db +0x1e05:  ret
086b68dc +0x1e06:  push   %ebp
086b68dd +0x1e07:  mov    %esp,%ebp
086b68df +0x1e09:  mov    0x8(%ebp),%eax
086b68e2 +0x1e0c:  pop    %ebp
086b68e3 +0x1e0d:  ret
086b68e4 +0x1e0e:  push   %ebp
086b68e5 +0x1e0f:  mov    %esp,%ebp
086b68e7 +0x1e11:  sub    $0x18,%esp
086b68ea +0x1e14:  mov    0x8(%ebp),%eax
086b68ed +0x1e17:  mov    0x10(%ebp),%edx
086b68f0 +0x1e1a:  mov    %edx,0x4(%esp)
086b68f4 +0x1e1e:  mov    %eax,(%esp)
086b68f7 +0x1e21:  call   086b6c68 <+0x2192>
086b68fc +0x1e26:  mov    0x8(%ebp),%eax
086b68ff +0x1e29:  movl   $0x0,0x4(%eax)
086b6906 +0x1e30:  mov    0x8(%ebp),%eax
086b6909 +0x1e33:  movl   $0x0,0x8(%eax)
086b6910 +0x1e3a:  mov    0x8(%ebp),%eax
086b6913 +0x1e3d:  movl   $0x0,0xc(%eax)
086b691a +0x1e44:  mov    0x8(%ebp),%eax
086b691d +0x1e47:  movl   $0x0,0x10(%eax)
086b6924 +0x1e4e:  mov    0x8(%ebp),%eax
086b6927 +0x1e51:  movl   $0x0,0x14(%eax)
086b692e +0x1e58:  mov    0x8(%ebp),%eax
086b6931 +0x1e5b:  mov    %eax,(%esp)
086b6934 +0x1e5e:  call   086b674e <+0x1c78>
086b6939 +0x1e63:  leave
086b693a +0x1e64:  ret
086b693b +0x1e65:  nop
086b693c +0x1e66:  push   %ebp
086b693d +0x1e67:  mov    %esp,%ebp
086b693f +0x1e69:  mov    0x8(%ebp),%eax
086b6942 +0x1e6c:  mov    0x8(%eax),%eax
086b6945 +0x1e6f:  pop    %ebp
086b6946 +0x1e70:  ret
086b6947 +0x1e71:  nop
086b6948 +0x1e72:  push   %ebp
086b6949 +0x1e73:  mov    %esp,%ebp
086b694b +0x1e75:  push   %esi
086b694c +0x1e76:  push   %ebx
086b694d +0x1e77:  sub    $0x20,%esp
086b6950 +0x1e7a:  mov    0xc(%ebp),%eax
086b6953 +0x1e7d:  mov    %eax,0x4(%esp)
086b6957 +0x1e81:  mov    0x8(%ebp),%eax
086b695a +0x1e84:  mov    %eax,(%esp)
086b695d +0x1e87:  call   086b6c82 <+0x21ac>
086b6962 +0x1e8c:  mov    %eax,-0x10(%ebp)
086b6965 +0x1e8f:  mov    0x10(%ebp),%edx
086b6968 +0x1e92:  mov    -0x10(%ebp),%eax
086b696b +0x1e95:  mov    %edx,0x4(%eax)
086b696e +0x1e98:  mov    0xc(%ebp),%eax
086b6971 +0x1e9b:  mov    0xc(%eax),%eax
086b6974 +0x1e9e:  test   %eax,%eax
086b6976 +0x1ea0:  je     086b69a1 <+0x1ecb>
086b6978 +0x1ea2:  mov    0xc(%ebp),%eax
086b697b +0x1ea5:  mov    %eax,(%esp)
086b697e +0x1ea8:  call   086b6cc3 <+0x21ed>
086b6983 +0x1ead:  mov    -0x10(%ebp),%edx
086b6986 +0x1eb0:  mov    %edx,0x8(%esp)
086b698a +0x1eb4:  mov    %eax,0x4(%esp)
086b698e +0x1eb8:  mov    0x8(%ebp),%eax
086b6991 +0x1ebb:  mov    %eax,(%esp)
086b6994 +0x1ebe:  call   086b6948 <+0x1e72>
086b6999 +0x1ec3:  mov    %eax,%edx
086b699b +0x1ec5:  mov    -0x10(%ebp),%eax
086b699e +0x1ec8:  mov    %edx,0xc(%eax)
086b69a1 +0x1ecb:  mov    -0x10(%ebp),%eax
086b69a4 +0x1ece:  mov    %eax,0x10(%ebp)
086b69a7 +0x1ed1:  mov    0xc(%ebp),%eax
086b69aa +0x1ed4:  mov    %eax,(%esp)
086b69ad +0x1ed7:  call   086b6cce <+0x21f8>
086b69b2 +0x1edc:  mov    %eax,0xc(%ebp)
086b69b5 +0x1edf:  jmp    086b6a25 <+0x1f4f>
086b69b7 +0x1ee1:  mov    0xc(%ebp),%eax
086b69ba +0x1ee4:  mov    %eax,0x4(%esp)
086b69be +0x1ee8:  mov    0x8(%ebp),%eax
086b69c1 +0x1eeb:  mov    %eax,(%esp)
086b69c4 +0x1eee:  call   086b6c82 <+0x21ac>
086b69c9 +0x1ef3:  mov    %eax,-0xc(%ebp)
086b69cc +0x1ef6:  mov    -0xc(%ebp),%edx
086b69cf +0x1ef9:  mov    0x10(%ebp),%eax
086b69d2 +0x1efc:  mov    %edx,0x8(%eax)
086b69d5 +0x1eff:  mov    0x10(%ebp),%edx
086b69d8 +0x1f02:  mov    -0xc(%ebp),%eax
086b69db +0x1f05:  mov    %edx,0x4(%eax)
086b69de +0x1f08:  mov    0xc(%ebp),%eax
086b69e1 +0x1f0b:  mov    0xc(%eax),%eax
086b69e4 +0x1f0e:  test   %eax,%eax
086b69e6 +0x1f10:  je     086b6a11 <+0x1f3b>
086b69e8 +0x1f12:  mov    0xc(%ebp),%eax
086b69eb +0x1f15:  mov    %eax,(%esp)
086b69ee +0x1f18:  call   086b6cc3 <+0x21ed>
086b69f3 +0x1f1d:  mov    -0xc(%ebp),%edx
086b69f6 +0x1f20:  mov    %edx,0x8(%esp)
086b69fa +0x1f24:  mov    %eax,0x4(%esp)
086b69fe +0x1f28:  mov    0x8(%ebp),%eax
086b6a01 +0x1f2b:  mov    %eax,(%esp)
086b6a04 +0x1f2e:  call   086b6948 <+0x1e72>
086b6a09 +0x1f33:  mov    %eax,%edx
086b6a0b +0x1f35:  mov    -0xc(%ebp),%eax
086b6a0e +0x1f38:  mov    %edx,0xc(%eax)
086b6a11 +0x1f3b:  mov    -0xc(%ebp),%eax
086b6a14 +0x1f3e:  mov    %eax,0x10(%ebp)
086b6a17 +0x1f41:  mov    0xc(%ebp),%eax
086b6a1a +0x1f44:  mov    %eax,(%esp)
086b6a1d +0x1f47:  call   086b6cce <+0x21f8>
086b6a22 +0x1f4c:  mov    %eax,0xc(%ebp)
086b6a25 +0x1f4f:  cmpl   $0x0,0xc(%ebp)
086b6a29 +0x1f53:  setne  %al
086b6a2c +0x1f56:  test   %al,%al
086b6a2e +0x1f58:  jne    086b69b7 <+0x1ee1>
086b6a30 +0x1f5a:  jmp    086b6a66 <+0x1f90>
086b6a32 +0x1f5c:  mov    %eax,(%esp)
086b6a35 +0x1f5f:  call   08725ce0 <__cxa_begin_catch>
086b6a3a +0x1f64:  mov    -0x10(%ebp),%eax
086b6a3d +0x1f67:  mov    %eax,0x4(%esp)
086b6a41 +0x1f6b:  mov    0x8(%ebp),%eax
086b6a44 +0x1f6e:  mov    %eax,(%esp)
086b6a47 +0x1f71:  call   086b5568 <+0xa92>
086b6a4c +0x1f76:  call   08724be0 <__cxa_rethrow>
086b6a51 +0x1f7b:  mov    %edx,%ebx
086b6a53 +0x1f7d:  mov    %eax,%esi
086b6a55 +0x1f7f:  call   08725c30 <__cxa_end_catch>
086b6a5a +0x1f84:  mov    %esi,%eax
086b6a5c +0x1f86:  mov    %ebx,%edx
086b6a5e +0x1f88:  mov    %eax,(%esp)
086b6a61 +0x1f8b:  call   08ae3750 <_Unwind_Resume>
086b6a66 +0x1f90:  mov    -0x10(%ebp),%eax
086b6a69 +0x1f93:  add    $0x20,%esp
086b6a6c +0x1f96:  pop    %ebx
086b6a6d +0x1f97:  pop    %esi
086b6a6e +0x1f98:  pop    %ebp
086b6a6f +0x1f99:  ret
086b6a70 +0x1f9a:  push   %ebp
086b6a71 +0x1f9b:  mov    %esp,%ebp
086b6a73 +0x1f9d:  mov    0x8(%ebp),%eax
086b6a76 +0x1fa0:  mov    0x8(%eax),%eax
086b6a79 +0x1fa3:  pop    %ebp
086b6a7a +0x1fa4:  ret
086b6a7b +0x1fa5:  push   %ebp
086b6a7c +0x1fa6:  mov    %esp,%ebp
086b6a7e +0x1fa8:  sub    $0x18,%esp
086b6a81 +0x1fab:  mov    0x8(%ebp),%eax
086b6a84 +0x1fae:  mov    %eax,(%esp)
086b6a87 +0x1fb1:  call   080f0f9a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x1c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b6a8c +0x1fb6:  leave
086b6a8d +0x1fb7:  ret
086b6a8e +0x1fb8:  push   %ebp
086b6a8f +0x1fb9:  mov    %esp,%ebp
086b6a91 +0x1fbb:  sub    $0x18,%esp
086b6a94 +0x1fbe:  mov    0x8(%ebp),%eax
086b6a97 +0x1fc1:  mov    %eax,(%esp)
086b6a9a +0x1fc4:  call   080f0fbc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e
086b6a9f +0x1fc9:  leave
086b6aa0 +0x1fca:  ret
086b6aa1 +0x1fcb:  push   %ebp
086b6aa2 +0x1fcc:  mov    %esp,%ebp
086b6aa4 +0x1fce:  mov    0x8(%ebp),%eax
086b6aa7 +0x1fd1:  add    $0x10,%eax
086b6aaa +0x1fd4:  pop    %ebp
086b6aab +0x1fd5:  ret
086b6aac +0x1fd6:  push   %ebp
086b6aad +0x1fd7:  mov    %esp,%ebp
086b6aaf +0x1fd9:  push   %esi
086b6ab0 +0x1fda:  push   %ebx
086b6ab1 +0x1fdb:  sub    $0x20,%esp
086b6ab4 +0x1fde:  mov    0x8(%ebp),%eax
086b6ab7 +0x1fe1:  mov    %eax,(%esp)
086b6aba +0x1fe4:  call   086b6cda <+0x2204>
086b6abf +0x1fe9:  mov    %eax,-0xc(%ebp)
086b6ac2 +0x1fec:  mov    0xc(%ebp),%eax
086b6ac5 +0x1fef:  mov    %eax,(%esp)
086b6ac8 +0x1ff2:  call   086b6cfd <+0x2227>
086b6acd +0x1ff7:  mov    %eax,%ebx
086b6acf +0x1ff9:  mov    0x8(%ebp),%eax
086b6ad2 +0x1ffc:  mov    %eax,(%esp)
086b6ad5 +0x1fff:  call   086b6b8e <+0x20b8>
086b6ada +0x2004:  mov    %ebx,0x8(%esp)
086b6ade +0x2008:  mov    -0xc(%ebp),%edx
086b6ae1 +0x200b:  mov    %edx,0x4(%esp)
086b6ae5 +0x200f:  mov    %eax,(%esp)
086b6ae8 +0x2012:  call   086b6d06 <+0x2230>
086b6aed +0x2017:  jmp    086b6b23 <+0x204d>
086b6aef +0x2019:  mov    %eax,(%esp)
086b6af2 +0x201c:  call   08725ce0 <__cxa_begin_catch>
086b6af7 +0x2021:  mov    -0xc(%ebp),%eax
086b6afa +0x2024:  mov    %eax,0x4(%esp)
086b6afe +0x2028:  mov    0x8(%ebp),%eax
086b6b01 +0x202b:  mov    %eax,(%esp)
086b6b04 +0x202e:  call   086b6bc0 <+0x20ea>
086b6b09 +0x2033:  call   08724be0 <__cxa_rethrow>
086b6b0e +0x2038:  mov    %edx,%ebx
086b6b10 +0x203a:  mov    %eax,%esi
086b6b12 +0x203c:  call   08725c30 <__cxa_end_catch>
086b6b17 +0x2041:  mov    %esi,%eax
086b6b19 +0x2043:  mov    %ebx,%edx
086b6b1b +0x2045:  mov    %eax,(%esp)
086b6b1e +0x2048:  call   08ae3750 <_Unwind_Resume>
086b6b23 +0x204d:  mov    -0xc(%ebp),%eax
086b6b26 +0x2050:  add    $0x20,%esp
086b6b29 +0x2053:  pop    %ebx
086b6b2a +0x2054:  pop    %esi
086b6b2b +0x2055:  pop    %ebp
086b6b2c +0x2056:  ret
086b6b2d +0x2057:  push   %ebp
086b6b2e +0x2058:  mov    %esp,%ebp
086b6b30 +0x205a:  mov    0x8(%ebp),%eax
086b6b33 +0x205d:  pop    %ebp
086b6b34 +0x205e:  ret
086b6b35 +0x205f:  push   %ebp
086b6b36 +0x2060:  mov    %esp,%ebp
086b6b38 +0x2062:  mov    0x8(%ebp),%eax
086b6b3b +0x2065:  add    $0x10,%eax
086b6b3e +0x2068:  pop    %ebp
086b6b3f +0x2069:  ret
086b6b40 +0x206a:  push   %ebp
086b6b41 +0x206b:  mov    %esp,%ebp
086b6b43 +0x206d:  mov    0x8(%ebp),%eax
086b6b46 +0x2070:  pop    %ebp
086b6b47 +0x2071:  ret
086b6b48 +0x2072:  push   %ebp
086b6b49 +0x2073:  mov    %esp,%ebp
086b6b4b +0x2075:  sub    $0x18,%esp
086b6b4e +0x2078:  mov    0x8(%ebp),%eax
086b6b51 +0x207b:  mov    %eax,(%esp)
086b6b54 +0x207e:  call   086b6d6e <+0x2298>
086b6b59 +0x2083:  leave
086b6b5a +0x2084:  ret
086b6b5b +0x2085:  nop
086b6b5c +0x2086:  push   %ebp
086b6b5d +0x2087:  mov    %esp,%ebp
086b6b5f +0x2089:  mov    0x8(%ebp),%eax
086b6b62 +0x208c:  movl   $0x0,0x4(%eax)
086b6b69 +0x2093:  mov    0x8(%ebp),%eax
086b6b6c +0x2096:  movl   $0x0,0x8(%eax)
086b6b73 +0x209d:  mov    0x8(%ebp),%eax
086b6b76 +0x20a0:  lea    0x4(%eax),%edx
086b6b79 +0x20a3:  mov    0x8(%ebp),%eax
086b6b7c +0x20a6:  mov    %edx,0xc(%eax)
086b6b7f +0x20a9:  mov    0x8(%ebp),%eax
086b6b82 +0x20ac:  lea    0x4(%eax),%edx
086b6b85 +0x20af:  mov    0x8(%ebp),%eax
086b6b88 +0x20b2:  mov    %edx,0x10(%eax)
086b6b8b +0x20b5:  pop    %ebp
086b6b8c +0x20b6:  ret
086b6b8d +0x20b7:  nop
086b6b8e +0x20b8:  push   %ebp
086b6b8f +0x20b9:  mov    %esp,%ebp
086b6b91 +0x20bb:  mov    0x8(%ebp),%eax
086b6b94 +0x20be:  pop    %ebp
086b6b95 +0x20bf:  ret
086b6b96 +0x20c0:  push   %ebp
086b6b97 +0x20c1:  mov    %esp,%ebp
086b6b99 +0x20c3:  sub    $0x18,%esp
086b6b9c +0x20c6:  mov    0x8(%ebp),%eax
086b6b9f +0x20c9:  add    $0x10,%eax
086b6ba2 +0x20cc:  mov    %eax,(%esp)
086b6ba5 +0x20cf:  call   086b4ca0 <+0x1ca>
086b6baa +0x20d4:  leave
086b6bab +0x20d5:  ret
086b6bac +0x20d6:  push   %ebp
086b6bad +0x20d7:  mov    %esp,%ebp
086b6baf +0x20d9:  sub    $0x18,%esp
086b6bb2 +0x20dc:  mov    0xc(%ebp),%eax
086b6bb5 +0x20df:  mov    %eax,(%esp)
086b6bb8 +0x20e2:  call   086b6b96 <+0x20c0>
086b6bbd +0x20e7:  leave
086b6bbe +0x20e8:  ret
086b6bbf +0x20e9:  nop
086b6bc0 +0x20ea:  push   %ebp
086b6bc1 +0x20eb:  mov    %esp,%ebp
086b6bc3 +0x20ed:  sub    $0x18,%esp
086b6bc6 +0x20f0:  mov    0x8(%ebp),%eax
086b6bc9 +0x20f3:  movl   $0x1,0x8(%esp)
086b6bd1 +0x20fb:  mov    0xc(%ebp),%edx
086b6bd4 +0x20fe:  mov    %edx,0x4(%esp)
086b6bd8 +0x2102:  mov    %eax,(%esp)
086b6bdb +0x2105:  call   086b6d74 <+0x229e>
086b6be0 +0x210a:  leave
086b6be1 +0x210b:  ret
086b6be2 +0x210c:  push   %ebp
086b6be3 +0x210d:  mov    %esp,%ebp
086b6be5 +0x210f:  pop    %ebp
086b6be6 +0x2110:  ret
086b6be7 +0x2111:  nop
086b6be8 +0x2112:  push   %ebp
086b6be9 +0x2113:  mov    %esp,%ebp
086b6beb +0x2115:  sub    $0x18,%esp
086b6bee +0x2118:  mov    0xc(%ebp),%eax
086b6bf1 +0x211b:  mov    %eax,(%esp)
086b6bf4 +0x211e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086b6bf9 +0x2123:  leave
086b6bfa +0x2124:  ret
086b6bfb +0x2125:  nop
086b6bfc +0x2126:  push   %ebp
086b6bfd +0x2127:  mov    %esp,%ebp
086b6bff +0x2129:  sub    $0x18,%esp
086b6c02 +0x212c:  mov    0x8(%ebp),%eax
086b6c05 +0x212f:  movl   $0x0,0x8(%esp)
086b6c0d +0x2137:  movl   $0x1,0x4(%esp)
086b6c15 +0x213f:  mov    %eax,(%esp)
086b6c18 +0x2142:  call   086b6d88 <+0x22b2>
086b6c1d +0x2147:  leave
086b6c1e +0x2148:  ret
086b6c1f +0x2149:  push   %ebp
086b6c20 +0x214a:  mov    %esp,%ebp
086b6c22 +0x214c:  mov    0x8(%ebp),%eax
086b6c25 +0x214f:  pop    %ebp
086b6c26 +0x2150:  ret
086b6c27 +0x2151:  nop
086b6c28 +0x2152:  push   %ebp
086b6c29 +0x2153:  mov    %esp,%ebp
086b6c2b +0x2155:  push   %ebx
086b6c2c +0x2156:  sub    $0x14,%esp
086b6c2f +0x2159:  mov    0x10(%ebp),%eax
086b6c32 +0x215c:  mov    %eax,(%esp)
086b6c35 +0x215f:  call   086b6c1f <+0x2149>
086b6c3a +0x2164:  mov    %eax,%ebx
086b6c3c +0x2166:  mov    0xc(%ebp),%eax
086b6c3f +0x2169:  mov    %eax,0x4(%esp)
086b6c43 +0x216d:  movl   $0x3c,(%esp)
086b6c4a +0x2174:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b6c4f +0x2179:  mov    %eax,%edx
086b6c51 +0x217b:  test   %edx,%edx
086b6c53 +0x217d:  je     086b6c61 <+0x218b>
086b6c55 +0x217f:  mov    %ebx,0x4(%esp)
086b6c59 +0x2183:  mov    %eax,(%esp)
086b6c5c +0x2186:  call   086b6dcc <+0x22f6>
086b6c61 +0x218b:  add    $0x14,%esp
086b6c64 +0x218e:  pop    %ebx
086b6c65 +0x218f:  pop    %ebp
086b6c66 +0x2190:  ret
086b6c67 +0x2191:  nop
086b6c68 +0x2192:  push   %ebp
086b6c69 +0x2193:  mov    %esp,%ebp
086b6c6b +0x2195:  sub    $0x18,%esp
086b6c6e +0x2198:  mov    0xc(%ebp),%edx
086b6c71 +0x219b:  mov    0x8(%ebp),%eax
086b6c74 +0x219e:  mov    %edx,0x4(%esp)
086b6c78 +0x21a2:  mov    %eax,(%esp)
086b6c7b +0x21a5:  call   086b6e4a <+0x2374>
086b6c80 +0x21aa:  leave
086b6c81 +0x21ab:  ret
086b6c82 +0x21ac:  push   %ebp
086b6c83 +0x21ad:  mov    %esp,%ebp
086b6c85 +0x21af:  sub    $0x28,%esp
086b6c88 +0x21b2:  mov    0xc(%ebp),%eax
086b6c8b +0x21b5:  add    $0x10,%eax
086b6c8e +0x21b8:  mov    %eax,0x4(%esp)
086b6c92 +0x21bc:  mov    0x8(%ebp),%eax
086b6c95 +0x21bf:  mov    %eax,(%esp)
086b6c98 +0x21c2:  call   086b6840 <+0x1d6a>
086b6c9d +0x21c7:  mov    %eax,-0xc(%ebp)
086b6ca0 +0x21ca:  mov    0xc(%ebp),%eax
086b6ca3 +0x21cd:  mov    (%eax),%edx
086b6ca5 +0x21cf:  mov    -0xc(%ebp),%eax
086b6ca8 +0x21d2:  mov    %edx,(%eax)
086b6caa +0x21d4:  mov    -0xc(%ebp),%eax
086b6cad +0x21d7:  movl   $0x0,0x8(%eax)
086b6cb4 +0x21de:  mov    -0xc(%ebp),%eax
086b6cb7 +0x21e1:  movl   $0x0,0xc(%eax)
086b6cbe +0x21e8:  mov    -0xc(%ebp),%eax
086b6cc1 +0x21eb:  leave
086b6cc2 +0x21ec:  ret
086b6cc3 +0x21ed:  push   %ebp
086b6cc4 +0x21ee:  mov    %esp,%ebp
086b6cc6 +0x21f0:  mov    0x8(%ebp),%eax
086b6cc9 +0x21f3:  mov    0xc(%eax),%eax
086b6ccc +0x21f6:  pop    %ebp
086b6ccd +0x21f7:  ret
086b6cce +0x21f8:  push   %ebp
086b6ccf +0x21f9:  mov    %esp,%ebp
086b6cd1 +0x21fb:  mov    0x8(%ebp),%eax
086b6cd4 +0x21fe:  mov    0x8(%eax),%eax
086b6cd7 +0x2201:  pop    %ebp
086b6cd8 +0x2202:  ret
086b6cd9 +0x2203:  nop
086b6cda +0x2204:  push   %ebp
086b6cdb +0x2205:  mov    %esp,%ebp
086b6cdd +0x2207:  sub    $0x18,%esp
086b6ce0 +0x220a:  mov    0x8(%ebp),%eax
086b6ce3 +0x220d:  movl   $0x0,0x8(%esp)
086b6ceb +0x2215:  movl   $0x1,0x4(%esp)
086b6cf3 +0x221d:  mov    %eax,(%esp)
086b6cf6 +0x2220:  call   086b6e50 <+0x237a>
086b6cfb +0x2225:  leave
086b6cfc +0x2226:  ret
086b6cfd +0x2227:  push   %ebp
086b6cfe +0x2228:  mov    %esp,%ebp
086b6d00 +0x222a:  mov    0x8(%ebp),%eax
086b6d03 +0x222d:  pop    %ebp
086b6d04 +0x222e:  ret
086b6d05 +0x222f:  nop
086b6d06 +0x2230:  push   %ebp
086b6d07 +0x2231:  mov    %esp,%ebp
086b6d09 +0x2233:  push   %edi
086b6d0a +0x2234:  push   %esi
086b6d0b +0x2235:  push   %ebx
086b6d0c +0x2236:  sub    $0x2c,%esp
086b6d0f +0x2239:  mov    0x10(%ebp),%eax
086b6d12 +0x223c:  mov    %eax,(%esp)
086b6d15 +0x223f:  call   086b6cfd <+0x2227>
086b6d1a +0x2244:  mov    %eax,%edi
086b6d1c +0x2246:  mov    0xc(%ebp),%esi
086b6d1f +0x2249:  mov    %esi,0x4(%esp)
086b6d23 +0x224d:  movl   $0x50,(%esp)
086b6d2a +0x2254:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b6d2f +0x2259:  mov    %eax,%ebx
086b6d31 +0x225b:  mov    %ebx,%eax
086b6d33 +0x225d:  test   %eax,%eax
086b6d35 +0x225f:  je     086b6d65 <+0x228f>
086b6d37 +0x2261:  mov    %ebx,%eax
086b6d39 +0x2263:  mov    %edi,0x4(%esp)
086b6d3d +0x2267:  mov    %eax,(%esp)
086b6d40 +0x226a:  call   086b6ebc <+0x23e6>
086b6d45 +0x226f:  jmp    086b6d65 <+0x228f>
086b6d47 +0x2271:  mov    %edx,%edi
086b6d49 +0x2273:  mov    %eax,-0x1c(%ebp)
086b6d4c +0x2276:  mov    %esi,0x4(%esp)
086b6d50 +0x227a:  mov    %ebx,(%esp)
086b6d53 +0x227d:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
086b6d58 +0x2282:  mov    -0x1c(%ebp),%eax
086b6d5b +0x2285:  mov    %edi,%edx
086b6d5d +0x2287:  mov    %eax,(%esp)
086b6d60 +0x228a:  call   08ae3750 <_Unwind_Resume>
086b6d65 +0x228f:  add    $0x2c,%esp
086b6d68 +0x2292:  pop    %ebx
086b6d69 +0x2293:  pop    %esi
086b6d6a +0x2294:  pop    %edi
086b6d6b +0x2295:  pop    %ebp
086b6d6c +0x2296:  ret
086b6d6d +0x2297:  nop
086b6d6e +0x2298:  push   %ebp
086b6d6f +0x2299:  mov    %esp,%ebp
086b6d71 +0x229b:  pop    %ebp
086b6d72 +0x229c:  ret
086b6d73 +0x229d:  nop
086b6d74 +0x229e:  push   %ebp
086b6d75 +0x229f:  mov    %esp,%ebp
086b6d77 +0x22a1:  sub    $0x18,%esp
086b6d7a +0x22a4:  mov    0xc(%ebp),%eax
086b6d7d +0x22a7:  mov    %eax,(%esp)
086b6d80 +0x22aa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086b6d85 +0x22af:  leave
086b6d86 +0x22b0:  ret
086b6d87 +0x22b1:  nop
086b6d88 +0x22b2:  push   %ebp
086b6d89 +0x22b3:  mov    %esp,%ebp
086b6d8b +0x22b5:  sub    $0x18,%esp
086b6d8e +0x22b8:  mov    0x8(%ebp),%eax
086b6d91 +0x22bb:  mov    %eax,(%esp)
086b6d94 +0x22be:  call   086b6f08 <+0x2432>
086b6d99 +0x22c3:  cmp    0xc(%ebp),%eax
086b6d9c +0x22c6:  setb   %al
086b6d9f +0x22c9:  movzbl %al,%eax
086b6da2 +0x22cc:  test   %eax,%eax
086b6da4 +0x22ce:  setne  %al
086b6da7 +0x22d1:  test   %al,%al
086b6da9 +0x22d3:  je     086b6db0 <+0x22da>
086b6dab +0x22d5:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
086b6db0 +0x22da:  mov    0xc(%ebp),%eax
086b6db3 +0x22dd:  shl    $0x2,%eax
086b6db6 +0x22e0:  mov    %eax,%edx
086b6db8 +0x22e2:  shl    $0x4,%edx
086b6dbb +0x22e5:  mov    %edx,%ecx
086b6dbd +0x22e7:  sub    %eax,%ecx
086b6dbf +0x22e9:  mov    %ecx,%eax
086b6dc1 +0x22eb:  mov    %eax,(%esp)
086b6dc4 +0x22ee:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086b6dc9 +0x22f3:  leave
086b6dca +0x22f4:  ret
086b6dcb +0x22f5:  nop
086b6dcc +0x22f6:  push   %ebp
086b6dcd +0x22f7:  mov    %esp,%ebp
086b6dcf +0x22f9:  sub    $0x18,%esp
086b6dd2 +0x22fc:  mov    0x8(%ebp),%eax
086b6dd5 +0x22ff:  movl   $0x0,(%eax)
086b6ddb +0x2305:  mov    0x8(%ebp),%eax
086b6dde +0x2308:  movl   $0x0,0x4(%eax)
086b6de5 +0x230f:  mov    0x8(%ebp),%eax
086b6de8 +0x2312:  movl   $0x0,0x8(%eax)
086b6def +0x2319:  mov    0x8(%ebp),%eax
086b6df2 +0x231c:  movl   $0x0,0xc(%eax)
086b6df9 +0x2323:  mov    0xc(%ebp),%eax
086b6dfc +0x2326:  mov    %eax,(%esp)
086b6dff +0x2329:  call   086b6c1f <+0x2149>
086b6e04 +0x232e:  mov    0x8(%ebp),%edx
086b6e07 +0x2331:  mov    (%eax),%ecx
086b6e09 +0x2333:  mov    %ecx,0x10(%edx)
086b6e0c +0x2336:  mov    0x4(%eax),%ecx
086b6e0f +0x2339:  mov    %ecx,0x14(%edx)
086b6e12 +0x233c:  mov    0x8(%eax),%ecx
086b6e15 +0x233f:  mov    %ecx,0x18(%edx)
086b6e18 +0x2342:  mov    0xc(%eax),%ecx
086b6e1b +0x2345:  mov    %ecx,0x1c(%edx)
086b6e1e +0x2348:  mov    0x10(%eax),%ecx
086b6e21 +0x234b:  mov    %ecx,0x20(%edx)
086b6e24 +0x234e:  mov    0x14(%eax),%ecx
086b6e27 +0x2351:  mov    %ecx,0x24(%edx)
086b6e2a +0x2354:  mov    0x18(%eax),%ecx
086b6e2d +0x2357:  mov    %ecx,0x28(%edx)
086b6e30 +0x235a:  mov    0x1c(%eax),%ecx
086b6e33 +0x235d:  mov    %ecx,0x2c(%edx)
086b6e36 +0x2360:  mov    0x20(%eax),%ecx
086b6e39 +0x2363:  mov    %ecx,0x30(%edx)
086b6e3c +0x2366:  mov    0x24(%eax),%ecx
086b6e3f +0x2369:  mov    %ecx,0x34(%edx)
086b6e42 +0x236c:  mov    0x28(%eax),%eax
086b6e45 +0x236f:  mov    %eax,0x38(%edx)
086b6e48 +0x2372:  leave
086b6e49 +0x2373:  ret
086b6e4a +0x2374:  push   %ebp
086b6e4b +0x2375:  mov    %esp,%ebp
086b6e4d +0x2377:  pop    %ebp
086b6e4e +0x2378:  ret
086b6e4f +0x2379:  nop
086b6e50 +0x237a:  push   %ebp
086b6e51 +0x237b:  mov    %esp,%ebp
086b6e53 +0x237d:  sub    $0x18,%esp
086b6e56 +0x2380:  mov    0x8(%ebp),%eax
086b6e59 +0x2383:  mov    %eax,(%esp)
086b6e5c +0x2386:  call   086b6f12 <+0x243c>
086b6e61 +0x238b:  cmp    0xc(%ebp),%eax
086b6e64 +0x238e:  setb   %al
086b6e67 +0x2391:  movzbl %al,%eax
086b6e6a +0x2394:  test   %eax,%eax
086b6e6c +0x2396:  setne  %al
086b6e6f +0x2399:  test   %al,%al
086b6e71 +0x239b:  je     086b6e78 <+0x23a2>
086b6e73 +0x239d:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
086b6e78 +0x23a2:  mov    0xc(%ebp),%edx
086b6e7b +0x23a5:  mov    %edx,%eax
086b6e7d +0x23a7:  shl    $0x2,%eax
086b6e80 +0x23aa:  add    %edx,%eax
086b6e82 +0x23ac:  shl    $0x4,%eax
086b6e85 +0x23af:  mov    %eax,(%esp)
086b6e88 +0x23b2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086b6e8d +0x23b7:  leave
086b6e8e +0x23b8:  ret
086b6e8f +0x23b9:  nop
086b6e90 +0x23ba:  push   %ebp
086b6e91 +0x23bb:  mov    %esp,%ebp
086b6e93 +0x23bd:  sub    $0x18,%esp
086b6e96 +0x23c0:  mov    0x8(%ebp),%eax
086b6e99 +0x23c3:  mov    0xc(%ebp),%edx
086b6e9c +0x23c6:  movzwl (%edx),%edx
086b6e9f +0x23c9:  mov    %dx,(%eax)
086b6ea2 +0x23cc:  mov    0xc(%ebp),%eax
086b6ea5 +0x23cf:  lea    0x4(%eax),%edx
086b6ea8 +0x23d2:  mov    0x8(%ebp),%eax
086b6eab +0x23d5:  add    $0x4,%eax
086b6eae +0x23d8:  mov    %edx,0x4(%esp)
086b6eb2 +0x23dc:  mov    %eax,(%esp)
086b6eb5 +0x23df:  call   086b52f0 <+0x81a>
086b6eba +0x23e4:  leave
086b6ebb +0x23e5:  ret
086b6ebc +0x23e6:  push   %ebp
086b6ebd +0x23e7:  mov    %esp,%ebp
086b6ebf +0x23e9:  sub    $0x18,%esp
086b6ec2 +0x23ec:  mov    0x8(%ebp),%eax
086b6ec5 +0x23ef:  movl   $0x0,(%eax)
086b6ecb +0x23f5:  mov    0x8(%ebp),%eax
086b6ece +0x23f8:  movl   $0x0,0x4(%eax)
086b6ed5 +0x23ff:  mov    0x8(%ebp),%eax
086b6ed8 +0x2402:  movl   $0x0,0x8(%eax)
086b6edf +0x2409:  mov    0x8(%ebp),%eax
086b6ee2 +0x240c:  movl   $0x0,0xc(%eax)
086b6ee9 +0x2413:  mov    0xc(%ebp),%eax
086b6eec +0x2416:  mov    %eax,(%esp)
086b6eef +0x2419:  call   086b6cfd <+0x2227>
086b6ef4 +0x241e:  mov    0x8(%ebp),%edx
086b6ef7 +0x2421:  add    $0x10,%edx
086b6efa +0x2424:  mov    %eax,0x4(%esp)
086b6efe +0x2428:  mov    %edx,(%esp)
086b6f01 +0x242b:  call   086b6e90 <+0x23ba>
086b6f06 +0x2430:  leave
086b6f07 +0x2431:  ret
086b6f08 +0x2432:  push   %ebp
086b6f09 +0x2433:  mov    %esp,%ebp
086b6f0b +0x2435:  mov    $0x4444444,%eax
086b6f10 +0x243a:  pop    %ebp
086b6f11 +0x243b:  ret
086b6f12 +0x243c:  push   %ebp
086b6f13 +0x243d:  mov    %esp,%ebp
086b6f15 +0x243f:  mov    $0x3333333,%eax
086b6f1a +0x2444:  pop    %ebp
086b6f1b +0x2445:  ret
```

## 反编译 C

```c
// <global>::global @ 0x86b4ad6

/* village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int,
   village_attacked::CVillageMonsterArea*, int, int) */

void village_attacked::CVillageMonster::_GLOBAL__I_CVillageMonster(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
