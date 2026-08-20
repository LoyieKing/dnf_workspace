# GetResult

`_ZN12PvpUserTable9GetResultEibi`

`PvpUserTable::GetResult(int, bool, int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d5064` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5064  _ZN12PvpUserTable9GetResultEibi
#           PvpUserTable::GetResult(int, bool, int)
# range [0x085d5064, 0x085d572f]
085d5064 +0x000:  push   %ebp
085d5065 +0x001:  mov    %esp,%ebp
085d5067 +0x003:  push   %ebx
085d5068 +0x004:  sub    $0xb4,%esp
085d506e +0x00a:  mov    0x10(%ebp),%eax
085d5071 +0x00d:  mov    %al,-0x6c(%ebp)
085d5074 +0x010:  mov    0xc(%ebp),%eax
085d5077 +0x013:  mov    %eax,0x4(%esp)
085d507b +0x017:  mov    0x8(%ebp),%eax
085d507e +0x01a:  mov    %eax,(%esp)
085d5081 +0x01d:  call   085d4a14 <_ZN12PvpUserTable11IsValidTeamEi>  ; PvpUserTable::IsValidTeam(int)
085d5086 +0x022:  xor    $0x1,%eax
085d5089 +0x025:  test   %al,%al
085d508b +0x027:  je     085d5097 <+0x33>
085d508d +0x029:  mov    $0xffffffff,%eax
085d5092 +0x02e:  jmp    085d5727 <+0x6c3>
085d5097 +0x033:  cmpb   $0x0,-0x6c(%ebp)
085d509b +0x037:  je     085d515b <+0xf7>
085d50a1 +0x03d:  cmpl   $0x2,0xc(%ebp)
085d50a5 +0x041:  je     085d50f4 <+0x90>
085d50a7 +0x043:  cmpl   $0x1,0xc(%ebp)
085d50ab +0x047:  je     085d50f4 <+0x90>
085d50ad +0x049:  movl   $0x5,0xc(%esp)
085d50b5 +0x051:  movl   $0x1a0,0x8(%esp)
085d50bd +0x059:  movl   $&_ZZN12PvpUserTable9GetResultEibiE19__PRETTY_FUNCTION__,0x4(%esp)
085d50c5 +0x061:  lea    -0x5c(%ebp),%eax
085d50c8 +0x064:  mov    %eax,(%esp)
085d50cb +0x067:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d50d0 +0x06c:  mov    0xc(%ebp),%eax
085d50d3 +0x06f:  mov    %eax,0x8(%esp)
085d50d7 +0x073:  movl   $"결투로직 오류 PvpUserTable::GetResult Invalid Team<%d>",0x4(%esp)
085d50df +0x07b:  lea    -0x5c(%ebp),%eax
085d50e2 +0x07e:  mov    %eax,(%esp)
085d50e5 +0x081:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d50ea +0x086:  mov    $0x0,%eax
085d50ef +0x08b:  jmp    085d5727 <+0x6c3>
085d50f4 +0x090:  cmpl   $0x1,0xc(%ebp)
085d50f8 +0x094:  jne    085d5101 <+0x9d>
085d50fa +0x096:  mov    $0x2,%eax
085d50ff +0x09b:  jmp    085d5106 <+0xa2>
085d5101 +0x09d:  mov    $0x1,%eax
085d5106 +0x0a2:  mov    %eax,-0xc(%ebp)
085d5109 +0x0a5:  mov    0x8(%ebp),%eax
085d510c +0x0a8:  mov    0x320(%eax),%eax
085d5112 +0x0ae:  cmp    0xc(%ebp),%eax
085d5115 +0x0b1:  jne    085d515b <+0xf7>
085d5117 +0x0b3:  mov    -0xc(%ebp),%eax
085d511a +0x0b6:  mov    0x8(%ebp),%edx
085d511d +0x0b9:  movzbl 0x344(%edx,%eax,1),%eax
085d5125 +0x0c1:  xor    $0x1,%eax
085d5128 +0x0c4:  test   %al,%al
085d512a +0x0c6:  je     085d515b <+0xf7>
085d512c +0x0c8:  mov    0x8(%ebp),%eax
085d512f +0x0cb:  mov    0x320(%eax),%ecx
085d5135 +0x0d1:  mov    0xc(%ebp),%edx
085d5138 +0x0d4:  mov    0x8(%ebp),%eax
085d513b +0x0d7:  shl    $0x3,%ecx
085d513e +0x0da:  lea    (%ecx,%edx,1),%edx
085d5141 +0x0dd:  flds   (%eax,%edx,4)
085d5144 +0x0e0:  fldz
085d5146 +0x0e2:  fxch   %st(1)
085d5148 +0x0e4:  fucompp
085d514a +0x0e6:  fnstsw %ax
085d514c +0x0e8:  sahf
085d514d +0x0e9:  jp     085d5151 <+0xed>
085d514f +0x0eb:  je     085d515b <+0xf7>
085d5151 +0x0ed:  mov    $0x0,%eax
085d5156 +0x0f2:  jmp    085d5727 <+0x6c3>
085d515b +0x0f7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d5160 +0x0fc:  mov    %eax,(%esp)
085d5163 +0x0ff:  call   085dfa76 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2fd>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2fd
085d5168 +0x104:  test   %al,%al
085d516a +0x106:  je     085d55f7 <+0x593>
085d5170 +0x10c:  mov    0x8(%ebp),%eax
085d5173 +0x10f:  mov    0x320(%eax),%eax
085d5179 +0x115:  cmp    0xc(%ebp),%eax
085d517c +0x118:  je     085d5474 <+0x410>
085d5182 +0x11e:  cmpl   $0xe,0x14(%ebp)
085d5186 +0x122:  jg     085d52f1 <+0x28d>
085d518c +0x128:  mov    0xc(%ebp),%ecx
085d518f +0x12b:  mov    0xc(%ebp),%edx
085d5192 +0x12e:  mov    0x8(%ebp),%eax
085d5195 +0x131:  shl    $0x3,%ecx
085d5198 +0x134:  lea    (%ecx,%edx,1),%edx
085d519b +0x137:  flds   (%eax,%edx,4)
085d519e +0x13a:  flds   &data#98348f84(.rodata)
085d51a4 +0x140:  fmulp  %st,%st(1)
085d51a6 +0x142:  flds   &data#0674a6f6(.rodata)
085d51ac +0x148:  fmulp  %st,%st(1)
085d51ae +0x14a:  flds   &data#e47226a2(.rodata)
085d51b4 +0x150:  fdivrp %st,%st(1)
085d51b6 +0x152:  fnstcw -0x6e(%ebp)
085d51b9 +0x155:  movzwl -0x6e(%ebp),%eax
085d51bd +0x159:  mov    $0xc,%ah
085d51bf +0x15b:  mov    %ax,-0x70(%ebp)
085d51c3 +0x15f:  fldcw  -0x70(%ebp)
085d51c6 +0x162:  fistpl -0x74(%ebp)
085d51c9 +0x165:  fldcw  -0x6e(%ebp)
085d51cc +0x168:  mov    -0x74(%ebp),%eax
085d51cf +0x16b:  cmp    $0xfffe7960,%eax
085d51d4 +0x170:  jl     085d5217 <+0x1b3>
085d51d6 +0x172:  mov    0xc(%ebp),%ecx
085d51d9 +0x175:  mov    0xc(%ebp),%edx
085d51dc +0x178:  mov    0x8(%ebp),%eax
085d51df +0x17b:  shl    $0x3,%ecx
085d51e2 +0x17e:  lea    (%ecx,%edx,1),%edx
085d51e5 +0x181:  flds   (%eax,%edx,4)
085d51e8 +0x184:  flds   &data#98348f84(.rodata)
085d51ee +0x18a:  fmulp  %st,%st(1)
085d51f0 +0x18c:  flds   &data#0674a6f6(.rodata)
085d51f6 +0x192:  fmulp  %st,%st(1)
085d51f8 +0x194:  flds   &data#e47226a2(.rodata)
085d51fe +0x19a:  fdivrp %st,%st(1)
085d5200 +0x19c:  fldcw  -0x70(%ebp)
085d5203 +0x19f:  fistpl -0x74(%ebp)
085d5206 +0x1a2:  fldcw  -0x6e(%ebp)
085d5209 +0x1a5:  mov    -0x74(%ebp),%eax
085d520c +0x1a8:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
085d5211 +0x1ad:  jle    085d52b6 <+0x252>
085d5217 +0x1b3:  mov    0xc(%ebp),%ecx
085d521a +0x1b6:  mov    0xc(%ebp),%edx
085d521d +0x1b9:  mov    0x8(%ebp),%eax
085d5220 +0x1bc:  shl    $0x3,%ecx
085d5223 +0x1bf:  lea    (%ecx,%edx,1),%edx
085d5226 +0x1c2:  flds   (%eax,%edx,4)
085d5229 +0x1c5:  fstpl  -0x98(%ebp)
085d522f +0x1cb:  mov    0xc(%ebp),%ecx
085d5232 +0x1ce:  mov    0xc(%ebp),%edx
085d5235 +0x1d1:  mov    0x8(%ebp),%eax
085d5238 +0x1d4:  shl    $0x3,%ecx
085d523b +0x1d7:  lea    (%ecx,%edx,1),%edx
085d523e +0x1da:  flds   (%eax,%edx,4)
085d5241 +0x1dd:  flds   &data#98348f84(.rodata)
085d5247 +0x1e3:  fmulp  %st,%st(1)
085d5249 +0x1e5:  flds   &data#0674a6f6(.rodata)
085d524f +0x1eb:  fmulp  %st,%st(1)
085d5251 +0x1ed:  flds   &data#e47226a2(.rodata)
085d5257 +0x1f3:  fdivrp %st,%st(1)
085d5259 +0x1f5:  fldcw  -0x70(%ebp)
085d525c +0x1f8:  fistpl -0x74(%ebp)
085d525f +0x1fb:  fldcw  -0x6e(%ebp)
085d5262 +0x1fe:  mov    -0x74(%ebp),%ebx
085d5265 +0x201:  movl   $0x5,0xc(%esp)
085d526d +0x209:  movl   $0x1b9,0x8(%esp)
085d5275 +0x211:  movl   $&_ZZN12PvpUserTable9GetResultEibiE19__PRETTY_FUNCTION__,0x4(%esp)
085d527d +0x219:  lea    -0x4c(%ebp),%eax
085d5280 +0x21c:  mov    %eax,(%esp)
085d5283 +0x21f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d5288 +0x224:  fldl   -0x98(%ebp)
085d528e +0x22a:  fstpl  0xc(%esp)
085d5292 +0x22e:  mov    %ebx,0x8(%esp)
085d5296 +0x232:  movl   $"pvp_exp_error1 %d, %f",0x4(%esp)
085d529e +0x23a:  lea    -0x4c(%ebp),%eax
085d52a1 +0x23d:  mov    %eax,(%esp)
085d52a4 +0x240:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d52a9 +0x245:  fnstcw -0x6e(%ebp)
085d52ac +0x248:  movzwl -0x6e(%ebp),%eax
085d52b0 +0x24c:  mov    $0xc,%ah
085d52b2 +0x24e:  mov    %ax,-0x70(%ebp)
085d52b6 +0x252:  mov    0xc(%ebp),%ecx
085d52b9 +0x255:  mov    0xc(%ebp),%edx
085d52bc +0x258:  mov    0x8(%ebp),%eax
085d52bf +0x25b:  shl    $0x3,%ecx
085d52c2 +0x25e:  lea    (%ecx,%edx,1),%edx
085d52c5 +0x261:  flds   (%eax,%edx,4)
085d52c8 +0x264:  flds   &data#98348f84(.rodata)
085d52ce +0x26a:  fmulp  %st,%st(1)
085d52d0 +0x26c:  flds   &data#0674a6f6(.rodata)
085d52d6 +0x272:  fmulp  %st,%st(1)
085d52d8 +0x274:  flds   &data#e47226a2(.rodata)
085d52de +0x27a:  fdivrp %st,%st(1)
085d52e0 +0x27c:  fldcw  -0x70(%ebp)
085d52e3 +0x27f:  fistpl -0x74(%ebp)
085d52e6 +0x282:  fldcw  -0x6e(%ebp)
085d52e9 +0x285:  mov    -0x74(%ebp),%eax
085d52ec +0x288:  jmp    085d5727 <+0x6c3>
085d52f1 +0x28d:  mov    0x8(%ebp),%eax
085d52f4 +0x290:  mov    0x320(%eax),%ecx
085d52fa +0x296:  mov    0xc(%ebp),%edx
085d52fd +0x299:  mov    0x8(%ebp),%eax
085d5300 +0x29c:  shl    $0x3,%ecx
085d5303 +0x29f:  lea    (%ecx,%edx,1),%edx
085d5306 +0x2a2:  flds   (%eax,%edx,4)
085d5309 +0x2a5:  flds   &data#98348f84(.rodata)
085d530f +0x2ab:  fmulp  %st,%st(1)
085d5311 +0x2ad:  flds   &data#0674a6f6(.rodata)
085d5317 +0x2b3:  fmulp  %st,%st(1)
085d5319 +0x2b5:  flds   &data#e47226a2(.rodata)
085d531f +0x2bb:  fdivrp %st,%st(1)
085d5321 +0x2bd:  fnstcw -0x6e(%ebp)
085d5324 +0x2c0:  movzwl -0x6e(%ebp),%eax
085d5328 +0x2c4:  mov    $0xc,%ah
085d532a +0x2c6:  mov    %ax,-0x70(%ebp)
085d532e +0x2ca:  fldcw  -0x70(%ebp)
085d5331 +0x2cd:  fistpl -0x74(%ebp)
085d5334 +0x2d0:  fldcw  -0x6e(%ebp)
085d5337 +0x2d3:  mov    -0x74(%ebp),%eax
085d533a +0x2d6:  cmp    $0xfffe7960,%eax
085d533f +0x2db:  jl     085d5388 <+0x324>
085d5341 +0x2dd:  mov    0x8(%ebp),%eax
085d5344 +0x2e0:  mov    0x320(%eax),%ecx
085d534a +0x2e6:  mov    0xc(%ebp),%edx
085d534d +0x2e9:  mov    0x8(%ebp),%eax
085d5350 +0x2ec:  shl    $0x3,%ecx
085d5353 +0x2ef:  lea    (%ecx,%edx,1),%edx
085d5356 +0x2f2:  flds   (%eax,%edx,4)
085d5359 +0x2f5:  flds   &data#98348f84(.rodata)
085d535f +0x2fb:  fmulp  %st,%st(1)
085d5361 +0x2fd:  flds   &data#0674a6f6(.rodata)
085d5367 +0x303:  fmulp  %st,%st(1)
085d5369 +0x305:  flds   &data#e47226a2(.rodata)
085d536f +0x30b:  fdivrp %st,%st(1)
085d5371 +0x30d:  fldcw  -0x70(%ebp)
085d5374 +0x310:  fistpl -0x74(%ebp)
085d5377 +0x313:  fldcw  -0x6e(%ebp)
085d537a +0x316:  mov    -0x74(%ebp),%eax
085d537d +0x319:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
085d5382 +0x31e:  jle    085d5433 <+0x3cf>
085d5388 +0x324:  mov    0x8(%ebp),%eax
085d538b +0x327:  mov    0x320(%eax),%ecx
085d5391 +0x32d:  mov    0xc(%ebp),%edx
085d5394 +0x330:  mov    0x8(%ebp),%eax
085d5397 +0x333:  shl    $0x3,%ecx
085d539a +0x336:  lea    (%ecx,%edx,1),%edx
085d539d +0x339:  flds   (%eax,%edx,4)
085d53a0 +0x33c:  fstpl  -0x90(%ebp)
085d53a6 +0x342:  mov    0x8(%ebp),%eax
085d53a9 +0x345:  mov    0x320(%eax),%ecx
085d53af +0x34b:  mov    0xc(%ebp),%edx
085d53b2 +0x34e:  mov    0x8(%ebp),%eax
085d53b5 +0x351:  shl    $0x3,%ecx
085d53b8 +0x354:  lea    (%ecx,%edx,1),%edx
085d53bb +0x357:  flds   (%eax,%edx,4)
085d53be +0x35a:  flds   &data#98348f84(.rodata)
085d53c4 +0x360:  fmulp  %st,%st(1)
085d53c6 +0x362:  flds   &data#0674a6f6(.rodata)
085d53cc +0x368:  fmulp  %st,%st(1)
085d53ce +0x36a:  flds   &data#e47226a2(.rodata)
085d53d4 +0x370:  fdivrp %st,%st(1)
085d53d6 +0x372:  fldcw  -0x70(%ebp)
085d53d9 +0x375:  fistpl -0x74(%ebp)
085d53dc +0x378:  fldcw  -0x6e(%ebp)
085d53df +0x37b:  mov    -0x74(%ebp),%ebx
085d53e2 +0x37e:  movl   $0x5,0xc(%esp)
085d53ea +0x386:  movl   $0x1c4,0x8(%esp)
085d53f2 +0x38e:  movl   $&_ZZN12PvpUserTable9GetResultEibiE19__PRETTY_FUNCTION__,0x4(%esp)
085d53fa +0x396:  lea    -0x3c(%ebp),%eax
085d53fd +0x399:  mov    %eax,(%esp)
085d5400 +0x39c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d5405 +0x3a1:  fldl   -0x90(%ebp)
085d540b +0x3a7:  fstpl  0xc(%esp)
085d540f +0x3ab:  mov    %ebx,0x8(%esp)
085d5413 +0x3af:  movl   $"pvp_exp_error2 %d, %f",0x4(%esp)
085d541b +0x3b7:  lea    -0x3c(%ebp),%eax
085d541e +0x3ba:  mov    %eax,(%esp)
085d5421 +0x3bd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d5426 +0x3c2:  fnstcw -0x6e(%ebp)
085d5429 +0x3c5:  movzwl -0x6e(%ebp),%eax
085d542d +0x3c9:  mov    $0xc,%ah
085d542f +0x3cb:  mov    %ax,-0x70(%ebp)
085d5433 +0x3cf:  mov    0x8(%ebp),%eax
085d5436 +0x3d2:  mov    0x320(%eax),%ecx
085d543c +0x3d8:  mov    0xc(%ebp),%edx
085d543f +0x3db:  mov    0x8(%ebp),%eax
085d5442 +0x3de:  shl    $0x3,%ecx
085d5445 +0x3e1:  lea    (%ecx,%edx,1),%edx
085d5448 +0x3e4:  flds   (%eax,%edx,4)
085d544b +0x3e7:  flds   &data#98348f84(.rodata)
085d5451 +0x3ed:  fmulp  %st,%st(1)
085d5453 +0x3ef:  flds   &data#0674a6f6(.rodata)
085d5459 +0x3f5:  fmulp  %st,%st(1)
085d545b +0x3f7:  flds   &data#e47226a2(.rodata)
085d5461 +0x3fd:  fdivrp %st,%st(1)
085d5463 +0x3ff:  fldcw  -0x70(%ebp)
085d5466 +0x402:  fistpl -0x74(%ebp)
085d5469 +0x405:  fldcw  -0x6e(%ebp)
085d546c +0x408:  mov    -0x74(%ebp),%eax
085d546f +0x40b:  jmp    085d5727 <+0x6c3>
085d5474 +0x410:  mov    0x8(%ebp),%eax
085d5477 +0x413:  mov    0x320(%eax),%ecx
085d547d +0x419:  mov    0xc(%ebp),%edx
085d5480 +0x41c:  mov    0x8(%ebp),%eax
085d5483 +0x41f:  shl    $0x3,%ecx
085d5486 +0x422:  lea    (%ecx,%edx,1),%edx
085d5489 +0x425:  flds   (%eax,%edx,4)
085d548c +0x428:  flds   &data#98348f84(.rodata)
085d5492 +0x42e:  fmulp  %st,%st(1)
085d5494 +0x430:  flds   &data#78734c59(.rodata)
085d549a +0x436:  fmulp  %st,%st(1)
085d549c +0x438:  flds   &data#e47226a2(.rodata)
085d54a2 +0x43e:  fdivrp %st,%st(1)
085d54a4 +0x440:  fnstcw -0x6e(%ebp)
085d54a7 +0x443:  movzwl -0x6e(%ebp),%eax
085d54ab +0x447:  mov    $0xc,%ah
085d54ad +0x449:  mov    %ax,-0x70(%ebp)
085d54b1 +0x44d:  fldcw  -0x70(%ebp)
085d54b4 +0x450:  fistpl -0x74(%ebp)
085d54b7 +0x453:  fldcw  -0x6e(%ebp)
085d54ba +0x456:  mov    -0x74(%ebp),%eax
085d54bd +0x459:  cmp    $0xfffe7960,%eax
085d54c2 +0x45e:  jl     085d550b <+0x4a7>
085d54c4 +0x460:  mov    0x8(%ebp),%eax
085d54c7 +0x463:  mov    0x320(%eax),%ecx
085d54cd +0x469:  mov    0xc(%ebp),%edx
085d54d0 +0x46c:  mov    0x8(%ebp),%eax
085d54d3 +0x46f:  shl    $0x3,%ecx
085d54d6 +0x472:  lea    (%ecx,%edx,1),%edx
085d54d9 +0x475:  flds   (%eax,%edx,4)
085d54dc +0x478:  flds   &data#98348f84(.rodata)
085d54e2 +0x47e:  fmulp  %st,%st(1)
085d54e4 +0x480:  flds   &data#78734c59(.rodata)
085d54ea +0x486:  fmulp  %st,%st(1)
085d54ec +0x488:  flds   &data#e47226a2(.rodata)
085d54f2 +0x48e:  fdivrp %st,%st(1)
085d54f4 +0x490:  fldcw  -0x70(%ebp)
085d54f7 +0x493:  fistpl -0x74(%ebp)
085d54fa +0x496:  fldcw  -0x6e(%ebp)
085d54fd +0x499:  mov    -0x74(%ebp),%eax
085d5500 +0x49c:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
085d5505 +0x4a1:  jle    085d55b6 <+0x552>
085d550b +0x4a7:  mov    0x8(%ebp),%eax
085d550e +0x4aa:  mov    0x320(%eax),%ecx
085d5514 +0x4b0:  mov    0xc(%ebp),%edx
085d5517 +0x4b3:  mov    0x8(%ebp),%eax
085d551a +0x4b6:  shl    $0x3,%ecx
085d551d +0x4b9:  lea    (%ecx,%edx,1),%edx
085d5520 +0x4bc:  flds   (%eax,%edx,4)
085d5523 +0x4bf:  fstpl  -0x88(%ebp)
085d5529 +0x4c5:  mov    0x8(%ebp),%eax
085d552c +0x4c8:  mov    0x320(%eax),%ecx
085d5532 +0x4ce:  mov    0xc(%ebp),%edx
085d5535 +0x4d1:  mov    0x8(%ebp),%eax
085d5538 +0x4d4:  shl    $0x3,%ecx
085d553b +0x4d7:  lea    (%ecx,%edx,1),%edx
085d553e +0x4da:  flds   (%eax,%edx,4)
085d5541 +0x4dd:  flds   &data#98348f84(.rodata)
085d5547 +0x4e3:  fmulp  %st,%st(1)
085d5549 +0x4e5:  flds   &data#78734c59(.rodata)
085d554f +0x4eb:  fmulp  %st,%st(1)
085d5551 +0x4ed:  flds   &data#e47226a2(.rodata)
085d5557 +0x4f3:  fdivrp %st,%st(1)
085d5559 +0x4f5:  fldcw  -0x70(%ebp)
085d555c +0x4f8:  fistpl -0x74(%ebp)
085d555f +0x4fb:  fldcw  -0x6e(%ebp)
085d5562 +0x4fe:  mov    -0x74(%ebp),%ebx
085d5565 +0x501:  movl   $0x5,0xc(%esp)
085d556d +0x509:  movl   $0x1d0,0x8(%esp)
085d5575 +0x511:  movl   $&_ZZN12PvpUserTable9GetResultEibiE19__PRETTY_FUNCTION__,0x4(%esp)
085d557d +0x519:  lea    -0x2c(%ebp),%eax
085d5580 +0x51c:  mov    %eax,(%esp)
085d5583 +0x51f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d5588 +0x524:  fldl   -0x88(%ebp)
085d558e +0x52a:  fstpl  0xc(%esp)
085d5592 +0x52e:  mov    %ebx,0x8(%esp)
085d5596 +0x532:  movl   $"pvp_exp_error3 %d, %f",0x4(%esp)
085d559e +0x53a:  lea    -0x2c(%ebp),%eax
085d55a1 +0x53d:  mov    %eax,(%esp)
085d55a4 +0x540:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d55a9 +0x545:  fnstcw -0x6e(%ebp)
085d55ac +0x548:  movzwl -0x6e(%ebp),%eax
085d55b0 +0x54c:  mov    $0xc,%ah
085d55b2 +0x54e:  mov    %ax,-0x70(%ebp)
085d55b6 +0x552:  mov    0x8(%ebp),%eax
085d55b9 +0x555:  mov    0x320(%eax),%ecx
085d55bf +0x55b:  mov    0xc(%ebp),%edx
085d55c2 +0x55e:  mov    0x8(%ebp),%eax
085d55c5 +0x561:  shl    $0x3,%ecx
085d55c8 +0x564:  lea    (%ecx,%edx,1),%edx
085d55cb +0x567:  flds   (%eax,%edx,4)
085d55ce +0x56a:  flds   &data#98348f84(.rodata)
085d55d4 +0x570:  fmulp  %st,%st(1)
085d55d6 +0x572:  flds   &data#78734c59(.rodata)
085d55dc +0x578:  fmulp  %st,%st(1)
085d55de +0x57a:  flds   &data#e47226a2(.rodata)
085d55e4 +0x580:  fdivrp %st,%st(1)
085d55e6 +0x582:  fldcw  -0x70(%ebp)
085d55e9 +0x585:  fistpl -0x74(%ebp)
085d55ec +0x588:  fldcw  -0x6e(%ebp)
085d55ef +0x58b:  mov    -0x74(%ebp),%eax
085d55f2 +0x58e:  jmp    085d5727 <+0x6c3>
085d55f7 +0x593:  mov    0x8(%ebp),%eax
085d55fa +0x596:  mov    0x320(%eax),%ecx
085d5600 +0x59c:  mov    0xc(%ebp),%edx
085d5603 +0x59f:  mov    0x8(%ebp),%eax
085d5606 +0x5a2:  shl    $0x3,%ecx
085d5609 +0x5a5:  lea    (%ecx,%edx,1),%edx
085d560c +0x5a8:  flds   (%eax,%edx,4)
085d560f +0x5ab:  flds   &data#98348f84(.rodata)
085d5615 +0x5b1:  fmulp  %st,%st(1)
085d5617 +0x5b3:  fnstcw -0x6e(%ebp)
085d561a +0x5b6:  movzwl -0x6e(%ebp),%eax
085d561e +0x5ba:  mov    $0xc,%ah
085d5620 +0x5bc:  mov    %ax,-0x70(%ebp)
085d5624 +0x5c0:  fldcw  -0x70(%ebp)
085d5627 +0x5c3:  fistpl -0x74(%ebp)
085d562a +0x5c6:  fldcw  -0x6e(%ebp)
085d562d +0x5c9:  mov    -0x74(%ebp),%eax
085d5630 +0x5cc:  cmp    $0xfffe7960,%eax
085d5635 +0x5d1:  jl     085d566e <+0x60a>
085d5637 +0x5d3:  mov    0x8(%ebp),%eax
085d563a +0x5d6:  mov    0x320(%eax),%ecx
085d5640 +0x5dc:  mov    0xc(%ebp),%edx
085d5643 +0x5df:  mov    0x8(%ebp),%eax
085d5646 +0x5e2:  shl    $0x3,%ecx
085d5649 +0x5e5:  lea    (%ecx,%edx,1),%edx
085d564c +0x5e8:  flds   (%eax,%edx,4)
085d564f +0x5eb:  flds   &data#98348f84(.rodata)
085d5655 +0x5f1:  fmulp  %st,%st(1)
085d5657 +0x5f3:  fldcw  -0x70(%ebp)
085d565a +0x5f6:  fistpl -0x74(%ebp)
085d565d +0x5f9:  fldcw  -0x6e(%ebp)
085d5660 +0x5fc:  mov    -0x74(%ebp),%eax
085d5663 +0x5ff:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
085d5668 +0x604:  jle    085d56fb <+0x697>
085d566e +0x60a:  mov    0x8(%ebp),%eax
085d5671 +0x60d:  mov    0x320(%eax),%ecx
085d5677 +0x613:  mov    0xc(%ebp),%edx
085d567a +0x616:  mov    0x8(%ebp),%eax
085d567d +0x619:  shl    $0x3,%ecx
085d5680 +0x61c:  lea    (%ecx,%edx,1),%edx
085d5683 +0x61f:  flds   (%eax,%edx,4)
085d5686 +0x622:  fstpl  -0x80(%ebp)
085d5689 +0x625:  mov    0x8(%ebp),%eax
085d568c +0x628:  mov    0x320(%eax),%ecx
085d5692 +0x62e:  mov    0xc(%ebp),%edx
085d5695 +0x631:  mov    0x8(%ebp),%eax
085d5698 +0x634:  shl    $0x3,%ecx
085d569b +0x637:  lea    (%ecx,%edx,1),%edx
085d569e +0x63a:  flds   (%eax,%edx,4)
085d56a1 +0x63d:  fldcw  -0x70(%ebp)
085d56a4 +0x640:  fistpl -0x74(%ebp)
085d56a7 +0x643:  fldcw  -0x6e(%ebp)
085d56aa +0x646:  mov    -0x74(%ebp),%ebx
085d56ad +0x649:  movl   $0x5,0xc(%esp)
085d56b5 +0x651:  movl   $0x1dd,0x8(%esp)
085d56bd +0x659:  movl   $&_ZZN12PvpUserTable9GetResultEibiE19__PRETTY_FUNCTION__,0x4(%esp)
085d56c5 +0x661:  lea    -0x1c(%ebp),%eax
085d56c8 +0x664:  mov    %eax,(%esp)
085d56cb +0x667:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d56d0 +0x66c:  fldl   -0x80(%ebp)
085d56d3 +0x66f:  fstpl  0xc(%esp)
085d56d7 +0x673:  mov    %ebx,0x8(%esp)
085d56db +0x677:  movl   $"pvp_exp_error4 %d, %f",0x4(%esp)
085d56e3 +0x67f:  lea    -0x1c(%ebp),%eax
085d56e6 +0x682:  mov    %eax,(%esp)
085d56e9 +0x685:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d56ee +0x68a:  fnstcw -0x6e(%ebp)
085d56f1 +0x68d:  movzwl -0x6e(%ebp),%eax
085d56f5 +0x691:  mov    $0xc,%ah
085d56f7 +0x693:  mov    %ax,-0x70(%ebp)
085d56fb +0x697:  mov    0x8(%ebp),%eax
085d56fe +0x69a:  mov    0x320(%eax),%ecx
085d5704 +0x6a0:  mov    0xc(%ebp),%edx
085d5707 +0x6a3:  mov    0x8(%ebp),%eax
085d570a +0x6a6:  shl    $0x3,%ecx
085d570d +0x6a9:  lea    (%ecx,%edx,1),%edx
085d5710 +0x6ac:  flds   (%eax,%edx,4)
085d5713 +0x6af:  flds   &data#98348f84(.rodata)
085d5719 +0x6b5:  fmulp  %st,%st(1)
085d571b +0x6b7:  fldcw  -0x70(%ebp)
085d571e +0x6ba:  fistpl -0x74(%ebp)
085d5721 +0x6bd:  fldcw  -0x6e(%ebp)
085d5724 +0x6c0:  mov    -0x74(%ebp),%eax
085d5727 +0x6c3:  add    $0xb4,%esp
085d572d +0x6c9:  pop    %ebx
085d572e +0x6ca:  pop    %ebp
085d572f +0x6cb:  ret
```

## 反编译 C

```c
// PvpUserTable::GetResult @ 0x85d5064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpUserTable::GetResult(int, bool, int) */

