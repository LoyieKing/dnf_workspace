# NeedMaterialDataManager

`_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev`

`global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to NeedMaterialDataManager` | `0x081b5c5d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5c5d  _GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev
#           global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()
# range [0x081b5c5d, 0x081b68d7]
081b5c5d +0x000:  push   %ebp
081b5c5e +0x001:  mov    %esp,%ebp
081b5c60 +0x003:  sub    $0x18,%esp
081b5c63 +0x006:  movl   $0xffff,0x4(%esp)
081b5c6b +0x00e:  movl   $0x1,(%esp)
081b5c72 +0x015:  call   081b5c1d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b5c77 +0x01a:  leave
081b5c78 +0x01b:  ret
081b5c79 +0x01c:  nop
081b5c7a +0x01d:  push   %ebp
081b5c7b +0x01e:  mov    %esp,%ebp
081b5c7d +0x020:  sub    $0x18,%esp
081b5c80 +0x023:  mov    0x8(%ebp),%eax
081b5c83 +0x026:  mov    %eax,(%esp)
081b5c86 +0x029:  call   081b5cce <+0x71>
081b5c8b +0x02e:  leave
081b5c8c +0x02f:  ret
081b5c8d +0x030:  nop
081b5c8e +0x031:  push   %ebp
081b5c8f +0x032:  mov    %esp,%ebp
081b5c91 +0x034:  mov    0x8(%ebp),%eax
081b5c94 +0x037:  movl   $0x0,(%eax)
081b5c9a +0x03d:  mov    0x8(%ebp),%eax
081b5c9d +0x040:  movl   $0x0,0x4(%eax)
081b5ca4 +0x047:  pop    %ebp
081b5ca5 +0x048:  ret
081b5ca6 +0x049:  push   %ebp
081b5ca7 +0x04a:  mov    %esp,%ebp
081b5ca9 +0x04c:  sub    $0x18,%esp
081b5cac +0x04f:  mov    0x8(%ebp),%eax
081b5caf +0x052:  mov    %eax,(%esp)
081b5cb2 +0x055:  call   081b5e28 <+0x1cb>
081b5cb7 +0x05a:  leave
081b5cb8 +0x05b:  ret
081b5cb9 +0x05c:  nop
081b5cba +0x05d:  push   %ebp
081b5cbb +0x05e:  mov    %esp,%ebp
081b5cbd +0x060:  sub    $0x18,%esp
081b5cc0 +0x063:  mov    0x8(%ebp),%eax
081b5cc3 +0x066:  mov    %eax,(%esp)
081b5cc6 +0x069:  call   081b5e3c <+0x1df>
081b5ccb +0x06e:  leave
081b5ccc +0x06f:  ret
081b5ccd +0x070:  nop
081b5cce +0x071:  push   %ebp
081b5ccf +0x072:  mov    %esp,%ebp
081b5cd1 +0x074:  push   %esi
081b5cd2 +0x075:  push   %ebx
081b5cd3 +0x076:  sub    $0x10,%esp
081b5cd6 +0x079:  mov    0x8(%ebp),%eax
081b5cd9 +0x07c:  mov    %eax,(%esp)
081b5cdc +0x07f:  call   080ced26 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3b73>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3b73
081b5ce1 +0x084:  mov    %eax,0x4(%esp)
081b5ce5 +0x088:  mov    0x8(%ebp),%eax
081b5ce8 +0x08b:  mov    %eax,(%esp)
081b5ceb +0x08e:  call   080ec0e4 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xdb>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xdb
081b5cf0 +0x093:  jmp    081b5d0d <+0xb0>
081b5cf2 +0x095:  mov    %edx,%ebx
081b5cf4 +0x097:  mov    %eax,%esi
081b5cf6 +0x099:  mov    0x8(%ebp),%eax
081b5cf9 +0x09c:  mov    %eax,(%esp)
081b5cfc +0x09f:  call   081b5cba <+0x5d>
081b5d01 +0x0a4:  mov    %esi,%eax
081b5d03 +0x0a6:  mov    %ebx,%edx
081b5d05 +0x0a8:  mov    %eax,(%esp)
081b5d08 +0x0ab:  call   08ae3750 <_Unwind_Resume>
081b5d0d +0x0b0:  mov    0x8(%ebp),%eax
081b5d10 +0x0b3:  mov    %eax,(%esp)
081b5d13 +0x0b6:  call   081b5cba <+0x5d>
081b5d18 +0x0bb:  add    $0x10,%esp
081b5d1b +0x0be:  pop    %ebx
081b5d1c +0x0bf:  pop    %esi
081b5d1d +0x0c0:  pop    %ebp
081b5d1e +0x0c1:  ret
081b5d1f +0x0c2:  nop
081b5d20 +0x0c3:  push   %ebp
081b5d21 +0x0c4:  mov    %esp,%ebp
081b5d23 +0x0c6:  mov    0x8(%ebp),%eax
081b5d26 +0x0c9:  mov    (%eax),%eax
081b5d28 +0x0cb:  add    $0x10,%eax
081b5d2b +0x0ce:  pop    %ebp
081b5d2c +0x0cf:  ret
081b5d2d +0x0d0:  nop
081b5d2e +0x0d1:  push   %ebp
081b5d2f +0x0d2:  mov    %esp,%ebp
081b5d31 +0x0d4:  push   %ebx
081b5d32 +0x0d5:  sub    $0x44,%esp
081b5d35 +0x0d8:  lea    -0x28(%ebp),%eax
081b5d38 +0x0db:  mov    0xc(%ebp),%edx
081b5d3b +0x0de:  mov    %edx,0x8(%esp)
081b5d3f +0x0e2:  mov    0x8(%ebp),%edx
081b5d42 +0x0e5:  mov    %edx,0x4(%esp)
081b5d46 +0x0e9:  mov    %eax,(%esp)
081b5d49 +0x0ec:  call   081b5e76 <+0x219>
081b5d4e +0x0f1:  sub    $0x4,%esp
081b5d51 +0x0f4:  lea    -0x24(%ebp),%eax
081b5d54 +0x0f7:  mov    0x8(%ebp),%edx
081b5d57 +0x0fa:  mov    %edx,0x4(%esp)
081b5d5b +0x0fe:  mov    %eax,(%esp)
081b5d5e +0x101:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
081b5d63 +0x106:  sub    $0x4,%esp
081b5d66 +0x109:  lea    -0x24(%ebp),%eax
081b5d69 +0x10c:  mov    %eax,0x4(%esp)
081b5d6d +0x110:  lea    -0x28(%ebp),%eax
081b5d70 +0x113:  mov    %eax,(%esp)
081b5d73 +0x116:  call   080ce8c6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3713>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3713
081b5d78 +0x11b:  test   %al,%al
081b5d7a +0x11d:  jne    081b5db8 <+0x15b>
081b5d7c +0x11f:  lea    -0x28(%ebp),%eax
081b5d7f +0x122:  mov    %eax,(%esp)
081b5d82 +0x125:  call   081b5d20 <+0xc3>
081b5d87 +0x12a:  mov    %eax,%ebx
081b5d89 +0x12c:  lea    -0x1d(%ebp),%eax
081b5d8c +0x12f:  mov    0x8(%ebp),%edx
081b5d8f +0x132:  mov    %edx,0x4(%esp)
081b5d93 +0x136:  mov    %eax,(%esp)
081b5d96 +0x139:  call   081b5ea2 <+0x245>
081b5d9b +0x13e:  sub    $0x4,%esp
081b5d9e +0x141:  mov    %ebx,0x8(%esp)
081b5da2 +0x145:  mov    0xc(%ebp),%eax
081b5da5 +0x148:  mov    %eax,0x4(%esp)
081b5da9 +0x14c:  lea    -0x1d(%ebp),%eax
081b5dac +0x14f:  mov    %eax,(%esp)
081b5daf +0x152:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b5db4 +0x157:  test   %al,%al
081b5db6 +0x159:  je     081b5dbf <+0x162>
081b5db8 +0x15b:  mov    $0x1,%eax
081b5dbd +0x160:  jmp    081b5dc4 <+0x167>
081b5dbf +0x162:  mov    $0x0,%eax
081b5dc4 +0x167:  test   %al,%al
081b5dc6 +0x169:  je     081b5e15 <+0x1b8>
081b5dc8 +0x16b:  lea    -0x10(%ebp),%eax
081b5dcb +0x16e:  mov    %eax,(%esp)
081b5dce +0x171:  call   081b5c8e <+0x31>
081b5dd3 +0x176:  lea    -0x10(%ebp),%eax
081b5dd6 +0x179:  mov    %eax,0x8(%esp)
081b5dda +0x17d:  mov    0xc(%ebp),%eax
081b5ddd +0x180:  mov    %eax,0x4(%esp)
081b5de1 +0x184:  lea    -0x1c(%ebp),%eax
081b5de4 +0x187:  mov    %eax,(%esp)
081b5de7 +0x18a:  call   081b5ec8 <+0x26b>
081b5dec +0x18f:  lea    -0x2c(%ebp),%eax
081b5def +0x192:  lea    -0x1c(%ebp),%edx
081b5df2 +0x195:  mov    %edx,0xc(%esp)
081b5df6 +0x199:  mov    -0x28(%ebp),%edx
081b5df9 +0x19c:  mov    %edx,0x8(%esp)
081b5dfd +0x1a0:  mov    0x8(%ebp),%edx
081b5e00 +0x1a3:  mov    %edx,0x4(%esp)
081b5e04 +0x1a7:  mov    %eax,(%esp)
081b5e07 +0x1aa:  call   081b5f00 <+0x2a3>
081b5e0c +0x1af:  sub    $0x4,%esp
081b5e0f +0x1b2:  mov    -0x2c(%ebp),%eax
081b5e12 +0x1b5:  mov    %eax,-0x28(%ebp)
081b5e15 +0x1b8:  lea    -0x28(%ebp),%eax
081b5e18 +0x1bb:  mov    %eax,(%esp)
081b5e1b +0x1be:  call   081b5d20 <+0xc3>
081b5e20 +0x1c3:  add    $0x4,%eax
081b5e23 +0x1c6:  mov    -0x4(%ebp),%ebx
081b5e26 +0x1c9:  leave
081b5e27 +0x1ca:  ret
081b5e28 +0x1cb:  push   %ebp
081b5e29 +0x1cc:  mov    %esp,%ebp
081b5e2b +0x1ce:  sub    $0x18,%esp
081b5e2e +0x1d1:  mov    0x8(%ebp),%eax
081b5e31 +0x1d4:  mov    %eax,(%esp)
081b5e34 +0x1d7:  call   081b5f46 <+0x2e9>
081b5e39 +0x1dc:  leave
081b5e3a +0x1dd:  ret
081b5e3b +0x1de:  nop
081b5e3c +0x1df:  push   %ebp
081b5e3d +0x1e0:  mov    %esp,%ebp
081b5e3f +0x1e2:  sub    $0x18,%esp
081b5e42 +0x1e5:  mov    0x8(%ebp),%eax
081b5e45 +0x1e8:  mov    %eax,(%esp)
081b5e48 +0x1eb:  call   081b5f96 <+0x339>
081b5e4d +0x1f0:  leave
081b5e4e +0x1f1:  ret
081b5e4f +0x1f2:  nop
081b5e50 +0x1f3:  push   %ebp
081b5e51 +0x1f4:  mov    %esp,%ebp
081b5e53 +0x1f6:  push   %ebx
081b5e54 +0x1f7:  sub    $0x14,%esp
081b5e57 +0x1fa:  mov    0x8(%ebp),%ebx
081b5e5a +0x1fd:  mov    0xc(%ebp),%eax
081b5e5d +0x200:  mov    0xc(%eax),%eax
081b5e60 +0x203:  mov    %eax,0x4(%esp)
081b5e64 +0x207:  mov    %ebx,(%esp)
081b5e67 +0x20a:  call   080d1190 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5fdd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5fdd
081b5e6c +0x20f:  mov    %ebx,%eax
081b5e6e +0x211:  add    $0x14,%esp
081b5e71 +0x214:  pop    %ebx
081b5e72 +0x215:  pop    %ebp
081b5e73 +0x216:  ret    $0x4
081b5e76 +0x219:  push   %ebp
081b5e77 +0x21a:  mov    %esp,%ebp
081b5e79 +0x21c:  push   %ebx
081b5e7a +0x21d:  sub    $0x14,%esp
081b5e7d +0x220:  mov    0x8(%ebp),%ebx
081b5e80 +0x223:  mov    0xc(%ebp),%eax
081b5e83 +0x226:  mov    0x10(%ebp),%edx
081b5e86 +0x229:  mov    %edx,0x8(%esp)
081b5e8a +0x22d:  mov    %eax,0x4(%esp)
081b5e8e +0x231:  mov    %ebx,(%esp)
081b5e91 +0x234:  call   081b5f9c <+0x33f>
081b5e96 +0x239:  sub    $0x4,%esp
081b5e99 +0x23c:  mov    %ebx,%eax
081b5e9b +0x23e:  mov    -0x4(%ebp),%ebx
081b5e9e +0x241:  leave
081b5e9f +0x242:  ret    $0x4
081b5ea2 +0x245:  push   %ebp
081b5ea3 +0x246:  mov    %esp,%ebp
081b5ea5 +0x248:  push   %ebx
081b5ea6 +0x249:  sub    $0x14,%esp
081b5ea9 +0x24c:  mov    0x8(%ebp),%ebx
081b5eac +0x24f:  mov    0xc(%ebp),%eax
081b5eaf +0x252:  mov    %eax,0x4(%esp)
081b5eb3 +0x256:  mov    %ebx,(%esp)
081b5eb6 +0x259:  call   081b5fee <+0x391>
081b5ebb +0x25e:  sub    $0x4,%esp
081b5ebe +0x261:  mov    %ebx,%eax
081b5ec0 +0x263:  mov    -0x4(%ebp),%ebx
081b5ec3 +0x266:  leave
081b5ec4 +0x267:  ret    $0x4
081b5ec7 +0x26a:  nop
081b5ec8 +0x26b:  push   %ebp
081b5ec9 +0x26c:  mov    %esp,%ebp
081b5ecb +0x26e:  sub    $0x18,%esp
081b5ece +0x271:  mov    0xc(%ebp),%eax
081b5ed1 +0x274:  mov    %eax,(%esp)
081b5ed4 +0x277:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
081b5ed9 +0x27c:  mov    (%eax),%edx
081b5edb +0x27e:  mov    0x8(%ebp),%eax
081b5ede +0x281:  mov    %edx,(%eax)
081b5ee0 +0x283:  mov    0x10(%ebp),%eax
081b5ee3 +0x286:  mov    %eax,(%esp)
081b5ee6 +0x289:  call   080dda37 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x580>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x580
081b5eeb +0x28e:  mov    0x8(%ebp),%edx
081b5eee +0x291:  add    $0x4,%edx
081b5ef1 +0x294:  mov    %eax,0x4(%esp)
081b5ef5 +0x298:  mov    %edx,(%esp)
081b5ef8 +0x29b:  call   080ddeec <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa35>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa35
081b5efd +0x2a0:  leave
081b5efe +0x2a1:  ret
081b5eff +0x2a2:  nop
081b5f00 +0x2a3:  push   %ebp
081b5f01 +0x2a4:  mov    %esp,%ebp
081b5f03 +0x2a6:  push   %ebx
081b5f04 +0x2a7:  sub    $0x24,%esp
081b5f07 +0x2aa:  mov    0x8(%ebp),%ebx
081b5f0a +0x2ad:  lea    0x10(%ebp),%eax
081b5f0d +0x2b0:  mov    %eax,0x4(%esp)
081b5f11 +0x2b4:  lea    -0xc(%ebp),%eax
081b5f14 +0x2b7:  mov    %eax,(%esp)
081b5f17 +0x2ba:  call   08111a28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf3a
081b5f1c +0x2bf:  mov    0xc(%ebp),%eax
081b5f1f +0x2c2:  mov    0x14(%ebp),%edx
081b5f22 +0x2c5:  mov    %edx,0xc(%esp)
081b5f26 +0x2c9:  mov    -0xc(%ebp),%edx
081b5f29 +0x2cc:  mov    %edx,0x8(%esp)
081b5f2d +0x2d0:  mov    %eax,0x4(%esp)
081b5f31 +0x2d4:  mov    %ebx,(%esp)
081b5f34 +0x2d7:  call   081b5ff8 <+0x39b>
081b5f39 +0x2dc:  sub    $0x4,%esp
081b5f3c +0x2df:  mov    %ebx,%eax
081b5f3e +0x2e1:  mov    -0x4(%ebp),%ebx
081b5f41 +0x2e4:  leave
081b5f42 +0x2e5:  ret    $0x4
081b5f45 +0x2e8:  nop
081b5f46 +0x2e9:  push   %ebp
081b5f47 +0x2ea:  mov    %esp,%ebp
081b5f49 +0x2ec:  sub    $0x18,%esp
081b5f4c +0x2ef:  mov    0x8(%ebp),%eax
081b5f4f +0x2f2:  mov    %eax,(%esp)
081b5f52 +0x2f5:  call   081b63be <+0x761>
081b5f57 +0x2fa:  mov    0x8(%ebp),%eax
081b5f5a +0x2fd:  movl   $0x0,0x4(%eax)
081b5f61 +0x304:  mov    0x8(%ebp),%eax
081b5f64 +0x307:  movl   $0x0,0x8(%eax)
081b5f6b +0x30e:  mov    0x8(%ebp),%eax
081b5f6e +0x311:  movl   $0x0,0xc(%eax)
081b5f75 +0x318:  mov    0x8(%ebp),%eax
081b5f78 +0x31b:  movl   $0x0,0x10(%eax)
081b5f7f +0x322:  mov    0x8(%ebp),%eax
081b5f82 +0x325:  movl   $0x0,0x14(%eax)
081b5f89 +0x32c:  mov    0x8(%ebp),%eax
081b5f8c +0x32f:  mov    %eax,(%esp)
081b5f8f +0x332:  call   081b63d2 <+0x775>
081b5f94 +0x337:  leave
081b5f95 +0x338:  ret
081b5f96 +0x339:  push   %ebp
081b5f97 +0x33a:  mov    %esp,%ebp
081b5f99 +0x33c:  pop    %ebp
081b5f9a +0x33d:  ret
081b5f9b +0x33e:  nop
081b5f9c +0x33f:  push   %ebp
081b5f9d +0x340:  mov    %esp,%ebp
081b5f9f +0x342:  push   %esi
081b5fa0 +0x343:  push   %ebx
081b5fa1 +0x344:  sub    $0x20,%esp
081b5fa4 +0x347:  mov    0x8(%ebp),%esi
081b5fa7 +0x34a:  mov    0xc(%ebp),%eax
081b5faa +0x34d:  mov    %eax,(%esp)
081b5fad +0x350:  call   080d1252 <_GLOBAL__I__ZN10BingoEventC2Ev+0x609f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x609f
081b5fb2 +0x355:  mov    %eax,%ebx
081b5fb4 +0x357:  mov    0xc(%ebp),%eax
081b5fb7 +0x35a:  mov    %eax,(%esp)
081b5fba +0x35d:  call   080ced26 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3b73>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3b73
081b5fbf +0x362:  mov    0x10(%ebp),%edx
081b5fc2 +0x365:  mov    %edx,0x10(%esp)
081b5fc6 +0x369:  mov    %ebx,0xc(%esp)
081b5fca +0x36d:  mov    %eax,0x8(%esp)
081b5fce +0x371:  mov    0xc(%ebp),%eax
081b5fd1 +0x374:  mov    %eax,0x4(%esp)
081b5fd5 +0x378:  mov    %esi,(%esp)
081b5fd8 +0x37b:  call   080d2402 <_GLOBAL__I__ZN10BingoEventC2Ev+0x724f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x724f
081b5fdd +0x380:  sub    $0x4,%esp
081b5fe0 +0x383:  mov    %esi,%eax
081b5fe2 +0x385:  lea    -0x8(%ebp),%esp
081b5fe5 +0x388:  add    $0x0,%esp
081b5fe8 +0x38b:  pop    %ebx
081b5fe9 +0x38c:  pop    %esi
081b5fea +0x38d:  pop    %ebp
081b5feb +0x38e:  ret    $0x4
081b5fee +0x391:  push   %ebp
081b5fef +0x392:  mov    %esp,%ebp
081b5ff1 +0x394:  mov    0x8(%ebp),%eax
081b5ff4 +0x397:  pop    %ebp
081b5ff5 +0x398:  ret    $0x4
081b5ff8 +0x39b:  push   %ebp
081b5ff9 +0x39c:  mov    %esp,%ebp
081b5ffb +0x39e:  push   %esi
081b5ffc +0x39f:  push   %ebx
081b5ffd +0x3a0:  sub    $0x50,%esp
081b6000 +0x3a3:  mov    0x8(%ebp),%ebx
081b6003 +0x3a6:  mov    0x10(%ebp),%esi
081b6006 +0x3a9:  mov    0xc(%ebp),%eax
081b6009 +0x3ac:  mov    %eax,(%esp)
081b600c +0x3af:  call   080d1252 <_GLOBAL__I__ZN10BingoEventC2Ev+0x609f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x609f
081b6011 +0x3b4:  cmp    %eax,%esi
081b6013 +0x3b6:  sete   %al
081b6016 +0x3b9:  test   %al,%al
081b6018 +0x3bb:  je     081b60da <+0x47d>
081b601e +0x3c1:  mov    0xc(%ebp),%eax
081b6021 +0x3c4:  mov    %eax,(%esp)
081b6024 +0x3c7:  call   08112dc4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x22d6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x22d6
081b6029 +0x3cc:  test   %eax,%eax
081b602b +0x3ce:  je     081b6074 <+0x417>
081b602d +0x3d0:  mov    0x14(%ebp),%eax
081b6030 +0x3d3:  mov    %eax,0x4(%esp)
081b6034 +0x3d7:  lea    -0x29(%ebp),%eax
081b6037 +0x3da:  mov    %eax,(%esp)
081b603a +0x3dd:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b603f +0x3e2:  mov    %eax,%esi
081b6041 +0x3e4:  mov    0xc(%ebp),%eax
081b6044 +0x3e7:  mov    %eax,(%esp)
081b6047 +0x3ea:  call   080ec226 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x21d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x21d
081b604c +0x3ef:  mov    (%eax),%eax
081b604e +0x3f1:  mov    %eax,(%esp)
081b6051 +0x3f4:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b6056 +0x3f9:  mov    0xc(%ebp),%edx
081b6059 +0x3fc:  mov    %esi,0x8(%esp)
081b605d +0x400:  mov    %eax,0x4(%esp)
081b6061 +0x404:  mov    %edx,(%esp)
081b6064 +0x407:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b6069 +0x40c:  test   %al,%al
081b606b +0x40e:  je     081b6074 <+0x417>
081b606d +0x410:  mov    $0x1,%eax
081b6072 +0x415:  jmp    081b6079 <+0x41c>
081b6074 +0x417:  mov    $0x0,%eax
081b6079 +0x41c:  test   %al,%al
081b607b +0x41e:  je     081b60b4 <+0x457>
081b607d +0x420:  mov    0xc(%ebp),%eax
081b6080 +0x423:  mov    %eax,(%esp)
081b6083 +0x426:  call   080ec226 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x21d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x21d
081b6088 +0x42b:  mov    (%eax),%eax
081b608a +0x42d:  mov    0x14(%ebp),%edx
081b608d +0x430:  mov    %edx,0x10(%esp)
081b6091 +0x434:  mov    %eax,0xc(%esp)
081b6095 +0x438:  movl   $0x0,0x8(%esp)
081b609d +0x440:  mov    0xc(%ebp),%eax
081b60a0 +0x443:  mov    %eax,0x4(%esp)
081b60a4 +0x447:  mov    %ebx,(%esp)
081b60a7 +0x44a:  call   081b6404 <+0x7a7>
081b60ac +0x44f:  sub    $0x4,%esp
081b60af +0x452:  jmp    081b63af <+0x752>
081b60b4 +0x457:  lea    -0x28(%ebp),%eax
081b60b7 +0x45a:  mov    0x14(%ebp),%edx
081b60ba +0x45d:  mov    %edx,0x8(%esp)
081b60be +0x461:  mov    0xc(%ebp),%edx
081b60c1 +0x464:  mov    %edx,0x4(%esp)
081b60c5 +0x468:  mov    %eax,(%esp)
081b60c8 +0x46b:  call   081b64cc <+0x86f>
081b60cd +0x470:  sub    $0x4,%esp
081b60d0 +0x473:  mov    -0x28(%ebp),%eax
081b60d3 +0x476:  mov    %eax,(%ebx)
081b60d5 +0x478:  jmp    081b63af <+0x752>
081b60da +0x47d:  mov    0x10(%ebp),%eax
081b60dd +0x480:  mov    %eax,(%esp)
081b60e0 +0x483:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b60e5 +0x488:  mov    %eax,%esi
081b60e7 +0x48a:  mov    0x14(%ebp),%eax
081b60ea +0x48d:  mov    %eax,0x4(%esp)
081b60ee +0x491:  lea    -0x1e(%ebp),%eax
081b60f1 +0x494:  mov    %eax,(%esp)
081b60f4 +0x497:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b60f9 +0x49c:  mov    0xc(%ebp),%edx
081b60fc +0x49f:  mov    %esi,0x8(%esp)
081b6100 +0x4a3:  mov    %eax,0x4(%esp)
081b6104 +0x4a7:  mov    %edx,(%esp)
081b6107 +0x4aa:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b610c +0x4af:  test   %al,%al
081b610e +0x4b1:  je     081b6246 <+0x5e9>
081b6114 +0x4b7:  mov    0x10(%ebp),%eax
081b6117 +0x4ba:  mov    %eax,-0x30(%ebp)
081b611a +0x4bd:  mov    0x10(%ebp),%esi
081b611d +0x4c0:  mov    0xc(%ebp),%eax
081b6120 +0x4c3:  mov    %eax,(%esp)
081b6123 +0x4c6:  call   080ec20e <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x205>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x205
081b6128 +0x4cb:  mov    (%eax),%eax
081b612a +0x4cd:  cmp    %eax,%esi
081b612c +0x4cf:  sete   %al
081b612f +0x4d2:  test   %al,%al
081b6131 +0x4d4:  je     081b6173 <+0x516>
081b6133 +0x4d6:  mov    0xc(%ebp),%eax
081b6136 +0x4d9:  mov    %eax,(%esp)
081b6139 +0x4dc:  call   080ec20e <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x205>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x205
081b613e +0x4e1:  mov    (%eax),%esi
081b6140 +0x4e3:  mov    0xc(%ebp),%eax
081b6143 +0x4e6:  mov    %eax,(%esp)
081b6146 +0x4e9:  call   080ec20e <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x205>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x205
081b614b +0x4ee:  mov    (%eax),%eax
081b614d +0x4f0:  mov    0x14(%ebp),%edx
081b6150 +0x4f3:  mov    %edx,0x10(%esp)
081b6154 +0x4f7:  mov    %esi,0xc(%esp)
081b6158 +0x4fb:  mov    %eax,0x8(%esp)
081b615c +0x4ff:  mov    0xc(%ebp),%eax
081b615f +0x502:  mov    %eax,0x4(%esp)
081b6163 +0x506:  mov    %ebx,(%esp)
081b6166 +0x509:  call   081b6404 <+0x7a7>
081b616b +0x50e:  sub    $0x4,%esp
081b616e +0x511:  jmp    081b63af <+0x752>
081b6173 +0x516:  mov    0x14(%ebp),%eax
081b6176 +0x519:  mov    %eax,0x4(%esp)
081b617a +0x51d:  lea    -0x1d(%ebp),%eax
081b617d +0x520:  mov    %eax,(%esp)
081b6180 +0x523:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b6185 +0x528:  mov    %eax,%esi
081b6187 +0x52a:  lea    -0x30(%ebp),%eax
081b618a +0x52d:  mov    %eax,(%esp)
081b618d +0x530:  call   081b669c <+0xa3f>
081b6192 +0x535:  mov    (%eax),%eax
081b6194 +0x537:  mov    %eax,(%esp)
081b6197 +0x53a:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b619c +0x53f:  mov    0xc(%ebp),%edx
081b619f +0x542:  mov    %esi,0x8(%esp)
081b61a3 +0x546:  mov    %eax,0x4(%esp)
081b61a7 +0x54a:  mov    %edx,(%esp)
081b61aa +0x54d:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b61af +0x552:  test   %al,%al
081b61b1 +0x554:  je     081b6220 <+0x5c3>
081b61b3 +0x556:  mov    -0x30(%ebp),%eax
081b61b6 +0x559:  mov    %eax,(%esp)
081b61b9 +0x55c:  call   08114597 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3aa9>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3aa9
081b61be +0x561:  test   %eax,%eax
081b61c0 +0x563:  sete   %al
081b61c3 +0x566:  test   %al,%al
081b61c5 +0x568:  je     081b61f4 <+0x597>
081b61c7 +0x56a:  mov    -0x30(%ebp),%eax
081b61ca +0x56d:  mov    0x14(%ebp),%edx
081b61cd +0x570:  mov    %edx,0x10(%esp)
081b61d1 +0x574:  mov    %eax,0xc(%esp)
081b61d5 +0x578:  movl   $0x0,0x8(%esp)
081b61dd +0x580:  mov    0xc(%ebp),%eax
081b61e0 +0x583:  mov    %eax,0x4(%esp)
081b61e4 +0x587:  mov    %ebx,(%esp)
081b61e7 +0x58a:  call   081b6404 <+0x7a7>
081b61ec +0x58f:  sub    $0x4,%esp
081b61ef +0x592:  jmp    081b63af <+0x752>
081b61f4 +0x597:  mov    0x10(%ebp),%edx
081b61f7 +0x59a:  mov    0x10(%ebp),%eax
081b61fa +0x59d:  mov    0x14(%ebp),%ecx
081b61fd +0x5a0:  mov    %ecx,0x10(%esp)
081b6201 +0x5a4:  mov    %edx,0xc(%esp)
081b6205 +0x5a8:  mov    %eax,0x8(%esp)
081b6209 +0x5ac:  mov    0xc(%ebp),%eax
081b620c +0x5af:  mov    %eax,0x4(%esp)
081b6210 +0x5b3:  mov    %ebx,(%esp)
081b6213 +0x5b6:  call   081b6404 <+0x7a7>
081b6218 +0x5bb:  sub    $0x4,%esp
081b621b +0x5be:  jmp    081b63af <+0x752>
081b6220 +0x5c3:  lea    -0x1c(%ebp),%eax
081b6223 +0x5c6:  mov    0x14(%ebp),%edx
081b6226 +0x5c9:  mov    %edx,0x8(%esp)
081b622a +0x5cd:  mov    0xc(%ebp),%edx
081b622d +0x5d0:  mov    %edx,0x4(%esp)
081b6231 +0x5d4:  mov    %eax,(%esp)
081b6234 +0x5d7:  call   081b64cc <+0x86f>
081b6239 +0x5dc:  sub    $0x4,%esp
081b623c +0x5df:  mov    -0x1c(%ebp),%eax
081b623f +0x5e2:  mov    %eax,(%ebx)
081b6241 +0x5e4:  jmp    081b63af <+0x752>
081b6246 +0x5e9:  mov    0x14(%ebp),%eax
081b6249 +0x5ec:  mov    %eax,0x4(%esp)
081b624d +0x5f0:  lea    -0x12(%ebp),%eax
081b6250 +0x5f3:  mov    %eax,(%esp)
081b6253 +0x5f6:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b6258 +0x5fb:  mov    %eax,%esi
081b625a +0x5fd:  mov    0x10(%ebp),%eax
081b625d +0x600:  mov    %eax,(%esp)
081b6260 +0x603:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b6265 +0x608:  mov    0xc(%ebp),%edx
081b6268 +0x60b:  mov    %esi,0x8(%esp)
081b626c +0x60f:  mov    %eax,0x4(%esp)
081b6270 +0x613:  mov    %edx,(%esp)
081b6273 +0x616:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b6278 +0x61b:  test   %al,%al
081b627a +0x61d:  je     081b63a0 <+0x743>
081b6280 +0x623:  mov    0x10(%ebp),%eax
081b6283 +0x626:  mov    %eax,-0x34(%ebp)
081b6286 +0x629:  mov    0x10(%ebp),%esi
081b6289 +0x62c:  mov    0xc(%ebp),%eax
081b628c +0x62f:  mov    %eax,(%esp)
081b628f +0x632:  call   080ec226 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x21d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x21d
081b6294 +0x637:  mov    (%eax),%eax
081b6296 +0x639:  cmp    %eax,%esi
081b6298 +0x63b:  sete   %al
081b629b +0x63e:  test   %al,%al
081b629d +0x640:  je     081b62d6 <+0x679>
081b629f +0x642:  mov    0xc(%ebp),%eax
081b62a2 +0x645:  mov    %eax,(%esp)
081b62a5 +0x648:  call   080ec226 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x21d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x21d
081b62aa +0x64d:  mov    (%eax),%eax
081b62ac +0x64f:  mov    0x14(%ebp),%edx
081b62af +0x652:  mov    %edx,0x10(%esp)
081b62b3 +0x656:  mov    %eax,0xc(%esp)
081b62b7 +0x65a:  movl   $0x0,0x8(%esp)
081b62bf +0x662:  mov    0xc(%ebp),%eax
081b62c2 +0x665:  mov    %eax,0x4(%esp)
081b62c6 +0x669:  mov    %ebx,(%esp)
081b62c9 +0x66c:  call   081b6404 <+0x7a7>
081b62ce +0x671:  sub    $0x4,%esp
081b62d1 +0x674:  jmp    081b63af <+0x752>
081b62d6 +0x679:  lea    -0x34(%ebp),%eax
081b62d9 +0x67c:  mov    %eax,(%esp)
081b62dc +0x67f:  call   08111a0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf1c
081b62e1 +0x684:  mov    (%eax),%eax
081b62e3 +0x686:  mov    %eax,(%esp)
081b62e6 +0x689:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b62eb +0x68e:  mov    %eax,%esi
081b62ed +0x690:  mov    0x14(%ebp),%eax
081b62f0 +0x693:  mov    %eax,0x4(%esp)
081b62f4 +0x697:  lea    -0x11(%ebp),%eax
081b62f7 +0x69a:  mov    %eax,(%esp)
081b62fa +0x69d:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b62ff +0x6a2:  mov    0xc(%ebp),%edx
081b6302 +0x6a5:  mov    %esi,0x8(%esp)
081b6306 +0x6a9:  mov    %eax,0x4(%esp)
081b630a +0x6ad:  mov    %edx,(%esp)
081b630d +0x6b0:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b6312 +0x6b5:  test   %al,%al
081b6314 +0x6b7:  je     081b637d <+0x720>
081b6316 +0x6b9:  mov    0x10(%ebp),%eax
081b6319 +0x6bc:  mov    %eax,(%esp)
081b631c +0x6bf:  call   08114597 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3aa9>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3aa9
081b6321 +0x6c4:  test   %eax,%eax
081b6323 +0x6c6:  sete   %al
081b6326 +0x6c9:  test   %al,%al
081b6328 +0x6cb:  je     081b6354 <+0x6f7>
081b632a +0x6cd:  mov    0x10(%ebp),%eax
081b632d +0x6d0:  mov    0x14(%ebp),%edx
081b6330 +0x6d3:  mov    %edx,0x10(%esp)
081b6334 +0x6d7:  mov    %eax,0xc(%esp)
081b6338 +0x6db:  movl   $0x0,0x8(%esp)
081b6340 +0x6e3:  mov    0xc(%ebp),%eax
081b6343 +0x6e6:  mov    %eax,0x4(%esp)
081b6347 +0x6ea:  mov    %ebx,(%esp)
081b634a +0x6ed:  call   081b6404 <+0x7a7>
081b634f +0x6f2:  sub    $0x4,%esp
081b6352 +0x6f5:  jmp    081b63af <+0x752>
081b6354 +0x6f7:  mov    -0x34(%ebp),%edx
081b6357 +0x6fa:  mov    -0x34(%ebp),%eax
081b635a +0x6fd:  mov    0x14(%ebp),%ecx
081b635d +0x700:  mov    %ecx,0x10(%esp)
081b6361 +0x704:  mov    %edx,0xc(%esp)
081b6365 +0x708:  mov    %eax,0x8(%esp)
081b6369 +0x70c:  mov    0xc(%ebp),%eax
081b636c +0x70f:  mov    %eax,0x4(%esp)
081b6370 +0x713:  mov    %ebx,(%esp)
081b6373 +0x716:  call   081b6404 <+0x7a7>
081b6378 +0x71b:  sub    $0x4,%esp
081b637b +0x71e:  jmp    081b63af <+0x752>
081b637d +0x720:  lea    -0x10(%ebp),%eax
081b6380 +0x723:  mov    0x14(%ebp),%edx
081b6383 +0x726:  mov    %edx,0x8(%esp)
081b6387 +0x72a:  mov    0xc(%ebp),%edx
081b638a +0x72d:  mov    %edx,0x4(%esp)
081b638e +0x731:  mov    %eax,(%esp)
081b6391 +0x734:  call   081b64cc <+0x86f>
081b6396 +0x739:  sub    $0x4,%esp
081b6399 +0x73c:  mov    -0x10(%ebp),%eax
081b639c +0x73f:  mov    %eax,(%ebx)
081b639e +0x741:  jmp    081b63af <+0x752>
081b63a0 +0x743:  mov    0x10(%ebp),%eax
081b63a3 +0x746:  mov    %eax,0x4(%esp)
081b63a7 +0x74a:  mov    %ebx,(%esp)
081b63aa +0x74d:  call   080d1190 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5fdd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5fdd
081b63af +0x752:  mov    %ebx,%eax
081b63b1 +0x754:  lea    -0x8(%ebp),%esp
081b63b4 +0x757:  add    $0x0,%esp
081b63b7 +0x75a:  pop    %ebx
081b63b8 +0x75b:  pop    %esi
081b63b9 +0x75c:  pop    %ebp
081b63ba +0x75d:  ret    $0x4
081b63bd +0x760:  nop
081b63be +0x761:  push   %ebp
081b63bf +0x762:  mov    %esp,%ebp
081b63c1 +0x764:  sub    $0x18,%esp
081b63c4 +0x767:  mov    0x8(%ebp),%eax
081b63c7 +0x76a:  mov    %eax,(%esp)
081b63ca +0x76d:  call   081b66ba <+0xa5d>
081b63cf +0x772:  leave
081b63d0 +0x773:  ret
081b63d1 +0x774:  nop
081b63d2 +0x775:  push   %ebp
081b63d3 +0x776:  mov    %esp,%ebp
081b63d5 +0x778:  mov    0x8(%ebp),%eax
081b63d8 +0x77b:  movl   $0x0,0x4(%eax)
081b63df +0x782:  mov    0x8(%ebp),%eax
081b63e2 +0x785:  movl   $0x0,0x8(%eax)
081b63e9 +0x78c:  mov    0x8(%ebp),%eax
081b63ec +0x78f:  lea    0x4(%eax),%edx
081b63ef +0x792:  mov    0x8(%ebp),%eax
081b63f2 +0x795:  mov    %edx,0xc(%eax)
081b63f5 +0x798:  mov    0x8(%ebp),%eax
081b63f8 +0x79b:  lea    0x4(%eax),%edx
081b63fb +0x79e:  mov    0x8(%ebp),%eax
081b63fe +0x7a1:  mov    %edx,0x10(%eax)
081b6401 +0x7a4:  pop    %ebp
081b6402 +0x7a5:  ret
081b6403 +0x7a6:  nop
081b6404 +0x7a7:  push   %ebp
081b6405 +0x7a8:  mov    %esp,%ebp
081b6407 +0x7aa:  push   %esi
081b6408 +0x7ab:  push   %ebx
081b6409 +0x7ac:  sub    $0x20,%esp
081b640c +0x7af:  mov    0x8(%ebp),%esi
081b640f +0x7b2:  cmpl   $0x0,0x10(%ebp)
081b6413 +0x7b6:  jne    081b645b <+0x7fe>
081b6415 +0x7b8:  mov    0xc(%ebp),%eax
081b6418 +0x7bb:  mov    %eax,(%esp)
081b641b +0x7be:  call   080d1252 <_GLOBAL__I__ZN10BingoEventC2Ev+0x609f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x609f
081b6420 +0x7c3:  cmp    0x14(%ebp),%eax
081b6423 +0x7c6:  je     081b645b <+0x7fe>
081b6425 +0x7c8:  mov    0x14(%ebp),%eax
081b6428 +0x7cb:  mov    %eax,(%esp)
081b642b +0x7ce:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b6430 +0x7d3:  mov    %eax,%ebx
081b6432 +0x7d5:  mov    0x18(%ebp),%eax
081b6435 +0x7d8:  mov    %eax,0x4(%esp)
081b6439 +0x7dc:  lea    -0xe(%ebp),%eax
081b643c +0x7df:  mov    %eax,(%esp)
081b643f +0x7e2:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b6444 +0x7e7:  mov    0xc(%ebp),%edx
081b6447 +0x7ea:  mov    %ebx,0x8(%esp)
081b644b +0x7ee:  mov    %eax,0x4(%esp)
081b644f +0x7f2:  mov    %edx,(%esp)
081b6452 +0x7f5:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b6457 +0x7fa:  test   %al,%al
081b6459 +0x7fc:  je     081b6462 <+0x805>
081b645b +0x7fe:  mov    $0x1,%eax
081b6460 +0x803:  jmp    081b6467 <+0x80a>
081b6462 +0x805:  mov    $0x0,%eax
081b6467 +0x80a:  mov    %al,-0xd(%ebp)
081b646a +0x80d:  mov    0x18(%ebp),%eax
081b646d +0x810:  mov    %eax,0x4(%esp)
081b6471 +0x814:  mov    0xc(%ebp),%eax
081b6474 +0x817:  mov    %eax,(%esp)
081b6477 +0x81a:  call   081b66c0 <+0xa63>
081b647c +0x81f:  mov    %eax,-0xc(%ebp)
081b647f +0x822:  mov    0xc(%ebp),%eax
081b6482 +0x825:  lea    0x4(%eax),%ecx
081b6485 +0x828:  mov    -0xc(%ebp),%edx
081b6488 +0x82b:  movzbl -0xd(%ebp),%eax
081b648c +0x82f:  mov    %ecx,0xc(%esp)
081b6490 +0x833:  mov    0x14(%ebp),%ecx
081b6493 +0x836:  mov    %ecx,0x8(%esp)
081b6497 +0x83a:  mov    %edx,0x4(%esp)
081b649b +0x83e:  mov    %eax,(%esp)
081b649e +0x841:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081b64a3 +0x846:  mov    0xc(%ebp),%eax
081b64a6 +0x849:  mov    0x14(%eax),%eax
081b64a9 +0x84c:  lea    0x1(%eax),%edx
081b64ac +0x84f:  mov    0xc(%ebp),%eax
081b64af +0x852:  mov    %edx,0x14(%eax)
081b64b2 +0x855:  mov    -0xc(%ebp),%eax
081b64b5 +0x858:  mov    %eax,0x4(%esp)
081b64b9 +0x85c:  mov    %esi,(%esp)
081b64bc +0x85f:  call   080d1190 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5fdd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5fdd
081b64c1 +0x864:  mov    %esi,%eax
081b64c3 +0x866:  add    $0x20,%esp
081b64c6 +0x869:  pop    %ebx
081b64c7 +0x86a:  pop    %esi
081b64c8 +0x86b:  pop    %ebp
081b64c9 +0x86c:  ret    $0x4
081b64cc +0x86f:  push   %ebp
081b64cd +0x870:  mov    %esp,%ebp
081b64cf +0x872:  push   %esi
081b64d0 +0x873:  push   %ebx
081b64d1 +0x874:  sub    $0x50,%esp
081b64d4 +0x877:  mov    0x8(%ebp),%ebx
081b64d7 +0x87a:  mov    0xc(%ebp),%eax
081b64da +0x87d:  mov    %eax,(%esp)
081b64dd +0x880:  call   080ced26 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3b73>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3b73
081b64e2 +0x885:  mov    %eax,-0x14(%ebp)
081b64e5 +0x888:  mov    0xc(%ebp),%eax
081b64e8 +0x88b:  mov    %eax,(%esp)
081b64eb +0x88e:  call   080d1252 <_GLOBAL__I__ZN10BingoEventC2Ev+0x609f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x609f
081b64f0 +0x893:  mov    %eax,-0x10(%ebp)
081b64f3 +0x896:  movb   $0x1,-0x9(%ebp)
081b64f7 +0x89a:  jmp    081b6555 <+0x8f8>
081b64f9 +0x89c:  mov    -0x14(%ebp),%eax
081b64fc +0x89f:  mov    %eax,-0x10(%ebp)
081b64ff +0x8a2:  mov    -0x14(%ebp),%eax
081b6502 +0x8a5:  mov    %eax,(%esp)
081b6505 +0x8a8:  call   080d3aff <_GLOBAL__I__ZN10BingoEventC2Ev+0x894c>  ; global constructors keyed to BingoEvent::BingoEvent()+0x894c
081b650a +0x8ad:  mov    %eax,%esi
081b650c +0x8af:  mov    0x10(%ebp),%eax
081b650f +0x8b2:  mov    %eax,0x4(%esp)
081b6513 +0x8b6:  lea    -0x2d(%ebp),%eax
081b6516 +0x8b9:  mov    %eax,(%esp)
081b6519 +0x8bc:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b651e +0x8c1:  mov    0xc(%ebp),%edx
081b6521 +0x8c4:  mov    %esi,0x8(%esp)
081b6525 +0x8c8:  mov    %eax,0x4(%esp)
081b6529 +0x8cc:  mov    %edx,(%esp)
081b652c +0x8cf:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b6531 +0x8d4:  mov    %al,-0x9(%ebp)
081b6534 +0x8d7:  cmpb   $0x0,-0x9(%ebp)
081b6538 +0x8db:  je     081b6547 <+0x8ea>
081b653a +0x8dd:  mov    -0x14(%ebp),%eax
081b653d +0x8e0:  mov    %eax,(%esp)
081b6540 +0x8e3:  call   080d11a8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5ff5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5ff5
081b6545 +0x8e8:  jmp    081b6552 <+0x8f5>
081b6547 +0x8ea:  mov    -0x14(%ebp),%eax
081b654a +0x8ed:  mov    %eax,(%esp)
081b654d +0x8f0:  call   080d119d <_GLOBAL__I__ZN10BingoEventC2Ev+0x5fea>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5fea
081b6552 +0x8f5:  mov    %eax,-0x14(%ebp)
081b6555 +0x8f8:  cmpl   $0x0,-0x14(%ebp)
081b6559 +0x8fc:  setne  %al
081b655c +0x8ff:  test   %al,%al
081b655e +0x901:  jne    081b64f9 <+0x89c>
081b6560 +0x903:  mov    -0x10(%ebp),%eax
081b6563 +0x906:  mov    %eax,0x4(%esp)
081b6567 +0x90a:  lea    -0x34(%ebp),%eax
081b656a +0x90d:  mov    %eax,(%esp)
081b656d +0x910:  call   080d1190 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5fdd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5fdd
081b6572 +0x915:  cmpb   $0x0,-0x9(%ebp)
081b6576 +0x919:  je     081b65f7 <+0x99a>
081b6578 +0x91b:  lea    -0x2c(%ebp),%eax
081b657b +0x91e:  mov    0xc(%ebp),%edx
081b657e +0x921:  mov    %edx,0x4(%esp)
081b6582 +0x925:  mov    %eax,(%esp)
081b6585 +0x928:  call   081b5e50 <+0x1f3>
081b658a +0x92d:  sub    $0x4,%esp
081b658d +0x930:  lea    -0x2c(%ebp),%eax
081b6590 +0x933:  mov    %eax,0x4(%esp)
081b6594 +0x937:  lea    -0x34(%ebp),%eax
081b6597 +0x93a:  mov    %eax,(%esp)
081b659a +0x93d:  call   080ce8c6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3713>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3713
081b659f +0x942:  test   %al,%al
081b65a1 +0x944:  je     081b65ec <+0x98f>
081b65a3 +0x946:  movb   $0x1,-0x25(%ebp)
081b65a7 +0x94a:  mov    -0x10(%ebp),%ecx
081b65aa +0x94d:  mov    -0x14(%ebp),%edx
081b65ad +0x950:  lea    -0x24(%ebp),%eax
081b65b0 +0x953:  mov    0x10(%ebp),%esi
081b65b3 +0x956:  mov    %esi,0x10(%esp)
081b65b7 +0x95a:  mov    %ecx,0xc(%esp)
081b65bb +0x95e:  mov    %edx,0x8(%esp)
081b65bf +0x962:  mov    0xc(%ebp),%edx
081b65c2 +0x965:  mov    %edx,0x4(%esp)
081b65c6 +0x969:  mov    %eax,(%esp)
081b65c9 +0x96c:  call   081b6404 <+0x7a7>
081b65ce +0x971:  sub    $0x4,%esp
081b65d1 +0x974:  lea    -0x25(%ebp),%eax
081b65d4 +0x977:  mov    %eax,0x8(%esp)
081b65d8 +0x97b:  lea    -0x24(%ebp),%eax
081b65db +0x97e:  mov    %eax,0x4(%esp)
081b65df +0x982:  mov    %ebx,(%esp)
081b65e2 +0x985:  call   081b6742 <+0xae5>
081b65e7 +0x98a:  jmp    081b668d <+0xa30>
081b65ec +0x98f:  lea    -0x34(%ebp),%eax
081b65ef +0x992:  mov    %eax,(%esp)
081b65f2 +0x995:  call   081b6770 <+0xb13>
081b65f7 +0x99a:  mov    0x10(%ebp),%eax
081b65fa +0x99d:  mov    %eax,0x4(%esp)
081b65fe +0x9a1:  lea    -0x1e(%ebp),%eax
081b6601 +0x9a4:  mov    %eax,(%esp)
081b6604 +0x9a7:  call   080d3b2c <_GLOBAL__I__ZN10BingoEventC2Ev+0x8979>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8979
081b6609 +0x9ac:  mov    %eax,%esi
081b660b +0x9ae:  mov    -0x34(%ebp),%eax
081b660e +0x9b1:  mov    %eax,(%esp)
081b6611 +0x9b4:  call   080d247e <_GLOBAL__I__ZN10BingoEventC2Ev+0x72cb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x72cb
081b6616 +0x9b9:  mov    0xc(%ebp),%edx
081b6619 +0x9bc:  mov    %esi,0x8(%esp)
081b661d +0x9c0:  mov    %eax,0x4(%esp)
081b6621 +0x9c4:  mov    %edx,(%esp)
081b6624 +0x9c7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b6629 +0x9cc:  test   %al,%al
081b662b +0x9ce:  je     081b6673 <+0xa16>
081b662d +0x9d0:  movb   $0x1,-0x1d(%ebp)
081b6631 +0x9d4:  mov    -0x10(%ebp),%ecx
081b6634 +0x9d7:  mov    -0x14(%ebp),%edx
081b6637 +0x9da:  lea    -0x1c(%ebp),%eax
081b663a +0x9dd:  mov    0x10(%ebp),%esi
081b663d +0x9e0:  mov    %esi,0x10(%esp)
081b6641 +0x9e4:  mov    %ecx,0xc(%esp)
081b6645 +0x9e8:  mov    %edx,0x8(%esp)
081b6649 +0x9ec:  mov    0xc(%ebp),%edx
081b664c +0x9ef:  mov    %edx,0x4(%esp)
081b6650 +0x9f3:  mov    %eax,(%esp)
081b6653 +0x9f6:  call   081b6404 <+0x7a7>
081b6658 +0x9fb:  sub    $0x4,%esp
081b665b +0x9fe:  lea    -0x1d(%ebp),%eax
081b665e +0xa01:  mov    %eax,0x8(%esp)
081b6662 +0xa05:  lea    -0x1c(%ebp),%eax
081b6665 +0xa08:  mov    %eax,0x4(%esp)
081b6669 +0xa0c:  mov    %ebx,(%esp)
081b666c +0xa0f:  call   081b6742 <+0xae5>
081b6671 +0xa14:  jmp    081b668d <+0xa30>
081b6673 +0xa16:  movb   $0x0,-0x15(%ebp)
081b6677 +0xa1a:  lea    -0x15(%ebp),%eax
081b667a +0xa1d:  mov    %eax,0x8(%esp)
081b667e +0xa21:  lea    -0x34(%ebp),%eax
081b6681 +0xa24:  mov    %eax,0x4(%esp)
081b6685 +0xa28:  mov    %ebx,(%esp)
081b6688 +0xa2b:  call   081b678e <+0xb31>
081b668d +0xa30:  mov    %ebx,%eax
081b668f +0xa32:  lea    -0x8(%ebp),%esp
081b6692 +0xa35:  add    $0x0,%esp
081b6695 +0xa38:  pop    %ebx
081b6696 +0xa39:  pop    %esi
081b6697 +0xa3a:  pop    %ebp
081b6698 +0xa3b:  ret    $0x4
081b669b +0xa3e:  nop
081b669c +0xa3f:  push   %ebp
081b669d +0xa40:  mov    %esp,%ebp
081b669f +0xa42:  sub    $0x18,%esp
081b66a2 +0xa45:  mov    0x8(%ebp),%eax
081b66a5 +0xa48:  mov    (%eax),%eax
081b66a7 +0xa4a:  mov    %eax,(%esp)
081b66aa +0xa4d:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
081b66af +0xa52:  mov    0x8(%ebp),%edx
081b66b2 +0xa55:  mov    %eax,(%edx)
081b66b4 +0xa57:  mov    0x8(%ebp),%eax
081b66b7 +0xa5a:  leave
081b66b8 +0xa5b:  ret
081b66b9 +0xa5c:  nop
081b66ba +0xa5d:  push   %ebp
081b66bb +0xa5e:  mov    %esp,%ebp
081b66bd +0xa60:  pop    %ebp
081b66be +0xa61:  ret
081b66bf +0xa62:  nop
081b66c0 +0xa63:  push   %ebp
081b66c1 +0xa64:  mov    %esp,%ebp
081b66c3 +0xa66:  push   %esi
081b66c4 +0xa67:  push   %ebx
081b66c5 +0xa68:  sub    $0x20,%esp
081b66c8 +0xa6b:  mov    0x8(%ebp),%eax
081b66cb +0xa6e:  mov    %eax,(%esp)
081b66ce +0xa71:  call   081b67bc <+0xb5f>
081b66d3 +0xa76:  mov    %eax,-0xc(%ebp)
081b66d6 +0xa79:  mov    0xc(%ebp),%eax
081b66d9 +0xa7c:  mov    %eax,(%esp)
081b66dc +0xa7f:  call   081b67df <+0xb82>
081b66e1 +0xa84:  mov    %eax,%ebx
081b66e3 +0xa86:  mov    0x8(%ebp),%eax
081b66e6 +0xa89:  mov    %eax,(%esp)
081b66e9 +0xa8c:  call   080ec232 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x229>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x229
081b66ee +0xa91:  mov    %ebx,0x8(%esp)
081b66f2 +0xa95:  mov    -0xc(%ebp),%edx
081b66f5 +0xa98:  mov    %edx,0x4(%esp)
081b66f9 +0xa9c:  mov    %eax,(%esp)
081b66fc +0xa9f:  call   081b67e8 <+0xb8b>
081b6701 +0xaa4:  jmp    081b6737 <+0xada>
081b6703 +0xaa6:  mov    %eax,(%esp)
081b6706 +0xaa9:  call   08725ce0 <__cxa_begin_catch>
081b670b +0xaae:  mov    -0xc(%ebp),%eax
081b670e +0xab1:  mov    %eax,0x4(%esp)
081b6712 +0xab5:  mov    0x8(%ebp),%eax
081b6715 +0xab8:  mov    %eax,(%esp)
081b6718 +0xabb:  call   080ec254 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x24b>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x24b
081b671d +0xac0:  call   08724be0 <__cxa_rethrow>
081b6722 +0xac5:  mov    %edx,%ebx
081b6724 +0xac7:  mov    %eax,%esi
081b6726 +0xac9:  call   08725c30 <__cxa_end_catch>
081b672b +0xace:  mov    %esi,%eax
081b672d +0xad0:  mov    %ebx,%edx
081b672f +0xad2:  mov    %eax,(%esp)
081b6732 +0xad5:  call   08ae3750 <_Unwind_Resume>
081b6737 +0xada:  mov    -0xc(%ebp),%eax
081b673a +0xadd:  add    $0x20,%esp
081b673d +0xae0:  pop    %ebx
081b673e +0xae1:  pop    %esi
081b673f +0xae2:  pop    %ebp
081b6740 +0xae3:  ret
081b6741 +0xae4:  nop
081b6742 +0xae5:  push   %ebp
081b6743 +0xae6:  mov    %esp,%ebp
081b6745 +0xae8:  sub    $0x18,%esp
081b6748 +0xaeb:  mov    0xc(%ebp),%eax
081b674b +0xaee:  mov    %eax,(%esp)
081b674e +0xaf1:  call   081b6827 <+0xbca>
081b6753 +0xaf6:  mov    0x8(%ebp),%edx
081b6756 +0xaf9:  mov    (%eax),%eax
081b6758 +0xafb:  mov    %eax,(%edx)
081b675a +0xafd:  mov    0x10(%ebp),%eax
081b675d +0xb00:  mov    %eax,(%esp)
081b6760 +0xb03:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081b6765 +0xb08:  movzbl (%eax),%edx
081b6768 +0xb0b:  mov    0x8(%ebp),%eax
081b676b +0xb0e:  mov    %dl,0x4(%eax)
081b676e +0xb11:  leave
081b676f +0xb12:  ret
081b6770 +0xb13:  push   %ebp
081b6771 +0xb14:  mov    %esp,%ebp
081b6773 +0xb16:  sub    $0x18,%esp
081b6776 +0xb19:  mov    0x8(%ebp),%eax
081b6779 +0xb1c:  mov    (%eax),%eax
081b677b +0xb1e:  mov    %eax,(%esp)
081b677e +0xb21:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081b6783 +0xb26:  mov    0x8(%ebp),%edx
081b6786 +0xb29:  mov    %eax,(%edx)
081b6788 +0xb2b:  mov    0x8(%ebp),%eax
081b678b +0xb2e:  leave
081b678c +0xb2f:  ret
081b678d +0xb30:  nop
081b678e +0xb31:  push   %ebp
081b678f +0xb32:  mov    %esp,%ebp
081b6791 +0xb34:  sub    $0x18,%esp
081b6794 +0xb37:  mov    0xc(%ebp),%eax
081b6797 +0xb3a:  mov    %eax,(%esp)
081b679a +0xb3d:  call   081b682f <+0xbd2>
081b679f +0xb42:  mov    0x8(%ebp),%edx
081b67a2 +0xb45:  mov    (%eax),%eax
081b67a4 +0xb47:  mov    %eax,(%edx)
081b67a6 +0xb49:  mov    0x10(%ebp),%eax
081b67a9 +0xb4c:  mov    %eax,(%esp)
081b67ac +0xb4f:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081b67b1 +0xb54:  movzbl (%eax),%edx
081b67b4 +0xb57:  mov    0x8(%ebp),%eax
081b67b7 +0xb5a:  mov    %dl,0x4(%eax)
081b67ba +0xb5d:  leave
081b67bb +0xb5e:  ret
081b67bc +0xb5f:  push   %ebp
081b67bd +0xb60:  mov    %esp,%ebp
081b67bf +0xb62:  sub    $0x18,%esp
081b67c2 +0xb65:  mov    0x8(%ebp),%eax
081b67c5 +0xb68:  movl   $0x0,0x8(%esp)
081b67cd +0xb70:  movl   $0x1,0x4(%esp)
081b67d5 +0xb78:  mov    %eax,(%esp)
081b67d8 +0xb7b:  call   081b6838 <+0xbdb>
081b67dd +0xb80:  leave
081b67de +0xb81:  ret
081b67df +0xb82:  push   %ebp
081b67e0 +0xb83:  mov    %esp,%ebp
081b67e2 +0xb85:  mov    0x8(%ebp),%eax
081b67e5 +0xb88:  pop    %ebp
081b67e6 +0xb89:  ret
081b67e7 +0xb8a:  nop
081b67e8 +0xb8b:  push   %ebp
081b67e9 +0xb8c:  mov    %esp,%ebp
081b67eb +0xb8e:  push   %ebx
081b67ec +0xb8f:  sub    $0x14,%esp
081b67ef +0xb92:  mov    0x10(%ebp),%eax
081b67f2 +0xb95:  mov    %eax,(%esp)
081b67f5 +0xb98:  call   081b67df <+0xb82>
081b67fa +0xb9d:  mov    %eax,%ebx
081b67fc +0xb9f:  mov    0xc(%ebp),%eax
081b67ff +0xba2:  mov    %eax,0x4(%esp)
081b6803 +0xba6:  movl   $0x1c,(%esp)
081b680a +0xbad:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b680f +0xbb2:  mov    %eax,%edx
081b6811 +0xbb4:  test   %edx,%edx
081b6813 +0xbb6:  je     081b6821 <+0xbc4>
081b6815 +0xbb8:  mov    %ebx,0x4(%esp)
081b6819 +0xbbc:  mov    %eax,(%esp)
081b681c +0xbbf:  call   081b687e <+0xc21>
081b6821 +0xbc4:  add    $0x14,%esp
081b6824 +0xbc7:  pop    %ebx
081b6825 +0xbc8:  pop    %ebp
081b6826 +0xbc9:  ret
081b6827 +0xbca:  push   %ebp
081b6828 +0xbcb:  mov    %esp,%ebp
081b682a +0xbcd:  mov    0x8(%ebp),%eax
081b682d +0xbd0:  pop    %ebp
081b682e +0xbd1:  ret
081b682f +0xbd2:  push   %ebp
081b6830 +0xbd3:  mov    %esp,%ebp
081b6832 +0xbd5:  mov    0x8(%ebp),%eax
081b6835 +0xbd8:  pop    %ebp
081b6836 +0xbd9:  ret
081b6837 +0xbda:  nop
081b6838 +0xbdb:  push   %ebp
081b6839 +0xbdc:  mov    %esp,%ebp
081b683b +0xbde:  sub    $0x18,%esp
081b683e +0xbe1:  mov    0x8(%ebp),%eax
081b6841 +0xbe4:  mov    %eax,(%esp)
081b6844 +0xbe7:  call   081b68cc <+0xc6f>
081b6849 +0xbec:  cmp    0xc(%ebp),%eax
081b684c +0xbef:  setb   %al
081b684f +0xbf2:  movzbl %al,%eax
081b6852 +0xbf5:  test   %eax,%eax
081b6854 +0xbf7:  setne  %al
081b6857 +0xbfa:  test   %al,%al
081b6859 +0xbfc:  je     081b6860 <+0xc03>
081b685b +0xbfe:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081b6860 +0xc03:  mov    0xc(%ebp),%eax
081b6863 +0xc06:  shl    $0x2,%eax
081b6866 +0xc09:  lea    0x0(,%eax,8),%edx
081b686d +0xc10:  mov    %edx,%ecx
081b686f +0xc12:  sub    %eax,%ecx
081b6871 +0xc14:  mov    %ecx,%eax
081b6873 +0xc16:  mov    %eax,(%esp)
081b6876 +0xc19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081b687b +0xc1e:  leave
081b687c +0xc1f:  ret
081b687d +0xc20:  nop
081b687e +0xc21:  push   %ebp
081b687f +0xc22:  mov    %esp,%ebp
081b6881 +0xc24:  sub    $0x18,%esp
081b6884 +0xc27:  mov    0x8(%ebp),%eax
081b6887 +0xc2a:  movl   $0x0,(%eax)
081b688d +0xc30:  mov    0x8(%ebp),%eax
081b6890 +0xc33:  movl   $0x0,0x4(%eax)
081b6897 +0xc3a:  mov    0x8(%ebp),%eax
081b689a +0xc3d:  movl   $0x0,0x8(%eax)
081b68a1 +0xc44:  mov    0x8(%ebp),%eax
081b68a4 +0xc47:  movl   $0x0,0xc(%eax)
081b68ab +0xc4e:  mov    0xc(%ebp),%eax
081b68ae +0xc51:  mov    %eax,(%esp)
081b68b1 +0xc54:  call   081b67df <+0xb82>
081b68b6 +0xc59:  mov    0x8(%ebp),%edx
081b68b9 +0xc5c:  mov    (%eax),%ecx
081b68bb +0xc5e:  mov    %ecx,0x10(%edx)
081b68be +0xc61:  mov    0x4(%eax),%ecx
081b68c1 +0xc64:  mov    %ecx,0x14(%edx)
081b68c4 +0xc67:  mov    0x8(%eax),%eax
081b68c7 +0xc6a:  mov    %eax,0x18(%edx)
081b68ca +0xc6d:  leave
081b68cb +0xc6e:  ret
081b68cc +0xc6f:  push   %ebp
081b68cd +0xc70:  mov    %esp,%ebp
081b68cf +0xc72:  mov    $"}p�.",%eax
081b68d4 +0xc77:  pop    %ebp
081b68d5 +0xc78:  ret
081b68d6 +0xc79:  nop
081b68d7 +0xc7a:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b5c5d

/* NeedMaterialDataManager::NeedMaterialDataManager() */

void NeedMaterialDataManager::_GLOBAL__I_NeedMaterialDataManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
