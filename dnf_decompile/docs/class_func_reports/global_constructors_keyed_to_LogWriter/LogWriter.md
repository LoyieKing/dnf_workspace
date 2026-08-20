# LogWriter

`_GLOBAL__I__ZN9LogWriterC2Ev`

`global constructors keyed to LogWriter::LogWriter()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to LogWriter` | `0x08ad3fb7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3fb7  _GLOBAL__I__ZN9LogWriterC2Ev
#           global constructors keyed to LogWriter::LogWriter()
# range [0x08ad3fb7, 0x08ad4547]
08ad3fb7 +0x000:  push   %ebp
08ad3fb8 +0x001:  mov    %esp,%ebp
08ad3fba +0x003:  sub    $0x18,%esp
08ad3fbd +0x006:  movl   $0xffff,0x4(%esp)
08ad3fc5 +0x00e:  movl   $0x1,(%esp)
08ad3fcc +0x015:  call   08ad3f94 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08ad3fd1 +0x01a:  leave
08ad3fd2 +0x01b:  ret
08ad3fd3 +0x01c:  nop
08ad3fd4 +0x01d:  push   %ebp
08ad3fd5 +0x01e:  mov    %esp,%ebp
08ad3fd7 +0x020:  mov    0x8(%ebp),%eax
08ad3fda +0x023:  movl   $0x0,0x8(%eax)
08ad3fe1 +0x02a:  pop    %ebp
08ad3fe2 +0x02b:  ret
08ad3fe3 +0x02c:  nop
08ad3fe4 +0x02d:  push   %ebp
08ad3fe5 +0x02e:  mov    %esp,%ebp
08ad3fe7 +0x030:  sub    $0x18,%esp
08ad3fea +0x033:  mov    0x8(%ebp),%eax
08ad3fed +0x036:  mov    0x8(%eax),%eax
08ad3ff0 +0x039:  test   %eax,%eax
08ad3ff2 +0x03b:  je     08ad4011 <+0x5a>
08ad3ff4 +0x03d:  mov    0x8(%ebp),%eax
08ad3ff7 +0x040:  mov    0x8(%eax),%ecx
08ad3ffa +0x043:  mov    0x8(%ebp),%edx
08ad3ffd +0x046:  mov    0x8(%ebp),%eax
08ad4000 +0x049:  movl   $0x3,0x8(%esp)
08ad4008 +0x051:  mov    %edx,0x4(%esp)
08ad400c +0x055:  mov    %eax,(%esp)
08ad400f +0x058:  call   *%ecx
08ad4011 +0x05a:  leave
08ad4012 +0x05b:  ret
08ad4013 +0x05c:  nop
08ad4014 +0x05d:  push   %ebp
08ad4015 +0x05e:  mov    %esp,%ebp
08ad4017 +0x060:  mov    0x8(%ebp),%eax
08ad401a +0x063:  mov    0x8(%eax),%eax
08ad401d +0x066:  test   %eax,%eax
08ad401f +0x068:  sete   %al
08ad4022 +0x06b:  pop    %ebp
08ad4023 +0x06c:  ret
08ad4024 +0x06d:  push   %ebp
08ad4025 +0x06e:  mov    %esp,%ebp
08ad4027 +0x070:  sub    $0x18,%esp
08ad402a +0x073:  mov    0x8(%ebp),%eax
08ad402d +0x076:  mov    %eax,(%esp)
08ad4030 +0x079:  call   08ad3fe4 <+0x2d>
08ad4035 +0x07e:  leave
08ad4036 +0x07f:  ret
08ad4037 +0x080:  nop
08ad4038 +0x081:  push   %ebp
08ad4039 +0x082:  mov    %esp,%ebp
08ad403b +0x084:  push   %edi
08ad403c +0x085:  push   %esi
08ad403d +0x086:  push   %ebx
08ad403e +0x087:  sub    $0x2c,%esp
08ad4041 +0x08a:  mov    0x8(%ebp),%ebx
08ad4044 +0x08d:  mov    %ebx,%edi
08ad4046 +0x08f:  mov    $0x3f,%esi
08ad404b +0x094:  jmp    08ad405b <+0xa4>
08ad404d +0x096:  mov    %edi,(%esp)
08ad4050 +0x099:  call   08ad434a <+0x393>
08ad4055 +0x09e:  add    $0x8,%edi
08ad4058 +0x0a1:  sub    $0x1,%esi
08ad405b +0x0a4:  cmp    $0xffffffff,%esi
08ad405e +0x0a7:  setne  %al
08ad4061 +0x0aa:  test   %al,%al
08ad4063 +0x0ac:  jne    08ad404d <+0x96>
08ad4065 +0x0ae:  jmp    08ad409b <+0xe4>
08ad4067 +0x0b0:  mov    %edx,%edi
08ad4069 +0x0b2:  mov    %eax,-0x1c(%ebp)
08ad406c +0x0b5:  test   %ebx,%ebx
08ad406e +0x0b7:  je     08ad408e <+0xd7>
08ad4070 +0x0b9:  mov    $0x3f,%eax
08ad4075 +0x0be:  sub    %esi,%eax
08ad4077 +0x0c0:  shl    $0x3,%eax
08ad407a +0x0c3:  lea    (%ebx,%eax,1),%esi
08ad407d +0x0c6:  cmp    %ebx,%esi
08ad407f +0x0c8:  je     08ad408e <+0xd7>
08ad4081 +0x0ca:  sub    $0x8,%esi
08ad4084 +0x0cd:  mov    %esi,(%esp)
08ad4087 +0x0d0:  call   0854ffe4 <_GLOBAL__I__ZN8TimeLog_7setTimeEv+0x9f>  ; global constructors keyed to TimeLog_::setTime()+0x9f
08ad408c +0x0d5:  jmp    08ad407d <+0xc6>
08ad408e +0x0d7:  mov    -0x1c(%ebp),%eax
08ad4091 +0x0da:  mov    %edi,%edx
08ad4093 +0x0dc:  mov    %eax,(%esp)
08ad4096 +0x0df:  call   08ae3750 <_Unwind_Resume>
08ad409b +0x0e4:  add    $0x2c,%esp
08ad409e +0x0e7:  pop    %ebx
08ad409f +0x0e8:  pop    %esi
08ad40a0 +0x0e9:  pop    %edi
08ad40a1 +0x0ea:  pop    %ebp
08ad40a2 +0x0eb:  ret
08ad40a3 +0x0ec:  nop
08ad40a4 +0x0ed:  push   %ebp
08ad40a5 +0x0ee:  mov    %esp,%ebp
08ad40a7 +0x0f0:  sub    $0x18,%esp
08ad40aa +0x0f3:  mov    0x8(%ebp),%eax
08ad40ad +0x0f6:  mov    %eax,(%esp)
08ad40b0 +0x0f9:  call   08ad4038 <+0x81>
08ad40b5 +0x0fe:  leave
08ad40b6 +0x0ff:  ret
08ad40b7 +0x100:  nop
08ad40b8 +0x101:  push   %ebp
08ad40b9 +0x102:  mov    %esp,%ebp
08ad40bb +0x104:  sub    $0x8,%esp
08ad40be +0x107:  call   08ad3ba0 <_ZL11prepareDatav>  ; prepareData()
08ad40c3 +0x10c:  leave
08ad40c4 +0x10d:  ret
08ad40c5 +0x10e:  nop
08ad40c6 +0x10f:  push   %ebp
08ad40c7 +0x110:  mov    %esp,%ebp
08ad40c9 +0x112:  sub    $0x18,%esp
08ad40cc +0x115:  mov    0xc(%ebp),%eax
08ad40cf +0x118:  mov    (%eax),%edx
08ad40d1 +0x11a:  mov    0x8(%ebp),%eax
08ad40d4 +0x11d:  mov    %edx,(%eax)
08ad40d6 +0x11f:  mov    0xc(%ebp),%eax
08ad40d9 +0x122:  lea    0x4(%eax),%edx
08ad40dc +0x125:  mov    0x8(%ebp),%eax
08ad40df +0x128:  add    $0x4,%eax
08ad40e2 +0x12b:  mov    %edx,0x4(%esp)
08ad40e6 +0x12f:  mov    %eax,(%esp)
08ad40e9 +0x132:  call   08550228 <_GLOBAL__I__ZN8TimeLog_7setTimeEv+0x2e3>  ; global constructors keyed to TimeLog_::setTime()+0x2e3
08ad40ee +0x137:  leave
08ad40ef +0x138:  ret
08ad40f0 +0x139:  push   %ebp
08ad40f1 +0x13a:  mov    %esp,%ebp
08ad40f3 +0x13c:  sub    $0x18,%esp
08ad40f6 +0x13f:  mov    0xc(%ebp),%edx
08ad40f9 +0x142:  mov    0x8(%ebp),%eax
08ad40fc +0x145:  mov    %edx,0x4(%esp)
08ad4100 +0x149:  mov    %eax,(%esp)
08ad4103 +0x14c:  call   08ad40c6 <+0x10f>
08ad4108 +0x151:  leave
08ad4109 +0x152:  ret
08ad410a +0x153:  push   %ebp
08ad410b +0x154:  mov    %esp,%ebp
08ad410d +0x156:  sub    $0x18,%esp
08ad4110 +0x159:  mov    0xc(%ebp),%eax
08ad4113 +0x15c:  mov    (%eax),%edx
08ad4115 +0x15e:  mov    0x8(%ebp),%eax
08ad4118 +0x161:  mov    %edx,(%eax)
08ad411a +0x163:  mov    0xc(%ebp),%eax
08ad411d +0x166:  lea    0x4(%eax),%edx
08ad4120 +0x169:  mov    0x8(%ebp),%eax
08ad4123 +0x16c:  add    $0x4,%eax
08ad4126 +0x16f:  mov    %edx,0x4(%esp)
08ad412a +0x173:  mov    %eax,(%esp)
08ad412d +0x176:  call   08ad4390 <+0x3d9>
08ad4132 +0x17b:  mov    0x8(%ebp),%eax
08ad4135 +0x17e:  leave
08ad4136 +0x17f:  ret
08ad4137 +0x180:  nop
08ad4138 +0x181:  push   %ebp
08ad4139 +0x182:  mov    %esp,%ebp
08ad413b +0x184:  sub    $0x18,%esp
08ad413e +0x187:  mov    0xc(%ebp),%edx
08ad4141 +0x18a:  mov    0x8(%ebp),%eax
08ad4144 +0x18d:  mov    %edx,0x4(%esp)
08ad4148 +0x191:  mov    %eax,(%esp)
08ad414b +0x194:  call   08ad410a <+0x153>
08ad4150 +0x199:  mov    0x8(%ebp),%eax
08ad4153 +0x19c:  leave
08ad4154 +0x19d:  ret
08ad4155 +0x19e:  nop
08ad4156 +0x19f:  push   %ebp
08ad4157 +0x1a0:  mov    %esp,%ebp
08ad4159 +0x1a2:  pop    %ebp
08ad415a +0x1a3:  ret
08ad415b +0x1a4:  nop
08ad415c +0x1a5:  push   %ebp
08ad415d +0x1a6:  mov    %esp,%ebp
08ad415f +0x1a8:  sub    $0x18,%esp
08ad4162 +0x1ab:  mov    0x8(%ebp),%eax
08ad4165 +0x1ae:  mov    %eax,(%esp)
08ad4168 +0x1b1:  call   08ad4156 <+0x19f>
08ad416d +0x1b6:  mov    0x8(%ebp),%eax
08ad4170 +0x1b9:  mov    %eax,(%esp)
08ad4173 +0x1bc:  call   08ad3fd4 <+0x1d>
08ad4178 +0x1c1:  leave
08ad4179 +0x1c2:  ret
08ad417a +0x1c3:  push   %ebp
08ad417b +0x1c4:  mov    %esp,%ebp
08ad417d +0x1c6:  push   %esi
08ad417e +0x1c7:  push   %ebx
08ad417f +0x1c8:  sub    $0x10,%esp
08ad4182 +0x1cb:  mov    0x8(%ebp),%eax
08ad4185 +0x1ce:  mov    %eax,(%esp)
08ad4188 +0x1d1:  call   08ad4156 <+0x19f>
08ad418d +0x1d6:  mov    0x8(%ebp),%eax
08ad4190 +0x1d9:  mov    %eax,(%esp)
08ad4193 +0x1dc:  call   08ad3fd4 <+0x1d>
08ad4198 +0x1e1:  mov    0xc(%ebp),%eax
08ad419b +0x1e4:  mov    %eax,(%esp)
08ad419e +0x1e7:  call   08ad4240 <+0x289>
08ad41a3 +0x1ec:  cmp    $0xffffffff,%eax
08ad41a6 +0x1ef:  setne  %al
08ad41a9 +0x1f2:  test   %al,%al
08ad41ab +0x1f4:  je     08ad41ff <+0x248>
08ad41ad +0x1f6:  mov    0xc(%ebp),%eax
08ad41b0 +0x1f9:  mov    0xc(%eax),%edx
08ad41b3 +0x1fc:  mov    0x8(%ebp),%eax
08ad41b6 +0x1ff:  mov    %edx,0xc(%eax)
08ad41b9 +0x202:  mov    0xc(%ebp),%eax
08ad41bc +0x205:  mov    0x8(%eax),%edx
08ad41bf +0x208:  mov    0x8(%ebp),%eax
08ad41c2 +0x20b:  mov    %edx,0x8(%eax)
08ad41c5 +0x20e:  mov    0xc(%ebp),%eax
08ad41c8 +0x211:  mov    0x8(%eax),%ecx
08ad41cb +0x214:  mov    0xc(%ebp),%edx
08ad41ce +0x217:  mov    0x8(%ebp),%eax
08ad41d1 +0x21a:  movl   $0x2,0x8(%esp)
08ad41d9 +0x222:  mov    %edx,0x4(%esp)
08ad41dd +0x226:  mov    %eax,(%esp)
08ad41e0 +0x229:  call   *%ecx
08ad41e2 +0x22b:  jmp    08ad41ff <+0x248>
08ad41e4 +0x22d:  mov    %edx,%ebx
08ad41e6 +0x22f:  mov    %eax,%esi
08ad41e8 +0x231:  mov    0x8(%ebp),%eax
08ad41eb +0x234:  mov    %eax,(%esp)
08ad41ee +0x237:  call   08ad3fe4 <+0x2d>
08ad41f3 +0x23c:  mov    %esi,%eax
08ad41f5 +0x23e:  mov    %ebx,%edx
08ad41f7 +0x240:  mov    %eax,(%esp)
08ad41fa +0x243:  call   08ae3750 <_Unwind_Resume>
08ad41ff +0x248:  add    $0x10,%esp
08ad4202 +0x24b:  pop    %ebx
08ad4203 +0x24c:  pop    %esi
08ad4204 +0x24d:  pop    %ebp
08ad4205 +0x24e:  ret
08ad4206 +0x24f:  push   %ebp
08ad4207 +0x250:  mov    %esp,%ebp
08ad4209 +0x252:  sub    $0x28,%esp
08ad420c +0x255:  mov    0xc(%ebp),%eax
08ad420f +0x258:  mov    %eax,0x4(%esp)
08ad4213 +0x25c:  lea    -0x18(%ebp),%eax
08ad4216 +0x25f:  mov    %eax,(%esp)
08ad4219 +0x262:  call   08ad417a <+0x1c3>
08ad421e +0x267:  mov    0x8(%ebp),%eax
08ad4221 +0x26a:  mov    %eax,0x4(%esp)
08ad4225 +0x26e:  lea    -0x18(%ebp),%eax
08ad4228 +0x271:  mov    %eax,(%esp)
08ad422b +0x274:  call   08ad43dc <+0x425>
08ad4230 +0x279:  lea    -0x18(%ebp),%eax
08ad4233 +0x27c:  mov    %eax,(%esp)
08ad4236 +0x27f:  call   08ad4024 <+0x6d>
08ad423b +0x284:  mov    0x8(%ebp),%eax
08ad423e +0x287:  leave
08ad423f +0x288:  ret
08ad4240 +0x289:  push   %ebp
08ad4241 +0x28a:  mov    %esp,%ebp
08ad4243 +0x28c:  sub    $0x18,%esp
08ad4246 +0x28f:  mov    0x8(%ebp),%eax
08ad4249 +0x292:  mov    %eax,(%esp)
08ad424c +0x295:  call   08ad4014 <+0x5d>
08ad4251 +0x29a:  test   %al,%al
08ad4253 +0x29c:  je     08ad425c <+0x2a5>
08ad4255 +0x29e:  mov    $0xffffffff,%eax
08ad425a +0x2a3:  jmp    08ad4261 <+0x2aa>
08ad425c +0x2a5:  mov    $0x0,%eax
08ad4261 +0x2aa:  leave
08ad4262 +0x2ab:  ret
08ad4263 +0x2ac:  nop
08ad4264 +0x2ad:  push   %ebp
08ad4265 +0x2ae:  mov    %esp,%ebp
08ad4267 +0x2b0:  sub    $0x18,%esp
08ad426a +0x2b3:  mov    0x8(%ebp),%eax
08ad426d +0x2b6:  mov    %eax,(%esp)
08ad4270 +0x2b9:  call   080cb1e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x33>  ; global constructors keyed to BingoEvent::BingoEvent()+0x33
08ad4275 +0x2be:  mov    0x8(%ebp),%eax
08ad4278 +0x2c1:  movl   $&_ZTVSt17bad_function_call+0x8,(%eax)
08ad427e +0x2c7:  leave
08ad427f +0x2c8:  ret
08ad4280 +0x2c9:  push   %ebp
08ad4281 +0x2ca:  mov    %esp,%ebp
08ad4283 +0x2cc:  sub    $0x18,%esp
08ad4286 +0x2cf:  mov    0x8(%ebp),%eax
08ad4289 +0x2d2:  movl   $&_ZTVSt17bad_function_call+0x8,(%eax)
08ad428f +0x2d8:  mov    0x8(%ebp),%eax
08ad4292 +0x2db:  mov    %eax,(%esp)
08ad4295 +0x2de:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
08ad429a +0x2e3:  mov    $0x0,%eax
08ad429f +0x2e8:  test   %al,%al
08ad42a1 +0x2ea:  je     08ad42ae <+0x2f7>
08ad42a3 +0x2ec:  mov    0x8(%ebp),%eax
08ad42a6 +0x2ef:  mov    %eax,(%esp)
08ad42a9 +0x2f2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad42ae +0x2f7:  leave
08ad42af +0x2f8:  ret
08ad42b0 +0x2f9:  push   %ebp
08ad42b1 +0x2fa:  mov    %esp,%ebp
08ad42b3 +0x2fc:  sub    $0x18,%esp
08ad42b6 +0x2ff:  mov    0x8(%ebp),%eax
08ad42b9 +0x302:  mov    %eax,(%esp)
08ad42bc +0x305:  call   08ad4280 <+0x2c9>
08ad42c1 +0x30a:  mov    0x8(%ebp),%eax
08ad42c4 +0x30d:  mov    %eax,(%esp)
08ad42c7 +0x310:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad42cc +0x315:  leave
08ad42cd +0x316:  ret
08ad42ce +0x317:  push   %ebp
08ad42cf +0x318:  mov    %esp,%ebp
08ad42d1 +0x31a:  push   %ebx
08ad42d2 +0x31b:  sub    $0x24,%esp
08ad42d5 +0x31e:  mov    0x8(%ebp),%eax
08ad42d8 +0x321:  mov    %eax,(%esp)
08ad42db +0x324:  call   08ad4014 <+0x5d>
08ad42e0 +0x329:  test   %al,%al
08ad42e2 +0x32b:  je     08ad431a <+0x363>
08ad42e4 +0x32d:  movl   $0x4,(%esp)
08ad42eb +0x334:  call   08725800 <__cxa_allocate_exception>
08ad42f0 +0x339:  mov    %eax,%ebx
08ad42f2 +0x33b:  mov    %ebx,%eax
08ad42f4 +0x33d:  movl   $0x0,(%eax)
08ad42fa +0x343:  mov    %eax,(%esp)
08ad42fd +0x346:  call   08ad4264 <+0x2ad>
08ad4302 +0x34b:  movl   $&_ZNSt17bad_function_callD1Ev,0x8(%esp)
08ad430a +0x353:  movl   $&_ZTISt17bad_function_call,0x4(%esp)
08ad4312 +0x35b:  mov    %ebx,(%esp)
08ad4315 +0x35e:  call   08724c50 <__cxa_throw>
08ad431a +0x363:  mov    0x8(%ebp),%eax
08ad431d +0x366:  mov    0xc(%eax),%ecx
08ad4320 +0x369:  mov    0x8(%ebp),%eax
08ad4323 +0x36c:  mov    0x18(%ebp),%edx
08ad4326 +0x36f:  mov    %edx,0x10(%esp)
08ad432a +0x373:  mov    0x14(%ebp),%edx
08ad432d +0x376:  mov    %edx,0xc(%esp)
08ad4331 +0x37a:  mov    0x10(%ebp),%edx
08ad4334 +0x37d:  mov    %edx,0x8(%esp)
08ad4338 +0x381:  mov    0xc(%ebp),%edx
08ad433b +0x384:  mov    %edx,0x4(%esp)
08ad433f +0x388:  mov    %eax,(%esp)
08ad4342 +0x38b:  call   *%ecx
08ad4344 +0x38d:  add    $0x24,%esp
08ad4347 +0x390:  pop    %ebx
08ad4348 +0x391:  pop    %ebp
08ad4349 +0x392:  ret
08ad434a +0x393:  push   %ebp
08ad434b +0x394:  mov    %esp,%ebp
08ad434d +0x396:  sub    $0x18,%esp
08ad4350 +0x399:  mov    0x8(%ebp),%eax
08ad4353 +0x39c:  mov    %eax,(%esp)
08ad4356 +0x39f:  call   08ad444c <+0x495>
08ad435b +0x3a4:  leave
08ad435c +0x3a5:  ret
08ad435d +0x3a6:  nop
08ad435e +0x3a7:  push   %ebp
08ad435f +0x3a8:  mov    %esp,%ebp
08ad4361 +0x3aa:  mov    0xc(%ebp),%eax
08ad4364 +0x3ad:  shl    $0x3,%eax
08ad4367 +0x3b0:  add    0x8(%ebp),%eax
08ad436a +0x3b3:  pop    %ebp
08ad436b +0x3b4:  ret
08ad436c +0x3b5:  push   %ebp
08ad436d +0x3b6:  mov    %esp,%ebp
08ad436f +0x3b8:  mov    0x8(%ebp),%eax
08ad4372 +0x3bb:  mov    (%eax),%eax
08ad4374 +0x3bd:  test   %eax,%eax
08ad4376 +0x3bf:  je     08ad437f <+0x3c8>
08ad4378 +0x3c1:  mov    $0x0,%eax
08ad437d +0x3c6:  jmp    08ad4384 <+0x3cd>
08ad437f +0x3c8:  mov    $0xffffffff,%eax
08ad4384 +0x3cd:  pop    %ebp
08ad4385 +0x3ce:  ret
08ad4386 +0x3cf:  push   %ebp
08ad4387 +0x3d0:  mov    %esp,%ebp
08ad4389 +0x3d2:  mov    0x8(%ebp),%eax
08ad438c +0x3d5:  mov    (%eax),%eax
08ad438e +0x3d7:  pop    %ebp
08ad438f +0x3d8:  ret
08ad4390 +0x3d9:  push   %ebp
08ad4391 +0x3da:  mov    %esp,%ebp
08ad4393 +0x3dc:  sub    $0x28,%esp
08ad4396 +0x3df:  mov    0xc(%ebp),%eax
08ad4399 +0x3e2:  mov    (%eax),%eax
08ad439b +0x3e4:  mov    %eax,-0xc(%ebp)
08ad439e +0x3e7:  mov    0x8(%ebp),%eax
08ad43a1 +0x3ea:  mov    (%eax),%eax
08ad43a3 +0x3ec:  cmp    -0xc(%ebp),%eax
08ad43a6 +0x3ef:  je     08ad43d7 <+0x420>
08ad43a8 +0x3f1:  cmpl   $0x0,-0xc(%ebp)
08ad43ac +0x3f5:  je     08ad43b9 <+0x402>
08ad43ae +0x3f7:  mov    -0xc(%ebp),%eax
08ad43b1 +0x3fa:  mov    %eax,(%esp)
08ad43b4 +0x3fd:  call   085502ba <_GLOBAL__I__ZN8TimeLog_7setTimeEv+0x375>  ; global constructors keyed to TimeLog_::setTime()+0x375
08ad43b9 +0x402:  mov    0x8(%ebp),%eax
08ad43bc +0x405:  mov    (%eax),%eax
08ad43be +0x407:  test   %eax,%eax
08ad43c0 +0x409:  je     08ad43cf <+0x418>
08ad43c2 +0x40b:  mov    0x8(%ebp),%eax
08ad43c5 +0x40e:  mov    (%eax),%eax
08ad43c7 +0x410:  mov    %eax,(%esp)
08ad43ca +0x413:  call   0855008c <_GLOBAL__I__ZN8TimeLog_7setTimeEv+0x147>  ; global constructors keyed to TimeLog_::setTime()+0x147
08ad43cf +0x418:  mov    0x8(%ebp),%eax
08ad43d2 +0x41b:  mov    -0xc(%ebp),%edx
08ad43d5 +0x41e:  mov    %edx,(%eax)
08ad43d7 +0x420:  mov    0x8(%ebp),%eax
08ad43da +0x423:  leave
08ad43db +0x424:  ret
08ad43dc +0x425:  push   %ebp
08ad43dd +0x426:  mov    %esp,%ebp
08ad43df +0x428:  sub    $0x10,%esp
08ad43e2 +0x42b:  mov    0x8(%ebp),%eax
08ad43e5 +0x42e:  mov    0x4(%eax),%edx
08ad43e8 +0x431:  mov    (%eax),%eax
08ad43ea +0x433:  mov    %eax,-0x10(%ebp)
08ad43ed +0x436:  mov    %edx,-0xc(%ebp)
08ad43f0 +0x439:  mov    0x8(%ebp),%ecx
08ad43f3 +0x43c:  mov    0xc(%ebp),%eax
08ad43f6 +0x43f:  mov    0x4(%eax),%edx
08ad43f9 +0x442:  mov    (%eax),%eax
08ad43fb +0x444:  mov    %eax,(%ecx)
08ad43fd +0x446:  mov    %edx,0x4(%ecx)
08ad4400 +0x449:  mov    0xc(%ebp),%ecx
08ad4403 +0x44c:  mov    -0x10(%ebp),%eax
08ad4406 +0x44f:  mov    -0xc(%ebp),%edx
08ad4409 +0x452:  mov    %eax,(%ecx)
08ad440b +0x454:  mov    %edx,0x4(%ecx)
08ad440e +0x457:  mov    0x8(%ebp),%eax
08ad4411 +0x45a:  mov    0x8(%eax),%eax
08ad4414 +0x45d:  mov    %eax,-0x8(%ebp)
08ad4417 +0x460:  mov    0xc(%ebp),%eax
08ad441a +0x463:  mov    0x8(%eax),%edx
08ad441d +0x466:  mov    0x8(%ebp),%eax
08ad4420 +0x469:  mov    %edx,0x8(%eax)
08ad4423 +0x46c:  mov    0xc(%ebp),%eax
08ad4426 +0x46f:  mov    -0x8(%ebp),%edx
08ad4429 +0x472:  mov    %edx,0x8(%eax)
08ad442c +0x475:  mov    0x8(%ebp),%eax
08ad442f +0x478:  mov    0xc(%eax),%eax
08ad4432 +0x47b:  mov    %eax,-0x4(%ebp)
08ad4435 +0x47e:  mov    0xc(%ebp),%eax
08ad4438 +0x481:  mov    0xc(%eax),%edx
08ad443b +0x484:  mov    0x8(%ebp),%eax
08ad443e +0x487:  mov    %edx,0xc(%eax)
08ad4441 +0x48a:  mov    0xc(%ebp),%eax
08ad4444 +0x48d:  mov    -0x4(%ebp),%edx
08ad4447 +0x490:  mov    %edx,0xc(%eax)
08ad444a +0x493:  leave
08ad444b +0x494:  ret
08ad444c +0x495:  push   %ebp
08ad444d +0x496:  mov    %esp,%ebp
08ad444f +0x498:  sub    $0x18,%esp
08ad4452 +0x49b:  mov    0x8(%ebp),%eax
08ad4455 +0x49e:  movl   $0x0,(%eax)
08ad445b +0x4a4:  mov    0x8(%ebp),%eax
08ad445e +0x4a7:  add    $0x4,%eax
08ad4461 +0x4aa:  mov    %eax,(%esp)
08ad4464 +0x4ad:  call   08ad446c <+0x4b5>
08ad4469 +0x4b2:  leave
08ad446a +0x4b3:  ret
08ad446b +0x4b4:  nop
08ad446c +0x4b5:  push   %ebp
08ad446d +0x4b6:  mov    %esp,%ebp
08ad446f +0x4b8:  mov    0x8(%ebp),%eax
08ad4472 +0x4bb:  movl   $0x0,(%eax)
08ad4478 +0x4c1:  pop    %ebp
08ad4479 +0x4c2:  ret
08ad447a +0x4c3:  push   %ebp
08ad447b +0x4c4:  mov    %esp,%ebp
08ad447d +0x4c6:  push   %esi
08ad447e +0x4c7:  push   %ebx
08ad447f +0x4c8:  sub    $0x10,%esp
08ad4482 +0x4cb:  mov    0x8(%ebp),%eax
08ad4485 +0x4ce:  movl   $&_ZTV10LwCallback+0x8,(%eax)
08ad448b +0x4d4:  mov    0x8(%ebp),%eax
08ad448e +0x4d7:  add    $0x4,%eax
08ad4491 +0x4da:  mov    %eax,(%esp)
08ad4494 +0x4dd:  call   08ad4024 <+0x6d>
08ad4499 +0x4e2:  jmp    08ad44b6 <+0x4ff>
08ad449b +0x4e4:  mov    %edx,%ebx
08ad449d +0x4e6:  mov    %eax,%esi
08ad449f +0x4e8:  mov    0x8(%ebp),%eax
08ad44a2 +0x4eb:  mov    %eax,(%esp)
08ad44a5 +0x4ee:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
08ad44aa +0x4f3:  mov    %esi,%eax
08ad44ac +0x4f5:  mov    %ebx,%edx
08ad44ae +0x4f7:  mov    %eax,(%esp)
08ad44b1 +0x4fa:  call   08ae3750 <_Unwind_Resume>
08ad44b6 +0x4ff:  mov    0x8(%ebp),%eax
08ad44b9 +0x502:  mov    %eax,(%esp)
08ad44bc +0x505:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
08ad44c1 +0x50a:  mov    $0x0,%eax
08ad44c6 +0x50f:  test   %al,%al
08ad44c8 +0x511:  je     08ad44d5 <+0x51e>
08ad44ca +0x513:  mov    0x8(%ebp),%eax
08ad44cd +0x516:  mov    %eax,(%esp)
08ad44d0 +0x519:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad44d5 +0x51e:  add    $0x10,%esp
08ad44d8 +0x521:  pop    %ebx
08ad44d9 +0x522:  pop    %esi
08ad44da +0x523:  pop    %ebp
08ad44db +0x524:  ret
08ad44dc +0x525:  push   %ebp
08ad44dd +0x526:  mov    %esp,%ebp
08ad44df +0x528:  sub    $0x18,%esp
08ad44e2 +0x52b:  mov    0x8(%ebp),%eax
08ad44e5 +0x52e:  mov    %eax,(%esp)
08ad44e8 +0x531:  call   08ad447a <+0x4c3>
08ad44ed +0x536:  mov    0x8(%ebp),%eax
08ad44f0 +0x539:  mov    %eax,(%esp)
08ad44f3 +0x53c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad44f8 +0x541:  leave
08ad44f9 +0x542:  ret
08ad44fa +0x543:  push   %ebp
08ad44fb +0x544:  mov    %esp,%ebp
08ad44fd +0x546:  sub    $0x18,%esp
08ad4500 +0x549:  mov    0x8(%ebp),%eax
08ad4503 +0x54c:  movl   $&_ZTV9LwConsole+0x8,(%eax)
08ad4509 +0x552:  mov    0x8(%ebp),%eax
08ad450c +0x555:  mov    %eax,(%esp)
08ad450f +0x558:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
08ad4514 +0x55d:  mov    $0x0,%eax
08ad4519 +0x562:  test   %al,%al
08ad451b +0x564:  je     08ad4528 <+0x571>
08ad451d +0x566:  mov    0x8(%ebp),%eax
08ad4520 +0x569:  mov    %eax,(%esp)
08ad4523 +0x56c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad4528 +0x571:  leave
08ad4529 +0x572:  ret
08ad452a +0x573:  push   %ebp
08ad452b +0x574:  mov    %esp,%ebp
08ad452d +0x576:  sub    $0x18,%esp
08ad4530 +0x579:  mov    0x8(%ebp),%eax
08ad4533 +0x57c:  mov    %eax,(%esp)
08ad4536 +0x57f:  call   08ad44fa <+0x543>
08ad453b +0x584:  mov    0x8(%ebp),%eax
08ad453e +0x587:  mov    %eax,(%esp)
08ad4541 +0x58a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad4546 +0x58f:  leave
08ad4547 +0x590:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8ad3fb7

/* LogWriter::LogWriter() */

void LogWriter::_GLOBAL__I_LogWriter(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
