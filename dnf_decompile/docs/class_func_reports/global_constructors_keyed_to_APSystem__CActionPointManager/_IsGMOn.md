# _IsGMOn

`_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE`

`global constructors keyed to APSystem::CActionPointManager::_IsGMOn`

| 类 | 地址 |
|---|---|
| `global constructors keyed to APSystem::CActionPointManager` | `0x08122a8d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08122a8d  _GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE
#           global constructors keyed to APSystem::CActionPointManager::_IsGMOn
# range [0x08122a8d, 0x08123afb]
08122a8d +0x0000:  push   %ebp
08122a8e +0x0001:  mov    %esp,%ebp
08122a90 +0x0003:  sub    $0x18,%esp
08122a93 +0x0006:  movl   $0xffff,0x4(%esp)
08122a9b +0x000e:  movl   $0x1,(%esp)
08122aa2 +0x0015:  call   08122a4d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08122aa7 +0x001a:  leave
08122aa8 +0x001b:  ret
08122aa9 +0x001c:  nop
08122aaa +0x001d:  push   %ebp
08122aab +0x001e:  mov    %esp,%ebp
08122aad +0x0020:  sub    $0x18,%esp
08122ab0 +0x0023:  movl   $0xb,0x8(%esp)
08122ab8 +0x002b:  movl   $0x0,0x4(%esp)
08122ac0 +0x0033:  mov    0x8(%ebp),%eax
08122ac3 +0x0036:  mov    %eax,(%esp)
08122ac6 +0x0039:  call   0807dcc0 <_init+0x5b8>
08122acb +0x003e:  leave
08122acc +0x003f:  ret
08122acd +0x0040:  nop
08122ace +0x0041:  push   %ebp
08122acf +0x0042:  mov    %esp,%ebp
08122ad1 +0x0044:  sub    $0x4,%esp
08122ad4 +0x0047:  mov    0xc(%ebp),%eax
08122ad7 +0x004a:  mov    %al,-0x4(%ebp)
08122ada +0x004d:  cmpb   $0x0,-0x4(%ebp)
08122ade +0x0051:  je     08122aea <+0x5d>
08122ae0 +0x0053:  mov    0x8(%ebp),%eax
08122ae3 +0x0056:  add    $0x6224,%eax
08122ae8 +0x005b:  jmp    08122af2 <+0x65>
08122aea +0x005d:  mov    0x8(%ebp),%eax
08122aed +0x0060:  add    $0x61ac,%eax
08122af2 +0x0065:  leave
08122af3 +0x0066:  ret
08122af4 +0x0067:  push   %ebp
08122af5 +0x0068:  mov    %esp,%ebp
08122af7 +0x006a:  sub    $0x18,%esp
08122afa +0x006d:  mov    0x8(%ebp),%eax
08122afd +0x0070:  movb   $0x0,(%eax)
08122b00 +0x0073:  mov    0x8(%ebp),%eax
08122b03 +0x0076:  movl   $0x0,0x4(%eax)
08122b0a +0x007d:  mov    0x8(%ebp),%eax
08122b0d +0x0080:  add    $0x8,%eax
08122b10 +0x0083:  movl   $0xcf1,0x8(%esp)
08122b18 +0x008b:  movl   $0x0,0x4(%esp)
08122b20 +0x0093:  mov    %eax,(%esp)
08122b23 +0x0096:  call   0807dcc0 <_init+0x5b8>
08122b28 +0x009b:  leave
08122b29 +0x009c:  ret
08122b2a +0x009d:  push   %ebp
08122b2b +0x009e:  mov    %esp,%ebp
08122b2d +0x00a0:  push   %ebx
08122b2e +0x00a1:  sub    $0x14,%esp
08122b31 +0x00a4:  mov    0x8(%ebp),%ebx
08122b34 +0x00a7:  mov    0xc(%ebp),%eax
08122b37 +0x00aa:  mov    %eax,0x4(%esp)
08122b3b +0x00ae:  mov    %ebx,(%esp)
08122b3e +0x00b1:  call   08122e44 <+0x3b7>
08122b43 +0x00b6:  sub    $0x4,%esp
08122b46 +0x00b9:  mov    %ebx,%eax
08122b48 +0x00bb:  mov    -0x4(%ebp),%ebx
08122b4b +0x00be:  leave
08122b4c +0x00bf:  ret    $0x4
08122b4f +0x00c2:  nop
08122b50 +0x00c3:  push   %ebp
08122b51 +0x00c4:  mov    %esp,%ebp
08122b53 +0x00c6:  push   %ebx
08122b54 +0x00c7:  sub    $0x14,%esp
08122b57 +0x00ca:  mov    0x8(%ebp),%ebx
08122b5a +0x00cd:  mov    0xc(%ebp),%eax
08122b5d +0x00d0:  mov    %eax,0x4(%esp)
08122b61 +0x00d4:  mov    %ebx,(%esp)
08122b64 +0x00d7:  call   08122e6a <+0x3dd>
08122b69 +0x00dc:  sub    $0x4,%esp
08122b6c +0x00df:  mov    %ebx,%eax
08122b6e +0x00e1:  mov    -0x4(%ebp),%ebx
08122b71 +0x00e4:  leave
08122b72 +0x00e5:  ret    $0x4
08122b75 +0x00e8:  nop
08122b76 +0x00e9:  push   %ebp
08122b77 +0x00ea:  mov    %esp,%ebp
08122b79 +0x00ec:  mov    0x8(%ebp),%eax
08122b7c +0x00ef:  mov    (%eax),%edx
08122b7e +0x00f1:  mov    0xc(%ebp),%eax
08122b81 +0x00f4:  mov    (%eax),%eax
08122b83 +0x00f6:  cmp    %eax,%edx
08122b85 +0x00f8:  setne  %al
08122b88 +0x00fb:  pop    %ebp
08122b89 +0x00fc:  ret
08122b8a +0x00fd:  push   %ebp
08122b8b +0x00fe:  mov    %esp,%ebp
08122b8d +0x0100:  push   %ebx
08122b8e +0x0101:  sub    $0x14,%esp
08122b91 +0x0104:  mov    0x8(%ebp),%ebx
08122b94 +0x0107:  mov    0xc(%ebp),%eax
08122b97 +0x010a:  movl   $0x4,0x8(%esp)
08122b9f +0x0112:  mov    %eax,0x4(%esp)
08122ba3 +0x0116:  mov    %ebx,(%esp)
08122ba6 +0x0119:  call   0807d880 <_init+0x178>
08122bab +0x011e:  mov    0xc(%ebp),%eax
08122bae +0x0121:  mov    (%eax),%eax
08122bb0 +0x0123:  mov    %eax,(%esp)
08122bb3 +0x0126:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08122bb8 +0x012b:  mov    0xc(%ebp),%edx
08122bbb +0x012e:  mov    %eax,(%edx)
08122bbd +0x0130:  mov    %ebx,%eax
08122bbf +0x0132:  add    $0x14,%esp
08122bc2 +0x0135:  pop    %ebx
08122bc3 +0x0136:  pop    %ebp
08122bc4 +0x0137:  ret    $0x4
08122bc7 +0x013a:  nop
08122bc8 +0x013b:  push   %ebp
08122bc9 +0x013c:  mov    %esp,%ebp
08122bcb +0x013e:  mov    0x8(%ebp),%eax
08122bce +0x0141:  mov    (%eax),%eax
08122bd0 +0x0143:  add    $0x10,%eax
08122bd3 +0x0146:  pop    %ebp
08122bd4 +0x0147:  ret
08122bd5 +0x0148:  nop
08122bd6 +0x0149:  push   %ebp
08122bd7 +0x014a:  mov    %esp,%ebp
08122bd9 +0x014c:  mov    0x8(%ebp),%eax
08122bdc +0x014f:  mov    0x4(%eax),%eax
08122bdf +0x0152:  mov    %eax,%edx
08122be1 +0x0154:  mov    0x8(%ebp),%eax
08122be4 +0x0157:  mov    (%eax),%eax
08122be6 +0x0159:  mov    %edx,%ecx
08122be8 +0x015b:  sub    %eax,%ecx
08122bea +0x015d:  mov    %ecx,%eax
08122bec +0x015f:  sar    $0x4,%eax
08122bef +0x0162:  imul   $0xaaaaaaab,%eax,%eax
08122bf5 +0x0168:  pop    %ebp
08122bf6 +0x0169:  ret
08122bf7 +0x016a:  nop
08122bf8 +0x016b:  push   %ebp
08122bf9 +0x016c:  mov    %esp,%ebp
08122bfb +0x016e:  mov    0x8(%ebp),%eax
08122bfe +0x0171:  mov    (%eax),%ecx
08122c00 +0x0173:  mov    0xc(%ebp),%edx
08122c03 +0x0176:  mov    %edx,%eax
08122c05 +0x0178:  add    %eax,%eax
08122c07 +0x017a:  add    %edx,%eax
08122c09 +0x017c:  shl    $0x4,%eax
08122c0c +0x017f:  lea    (%ecx,%eax,1),%eax
08122c0f +0x0182:  pop    %ebp
08122c10 +0x0183:  ret
08122c11 +0x0184:  nop
08122c12 +0x0185:  push   %ebp
08122c13 +0x0186:  mov    %esp,%ebp
08122c15 +0x0188:  sub    $0x18,%esp
08122c18 +0x018b:  mov    0x8(%ebp),%eax
08122c1b +0x018e:  mov    %eax,(%esp)
08122c1e +0x0191:  call   08122ea4 <+0x417>
08122c23 +0x0196:  leave
08122c24 +0x0197:  ret
08122c25 +0x0198:  nop
08122c26 +0x0199:  push   %ebp
08122c27 +0x019a:  mov    %esp,%ebp
08122c29 +0x019c:  push   %esi
08122c2a +0x019d:  push   %ebx
08122c2b +0x019e:  sub    $0x10,%esp
08122c2e +0x01a1:  mov    0x8(%ebp),%eax
08122c31 +0x01a4:  mov    %eax,(%esp)
08122c34 +0x01a7:  call   08122f20 <+0x493>
08122c39 +0x01ac:  mov    0x8(%ebp),%edx
08122c3c +0x01af:  mov    0x4(%edx),%ecx
08122c3f +0x01b2:  mov    0x8(%ebp),%edx
08122c42 +0x01b5:  mov    (%edx),%edx
08122c44 +0x01b7:  mov    %eax,0x8(%esp)
08122c48 +0x01bb:  mov    %ecx,0x4(%esp)
08122c4c +0x01bf:  mov    %edx,(%esp)
08122c4f +0x01c2:  call   08122f28 <+0x49b>
08122c54 +0x01c7:  jmp    08122c71 <+0x1e4>
08122c56 +0x01c9:  mov    %edx,%ebx
08122c58 +0x01cb:  mov    %eax,%esi
08122c5a +0x01cd:  mov    0x8(%ebp),%eax
08122c5d +0x01d0:  mov    %eax,(%esp)
08122c60 +0x01d3:  call   08122eb8 <+0x42b>
08122c65 +0x01d8:  mov    %esi,%eax
08122c67 +0x01da:  mov    %ebx,%edx
08122c69 +0x01dc:  mov    %eax,(%esp)
08122c6c +0x01df:  call   08ae3750 <_Unwind_Resume>
08122c71 +0x01e4:  mov    0x8(%ebp),%eax
08122c74 +0x01e7:  mov    %eax,(%esp)
08122c77 +0x01ea:  call   08122eb8 <+0x42b>
08122c7c +0x01ef:  add    $0x10,%esp
08122c7f +0x01f2:  pop    %ebx
08122c80 +0x01f3:  pop    %esi
08122c81 +0x01f4:  pop    %ebp
08122c82 +0x01f5:  ret
08122c83 +0x01f6:  nop
08122c84 +0x01f7:  push   %ebp
08122c85 +0x01f8:  mov    %esp,%ebp
08122c87 +0x01fa:  sub    $0x28,%esp
08122c8a +0x01fd:  mov    0xc(%ebp),%eax
08122c8d +0x0200:  mov    %eax,(%esp)
08122c90 +0x0203:  call   08122f42 <+0x4b5>
08122c95 +0x0208:  mov    (%eax),%eax
08122c97 +0x020a:  mov    %eax,-0xc(%ebp)
08122c9a +0x020d:  lea    -0xc(%ebp),%eax
08122c9d +0x0210:  mov    %eax,0x4(%esp)
08122ca1 +0x0214:  mov    0x8(%ebp),%eax
08122ca4 +0x0217:  mov    %eax,(%esp)
08122ca7 +0x021a:  call   08122f4a <+0x4bd>
08122cac +0x021f:  leave
08122cad +0x0220:  ret
08122cae +0x0221:  push   %ebp
08122caf +0x0222:  mov    %esp,%ebp
08122cb1 +0x0224:  mov    0x8(%ebp),%eax
08122cb4 +0x0227:  mov    (%eax),%eax
08122cb6 +0x0229:  mov    0xc(%ebp),%edx
08122cb9 +0x022c:  shl    $0x2,%edx
08122cbc +0x022f:  add    %edx,%eax
08122cbe +0x0231:  pop    %ebp
08122cbf +0x0232:  ret
08122cc0 +0x0233:  push   %ebp
08122cc1 +0x0234:  mov    %esp,%ebp
08122cc3 +0x0236:  push   %ebx
08122cc4 +0x0237:  sub    $0x14,%esp
08122cc7 +0x023a:  mov    0x8(%ebp),%ebx
08122cca +0x023d:  mov    0xc(%ebp),%eax
08122ccd +0x0240:  mov    0x10(%ebp),%edx
08122cd0 +0x0243:  mov    %edx,0x8(%esp)
08122cd4 +0x0247:  mov    %eax,0x4(%esp)
08122cd8 +0x024b:  mov    %ebx,(%esp)
08122cdb +0x024e:  call   08122fde <+0x551>
08122ce0 +0x0253:  sub    $0x4,%esp
08122ce3 +0x0256:  mov    %ebx,%eax
08122ce5 +0x0258:  mov    -0x4(%ebp),%ebx
08122ce8 +0x025b:  leave
08122ce9 +0x025c:  ret    $0x4
08122cec +0x025f:  push   %ebp
08122ced +0x0260:  mov    %esp,%ebp
08122cef +0x0262:  mov    0xc(%ebp),%eax
08122cf2 +0x0265:  mov    (%eax),%edx
08122cf4 +0x0267:  mov    0x8(%ebp),%eax
08122cf7 +0x026a:  mov    %edx,(%eax)
08122cf9 +0x026c:  pop    %ebp
08122cfa +0x026d:  ret
08122cfb +0x026e:  nop
08122cfc +0x026f:  push   %ebp
08122cfd +0x0270:  mov    %esp,%ebp
08122cff +0x0272:  push   %ebx
08122d00 +0x0273:  sub    $0x14,%esp
08122d03 +0x0276:  mov    0x8(%ebp),%ebx
08122d06 +0x0279:  mov    0xc(%ebp),%eax
08122d09 +0x027c:  mov    %eax,0x4(%esp)
08122d0d +0x0280:  mov    %ebx,(%esp)
08122d10 +0x0283:  call   0812309c <+0x60f>
08122d15 +0x0288:  sub    $0x4,%esp
08122d18 +0x028b:  mov    %ebx,%eax
08122d1a +0x028d:  mov    -0x4(%ebp),%ebx
08122d1d +0x0290:  leave
08122d1e +0x0291:  ret    $0x4
08122d21 +0x0294:  nop
08122d22 +0x0295:  push   %ebp
08122d23 +0x0296:  mov    %esp,%ebp
08122d25 +0x0298:  mov    0x8(%ebp),%eax
08122d28 +0x029b:  mov    (%eax),%edx
08122d2a +0x029d:  mov    0xc(%ebp),%eax
08122d2d +0x02a0:  mov    (%eax),%eax
08122d2f +0x02a2:  cmp    %eax,%edx
08122d31 +0x02a4:  sete   %al
08122d34 +0x02a7:  pop    %ebp
08122d35 +0x02a8:  ret
08122d36 +0x02a9:  push   %ebp
08122d37 +0x02aa:  mov    %esp,%ebp
08122d39 +0x02ac:  mov    0x8(%ebp),%eax
08122d3c +0x02af:  mov    (%eax),%eax
08122d3e +0x02b1:  add    $0x10,%eax
08122d41 +0x02b4:  pop    %ebp
08122d42 +0x02b5:  ret
08122d43 +0x02b6:  nop
08122d44 +0x02b7:  push   %ebp
08122d45 +0x02b8:  mov    %esp,%ebp
08122d47 +0x02ba:  mov    0x8(%ebp),%eax
08122d4a +0x02bd:  mov    0x4(%eax),%eax
08122d4d +0x02c0:  mov    %eax,%edx
08122d4f +0x02c2:  mov    0x8(%ebp),%eax
08122d52 +0x02c5:  mov    (%eax),%eax
08122d54 +0x02c7:  mov    %edx,%ecx
08122d56 +0x02c9:  sub    %eax,%ecx
08122d58 +0x02cb:  mov    %ecx,%eax
08122d5a +0x02cd:  sar    %eax
08122d5c +0x02cf:  imul   $0xb6db6db7,%eax,%eax
08122d62 +0x02d5:  pop    %ebp
08122d63 +0x02d6:  ret
08122d64 +0x02d7:  push   %ebp
08122d65 +0x02d8:  mov    %esp,%ebp
08122d67 +0x02da:  push   %ebx
08122d68 +0x02db:  mov    0x8(%ebp),%eax
08122d6b +0x02de:  mov    (%eax),%edx
08122d6d +0x02e0:  mov    0xc(%ebp),%eax
08122d70 +0x02e3:  add    %eax,%eax
08122d72 +0x02e5:  lea    0x0(,%eax,8),%ecx
08122d79 +0x02ec:  mov    %ecx,%ebx
08122d7b +0x02ee:  sub    %eax,%ebx
08122d7d +0x02f0:  mov    %ebx,%eax
08122d7f +0x02f2:  lea    (%edx,%eax,1),%eax
08122d82 +0x02f5:  pop    %ebx
08122d83 +0x02f6:  pop    %ebp
08122d84 +0x02f7:  ret
08122d85 +0x02f8:  nop
08122d86 +0x02f9:  push   %ebp
08122d87 +0x02fa:  mov    %esp,%ebp
08122d89 +0x02fc:  sub    $0x18,%esp
08122d8c +0x02ff:  mov    0x8(%ebp),%eax
08122d8f +0x0302:  mov    %eax,(%esp)
08122d92 +0x0305:  call   081230c2 <+0x635>
08122d97 +0x030a:  leave
08122d98 +0x030b:  ret
08122d99 +0x030c:  nop
08122d9a +0x030d:  push   %ebp
08122d9b +0x030e:  mov    %esp,%ebp
08122d9d +0x0310:  push   %ebx
08122d9e +0x0311:  sub    $0x14,%esp
08122da1 +0x0314:  mov    0x8(%ebp),%ebx
08122da4 +0x0317:  mov    0xc(%ebp),%eax
08122da7 +0x031a:  mov    %eax,0x4(%esp)
08122dab +0x031e:  mov    %ebx,(%esp)
08122dae +0x0321:  call   081230ce <+0x641>
08122db3 +0x0326:  sub    $0x4,%esp
08122db6 +0x0329:  mov    %ebx,%eax
08122db8 +0x032b:  mov    -0x4(%ebp),%ebx
08122dbb +0x032e:  leave
08122dbc +0x032f:  ret    $0x4
08122dbf +0x0332:  nop
08122dc0 +0x0333:  push   %ebp
08122dc1 +0x0334:  mov    %esp,%ebp
08122dc3 +0x0336:  push   %ebx
08122dc4 +0x0337:  sub    $0x14,%esp
08122dc7 +0x033a:  mov    0x8(%ebp),%ebx
08122dca +0x033d:  mov    0xc(%ebp),%eax
08122dcd +0x0340:  mov    %eax,0x4(%esp)
08122dd1 +0x0344:  mov    %ebx,(%esp)
08122dd4 +0x0347:  call   081230f4 <+0x667>
08122dd9 +0x034c:  sub    $0x4,%esp
08122ddc +0x034f:  mov    %ebx,%eax
08122dde +0x0351:  mov    -0x4(%ebp),%ebx
08122de1 +0x0354:  leave
08122de2 +0x0355:  ret    $0x4
08122de5 +0x0358:  nop
08122de6 +0x0359:  push   %ebp
08122de7 +0x035a:  mov    %esp,%ebp
08122de9 +0x035c:  mov    0x8(%ebp),%eax
08122dec +0x035f:  mov    (%eax),%edx
08122dee +0x0361:  mov    0xc(%ebp),%eax
08122df1 +0x0364:  mov    (%eax),%eax
08122df3 +0x0366:  cmp    %eax,%edx
08122df5 +0x0368:  setne  %al
08122df8 +0x036b:  pop    %ebp
08122df9 +0x036c:  ret
08122dfa +0x036d:  push   %ebp
08122dfb +0x036e:  mov    %esp,%ebp
08122dfd +0x0370:  push   %ebx
08122dfe +0x0371:  sub    $0x14,%esp
08122e01 +0x0374:  mov    0x8(%ebp),%ebx
08122e04 +0x0377:  mov    0xc(%ebp),%eax
08122e07 +0x037a:  movl   $0x4,0x8(%esp)
08122e0f +0x0382:  mov    %eax,0x4(%esp)
08122e13 +0x0386:  mov    %ebx,(%esp)
08122e16 +0x0389:  call   0807d880 <_init+0x178>
08122e1b +0x038e:  mov    0xc(%ebp),%eax
08122e1e +0x0391:  mov    (%eax),%eax
08122e20 +0x0393:  mov    %eax,(%esp)
08122e23 +0x0396:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08122e28 +0x039b:  mov    0xc(%ebp),%edx
08122e2b +0x039e:  mov    %eax,(%edx)
08122e2d +0x03a0:  mov    %ebx,%eax
08122e2f +0x03a2:  add    $0x14,%esp
08122e32 +0x03a5:  pop    %ebx
08122e33 +0x03a6:  pop    %ebp
08122e34 +0x03a7:  ret    $0x4
08122e37 +0x03aa:  nop
08122e38 +0x03ab:  push   %ebp
08122e39 +0x03ac:  mov    %esp,%ebp
08122e3b +0x03ae:  mov    0x8(%ebp),%eax
08122e3e +0x03b1:  mov    0x8(%eax),%eax
08122e41 +0x03b4:  pop    %ebp
08122e42 +0x03b5:  ret
08122e43 +0x03b6:  nop
08122e44 +0x03b7:  push   %ebp
08122e45 +0x03b8:  mov    %esp,%ebp
08122e47 +0x03ba:  push   %ebx
08122e48 +0x03bb:  sub    $0x14,%esp
08122e4b +0x03be:  mov    0x8(%ebp),%ebx
08122e4e +0x03c1:  mov    0xc(%ebp),%eax
08122e51 +0x03c4:  mov    0xc(%eax),%eax
08122e54 +0x03c7:  mov    %eax,0x4(%esp)
08122e58 +0x03cb:  mov    %ebx,(%esp)
08122e5b +0x03ce:  call   08123130 <+0x6a3>
08122e60 +0x03d3:  mov    %ebx,%eax
08122e62 +0x03d5:  add    $0x14,%esp
08122e65 +0x03d8:  pop    %ebx
08122e66 +0x03d9:  pop    %ebp
08122e67 +0x03da:  ret    $0x4
08122e6a +0x03dd:  push   %ebp
08122e6b +0x03de:  mov    %esp,%ebp
08122e6d +0x03e0:  push   %ebx
08122e6e +0x03e1:  sub    $0x14,%esp
08122e71 +0x03e4:  mov    0x8(%ebp),%ebx
08122e74 +0x03e7:  mov    0xc(%ebp),%eax
08122e77 +0x03ea:  add    $0x4,%eax
08122e7a +0x03ed:  mov    %eax,0x4(%esp)
08122e7e +0x03f1:  mov    %ebx,(%esp)
08122e81 +0x03f4:  call   08123130 <+0x6a3>
08122e86 +0x03f9:  mov    %ebx,%eax
08122e88 +0x03fb:  add    $0x14,%esp
08122e8b +0x03fe:  pop    %ebx
08122e8c +0x03ff:  pop    %ebp
08122e8d +0x0400:  ret    $0x4
08122e90 +0x0403:  push   %ebp
08122e91 +0x0404:  mov    %esp,%ebp
08122e93 +0x0406:  sub    $0x18,%esp
08122e96 +0x0409:  mov    0x8(%ebp),%eax
08122e99 +0x040c:  mov    %eax,(%esp)
08122e9c +0x040f:  call   0812316e <+0x6e1>
08122ea1 +0x0414:  leave
08122ea2 +0x0415:  ret
08122ea3 +0x0416:  nop
08122ea4 +0x0417:  push   %ebp
08122ea5 +0x0418:  mov    %esp,%ebp
08122ea7 +0x041a:  sub    $0x18,%esp
08122eaa +0x041d:  mov    0x8(%ebp),%eax
08122ead +0x0420:  mov    %eax,(%esp)
08122eb0 +0x0423:  call   0812313e <+0x6b1>
08122eb5 +0x0428:  leave
08122eb6 +0x0429:  ret
08122eb7 +0x042a:  nop
08122eb8 +0x042b:  push   %ebp
08122eb9 +0x042c:  mov    %esp,%ebp
08122ebb +0x042e:  push   %esi
08122ebc +0x042f:  push   %ebx
08122ebd +0x0430:  sub    $0x10,%esp
08122ec0 +0x0433:  mov    0x8(%ebp),%eax
08122ec3 +0x0436:  mov    0x8(%eax),%eax
08122ec6 +0x0439:  mov    %eax,%edx
08122ec8 +0x043b:  mov    0x8(%ebp),%eax
08122ecb +0x043e:  mov    (%eax),%eax
08122ecd +0x0440:  mov    %edx,%ecx
08122ecf +0x0442:  sub    %eax,%ecx
08122ed1 +0x0444:  mov    %ecx,%eax
08122ed3 +0x0446:  sar    $0x2,%eax
08122ed6 +0x0449:  mov    %eax,%edx
08122ed8 +0x044b:  mov    0x8(%ebp),%eax
08122edb +0x044e:  mov    (%eax),%eax
08122edd +0x0450:  mov    %edx,0x8(%esp)
08122ee1 +0x0454:  mov    %eax,0x4(%esp)
08122ee5 +0x0458:  mov    0x8(%ebp),%eax
08122ee8 +0x045b:  mov    %eax,(%esp)
08122eeb +0x045e:  call   08123182 <+0x6f5>
08122ef0 +0x0463:  jmp    08122f0d <+0x480>
08122ef2 +0x0465:  mov    %edx,%ebx
08122ef4 +0x0467:  mov    %eax,%esi
08122ef6 +0x0469:  mov    0x8(%ebp),%eax
08122ef9 +0x046c:  mov    %eax,(%esp)
08122efc +0x046f:  call   08122e90 <+0x403>
08122f01 +0x0474:  mov    %esi,%eax
08122f03 +0x0476:  mov    %ebx,%edx
08122f05 +0x0478:  mov    %eax,(%esp)
08122f08 +0x047b:  call   08ae3750 <_Unwind_Resume>
08122f0d +0x0480:  mov    0x8(%ebp),%eax
08122f10 +0x0483:  mov    %eax,(%esp)
08122f13 +0x0486:  call   08122e90 <+0x403>
08122f18 +0x048b:  add    $0x10,%esp
08122f1b +0x048e:  pop    %ebx
08122f1c +0x048f:  pop    %esi
08122f1d +0x0490:  pop    %ebp
08122f1e +0x0491:  ret
08122f1f +0x0492:  nop
08122f20 +0x0493:  push   %ebp
08122f21 +0x0494:  mov    %esp,%ebp
08122f23 +0x0496:  mov    0x8(%ebp),%eax
08122f26 +0x0499:  pop    %ebp
08122f27 +0x049a:  ret
08122f28 +0x049b:  push   %ebp
08122f29 +0x049c:  mov    %esp,%ebp
08122f2b +0x049e:  sub    $0x18,%esp
08122f2e +0x04a1:  mov    0xc(%ebp),%eax
08122f31 +0x04a4:  mov    %eax,0x4(%esp)
08122f35 +0x04a8:  mov    0x8(%ebp),%eax
08122f38 +0x04ab:  mov    %eax,(%esp)
08122f3b +0x04ae:  call   081231a9 <+0x71c>
08122f40 +0x04b3:  leave
08122f41 +0x04b4:  ret
08122f42 +0x04b5:  push   %ebp
08122f43 +0x04b6:  mov    %esp,%ebp
08122f45 +0x04b8:  mov    0x8(%ebp),%eax
08122f48 +0x04bb:  pop    %ebp
08122f49 +0x04bc:  ret
08122f4a +0x04bd:  push   %ebp
08122f4b +0x04be:  mov    %esp,%ebp
08122f4d +0x04c0:  sub    $0x28,%esp
08122f50 +0x04c3:  mov    0x8(%ebp),%eax
08122f53 +0x04c6:  mov    0x4(%eax),%edx
08122f56 +0x04c9:  mov    0x8(%ebp),%eax
08122f59 +0x04cc:  mov    0x8(%eax),%eax
08122f5c +0x04cf:  cmp    %eax,%edx
08122f5e +0x04d1:  je     08122f9d <+0x510>
08122f60 +0x04d3:  mov    0xc(%ebp),%eax
08122f63 +0x04d6:  mov    %eax,(%esp)
08122f66 +0x04d9:  call   081231c3 <+0x736>
08122f6b +0x04de:  mov    (%eax),%eax
08122f6d +0x04e0:  mov    %eax,-0x14(%ebp)
08122f70 +0x04e3:  mov    0x8(%ebp),%eax
08122f73 +0x04e6:  mov    0x4(%eax),%edx
08122f76 +0x04e9:  mov    0x8(%ebp),%eax
08122f79 +0x04ec:  lea    -0x14(%ebp),%ecx
08122f7c +0x04ef:  mov    %ecx,0x8(%esp)
08122f80 +0x04f3:  mov    %edx,0x4(%esp)
08122f84 +0x04f7:  mov    %eax,(%esp)
08122f87 +0x04fa:  call   081231cc <+0x73f>
08122f8c +0x04ff:  mov    0x8(%ebp),%eax
08122f8f +0x0502:  mov    0x4(%eax),%eax
08122f92 +0x0505:  lea    0x4(%eax),%edx
08122f95 +0x0508:  mov    0x8(%ebp),%eax
08122f98 +0x050b:  mov    %edx,0x4(%eax)
08122f9b +0x050e:  jmp    08122fdb <+0x54e>
08122f9d +0x0510:  mov    0xc(%ebp),%eax
08122fa0 +0x0513:  mov    %eax,(%esp)
08122fa3 +0x0516:  call   081231c3 <+0x736>
08122fa8 +0x051b:  mov    (%eax),%eax
08122faa +0x051d:  mov    %eax,-0x10(%ebp)
08122fad +0x0520:  lea    -0xc(%ebp),%eax
08122fb0 +0x0523:  mov    0x8(%ebp),%edx
08122fb3 +0x0526:  mov    %edx,0x4(%esp)
08122fb7 +0x052a:  mov    %eax,(%esp)
08122fba +0x052d:  call   08123202 <+0x775>
08122fbf +0x0532:  sub    $0x4,%esp
08122fc2 +0x0535:  lea    -0x10(%ebp),%eax
08122fc5 +0x0538:  mov    %eax,0x8(%esp)
08122fc9 +0x053c:  mov    -0xc(%ebp),%eax
08122fcc +0x053f:  mov    %eax,0x4(%esp)
08122fd0 +0x0543:  mov    0x8(%ebp),%eax
08122fd3 +0x0546:  mov    %eax,(%esp)
08122fd6 +0x0549:  call   08123228 <+0x79b>
08122fdb +0x054e:  leave
08122fdc +0x054f:  ret
08122fdd +0x0550:  nop
08122fde +0x0551:  push   %ebp
08122fdf +0x0552:  mov    %esp,%ebp
08122fe1 +0x0554:  push   %esi
08122fe2 +0x0555:  push   %ebx
08122fe3 +0x0556:  sub    $0x30,%esp
08122fe6 +0x0559:  mov    0x8(%ebp),%ebx
08122fe9 +0x055c:  mov    0xc(%ebp),%eax
08122fec +0x055f:  mov    %eax,(%esp)
08122fef +0x0562:  call   081234ea <+0xa5d>
08122ff4 +0x0567:  mov    %eax,%esi
08122ff6 +0x0569:  mov    0xc(%ebp),%eax
08122ff9 +0x056c:  mov    %eax,(%esp)
08122ffc +0x056f:  call   08122e38 <+0x3ab>
08123001 +0x0574:  lea    -0x10(%ebp),%edx
08123004 +0x0577:  mov    0x10(%ebp),%ecx
08123007 +0x057a:  mov    %ecx,0x10(%esp)
0812300b +0x057e:  mov    %esi,0xc(%esp)
0812300f +0x0582:  mov    %eax,0x8(%esp)
08123013 +0x0586:  mov    0xc(%ebp),%eax
08123016 +0x0589:  mov    %eax,0x4(%esp)
0812301a +0x058d:  mov    %edx,(%esp)
0812301d +0x0590:  call   081234f6 <+0xa69>
08123022 +0x0595:  sub    $0x4,%esp
08123025 +0x0598:  lea    -0xc(%ebp),%eax
08123028 +0x059b:  mov    0xc(%ebp),%edx
0812302b +0x059e:  mov    %edx,0x4(%esp)
0812302f +0x05a2:  mov    %eax,(%esp)
08123032 +0x05a5:  call   0812309c <+0x60f>
08123037 +0x05aa:  sub    $0x4,%esp
0812303a +0x05ad:  lea    -0xc(%ebp),%eax
0812303d +0x05b0:  mov    %eax,0x4(%esp)
08123041 +0x05b4:  lea    -0x10(%ebp),%eax
08123044 +0x05b7:  mov    %eax,(%esp)
08123047 +0x05ba:  call   08123594 <+0xb07>
0812304c +0x05bf:  test   %al,%al
0812304e +0x05c1:  jne    08123075 <+0x5e8>
08123050 +0x05c3:  mov    -0x10(%ebp),%eax
08123053 +0x05c6:  mov    %eax,(%esp)
08123056 +0x05c9:  call   08123572 <+0xae5>
0812305b +0x05ce:  mov    0xc(%ebp),%edx
0812305e +0x05d1:  mov    %eax,0x8(%esp)
08123062 +0x05d5:  mov    0x10(%ebp),%eax
08123065 +0x05d8:  mov    %eax,0x4(%esp)
08123069 +0x05dc:  mov    %edx,(%esp)
0812306c +0x05df:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
08123071 +0x05e4:  test   %al,%al
08123073 +0x05e6:  je     08123089 <+0x5fc>
08123075 +0x05e8:  mov    0xc(%ebp),%eax
08123078 +0x05eb:  mov    %eax,0x4(%esp)
0812307c +0x05ef:  mov    %ebx,(%esp)
0812307f +0x05f2:  call   0812309c <+0x60f>
08123084 +0x05f7:  sub    $0x4,%esp
08123087 +0x05fa:  jmp    0812308e <+0x601>
08123089 +0x05fc:  mov    -0x10(%ebp),%eax
0812308c +0x05ff:  mov    %eax,(%ebx)
0812308e +0x0601:  mov    %ebx,%eax
08123090 +0x0603:  lea    -0x8(%ebp),%esp
08123093 +0x0606:  add    $0x0,%esp
08123096 +0x0609:  pop    %ebx
08123097 +0x060a:  pop    %esi
08123098 +0x060b:  pop    %ebp
08123099 +0x060c:  ret    $0x4
0812309c +0x060f:  push   %ebp
0812309d +0x0610:  mov    %esp,%ebp
0812309f +0x0612:  push   %ebx
081230a0 +0x0613:  sub    $0x14,%esp
081230a3 +0x0616:  mov    0x8(%ebp),%ebx
081230a6 +0x0619:  mov    0xc(%ebp),%eax
081230a9 +0x061c:  add    $0x4,%eax
081230ac +0x061f:  mov    %eax,0x4(%esp)
081230b0 +0x0623:  mov    %ebx,(%esp)
081230b3 +0x0626:  call   081235a8 <+0xb1b>
081230b8 +0x062b:  mov    %ebx,%eax
081230ba +0x062d:  add    $0x14,%esp
081230bd +0x0630:  pop    %ebx
081230be +0x0631:  pop    %ebp
081230bf +0x0632:  ret    $0x4
081230c2 +0x0635:  push   %ebp
081230c3 +0x0636:  mov    %esp,%ebp
081230c5 +0x0638:  mov    0x8(%ebp),%eax
081230c8 +0x063b:  mov    0x14(%eax),%eax
081230cb +0x063e:  pop    %ebp
081230cc +0x063f:  ret
081230cd +0x0640:  nop
081230ce +0x0641:  push   %ebp
081230cf +0x0642:  mov    %esp,%ebp
081230d1 +0x0644:  push   %ebx
081230d2 +0x0645:  sub    $0x14,%esp
081230d5 +0x0648:  mov    0x8(%ebp),%ebx
081230d8 +0x064b:  mov    0xc(%ebp),%eax
081230db +0x064e:  mov    0xc(%eax),%eax
081230de +0x0651:  mov    %eax,0x4(%esp)
081230e2 +0x0655:  mov    %ebx,(%esp)
081230e5 +0x0658:  call   081235b6 <+0xb29>
081230ea +0x065d:  mov    %ebx,%eax
081230ec +0x065f:  add    $0x14,%esp
081230ef +0x0662:  pop    %ebx
081230f0 +0x0663:  pop    %ebp
081230f1 +0x0664:  ret    $0x4
081230f4 +0x0667:  push   %ebp
081230f5 +0x0668:  mov    %esp,%ebp
081230f7 +0x066a:  push   %ebx
081230f8 +0x066b:  sub    $0x14,%esp
081230fb +0x066e:  mov    0x8(%ebp),%ebx
081230fe +0x0671:  mov    0xc(%ebp),%eax
08123101 +0x0674:  add    $0x4,%eax
08123104 +0x0677:  mov    %eax,0x4(%esp)
08123108 +0x067b:  mov    %ebx,(%esp)
0812310b +0x067e:  call   081235b6 <+0xb29>
08123110 +0x0683:  mov    %ebx,%eax
08123112 +0x0685:  add    $0x14,%esp
08123115 +0x0688:  pop    %ebx
08123116 +0x0689:  pop    %ebp
08123117 +0x068a:  ret    $0x4
0812311a +0x068d:  push   %ebp
0812311b +0x068e:  mov    %esp,%ebp
0812311d +0x0690:  mov    0x8(%ebp),%eax
08123120 +0x0693:  mov    0xc(%eax),%eax
08123123 +0x0696:  pop    %ebp
08123124 +0x0697:  ret
08123125 +0x0698:  push   %ebp
08123126 +0x0699:  mov    %esp,%ebp
08123128 +0x069b:  mov    0x8(%ebp),%eax
0812312b +0x069e:  mov    0x8(%eax),%eax
0812312e +0x06a1:  pop    %ebp
0812312f +0x06a2:  ret
08123130 +0x06a3:  push   %ebp
08123131 +0x06a4:  mov    %esp,%ebp
08123133 +0x06a6:  mov    0xc(%ebp),%edx
08123136 +0x06a9:  mov    0x8(%ebp),%eax
08123139 +0x06ac:  mov    %edx,(%eax)
0812313b +0x06ae:  pop    %ebp
0812313c +0x06af:  ret
0812313d +0x06b0:  nop
0812313e +0x06b1:  push   %ebp
0812313f +0x06b2:  mov    %esp,%ebp
08123141 +0x06b4:  sub    $0x18,%esp
08123144 +0x06b7:  mov    0x8(%ebp),%eax
08123147 +0x06ba:  mov    %eax,(%esp)
0812314a +0x06bd:  call   081235c4 <+0xb37>
0812314f +0x06c2:  mov    0x8(%ebp),%eax
08123152 +0x06c5:  movl   $0x0,(%eax)
08123158 +0x06cb:  mov    0x8(%ebp),%eax
0812315b +0x06ce:  movl   $0x0,0x4(%eax)
08123162 +0x06d5:  mov    0x8(%ebp),%eax
08123165 +0x06d8:  movl   $0x0,0x8(%eax)
0812316c +0x06df:  leave
0812316d +0x06e0:  ret
0812316e +0x06e1:  push   %ebp
0812316f +0x06e2:  mov    %esp,%ebp
08123171 +0x06e4:  sub    $0x18,%esp
08123174 +0x06e7:  mov    0x8(%ebp),%eax
08123177 +0x06ea:  mov    %eax,(%esp)
0812317a +0x06ed:  call   081235d8 <+0xb4b>
0812317f +0x06f2:  leave
08123180 +0x06f3:  ret
08123181 +0x06f4:  nop
08123182 +0x06f5:  push   %ebp
08123183 +0x06f6:  mov    %esp,%ebp
08123185 +0x06f8:  sub    $0x18,%esp
08123188 +0x06fb:  cmpl   $0x0,0xc(%ebp)
0812318c +0x06ff:  je     081231a7 <+0x71a>
0812318e +0x0701:  mov    0x8(%ebp),%eax
08123191 +0x0704:  mov    0x10(%ebp),%edx
08123194 +0x0707:  mov    %edx,0x8(%esp)
08123198 +0x070b:  mov    0xc(%ebp),%edx
0812319b +0x070e:  mov    %edx,0x4(%esp)
0812319f +0x0712:  mov    %eax,(%esp)
081231a2 +0x0715:  call   081235de <+0xb51>
081231a7 +0x071a:  leave
081231a8 +0x071b:  ret
081231a9 +0x071c:  push   %ebp
081231aa +0x071d:  mov    %esp,%ebp
081231ac +0x071f:  sub    $0x18,%esp
081231af +0x0722:  mov    0xc(%ebp),%eax
081231b2 +0x0725:  mov    %eax,0x4(%esp)
081231b6 +0x0729:  mov    0x8(%ebp),%eax
081231b9 +0x072c:  mov    %eax,(%esp)
081231bc +0x072f:  call   081235f1 <+0xb64>
081231c1 +0x0734:  leave
081231c2 +0x0735:  ret
081231c3 +0x0736:  push   %ebp
081231c4 +0x0737:  mov    %esp,%ebp
081231c6 +0x0739:  mov    0x8(%ebp),%eax
081231c9 +0x073c:  pop    %ebp
081231ca +0x073d:  ret
081231cb +0x073e:  nop
081231cc +0x073f:  push   %ebp
081231cd +0x0740:  mov    %esp,%ebp
081231cf +0x0742:  push   %ebx
081231d0 +0x0743:  sub    $0x14,%esp
081231d3 +0x0746:  mov    0x10(%ebp),%eax
081231d6 +0x0749:  mov    %eax,(%esp)
081231d9 +0x074c:  call   081231c3 <+0x736>
081231de +0x0751:  mov    (%eax),%ebx
081231e0 +0x0753:  mov    0xc(%ebp),%eax
081231e3 +0x0756:  mov    %eax,0x4(%esp)
081231e7 +0x075a:  movl   $0x4,(%esp)
081231ee +0x0761:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081231f3 +0x0766:  mov    %eax,%edx
081231f5 +0x0768:  test   %edx,%edx
081231f7 +0x076a:  je     081231fb <+0x76e>
081231f9 +0x076c:  mov    %ebx,(%eax)
081231fb +0x076e:  add    $0x14,%esp
081231fe +0x0771:  pop    %ebx
081231ff +0x0772:  pop    %ebp
08123200 +0x0773:  ret
08123201 +0x0774:  nop
08123202 +0x0775:  push   %ebp
08123203 +0x0776:  mov    %esp,%ebp
08123205 +0x0778:  push   %ebx
08123206 +0x0779:  sub    $0x14,%esp
08123209 +0x077c:  mov    0x8(%ebp),%ebx
0812320c +0x077f:  mov    0xc(%ebp),%eax
0812320f +0x0782:  add    $0x4,%eax
08123212 +0x0785:  mov    %eax,0x4(%esp)
08123216 +0x0789:  mov    %ebx,(%esp)
08123219 +0x078c:  call   081235f6 <+0xb69>
0812321e +0x0791:  mov    %ebx,%eax
08123220 +0x0793:  add    $0x14,%esp
08123223 +0x0796:  pop    %ebx
08123224 +0x0797:  pop    %ebp
08123225 +0x0798:  ret    $0x4
08123228 +0x079b:  push   %ebp
08123229 +0x079c:  mov    %esp,%ebp
0812322b +0x079e:  push   %esi
0812322c +0x079f:  push   %ebx
0812322d +0x07a0:  sub    $0x30,%esp
08123230 +0x07a3:  mov    0x8(%ebp),%eax
08123233 +0x07a6:  mov    0x4(%eax),%edx
08123236 +0x07a9:  mov    0x8(%ebp),%eax
08123239 +0x07ac:  mov    0x8(%eax),%eax
0812323c +0x07af:  cmp    %eax,%edx
0812323e +0x07b1:  je     081232d5 <+0x848>
08123244 +0x07b7:  mov    0x8(%ebp),%eax
08123247 +0x07ba:  mov    0x4(%eax),%eax
0812324a +0x07bd:  sub    $0x4,%eax
0812324d +0x07c0:  mov    %eax,(%esp)
08123250 +0x07c3:  call   08122f42 <+0x4b5>
08123255 +0x07c8:  mov    (%eax),%eax
08123257 +0x07ca:  mov    %eax,-0x24(%ebp)
0812325a +0x07cd:  mov    0x8(%ebp),%eax
0812325d +0x07d0:  mov    0x4(%eax),%edx
08123260 +0x07d3:  mov    0x8(%ebp),%eax
08123263 +0x07d6:  lea    -0x24(%ebp),%ecx
08123266 +0x07d9:  mov    %ecx,0x8(%esp)
0812326a +0x07dd:  mov    %edx,0x4(%esp)
0812326e +0x07e1:  mov    %eax,(%esp)
08123271 +0x07e4:  call   081231cc <+0x73f>
08123276 +0x07e9:  mov    0x8(%ebp),%eax
08123279 +0x07ec:  mov    0x4(%eax),%eax
0812327c +0x07ef:  lea    0x4(%eax),%edx
0812327f +0x07f2:  mov    0x8(%ebp),%eax
08123282 +0x07f5:  mov    %edx,0x4(%eax)
08123285 +0x07f8:  mov    0x8(%ebp),%eax
08123288 +0x07fb:  mov    0x4(%eax),%eax
0812328b +0x07fe:  lea    -0x4(%eax),%esi
0812328e +0x0801:  mov    0x8(%ebp),%eax
08123291 +0x0804:  mov    0x4(%eax),%eax
08123294 +0x0807:  lea    -0x8(%eax),%ebx
08123297 +0x080a:  lea    0xc(%ebp),%eax
0812329a +0x080d:  mov    %eax,(%esp)
0812329d +0x0810:  call   08123606 <+0xb79>
081232a2 +0x0815:  mov    (%eax),%eax
081232a4 +0x0817:  mov    %esi,0x8(%esp)
081232a8 +0x081b:  mov    %ebx,0x4(%esp)
081232ac +0x081f:  mov    %eax,(%esp)
081232af +0x0822:  call   0812360e <+0xb81>
081232b4 +0x0827:  lea    0xc(%ebp),%eax
081232b7 +0x082a:  mov    %eax,(%esp)
081232ba +0x082d:  call   08123646 <+0xbb9>
081232bf +0x0832:  mov    %eax,%ebx
081232c1 +0x0834:  mov    0x10(%ebp),%eax
081232c4 +0x0837:  mov    %eax,(%esp)
081232c7 +0x083a:  call   081231c3 <+0x736>
081232cc +0x083f:  mov    (%eax),%eax
081232ce +0x0841:  mov    %eax,(%ebx)
081232d0 +0x0843:  jmp    081234df <+0xa52>
081232d5 +0x0848:  movl   $"vector::_M_insert_aux",0x8(%esp)
081232dd +0x0850:  movl   $0x1,0x4(%esp)
081232e5 +0x0858:  mov    0x8(%ebp),%eax
081232e8 +0x085b:  mov    %eax,(%esp)
081232eb +0x085e:  call   08123650 <+0xbc3>
081232f0 +0x0863:  mov    %eax,-0x18(%ebp)
081232f3 +0x0866:  lea    -0x20(%ebp),%eax
081232f6 +0x0869:  mov    0x8(%ebp),%edx
081232f9 +0x086c:  mov    %edx,0x4(%esp)
081232fd +0x0870:  mov    %eax,(%esp)
08123300 +0x0873:  call   081236f6 <+0xc69>
08123305 +0x0878:  sub    $0x4,%esp
08123308 +0x087b:  lea    -0x20(%ebp),%eax
0812330b +0x087e:  mov    %eax,0x4(%esp)
0812330f +0x0882:  lea    0xc(%ebp),%eax
08123312 +0x0885:  mov    %eax,(%esp)
08123315 +0x0888:  call   08123719 <+0xc8c>
0812331a +0x088d:  mov    %eax,-0x14(%ebp)
0812331d +0x0890:  mov    0x8(%ebp),%eax
08123320 +0x0893:  mov    -0x18(%ebp),%edx
08123323 +0x0896:  mov    %edx,0x4(%esp)
08123327 +0x089a:  mov    %eax,(%esp)
0812332a +0x089d:  call   0812374c <+0xcbf>
0812332f +0x08a2:  mov    %eax,-0x10(%ebp)
08123332 +0x08a5:  mov    -0x10(%ebp),%eax
08123335 +0x08a8:  mov    %eax,-0xc(%ebp)
08123338 +0x08ab:  mov    0x10(%ebp),%eax
0812333b +0x08ae:  mov    %eax,(%esp)
0812333e +0x08b1:  call   081231c3 <+0x736>
08123343 +0x08b6:  mov    (%eax),%eax
08123345 +0x08b8:  mov    %eax,-0x1c(%ebp)
08123348 +0x08bb:  mov    -0x14(%ebp),%eax
0812334b +0x08be:  shl    $0x2,%eax
0812334e +0x08c1:  mov    %eax,%edx
08123350 +0x08c3:  add    -0x10(%ebp),%edx
08123353 +0x08c6:  mov    0x8(%ebp),%eax
08123356 +0x08c9:  lea    -0x1c(%ebp),%ecx
08123359 +0x08cc:  mov    %ecx,0x8(%esp)
0812335d +0x08d0:  mov    %edx,0x4(%esp)
08123361 +0x08d4:  mov    %eax,(%esp)
08123364 +0x08d7:  call   081231cc <+0x73f>
08123369 +0x08dc:  movl   $0x0,-0xc(%ebp)
08123370 +0x08e3:  mov    0x8(%ebp),%eax
08123373 +0x08e6:  mov    %eax,(%esp)
08123376 +0x08e9:  call   08122f20 <+0x493>
0812337b +0x08ee:  mov    %eax,%ebx
0812337d +0x08f0:  lea    0xc(%ebp),%eax
08123380 +0x08f3:  mov    %eax,(%esp)
08123383 +0x08f6:  call   08123606 <+0xb79>
08123388 +0x08fb:  mov    (%eax),%edx
0812338a +0x08fd:  mov    0x8(%ebp),%eax
0812338d +0x0900:  mov    (%eax),%eax
0812338f +0x0902:  mov    %ebx,0xc(%esp)
08123393 +0x0906:  mov    -0x10(%ebp),%ecx
08123396 +0x0909:  mov    %ecx,0x8(%esp)
0812339a +0x090d:  mov    %edx,0x4(%esp)
0812339e +0x0911:  mov    %eax,(%esp)
081233a1 +0x0914:  call   0812377b <+0xcee>
081233a6 +0x0919:  mov    %eax,-0xc(%ebp)
081233a9 +0x091c:  addl   $0x4,-0xc(%ebp)
081233ad +0x0920:  mov    0x8(%ebp),%eax
081233b0 +0x0923:  mov    %eax,(%esp)
081233b3 +0x0926:  call   08122f20 <+0x493>
081233b8 +0x092b:  mov    %eax,%ebx
081233ba +0x092d:  mov    0x8(%ebp),%eax
081233bd +0x0930:  mov    0x4(%eax),%esi
081233c0 +0x0933:  lea    0xc(%ebp),%eax
081233c3 +0x0936:  mov    %eax,(%esp)
081233c6 +0x0939:  call   08123606 <+0xb79>
081233cb +0x093e:  mov    (%eax),%eax
081233cd +0x0940:  mov    %ebx,0xc(%esp)
081233d1 +0x0944:  mov    -0xc(%ebp),%edx
081233d4 +0x0947:  mov    %edx,0x8(%esp)
081233d8 +0x094b:  mov    %esi,0x4(%esp)
081233dc +0x094f:  mov    %eax,(%esp)
081233df +0x0952:  call   0812377b <+0xcee>
081233e4 +0x0957:  mov    %eax,-0xc(%ebp)
081233e7 +0x095a:  mov    0x8(%ebp),%eax
081233ea +0x095d:  mov    %eax,(%esp)
081233ed +0x0960:  call   08122f20 <+0x493>
081233f2 +0x0965:  mov    0x8(%ebp),%edx
081233f5 +0x0968:  mov    0x4(%edx),%ecx
081233f8 +0x096b:  mov    0x8(%ebp),%edx
081233fb +0x096e:  mov    (%edx),%edx
081233fd +0x0970:  mov    %eax,0x8(%esp)
08123401 +0x0974:  mov    %ecx,0x4(%esp)
08123405 +0x0978:  mov    %edx,(%esp)
08123408 +0x097b:  call   08122f28 <+0x49b>
0812340d +0x0980:  mov    0x8(%ebp),%eax
08123410 +0x0983:  mov    0x8(%eax),%eax
08123413 +0x0986:  mov    %eax,%edx
08123415 +0x0988:  mov    0x8(%ebp),%eax
08123418 +0x098b:  mov    (%eax),%eax
0812341a +0x098d:  mov    %edx,%ecx
0812341c +0x098f:  sub    %eax,%ecx
0812341e +0x0991:  mov    %ecx,%eax
08123420 +0x0993:  sar    $0x2,%eax
08123423 +0x0996:  mov    %eax,%ecx
08123425 +0x0998:  mov    0x8(%ebp),%eax
08123428 +0x099b:  mov    (%eax),%edx
0812342a +0x099d:  mov    0x8(%ebp),%eax
0812342d +0x09a0:  mov    %ecx,0x8(%esp)
08123431 +0x09a4:  mov    %edx,0x4(%esp)
08123435 +0x09a8:  mov    %eax,(%esp)
08123438 +0x09ab:  call   08123182 <+0x6f5>
0812343d +0x09b0:  mov    0x8(%ebp),%eax
08123440 +0x09b3:  mov    -0x10(%ebp),%edx
08123443 +0x09b6:  mov    %edx,(%eax)
08123445 +0x09b8:  mov    0x8(%ebp),%eax
08123448 +0x09bb:  mov    -0xc(%ebp),%edx
0812344b +0x09be:  mov    %edx,0x4(%eax)
0812344e +0x09c1:  mov    -0x18(%ebp),%eax
08123451 +0x09c4:  shl    $0x2,%eax
08123454 +0x09c7:  mov    %eax,%edx
08123456 +0x09c9:  add    -0x10(%ebp),%edx
08123459 +0x09cc:  mov    0x8(%ebp),%eax
0812345c +0x09cf:  mov    %edx,0x8(%eax)
0812345f +0x09d2:  jmp    081234df <+0xa52>
08123461 +0x09d4:  mov    %eax,(%esp)
08123464 +0x09d7:  call   08725ce0 <__cxa_begin_catch>
08123469 +0x09dc:  cmpl   $0x0,-0xc(%ebp)
0812346d +0x09e0:  jne    0812348b <+0x9fe>
0812346f +0x09e2:  mov    -0x14(%ebp),%eax
08123472 +0x09e5:  shl    $0x2,%eax
08123475 +0x09e8:  mov    %eax,%edx
08123477 +0x09ea:  add    -0x10(%ebp),%edx
0812347a +0x09ed:  mov    0x8(%ebp),%eax
0812347d +0x09f0:  mov    %edx,0x4(%esp)
08123481 +0x09f4:  mov    %eax,(%esp)
08123484 +0x09f7:  call   081237ce <+0xd41>
08123489 +0x09fc:  jmp    081234ac <+0xa1f>
0812348b +0x09fe:  mov    0x8(%ebp),%eax
0812348e +0x0a01:  mov    %eax,(%esp)
08123491 +0x0a04:  call   08122f20 <+0x493>
08123496 +0x0a09:  mov    %eax,0x8(%esp)
0812349a +0x0a0d:  mov    -0xc(%ebp),%eax
0812349d +0x0a10:  mov    %eax,0x4(%esp)
081234a1 +0x0a14:  mov    -0x10(%ebp),%eax
081234a4 +0x0a17:  mov    %eax,(%esp)
081234a7 +0x0a1a:  call   08122f28 <+0x49b>
081234ac +0x0a1f:  mov    0x8(%ebp),%eax
081234af +0x0a22:  mov    -0x18(%ebp),%edx
081234b2 +0x0a25:  mov    %edx,0x8(%esp)
081234b6 +0x0a29:  mov    -0x10(%ebp),%edx
081234b9 +0x0a2c:  mov    %edx,0x4(%esp)
081234bd +0x0a30:  mov    %eax,(%esp)
081234c0 +0x0a33:  call   08123182 <+0x6f5>
081234c5 +0x0a38:  call   08724be0 <__cxa_rethrow>
081234ca +0x0a3d:  mov    %edx,%ebx
081234cc +0x0a3f:  mov    %eax,%esi
081234ce +0x0a41:  call   08725c30 <__cxa_end_catch>
081234d3 +0x0a46:  mov    %esi,%eax
081234d5 +0x0a48:  mov    %ebx,%edx
081234d7 +0x0a4a:  mov    %eax,(%esp)
081234da +0x0a4d:  call   08ae3750 <_Unwind_Resume>
081234df +0x0a52:  lea    -0x8(%ebp),%esp
081234e2 +0x0a55:  add    $0x0,%esp
081234e5 +0x0a58:  pop    %ebx
081234e6 +0x0a59:  pop    %esi
081234e7 +0x0a5a:  pop    %ebp
081234e8 +0x0a5b:  ret
081234e9 +0x0a5c:  nop
081234ea +0x0a5d:  push   %ebp
081234eb +0x0a5e:  mov    %esp,%ebp
081234ed +0x0a60:  mov    0x8(%ebp),%eax
081234f0 +0x0a63:  add    $0x4,%eax
081234f3 +0x0a66:  pop    %ebp
081234f4 +0x0a67:  ret
081234f5 +0x0a68:  nop
081234f6 +0x0a69:  push   %ebp
081234f7 +0x0a6a:  mov    %esp,%ebp
081234f9 +0x0a6c:  push   %ebx
081234fa +0x0a6d:  sub    $0x14,%esp
081234fd +0x0a70:  mov    0x8(%ebp),%ebx
08123500 +0x0a73:  jmp    0812354e <+0xac1>
08123502 +0x0a75:  mov    0x10(%ebp),%eax
08123505 +0x0a78:  mov    %eax,(%esp)
08123508 +0x0a7b:  call   081237d3 <+0xd46>
0812350d +0x0a80:  mov    0xc(%ebp),%edx
08123510 +0x0a83:  mov    0x18(%ebp),%ecx
08123513 +0x0a86:  mov    %ecx,0x8(%esp)
08123517 +0x0a8a:  mov    %eax,0x4(%esp)
0812351b +0x0a8e:  mov    %edx,(%esp)
0812351e +0x0a91:  call   080fa356 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0xb62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0xb62
08123523 +0x0a96:  xor    $0x1,%eax
08123526 +0x0a99:  test   %al,%al
08123528 +0x0a9b:  je     08123540 <+0xab3>
0812352a +0x0a9d:  mov    0x10(%ebp),%eax
0812352d +0x0aa0:  mov    %eax,0x14(%ebp)
08123530 +0x0aa3:  mov    0x10(%ebp),%eax
08123533 +0x0aa6:  mov    %eax,(%esp)
08123536 +0x0aa9:  call   08123125 <+0x698>
0812353b +0x0aae:  mov    %eax,0x10(%ebp)
0812353e +0x0ab1:  jmp    0812354e <+0xac1>
08123540 +0x0ab3:  mov    0x10(%ebp),%eax
08123543 +0x0ab6:  mov    %eax,(%esp)
08123546 +0x0ab9:  call   0812311a <+0x68d>
0812354b +0x0abe:  mov    %eax,0x10(%ebp)
0812354e +0x0ac1:  cmpl   $0x0,0x10(%ebp)
08123552 +0x0ac5:  setne  %al
08123555 +0x0ac8:  test   %al,%al
08123557 +0x0aca:  jne    08123502 <+0xa75>
08123559 +0x0acc:  mov    0x14(%ebp),%eax
0812355c +0x0acf:  mov    %eax,0x4(%esp)
08123560 +0x0ad3:  mov    %ebx,(%esp)
08123563 +0x0ad6:  call   081235a8 <+0xb1b>
08123568 +0x0adb:  mov    %ebx,%eax
0812356a +0x0add:  add    $0x14,%esp
0812356d +0x0ae0:  pop    %ebx
0812356e +0x0ae1:  pop    %ebp
0812356f +0x0ae2:  ret    $0x4
08123572 +0x0ae5:  push   %ebp
08123573 +0x0ae6:  mov    %esp,%ebp
08123575 +0x0ae8:  sub    $0x28,%esp
08123578 +0x0aeb:  mov    0x8(%ebp),%eax
0812357b +0x0aee:  mov    %eax,(%esp)
0812357e +0x0af1:  call   081237f5 <+0xd68>
08123583 +0x0af6:  mov    %eax,0x4(%esp)
08123587 +0x0afa:  lea    -0x9(%ebp),%eax
0812358a +0x0afd:  mov    %eax,(%esp)
0812358d +0x0b00:  call   08123800 <+0xd73>
08123592 +0x0b05:  leave
08123593 +0x0b06:  ret
08123594 +0x0b07:  push   %ebp
08123595 +0x0b08:  mov    %esp,%ebp
08123597 +0x0b0a:  mov    0x8(%ebp),%eax
0812359a +0x0b0d:  mov    (%eax),%edx
0812359c +0x0b0f:  mov    0xc(%ebp),%eax
0812359f +0x0b12:  mov    (%eax),%eax
081235a1 +0x0b14:  cmp    %eax,%edx
081235a3 +0x0b16:  sete   %al
081235a6 +0x0b19:  pop    %ebp
081235a7 +0x0b1a:  ret
081235a8 +0x0b1b:  push   %ebp
081235a9 +0x0b1c:  mov    %esp,%ebp
081235ab +0x0b1e:  mov    0xc(%ebp),%edx
081235ae +0x0b21:  mov    0x8(%ebp),%eax
081235b1 +0x0b24:  mov    %edx,(%eax)
081235b3 +0x0b26:  pop    %ebp
081235b4 +0x0b27:  ret
081235b5 +0x0b28:  nop
081235b6 +0x0b29:  push   %ebp
081235b7 +0x0b2a:  mov    %esp,%ebp
081235b9 +0x0b2c:  mov    0xc(%ebp),%edx
081235bc +0x0b2f:  mov    0x8(%ebp),%eax
081235bf +0x0b32:  mov    %edx,(%eax)
081235c1 +0x0b34:  pop    %ebp
081235c2 +0x0b35:  ret
081235c3 +0x0b36:  nop
081235c4 +0x0b37:  push   %ebp
081235c5 +0x0b38:  mov    %esp,%ebp
081235c7 +0x0b3a:  sub    $0x18,%esp
081235ca +0x0b3d:  mov    0x8(%ebp),%eax
081235cd +0x0b40:  mov    %eax,(%esp)
081235d0 +0x0b43:  call   08123808 <+0xd7b>
081235d5 +0x0b48:  leave
081235d6 +0x0b49:  ret
081235d7 +0x0b4a:  nop
081235d8 +0x0b4b:  push   %ebp
081235d9 +0x0b4c:  mov    %esp,%ebp
081235db +0x0b4e:  pop    %ebp
081235dc +0x0b4f:  ret
081235dd +0x0b50:  nop
081235de +0x0b51:  push   %ebp
081235df +0x0b52:  mov    %esp,%ebp
081235e1 +0x0b54:  sub    $0x18,%esp
081235e4 +0x0b57:  mov    0xc(%ebp),%eax
081235e7 +0x0b5a:  mov    %eax,(%esp)
081235ea +0x0b5d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081235ef +0x0b62:  leave
081235f0 +0x0b63:  ret
081235f1 +0x0b64:  push   %ebp
081235f2 +0x0b65:  mov    %esp,%ebp
081235f4 +0x0b67:  pop    %ebp
081235f5 +0x0b68:  ret
081235f6 +0x0b69:  push   %ebp
081235f7 +0x0b6a:  mov    %esp,%ebp
081235f9 +0x0b6c:  mov    0xc(%ebp),%eax
081235fc +0x0b6f:  mov    (%eax),%edx
081235fe +0x0b71:  mov    0x8(%ebp),%eax
08123601 +0x0b74:  mov    %edx,(%eax)
08123603 +0x0b76:  pop    %ebp
08123604 +0x0b77:  ret
08123605 +0x0b78:  nop
08123606 +0x0b79:  push   %ebp
08123607 +0x0b7a:  mov    %esp,%ebp
08123609 +0x0b7c:  mov    0x8(%ebp),%eax
0812360c +0x0b7f:  pop    %ebp
0812360d +0x0b80:  ret
0812360e +0x0b81:  push   %ebp
0812360f +0x0b82:  mov    %esp,%ebp
08123611 +0x0b84:  push   %ebx
08123612 +0x0b85:  sub    $0x14,%esp
08123615 +0x0b88:  mov    0xc(%ebp),%eax
08123618 +0x0b8b:  mov    %eax,(%esp)
0812361b +0x0b8e:  call   0812380d <+0xd80>
08123620 +0x0b93:  mov    %eax,%ebx
08123622 +0x0b95:  mov    0x8(%ebp),%eax
08123625 +0x0b98:  mov    %eax,(%esp)
08123628 +0x0b9b:  call   0812380d <+0xd80>
0812362d +0x0ba0:  mov    0x10(%ebp),%edx
08123630 +0x0ba3:  mov    %edx,0x8(%esp)
08123634 +0x0ba7:  mov    %ebx,0x4(%esp)
08123638 +0x0bab:  mov    %eax,(%esp)
0812363b +0x0bae:  call   08123815 <+0xd88>
08123640 +0x0bb3:  add    $0x14,%esp
08123643 +0x0bb6:  pop    %ebx
08123644 +0x0bb7:  pop    %ebp
08123645 +0x0bb8:  ret
08123646 +0x0bb9:  push   %ebp
08123647 +0x0bba:  mov    %esp,%ebp
08123649 +0x0bbc:  mov    0x8(%ebp),%eax
0812364c +0x0bbf:  mov    (%eax),%eax
0812364e +0x0bc1:  pop    %ebp
0812364f +0x0bc2:  ret
08123650 +0x0bc3:  push   %ebp
08123651 +0x0bc4:  mov    %esp,%ebp
08123653 +0x0bc6:  push   %ebx
08123654 +0x0bc7:  sub    $0x24,%esp
08123657 +0x0bca:  mov    0x8(%ebp),%eax
0812365a +0x0bcd:  mov    %eax,(%esp)
0812365d +0x0bd0:  call   08123876 <+0xde9>
08123662 +0x0bd5:  mov    %eax,%ebx
08123664 +0x0bd7:  mov    0x8(%ebp),%eax
08123667 +0x0bda:  mov    %eax,(%esp)
0812366a +0x0bdd:  call   0812385a <+0xdcd>
0812366f +0x0be2:  mov    %ebx,%edx
08123671 +0x0be4:  sub    %eax,%edx
08123673 +0x0be6:  mov    0xc(%ebp),%eax
08123676 +0x0be9:  cmp    %eax,%edx
08123678 +0x0beb:  setb   %al
0812367b +0x0bee:  test   %al,%al
0812367d +0x0bf0:  je     0812368a <+0xbfd>
0812367f +0x0bf2:  mov    0x10(%ebp),%eax
08123682 +0x0bf5:  mov    %eax,(%esp)
08123685 +0x0bf8:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0812368a +0x0bfd:  mov    0x8(%ebp),%eax
0812368d +0x0c00:  mov    %eax,(%esp)
08123690 +0x0c03:  call   0812385a <+0xdcd>
08123695 +0x0c08:  mov    %eax,%ebx
08123697 +0x0c0a:  mov    0x8(%ebp),%eax
0812369a +0x0c0d:  mov    %eax,(%esp)
0812369d +0x0c10:  call   0812385a <+0xdcd>
081236a2 +0x0c15:  mov    %eax,-0x10(%ebp)
081236a5 +0x0c18:  lea    0xc(%ebp),%eax
081236a8 +0x0c1b:  mov    %eax,0x4(%esp)
081236ac +0x0c1f:  lea    -0x10(%ebp),%eax
081236af +0x0c22:  mov    %eax,(%esp)
081236b2 +0x0c25:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081236b7 +0x0c2a:  mov    (%eax),%eax
081236b9 +0x0c2c:  lea    (%ebx,%eax,1),%eax
081236bc +0x0c2f:  mov    %eax,-0xc(%ebp)
081236bf +0x0c32:  mov    0x8(%ebp),%eax
081236c2 +0x0c35:  mov    %eax,(%esp)
081236c5 +0x0c38:  call   0812385a <+0xdcd>
081236ca +0x0c3d:  cmp    -0xc(%ebp),%eax
081236cd +0x0c40:  ja     081236df <+0xc52>
081236cf +0x0c42:  mov    0x8(%ebp),%eax
081236d2 +0x0c45:  mov    %eax,(%esp)
081236d5 +0x0c48:  call   08123876 <+0xde9>
081236da +0x0c4d:  cmp    -0xc(%ebp),%eax
081236dd +0x0c50:  jae    081236ec <+0xc5f>
081236df +0x0c52:  mov    0x8(%ebp),%eax
081236e2 +0x0c55:  mov    %eax,(%esp)
081236e5 +0x0c58:  call   08123876 <+0xde9>
081236ea +0x0c5d:  jmp    081236ef <+0xc62>
081236ec +0x0c5f:  mov    -0xc(%ebp),%eax
081236ef +0x0c62:  add    $0x24,%esp
081236f2 +0x0c65:  pop    %ebx
081236f3 +0x0c66:  pop    %ebp
081236f4 +0x0c67:  ret
081236f5 +0x0c68:  nop
081236f6 +0x0c69:  push   %ebp
081236f7 +0x0c6a:  mov    %esp,%ebp
081236f9 +0x0c6c:  push   %ebx
081236fa +0x0c6d:  sub    $0x14,%esp
081236fd +0x0c70:  mov    0x8(%ebp),%ebx
08123700 +0x0c73:  mov    0xc(%ebp),%eax
08123703 +0x0c76:  mov    %eax,0x4(%esp)
08123707 +0x0c7a:  mov    %ebx,(%esp)
0812370a +0x0c7d:  call   081235f6 <+0xb69>
0812370f +0x0c82:  mov    %ebx,%eax
08123711 +0x0c84:  add    $0x14,%esp
08123714 +0x0c87:  pop    %ebx
08123715 +0x0c88:  pop    %ebp
08123716 +0x0c89:  ret    $0x4
08123719 +0x0c8c:  push   %ebp
0812371a +0x0c8d:  mov    %esp,%ebp
0812371c +0x0c8f:  push   %ebx
0812371d +0x0c90:  sub    $0x14,%esp
08123720 +0x0c93:  mov    0x8(%ebp),%eax
08123723 +0x0c96:  mov    %eax,(%esp)
08123726 +0x0c99:  call   08123606 <+0xb79>
0812372b +0x0c9e:  mov    (%eax),%eax
0812372d +0x0ca0:  mov    %eax,%ebx
0812372f +0x0ca2:  mov    0xc(%ebp),%eax
08123732 +0x0ca5:  mov    %eax,(%esp)
08123735 +0x0ca8:  call   08123606 <+0xb79>
0812373a +0x0cad:  mov    (%eax),%eax
0812373c +0x0caf:  mov    %ebx,%edx
0812373e +0x0cb1:  sub    %eax,%edx
08123740 +0x0cb3:  mov    %edx,%eax
08123742 +0x0cb5:  sar    $0x2,%eax
08123745 +0x0cb8:  add    $0x14,%esp
08123748 +0x0cbb:  pop    %ebx
08123749 +0x0cbc:  pop    %ebp
0812374a +0x0cbd:  ret
0812374b +0x0cbe:  nop
0812374c +0x0cbf:  push   %ebp
0812374d +0x0cc0:  mov    %esp,%ebp
0812374f +0x0cc2:  sub    $0x18,%esp
08123752 +0x0cc5:  cmpl   $0x0,0xc(%ebp)
08123756 +0x0cc9:  je     08123774 <+0xce7>
08123758 +0x0ccb:  mov    0x8(%ebp),%eax
0812375b +0x0cce:  movl   $0x0,0x8(%esp)
08123763 +0x0cd6:  mov    0xc(%ebp),%edx
08123766 +0x0cd9:  mov    %edx,0x4(%esp)
0812376a +0x0cdd:  mov    %eax,(%esp)
0812376d +0x0ce0:  call   08123892 <+0xe05>
08123772 +0x0ce5:  jmp    08123779 <+0xcec>
08123774 +0x0ce7:  mov    $0x0,%eax
08123779 +0x0cec:  leave
0812377a +0x0ced:  ret
0812377b +0x0cee:  push   %ebp
0812377c +0x0cef:  mov    %esp,%ebp
0812377e +0x0cf1:  sub    $0x28,%esp
08123781 +0x0cf4:  lea    -0x10(%ebp),%eax
08123784 +0x0cf7:  lea    0xc(%ebp),%edx
08123787 +0x0cfa:  mov    %edx,0x4(%esp)
0812378b +0x0cfe:  mov    %eax,(%esp)
0812378e +0x0d01:  call   081238ca <+0xe3d>
08123793 +0x0d06:  sub    $0x4,%esp
08123796 +0x0d09:  lea    -0xc(%ebp),%eax
08123799 +0x0d0c:  lea    0x8(%ebp),%edx
0812379c +0x0d0f:  mov    %edx,0x4(%esp)
081237a0 +0x0d13:  mov    %eax,(%esp)
081237a3 +0x0d16:  call   081238ca <+0xe3d>
081237a8 +0x0d1b:  sub    $0x4,%esp
081237ab +0x0d1e:  mov    0x14(%ebp),%eax
081237ae +0x0d21:  mov    %eax,0xc(%esp)
081237b2 +0x0d25:  mov    0x10(%ebp),%eax
081237b5 +0x0d28:  mov    %eax,0x8(%esp)
081237b9 +0x0d2c:  mov    -0x10(%ebp),%eax
081237bc +0x0d2f:  mov    %eax,0x4(%esp)
081237c0 +0x0d33:  mov    -0xc(%ebp),%eax
081237c3 +0x0d36:  mov    %eax,(%esp)
081237c6 +0x0d39:  call   081238ef <+0xe62>
081237cb +0x0d3e:  leave
081237cc +0x0d3f:  ret
081237cd +0x0d40:  nop
081237ce +0x0d41:  push   %ebp
081237cf +0x0d42:  mov    %esp,%ebp
081237d1 +0x0d44:  pop    %ebp
081237d2 +0x0d45:  ret
081237d3 +0x0d46:  push   %ebp
081237d4 +0x0d47:  mov    %esp,%ebp
081237d6 +0x0d49:  sub    $0x28,%esp
081237d9 +0x0d4c:  mov    0x8(%ebp),%eax
081237dc +0x0d4f:  mov    %eax,(%esp)
081237df +0x0d52:  call   08123910 <+0xe83>
081237e4 +0x0d57:  mov    %eax,0x4(%esp)
081237e8 +0x0d5b:  lea    -0x9(%ebp),%eax
081237eb +0x0d5e:  mov    %eax,(%esp)
081237ee +0x0d61:  call   08123800 <+0xd73>
081237f3 +0x0d66:  leave
081237f4 +0x0d67:  ret
081237f5 +0x0d68:  push   %ebp
081237f6 +0x0d69:  mov    %esp,%ebp
081237f8 +0x0d6b:  mov    0x8(%ebp),%eax
081237fb +0x0d6e:  add    $0x10,%eax
081237fe +0x0d71:  pop    %ebp
081237ff +0x0d72:  ret
08123800 +0x0d73:  push   %ebp
08123801 +0x0d74:  mov    %esp,%ebp
08123803 +0x0d76:  mov    0xc(%ebp),%eax
08123806 +0x0d79:  pop    %ebp
08123807 +0x0d7a:  ret
08123808 +0x0d7b:  push   %ebp
08123809 +0x0d7c:  mov    %esp,%ebp
0812380b +0x0d7e:  pop    %ebp
0812380c +0x0d7f:  ret
0812380d +0x0d80:  push   %ebp
0812380e +0x0d81:  mov    %esp,%ebp
08123810 +0x0d83:  mov    0x8(%ebp),%eax
08123813 +0x0d86:  pop    %ebp
08123814 +0x0d87:  ret
08123815 +0x0d88:  push   %ebp
08123816 +0x0d89:  mov    %esp,%ebp
08123818 +0x0d8b:  push   %esi
08123819 +0x0d8c:  push   %ebx
0812381a +0x0d8d:  sub    $0x10,%esp
0812381d +0x0d90:  mov    0x10(%ebp),%eax
08123820 +0x0d93:  mov    %eax,(%esp)
08123823 +0x0d96:  call   0812391b <+0xe8e>
08123828 +0x0d9b:  mov    %eax,%esi
0812382a +0x0d9d:  mov    0xc(%ebp),%eax
0812382d +0x0da0:  mov    %eax,(%esp)
08123830 +0x0da3:  call   0812391b <+0xe8e>
08123835 +0x0da8:  mov    %eax,%ebx
08123837 +0x0daa:  mov    0x8(%ebp),%eax
0812383a +0x0dad:  mov    %eax,(%esp)
0812383d +0x0db0:  call   0812391b <+0xe8e>
08123842 +0x0db5:  mov    %esi,0x8(%esp)
08123846 +0x0db9:  mov    %ebx,0x4(%esp)
0812384a +0x0dbd:  mov    %eax,(%esp)
0812384d +0x0dc0:  call   08123923 <+0xe96>
08123852 +0x0dc5:  add    $0x10,%esp
08123855 +0x0dc8:  pop    %ebx
08123856 +0x0dc9:  pop    %esi
08123857 +0x0dca:  pop    %ebp
08123858 +0x0dcb:  ret
08123859 +0x0dcc:  nop
0812385a +0x0dcd:  push   %ebp
0812385b +0x0dce:  mov    %esp,%ebp
0812385d +0x0dd0:  mov    0x8(%ebp),%eax
08123860 +0x0dd3:  mov    0x4(%eax),%eax
08123863 +0x0dd6:  mov    %eax,%edx
08123865 +0x0dd8:  mov    0x8(%ebp),%eax
08123868 +0x0ddb:  mov    (%eax),%eax
0812386a +0x0ddd:  mov    %edx,%ecx
0812386c +0x0ddf:  sub    %eax,%ecx
0812386e +0x0de1:  mov    %ecx,%eax
08123870 +0x0de3:  sar    $0x2,%eax
08123873 +0x0de6:  pop    %ebp
08123874 +0x0de7:  ret
08123875 +0x0de8:  nop
08123876 +0x0de9:  push   %ebp
08123877 +0x0dea:  mov    %esp,%ebp
08123879 +0x0dec:  sub    $0x18,%esp
0812387c +0x0def:  mov    0x8(%ebp),%eax
0812387f +0x0df2:  mov    %eax,(%esp)
08123882 +0x0df5:  call   08123948 <+0xebb>
08123887 +0x0dfa:  mov    %eax,(%esp)
0812388a +0x0dfd:  call   08123950 <+0xec3>
0812388f +0x0e02:  leave
08123890 +0x0e03:  ret
08123891 +0x0e04:  nop
08123892 +0x0e05:  push   %ebp
08123893 +0x0e06:  mov    %esp,%ebp
08123895 +0x0e08:  sub    $0x18,%esp
08123898 +0x0e0b:  mov    0x8(%ebp),%eax
0812389b +0x0e0e:  mov    %eax,(%esp)
0812389e +0x0e11:  call   08123950 <+0xec3>
081238a3 +0x0e16:  cmp    0xc(%ebp),%eax
081238a6 +0x0e19:  setb   %al
081238a9 +0x0e1c:  movzbl %al,%eax
081238ac +0x0e1f:  test   %eax,%eax
081238ae +0x0e21:  setne  %al
081238b1 +0x0e24:  test   %al,%al
081238b3 +0x0e26:  je     081238ba <+0xe2d>
081238b5 +0x0e28:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081238ba +0x0e2d:  mov    0xc(%ebp),%eax
081238bd +0x0e30:  shl    $0x2,%eax
081238c0 +0x0e33:  mov    %eax,(%esp)
081238c3 +0x0e36:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081238c8 +0x0e3b:  leave
081238c9 +0x0e3c:  ret
081238ca +0x0e3d:  push   %ebp
081238cb +0x0e3e:  mov    %esp,%ebp
081238cd +0x0e40:  push   %ebx
081238ce +0x0e41:  sub    $0x14,%esp
081238d1 +0x0e44:  mov    0x8(%ebp),%ebx
081238d4 +0x0e47:  mov    0xc(%ebp),%eax
081238d7 +0x0e4a:  mov    (%eax),%eax
081238d9 +0x0e4c:  mov    %eax,0x4(%esp)
081238dd +0x0e50:  mov    %ebx,(%esp)
081238e0 +0x0e53:  call   0812395a <+0xecd>
081238e5 +0x0e58:  mov    %ebx,%eax
081238e7 +0x0e5a:  add    $0x14,%esp
081238ea +0x0e5d:  pop    %ebx
081238eb +0x0e5e:  pop    %ebp
081238ec +0x0e5f:  ret    $0x4
081238ef +0x0e62:  push   %ebp
081238f0 +0x0e63:  mov    %esp,%ebp
081238f2 +0x0e65:  sub    $0x18,%esp
081238f5 +0x0e68:  mov    0x10(%ebp),%eax
081238f8 +0x0e6b:  mov    %eax,0x8(%esp)
081238fc +0x0e6f:  mov    0xc(%ebp),%eax
081238ff +0x0e72:  mov    %eax,0x4(%esp)
08123903 +0x0e76:  mov    0x8(%ebp),%eax
08123906 +0x0e79:  mov    %eax,(%esp)
08123909 +0x0e7c:  call   08123967 <+0xeda>
0812390e +0x0e81:  leave
0812390f +0x0e82:  ret
08123910 +0x0e83:  push   %ebp
08123911 +0x0e84:  mov    %esp,%ebp
08123913 +0x0e86:  mov    0x8(%ebp),%eax
08123916 +0x0e89:  add    $0x10,%eax
08123919 +0x0e8c:  pop    %ebp
0812391a +0x0e8d:  ret
0812391b +0x0e8e:  push   %ebp
0812391c +0x0e8f:  mov    %esp,%ebp
0812391e +0x0e91:  mov    0x8(%ebp),%eax
08123921 +0x0e94:  pop    %ebp
08123922 +0x0e95:  ret
08123923 +0x0e96:  push   %ebp
08123924 +0x0e97:  mov    %esp,%ebp
08123926 +0x0e99:  sub    $0x28,%esp
08123929 +0x0e9c:  movb   $0x1,-0x9(%ebp)
0812392d +0x0ea0:  mov    0x10(%ebp),%eax
08123930 +0x0ea3:  mov    %eax,0x8(%esp)
08123934 +0x0ea7:  mov    0xc(%ebp),%eax
08123937 +0x0eaa:  mov    %eax,0x4(%esp)
0812393b +0x0eae:  mov    0x8(%ebp),%eax
0812393e +0x0eb1:  mov    %eax,(%esp)
08123941 +0x0eb4:  call   08123988 <+0xefb>
08123946 +0x0eb9:  leave
08123947 +0x0eba:  ret
08123948 +0x0ebb:  push   %ebp
08123949 +0x0ebc:  mov    %esp,%ebp
0812394b +0x0ebe:  mov    0x8(%ebp),%eax
0812394e +0x0ec1:  pop    %ebp
0812394f +0x0ec2:  ret
08123950 +0x0ec3:  push   %ebp
08123951 +0x0ec4:  mov    %esp,%ebp
08123953 +0x0ec6:  mov    $0x3fffffff,%eax
08123958 +0x0ecb:  pop    %ebp
08123959 +0x0ecc:  ret
0812395a +0x0ecd:  push   %ebp
0812395b +0x0ece:  mov    %esp,%ebp
0812395d +0x0ed0:  mov    0x8(%ebp),%eax
08123960 +0x0ed3:  mov    0xc(%ebp),%edx
08123963 +0x0ed6:  mov    %edx,(%eax)
08123965 +0x0ed8:  pop    %ebp
08123966 +0x0ed9:  ret
08123967 +0x0eda:  push   %ebp
08123968 +0x0edb:  mov    %esp,%ebp
0812396a +0x0edd:  sub    $0x18,%esp
0812396d +0x0ee0:  mov    0x10(%ebp),%eax
08123970 +0x0ee3:  mov    %eax,0x8(%esp)
08123974 +0x0ee7:  mov    0xc(%ebp),%eax
08123977 +0x0eea:  mov    %eax,0x4(%esp)
0812397b +0x0eee:  mov    0x8(%ebp),%eax
0812397e +0x0ef1:  mov    %eax,(%esp)
08123981 +0x0ef4:  call   081239d5 <+0xf48>
08123986 +0x0ef9:  leave
08123987 +0x0efa:  ret
08123988 +0x0efb:  push   %ebp
08123989 +0x0efc:  mov    %esp,%ebp
0812398b +0x0efe:  sub    $0x28,%esp
0812398e +0x0f01:  mov    0xc(%ebp),%edx
08123991 +0x0f04:  mov    0x8(%ebp),%eax
08123994 +0x0f07:  mov    %edx,%ecx
08123996 +0x0f09:  sub    %eax,%ecx
08123998 +0x0f0b:  mov    %ecx,%eax
0812399a +0x0f0d:  sar    $0x2,%eax
0812399d +0x0f10:  mov    %eax,-0xc(%ebp)
081239a0 +0x0f13:  mov    -0xc(%ebp),%eax
081239a3 +0x0f16:  lea    0x0(,%eax,4),%edx
081239aa +0x0f1d:  mov    -0xc(%ebp),%eax
081239ad +0x0f20:  shl    $0x2,%eax
081239b0 +0x0f23:  neg    %eax
081239b2 +0x0f25:  add    0x10(%ebp),%eax
081239b5 +0x0f28:  mov    %edx,0x8(%esp)
081239b9 +0x0f2c:  mov    0x8(%ebp),%edx
081239bc +0x0f2f:  mov    %edx,0x4(%esp)
081239c0 +0x0f33:  mov    %eax,(%esp)
081239c3 +0x0f36:  call   0807d880 <_init+0x178>
081239c8 +0x0f3b:  mov    -0xc(%ebp),%eax
081239cb +0x0f3e:  shl    $0x2,%eax
081239ce +0x0f41:  neg    %eax
081239d0 +0x0f43:  add    0x10(%ebp),%eax
081239d3 +0x0f46:  leave
081239d4 +0x0f47:  ret
081239d5 +0x0f48:  push   %ebp
081239d6 +0x0f49:  mov    %esp,%ebp
081239d8 +0x0f4b:  sub    $0x18,%esp
081239db +0x0f4e:  mov    0x10(%ebp),%eax
081239de +0x0f51:  mov    %eax,0x8(%esp)
081239e2 +0x0f55:  mov    0xc(%ebp),%eax
081239e5 +0x0f58:  mov    %eax,0x4(%esp)
081239e9 +0x0f5c:  mov    0x8(%ebp),%eax
081239ec +0x0f5f:  mov    %eax,(%esp)
081239ef +0x0f62:  call   081239f6 <+0xf69>
081239f4 +0x0f67:  leave
081239f5 +0x0f68:  ret
081239f6 +0x0f69:  push   %ebp
081239f7 +0x0f6a:  mov    %esp,%ebp
081239f9 +0x0f6c:  push   %ebx
081239fa +0x0f6d:  sub    $0x14,%esp
081239fd +0x0f70:  mov    0xc(%ebp),%eax
08123a00 +0x0f73:  mov    %eax,(%esp)
08123a03 +0x0f76:  call   08123a2e <+0xfa1>
08123a08 +0x0f7b:  mov    %eax,%ebx
08123a0a +0x0f7d:  mov    0x8(%ebp),%eax
08123a0d +0x0f80:  mov    %eax,(%esp)
08123a10 +0x0f83:  call   08123a2e <+0xfa1>
08123a15 +0x0f88:  mov    0x10(%ebp),%edx
08123a18 +0x0f8b:  mov    %edx,0x8(%esp)
08123a1c +0x0f8f:  mov    %ebx,0x4(%esp)
08123a20 +0x0f93:  mov    %eax,(%esp)
08123a23 +0x0f96:  call   08123a41 <+0xfb4>
08123a28 +0x0f9b:  add    $0x14,%esp
08123a2b +0x0f9e:  pop    %ebx
08123a2c +0x0f9f:  pop    %ebp
08123a2d +0x0fa0:  ret
08123a2e +0x0fa1:  push   %ebp
08123a2f +0x0fa2:  mov    %esp,%ebp
08123a31 +0x0fa4:  sub    $0x18,%esp
08123a34 +0x0fa7:  lea    0x8(%ebp),%eax
08123a37 +0x0faa:  mov    %eax,(%esp)
08123a3a +0x0fad:  call   08123a86 <+0xff9>
08123a3f +0x0fb2:  leave
08123a40 +0x0fb3:  ret
08123a41 +0x0fb4:  push   %ebp
08123a42 +0x0fb5:  mov    %esp,%ebp
08123a44 +0x0fb7:  push   %esi
08123a45 +0x0fb8:  push   %ebx
08123a46 +0x0fb9:  sub    $0x10,%esp
08123a49 +0x0fbc:  mov    0x10(%ebp),%eax
08123a4c +0x0fbf:  mov    %eax,(%esp)
08123a4f +0x0fc2:  call   0812391b <+0xe8e>
08123a54 +0x0fc7:  mov    %eax,%esi
08123a56 +0x0fc9:  mov    0xc(%ebp),%eax
08123a59 +0x0fcc:  mov    %eax,(%esp)
08123a5c +0x0fcf:  call   0812391b <+0xe8e>
08123a61 +0x0fd4:  mov    %eax,%ebx
08123a63 +0x0fd6:  mov    0x8(%ebp),%eax
08123a66 +0x0fd9:  mov    %eax,(%esp)
08123a69 +0x0fdc:  call   0812391b <+0xe8e>
08123a6e +0x0fe1:  mov    %esi,0x8(%esp)
08123a72 +0x0fe5:  mov    %ebx,0x4(%esp)
08123a76 +0x0fe9:  mov    %eax,(%esp)
08123a79 +0x0fec:  call   08123a90 <+0x1003>
08123a7e +0x0ff1:  add    $0x10,%esp
08123a81 +0x0ff4:  pop    %ebx
08123a82 +0x0ff5:  pop    %esi
08123a83 +0x0ff6:  pop    %ebp
08123a84 +0x0ff7:  ret
08123a85 +0x0ff8:  nop
08123a86 +0x0ff9:  push   %ebp
08123a87 +0x0ffa:  mov    %esp,%ebp
08123a89 +0x0ffc:  mov    0x8(%ebp),%eax
08123a8c +0x0fff:  mov    (%eax),%eax
08123a8e +0x1001:  pop    %ebp
08123a8f +0x1002:  ret
08123a90 +0x1003:  push   %ebp
08123a91 +0x1004:  mov    %esp,%ebp
08123a93 +0x1006:  sub    $0x28,%esp
08123a96 +0x1009:  movb   $0x1,-0x9(%ebp)
08123a9a +0x100d:  mov    0x10(%ebp),%eax
08123a9d +0x1010:  mov    %eax,0x8(%esp)
08123aa1 +0x1014:  mov    0xc(%ebp),%eax
08123aa4 +0x1017:  mov    %eax,0x4(%esp)
08123aa8 +0x101b:  mov    0x8(%ebp),%eax
08123aab +0x101e:  mov    %eax,(%esp)
08123aae +0x1021:  call   08123ab5 <+0x1028>
08123ab3 +0x1026:  leave
08123ab4 +0x1027:  ret
08123ab5 +0x1028:  push   %ebp
08123ab6 +0x1029:  mov    %esp,%ebp
08123ab8 +0x102b:  sub    $0x18,%esp
08123abb +0x102e:  mov    0xc(%ebp),%edx
08123abe +0x1031:  mov    0x8(%ebp),%eax
08123ac1 +0x1034:  mov    %edx,%ecx
08123ac3 +0x1036:  sub    %eax,%ecx
08123ac5 +0x1038:  mov    %ecx,%eax
08123ac7 +0x103a:  sar    $0x2,%eax
08123aca +0x103d:  shl    $0x2,%eax
08123acd +0x1040:  mov    %eax,0x8(%esp)
08123ad1 +0x1044:  mov    0x8(%ebp),%eax
08123ad4 +0x1047:  mov    %eax,0x4(%esp)
08123ad8 +0x104b:  mov    0x10(%ebp),%eax
08123adb +0x104e:  mov    %eax,(%esp)
08123ade +0x1051:  call   0807d880 <_init+0x178>
08123ae3 +0x1056:  mov    0xc(%ebp),%edx
08123ae6 +0x1059:  mov    0x8(%ebp),%eax
08123ae9 +0x105c:  mov    %edx,%ecx
08123aeb +0x105e:  sub    %eax,%ecx
08123aed +0x1060:  mov    %ecx,%eax
08123aef +0x1062:  sar    $0x2,%eax
08123af2 +0x1065:  shl    $0x2,%eax
08123af5 +0x1068:  add    0x10(%ebp),%eax
08123af8 +0x106b:  leave
08123af9 +0x106c:  ret
08123afa +0x106d:  nop
08123afb +0x106e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8122a8d

/* APSystem::CActionPointManager::_IsGMOn */

void APSystem::CActionPointManager::_GLOBAL__I__IsGMOn(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
