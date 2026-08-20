# Factory

`_ZN17PvP_MissionSystem7FactoryERK13MissionScript`

`PvP_MissionSystem::Factory(MissionScript const&)`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e2132` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e2132  _ZN17PvP_MissionSystem7FactoryERK13MissionScript
#           PvP_MissionSystem::Factory(MissionScript const&)
# range [0x085e2132, 0x085e262d]
085e2132 +0x000:  push   %ebp
085e2133 +0x001:  mov    %esp,%ebp
085e2135 +0x003:  push   %edi
085e2136 +0x004:  push   %esi
085e2137 +0x005:  push   %ebx
085e2138 +0x006:  sub    $0x3c,%esp
085e213b +0x009:  movl   $0x0,-0x1c(%ebp)
085e2142 +0x010:  mov    0xc(%ebp),%eax
085e2145 +0x013:  mov    0x34(%eax),%eax
085e2148 +0x016:  cmp    $0xf,%eax
085e214b +0x019:  ja     085e2623 <+0x4f1>
085e2151 +0x01f:  mov    &data#1b8e226f(.rodata)(,%eax,4),%eax
085e2158 +0x026:  jmp    *%eax
085e215a +0x028:  movl   $0x44,(%esp)
085e2161 +0x02f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e2166 +0x034:  mov    %eax,%ebx
085e2168 +0x036:  mov    0xc(%ebp),%eax
085e216b +0x039:  mov    0x7c(%eax),%edx
085e216e +0x03c:  mov    %ebx,%eax
085e2170 +0x03e:  mov    %edx,0x8(%esp)
085e2174 +0x042:  mov    0xc(%ebp),%edx
085e2177 +0x045:  mov    %edx,0x4(%esp)
085e217b +0x049:  mov    %eax,(%esp)
085e217e +0x04c:  call   085e69a8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x130>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x130
085e2183 +0x051:  jmp    085e219d <+0x6b>
085e2185 +0x053:  mov    %edx,%esi
085e2187 +0x055:  mov    %eax,%edi
085e2189 +0x057:  mov    %ebx,(%esp)
085e218c +0x05a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e2191 +0x05f:  mov    %edi,%eax
085e2193 +0x061:  mov    %esi,%edx
085e2195 +0x063:  mov    %eax,(%esp)
085e2198 +0x066:  call   08ae3750 <_Unwind_Resume>
085e219d +0x06b:  mov    %ebx,%eax
085e219f +0x06d:  mov    %eax,-0x1c(%ebp)
085e21a2 +0x070:  jmp    085e2623 <+0x4f1>
085e21a7 +0x075:  movl   $0x48,(%esp)
085e21ae +0x07c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e21b3 +0x081:  mov    %eax,%ebx
085e21b5 +0x083:  mov    0xc(%ebp),%eax
085e21b8 +0x086:  mov    0x80(%eax),%ecx
085e21be +0x08c:  mov    0xc(%ebp),%eax
085e21c1 +0x08f:  mov    0x7c(%eax),%edx
085e21c4 +0x092:  mov    %ebx,%eax
085e21c6 +0x094:  mov    %ecx,0xc(%esp)
085e21ca +0x098:  mov    %edx,0x8(%esp)
085e21ce +0x09c:  mov    0xc(%ebp),%edx
085e21d1 +0x09f:  mov    %edx,0x4(%esp)
085e21d5 +0x0a3:  mov    %eax,(%esp)
085e21d8 +0x0a6:  call   085e6a38 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1c0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1c0
085e21dd +0x0ab:  jmp    085e21f7 <+0xc5>
085e21df +0x0ad:  mov    %edx,%esi
085e21e1 +0x0af:  mov    %eax,%edi
085e21e3 +0x0b1:  mov    %ebx,(%esp)
085e21e6 +0x0b4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e21eb +0x0b9:  mov    %edi,%eax
085e21ed +0x0bb:  mov    %esi,%edx
085e21ef +0x0bd:  mov    %eax,(%esp)
085e21f2 +0x0c0:  call   08ae3750 <_Unwind_Resume>
085e21f7 +0x0c5:  mov    %ebx,%eax
085e21f9 +0x0c7:  mov    %eax,-0x1c(%ebp)
085e21fc +0x0ca:  jmp    085e2623 <+0x4f1>
085e2201 +0x0cf:  movl   $0x44,(%esp)
085e2208 +0x0d6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e220d +0x0db:  mov    %eax,%ebx
085e220f +0x0dd:  mov    0xc(%ebp),%eax
085e2212 +0x0e0:  mov    0x7c(%eax),%edx
085e2215 +0x0e3:  mov    %ebx,%eax
085e2217 +0x0e5:  mov    %edx,0x8(%esp)
085e221b +0x0e9:  mov    0xc(%ebp),%edx
085e221e +0x0ec:  mov    %edx,0x4(%esp)
085e2222 +0x0f0:  mov    %eax,(%esp)
085e2225 +0x0f3:  call   085e6ae8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x270>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x270
085e222a +0x0f8:  jmp    085e2244 <+0x112>
085e222c +0x0fa:  mov    %edx,%esi
085e222e +0x0fc:  mov    %eax,%edi
085e2230 +0x0fe:  mov    %ebx,(%esp)
085e2233 +0x101:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e2238 +0x106:  mov    %edi,%eax
085e223a +0x108:  mov    %esi,%edx
085e223c +0x10a:  mov    %eax,(%esp)
085e223f +0x10d:  call   08ae3750 <_Unwind_Resume>
085e2244 +0x112:  mov    %ebx,%eax
085e2246 +0x114:  mov    %eax,-0x1c(%ebp)
085e2249 +0x117:  jmp    085e2623 <+0x4f1>
085e224e +0x11c:  movl   $0x44,(%esp)
085e2255 +0x123:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e225a +0x128:  mov    %eax,%ebx
085e225c +0x12a:  mov    0xc(%ebp),%eax
085e225f +0x12d:  mov    0x7c(%eax),%edx
085e2262 +0x130:  mov    %ebx,%eax
085e2264 +0x132:  mov    %edx,0x8(%esp)
085e2268 +0x136:  mov    0xc(%ebp),%edx
085e226b +0x139:  mov    %edx,0x4(%esp)
085e226f +0x13d:  mov    %eax,(%esp)
085e2272 +0x140:  call   085e6b2a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x2b2>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x2b2
085e2277 +0x145:  jmp    085e2291 <+0x15f>
085e2279 +0x147:  mov    %edx,%esi
085e227b +0x149:  mov    %eax,%edi
085e227d +0x14b:  mov    %ebx,(%esp)
085e2280 +0x14e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e2285 +0x153:  mov    %edi,%eax
085e2287 +0x155:  mov    %esi,%edx
085e2289 +0x157:  mov    %eax,(%esp)
085e228c +0x15a:  call   08ae3750 <_Unwind_Resume>
085e2291 +0x15f:  mov    %ebx,%eax
085e2293 +0x161:  mov    %eax,-0x1c(%ebp)
085e2296 +0x164:  jmp    085e2623 <+0x4f1>
085e229b +0x169:  movl   $0x44,(%esp)
085e22a2 +0x170:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e22a7 +0x175:  mov    %eax,%ebx
085e22a9 +0x177:  mov    0xc(%ebp),%eax
085e22ac +0x17a:  mov    0x7c(%eax),%edx
085e22af +0x17d:  mov    %ebx,%eax
085e22b1 +0x17f:  mov    %edx,0x8(%esp)
085e22b5 +0x183:  mov    0xc(%ebp),%edx
085e22b8 +0x186:  mov    %edx,0x4(%esp)
085e22bc +0x18a:  mov    %eax,(%esp)
085e22bf +0x18d:  call   085e6b6c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x2f4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x2f4
085e22c4 +0x192:  jmp    085e22de <+0x1ac>
085e22c6 +0x194:  mov    %edx,%esi
085e22c8 +0x196:  mov    %eax,%edi
085e22ca +0x198:  mov    %ebx,(%esp)
085e22cd +0x19b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e22d2 +0x1a0:  mov    %edi,%eax
085e22d4 +0x1a2:  mov    %esi,%edx
085e22d6 +0x1a4:  mov    %eax,(%esp)
085e22d9 +0x1a7:  call   08ae3750 <_Unwind_Resume>
085e22de +0x1ac:  mov    %ebx,%eax
085e22e0 +0x1ae:  mov    %eax,-0x1c(%ebp)
085e22e3 +0x1b1:  jmp    085e2623 <+0x4f1>
085e22e8 +0x1b6:  movl   $0x44,(%esp)
085e22ef +0x1bd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e22f4 +0x1c2:  mov    %eax,%ebx
085e22f6 +0x1c4:  mov    0xc(%ebp),%eax
085e22f9 +0x1c7:  mov    0x7c(%eax),%edx
085e22fc +0x1ca:  mov    %ebx,%eax
085e22fe +0x1cc:  mov    %edx,0x8(%esp)
085e2302 +0x1d0:  mov    0xc(%ebp),%edx
085e2305 +0x1d3:  mov    %edx,0x4(%esp)
085e2309 +0x1d7:  mov    %eax,(%esp)
085e230c +0x1da:  call   085e6bae <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x336>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x336
085e2311 +0x1df:  jmp    085e232b <+0x1f9>
085e2313 +0x1e1:  mov    %edx,%esi
085e2315 +0x1e3:  mov    %eax,%edi
085e2317 +0x1e5:  mov    %ebx,(%esp)
085e231a +0x1e8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e231f +0x1ed:  mov    %edi,%eax
085e2321 +0x1ef:  mov    %esi,%edx
085e2323 +0x1f1:  mov    %eax,(%esp)
085e2326 +0x1f4:  call   08ae3750 <_Unwind_Resume>
085e232b +0x1f9:  mov    %ebx,%eax
085e232d +0x1fb:  mov    %eax,-0x1c(%ebp)
085e2330 +0x1fe:  jmp    085e2623 <+0x4f1>
085e2335 +0x203:  movl   $0x48,(%esp)
085e233c +0x20a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e2341 +0x20f:  mov    %eax,%ebx
085e2343 +0x211:  mov    0xc(%ebp),%eax
085e2346 +0x214:  mov    0x80(%eax),%ecx
085e234c +0x21a:  mov    0xc(%ebp),%eax
085e234f +0x21d:  mov    0x7c(%eax),%edx
085e2352 +0x220:  mov    %ebx,%eax
085e2354 +0x222:  mov    %ecx,0xc(%esp)
085e2358 +0x226:  mov    %edx,0x8(%esp)
085e235c +0x22a:  mov    0xc(%ebp),%edx
085e235f +0x22d:  mov    %edx,0x4(%esp)
085e2363 +0x231:  mov    %eax,(%esp)
085e2366 +0x234:  call   085e6bf0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x378>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x378
085e236b +0x239:  jmp    085e2385 <+0x253>
085e236d +0x23b:  mov    %edx,%esi
085e236f +0x23d:  mov    %eax,%edi
085e2371 +0x23f:  mov    %ebx,(%esp)
085e2374 +0x242:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e2379 +0x247:  mov    %edi,%eax
085e237b +0x249:  mov    %esi,%edx
085e237d +0x24b:  mov    %eax,(%esp)
085e2380 +0x24e:  call   08ae3750 <_Unwind_Resume>
085e2385 +0x253:  mov    %ebx,%eax
085e2387 +0x255:  mov    %eax,-0x1c(%ebp)
085e238a +0x258:  jmp    085e2623 <+0x4f1>
085e238f +0x25d:  movl   $0x44,(%esp)
085e2396 +0x264:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e239b +0x269:  mov    %eax,%ebx
085e239d +0x26b:  mov    0xc(%ebp),%eax
085e23a0 +0x26e:  mov    0x7c(%eax),%edx
085e23a3 +0x271:  mov    %ebx,%eax
085e23a5 +0x273:  mov    %edx,0x8(%esp)
085e23a9 +0x277:  mov    0xc(%ebp),%edx
085e23ac +0x27a:  mov    %edx,0x4(%esp)
085e23b0 +0x27e:  mov    %eax,(%esp)
085e23b3 +0x281:  call   085e6c3c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x3c4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x3c4
085e23b8 +0x286:  jmp    085e23d2 <+0x2a0>
085e23ba +0x288:  mov    %edx,%esi
085e23bc +0x28a:  mov    %eax,%edi
085e23be +0x28c:  mov    %ebx,(%esp)
085e23c1 +0x28f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e23c6 +0x294:  mov    %edi,%eax
085e23c8 +0x296:  mov    %esi,%edx
085e23ca +0x298:  mov    %eax,(%esp)
085e23cd +0x29b:  call   08ae3750 <_Unwind_Resume>
085e23d2 +0x2a0:  mov    %ebx,%eax
085e23d4 +0x2a2:  mov    %eax,-0x1c(%ebp)
085e23d7 +0x2a5:  jmp    085e2623 <+0x4f1>
085e23dc +0x2aa:  movl   $0x44,(%esp)
085e23e3 +0x2b1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e23e8 +0x2b6:  mov    %eax,%ebx
085e23ea +0x2b8:  mov    0xc(%ebp),%eax
085e23ed +0x2bb:  mov    0x7c(%eax),%edx
085e23f0 +0x2be:  mov    %ebx,%eax
085e23f2 +0x2c0:  mov    %edx,0x8(%esp)
085e23f6 +0x2c4:  mov    0xc(%ebp),%edx
085e23f9 +0x2c7:  mov    %edx,0x4(%esp)
085e23fd +0x2cb:  mov    %eax,(%esp)
085e2400 +0x2ce:  call   085e6c7e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x406>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x406
085e2405 +0x2d3:  jmp    085e241f <+0x2ed>
085e2407 +0x2d5:  mov    %edx,%esi
085e2409 +0x2d7:  mov    %eax,%edi
085e240b +0x2d9:  mov    %ebx,(%esp)
085e240e +0x2dc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e2413 +0x2e1:  mov    %edi,%eax
085e2415 +0x2e3:  mov    %esi,%edx
085e2417 +0x2e5:  mov    %eax,(%esp)
085e241a +0x2e8:  call   08ae3750 <_Unwind_Resume>
085e241f +0x2ed:  mov    %ebx,%eax
085e2421 +0x2ef:  mov    %eax,-0x1c(%ebp)
085e2424 +0x2f2:  jmp    085e2623 <+0x4f1>
085e2429 +0x2f7:  movl   $0x48,(%esp)
085e2430 +0x2fe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e2435 +0x303:  mov    %eax,%ebx
085e2437 +0x305:  mov    0xc(%ebp),%eax
085e243a +0x308:  mov    0x80(%eax),%ecx
085e2440 +0x30e:  mov    0xc(%ebp),%eax
085e2443 +0x311:  mov    0x7c(%eax),%edx
085e2446 +0x314:  mov    %ebx,%eax
085e2448 +0x316:  mov    %ecx,0xc(%esp)
085e244c +0x31a:  mov    %edx,0x8(%esp)
085e2450 +0x31e:  mov    0xc(%ebp),%edx
085e2453 +0x321:  mov    %edx,0x4(%esp)
085e2457 +0x325:  mov    %eax,(%esp)
085e245a +0x328:  call   085e6cc0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x448>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x448
085e245f +0x32d:  jmp    085e2479 <+0x347>
085e2461 +0x32f:  mov    %edx,%esi
085e2463 +0x331:  mov    %eax,%edi
085e2465 +0x333:  mov    %ebx,(%esp)
085e2468 +0x336:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e246d +0x33b:  mov    %edi,%eax
085e246f +0x33d:  mov    %esi,%edx
085e2471 +0x33f:  mov    %eax,(%esp)
085e2474 +0x342:  call   08ae3750 <_Unwind_Resume>
085e2479 +0x347:  mov    %ebx,%eax
085e247b +0x349:  mov    %eax,-0x1c(%ebp)
085e247e +0x34c:  jmp    085e2623 <+0x4f1>
085e2483 +0x351:  movl   $0x4c,(%esp)
085e248a +0x358:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e248f +0x35d:  mov    %eax,%ebx
085e2491 +0x35f:  mov    0xc(%ebp),%eax
085e2494 +0x362:  mov    0x84(%eax),%esi
085e249a +0x368:  mov    0xc(%ebp),%eax
085e249d +0x36b:  mov    0x80(%eax),%ecx
085e24a3 +0x371:  mov    0xc(%ebp),%eax
085e24a6 +0x374:  mov    0x7c(%eax),%edx
085e24a9 +0x377:  mov    %ebx,%eax
085e24ab +0x379:  mov    %esi,0x10(%esp)
085e24af +0x37d:  mov    %ecx,0xc(%esp)
085e24b3 +0x381:  mov    %edx,0x8(%esp)
085e24b7 +0x385:  mov    0xc(%ebp),%edx
085e24ba +0x388:  mov    %edx,0x4(%esp)
085e24be +0x38c:  mov    %eax,(%esp)
085e24c1 +0x38f:  call   085e6d0c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x494>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x494
085e24c6 +0x394:  jmp    085e24e0 <+0x3ae>
085e24c8 +0x396:  mov    %edx,%esi
085e24ca +0x398:  mov    %eax,%edi
085e24cc +0x39a:  mov    %ebx,(%esp)
085e24cf +0x39d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e24d4 +0x3a2:  mov    %edi,%eax
085e24d6 +0x3a4:  mov    %esi,%edx
085e24d8 +0x3a6:  mov    %eax,(%esp)
085e24db +0x3a9:  call   08ae3750 <_Unwind_Resume>
085e24e0 +0x3ae:  mov    %ebx,%eax
085e24e2 +0x3b0:  mov    %eax,-0x1c(%ebp)
085e24e5 +0x3b3:  jmp    085e2623 <+0x4f1>
085e24ea +0x3b8:  movl   $0x48,(%esp)
085e24f1 +0x3bf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e24f6 +0x3c4:  mov    %eax,%ebx
085e24f8 +0x3c6:  mov    0xc(%ebp),%eax
085e24fb +0x3c9:  mov    0x80(%eax),%ecx
085e2501 +0x3cf:  mov    0xc(%ebp),%eax
085e2504 +0x3d2:  mov    0x7c(%eax),%edx
085e2507 +0x3d5:  mov    %ebx,%eax
085e2509 +0x3d7:  mov    %ecx,0xc(%esp)
085e250d +0x3db:  mov    %edx,0x8(%esp)
085e2511 +0x3df:  mov    0xc(%ebp),%edx
085e2514 +0x3e2:  mov    %edx,0x4(%esp)
085e2518 +0x3e6:  mov    %eax,(%esp)
085e251b +0x3e9:  call   085e6d60 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x4e8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x4e8
085e2520 +0x3ee:  jmp    085e253a <+0x408>
085e2522 +0x3f0:  mov    %edx,%esi
085e2524 +0x3f2:  mov    %eax,%edi
085e2526 +0x3f4:  mov    %ebx,(%esp)
085e2529 +0x3f7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e252e +0x3fc:  mov    %edi,%eax
085e2530 +0x3fe:  mov    %esi,%edx
085e2532 +0x400:  mov    %eax,(%esp)
085e2535 +0x403:  call   08ae3750 <_Unwind_Resume>
085e253a +0x408:  mov    %ebx,%eax
085e253c +0x40a:  mov    %eax,-0x1c(%ebp)
085e253f +0x40d:  jmp    085e2623 <+0x4f1>
085e2544 +0x412:  movl   $0x44,(%esp)
085e254b +0x419:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e2550 +0x41e:  mov    %eax,%ebx
085e2552 +0x420:  mov    0xc(%ebp),%eax
085e2555 +0x423:  mov    0x7c(%eax),%edx
085e2558 +0x426:  mov    %ebx,%eax
085e255a +0x428:  mov    %edx,0x8(%esp)
085e255e +0x42c:  mov    0xc(%ebp),%edx
085e2561 +0x42f:  mov    %edx,0x4(%esp)
085e2565 +0x433:  mov    %eax,(%esp)
085e2568 +0x436:  call   085e6dac <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x534>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x534
085e256d +0x43b:  jmp    085e2587 <+0x455>
085e256f +0x43d:  mov    %edx,%esi
085e2571 +0x43f:  mov    %eax,%edi
085e2573 +0x441:  mov    %ebx,(%esp)
085e2576 +0x444:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e257b +0x449:  mov    %edi,%eax
085e257d +0x44b:  mov    %esi,%edx
085e257f +0x44d:  mov    %eax,(%esp)
085e2582 +0x450:  call   08ae3750 <_Unwind_Resume>
085e2587 +0x455:  mov    %ebx,%eax
085e2589 +0x457:  mov    %eax,-0x1c(%ebp)
085e258c +0x45a:  jmp    085e2623 <+0x4f1>
085e2591 +0x45f:  movl   $0x44,(%esp)
085e2598 +0x466:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e259d +0x46b:  mov    %eax,%ebx
085e259f +0x46d:  mov    0xc(%ebp),%eax
085e25a2 +0x470:  mov    0x7c(%eax),%edx
085e25a5 +0x473:  mov    %ebx,%eax
085e25a7 +0x475:  mov    %edx,0x8(%esp)
085e25ab +0x479:  mov    0xc(%ebp),%edx
085e25ae +0x47c:  mov    %edx,0x4(%esp)
085e25b2 +0x480:  mov    %eax,(%esp)
085e25b5 +0x483:  call   085e6dec <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x574>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x574
085e25ba +0x488:  jmp    085e25d4 <+0x4a2>
085e25bc +0x48a:  mov    %edx,%esi
085e25be +0x48c:  mov    %eax,%edi
085e25c0 +0x48e:  mov    %ebx,(%esp)
085e25c3 +0x491:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e25c8 +0x496:  mov    %edi,%eax
085e25ca +0x498:  mov    %esi,%edx
085e25cc +0x49a:  mov    %eax,(%esp)
085e25cf +0x49d:  call   08ae3750 <_Unwind_Resume>
085e25d4 +0x4a2:  mov    %ebx,%eax
085e25d6 +0x4a4:  mov    %eax,-0x1c(%ebp)
085e25d9 +0x4a7:  jmp    085e2623 <+0x4f1>
085e25db +0x4a9:  movl   $0x58,(%esp)
085e25e2 +0x4b0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085e25e7 +0x4b5:  mov    %eax,%ebx
085e25e9 +0x4b7:  mov    0xc(%ebp),%eax
085e25ec +0x4ba:  lea    0x60(%eax),%edx
085e25ef +0x4bd:  mov    %ebx,%eax
085e25f1 +0x4bf:  mov    %edx,0x8(%esp)
085e25f5 +0x4c3:  mov    0xc(%ebp),%edx
085e25f8 +0x4c6:  mov    %edx,0x4(%esp)
085e25fc +0x4ca:  mov    %eax,(%esp)
085e25ff +0x4cd:  call   085e6e40 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x5c8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x5c8
085e2604 +0x4d2:  jmp    085e261e <+0x4ec>
085e2606 +0x4d4:  mov    %edx,%esi
085e2608 +0x4d6:  mov    %eax,%edi
085e260a +0x4d8:  mov    %ebx,(%esp)
085e260d +0x4db:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e2612 +0x4e0:  mov    %edi,%eax
085e2614 +0x4e2:  mov    %esi,%edx
085e2616 +0x4e4:  mov    %eax,(%esp)
085e2619 +0x4e7:  call   08ae3750 <_Unwind_Resume>
085e261e +0x4ec:  mov    %ebx,%eax
085e2620 +0x4ee:  mov    %eax,-0x1c(%ebp)
085e2623 +0x4f1:  mov    -0x1c(%ebp),%eax
085e2626 +0x4f4:  add    $0x3c,%esp
085e2629 +0x4f7:  pop    %ebx
085e262a +0x4f8:  pop    %esi
085e262b +0x4f9:  pop    %edi
085e262c +0x4fa:  pop    %ebp
085e262d +0x4fb:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::Factory @ 0x85e2132

/* PvP_MissionSystem::Factory(MissionScript const&) */

CMission_winning_count * __thiscall
PvP_MissionSystem::Factory(PvP_MissionSystem *this,MissionScript *param_1)

{
  CMission_winning_count *local_20;
  
  local_20 = (CMission_winning_count *)0x0;
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 0:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e217e to 085e2182 has its CatchHandler @ 085e2185 */
    CMission_winning_count::CMission_winning_count(local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 1:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e21d8 to 085e21dc has its CatchHandler @ 085e21df */
    CMission_winning_streak::CMission_winning_streak
              ((CMission_winning_streak *)local_20,param_1,*(int *)(param_1 + 0x7c),
               *(int *)(param_1 + 0x80));
    break;
  case 2:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2225 to 085e2229 has its CatchHandler @ 085e222c */
    CMission_join::CMission_join((CMission_join *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 3:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2272 to 085e2276 has its CatchHandler @ 085e2279 */
    CMission_kill_count::CMission_kill_count
              ((CMission_kill_count *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 4:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e22bf to 085e22c3 has its CatchHandler @ 085e22c6 */
    CMission_hereafter_join::CMission_hereafter_join
              ((CMission_hereafter_join *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 5:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e230c to 085e2310 has its CatchHandler @ 085e2313 */
    CMission_hereafter_winning_count::CMission_hereafter_winning_count
              ((CMission_hereafter_winning_count *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 6:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e2366 to 085e236a has its CatchHandler @ 085e236d */
    CMission_remain_hp::CMission_remain_hp
              ((CMission_remain_hp *)local_20,param_1,*(int *)(param_1 + 0x7c),
               *(int *)(param_1 + 0x80));
    break;
  case 7:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e23b3 to 085e23b7 has its CatchHandler @ 085e23ba */
    CMission_revenge::CMission_revenge
              ((CMission_revenge *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 8:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2400 to 085e2404 has its CatchHandler @ 085e2407 */
    CMission_hereafter_kill_count::CMission_hereafter_kill_count
              ((CMission_hereafter_kill_count *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 9:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e245a to 085e245e has its CatchHandler @ 085e2461 */
    CMission_kill::CMission_kill
              ((CMission_kill *)local_20,param_1,*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80));
    break;
  case 0xb:
    local_20 = operator_new(0x4c);
                    /* try { // try from 085e24c1 to 085e24c5 has its CatchHandler @ 085e24c8 */
    CMission_within::CMission_within
              ((CMission_within *)local_20,param_1,*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80)
               ,*(int *)(param_1 + 0x84));
    break;
  case 0xc:
    local_20 = operator_new(0x48);
                    /* try { // try from 085e251b to 085e251f has its CatchHandler @ 085e2522 */
    CMission_remains_hp::CMission_remains_hp
              ((CMission_remains_hp *)local_20,param_1,*(int *)(param_1 + 0x7c),
               *(int *)(param_1 + 0x80));
    break;
  case 0xd:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e2568 to 085e256c has its CatchHandler @ 085e256f */
    CMission_move_channel::CMission_move_channel
              ((CMission_move_channel *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 0xe:
    local_20 = operator_new(0x44);
                    /* try { // try from 085e25b5 to 085e25b9 has its CatchHandler @ 085e25bc */
    CMission_move_channel_total::CMission_move_channel_total
              ((CMission_move_channel_total *)local_20,param_1,*(int *)(param_1 + 0x7c));
    break;
  case 0xf:
    local_20 = operator_new(0x58);
                    /* try { // try from 085e25ff to 085e2603 has its CatchHandler @ 085e2606 */
    CMission_combo_clear::CMission_combo_clear
              ((CMission_combo_clear *)local_20,param_1,(map *)(param_1 + 0x60));
  }
  return local_20;
}
```
