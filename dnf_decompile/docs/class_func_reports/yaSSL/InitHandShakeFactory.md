# InitHandShakeFactory

`_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE`

`yaSSL::InitHandShakeFactory(yaSSL::Factory<yaSSL::HandShakeBase, int, yaSSL::HandShakeBase* (*)()>&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874d120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874d120  _ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE
#           yaSSL::InitHandShakeFactory(yaSSL::Factory<yaSSL::HandShakeBase, int, yaSSL::HandShakeBase* (*)()>&)
# range [0x0874d120, 0x0874dcff]
0874d120 +0x000:  push   %ebp
0874d121 +0x001:  mov    %esp,%ebp
0874d123 +0x003:  push   %edi
0874d124 +0x004:  push   %esi
0874d125 +0x005:  push   %ebx
0874d126 +0x006:  sub    $0x2c,%esp
0874d129 +0x009:  mov    0x8(%ebp),%esi
0874d12c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874d131 +0x011:  add    $0xc1fa67,%ebx
0874d137 +0x017:  mov    0x8(%esi),%edx
0874d13a +0x01a:  mov    %edx,%eax
0874d13c +0x01c:  sub    (%esi),%eax
0874d13e +0x01e:  sar    $0x3,%eax
0874d141 +0x021:  cmp    $0x9,%eax
0874d144 +0x024:  jbe    0874d2a0 <+0x180>
0874d14a +0x02a:  mov    0x4(%esi),%eax
0874d14d +0x02d:  cmp    %edx,%eax
0874d14f +0x02f:  je     0874d314 <+0x1f4>
0874d155 +0x035:  mov    -0xd4(%ebx),%edx
0874d15b +0x03b:  movl   $0x0,(%eax)
0874d161 +0x041:  mov    %edx,0x4(%eax)
0874d164 +0x044:  mov    0x4(%esi),%eax
0874d167 +0x047:  add    $0x8,%eax
0874d16a +0x04a:  cmp    %eax,0x8(%esi)
0874d16d +0x04d:  mov    %eax,0x4(%esi)
0874d170 +0x050:  je     0874d3a8 <+0x288>
0874d176 +0x056:  mov    -0x170(%ebx),%edx
0874d17c +0x05c:  movl   $0x1,(%eax)
0874d182 +0x062:  mov    %edx,0x4(%eax)
0874d185 +0x065:  mov    0x4(%esi),%eax
0874d188 +0x068:  add    $0x8,%eax
0874d18b +0x06b:  cmp    %eax,0x8(%esi)
0874d18e +0x06e:  mov    %eax,0x4(%esi)
0874d191 +0x071:  je     0874d440 <+0x320>
0874d197 +0x077:  mov    -0xf0(%ebx),%edx
0874d19d +0x07d:  movl   $0x2,(%eax)
0874d1a3 +0x083:  mov    %edx,0x4(%eax)
0874d1a6 +0x086:  mov    0x4(%esi),%eax
0874d1a9 +0x089:  add    $0x8,%eax
0874d1ac +0x08c:  cmp    %eax,0x8(%esi)
0874d1af +0x08f:  mov    %eax,0x4(%esi)
0874d1b2 +0x092:  je     0874d4d8 <+0x3b8>
0874d1b8 +0x098:  mov    -0x24(%ebx),%edx
0874d1be +0x09e:  movl   $0xb,(%eax)
0874d1c4 +0x0a4:  mov    %edx,0x4(%eax)
0874d1c7 +0x0a7:  mov    0x4(%esi),%eax
0874d1ca +0x0aa:  add    $0x8,%eax
0874d1cd +0x0ad:  cmp    %eax,0x8(%esi)
0874d1d0 +0x0b0:  mov    %eax,0x4(%esi)
0874d1d3 +0x0b3:  je     0874d570 <+0x450>
0874d1d9 +0x0b9:  mov    -0xb4(%ebx),%edx
0874d1df +0x0bf:  movl   $0xc,(%eax)
0874d1e5 +0x0c5:  mov    %edx,0x4(%eax)
0874d1e8 +0x0c8:  mov    0x4(%esi),%eax
0874d1eb +0x0cb:  add    $0x8,%eax
0874d1ee +0x0ce:  cmp    0x8(%esi),%eax
0874d1f1 +0x0d1:  mov    %eax,0x4(%esi)
0874d1f4 +0x0d4:  je     0874d608 <+0x4e8>
0874d1fa +0x0da:  mov    -0x38c(%ebx),%edx
0874d200 +0x0e0:  movl   $0xd,(%eax)
0874d206 +0x0e6:  mov    %edx,0x4(%eax)
0874d209 +0x0e9:  mov    0x4(%esi),%eax
0874d20c +0x0ec:  add    $0x8,%eax
0874d20f +0x0ef:  cmp    0x8(%esi),%eax
0874d212 +0x0f2:  mov    %eax,0x4(%esi)
0874d215 +0x0f5:  je     0874d6a0 <+0x580>
0874d21b +0x0fb:  mov    -0x3a0(%ebx),%edx
0874d221 +0x101:  movl   $0xe,(%eax)
0874d227 +0x107:  mov    %edx,0x4(%eax)
0874d22a +0x10a:  mov    0x4(%esi),%eax
0874d22d +0x10d:  add    $0x8,%eax
0874d230 +0x110:  cmp    %eax,0x8(%esi)
0874d233 +0x113:  mov    %eax,0x4(%esi)
0874d236 +0x116:  je     0874d738 <+0x618>
0874d23c +0x11c:  mov    -0x14(%ebx),%edx
0874d242 +0x122:  movl   $0xf,(%eax)
0874d248 +0x128:  mov    %edx,0x4(%eax)
0874d24b +0x12b:  mov    0x4(%esi),%eax
0874d24e +0x12e:  add    $0x8,%eax
0874d251 +0x131:  cmp    %eax,0x8(%esi)
0874d254 +0x134:  mov    %eax,0x4(%esi)
0874d257 +0x137:  je     0874d7d0 <+0x6b0>
0874d25d +0x13d:  mov    -0x5c(%ebx),%edx
0874d263 +0x143:  movl   $0x10,(%eax)
0874d269 +0x149:  mov    %edx,0x4(%eax)
0874d26c +0x14c:  mov    0x4(%esi),%eax
0874d26f +0x14f:  add    $0x8,%eax
0874d272 +0x152:  cmp    %eax,0x8(%esi)
0874d275 +0x155:  mov    %eax,0x4(%esi)
0874d278 +0x158:  je     0874d868 <+0x748>
0874d27e +0x15e:  mov    -0x4c8(%ebx),%edx
0874d284 +0x164:  addl   $0x8,0x4(%esi)
0874d288 +0x168:  movl   $0x14,(%eax)
0874d28e +0x16e:  mov    %edx,0x4(%eax)
0874d291 +0x171:  add    $0x2c,%esp
0874d294 +0x174:  pop    %ebx
0874d295 +0x175:  pop    %esi
0874d296 +0x176:  pop    %edi
0874d297 +0x177:  pop    %ebp
0874d298 +0x178:  ret
0874d299 +0x179:  lea    0x0(%esi,%eiz,1),%esi
0874d2a0 +0x180:  movb   $0x0,0x4(%esp)
0874d2a5 +0x185:  movl   $0x50,(%esp)
0874d2ac +0x18c:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d2b1 +0x191:  mov    0x4(%esi),%edi
0874d2b4 +0x194:  mov    (%esi),%ecx
0874d2b6 +0x196:  cmp    %ecx,%edi
0874d2b8 +0x198:  mov    %eax,%edx
0874d2ba +0x19a:  je     0874d2ee <+0x1ce>
0874d2bc +0x19c:  lea    0x8(%ecx),%edx
0874d2bf +0x19f:  sub    %edx,%edi
0874d2c1 +0x1a1:  xor    %edx,%edx
0874d2c3 +0x1a3:  shr    $0x3,%edi
0874d2c6 +0x1a6:  add    $0x1,%edi
0874d2c9 +0x1a9:  mov    %edi,-0x1c(%ebp)
0874d2cc +0x1ac:  mov    %esi,-0x20(%ebp)
0874d2cf +0x1af:  nop
0874d2d0 +0x1b0:  mov    (%ecx,%edx,8),%esi
0874d2d3 +0x1b3:  mov    0x4(%ecx,%edx,8),%edi
0874d2d7 +0x1b7:  mov    %esi,(%eax,%edx,8)
0874d2da +0x1ba:  mov    %edi,0x4(%eax,%edx,8)
0874d2de +0x1be:  add    $0x1,%edx
0874d2e1 +0x1c1:  cmp    -0x1c(%ebp),%edx
0874d2e4 +0x1c4:  jne    0874d2d0 <+0x1b0>
0874d2e6 +0x1c6:  mov    -0x20(%ebp),%esi
0874d2e9 +0x1c9:  lea    (%eax,%edx,8),%edx
0874d2ec +0x1cc:  mov    (%esi),%edi
0874d2ee +0x1ce:  mov    %eax,(%esi)
0874d2f0 +0x1d0:  add    $0x50,%eax
0874d2f3 +0x1d3:  mov    %edx,0x4(%esi)
0874d2f6 +0x1d6:  mov    %eax,0x8(%esi)
0874d2f9 +0x1d9:  movb   $0x0,0x4(%esp)
0874d2fe +0x1de:  mov    %edi,(%esp)
0874d301 +0x1e1:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d306 +0x1e6:  mov    0x8(%esi),%edx
0874d309 +0x1e9:  mov    0x4(%esi),%eax
0874d30c +0x1ec:  cmp    %edx,%eax
0874d30e +0x1ee:  jne    0874d155 <+0x35>
0874d314 +0x1f4:  sub    (%esi),%edx
0874d316 +0x1f6:  sar    $0x3,%edx
0874d319 +0x1f9:  lea    0x1(%edx,%edx,1),%eax
0874d31d +0x1fd:  shl    $0x3,%eax
0874d320 +0x200:  mov    %eax,-0x20(%ebp)
0874d323 +0x203:  movb   $0x0,0x4(%esp)
0874d328 +0x208:  mov    %eax,(%esp)
0874d32b +0x20b:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d330 +0x210:  mov    0x4(%esi),%edi
0874d333 +0x213:  mov    (%esi),%ecx
0874d335 +0x215:  cmp    %ecx,%edi
0874d337 +0x217:  mov    %eax,%edx
0874d339 +0x219:  je     0874d36c <+0x24c>
0874d33b +0x21b:  lea    0x8(%ecx),%edx
0874d33e +0x21e:  sub    %edx,%edi
0874d340 +0x220:  xor    %edx,%edx
0874d342 +0x222:  shr    $0x3,%edi
0874d345 +0x225:  add    $0x1,%edi
0874d348 +0x228:  mov    %edi,-0x1c(%ebp)
0874d34b +0x22b:  mov    %esi,-0x24(%ebp)
0874d34e +0x22e:  xchg   %ax,%ax
0874d350 +0x230:  mov    (%ecx,%edx,8),%esi
0874d353 +0x233:  mov    0x4(%ecx,%edx,8),%edi
0874d357 +0x237:  mov    %esi,(%eax,%edx,8)
0874d35a +0x23a:  mov    %edi,0x4(%eax,%edx,8)
0874d35e +0x23e:  add    $0x1,%edx
0874d361 +0x241:  cmp    -0x1c(%ebp),%edx
0874d364 +0x244:  jne    0874d350 <+0x230>
0874d366 +0x246:  mov    -0x24(%ebp),%esi
0874d369 +0x249:  lea    (%eax,%edx,8),%edx
0874d36c +0x24c:  mov    -0xd4(%ebx),%ecx
0874d372 +0x252:  movl   $0x0,(%edx)
0874d378 +0x258:  mov    %ecx,0x4(%edx)
0874d37b +0x25b:  mov    (%esi),%ecx
0874d37d +0x25d:  add    $0x8,%edx
0874d380 +0x260:  mov    %eax,(%esi)
0874d382 +0x262:  add    -0x20(%ebp),%eax
0874d385 +0x265:  mov    %edx,0x4(%esi)
0874d388 +0x268:  mov    %eax,0x8(%esi)
0874d38b +0x26b:  movb   $0x0,0x4(%esp)
0874d390 +0x270:  mov    %ecx,(%esp)
0874d393 +0x273:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d398 +0x278:  mov    0x4(%esi),%eax
0874d39b +0x27b:  cmp    %eax,0x8(%esi)
0874d39e +0x27e:  jne    0874d176 <+0x56>
0874d3a4 +0x284:  lea    0x0(%esi,%eiz,1),%esi
0874d3a8 +0x288:  sub    (%esi),%eax
0874d3aa +0x28a:  sar    $0x3,%eax
0874d3ad +0x28d:  lea    0x1(%eax,%eax,1),%eax
0874d3b1 +0x291:  shl    $0x3,%eax
0874d3b4 +0x294:  mov    %eax,-0x20(%ebp)
0874d3b7 +0x297:  movb   $0x0,0x4(%esp)
0874d3bc +0x29c:  mov    %eax,(%esp)
0874d3bf +0x29f:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d3c4 +0x2a4:  mov    0x4(%esi),%edi
0874d3c7 +0x2a7:  mov    (%esi),%ecx
0874d3c9 +0x2a9:  cmp    %ecx,%edi
0874d3cb +0x2ab:  mov    %eax,%edx
0874d3cd +0x2ad:  je     0874d404 <+0x2e4>
0874d3cf +0x2af:  lea    0x8(%ecx),%edx
0874d3d2 +0x2b2:  sub    %edx,%edi
0874d3d4 +0x2b4:  xor    %edx,%edx
0874d3d6 +0x2b6:  shr    $0x3,%edi
0874d3d9 +0x2b9:  add    $0x1,%edi
0874d3dc +0x2bc:  mov    %edi,-0x1c(%ebp)
0874d3df +0x2bf:  mov    %esi,-0x24(%ebp)
0874d3e2 +0x2c2:  lea    0x0(%esi),%esi
0874d3e8 +0x2c8:  mov    (%ecx,%edx,8),%esi
0874d3eb +0x2cb:  mov    0x4(%ecx,%edx,8),%edi
0874d3ef +0x2cf:  mov    %esi,(%eax,%edx,8)
0874d3f2 +0x2d2:  mov    %edi,0x4(%eax,%edx,8)
0874d3f6 +0x2d6:  add    $0x1,%edx
0874d3f9 +0x2d9:  cmp    -0x1c(%ebp),%edx
0874d3fc +0x2dc:  jne    0874d3e8 <+0x2c8>
0874d3fe +0x2de:  mov    -0x24(%ebp),%esi
0874d401 +0x2e1:  lea    (%eax,%edx,8),%edx
0874d404 +0x2e4:  mov    -0x170(%ebx),%ecx
0874d40a +0x2ea:  movl   $0x1,(%edx)
0874d410 +0x2f0:  mov    %ecx,0x4(%edx)
0874d413 +0x2f3:  mov    (%esi),%ecx
0874d415 +0x2f5:  add    $0x8,%edx
0874d418 +0x2f8:  mov    %eax,(%esi)
0874d41a +0x2fa:  add    -0x20(%ebp),%eax
0874d41d +0x2fd:  mov    %edx,0x4(%esi)
0874d420 +0x300:  mov    %eax,0x8(%esi)
0874d423 +0x303:  movb   $0x0,0x4(%esp)
0874d428 +0x308:  mov    %ecx,(%esp)
0874d42b +0x30b:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d430 +0x310:  mov    0x4(%esi),%eax
0874d433 +0x313:  cmp    %eax,0x8(%esi)
0874d436 +0x316:  jne    0874d197 <+0x77>
0874d43c +0x31c:  lea    0x0(%esi,%eiz,1),%esi
0874d440 +0x320:  sub    (%esi),%eax
0874d442 +0x322:  sar    $0x3,%eax
0874d445 +0x325:  lea    0x1(%eax,%eax,1),%eax
0874d449 +0x329:  shl    $0x3,%eax
0874d44c +0x32c:  mov    %eax,-0x20(%ebp)
0874d44f +0x32f:  movb   $0x0,0x4(%esp)
0874d454 +0x334:  mov    %eax,(%esp)
0874d457 +0x337:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d45c +0x33c:  mov    0x4(%esi),%edi
0874d45f +0x33f:  mov    (%esi),%ecx
0874d461 +0x341:  cmp    %ecx,%edi
0874d463 +0x343:  mov    %eax,%edx
0874d465 +0x345:  je     0874d49c <+0x37c>
0874d467 +0x347:  lea    0x8(%ecx),%edx
0874d46a +0x34a:  sub    %edx,%edi
0874d46c +0x34c:  xor    %edx,%edx
0874d46e +0x34e:  shr    $0x3,%edi
0874d471 +0x351:  add    $0x1,%edi
0874d474 +0x354:  mov    %edi,-0x1c(%ebp)
0874d477 +0x357:  mov    %esi,-0x24(%ebp)
0874d47a +0x35a:  lea    0x0(%esi),%esi
0874d480 +0x360:  mov    (%ecx,%edx,8),%esi
0874d483 +0x363:  mov    0x4(%ecx,%edx,8),%edi
0874d487 +0x367:  mov    %esi,(%eax,%edx,8)
0874d48a +0x36a:  mov    %edi,0x4(%eax,%edx,8)
0874d48e +0x36e:  add    $0x1,%edx
0874d491 +0x371:  cmp    -0x1c(%ebp),%edx
0874d494 +0x374:  jne    0874d480 <+0x360>
0874d496 +0x376:  mov    -0x24(%ebp),%esi
0874d499 +0x379:  lea    (%eax,%edx,8),%edx
0874d49c +0x37c:  mov    -0xf0(%ebx),%ecx
0874d4a2 +0x382:  movl   $0x2,(%edx)
0874d4a8 +0x388:  mov    %ecx,0x4(%edx)
0874d4ab +0x38b:  mov    (%esi),%ecx
0874d4ad +0x38d:  add    $0x8,%edx
0874d4b0 +0x390:  mov    %eax,(%esi)
0874d4b2 +0x392:  add    -0x20(%ebp),%eax
0874d4b5 +0x395:  mov    %edx,0x4(%esi)
0874d4b8 +0x398:  mov    %eax,0x8(%esi)
0874d4bb +0x39b:  movb   $0x0,0x4(%esp)
0874d4c0 +0x3a0:  mov    %ecx,(%esp)
0874d4c3 +0x3a3:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d4c8 +0x3a8:  mov    0x4(%esi),%eax
0874d4cb +0x3ab:  cmp    %eax,0x8(%esi)
0874d4ce +0x3ae:  jne    0874d1b8 <+0x98>
0874d4d4 +0x3b4:  lea    0x0(%esi,%eiz,1),%esi
0874d4d8 +0x3b8:  sub    (%esi),%eax
0874d4da +0x3ba:  sar    $0x3,%eax
0874d4dd +0x3bd:  lea    0x1(%eax,%eax,1),%eax
0874d4e1 +0x3c1:  shl    $0x3,%eax
0874d4e4 +0x3c4:  mov    %eax,-0x20(%ebp)
0874d4e7 +0x3c7:  movb   $0x0,0x4(%esp)
0874d4ec +0x3cc:  mov    %eax,(%esp)
0874d4ef +0x3cf:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d4f4 +0x3d4:  mov    0x4(%esi),%edi
0874d4f7 +0x3d7:  mov    (%esi),%ecx
0874d4f9 +0x3d9:  cmp    %ecx,%edi
0874d4fb +0x3db:  mov    %eax,%edx
0874d4fd +0x3dd:  je     0874d534 <+0x414>
0874d4ff +0x3df:  lea    0x8(%ecx),%edx
0874d502 +0x3e2:  sub    %edx,%edi
0874d504 +0x3e4:  xor    %edx,%edx
0874d506 +0x3e6:  shr    $0x3,%edi
0874d509 +0x3e9:  add    $0x1,%edi
0874d50c +0x3ec:  mov    %edi,-0x1c(%ebp)
0874d50f +0x3ef:  mov    %esi,-0x24(%ebp)
0874d512 +0x3f2:  lea    0x0(%esi),%esi
0874d518 +0x3f8:  mov    (%ecx,%edx,8),%esi
0874d51b +0x3fb:  mov    0x4(%ecx,%edx,8),%edi
0874d51f +0x3ff:  mov    %esi,(%eax,%edx,8)
0874d522 +0x402:  mov    %edi,0x4(%eax,%edx,8)
0874d526 +0x406:  add    $0x1,%edx
0874d529 +0x409:  cmp    -0x1c(%ebp),%edx
0874d52c +0x40c:  jne    0874d518 <+0x3f8>
0874d52e +0x40e:  mov    -0x24(%ebp),%esi
0874d531 +0x411:  lea    (%eax,%edx,8),%edx
0874d534 +0x414:  mov    -0x24(%ebx),%ecx
0874d53a +0x41a:  movl   $0xb,(%edx)
0874d540 +0x420:  mov    %ecx,0x4(%edx)
0874d543 +0x423:  mov    (%esi),%ecx
0874d545 +0x425:  add    $0x8,%edx
0874d548 +0x428:  mov    %eax,(%esi)
0874d54a +0x42a:  add    -0x20(%ebp),%eax
0874d54d +0x42d:  mov    %edx,0x4(%esi)
0874d550 +0x430:  mov    %eax,0x8(%esi)
0874d553 +0x433:  movb   $0x0,0x4(%esp)
0874d558 +0x438:  mov    %ecx,(%esp)
0874d55b +0x43b:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d560 +0x440:  mov    0x4(%esi),%eax
0874d563 +0x443:  cmp    %eax,0x8(%esi)
0874d566 +0x446:  jne    0874d1d9 <+0xb9>
0874d56c +0x44c:  lea    0x0(%esi,%eiz,1),%esi
0874d570 +0x450:  sub    (%esi),%eax
0874d572 +0x452:  sar    $0x3,%eax
0874d575 +0x455:  lea    0x1(%eax,%eax,1),%eax
0874d579 +0x459:  shl    $0x3,%eax
0874d57c +0x45c:  mov    %eax,-0x20(%ebp)
0874d57f +0x45f:  movb   $0x0,0x4(%esp)
0874d584 +0x464:  mov    %eax,(%esp)
0874d587 +0x467:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d58c +0x46c:  mov    0x4(%esi),%edi
0874d58f +0x46f:  mov    (%esi),%ecx
0874d591 +0x471:  cmp    %ecx,%edi
0874d593 +0x473:  mov    %eax,%edx
0874d595 +0x475:  je     0874d5cc <+0x4ac>
0874d597 +0x477:  lea    0x8(%ecx),%edx
0874d59a +0x47a:  sub    %edx,%edi
0874d59c +0x47c:  xor    %edx,%edx
0874d59e +0x47e:  shr    $0x3,%edi
0874d5a1 +0x481:  add    $0x1,%edi
0874d5a4 +0x484:  mov    %edi,-0x1c(%ebp)
0874d5a7 +0x487:  mov    %esi,-0x24(%ebp)
0874d5aa +0x48a:  lea    0x0(%esi),%esi
0874d5b0 +0x490:  mov    (%ecx,%edx,8),%esi
0874d5b3 +0x493:  mov    0x4(%ecx,%edx,8),%edi
0874d5b7 +0x497:  mov    %esi,(%eax,%edx,8)
0874d5ba +0x49a:  mov    %edi,0x4(%eax,%edx,8)
0874d5be +0x49e:  add    $0x1,%edx
0874d5c1 +0x4a1:  cmp    -0x1c(%ebp),%edx
0874d5c4 +0x4a4:  jne    0874d5b0 <+0x490>
0874d5c6 +0x4a6:  mov    -0x24(%ebp),%esi
0874d5c9 +0x4a9:  lea    (%eax,%edx,8),%edx
0874d5cc +0x4ac:  mov    -0xb4(%ebx),%ecx
0874d5d2 +0x4b2:  movl   $0xc,(%edx)
0874d5d8 +0x4b8:  mov    %ecx,0x4(%edx)
0874d5db +0x4bb:  mov    (%esi),%ecx
0874d5dd +0x4bd:  add    $0x8,%edx
0874d5e0 +0x4c0:  mov    %eax,(%esi)
0874d5e2 +0x4c2:  add    -0x20(%ebp),%eax
0874d5e5 +0x4c5:  mov    %edx,0x4(%esi)
0874d5e8 +0x4c8:  mov    %eax,0x8(%esi)
0874d5eb +0x4cb:  movb   $0x0,0x4(%esp)
0874d5f0 +0x4d0:  mov    %ecx,(%esp)
0874d5f3 +0x4d3:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d5f8 +0x4d8:  mov    0x4(%esi),%eax
0874d5fb +0x4db:  cmp    0x8(%esi),%eax
0874d5fe +0x4de:  jne    0874d1fa <+0xda>
0874d604 +0x4e4:  lea    0x0(%esi,%eiz,1),%esi
0874d608 +0x4e8:  sub    (%esi),%eax
0874d60a +0x4ea:  sar    $0x3,%eax
0874d60d +0x4ed:  lea    0x1(%eax,%eax,1),%eax
0874d611 +0x4f1:  shl    $0x3,%eax
0874d614 +0x4f4:  mov    %eax,-0x20(%ebp)
0874d617 +0x4f7:  movb   $0x0,0x4(%esp)
0874d61c +0x4fc:  mov    %eax,(%esp)
0874d61f +0x4ff:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d624 +0x504:  mov    0x4(%esi),%edi
0874d627 +0x507:  mov    (%esi),%ecx
0874d629 +0x509:  cmp    %ecx,%edi
0874d62b +0x50b:  mov    %eax,%edx
0874d62d +0x50d:  je     0874d664 <+0x544>
0874d62f +0x50f:  lea    0x8(%ecx),%edx
0874d632 +0x512:  sub    %edx,%edi
0874d634 +0x514:  xor    %edx,%edx
0874d636 +0x516:  shr    $0x3,%edi
0874d639 +0x519:  add    $0x1,%edi
0874d63c +0x51c:  mov    %edi,-0x1c(%ebp)
0874d63f +0x51f:  mov    %esi,-0x24(%ebp)
0874d642 +0x522:  lea    0x0(%esi),%esi
0874d648 +0x528:  mov    (%ecx,%edx,8),%esi
0874d64b +0x52b:  mov    0x4(%ecx,%edx,8),%edi
0874d64f +0x52f:  mov    %esi,(%eax,%edx,8)
0874d652 +0x532:  mov    %edi,0x4(%eax,%edx,8)
0874d656 +0x536:  add    $0x1,%edx
0874d659 +0x539:  cmp    -0x1c(%ebp),%edx
0874d65c +0x53c:  jne    0874d648 <+0x528>
0874d65e +0x53e:  mov    -0x24(%ebp),%esi
0874d661 +0x541:  lea    (%eax,%edx,8),%edx
0874d664 +0x544:  mov    -0x38c(%ebx),%ecx
0874d66a +0x54a:  movl   $0xd,(%edx)
0874d670 +0x550:  mov    %ecx,0x4(%edx)
0874d673 +0x553:  mov    (%esi),%ecx
0874d675 +0x555:  add    $0x8,%edx
0874d678 +0x558:  mov    %eax,(%esi)
0874d67a +0x55a:  add    -0x20(%ebp),%eax
0874d67d +0x55d:  mov    %edx,0x4(%esi)
0874d680 +0x560:  mov    %eax,0x8(%esi)
0874d683 +0x563:  movb   $0x0,0x4(%esp)
0874d688 +0x568:  mov    %ecx,(%esp)
0874d68b +0x56b:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d690 +0x570:  mov    0x4(%esi),%eax
0874d693 +0x573:  cmp    0x8(%esi),%eax
0874d696 +0x576:  jne    0874d21b <+0xfb>
0874d69c +0x57c:  lea    0x0(%esi,%eiz,1),%esi
0874d6a0 +0x580:  sub    (%esi),%eax
0874d6a2 +0x582:  sar    $0x3,%eax
0874d6a5 +0x585:  lea    0x1(%eax,%eax,1),%eax
0874d6a9 +0x589:  shl    $0x3,%eax
0874d6ac +0x58c:  mov    %eax,-0x20(%ebp)
0874d6af +0x58f:  movb   $0x0,0x4(%esp)
0874d6b4 +0x594:  mov    %eax,(%esp)
0874d6b7 +0x597:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d6bc +0x59c:  mov    0x4(%esi),%edi
0874d6bf +0x59f:  mov    (%esi),%ecx
0874d6c1 +0x5a1:  cmp    %ecx,%edi
0874d6c3 +0x5a3:  mov    %eax,%edx
0874d6c5 +0x5a5:  je     0874d6fc <+0x5dc>
0874d6c7 +0x5a7:  lea    0x8(%ecx),%edx
0874d6ca +0x5aa:  sub    %edx,%edi
0874d6cc +0x5ac:  xor    %edx,%edx
0874d6ce +0x5ae:  shr    $0x3,%edi
0874d6d1 +0x5b1:  add    $0x1,%edi
0874d6d4 +0x5b4:  mov    %edi,-0x1c(%ebp)
0874d6d7 +0x5b7:  mov    %esi,-0x24(%ebp)
0874d6da +0x5ba:  lea    0x0(%esi),%esi
0874d6e0 +0x5c0:  mov    (%ecx,%edx,8),%esi
0874d6e3 +0x5c3:  mov    0x4(%ecx,%edx,8),%edi
0874d6e7 +0x5c7:  mov    %esi,(%eax,%edx,8)
0874d6ea +0x5ca:  mov    %edi,0x4(%eax,%edx,8)
0874d6ee +0x5ce:  add    $0x1,%edx
0874d6f1 +0x5d1:  cmp    -0x1c(%ebp),%edx
0874d6f4 +0x5d4:  jne    0874d6e0 <+0x5c0>
0874d6f6 +0x5d6:  mov    -0x24(%ebp),%esi
0874d6f9 +0x5d9:  lea    (%eax,%edx,8),%edx
0874d6fc +0x5dc:  mov    -0x3a0(%ebx),%ecx
0874d702 +0x5e2:  movl   $0xe,(%edx)
0874d708 +0x5e8:  mov    %ecx,0x4(%edx)
0874d70b +0x5eb:  mov    (%esi),%ecx
0874d70d +0x5ed:  add    $0x8,%edx
0874d710 +0x5f0:  mov    %eax,(%esi)
0874d712 +0x5f2:  add    -0x20(%ebp),%eax
0874d715 +0x5f5:  mov    %edx,0x4(%esi)
0874d718 +0x5f8:  mov    %eax,0x8(%esi)
0874d71b +0x5fb:  movb   $0x0,0x4(%esp)
0874d720 +0x600:  mov    %ecx,(%esp)
0874d723 +0x603:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d728 +0x608:  mov    0x4(%esi),%eax
0874d72b +0x60b:  cmp    %eax,0x8(%esi)
0874d72e +0x60e:  jne    0874d23c <+0x11c>
0874d734 +0x614:  lea    0x0(%esi,%eiz,1),%esi
0874d738 +0x618:  sub    (%esi),%eax
0874d73a +0x61a:  sar    $0x3,%eax
0874d73d +0x61d:  lea    0x1(%eax,%eax,1),%eax
0874d741 +0x621:  shl    $0x3,%eax
0874d744 +0x624:  mov    %eax,-0x20(%ebp)
0874d747 +0x627:  movb   $0x0,0x4(%esp)
0874d74c +0x62c:  mov    %eax,(%esp)
0874d74f +0x62f:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d754 +0x634:  mov    0x4(%esi),%edi
0874d757 +0x637:  mov    (%esi),%ecx
0874d759 +0x639:  cmp    %ecx,%edi
0874d75b +0x63b:  mov    %eax,%edx
0874d75d +0x63d:  je     0874d794 <+0x674>
0874d75f +0x63f:  lea    0x8(%ecx),%edx
0874d762 +0x642:  sub    %edx,%edi
0874d764 +0x644:  xor    %edx,%edx
0874d766 +0x646:  shr    $0x3,%edi
0874d769 +0x649:  add    $0x1,%edi
0874d76c +0x64c:  mov    %edi,-0x1c(%ebp)
0874d76f +0x64f:  mov    %esi,-0x24(%ebp)
0874d772 +0x652:  lea    0x0(%esi),%esi
0874d778 +0x658:  mov    (%ecx,%edx,8),%esi
0874d77b +0x65b:  mov    0x4(%ecx,%edx,8),%edi
0874d77f +0x65f:  mov    %esi,(%eax,%edx,8)
0874d782 +0x662:  mov    %edi,0x4(%eax,%edx,8)
0874d786 +0x666:  add    $0x1,%edx
0874d789 +0x669:  cmp    -0x1c(%ebp),%edx
0874d78c +0x66c:  jne    0874d778 <+0x658>
0874d78e +0x66e:  mov    -0x24(%ebp),%esi
0874d791 +0x671:  lea    (%eax,%edx,8),%edx
0874d794 +0x674:  mov    -0x14(%ebx),%ecx
0874d79a +0x67a:  movl   $0xf,(%edx)
0874d7a0 +0x680:  mov    %ecx,0x4(%edx)
0874d7a3 +0x683:  mov    (%esi),%ecx
0874d7a5 +0x685:  add    $0x8,%edx
0874d7a8 +0x688:  mov    %eax,(%esi)
0874d7aa +0x68a:  add    -0x20(%ebp),%eax
0874d7ad +0x68d:  mov    %edx,0x4(%esi)
0874d7b0 +0x690:  mov    %eax,0x8(%esi)
0874d7b3 +0x693:  movb   $0x0,0x4(%esp)
0874d7b8 +0x698:  mov    %ecx,(%esp)
0874d7bb +0x69b:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d7c0 +0x6a0:  mov    0x4(%esi),%eax
0874d7c3 +0x6a3:  cmp    %eax,0x8(%esi)
0874d7c6 +0x6a6:  jne    0874d25d <+0x13d>
0874d7cc +0x6ac:  lea    0x0(%esi,%eiz,1),%esi
0874d7d0 +0x6b0:  sub    (%esi),%eax
0874d7d2 +0x6b2:  sar    $0x3,%eax
0874d7d5 +0x6b5:  lea    0x1(%eax,%eax,1),%eax
0874d7d9 +0x6b9:  shl    $0x3,%eax
0874d7dc +0x6bc:  mov    %eax,-0x20(%ebp)
0874d7df +0x6bf:  movb   $0x0,0x4(%esp)
0874d7e4 +0x6c4:  mov    %eax,(%esp)
0874d7e7 +0x6c7:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d7ec +0x6cc:  mov    0x4(%esi),%edi
0874d7ef +0x6cf:  mov    (%esi),%ecx
0874d7f1 +0x6d1:  cmp    %ecx,%edi
0874d7f3 +0x6d3:  mov    %eax,%edx
0874d7f5 +0x6d5:  je     0874d82c <+0x70c>
0874d7f7 +0x6d7:  lea    0x8(%ecx),%edx
0874d7fa +0x6da:  sub    %edx,%edi
0874d7fc +0x6dc:  xor    %edx,%edx
0874d7fe +0x6de:  shr    $0x3,%edi
0874d801 +0x6e1:  add    $0x1,%edi
0874d804 +0x6e4:  mov    %edi,-0x1c(%ebp)
0874d807 +0x6e7:  mov    %esi,-0x24(%ebp)
0874d80a +0x6ea:  lea    0x0(%esi),%esi
0874d810 +0x6f0:  mov    (%ecx,%edx,8),%esi
0874d813 +0x6f3:  mov    0x4(%ecx,%edx,8),%edi
0874d817 +0x6f7:  mov    %esi,(%eax,%edx,8)
0874d81a +0x6fa:  mov    %edi,0x4(%eax,%edx,8)
0874d81e +0x6fe:  add    $0x1,%edx
0874d821 +0x701:  cmp    -0x1c(%ebp),%edx
0874d824 +0x704:  jne    0874d810 <+0x6f0>
0874d826 +0x706:  mov    -0x24(%ebp),%esi
0874d829 +0x709:  lea    (%eax,%edx,8),%edx
0874d82c +0x70c:  mov    -0x5c(%ebx),%ecx
0874d832 +0x712:  movl   $0x10,(%edx)
0874d838 +0x718:  mov    %ecx,0x4(%edx)
0874d83b +0x71b:  mov    (%esi),%ecx
0874d83d +0x71d:  add    $0x8,%edx
0874d840 +0x720:  mov    %eax,(%esi)
0874d842 +0x722:  add    -0x20(%ebp),%eax
0874d845 +0x725:  mov    %edx,0x4(%esi)
0874d848 +0x728:  mov    %eax,0x8(%esi)
0874d84b +0x72b:  movb   $0x0,0x4(%esp)
0874d850 +0x730:  mov    %ecx,(%esp)
0874d853 +0x733:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d858 +0x738:  mov    0x4(%esi),%eax
0874d85b +0x73b:  cmp    %eax,0x8(%esi)
0874d85e +0x73e:  jne    0874d27e <+0x15e>
0874d864 +0x744:  lea    0x0(%esi,%eiz,1),%esi
0874d868 +0x748:  sub    (%esi),%eax
0874d86a +0x74a:  sar    $0x3,%eax
0874d86d +0x74d:  lea    0x1(%eax,%eax,1),%eax
0874d871 +0x751:  shl    $0x3,%eax
0874d874 +0x754:  mov    %eax,-0x20(%ebp)
0874d877 +0x757:  movb   $0x0,0x4(%esp)
0874d87c +0x75c:  mov    %eax,(%esp)
0874d87f +0x75f:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874d884 +0x764:  mov    0x4(%esi),%edi
0874d887 +0x767:  mov    (%esi),%ecx
0874d889 +0x769:  cmp    %ecx,%edi
0874d88b +0x76b:  mov    %eax,%edx
0874d88d +0x76d:  je     0874d8c4 <+0x7a4>
0874d88f +0x76f:  lea    0x8(%ecx),%edx
0874d892 +0x772:  sub    %edx,%edi
0874d894 +0x774:  xor    %edx,%edx
0874d896 +0x776:  shr    $0x3,%edi
0874d899 +0x779:  add    $0x1,%edi
0874d89c +0x77c:  mov    %edi,-0x1c(%ebp)
0874d89f +0x77f:  mov    %esi,-0x24(%ebp)
0874d8a2 +0x782:  lea    0x0(%esi),%esi
0874d8a8 +0x788:  mov    (%ecx,%edx,8),%esi
0874d8ab +0x78b:  mov    0x4(%ecx,%edx,8),%edi
0874d8af +0x78f:  mov    %esi,(%eax,%edx,8)
0874d8b2 +0x792:  mov    %edi,0x4(%eax,%edx,8)
0874d8b6 +0x796:  add    $0x1,%edx
0874d8b9 +0x799:  cmp    -0x1c(%ebp),%edx
0874d8bc +0x79c:  jne    0874d8a8 <+0x788>
0874d8be +0x79e:  mov    -0x24(%ebp),%esi
0874d8c1 +0x7a1:  lea    (%eax,%edx,8),%edx
0874d8c4 +0x7a4:  mov    -0x4c8(%ebx),%ecx
0874d8ca +0x7aa:  movl   $0x14,(%edx)
0874d8d0 +0x7b0:  mov    %ecx,0x4(%edx)
0874d8d3 +0x7b3:  mov    (%esi),%ecx
0874d8d5 +0x7b5:  add    $0x8,%edx
0874d8d8 +0x7b8:  mov    %eax,(%esi)
0874d8da +0x7ba:  add    -0x20(%ebp),%eax
0874d8dd +0x7bd:  mov    %edx,0x4(%esi)
0874d8e0 +0x7c0:  mov    %eax,0x8(%esi)
0874d8e3 +0x7c3:  movb   $0x0,0x4(%esp)
0874d8e8 +0x7c8:  mov    %ecx,(%esp)
0874d8eb +0x7cb:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874d8f0 +0x7d0:  add    $0x2c,%esp
0874d8f3 +0x7d3:  pop    %ebx
0874d8f4 +0x7d4:  pop    %esi
0874d8f5 +0x7d5:  pop    %edi
0874d8f6 +0x7d6:  pop    %ebp
0874d8f7 +0x7d7:  ret
0874d8f8 +0x7d8:  nop
0874d8f9 +0x7d9:  nop
0874d8fa +0x7da:  nop
0874d8fb +0x7db:  nop
0874d8fc +0x7dc:  nop
0874d8fd +0x7dd:  nop
0874d8fe +0x7de:  nop
0874d8ff +0x7df:  nop
0874d900 +0x7e0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874d905 +0x7e5:  add    $0xc1f293,%ecx
0874d90b +0x7eb:  push   %ebp
0874d90c +0x7ec:  mov    %esp,%ebp
0874d90e +0x7ee:  mov    -0x458(%ecx),%eax
0874d914 +0x7f4:  lea    0x8(%eax),%edx
0874d917 +0x7f7:  mov    0x8(%ebp),%eax
0874d91a +0x7fa:  mov    %edx,(%eax)
0874d91c +0x7fc:  pop    %ebp
0874d91d +0x7fd:  ret
0874d91e +0x7fe:  nop
0874d91f +0x7ff:  nop
0874d920 +0x800:  call   087245c4 <__i686.get_pc_thunk.cx>
0874d925 +0x805:  add    $0xc1f273,%ecx
0874d92b +0x80b:  push   %ebp
0874d92c +0x80c:  mov    %esp,%ebp
0874d92e +0x80e:  mov    -0x458(%ecx),%eax
0874d934 +0x814:  lea    0x8(%eax),%edx
0874d937 +0x817:  mov    0x8(%ebp),%eax
0874d93a +0x81a:  mov    %edx,(%eax)
0874d93c +0x81c:  pop    %ebp
0874d93d +0x81d:  ret
0874d93e +0x81e:  nop
0874d93f +0x81f:  nop
0874d940 +0x820:  push   %ebp
0874d941 +0x821:  mov    %esp,%ebp
0874d943 +0x823:  pop    %ebp
0874d944 +0x824:  ret
0874d945 +0x825:  nop
0874d946 +0x826:  nop
0874d947 +0x827:  nop
0874d948 +0x828:  nop
0874d949 +0x829:  nop
0874d94a +0x82a:  nop
0874d94b +0x82b:  nop
0874d94c +0x82c:  nop
0874d94d +0x82d:  nop
0874d94e +0x82e:  nop
0874d94f +0x82f:  nop
0874d950 +0x830:  push   %ebp
0874d951 +0x831:  mov    %esp,%ebp
0874d953 +0x833:  pop    %ebp
0874d954 +0x834:  ret
0874d955 +0x835:  nop
0874d956 +0x836:  nop
0874d957 +0x837:  nop
0874d958 +0x838:  nop
0874d959 +0x839:  nop
0874d95a +0x83a:  nop
0874d95b +0x83b:  nop
0874d95c +0x83c:  nop
0874d95d +0x83d:  nop
0874d95e +0x83e:  nop
0874d95f +0x83f:  nop
0874d960 +0x840:  call   087245c4 <__i686.get_pc_thunk.cx>
0874d965 +0x845:  add    $0xc1f233,%ecx
0874d96b +0x84b:  push   %ebp
0874d96c +0x84c:  mov    %esp,%ebp
0874d96e +0x84e:  mov    -0x18(%ecx),%eax
0874d974 +0x854:  lea    0x8(%eax),%edx
0874d977 +0x857:  mov    0x8(%ebp),%eax
0874d97a +0x85a:  mov    %edx,(%eax)
0874d97c +0x85c:  pop    %ebp
0874d97d +0x85d:  ret
0874d97e +0x85e:  nop
0874d97f +0x85f:  nop
0874d980 +0x860:  call   087245c4 <__i686.get_pc_thunk.cx>
0874d985 +0x865:  add    $0xc1f213,%ecx
0874d98b +0x86b:  push   %ebp
0874d98c +0x86c:  mov    %esp,%ebp
0874d98e +0x86e:  mov    -0x18(%ecx),%eax
0874d994 +0x874:  lea    0x8(%eax),%edx
0874d997 +0x877:  mov    0x8(%ebp),%eax
0874d99a +0x87a:  mov    %edx,(%eax)
0874d99c +0x87c:  pop    %ebp
0874d99d +0x87d:  ret
0874d99e +0x87e:  nop
0874d99f +0x87f:  nop
0874d9a0 +0x880:  push   %ebp
0874d9a1 +0x881:  mov    %esp,%ebp
0874d9a3 +0x883:  pop    %ebp
0874d9a4 +0x884:  ret
0874d9a5 +0x885:  nop
0874d9a6 +0x886:  nop
0874d9a7 +0x887:  nop
0874d9a8 +0x888:  nop
0874d9a9 +0x889:  nop
0874d9aa +0x88a:  nop
0874d9ab +0x88b:  nop
0874d9ac +0x88c:  nop
0874d9ad +0x88d:  nop
0874d9ae +0x88e:  nop
0874d9af +0x88f:  nop
0874d9b0 +0x890:  push   %ebp
0874d9b1 +0x891:  mov    %esp,%ebp
0874d9b3 +0x893:  pop    %ebp
0874d9b4 +0x894:  ret
0874d9b5 +0x895:  nop
0874d9b6 +0x896:  nop
0874d9b7 +0x897:  nop
0874d9b8 +0x898:  nop
0874d9b9 +0x899:  nop
0874d9ba +0x89a:  nop
0874d9bb +0x89b:  nop
0874d9bc +0x89c:  nop
0874d9bd +0x89d:  nop
0874d9be +0x89e:  nop
0874d9bf +0x89f:  nop
0874d9c0 +0x8a0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874d9c5 +0x8a5:  add    $0xc1f1d3,%ecx
0874d9cb +0x8ab:  push   %ebp
0874d9cc +0x8ac:  mov    %esp,%ebp
0874d9ce +0x8ae:  mov    -0x5b4(%ecx),%eax
0874d9d4 +0x8b4:  lea    0x8(%eax),%edx
0874d9d7 +0x8b7:  mov    0x8(%ebp),%eax
0874d9da +0x8ba:  mov    %edx,(%eax)
0874d9dc +0x8bc:  pop    %ebp
0874d9dd +0x8bd:  ret
0874d9de +0x8be:  nop
0874d9df +0x8bf:  nop
0874d9e0 +0x8c0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874d9e5 +0x8c5:  add    $0xc1f1b3,%ecx
0874d9eb +0x8cb:  push   %ebp
0874d9ec +0x8cc:  mov    %esp,%ebp
0874d9ee +0x8ce:  mov    -0x5b4(%ecx),%eax
0874d9f4 +0x8d4:  lea    0x8(%eax),%edx
0874d9f7 +0x8d7:  mov    0x8(%ebp),%eax
0874d9fa +0x8da:  mov    %edx,(%eax)
0874d9fc +0x8dc:  pop    %ebp
0874d9fd +0x8dd:  ret
0874d9fe +0x8de:  nop
0874d9ff +0x8df:  nop
0874da00 +0x8e0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874da05 +0x8e5:  add    $0xc1f193,%ecx
0874da0b +0x8eb:  push   %ebp
0874da0c +0x8ec:  mov    %esp,%ebp
0874da0e +0x8ee:  mov    -0x5b4(%ecx),%eax
0874da14 +0x8f4:  lea    0x8(%eax),%edx
0874da17 +0x8f7:  mov    0x8(%ebp),%eax
0874da1a +0x8fa:  mov    %edx,(%eax)
0874da1c +0x8fc:  pop    %ebp
0874da1d +0x8fd:  ret
0874da1e +0x8fe:  nop
0874da1f +0x8ff:  nop
0874da20 +0x900:  call   087245c4 <__i686.get_pc_thunk.cx>
0874da25 +0x905:  add    $0xc1f173,%ecx
0874da2b +0x90b:  push   %ebp
0874da2c +0x90c:  mov    %esp,%ebp
0874da2e +0x90e:  mov    -0x5b4(%ecx),%eax
0874da34 +0x914:  lea    0x8(%eax),%edx
0874da37 +0x917:  mov    0x8(%ebp),%eax
0874da3a +0x91a:  mov    %edx,(%eax)
0874da3c +0x91c:  pop    %ebp
0874da3d +0x91d:  ret
0874da3e +0x91e:  nop
0874da3f +0x91f:  nop
0874da40 +0x920:  call   087245c4 <__i686.get_pc_thunk.cx>
0874da45 +0x925:  add    $0xc1f153,%ecx
0874da4b +0x92b:  push   %ebp
0874da4c +0x92c:  mov    %esp,%ebp
0874da4e +0x92e:  mov    -0x5b4(%ecx),%eax
0874da54 +0x934:  lea    0x8(%eax),%edx
0874da57 +0x937:  mov    0x8(%ebp),%eax
0874da5a +0x93a:  mov    %edx,(%eax)
0874da5c +0x93c:  pop    %ebp
0874da5d +0x93d:  ret
0874da5e +0x93e:  nop
0874da5f +0x93f:  nop
0874da60 +0x940:  call   087245c4 <__i686.get_pc_thunk.cx>
0874da65 +0x945:  add    $0xc1f133,%ecx
0874da6b +0x94b:  push   %ebp
0874da6c +0x94c:  mov    %esp,%ebp
0874da6e +0x94e:  mov    -0x5b4(%ecx),%eax
0874da74 +0x954:  lea    0x8(%eax),%edx
0874da77 +0x957:  mov    0x8(%ebp),%eax
0874da7a +0x95a:  mov    %edx,(%eax)
0874da7c +0x95c:  pop    %ebp
0874da7d +0x95d:  ret
0874da7e +0x95e:  nop
0874da7f +0x95f:  nop
0874da80 +0x960:  call   087245c4 <__i686.get_pc_thunk.cx>
0874da85 +0x965:  add    $0xc1f113,%ecx
0874da8b +0x96b:  push   %ebp
0874da8c +0x96c:  mov    %esp,%ebp
0874da8e +0x96e:  mov    -0x5b4(%ecx),%eax
0874da94 +0x974:  lea    0x8(%eax),%edx
0874da97 +0x977:  mov    0x8(%ebp),%eax
0874da9a +0x97a:  mov    %edx,(%eax)
0874da9c +0x97c:  pop    %ebp
0874da9d +0x97d:  ret
0874da9e +0x97e:  nop
0874da9f +0x97f:  nop
0874daa0 +0x980:  call   087245c4 <__i686.get_pc_thunk.cx>
0874daa5 +0x985:  add    $0xc1f0f3,%ecx
0874daab +0x98b:  push   %ebp
0874daac +0x98c:  mov    %esp,%ebp
0874daae +0x98e:  mov    -0x5b4(%ecx),%eax
0874dab4 +0x994:  lea    0x8(%eax),%edx
0874dab7 +0x997:  mov    0x8(%ebp),%eax
0874daba +0x99a:  mov    %edx,(%eax)
0874dabc +0x99c:  pop    %ebp
0874dabd +0x99d:  ret
0874dabe +0x99e:  nop
0874dabf +0x99f:  nop
0874dac0 +0x9a0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dac5 +0x9a5:  add    $0xc1f0d3,%ecx
0874dacb +0x9ab:  push   %ebp
0874dacc +0x9ac:  mov    %esp,%ebp
0874dace +0x9ae:  mov    -0x5b4(%ecx),%eax
0874dad4 +0x9b4:  lea    0x8(%eax),%edx
0874dad7 +0x9b7:  mov    0x8(%ebp),%eax
0874dada +0x9ba:  mov    %edx,(%eax)
0874dadc +0x9bc:  pop    %ebp
0874dadd +0x9bd:  ret
0874dade +0x9be:  nop
0874dadf +0x9bf:  nop
0874dae0 +0x9c0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dae5 +0x9c5:  add    $0xc1f0b3,%ecx
0874daeb +0x9cb:  push   %ebp
0874daec +0x9cc:  mov    %esp,%ebp
0874daee +0x9ce:  mov    -0x5b4(%ecx),%eax
0874daf4 +0x9d4:  lea    0x8(%eax),%edx
0874daf7 +0x9d7:  mov    0x8(%ebp),%eax
0874dafa +0x9da:  mov    %edx,(%eax)
0874dafc +0x9dc:  pop    %ebp
0874dafd +0x9dd:  ret
0874dafe +0x9de:  nop
0874daff +0x9df:  nop
0874db00 +0x9e0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874db05 +0x9e5:  add    $0xc1f093,%ecx
0874db0b +0x9eb:  push   %ebp
0874db0c +0x9ec:  mov    %esp,%ebp
0874db0e +0x9ee:  mov    -0x420(%ecx),%eax
0874db14 +0x9f4:  lea    0x8(%eax),%edx
0874db17 +0x9f7:  mov    0x8(%ebp),%eax
0874db1a +0x9fa:  mov    %edx,(%eax)
0874db1c +0x9fc:  pop    %ebp
0874db1d +0x9fd:  ret
0874db1e +0x9fe:  nop
0874db1f +0x9ff:  nop
0874db20 +0xa00:  call   087245c4 <__i686.get_pc_thunk.cx>
0874db25 +0xa05:  add    $0xc1f073,%ecx
0874db2b +0xa0b:  push   %ebp
0874db2c +0xa0c:  mov    %esp,%ebp
0874db2e +0xa0e:  mov    -0x420(%ecx),%eax
0874db34 +0xa14:  lea    0x8(%eax),%edx
0874db37 +0xa17:  mov    0x8(%ebp),%eax
0874db3a +0xa1a:  mov    %edx,(%eax)
0874db3c +0xa1c:  pop    %ebp
0874db3d +0xa1d:  ret
0874db3e +0xa1e:  nop
0874db3f +0xa1f:  nop
0874db40 +0xa20:  call   087245c4 <__i686.get_pc_thunk.cx>
0874db45 +0xa25:  add    $0xc1f053,%ecx
0874db4b +0xa2b:  push   %ebp
0874db4c +0xa2c:  mov    %esp,%ebp
0874db4e +0xa2e:  mov    -0x420(%ecx),%eax
0874db54 +0xa34:  lea    0x8(%eax),%edx
0874db57 +0xa37:  mov    0x8(%ebp),%eax
0874db5a +0xa3a:  mov    %edx,(%eax)
0874db5c +0xa3c:  pop    %ebp
0874db5d +0xa3d:  ret
0874db5e +0xa3e:  nop
0874db5f +0xa3f:  nop
0874db60 +0xa40:  call   087245c4 <__i686.get_pc_thunk.cx>
0874db65 +0xa45:  add    $0xc1f033,%ecx
0874db6b +0xa4b:  push   %ebp
0874db6c +0xa4c:  mov    %esp,%ebp
0874db6e +0xa4e:  mov    -0x420(%ecx),%eax
0874db74 +0xa54:  lea    0x8(%eax),%edx
0874db77 +0xa57:  mov    0x8(%ebp),%eax
0874db7a +0xa5a:  mov    %edx,(%eax)
0874db7c +0xa5c:  pop    %ebp
0874db7d +0xa5d:  ret
0874db7e +0xa5e:  nop
0874db7f +0xa5f:  nop
0874db80 +0xa60:  call   087245c4 <__i686.get_pc_thunk.cx>
0874db85 +0xa65:  add    $0xc1f013,%ecx
0874db8b +0xa6b:  push   %ebp
0874db8c +0xa6c:  mov    %esp,%ebp
0874db8e +0xa6e:  mov    -0x420(%ecx),%eax
0874db94 +0xa74:  lea    0x8(%eax),%edx
0874db97 +0xa77:  mov    0x8(%ebp),%eax
0874db9a +0xa7a:  mov    %edx,(%eax)
0874db9c +0xa7c:  pop    %ebp
0874db9d +0xa7d:  ret
0874db9e +0xa7e:  nop
0874db9f +0xa7f:  nop
0874dba0 +0xa80:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dba5 +0xa85:  add    $0xc1eff3,%ecx
0874dbab +0xa8b:  push   %ebp
0874dbac +0xa8c:  mov    %esp,%ebp
0874dbae +0xa8e:  mov    -0x420(%ecx),%eax
0874dbb4 +0xa94:  lea    0x8(%eax),%edx
0874dbb7 +0xa97:  mov    0x8(%ebp),%eax
0874dbba +0xa9a:  mov    %edx,(%eax)
0874dbbc +0xa9c:  pop    %ebp
0874dbbd +0xa9d:  ret
0874dbbe +0xa9e:  nop
0874dbbf +0xa9f:  nop
0874dbc0 +0xaa0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dbc5 +0xaa5:  add    $0xc1efd3,%ecx
0874dbcb +0xaab:  push   %ebp
0874dbcc +0xaac:  mov    %esp,%ebp
0874dbce +0xaae:  mov    -0x5b4(%ecx),%eax
0874dbd4 +0xab4:  lea    0x8(%eax),%edx
0874dbd7 +0xab7:  mov    0x8(%ebp),%eax
0874dbda +0xaba:  mov    %edx,(%eax)
0874dbdc +0xabc:  pop    %ebp
0874dbdd +0xabd:  ret
0874dbde +0xabe:  nop
0874dbdf +0xabf:  nop
0874dbe0 +0xac0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dbe5 +0xac5:  add    $0xc1efb3,%ecx
0874dbeb +0xacb:  push   %ebp
0874dbec +0xacc:  mov    %esp,%ebp
0874dbee +0xace:  mov    -0x5b4(%ecx),%eax
0874dbf4 +0xad4:  lea    0x8(%eax),%edx
0874dbf7 +0xad7:  mov    0x8(%ebp),%eax
0874dbfa +0xada:  mov    %edx,(%eax)
0874dbfc +0xadc:  pop    %ebp
0874dbfd +0xadd:  ret
0874dbfe +0xade:  nop
0874dbff +0xadf:  nop
0874dc00 +0xae0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dc05 +0xae5:  add    $0xc1ef93,%ecx
0874dc0b +0xaeb:  push   %ebp
0874dc0c +0xaec:  mov    %esp,%ebp
0874dc0e +0xaee:  mov    -0x420(%ecx),%eax
0874dc14 +0xaf4:  lea    0x8(%eax),%edx
0874dc17 +0xaf7:  mov    0x8(%ebp),%eax
0874dc1a +0xafa:  mov    %edx,(%eax)
0874dc1c +0xafc:  pop    %ebp
0874dc1d +0xafd:  ret
0874dc1e +0xafe:  nop
0874dc1f +0xaff:  nop
0874dc20 +0xb00:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dc25 +0xb05:  add    $0xc1ef73,%ecx
0874dc2b +0xb0b:  push   %ebp
0874dc2c +0xb0c:  mov    %esp,%ebp
0874dc2e +0xb0e:  mov    -0x420(%ecx),%eax
0874dc34 +0xb14:  lea    0x8(%eax),%edx
0874dc37 +0xb17:  mov    0x8(%ebp),%eax
0874dc3a +0xb1a:  mov    %edx,(%eax)
0874dc3c +0xb1c:  pop    %ebp
0874dc3d +0xb1d:  ret
0874dc3e +0xb1e:  nop
0874dc3f +0xb1f:  nop
0874dc40 +0xb20:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dc45 +0xb25:  add    $0xc1ef53,%ecx
0874dc4b +0xb2b:  push   %ebp
0874dc4c +0xb2c:  mov    %esp,%ebp
0874dc4e +0xb2e:  mov    -0x18(%ecx),%eax
0874dc54 +0xb34:  lea    0x8(%eax),%edx
0874dc57 +0xb37:  mov    0x8(%ebp),%eax
0874dc5a +0xb3a:  mov    %edx,(%eax)
0874dc5c +0xb3c:  pop    %ebp
0874dc5d +0xb3d:  ret
0874dc5e +0xb3e:  nop
0874dc5f +0xb3f:  nop
0874dc60 +0xb40:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dc65 +0xb45:  add    $0xc1ef33,%ecx
0874dc6b +0xb4b:  push   %ebp
0874dc6c +0xb4c:  mov    %esp,%ebp
0874dc6e +0xb4e:  mov    -0x18(%ecx),%eax
0874dc74 +0xb54:  lea    0x8(%eax),%edx
0874dc77 +0xb57:  mov    0x8(%ebp),%eax
0874dc7a +0xb5a:  mov    %edx,(%eax)
0874dc7c +0xb5c:  pop    %ebp
0874dc7d +0xb5d:  ret
0874dc7e +0xb5e:  nop
0874dc7f +0xb5f:  nop
0874dc80 +0xb60:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dc85 +0xb65:  add    $0xc1ef13,%ecx
0874dc8b +0xb6b:  push   %ebp
0874dc8c +0xb6c:  mov    %esp,%ebp
0874dc8e +0xb6e:  mov    -0x458(%ecx),%eax
0874dc94 +0xb74:  lea    0x8(%eax),%edx
0874dc97 +0xb77:  mov    0x8(%ebp),%eax
0874dc9a +0xb7a:  mov    %edx,(%eax)
0874dc9c +0xb7c:  pop    %ebp
0874dc9d +0xb7d:  ret
0874dc9e +0xb7e:  nop
0874dc9f +0xb7f:  nop
0874dca0 +0xb80:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dca5 +0xb85:  add    $0xc1eef3,%ecx
0874dcab +0xb8b:  push   %ebp
0874dcac +0xb8c:  mov    %esp,%ebp
0874dcae +0xb8e:  mov    -0x458(%ecx),%eax
0874dcb4 +0xb94:  lea    0x8(%eax),%edx
0874dcb7 +0xb97:  mov    0x8(%ebp),%eax
0874dcba +0xb9a:  mov    %edx,(%eax)
0874dcbc +0xb9c:  pop    %ebp
0874dcbd +0xb9d:  ret
0874dcbe +0xb9e:  nop
0874dcbf +0xb9f:  nop
0874dcc0 +0xba0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dcc5 +0xba5:  add    $0xc1eed3,%ecx
0874dccb +0xbab:  push   %ebp
0874dccc +0xbac:  mov    %esp,%ebp
0874dcce +0xbae:  mov    -0x458(%ecx),%eax
0874dcd4 +0xbb4:  lea    0x8(%eax),%edx
0874dcd7 +0xbb7:  mov    0x8(%ebp),%eax
0874dcda +0xbba:  mov    %edx,(%eax)
0874dcdc +0xbbc:  pop    %ebp
0874dcdd +0xbbd:  ret
0874dcde +0xbbe:  nop
0874dcdf +0xbbf:  nop
0874dce0 +0xbc0:  call   087245c4 <__i686.get_pc_thunk.cx>
0874dce5 +0xbc5:  add    $0xc1eeb3,%ecx
0874dceb +0xbcb:  push   %ebp
0874dcec +0xbcc:  mov    %esp,%ebp
0874dcee +0xbce:  mov    -0x458(%ecx),%eax
0874dcf4 +0xbd4:  lea    0x8(%eax),%edx
0874dcf7 +0xbd7:  mov    0x8(%ebp),%eax
0874dcfa +0xbda:  mov    %edx,(%eax)
0874dcfc +0xbdc:  pop    %ebp
0874dcfd +0xbdd:  ret
0874dcfe +0xbde:  nop
0874dcff +0xbdf:  nop
```