int __thiscall PvpUserTable::GetResult(PvpUserTable *this,int param_1,bool param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  GameWorld *this_00;
  int iVar4;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  cVar3 = IsValidTeam(this,param_1);
  if (cVar3 != '\x01') {
    return -1;
  }
  if (param_2) {
    if ((param_1 != 2) && (param_1 != 1)) {
      cMyTrace::cMyTrace(local_60,"int PvpUserTable::GetResult(int, bool, int)",0x1a0,5);
      cMyTrace::operator()(local_60,&DAT_08cc0f14,param_1);
      return 0;
    }
    if (param_1 == 1) {
      local_10 = 2;
    }
    else {
      local_10 = 1;
    }
    if (((*(int *)(this + 800) == param_1) && (this[local_10 + 0x344] != (PvpUserTable)0x1)) &&
       (*(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4) != 0.0)) {
      return 0;
    }
  }
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsCharacterPvPExpRevisionChannel(this_00);
  if (cVar3 == '\0') {
    if (((int)ROUND(_DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) <
         -100000) ||
       (100000 < (int)ROUND(_DAT_08cc27d8 *
                            *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)))) {
      fVar1 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      fVar2 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      cMyTrace::cMyTrace(local_20,"int PvpUserTable::GetResult(int, bool, int)",0x1dd,5);
      cMyTrace::operator()(local_20,"pvp_exp_error4 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND(_DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4));
  }
  else if (*(int *)(this + 800) == param_1) {
    if (((int)ROUND((_DAT_08cc27e4 *
                    _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                    _DAT_08cc27e0) < -100000) ||
       (100000 < (int)ROUND((_DAT_08cc27e4 *
                            _DAT_08cc27d8 *
                            *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                            _DAT_08cc27e0))) {
      fVar1 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      fVar2 = (_DAT_08cc27e4 *
              _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
              _DAT_08cc27e0;
      cMyTrace::cMyTrace(local_30,"int PvpUserTable::GetResult(int, bool, int)",0x1d0,5);
      cMyTrace::operator()(local_30,"pvp_exp_error3 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND((_DAT_08cc27e4 *
                       _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4))
                       / _DAT_08cc27e0);
  }
  else if (param_3 < 0xf) {
    if (((int)ROUND((_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) /
                    _DAT_08cc27e0) < -100000) ||
       (100000 < (int)ROUND((_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) /
                            _DAT_08cc27e0))) {
      fVar1 = *(float *)(this + param_1 * 0x24);
      fVar2 = (_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) / _DAT_08cc27e0;
      cMyTrace::cMyTrace(local_50,"int PvpUserTable::GetResult(int, bool, int)",0x1b9,5);
      cMyTrace::operator()(local_50,"pvp_exp_error1 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND((_DAT_08cc27dc * _DAT_08cc27d8 * *(float *)(this + param_1 * 0x24)) /
                       _DAT_08cc27e0);
  }
  else {
    if (((int)ROUND((_DAT_08cc27dc *
                    _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                    _DAT_08cc27e0) < -100000) ||
       (100000 < (int)ROUND((_DAT_08cc27dc *
                            _DAT_08cc27d8 *
                            *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
                            _DAT_08cc27e0))) {
      fVar1 = *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4);
      fVar2 = (_DAT_08cc27dc *
              _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4)) /
              _DAT_08cc27e0;
      cMyTrace::cMyTrace(local_40,"int PvpUserTable::GetResult(int, bool, int)",0x1c4,5);
      cMyTrace::operator()(local_40,"pvp_exp_error2 %d, %f",(int)ROUND(fVar2),(double)fVar1);
    }
    iVar4 = (int)ROUND((_DAT_08cc27dc *
                       _DAT_08cc27d8 * *(float *)(this + (*(int *)(this + 800) * 8 + param_1) * 4))
                       / _DAT_08cc27e0);
  }
  return iVar4;
}
```
