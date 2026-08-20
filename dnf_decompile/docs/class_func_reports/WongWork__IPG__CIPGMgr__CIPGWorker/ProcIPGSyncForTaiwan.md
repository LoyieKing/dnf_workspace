# ProcIPGSyncForTaiwan

`_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE`

`WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr::CIPGWorker` | `0x081048c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081048c6  _ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE
#           WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)
# range [0x081048c6, 0x08105257]
081048c6 +0x000:  push   %ebp
081048c7 +0x001:  mov    %esp,%ebp
081048c9 +0x003:  push   %edi
081048ca +0x004:  push   %esi
081048cb +0x005:  push   %ebx
081048cc +0x006:  sub    $0x9c,%esp
081048d2 +0x00c:  movl   $0x0,-0x2c(%ebp)
081048d9 +0x013:  mov    0xc(%ebp),%eax
081048dc +0x016:  mov    0x1c(%eax),%eax
081048df +0x019:  cmp    $0x6,%eax
081048e2 +0x01c:  ja     08105211 <+0x94b>
081048e8 +0x022:  mov    &data#1e0c12ab(.rodata)(,%eax,4),%eax
081048ef +0x029:  jmp    *%eax
081048f1 +0x02b:  movl   $0x0,-0x30(%ebp)
081048f8 +0x032:  movl   $0x0,-0x34(%ebp)
081048ff +0x039:  mov    0xc(%ebp),%eax
08104902 +0x03c:  add    $0x3c,%eax
08104905 +0x03f:  mov    %eax,%edx
08104907 +0x041:  mov    0x8(%ebp),%eax
0810490a +0x044:  mov    0xc(%eax),%eax
0810490d +0x047:  mov    0xec(%eax),%eax
08104913 +0x04d:  lea    -0x34(%ebp),%ecx
08104916 +0x050:  mov    %ecx,0xc(%esp)
0810491a +0x054:  lea    -0x30(%ebp),%ecx
0810491d +0x057:  mov    %ecx,0x8(%esp)
08104921 +0x05b:  mov    %edx,0x4(%esp)
08104925 +0x05f:  mov    %eax,(%esp)
08104928 +0x062:  call   0817381a <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_>  ; Taiwan::TaiwanCash::getBalance(char const*, int&, int&)
0810492d +0x067:  mov    %eax,-0x28(%ebp)
08104930 +0x06a:  cmpl   $0x0,-0x28(%ebp)
08104934 +0x06e:  je     0810497b <+0xb5>
08104936 +0x070:  mov    0xc(%ebp),%eax
08104939 +0x073:  add    $0x28,%eax
0810493c +0x076:  mov    -0x28(%ebp),%edx
0810493f +0x079:  mov    %edx,0x18(%esp)
08104943 +0x07d:  mov    %eax,0x14(%esp)
08104947 +0x081:  movl   $"IPG_QUERY user: %s reason: %d",0x10(%esp)
0810494f +0x089:  movl   $0x243,0xc(%esp)
08104957 +0x091:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataEE19__PRETTY_FUNCTION__,0x8(%esp)
0810495f +0x099:  movl   $"IPGMgr.cpp",0x4(%esp)
08104967 +0x0a1:  movl   $0x1,(%esp)
0810496e +0x0a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08104973 +0x0ad:  mov    -0x2c(%ebp),%eax
08104976 +0x0b0:  jmp    0810524d <+0x987>
0810497b +0x0b5:  mov    0x8(%ebp),%eax
0810497e +0x0b8:  mov    0xc(%eax),%eax
08104981 +0x0bb:  mov    %eax,(%esp)
08104984 +0x0be:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
08104989 +0x0c3:  mov    %eax,-0x2c(%ebp)
0810498c +0x0c6:  mov    0xc(%ebp),%eax
0810498f +0x0c9:  mov    (%eax),%edx
08104991 +0x0cb:  mov    -0x2c(%ebp),%eax
08104994 +0x0ce:  mov    %edx,(%eax)
08104996 +0x0d0:  mov    0xc(%ebp),%eax
08104999 +0x0d3:  lea    0x4(%eax),%edx
0810499c +0x0d6:  mov    -0x2c(%ebp),%eax
0810499f +0x0d9:  add    $0x4,%eax
081049a2 +0x0dc:  movl   $0x14,0x8(%esp)
081049aa +0x0e4:  mov    %edx,0x4(%esp)
081049ae +0x0e8:  mov    %eax,(%esp)
081049b1 +0x0eb:  call   0807d8d0 <_init+0x1c8>
081049b6 +0x0f0:  mov    0xc(%ebp),%eax
081049b9 +0x0f3:  movzwl 0x18(%eax),%edx
081049bd +0x0f7:  mov    -0x2c(%ebp),%eax
081049c0 +0x0fa:  mov    %dx,0x18(%eax)
081049c4 +0x0fe:  mov    -0x2c(%ebp),%eax
081049c7 +0x101:  movl   $0x4,0x1c(%eax)
081049ce +0x108:  mov    0xc(%ebp),%eax
081049d1 +0x10b:  movzbl 0x24(%eax),%edx
081049d5 +0x10f:  mov    -0x2c(%ebp),%eax
081049d8 +0x112:  mov    %dl,0x24(%eax)
081049db +0x115:  mov    -0x2c(%ebp),%eax
081049de +0x118:  add    $0x28,%eax
081049e1 +0x11b:  movl   $0x99,0x8(%esp)
081049e9 +0x123:  movl   $0x0,0x4(%esp)
081049f1 +0x12b:  mov    %eax,(%esp)
081049f4 +0x12e:  call   0807dcc0 <_init+0x5b8>
081049f9 +0x133:  mov    0xc(%ebp),%eax
081049fc +0x136:  add    $0x28,%eax
081049ff +0x139:  mov    %eax,%edx
08104a01 +0x13b:  mov    -0x2c(%ebp),%eax
08104a04 +0x13e:  add    $0x28,%eax
08104a07 +0x141:  movl   $0x14,0x8(%esp)
08104a0f +0x149:  mov    %edx,0x4(%esp)
08104a13 +0x14d:  mov    %eax,(%esp)
08104a16 +0x150:  call   0807d8d0 <_init+0x1c8>
08104a1b +0x155:  mov    0xc(%ebp),%eax
08104a1e +0x158:  add    $0x3c,%eax
08104a21 +0x15b:  mov    %eax,%edx
08104a23 +0x15d:  mov    -0x2c(%ebp),%eax
08104a26 +0x160:  add    $0x3c,%eax
08104a29 +0x163:  movl   $0x28,0x8(%esp)
08104a31 +0x16b:  mov    %edx,0x4(%esp)
08104a35 +0x16f:  mov    %eax,(%esp)
08104a38 +0x172:  call   0807d8d0 <_init+0x1c8>
08104a3d +0x177:  mov    0xc(%ebp),%eax
08104a40 +0x17a:  add    $0x64,%eax
08104a43 +0x17d:  mov    %eax,%edx
08104a45 +0x17f:  mov    -0x2c(%ebp),%eax
08104a48 +0x182:  add    $0x64,%eax
08104a4b +0x185:  movl   $0x5,0x8(%esp)
08104a53 +0x18d:  mov    %edx,0x4(%esp)
08104a57 +0x191:  mov    %eax,(%esp)
08104a5a +0x194:  call   0807d8d0 <_init+0x1c8>
08104a5f +0x199:  mov    -0x30(%ebp),%edx
08104a62 +0x19c:  mov    -0x2c(%ebp),%eax
08104a65 +0x19f:  add    $0x69,%eax
08104a68 +0x1a2:  mov    %edx,0x8(%esp)
08104a6c +0x1a6:  movl   $"%d",0x4(%esp)
08104a74 +0x1ae:  mov    %eax,(%esp)
08104a77 +0x1b1:  call   0807e440 <_init+0xd38>
08104a7c +0x1b6:  mov    -0x34(%ebp),%edx
08104a7f +0x1b9:  mov    -0x2c(%ebp),%eax
08104a82 +0x1bc:  add    $0xb5,%eax
08104a87 +0x1c1:  mov    %edx,0x8(%esp)
08104a8b +0x1c5:  movl   $"%d",0x4(%esp)
08104a93 +0x1cd:  mov    %eax,(%esp)
08104a96 +0x1d0:  call   0807e440 <_init+0xd38>
08104a9b +0x1d5:  mov    -0x2c(%ebp),%eax
08104a9e +0x1d8:  add    $0xb1,%eax
08104aa3 +0x1dd:  mov    -0x28(%ebp),%edx
08104aa6 +0x1e0:  mov    %edx,0x8(%esp)
08104aaa +0x1e4:  movl   $"%d",0x4(%esp)
08104ab2 +0x1ec:  mov    %eax,(%esp)
08104ab5 +0x1ef:  call   0807e440 <_init+0xd38>
08104aba +0x1f4:  mov    0xc(%ebp),%eax
08104abd +0x1f7:  mov    0x2d8(%eax),%edx
08104ac3 +0x1fd:  mov    -0x2c(%ebp),%eax
08104ac6 +0x200:  mov    %edx,0x2d8(%eax)
08104acc +0x206:  jmp    0810524a <+0x984>
08104ad1 +0x20b:  mov    0xc(%ebp),%eax
08104ad4 +0x20e:  add    $0x1e8,%eax
08104ad9 +0x213:  mov    %eax,%edi
08104adb +0x215:  mov    0xc(%ebp),%eax
08104ade +0x218:  add    $0x3c,%eax
08104ae1 +0x21b:  mov    %eax,%esi
08104ae3 +0x21d:  mov    0xc(%ebp),%eax
08104ae6 +0x220:  add    $0x71,%eax
08104ae9 +0x223:  mov    %eax,(%esp)
08104aec +0x226:  call   0807e6f0 <_init+0xfe8>
08104af1 +0x22b:  mov    %eax,%ebx
08104af3 +0x22d:  mov    0xc(%ebp),%eax
08104af6 +0x230:  add    $0x69,%eax
08104af9 +0x233:  mov    %eax,(%esp)
08104afc +0x236:  call   0807e6f0 <_init+0xfe8>
08104b01 +0x23b:  mov    0x8(%ebp),%edx
08104b04 +0x23e:  mov    0xc(%edx),%edx
08104b07 +0x241:  mov    0xec(%edx),%edx
08104b0d +0x247:  lea    -0x40(%ebp),%ecx
08104b10 +0x24a:  mov    %ecx,0x1c(%esp)
08104b14 +0x24e:  mov    %edi,0x18(%esp)
08104b18 +0x252:  mov    %esi,0x14(%esp)
08104b1c +0x256:  mov    %ebx,0x10(%esp)
08104b20 +0x25a:  mov    %eax,0xc(%esp)
08104b24 +0x25e:  movl   $0x0,0x4(%esp)
08104b2c +0x266:  movl   $0x0,0x8(%esp)
08104b34 +0x26e:  mov    %edx,(%esp)
08104b37 +0x271:  call   081738e6 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE>  ; Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&)
08104b3c +0x276:  mov    %eax,-0x24(%ebp)
08104b3f +0x279:  cmpl   $0x0,-0x24(%ebp)
08104b43 +0x27d:  je     08104b98 <+0x2d2>
08104b45 +0x27f:  mov    0xc(%ebp),%eax
08104b48 +0x282:  add    $0x1e8,%eax
08104b4d +0x287:  mov    %eax,%edx
08104b4f +0x289:  mov    0xc(%ebp),%eax
08104b52 +0x28c:  add    $0x28,%eax
08104b55 +0x28f:  mov    -0x24(%ebp),%ecx
08104b58 +0x292:  mov    %ecx,0x1c(%esp)
08104b5c +0x296:  mov    %edx,0x18(%esp)
08104b60 +0x29a:  mov    %eax,0x14(%esp)
08104b64 +0x29e:  movl   $"IPG_OUTPUT user: %s, charac: %s reason: %d",0x10(%esp)
08104b6c +0x2a6:  movl   $0x269,0xc(%esp)
08104b74 +0x2ae:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataEE19__PRETTY_FUNCTION__,0x8(%esp)
08104b7c +0x2b6:  movl   $"IPGMgr.cpp",0x4(%esp)
08104b84 +0x2be:  movl   $0x1,(%esp)
08104b8b +0x2c5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08104b90 +0x2ca:  mov    -0x2c(%ebp),%eax
08104b93 +0x2cd:  jmp    0810524d <+0x987>
08104b98 +0x2d2:  mov    0x8(%ebp),%eax
08104b9b +0x2d5:  mov    0xc(%eax),%eax
08104b9e +0x2d8:  mov    %eax,(%esp)
08104ba1 +0x2db:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
08104ba6 +0x2e0:  mov    %eax,-0x2c(%ebp)
08104ba9 +0x2e3:  mov    0xc(%ebp),%eax
08104bac +0x2e6:  mov    (%eax),%edx
08104bae +0x2e8:  mov    -0x2c(%ebp),%eax
08104bb1 +0x2eb:  mov    %edx,(%eax)
08104bb3 +0x2ed:  mov    0xc(%ebp),%eax
08104bb6 +0x2f0:  lea    0x4(%eax),%edx
08104bb9 +0x2f3:  mov    -0x2c(%ebp),%eax
08104bbc +0x2f6:  add    $0x4,%eax
08104bbf +0x2f9:  movl   $0x14,0x8(%esp)
08104bc7 +0x301:  mov    %edx,0x4(%esp)
08104bcb +0x305:  mov    %eax,(%esp)
08104bce +0x308:  call   0807d8d0 <_init+0x1c8>
08104bd3 +0x30d:  mov    0xc(%ebp),%eax
08104bd6 +0x310:  movzwl 0x18(%eax),%edx
08104bda +0x314:  mov    -0x2c(%ebp),%eax
08104bdd +0x317:  mov    %dx,0x18(%eax)
08104be1 +0x31b:  mov    -0x2c(%ebp),%eax
08104be4 +0x31e:  movl   $0x2,0x1c(%eax)
08104beb +0x325:  mov    0xc(%ebp),%eax
08104bee +0x328:  movzbl 0x24(%eax),%edx
08104bf2 +0x32c:  mov    -0x2c(%ebp),%eax
08104bf5 +0x32f:  mov    %dl,0x24(%eax)
08104bf8 +0x332:  mov    -0x2c(%ebp),%eax
08104bfb +0x335:  add    $0x28,%eax
08104bfe +0x338:  movl   $0x1fc,0x8(%esp)
08104c06 +0x340:  movl   $0x0,0x4(%esp)
08104c0e +0x348:  mov    %eax,(%esp)
08104c11 +0x34b:  call   0807dcc0 <_init+0x5b8>
08104c16 +0x350:  mov    0xc(%ebp),%eax
08104c19 +0x353:  add    $0x28,%eax
08104c1c +0x356:  mov    %eax,%edx
08104c1e +0x358:  mov    -0x2c(%ebp),%eax
08104c21 +0x35b:  add    $0x28,%eax
08104c24 +0x35e:  mov    %edx,0x4(%esp)
08104c28 +0x362:  mov    %eax,(%esp)
08104c2b +0x365:  call   0807def0 <_init+0x7e8>
08104c30 +0x36a:  mov    0xc(%ebp),%eax
08104c33 +0x36d:  add    $0x3c,%eax
08104c36 +0x370:  mov    %eax,%edx
08104c38 +0x372:  mov    -0x2c(%ebp),%eax
08104c3b +0x375:  add    $0x3c,%eax
08104c3e +0x378:  mov    %edx,0x4(%esp)
08104c42 +0x37c:  mov    %eax,(%esp)
08104c45 +0x37f:  call   0807def0 <_init+0x7e8>
08104c4a +0x384:  mov    0xc(%ebp),%eax
08104c4d +0x387:  add    $0x64,%eax
08104c50 +0x38a:  mov    %eax,%edx
08104c52 +0x38c:  mov    -0x2c(%ebp),%eax
08104c55 +0x38f:  add    $0x64,%eax
08104c58 +0x392:  mov    %edx,0x4(%esp)
08104c5c +0x396:  mov    %eax,(%esp)
08104c5f +0x399:  call   0807def0 <_init+0x7e8>
08104c64 +0x39e:  mov    0xc(%ebp),%eax
08104c67 +0x3a1:  add    $0x69,%eax
08104c6a +0x3a4:  mov    %eax,%edx
08104c6c +0x3a6:  mov    -0x2c(%ebp),%eax
08104c6f +0x3a9:  add    $0x69,%eax
08104c72 +0x3ac:  mov    %edx,0x4(%esp)
08104c76 +0x3b0:  mov    %eax,(%esp)
08104c79 +0x3b3:  call   0807def0 <_init+0x7e8>
08104c7e +0x3b8:  mov    0xc(%ebp),%eax
08104c81 +0x3bb:  add    $0x71,%eax
08104c84 +0x3be:  mov    %eax,%edx
08104c86 +0x3c0:  mov    -0x2c(%ebp),%eax
08104c89 +0x3c3:  add    $0x71,%eax
08104c8c +0x3c6:  mov    %edx,0x4(%esp)
08104c90 +0x3ca:  mov    %eax,(%esp)
08104c93 +0x3cd:  call   0807def0 <_init+0x7e8>
08104c98 +0x3d2:  mov    0xc(%ebp),%eax
08104c9b +0x3d5:  add    $0x7d,%eax
08104c9e +0x3d8:  mov    %eax,%edx
08104ca0 +0x3da:  mov    -0x2c(%ebp),%eax
08104ca3 +0x3dd:  add    $0x7d,%eax
08104ca6 +0x3e0:  mov    %edx,0x4(%esp)
08104caa +0x3e4:  mov    %eax,(%esp)
08104cad +0x3e7:  call   0807def0 <_init+0x7e8>
08104cb2 +0x3ec:  mov    0xc(%ebp),%eax
08104cb5 +0x3ef:  add    $0x91,%eax
08104cba +0x3f4:  mov    %eax,%edx
08104cbc +0x3f6:  mov    -0x2c(%ebp),%eax
08104cbf +0x3f9:  add    $0x91,%eax
08104cc4 +0x3fe:  mov    %edx,0x4(%esp)
08104cc8 +0x402:  mov    %eax,(%esp)
08104ccb +0x405:  call   0807def0 <_init+0x7e8>
08104cd0 +0x40a:  mov    0xc(%ebp),%eax
08104cd3 +0x40d:  add    $0xf5,%eax
08104cd8 +0x412:  mov    %eax,%edx
08104cda +0x414:  mov    -0x2c(%ebp),%eax
08104cdd +0x417:  add    $0xf5,%eax
08104ce2 +0x41c:  mov    %edx,0x4(%esp)
08104ce6 +0x420:  mov    %eax,(%esp)
08104ce9 +0x423:  call   0807def0 <_init+0x7e8>
08104cee +0x428:  mov    -0x2c(%ebp),%eax
08104cf1 +0x42b:  mov    -0x40(%ebp),%edx
08104cf4 +0x42e:  mov    %edx,0x1dc(%eax)
08104cfa +0x434:  mov    -0x3c(%ebp),%edx
08104cfd +0x437:  mov    %edx,0x1e0(%eax)
08104d03 +0x43d:  mov    -0x38(%ebp),%edx
08104d06 +0x440:  mov    %edx,0x1e4(%eax)
08104d0c +0x446:  mov    -0x2c(%ebp),%eax
08104d0f +0x449:  add    $0x173,%eax
08104d14 +0x44e:  mov    -0x24(%ebp),%edx
08104d17 +0x451:  mov    %edx,0x8(%esp)
08104d1b +0x455:  movl   $"%d",0x4(%esp)
08104d23 +0x45d:  mov    %eax,(%esp)
08104d26 +0x460:  call   0807e440 <_init+0xd38>
08104d2b +0x465:  mov    -0x2c(%ebp),%eax
08104d2e +0x468:  add    $0x177,%eax
08104d33 +0x46d:  movl   $0x1,0x8(%esp)
08104d3b +0x475:  movl   $"",0x4(%esp)
08104d43 +0x47d:  mov    %eax,(%esp)
08104d46 +0x480:  call   0807d8a0 <_init+0x198>
08104d4b +0x485:  mov    0xc(%ebp),%eax
08104d4e +0x488:  mov    0x2d8(%eax),%edx
08104d54 +0x48e:  mov    -0x2c(%ebp),%eax
08104d57 +0x491:  mov    %edx,0x2d8(%eax)
08104d5d +0x497:  jmp    0810524a <+0x984>
08104d62 +0x49c:  mov    0xc(%ebp),%eax
08104d65 +0x49f:  mov    0x1f0(%eax),%edx
08104d6b +0x4a5:  mov    %edx,-0x4c(%ebp)
08104d6e +0x4a8:  mov    0x1f4(%eax),%edx
08104d74 +0x4ae:  mov    %edx,-0x48(%ebp)
08104d77 +0x4b1:  mov    0x1f8(%eax),%eax
08104d7d +0x4b7:  mov    %eax,-0x44(%ebp)
08104d80 +0x4ba:  mov    0x8(%ebp),%eax
08104d83 +0x4bd:  mov    0xc(%eax),%eax
08104d86 +0x4c0:  mov    0xec(%eax),%eax
08104d8c +0x4c6:  lea    -0x4c(%ebp),%edx
08104d8f +0x4c9:  mov    %edx,0x4(%esp)
08104d93 +0x4cd:  mov    %eax,(%esp)
08104d96 +0x4d0:  call   08173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&)
08104d9b +0x4d5:  jmp    0810524a <+0x984>
08104da0 +0x4da:  mov    0xc(%ebp),%eax
08104da3 +0x4dd:  mov    0x1f0(%eax),%edx
08104da9 +0x4e3:  mov    %edx,-0x58(%ebp)
08104dac +0x4e6:  mov    0x1f4(%eax),%edx
08104db2 +0x4ec:  mov    %edx,-0x54(%ebp)
08104db5 +0x4ef:  mov    0x1f8(%eax),%eax
08104dbb +0x4f5:  mov    %eax,-0x50(%ebp)
08104dbe +0x4f8:  mov    0x8(%ebp),%eax
08104dc1 +0x4fb:  mov    0xc(%eax),%eax
08104dc4 +0x4fe:  mov    0xec(%eax),%eax
08104dca +0x504:  lea    -0x58(%ebp),%edx
08104dcd +0x507:  mov    %edx,0x4(%esp)
08104dd1 +0x50b:  mov    %eax,(%esp)
08104dd4 +0x50e:  call   08173d1c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&)
08104dd9 +0x513:  jmp    0810524a <+0x984>
08104dde +0x518:  mov    0xc(%ebp),%eax
08104de1 +0x51b:  add    $0x50,%eax
08104de4 +0x51e:  mov    %eax,%esi
08104de6 +0x520:  mov    0xc(%ebp),%eax
08104de9 +0x523:  mov    0x98(%eax),%eax
08104def +0x529:  mov    %eax,%ebx
08104df1 +0x52b:  mov    0xc(%ebp),%eax
08104df4 +0x52e:  movzbl 0x26d(%eax),%eax
08104dfb +0x535:  movzbl %al,%ecx
08104dfe +0x538:  mov    0xc(%ebp),%eax
08104e01 +0x53b:  add    $0x28,%eax
08104e04 +0x53e:  mov    %eax,%edx
08104e06 +0x540:  mov    0x8(%ebp),%eax
08104e09 +0x543:  mov    0xc(%eax),%eax
08104e0c +0x546:  mov    0xec(%eax),%eax
08104e12 +0x54c:  lea    -0x64(%ebp),%edi
08104e15 +0x54f:  mov    %edi,0x2c(%esp)
08104e19 +0x553:  movl   $0x0,0x24(%esp)
08104e21 +0x55b:  movl   $0x0,0x28(%esp)
08104e29 +0x563:  mov    %esi,0x20(%esp)
08104e2d +0x567:  movl   $"",0x1c(%esp)
08104e35 +0x56f:  movl   $"",0x18(%esp)
08104e3d +0x577:  movl   $"",0x14(%esp)
08104e45 +0x57f:  mov    %ebx,0x10(%esp)
08104e49 +0x583:  movl   $0x0,0xc(%esp)
08104e51 +0x58b:  mov    %ecx,0x8(%esp)
08104e55 +0x58f:  mov    %edx,0x4(%esp)
08104e59 +0x593:  mov    %eax,(%esp)
08104e5c +0x596:  call   08173df0 <_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE>  ; Taiwan::TaiwanCash::charge(char*, unsigned char, unsigned char, unsigned int, char*, char*, char*, char*, unsigned long long, Taiwan::BillTransaction&)
08104e61 +0x59b:  mov    %eax,-0x20(%ebp)
08104e64 +0x59e:  cmpl   $0x0,-0x20(%ebp)
08104e68 +0x5a2:  je     08104ebb <+0x5f5>
08104e6a +0x5a4:  mov    0xc(%ebp),%eax
08104e6d +0x5a7:  add    $0x50,%eax
08104e70 +0x5aa:  mov    %eax,%edx
08104e72 +0x5ac:  mov    0xc(%ebp),%eax
08104e75 +0x5af:  add    $0x28,%eax
08104e78 +0x5b2:  mov    -0x20(%ebp),%ecx
08104e7b +0x5b5:  mov    %ecx,0x1c(%esp)
08104e7f +0x5b9:  mov    %edx,0x18(%esp)
08104e83 +0x5bd:  mov    %eax,0x14(%esp)
08104e87 +0x5c1:  movl   $"IPG_INPUT charge user: %s, charac: %s reason: %d",0x10(%esp)
08104e8f +0x5c9:  movl   $0x2a7,0xc(%esp)
08104e97 +0x5d1:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataEE19__PRETTY_FUNCTION__,0x8(%esp)
08104e9f +0x5d9:  movl   $"IPGMgr.cpp",0x4(%esp)
08104ea7 +0x5e1:  movl   $0x1,(%esp)
08104eae +0x5e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08104eb3 +0x5ed:  mov    -0x2c(%ebp),%eax
08104eb6 +0x5f0:  jmp    0810524d <+0x987>
08104ebb +0x5f5:  mov    0x8(%ebp),%eax
08104ebe +0x5f8:  mov    0xc(%eax),%eax
08104ec1 +0x5fb:  mov    0xec(%eax),%eax
08104ec7 +0x601:  lea    -0x64(%ebp),%edx
08104eca +0x604:  mov    %edx,0x4(%esp)
08104ece +0x608:  mov    %eax,(%esp)
08104ed1 +0x60b:  call   08173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>  ; Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&)
08104ed6 +0x610:  mov    %eax,-0x20(%ebp)
08104ed9 +0x613:  cmpl   $0x0,-0x20(%ebp)
08104edd +0x617:  je     08105249 <+0x983>
08104ee3 +0x61d:  mov    -0x60(%ebp),%eax
08104ee6 +0x620:  mov    -0x5c(%ebp),%edx
08104ee9 +0x623:  movl   $0x0,0x8(%esp)
08104ef1 +0x62b:  mov    %eax,(%esp)
08104ef4 +0x62e:  mov    %edx,0x4(%esp)
08104ef8 +0x632:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08104efd +0x637:  mov    0xc(%ebp),%edx
08104f00 +0x63a:  add    $0x50,%edx
08104f03 +0x63d:  mov    %edx,%ecx
08104f05 +0x63f:  mov    0xc(%ebp),%edx
08104f08 +0x642:  add    $0x28,%edx
08104f0b +0x645:  mov    %eax,0x20(%esp)
08104f0f +0x649:  mov    -0x20(%ebp),%eax
08104f12 +0x64c:  mov    %eax,0x1c(%esp)
08104f16 +0x650:  mov    %ecx,0x18(%esp)
08104f1a +0x654:  mov    %edx,0x14(%esp)
08104f1e +0x658:  movl   $"IPG_INPUT confirm user: %s, charac: %s reason: %d tran :%s",0x10(%esp)
08104f26 +0x660:  movl   $0x2af,0xc(%esp)
08104f2e +0x668:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataEE19__PRETTY_FUNCTION__,0x8(%esp)
08104f36 +0x670:  movl   $"IPGMgr.cpp",0x4(%esp)
08104f3e +0x678:  movl   $0x1,(%esp)
08104f45 +0x67f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08104f4a +0x684:  mov    -0x2c(%ebp),%eax
08104f4d +0x687:  jmp    0810524d <+0x987>
08104f52 +0x68c:  mov    0xc(%ebp),%eax
08104f55 +0x68f:  mov    0xac(%eax),%eax
08104f5b +0x695:  mov    %eax,%ebx
08104f5d +0x697:  mov    0xc(%ebp),%eax
08104f60 +0x69a:  movzbl 0xb2(%eax),%eax
08104f67 +0x6a1:  movsbl %al,%esi
08104f6a +0x6a4:  mov    0xc(%ebp),%eax
08104f6d +0x6a7:  movzbl 0xb1(%eax),%eax
08104f74 +0x6ae:  movsbl %al,%eax
08104f77 +0x6b1:  mov    %eax,-0x74(%ebp)
08104f7a +0x6b4:  mov    0xc(%ebp),%eax
08104f7d +0x6b7:  add    $0x94,%eax
08104f82 +0x6bc:  mov    %eax,-0x70(%ebp)
08104f85 +0x6bf:  mov    0xc(%ebp),%eax
08104f88 +0x6c2:  add    $0x8c,%eax
08104f8d +0x6c7:  mov    %eax,-0x6c(%ebp)
08104f90 +0x6ca:  mov    0xc(%ebp),%eax
08104f93 +0x6cd:  movzbl 0xb0(%eax),%eax
08104f9a +0x6d4:  movsbl %al,%edi
08104f9d +0x6d7:  mov    0xc(%ebp),%eax
08104fa0 +0x6da:  add    $0x64,%eax
08104fa3 +0x6dd:  mov    %eax,%ecx
08104fa5 +0x6df:  mov    0xc(%ebp),%eax
08104fa8 +0x6e2:  add    $0x3c,%eax
08104fab +0x6e5:  mov    %eax,%edx
08104fad +0x6e7:  mov    0x8(%ebp),%eax
08104fb0 +0x6ea:  mov    0xc(%eax),%eax
08104fb3 +0x6ed:  mov    0xec(%eax),%eax
08104fb9 +0x6f3:  mov    %ebx,0x20(%esp)
08104fbd +0x6f7:  mov    %esi,0x1c(%esp)
08104fc1 +0x6fb:  mov    -0x74(%ebp),%ebx
08104fc4 +0x6fe:  mov    %ebx,0x18(%esp)
08104fc8 +0x702:  mov    -0x70(%ebp),%ebx
08104fcb +0x705:  mov    %ebx,0x14(%esp)
08104fcf +0x709:  mov    -0x6c(%ebp),%ebx
08104fd2 +0x70c:  mov    %ebx,0x10(%esp)
08104fd6 +0x710:  mov    %edi,0xc(%esp)
08104fda +0x714:  mov    %ecx,0x8(%esp)
08104fde +0x718:  mov    %edx,0x4(%esp)
08104fe2 +0x71c:  mov    %eax,(%esp)
08104fe5 +0x71f:  call   08173f0c <_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci>  ; Taiwan::TaiwanCash::ceraPoint(char*, char*, char, char*, char*, char, char, int)
08104fea +0x724:  mov    %eax,-0x1c(%ebp)
08104fed +0x727:  cmpl   $0x0,-0x1c(%ebp)
08104ff1 +0x72b:  je     08105057 <+0x791>
08104ff3 +0x72d:  mov    0xc(%ebp),%eax
08104ff6 +0x730:  add    $0xb3,%eax
08104ffb +0x735:  mov    -0x1c(%ebp),%edx
08104ffe +0x738:  mov    %edx,0x8(%esp)
08105002 +0x73c:  movl   $"%d",0x4(%esp)
0810500a +0x744:  mov    %eax,(%esp)
0810500d +0x747:  call   0807e440 <_init+0xd38>
08105012 +0x74c:  mov    0xc(%ebp),%eax
08105015 +0x74f:  add    $0x3c,%eax
08105018 +0x752:  mov    -0x1c(%ebp),%edx
0810501b +0x755:  mov    %edx,0x18(%esp)
0810501f +0x759:  mov    %eax,0x14(%esp)
08105023 +0x75d:  movl   $"IPG_CERA_POINT user: %s reason: %d",0x10(%esp)
0810502b +0x765:  movl   $0x2c4,0xc(%esp)
08105033 +0x76d:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataEE19__PRETTY_FUNCTION__,0x8(%esp)
0810503b +0x775:  movl   $"IPGMgr.cpp",0x4(%esp)
08105043 +0x77d:  movl   $0x1,(%esp)
0810504a +0x784:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810504f +0x789:  mov    -0x2c(%ebp),%eax
08105052 +0x78c:  jmp    0810524d <+0x987>
08105057 +0x791:  mov    0xc(%ebp),%eax
0810505a +0x794:  movzbl 0xb0(%eax),%eax
08105061 +0x79b:  cmp    $0x41,%al
08105063 +0x79d:  jne    0810506d <+0x7a7>
08105065 +0x79f:  mov    -0x2c(%ebp),%eax
08105068 +0x7a2:  jmp    0810524d <+0x987>
0810506d +0x7a7:  mov    0x8(%ebp),%eax
08105070 +0x7aa:  mov    0xc(%eax),%eax
08105073 +0x7ad:  mov    %eax,(%esp)
08105076 +0x7b0:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
0810507b +0x7b5:  mov    %eax,-0x2c(%ebp)
0810507e +0x7b8:  mov    0xc(%ebp),%eax
08105081 +0x7bb:  mov    (%eax),%edx
08105083 +0x7bd:  mov    -0x2c(%ebp),%eax
08105086 +0x7c0:  mov    %edx,(%eax)
08105088 +0x7c2:  mov    0xc(%ebp),%eax
0810508b +0x7c5:  lea    0x4(%eax),%edx
0810508e +0x7c8:  mov    -0x2c(%ebp),%eax
08105091 +0x7cb:  add    $0x4,%eax
08105094 +0x7ce:  movl   $0x14,0x8(%esp)
0810509c +0x7d6:  mov    %edx,0x4(%esp)
081050a0 +0x7da:  mov    %eax,(%esp)
081050a3 +0x7dd:  call   0807d8d0 <_init+0x1c8>
081050a8 +0x7e2:  mov    0xc(%ebp),%eax
081050ab +0x7e5:  movzwl 0x18(%eax),%edx
081050af +0x7e9:  mov    -0x2c(%ebp),%eax
081050b2 +0x7ec:  mov    %dx,0x18(%eax)
081050b6 +0x7f0:  mov    0xc(%ebp),%eax
081050b9 +0x7f3:  movl   $0x2,0x1c(%eax)
081050c0 +0x7fa:  mov    -0x2c(%ebp),%eax
081050c3 +0x7fd:  movl   $0x2,0x1c(%eax)
081050ca +0x804:  mov    0xc(%ebp),%eax
081050cd +0x807:  movzbl 0x24(%eax),%edx
081050d1 +0x80b:  mov    -0x2c(%ebp),%eax
081050d4 +0x80e:  mov    %dl,0x24(%eax)
081050d7 +0x811:  mov    -0x2c(%ebp),%eax
081050da +0x814:  add    $0x28,%eax
081050dd +0x817:  movl   $0x1fc,0x8(%esp)
081050e5 +0x81f:  movl   $0x0,0x4(%esp)
081050ed +0x827:  mov    %eax,(%esp)
081050f0 +0x82a:  call   0807dcc0 <_init+0x5b8>
081050f5 +0x82f:  mov    -0x2c(%ebp),%eax
081050f8 +0x832:  add    $0x28,%eax
081050fb +0x835:  movl   $0x14,0x8(%esp)
08105103 +0x83d:  movl   $"",0x4(%esp)
0810510b +0x845:  mov    %eax,(%esp)
0810510e +0x848:  call   0807d8d0 <_init+0x1c8>
08105113 +0x84d:  mov    -0x2c(%ebp),%eax
08105116 +0x850:  add    $0x64,%eax
08105119 +0x853:  movl   $0x5,0x8(%esp)
08105121 +0x85b:  movl   $"",0x4(%esp)
08105129 +0x863:  mov    %eax,(%esp)
0810512c +0x866:  call   0807d8d0 <_init+0x1c8>
08105131 +0x86b:  mov    -0x2c(%ebp),%eax
08105134 +0x86e:  add    $0x177,%eax
08105139 +0x873:  movl   $0x64,0x8(%esp)
08105141 +0x87b:  movl   $"cera point",0x4(%esp)
08105149 +0x883:  mov    %eax,(%esp)
0810514c +0x886:  call   0807d8d0 <_init+0x1c8>
08105151 +0x88b:  mov    0xc(%ebp),%eax
08105154 +0x88e:  add    $0x3c,%eax
08105157 +0x891:  mov    %eax,%edx
08105159 +0x893:  mov    -0x2c(%ebp),%eax
0810515c +0x896:  add    $0x3c,%eax
0810515f +0x899:  movl   $0x28,0x8(%esp)
08105167 +0x8a1:  mov    %edx,0x4(%esp)
0810516b +0x8a5:  mov    %eax,(%esp)
0810516e +0x8a8:  call   0807d8d0 <_init+0x1c8>
08105173 +0x8ad:  mov    0xc(%ebp),%eax
08105176 +0x8b0:  add    $0x8c,%eax
0810517b +0x8b5:  mov    %eax,%edx
0810517d +0x8b7:  mov    -0x2c(%ebp),%eax
08105180 +0x8ba:  add    $0x69,%eax
08105183 +0x8bd:  movl   $0x8,0x8(%esp)
0810518b +0x8c5:  mov    %edx,0x4(%esp)
0810518f +0x8c9:  mov    %eax,(%esp)
08105192 +0x8cc:  call   0807d8d0 <_init+0x1c8>
08105197 +0x8d1:  mov    0xc(%ebp),%eax
0810519a +0x8d4:  add    $0x94,%eax
0810519f +0x8d9:  mov    %eax,%edx
081051a1 +0x8db:  mov    -0x2c(%ebp),%eax
081051a4 +0x8de:  add    $0x7d,%eax
081051a7 +0x8e1:  movl   $0x14,0x8(%esp)
081051af +0x8e9:  mov    %edx,0x4(%esp)
081051b3 +0x8ed:  mov    %eax,(%esp)
081051b6 +0x8f0:  call   0807d8d0 <_init+0x1c8>
081051bb +0x8f5:  mov    -0x2c(%ebp),%eax
081051be +0x8f8:  add    $0x173,%eax
081051c3 +0x8fd:  mov    -0x1c(%ebp),%edx
081051c6 +0x900:  mov    %edx,0x8(%esp)
081051ca +0x904:  movl   $"%d",0x4(%esp)
081051d2 +0x90c:  mov    %eax,(%esp)
081051d5 +0x90f:  call   0807e440 <_init+0xd38>
081051da +0x914:  mov    0xc(%ebp),%eax
081051dd +0x917:  mov    0xac(%eax),%edx
081051e3 +0x91d:  mov    -0x2c(%ebp),%eax
081051e6 +0x920:  add    $0x71,%eax
081051e9 +0x923:  mov    %edx,0x8(%esp)
081051ed +0x927:  movl   $"%d",0x4(%esp)
081051f5 +0x92f:  mov    %eax,(%esp)
081051f8 +0x932:  call   0807e440 <_init+0xd38>
081051fd +0x937:  mov    0xc(%ebp),%eax
08105200 +0x93a:  mov    0x2d8(%eax),%edx
08105206 +0x940:  mov    -0x2c(%ebp),%eax
08105209 +0x943:  mov    %edx,0x2d8(%eax)
0810520f +0x949:  jmp    0810524a <+0x984>
08105211 +0x94b:  mov    0xc(%ebp),%eax
08105214 +0x94e:  mov    0x1c(%eax),%eax
08105217 +0x951:  mov    %eax,0x14(%esp)
0810521b +0x955:  movl   $"IPGDataType : %d",0x10(%esp)
08105223 +0x95d:  movl   $0x2e9,0xc(%esp)
0810522b +0x965:  movl   $&_ZZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataEE19__PRETTY_FUNCTION__,0x8(%esp)
08105233 +0x96d:  movl   $"IPGMgr.cpp",0x4(%esp)
0810523b +0x975:  movl   $0x1,(%esp)
08105242 +0x97c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08105247 +0x981:  jmp    0810524a <+0x984>
08105249 +0x983:  nop
0810524a +0x984:  mov    -0x2c(%ebp),%eax
0810524d +0x987:  add    $0x9c,%esp
08105253 +0x98d:  pop    %ebx
08105254 +0x98e:  pop    %esi
08105255 +0x98f:  pop    %edi
08105256 +0x990:  pop    %ebp
08105257 +0x991:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan @ 0x81048c6

/* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*) */

undefined4 * __thiscall
WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(CIPGWorker *this,SIPGData *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BillTransaction *pBVar6;
  BillTransaction local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = (undefined4 *)0x0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    pBVar6 = local_68;
    uVar4 = 0;
    uVar5 = 0;
    local_24 = Taiwan::TaiwanCash::charge
                         (*(char **)(*(int *)(this + 0xc) + 0xec),(char)param_1 + '(',
                          (uchar)param_1[0x26d],0,*(char **)(param_1 + 0x98),"","","",
                          ZEXT48(param_1 + 0x50),(BillTransaction *)0x0);
    if (local_24 == 0) {
      local_24 = Taiwan::TaiwanCash::confirm(*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),local_68)
      ;
      if (local_24 != 0) {
        uVar3 = NumberToString(CONCAT44(local_60,local_64),0);
        LogManager::logFormat
                  (1,"IPGMgr.cpp",
                   "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                   ,0x2af,"IPG_INPUT confirm user: %s, charac: %s reason: %d tran :%s",
                   param_1 + 0x28,param_1 + 0x50,local_24,uVar3,uVar4,uVar5,pBVar6);
      }
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x2a7,"IPG_INPUT charge user: %s, charac: %s reason: %d",param_1 + 0x28,
                 param_1 + 0x50,local_24);
    }
    break;
  default:
    LogManager::logFormat
              (1,"IPGMgr.cpp",
               "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
               ,0x2e9,"IPGDataType : %d",*(undefined4 *)(param_1 + 0x1c));
    break;
  case 2:
    pcVar1 = (char *)atoi((char *)(param_1 + 0x71));
    iVar2 = atoi((char *)(param_1 + 0x69));
    local_28 = Taiwan::TaiwanCash::purchase
                         ((ulonglong)*(uint *)(*(int *)(this + 0xc) + 0xec),0,iVar2,pcVar1,
                          (char *)(param_1 + 0x3c),(BillTransaction *)(param_1 + 0x1e8));
    if (local_28 == 0) {
      local_30 = (undefined4 *)AllocIPGData(*(CIPGMgr **)(this + 0xc));
      *local_30 = *(undefined4 *)param_1;
      strncpy((char *)(local_30 + 1),(char *)(param_1 + 4),0x14);
      *(undefined2 *)(local_30 + 6) = *(undefined2 *)(param_1 + 0x18);
      local_30[7] = 2;
      *(SIPGData *)(local_30 + 9) = param_1[0x24];
      memset(local_30 + 10,0,0x1fc);
      strcpy((char *)(local_30 + 10),(char *)(param_1 + 0x28));
      strcpy((char *)(local_30 + 0xf),(char *)(param_1 + 0x3c));
      strcpy((char *)(local_30 + 0x19),(char *)(param_1 + 100));
      strcpy((char *)((int)local_30 + 0x69),(char *)(param_1 + 0x69));
      strcpy((char *)((int)local_30 + 0x71),(char *)(param_1 + 0x71));
      strcpy((char *)((int)local_30 + 0x7d),(char *)(param_1 + 0x7d));
      strcpy((char *)((int)local_30 + 0x91),(char *)(param_1 + 0x91));
      strcpy((char *)((int)local_30 + 0xf5),(char *)(param_1 + 0xf5));
      local_30[0x77] = local_44;
      local_30[0x78] = local_40;
      local_30[0x79] = local_3c;
      sprintf((char *)((int)local_30 + 0x173),"%d",local_28);
      memcpy((void *)((int)local_30 + 0x177),&DAT_08b421df,1);
      local_30[0xb6] = *(undefined4 *)(param_1 + 0x2d8);
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x269,"IPG_OUTPUT user: %s, charac: %s reason: %d",param_1 + 0x28,param_1 + 0x1e8,
                 local_28);
    }
    break;
  case 3:
    local_5c = *(undefined4 *)(param_1 + 0x1f0);
    local_58 = *(undefined4 *)(param_1 + 500);
    local_54 = *(undefined4 *)(param_1 + 0x1f8);
    Taiwan::TaiwanCash::cancel
              (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(BillTransaction *)&local_5c);
    break;
  case 4:
    local_34 = 0;
    local_38 = 0;
    local_2c = Taiwan::TaiwanCash::getBalance
                         (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(char *)(param_1 + 0x3c),
                          &local_34,&local_38);
    if (local_2c == 0) {
      local_30 = (undefined4 *)AllocIPGData(*(CIPGMgr **)(this + 0xc));
      *local_30 = *(undefined4 *)param_1;
      strncpy((char *)(local_30 + 1),(char *)(param_1 + 4),0x14);
      *(undefined2 *)(local_30 + 6) = *(undefined2 *)(param_1 + 0x18);
      local_30[7] = 4;
      *(SIPGData *)(local_30 + 9) = param_1[0x24];
      memset(local_30 + 10,0,0x99);
      strncpy((char *)(local_30 + 10),(char *)(param_1 + 0x28),0x14);
      strncpy((char *)(local_30 + 0xf),(char *)(param_1 + 0x3c),0x28);
      strncpy((char *)(local_30 + 0x19),(char *)(param_1 + 100),5);
      sprintf((char *)((int)local_30 + 0x69),"%d",local_34);
      sprintf((char *)((int)local_30 + 0xb5),"%d",local_38);
      sprintf((char *)((int)local_30 + 0xb1),"%d",local_2c);
      local_30[0xb6] = *(undefined4 *)(param_1 + 0x2d8);
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x243,"IPG_QUERY user: %s reason: %d",param_1 + 0x28,local_2c);
    }
    break;
  case 5:
    local_50 = *(undefined4 *)(param_1 + 0x1f0);
    local_4c = *(undefined4 *)(param_1 + 500);
    local_48 = *(undefined4 *)(param_1 + 0x1f8);
    Taiwan::TaiwanCash::confirm
              (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(BillTransaction *)&local_50);
    break;
  case 6:
    local_20 = Taiwan::TaiwanCash::ceraPoint
                         (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(char *)(param_1 + 0x3c),
                          (char *)(param_1 + 100),(char)param_1[0xb0],(char *)(param_1 + 0x8c),
                          (char *)(param_1 + 0x94),(char)param_1[0xb1],(char)param_1[0xb2],
                          *(int *)(param_1 + 0xac));
    if (local_20 == 0) {
      if (param_1[0xb0] != (SIPGData)0x41) {
        local_30 = (undefined4 *)AllocIPGData(*(CIPGMgr **)(this + 0xc));
        *local_30 = *(undefined4 *)param_1;
        strncpy((char *)(local_30 + 1),(char *)(param_1 + 4),0x14);
        *(undefined2 *)(local_30 + 6) = *(undefined2 *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        local_30[7] = 2;
        *(SIPGData *)(local_30 + 9) = param_1[0x24];
        memset(local_30 + 10,0,0x1fc);
        strncpy((char *)(local_30 + 10),"",0x14);
        strncpy((char *)(local_30 + 0x19),"",5);
        strncpy((char *)((int)local_30 + 0x177),"cera point",100);
        strncpy((char *)(local_30 + 0xf),(char *)(param_1 + 0x3c),0x28);
        strncpy((char *)((int)local_30 + 0x69),(char *)(param_1 + 0x8c),8);
        strncpy((char *)((int)local_30 + 0x7d),(char *)(param_1 + 0x94),0x14);
        sprintf((char *)((int)local_30 + 0x173),"%d",local_20);
        sprintf((char *)((int)local_30 + 0x71),"%d",*(undefined4 *)(param_1 + 0xac));
        local_30[0xb6] = *(undefined4 *)(param_1 + 0x2d8);
      }
    }
    else {
      sprintf((char *)(param_1 + 0xb3),"%d",local_20);
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x2c4,"IPG_CERA_POINT user: %s reason: %d",param_1 + 0x3c,local_20);
    }
  }
  return local_30;
}
```