## 反编译 C

```c
// yaSSL::InitHandShakeFactory @ 0x874d120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitHandShakeFactory(yaSSL::Factory<yaSSL::HandShakeBase, int, yaSSL::HandShakeBase*
   (*)()>&) */

void yaSSL::InitHandShakeFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 10) {
    pvVar5 = operator_new__(0x50,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x50;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874d155;
LAB_0874d314:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateHelloRequest_0936cac4;
    *puVar4 = 0;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d176;
LAB_0874d3a8:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateClientHello_0936ca28;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d197;
LAB_0874d440:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateServerHello_0936caa8;
    *puVar4 = 2;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d1b8;
LAB_0874d4d8:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCertificate_0936cb74;
    *puVar4 = 0xb;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d1d9;
LAB_0874d570:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateServerKeyExchange_0936cae4;
    *puVar4 = 0xc;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (puVar4 != *(undefined4 **)(param_1 + 8)) goto LAB_0874d1fa;
LAB_0874d608:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCertificateRequest_0936c80c;
    *puVar4 = 0xd;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (puVar4 != *(undefined4 **)(param_1 + 8)) goto LAB_0874d21b;
LAB_0874d6a0:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateServerHelloDone_0936c7f8;
    *puVar4 = 0xe;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874d23c;
LAB_0874d738:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateCertificateVerify_0936cb84;
    *puVar4 = 0xf;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d7d0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874d314;
LAB_0874d155:
    puVar3 = PTR_CreateHelloRequest_0936cac4;
    *puVar6 = 0;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d3a8;
LAB_0874d176:
    puVar3 = PTR_CreateClientHello_0936ca28;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d440;
LAB_0874d197:
    puVar3 = PTR_CreateServerHello_0936caa8;
    *puVar4 = 2;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d4d8;
LAB_0874d1b8:
    puVar3 = PTR_CreateCertificate_0936cb74;
    *puVar4 = 0xb;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d570;
LAB_0874d1d9:
    puVar3 = PTR_CreateServerKeyExchange_0936cae4;
    *puVar4 = 0xc;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (puVar4 == *(undefined4 **)(param_1 + 8)) goto LAB_0874d608;
LAB_0874d1fa:
    puVar3 = PTR_CreateCertificateRequest_0936c80c;
    *puVar4 = 0xd;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (puVar4 == *(undefined4 **)(param_1 + 8)) goto LAB_0874d6a0;
LAB_0874d21b:
    puVar3 = PTR_CreateServerHelloDone_0936c7f8;
    *puVar4 = 0xe;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d738;
LAB_0874d23c:
    puVar3 = PTR_CreateCertificateVerify_0936cb84;
    *puVar4 = 0xf;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874d7d0:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateClientKeyExchange_0936cb3c;
      *puVar4 = 0x10;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874d868;
      goto LAB_0874d27e;
    }
  }
  puVar3 = PTR_CreateClientKeyExchange_0936cb3c;
  *puVar4 = 0x10;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874d868:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateFinished_0936c6d0;
    *puVar4 = 0x14;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874d27e:
  puVar3 = PTR_CreateFinished_0936c6d0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 0x14;
  puVar4[1] = puVar3;
  return;
}
```
