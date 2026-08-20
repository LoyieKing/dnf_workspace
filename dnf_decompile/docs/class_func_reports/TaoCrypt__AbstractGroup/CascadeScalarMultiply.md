# CascadeScalarMultiply

`_ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_`

`TaoCrypt::AbstractGroup::CascadeScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractGroup` | `0x087a40d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a40d0  _ZNK8TaoCrypt13AbstractGroup21CascadeScalarMultiplyERKNS_7IntegerES3_S3_S3_
#           TaoCrypt::AbstractGroup::CascadeScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a40d0, 0x087a483a]
087a40d0 +0x000:  push   %ebp
087a40d1 +0x001:  mov    %esp,%ebp
087a40d3 +0x003:  push   %edi
087a40d4 +0x004:  push   %esi
087a40d5 +0x005:  push   %ebx
087a40d6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a40db +0x00b:  add    $0xbc8abd,%ebx
087a40e1 +0x011:  sub    $0x8c,%esp
087a40e7 +0x017:  mov    0x1c(%ebp),%eax
087a40ea +0x01a:  mov    0xc(%ebp),%esi
087a40ed +0x01d:  mov    %eax,(%esp)
087a40f0 +0x020:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
087a40f5 +0x025:  mov    0x14(%ebp),%edx
087a40f8 +0x028:  mov    %edx,(%esp)
087a40fb +0x02b:  mov    %eax,%edi
087a40fd +0x02d:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
087a4102 +0x032:  cmp    %edi,%eax
087a4104 +0x034:  cmovae %eax,%edi
087a4107 +0x037:  test   %edi,%edi
087a4109 +0x039:  mov    %edi,-0x70(%ebp)
087a410c +0x03c:  je     087a480c <+0x73c>
087a4112 +0x042:  cmpl   $0x2e,-0x70(%ebp)
087a4116 +0x046:  ja     087a4681 <+0x5b1>
087a411c +0x04c:  mov    $0x40,%eax
087a4121 +0x051:  movl   $0x20,-0x44(%ebp)
087a4128 +0x058:  movl   $0x4,-0x48(%ebp)
087a412f +0x05f:  movl   $0x2,-0x4c(%ebp)
087a4136 +0x066:  movl   $0x1,-0x74(%ebp)
087a413d +0x06d:  movl   $0x1,-0x58(%ebp)
087a4144 +0x074:  movb   $0x0,0x4(%esp)
087a4149 +0x079:  mov    %eax,(%esp)
087a414c +0x07c:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a4151 +0x081:  lea    -0x38(%ebp),%ecx
087a4154 +0x084:  mov    %ecx,-0x3c(%ebp)
087a4157 +0x087:  mov    %ecx,(%esp)
087a415a +0x08a:  mov    %eax,-0x40(%ebp)
087a415d +0x08d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a4162 +0x092:  mov    -0x48(%ebp),%eax
087a4165 +0x095:  mov    -0x40(%ebp),%edi
087a4168 +0x098:  mov    %esi,-0x5c(%ebp)
087a416b +0x09b:  mov    %eax,%esi
087a416d +0x09d:  lea    0x0(%esi),%esi
087a4170 +0x0a0:  mov    -0x3c(%ebp),%eax
087a4173 +0x0a3:  mov    %edi,(%esp)
087a4176 +0x0a6:  add    $0x10,%edi
087a4179 +0x0a9:  mov    %eax,0x4(%esp)
087a417d +0x0ad:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4182 +0x0b2:  sub    $0x1,%esi
087a4185 +0x0b5:  jne    087a4170 <+0xa0>
087a4187 +0x0b7:  mov    -0x48(%ebp),%eax
087a418a +0x0ba:  mov    -0x34(%ebp),%edi
087a418d +0x0bd:  mov    -0x5c(%ebp),%esi
087a4190 +0x0c0:  movl   $0x0,0x4(%esp)
087a4198 +0x0c8:  shl    $0x4,%eax
087a419b +0x0cb:  add    -0x40(%ebp),%eax
087a419e +0x0ce:  mov    %edi,(%esp)
087a41a1 +0x0d1:  mov    %eax,-0x68(%ebp)
087a41a4 +0x0d4:  mov    -0x38(%ebp),%eax
087a41a7 +0x0d7:  shl    $0x2,%eax
087a41aa +0x0da:  mov    %eax,0x8(%esp)
087a41ae +0x0de:  call   0807dcc0 <_init+0x5b8>
087a41b3 +0x0e3:  movb   $0x0,0x4(%esp)
087a41b8 +0x0e8:  mov    %edi,(%esp)
087a41bb +0x0eb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a41c0 +0x0f0:  mov    -0x40(%ebp),%eax
087a41c3 +0x0f3:  mov    0x10(%ebp),%edx
087a41c6 +0x0f6:  add    $0x10,%eax
087a41c9 +0x0f9:  mov    %edx,0x4(%esp)
087a41cd +0x0fd:  mov    %eax,(%esp)
087a41d0 +0x100:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a41d5 +0x105:  mov    0x18(%ebp),%ecx
087a41d8 +0x108:  mov    -0x40(%ebp),%eax
087a41db +0x10b:  add    -0x44(%ebp),%eax
087a41de +0x10e:  mov    %ecx,0x4(%esp)
087a41e2 +0x112:  mov    %eax,(%esp)
087a41e5 +0x115:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a41ea +0x11a:  cmpl   $0x1,-0x58(%ebp)
087a41ee +0x11e:  je     087a47df <+0x70f>
087a41f4 +0x124:  mov    0x10(%ebp),%edx
087a41f7 +0x127:  mov    (%esi),%eax
087a41f9 +0x129:  mov    %esi,(%esp)
087a41fc +0x12c:  mov    %edx,0x4(%esp)
087a4200 +0x130:  call   *0x1c(%eax)
087a4203 +0x133:  mov    -0x40(%ebp),%ecx
087a4206 +0x136:  add    $0x20,%ecx
087a4209 +0x139:  mov    %ecx,-0x3c(%ebp)
087a420c +0x13c:  mov    %ecx,(%esp)
087a420f +0x13f:  mov    %eax,0x4(%esp)
087a4213 +0x143:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4218 +0x148:  mov    (%esi),%eax
087a421a +0x14a:  mov    0x18(%ebp),%edx
087a421d +0x14d:  mov    %esi,(%esp)
087a4220 +0x150:  mov    %edx,0x4(%esp)
087a4224 +0x154:  call   *0x1c(%eax)
087a4227 +0x157:  mov    -0x4c(%ebp),%ecx
087a422a +0x15a:  mov    -0x4c(%ebp),%edx
087a422d +0x15d:  add    %ecx,%ecx
087a422f +0x15f:  mov    %ecx,-0x58(%ebp)
087a4232 +0x162:  mov    -0x40(%ebp),%ecx
087a4235 +0x165:  shl    $0x5,%edx
087a4238 +0x168:  mov    %edx,-0x64(%ebp)
087a423b +0x16b:  mov    %eax,0x4(%esp)
087a423f +0x16f:  add    %edx,%ecx
087a4241 +0x171:  mov    %ecx,-0x6c(%ebp)
087a4244 +0x174:  mov    %ecx,(%esp)
087a4247 +0x177:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a424c +0x17c:  cmpl   $0x3,-0x4c(%ebp)
087a4250 +0x180:  jbe    087a42a7 <+0x1d7>
087a4252 +0x182:  mov    $0x10,%edx
087a4257 +0x187:  mov    %esi,%eax
087a4259 +0x189:  mov    $0x3,%edi
087a425e +0x18e:  mov    %edx,%esi
087a4260 +0x190:  mov    %eax,%edx
087a4262 +0x192:  lea    0x0(%esi),%esi
087a4268 +0x198:  mov    -0x3c(%ebp),%eax
087a426b +0x19b:  mov    (%edx),%ecx
087a426d +0x19d:  mov    %edx,-0x78(%ebp)
087a4270 +0x1a0:  mov    %edx,(%esp)
087a4273 +0x1a3:  mov    %eax,0x8(%esp)
087a4277 +0x1a7:  mov    -0x40(%ebp),%eax
087a427a +0x1aa:  add    %esi,%eax
087a427c +0x1ac:  add    $0x20,%esi
087a427f +0x1af:  mov    %eax,0x4(%esp)
087a4283 +0x1b3:  call   *0x10(%ecx)
087a4286 +0x1b6:  mov    %eax,0x4(%esp)
087a428a +0x1ba:  mov    %edi,%eax
087a428c +0x1bc:  add    $0x2,%edi
087a428f +0x1bf:  shl    $0x4,%eax
087a4292 +0x1c2:  add    -0x40(%ebp),%eax
087a4295 +0x1c5:  mov    %eax,(%esp)
087a4298 +0x1c8:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a429d +0x1cd:  mov    -0x78(%ebp),%edx
087a42a0 +0x1d0:  cmp    -0x4c(%ebp),%edi
087a42a3 +0x1d3:  jb     087a4268 <+0x198>
087a42a5 +0x1d5:  mov    %edx,%esi
087a42a7 +0x1d7:  mov    -0x4c(%ebp),%edx
087a42aa +0x1da:  mov    -0x4c(%ebp),%ecx
087a42ad +0x1dd:  movl   $0x1,-0x5c(%ebp)
087a42b4 +0x1e4:  add    $0x1,%edx
087a42b7 +0x1e7:  shl    $0x4,%edx
087a42ba +0x1ea:  shl    $0x4,%ecx
087a42bd +0x1ed:  mov    %edx,-0x60(%ebp)
087a42c0 +0x1f0:  mov    %esi,%edx
087a42c2 +0x1f2:  mov    %ecx,-0x3c(%ebp)
087a42c5 +0x1f5:  lea    0x0(%esi),%esi
087a42c8 +0x1f8:  mov    -0x5c(%ebp),%eax
087a42cb +0x1fb:  add    -0x4c(%ebp),%eax
087a42ce +0x1fe:  cmp    %eax,-0x48(%ebp)
087a42d1 +0x201:  jbe    087a432e <+0x25e>
087a42d3 +0x203:  mov    -0x58(%ebp),%ecx
087a42d6 +0x206:  mov    -0x5c(%ebp),%esi
087a42d9 +0x209:  add    -0x5c(%ebp),%ecx
087a42dc +0x20c:  mov    -0x60(%ebp),%edi
087a42df +0x20f:  shl    $0x4,%esi
087a42e2 +0x212:  mov    %ecx,-0x44(%ebp)
087a42e5 +0x215:  lea    0x0(%esi),%esi
087a42e8 +0x218:  mov    0x18(%ebp),%eax
087a42eb +0x21b:  mov    %edx,(%esp)
087a42ee +0x21e:  mov    %edx,-0x78(%ebp)
087a42f1 +0x221:  mov    %eax,0x8(%esp)
087a42f5 +0x225:  mov    -0x40(%ebp),%eax
087a42f8 +0x228:  add    %esi,%eax
087a42fa +0x22a:  mov    %eax,0x4(%esp)
087a42fe +0x22e:  mov    (%edx),%ecx
087a4300 +0x230:  call   *0x10(%ecx)
087a4303 +0x233:  mov    %eax,0x4(%esp)
087a4307 +0x237:  mov    -0x40(%ebp),%eax
087a430a +0x23a:  add    %edi,%eax
087a430c +0x23c:  mov    %eax,(%esp)
087a430f +0x23f:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4314 +0x244:  mov    -0x4c(%ebp),%eax
087a4317 +0x247:  add    %eax,-0x44(%ebp)
087a431a +0x24a:  mov    -0x44(%ebp),%eax
087a431d +0x24d:  add    -0x3c(%ebp),%esi
087a4320 +0x250:  add    -0x3c(%ebp),%edi
087a4323 +0x253:  sub    -0x4c(%ebp),%eax
087a4326 +0x256:  cmp    %eax,-0x48(%ebp)
087a4329 +0x259:  mov    -0x78(%ebp),%edx
087a432c +0x25c:  ja     087a42e8 <+0x218>
087a432e +0x25e:  addl   $0x2,-0x5c(%ebp)
087a4332 +0x262:  mov    -0x4c(%ebp),%ecx
087a4335 +0x265:  addl   $0x20,-0x60(%ebp)
087a4339 +0x269:  cmp    %ecx,-0x5c(%ebp)
087a433c +0x26c:  jb     087a42c8 <+0x1f8>
087a433e +0x26e:  lea    (%ecx,%ecx,2),%eax
087a4341 +0x271:  mov    %edx,%esi
087a4343 +0x273:  cmp    -0x48(%ebp),%eax
087a4346 +0x276:  jae    087a43b0 <+0x2e0>
087a4348 +0x278:  mov    -0x58(%ebp),%edx
087a434b +0x27b:  mov    %eax,%edi
087a434d +0x27d:  sub    -0x58(%ebp),%edi
087a4350 +0x280:  lea    (%eax,%edx,1),%edx
087a4353 +0x283:  shl    $0x4,%eax
087a4356 +0x286:  mov    %eax,-0x3c(%ebp)
087a4359 +0x289:  mov    %esi,%eax
087a435b +0x28b:  mov    %edx,%esi
087a435d +0x28d:  shl    $0x4,%edi
087a4360 +0x290:  mov    %eax,%edx
087a4362 +0x292:  lea    0x0(%esi),%esi
087a4368 +0x298:  mov    -0x6c(%ebp),%eax
087a436b +0x29b:  mov    (%edx),%ecx
087a436d +0x29d:  mov    %edx,-0x78(%ebp)
087a4370 +0x2a0:  mov    %edx,(%esp)
087a4373 +0x2a3:  mov    %eax,0x8(%esp)
087a4377 +0x2a7:  mov    -0x40(%ebp),%eax
087a437a +0x2aa:  add    %edi,%eax
087a437c +0x2ac:  mov    %eax,0x4(%esp)
087a4380 +0x2b0:  call   *0x10(%ecx)
087a4383 +0x2b3:  mov    %eax,0x4(%esp)
087a4387 +0x2b7:  mov    -0x40(%ebp),%eax
087a438a +0x2ba:  add    -0x3c(%ebp),%eax
087a438d +0x2bd:  mov    %eax,(%esp)
087a4390 +0x2c0:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4395 +0x2c5:  mov    -0x64(%ebp),%ecx
087a4398 +0x2c8:  add    -0x58(%ebp),%esi
087a439b +0x2cb:  add    -0x64(%ebp),%edi
087a439e +0x2ce:  add    %ecx,-0x3c(%ebp)
087a43a1 +0x2d1:  mov    %esi,%eax
087a43a3 +0x2d3:  mov    -0x78(%ebp),%edx
087a43a6 +0x2d6:  sub    -0x58(%ebp),%eax
087a43a9 +0x2d9:  cmp    %eax,-0x48(%ebp)
087a43ac +0x2dc:  ja     087a4368 <+0x298>
087a43ae +0x2de:  mov    %edx,%esi
087a43b0 +0x2e0:  mov    -0x4c(%ebp),%eax
087a43b3 +0x2e3:  cmp    %eax,-0x48(%ebp)
087a43b6 +0x2e6:  jbe    087a444b <+0x37b>
087a43bc +0x2ec:  mov    -0x58(%ebp),%edx
087a43bf +0x2ef:  mov    %eax,%ecx
087a43c1 +0x2f1:  add    %ecx,%ecx
087a43c3 +0x2f3:  mov    %ecx,-0x3c(%ebp)
087a43c6 +0x2f6:  add    %eax,%edx
087a43c8 +0x2f8:  add    $0x2,%eax
087a43cb +0x2fb:  mov    %eax,-0x44(%ebp)
087a43ce +0x2fe:  shl    $0x4,%eax
087a43d1 +0x301:  sub    $0x10,%eax
087a43d4 +0x304:  mov    %edx,-0x50(%ebp)
087a43d7 +0x307:  mov    %esi,%edx
087a43d9 +0x309:  mov    %eax,-0x5c(%ebp)
087a43dc +0x30c:  lea    0x0(%esi,%eiz,1),%esi
087a43e0 +0x310:  mov    -0x3c(%ebp),%eax
087a43e3 +0x313:  cmp    %eax,-0x44(%ebp)
087a43e6 +0x316:  jae    087a442c <+0x35c>
087a43e8 +0x318:  mov    -0x5c(%ebp),%edi
087a43eb +0x31b:  mov    -0x44(%ebp),%esi
087a43ee +0x31e:  xchg   %ax,%ax
087a43f0 +0x320:  mov    0x10(%ebp),%eax
087a43f3 +0x323:  add    $0x2,%esi
087a43f6 +0x326:  mov    (%edx),%ecx
087a43f8 +0x328:  mov    %edx,-0x78(%ebp)
087a43fb +0x32b:  mov    %edx,(%esp)
087a43fe +0x32e:  mov    %eax,0x8(%esp)
087a4402 +0x332:  mov    -0x40(%ebp),%eax
087a4405 +0x335:  add    %edi,%eax
087a4407 +0x337:  mov    %eax,0x4(%esp)
087a440b +0x33b:  call   *0x10(%ecx)
087a440e +0x33e:  mov    -0x40(%ebp),%ecx
087a4411 +0x341:  mov    %eax,0x4(%esp)
087a4415 +0x345:  lea    0x10(%ecx,%edi,1),%eax
087a4419 +0x349:  add    $0x20,%edi
087a441c +0x34c:  mov    %eax,(%esp)
087a441f +0x34f:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4424 +0x354:  mov    -0x78(%ebp),%edx
087a4427 +0x357:  cmp    -0x3c(%ebp),%esi
087a442a +0x35a:  jb     087a43f0 <+0x320>
087a442c +0x35c:  mov    -0x58(%ebp),%eax
087a442f +0x35f:  add    %eax,-0x50(%ebp)
087a4432 +0x362:  add    %eax,-0x44(%ebp)
087a4435 +0x365:  add    %eax,-0x3c(%ebp)
087a4438 +0x368:  mov    -0x64(%ebp),%ecx
087a443b +0x36b:  mov    -0x50(%ebp),%eax
087a443e +0x36e:  add    %ecx,-0x5c(%ebp)
087a4441 +0x371:  sub    -0x58(%ebp),%eax
087a4444 +0x374:  cmp    %eax,-0x48(%ebp)
087a4447 +0x377:  ja     087a43e0 <+0x310>
087a4449 +0x379:  mov    %edx,%esi
087a444b +0x37b:  lea    -0x28(%ebp),%edi
087a444e +0x37e:  mov    %edi,(%esp)
087a4451 +0x381:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a4456 +0x386:  mov    -0x70(%ebp),%ecx
087a4459 +0x389:  sub    $0x1,%ecx
087a445c +0x38c:  test   %ecx,%ecx
087a445e +0x38e:  mov    %ecx,-0x54(%ebp)
087a4461 +0x391:  js     087a45e7 <+0x517>
087a4467 +0x397:  movb   $0x1,-0x64(%ebp)
087a446b +0x39b:  movl   $0x0,-0x48(%ebp)
087a4472 +0x3a2:  movl   $0x0,-0x44(%ebp)
087a4479 +0x3a9:  jmp    087a44ab <+0x3db>
087a447b +0x3ab:  nop
087a447c +0x3ac:  lea    0x0(%esi,%eiz,1),%esi
087a4480 +0x3b0:  mov    -0x44(%ebp),%eax
087a4483 +0x3b3:  add    %eax,%eax
087a4485 +0x3b5:  cmp    -0x4c(%ebp),%eax
087a4488 +0x3b8:  jae    087a4505 <+0x435>
087a448a +0x3ba:  mov    -0x48(%ebp),%eax
087a448d +0x3bd:  add    %eax,%eax
087a448f +0x3bf:  cmp    -0x4c(%ebp),%eax
087a4492 +0x3c2:  jae    087a4505 <+0x435>
087a4494 +0x3c4:  subl   $0x1,-0x54(%ebp)
087a4498 +0x3c8:  mov    %ecx,-0x60(%ebp)
087a449b +0x3cb:  js     087a45e7 <+0x517>
087a44a1 +0x3d1:  lea    0x0(%esi,%eiz,1),%esi
087a44a8 +0x3d8:  mov    -0x60(%ebp),%ecx
087a44ab +0x3db:  mov    -0x44(%ebp),%eax
087a44ae +0x3de:  mov    -0x54(%ebp),%edx
087a44b1 +0x3e1:  mov    %ecx,-0x78(%ebp)
087a44b4 +0x3e4:  add    %eax,%eax
087a44b6 +0x3e6:  mov    %eax,-0x3c(%ebp)
087a44b9 +0x3e9:  mov    0x14(%ebp),%eax
087a44bc +0x3ec:  mov    %edx,-0x60(%ebp)
087a44bf +0x3ef:  mov    %edx,0x4(%esp)
087a44c3 +0x3f3:  mov    %eax,(%esp)
087a44c6 +0x3f6:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
087a44cb +0x3fb:  mov    -0x48(%ebp),%edx
087a44ce +0x3fe:  add    %edx,%edx
087a44d0 +0x400:  movzbl %al,%eax
087a44d3 +0x403:  add    -0x3c(%ebp),%eax
087a44d6 +0x406:  mov    %edx,-0x3c(%ebp)
087a44d9 +0x409:  mov    0x1c(%ebp),%edx
087a44dc +0x40c:  mov    %eax,-0x44(%ebp)
087a44df +0x40f:  mov    -0x54(%ebp),%eax
087a44e2 +0x412:  mov    %edx,(%esp)
087a44e5 +0x415:  mov    %eax,0x4(%esp)
087a44e9 +0x419:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
087a44ee +0x41e:  mov    -0x78(%ebp),%ecx
087a44f1 +0x421:  movzbl %al,%eax
087a44f4 +0x424:  add    -0x3c(%ebp),%eax
087a44f7 +0x427:  mov    %eax,-0x48(%ebp)
087a44fa +0x42a:  mov    -0x54(%ebp),%eax
087a44fd +0x42d:  test   %eax,%eax
087a44ff +0x42f:  jne    087a4480 <+0x3b0>
087a4505 +0x435:  sub    -0x54(%ebp),%ecx
087a4508 +0x438:  mov    %ecx,-0x6c(%ebp)
087a450b +0x43b:  mov    -0x48(%ebp),%ecx
087a450e +0x43e:  or     -0x44(%ebp),%ecx
087a4511 +0x441:  mov    %ecx,-0x5c(%ebp)
087a4514 +0x444:  jne    087a46e8 <+0x618>
087a451a +0x44a:  movl   $0xffffffff,-0x58(%ebp)
087a4521 +0x451:  movl   $0x0,-0x50(%ebp)
087a4528 +0x458:  movl   $0x0,-0x48(%ebp)
087a452f +0x45f:  movl   $0x0,-0x44(%ebp)
087a4536 +0x466:  xchg   %ax,%ax
087a4538 +0x468:  cmpb   $0x0,-0x64(%ebp)
087a453c +0x46c:  jne    087a4708 <+0x638>
087a4542 +0x472:  mov    -0x6c(%ebp),%ecx
087a4545 +0x475:  test   %ecx,%ecx
087a4547 +0x477:  je     087a4580 <+0x4b0>
087a4549 +0x479:  mov    %edi,-0x3c(%ebp)
087a454c +0x47c:  mov    %esi,%edi
087a454e +0x47e:  mov    -0x6c(%ebp),%esi
087a4551 +0x481:  lea    0x0(%esi,%eiz,1),%esi
087a4558 +0x488:  mov    (%edi),%eax
087a455a +0x48a:  mov    -0x3c(%ebp),%edx
087a455d +0x48d:  mov    %edi,(%esp)
087a4560 +0x490:  mov    %edx,0x4(%esp)
087a4564 +0x494:  call   *0x1c(%eax)
087a4567 +0x497:  mov    -0x3c(%ebp),%ecx
087a456a +0x49a:  mov    %ecx,(%esp)
087a456d +0x49d:  mov    %eax,0x4(%esp)
087a4571 +0x4a1:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4576 +0x4a6:  sub    $0x1,%esi
087a4579 +0x4a9:  jne    087a4558 <+0x488>
087a457b +0x4ab:  mov    %edi,%esi
087a457d +0x4ad:  mov    -0x3c(%ebp),%edi
087a4580 +0x4b0:  mov    -0x5c(%ebp),%edx
087a4583 +0x4b3:  test   %edx,%edx
087a4585 +0x4b5:  jne    087a47b8 <+0x6e8>
087a458b +0x4bb:  mov    -0x50(%ebp),%eax
087a458e +0x4be:  test   %eax,%eax
087a4590 +0x4c0:  je     087a45cb <+0x4fb>
087a4592 +0x4c2:  mov    %edi,-0x3c(%ebp)
087a4595 +0x4c5:  mov    %esi,%edi
087a4597 +0x4c7:  mov    -0x58(%ebp),%esi
087a459a +0x4ca:  lea    0x0(%esi),%esi
087a45a0 +0x4d0:  mov    (%edi),%eax
087a45a2 +0x4d2:  sub    $0x1,%esi
087a45a5 +0x4d5:  mov    -0x3c(%ebp),%edx
087a45a8 +0x4d8:  mov    %edi,(%esp)
087a45ab +0x4db:  mov    %edx,0x4(%esp)
087a45af +0x4df:  call   *0x1c(%eax)
087a45b2 +0x4e2:  mov    -0x3c(%ebp),%ecx
087a45b5 +0x4e5:  mov    %ecx,(%esp)
087a45b8 +0x4e8:  mov    %eax,0x4(%esp)
087a45bc +0x4ec:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a45c1 +0x4f1:  cmp    $0xffffffff,%esi
087a45c4 +0x4f4:  jne    087a45a0 <+0x4d0>
087a45c6 +0x4f6:  mov    %edi,%esi
087a45c8 +0x4f8:  mov    -0x3c(%ebp),%edi
087a45cb +0x4fb:  subl   $0x1,-0x54(%ebp)
087a45cf +0x4ff:  movb   $0x0,-0x64(%ebp)
087a45d3 +0x503:  movl   $0x0,-0x48(%ebp)
087a45da +0x50a:  movl   $0x0,-0x44(%ebp)
087a45e1 +0x511:  jns    087a44a8 <+0x3d8>
087a45e7 +0x517:  mov    0x8(%ebp),%eax
087a45ea +0x51a:  mov    %edi,0x4(%esp)
087a45ee +0x51e:  mov    %eax,(%esp)
087a45f1 +0x521:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a45f6 +0x526:  mov    -0x28(%ebp),%eax
087a45f9 +0x529:  mov    -0x24(%ebp),%esi
087a45fc +0x52c:  movl   $0x0,0x4(%esp)
087a4604 +0x534:  shl    $0x2,%eax
087a4607 +0x537:  mov    %eax,0x8(%esp)
087a460b +0x53b:  mov    %esi,(%esp)
087a460e +0x53e:  call   0807dcc0 <_init+0x5b8>
087a4613 +0x543:  movb   $0x0,0x4(%esp)
087a4618 +0x548:  mov    %esi,(%esp)
087a461b +0x54b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4620 +0x550:  mov    -0x68(%ebp),%edx
087a4623 +0x553:  cmp    %edx,-0x40(%ebp)
087a4626 +0x556:  je     087a4661 <+0x591>
087a4628 +0x558:  mov    -0x40(%ebp),%esi
087a462b +0x55b:  nop
087a462c +0x55c:  lea    0x0(%esi,%eiz,1),%esi
087a4630 +0x560:  mov    (%esi),%eax
087a4632 +0x562:  mov    0x4(%esi),%edi
087a4635 +0x565:  add    $0x10,%esi
087a4638 +0x568:  movl   $0x0,0x4(%esp)
087a4640 +0x570:  shl    $0x2,%eax
087a4643 +0x573:  mov    %eax,0x8(%esp)
087a4647 +0x577:  mov    %edi,(%esp)
087a464a +0x57a:  call   0807dcc0 <_init+0x5b8>
087a464f +0x57f:  movb   $0x0,0x4(%esp)
087a4654 +0x584:  mov    %edi,(%esp)
087a4657 +0x587:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a465c +0x58c:  cmp    -0x68(%ebp),%esi
087a465f +0x58f:  jne    087a4630 <+0x560>
087a4661 +0x591:  mov    -0x40(%ebp),%ecx
087a4664 +0x594:  movb   $0x0,0x4(%esp)
087a4669 +0x599:  mov    %ecx,(%esp)
087a466c +0x59c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4671 +0x5a1:  mov    0x8(%ebp),%eax
087a4674 +0x5a4:  add    $0x8c,%esp
087a467a +0x5aa:  pop    %ebx
087a467b +0x5ab:  pop    %esi
087a467c +0x5ac:  pop    %edi
087a467d +0x5ad:  pop    %ebp
087a467e +0x5ae:  ret    $0x4
087a4681 +0x5b1:  cmpl   $0x105,-0x70(%ebp)
087a4688 +0x5b8:  sbb    %eax,%eax
087a468a +0x5ba:  and    $0xfffffd00,%eax
087a468f +0x5bf:  add    $0x400,%eax
087a4694 +0x5c4:  cmpl   $0x105,-0x70(%ebp)
087a469b +0x5cb:  sbb    %edx,%edx
087a469d +0x5cd:  and    $0xffffffc0,%edx
087a46a0 +0x5d0:  sub    $0xffffff80,%edx
087a46a3 +0x5d3:  cmpl   $0x105,-0x70(%ebp)
087a46aa +0x5da:  mov    %edx,-0x44(%ebp)
087a46ad +0x5dd:  sbb    %ecx,%ecx
087a46af +0x5df:  and    $0xffffffd0,%ecx
087a46b2 +0x5e2:  add    $0x40,%ecx
087a46b5 +0x5e5:  cmpl   $0x105,-0x70(%ebp)
087a46bc +0x5ec:  mov    %ecx,-0x48(%ebp)
087a46bf +0x5ef:  sbb    %edx,%edx
087a46c1 +0x5f1:  and    $0xfffffffc,%edx
087a46c4 +0x5f4:  add    $0x8,%edx
087a46c7 +0x5f7:  cmpl   $0x105,-0x70(%ebp)
087a46ce +0x5fe:  mov    %edx,-0x4c(%ebp)
087a46d1 +0x601:  sbb    %ecx,%ecx
087a46d3 +0x603:  add    $0x3,%ecx
087a46d6 +0x606:  mov    %ecx,-0x74(%ebp)
087a46d9 +0x609:  mov    %ecx,-0x58(%ebp)
087a46dc +0x60c:  jmp    087a4144 <+0x74>
087a46e1 +0x611:  lea    0x0(%esi,%eiz,1),%esi
087a46e8 +0x618:  testb  $0x1,-0x44(%ebp)
087a46ec +0x61c:  je     087a4730 <+0x660>
087a46ee +0x61e:  movl   $0xffffffff,-0x58(%ebp)
087a46f5 +0x625:  movl   $0x0,-0x50(%ebp)
087a46fc +0x62c:  jmp    087a4538 <+0x468>
087a4701 +0x631:  lea    0x0(%esi,%eiz,1),%esi
087a4708 +0x638:  mov    -0x48(%ebp),%eax
087a470b +0x63b:  movzbl -0x74(%ebp),%ecx
087a470f +0x63f:  mov    %edi,(%esp)
087a4712 +0x642:  shl    %cl,%eax
087a4714 +0x644:  add    -0x44(%ebp),%eax
087a4717 +0x647:  shl    $0x4,%eax
087a471a +0x64a:  add    -0x40(%ebp),%eax
087a471d +0x64d:  mov    %eax,0x4(%esp)
087a4721 +0x651:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4726 +0x656:  jmp    087a458b <+0x4bb>
087a472b +0x65b:  nop
087a472c +0x65c:  lea    0x0(%esi,%eiz,1),%esi
087a4730 +0x660:  testb  $0x1,-0x48(%ebp)
087a4734 +0x664:  movl   $0x0,-0x50(%ebp)
087a473b +0x66b:  jne    087a46ee <+0x61e>
087a473d +0x66d:  mov    -0x48(%ebp),%edx
087a4740 +0x670:  mov    -0x44(%ebp),%eax
087a4743 +0x673:  nop
087a4744 +0x674:  lea    0x0(%esi,%eiz,1),%esi
087a4748 +0x678:  shr    %edx
087a474a +0x67a:  shr    %eax
087a474c +0x67c:  mov    %edx,%ecx
087a474e +0x67e:  subl   $0x1,-0x6c(%ebp)
087a4752 +0x682:  addl   $0x1,-0x50(%ebp)
087a4756 +0x686:  or     %eax,%ecx
087a4758 +0x688:  mov    %ecx,-0x5c(%ebp)
087a475b +0x68b:  jne    087a4780 <+0x6b0>
087a475d +0x68d:  mov    -0x50(%ebp),%eax
087a4760 +0x690:  movl   $0x0,-0x48(%ebp)
087a4767 +0x697:  movl   $0x0,-0x44(%ebp)
087a476e +0x69e:  sub    $0x1,%eax
087a4771 +0x6a1:  mov    %eax,-0x58(%ebp)
087a4774 +0x6a4:  jmp    087a4538 <+0x468>
087a4779 +0x6a9:  lea    0x0(%esi,%eiz,1),%esi
087a4780 +0x6b0:  test   $0x1,%al
087a4782 +0x6b2:  je     087a4798 <+0x6c8>
087a4784 +0x6b4:  mov    %eax,-0x44(%ebp)
087a4787 +0x6b7:  mov    -0x50(%ebp),%eax
087a478a +0x6ba:  mov    %edx,-0x48(%ebp)
087a478d +0x6bd:  sub    $0x1,%eax
087a4790 +0x6c0:  mov    %eax,-0x58(%ebp)
087a4793 +0x6c3:  jmp    087a4538 <+0x468>
087a4798 +0x6c8:  test   $0x1,%dl
087a479b +0x6cb:  je     087a4748 <+0x678>
087a479d +0x6cd:  mov    %edx,-0x48(%ebp)
087a47a0 +0x6d0:  mov    -0x50(%ebp),%edx
087a47a3 +0x6d3:  mov    %eax,-0x44(%ebp)
087a47a6 +0x6d6:  sub    $0x1,%edx
087a47a9 +0x6d9:  mov    %edx,-0x58(%ebp)
087a47ac +0x6dc:  jmp    087a4538 <+0x468>
087a47b1 +0x6e1:  lea    0x0(%esi,%eiz,1),%esi
087a47b8 +0x6e8:  mov    -0x48(%ebp),%eax
087a47bb +0x6eb:  movzbl -0x74(%ebp),%ecx
087a47bf +0x6ef:  mov    (%esi),%edx
087a47c1 +0x6f1:  mov    %edi,0x4(%esp)
087a47c5 +0x6f5:  mov    %esi,(%esp)
087a47c8 +0x6f8:  shl    %cl,%eax
087a47ca +0x6fa:  add    -0x44(%ebp),%eax
087a47cd +0x6fd:  shl    $0x4,%eax
087a47d0 +0x700:  add    -0x40(%ebp),%eax
087a47d3 +0x703:  mov    %eax,0x8(%esp)
087a47d7 +0x707:  call   *0x24(%edx)
087a47da +0x70a:  jmp    087a458b <+0x4bb>
087a47df +0x70f:  mov    (%esi),%eax
087a47e1 +0x711:  mov    0x18(%ebp),%edx
087a47e4 +0x714:  mov    0x10(%ebp),%ecx
087a47e7 +0x717:  mov    %esi,(%esp)
087a47ea +0x71a:  mov    %edx,0x8(%esp)
087a47ee +0x71e:  mov    %ecx,0x4(%esp)
087a47f2 +0x722:  call   *0x10(%eax)
087a47f5 +0x725:  mov    %eax,0x4(%esp)
087a47f9 +0x729:  mov    -0x40(%ebp),%eax
087a47fc +0x72c:  add    $0x30,%eax
087a47ff +0x72f:  mov    %eax,(%esp)
087a4802 +0x732:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4807 +0x737:  jmp    087a444b <+0x37b>
087a480c +0x73c:  mov    (%esi),%eax
087a480e +0x73e:  mov    %esi,(%esp)
087a4811 +0x741:  call   *0xc(%eax)
087a4814 +0x744:  mov    0x8(%ebp),%ecx
087a4817 +0x747:  mov    %ecx,(%esp)
087a481a +0x74a:  mov    %eax,0x4(%esp)
087a481e +0x74e:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4823 +0x753:  mov    0x8(%ebp),%eax
087a4826 +0x756:  add    $0x8c,%esp
087a482c +0x75c:  pop    %ebx
087a482d +0x75d:  pop    %esi
087a482e +0x75e:  pop    %edi
087a482f +0x75f:  pop    %ebp
087a4830 +0x760:  ret    $0x4
087a4833 +0x763:  nop
087a4834 +0x764:  lea    0x0(%esi),%esi
087a483a +0x76a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::AbstractGroup::CascadeScalarMultiply @ 0x87a40d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::CascadeScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer
   const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::AbstractGroup::CascadeScalarMultiply
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  int iVar1;
  void *__s;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Integer *pIVar7;
  Integer *pIVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  Integer *in_stack_00000014;
  Integer *in_stack_00000018;
  uint in_stack_ffffff68;
  byte local_78;
  int local_70;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a40db;
  uVar4 = Integer::BitCount(in_stack_00000018);
  uVar5 = Integer::BitCount(param_4);
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0xc))(param_2);
    Integer::Integer(param_1,pIVar8);
    return param_1;
  }
  if (uVar4 < 0x2f) {
    iVar6 = 0x40;
    local_48 = 0x20;
    local_4c = 4;
    local_50 = 2;
    local_5c = 1;
  }
  else {
    iVar6 = (-(uint)(uVar4 < 0x105) & 0xfffffd00) + 0x400;
    local_48 = (-(uint)(uVar4 < 0x105) & 0xffffffc0) + 0x80;
    local_4c = (-(uint)(uVar4 < 0x105) & 0xffffffd0) + 0x40;
    local_50 = (-(uint)(uVar4 < 0x105) & 0xfffffffc) + 8;
    local_5c = 3 - (uint)(uVar4 < 0x105);
  }
  iVar3 = local_5c;
  pIVar7 = operator_new__(iVar6,in_stack_ffffff68 & 0xffffff00);
  Integer::Integer((Integer *)&local_3c);
  uVar5 = local_4c;
  pIVar8 = pIVar7;
  do {
    Integer::Integer(pIVar8,(Integer *)&local_3c);
    uVar5 = uVar5 - 1;
    pIVar8 = pIVar8 + 0x10;
  } while (uVar5 != 0);
  uVar5 = 0;
  iVar6 = local_4c * 0x10;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar5 & 0xffffff00);
  Integer::operator=(pIVar7 + 0x10,param_3);
  Integer::operator=(pIVar7 + local_48,in_stack_00000014);
  if (local_5c == 1) {
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x10))(param_2,param_3,in_stack_00000014);
    Integer::operator=(pIVar7 + 0x30,pIVar8);
  }
  else {
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,param_3);
    Integer::operator=(pIVar7 + 0x20,pIVar8);
    pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,in_stack_00000014);
    iVar1 = local_50 * 2;
    iVar9 = local_50 * 0x20;
    Integer::operator=(pIVar7 + iVar9,pIVar8);
    if (3 < local_50) {
      iVar10 = 0x10;
      uVar5 = 3;
      do {
        pIVar8 = pIVar7 + iVar10;
        iVar10 = iVar10 + 0x20;
        pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar8,pIVar7 + 0x20);
        uVar12 = uVar5 + 2;
        Integer::operator=(pIVar7 + uVar5 * 0x10,pIVar8);
        uVar5 = uVar12;
      } while (uVar12 < local_50);
    }
    local_60 = 1;
    local_64 = (local_50 + 1) * 0x10;
    do {
      if (local_60 + local_50 < local_4c) {
        local_48 = iVar1 + local_60;
        iVar11 = local_60 << 4;
        iVar10 = local_64;
        do {
          pIVar8 = (Integer *)
                   (**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar7 + iVar11,in_stack_00000014);
          Integer::operator=(pIVar7 + iVar10,pIVar8);
          local_48 = local_48 + local_50;
          iVar11 = iVar11 + local_50 * 0x10;
          iVar10 = iVar10 + local_50 * 0x10;
        } while (local_48 - local_50 < local_4c);
      }
      local_60 = local_60 + 2;
      local_64 = local_64 + 0x20;
    } while (local_60 < local_50);
    if (local_50 * 3 < local_4c) {
      iVar10 = local_50 * 5;
      local_40 = local_50 * 0x30;
      iVar11 = local_50 * 0x10;
      do {
        pIVar8 = (Integer *)
                 (**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar7 + iVar11,pIVar7 + iVar9);
        Integer::operator=(pIVar7 + local_40,pIVar8);
        iVar10 = iVar10 + iVar1;
        iVar11 = iVar11 + iVar9;
        local_40 = local_40 + iVar9;
      } while (iVar10 + local_50 * -2 < local_4c);
    }
    if (local_50 < local_4c) {
      local_40 = local_50 * 2;
      local_54 = local_50 * 3;
      uVar5 = local_50 + 2;
      iVar10 = uVar5 * 0x10 + -0x10;
      local_48 = uVar5;
      local_60 = iVar10;
      do {
        for (; uVar5 < local_40; uVar5 = uVar5 + 2) {
          pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x10))(param_2,pIVar7 + iVar10,param_3)
          ;
          iVar11 = iVar10 + 0x10;
          iVar10 = iVar10 + 0x20;
          Integer::operator=(pIVar7 + iVar11,pIVar8);
        }
        local_54 = local_54 + iVar1;
        uVar5 = local_48 + iVar1;
        local_40 = local_40 + iVar1;
        iVar10 = local_60 + iVar9;
        local_48 = uVar5;
        local_60 = iVar10;
      } while (local_54 + local_50 * -2 < local_4c);
    }
  }
  Integer::Integer((Integer *)&local_2c);
  uVar4 = uVar4 - 1;
  if ((int)uVar4 < 0) {
LAB_087a45e7:
    Integer::Integer(param_1,(Integer *)&local_2c);
    uVar4 = 0;
    memset(local_28,0,local_2c << 2);
    uVar4 = uVar4 & 0xffffff00;
    operator_delete__(local_28,uVar4);
    for (pIVar8 = pIVar7; pIVar8 != pIVar7 + iVar6; pIVar8 = pIVar8 + 0x10) {
      __s = *(void **)(pIVar8 + 4);
      uVar4 = 0;
      memset(__s,0,*(int *)pIVar8 << 2);
      uVar4 = uVar4 & 0xffffff00;
      operator_delete__(__s,uVar4);
    }
    operator_delete__(pIVar7,uVar4 & 0xffffff00);
    return param_1;
  }
  bVar2 = true;
  local_4c = 0;
  local_48 = 0;
  local_58 = uVar4;
  do {
    uVar5 = Integer::GetBit(param_4,local_58);
    uVar5 = (uVar5 & 0xff) + local_48 * 2;
    uVar12 = Integer::GetBit(in_stack_00000018,local_58);
    uVar12 = (uVar12 & 0xff) + local_4c * 2;
    local_4c = uVar12;
    local_48 = uVar5;
    if (((local_58 == 0) || (local_50 <= uVar5 * 2)) || (local_50 <= uVar12 * 2)) {
      local_70 = uVar4 - local_58;
      local_60 = uVar12 | uVar5;
      if (local_60 == 0) {
        local_5c = -1;
        local_54 = 0;
        local_4c = 0;
        local_48 = 0;
      }
      else if (((uVar5 & 1) == 0) && (local_54 = 0, iVar1 = local_54, (uVar12 & 1) == 0)) {
        do {
          local_54 = iVar1;
          local_4c = uVar12 >> 1;
          local_48 = uVar5 >> 1;
          local_70 = local_70 + -1;
          iVar1 = local_54 + 1;
          local_60 = (uVar12 | uVar5) >> 1;
          if (local_60 == 0) {
            local_4c = 0;
            local_48 = 0;
            local_5c = local_54;
            local_54 = iVar1;
            goto LAB_087a4538;
          }
          if ((local_48 & 1) != 0) {
            local_5c = local_54;
            local_54 = iVar1;
            goto LAB_087a4538;
          }
          uVar5 = local_48;
          uVar12 = local_4c;
        } while ((local_4c & 1) == 0);
        local_5c = local_54;
        local_54 = iVar1;
      }
      else {
        local_5c = -1;
        local_54 = 0;
      }
LAB_087a4538:
      local_78 = (byte)iVar3;
      if (bVar2) {
        Integer::operator=((Integer *)&local_2c,
                           pIVar7 + ((local_4c << (local_78 & 0x1f)) + local_48) * 0x10);
      }
      else {
        for (; local_70 != 0; local_70 = local_70 + -1) {
          pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,(Integer *)&local_2c);
          Integer::operator=((Integer *)&local_2c,pIVar8);
        }
        if (local_60 != 0) {
          (**(code **)(*(int *)param_2 + 0x24))
                    (param_2,(Integer *)&local_2c,
                     pIVar7 + ((local_4c << (local_78 & 0x1f)) + local_48) * 0x10);
        }
      }
      if (local_54 != 0) {
        do {
          local_5c = local_5c + -1;
          pIVar8 = (Integer *)(**(code **)(*(int *)param_2 + 0x1c))(param_2,(Integer *)&local_2c);
          Integer::operator=((Integer *)&local_2c,pIVar8);
        } while (local_5c != -1);
      }
      bVar2 = false;
      local_4c = 0;
      local_48 = 0;
      uVar4 = local_58;
    }
    if ((int)(local_58 - 1) < 0) goto LAB_087a45e7;
    local_58 = local_58 - 1;
  } while( true );
}
```
