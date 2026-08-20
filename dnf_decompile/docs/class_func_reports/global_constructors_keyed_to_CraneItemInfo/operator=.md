# operator=

`_GLOBAL__I__ZN13CraneItemInfoaSERKS_`

`global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CraneItemInfo` | `0x088e40b1` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e40b1  _GLOBAL__I__ZN13CraneItemInfoaSERKS_
#           global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)
# range [0x088e40b1, 0x088e4d73]
088e40b1 +0x000:  push   %ebp
088e40b2 +0x001:  mov    %esp,%ebp
088e40b4 +0x003:  sub    $0x18,%esp
088e40b7 +0x006:  movl   $0xffff,0x4(%esp)
088e40bf +0x00e:  movl   $0x1,(%esp)
088e40c6 +0x015:  call   088e4071 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
088e40cb +0x01a:  leave
088e40cc +0x01b:  ret
088e40cd +0x01c:  nop
088e40ce +0x01d:  push   %ebp
088e40cf +0x01e:  mov    %esp,%ebp
088e40d1 +0x020:  push   %esi
088e40d2 +0x021:  push   %ebx
088e40d3 +0x022:  sub    $0x10,%esp
088e40d6 +0x025:  mov    0x8(%ebp),%eax
088e40d9 +0x028:  mov    %eax,(%esp)
088e40dc +0x02b:  call   081b5ca6 <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x49>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x49
088e40e1 +0x030:  mov    0x8(%ebp),%eax
088e40e4 +0x033:  add    $0x30,%eax
088e40e7 +0x036:  mov    %eax,(%esp)
088e40ea +0x039:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088e40ef +0x03e:  mov    0x8(%ebp),%eax
088e40f2 +0x041:  add    $0x34,%eax
088e40f5 +0x044:  mov    %eax,(%esp)
088e40f8 +0x047:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088e40fd +0x04c:  mov    0x8(%ebp),%eax
088e4100 +0x04f:  add    $0x38,%eax
088e4103 +0x052:  mov    %eax,(%esp)
088e4106 +0x055:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088e410b +0x05a:  jmp    088e4158 <+0xa7>
088e410d +0x05c:  mov    %edx,%ebx
088e410f +0x05e:  mov    %eax,%esi
088e4111 +0x060:  mov    0x8(%ebp),%eax
088e4114 +0x063:  add    $0x34,%eax
088e4117 +0x066:  mov    %eax,(%esp)
088e411a +0x069:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e411f +0x06e:  mov    %esi,%eax
088e4121 +0x070:  mov    %ebx,%edx
088e4123 +0x072:  jmp    088e4125 <+0x74>
088e4125 +0x074:  mov    %edx,%ebx
088e4127 +0x076:  mov    %eax,%esi
088e4129 +0x078:  mov    0x8(%ebp),%eax
088e412c +0x07b:  add    $0x30,%eax
088e412f +0x07e:  mov    %eax,(%esp)
088e4132 +0x081:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e4137 +0x086:  mov    %esi,%eax
088e4139 +0x088:  mov    %ebx,%edx
088e413b +0x08a:  jmp    088e413d <+0x8c>
088e413d +0x08c:  mov    %edx,%ebx
088e413f +0x08e:  mov    %eax,%esi
088e4141 +0x090:  mov    0x8(%ebp),%eax
088e4144 +0x093:  mov    %eax,(%esp)
088e4147 +0x096:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
088e414c +0x09b:  mov    %esi,%eax
088e414e +0x09d:  mov    %ebx,%edx
088e4150 +0x09f:  mov    %eax,(%esp)
088e4153 +0x0a2:  call   08ae3750 <_Unwind_Resume>
088e4158 +0x0a7:  add    $0x10,%esp
088e415b +0x0aa:  pop    %ebx
088e415c +0x0ab:  pop    %esi
088e415d +0x0ac:  pop    %ebp
088e415e +0x0ad:  ret
088e415f +0x0ae:  nop
088e4160 +0x0af:  push   %ebp
088e4161 +0x0b0:  mov    %esp,%ebp
088e4163 +0x0b2:  push   %esi
088e4164 +0x0b3:  push   %ebx
088e4165 +0x0b4:  sub    $0x10,%esp
088e4168 +0x0b7:  mov    0x8(%ebp),%eax
088e416b +0x0ba:  add    $0x38,%eax
088e416e +0x0bd:  mov    %eax,(%esp)
088e4171 +0x0c0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088e4176 +0x0c5:  jmp    088e4190 <+0xdf>
088e4178 +0x0c7:  mov    %edx,%ebx
088e417a +0x0c9:  mov    %eax,%esi
088e417c +0x0cb:  mov    0x8(%ebp),%eax
088e417f +0x0ce:  add    $0x34,%eax
088e4182 +0x0d1:  mov    %eax,(%esp)
088e4185 +0x0d4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e418a +0x0d9:  mov    %esi,%eax
088e418c +0x0db:  mov    %ebx,%edx
088e418e +0x0dd:  jmp    088e41a0 <+0xef>
088e4190 +0x0df:  mov    0x8(%ebp),%eax
088e4193 +0x0e2:  add    $0x34,%eax
088e4196 +0x0e5:  mov    %eax,(%esp)
088e4199 +0x0e8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e419e +0x0ed:  jmp    088e41b8 <+0x107>
088e41a0 +0x0ef:  mov    %edx,%ebx
088e41a2 +0x0f1:  mov    %eax,%esi
088e41a4 +0x0f3:  mov    0x8(%ebp),%eax
088e41a7 +0x0f6:  add    $0x30,%eax
088e41aa +0x0f9:  mov    %eax,(%esp)
088e41ad +0x0fc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e41b2 +0x101:  mov    %esi,%eax
088e41b4 +0x103:  mov    %ebx,%edx
088e41b6 +0x105:  jmp    088e41c8 <+0x117>
088e41b8 +0x107:  mov    0x8(%ebp),%eax
088e41bb +0x10a:  add    $0x30,%eax
088e41be +0x10d:  mov    %eax,(%esp)
088e41c1 +0x110:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e41c6 +0x115:  jmp    088e41e3 <+0x132>
088e41c8 +0x117:  mov    %edx,%ebx
088e41ca +0x119:  mov    %eax,%esi
088e41cc +0x11b:  mov    0x8(%ebp),%eax
088e41cf +0x11e:  mov    %eax,(%esp)
088e41d2 +0x121:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
088e41d7 +0x126:  mov    %esi,%eax
088e41d9 +0x128:  mov    %ebx,%edx
088e41db +0x12a:  mov    %eax,(%esp)
088e41de +0x12d:  call   08ae3750 <_Unwind_Resume>
088e41e3 +0x132:  mov    0x8(%ebp),%eax
088e41e6 +0x135:  mov    %eax,(%esp)
088e41e9 +0x138:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
088e41ee +0x13d:  add    $0x10,%esp
088e41f1 +0x140:  pop    %ebx
088e41f2 +0x141:  pop    %esi
088e41f3 +0x142:  pop    %ebp
088e41f4 +0x143:  ret
088e41f5 +0x144:  nop
088e41f6 +0x145:  push   %ebp
088e41f7 +0x146:  mov    %esp,%ebp
088e41f9 +0x148:  mov    0x8(%ebp),%eax
088e41fc +0x14b:  movw   $0xffff,(%eax)
088e4201 +0x150:  mov    0x8(%ebp),%eax
088e4204 +0x153:  movl   $0xffffffff,0x4(%eax)
088e420b +0x15a:  pop    %ebp
088e420c +0x15b:  ret
088e420d +0x15c:  nop
088e420e +0x15d:  push   %ebp
088e420f +0x15e:  mov    %esp,%ebp
088e4211 +0x160:  sub    $0x18,%esp
088e4214 +0x163:  mov    0x8(%ebp),%eax
088e4217 +0x166:  mov    %eax,(%esp)
088e421a +0x169:  call   088e4402 <+0x351>
088e421f +0x16e:  leave
088e4220 +0x16f:  ret
088e4221 +0x170:  nop
088e4222 +0x171:  push   %ebp
088e4223 +0x172:  mov    %esp,%ebp
088e4225 +0x174:  push   %esi
088e4226 +0x175:  push   %ebx
088e4227 +0x176:  sub    $0x10,%esp
088e422a +0x179:  mov    0x8(%ebp),%eax
088e422d +0x17c:  mov    %eax,(%esp)
088e4230 +0x17f:  call   088e447e <+0x3cd>
088e4235 +0x184:  mov    0x8(%ebp),%edx
088e4238 +0x187:  mov    0x4(%edx),%ecx
088e423b +0x18a:  mov    0x8(%ebp),%edx
088e423e +0x18d:  mov    (%edx),%edx
088e4240 +0x18f:  mov    %eax,0x8(%esp)
088e4244 +0x193:  mov    %ecx,0x4(%esp)
088e4248 +0x197:  mov    %edx,(%esp)
088e424b +0x19a:  call   088e4486 <+0x3d5>
088e4250 +0x19f:  jmp    088e426d <+0x1bc>
088e4252 +0x1a1:  mov    %edx,%ebx
088e4254 +0x1a3:  mov    %eax,%esi
088e4256 +0x1a5:  mov    0x8(%ebp),%eax
088e4259 +0x1a8:  mov    %eax,(%esp)
088e425c +0x1ab:  call   088e4416 <+0x365>
088e4261 +0x1b0:  mov    %esi,%eax
088e4263 +0x1b2:  mov    %ebx,%edx
088e4265 +0x1b4:  mov    %eax,(%esp)
088e4268 +0x1b7:  call   08ae3750 <_Unwind_Resume>
088e426d +0x1bc:  mov    0x8(%ebp),%eax
088e4270 +0x1bf:  mov    %eax,(%esp)
088e4273 +0x1c2:  call   088e4416 <+0x365>
088e4278 +0x1c7:  add    $0x10,%esp
088e427b +0x1ca:  pop    %ebx
088e427c +0x1cb:  pop    %esi
088e427d +0x1cc:  pop    %ebp
088e427e +0x1cd:  ret
088e427f +0x1ce:  nop
088e4280 +0x1cf:  push   %ebp
088e4281 +0x1d0:  mov    %esp,%ebp
088e4283 +0x1d2:  push   %ebx
088e4284 +0x1d3:  sub    $0x14,%esp
088e4287 +0x1d6:  mov    0x8(%ebp),%ebx
088e428a +0x1d9:  mov    0xc(%ebp),%eax
088e428d +0x1dc:  mov    %eax,0x4(%esp)
088e4291 +0x1e0:  mov    %ebx,(%esp)
088e4294 +0x1e3:  call   088e44a0 <+0x3ef>
088e4299 +0x1e8:  mov    %ebx,%eax
088e429b +0x1ea:  add    $0x14,%esp
088e429e +0x1ed:  pop    %ebx
088e429f +0x1ee:  pop    %ebp
088e42a0 +0x1ef:  ret    $0x4
088e42a3 +0x1f2:  nop
088e42a4 +0x1f3:  push   %ebp
088e42a5 +0x1f4:  mov    %esp,%ebp
088e42a7 +0x1f6:  push   %ebx
088e42a8 +0x1f7:  sub    $0x14,%esp
088e42ab +0x1fa:  mov    0x8(%ebp),%ebx
088e42ae +0x1fd:  mov    0xc(%ebp),%eax
088e42b1 +0x200:  add    $0x4,%eax
088e42b4 +0x203:  mov    %eax,0x4(%esp)
088e42b8 +0x207:  mov    %ebx,(%esp)
088e42bb +0x20a:  call   088e44a0 <+0x3ef>
088e42c0 +0x20f:  mov    %ebx,%eax
088e42c2 +0x211:  add    $0x14,%esp
088e42c5 +0x214:  pop    %ebx
088e42c6 +0x215:  pop    %ebp
088e42c7 +0x216:  ret    $0x4
088e42ca +0x219:  push   %ebp
088e42cb +0x21a:  mov    %esp,%ebp
088e42cd +0x21c:  push   %ebx
088e42ce +0x21d:  sub    $0x14,%esp
088e42d1 +0x220:  mov    0x8(%ebp),%eax
088e42d4 +0x223:  mov    %eax,(%esp)
088e42d7 +0x226:  call   088e44b0 <+0x3ff>
088e42dc +0x22b:  mov    (%eax),%ebx
088e42de +0x22d:  mov    0xc(%ebp),%eax
088e42e1 +0x230:  mov    %eax,(%esp)
088e42e4 +0x233:  call   088e44b0 <+0x3ff>
088e42e9 +0x238:  mov    (%eax),%eax
088e42eb +0x23a:  cmp    %eax,%ebx
088e42ed +0x23c:  setne  %al
088e42f0 +0x23f:  add    $0x14,%esp
088e42f3 +0x242:  pop    %ebx
088e42f4 +0x243:  pop    %ebp
088e42f5 +0x244:  ret
088e42f6 +0x245:  push   %ebp
088e42f7 +0x246:  mov    %esp,%ebp
088e42f9 +0x248:  mov    0x8(%ebp),%eax
088e42fc +0x24b:  mov    (%eax),%eax
088e42fe +0x24d:  lea    0x4(%eax),%edx
088e4301 +0x250:  mov    0x8(%ebp),%eax
088e4304 +0x253:  mov    %edx,(%eax)
088e4306 +0x255:  mov    0x8(%ebp),%eax
088e4309 +0x258:  pop    %ebp
088e430a +0x259:  ret
088e430b +0x25a:  nop
088e430c +0x25b:  push   %ebp
088e430d +0x25c:  mov    %esp,%ebp
088e430f +0x25e:  mov    0x8(%ebp),%eax
088e4312 +0x261:  mov    (%eax),%eax
088e4314 +0x263:  pop    %ebp
088e4315 +0x264:  ret
088e4316 +0x265:  push   %ebp
088e4317 +0x266:  mov    %esp,%ebp
088e4319 +0x268:  sub    $0x18,%esp
088e431c +0x26b:  mov    0x8(%ebp),%eax
088e431f +0x26e:  mov    (%eax),%eax
088e4321 +0x270:  mov    %eax,0x4(%esp)
088e4325 +0x274:  mov    0x8(%ebp),%eax
088e4328 +0x277:  mov    %eax,(%esp)
088e432b +0x27a:  call   088e44b8 <+0x407>
088e4330 +0x27f:  leave
088e4331 +0x280:  ret
088e4332 +0x281:  push   %ebp
088e4333 +0x282:  mov    %esp,%ebp
088e4335 +0x284:  mov    0x8(%ebp),%eax
088e4338 +0x287:  mov    0x4(%eax),%eax
088e433b +0x28a:  mov    %eax,%edx
088e433d +0x28c:  mov    0x8(%ebp),%eax
088e4340 +0x28f:  mov    (%eax),%eax
088e4342 +0x291:  mov    %edx,%ecx
088e4344 +0x293:  sub    %eax,%ecx
088e4346 +0x295:  mov    %ecx,%eax
088e4348 +0x297:  sar    $0x2,%eax
088e434b +0x29a:  pop    %ebp
088e434c +0x29b:  ret
088e434d +0x29c:  nop
088e434e +0x29d:  push   %ebp
088e434f +0x29e:  mov    %esp,%ebp
088e4351 +0x2a0:  sub    $0x18,%esp
088e4354 +0x2a3:  mov    0xc(%ebp),%eax
088e4357 +0x2a6:  mov    %eax,0x4(%esp)
088e435b +0x2aa:  mov    0x8(%ebp),%eax
088e435e +0x2ad:  mov    %eax,(%esp)
088e4361 +0x2b0:  call   088e44ee <+0x43d>
088e4366 +0x2b5:  mov    0xc(%ebp),%eax
088e4369 +0x2b8:  mov    %eax,0x4(%esp)
088e436d +0x2bc:  mov    0x8(%ebp),%eax
088e4370 +0x2bf:  mov    %eax,(%esp)
088e4373 +0x2c2:  call   088e4518 <+0x467>
088e4378 +0x2c7:  leave
088e4379 +0x2c8:  ret
088e437a +0x2c9:  push   %ebp
088e437b +0x2ca:  mov    %esp,%ebp
088e437d +0x2cc:  sub    $0x28,%esp
088e4380 +0x2cf:  mov    0x8(%ebp),%eax
088e4383 +0x2d2:  mov    0x4(%eax),%edx
088e4386 +0x2d5:  mov    0x8(%ebp),%eax
088e4389 +0x2d8:  mov    0x8(%eax),%eax
088e438c +0x2db:  cmp    %eax,%edx
088e438e +0x2dd:  je     088e43bd <+0x30c>
088e4390 +0x2df:  mov    0x8(%ebp),%eax
088e4393 +0x2e2:  mov    0x4(%eax),%edx
088e4396 +0x2e5:  mov    0x8(%ebp),%eax
088e4399 +0x2e8:  mov    0xc(%ebp),%ecx
088e439c +0x2eb:  mov    %ecx,0x8(%esp)
088e43a0 +0x2ef:  mov    %edx,0x4(%esp)
088e43a4 +0x2f3:  mov    %eax,(%esp)
088e43a7 +0x2f6:  call   088e452a <+0x479>
088e43ac +0x2fb:  mov    0x8(%ebp),%eax
088e43af +0x2fe:  mov    0x4(%eax),%eax
088e43b2 +0x301:  lea    0x4(%eax),%edx
088e43b5 +0x304:  mov    0x8(%ebp),%eax
088e43b8 +0x307:  mov    %edx,0x4(%eax)
088e43bb +0x30a:  jmp    088e43eb <+0x33a>
088e43bd +0x30c:  lea    -0xc(%ebp),%eax
088e43c0 +0x30f:  mov    0x8(%ebp),%edx
088e43c3 +0x312:  mov    %edx,0x4(%esp)
088e43c7 +0x316:  mov    %eax,(%esp)
088e43ca +0x319:  call   088e42a4 <+0x1f3>
088e43cf +0x31e:  sub    $0x4,%esp
088e43d2 +0x321:  mov    0xc(%ebp),%eax
088e43d5 +0x324:  mov    %eax,0x8(%esp)
088e43d9 +0x328:  mov    -0xc(%ebp),%eax
088e43dc +0x32b:  mov    %eax,0x4(%esp)
088e43e0 +0x32f:  mov    0x8(%ebp),%eax
088e43e3 +0x332:  mov    %eax,(%esp)
088e43e6 +0x335:  call   088e4552 <+0x4a1>
088e43eb +0x33a:  leave
088e43ec +0x33b:  ret
088e43ed +0x33c:  nop
088e43ee +0x33d:  push   %ebp
088e43ef +0x33e:  mov    %esp,%ebp
088e43f1 +0x340:  sub    $0x18,%esp
088e43f4 +0x343:  mov    0x8(%ebp),%eax
088e43f7 +0x346:  mov    %eax,(%esp)
088e43fa +0x349:  call   088e483c <+0x78b>
088e43ff +0x34e:  leave
088e4400 +0x34f:  ret
088e4401 +0x350:  nop
088e4402 +0x351:  push   %ebp
088e4403 +0x352:  mov    %esp,%ebp
088e4405 +0x354:  sub    $0x18,%esp
088e4408 +0x357:  mov    0x8(%ebp),%eax
088e440b +0x35a:  mov    %eax,(%esp)
088e440e +0x35d:  call   088e480c <+0x75b>
088e4413 +0x362:  leave
088e4414 +0x363:  ret
088e4415 +0x364:  nop
088e4416 +0x365:  push   %ebp
088e4417 +0x366:  mov    %esp,%ebp
088e4419 +0x368:  push   %esi
088e441a +0x369:  push   %ebx
088e441b +0x36a:  sub    $0x10,%esp
088e441e +0x36d:  mov    0x8(%ebp),%eax
088e4421 +0x370:  mov    0x8(%eax),%eax
088e4424 +0x373:  mov    %eax,%edx
088e4426 +0x375:  mov    0x8(%ebp),%eax
088e4429 +0x378:  mov    (%eax),%eax
088e442b +0x37a:  mov    %edx,%ecx
088e442d +0x37c:  sub    %eax,%ecx
088e442f +0x37e:  mov    %ecx,%eax
088e4431 +0x380:  sar    $0x2,%eax
088e4434 +0x383:  mov    %eax,%edx
088e4436 +0x385:  mov    0x8(%ebp),%eax
088e4439 +0x388:  mov    (%eax),%eax
088e443b +0x38a:  mov    %edx,0x8(%esp)
088e443f +0x38e:  mov    %eax,0x4(%esp)
088e4443 +0x392:  mov    0x8(%ebp),%eax
088e4446 +0x395:  mov    %eax,(%esp)
088e4449 +0x398:  call   088e4850 <+0x79f>
088e444e +0x39d:  jmp    088e446b <+0x3ba>
088e4450 +0x39f:  mov    %edx,%ebx
088e4452 +0x3a1:  mov    %eax,%esi
088e4454 +0x3a3:  mov    0x8(%ebp),%eax
088e4457 +0x3a6:  mov    %eax,(%esp)
088e445a +0x3a9:  call   088e43ee <+0x33d>
088e445f +0x3ae:  mov    %esi,%eax
088e4461 +0x3b0:  mov    %ebx,%edx
088e4463 +0x3b2:  mov    %eax,(%esp)
088e4466 +0x3b5:  call   08ae3750 <_Unwind_Resume>
088e446b +0x3ba:  mov    0x8(%ebp),%eax
088e446e +0x3bd:  mov    %eax,(%esp)
088e4471 +0x3c0:  call   088e43ee <+0x33d>
088e4476 +0x3c5:  add    $0x10,%esp
088e4479 +0x3c8:  pop    %ebx
088e447a +0x3c9:  pop    %esi
088e447b +0x3ca:  pop    %ebp
088e447c +0x3cb:  ret
088e447d +0x3cc:  nop
088e447e +0x3cd:  push   %ebp
088e447f +0x3ce:  mov    %esp,%ebp
088e4481 +0x3d0:  mov    0x8(%ebp),%eax
088e4484 +0x3d3:  pop    %ebp
088e4485 +0x3d4:  ret
088e4486 +0x3d5:  push   %ebp
088e4487 +0x3d6:  mov    %esp,%ebp
088e4489 +0x3d8:  sub    $0x18,%esp
088e448c +0x3db:  mov    0xc(%ebp),%eax
088e448f +0x3de:  mov    %eax,0x4(%esp)
088e4493 +0x3e2:  mov    0x8(%ebp),%eax
088e4496 +0x3e5:  mov    %eax,(%esp)
088e4499 +0x3e8:  call   088e4877 <+0x7c6>
088e449e +0x3ed:  leave
088e449f +0x3ee:  ret
088e44a0 +0x3ef:  push   %ebp
088e44a1 +0x3f0:  mov    %esp,%ebp
088e44a3 +0x3f2:  mov    0xc(%ebp),%eax
088e44a6 +0x3f5:  mov    (%eax),%edx
088e44a8 +0x3f7:  mov    0x8(%ebp),%eax
088e44ab +0x3fa:  mov    %edx,(%eax)
088e44ad +0x3fc:  pop    %ebp
088e44ae +0x3fd:  ret
088e44af +0x3fe:  nop
088e44b0 +0x3ff:  push   %ebp
088e44b1 +0x400:  mov    %esp,%ebp
088e44b3 +0x402:  mov    0x8(%ebp),%eax
088e44b6 +0x405:  pop    %ebp
088e44b7 +0x406:  ret
088e44b8 +0x407:  push   %ebp
088e44b9 +0x408:  mov    %esp,%ebp
088e44bb +0x40a:  sub    $0x18,%esp
088e44be +0x40d:  mov    0x8(%ebp),%eax
088e44c1 +0x410:  mov    %eax,(%esp)
088e44c4 +0x413:  call   088e447e <+0x3cd>
088e44c9 +0x418:  mov    0x8(%ebp),%edx
088e44cc +0x41b:  mov    0x4(%edx),%edx
088e44cf +0x41e:  mov    %eax,0x8(%esp)
088e44d3 +0x422:  mov    %edx,0x4(%esp)
088e44d7 +0x426:  mov    0xc(%ebp),%eax
088e44da +0x429:  mov    %eax,(%esp)
088e44dd +0x42c:  call   088e4486 <+0x3d5>
088e44e2 +0x431:  mov    0x8(%ebp),%eax
088e44e5 +0x434:  mov    0xc(%ebp),%edx
088e44e8 +0x437:  mov    %edx,0x4(%eax)
088e44eb +0x43a:  leave
088e44ec +0x43b:  ret
088e44ed +0x43c:  nop
088e44ee +0x43d:  push   %ebp
088e44ef +0x43e:  mov    %esp,%ebp
088e44f1 +0x440:  sub    $0x18,%esp
088e44f4 +0x443:  mov    0x8(%ebp),%eax
088e44f7 +0x446:  mov    %eax,(%esp)
088e44fa +0x449:  call   088e4332 <+0x281>
088e44ff +0x44e:  cmp    0xc(%ebp),%eax
088e4502 +0x451:  setbe  %al
088e4505 +0x454:  test   %al,%al
088e4507 +0x456:  je     088e4515 <+0x464>
088e4509 +0x458:  movl   $"vector::_M_range_check",(%esp)
088e4510 +0x45f:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
088e4515 +0x464:  leave
088e4516 +0x465:  ret
088e4517 +0x466:  nop
088e4518 +0x467:  push   %ebp
088e4519 +0x468:  mov    %esp,%ebp
088e451b +0x46a:  mov    0x8(%ebp),%eax
088e451e +0x46d:  mov    (%eax),%eax
088e4520 +0x46f:  mov    0xc(%ebp),%edx
088e4523 +0x472:  shl    $0x2,%edx
088e4526 +0x475:  add    %edx,%eax
088e4528 +0x477:  pop    %ebp
088e4529 +0x478:  ret
088e452a +0x479:  push   %ebp
088e452b +0x47a:  mov    %esp,%ebp
088e452d +0x47c:  sub    $0x18,%esp
088e4530 +0x47f:  mov    0xc(%ebp),%eax
088e4533 +0x482:  mov    %eax,0x4(%esp)
088e4537 +0x486:  movl   $0x4,(%esp)
088e453e +0x48d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
088e4543 +0x492:  mov    %eax,%edx
088e4545 +0x494:  test   %edx,%edx
088e4547 +0x496:  je     088e4550 <+0x49f>
088e4549 +0x498:  mov    0x10(%ebp),%edx
088e454c +0x49b:  mov    (%edx),%edx
088e454e +0x49d:  mov    %edx,(%eax)
088e4550 +0x49f:  leave
088e4551 +0x4a0:  ret
088e4552 +0x4a1:  push   %ebp
088e4553 +0x4a2:  mov    %esp,%ebp
088e4555 +0x4a4:  push   %esi
088e4556 +0x4a5:  push   %ebx
088e4557 +0x4a6:  sub    $0x30,%esp
088e455a +0x4a9:  mov    0x8(%ebp),%eax
088e455d +0x4ac:  mov    0x4(%eax),%edx
088e4560 +0x4af:  mov    0x8(%ebp),%eax
088e4563 +0x4b2:  mov    0x8(%eax),%eax
088e4566 +0x4b5:  cmp    %eax,%edx
088e4568 +0x4b7:  je     088e45ff <+0x54e>
088e456e +0x4bd:  mov    0x8(%ebp),%eax
088e4571 +0x4c0:  mov    0x4(%eax),%eax
088e4574 +0x4c3:  sub    $0x4,%eax
088e4577 +0x4c6:  mov    %eax,(%esp)
088e457a +0x4c9:  call   088e4891 <+0x7e0>
088e457f +0x4ce:  mov    (%eax),%eax
088e4581 +0x4d0:  mov    %eax,-0x20(%ebp)
088e4584 +0x4d3:  mov    0x8(%ebp),%eax
088e4587 +0x4d6:  mov    0x4(%eax),%edx
088e458a +0x4d9:  mov    0x8(%ebp),%eax
088e458d +0x4dc:  lea    -0x20(%ebp),%ecx
088e4590 +0x4df:  mov    %ecx,0x8(%esp)
088e4594 +0x4e3:  mov    %edx,0x4(%esp)
088e4598 +0x4e7:  mov    %eax,(%esp)
088e459b +0x4ea:  call   088e489a <+0x7e9>
088e45a0 +0x4ef:  mov    0x8(%ebp),%eax
088e45a3 +0x4f2:  mov    0x4(%eax),%eax
088e45a6 +0x4f5:  lea    0x4(%eax),%edx
088e45a9 +0x4f8:  mov    0x8(%ebp),%eax
088e45ac +0x4fb:  mov    %edx,0x4(%eax)
088e45af +0x4fe:  mov    0x8(%ebp),%eax
088e45b2 +0x501:  mov    0x4(%eax),%eax
088e45b5 +0x504:  lea    -0x4(%eax),%esi
088e45b8 +0x507:  mov    0x8(%ebp),%eax
088e45bb +0x50a:  mov    0x4(%eax),%eax
088e45be +0x50d:  lea    -0x8(%eax),%ebx
088e45c1 +0x510:  lea    0xc(%ebp),%eax
088e45c4 +0x513:  mov    %eax,(%esp)
088e45c7 +0x516:  call   088e44b0 <+0x3ff>
088e45cc +0x51b:  mov    (%eax),%eax
088e45ce +0x51d:  mov    %esi,0x8(%esp)
088e45d2 +0x521:  mov    %ebx,0x4(%esp)
088e45d6 +0x525:  mov    %eax,(%esp)
088e45d9 +0x528:  call   088e48cf <+0x81e>
088e45de +0x52d:  lea    0xc(%ebp),%eax
088e45e1 +0x530:  mov    %eax,(%esp)
088e45e4 +0x533:  call   088e430c <+0x25b>
088e45e9 +0x538:  mov    %eax,%ebx
088e45eb +0x53a:  mov    0x10(%ebp),%eax
088e45ee +0x53d:  mov    %eax,(%esp)
088e45f1 +0x540:  call   088e4907 <+0x856>
088e45f6 +0x545:  mov    (%eax),%eax
088e45f8 +0x547:  mov    %eax,(%ebx)
088e45fa +0x549:  jmp    088e4801 <+0x750>
088e45ff +0x54e:  movl   $"vector::_M_insert_aux",0x8(%esp)
088e4607 +0x556:  movl   $0x1,0x4(%esp)
088e460f +0x55e:  mov    0x8(%ebp),%eax
088e4612 +0x561:  mov    %eax,(%esp)
088e4615 +0x564:  call   088e4910 <+0x85f>
088e461a +0x569:  mov    %eax,-0x18(%ebp)
088e461d +0x56c:  lea    -0x1c(%ebp),%eax
088e4620 +0x56f:  mov    0x8(%ebp),%edx
088e4623 +0x572:  mov    %edx,0x4(%esp)
088e4627 +0x576:  mov    %eax,(%esp)
088e462a +0x579:  call   088e4280 <+0x1cf>
088e462f +0x57e:  sub    $0x4,%esp
088e4632 +0x581:  lea    -0x1c(%ebp),%eax
088e4635 +0x584:  mov    %eax,0x4(%esp)
088e4639 +0x588:  lea    0xc(%ebp),%eax
088e463c +0x58b:  mov    %eax,(%esp)
088e463f +0x58e:  call   088e49b5 <+0x904>
088e4644 +0x593:  mov    %eax,-0x14(%ebp)
088e4647 +0x596:  mov    0x8(%ebp),%eax
088e464a +0x599:  mov    -0x18(%ebp),%edx
088e464d +0x59c:  mov    %edx,0x4(%esp)
088e4651 +0x5a0:  mov    %eax,(%esp)
088e4654 +0x5a3:  call   088e49e8 <+0x937>
088e4659 +0x5a8:  mov    %eax,-0x10(%ebp)
088e465c +0x5ab:  mov    -0x10(%ebp),%eax
088e465f +0x5ae:  mov    %eax,-0xc(%ebp)
088e4662 +0x5b1:  mov    0x10(%ebp),%eax
088e4665 +0x5b4:  mov    %eax,(%esp)
088e4668 +0x5b7:  call   088e4907 <+0x856>
088e466d +0x5bc:  mov    -0x14(%ebp),%edx
088e4670 +0x5bf:  shl    $0x2,%edx
088e4673 +0x5c2:  mov    %edx,%ecx
088e4675 +0x5c4:  add    -0x10(%ebp),%ecx
088e4678 +0x5c7:  mov    0x8(%ebp),%edx
088e467b +0x5ca:  mov    %eax,0x8(%esp)
088e467f +0x5ce:  mov    %ecx,0x4(%esp)
088e4683 +0x5d2:  mov    %edx,(%esp)
088e4686 +0x5d5:  call   088e452a <+0x479>
088e468b +0x5da:  movl   $0x0,-0xc(%ebp)
088e4692 +0x5e1:  mov    0x8(%ebp),%eax
088e4695 +0x5e4:  mov    %eax,(%esp)
088e4698 +0x5e7:  call   088e447e <+0x3cd>
088e469d +0x5ec:  mov    %eax,%ebx
088e469f +0x5ee:  lea    0xc(%ebp),%eax
088e46a2 +0x5f1:  mov    %eax,(%esp)
088e46a5 +0x5f4:  call   088e44b0 <+0x3ff>
088e46aa +0x5f9:  mov    (%eax),%edx
088e46ac +0x5fb:  mov    0x8(%ebp),%eax
088e46af +0x5fe:  mov    (%eax),%eax
088e46b1 +0x600:  mov    %ebx,0xc(%esp)
088e46b5 +0x604:  mov    -0x10(%ebp),%ecx
088e46b8 +0x607:  mov    %ecx,0x8(%esp)
088e46bc +0x60b:  mov    %edx,0x4(%esp)
088e46c0 +0x60f:  mov    %eax,(%esp)
088e46c3 +0x612:  call   088e4a17 <+0x966>
088e46c8 +0x617:  mov    %eax,-0xc(%ebp)
088e46cb +0x61a:  addl   $0x4,-0xc(%ebp)
088e46cf +0x61e:  mov    0x8(%ebp),%eax
088e46d2 +0x621:  mov    %eax,(%esp)
088e46d5 +0x624:  call   088e447e <+0x3cd>
088e46da +0x629:  mov    %eax,%ebx
088e46dc +0x62b:  mov    0x8(%ebp),%eax
088e46df +0x62e:  mov    0x4(%eax),%esi
088e46e2 +0x631:  lea    0xc(%ebp),%eax
088e46e5 +0x634:  mov    %eax,(%esp)
088e46e8 +0x637:  call   088e44b0 <+0x3ff>
088e46ed +0x63c:  mov    (%eax),%eax
088e46ef +0x63e:  mov    %ebx,0xc(%esp)
088e46f3 +0x642:  mov    -0xc(%ebp),%edx
088e46f6 +0x645:  mov    %edx,0x8(%esp)
088e46fa +0x649:  mov    %esi,0x4(%esp)
088e46fe +0x64d:  mov    %eax,(%esp)
088e4701 +0x650:  call   088e4a17 <+0x966>
088e4706 +0x655:  mov    %eax,-0xc(%ebp)
088e4709 +0x658:  mov    0x8(%ebp),%eax
088e470c +0x65b:  mov    %eax,(%esp)
088e470f +0x65e:  call   088e447e <+0x3cd>
088e4714 +0x663:  mov    0x8(%ebp),%edx
088e4717 +0x666:  mov    0x4(%edx),%ecx
088e471a +0x669:  mov    0x8(%ebp),%edx
088e471d +0x66c:  mov    (%edx),%edx
088e471f +0x66e:  mov    %eax,0x8(%esp)
088e4723 +0x672:  mov    %ecx,0x4(%esp)
088e4727 +0x676:  mov    %edx,(%esp)
088e472a +0x679:  call   088e4486 <+0x3d5>
088e472f +0x67e:  mov    0x8(%ebp),%eax
088e4732 +0x681:  mov    0x8(%eax),%eax
088e4735 +0x684:  mov    %eax,%edx
088e4737 +0x686:  mov    0x8(%ebp),%eax
088e473a +0x689:  mov    (%eax),%eax
088e473c +0x68b:  mov    %edx,%ecx
088e473e +0x68d:  sub    %eax,%ecx
088e4740 +0x68f:  mov    %ecx,%eax
088e4742 +0x691:  sar    $0x2,%eax
088e4745 +0x694:  mov    %eax,%ecx
088e4747 +0x696:  mov    0x8(%ebp),%eax
088e474a +0x699:  mov    (%eax),%edx
088e474c +0x69b:  mov    0x8(%ebp),%eax
088e474f +0x69e:  mov    %ecx,0x8(%esp)
088e4753 +0x6a2:  mov    %edx,0x4(%esp)
088e4757 +0x6a6:  mov    %eax,(%esp)
088e475a +0x6a9:  call   088e4850 <+0x79f>
088e475f +0x6ae:  mov    0x8(%ebp),%eax
088e4762 +0x6b1:  mov    -0x10(%ebp),%edx
088e4765 +0x6b4:  mov    %edx,(%eax)
088e4767 +0x6b6:  mov    0x8(%ebp),%eax
088e476a +0x6b9:  mov    -0xc(%ebp),%edx
088e476d +0x6bc:  mov    %edx,0x4(%eax)
088e4770 +0x6bf:  mov    -0x18(%ebp),%eax
088e4773 +0x6c2:  shl    $0x2,%eax
088e4776 +0x6c5:  mov    %eax,%edx
088e4778 +0x6c7:  add    -0x10(%ebp),%edx
088e477b +0x6ca:  mov    0x8(%ebp),%eax
088e477e +0x6cd:  mov    %edx,0x8(%eax)
088e4781 +0x6d0:  jmp    088e4801 <+0x750>
088e4783 +0x6d2:  mov    %eax,(%esp)
088e4786 +0x6d5:  call   08725ce0 <__cxa_begin_catch>
088e478b +0x6da:  cmpl   $0x0,-0xc(%ebp)
088e478f +0x6de:  jne    088e47ad <+0x6fc>
088e4791 +0x6e0:  mov    -0x14(%ebp),%eax
088e4794 +0x6e3:  shl    $0x2,%eax
088e4797 +0x6e6:  mov    %eax,%edx
088e4799 +0x6e8:  add    -0x10(%ebp),%edx
088e479c +0x6eb:  mov    0x8(%ebp),%eax
088e479f +0x6ee:  mov    %edx,0x4(%esp)
088e47a3 +0x6f2:  mov    %eax,(%esp)
088e47a6 +0x6f5:  call   088e4a6a <+0x9b9>
088e47ab +0x6fa:  jmp    088e47ce <+0x71d>
088e47ad +0x6fc:  mov    0x8(%ebp),%eax
088e47b0 +0x6ff:  mov    %eax,(%esp)
088e47b3 +0x702:  call   088e447e <+0x3cd>
088e47b8 +0x707:  mov    %eax,0x8(%esp)
088e47bc +0x70b:  mov    -0xc(%ebp),%eax
088e47bf +0x70e:  mov    %eax,0x4(%esp)
088e47c3 +0x712:  mov    -0x10(%ebp),%eax
088e47c6 +0x715:  mov    %eax,(%esp)
088e47c9 +0x718:  call   088e4486 <+0x3d5>
088e47ce +0x71d:  mov    0x8(%ebp),%eax
088e47d1 +0x720:  mov    -0x18(%ebp),%edx
088e47d4 +0x723:  mov    %edx,0x8(%esp)
088e47d8 +0x727:  mov    -0x10(%ebp),%edx
088e47db +0x72a:  mov    %edx,0x4(%esp)
088e47df +0x72e:  mov    %eax,(%esp)
088e47e2 +0x731:  call   088e4850 <+0x79f>
088e47e7 +0x736:  call   08724be0 <__cxa_rethrow>
088e47ec +0x73b:  mov    %edx,%ebx
088e47ee +0x73d:  mov    %eax,%esi
088e47f0 +0x73f:  call   08725c30 <__cxa_end_catch>
088e47f5 +0x744:  mov    %esi,%eax
088e47f7 +0x746:  mov    %ebx,%edx
088e47f9 +0x748:  mov    %eax,(%esp)
088e47fc +0x74b:  call   08ae3750 <_Unwind_Resume>
088e4801 +0x750:  lea    -0x8(%ebp),%esp
088e4804 +0x753:  add    $0x0,%esp
088e4807 +0x756:  pop    %ebx
088e4808 +0x757:  pop    %esi
088e4809 +0x758:  pop    %ebp
088e480a +0x759:  ret
088e480b +0x75a:  nop
088e480c +0x75b:  push   %ebp
088e480d +0x75c:  mov    %esp,%ebp
088e480f +0x75e:  sub    $0x18,%esp
088e4812 +0x761:  mov    0x8(%ebp),%eax
088e4815 +0x764:  mov    %eax,(%esp)
088e4818 +0x767:  call   088e4a70 <+0x9bf>
088e481d +0x76c:  mov    0x8(%ebp),%eax
088e4820 +0x76f:  movl   $0x0,(%eax)
088e4826 +0x775:  mov    0x8(%ebp),%eax
088e4829 +0x778:  movl   $0x0,0x4(%eax)
088e4830 +0x77f:  mov    0x8(%ebp),%eax
088e4833 +0x782:  movl   $0x0,0x8(%eax)
088e483a +0x789:  leave
088e483b +0x78a:  ret
088e483c +0x78b:  push   %ebp
088e483d +0x78c:  mov    %esp,%ebp
088e483f +0x78e:  sub    $0x18,%esp
088e4842 +0x791:  mov    0x8(%ebp),%eax
088e4845 +0x794:  mov    %eax,(%esp)
088e4848 +0x797:  call   088e4a84 <+0x9d3>
088e484d +0x79c:  leave
088e484e +0x79d:  ret
088e484f +0x79e:  nop
088e4850 +0x79f:  push   %ebp
088e4851 +0x7a0:  mov    %esp,%ebp
088e4853 +0x7a2:  sub    $0x18,%esp
088e4856 +0x7a5:  cmpl   $0x0,0xc(%ebp)
088e485a +0x7a9:  je     088e4875 <+0x7c4>
088e485c +0x7ab:  mov    0x8(%ebp),%eax
088e485f +0x7ae:  mov    0x10(%ebp),%edx
088e4862 +0x7b1:  mov    %edx,0x8(%esp)
088e4866 +0x7b5:  mov    0xc(%ebp),%edx
088e4869 +0x7b8:  mov    %edx,0x4(%esp)
088e486d +0x7bc:  mov    %eax,(%esp)
088e4870 +0x7bf:  call   088e4a8a <+0x9d9>
088e4875 +0x7c4:  leave
088e4876 +0x7c5:  ret
088e4877 +0x7c6:  push   %ebp
088e4878 +0x7c7:  mov    %esp,%ebp
088e487a +0x7c9:  sub    $0x18,%esp
088e487d +0x7cc:  mov    0xc(%ebp),%eax
088e4880 +0x7cf:  mov    %eax,0x4(%esp)
088e4884 +0x7d3:  mov    0x8(%ebp),%eax
088e4887 +0x7d6:  mov    %eax,(%esp)
088e488a +0x7d9:  call   088e4a9d <+0x9ec>
088e488f +0x7de:  leave
088e4890 +0x7df:  ret
088e4891 +0x7e0:  push   %ebp
088e4892 +0x7e1:  mov    %esp,%ebp
088e4894 +0x7e3:  mov    0x8(%ebp),%eax
088e4897 +0x7e6:  pop    %ebp
088e4898 +0x7e7:  ret
088e4899 +0x7e8:  nop
088e489a +0x7e9:  push   %ebp
088e489b +0x7ea:  mov    %esp,%ebp
088e489d +0x7ec:  push   %ebx
088e489e +0x7ed:  sub    $0x14,%esp
088e48a1 +0x7f0:  mov    0x10(%ebp),%eax
088e48a4 +0x7f3:  mov    %eax,(%esp)
088e48a7 +0x7f6:  call   088e4aa2 <+0x9f1>
088e48ac +0x7fb:  mov    (%eax),%ebx
088e48ae +0x7fd:  mov    0xc(%ebp),%eax
088e48b1 +0x800:  mov    %eax,0x4(%esp)
088e48b5 +0x804:  movl   $0x4,(%esp)
088e48bc +0x80b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
088e48c1 +0x810:  mov    %eax,%edx
088e48c3 +0x812:  test   %edx,%edx
088e48c5 +0x814:  je     088e48c9 <+0x818>
088e48c7 +0x816:  mov    %ebx,(%eax)
088e48c9 +0x818:  add    $0x14,%esp
088e48cc +0x81b:  pop    %ebx
088e48cd +0x81c:  pop    %ebp
088e48ce +0x81d:  ret
088e48cf +0x81e:  push   %ebp
088e48d0 +0x81f:  mov    %esp,%ebp
088e48d2 +0x821:  push   %ebx
088e48d3 +0x822:  sub    $0x14,%esp
088e48d6 +0x825:  mov    0xc(%ebp),%eax
088e48d9 +0x828:  mov    %eax,(%esp)
088e48dc +0x82b:  call   088e4aaa <+0x9f9>
088e48e1 +0x830:  mov    %eax,%ebx
088e48e3 +0x832:  mov    0x8(%ebp),%eax
088e48e6 +0x835:  mov    %eax,(%esp)
088e48e9 +0x838:  call   088e4aaa <+0x9f9>
088e48ee +0x83d:  mov    0x10(%ebp),%edx
088e48f1 +0x840:  mov    %edx,0x8(%esp)
088e48f5 +0x844:  mov    %ebx,0x4(%esp)
088e48f9 +0x848:  mov    %eax,(%esp)
088e48fc +0x84b:  call   088e4ab2 <+0xa01>
088e4901 +0x850:  add    $0x14,%esp
088e4904 +0x853:  pop    %ebx
088e4905 +0x854:  pop    %ebp
088e4906 +0x855:  ret
088e4907 +0x856:  push   %ebp
088e4908 +0x857:  mov    %esp,%ebp
088e490a +0x859:  mov    0x8(%ebp),%eax
088e490d +0x85c:  pop    %ebp
088e490e +0x85d:  ret
088e490f +0x85e:  nop
088e4910 +0x85f:  push   %ebp
088e4911 +0x860:  mov    %esp,%ebp
088e4913 +0x862:  push   %ebx
088e4914 +0x863:  sub    $0x24,%esp
088e4917 +0x866:  mov    0x8(%ebp),%eax
088e491a +0x869:  mov    %eax,(%esp)
088e491d +0x86c:  call   088e4af6 <+0xa45>
088e4922 +0x871:  mov    %eax,%ebx
088e4924 +0x873:  mov    0x8(%ebp),%eax
088e4927 +0x876:  mov    %eax,(%esp)
088e492a +0x879:  call   088e4332 <+0x281>
088e492f +0x87e:  mov    %ebx,%edx
088e4931 +0x880:  sub    %eax,%edx
088e4933 +0x882:  mov    0xc(%ebp),%eax
088e4936 +0x885:  cmp    %eax,%edx
088e4938 +0x887:  setb   %al
088e493b +0x88a:  test   %al,%al
088e493d +0x88c:  je     088e494a <+0x899>
088e493f +0x88e:  mov    0x10(%ebp),%eax
088e4942 +0x891:  mov    %eax,(%esp)
088e4945 +0x894:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
088e494a +0x899:  mov    0x8(%ebp),%eax
088e494d +0x89c:  mov    %eax,(%esp)
088e4950 +0x89f:  call   088e4332 <+0x281>
088e4955 +0x8a4:  mov    %eax,%ebx
088e4957 +0x8a6:  mov    0x8(%ebp),%eax
088e495a +0x8a9:  mov    %eax,(%esp)
088e495d +0x8ac:  call   088e4332 <+0x281>
088e4962 +0x8b1:  mov    %eax,-0x10(%ebp)
088e4965 +0x8b4:  lea    0xc(%ebp),%eax
088e4968 +0x8b7:  mov    %eax,0x4(%esp)
088e496c +0x8bb:  lea    -0x10(%ebp),%eax
088e496f +0x8be:  mov    %eax,(%esp)
088e4972 +0x8c1:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
088e4977 +0x8c6:  mov    (%eax),%eax
088e4979 +0x8c8:  lea    (%ebx,%eax,1),%eax
088e497c +0x8cb:  mov    %eax,-0xc(%ebp)
088e497f +0x8ce:  mov    0x8(%ebp),%eax
088e4982 +0x8d1:  mov    %eax,(%esp)
088e4985 +0x8d4:  call   088e4332 <+0x281>
088e498a +0x8d9:  cmp    -0xc(%ebp),%eax
088e498d +0x8dc:  ja     088e499f <+0x8ee>
088e498f +0x8de:  mov    0x8(%ebp),%eax
088e4992 +0x8e1:  mov    %eax,(%esp)
088e4995 +0x8e4:  call   088e4af6 <+0xa45>
088e499a +0x8e9:  cmp    -0xc(%ebp),%eax
088e499d +0x8ec:  jae    088e49ac <+0x8fb>
088e499f +0x8ee:  mov    0x8(%ebp),%eax
088e49a2 +0x8f1:  mov    %eax,(%esp)
088e49a5 +0x8f4:  call   088e4af6 <+0xa45>
088e49aa +0x8f9:  jmp    088e49af <+0x8fe>
088e49ac +0x8fb:  mov    -0xc(%ebp),%eax
088e49af +0x8fe:  add    $0x24,%esp
088e49b2 +0x901:  pop    %ebx
088e49b3 +0x902:  pop    %ebp
088e49b4 +0x903:  ret
088e49b5 +0x904:  push   %ebp
088e49b6 +0x905:  mov    %esp,%ebp
088e49b8 +0x907:  push   %ebx
088e49b9 +0x908:  sub    $0x14,%esp
088e49bc +0x90b:  mov    0x8(%ebp),%eax
088e49bf +0x90e:  mov    %eax,(%esp)
088e49c2 +0x911:  call   088e44b0 <+0x3ff>
088e49c7 +0x916:  mov    (%eax),%eax
088e49c9 +0x918:  mov    %eax,%ebx
088e49cb +0x91a:  mov    0xc(%ebp),%eax
088e49ce +0x91d:  mov    %eax,(%esp)
088e49d1 +0x920:  call   088e44b0 <+0x3ff>
088e49d6 +0x925:  mov    (%eax),%eax
088e49d8 +0x927:  mov    %ebx,%edx
088e49da +0x929:  sub    %eax,%edx
088e49dc +0x92b:  mov    %edx,%eax
088e49de +0x92d:  sar    $0x2,%eax
088e49e1 +0x930:  add    $0x14,%esp
088e49e4 +0x933:  pop    %ebx
088e49e5 +0x934:  pop    %ebp
088e49e6 +0x935:  ret
088e49e7 +0x936:  nop
088e49e8 +0x937:  push   %ebp
088e49e9 +0x938:  mov    %esp,%ebp
088e49eb +0x93a:  sub    $0x18,%esp
088e49ee +0x93d:  cmpl   $0x0,0xc(%ebp)
088e49f2 +0x941:  je     088e4a10 <+0x95f>
088e49f4 +0x943:  mov    0x8(%ebp),%eax
088e49f7 +0x946:  movl   $0x0,0x8(%esp)
088e49ff +0x94e:  mov    0xc(%ebp),%edx
088e4a02 +0x951:  mov    %edx,0x4(%esp)
088e4a06 +0x955:  mov    %eax,(%esp)
088e4a09 +0x958:  call   088e4b12 <+0xa61>
088e4a0e +0x95d:  jmp    088e4a15 <+0x964>
088e4a10 +0x95f:  mov    $0x0,%eax
088e4a15 +0x964:  leave
088e4a16 +0x965:  ret
088e4a17 +0x966:  push   %ebp
088e4a18 +0x967:  mov    %esp,%ebp
088e4a1a +0x969:  sub    $0x28,%esp
088e4a1d +0x96c:  lea    -0x10(%ebp),%eax
088e4a20 +0x96f:  lea    0xc(%ebp),%edx
088e4a23 +0x972:  mov    %edx,0x4(%esp)
088e4a27 +0x976:  mov    %eax,(%esp)
088e4a2a +0x979:  call   088e4b4a <+0xa99>
088e4a2f +0x97e:  sub    $0x4,%esp
088e4a32 +0x981:  lea    -0xc(%ebp),%eax
088e4a35 +0x984:  lea    0x8(%ebp),%edx
088e4a38 +0x987:  mov    %edx,0x4(%esp)
088e4a3c +0x98b:  mov    %eax,(%esp)
088e4a3f +0x98e:  call   088e4b4a <+0xa99>
088e4a44 +0x993:  sub    $0x4,%esp
088e4a47 +0x996:  mov    0x14(%ebp),%eax
088e4a4a +0x999:  mov    %eax,0xc(%esp)
088e4a4e +0x99d:  mov    0x10(%ebp),%eax
088e4a51 +0x9a0:  mov    %eax,0x8(%esp)
088e4a55 +0x9a4:  mov    -0x10(%ebp),%eax
088e4a58 +0x9a7:  mov    %eax,0x4(%esp)
088e4a5c +0x9ab:  mov    -0xc(%ebp),%eax
088e4a5f +0x9ae:  mov    %eax,(%esp)
088e4a62 +0x9b1:  call   088e4b6f <+0xabe>
088e4a67 +0x9b6:  leave
088e4a68 +0x9b7:  ret
088e4a69 +0x9b8:  nop
088e4a6a +0x9b9:  push   %ebp
088e4a6b +0x9ba:  mov    %esp,%ebp
088e4a6d +0x9bc:  pop    %ebp
088e4a6e +0x9bd:  ret
088e4a6f +0x9be:  nop
088e4a70 +0x9bf:  push   %ebp
088e4a71 +0x9c0:  mov    %esp,%ebp
088e4a73 +0x9c2:  sub    $0x18,%esp
088e4a76 +0x9c5:  mov    0x8(%ebp),%eax
088e4a79 +0x9c8:  mov    %eax,(%esp)
088e4a7c +0x9cb:  call   088e4b90 <+0xadf>
088e4a81 +0x9d0:  leave
088e4a82 +0x9d1:  ret
088e4a83 +0x9d2:  nop
088e4a84 +0x9d3:  push   %ebp
088e4a85 +0x9d4:  mov    %esp,%ebp
088e4a87 +0x9d6:  pop    %ebp
088e4a88 +0x9d7:  ret
088e4a89 +0x9d8:  nop
088e4a8a +0x9d9:  push   %ebp
088e4a8b +0x9da:  mov    %esp,%ebp
088e4a8d +0x9dc:  sub    $0x18,%esp
088e4a90 +0x9df:  mov    0xc(%ebp),%eax
088e4a93 +0x9e2:  mov    %eax,(%esp)
088e4a96 +0x9e5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088e4a9b +0x9ea:  leave
088e4a9c +0x9eb:  ret
088e4a9d +0x9ec:  push   %ebp
088e4a9e +0x9ed:  mov    %esp,%ebp
088e4aa0 +0x9ef:  pop    %ebp
088e4aa1 +0x9f0:  ret
088e4aa2 +0x9f1:  push   %ebp
088e4aa3 +0x9f2:  mov    %esp,%ebp
088e4aa5 +0x9f4:  mov    0x8(%ebp),%eax
088e4aa8 +0x9f7:  pop    %ebp
088e4aa9 +0x9f8:  ret
088e4aaa +0x9f9:  push   %ebp
088e4aab +0x9fa:  mov    %esp,%ebp
088e4aad +0x9fc:  mov    0x8(%ebp),%eax
088e4ab0 +0x9ff:  pop    %ebp
088e4ab1 +0xa00:  ret
088e4ab2 +0xa01:  push   %ebp
088e4ab3 +0xa02:  mov    %esp,%ebp
088e4ab5 +0xa04:  push   %esi
088e4ab6 +0xa05:  push   %ebx
088e4ab7 +0xa06:  sub    $0x10,%esp
088e4aba +0xa09:  mov    0x10(%ebp),%eax
088e4abd +0xa0c:  mov    %eax,(%esp)
088e4ac0 +0xa0f:  call   088e4b95 <+0xae4>
088e4ac5 +0xa14:  mov    %eax,%esi
088e4ac7 +0xa16:  mov    0xc(%ebp),%eax
088e4aca +0xa19:  mov    %eax,(%esp)
088e4acd +0xa1c:  call   088e4b95 <+0xae4>
088e4ad2 +0xa21:  mov    %eax,%ebx
088e4ad4 +0xa23:  mov    0x8(%ebp),%eax
088e4ad7 +0xa26:  mov    %eax,(%esp)
088e4ada +0xa29:  call   088e4b95 <+0xae4>
088e4adf +0xa2e:  mov    %esi,0x8(%esp)
088e4ae3 +0xa32:  mov    %ebx,0x4(%esp)
088e4ae7 +0xa36:  mov    %eax,(%esp)
088e4aea +0xa39:  call   088e4b9d <+0xaec>
088e4aef +0xa3e:  add    $0x10,%esp
088e4af2 +0xa41:  pop    %ebx
088e4af3 +0xa42:  pop    %esi
088e4af4 +0xa43:  pop    %ebp
088e4af5 +0xa44:  ret
088e4af6 +0xa45:  push   %ebp
088e4af7 +0xa46:  mov    %esp,%ebp
088e4af9 +0xa48:  sub    $0x18,%esp
088e4afc +0xa4b:  mov    0x8(%ebp),%eax
088e4aff +0xa4e:  mov    %eax,(%esp)
088e4b02 +0xa51:  call   088e4bc2 <+0xb11>
088e4b07 +0xa56:  mov    %eax,(%esp)
088e4b0a +0xa59:  call   088e4bca <+0xb19>
088e4b0f +0xa5e:  leave
088e4b10 +0xa5f:  ret
088e4b11 +0xa60:  nop
088e4b12 +0xa61:  push   %ebp
088e4b13 +0xa62:  mov    %esp,%ebp
088e4b15 +0xa64:  sub    $0x18,%esp
088e4b18 +0xa67:  mov    0x8(%ebp),%eax
088e4b1b +0xa6a:  mov    %eax,(%esp)
088e4b1e +0xa6d:  call   088e4bca <+0xb19>
088e4b23 +0xa72:  cmp    0xc(%ebp),%eax
088e4b26 +0xa75:  setb   %al
088e4b29 +0xa78:  movzbl %al,%eax
088e4b2c +0xa7b:  test   %eax,%eax
088e4b2e +0xa7d:  setne  %al
088e4b31 +0xa80:  test   %al,%al
088e4b33 +0xa82:  je     088e4b3a <+0xa89>
088e4b35 +0xa84:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
088e4b3a +0xa89:  mov    0xc(%ebp),%eax
088e4b3d +0xa8c:  shl    $0x2,%eax
088e4b40 +0xa8f:  mov    %eax,(%esp)
088e4b43 +0xa92:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088e4b48 +0xa97:  leave
088e4b49 +0xa98:  ret
088e4b4a +0xa99:  push   %ebp
088e4b4b +0xa9a:  mov    %esp,%ebp
088e4b4d +0xa9c:  push   %ebx
088e4b4e +0xa9d:  sub    $0x14,%esp
088e4b51 +0xaa0:  mov    0x8(%ebp),%ebx
088e4b54 +0xaa3:  mov    0xc(%ebp),%eax
088e4b57 +0xaa6:  mov    (%eax),%eax
088e4b59 +0xaa8:  mov    %eax,0x4(%esp)
088e4b5d +0xaac:  mov    %ebx,(%esp)
088e4b60 +0xaaf:  call   088e4bd4 <+0xb23>
088e4b65 +0xab4:  mov    %ebx,%eax
088e4b67 +0xab6:  add    $0x14,%esp
088e4b6a +0xab9:  pop    %ebx
088e4b6b +0xaba:  pop    %ebp
088e4b6c +0xabb:  ret    $0x4
088e4b6f +0xabe:  push   %ebp
088e4b70 +0xabf:  mov    %esp,%ebp
088e4b72 +0xac1:  sub    $0x18,%esp
088e4b75 +0xac4:  mov    0x10(%ebp),%eax
088e4b78 +0xac7:  mov    %eax,0x8(%esp)
088e4b7c +0xacb:  mov    0xc(%ebp),%eax
088e4b7f +0xace:  mov    %eax,0x4(%esp)
088e4b83 +0xad2:  mov    0x8(%ebp),%eax
088e4b86 +0xad5:  mov    %eax,(%esp)
088e4b89 +0xad8:  call   088e4be1 <+0xb30>
088e4b8e +0xadd:  leave
088e4b8f +0xade:  ret
088e4b90 +0xadf:  push   %ebp
088e4b91 +0xae0:  mov    %esp,%ebp
088e4b93 +0xae2:  pop    %ebp
088e4b94 +0xae3:  ret
088e4b95 +0xae4:  push   %ebp
088e4b96 +0xae5:  mov    %esp,%ebp
088e4b98 +0xae7:  mov    0x8(%ebp),%eax
088e4b9b +0xaea:  pop    %ebp
088e4b9c +0xaeb:  ret
088e4b9d +0xaec:  push   %ebp
088e4b9e +0xaed:  mov    %esp,%ebp
088e4ba0 +0xaef:  sub    $0x28,%esp
088e4ba3 +0xaf2:  movb   $0x1,-0x9(%ebp)
088e4ba7 +0xaf6:  mov    0x10(%ebp),%eax
088e4baa +0xaf9:  mov    %eax,0x8(%esp)
088e4bae +0xafd:  mov    0xc(%ebp),%eax
088e4bb1 +0xb00:  mov    %eax,0x4(%esp)
088e4bb5 +0xb04:  mov    0x8(%ebp),%eax
088e4bb8 +0xb07:  mov    %eax,(%esp)
088e4bbb +0xb0a:  call   088e4c02 <+0xb51>
088e4bc0 +0xb0f:  leave
088e4bc1 +0xb10:  ret
088e4bc2 +0xb11:  push   %ebp
088e4bc3 +0xb12:  mov    %esp,%ebp
088e4bc5 +0xb14:  mov    0x8(%ebp),%eax
088e4bc8 +0xb17:  pop    %ebp
088e4bc9 +0xb18:  ret
088e4bca +0xb19:  push   %ebp
088e4bcb +0xb1a:  mov    %esp,%ebp
088e4bcd +0xb1c:  mov    $0x3fffffff,%eax
088e4bd2 +0xb21:  pop    %ebp
088e4bd3 +0xb22:  ret
088e4bd4 +0xb23:  push   %ebp
088e4bd5 +0xb24:  mov    %esp,%ebp
088e4bd7 +0xb26:  mov    0x8(%ebp),%eax
088e4bda +0xb29:  mov    0xc(%ebp),%edx
088e4bdd +0xb2c:  mov    %edx,(%eax)
088e4bdf +0xb2e:  pop    %ebp
088e4be0 +0xb2f:  ret
088e4be1 +0xb30:  push   %ebp
088e4be2 +0xb31:  mov    %esp,%ebp
088e4be4 +0xb33:  sub    $0x18,%esp
088e4be7 +0xb36:  mov    0x10(%ebp),%eax
088e4bea +0xb39:  mov    %eax,0x8(%esp)
088e4bee +0xb3d:  mov    0xc(%ebp),%eax
088e4bf1 +0xb40:  mov    %eax,0x4(%esp)
088e4bf5 +0xb44:  mov    0x8(%ebp),%eax
088e4bf8 +0xb47:  mov    %eax,(%esp)
088e4bfb +0xb4a:  call   088e4c4f <+0xb9e>
088e4c00 +0xb4f:  leave
088e4c01 +0xb50:  ret
088e4c02 +0xb51:  push   %ebp
088e4c03 +0xb52:  mov    %esp,%ebp
088e4c05 +0xb54:  sub    $0x28,%esp
088e4c08 +0xb57:  mov    0xc(%ebp),%edx
088e4c0b +0xb5a:  mov    0x8(%ebp),%eax
088e4c0e +0xb5d:  mov    %edx,%ecx
088e4c10 +0xb5f:  sub    %eax,%ecx
088e4c12 +0xb61:  mov    %ecx,%eax
088e4c14 +0xb63:  sar    $0x2,%eax
088e4c17 +0xb66:  mov    %eax,-0xc(%ebp)
088e4c1a +0xb69:  mov    -0xc(%ebp),%eax
088e4c1d +0xb6c:  lea    0x0(,%eax,4),%edx
088e4c24 +0xb73:  mov    -0xc(%ebp),%eax
088e4c27 +0xb76:  shl    $0x2,%eax
088e4c2a +0xb79:  neg    %eax
088e4c2c +0xb7b:  add    0x10(%ebp),%eax
088e4c2f +0xb7e:  mov    %edx,0x8(%esp)
088e4c33 +0xb82:  mov    0x8(%ebp),%edx
088e4c36 +0xb85:  mov    %edx,0x4(%esp)
088e4c3a +0xb89:  mov    %eax,(%esp)
088e4c3d +0xb8c:  call   0807d880 <_init+0x178>
088e4c42 +0xb91:  mov    -0xc(%ebp),%eax
088e4c45 +0xb94:  shl    $0x2,%eax
088e4c48 +0xb97:  neg    %eax
088e4c4a +0xb99:  add    0x10(%ebp),%eax
088e4c4d +0xb9c:  leave
088e4c4e +0xb9d:  ret
088e4c4f +0xb9e:  push   %ebp
088e4c50 +0xb9f:  mov    %esp,%ebp
088e4c52 +0xba1:  sub    $0x18,%esp
088e4c55 +0xba4:  mov    0x10(%ebp),%eax
088e4c58 +0xba7:  mov    %eax,0x8(%esp)
088e4c5c +0xbab:  mov    0xc(%ebp),%eax
088e4c5f +0xbae:  mov    %eax,0x4(%esp)
088e4c63 +0xbb2:  mov    0x8(%ebp),%eax
088e4c66 +0xbb5:  mov    %eax,(%esp)
088e4c69 +0xbb8:  call   088e4c70 <+0xbbf>
088e4c6e +0xbbd:  leave
088e4c6f +0xbbe:  ret
088e4c70 +0xbbf:  push   %ebp
088e4c71 +0xbc0:  mov    %esp,%ebp
088e4c73 +0xbc2:  push   %ebx
088e4c74 +0xbc3:  sub    $0x14,%esp
088e4c77 +0xbc6:  mov    0xc(%ebp),%eax
088e4c7a +0xbc9:  mov    %eax,(%esp)
088e4c7d +0xbcc:  call   088e4ca8 <+0xbf7>
088e4c82 +0xbd1:  mov    %eax,%ebx
088e4c84 +0xbd3:  mov    0x8(%ebp),%eax
088e4c87 +0xbd6:  mov    %eax,(%esp)
088e4c8a +0xbd9:  call   088e4ca8 <+0xbf7>
088e4c8f +0xbde:  mov    0x10(%ebp),%edx
088e4c92 +0xbe1:  mov    %edx,0x8(%esp)
088e4c96 +0xbe5:  mov    %ebx,0x4(%esp)
088e4c9a +0xbe9:  mov    %eax,(%esp)
088e4c9d +0xbec:  call   088e4cbb <+0xc0a>
088e4ca2 +0xbf1:  add    $0x14,%esp
088e4ca5 +0xbf4:  pop    %ebx
088e4ca6 +0xbf5:  pop    %ebp
088e4ca7 +0xbf6:  ret
088e4ca8 +0xbf7:  push   %ebp
088e4ca9 +0xbf8:  mov    %esp,%ebp
088e4cab +0xbfa:  sub    $0x18,%esp
088e4cae +0xbfd:  lea    0x8(%ebp),%eax
088e4cb1 +0xc00:  mov    %eax,(%esp)
088e4cb4 +0xc03:  call   088e4d00 <+0xc4f>
088e4cb9 +0xc08:  leave
088e4cba +0xc09:  ret
088e4cbb +0xc0a:  push   %ebp
088e4cbc +0xc0b:  mov    %esp,%ebp
088e4cbe +0xc0d:  push   %esi
088e4cbf +0xc0e:  push   %ebx
088e4cc0 +0xc0f:  sub    $0x10,%esp
088e4cc3 +0xc12:  mov    0x10(%ebp),%eax
088e4cc6 +0xc15:  mov    %eax,(%esp)
088e4cc9 +0xc18:  call   088e4b95 <+0xae4>
088e4cce +0xc1d:  mov    %eax,%esi
088e4cd0 +0xc1f:  mov    0xc(%ebp),%eax
088e4cd3 +0xc22:  mov    %eax,(%esp)
088e4cd6 +0xc25:  call   088e4b95 <+0xae4>
088e4cdb +0xc2a:  mov    %eax,%ebx
088e4cdd +0xc2c:  mov    0x8(%ebp),%eax
088e4ce0 +0xc2f:  mov    %eax,(%esp)
088e4ce3 +0xc32:  call   088e4b95 <+0xae4>
088e4ce8 +0xc37:  mov    %esi,0x8(%esp)
088e4cec +0xc3b:  mov    %ebx,0x4(%esp)
088e4cf0 +0xc3f:  mov    %eax,(%esp)
088e4cf3 +0xc42:  call   088e4d0a <+0xc59>
088e4cf8 +0xc47:  add    $0x10,%esp
088e4cfb +0xc4a:  pop    %ebx
088e4cfc +0xc4b:  pop    %esi
088e4cfd +0xc4c:  pop    %ebp
088e4cfe +0xc4d:  ret
088e4cff +0xc4e:  nop
088e4d00 +0xc4f:  push   %ebp
088e4d01 +0xc50:  mov    %esp,%ebp
088e4d03 +0xc52:  mov    0x8(%ebp),%eax
088e4d06 +0xc55:  mov    (%eax),%eax
088e4d08 +0xc57:  pop    %ebp
088e4d09 +0xc58:  ret
088e4d0a +0xc59:  push   %ebp
088e4d0b +0xc5a:  mov    %esp,%ebp
088e4d0d +0xc5c:  sub    $0x28,%esp
088e4d10 +0xc5f:  movb   $0x1,-0x9(%ebp)
088e4d14 +0xc63:  mov    0x10(%ebp),%eax
088e4d17 +0xc66:  mov    %eax,0x8(%esp)
088e4d1b +0xc6a:  mov    0xc(%ebp),%eax
088e4d1e +0xc6d:  mov    %eax,0x4(%esp)
088e4d22 +0xc71:  mov    0x8(%ebp),%eax
088e4d25 +0xc74:  mov    %eax,(%esp)
088e4d28 +0xc77:  call   088e4d2f <+0xc7e>
088e4d2d +0xc7c:  leave
088e4d2e +0xc7d:  ret
088e4d2f +0xc7e:  push   %ebp
088e4d30 +0xc7f:  mov    %esp,%ebp
088e4d32 +0xc81:  sub    $0x18,%esp
088e4d35 +0xc84:  mov    0xc(%ebp),%edx
088e4d38 +0xc87:  mov    0x8(%ebp),%eax
088e4d3b +0xc8a:  mov    %edx,%ecx
088e4d3d +0xc8c:  sub    %eax,%ecx
088e4d3f +0xc8e:  mov    %ecx,%eax
088e4d41 +0xc90:  sar    $0x2,%eax
088e4d44 +0xc93:  shl    $0x2,%eax
088e4d47 +0xc96:  mov    %eax,0x8(%esp)
088e4d4b +0xc9a:  mov    0x8(%ebp),%eax
088e4d4e +0xc9d:  mov    %eax,0x4(%esp)
088e4d52 +0xca1:  mov    0x10(%ebp),%eax
088e4d55 +0xca4:  mov    %eax,(%esp)
088e4d58 +0xca7:  call   0807d880 <_init+0x178>
088e4d5d +0xcac:  mov    0xc(%ebp),%edx
088e4d60 +0xcaf:  mov    0x8(%ebp),%eax
088e4d63 +0xcb2:  mov    %edx,%ecx
088e4d65 +0xcb4:  sub    %eax,%ecx
088e4d67 +0xcb6:  mov    %ecx,%eax
088e4d69 +0xcb8:  sar    $0x2,%eax
088e4d6c +0xcbb:  shl    $0x2,%eax
088e4d6f +0xcbe:  add    0x10(%ebp),%eax
088e4d72 +0xcc1:  leave
088e4d73 +0xcc2:  ret
```

## 反编译 C

```c
// <global>::global @ 0x88e40b1

/* CraneItemInfo::operator=(CraneItemInfo const&) */

void CraneItemInfo::_GLOBAL__I_operator_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
