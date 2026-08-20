# setupEventProcessors

`_GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv`

`global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to StackablePackage::EventProcessManager` | `0x08281bde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08281bde  _GLOBAL__I__ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv
#           global constructors keyed to StackablePackage::EventProcessManager::setupEventProcessors()
# range [0x08281bde, 0x08283c1b]
08281bde +0x0000:  push   %ebp
08281bdf +0x0001:  mov    %esp,%ebp
08281be1 +0x0003:  sub    $0x18,%esp
08281be4 +0x0006:  movl   $0xffff,0x4(%esp)
08281bec +0x000e:  movl   $0x1,(%esp)
08281bf3 +0x0015:  call   08281b9e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08281bf8 +0x001a:  leave
08281bf9 +0x001b:  ret
08281bfa +0x001c:  push   %ebp
08281bfb +0x001d:  mov    %esp,%ebp
08281bfd +0x001f:  mov    0x8(%ebp),%eax
08281c00 +0x0022:  mov    0x4(%eax),%eax
08281c03 +0x0025:  pop    %ebp
08281c04 +0x0026:  ret
08281c05 +0x0027:  nop
08281c06 +0x0028:  push   %ebp
08281c07 +0x0029:  mov    %esp,%ebp
08281c09 +0x002b:  mov    0x8(%ebp),%eax
08281c0c +0x002e:  mov    0x8(%eax),%eax
08281c0f +0x0031:  pop    %ebp
08281c10 +0x0032:  ret
08281c11 +0x0033:  nop
08281c12 +0x0034:  push   %ebp
08281c13 +0x0035:  mov    %esp,%ebp
08281c15 +0x0037:  sub    $0x18,%esp
08281c18 +0x003a:  mov    0x8(%ebp),%eax
08281c1b +0x003d:  mov    %eax,(%esp)
08281c1e +0x0040:  call   08281caa <+0xcc>
08281c23 +0x0045:  leave
08281c24 +0x0046:  ret
08281c25 +0x0047:  nop
08281c26 +0x0048:  push   %ebp
08281c27 +0x0049:  mov    %esp,%ebp
08281c29 +0x004b:  sub    $0x18,%esp
08281c2c +0x004e:  mov    0x8(%ebp),%eax
08281c2f +0x0051:  mov    %eax,(%esp)
08281c32 +0x0054:  call   08281c82 <+0xa4>
08281c37 +0x0059:  leave
08281c38 +0x005a:  ret
08281c39 +0x005b:  nop
08281c3a +0x005c:  push   %ebp
08281c3b +0x005d:  mov    %esp,%ebp
08281c3d +0x005f:  mov    0x8(%ebp),%eax
08281c40 +0x0062:  mov    0xc(%ebp),%edx
08281c43 +0x0065:  mov    %edx,(%eax)
08281c45 +0x0067:  pop    %ebp
08281c46 +0x0068:  ret
08281c47 +0x0069:  nop
08281c48 +0x006a:  push   %ebp
08281c49 +0x006b:  mov    %esp,%ebp
08281c4b +0x006d:  sub    $0x18,%esp
08281c4e +0x0070:  mov    0xc(%ebp),%eax
08281c51 +0x0073:  mov    0x4(%eax),%eax
08281c54 +0x0076:  test   %eax,%eax
08281c56 +0x0078:  jne    08281c5f <+0x81>
08281c58 +0x007a:  mov    $0x0,%eax
08281c5d +0x007f:  jmp    08281c80 <+0xa2>
08281c5f +0x0081:  mov    0xc(%ebp),%eax
08281c62 +0x0084:  mov    0x4(%eax),%eax
08281c65 +0x0087:  mov    (%eax),%eax
08281c67 +0x0089:  add    $0x8,%eax
08281c6a +0x008c:  mov    (%eax),%ecx
08281c6c +0x008e:  mov    0x8(%ebp),%eax
08281c6f +0x0091:  mov    (%eax),%edx
08281c71 +0x0093:  mov    0xc(%ebp),%eax
08281c74 +0x0096:  mov    0x4(%eax),%eax
08281c77 +0x0099:  mov    %edx,0x4(%esp)
08281c7b +0x009d:  mov    %eax,(%esp)
08281c7e +0x00a0:  call   *%ecx
08281c80 +0x00a2:  leave
08281c81 +0x00a3:  ret
08281c82 +0x00a4:  push   %ebp
08281c83 +0x00a5:  mov    %esp,%ebp
08281c85 +0x00a7:  sub    $0x18,%esp
08281c88 +0x00aa:  mov    0x8(%ebp),%eax
08281c8b +0x00ad:  mov    %eax,(%esp)
08281c8e +0x00b0:  call   082820de <+0x500>
08281c93 +0x00b5:  leave
08281c94 +0x00b6:  ret
08281c95 +0x00b7:  nop
08281c96 +0x00b8:  push   %ebp
08281c97 +0x00b9:  mov    %esp,%ebp
08281c99 +0x00bb:  sub    $0x18,%esp
08281c9c +0x00be:  mov    0x8(%ebp),%eax
08281c9f +0x00c1:  mov    %eax,(%esp)
08281ca2 +0x00c4:  call   082820f2 <+0x514>
08281ca7 +0x00c9:  leave
08281ca8 +0x00ca:  ret
08281ca9 +0x00cb:  nop
08281caa +0x00cc:  push   %ebp
08281cab +0x00cd:  mov    %esp,%ebp
08281cad +0x00cf:  push   %esi
08281cae +0x00d0:  push   %ebx
08281caf +0x00d1:  sub    $0x10,%esp
08281cb2 +0x00d4:  mov    0x8(%ebp),%eax
08281cb5 +0x00d7:  mov    %eax,(%esp)
08281cb8 +0x00da:  call   0828215c <+0x57e>
08281cbd +0x00df:  mov    %eax,0x4(%esp)
08281cc1 +0x00e3:  mov    0x8(%ebp),%eax
08281cc4 +0x00e6:  mov    %eax,(%esp)
08281cc7 +0x00e9:  call   08282106 <+0x528>
08281ccc +0x00ee:  jmp    08281ce9 <+0x10b>
08281cce +0x00f0:  mov    %edx,%ebx
08281cd0 +0x00f2:  mov    %eax,%esi
08281cd2 +0x00f4:  mov    0x8(%ebp),%eax
08281cd5 +0x00f7:  mov    %eax,(%esp)
08281cd8 +0x00fa:  call   08281c96 <+0xb8>
08281cdd +0x00ff:  mov    %esi,%eax
08281cdf +0x0101:  mov    %ebx,%edx
08281ce1 +0x0103:  mov    %eax,(%esp)
08281ce4 +0x0106:  call   08ae3750 <_Unwind_Resume>
08281ce9 +0x010b:  mov    0x8(%ebp),%eax
08281cec +0x010e:  mov    %eax,(%esp)
08281cef +0x0111:  call   08281c96 <+0xb8>
08281cf4 +0x0116:  add    $0x10,%esp
08281cf7 +0x0119:  pop    %ebx
08281cf8 +0x011a:  pop    %esi
08281cf9 +0x011b:  pop    %ebp
08281cfa +0x011c:  ret
08281cfb +0x011d:  nop
08281cfc +0x011e:  push   %ebp
08281cfd +0x011f:  mov    %esp,%ebp
08281cff +0x0121:  mov    0x8(%ebp),%eax
08281d02 +0x0124:  mov    0xc(%ebp),%edx
08281d05 +0x0127:  mov    %edx,(%eax)
08281d07 +0x0129:  pop    %ebp
08281d08 +0x012a:  ret
08281d09 +0x012b:  nop
08281d0a +0x012c:  push   %ebp
08281d0b +0x012d:  mov    %esp,%ebp
08281d0d +0x012f:  sub    $0x18,%esp
08281d10 +0x0132:  mov    0x8(%ebp),%eax
08281d13 +0x0135:  mov    %eax,(%esp)
08281d16 +0x0138:  call   08281c12 <+0x34>
08281d1b +0x013d:  leave
08281d1c +0x013e:  ret
08281d1d +0x013f:  nop
08281d1e +0x0140:  push   %ebp
08281d1f +0x0141:  mov    %esp,%ebp
08281d21 +0x0143:  push   %ebx
08281d22 +0x0144:  sub    $0x14,%esp
08281d25 +0x0147:  mov    0x8(%ebp),%eax
08281d28 +0x014a:  mov    (%eax),%ebx
08281d2a +0x014c:  test   %ebx,%ebx
08281d2c +0x014e:  je     08281d3e <+0x160>
08281d2e +0x0150:  mov    %ebx,(%esp)
08281d31 +0x0153:  call   08281d0a <+0x12c>
08281d36 +0x0158:  mov    %ebx,(%esp)
08281d39 +0x015b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08281d3e +0x0160:  add    $0x14,%esp
08281d41 +0x0163:  pop    %ebx
08281d42 +0x0164:  pop    %ebp
08281d43 +0x0165:  ret
08281d44 +0x0166:  push   %ebp
08281d45 +0x0167:  mov    %esp,%ebp
08281d47 +0x0169:  mov    0x8(%ebp),%eax
08281d4a +0x016c:  mov    (%eax),%eax
08281d4c +0x016e:  pop    %ebp
08281d4d +0x016f:  ret
08281d4e +0x0170:  push   %ebp
08281d4f +0x0171:  mov    %esp,%ebp
08281d51 +0x0173:  push   %ebx
08281d52 +0x0174:  sub    $0x14,%esp
08281d55 +0x0177:  mov    0x8(%ebp),%ebx
08281d58 +0x017a:  mov    0xc(%ebp),%eax
08281d5b +0x017d:  mov    0x10(%ebp),%edx
08281d5e +0x0180:  mov    %edx,0x8(%esp)
08281d62 +0x0184:  mov    %eax,0x4(%esp)
08281d66 +0x0188:  mov    %ebx,(%esp)
08281d69 +0x018b:  call   08282168 <+0x58a>
08281d6e +0x0190:  sub    $0x4,%esp
08281d71 +0x0193:  mov    %ebx,%eax
08281d73 +0x0195:  mov    -0x4(%ebp),%ebx
08281d76 +0x0198:  leave
08281d77 +0x0199:  ret    $0x4
08281d7a +0x019c:  push   %ebp
08281d7b +0x019d:  mov    %esp,%ebp
08281d7d +0x019f:  push   %ebx
08281d7e +0x01a0:  sub    $0x14,%esp
08281d81 +0x01a3:  mov    0x8(%ebp),%ebx
08281d84 +0x01a6:  mov    0xc(%ebp),%eax
08281d87 +0x01a9:  mov    %eax,0x4(%esp)
08281d8b +0x01ad:  mov    %ebx,(%esp)
08281d8e +0x01b0:  call   08282226 <+0x648>
08281d93 +0x01b5:  sub    $0x4,%esp
08281d96 +0x01b8:  mov    %ebx,%eax
08281d98 +0x01ba:  mov    -0x4(%ebp),%ebx
08281d9b +0x01bd:  leave
08281d9c +0x01be:  ret    $0x4
08281d9f +0x01c1:  nop
08281da0 +0x01c2:  push   %ebp
08281da1 +0x01c3:  mov    %esp,%ebp
08281da3 +0x01c5:  mov    0x8(%ebp),%eax
08281da6 +0x01c8:  mov    (%eax),%edx
08281da8 +0x01ca:  mov    0xc(%ebp),%eax
08281dab +0x01cd:  mov    (%eax),%eax
08281dad +0x01cf:  cmp    %eax,%edx
08281daf +0x01d1:  sete   %al
08281db2 +0x01d4:  pop    %ebp
08281db3 +0x01d5:  ret
08281db4 +0x01d6:  push   %ebp
08281db5 +0x01d7:  mov    %esp,%ebp
08281db7 +0x01d9:  mov    0x8(%ebp),%eax
08281dba +0x01dc:  mov    (%eax),%eax
08281dbc +0x01de:  add    $0x10,%eax
08281dbf +0x01e1:  pop    %ebp
08281dc0 +0x01e2:  ret
08281dc1 +0x01e3:  nop
08281dc2 +0x01e4:  push   %ebp
08281dc3 +0x01e5:  mov    %esp,%ebp
08281dc5 +0x01e7:  push   %ebx
08281dc6 +0x01e8:  sub    $0x14,%esp
08281dc9 +0x01eb:  mov    0x8(%ebp),%ebx
08281dcc +0x01ee:  mov    0xc(%ebp),%eax
08281dcf +0x01f1:  mov    %eax,0x4(%esp)
08281dd3 +0x01f5:  mov    %ebx,(%esp)
08281dd6 +0x01f8:  call   0828224c <+0x66e>
08281ddb +0x01fd:  sub    $0x4,%esp
08281dde +0x0200:  mov    %ebx,%eax
08281de0 +0x0202:  mov    -0x4(%ebp),%ebx
08281de3 +0x0205:  leave
08281de4 +0x0206:  ret    $0x4
08281de7 +0x0209:  nop
08281de8 +0x020a:  push   %ebp
08281de9 +0x020b:  mov    %esp,%ebp
08281deb +0x020d:  push   %ebx
08281dec +0x020e:  sub    $0x14,%esp
08281def +0x0211:  mov    0x8(%ebp),%ebx
08281df2 +0x0214:  mov    0xc(%ebp),%eax
08281df5 +0x0217:  mov    %eax,0x4(%esp)
08281df9 +0x021b:  mov    %ebx,(%esp)
08281dfc +0x021e:  call   08282272 <+0x694>
08281e01 +0x0223:  sub    $0x4,%esp
08281e04 +0x0226:  mov    %ebx,%eax
08281e06 +0x0228:  mov    -0x4(%ebp),%ebx
08281e09 +0x022b:  leave
08281e0a +0x022c:  ret    $0x4
08281e0d +0x022f:  push   %ebp
08281e0e +0x0230:  mov    %esp,%ebp
08281e10 +0x0232:  push   %esi
08281e11 +0x0233:  push   %ebx
08281e12 +0x0234:  sub    $0x30,%esp
08281e15 +0x0237:  mov    0x8(%ebp),%ebx
08281e18 +0x023a:  lea    -0x9(%ebp),%eax
08281e1b +0x023d:  lea    0xc(%ebp),%edx
08281e1e +0x0240:  mov    %edx,0x4(%esp)
08281e22 +0x0244:  mov    %eax,(%esp)
08281e25 +0x0247:  call   08282298 <+0x6ba>
08281e2a +0x024c:  sub    $0x4,%esp
08281e2d +0x024f:  mov    %esi,%eax
08281e2f +0x0251:  mov    %al,0x10(%esp)
08281e33 +0x0255:  mov    0x14(%ebp),%eax
08281e36 +0x0258:  mov    %eax,0xc(%esp)
08281e3a +0x025c:  mov    0x10(%ebp),%eax
08281e3d +0x025f:  mov    %eax,0x8(%esp)
08281e41 +0x0263:  mov    0xc(%ebp),%eax
08281e44 +0x0266:  mov    %eax,0x4(%esp)
08281e48 +0x026a:  mov    %ebx,(%esp)
08281e4b +0x026d:  call   082822a2 <+0x6c4>
08281e50 +0x0272:  sub    $0x4,%esp
08281e53 +0x0275:  mov    %ebx,%eax
08281e55 +0x0277:  lea    -0x8(%ebp),%esp
08281e58 +0x027a:  add    $0x0,%esp
08281e5b +0x027d:  pop    %ebx
08281e5c +0x027e:  pop    %esi
08281e5d +0x027f:  pop    %ebp
08281e5e +0x0280:  ret    $0x4
08281e61 +0x0283:  nop
08281e62 +0x0284:  push   %ebp
08281e63 +0x0285:  mov    %esp,%ebp
08281e65 +0x0287:  mov    0x8(%ebp),%eax
08281e68 +0x028a:  mov    (%eax),%edx
08281e6a +0x028c:  mov    0xc(%ebp),%eax
08281e6d +0x028f:  mov    (%eax),%eax
08281e6f +0x0291:  cmp    %eax,%edx
08281e71 +0x0293:  sete   %al
08281e74 +0x0296:  pop    %ebp
08281e75 +0x0297:  ret
08281e76 +0x0298:  push   %ebp
08281e77 +0x0299:  mov    %esp,%ebp
08281e79 +0x029b:  mov    0x8(%ebp),%eax
08281e7c +0x029e:  mov    (%eax),%eax
08281e7e +0x02a0:  add    $0x10,%eax
08281e81 +0x02a3:  pop    %ebp
08281e82 +0x02a4:  ret
08281e83 +0x02a5:  nop
08281e84 +0x02a6:  push   %ebp
08281e85 +0x02a7:  mov    %esp,%ebp
08281e87 +0x02a9:  sub    $0x18,%esp
08281e8a +0x02ac:  mov    0x8(%ebp),%eax
08281e8d +0x02af:  mov    %eax,(%esp)
08281e90 +0x02b2:  call   082823a0 <+0x7c2>
08281e95 +0x02b7:  leave
08281e96 +0x02b8:  ret
08281e97 +0x02b9:  nop
08281e98 +0x02ba:  push   %ebp
08281e99 +0x02bb:  mov    %esp,%ebp
08281e9b +0x02bd:  sub    $0x18,%esp
08281e9e +0x02c0:  mov    0x8(%ebp),%eax
08281ea1 +0x02c3:  add    $0x4,%eax
08281ea4 +0x02c6:  mov    %eax,(%esp)
08281ea7 +0x02c9:  call   08281e84 <+0x2a6>
08281eac +0x02ce:  leave
08281ead +0x02cf:  ret
08281eae +0x02d0:  push   %ebp
08281eaf +0x02d1:  mov    %esp,%ebp
08281eb1 +0x02d3:  push   %esi
08281eb2 +0x02d4:  push   %ebx
08281eb3 +0x02d5:  sub    $0x60,%esp
08281eb6 +0x02d8:  lea    -0x48(%ebp),%eax
08281eb9 +0x02db:  mov    0xc(%ebp),%edx
08281ebc +0x02de:  mov    %edx,0x8(%esp)
08281ec0 +0x02e2:  mov    0x8(%ebp),%edx
08281ec3 +0x02e5:  mov    %edx,0x4(%esp)
08281ec7 +0x02e9:  mov    %eax,(%esp)
08281eca +0x02ec:  call   08282310 <+0x732>
08281ecf +0x02f1:  sub    $0x4,%esp
08281ed2 +0x02f4:  lea    -0x44(%ebp),%eax
08281ed5 +0x02f7:  mov    0x8(%ebp),%edx
08281ed8 +0x02fa:  mov    %edx,0x4(%esp)
08281edc +0x02fe:  mov    %eax,(%esp)
08281edf +0x0301:  call   08281d7a <+0x19c>
08281ee4 +0x0306:  sub    $0x4,%esp
08281ee7 +0x0309:  lea    -0x44(%ebp),%eax
08281eea +0x030c:  mov    %eax,0x4(%esp)
08281eee +0x0310:  lea    -0x48(%ebp),%eax
08281ef1 +0x0313:  mov    %eax,(%esp)
08281ef4 +0x0316:  call   08281da0 <+0x1c2>
08281ef9 +0x031b:  test   %al,%al
08281efb +0x031d:  jne    08281f39 <+0x35b>
08281efd +0x031f:  lea    -0x48(%ebp),%eax
08281f00 +0x0322:  mov    %eax,(%esp)
08281f03 +0x0325:  call   08281db4 <+0x1d6>
08281f08 +0x032a:  mov    %eax,%ebx
08281f0a +0x032c:  lea    -0x3d(%ebp),%eax
08281f0d +0x032f:  mov    0x8(%ebp),%edx
08281f10 +0x0332:  mov    %edx,0x4(%esp)
08281f14 +0x0336:  mov    %eax,(%esp)
08281f17 +0x0339:  call   0828233c <+0x75e>
08281f1c +0x033e:  sub    $0x4,%esp
08281f1f +0x0341:  mov    %ebx,0x8(%esp)
08281f23 +0x0345:  mov    0xc(%ebp),%eax
08281f26 +0x0348:  mov    %eax,0x4(%esp)
08281f2a +0x034c:  lea    -0x3d(%ebp),%eax
08281f2d +0x034f:  mov    %eax,(%esp)
08281f30 +0x0352:  call   08282362 <+0x784>
08281f35 +0x0357:  test   %al,%al
08281f37 +0x0359:  je     08281f40 <+0x362>
08281f39 +0x035b:  mov    $0x1,%eax
08281f3e +0x0360:  jmp    08281f45 <+0x367>
08281f40 +0x0362:  mov    $0x0,%eax
08281f45 +0x0367:  test   %al,%al
08281f47 +0x0369:  je     08281fe2 <+0x404>
08281f4d +0x036f:  lea    -0x20(%ebp),%eax
08281f50 +0x0372:  mov    %eax,(%esp)
08281f53 +0x0375:  call   08282378 <+0x79a>
08281f58 +0x037a:  lea    -0x20(%ebp),%eax
08281f5b +0x037d:  mov    %eax,0x8(%esp)
08281f5f +0x0381:  mov    0xc(%ebp),%eax
08281f62 +0x0384:  mov    %eax,0x4(%esp)
08281f66 +0x0388:  lea    -0x3c(%ebp),%eax
08281f69 +0x038b:  mov    %eax,(%esp)
08281f6c +0x038e:  call   082823f2 <+0x814>
08281f71 +0x0393:  lea    -0x4c(%ebp),%eax
08281f74 +0x0396:  lea    -0x3c(%ebp),%edx
08281f77 +0x0399:  mov    %edx,0xc(%esp)
08281f7b +0x039d:  mov    -0x48(%ebp),%edx
08281f7e +0x03a0:  mov    %edx,0x8(%esp)
08281f82 +0x03a4:  mov    0x8(%ebp),%edx
08281f85 +0x03a7:  mov    %edx,0x4(%esp)
08281f89 +0x03ab:  mov    %eax,(%esp)
08281f8c +0x03ae:  call   0828242a <+0x84c>
08281f91 +0x03b3:  sub    $0x4,%esp
08281f94 +0x03b6:  mov    -0x4c(%ebp),%eax
08281f97 +0x03b9:  mov    %eax,-0x48(%ebp)
08281f9a +0x03bc:  lea    -0x3c(%ebp),%eax
08281f9d +0x03bf:  mov    %eax,(%esp)
08281fa0 +0x03c2:  call   08281e98 <+0x2ba>
08281fa5 +0x03c7:  jmp    08281fd7 <+0x3f9>
08281fa7 +0x03c9:  mov    %edx,%ebx
08281fa9 +0x03cb:  mov    %eax,%esi
08281fab +0x03cd:  lea    -0x3c(%ebp),%eax
08281fae +0x03d0:  mov    %eax,(%esp)
08281fb1 +0x03d3:  call   08281e98 <+0x2ba>
08281fb6 +0x03d8:  mov    %esi,%eax
08281fb8 +0x03da:  mov    %ebx,%edx
08281fba +0x03dc:  jmp    08281fbc <+0x3de>
08281fbc +0x03de:  mov    %edx,%ebx
08281fbe +0x03e0:  mov    %eax,%esi
08281fc0 +0x03e2:  lea    -0x20(%ebp),%eax
08281fc3 +0x03e5:  mov    %eax,(%esp)
08281fc6 +0x03e8:  call   08281e84 <+0x2a6>
08281fcb +0x03ed:  mov    %esi,%eax
08281fcd +0x03ef:  mov    %ebx,%edx
08281fcf +0x03f1:  mov    %eax,(%esp)
08281fd2 +0x03f4:  call   08ae3750 <_Unwind_Resume>
08281fd7 +0x03f9:  lea    -0x20(%ebp),%eax
08281fda +0x03fc:  mov    %eax,(%esp)
08281fdd +0x03ff:  call   08281e84 <+0x2a6>
08281fe2 +0x0404:  lea    -0x48(%ebp),%eax
08281fe5 +0x0407:  mov    %eax,(%esp)
08281fe8 +0x040a:  call   08281db4 <+0x1d6>
08281fed +0x040f:  add    $0x4,%eax
08281ff0 +0x0412:  lea    -0x8(%ebp),%esp
08281ff3 +0x0415:  add    $0x0,%esp
08281ff6 +0x0418:  pop    %ebx
08281ff7 +0x0419:  pop    %esi
08281ff8 +0x041a:  pop    %ebp
08281ff9 +0x041b:  ret
08281ffa +0x041c:  push   %ebp
08281ffb +0x041d:  mov    %esp,%ebp
08281ffd +0x041f:  sub    $0x18,%esp
08282000 +0x0422:  mov    0xc(%ebp),%eax
08282003 +0x0425:  mov    %eax,(%esp)
08282006 +0x0428:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0828200b +0x042d:  mov    (%eax),%edx
0828200d +0x042f:  mov    0x8(%ebp),%eax
08282010 +0x0432:  mov    %edx,(%eax)
08282012 +0x0434:  mov    0x10(%ebp),%eax
08282015 +0x0437:  mov    %eax,(%esp)
08282018 +0x043a:  call   0828246f <+0x891>
0828201d +0x043f:  mov    (%eax),%edx
0828201f +0x0441:  mov    0x8(%ebp),%eax
08282022 +0x0444:  mov    %edx,0x4(%eax)
08282025 +0x0447:  leave
08282026 +0x0448:  ret
08282027 +0x0449:  nop
08282028 +0x044a:  push   %ebp
08282029 +0x044b:  mov    %esp,%ebp
0828202b +0x044d:  push   %ebx
0828202c +0x044e:  sub    $0x14,%esp
0828202f +0x0451:  mov    0x8(%ebp),%ebx
08282032 +0x0454:  mov    0xc(%ebp),%eax
08282035 +0x0457:  mov    0x10(%ebp),%edx
08282038 +0x045a:  mov    %edx,0x8(%esp)
0828203c +0x045e:  mov    %eax,0x4(%esp)
08282040 +0x0462:  mov    %ebx,(%esp)
08282043 +0x0465:  call   08282478 <+0x89a>
08282048 +0x046a:  sub    $0x4,%esp
0828204b +0x046d:  mov    %ebx,%eax
0828204d +0x046f:  mov    -0x4(%ebp),%ebx
08282050 +0x0472:  leave
08282051 +0x0473:  ret    $0x4
08282054 +0x0476:  push   %ebp
08282055 +0x0477:  mov    %esp,%ebp
08282057 +0x0479:  push   %ebx
08282058 +0x047a:  sub    $0x14,%esp
0828205b +0x047d:  mov    0x8(%ebp),%ebx
0828205e +0x0480:  mov    0xc(%ebp),%eax
08282061 +0x0483:  mov    %eax,0x4(%esp)
08282065 +0x0487:  mov    %ebx,(%esp)
08282068 +0x048a:  call   08282648 <+0xa6a>
0828206d +0x048f:  sub    $0x4,%esp
08282070 +0x0492:  mov    %ebx,%eax
08282072 +0x0494:  mov    -0x4(%ebp),%ebx
08282075 +0x0497:  leave
08282076 +0x0498:  ret    $0x4
08282079 +0x049b:  nop
0828207a +0x049c:  push   %ebp
0828207b +0x049d:  mov    %esp,%ebp
0828207d +0x049f:  mov    0x8(%ebp),%eax
08282080 +0x04a2:  mov    (%eax),%edx
08282082 +0x04a4:  mov    0xc(%ebp),%eax
08282085 +0x04a7:  mov    (%eax),%eax
08282087 +0x04a9:  cmp    %eax,%edx
08282089 +0x04ab:  setne  %al
0828208c +0x04ae:  pop    %ebp
0828208d +0x04af:  ret
0828208e +0x04b0:  push   %ebp
0828208f +0x04b1:  mov    %esp,%ebp
08282091 +0x04b3:  sub    $0x18,%esp
08282094 +0x04b6:  mov    0x8(%ebp),%eax
08282097 +0x04b9:  mov    (%eax),%eax
08282099 +0x04bb:  mov    %eax,(%esp)
0828209c +0x04be:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
082820a1 +0x04c3:  mov    0x8(%ebp),%edx
082820a4 +0x04c6:  mov    %eax,(%edx)
082820a6 +0x04c8:  mov    0x8(%ebp),%eax
082820a9 +0x04cb:  leave
082820aa +0x04cc:  ret
082820ab +0x04cd:  nop
082820ac +0x04ce:  push   %ebp
082820ad +0x04cf:  mov    %esp,%ebp
082820af +0x04d1:  mov    0x8(%ebp),%eax
082820b2 +0x04d4:  mov    (%eax),%edx
082820b4 +0x04d6:  mov    0xc(%ebp),%eax
082820b7 +0x04d9:  mov    (%eax),%eax
082820b9 +0x04db:  cmp    %eax,%edx
082820bb +0x04dd:  setne  %al
082820be +0x04e0:  pop    %ebp
082820bf +0x04e1:  ret
082820c0 +0x04e2:  push   %ebp
082820c1 +0x04e3:  mov    %esp,%ebp
082820c3 +0x04e5:  sub    $0x18,%esp
082820c6 +0x04e8:  mov    0x8(%ebp),%eax
082820c9 +0x04eb:  mov    (%eax),%eax
082820cb +0x04ed:  mov    %eax,(%esp)
082820ce +0x04f0:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
082820d3 +0x04f5:  mov    0x8(%ebp),%edx
082820d6 +0x04f8:  mov    %eax,(%edx)
082820d8 +0x04fa:  mov    0x8(%ebp),%eax
082820db +0x04fd:  leave
082820dc +0x04fe:  ret
082820dd +0x04ff:  nop
082820de +0x0500:  push   %ebp
082820df +0x0501:  mov    %esp,%ebp
082820e1 +0x0503:  sub    $0x18,%esp
082820e4 +0x0506:  mov    0x8(%ebp),%eax
082820e7 +0x0509:  mov    %eax,(%esp)
082820ea +0x050c:  call   0828266e <+0xa90>
082820ef +0x0511:  leave
082820f0 +0x0512:  ret
082820f1 +0x0513:  nop
082820f2 +0x0514:  push   %ebp
082820f3 +0x0515:  mov    %esp,%ebp
082820f5 +0x0517:  sub    $0x18,%esp
082820f8 +0x051a:  mov    0x8(%ebp),%eax
082820fb +0x051d:  mov    %eax,(%esp)
082820fe +0x0520:  call   082826be <+0xae0>
08282103 +0x0525:  leave
08282104 +0x0526:  ret
08282105 +0x0527:  nop
08282106 +0x0528:  push   %ebp
08282107 +0x0529:  mov    %esp,%ebp
08282109 +0x052b:  sub    $0x28,%esp
0828210c +0x052e:  jmp    0828214e <+0x570>
0828210e +0x0530:  mov    0xc(%ebp),%eax
08282111 +0x0533:  mov    %eax,(%esp)
08282114 +0x0536:  call   082826c3 <+0xae5>
08282119 +0x053b:  mov    %eax,0x4(%esp)
0828211d +0x053f:  mov    0x8(%ebp),%eax
08282120 +0x0542:  mov    %eax,(%esp)
08282123 +0x0545:  call   08282106 <+0x528>
08282128 +0x054a:  mov    0xc(%ebp),%eax
0828212b +0x054d:  mov    %eax,(%esp)
0828212e +0x0550:  call   082826ce <+0xaf0>
08282133 +0x0555:  mov    %eax,-0xc(%ebp)
08282136 +0x0558:  mov    0xc(%ebp),%eax
08282139 +0x055b:  mov    %eax,0x4(%esp)
0828213d +0x055f:  mov    0x8(%ebp),%eax
08282140 +0x0562:  mov    %eax,(%esp)
08282143 +0x0565:  call   082826da <+0xafc>
08282148 +0x056a:  mov    -0xc(%ebp),%eax
0828214b +0x056d:  mov    %eax,0xc(%ebp)
0828214e +0x0570:  cmpl   $0x0,0xc(%ebp)
08282152 +0x0574:  setne  %al
08282155 +0x0577:  test   %al,%al
08282157 +0x0579:  jne    0828210e <+0x530>
08282159 +0x057b:  leave
0828215a +0x057c:  ret
0828215b +0x057d:  nop
0828215c +0x057e:  push   %ebp
0828215d +0x057f:  mov    %esp,%ebp
0828215f +0x0581:  mov    0x8(%ebp),%eax
08282162 +0x0584:  mov    0x8(%eax),%eax
08282165 +0x0587:  pop    %ebp
08282166 +0x0588:  ret
08282167 +0x0589:  nop
08282168 +0x058a:  push   %ebp
08282169 +0x058b:  mov    %esp,%ebp
0828216b +0x058d:  push   %esi
0828216c +0x058e:  push   %ebx
0828216d +0x058f:  sub    $0x30,%esp
08282170 +0x0592:  mov    0x8(%ebp),%ebx
08282173 +0x0595:  mov    0xc(%ebp),%eax
08282176 +0x0598:  mov    %eax,(%esp)
08282179 +0x059b:  call   0828270e <+0xb30>
0828217e +0x05a0:  mov    %eax,%esi
08282180 +0x05a2:  mov    0xc(%ebp),%eax
08282183 +0x05a5:  mov    %eax,(%esp)
08282186 +0x05a8:  call   0828215c <+0x57e>
0828218b +0x05ad:  lea    -0x10(%ebp),%edx
0828218e +0x05b0:  mov    0x10(%ebp),%ecx
08282191 +0x05b3:  mov    %ecx,0x10(%esp)
08282195 +0x05b7:  mov    %esi,0xc(%esp)
08282199 +0x05bb:  mov    %eax,0x8(%esp)
0828219d +0x05bf:  mov    0xc(%ebp),%eax
082821a0 +0x05c2:  mov    %eax,0x4(%esp)
082821a4 +0x05c6:  mov    %edx,(%esp)
082821a7 +0x05c9:  call   0828271a <+0xb3c>
082821ac +0x05ce:  sub    $0x4,%esp
082821af +0x05d1:  lea    -0xc(%ebp),%eax
082821b2 +0x05d4:  mov    0xc(%ebp),%edx
082821b5 +0x05d7:  mov    %edx,0x4(%esp)
082821b9 +0x05db:  mov    %eax,(%esp)
082821bc +0x05de:  call   08282226 <+0x648>
082821c1 +0x05e3:  sub    $0x4,%esp
082821c4 +0x05e6:  lea    -0xc(%ebp),%eax
082821c7 +0x05e9:  mov    %eax,0x4(%esp)
082821cb +0x05ed:  lea    -0x10(%ebp),%eax
082821ce +0x05f0:  mov    %eax,(%esp)
082821d1 +0x05f3:  call   08281da0 <+0x1c2>
082821d6 +0x05f8:  test   %al,%al
082821d8 +0x05fa:  jne    082821ff <+0x621>
082821da +0x05fc:  mov    -0x10(%ebp),%eax
082821dd +0x05ff:  mov    %eax,(%esp)
082821e0 +0x0602:  call   08282796 <+0xbb8>
082821e5 +0x0607:  mov    0xc(%ebp),%edx
082821e8 +0x060a:  mov    %eax,0x8(%esp)
082821ec +0x060e:  mov    0x10(%ebp),%eax
082821ef +0x0611:  mov    %eax,0x4(%esp)
082821f3 +0x0615:  mov    %edx,(%esp)
082821f6 +0x0618:  call   08282362 <+0x784>
082821fb +0x061d:  test   %al,%al
082821fd +0x061f:  je     08282213 <+0x635>
082821ff +0x0621:  mov    0xc(%ebp),%eax
08282202 +0x0624:  mov    %eax,0x4(%esp)
08282206 +0x0628:  mov    %ebx,(%esp)
08282209 +0x062b:  call   08282226 <+0x648>
0828220e +0x0630:  sub    $0x4,%esp
08282211 +0x0633:  jmp    08282218 <+0x63a>
08282213 +0x0635:  mov    -0x10(%ebp),%eax
08282216 +0x0638:  mov    %eax,(%ebx)
08282218 +0x063a:  mov    %ebx,%eax
0828221a +0x063c:  lea    -0x8(%ebp),%esp
0828221d +0x063f:  add    $0x0,%esp
08282220 +0x0642:  pop    %ebx
08282221 +0x0643:  pop    %esi
08282222 +0x0644:  pop    %ebp
08282223 +0x0645:  ret    $0x4
08282226 +0x0648:  push   %ebp
08282227 +0x0649:  mov    %esp,%ebp
08282229 +0x064b:  push   %ebx
0828222a +0x064c:  sub    $0x14,%esp
0828222d +0x064f:  mov    0x8(%ebp),%ebx
08282230 +0x0652:  mov    0xc(%ebp),%eax
08282233 +0x0655:  add    $0x4,%eax
08282236 +0x0658:  mov    %eax,0x4(%esp)
0828223a +0x065c:  mov    %ebx,(%esp)
0828223d +0x065f:  call   082827b8 <+0xbda>
08282242 +0x0664:  mov    %ebx,%eax
08282244 +0x0666:  add    $0x14,%esp
08282247 +0x0669:  pop    %ebx
08282248 +0x066a:  pop    %ebp
08282249 +0x066b:  ret    $0x4
0828224c +0x066e:  push   %ebp
0828224d +0x066f:  mov    %esp,%ebp
0828224f +0x0671:  push   %ebx
08282250 +0x0672:  sub    $0x14,%esp
08282253 +0x0675:  mov    0x8(%ebp),%ebx
08282256 +0x0678:  mov    0xc(%ebp),%eax
08282259 +0x067b:  mov    0xc(%eax),%eax
0828225c +0x067e:  mov    %eax,0x4(%esp)
08282260 +0x0682:  mov    %ebx,(%esp)
08282263 +0x0685:  call   082827c6 <+0xbe8>
08282268 +0x068a:  mov    %ebx,%eax
0828226a +0x068c:  add    $0x14,%esp
0828226d +0x068f:  pop    %ebx
0828226e +0x0690:  pop    %ebp
0828226f +0x0691:  ret    $0x4
08282272 +0x0694:  push   %ebp
08282273 +0x0695:  mov    %esp,%ebp
08282275 +0x0697:  push   %ebx
08282276 +0x0698:  sub    $0x14,%esp
08282279 +0x069b:  mov    0x8(%ebp),%ebx
0828227c +0x069e:  mov    0xc(%ebp),%eax
0828227f +0x06a1:  add    $0x4,%eax
08282282 +0x06a4:  mov    %eax,0x4(%esp)
08282286 +0x06a8:  mov    %ebx,(%esp)
08282289 +0x06ab:  call   082827c6 <+0xbe8>
0828228e +0x06b0:  mov    %ebx,%eax
08282290 +0x06b2:  add    $0x14,%esp
08282293 +0x06b5:  pop    %ebx
08282294 +0x06b6:  pop    %ebp
08282295 +0x06b7:  ret    $0x4
08282298 +0x06ba:  push   %ebp
08282299 +0x06bb:  mov    %esp,%ebp
0828229b +0x06bd:  mov    0x8(%ebp),%eax
0828229e +0x06c0:  pop    %ebp
0828229f +0x06c1:  ret    $0x4
082822a2 +0x06c4:  push   %ebp
082822a3 +0x06c5:  mov    %esp,%ebp
082822a5 +0x06c7:  push   %ebx
082822a6 +0x06c8:  sub    $0x14,%esp
082822a9 +0x06cb:  mov    0x8(%ebp),%ebx
082822ac +0x06ce:  jmp    082822b9 <+0x6db>
082822ae +0x06d0:  lea    0xc(%ebp),%eax
082822b1 +0x06d3:  mov    %eax,(%esp)
082822b4 +0x06d6:  call   082820c0 <+0x4e2>
082822b9 +0x06db:  lea    0x10(%ebp),%eax
082822bc +0x06de:  mov    %eax,0x4(%esp)
082822c0 +0x06e2:  lea    0xc(%ebp),%eax
082822c3 +0x06e5:  mov    %eax,(%esp)
082822c6 +0x06e8:  call   082820ac <+0x4ce>
082822cb +0x06ed:  test   %al,%al
082822cd +0x06ef:  je     082822f7 <+0x719>
082822cf +0x06f1:  lea    0xc(%ebp),%eax
082822d2 +0x06f4:  mov    %eax,(%esp)
082822d5 +0x06f7:  call   08281e76 <+0x298>
082822da +0x06fc:  mov    %eax,0x4(%esp)
082822de +0x0700:  lea    0x14(%ebp),%eax
082822e1 +0x0703:  mov    %eax,(%esp)
082822e4 +0x0706:  call   08281c48 <+0x6a>
082822e9 +0x070b:  xor    $0x1,%eax
082822ec +0x070e:  test   %al,%al
082822ee +0x0710:  je     082822f7 <+0x719>
082822f0 +0x0712:  mov    $0x1,%eax
082822f5 +0x0717:  jmp    082822fc <+0x71e>
082822f7 +0x0719:  mov    $0x0,%eax
082822fc +0x071e:  test   %al,%al
082822fe +0x0720:  jne    082822ae <+0x6d0>
08282300 +0x0722:  mov    0xc(%ebp),%eax
08282303 +0x0725:  mov    %eax,(%ebx)
08282305 +0x0727:  mov    %ebx,%eax
08282307 +0x0729:  add    $0x14,%esp
0828230a +0x072c:  pop    %ebx
0828230b +0x072d:  pop    %ebp
0828230c +0x072e:  ret    $0x4
0828230f +0x0731:  nop
08282310 +0x0732:  push   %ebp
08282311 +0x0733:  mov    %esp,%ebp
08282313 +0x0735:  push   %ebx
08282314 +0x0736:  sub    $0x14,%esp
08282317 +0x0739:  mov    0x8(%ebp),%ebx
0828231a +0x073c:  mov    0xc(%ebp),%eax
0828231d +0x073f:  mov    0x10(%ebp),%edx
08282320 +0x0742:  mov    %edx,0x8(%esp)
08282324 +0x0746:  mov    %eax,0x4(%esp)
08282328 +0x074a:  mov    %ebx,(%esp)
0828232b +0x074d:  call   082827d4 <+0xbf6>
08282330 +0x0752:  sub    $0x4,%esp
08282333 +0x0755:  mov    %ebx,%eax
08282335 +0x0757:  mov    -0x4(%ebp),%ebx
08282338 +0x075a:  leave
08282339 +0x075b:  ret    $0x4
0828233c +0x075e:  push   %ebp
0828233d +0x075f:  mov    %esp,%ebp
0828233f +0x0761:  push   %ebx
08282340 +0x0762:  sub    $0x14,%esp
08282343 +0x0765:  mov    0x8(%ebp),%ebx
08282346 +0x0768:  mov    0xc(%ebp),%eax
08282349 +0x076b:  mov    %eax,0x4(%esp)
0828234d +0x076f:  mov    %ebx,(%esp)
08282350 +0x0772:  call   08282826 <+0xc48>
08282355 +0x0777:  sub    $0x4,%esp
08282358 +0x077a:  mov    %ebx,%eax
0828235a +0x077c:  mov    -0x4(%ebp),%ebx
0828235d +0x077f:  leave
0828235e +0x0780:  ret    $0x4
08282361 +0x0783:  nop
08282362 +0x0784:  push   %ebp
08282363 +0x0785:  mov    %esp,%ebp
08282365 +0x0787:  mov    0xc(%ebp),%eax
08282368 +0x078a:  mov    (%eax),%eax
0828236a +0x078c:  mov    %eax,%edx
0828236c +0x078e:  mov    0x10(%ebp),%eax
0828236f +0x0791:  mov    (%eax),%eax
08282371 +0x0793:  cmp    %eax,%edx
08282373 +0x0795:  setl   %al
08282376 +0x0798:  pop    %ebp
08282377 +0x0799:  ret
08282378 +0x079a:  push   %ebp
08282379 +0x079b:  mov    %esp,%ebp
0828237b +0x079d:  sub    $0x18,%esp
0828237e +0x07a0:  mov    0x8(%ebp),%eax
08282381 +0x07a3:  mov    %eax,(%esp)
08282384 +0x07a6:  call   08282830 <+0xc52>
08282389 +0x07ab:  leave
0828238a +0x07ac:  ret
0828238b +0x07ad:  nop
0828238c +0x07ae:  push   %ebp
0828238d +0x07af:  mov    %esp,%ebp
0828238f +0x07b1:  sub    $0x18,%esp
08282392 +0x07b4:  mov    0x8(%ebp),%eax
08282395 +0x07b7:  mov    %eax,(%esp)
08282398 +0x07ba:  call   08282844 <+0xc66>
0828239d +0x07bf:  leave
0828239e +0x07c0:  ret
0828239f +0x07c1:  nop
082823a0 +0x07c2:  push   %ebp
082823a1 +0x07c3:  mov    %esp,%ebp
082823a3 +0x07c5:  push   %esi
082823a4 +0x07c6:  push   %ebx
082823a5 +0x07c7:  sub    $0x10,%esp
082823a8 +0x07ca:  mov    0x8(%ebp),%eax
082823ab +0x07cd:  mov    %eax,(%esp)
082823ae +0x07d0:  call   082828ae <+0xcd0>
082823b3 +0x07d5:  mov    %eax,0x4(%esp)
082823b7 +0x07d9:  mov    0x8(%ebp),%eax
082823ba +0x07dc:  mov    %eax,(%esp)
082823bd +0x07df:  call   08282858 <+0xc7a>
082823c2 +0x07e4:  jmp    082823df <+0x801>
082823c4 +0x07e6:  mov    %edx,%ebx
082823c6 +0x07e8:  mov    %eax,%esi
082823c8 +0x07ea:  mov    0x8(%ebp),%eax
082823cb +0x07ed:  mov    %eax,(%esp)
082823ce +0x07f0:  call   0828238c <+0x7ae>
082823d3 +0x07f5:  mov    %esi,%eax
082823d5 +0x07f7:  mov    %ebx,%edx
082823d7 +0x07f9:  mov    %eax,(%esp)
082823da +0x07fc:  call   08ae3750 <_Unwind_Resume>
082823df +0x0801:  mov    0x8(%ebp),%eax
082823e2 +0x0804:  mov    %eax,(%esp)
082823e5 +0x0807:  call   0828238c <+0x7ae>
082823ea +0x080c:  add    $0x10,%esp
082823ed +0x080f:  pop    %ebx
082823ee +0x0810:  pop    %esi
082823ef +0x0811:  pop    %ebp
082823f0 +0x0812:  ret
082823f1 +0x0813:  nop
082823f2 +0x0814:  push   %ebp
082823f3 +0x0815:  mov    %esp,%ebp
082823f5 +0x0817:  sub    $0x18,%esp
082823f8 +0x081a:  mov    0xc(%ebp),%eax
082823fb +0x081d:  mov    %eax,(%esp)
082823fe +0x0820:  call   082828b9 <+0xcdb>
08282403 +0x0825:  mov    (%eax),%edx
08282405 +0x0827:  mov    0x8(%ebp),%eax
08282408 +0x082a:  mov    %edx,(%eax)
0828240a +0x082c:  mov    0x10(%ebp),%eax
0828240d +0x082f:  mov    %eax,(%esp)
08282410 +0x0832:  call   082828c1 <+0xce3>
08282415 +0x0837:  mov    0x8(%ebp),%edx
08282418 +0x083a:  add    $0x4,%edx
0828241b +0x083d:  mov    %eax,0x4(%esp)
0828241f +0x0841:  mov    %edx,(%esp)
08282422 +0x0844:  call   082828ca <+0xcec>
08282427 +0x0849:  leave
08282428 +0x084a:  ret
08282429 +0x084b:  nop
0828242a +0x084c:  push   %ebp
0828242b +0x084d:  mov    %esp,%ebp
0828242d +0x084f:  push   %ebx
0828242e +0x0850:  sub    $0x24,%esp
08282431 +0x0853:  mov    0x8(%ebp),%ebx
08282434 +0x0856:  lea    0x10(%ebp),%eax
08282437 +0x0859:  mov    %eax,0x4(%esp)
0828243b +0x085d:  lea    -0xc(%ebp),%eax
0828243e +0x0860:  mov    %eax,(%esp)
08282441 +0x0863:  call   082828ec <+0xd0e>
08282446 +0x0868:  mov    0xc(%ebp),%eax
08282449 +0x086b:  mov    0x14(%ebp),%edx
0828244c +0x086e:  mov    %edx,0xc(%esp)
08282450 +0x0872:  mov    -0xc(%ebp),%edx
08282453 +0x0875:  mov    %edx,0x8(%esp)
08282457 +0x0879:  mov    %eax,0x4(%esp)
0828245b +0x087d:  mov    %ebx,(%esp)
0828245e +0x0880:  call   082828fc <+0xd1e>
08282463 +0x0885:  sub    $0x4,%esp
08282466 +0x0888:  mov    %ebx,%eax
08282468 +0x088a:  mov    -0x4(%ebp),%ebx
0828246b +0x088d:  leave
0828246c +0x088e:  ret    $0x4
0828246f +0x0891:  push   %ebp
08282470 +0x0892:  mov    %esp,%ebp
08282472 +0x0894:  mov    0x8(%ebp),%eax
08282475 +0x0897:  pop    %ebp
08282476 +0x0898:  ret
08282477 +0x0899:  nop
08282478 +0x089a:  push   %ebp
08282479 +0x089b:  mov    %esp,%ebp
0828247b +0x089d:  push   %esi
0828247c +0x089e:  push   %ebx
0828247d +0x089f:  sub    $0x50,%esp
08282480 +0x08a2:  mov    0x8(%ebp),%ebx
08282483 +0x08a5:  mov    0xc(%ebp),%eax
08282486 +0x08a8:  mov    %eax,(%esp)
08282489 +0x08ab:  call   082828ae <+0xcd0>
0828248e +0x08b0:  mov    %eax,-0x14(%ebp)
08282491 +0x08b3:  mov    0xc(%ebp),%eax
08282494 +0x08b6:  mov    %eax,(%esp)
08282497 +0x08b9:  call   08282cc2 <+0x10e4>
0828249c +0x08be:  mov    %eax,-0x10(%ebp)
0828249f +0x08c1:  movb   $0x1,-0x9(%ebp)
082824a3 +0x08c5:  jmp    08282501 <+0x923>
082824a5 +0x08c7:  mov    -0x14(%ebp),%eax
082824a8 +0x08ca:  mov    %eax,-0x10(%ebp)
082824ab +0x08cd:  mov    -0x14(%ebp),%eax
082824ae +0x08d0:  mov    %eax,(%esp)
082824b1 +0x08d3:  call   08282cd6 <+0x10f8>
082824b6 +0x08d8:  mov    %eax,%esi
082824b8 +0x08da:  mov    0x10(%ebp),%eax
082824bb +0x08dd:  mov    %eax,0x4(%esp)
082824bf +0x08e1:  lea    -0x2d(%ebp),%eax
082824c2 +0x08e4:  mov    %eax,(%esp)
082824c5 +0x08e7:  call   08282cce <+0x10f0>
082824ca +0x08ec:  mov    0xc(%ebp),%edx
082824cd +0x08ef:  mov    %esi,0x8(%esp)
082824d1 +0x08f3:  mov    %eax,0x4(%esp)
082824d5 +0x08f7:  mov    %edx,(%esp)
082824d8 +0x08fa:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082824dd +0x08ff:  mov    %al,-0x9(%ebp)
082824e0 +0x0902:  cmpb   $0x0,-0x9(%ebp)
082824e4 +0x0906:  je     082824f3 <+0x915>
082824e6 +0x0908:  mov    -0x14(%ebp),%eax
082824e9 +0x090b:  mov    %eax,(%esp)
082824ec +0x090e:  call   08282d03 <+0x1125>
082824f1 +0x0913:  jmp    082824fe <+0x920>
082824f3 +0x0915:  mov    -0x14(%ebp),%eax
082824f6 +0x0918:  mov    %eax,(%esp)
082824f9 +0x091b:  call   08282cf8 <+0x111a>
082824fe +0x0920:  mov    %eax,-0x14(%ebp)
08282501 +0x0923:  cmpl   $0x0,-0x14(%ebp)
08282505 +0x0927:  setne  %al
08282508 +0x092a:  test   %al,%al
0828250a +0x092c:  jne    082824a5 <+0x8c7>
0828250c +0x092e:  mov    -0x10(%ebp),%eax
0828250f +0x0931:  mov    %eax,0x4(%esp)
08282513 +0x0935:  lea    -0x34(%ebp),%eax
08282516 +0x0938:  mov    %eax,(%esp)
08282519 +0x093b:  call   082827c6 <+0xbe8>
0828251e +0x0940:  cmpb   $0x0,-0x9(%ebp)
08282522 +0x0944:  je     082825a3 <+0x9c5>
08282524 +0x0946:  lea    -0x2c(%ebp),%eax
08282527 +0x0949:  mov    0xc(%ebp),%edx
0828252a +0x094c:  mov    %edx,0x4(%esp)
0828252e +0x0950:  mov    %eax,(%esp)
08282531 +0x0953:  call   0828224c <+0x66e>
08282536 +0x0958:  sub    $0x4,%esp
08282539 +0x095b:  lea    -0x2c(%ebp),%eax
0828253c +0x095e:  mov    %eax,0x4(%esp)
08282540 +0x0962:  lea    -0x34(%ebp),%eax
08282543 +0x0965:  mov    %eax,(%esp)
08282546 +0x0968:  call   08281e62 <+0x284>
0828254b +0x096d:  test   %al,%al
0828254d +0x096f:  je     08282598 <+0x9ba>
0828254f +0x0971:  movb   $0x1,-0x25(%ebp)
08282553 +0x0975:  mov    -0x10(%ebp),%ecx
08282556 +0x0978:  mov    -0x14(%ebp),%edx
08282559 +0x097b:  lea    -0x24(%ebp),%eax
0828255c +0x097e:  mov    0x10(%ebp),%esi
0828255f +0x0981:  mov    %esi,0x10(%esp)
08282563 +0x0985:  mov    %ecx,0xc(%esp)
08282567 +0x0989:  mov    %edx,0x8(%esp)
0828256b +0x098d:  mov    0xc(%ebp),%edx
0828256e +0x0990:  mov    %edx,0x4(%esp)
08282572 +0x0994:  mov    %eax,(%esp)
08282575 +0x0997:  call   08282d0e <+0x1130>
0828257a +0x099c:  sub    $0x4,%esp
0828257d +0x099f:  lea    -0x25(%ebp),%eax
08282580 +0x09a2:  mov    %eax,0x8(%esp)
08282584 +0x09a6:  lea    -0x24(%ebp),%eax
08282587 +0x09a9:  mov    %eax,0x4(%esp)
0828258b +0x09ad:  mov    %ebx,(%esp)
0828258e +0x09b0:  call   08282dd6 <+0x11f8>
08282593 +0x09b5:  jmp    08282639 <+0xa5b>
08282598 +0x09ba:  lea    -0x34(%ebp),%eax
0828259b +0x09bd:  mov    %eax,(%esp)
0828259e +0x09c0:  call   08282e04 <+0x1226>
082825a3 +0x09c5:  mov    0x10(%ebp),%eax
082825a6 +0x09c8:  mov    %eax,0x4(%esp)
082825aa +0x09cc:  lea    -0x1e(%ebp),%eax
082825ad +0x09cf:  mov    %eax,(%esp)
082825b0 +0x09d2:  call   08282cce <+0x10f0>
082825b5 +0x09d7:  mov    %eax,%esi
082825b7 +0x09d9:  mov    -0x34(%ebp),%eax
082825ba +0x09dc:  mov    %eax,(%esp)
082825bd +0x09df:  call   08282e21 <+0x1243>
082825c2 +0x09e4:  mov    0xc(%ebp),%edx
082825c5 +0x09e7:  mov    %esi,0x8(%esp)
082825c9 +0x09eb:  mov    %eax,0x4(%esp)
082825cd +0x09ef:  mov    %edx,(%esp)
082825d0 +0x09f2:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082825d5 +0x09f7:  test   %al,%al
082825d7 +0x09f9:  je     0828261f <+0xa41>
082825d9 +0x09fb:  movb   $0x1,-0x1d(%ebp)
082825dd +0x09ff:  mov    -0x10(%ebp),%ecx
082825e0 +0x0a02:  mov    -0x14(%ebp),%edx
082825e3 +0x0a05:  lea    -0x1c(%ebp),%eax
082825e6 +0x0a08:  mov    0x10(%ebp),%esi
082825e9 +0x0a0b:  mov    %esi,0x10(%esp)
082825ed +0x0a0f:  mov    %ecx,0xc(%esp)
082825f1 +0x0a13:  mov    %edx,0x8(%esp)
082825f5 +0x0a17:  mov    0xc(%ebp),%edx
082825f8 +0x0a1a:  mov    %edx,0x4(%esp)
082825fc +0x0a1e:  mov    %eax,(%esp)
082825ff +0x0a21:  call   08282d0e <+0x1130>
08282604 +0x0a26:  sub    $0x4,%esp
08282607 +0x0a29:  lea    -0x1d(%ebp),%eax
0828260a +0x0a2c:  mov    %eax,0x8(%esp)
0828260e +0x0a30:  lea    -0x1c(%ebp),%eax
08282611 +0x0a33:  mov    %eax,0x4(%esp)
08282615 +0x0a37:  mov    %ebx,(%esp)
08282618 +0x0a3a:  call   08282dd6 <+0x11f8>
0828261d +0x0a3f:  jmp    08282639 <+0xa5b>
0828261f +0x0a41:  movb   $0x0,-0x15(%ebp)
08282623 +0x0a45:  lea    -0x15(%ebp),%eax
08282626 +0x0a48:  mov    %eax,0x8(%esp)
0828262a +0x0a4c:  lea    -0x34(%ebp),%eax
0828262d +0x0a4f:  mov    %eax,0x4(%esp)
08282631 +0x0a53:  mov    %ebx,(%esp)
08282634 +0x0a56:  call   08282e44 <+0x1266>
08282639 +0x0a5b:  mov    %ebx,%eax
0828263b +0x0a5d:  lea    -0x8(%ebp),%esp
0828263e +0x0a60:  add    $0x0,%esp
08282641 +0x0a63:  pop    %ebx
08282642 +0x0a64:  pop    %esi
08282643 +0x0a65:  pop    %ebp
08282644 +0x0a66:  ret    $0x4
08282647 +0x0a69:  nop
08282648 +0x0a6a:  push   %ebp
08282649 +0x0a6b:  mov    %esp,%ebp
0828264b +0x0a6d:  push   %ebx
0828264c +0x0a6e:  sub    $0x14,%esp
0828264f +0x0a71:  mov    0x8(%ebp),%ebx
08282652 +0x0a74:  mov    0xc(%ebp),%eax
08282655 +0x0a77:  mov    0xc(%eax),%eax
08282658 +0x0a7a:  mov    %eax,0x4(%esp)
0828265c +0x0a7e:  mov    %ebx,(%esp)
0828265f +0x0a81:  call   082827b8 <+0xbda>
08282664 +0x0a86:  mov    %ebx,%eax
08282666 +0x0a88:  add    $0x14,%esp
08282669 +0x0a8b:  pop    %ebx
0828266a +0x0a8c:  pop    %ebp
0828266b +0x0a8d:  ret    $0x4
0828266e +0x0a90:  push   %ebp
0828266f +0x0a91:  mov    %esp,%ebp
08282671 +0x0a93:  sub    $0x18,%esp
08282674 +0x0a96:  mov    0x8(%ebp),%eax
08282677 +0x0a99:  mov    %eax,(%esp)
0828267a +0x0a9c:  call   08282e72 <+0x1294>
0828267f +0x0aa1:  mov    0x8(%ebp),%eax
08282682 +0x0aa4:  movl   $0x0,0x4(%eax)
08282689 +0x0aab:  mov    0x8(%ebp),%eax
0828268c +0x0aae:  movl   $0x0,0x8(%eax)
08282693 +0x0ab5:  mov    0x8(%ebp),%eax
08282696 +0x0ab8:  movl   $0x0,0xc(%eax)
0828269d +0x0abf:  mov    0x8(%ebp),%eax
082826a0 +0x0ac2:  movl   $0x0,0x10(%eax)
082826a7 +0x0ac9:  mov    0x8(%ebp),%eax
082826aa +0x0acc:  movl   $0x0,0x14(%eax)
082826b1 +0x0ad3:  mov    0x8(%ebp),%eax
082826b4 +0x0ad6:  mov    %eax,(%esp)
082826b7 +0x0ad9:  call   08282e86 <+0x12a8>
082826bc +0x0ade:  leave
082826bd +0x0adf:  ret
082826be +0x0ae0:  push   %ebp
082826bf +0x0ae1:  mov    %esp,%ebp
082826c1 +0x0ae3:  pop    %ebp
082826c2 +0x0ae4:  ret
082826c3 +0x0ae5:  push   %ebp
082826c4 +0x0ae6:  mov    %esp,%ebp
082826c6 +0x0ae8:  mov    0x8(%ebp),%eax
082826c9 +0x0aeb:  mov    0xc(%eax),%eax
082826cc +0x0aee:  pop    %ebp
082826cd +0x0aef:  ret
082826ce +0x0af0:  push   %ebp
082826cf +0x0af1:  mov    %esp,%ebp
082826d1 +0x0af3:  mov    0x8(%ebp),%eax
082826d4 +0x0af6:  mov    0x8(%eax),%eax
082826d7 +0x0af9:  pop    %ebp
082826d8 +0x0afa:  ret
082826d9 +0x0afb:  nop
082826da +0x0afc:  push   %ebp
082826db +0x0afd:  mov    %esp,%ebp
082826dd +0x0aff:  sub    $0x18,%esp
082826e0 +0x0b02:  mov    0x8(%ebp),%eax
082826e3 +0x0b05:  mov    %eax,(%esp)
082826e6 +0x0b08:  call   08282eb8 <+0x12da>
082826eb +0x0b0d:  mov    0xc(%ebp),%edx
082826ee +0x0b10:  mov    %edx,0x4(%esp)
082826f2 +0x0b14:  mov    %eax,(%esp)
082826f5 +0x0b17:  call   08282ed6 <+0x12f8>
082826fa +0x0b1c:  mov    0xc(%ebp),%eax
082826fd +0x0b1f:  mov    %eax,0x4(%esp)
08282701 +0x0b23:  mov    0x8(%ebp),%eax
08282704 +0x0b26:  mov    %eax,(%esp)
08282707 +0x0b29:  call   08282eea <+0x130c>
0828270c +0x0b2e:  leave
0828270d +0x0b2f:  ret
0828270e +0x0b30:  push   %ebp
0828270f +0x0b31:  mov    %esp,%ebp
08282711 +0x0b33:  mov    0x8(%ebp),%eax
08282714 +0x0b36:  add    $0x4,%eax
08282717 +0x0b39:  pop    %ebp
08282718 +0x0b3a:  ret
08282719 +0x0b3b:  nop
0828271a +0x0b3c:  push   %ebp
0828271b +0x0b3d:  mov    %esp,%ebp
0828271d +0x0b3f:  push   %ebx
0828271e +0x0b40:  sub    $0x14,%esp
08282721 +0x0b43:  mov    0x8(%ebp),%ebx
08282724 +0x0b46:  jmp    08282772 <+0xb94>
08282726 +0x0b48:  mov    0x10(%ebp),%eax
08282729 +0x0b4b:  mov    %eax,(%esp)
0828272c +0x0b4e:  call   08282f0c <+0x132e>
08282731 +0x0b53:  mov    0xc(%ebp),%edx
08282734 +0x0b56:  mov    0x18(%ebp),%ecx
08282737 +0x0b59:  mov    %ecx,0x8(%esp)
0828273b +0x0b5d:  mov    %eax,0x4(%esp)
0828273f +0x0b61:  mov    %edx,(%esp)
08282742 +0x0b64:  call   08282362 <+0x784>
08282747 +0x0b69:  xor    $0x1,%eax
0828274a +0x0b6c:  test   %al,%al
0828274c +0x0b6e:  je     08282764 <+0xb86>
0828274e +0x0b70:  mov    0x10(%ebp),%eax
08282751 +0x0b73:  mov    %eax,0x14(%ebp)
08282754 +0x0b76:  mov    0x10(%ebp),%eax
08282757 +0x0b79:  mov    %eax,(%esp)
0828275a +0x0b7c:  call   082826ce <+0xaf0>
0828275f +0x0b81:  mov    %eax,0x10(%ebp)
08282762 +0x0b84:  jmp    08282772 <+0xb94>
08282764 +0x0b86:  mov    0x10(%ebp),%eax
08282767 +0x0b89:  mov    %eax,(%esp)
0828276a +0x0b8c:  call   082826c3 <+0xae5>
0828276f +0x0b91:  mov    %eax,0x10(%ebp)
08282772 +0x0b94:  cmpl   $0x0,0x10(%ebp)
08282776 +0x0b98:  setne  %al
08282779 +0x0b9b:  test   %al,%al
0828277b +0x0b9d:  jne    08282726 <+0xb48>
0828277d +0x0b9f:  mov    0x14(%ebp),%eax
08282780 +0x0ba2:  mov    %eax,0x4(%esp)
08282784 +0x0ba6:  mov    %ebx,(%esp)
08282787 +0x0ba9:  call   082827b8 <+0xbda>
0828278c +0x0bae:  mov    %ebx,%eax
0828278e +0x0bb0:  add    $0x14,%esp
08282791 +0x0bb3:  pop    %ebx
08282792 +0x0bb4:  pop    %ebp
08282793 +0x0bb5:  ret    $0x4
08282796 +0x0bb8:  push   %ebp
08282797 +0x0bb9:  mov    %esp,%ebp
08282799 +0x0bbb:  sub    $0x28,%esp
0828279c +0x0bbe:  mov    0x8(%ebp),%eax
0828279f +0x0bc1:  mov    %eax,(%esp)
082827a2 +0x0bc4:  call   08282f2e <+0x1350>
082827a7 +0x0bc9:  mov    %eax,0x4(%esp)
082827ab +0x0bcd:  lea    -0x9(%ebp),%eax
082827ae +0x0bd0:  mov    %eax,(%esp)
082827b1 +0x0bd3:  call   08282f3a <+0x135c>
082827b6 +0x0bd8:  leave
082827b7 +0x0bd9:  ret
082827b8 +0x0bda:  push   %ebp
082827b9 +0x0bdb:  mov    %esp,%ebp
082827bb +0x0bdd:  mov    0xc(%ebp),%edx
082827be +0x0be0:  mov    0x8(%ebp),%eax
082827c1 +0x0be3:  mov    %edx,(%eax)
082827c3 +0x0be5:  pop    %ebp
082827c4 +0x0be6:  ret
082827c5 +0x0be7:  nop
082827c6 +0x0be8:  push   %ebp
082827c7 +0x0be9:  mov    %esp,%ebp
082827c9 +0x0beb:  mov    0xc(%ebp),%edx
082827cc +0x0bee:  mov    0x8(%ebp),%eax
082827cf +0x0bf1:  mov    %edx,(%eax)
082827d1 +0x0bf3:  pop    %ebp
082827d2 +0x0bf4:  ret
082827d3 +0x0bf5:  nop
082827d4 +0x0bf6:  push   %ebp
082827d5 +0x0bf7:  mov    %esp,%ebp
082827d7 +0x0bf9:  push   %esi
082827d8 +0x0bfa:  push   %ebx
082827d9 +0x0bfb:  sub    $0x20,%esp
082827dc +0x0bfe:  mov    0x8(%ebp),%esi
082827df +0x0c01:  mov    0xc(%ebp),%eax
082827e2 +0x0c04:  mov    %eax,(%esp)
082827e5 +0x0c07:  call   0828270e <+0xb30>
082827ea +0x0c0c:  mov    %eax,%ebx
082827ec +0x0c0e:  mov    0xc(%ebp),%eax
082827ef +0x0c11:  mov    %eax,(%esp)
082827f2 +0x0c14:  call   0828215c <+0x57e>
082827f7 +0x0c19:  mov    0x10(%ebp),%edx
082827fa +0x0c1c:  mov    %edx,0x10(%esp)
082827fe +0x0c20:  mov    %ebx,0xc(%esp)
08282802 +0x0c24:  mov    %eax,0x8(%esp)
08282806 +0x0c28:  mov    0xc(%ebp),%eax
08282809 +0x0c2b:  mov    %eax,0x4(%esp)
0828280d +0x0c2f:  mov    %esi,(%esp)
08282810 +0x0c32:  call   0828271a <+0xb3c>
08282815 +0x0c37:  sub    $0x4,%esp
08282818 +0x0c3a:  mov    %esi,%eax
0828281a +0x0c3c:  lea    -0x8(%ebp),%esp
0828281d +0x0c3f:  add    $0x0,%esp
08282820 +0x0c42:  pop    %ebx
08282821 +0x0c43:  pop    %esi
08282822 +0x0c44:  pop    %ebp
08282823 +0x0c45:  ret    $0x4
08282826 +0x0c48:  push   %ebp
08282827 +0x0c49:  mov    %esp,%ebp
08282829 +0x0c4b:  mov    0x8(%ebp),%eax
0828282c +0x0c4e:  pop    %ebp
0828282d +0x0c4f:  ret    $0x4
08282830 +0x0c52:  push   %ebp
08282831 +0x0c53:  mov    %esp,%ebp
08282833 +0x0c55:  sub    $0x18,%esp
08282836 +0x0c58:  mov    0x8(%ebp),%eax
08282839 +0x0c5b:  mov    %eax,(%esp)
0828283c +0x0c5e:  call   08282f42 <+0x1364>
08282841 +0x0c63:  leave
08282842 +0x0c64:  ret
08282843 +0x0c65:  nop
08282844 +0x0c66:  push   %ebp
08282845 +0x0c67:  mov    %esp,%ebp
08282847 +0x0c69:  sub    $0x18,%esp
0828284a +0x0c6c:  mov    0x8(%ebp),%eax
0828284d +0x0c6f:  mov    %eax,(%esp)
08282850 +0x0c72:  call   08282f92 <+0x13b4>
08282855 +0x0c77:  leave
08282856 +0x0c78:  ret
08282857 +0x0c79:  nop
08282858 +0x0c7a:  push   %ebp
08282859 +0x0c7b:  mov    %esp,%ebp
0828285b +0x0c7d:  sub    $0x28,%esp
0828285e +0x0c80:  jmp    082828a0 <+0xcc2>
08282860 +0x0c82:  mov    0xc(%ebp),%eax
08282863 +0x0c85:  mov    %eax,(%esp)
08282866 +0x0c88:  call   08282cf8 <+0x111a>
0828286b +0x0c8d:  mov    %eax,0x4(%esp)
0828286f +0x0c91:  mov    0x8(%ebp),%eax
08282872 +0x0c94:  mov    %eax,(%esp)
08282875 +0x0c97:  call   08282858 <+0xc7a>
0828287a +0x0c9c:  mov    0xc(%ebp),%eax
0828287d +0x0c9f:  mov    %eax,(%esp)
08282880 +0x0ca2:  call   08282d03 <+0x1125>
08282885 +0x0ca7:  mov    %eax,-0xc(%ebp)
08282888 +0x0caa:  mov    0xc(%ebp),%eax
0828288b +0x0cad:  mov    %eax,0x4(%esp)
0828288f +0x0cb1:  mov    0x8(%ebp),%eax
08282892 +0x0cb4:  mov    %eax,(%esp)
08282895 +0x0cb7:  call   08282f98 <+0x13ba>
0828289a +0x0cbc:  mov    -0xc(%ebp),%eax
0828289d +0x0cbf:  mov    %eax,0xc(%ebp)
082828a0 +0x0cc2:  cmpl   $0x0,0xc(%ebp)
082828a4 +0x0cc6:  setne  %al
082828a7 +0x0cc9:  test   %al,%al
082828a9 +0x0ccb:  jne    08282860 <+0xc82>
082828ab +0x0ccd:  leave
082828ac +0x0cce:  ret
082828ad +0x0ccf:  nop
082828ae +0x0cd0:  push   %ebp
082828af +0x0cd1:  mov    %esp,%ebp
082828b1 +0x0cd3:  mov    0x8(%ebp),%eax
082828b4 +0x0cd6:  mov    0x8(%eax),%eax
082828b7 +0x0cd9:  pop    %ebp
082828b8 +0x0cda:  ret
082828b9 +0x0cdb:  push   %ebp
082828ba +0x0cdc:  mov    %esp,%ebp
082828bc +0x0cde:  mov    0x8(%ebp),%eax
082828bf +0x0ce1:  pop    %ebp
082828c0 +0x0ce2:  ret
082828c1 +0x0ce3:  push   %ebp
082828c2 +0x0ce4:  mov    %esp,%ebp
082828c4 +0x0ce6:  mov    0x8(%ebp),%eax
082828c7 +0x0ce9:  pop    %ebp
082828c8 +0x0cea:  ret
082828c9 +0x0ceb:  nop
082828ca +0x0cec:  push   %ebp
082828cb +0x0ced:  mov    %esp,%ebp
082828cd +0x0cef:  sub    $0x18,%esp
082828d0 +0x0cf2:  mov    0xc(%ebp),%eax
082828d3 +0x0cf5:  mov    %eax,(%esp)
082828d6 +0x0cf8:  call   08282fcc <+0x13ee>
082828db +0x0cfd:  mov    0x8(%ebp),%edx
082828de +0x0d00:  mov    %eax,0x4(%esp)
082828e2 +0x0d04:  mov    %edx,(%esp)
082828e5 +0x0d07:  call   08282fd4 <+0x13f6>
082828ea +0x0d0c:  leave
082828eb +0x0d0d:  ret
082828ec +0x0d0e:  push   %ebp
082828ed +0x0d0f:  mov    %esp,%ebp
082828ef +0x0d11:  mov    0xc(%ebp),%eax
082828f2 +0x0d14:  mov    (%eax),%edx
082828f4 +0x0d16:  mov    0x8(%ebp),%eax
082828f7 +0x0d19:  mov    %edx,(%eax)
082828f9 +0x0d1b:  pop    %ebp
082828fa +0x0d1c:  ret
082828fb +0x0d1d:  nop
082828fc +0x0d1e:  push   %ebp
082828fd +0x0d1f:  mov    %esp,%ebp
082828ff +0x0d21:  push   %esi
08282900 +0x0d22:  push   %ebx
08282901 +0x0d23:  sub    $0x50,%esp
08282904 +0x0d26:  mov    0x8(%ebp),%ebx
08282907 +0x0d29:  mov    0x10(%ebp),%esi
0828290a +0x0d2c:  mov    0xc(%ebp),%eax
0828290d +0x0d2f:  mov    %eax,(%esp)
08282910 +0x0d32:  call   0828270e <+0xb30>
08282915 +0x0d37:  cmp    %eax,%esi
08282917 +0x0d39:  sete   %al
0828291a +0x0d3c:  test   %al,%al
0828291c +0x0d3e:  je     082829de <+0xe00>
08282922 +0x0d44:  mov    0xc(%ebp),%eax
08282925 +0x0d47:  mov    %eax,(%esp)
08282928 +0x0d4a:  call   082830f2 <+0x1514>
0828292d +0x0d4f:  test   %eax,%eax
0828292f +0x0d51:  je     08282978 <+0xd9a>
08282931 +0x0d53:  mov    0x14(%ebp),%eax
08282934 +0x0d56:  mov    %eax,0x4(%esp)
08282938 +0x0d5a:  lea    -0x29(%ebp),%eax
0828293b +0x0d5d:  mov    %eax,(%esp)
0828293e +0x0d60:  call   08282f3a <+0x135c>
08282943 +0x0d65:  mov    %eax,%esi
08282945 +0x0d67:  mov    0xc(%ebp),%eax
08282948 +0x0d6a:  mov    %eax,(%esp)
0828294b +0x0d6d:  call   082830e6 <+0x1508>
08282950 +0x0d72:  mov    (%eax),%eax
08282952 +0x0d74:  mov    %eax,(%esp)
08282955 +0x0d77:  call   08282796 <+0xbb8>
0828295a +0x0d7c:  mov    0xc(%ebp),%edx
0828295d +0x0d7f:  mov    %esi,0x8(%esp)
08282961 +0x0d83:  mov    %eax,0x4(%esp)
08282965 +0x0d87:  mov    %edx,(%esp)
08282968 +0x0d8a:  call   08282362 <+0x784>
0828296d +0x0d8f:  test   %al,%al
0828296f +0x0d91:  je     08282978 <+0xd9a>
08282971 +0x0d93:  mov    $0x1,%eax
08282976 +0x0d98:  jmp    0828297d <+0xd9f>
08282978 +0x0d9a:  mov    $0x0,%eax
0828297d +0x0d9f:  test   %al,%al
0828297f +0x0da1:  je     082829b8 <+0xdda>
08282981 +0x0da3:  mov    0xc(%ebp),%eax
08282984 +0x0da6:  mov    %eax,(%esp)
08282987 +0x0da9:  call   082830e6 <+0x1508>
0828298c +0x0dae:  mov    (%eax),%eax
0828298e +0x0db0:  mov    0x14(%ebp),%edx
08282991 +0x0db3:  mov    %edx,0x10(%esp)
08282995 +0x0db7:  mov    %eax,0xc(%esp)
08282999 +0x0dbb:  movl   $0x0,0x8(%esp)
082829a1 +0x0dc3:  mov    0xc(%ebp),%eax
082829a4 +0x0dc6:  mov    %eax,0x4(%esp)
082829a8 +0x0dca:  mov    %ebx,(%esp)
082829ab +0x0dcd:  call   082830fe <+0x1520>
082829b0 +0x0dd2:  sub    $0x4,%esp
082829b3 +0x0dd5:  jmp    08282cb3 <+0x10d5>
082829b8 +0x0dda:  lea    -0x28(%ebp),%eax
082829bb +0x0ddd:  mov    0x14(%ebp),%edx
082829be +0x0de0:  mov    %edx,0x8(%esp)
082829c2 +0x0de4:  mov    0xc(%ebp),%edx
082829c5 +0x0de7:  mov    %edx,0x4(%esp)
082829c9 +0x0deb:  mov    %eax,(%esp)
082829cc +0x0dee:  call   082831c6 <+0x15e8>
082829d1 +0x0df3:  sub    $0x4,%esp
082829d4 +0x0df6:  mov    -0x28(%ebp),%eax
082829d7 +0x0df9:  mov    %eax,(%ebx)
082829d9 +0x0dfb:  jmp    08282cb3 <+0x10d5>
082829de +0x0e00:  mov    0x10(%ebp),%eax
082829e1 +0x0e03:  mov    %eax,(%esp)
082829e4 +0x0e06:  call   08282796 <+0xbb8>
082829e9 +0x0e0b:  mov    %eax,%esi
082829eb +0x0e0d:  mov    0x14(%ebp),%eax
082829ee +0x0e10:  mov    %eax,0x4(%esp)
082829f2 +0x0e14:  lea    -0x1e(%ebp),%eax
082829f5 +0x0e17:  mov    %eax,(%esp)
082829f8 +0x0e1a:  call   08282f3a <+0x135c>
082829fd +0x0e1f:  mov    0xc(%ebp),%edx
08282a00 +0x0e22:  mov    %esi,0x8(%esp)
08282a04 +0x0e26:  mov    %eax,0x4(%esp)
08282a08 +0x0e2a:  mov    %edx,(%esp)
08282a0b +0x0e2d:  call   08282362 <+0x784>
08282a10 +0x0e32:  test   %al,%al
08282a12 +0x0e34:  je     08282b4a <+0xf6c>
08282a18 +0x0e3a:  mov    0x10(%ebp),%eax
08282a1b +0x0e3d:  mov    %eax,-0x30(%ebp)
08282a1e +0x0e40:  mov    0x10(%ebp),%esi
08282a21 +0x0e43:  mov    0xc(%ebp),%eax
08282a24 +0x0e46:  mov    %eax,(%esp)
08282a27 +0x0e49:  call   08283396 <+0x17b8>
08282a2c +0x0e4e:  mov    (%eax),%eax
08282a2e +0x0e50:  cmp    %eax,%esi
08282a30 +0x0e52:  sete   %al
08282a33 +0x0e55:  test   %al,%al
08282a35 +0x0e57:  je     08282a77 <+0xe99>
08282a37 +0x0e59:  mov    0xc(%ebp),%eax
08282a3a +0x0e5c:  mov    %eax,(%esp)
08282a3d +0x0e5f:  call   08283396 <+0x17b8>
08282a42 +0x0e64:  mov    (%eax),%esi
08282a44 +0x0e66:  mov    0xc(%ebp),%eax
08282a47 +0x0e69:  mov    %eax,(%esp)
08282a4a +0x0e6c:  call   08283396 <+0x17b8>
08282a4f +0x0e71:  mov    (%eax),%eax
08282a51 +0x0e73:  mov    0x14(%ebp),%edx
08282a54 +0x0e76:  mov    %edx,0x10(%esp)
08282a58 +0x0e7a:  mov    %esi,0xc(%esp)
08282a5c +0x0e7e:  mov    %eax,0x8(%esp)
08282a60 +0x0e82:  mov    0xc(%ebp),%eax
08282a63 +0x0e85:  mov    %eax,0x4(%esp)
08282a67 +0x0e89:  mov    %ebx,(%esp)
08282a6a +0x0e8c:  call   082830fe <+0x1520>
08282a6f +0x0e91:  sub    $0x4,%esp
08282a72 +0x0e94:  jmp    08282cb3 <+0x10d5>
08282a77 +0x0e99:  mov    0x14(%ebp),%eax
08282a7a +0x0e9c:  mov    %eax,0x4(%esp)
08282a7e +0x0ea0:  lea    -0x1d(%ebp),%eax
08282a81 +0x0ea3:  mov    %eax,(%esp)
08282a84 +0x0ea6:  call   08282f3a <+0x135c>
08282a89 +0x0eab:  mov    %eax,%esi
08282a8b +0x0ead:  lea    -0x30(%ebp),%eax
08282a8e +0x0eb0:  mov    %eax,(%esp)
08282a91 +0x0eb3:  call   082833a2 <+0x17c4>
08282a96 +0x0eb8:  mov    (%eax),%eax
08282a98 +0x0eba:  mov    %eax,(%esp)
08282a9b +0x0ebd:  call   08282796 <+0xbb8>
08282aa0 +0x0ec2:  mov    0xc(%ebp),%edx
08282aa3 +0x0ec5:  mov    %esi,0x8(%esp)
08282aa7 +0x0ec9:  mov    %eax,0x4(%esp)
08282aab +0x0ecd:  mov    %edx,(%esp)
08282aae +0x0ed0:  call   08282362 <+0x784>
08282ab3 +0x0ed5:  test   %al,%al
08282ab5 +0x0ed7:  je     08282b24 <+0xf46>
08282ab7 +0x0ed9:  mov    -0x30(%ebp),%eax
08282aba +0x0edc:  mov    %eax,(%esp)
08282abd +0x0edf:  call   082833bf <+0x17e1>
08282ac2 +0x0ee4:  test   %eax,%eax
08282ac4 +0x0ee6:  sete   %al
08282ac7 +0x0ee9:  test   %al,%al
08282ac9 +0x0eeb:  je     08282af8 <+0xf1a>
08282acb +0x0eed:  mov    -0x30(%ebp),%eax
08282ace +0x0ef0:  mov    0x14(%ebp),%edx
08282ad1 +0x0ef3:  mov    %edx,0x10(%esp)
08282ad5 +0x0ef7:  mov    %eax,0xc(%esp)
08282ad9 +0x0efb:  movl   $0x0,0x8(%esp)
08282ae1 +0x0f03:  mov    0xc(%ebp),%eax
08282ae4 +0x0f06:  mov    %eax,0x4(%esp)
08282ae8 +0x0f0a:  mov    %ebx,(%esp)
08282aeb +0x0f0d:  call   082830fe <+0x1520>
08282af0 +0x0f12:  sub    $0x4,%esp
08282af3 +0x0f15:  jmp    08282cb3 <+0x10d5>
08282af8 +0x0f1a:  mov    0x10(%ebp),%edx
08282afb +0x0f1d:  mov    0x10(%ebp),%eax
08282afe +0x0f20:  mov    0x14(%ebp),%ecx
08282b01 +0x0f23:  mov    %ecx,0x10(%esp)
08282b05 +0x0f27:  mov    %edx,0xc(%esp)
08282b09 +0x0f2b:  mov    %eax,0x8(%esp)
08282b0d +0x0f2f:  mov    0xc(%ebp),%eax
08282b10 +0x0f32:  mov    %eax,0x4(%esp)
08282b14 +0x0f36:  mov    %ebx,(%esp)
08282b17 +0x0f39:  call   082830fe <+0x1520>
08282b1c +0x0f3e:  sub    $0x4,%esp
08282b1f +0x0f41:  jmp    08282cb3 <+0x10d5>
08282b24 +0x0f46:  lea    -0x1c(%ebp),%eax
08282b27 +0x0f49:  mov    0x14(%ebp),%edx
08282b2a +0x0f4c:  mov    %edx,0x8(%esp)
08282b2e +0x0f50:  mov    0xc(%ebp),%edx
08282b31 +0x0f53:  mov    %edx,0x4(%esp)
08282b35 +0x0f57:  mov    %eax,(%esp)
08282b38 +0x0f5a:  call   082831c6 <+0x15e8>
08282b3d +0x0f5f:  sub    $0x4,%esp
08282b40 +0x0f62:  mov    -0x1c(%ebp),%eax
08282b43 +0x0f65:  mov    %eax,(%ebx)
08282b45 +0x0f67:  jmp    08282cb3 <+0x10d5>
08282b4a +0x0f6c:  mov    0x14(%ebp),%eax
08282b4d +0x0f6f:  mov    %eax,0x4(%esp)
08282b51 +0x0f73:  lea    -0x12(%ebp),%eax
08282b54 +0x0f76:  mov    %eax,(%esp)
08282b57 +0x0f79:  call   08282f3a <+0x135c>
08282b5c +0x0f7e:  mov    %eax,%esi
08282b5e +0x0f80:  mov    0x10(%ebp),%eax
08282b61 +0x0f83:  mov    %eax,(%esp)
08282b64 +0x0f86:  call   08282796 <+0xbb8>
08282b69 +0x0f8b:  mov    0xc(%ebp),%edx
08282b6c +0x0f8e:  mov    %esi,0x8(%esp)
08282b70 +0x0f92:  mov    %eax,0x4(%esp)
08282b74 +0x0f96:  mov    %edx,(%esp)
08282b77 +0x0f99:  call   08282362 <+0x784>
08282b7c +0x0f9e:  test   %al,%al
08282b7e +0x0fa0:  je     08282ca4 <+0x10c6>
08282b84 +0x0fa6:  mov    0x10(%ebp),%eax
08282b87 +0x0fa9:  mov    %eax,-0x34(%ebp)
08282b8a +0x0fac:  mov    0x10(%ebp),%esi
08282b8d +0x0faf:  mov    0xc(%ebp),%eax
08282b90 +0x0fb2:  mov    %eax,(%esp)
08282b93 +0x0fb5:  call   082830e6 <+0x1508>
08282b98 +0x0fba:  mov    (%eax),%eax
08282b9a +0x0fbc:  cmp    %eax,%esi
08282b9c +0x0fbe:  sete   %al
08282b9f +0x0fc1:  test   %al,%al
08282ba1 +0x0fc3:  je     08282bda <+0xffc>
08282ba3 +0x0fc5:  mov    0xc(%ebp),%eax
08282ba6 +0x0fc8:  mov    %eax,(%esp)
08282ba9 +0x0fcb:  call   082830e6 <+0x1508>
08282bae +0x0fd0:  mov    (%eax),%eax
08282bb0 +0x0fd2:  mov    0x14(%ebp),%edx
08282bb3 +0x0fd5:  mov    %edx,0x10(%esp)
08282bb7 +0x0fd9:  mov    %eax,0xc(%esp)
08282bbb +0x0fdd:  movl   $0x0,0x8(%esp)
08282bc3 +0x0fe5:  mov    0xc(%ebp),%eax
08282bc6 +0x0fe8:  mov    %eax,0x4(%esp)
08282bca +0x0fec:  mov    %ebx,(%esp)
08282bcd +0x0fef:  call   082830fe <+0x1520>
08282bd2 +0x0ff4:  sub    $0x4,%esp
08282bd5 +0x0ff7:  jmp    08282cb3 <+0x10d5>
08282bda +0x0ffc:  lea    -0x34(%ebp),%eax
08282bdd +0x0fff:  mov    %eax,(%esp)
08282be0 +0x1002:  call   082833ca <+0x17ec>
08282be5 +0x1007:  mov    (%eax),%eax
08282be7 +0x1009:  mov    %eax,(%esp)
08282bea +0x100c:  call   08282796 <+0xbb8>
08282bef +0x1011:  mov    %eax,%esi
08282bf1 +0x1013:  mov    0x14(%ebp),%eax
08282bf4 +0x1016:  mov    %eax,0x4(%esp)
08282bf8 +0x101a:  lea    -0x11(%ebp),%eax
08282bfb +0x101d:  mov    %eax,(%esp)
08282bfe +0x1020:  call   08282f3a <+0x135c>
08282c03 +0x1025:  mov    0xc(%ebp),%edx
08282c06 +0x1028:  mov    %esi,0x8(%esp)
08282c0a +0x102c:  mov    %eax,0x4(%esp)
08282c0e +0x1030:  mov    %edx,(%esp)
08282c11 +0x1033:  call   08282362 <+0x784>
08282c16 +0x1038:  test   %al,%al
08282c18 +0x103a:  je     08282c81 <+0x10a3>
08282c1a +0x103c:  mov    0x10(%ebp),%eax
08282c1d +0x103f:  mov    %eax,(%esp)
08282c20 +0x1042:  call   082833bf <+0x17e1>
08282c25 +0x1047:  test   %eax,%eax
08282c27 +0x1049:  sete   %al
08282c2a +0x104c:  test   %al,%al
08282c2c +0x104e:  je     08282c58 <+0x107a>
08282c2e +0x1050:  mov    0x10(%ebp),%eax
08282c31 +0x1053:  mov    0x14(%ebp),%edx
08282c34 +0x1056:  mov    %edx,0x10(%esp)
08282c38 +0x105a:  mov    %eax,0xc(%esp)
08282c3c +0x105e:  movl   $0x0,0x8(%esp)
08282c44 +0x1066:  mov    0xc(%ebp),%eax
08282c47 +0x1069:  mov    %eax,0x4(%esp)
08282c4b +0x106d:  mov    %ebx,(%esp)
08282c4e +0x1070:  call   082830fe <+0x1520>
08282c53 +0x1075:  sub    $0x4,%esp
08282c56 +0x1078:  jmp    08282cb3 <+0x10d5>
08282c58 +0x107a:  mov    -0x34(%ebp),%edx
08282c5b +0x107d:  mov    -0x34(%ebp),%eax
08282c5e +0x1080:  mov    0x14(%ebp),%ecx
08282c61 +0x1083:  mov    %ecx,0x10(%esp)
08282c65 +0x1087:  mov    %edx,0xc(%esp)
08282c69 +0x108b:  mov    %eax,0x8(%esp)
08282c6d +0x108f:  mov    0xc(%ebp),%eax
08282c70 +0x1092:  mov    %eax,0x4(%esp)
08282c74 +0x1096:  mov    %ebx,(%esp)
08282c77 +0x1099:  call   082830fe <+0x1520>
08282c7c +0x109e:  sub    $0x4,%esp
08282c7f +0x10a1:  jmp    08282cb3 <+0x10d5>
08282c81 +0x10a3:  lea    -0x10(%ebp),%eax
08282c84 +0x10a6:  mov    0x14(%ebp),%edx
08282c87 +0x10a9:  mov    %edx,0x8(%esp)
08282c8b +0x10ad:  mov    0xc(%ebp),%edx
08282c8e +0x10b0:  mov    %edx,0x4(%esp)
08282c92 +0x10b4:  mov    %eax,(%esp)
08282c95 +0x10b7:  call   082831c6 <+0x15e8>
08282c9a +0x10bc:  sub    $0x4,%esp
08282c9d +0x10bf:  mov    -0x10(%ebp),%eax
08282ca0 +0x10c2:  mov    %eax,(%ebx)
08282ca2 +0x10c4:  jmp    08282cb3 <+0x10d5>
08282ca4 +0x10c6:  mov    0x10(%ebp),%eax
08282ca7 +0x10c9:  mov    %eax,0x4(%esp)
08282cab +0x10cd:  mov    %ebx,(%esp)
08282cae +0x10d0:  call   082827b8 <+0xbda>
08282cb3 +0x10d5:  mov    %ebx,%eax
08282cb5 +0x10d7:  lea    -0x8(%ebp),%esp
08282cb8 +0x10da:  add    $0x0,%esp
08282cbb +0x10dd:  pop    %ebx
08282cbc +0x10de:  pop    %esi
08282cbd +0x10df:  pop    %ebp
08282cbe +0x10e0:  ret    $0x4
08282cc1 +0x10e3:  nop
08282cc2 +0x10e4:  push   %ebp
08282cc3 +0x10e5:  mov    %esp,%ebp
08282cc5 +0x10e7:  mov    0x8(%ebp),%eax
08282cc8 +0x10ea:  add    $0x4,%eax
08282ccb +0x10ed:  pop    %ebp
08282ccc +0x10ee:  ret
08282ccd +0x10ef:  nop
08282cce +0x10f0:  push   %ebp
08282ccf +0x10f1:  mov    %esp,%ebp
08282cd1 +0x10f3:  mov    0xc(%ebp),%eax
08282cd4 +0x10f6:  pop    %ebp
08282cd5 +0x10f7:  ret
08282cd6 +0x10f8:  push   %ebp
08282cd7 +0x10f9:  mov    %esp,%ebp
08282cd9 +0x10fb:  sub    $0x28,%esp
08282cdc +0x10fe:  mov    0x8(%ebp),%eax
08282cdf +0x1101:  mov    %eax,(%esp)
08282ce2 +0x1104:  call   082833e7 <+0x1809>
08282ce7 +0x1109:  mov    %eax,0x4(%esp)
08282ceb +0x110d:  lea    -0x9(%ebp),%eax
08282cee +0x1110:  mov    %eax,(%esp)
08282cf1 +0x1113:  call   08282cce <+0x10f0>
08282cf6 +0x1118:  leave
08282cf7 +0x1119:  ret
08282cf8 +0x111a:  push   %ebp
08282cf9 +0x111b:  mov    %esp,%ebp
08282cfb +0x111d:  mov    0x8(%ebp),%eax
08282cfe +0x1120:  mov    0xc(%eax),%eax
08282d01 +0x1123:  pop    %ebp
08282d02 +0x1124:  ret
08282d03 +0x1125:  push   %ebp
08282d04 +0x1126:  mov    %esp,%ebp
08282d06 +0x1128:  mov    0x8(%ebp),%eax
08282d09 +0x112b:  mov    0x8(%eax),%eax
08282d0c +0x112e:  pop    %ebp
08282d0d +0x112f:  ret
08282d0e +0x1130:  push   %ebp
08282d0f +0x1131:  mov    %esp,%ebp
08282d11 +0x1133:  push   %esi
08282d12 +0x1134:  push   %ebx
08282d13 +0x1135:  sub    $0x20,%esp
08282d16 +0x1138:  mov    0x8(%ebp),%esi
08282d19 +0x113b:  cmpl   $0x0,0x10(%ebp)
08282d1d +0x113f:  jne    08282d65 <+0x1187>
08282d1f +0x1141:  mov    0xc(%ebp),%eax
08282d22 +0x1144:  mov    %eax,(%esp)
08282d25 +0x1147:  call   08282cc2 <+0x10e4>
08282d2a +0x114c:  cmp    0x14(%ebp),%eax
08282d2d +0x114f:  je     08282d65 <+0x1187>
08282d2f +0x1151:  mov    0x14(%ebp),%eax
08282d32 +0x1154:  mov    %eax,(%esp)
08282d35 +0x1157:  call   08282e21 <+0x1243>
08282d3a +0x115c:  mov    %eax,%ebx
08282d3c +0x115e:  mov    0x18(%ebp),%eax
08282d3f +0x1161:  mov    %eax,0x4(%esp)
08282d43 +0x1165:  lea    -0xe(%ebp),%eax
08282d46 +0x1168:  mov    %eax,(%esp)
08282d49 +0x116b:  call   08282cce <+0x10f0>
08282d4e +0x1170:  mov    0xc(%ebp),%edx
08282d51 +0x1173:  mov    %ebx,0x8(%esp)
08282d55 +0x1177:  mov    %eax,0x4(%esp)
08282d59 +0x117b:  mov    %edx,(%esp)
08282d5c +0x117e:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08282d61 +0x1183:  test   %al,%al
08282d63 +0x1185:  je     08282d6c <+0x118e>
08282d65 +0x1187:  mov    $0x1,%eax
08282d6a +0x118c:  jmp    08282d71 <+0x1193>
08282d6c +0x118e:  mov    $0x0,%eax
08282d71 +0x1193:  mov    %al,-0xd(%ebp)
08282d74 +0x1196:  mov    0x18(%ebp),%eax
08282d77 +0x1199:  mov    %eax,0x4(%esp)
08282d7b +0x119d:  mov    0xc(%ebp),%eax
08282d7e +0x11a0:  mov    %eax,(%esp)
08282d81 +0x11a3:  call   082833f2 <+0x1814>
08282d86 +0x11a8:  mov    %eax,-0xc(%ebp)
08282d89 +0x11ab:  mov    0xc(%ebp),%eax
08282d8c +0x11ae:  lea    0x4(%eax),%ecx
08282d8f +0x11b1:  mov    -0xc(%ebp),%edx
08282d92 +0x11b4:  movzbl -0xd(%ebp),%eax
08282d96 +0x11b8:  mov    %ecx,0xc(%esp)
08282d9a +0x11bc:  mov    0x14(%ebp),%ecx
08282d9d +0x11bf:  mov    %ecx,0x8(%esp)
08282da1 +0x11c3:  mov    %edx,0x4(%esp)
08282da5 +0x11c7:  mov    %eax,(%esp)
08282da8 +0x11ca:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08282dad +0x11cf:  mov    0xc(%ebp),%eax
08282db0 +0x11d2:  mov    0x14(%eax),%eax
08282db3 +0x11d5:  lea    0x1(%eax),%edx
08282db6 +0x11d8:  mov    0xc(%ebp),%eax
08282db9 +0x11db:  mov    %edx,0x14(%eax)
08282dbc +0x11de:  mov    -0xc(%ebp),%eax
08282dbf +0x11e1:  mov    %eax,0x4(%esp)
08282dc3 +0x11e5:  mov    %esi,(%esp)
08282dc6 +0x11e8:  call   082827c6 <+0xbe8>
08282dcb +0x11ed:  mov    %esi,%eax
08282dcd +0x11ef:  add    $0x20,%esp
08282dd0 +0x11f2:  pop    %ebx
08282dd1 +0x11f3:  pop    %esi
08282dd2 +0x11f4:  pop    %ebp
08282dd3 +0x11f5:  ret    $0x4
08282dd6 +0x11f8:  push   %ebp
08282dd7 +0x11f9:  mov    %esp,%ebp
08282dd9 +0x11fb:  sub    $0x18,%esp
08282ddc +0x11fe:  mov    0xc(%ebp),%eax
08282ddf +0x1201:  mov    %eax,(%esp)
08282de2 +0x1204:  call   08283473 <+0x1895>
08282de7 +0x1209:  mov    0x8(%ebp),%edx
08282dea +0x120c:  mov    (%eax),%eax
08282dec +0x120e:  mov    %eax,(%edx)
08282dee +0x1210:  mov    0x10(%ebp),%eax
08282df1 +0x1213:  mov    %eax,(%esp)
08282df4 +0x1216:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08282df9 +0x121b:  movzbl (%eax),%edx
08282dfc +0x121e:  mov    0x8(%ebp),%eax
08282dff +0x1221:  mov    %dl,0x4(%eax)
08282e02 +0x1224:  leave
08282e03 +0x1225:  ret
08282e04 +0x1226:  push   %ebp
08282e05 +0x1227:  mov    %esp,%ebp
08282e07 +0x1229:  sub    $0x18,%esp
08282e0a +0x122c:  mov    0x8(%ebp),%eax
08282e0d +0x122f:  mov    (%eax),%eax
08282e0f +0x1231:  mov    %eax,(%esp)
08282e12 +0x1234:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08282e17 +0x1239:  mov    0x8(%ebp),%edx
08282e1a +0x123c:  mov    %eax,(%edx)
08282e1c +0x123e:  mov    0x8(%ebp),%eax
08282e1f +0x1241:  leave
08282e20 +0x1242:  ret
08282e21 +0x1243:  push   %ebp
08282e22 +0x1244:  mov    %esp,%ebp
08282e24 +0x1246:  sub    $0x28,%esp
08282e27 +0x1249:  mov    0x8(%ebp),%eax
08282e2a +0x124c:  mov    %eax,(%esp)
08282e2d +0x124f:  call   0828347b <+0x189d>
08282e32 +0x1254:  mov    %eax,0x4(%esp)
08282e36 +0x1258:  lea    -0x9(%ebp),%eax
08282e39 +0x125b:  mov    %eax,(%esp)
08282e3c +0x125e:  call   08282cce <+0x10f0>
08282e41 +0x1263:  leave
08282e42 +0x1264:  ret
08282e43 +0x1265:  nop
08282e44 +0x1266:  push   %ebp
08282e45 +0x1267:  mov    %esp,%ebp
08282e47 +0x1269:  sub    $0x18,%esp
08282e4a +0x126c:  mov    0xc(%ebp),%eax
08282e4d +0x126f:  mov    %eax,(%esp)
08282e50 +0x1272:  call   08283486 <+0x18a8>
08282e55 +0x1277:  mov    0x8(%ebp),%edx
08282e58 +0x127a:  mov    (%eax),%eax
08282e5a +0x127c:  mov    %eax,(%edx)
08282e5c +0x127e:  mov    0x10(%ebp),%eax
08282e5f +0x1281:  mov    %eax,(%esp)
08282e62 +0x1284:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08282e67 +0x1289:  movzbl (%eax),%edx
08282e6a +0x128c:  mov    0x8(%ebp),%eax
08282e6d +0x128f:  mov    %dl,0x4(%eax)
08282e70 +0x1292:  leave
08282e71 +0x1293:  ret
08282e72 +0x1294:  push   %ebp
08282e73 +0x1295:  mov    %esp,%ebp
08282e75 +0x1297:  sub    $0x18,%esp
08282e78 +0x129a:  mov    0x8(%ebp),%eax
08282e7b +0x129d:  mov    %eax,(%esp)
08282e7e +0x12a0:  call   0828348e <+0x18b0>
08282e83 +0x12a5:  leave
08282e84 +0x12a6:  ret
08282e85 +0x12a7:  nop
08282e86 +0x12a8:  push   %ebp
08282e87 +0x12a9:  mov    %esp,%ebp
08282e89 +0x12ab:  mov    0x8(%ebp),%eax
08282e8c +0x12ae:  movl   $0x0,0x4(%eax)
08282e93 +0x12b5:  mov    0x8(%ebp),%eax
08282e96 +0x12b8:  movl   $0x0,0x8(%eax)
08282e9d +0x12bf:  mov    0x8(%ebp),%eax
08282ea0 +0x12c2:  lea    0x4(%eax),%edx
08282ea3 +0x12c5:  mov    0x8(%ebp),%eax
08282ea6 +0x12c8:  mov    %edx,0xc(%eax)
08282ea9 +0x12cb:  mov    0x8(%ebp),%eax
08282eac +0x12ce:  lea    0x4(%eax),%edx
08282eaf +0x12d1:  mov    0x8(%ebp),%eax
08282eb2 +0x12d4:  mov    %edx,0x10(%eax)
08282eb5 +0x12d7:  pop    %ebp
08282eb6 +0x12d8:  ret
08282eb7 +0x12d9:  nop
08282eb8 +0x12da:  push   %ebp
08282eb9 +0x12db:  mov    %esp,%ebp
08282ebb +0x12dd:  mov    0x8(%ebp),%eax
08282ebe +0x12e0:  pop    %ebp
08282ebf +0x12e1:  ret
08282ec0 +0x12e2:  push   %ebp
08282ec1 +0x12e3:  mov    %esp,%ebp
08282ec3 +0x12e5:  sub    $0x18,%esp
08282ec6 +0x12e8:  mov    0x8(%ebp),%eax
08282ec9 +0x12eb:  add    $0x10,%eax
08282ecc +0x12ee:  mov    %eax,(%esp)
08282ecf +0x12f1:  call   08281e98 <+0x2ba>
08282ed4 +0x12f6:  leave
08282ed5 +0x12f7:  ret
08282ed6 +0x12f8:  push   %ebp
08282ed7 +0x12f9:  mov    %esp,%ebp
08282ed9 +0x12fb:  sub    $0x18,%esp
08282edc +0x12fe:  mov    0xc(%ebp),%eax
08282edf +0x1301:  mov    %eax,(%esp)
08282ee2 +0x1304:  call   08282ec0 <+0x12e2>
08282ee7 +0x1309:  leave
08282ee8 +0x130a:  ret
08282ee9 +0x130b:  nop
08282eea +0x130c:  push   %ebp
08282eeb +0x130d:  mov    %esp,%ebp
08282eed +0x130f:  sub    $0x18,%esp
08282ef0 +0x1312:  mov    0x8(%ebp),%eax
08282ef3 +0x1315:  movl   $0x1,0x8(%esp)
08282efb +0x131d:  mov    0xc(%ebp),%edx
08282efe +0x1320:  mov    %edx,0x4(%esp)
08282f02 +0x1324:  mov    %eax,(%esp)
08282f05 +0x1327:  call   08283494 <+0x18b6>
08282f0a +0x132c:  leave
08282f0b +0x132d:  ret
08282f0c +0x132e:  push   %ebp
08282f0d +0x132f:  mov    %esp,%ebp
08282f0f +0x1331:  sub    $0x28,%esp
08282f12 +0x1334:  mov    0x8(%ebp),%eax
08282f15 +0x1337:  mov    %eax,(%esp)
08282f18 +0x133a:  call   082834a7 <+0x18c9>
08282f1d +0x133f:  mov    %eax,0x4(%esp)
08282f21 +0x1343:  lea    -0x9(%ebp),%eax
08282f24 +0x1346:  mov    %eax,(%esp)
08282f27 +0x1349:  call   08282f3a <+0x135c>
08282f2c +0x134e:  leave
08282f2d +0x134f:  ret
08282f2e +0x1350:  push   %ebp
08282f2f +0x1351:  mov    %esp,%ebp
08282f31 +0x1353:  mov    0x8(%ebp),%eax
08282f34 +0x1356:  add    $0x10,%eax
08282f37 +0x1359:  pop    %ebp
08282f38 +0x135a:  ret
08282f39 +0x135b:  nop
08282f3a +0x135c:  push   %ebp
08282f3b +0x135d:  mov    %esp,%ebp
08282f3d +0x135f:  mov    0xc(%ebp),%eax
08282f40 +0x1362:  pop    %ebp
08282f41 +0x1363:  ret
08282f42 +0x1364:  push   %ebp
08282f43 +0x1365:  mov    %esp,%ebp
08282f45 +0x1367:  sub    $0x18,%esp
08282f48 +0x136a:  mov    0x8(%ebp),%eax
08282f4b +0x136d:  mov    %eax,(%esp)
08282f4e +0x1370:  call   082834b2 <+0x18d4>
08282f53 +0x1375:  mov    0x8(%ebp),%eax
08282f56 +0x1378:  movl   $0x0,0x4(%eax)
08282f5d +0x137f:  mov    0x8(%ebp),%eax
08282f60 +0x1382:  movl   $0x0,0x8(%eax)
08282f67 +0x1389:  mov    0x8(%ebp),%eax
08282f6a +0x138c:  movl   $0x0,0xc(%eax)
08282f71 +0x1393:  mov    0x8(%ebp),%eax
08282f74 +0x1396:  movl   $0x0,0x10(%eax)
08282f7b +0x139d:  mov    0x8(%ebp),%eax
08282f7e +0x13a0:  movl   $0x0,0x14(%eax)
08282f85 +0x13a7:  mov    0x8(%ebp),%eax
08282f88 +0x13aa:  mov    %eax,(%esp)
08282f8b +0x13ad:  call   082834c6 <+0x18e8>
08282f90 +0x13b2:  leave
08282f91 +0x13b3:  ret
08282f92 +0x13b4:  push   %ebp
08282f93 +0x13b5:  mov    %esp,%ebp
08282f95 +0x13b7:  pop    %ebp
08282f96 +0x13b8:  ret
08282f97 +0x13b9:  nop
08282f98 +0x13ba:  push   %ebp
08282f99 +0x13bb:  mov    %esp,%ebp
08282f9b +0x13bd:  sub    $0x18,%esp
08282f9e +0x13c0:  mov    0x8(%ebp),%eax
08282fa1 +0x13c3:  mov    %eax,(%esp)
08282fa4 +0x13c6:  call   082834f8 <+0x191a>
08282fa9 +0x13cb:  mov    0xc(%ebp),%edx
08282fac +0x13ce:  mov    %edx,0x4(%esp)
08282fb0 +0x13d2:  mov    %eax,(%esp)
08282fb3 +0x13d5:  call   08283506 <+0x1928>
08282fb8 +0x13da:  mov    0xc(%ebp),%eax
08282fbb +0x13dd:  mov    %eax,0x4(%esp)
08282fbf +0x13e1:  mov    0x8(%ebp),%eax
08282fc2 +0x13e4:  mov    %eax,(%esp)
08282fc5 +0x13e7:  call   0828351a <+0x193c>
08282fca +0x13ec:  leave
08282fcb +0x13ed:  ret
08282fcc +0x13ee:  push   %ebp
08282fcd +0x13ef:  mov    %esp,%ebp
08282fcf +0x13f1:  mov    0x8(%ebp),%eax
08282fd2 +0x13f4:  pop    %ebp
08282fd3 +0x13f5:  ret
08282fd4 +0x13f6:  push   %ebp
08282fd5 +0x13f7:  mov    %esp,%ebp
08282fd7 +0x13f9:  push   %ebx
08282fd8 +0x13fa:  sub    $0x14,%esp
08282fdb +0x13fd:  mov    0xc(%ebp),%eax
08282fde +0x1400:  mov    %eax,(%esp)
08282fe1 +0x1403:  call   082834f8 <+0x191a>
08282fe6 +0x1408:  mov    0xc(%ebp),%ecx
08282fe9 +0x140b:  mov    0x8(%ebp),%edx
08282fec +0x140e:  mov    %eax,0x8(%esp)
08282ff0 +0x1412:  mov    %ecx,0x4(%esp)
08282ff4 +0x1416:  mov    %edx,(%esp)
08282ff7 +0x1419:  call   0828353c <+0x195e>
08282ffc +0x141e:  mov    0xc(%ebp),%eax
08282fff +0x1421:  mov    %eax,(%esp)
08283002 +0x1424:  call   08283594 <+0x19b6>
08283007 +0x1429:  mov    (%eax),%eax
08283009 +0x142b:  test   %eax,%eax
0828300b +0x142d:  setne  %al
0828300e +0x1430:  test   %al,%al
08283010 +0x1432:  je     082830e0 <+0x1502>
08283016 +0x1438:  mov    0x8(%ebp),%eax
08283019 +0x143b:  mov    %eax,(%esp)
0828301c +0x143e:  call   08283594 <+0x19b6>
08283021 +0x1443:  mov    %eax,%ebx
08283023 +0x1445:  mov    0xc(%ebp),%eax
08283026 +0x1448:  mov    %eax,(%esp)
08283029 +0x144b:  call   08283594 <+0x19b6>
0828302e +0x1450:  mov    (%eax),%eax
08283030 +0x1452:  mov    %eax,(%ebx)
08283032 +0x1454:  mov    0x8(%ebp),%eax
08283035 +0x1457:  mov    %eax,(%esp)
08283038 +0x145a:  call   082835a0 <+0x19c2>
0828303d +0x145f:  mov    %eax,%ebx
0828303f +0x1461:  mov    0xc(%ebp),%eax
08283042 +0x1464:  mov    %eax,(%esp)
08283045 +0x1467:  call   082835a0 <+0x19c2>
0828304a +0x146c:  mov    (%eax),%eax
0828304c +0x146e:  mov    %eax,(%ebx)
0828304e +0x1470:  mov    0x8(%ebp),%eax
08283051 +0x1473:  mov    %eax,(%esp)
08283054 +0x1476:  call   082835ac <+0x19ce>
08283059 +0x147b:  mov    %eax,%ebx
0828305b +0x147d:  mov    0xc(%ebp),%eax
0828305e +0x1480:  mov    %eax,(%esp)
08283061 +0x1483:  call   082835ac <+0x19ce>
08283066 +0x1488:  mov    (%eax),%eax
08283068 +0x148a:  mov    %eax,(%ebx)
0828306a +0x148c:  mov    0x8(%ebp),%eax
0828306d +0x148f:  mov    %eax,(%esp)
08283070 +0x1492:  call   08283594 <+0x19b6>
08283075 +0x1497:  mov    (%eax),%ebx
08283077 +0x1499:  mov    0x8(%ebp),%eax
0828307a +0x149c:  mov    %eax,(%esp)
0828307d +0x149f:  call   08282cc2 <+0x10e4>
08283082 +0x14a4:  mov    %eax,0x4(%ebx)
08283085 +0x14a7:  mov    0xc(%ebp),%eax
08283088 +0x14aa:  mov    %eax,(%esp)
0828308b +0x14ad:  call   08283594 <+0x19b6>
08283090 +0x14b2:  movl   $0x0,(%eax)
08283096 +0x14b8:  mov    0xc(%ebp),%eax
08283099 +0x14bb:  mov    %eax,(%esp)
0828309c +0x14be:  call   082835a0 <+0x19c2>
082830a1 +0x14c3:  mov    %eax,%ebx
082830a3 +0x14c5:  mov    0xc(%ebp),%eax
082830a6 +0x14c8:  mov    %eax,(%esp)
082830a9 +0x14cb:  call   08282cc2 <+0x10e4>
082830ae +0x14d0:  mov    %eax,(%ebx)
082830b0 +0x14d2:  mov    0xc(%ebp),%eax
082830b3 +0x14d5:  mov    %eax,(%esp)
082830b6 +0x14d8:  call   082835ac <+0x19ce>
082830bb +0x14dd:  mov    %eax,%ebx
082830bd +0x14df:  mov    0xc(%ebp),%eax
082830c0 +0x14e2:  mov    %eax,(%esp)
082830c3 +0x14e5:  call   08282cc2 <+0x10e4>
082830c8 +0x14ea:  mov    %eax,(%ebx)
082830ca +0x14ec:  mov    0xc(%ebp),%eax
082830cd +0x14ef:  mov    0x14(%eax),%edx
082830d0 +0x14f2:  mov    0x8(%ebp),%eax
082830d3 +0x14f5:  mov    %edx,0x14(%eax)
082830d6 +0x14f8:  mov    0xc(%ebp),%eax
082830d9 +0x14fb:  movl   $0x0,0x14(%eax)
082830e0 +0x1502:  add    $0x14,%esp
082830e3 +0x1505:  pop    %ebx
082830e4 +0x1506:  pop    %ebp
082830e5 +0x1507:  ret
082830e6 +0x1508:  push   %ebp
082830e7 +0x1509:  mov    %esp,%ebp
082830e9 +0x150b:  mov    0x8(%ebp),%eax
082830ec +0x150e:  add    $0x10,%eax
082830ef +0x1511:  pop    %ebp
082830f0 +0x1512:  ret
082830f1 +0x1513:  nop
082830f2 +0x1514:  push   %ebp
082830f3 +0x1515:  mov    %esp,%ebp
082830f5 +0x1517:  mov    0x8(%ebp),%eax
082830f8 +0x151a:  mov    0x14(%eax),%eax
082830fb +0x151d:  pop    %ebp
082830fc +0x151e:  ret
082830fd +0x151f:  nop
082830fe +0x1520:  push   %ebp
082830ff +0x1521:  mov    %esp,%ebp
08283101 +0x1523:  push   %esi
08283102 +0x1524:  push   %ebx
08283103 +0x1525:  sub    $0x20,%esp
08283106 +0x1528:  mov    0x8(%ebp),%esi
08283109 +0x152b:  cmpl   $0x0,0x10(%ebp)
0828310d +0x152f:  jne    08283155 <+0x1577>
0828310f +0x1531:  mov    0xc(%ebp),%eax
08283112 +0x1534:  mov    %eax,(%esp)
08283115 +0x1537:  call   0828270e <+0xb30>
0828311a +0x153c:  cmp    0x14(%ebp),%eax
0828311d +0x153f:  je     08283155 <+0x1577>
0828311f +0x1541:  mov    0x14(%ebp),%eax
08283122 +0x1544:  mov    %eax,(%esp)
08283125 +0x1547:  call   08282796 <+0xbb8>
0828312a +0x154c:  mov    %eax,%ebx
0828312c +0x154e:  mov    0x18(%ebp),%eax
0828312f +0x1551:  mov    %eax,0x4(%esp)
08283133 +0x1555:  lea    -0xe(%ebp),%eax
08283136 +0x1558:  mov    %eax,(%esp)
08283139 +0x155b:  call   08282f3a <+0x135c>
0828313e +0x1560:  mov    0xc(%ebp),%edx
08283141 +0x1563:  mov    %ebx,0x8(%esp)
08283145 +0x1567:  mov    %eax,0x4(%esp)
08283149 +0x156b:  mov    %edx,(%esp)
0828314c +0x156e:  call   08282362 <+0x784>
08283151 +0x1573:  test   %al,%al
08283153 +0x1575:  je     0828315c <+0x157e>
08283155 +0x1577:  mov    $0x1,%eax
0828315a +0x157c:  jmp    08283161 <+0x1583>
0828315c +0x157e:  mov    $0x0,%eax
08283161 +0x1583:  mov    %al,-0xd(%ebp)
08283164 +0x1586:  mov    0x18(%ebp),%eax
08283167 +0x1589:  mov    %eax,0x4(%esp)
0828316b +0x158d:  mov    0xc(%ebp),%eax
0828316e +0x1590:  mov    %eax,(%esp)
08283171 +0x1593:  call   082835b8 <+0x19da>
08283176 +0x1598:  mov    %eax,-0xc(%ebp)
08283179 +0x159b:  mov    0xc(%ebp),%eax
0828317c +0x159e:  lea    0x4(%eax),%ecx
0828317f +0x15a1:  mov    -0xc(%ebp),%edx
08283182 +0x15a4:  movzbl -0xd(%ebp),%eax
08283186 +0x15a8:  mov    %ecx,0xc(%esp)
0828318a +0x15ac:  mov    0x14(%ebp),%ecx
0828318d +0x15af:  mov    %ecx,0x8(%esp)
08283191 +0x15b3:  mov    %edx,0x4(%esp)
08283195 +0x15b7:  mov    %eax,(%esp)
08283198 +0x15ba:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0828319d +0x15bf:  mov    0xc(%ebp),%eax
082831a0 +0x15c2:  mov    0x14(%eax),%eax
082831a3 +0x15c5:  lea    0x1(%eax),%edx
082831a6 +0x15c8:  mov    0xc(%ebp),%eax
082831a9 +0x15cb:  mov    %edx,0x14(%eax)
082831ac +0x15ce:  mov    -0xc(%ebp),%eax
082831af +0x15d1:  mov    %eax,0x4(%esp)
082831b3 +0x15d5:  mov    %esi,(%esp)
082831b6 +0x15d8:  call   082827b8 <+0xbda>
082831bb +0x15dd:  mov    %esi,%eax
082831bd +0x15df:  add    $0x20,%esp
082831c0 +0x15e2:  pop    %ebx
082831c1 +0x15e3:  pop    %esi
082831c2 +0x15e4:  pop    %ebp
082831c3 +0x15e5:  ret    $0x4
082831c6 +0x15e8:  push   %ebp
082831c7 +0x15e9:  mov    %esp,%ebp
082831c9 +0x15eb:  push   %esi
082831ca +0x15ec:  push   %ebx
082831cb +0x15ed:  sub    $0x50,%esp
082831ce +0x15f0:  mov    0x8(%ebp),%ebx
082831d1 +0x15f3:  mov    0xc(%ebp),%eax
082831d4 +0x15f6:  mov    %eax,(%esp)
082831d7 +0x15f9:  call   0828215c <+0x57e>
082831dc +0x15fe:  mov    %eax,-0x14(%ebp)
082831df +0x1601:  mov    0xc(%ebp),%eax
082831e2 +0x1604:  mov    %eax,(%esp)
082831e5 +0x1607:  call   0828270e <+0xb30>
082831ea +0x160c:  mov    %eax,-0x10(%ebp)
082831ed +0x160f:  movb   $0x1,-0x9(%ebp)
082831f1 +0x1613:  jmp    0828324f <+0x1671>
082831f3 +0x1615:  mov    -0x14(%ebp),%eax
082831f6 +0x1618:  mov    %eax,-0x10(%ebp)
082831f9 +0x161b:  mov    -0x14(%ebp),%eax
082831fc +0x161e:  mov    %eax,(%esp)
082831ff +0x1621:  call   08282f0c <+0x132e>
08283204 +0x1626:  mov    %eax,%esi
08283206 +0x1628:  mov    0x10(%ebp),%eax
08283209 +0x162b:  mov    %eax,0x4(%esp)
0828320d +0x162f:  lea    -0x2d(%ebp),%eax
08283210 +0x1632:  mov    %eax,(%esp)
08283213 +0x1635:  call   08282f3a <+0x135c>
08283218 +0x163a:  mov    0xc(%ebp),%edx
0828321b +0x163d:  mov    %esi,0x8(%esp)
0828321f +0x1641:  mov    %eax,0x4(%esp)
08283223 +0x1645:  mov    %edx,(%esp)
08283226 +0x1648:  call   08282362 <+0x784>
0828322b +0x164d:  mov    %al,-0x9(%ebp)
0828322e +0x1650:  cmpb   $0x0,-0x9(%ebp)
08283232 +0x1654:  je     08283241 <+0x1663>
08283234 +0x1656:  mov    -0x14(%ebp),%eax
08283237 +0x1659:  mov    %eax,(%esp)
0828323a +0x165c:  call   082826ce <+0xaf0>
0828323f +0x1661:  jmp    0828324c <+0x166e>
08283241 +0x1663:  mov    -0x14(%ebp),%eax
08283244 +0x1666:  mov    %eax,(%esp)
08283247 +0x1669:  call   082826c3 <+0xae5>
0828324c +0x166e:  mov    %eax,-0x14(%ebp)
0828324f +0x1671:  cmpl   $0x0,-0x14(%ebp)
08283253 +0x1675:  setne  %al
08283256 +0x1678:  test   %al,%al
08283258 +0x167a:  jne    082831f3 <+0x1615>
0828325a +0x167c:  mov    -0x10(%ebp),%eax
0828325d +0x167f:  mov    %eax,0x4(%esp)
08283261 +0x1683:  lea    -0x34(%ebp),%eax
08283264 +0x1686:  mov    %eax,(%esp)
08283267 +0x1689:  call   082827b8 <+0xbda>
0828326c +0x168e:  cmpb   $0x0,-0x9(%ebp)
08283270 +0x1692:  je     082832f1 <+0x1713>
08283272 +0x1694:  lea    -0x2c(%ebp),%eax
08283275 +0x1697:  mov    0xc(%ebp),%edx
08283278 +0x169a:  mov    %edx,0x4(%esp)
0828327c +0x169e:  mov    %eax,(%esp)
0828327f +0x16a1:  call   08282648 <+0xa6a>
08283284 +0x16a6:  sub    $0x4,%esp
08283287 +0x16a9:  lea    -0x2c(%ebp),%eax
0828328a +0x16ac:  mov    %eax,0x4(%esp)
0828328e +0x16b0:  lea    -0x34(%ebp),%eax
08283291 +0x16b3:  mov    %eax,(%esp)
08283294 +0x16b6:  call   08281da0 <+0x1c2>
08283299 +0x16bb:  test   %al,%al
0828329b +0x16bd:  je     082832e6 <+0x1708>
0828329d +0x16bf:  movb   $0x1,-0x25(%ebp)
082832a1 +0x16c3:  mov    -0x10(%ebp),%ecx
082832a4 +0x16c6:  mov    -0x14(%ebp),%edx
082832a7 +0x16c9:  lea    -0x24(%ebp),%eax
082832aa +0x16cc:  mov    0x10(%ebp),%esi
082832ad +0x16cf:  mov    %esi,0x10(%esp)
082832b1 +0x16d3:  mov    %ecx,0xc(%esp)
082832b5 +0x16d7:  mov    %edx,0x8(%esp)
082832b9 +0x16db:  mov    0xc(%ebp),%edx
082832bc +0x16de:  mov    %edx,0x4(%esp)
082832c0 +0x16e2:  mov    %eax,(%esp)
082832c3 +0x16e5:  call   082830fe <+0x1520>
082832c8 +0x16ea:  sub    $0x4,%esp
082832cb +0x16ed:  lea    -0x25(%ebp),%eax
082832ce +0x16f0:  mov    %eax,0x8(%esp)
082832d2 +0x16f4:  lea    -0x24(%ebp),%eax
082832d5 +0x16f7:  mov    %eax,0x4(%esp)
082832d9 +0x16fb:  mov    %ebx,(%esp)
082832dc +0x16fe:  call   0828363a <+0x1a5c>
082832e1 +0x1703:  jmp    08283387 <+0x17a9>
082832e6 +0x1708:  lea    -0x34(%ebp),%eax
082832e9 +0x170b:  mov    %eax,(%esp)
082832ec +0x170e:  call   08283668 <+0x1a8a>
082832f1 +0x1713:  mov    0x10(%ebp),%eax
082832f4 +0x1716:  mov    %eax,0x4(%esp)
082832f8 +0x171a:  lea    -0x1e(%ebp),%eax
082832fb +0x171d:  mov    %eax,(%esp)
082832fe +0x1720:  call   08282f3a <+0x135c>
08283303 +0x1725:  mov    %eax,%esi
08283305 +0x1727:  mov    -0x34(%ebp),%eax
08283308 +0x172a:  mov    %eax,(%esp)
0828330b +0x172d:  call   08282796 <+0xbb8>
08283310 +0x1732:  mov    0xc(%ebp),%edx
08283313 +0x1735:  mov    %esi,0x8(%esp)
08283317 +0x1739:  mov    %eax,0x4(%esp)
0828331b +0x173d:  mov    %edx,(%esp)
0828331e +0x1740:  call   08282362 <+0x784>
08283323 +0x1745:  test   %al,%al
08283325 +0x1747:  je     0828336d <+0x178f>
08283327 +0x1749:  movb   $0x1,-0x1d(%ebp)
0828332b +0x174d:  mov    -0x10(%ebp),%ecx
0828332e +0x1750:  mov    -0x14(%ebp),%edx
08283331 +0x1753:  lea    -0x1c(%ebp),%eax
08283334 +0x1756:  mov    0x10(%ebp),%esi
08283337 +0x1759:  mov    %esi,0x10(%esp)
0828333b +0x175d:  mov    %ecx,0xc(%esp)
0828333f +0x1761:  mov    %edx,0x8(%esp)
08283343 +0x1765:  mov    0xc(%ebp),%edx
08283346 +0x1768:  mov    %edx,0x4(%esp)
0828334a +0x176c:  mov    %eax,(%esp)
0828334d +0x176f:  call   082830fe <+0x1520>
08283352 +0x1774:  sub    $0x4,%esp
08283355 +0x1777:  lea    -0x1d(%ebp),%eax
08283358 +0x177a:  mov    %eax,0x8(%esp)
0828335c +0x177e:  lea    -0x1c(%ebp),%eax
0828335f +0x1781:  mov    %eax,0x4(%esp)
08283363 +0x1785:  mov    %ebx,(%esp)
08283366 +0x1788:  call   0828363a <+0x1a5c>
0828336b +0x178d:  jmp    08283387 <+0x17a9>
0828336d +0x178f:  movb   $0x0,-0x15(%ebp)
08283371 +0x1793:  lea    -0x15(%ebp),%eax
08283374 +0x1796:  mov    %eax,0x8(%esp)
08283378 +0x179a:  lea    -0x34(%ebp),%eax
0828337b +0x179d:  mov    %eax,0x4(%esp)
0828337f +0x17a1:  mov    %ebx,(%esp)
08283382 +0x17a4:  call   08283686 <+0x1aa8>
08283387 +0x17a9:  mov    %ebx,%eax
08283389 +0x17ab:  lea    -0x8(%ebp),%esp
0828338c +0x17ae:  add    $0x0,%esp
0828338f +0x17b1:  pop    %ebx
08283390 +0x17b2:  pop    %esi
08283391 +0x17b3:  pop    %ebp
08283392 +0x17b4:  ret    $0x4
08283395 +0x17b7:  nop
08283396 +0x17b8:  push   %ebp
08283397 +0x17b9:  mov    %esp,%ebp
08283399 +0x17bb:  mov    0x8(%ebp),%eax
0828339c +0x17be:  add    $0xc,%eax
0828339f +0x17c1:  pop    %ebp
082833a0 +0x17c2:  ret
082833a1 +0x17c3:  nop
082833a2 +0x17c4:  push   %ebp
082833a3 +0x17c5:  mov    %esp,%ebp
082833a5 +0x17c7:  sub    $0x18,%esp
082833a8 +0x17ca:  mov    0x8(%ebp),%eax
082833ab +0x17cd:  mov    (%eax),%eax
082833ad +0x17cf:  mov    %eax,(%esp)
082833b0 +0x17d2:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
082833b5 +0x17d7:  mov    0x8(%ebp),%edx
082833b8 +0x17da:  mov    %eax,(%edx)
082833ba +0x17dc:  mov    0x8(%ebp),%eax
082833bd +0x17df:  leave
082833be +0x17e0:  ret
082833bf +0x17e1:  push   %ebp
082833c0 +0x17e2:  mov    %esp,%ebp
082833c2 +0x17e4:  mov    0x8(%ebp),%eax
082833c5 +0x17e7:  mov    0xc(%eax),%eax
082833c8 +0x17ea:  pop    %ebp
082833c9 +0x17eb:  ret
082833ca +0x17ec:  push   %ebp
082833cb +0x17ed:  mov    %esp,%ebp
082833cd +0x17ef:  sub    $0x18,%esp
082833d0 +0x17f2:  mov    0x8(%ebp),%eax
082833d3 +0x17f5:  mov    (%eax),%eax
082833d5 +0x17f7:  mov    %eax,(%esp)
082833d8 +0x17fa:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
082833dd +0x17ff:  mov    0x8(%ebp),%edx
082833e0 +0x1802:  mov    %eax,(%edx)
082833e2 +0x1804:  mov    0x8(%ebp),%eax
082833e5 +0x1807:  leave
082833e6 +0x1808:  ret
082833e7 +0x1809:  push   %ebp
082833e8 +0x180a:  mov    %esp,%ebp
082833ea +0x180c:  mov    0x8(%ebp),%eax
082833ed +0x180f:  add    $0x10,%eax
082833f0 +0x1812:  pop    %ebp
082833f1 +0x1813:  ret
082833f2 +0x1814:  push   %ebp
082833f3 +0x1815:  mov    %esp,%ebp
082833f5 +0x1817:  push   %esi
082833f6 +0x1818:  push   %ebx
082833f7 +0x1819:  sub    $0x20,%esp
082833fa +0x181c:  mov    0x8(%ebp),%eax
082833fd +0x181f:  mov    %eax,(%esp)
08283400 +0x1822:  call   082836b4 <+0x1ad6>
08283405 +0x1827:  mov    %eax,-0xc(%ebp)
08283408 +0x182a:  mov    0xc(%ebp),%eax
0828340b +0x182d:  mov    %eax,(%esp)
0828340e +0x1830:  call   082836d7 <+0x1af9>
08283413 +0x1835:  mov    %eax,%ebx
08283415 +0x1837:  mov    0x8(%ebp),%eax
08283418 +0x183a:  mov    %eax,(%esp)
0828341b +0x183d:  call   082834f8 <+0x191a>
08283420 +0x1842:  mov    %ebx,0x8(%esp)
08283424 +0x1846:  mov    -0xc(%ebp),%edx
08283427 +0x1849:  mov    %edx,0x4(%esp)
0828342b +0x184d:  mov    %eax,(%esp)
0828342e +0x1850:  call   082836e0 <+0x1b02>
08283433 +0x1855:  jmp    08283469 <+0x188b>
08283435 +0x1857:  mov    %eax,(%esp)
08283438 +0x185a:  call   08725ce0 <__cxa_begin_catch>
0828343d +0x185f:  mov    -0xc(%ebp),%eax
08283440 +0x1862:  mov    %eax,0x4(%esp)
08283444 +0x1866:  mov    0x8(%ebp),%eax
08283447 +0x1869:  mov    %eax,(%esp)
0828344a +0x186c:  call   0828351a <+0x193c>
0828344f +0x1871:  call   08724be0 <__cxa_rethrow>
08283454 +0x1876:  mov    %edx,%ebx
08283456 +0x1878:  mov    %eax,%esi
08283458 +0x187a:  call   08725c30 <__cxa_end_catch>
0828345d +0x187f:  mov    %esi,%eax
0828345f +0x1881:  mov    %ebx,%edx
08283461 +0x1883:  mov    %eax,(%esp)
08283464 +0x1886:  call   08ae3750 <_Unwind_Resume>
08283469 +0x188b:  mov    -0xc(%ebp),%eax
0828346c +0x188e:  add    $0x20,%esp
0828346f +0x1891:  pop    %ebx
08283470 +0x1892:  pop    %esi
08283471 +0x1893:  pop    %ebp
08283472 +0x1894:  ret
08283473 +0x1895:  push   %ebp
08283474 +0x1896:  mov    %esp,%ebp
08283476 +0x1898:  mov    0x8(%ebp),%eax
08283479 +0x189b:  pop    %ebp
0828347a +0x189c:  ret
0828347b +0x189d:  push   %ebp
0828347c +0x189e:  mov    %esp,%ebp
0828347e +0x18a0:  mov    0x8(%ebp),%eax
08283481 +0x18a3:  add    $0x10,%eax
08283484 +0x18a6:  pop    %ebp
08283485 +0x18a7:  ret
08283486 +0x18a8:  push   %ebp
08283487 +0x18a9:  mov    %esp,%ebp
08283489 +0x18ab:  mov    0x8(%ebp),%eax
0828348c +0x18ae:  pop    %ebp
0828348d +0x18af:  ret
0828348e +0x18b0:  push   %ebp
0828348f +0x18b1:  mov    %esp,%ebp
08283491 +0x18b3:  pop    %ebp
08283492 +0x18b4:  ret
08283493 +0x18b5:  nop
08283494 +0x18b6:  push   %ebp
08283495 +0x18b7:  mov    %esp,%ebp
08283497 +0x18b9:  sub    $0x18,%esp
0828349a +0x18bc:  mov    0xc(%ebp),%eax
0828349d +0x18bf:  mov    %eax,(%esp)
082834a0 +0x18c2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082834a5 +0x18c7:  leave
082834a6 +0x18c8:  ret
082834a7 +0x18c9:  push   %ebp
082834a8 +0x18ca:  mov    %esp,%ebp
082834aa +0x18cc:  mov    0x8(%ebp),%eax
082834ad +0x18cf:  add    $0x10,%eax
082834b0 +0x18d2:  pop    %ebp
082834b1 +0x18d3:  ret
082834b2 +0x18d4:  push   %ebp
082834b3 +0x18d5:  mov    %esp,%ebp
082834b5 +0x18d7:  sub    $0x18,%esp
082834b8 +0x18da:  mov    0x8(%ebp),%eax
082834bb +0x18dd:  mov    %eax,(%esp)
082834be +0x18e0:  call   08283720 <+0x1b42>
082834c3 +0x18e5:  leave
082834c4 +0x18e6:  ret
082834c5 +0x18e7:  nop
082834c6 +0x18e8:  push   %ebp
082834c7 +0x18e9:  mov    %esp,%ebp
082834c9 +0x18eb:  mov    0x8(%ebp),%eax
082834cc +0x18ee:  movl   $0x0,0x4(%eax)
082834d3 +0x18f5:  mov    0x8(%ebp),%eax
082834d6 +0x18f8:  movl   $0x0,0x8(%eax)
082834dd +0x18ff:  mov    0x8(%ebp),%eax
082834e0 +0x1902:  lea    0x4(%eax),%edx
082834e3 +0x1905:  mov    0x8(%ebp),%eax
082834e6 +0x1908:  mov    %edx,0xc(%eax)
082834e9 +0x190b:  mov    0x8(%ebp),%eax
082834ec +0x190e:  lea    0x4(%eax),%edx
082834ef +0x1911:  mov    0x8(%ebp),%eax
082834f2 +0x1914:  mov    %edx,0x10(%eax)
082834f5 +0x1917:  pop    %ebp
082834f6 +0x1918:  ret
082834f7 +0x1919:  nop
082834f8 +0x191a:  push   %ebp
082834f9 +0x191b:  mov    %esp,%ebp
082834fb +0x191d:  mov    0x8(%ebp),%eax
082834fe +0x1920:  pop    %ebp
082834ff +0x1921:  ret
08283500 +0x1922:  push   %ebp
08283501 +0x1923:  mov    %esp,%ebp
08283503 +0x1925:  pop    %ebp
08283504 +0x1926:  ret
08283505 +0x1927:  nop
08283506 +0x1928:  push   %ebp
08283507 +0x1929:  mov    %esp,%ebp
08283509 +0x192b:  sub    $0x18,%esp
0828350c +0x192e:  mov    0xc(%ebp),%eax
0828350f +0x1931:  mov    %eax,(%esp)
08283512 +0x1934:  call   08283500 <+0x1922>
08283517 +0x1939:  leave
08283518 +0x193a:  ret
08283519 +0x193b:  nop
0828351a +0x193c:  push   %ebp
0828351b +0x193d:  mov    %esp,%ebp
0828351d +0x193f:  sub    $0x18,%esp
08283520 +0x1942:  mov    0x8(%ebp),%eax
08283523 +0x1945:  movl   $0x1,0x8(%esp)
0828352b +0x194d:  mov    0xc(%ebp),%edx
0828352e +0x1950:  mov    %edx,0x4(%esp)
08283532 +0x1954:  mov    %eax,(%esp)
08283535 +0x1957:  call   08283726 <+0x1b48>
0828353a +0x195c:  leave
0828353b +0x195d:  ret
0828353c +0x195e:  push   %ebp
0828353d +0x195f:  mov    %esp,%ebp
0828353f +0x1961:  sub    $0x18,%esp
08283542 +0x1964:  mov    0x8(%ebp),%eax
08283545 +0x1967:  mov    0x10(%ebp),%edx
08283548 +0x196a:  mov    %edx,0x4(%esp)
0828354c +0x196e:  mov    %eax,(%esp)
0828354f +0x1971:  call   0828373a <+0x1b5c>
08283554 +0x1976:  mov    0x8(%ebp),%eax
08283557 +0x1979:  movl   $0x0,0x4(%eax)
0828355e +0x1980:  mov    0x8(%ebp),%eax
08283561 +0x1983:  movl   $0x0,0x8(%eax)
08283568 +0x198a:  mov    0x8(%ebp),%eax
0828356b +0x198d:  movl   $0x0,0xc(%eax)
08283572 +0x1994:  mov    0x8(%ebp),%eax
08283575 +0x1997:  movl   $0x0,0x10(%eax)
0828357c +0x199e:  mov    0x8(%ebp),%eax
0828357f +0x19a1:  movl   $0x0,0x14(%eax)
08283586 +0x19a8:  mov    0x8(%ebp),%eax
08283589 +0x19ab:  mov    %eax,(%esp)
0828358c +0x19ae:  call   082834c6 <+0x18e8>
08283591 +0x19b3:  leave
08283592 +0x19b4:  ret
08283593 +0x19b5:  nop
08283594 +0x19b6:  push   %ebp
08283595 +0x19b7:  mov    %esp,%ebp
08283597 +0x19b9:  mov    0x8(%ebp),%eax
0828359a +0x19bc:  add    $0x8,%eax
0828359d +0x19bf:  pop    %ebp
0828359e +0x19c0:  ret
0828359f +0x19c1:  nop
082835a0 +0x19c2:  push   %ebp
082835a1 +0x19c3:  mov    %esp,%ebp
082835a3 +0x19c5:  mov    0x8(%ebp),%eax
082835a6 +0x19c8:  add    $0xc,%eax
082835a9 +0x19cb:  pop    %ebp
082835aa +0x19cc:  ret
082835ab +0x19cd:  nop
082835ac +0x19ce:  push   %ebp
082835ad +0x19cf:  mov    %esp,%ebp
082835af +0x19d1:  mov    0x8(%ebp),%eax
082835b2 +0x19d4:  add    $0x10,%eax
082835b5 +0x19d7:  pop    %ebp
082835b6 +0x19d8:  ret
082835b7 +0x19d9:  nop
082835b8 +0x19da:  push   %ebp
082835b9 +0x19db:  mov    %esp,%ebp
082835bb +0x19dd:  push   %esi
082835bc +0x19de:  push   %ebx
082835bd +0x19df:  sub    $0x20,%esp
082835c0 +0x19e2:  mov    0x8(%ebp),%eax
082835c3 +0x19e5:  mov    %eax,(%esp)
082835c6 +0x19e8:  call   08283754 <+0x1b76>
082835cb +0x19ed:  mov    %eax,-0xc(%ebp)
082835ce +0x19f0:  mov    0xc(%ebp),%eax
082835d1 +0x19f3:  mov    %eax,(%esp)
082835d4 +0x19f6:  call   08283777 <+0x1b99>
082835d9 +0x19fb:  mov    %eax,%ebx
082835db +0x19fd:  mov    0x8(%ebp),%eax
082835de +0x1a00:  mov    %eax,(%esp)
082835e1 +0x1a03:  call   08282eb8 <+0x12da>
082835e6 +0x1a08:  mov    %ebx,0x8(%esp)
082835ea +0x1a0c:  mov    -0xc(%ebp),%edx
082835ed +0x1a0f:  mov    %edx,0x4(%esp)
082835f1 +0x1a13:  mov    %eax,(%esp)
082835f4 +0x1a16:  call   08283780 <+0x1ba2>
082835f9 +0x1a1b:  jmp    0828362f <+0x1a51>
082835fb +0x1a1d:  mov    %eax,(%esp)
082835fe +0x1a20:  call   08725ce0 <__cxa_begin_catch>
08283603 +0x1a25:  mov    -0xc(%ebp),%eax
08283606 +0x1a28:  mov    %eax,0x4(%esp)
0828360a +0x1a2c:  mov    0x8(%ebp),%eax
0828360d +0x1a2f:  mov    %eax,(%esp)
08283610 +0x1a32:  call   08282eea <+0x130c>
08283615 +0x1a37:  call   08724be0 <__cxa_rethrow>
0828361a +0x1a3c:  mov    %edx,%ebx
0828361c +0x1a3e:  mov    %eax,%esi
0828361e +0x1a40:  call   08725c30 <__cxa_end_catch>
08283623 +0x1a45:  mov    %esi,%eax
08283625 +0x1a47:  mov    %ebx,%edx
08283627 +0x1a49:  mov    %eax,(%esp)
0828362a +0x1a4c:  call   08ae3750 <_Unwind_Resume>
0828362f +0x1a51:  mov    -0xc(%ebp),%eax
08283632 +0x1a54:  add    $0x20,%esp
08283635 +0x1a57:  pop    %ebx
08283636 +0x1a58:  pop    %esi
08283637 +0x1a59:  pop    %ebp
08283638 +0x1a5a:  ret
08283639 +0x1a5b:  nop
0828363a +0x1a5c:  push   %ebp
0828363b +0x1a5d:  mov    %esp,%ebp
0828363d +0x1a5f:  sub    $0x18,%esp
08283640 +0x1a62:  mov    0xc(%ebp),%eax
08283643 +0x1a65:  mov    %eax,(%esp)
08283646 +0x1a68:  call   082837e7 <+0x1c09>
0828364b +0x1a6d:  mov    0x8(%ebp),%edx
0828364e +0x1a70:  mov    (%eax),%eax
08283650 +0x1a72:  mov    %eax,(%edx)
08283652 +0x1a74:  mov    0x10(%ebp),%eax
08283655 +0x1a77:  mov    %eax,(%esp)
08283658 +0x1a7a:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0828365d +0x1a7f:  movzbl (%eax),%edx
08283660 +0x1a82:  mov    0x8(%ebp),%eax
08283663 +0x1a85:  mov    %dl,0x4(%eax)
08283666 +0x1a88:  leave
08283667 +0x1a89:  ret
08283668 +0x1a8a:  push   %ebp
08283669 +0x1a8b:  mov    %esp,%ebp
0828366b +0x1a8d:  sub    $0x18,%esp
0828366e +0x1a90:  mov    0x8(%ebp),%eax
08283671 +0x1a93:  mov    (%eax),%eax
08283673 +0x1a95:  mov    %eax,(%esp)
08283676 +0x1a98:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0828367b +0x1a9d:  mov    0x8(%ebp),%edx
0828367e +0x1aa0:  mov    %eax,(%edx)
08283680 +0x1aa2:  mov    0x8(%ebp),%eax
08283683 +0x1aa5:  leave
08283684 +0x1aa6:  ret
08283685 +0x1aa7:  nop
08283686 +0x1aa8:  push   %ebp
08283687 +0x1aa9:  mov    %esp,%ebp
08283689 +0x1aab:  sub    $0x18,%esp
0828368c +0x1aae:  mov    0xc(%ebp),%eax
0828368f +0x1ab1:  mov    %eax,(%esp)
08283692 +0x1ab4:  call   082837ef <+0x1c11>
08283697 +0x1ab9:  mov    0x8(%ebp),%edx
0828369a +0x1abc:  mov    (%eax),%eax
0828369c +0x1abe:  mov    %eax,(%edx)
0828369e +0x1ac0:  mov    0x10(%ebp),%eax
082836a1 +0x1ac3:  mov    %eax,(%esp)
082836a4 +0x1ac6:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082836a9 +0x1acb:  movzbl (%eax),%edx
082836ac +0x1ace:  mov    0x8(%ebp),%eax
082836af +0x1ad1:  mov    %dl,0x4(%eax)
082836b2 +0x1ad4:  leave
082836b3 +0x1ad5:  ret
082836b4 +0x1ad6:  push   %ebp
082836b5 +0x1ad7:  mov    %esp,%ebp
082836b7 +0x1ad9:  sub    $0x18,%esp
082836ba +0x1adc:  mov    0x8(%ebp),%eax
082836bd +0x1adf:  movl   $0x0,0x8(%esp)
082836c5 +0x1ae7:  movl   $0x1,0x4(%esp)
082836cd +0x1aef:  mov    %eax,(%esp)
082836d0 +0x1af2:  call   082837f8 <+0x1c1a>
082836d5 +0x1af7:  leave
082836d6 +0x1af8:  ret
082836d7 +0x1af9:  push   %ebp
082836d8 +0x1afa:  mov    %esp,%ebp
082836da +0x1afc:  mov    0x8(%ebp),%eax
082836dd +0x1aff:  pop    %ebp
082836de +0x1b00:  ret
082836df +0x1b01:  nop
082836e0 +0x1b02:  push   %ebp
082836e1 +0x1b03:  mov    %esp,%ebp
082836e3 +0x1b05:  push   %ebx
082836e4 +0x1b06:  sub    $0x14,%esp
082836e7 +0x1b09:  mov    0x10(%ebp),%eax
082836ea +0x1b0c:  mov    %eax,(%esp)
082836ed +0x1b0f:  call   082836d7 <+0x1af9>
082836f2 +0x1b14:  mov    %eax,%ebx
082836f4 +0x1b16:  mov    0xc(%ebp),%eax
082836f7 +0x1b19:  mov    %eax,0x4(%esp)
082836fb +0x1b1d:  movl   $0x18,(%esp)
08283702 +0x1b24:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08283707 +0x1b29:  mov    %eax,%edx
08283709 +0x1b2b:  test   %edx,%edx
0828370b +0x1b2d:  je     08283719 <+0x1b3b>
0828370d +0x1b2f:  mov    %ebx,0x4(%esp)
08283711 +0x1b33:  mov    %eax,(%esp)
08283714 +0x1b36:  call   08283836 <+0x1c58>
08283719 +0x1b3b:  add    $0x14,%esp
0828371c +0x1b3e:  pop    %ebx
0828371d +0x1b3f:  pop    %ebp
0828371e +0x1b40:  ret
0828371f +0x1b41:  nop
08283720 +0x1b42:  push   %ebp
08283721 +0x1b43:  mov    %esp,%ebp
08283723 +0x1b45:  pop    %ebp
08283724 +0x1b46:  ret
08283725 +0x1b47:  nop
08283726 +0x1b48:  push   %ebp
08283727 +0x1b49:  mov    %esp,%ebp
08283729 +0x1b4b:  sub    $0x18,%esp
0828372c +0x1b4e:  mov    0xc(%ebp),%eax
0828372f +0x1b51:  mov    %eax,(%esp)
08283732 +0x1b54:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08283737 +0x1b59:  leave
08283738 +0x1b5a:  ret
08283739 +0x1b5b:  nop
0828373a +0x1b5c:  push   %ebp
0828373b +0x1b5d:  mov    %esp,%ebp
0828373d +0x1b5f:  sub    $0x18,%esp
08283740 +0x1b62:  mov    0xc(%ebp),%edx
08283743 +0x1b65:  mov    0x8(%ebp),%eax
08283746 +0x1b68:  mov    %edx,0x4(%esp)
0828374a +0x1b6c:  mov    %eax,(%esp)
0828374d +0x1b6f:  call   0828387e <+0x1ca0>
08283752 +0x1b74:  leave
08283753 +0x1b75:  ret
08283754 +0x1b76:  push   %ebp
08283755 +0x1b77:  mov    %esp,%ebp
08283757 +0x1b79:  sub    $0x18,%esp
0828375a +0x1b7c:  mov    0x8(%ebp),%eax
0828375d +0x1b7f:  movl   $0x0,0x8(%esp)
08283765 +0x1b87:  movl   $0x1,0x4(%esp)
0828376d +0x1b8f:  mov    %eax,(%esp)
08283770 +0x1b92:  call   08283884 <+0x1ca6>
08283775 +0x1b97:  leave
08283776 +0x1b98:  ret
08283777 +0x1b99:  push   %ebp
08283778 +0x1b9a:  mov    %esp,%ebp
0828377a +0x1b9c:  mov    0x8(%ebp),%eax
0828377d +0x1b9f:  pop    %ebp
0828377e +0x1ba0:  ret
0828377f +0x1ba1:  nop
08283780 +0x1ba2:  push   %ebp
08283781 +0x1ba3:  mov    %esp,%ebp
08283783 +0x1ba5:  push   %edi
08283784 +0x1ba6:  push   %esi
08283785 +0x1ba7:  push   %ebx
08283786 +0x1ba8:  sub    $0x2c,%esp
08283789 +0x1bab:  mov    0x10(%ebp),%eax
0828378c +0x1bae:  mov    %eax,(%esp)
0828378f +0x1bb1:  call   08283777 <+0x1b99>
08283794 +0x1bb6:  mov    %eax,%edi
08283796 +0x1bb8:  mov    0xc(%ebp),%esi
08283799 +0x1bbb:  mov    %esi,0x4(%esp)
0828379d +0x1bbf:  movl   $0x2c,(%esp)
082837a4 +0x1bc6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082837a9 +0x1bcb:  mov    %eax,%ebx
082837ab +0x1bcd:  mov    %ebx,%eax
082837ad +0x1bcf:  test   %eax,%eax
082837af +0x1bd1:  je     082837df <+0x1c01>
082837b1 +0x1bd3:  mov    %ebx,%eax
082837b3 +0x1bd5:  mov    %edi,0x4(%esp)
082837b7 +0x1bd9:  mov    %eax,(%esp)
082837ba +0x1bdc:  call   082838e6 <+0x1d08>
082837bf +0x1be1:  jmp    082837df <+0x1c01>
082837c1 +0x1be3:  mov    %edx,%edi
082837c3 +0x1be5:  mov    %eax,-0x1c(%ebp)
082837c6 +0x1be8:  mov    %esi,0x4(%esp)
082837ca +0x1bec:  mov    %ebx,(%esp)
082837cd +0x1bef:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
082837d2 +0x1bf4:  mov    -0x1c(%ebp),%eax
082837d5 +0x1bf7:  mov    %edi,%edx
082837d7 +0x1bf9:  mov    %eax,(%esp)
082837da +0x1bfc:  call   08ae3750 <_Unwind_Resume>
082837df +0x1c01:  add    $0x2c,%esp
082837e2 +0x1c04:  pop    %ebx
082837e3 +0x1c05:  pop    %esi
082837e4 +0x1c06:  pop    %edi
082837e5 +0x1c07:  pop    %ebp
082837e6 +0x1c08:  ret
082837e7 +0x1c09:  push   %ebp
082837e8 +0x1c0a:  mov    %esp,%ebp
082837ea +0x1c0c:  mov    0x8(%ebp),%eax
082837ed +0x1c0f:  pop    %ebp
082837ee +0x1c10:  ret
082837ef +0x1c11:  push   %ebp
082837f0 +0x1c12:  mov    %esp,%ebp
082837f2 +0x1c14:  mov    0x8(%ebp),%eax
082837f5 +0x1c17:  pop    %ebp
082837f6 +0x1c18:  ret
082837f7 +0x1c19:  nop
082837f8 +0x1c1a:  push   %ebp
082837f9 +0x1c1b:  mov    %esp,%ebp
082837fb +0x1c1d:  sub    $0x18,%esp
082837fe +0x1c20:  mov    0x8(%ebp),%eax
08283801 +0x1c23:  mov    %eax,(%esp)
08283804 +0x1c26:  call   08283932 <+0x1d54>
08283809 +0x1c2b:  cmp    0xc(%ebp),%eax
0828380c +0x1c2e:  setb   %al
0828380f +0x1c31:  movzbl %al,%eax
08283812 +0x1c34:  test   %eax,%eax
08283814 +0x1c36:  setne  %al
08283817 +0x1c39:  test   %al,%al
08283819 +0x1c3b:  je     08283820 <+0x1c42>
0828381b +0x1c3d:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08283820 +0x1c42:  mov    0xc(%ebp),%edx
08283823 +0x1c45:  mov    %edx,%eax
08283825 +0x1c47:  add    %eax,%eax
08283827 +0x1c49:  add    %edx,%eax
08283829 +0x1c4b:  shl    $0x3,%eax
0828382c +0x1c4e:  mov    %eax,(%esp)
0828382f +0x1c51:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08283834 +0x1c56:  leave
08283835 +0x1c57:  ret
08283836 +0x1c58:  push   %ebp
08283837 +0x1c59:  mov    %esp,%ebp
08283839 +0x1c5b:  sub    $0x18,%esp
0828383c +0x1c5e:  mov    0x8(%ebp),%eax
0828383f +0x1c61:  movl   $0x0,(%eax)
08283845 +0x1c67:  mov    0x8(%ebp),%eax
08283848 +0x1c6a:  movl   $0x0,0x4(%eax)
0828384f +0x1c71:  mov    0x8(%ebp),%eax
08283852 +0x1c74:  movl   $0x0,0x8(%eax)
08283859 +0x1c7b:  mov    0x8(%ebp),%eax
0828385c +0x1c7e:  movl   $0x0,0xc(%eax)
08283863 +0x1c85:  mov    0xc(%ebp),%eax
08283866 +0x1c88:  mov    %eax,(%esp)
08283869 +0x1c8b:  call   082836d7 <+0x1af9>
0828386e +0x1c90:  mov    0x8(%ebp),%ecx
08283871 +0x1c93:  mov    0x4(%eax),%edx
08283874 +0x1c96:  mov    (%eax),%eax
08283876 +0x1c98:  mov    %eax,0x10(%ecx)
08283879 +0x1c9b:  mov    %edx,0x14(%ecx)
0828387c +0x1c9e:  leave
0828387d +0x1c9f:  ret
0828387e +0x1ca0:  push   %ebp
0828387f +0x1ca1:  mov    %esp,%ebp
08283881 +0x1ca3:  pop    %ebp
08283882 +0x1ca4:  ret
08283883 +0x1ca5:  nop
08283884 +0x1ca6:  push   %ebp
08283885 +0x1ca7:  mov    %esp,%ebp
08283887 +0x1ca9:  sub    $0x18,%esp
0828388a +0x1cac:  mov    0x8(%ebp),%eax
0828388d +0x1caf:  mov    %eax,(%esp)
08283890 +0x1cb2:  call   0828393c <+0x1d5e>
08283895 +0x1cb7:  cmp    0xc(%ebp),%eax
08283898 +0x1cba:  setb   %al
0828389b +0x1cbd:  movzbl %al,%eax
0828389e +0x1cc0:  test   %eax,%eax
082838a0 +0x1cc2:  setne  %al
082838a3 +0x1cc5:  test   %al,%al
082838a5 +0x1cc7:  je     082838ac <+0x1cce>
082838a7 +0x1cc9:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082838ac +0x1cce:  mov    0xc(%ebp),%eax
082838af +0x1cd1:  imul   $0x2c,%eax,%eax
082838b2 +0x1cd4:  mov    %eax,(%esp)
082838b5 +0x1cd7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082838ba +0x1cdc:  leave
082838bb +0x1cdd:  ret
082838bc +0x1cde:  push   %ebp
082838bd +0x1cdf:  mov    %esp,%ebp
082838bf +0x1ce1:  sub    $0x18,%esp
082838c2 +0x1ce4:  mov    0xc(%ebp),%eax
082838c5 +0x1ce7:  mov    (%eax),%edx
082838c7 +0x1ce9:  mov    0x8(%ebp),%eax
082838ca +0x1cec:  mov    %edx,(%eax)
082838cc +0x1cee:  mov    0xc(%ebp),%eax
082838cf +0x1cf1:  lea    0x4(%eax),%edx
082838d2 +0x1cf4:  mov    0x8(%ebp),%eax
082838d5 +0x1cf7:  add    $0x4,%eax
082838d8 +0x1cfa:  mov    %edx,0x4(%esp)
082838dc +0x1cfe:  mov    %eax,(%esp)
082838df +0x1d01:  call   08283946 <+0x1d68>
082838e4 +0x1d06:  leave
082838e5 +0x1d07:  ret
082838e6 +0x1d08:  push   %ebp
082838e7 +0x1d09:  mov    %esp,%ebp
082838e9 +0x1d0b:  sub    $0x18,%esp
082838ec +0x1d0e:  mov    0x8(%ebp),%eax
082838ef +0x1d11:  movl   $0x0,(%eax)
082838f5 +0x1d17:  mov    0x8(%ebp),%eax
082838f8 +0x1d1a:  movl   $0x0,0x4(%eax)
082838ff +0x1d21:  mov    0x8(%ebp),%eax
08283902 +0x1d24:  movl   $0x0,0x8(%eax)
08283909 +0x1d2b:  mov    0x8(%ebp),%eax
0828390c +0x1d2e:  movl   $0x0,0xc(%eax)
08283913 +0x1d35:  mov    0xc(%ebp),%eax
08283916 +0x1d38:  mov    %eax,(%esp)
08283919 +0x1d3b:  call   08283777 <+0x1b99>
0828391e +0x1d40:  mov    0x8(%ebp),%edx
08283921 +0x1d43:  add    $0x10,%edx
08283924 +0x1d46:  mov    %eax,0x4(%esp)
08283928 +0x1d4a:  mov    %edx,(%esp)
0828392b +0x1d4d:  call   082838bc <+0x1cde>
08283930 +0x1d52:  leave
08283931 +0x1d53:  ret
08283932 +0x1d54:  push   %ebp
08283933 +0x1d55:  mov    %esp,%ebp
08283935 +0x1d57:  mov    $0xaaaaaaa,%eax
0828393a +0x1d5c:  pop    %ebp
0828393b +0x1d5d:  ret
0828393c +0x1d5e:  push   %ebp
0828393d +0x1d5f:  mov    %esp,%ebp
0828393f +0x1d61:  mov    $0x5d1745d,%eax
08283944 +0x1d66:  pop    %ebp
08283945 +0x1d67:  ret
08283946 +0x1d68:  push   %ebp
08283947 +0x1d69:  mov    %esp,%ebp
08283949 +0x1d6b:  sub    $0x18,%esp
0828394c +0x1d6e:  mov    0xc(%ebp),%edx
0828394f +0x1d71:  mov    0x8(%ebp),%eax
08283952 +0x1d74:  mov    %edx,0x4(%esp)
08283956 +0x1d78:  mov    %eax,(%esp)
08283959 +0x1d7b:  call   08283960 <+0x1d82>
0828395e +0x1d80:  leave
0828395f +0x1d81:  ret
08283960 +0x1d82:  push   %ebp
08283961 +0x1d83:  mov    %esp,%ebp
08283963 +0x1d85:  push   %esi
08283964 +0x1d86:  push   %ebx
08283965 +0x1d87:  sub    $0x10,%esp
08283968 +0x1d8a:  mov    0xc(%ebp),%eax
0828396b +0x1d8d:  mov    %eax,(%esp)
0828396e +0x1d90:  call   08283a54 <+0x1e76>
08283973 +0x1d95:  mov    0xc(%ebp),%ecx
08283976 +0x1d98:  mov    0x8(%ebp),%edx
08283979 +0x1d9b:  mov    %eax,0x8(%esp)
0828397d +0x1d9f:  mov    %ecx,0x4(%esp)
08283981 +0x1da3:  mov    %edx,(%esp)
08283984 +0x1da6:  call   0828353c <+0x195e>
08283989 +0x1dab:  mov    0xc(%ebp),%eax
0828398c +0x1dae:  mov    %eax,(%esp)
0828398f +0x1db1:  call   08283a5c <+0x1e7e>
08283994 +0x1db6:  test   %eax,%eax
08283996 +0x1db8:  setne  %al
08283999 +0x1dbb:  test   %al,%al
0828399b +0x1dbd:  je     08283a4c <+0x1e6e>
082839a1 +0x1dc3:  mov    0x8(%ebp),%eax
082839a4 +0x1dc6:  mov    %eax,(%esp)
082839a7 +0x1dc9:  call   08283594 <+0x19b6>
082839ac +0x1dce:  mov    %eax,%ebx
082839ae +0x1dd0:  mov    0x8(%ebp),%eax
082839b1 +0x1dd3:  mov    %eax,(%esp)
082839b4 +0x1dd6:  call   08282cc2 <+0x10e4>
082839b9 +0x1ddb:  mov    %eax,%esi
082839bb +0x1ddd:  mov    0xc(%ebp),%eax
082839be +0x1de0:  mov    %eax,(%esp)
082839c1 +0x1de3:  call   08283b90 <+0x1fb2>
082839c6 +0x1de8:  mov    %esi,0x8(%esp)
082839ca +0x1dec:  mov    %eax,0x4(%esp)
082839ce +0x1df0:  mov    0x8(%ebp),%eax
082839d1 +0x1df3:  mov    %eax,(%esp)
082839d4 +0x1df6:  call   08283a68 <+0x1e8a>
082839d9 +0x1dfb:  mov    %eax,(%ebx)
082839db +0x1dfd:  mov    0x8(%ebp),%eax
082839de +0x1e00:  mov    %eax,(%esp)
082839e1 +0x1e03:  call   082835a0 <+0x19c2>
082839e6 +0x1e08:  mov    %eax,%ebx
082839e8 +0x1e0a:  mov    0x8(%ebp),%eax
082839eb +0x1e0d:  mov    %eax,(%esp)
082839ee +0x1e10:  call   08283594 <+0x19b6>
082839f3 +0x1e15:  mov    (%eax),%eax
082839f5 +0x1e17:  mov    %eax,(%esp)
082839f8 +0x1e1a:  call   08283b9b <+0x1fbd>
082839fd +0x1e1f:  mov    %eax,(%ebx)
082839ff +0x1e21:  mov    0x8(%ebp),%eax
08283a02 +0x1e24:  mov    %eax,(%esp)
08283a05 +0x1e27:  call   082835ac <+0x19ce>
08283a0a +0x1e2c:  mov    %eax,%ebx
08283a0c +0x1e2e:  mov    0x8(%ebp),%eax
08283a0f +0x1e31:  mov    %eax,(%esp)
08283a12 +0x1e34:  call   08283594 <+0x19b6>
08283a17 +0x1e39:  mov    (%eax),%eax
08283a19 +0x1e3b:  mov    %eax,(%esp)
08283a1c +0x1e3e:  call   08283bae <+0x1fd0>
08283a21 +0x1e43:  mov    %eax,(%ebx)
08283a23 +0x1e45:  mov    0xc(%ebp),%eax
08283a26 +0x1e48:  mov    0x14(%eax),%edx
08283a29 +0x1e4b:  mov    0x8(%ebp),%eax
08283a2c +0x1e4e:  mov    %edx,0x14(%eax)
08283a2f +0x1e51:  jmp    08283a4c <+0x1e6e>
08283a31 +0x1e53:  mov    %edx,%ebx
08283a33 +0x1e55:  mov    %eax,%esi
08283a35 +0x1e57:  mov    0x8(%ebp),%eax
08283a38 +0x1e5a:  mov    %eax,(%esp)
08283a3b +0x1e5d:  call   0828238c <+0x7ae>
08283a40 +0x1e62:  mov    %esi,%eax
08283a42 +0x1e64:  mov    %ebx,%edx
08283a44 +0x1e66:  mov    %eax,(%esp)
08283a47 +0x1e69:  call   08ae3750 <_Unwind_Resume>
08283a4c +0x1e6e:  add    $0x10,%esp
08283a4f +0x1e71:  pop    %ebx
08283a50 +0x1e72:  pop    %esi
08283a51 +0x1e73:  pop    %ebp
08283a52 +0x1e74:  ret
08283a53 +0x1e75:  nop
08283a54 +0x1e76:  push   %ebp
08283a55 +0x1e77:  mov    %esp,%ebp
08283a57 +0x1e79:  mov    0x8(%ebp),%eax
08283a5a +0x1e7c:  pop    %ebp
08283a5b +0x1e7d:  ret
08283a5c +0x1e7e:  push   %ebp
08283a5d +0x1e7f:  mov    %esp,%ebp
08283a5f +0x1e81:  mov    0x8(%ebp),%eax
08283a62 +0x1e84:  mov    0x8(%eax),%eax
08283a65 +0x1e87:  pop    %ebp
08283a66 +0x1e88:  ret
08283a67 +0x1e89:  nop
08283a68 +0x1e8a:  push   %ebp
08283a69 +0x1e8b:  mov    %esp,%ebp
08283a6b +0x1e8d:  push   %esi
08283a6c +0x1e8e:  push   %ebx
08283a6d +0x1e8f:  sub    $0x20,%esp
08283a70 +0x1e92:  mov    0xc(%ebp),%eax
08283a73 +0x1e95:  mov    %eax,0x4(%esp)
08283a77 +0x1e99:  mov    0x8(%ebp),%eax
08283a7a +0x1e9c:  mov    %eax,(%esp)
08283a7d +0x1e9f:  call   08283bc2 <+0x1fe4>
08283a82 +0x1ea4:  mov    %eax,-0x10(%ebp)
08283a85 +0x1ea7:  mov    0x10(%ebp),%edx
08283a88 +0x1eaa:  mov    -0x10(%ebp),%eax
08283a8b +0x1ead:  mov    %edx,0x4(%eax)
08283a8e +0x1eb0:  mov    0xc(%ebp),%eax
08283a91 +0x1eb3:  mov    0xc(%eax),%eax
08283a94 +0x1eb6:  test   %eax,%eax
08283a96 +0x1eb8:  je     08283ac1 <+0x1ee3>
08283a98 +0x1eba:  mov    0xc(%ebp),%eax
08283a9b +0x1ebd:  mov    %eax,(%esp)
08283a9e +0x1ec0:  call   08283c03 <+0x2025>
08283aa3 +0x1ec5:  mov    -0x10(%ebp),%edx
08283aa6 +0x1ec8:  mov    %edx,0x8(%esp)
08283aaa +0x1ecc:  mov    %eax,0x4(%esp)
08283aae +0x1ed0:  mov    0x8(%ebp),%eax
08283ab1 +0x1ed3:  mov    %eax,(%esp)
08283ab4 +0x1ed6:  call   08283a68 <+0x1e8a>
08283ab9 +0x1edb:  mov    %eax,%edx
08283abb +0x1edd:  mov    -0x10(%ebp),%eax
08283abe +0x1ee0:  mov    %edx,0xc(%eax)
08283ac1 +0x1ee3:  mov    -0x10(%ebp),%eax
08283ac4 +0x1ee6:  mov    %eax,0x10(%ebp)
08283ac7 +0x1ee9:  mov    0xc(%ebp),%eax
08283aca +0x1eec:  mov    %eax,(%esp)
08283acd +0x1eef:  call   08283c0e <+0x2030>
08283ad2 +0x1ef4:  mov    %eax,0xc(%ebp)
08283ad5 +0x1ef7:  jmp    08283b45 <+0x1f67>
08283ad7 +0x1ef9:  mov    0xc(%ebp),%eax
08283ada +0x1efc:  mov    %eax,0x4(%esp)
08283ade +0x1f00:  mov    0x8(%ebp),%eax
08283ae1 +0x1f03:  mov    %eax,(%esp)
08283ae4 +0x1f06:  call   08283bc2 <+0x1fe4>
08283ae9 +0x1f0b:  mov    %eax,-0xc(%ebp)
08283aec +0x1f0e:  mov    -0xc(%ebp),%edx
08283aef +0x1f11:  mov    0x10(%ebp),%eax
08283af2 +0x1f14:  mov    %edx,0x8(%eax)
08283af5 +0x1f17:  mov    0x10(%ebp),%edx
08283af8 +0x1f1a:  mov    -0xc(%ebp),%eax
08283afb +0x1f1d:  mov    %edx,0x4(%eax)
08283afe +0x1f20:  mov    0xc(%ebp),%eax
08283b01 +0x1f23:  mov    0xc(%eax),%eax
08283b04 +0x1f26:  test   %eax,%eax
08283b06 +0x1f28:  je     08283b31 <+0x1f53>
08283b08 +0x1f2a:  mov    0xc(%ebp),%eax
08283b0b +0x1f2d:  mov    %eax,(%esp)
08283b0e +0x1f30:  call   08283c03 <+0x2025>
08283b13 +0x1f35:  mov    -0xc(%ebp),%edx
08283b16 +0x1f38:  mov    %edx,0x8(%esp)
08283b1a +0x1f3c:  mov    %eax,0x4(%esp)
08283b1e +0x1f40:  mov    0x8(%ebp),%eax
08283b21 +0x1f43:  mov    %eax,(%esp)
08283b24 +0x1f46:  call   08283a68 <+0x1e8a>
08283b29 +0x1f4b:  mov    %eax,%edx
08283b2b +0x1f4d:  mov    -0xc(%ebp),%eax
08283b2e +0x1f50:  mov    %edx,0xc(%eax)
08283b31 +0x1f53:  mov    -0xc(%ebp),%eax
08283b34 +0x1f56:  mov    %eax,0x10(%ebp)
08283b37 +0x1f59:  mov    0xc(%ebp),%eax
08283b3a +0x1f5c:  mov    %eax,(%esp)
08283b3d +0x1f5f:  call   08283c0e <+0x2030>
08283b42 +0x1f64:  mov    %eax,0xc(%ebp)
08283b45 +0x1f67:  cmpl   $0x0,0xc(%ebp)
08283b49 +0x1f6b:  setne  %al
08283b4c +0x1f6e:  test   %al,%al
08283b4e +0x1f70:  jne    08283ad7 <+0x1ef9>
08283b50 +0x1f72:  jmp    08283b86 <+0x1fa8>
08283b52 +0x1f74:  mov    %eax,(%esp)
08283b55 +0x1f77:  call   08725ce0 <__cxa_begin_catch>
08283b5a +0x1f7c:  mov    -0x10(%ebp),%eax
08283b5d +0x1f7f:  mov    %eax,0x4(%esp)
08283b61 +0x1f83:  mov    0x8(%ebp),%eax
08283b64 +0x1f86:  mov    %eax,(%esp)
08283b67 +0x1f89:  call   08282858 <+0xc7a>
08283b6c +0x1f8e:  call   08724be0 <__cxa_rethrow>
08283b71 +0x1f93:  mov    %edx,%ebx
08283b73 +0x1f95:  mov    %eax,%esi
08283b75 +0x1f97:  call   08725c30 <__cxa_end_catch>
08283b7a +0x1f9c:  mov    %esi,%eax
08283b7c +0x1f9e:  mov    %ebx,%edx
08283b7e +0x1fa0:  mov    %eax,(%esp)
08283b81 +0x1fa3:  call   08ae3750 <_Unwind_Resume>
08283b86 +0x1fa8:  mov    -0x10(%ebp),%eax
08283b89 +0x1fab:  add    $0x20,%esp
08283b8c +0x1fae:  pop    %ebx
08283b8d +0x1faf:  pop    %esi
08283b8e +0x1fb0:  pop    %ebp
08283b8f +0x1fb1:  ret
08283b90 +0x1fb2:  push   %ebp
08283b91 +0x1fb3:  mov    %esp,%ebp
08283b93 +0x1fb5:  mov    0x8(%ebp),%eax
08283b96 +0x1fb8:  mov    0x8(%eax),%eax
08283b99 +0x1fbb:  pop    %ebp
08283b9a +0x1fbc:  ret
08283b9b +0x1fbd:  push   %ebp
08283b9c +0x1fbe:  mov    %esp,%ebp
08283b9e +0x1fc0:  sub    $0x18,%esp
08283ba1 +0x1fc3:  mov    0x8(%ebp),%eax
08283ba4 +0x1fc6:  mov    %eax,(%esp)
08283ba7 +0x1fc9:  call   080f0f9a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x1c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08283bac +0x1fce:  leave
08283bad +0x1fcf:  ret
08283bae +0x1fd0:  push   %ebp
08283baf +0x1fd1:  mov    %esp,%ebp
08283bb1 +0x1fd3:  sub    $0x18,%esp
08283bb4 +0x1fd6:  mov    0x8(%ebp),%eax
08283bb7 +0x1fd9:  mov    %eax,(%esp)
08283bba +0x1fdc:  call   080f0fbc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e
08283bbf +0x1fe1:  leave
08283bc0 +0x1fe2:  ret
08283bc1 +0x1fe3:  nop
08283bc2 +0x1fe4:  push   %ebp
08283bc3 +0x1fe5:  mov    %esp,%ebp
08283bc5 +0x1fe7:  sub    $0x28,%esp
08283bc8 +0x1fea:  mov    0xc(%ebp),%eax
08283bcb +0x1fed:  add    $0x10,%eax
08283bce +0x1ff0:  mov    %eax,0x4(%esp)
08283bd2 +0x1ff4:  mov    0x8(%ebp),%eax
08283bd5 +0x1ff7:  mov    %eax,(%esp)
08283bd8 +0x1ffa:  call   082833f2 <+0x1814>
08283bdd +0x1fff:  mov    %eax,-0xc(%ebp)
08283be0 +0x2002:  mov    0xc(%ebp),%eax
08283be3 +0x2005:  mov    (%eax),%edx
08283be5 +0x2007:  mov    -0xc(%ebp),%eax
08283be8 +0x200a:  mov    %edx,(%eax)
08283bea +0x200c:  mov    -0xc(%ebp),%eax
08283bed +0x200f:  movl   $0x0,0x8(%eax)
08283bf4 +0x2016:  mov    -0xc(%ebp),%eax
08283bf7 +0x2019:  movl   $0x0,0xc(%eax)
08283bfe +0x2020:  mov    -0xc(%ebp),%eax
08283c01 +0x2023:  leave
08283c02 +0x2024:  ret
08283c03 +0x2025:  push   %ebp
08283c04 +0x2026:  mov    %esp,%ebp
08283c06 +0x2028:  mov    0x8(%ebp),%eax
08283c09 +0x202b:  mov    0xc(%eax),%eax
08283c0c +0x202e:  pop    %ebp
08283c0d +0x202f:  ret
08283c0e +0x2030:  push   %ebp
08283c0f +0x2031:  mov    %esp,%ebp
08283c11 +0x2033:  mov    0x8(%ebp),%eax
08283c14 +0x2036:  mov    0x8(%eax),%eax
08283c17 +0x2039:  pop    %ebp
08283c18 +0x203a:  ret
08283c19 +0x203b:  nop
08283c1a +0x203c:  nop
08283c1b +0x203d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8281bde

/* StackablePackage::EventProcessManager::setupEventProcessors() */

void StackablePackage::EventProcessManager::_GLOBAL__I_setupEventProcessors(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
