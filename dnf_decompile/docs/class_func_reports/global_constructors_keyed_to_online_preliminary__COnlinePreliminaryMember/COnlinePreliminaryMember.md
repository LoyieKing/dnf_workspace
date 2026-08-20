# COnlinePreliminaryMember

`_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev`

`global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to online_preliminary::COnlinePreliminaryMember` | `0x085868b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085868b8  _GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev
#           global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()
# range [0x085868b8, 0x08587ea3]
085868b8 +0x0000:  push   %ebp
085868b9 +0x0001:  mov    %esp,%ebp
085868bb +0x0003:  sub    $0x18,%esp
085868be +0x0006:  movl   $0xffff,0x4(%esp)
085868c6 +0x000e:  movl   $0x1,(%esp)
085868cd +0x0015:  call   08586878 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085868d2 +0x001a:  leave
085868d3 +0x001b:  ret
085868d4 +0x001c:  push   %ebp
085868d5 +0x001d:  mov    %esp,%ebp
085868d7 +0x001f:  mov    0x8(%ebp),%eax
085868da +0x0022:  movzwl (%eax),%edx
085868dd +0x0025:  mov    0xc(%ebp),%eax
085868e0 +0x0028:  movzwl (%eax),%eax
085868e3 +0x002b:  cmp    %ax,%dx
085868e6 +0x002e:  jae    085868ef <+0x37>
085868e8 +0x0030:  mov    $0x1,%eax
085868ed +0x0035:  jmp    0858691c <+0x64>
085868ef +0x0037:  mov    0x8(%ebp),%eax
085868f2 +0x003a:  movzwl (%eax),%edx
085868f5 +0x003d:  mov    0xc(%ebp),%eax
085868f8 +0x0040:  movzwl (%eax),%eax
085868fb +0x0043:  cmp    %ax,%dx
085868fe +0x0046:  jne    08586917 <+0x5f>
08586900 +0x0048:  mov    0x8(%ebp),%eax
08586903 +0x004b:  mov    0x4(%eax),%edx
08586906 +0x004e:  mov    0xc(%ebp),%eax
08586909 +0x0051:  mov    0x4(%eax),%eax
0858690c +0x0054:  cmp    %eax,%edx
0858690e +0x0056:  jae    08586917 <+0x5f>
08586910 +0x0058:  mov    $0x1,%eax
08586915 +0x005d:  jmp    0858691c <+0x64>
08586917 +0x005f:  mov    $0x0,%eax
0858691c +0x0064:  pop    %ebp
0858691d +0x0065:  ret
0858691e +0x0066:  push   %ebp
0858691f +0x0067:  mov    %esp,%ebp
08586921 +0x0069:  mov    0xc(%ebp),%eax
08586924 +0x006c:  mov    %eax,%edx
08586926 +0x006e:  mov    0x8(%ebp),%eax
08586929 +0x0071:  mov    %dx,(%eax)
0858692c +0x0074:  mov    0x8(%ebp),%eax
0858692f +0x0077:  mov    0x10(%ebp),%edx
08586932 +0x007a:  mov    %edx,0x4(%eax)
08586935 +0x007d:  pop    %ebp
08586936 +0x007e:  ret
08586937 +0x007f:  nop
08586938 +0x0080:  push   %ebp
08586939 +0x0081:  mov    %esp,%ebp
0858693b +0x0083:  mov    0x8(%ebp),%eax
0858693e +0x0086:  movl   $0x0,(%eax)
08586944 +0x008c:  mov    0x8(%ebp),%eax
08586947 +0x008f:  movb   $0x0,0x4(%eax)
0858694b +0x0093:  pop    %ebp
0858694c +0x0094:  ret
0858694d +0x0095:  nop
0858694e +0x0096:  push   %ebp
0858694f +0x0097:  mov    %esp,%ebp
08586951 +0x0099:  sub    $0x4,%esp
08586954 +0x009c:  mov    0x10(%ebp),%eax
08586957 +0x009f:  mov    %al,-0x4(%ebp)
0858695a +0x00a2:  mov    0x8(%ebp),%eax
0858695d +0x00a5:  mov    0xc(%ebp),%edx
08586960 +0x00a8:  mov    %edx,(%eax)
08586962 +0x00aa:  mov    0x8(%ebp),%eax
08586965 +0x00ad:  movzbl -0x4(%ebp),%edx
08586969 +0x00b1:  mov    %dl,0x4(%eax)
0858696c +0x00b4:  leave
0858696d +0x00b5:  ret
0858696e +0x00b6:  push   %ebp
0858696f +0x00b7:  mov    %esp,%ebp
08586971 +0x00b9:  sub    $0x18,%esp
08586974 +0x00bc:  mov    0x8(%ebp),%eax
08586977 +0x00bf:  mov    %eax,(%esp)
0858697a +0x00c2:  call   08586b68 <+0x2b0>
0858697f +0x00c7:  leave
08586980 +0x00c8:  ret
08586981 +0x00c9:  nop
08586982 +0x00ca:  push   %ebp
08586983 +0x00cb:  mov    %esp,%ebp
08586985 +0x00cd:  sub    $0x18,%esp
08586988 +0x00d0:  mov    0x8(%ebp),%eax
0858698b +0x00d3:  mov    (%eax),%eax
0858698d +0x00d5:  mov    %eax,(%esp)
08586990 +0x00d8:  call   08586d22 <+0x46a>
08586995 +0x00dd:  leave
08586996 +0x00de:  ret
08586997 +0x00df:  nop
08586998 +0x00e0:  push   %ebp
08586999 +0x00e1:  mov    %esp,%ebp
0858699b +0x00e3:  push   %ebx
0858699c +0x00e4:  sub    $0x14,%esp
0858699f +0x00e7:  mov    0x8(%ebp),%ebx
085869a2 +0x00ea:  mov    0xc(%ebp),%eax
085869a5 +0x00ed:  mov    0x10(%ebp),%edx
085869a8 +0x00f0:  mov    %edx,0x8(%esp)
085869ac +0x00f4:  mov    %eax,0x4(%esp)
085869b0 +0x00f8:  mov    %ebx,(%esp)
085869b3 +0x00fb:  call   08586d8c <+0x4d4>
085869b8 +0x0100:  sub    $0x4,%esp
085869bb +0x0103:  mov    %ebx,%eax
085869bd +0x0105:  mov    -0x4(%ebp),%ebx
085869c0 +0x0108:  leave
085869c1 +0x0109:  ret    $0x4
085869c4 +0x010c:  push   %ebp
085869c5 +0x010d:  mov    %esp,%ebp
085869c7 +0x010f:  push   %ebx
085869c8 +0x0110:  sub    $0x14,%esp
085869cb +0x0113:  mov    0x8(%ebp),%ebx
085869ce +0x0116:  mov    0xc(%ebp),%eax
085869d1 +0x0119:  mov    %eax,0x4(%esp)
085869d5 +0x011d:  mov    %ebx,(%esp)
085869d8 +0x0120:  call   08586e4a <+0x592>
085869dd +0x0125:  sub    $0x4,%esp
085869e0 +0x0128:  mov    %ebx,%eax
085869e2 +0x012a:  mov    -0x4(%ebp),%ebx
085869e5 +0x012d:  leave
085869e6 +0x012e:  ret    $0x4
085869e9 +0x0131:  nop
085869ea +0x0132:  push   %ebp
085869eb +0x0133:  mov    %esp,%ebp
085869ed +0x0135:  mov    0x8(%ebp),%eax
085869f0 +0x0138:  mov    (%eax),%edx
085869f2 +0x013a:  mov    0xc(%ebp),%eax
085869f5 +0x013d:  mov    (%eax),%eax
085869f7 +0x013f:  cmp    %eax,%edx
085869f9 +0x0141:  setne  %al
085869fc +0x0144:  pop    %ebp
085869fd +0x0145:  ret
085869fe +0x0146:  push   %ebp
085869ff +0x0147:  mov    %esp,%ebp
08586a01 +0x0149:  mov    0x8(%ebp),%eax
08586a04 +0x014c:  mov    (%eax),%eax
08586a06 +0x014e:  add    $0x10,%eax
08586a09 +0x0151:  pop    %ebp
08586a0a +0x0152:  ret
08586a0b +0x0153:  nop
08586a0c +0x0154:  push   %ebp
08586a0d +0x0155:  mov    %esp,%ebp
08586a0f +0x0157:  push   %ebx
08586a10 +0x0158:  sub    $0x14,%esp
08586a13 +0x015b:  mov    0x8(%ebp),%ebx
08586a16 +0x015e:  mov    0xc(%ebp),%eax
08586a19 +0x0161:  mov    0x10(%ebp),%edx
08586a1c +0x0164:  mov    %edx,0x8(%esp)
08586a20 +0x0168:  mov    %eax,0x4(%esp)
08586a24 +0x016c:  mov    %ebx,(%esp)
08586a27 +0x016f:  call   08586e70 <+0x5b8>
08586a2c +0x0174:  sub    $0x4,%esp
08586a2f +0x0177:  mov    %ebx,%eax
08586a31 +0x0179:  mov    -0x4(%ebp),%ebx
08586a34 +0x017c:  leave
08586a35 +0x017d:  ret    $0x4
08586a38 +0x0180:  push   %ebp
08586a39 +0x0181:  mov    %esp,%ebp
08586a3b +0x0183:  push   %ebx
08586a3c +0x0184:  sub    $0x14,%esp
08586a3f +0x0187:  mov    0x8(%ebp),%ebx
08586a42 +0x018a:  mov    0xc(%ebp),%eax
08586a45 +0x018d:  mov    %eax,0x4(%esp)
08586a49 +0x0191:  mov    %ebx,(%esp)
08586a4c +0x0194:  call   08586f2e <+0x676>
08586a51 +0x0199:  sub    $0x4,%esp
08586a54 +0x019c:  mov    %ebx,%eax
08586a56 +0x019e:  mov    -0x4(%ebp),%ebx
08586a59 +0x01a1:  leave
08586a5a +0x01a2:  ret    $0x4
08586a5d +0x01a5:  nop
08586a5e +0x01a6:  push   %ebp
08586a5f +0x01a7:  mov    %esp,%ebp
08586a61 +0x01a9:  mov    0x8(%ebp),%eax
08586a64 +0x01ac:  mov    (%eax),%edx
08586a66 +0x01ae:  mov    0xc(%ebp),%eax
08586a69 +0x01b1:  mov    (%eax),%eax
08586a6b +0x01b3:  cmp    %eax,%edx
08586a6d +0x01b5:  setne  %al
08586a70 +0x01b8:  pop    %ebp
08586a71 +0x01b9:  ret
08586a72 +0x01ba:  push   %ebp
08586a73 +0x01bb:  mov    %esp,%ebp
08586a75 +0x01bd:  mov    0x8(%ebp),%eax
08586a78 +0x01c0:  mov    (%eax),%eax
08586a7a +0x01c2:  add    $0x10,%eax
08586a7d +0x01c5:  pop    %ebp
08586a7e +0x01c6:  ret
08586a7f +0x01c7:  nop
08586a80 +0x01c8:  push   %ebp
08586a81 +0x01c9:  mov    %esp,%ebp
08586a83 +0x01cb:  sub    $0x18,%esp
08586a86 +0x01ce:  mov    0x8(%ebp),%eax
08586a89 +0x01d1:  mov    %eax,(%esp)
08586a8c +0x01d4:  call   08586f54 <+0x69c>
08586a91 +0x01d9:  leave
08586a92 +0x01da:  ret
08586a93 +0x01db:  push   %ebp
08586a94 +0x01dc:  mov    %esp,%ebp
08586a96 +0x01de:  push   %esi
08586a97 +0x01df:  push   %ebx
08586a98 +0x01e0:  sub    $0x10,%esp
08586a9b +0x01e3:  mov    0x8(%ebp),%esi
08586a9e +0x01e6:  mov    0x10(%ebp),%eax
08586aa1 +0x01e9:  mov    %eax,(%esp)
08586aa4 +0x01ec:  call   08586f67 <+0x6af>
08586aa9 +0x01f1:  mov    %eax,%ebx
08586aab +0x01f3:  mov    0xc(%ebp),%eax
08586aae +0x01f6:  mov    %eax,(%esp)
08586ab1 +0x01f9:  call   08586f5f <+0x6a7>
08586ab6 +0x01fe:  mov    %ebx,0x8(%esp)
08586aba +0x0202:  mov    %eax,0x4(%esp)
08586abe +0x0206:  mov    %esi,(%esp)
08586ac1 +0x0209:  call   08586f70 <+0x6b8>
08586ac6 +0x020e:  mov    %esi,%eax
08586ac8 +0x0210:  add    $0x10,%esp
08586acb +0x0213:  pop    %ebx
08586acc +0x0214:  pop    %esi
08586acd +0x0215:  pop    %ebp
08586ace +0x0216:  ret    $0x4
08586ad1 +0x0219:  nop
08586ad2 +0x021a:  push   %ebp
08586ad3 +0x021b:  mov    %esp,%ebp
08586ad5 +0x021d:  push   %ebx
08586ad6 +0x021e:  sub    $0x14,%esp
08586ad9 +0x0221:  mov    0x8(%ebp),%ebx
08586adc +0x0224:  mov    0xc(%ebp),%eax
08586adf +0x0227:  mov    %eax,(%esp)
08586ae2 +0x022a:  call   08586fa9 <+0x6f1>
08586ae7 +0x022f:  mov    0x4(%eax),%edx
08586aea +0x0232:  mov    (%eax),%eax
08586aec +0x0234:  mov    %eax,(%ebx)
08586aee +0x0236:  mov    %edx,0x4(%ebx)
08586af1 +0x0239:  mov    0xc(%ebp),%eax
08586af4 +0x023c:  add    $0x8,%eax
08586af7 +0x023f:  mov    %eax,(%esp)
08586afa +0x0242:  call   08586fb1 <+0x6f9>
08586aff +0x0247:  mov    0x8(%ebp),%ecx
08586b02 +0x024a:  mov    0x4(%eax),%edx
08586b05 +0x024d:  mov    (%eax),%eax
08586b07 +0x024f:  mov    %eax,0x8(%ecx)
08586b0a +0x0252:  mov    %edx,0xc(%ecx)
08586b0d +0x0255:  add    $0x14,%esp
08586b10 +0x0258:  pop    %ebx
08586b11 +0x0259:  pop    %ebp
08586b12 +0x025a:  ret
08586b13 +0x025b:  nop
08586b14 +0x025c:  push   %ebp
08586b15 +0x025d:  mov    %esp,%ebp
08586b17 +0x025f:  push   %ebx
08586b18 +0x0260:  sub    $0x14,%esp
08586b1b +0x0263:  mov    0x8(%ebp),%ebx
08586b1e +0x0266:  mov    0xc(%ebp),%eax
08586b21 +0x0269:  mov    0x10(%ebp),%edx
08586b24 +0x026c:  mov    %edx,0x8(%esp)
08586b28 +0x0270:  mov    %eax,0x4(%esp)
08586b2c +0x0274:  mov    %ebx,(%esp)
08586b2f +0x0277:  call   08586fba <+0x702>
08586b34 +0x027c:  sub    $0x4,%esp
08586b37 +0x027f:  mov    %ebx,%eax
08586b39 +0x0281:  mov    -0x4(%ebp),%ebx
08586b3c +0x0284:  leave
08586b3d +0x0285:  ret    $0x4
08586b40 +0x0288:  push   %ebp
08586b41 +0x0289:  mov    %esp,%ebp
08586b43 +0x028b:  sub    $0x18,%esp
08586b46 +0x028e:  mov    0x8(%ebp),%eax
08586b49 +0x0291:  mov    %eax,(%esp)
08586b4c +0x0294:  call   0858718a <+0x8d2>
08586b51 +0x0299:  leave
08586b52 +0x029a:  ret
08586b53 +0x029b:  nop
08586b54 +0x029c:  push   %ebp
08586b55 +0x029d:  mov    %esp,%ebp
08586b57 +0x029f:  sub    $0x18,%esp
08586b5a +0x02a2:  mov    0x8(%ebp),%eax
08586b5d +0x02a5:  mov    %eax,(%esp)
08586b60 +0x02a8:  call   0858719e <+0x8e6>
08586b65 +0x02ad:  leave
08586b66 +0x02ae:  ret
08586b67 +0x02af:  nop
08586b68 +0x02b0:  push   %ebp
08586b69 +0x02b1:  mov    %esp,%ebp
08586b6b +0x02b3:  push   %esi
08586b6c +0x02b4:  push   %ebx
08586b6d +0x02b5:  sub    $0x10,%esp
08586b70 +0x02b8:  mov    0x8(%ebp),%eax
08586b73 +0x02bb:  mov    %eax,(%esp)
08586b76 +0x02be:  call   08587208 <+0x950>
08586b7b +0x02c3:  mov    %eax,0x4(%esp)
08586b7f +0x02c7:  mov    0x8(%ebp),%eax
08586b82 +0x02ca:  mov    %eax,(%esp)
08586b85 +0x02cd:  call   085871b2 <+0x8fa>
08586b8a +0x02d2:  jmp    08586ba7 <+0x2ef>
08586b8c +0x02d4:  mov    %edx,%ebx
08586b8e +0x02d6:  mov    %eax,%esi
08586b90 +0x02d8:  mov    0x8(%ebp),%eax
08586b93 +0x02db:  mov    %eax,(%esp)
08586b96 +0x02de:  call   08586b54 <+0x29c>
08586b9b +0x02e3:  mov    %esi,%eax
08586b9d +0x02e5:  mov    %ebx,%edx
08586b9f +0x02e7:  mov    %eax,(%esp)
08586ba2 +0x02ea:  call   08ae3750 <_Unwind_Resume>
08586ba7 +0x02ef:  mov    0x8(%ebp),%eax
08586baa +0x02f2:  mov    %eax,(%esp)
08586bad +0x02f5:  call   08586b54 <+0x29c>
08586bb2 +0x02fa:  add    $0x10,%esp
08586bb5 +0x02fd:  pop    %ebx
08586bb6 +0x02fe:  pop    %esi
08586bb7 +0x02ff:  pop    %ebp
08586bb8 +0x0300:  ret
08586bb9 +0x0301:  nop
08586bba +0x0302:  push   %ebp
08586bbb +0x0303:  mov    %esp,%ebp
08586bbd +0x0305:  push   %ebx
08586bbe +0x0306:  sub    $0x54,%esp
08586bc1 +0x0309:  lea    -0x2c(%ebp),%eax
08586bc4 +0x030c:  mov    0xc(%ebp),%edx
08586bc7 +0x030f:  mov    %edx,0x8(%esp)
08586bcb +0x0313:  mov    0x8(%ebp),%edx
08586bce +0x0316:  mov    %edx,0x4(%esp)
08586bd2 +0x031a:  mov    %eax,(%esp)
08586bd5 +0x031d:  call   08587214 <+0x95c>
08586bda +0x0322:  sub    $0x4,%esp
08586bdd +0x0325:  lea    -0x28(%ebp),%eax
08586be0 +0x0328:  mov    0x8(%ebp),%edx
08586be3 +0x032b:  mov    %edx,0x4(%esp)
08586be7 +0x032f:  mov    %eax,(%esp)
08586bea +0x0332:  call   08586a38 <+0x180>
08586bef +0x0337:  sub    $0x4,%esp
08586bf2 +0x033a:  lea    -0x28(%ebp),%eax
08586bf5 +0x033d:  mov    %eax,0x4(%esp)
08586bf9 +0x0341:  lea    -0x2c(%ebp),%eax
08586bfc +0x0344:  mov    %eax,(%esp)
08586bff +0x0347:  call   0858728e <+0x9d6>
08586c04 +0x034c:  test   %al,%al
08586c06 +0x034e:  jne    08586c44 <+0x38c>
08586c08 +0x0350:  lea    -0x2c(%ebp),%eax
08586c0b +0x0353:  mov    %eax,(%esp)
08586c0e +0x0356:  call   08587266 <+0x9ae>
08586c13 +0x035b:  mov    %eax,%ebx
08586c15 +0x035d:  lea    -0x21(%ebp),%eax
08586c18 +0x0360:  mov    0x8(%ebp),%edx
08586c1b +0x0363:  mov    %edx,0x4(%esp)
08586c1f +0x0367:  mov    %eax,(%esp)
08586c22 +0x036a:  call   08587240 <+0x988>
08586c27 +0x036f:  sub    $0x4,%esp
08586c2a +0x0372:  mov    %ebx,0x8(%esp)
08586c2e +0x0376:  mov    0xc(%ebp),%eax
08586c31 +0x0379:  mov    %eax,0x4(%esp)
08586c35 +0x037d:  lea    -0x21(%ebp),%eax
08586c38 +0x0380:  mov    %eax,(%esp)
08586c3b +0x0383:  call   08587274 <+0x9bc>
08586c40 +0x0388:  test   %al,%al
08586c42 +0x038a:  je     08586c4b <+0x393>
08586c44 +0x038c:  mov    $0x1,%eax
08586c49 +0x0391:  jmp    08586c50 <+0x398>
08586c4b +0x0393:  mov    $0x0,%eax
08586c50 +0x0398:  test   %al,%al
08586c52 +0x039a:  je     08586ca1 <+0x3e9>
08586c54 +0x039c:  lea    -0x10(%ebp),%eax
08586c57 +0x039f:  mov    %eax,(%esp)
08586c5a +0x03a2:  call   08586938 <+0x80>
08586c5f +0x03a7:  lea    -0x10(%ebp),%eax
08586c62 +0x03aa:  mov    %eax,0x8(%esp)
08586c66 +0x03ae:  mov    0xc(%ebp),%eax
08586c69 +0x03b1:  mov    %eax,0x4(%esp)
08586c6d +0x03b5:  lea    -0x20(%ebp),%eax
08586c70 +0x03b8:  mov    %eax,(%esp)
08586c73 +0x03bb:  call   085872a2 <+0x9ea>
08586c78 +0x03c0:  lea    -0x3c(%ebp),%eax
08586c7b +0x03c3:  lea    -0x20(%ebp),%edx
08586c7e +0x03c6:  mov    %edx,0xc(%esp)
08586c82 +0x03ca:  mov    -0x2c(%ebp),%edx
08586c85 +0x03cd:  mov    %edx,0x8(%esp)
08586c89 +0x03d1:  mov    0x8(%ebp),%edx
08586c8c +0x03d4:  mov    %edx,0x4(%esp)
08586c90 +0x03d8:  mov    %eax,(%esp)
08586c93 +0x03db:  call   085872e0 <+0xa28>
08586c98 +0x03e0:  sub    $0x4,%esp
08586c9b +0x03e3:  mov    -0x3c(%ebp),%eax
08586c9e +0x03e6:  mov    %eax,-0x2c(%ebp)
08586ca1 +0x03e9:  lea    -0x2c(%ebp),%eax
08586ca4 +0x03ec:  mov    %eax,(%esp)
08586ca7 +0x03ef:  call   08587266 <+0x9ae>
08586cac +0x03f4:  add    $0x8,%eax
08586caf +0x03f7:  mov    -0x4(%ebp),%ebx
08586cb2 +0x03fa:  leave
08586cb3 +0x03fb:  ret
08586cb4 +0x03fc:  push   %ebp
08586cb5 +0x03fd:  mov    %esp,%ebp
08586cb7 +0x03ff:  sub    $0x18,%esp
08586cba +0x0402:  mov    0x8(%ebp),%eax
08586cbd +0x0405:  mov    (%eax),%eax
08586cbf +0x0407:  mov    %eax,(%esp)
08586cc2 +0x040a:  call   08587326 <+0xa6e>
08586cc7 +0x040f:  leave
08586cc8 +0x0410:  ret
08586cc9 +0x0411:  nop
08586cca +0x0412:  push   %ebp
08586ccb +0x0413:  mov    %esp,%ebp
08586ccd +0x0415:  push   %ebx
08586cce +0x0416:  sub    $0x14,%esp
08586cd1 +0x0419:  mov    0x8(%ebp),%ebx
08586cd4 +0x041c:  mov    0xc(%ebp),%eax
08586cd7 +0x041f:  mov    %eax,0x4(%esp)
08586cdb +0x0423:  mov    %ebx,(%esp)
08586cde +0x0426:  call   08587390 <+0xad8>
08586ce3 +0x042b:  sub    $0x4,%esp
08586ce6 +0x042e:  mov    %ebx,%eax
08586ce8 +0x0430:  mov    -0x4(%ebp),%ebx
08586ceb +0x0433:  leave
08586cec +0x0434:  ret    $0x4
08586cef +0x0437:  nop
08586cf0 +0x0438:  push   %ebp
08586cf1 +0x0439:  mov    %esp,%ebp
08586cf3 +0x043b:  sub    $0x18,%esp
08586cf6 +0x043e:  mov    0x8(%ebp),%eax
08586cf9 +0x0441:  mov    (%eax),%eax
08586cfb +0x0443:  mov    %eax,(%esp)
08586cfe +0x0446:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08586d03 +0x044b:  mov    0x8(%ebp),%edx
08586d06 +0x044e:  mov    %eax,(%edx)
08586d08 +0x0450:  mov    0x8(%ebp),%eax
08586d0b +0x0453:  leave
08586d0c +0x0454:  ret
08586d0d +0x0455:  nop
08586d0e +0x0456:  push   %ebp
08586d0f +0x0457:  mov    %esp,%ebp
08586d11 +0x0459:  sub    $0x18,%esp
08586d14 +0x045c:  mov    0x8(%ebp),%eax
08586d17 +0x045f:  mov    %eax,(%esp)
08586d1a +0x0462:  call   085873b6 <+0xafe>
08586d1f +0x0467:  leave
08586d20 +0x0468:  ret
08586d21 +0x0469:  nop
08586d22 +0x046a:  push   %ebp
08586d23 +0x046b:  mov    %esp,%ebp
08586d25 +0x046d:  sub    $0x28,%esp
08586d28 +0x0470:  jmp    08586d46 <+0x48e>
08586d2a +0x0472:  mov    0x8(%ebp),%eax
08586d2d +0x0475:  mov    %eax,(%esp)
08586d30 +0x0478:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08586d35 +0x047d:  add    %eax,%eax
08586d37 +0x047f:  mov    %eax,0x4(%esp)
08586d3b +0x0483:  mov    0x8(%ebp),%eax
08586d3e +0x0486:  mov    %eax,(%esp)
08586d41 +0x0489:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08586d46 +0x048e:  movl   $0x14,0x4(%esp)
08586d4e +0x0496:  mov    0x8(%ebp),%eax
08586d51 +0x0499:  mov    %eax,(%esp)
08586d54 +0x049c:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08586d59 +0x04a1:  xor    $0x1,%eax
08586d5c +0x04a4:  test   %al,%al
08586d5e +0x04a6:  jne    08586d2a <+0x472>
08586d60 +0x04a8:  mov    0x8(%ebp),%eax
08586d63 +0x04ab:  mov    0x8(%eax),%eax
08586d66 +0x04ae:  mov    %eax,%edx
08586d68 +0x04b0:  mov    0x8(%ebp),%eax
08586d6b +0x04b3:  mov    0xc(%eax),%eax
08586d6e +0x04b6:  lea    (%edx,%eax,1),%eax
08586d71 +0x04b9:  mov    %eax,-0xc(%ebp)
08586d74 +0x04bc:  movl   $0x14,0x4(%esp)
08586d7c +0x04c4:  mov    0x8(%ebp),%eax
08586d7f +0x04c7:  mov    %eax,(%esp)
08586d82 +0x04ca:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08586d87 +0x04cf:  mov    -0xc(%ebp),%eax
08586d8a +0x04d2:  leave
08586d8b +0x04d3:  ret
08586d8c +0x04d4:  push   %ebp
08586d8d +0x04d5:  mov    %esp,%ebp
08586d8f +0x04d7:  push   %esi
08586d90 +0x04d8:  push   %ebx
08586d91 +0x04d9:  sub    $0x30,%esp
08586d94 +0x04dc:  mov    0x8(%ebp),%ebx
08586d97 +0x04df:  mov    0xc(%ebp),%eax
08586d9a +0x04e2:  mov    %eax,(%esp)
08586d9d +0x04e5:  call   08587438 <+0xb80>
08586da2 +0x04ea:  mov    %eax,%esi
08586da4 +0x04ec:  mov    0xc(%ebp),%eax
08586da7 +0x04ef:  mov    %eax,(%esp)
08586daa +0x04f2:  call   0858742c <+0xb74>
08586daf +0x04f7:  lea    -0x10(%ebp),%edx
08586db2 +0x04fa:  mov    0x10(%ebp),%ecx
08586db5 +0x04fd:  mov    %ecx,0x10(%esp)
08586db9 +0x0501:  mov    %esi,0xc(%esp)
08586dbd +0x0505:  mov    %eax,0x8(%esp)
08586dc1 +0x0509:  mov    0xc(%ebp),%eax
08586dc4 +0x050c:  mov    %eax,0x4(%esp)
08586dc8 +0x0510:  mov    %edx,(%esp)
08586dcb +0x0513:  call   08587444 <+0xb8c>
08586dd0 +0x0518:  sub    $0x4,%esp
08586dd3 +0x051b:  lea    -0xc(%ebp),%eax
08586dd6 +0x051e:  mov    0xc(%ebp),%edx
08586dd9 +0x0521:  mov    %edx,0x4(%esp)
08586ddd +0x0525:  mov    %eax,(%esp)
08586de0 +0x0528:  call   08586e4a <+0x592>
08586de5 +0x052d:  sub    $0x4,%esp
08586de8 +0x0530:  lea    -0xc(%ebp),%eax
08586deb +0x0533:  mov    %eax,0x4(%esp)
08586def +0x0537:  lea    -0x10(%ebp),%eax
08586df2 +0x053a:  mov    %eax,(%esp)
08586df5 +0x053d:  call   085874e2 <+0xc2a>
08586dfa +0x0542:  test   %al,%al
08586dfc +0x0544:  jne    08586e23 <+0x56b>
08586dfe +0x0546:  mov    -0x10(%ebp),%eax
08586e01 +0x0549:  mov    %eax,(%esp)
08586e04 +0x054c:  call   085874c0 <+0xc08>
08586e09 +0x0551:  mov    0xc(%ebp),%edx
08586e0c +0x0554:  mov    %eax,0x8(%esp)
08586e10 +0x0558:  mov    0x10(%ebp),%eax
08586e13 +0x055b:  mov    %eax,0x4(%esp)
08586e17 +0x055f:  mov    %edx,(%esp)
08586e1a +0x0562:  call   08587274 <+0x9bc>
08586e1f +0x0567:  test   %al,%al
08586e21 +0x0569:  je     08586e37 <+0x57f>
08586e23 +0x056b:  mov    0xc(%ebp),%eax
08586e26 +0x056e:  mov    %eax,0x4(%esp)
08586e2a +0x0572:  mov    %ebx,(%esp)
08586e2d +0x0575:  call   08586e4a <+0x592>
08586e32 +0x057a:  sub    $0x4,%esp
08586e35 +0x057d:  jmp    08586e3c <+0x584>
08586e37 +0x057f:  mov    -0x10(%ebp),%eax
08586e3a +0x0582:  mov    %eax,(%ebx)
08586e3c +0x0584:  mov    %ebx,%eax
08586e3e +0x0586:  lea    -0x8(%ebp),%esp
08586e41 +0x0589:  add    $0x0,%esp
08586e44 +0x058c:  pop    %ebx
08586e45 +0x058d:  pop    %esi
08586e46 +0x058e:  pop    %ebp
08586e47 +0x058f:  ret    $0x4
08586e4a +0x0592:  push   %ebp
08586e4b +0x0593:  mov    %esp,%ebp
08586e4d +0x0595:  push   %ebx
08586e4e +0x0596:  sub    $0x14,%esp
08586e51 +0x0599:  mov    0x8(%ebp),%ebx
08586e54 +0x059c:  mov    0xc(%ebp),%eax
08586e57 +0x059f:  add    $0x4,%eax
08586e5a +0x05a2:  mov    %eax,0x4(%esp)
08586e5e +0x05a6:  mov    %ebx,(%esp)
08586e61 +0x05a9:  call   085874f6 <+0xc3e>
08586e66 +0x05ae:  mov    %ebx,%eax
08586e68 +0x05b0:  add    $0x14,%esp
08586e6b +0x05b3:  pop    %ebx
08586e6c +0x05b4:  pop    %ebp
08586e6d +0x05b5:  ret    $0x4
08586e70 +0x05b8:  push   %ebp
08586e71 +0x05b9:  mov    %esp,%ebp
08586e73 +0x05bb:  push   %esi
08586e74 +0x05bc:  push   %ebx
08586e75 +0x05bd:  sub    $0x30,%esp
08586e78 +0x05c0:  mov    0x8(%ebp),%ebx
08586e7b +0x05c3:  mov    0xc(%ebp),%eax
08586e7e +0x05c6:  mov    %eax,(%esp)
08586e81 +0x05c9:  call   08587504 <+0xc4c>
08586e86 +0x05ce:  mov    %eax,%esi
08586e88 +0x05d0:  mov    0xc(%ebp),%eax
08586e8b +0x05d3:  mov    %eax,(%esp)
08586e8e +0x05d6:  call   08587208 <+0x950>
08586e93 +0x05db:  lea    -0x10(%ebp),%edx
08586e96 +0x05de:  mov    0x10(%ebp),%ecx
08586e99 +0x05e1:  mov    %ecx,0x10(%esp)
08586e9d +0x05e5:  mov    %esi,0xc(%esp)
08586ea1 +0x05e9:  mov    %eax,0x8(%esp)
08586ea5 +0x05ed:  mov    0xc(%ebp),%eax
08586ea8 +0x05f0:  mov    %eax,0x4(%esp)
08586eac +0x05f4:  mov    %edx,(%esp)
08586eaf +0x05f7:  call   08587510 <+0xc58>
08586eb4 +0x05fc:  sub    $0x4,%esp
08586eb7 +0x05ff:  lea    -0xc(%ebp),%eax
08586eba +0x0602:  mov    0xc(%ebp),%edx
08586ebd +0x0605:  mov    %edx,0x4(%esp)
08586ec1 +0x0609:  mov    %eax,(%esp)
08586ec4 +0x060c:  call   08586f2e <+0x676>
08586ec9 +0x0611:  sub    $0x4,%esp
08586ecc +0x0614:  lea    -0xc(%ebp),%eax
08586ecf +0x0617:  mov    %eax,0x4(%esp)
08586ed3 +0x061b:  lea    -0x10(%ebp),%eax
08586ed6 +0x061e:  mov    %eax,(%esp)
08586ed9 +0x0621:  call   0858728e <+0x9d6>
08586ede +0x0626:  test   %al,%al
08586ee0 +0x0628:  jne    08586f07 <+0x64f>
08586ee2 +0x062a:  mov    -0x10(%ebp),%eax
08586ee5 +0x062d:  mov    %eax,(%esp)
08586ee8 +0x0630:  call   085874c0 <+0xc08>
08586eed +0x0635:  mov    0xc(%ebp),%edx
08586ef0 +0x0638:  mov    %eax,0x8(%esp)
08586ef4 +0x063c:  mov    0x10(%ebp),%eax
08586ef7 +0x063f:  mov    %eax,0x4(%esp)
08586efb +0x0643:  mov    %edx,(%esp)
08586efe +0x0646:  call   08587274 <+0x9bc>
08586f03 +0x064b:  test   %al,%al
08586f05 +0x064d:  je     08586f1b <+0x663>
08586f07 +0x064f:  mov    0xc(%ebp),%eax
08586f0a +0x0652:  mov    %eax,0x4(%esp)
08586f0e +0x0656:  mov    %ebx,(%esp)
08586f11 +0x0659:  call   08586f2e <+0x676>
08586f16 +0x065e:  sub    $0x4,%esp
08586f19 +0x0661:  jmp    08586f20 <+0x668>
08586f1b +0x0663:  mov    -0x10(%ebp),%eax
08586f1e +0x0666:  mov    %eax,(%ebx)
08586f20 +0x0668:  mov    %ebx,%eax
08586f22 +0x066a:  lea    -0x8(%ebp),%esp
08586f25 +0x066d:  add    $0x0,%esp
08586f28 +0x0670:  pop    %ebx
08586f29 +0x0671:  pop    %esi
08586f2a +0x0672:  pop    %ebp
08586f2b +0x0673:  ret    $0x4
08586f2e +0x0676:  push   %ebp
08586f2f +0x0677:  mov    %esp,%ebp
08586f31 +0x0679:  push   %ebx
08586f32 +0x067a:  sub    $0x14,%esp
08586f35 +0x067d:  mov    0x8(%ebp),%ebx
08586f38 +0x0680:  mov    0xc(%ebp),%eax
08586f3b +0x0683:  add    $0x4,%eax
08586f3e +0x0686:  mov    %eax,0x4(%esp)
08586f42 +0x068a:  mov    %ebx,(%esp)
08586f45 +0x068d:  call   0858758c <+0xcd4>
08586f4a +0x0692:  mov    %ebx,%eax
08586f4c +0x0694:  add    $0x14,%esp
08586f4f +0x0697:  pop    %ebx
08586f50 +0x0698:  pop    %ebp
08586f51 +0x0699:  ret    $0x4
08586f54 +0x069c:  push   %ebp
08586f55 +0x069d:  mov    %esp,%ebp
08586f57 +0x069f:  mov    0x8(%ebp),%eax
08586f5a +0x06a2:  mov    0x14(%eax),%eax
08586f5d +0x06a5:  pop    %ebp
08586f5e +0x06a6:  ret
08586f5f +0x06a7:  push   %ebp
08586f60 +0x06a8:  mov    %esp,%ebp
08586f62 +0x06aa:  mov    0x8(%ebp),%eax
08586f65 +0x06ad:  pop    %ebp
08586f66 +0x06ae:  ret
08586f67 +0x06af:  push   %ebp
08586f68 +0x06b0:  mov    %esp,%ebp
08586f6a +0x06b2:  mov    0x8(%ebp),%eax
08586f6d +0x06b5:  pop    %ebp
08586f6e +0x06b6:  ret
08586f6f +0x06b7:  nop
08586f70 +0x06b8:  push   %ebp
08586f71 +0x06b9:  mov    %esp,%ebp
08586f73 +0x06bb:  sub    $0x18,%esp
08586f76 +0x06be:  mov    0xc(%ebp),%eax
08586f79 +0x06c1:  mov    %eax,(%esp)
08586f7c +0x06c4:  call   08586f5f <+0x6a7>
08586f81 +0x06c9:  mov    0x8(%ebp),%ecx
08586f84 +0x06cc:  mov    0x4(%eax),%edx
08586f87 +0x06cf:  mov    (%eax),%eax
08586f89 +0x06d1:  mov    %eax,(%ecx)
08586f8b +0x06d3:  mov    %edx,0x4(%ecx)
08586f8e +0x06d6:  mov    0x10(%ebp),%eax
08586f91 +0x06d9:  mov    %eax,(%esp)
08586f94 +0x06dc:  call   08586f67 <+0x6af>
08586f99 +0x06e1:  mov    0x8(%ebp),%ecx
08586f9c +0x06e4:  mov    0x4(%eax),%edx
08586f9f +0x06e7:  mov    (%eax),%eax
08586fa1 +0x06e9:  mov    %eax,0x8(%ecx)
08586fa4 +0x06ec:  mov    %edx,0xc(%ecx)
08586fa7 +0x06ef:  leave
08586fa8 +0x06f0:  ret
08586fa9 +0x06f1:  push   %ebp
08586faa +0x06f2:  mov    %esp,%ebp
08586fac +0x06f4:  mov    0x8(%ebp),%eax
08586faf +0x06f7:  pop    %ebp
08586fb0 +0x06f8:  ret
08586fb1 +0x06f9:  push   %ebp
08586fb2 +0x06fa:  mov    %esp,%ebp
08586fb4 +0x06fc:  mov    0x8(%ebp),%eax
08586fb7 +0x06ff:  pop    %ebp
08586fb8 +0x0700:  ret
08586fb9 +0x0701:  nop
08586fba +0x0702:  push   %ebp
08586fbb +0x0703:  mov    %esp,%ebp
08586fbd +0x0705:  push   %esi
08586fbe +0x0706:  push   %ebx
08586fbf +0x0707:  sub    $0x50,%esp
08586fc2 +0x070a:  mov    0x8(%ebp),%ebx
08586fc5 +0x070d:  mov    0xc(%ebp),%eax
08586fc8 +0x0710:  mov    %eax,(%esp)
08586fcb +0x0713:  call   08587208 <+0x950>
08586fd0 +0x0718:  mov    %eax,-0x14(%ebp)
08586fd3 +0x071b:  mov    0xc(%ebp),%eax
08586fd6 +0x071e:  mov    %eax,(%esp)
08586fd9 +0x0721:  call   08587504 <+0xc4c>
08586fde +0x0726:  mov    %eax,-0x10(%ebp)
08586fe1 +0x0729:  movb   $0x1,-0x9(%ebp)
08586fe5 +0x072d:  jmp    08587043 <+0x78b>
08586fe7 +0x072f:  mov    -0x14(%ebp),%eax
08586fea +0x0732:  mov    %eax,-0x10(%ebp)
08586fed +0x0735:  mov    -0x14(%ebp),%eax
08586ff0 +0x0738:  mov    %eax,(%esp)
08586ff3 +0x073b:  call   085875a2 <+0xcea>
08586ff8 +0x0740:  mov    %eax,%esi
08586ffa +0x0742:  mov    0x10(%ebp),%eax
08586ffd +0x0745:  mov    %eax,0x4(%esp)
08587001 +0x0749:  lea    -0x2d(%ebp),%eax
08587004 +0x074c:  mov    %eax,(%esp)
08587007 +0x074f:  call   0858759a <+0xce2>
0858700c +0x0754:  mov    0xc(%ebp),%edx
0858700f +0x0757:  mov    %esi,0x8(%esp)
08587013 +0x075b:  mov    %eax,0x4(%esp)
08587017 +0x075f:  mov    %edx,(%esp)
0858701a +0x0762:  call   08587274 <+0x9bc>
0858701f +0x0767:  mov    %al,-0x9(%ebp)
08587022 +0x076a:  cmpb   $0x0,-0x9(%ebp)
08587026 +0x076e:  je     08587035 <+0x77d>
08587028 +0x0770:  mov    -0x14(%ebp),%eax
0858702b +0x0773:  mov    %eax,(%esp)
0858702e +0x0776:  call   085875cf <+0xd17>
08587033 +0x077b:  jmp    08587040 <+0x788>
08587035 +0x077d:  mov    -0x14(%ebp),%eax
08587038 +0x0780:  mov    %eax,(%esp)
0858703b +0x0783:  call   085875c4 <+0xd0c>
08587040 +0x0788:  mov    %eax,-0x14(%ebp)
08587043 +0x078b:  cmpl   $0x0,-0x14(%ebp)
08587047 +0x078f:  setne  %al
0858704a +0x0792:  test   %al,%al
0858704c +0x0794:  jne    08586fe7 <+0x72f>
0858704e +0x0796:  mov    -0x10(%ebp),%eax
08587051 +0x0799:  mov    %eax,0x4(%esp)
08587055 +0x079d:  lea    -0x34(%ebp),%eax
08587058 +0x07a0:  mov    %eax,(%esp)
0858705b +0x07a3:  call   0858758c <+0xcd4>
08587060 +0x07a8:  cmpb   $0x0,-0x9(%ebp)
08587064 +0x07ac:  je     085870e5 <+0x82d>
08587066 +0x07ae:  lea    -0x2c(%ebp),%eax
08587069 +0x07b1:  mov    0xc(%ebp),%edx
0858706c +0x07b4:  mov    %edx,0x4(%esp)
08587070 +0x07b8:  mov    %eax,(%esp)
08587073 +0x07bb:  call   08587390 <+0xad8>
08587078 +0x07c0:  sub    $0x4,%esp
0858707b +0x07c3:  lea    -0x2c(%ebp),%eax
0858707e +0x07c6:  mov    %eax,0x4(%esp)
08587082 +0x07ca:  lea    -0x34(%ebp),%eax
08587085 +0x07cd:  mov    %eax,(%esp)
08587088 +0x07d0:  call   0858728e <+0x9d6>
0858708d +0x07d5:  test   %al,%al
0858708f +0x07d7:  je     085870da <+0x822>
08587091 +0x07d9:  movb   $0x1,-0x25(%ebp)
08587095 +0x07dd:  mov    -0x10(%ebp),%ecx
08587098 +0x07e0:  mov    -0x14(%ebp),%edx
0858709b +0x07e3:  lea    -0x24(%ebp),%eax
0858709e +0x07e6:  mov    0x10(%ebp),%esi
085870a1 +0x07e9:  mov    %esi,0x10(%esp)
085870a5 +0x07ed:  mov    %ecx,0xc(%esp)
085870a9 +0x07f1:  mov    %edx,0x8(%esp)
085870ad +0x07f5:  mov    0xc(%ebp),%edx
085870b0 +0x07f8:  mov    %edx,0x4(%esp)
085870b4 +0x07fc:  mov    %eax,(%esp)
085870b7 +0x07ff:  call   085875da <+0xd22>
085870bc +0x0804:  sub    $0x4,%esp
085870bf +0x0807:  lea    -0x25(%ebp),%eax
085870c2 +0x080a:  mov    %eax,0x8(%esp)
085870c6 +0x080e:  lea    -0x24(%ebp),%eax
085870c9 +0x0811:  mov    %eax,0x4(%esp)
085870cd +0x0815:  mov    %ebx,(%esp)
085870d0 +0x0818:  call   085876a2 <+0xdea>
085870d5 +0x081d:  jmp    0858717b <+0x8c3>
085870da +0x0822:  lea    -0x34(%ebp),%eax
085870dd +0x0825:  mov    %eax,(%esp)
085870e0 +0x0828:  call   085876d0 <+0xe18>
085870e5 +0x082d:  mov    0x10(%ebp),%eax
085870e8 +0x0830:  mov    %eax,0x4(%esp)
085870ec +0x0834:  lea    -0x1e(%ebp),%eax
085870ef +0x0837:  mov    %eax,(%esp)
085870f2 +0x083a:  call   0858759a <+0xce2>
085870f7 +0x083f:  mov    %eax,%esi
085870f9 +0x0841:  mov    -0x34(%ebp),%eax
085870fc +0x0844:  mov    %eax,(%esp)
085870ff +0x0847:  call   085874c0 <+0xc08>
08587104 +0x084c:  mov    0xc(%ebp),%edx
08587107 +0x084f:  mov    %esi,0x8(%esp)
0858710b +0x0853:  mov    %eax,0x4(%esp)
0858710f +0x0857:  mov    %edx,(%esp)
08587112 +0x085a:  call   08587274 <+0x9bc>
08587117 +0x085f:  test   %al,%al
08587119 +0x0861:  je     08587161 <+0x8a9>
0858711b +0x0863:  movb   $0x1,-0x1d(%ebp)
0858711f +0x0867:  mov    -0x10(%ebp),%ecx
08587122 +0x086a:  mov    -0x14(%ebp),%edx
08587125 +0x086d:  lea    -0x1c(%ebp),%eax
08587128 +0x0870:  mov    0x10(%ebp),%esi
0858712b +0x0873:  mov    %esi,0x10(%esp)
0858712f +0x0877:  mov    %ecx,0xc(%esp)
08587133 +0x087b:  mov    %edx,0x8(%esp)
08587137 +0x087f:  mov    0xc(%ebp),%edx
0858713a +0x0882:  mov    %edx,0x4(%esp)
0858713e +0x0886:  mov    %eax,(%esp)
08587141 +0x0889:  call   085875da <+0xd22>
08587146 +0x088e:  sub    $0x4,%esp
08587149 +0x0891:  lea    -0x1d(%ebp),%eax
0858714c +0x0894:  mov    %eax,0x8(%esp)
08587150 +0x0898:  lea    -0x1c(%ebp),%eax
08587153 +0x089b:  mov    %eax,0x4(%esp)
08587157 +0x089f:  mov    %ebx,(%esp)
0858715a +0x08a2:  call   085876a2 <+0xdea>
0858715f +0x08a7:  jmp    0858717b <+0x8c3>
08587161 +0x08a9:  movb   $0x0,-0x15(%ebp)
08587165 +0x08ad:  lea    -0x15(%ebp),%eax
08587168 +0x08b0:  mov    %eax,0x8(%esp)
0858716c +0x08b4:  lea    -0x34(%ebp),%eax
0858716f +0x08b7:  mov    %eax,0x4(%esp)
08587173 +0x08bb:  mov    %ebx,(%esp)
08587176 +0x08be:  call   085876ee <+0xe36>
0858717b +0x08c3:  mov    %ebx,%eax
0858717d +0x08c5:  lea    -0x8(%ebp),%esp
08587180 +0x08c8:  add    $0x0,%esp
08587183 +0x08cb:  pop    %ebx
08587184 +0x08cc:  pop    %esi
08587185 +0x08cd:  pop    %ebp
08587186 +0x08ce:  ret    $0x4
08587189 +0x08d1:  nop
0858718a +0x08d2:  push   %ebp
0858718b +0x08d3:  mov    %esp,%ebp
0858718d +0x08d5:  sub    $0x18,%esp
08587190 +0x08d8:  mov    0x8(%ebp),%eax
08587193 +0x08db:  mov    %eax,(%esp)
08587196 +0x08de:  call   0858771c <+0xe64>
0858719b +0x08e3:  leave
0858719c +0x08e4:  ret
0858719d +0x08e5:  nop
0858719e +0x08e6:  push   %ebp
0858719f +0x08e7:  mov    %esp,%ebp
085871a1 +0x08e9:  sub    $0x18,%esp
085871a4 +0x08ec:  mov    0x8(%ebp),%eax
085871a7 +0x08ef:  mov    %eax,(%esp)
085871aa +0x08f2:  call   0858776c <+0xeb4>
085871af +0x08f7:  leave
085871b0 +0x08f8:  ret
085871b1 +0x08f9:  nop
085871b2 +0x08fa:  push   %ebp
085871b3 +0x08fb:  mov    %esp,%ebp
085871b5 +0x08fd:  sub    $0x28,%esp
085871b8 +0x0900:  jmp    085871fa <+0x942>
085871ba +0x0902:  mov    0xc(%ebp),%eax
085871bd +0x0905:  mov    %eax,(%esp)
085871c0 +0x0908:  call   085875c4 <+0xd0c>
085871c5 +0x090d:  mov    %eax,0x4(%esp)
085871c9 +0x0911:  mov    0x8(%ebp),%eax
085871cc +0x0914:  mov    %eax,(%esp)
085871cf +0x0917:  call   085871b2 <+0x8fa>
085871d4 +0x091c:  mov    0xc(%ebp),%eax
085871d7 +0x091f:  mov    %eax,(%esp)
085871da +0x0922:  call   085875cf <+0xd17>
085871df +0x0927:  mov    %eax,-0xc(%ebp)
085871e2 +0x092a:  mov    0xc(%ebp),%eax
085871e5 +0x092d:  mov    %eax,0x4(%esp)
085871e9 +0x0931:  mov    0x8(%ebp),%eax
085871ec +0x0934:  mov    %eax,(%esp)
085871ef +0x0937:  call   08587772 <+0xeba>
085871f4 +0x093c:  mov    -0xc(%ebp),%eax
085871f7 +0x093f:  mov    %eax,0xc(%ebp)
085871fa +0x0942:  cmpl   $0x0,0xc(%ebp)
085871fe +0x0946:  setne  %al
08587201 +0x0949:  test   %al,%al
08587203 +0x094b:  jne    085871ba <+0x902>
08587205 +0x094d:  leave
08587206 +0x094e:  ret
08587207 +0x094f:  nop
08587208 +0x0950:  push   %ebp
08587209 +0x0951:  mov    %esp,%ebp
0858720b +0x0953:  mov    0x8(%ebp),%eax
0858720e +0x0956:  mov    0x8(%eax),%eax
08587211 +0x0959:  pop    %ebp
08587212 +0x095a:  ret
08587213 +0x095b:  nop
08587214 +0x095c:  push   %ebp
08587215 +0x095d:  mov    %esp,%ebp
08587217 +0x095f:  push   %ebx
08587218 +0x0960:  sub    $0x14,%esp
0858721b +0x0963:  mov    0x8(%ebp),%ebx
0858721e +0x0966:  mov    0xc(%ebp),%eax
08587221 +0x0969:  mov    0x10(%ebp),%edx
08587224 +0x096c:  mov    %edx,0x8(%esp)
08587228 +0x0970:  mov    %eax,0x4(%esp)
0858722c +0x0974:  mov    %ebx,(%esp)
0858722f +0x0977:  call   085877a6 <+0xeee>
08587234 +0x097c:  sub    $0x4,%esp
08587237 +0x097f:  mov    %ebx,%eax
08587239 +0x0981:  mov    -0x4(%ebp),%ebx
0858723c +0x0984:  leave
0858723d +0x0985:  ret    $0x4
08587240 +0x0988:  push   %ebp
08587241 +0x0989:  mov    %esp,%ebp
08587243 +0x098b:  push   %ebx
08587244 +0x098c:  sub    $0x14,%esp
08587247 +0x098f:  mov    0x8(%ebp),%ebx
0858724a +0x0992:  mov    0xc(%ebp),%eax
0858724d +0x0995:  mov    %eax,0x4(%esp)
08587251 +0x0999:  mov    %ebx,(%esp)
08587254 +0x099c:  call   085877f8 <+0xf40>
08587259 +0x09a1:  sub    $0x4,%esp
0858725c +0x09a4:  mov    %ebx,%eax
0858725e +0x09a6:  mov    -0x4(%ebp),%ebx
08587261 +0x09a9:  leave
08587262 +0x09aa:  ret    $0x4
08587265 +0x09ad:  nop
08587266 +0x09ae:  push   %ebp
08587267 +0x09af:  mov    %esp,%ebp
08587269 +0x09b1:  mov    0x8(%ebp),%eax
0858726c +0x09b4:  mov    (%eax),%eax
0858726e +0x09b6:  add    $0x10,%eax
08587271 +0x09b9:  pop    %ebp
08587272 +0x09ba:  ret
08587273 +0x09bb:  nop
08587274 +0x09bc:  push   %ebp
08587275 +0x09bd:  mov    %esp,%ebp
08587277 +0x09bf:  sub    $0x18,%esp
0858727a +0x09c2:  mov    0x10(%ebp),%eax
0858727d +0x09c5:  mov    %eax,0x4(%esp)
08587281 +0x09c9:  mov    0xc(%ebp),%eax
08587284 +0x09cc:  mov    %eax,(%esp)
08587287 +0x09cf:  call   085868d4 <+0x1c>
0858728c +0x09d4:  leave
0858728d +0x09d5:  ret
0858728e +0x09d6:  push   %ebp
0858728f +0x09d7:  mov    %esp,%ebp
08587291 +0x09d9:  mov    0x8(%ebp),%eax
08587294 +0x09dc:  mov    (%eax),%edx
08587296 +0x09de:  mov    0xc(%ebp),%eax
08587299 +0x09e1:  mov    (%eax),%eax
0858729b +0x09e3:  cmp    %eax,%edx
0858729d +0x09e5:  sete   %al
085872a0 +0x09e8:  pop    %ebp
085872a1 +0x09e9:  ret
085872a2 +0x09ea:  push   %ebp
085872a3 +0x09eb:  mov    %esp,%ebp
085872a5 +0x09ed:  push   %ebx
085872a6 +0x09ee:  sub    $0x14,%esp
085872a9 +0x09f1:  mov    0x8(%ebp),%ebx
085872ac +0x09f4:  mov    0xc(%ebp),%eax
085872af +0x09f7:  mov    %eax,(%esp)
085872b2 +0x09fa:  call   08587802 <+0xf4a>
085872b7 +0x09ff:  mov    0x4(%eax),%edx
085872ba +0x0a02:  mov    (%eax),%eax
085872bc +0x0a04:  mov    %eax,(%ebx)
085872be +0x0a06:  mov    %edx,0x4(%ebx)
085872c1 +0x0a09:  mov    0x10(%ebp),%eax
085872c4 +0x0a0c:  mov    %eax,(%esp)
085872c7 +0x0a0f:  call   08586f67 <+0x6af>
085872cc +0x0a14:  mov    0x8(%ebp),%ecx
085872cf +0x0a17:  mov    0x4(%eax),%edx
085872d2 +0x0a1a:  mov    (%eax),%eax
085872d4 +0x0a1c:  mov    %eax,0x8(%ecx)
085872d7 +0x0a1f:  mov    %edx,0xc(%ecx)
085872da +0x0a22:  add    $0x14,%esp
085872dd +0x0a25:  pop    %ebx
085872de +0x0a26:  pop    %ebp
085872df +0x0a27:  ret
085872e0 +0x0a28:  push   %ebp
085872e1 +0x0a29:  mov    %esp,%ebp
085872e3 +0x0a2b:  push   %ebx
085872e4 +0x0a2c:  sub    $0x24,%esp
085872e7 +0x0a2f:  mov    0x8(%ebp),%ebx
085872ea +0x0a32:  lea    0x10(%ebp),%eax
085872ed +0x0a35:  mov    %eax,0x4(%esp)
085872f1 +0x0a39:  lea    -0xc(%ebp),%eax
085872f4 +0x0a3c:  mov    %eax,(%esp)
085872f7 +0x0a3f:  call   0858780a <+0xf52>
085872fc +0x0a44:  mov    0xc(%ebp),%eax
085872ff +0x0a47:  mov    0x14(%ebp),%edx
08587302 +0x0a4a:  mov    %edx,0xc(%esp)
08587306 +0x0a4e:  mov    -0xc(%ebp),%edx
08587309 +0x0a51:  mov    %edx,0x8(%esp)
0858730d +0x0a55:  mov    %eax,0x4(%esp)
08587311 +0x0a59:  mov    %ebx,(%esp)
08587314 +0x0a5c:  call   0858781a <+0xf62>
08587319 +0x0a61:  sub    $0x4,%esp
0858731c +0x0a64:  mov    %ebx,%eax
0858731e +0x0a66:  mov    -0x4(%ebp),%ebx
08587321 +0x0a69:  leave
08587322 +0x0a6a:  ret    $0x4
08587325 +0x0a6d:  nop
08587326 +0x0a6e:  push   %ebp
08587327 +0x0a6f:  mov    %esp,%ebp
08587329 +0x0a71:  sub    $0x28,%esp
0858732c +0x0a74:  jmp    0858734a <+0xa92>
0858732e +0x0a76:  mov    0x8(%ebp),%eax
08587331 +0x0a79:  mov    %eax,(%esp)
08587334 +0x0a7c:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08587339 +0x0a81:  add    %eax,%eax
0858733b +0x0a83:  mov    %eax,0x4(%esp)
0858733f +0x0a87:  mov    0x8(%ebp),%eax
08587342 +0x0a8a:  mov    %eax,(%esp)
08587345 +0x0a8d:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0858734a +0x0a92:  movl   $0x4bc,0x4(%esp)
08587352 +0x0a9a:  mov    0x8(%ebp),%eax
08587355 +0x0a9d:  mov    %eax,(%esp)
08587358 +0x0aa0:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0858735d +0x0aa5:  xor    $0x1,%eax
08587360 +0x0aa8:  test   %al,%al
08587362 +0x0aaa:  jne    0858732e <+0xa76>
08587364 +0x0aac:  mov    0x8(%ebp),%eax
08587367 +0x0aaf:  mov    0x8(%eax),%eax
0858736a +0x0ab2:  mov    %eax,%edx
0858736c +0x0ab4:  mov    0x8(%ebp),%eax
0858736f +0x0ab7:  mov    0xc(%eax),%eax
08587372 +0x0aba:  lea    (%edx,%eax,1),%eax
08587375 +0x0abd:  mov    %eax,-0xc(%ebp)
08587378 +0x0ac0:  movl   $0x4bc,0x4(%esp)
08587380 +0x0ac8:  mov    0x8(%ebp),%eax
08587383 +0x0acb:  mov    %eax,(%esp)
08587386 +0x0ace:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0858738b +0x0ad3:  mov    -0xc(%ebp),%eax
0858738e +0x0ad6:  leave
0858738f +0x0ad7:  ret
08587390 +0x0ad8:  push   %ebp
08587391 +0x0ad9:  mov    %esp,%ebp
08587393 +0x0adb:  push   %ebx
08587394 +0x0adc:  sub    $0x14,%esp
08587397 +0x0adf:  mov    0x8(%ebp),%ebx
0858739a +0x0ae2:  mov    0xc(%ebp),%eax
0858739d +0x0ae5:  mov    0xc(%eax),%eax
085873a0 +0x0ae8:  mov    %eax,0x4(%esp)
085873a4 +0x0aec:  mov    %ebx,(%esp)
085873a7 +0x0aef:  call   0858758c <+0xcd4>
085873ac +0x0af4:  mov    %ebx,%eax
085873ae +0x0af6:  add    $0x14,%esp
085873b1 +0x0af9:  pop    %ebx
085873b2 +0x0afa:  pop    %ebp
085873b3 +0x0afb:  ret    $0x4
085873b6 +0x0afe:  push   %ebp
085873b7 +0x0aff:  mov    %esp,%ebp
085873b9 +0x0b01:  push   %ebx
085873ba +0x0b02:  sub    $0x14,%esp
085873bd +0x0b05:  mov    0x8(%ebp),%eax
085873c0 +0x0b08:  mov    %eax,(%esp)
085873c3 +0x0b0b:  call   08587208 <+0x950>
085873c8 +0x0b10:  mov    %eax,0x4(%esp)
085873cc +0x0b14:  mov    0x8(%ebp),%eax
085873cf +0x0b17:  mov    %eax,(%esp)
085873d2 +0x0b1a:  call   085871b2 <+0x8fa>
085873d7 +0x0b1f:  mov    0x8(%ebp),%eax
085873da +0x0b22:  mov    %eax,(%esp)
085873dd +0x0b25:  call   08587be0 <+0x1328>
085873e2 +0x0b2a:  mov    %eax,%ebx
085873e4 +0x0b2c:  mov    0x8(%ebp),%eax
085873e7 +0x0b2f:  mov    %eax,(%esp)
085873ea +0x0b32:  call   08587504 <+0xc4c>
085873ef +0x0b37:  mov    %eax,(%ebx)
085873f1 +0x0b39:  mov    0x8(%ebp),%eax
085873f4 +0x0b3c:  mov    %eax,(%esp)
085873f7 +0x0b3f:  call   08587bec <+0x1334>
085873fc +0x0b44:  movl   $0x0,(%eax)
08587402 +0x0b4a:  mov    0x8(%ebp),%eax
08587405 +0x0b4d:  mov    %eax,(%esp)
08587408 +0x0b50:  call   08587bf8 <+0x1340>
0858740d +0x0b55:  mov    %eax,%ebx
0858740f +0x0b57:  mov    0x8(%ebp),%eax
08587412 +0x0b5a:  mov    %eax,(%esp)
08587415 +0x0b5d:  call   08587504 <+0xc4c>
0858741a +0x0b62:  mov    %eax,(%ebx)
0858741c +0x0b64:  mov    0x8(%ebp),%eax
0858741f +0x0b67:  movl   $0x0,0x14(%eax)
08587426 +0x0b6e:  add    $0x14,%esp
08587429 +0x0b71:  pop    %ebx
0858742a +0x0b72:  pop    %ebp
0858742b +0x0b73:  ret
0858742c +0x0b74:  push   %ebp
0858742d +0x0b75:  mov    %esp,%ebp
0858742f +0x0b77:  mov    0x8(%ebp),%eax
08587432 +0x0b7a:  mov    0x8(%eax),%eax
08587435 +0x0b7d:  pop    %ebp
08587436 +0x0b7e:  ret
08587437 +0x0b7f:  nop
08587438 +0x0b80:  push   %ebp
08587439 +0x0b81:  mov    %esp,%ebp
0858743b +0x0b83:  mov    0x8(%ebp),%eax
0858743e +0x0b86:  add    $0x4,%eax
08587441 +0x0b89:  pop    %ebp
08587442 +0x0b8a:  ret
08587443 +0x0b8b:  nop
08587444 +0x0b8c:  push   %ebp
08587445 +0x0b8d:  mov    %esp,%ebp
08587447 +0x0b8f:  push   %ebx
08587448 +0x0b90:  sub    $0x14,%esp
0858744b +0x0b93:  mov    0x8(%ebp),%ebx
0858744e +0x0b96:  jmp    0858749c <+0xbe4>
08587450 +0x0b98:  mov    0x10(%ebp),%eax
08587453 +0x0b9b:  mov    %eax,(%esp)
08587456 +0x0b9e:  call   085875a2 <+0xcea>
0858745b +0x0ba3:  mov    0xc(%ebp),%edx
0858745e +0x0ba6:  mov    0x18(%ebp),%ecx
08587461 +0x0ba9:  mov    %ecx,0x8(%esp)
08587465 +0x0bad:  mov    %eax,0x4(%esp)
08587469 +0x0bb1:  mov    %edx,(%esp)
0858746c +0x0bb4:  call   08587274 <+0x9bc>
08587471 +0x0bb9:  xor    $0x1,%eax
08587474 +0x0bbc:  test   %al,%al
08587476 +0x0bbe:  je     0858748e <+0xbd6>
08587478 +0x0bc0:  mov    0x10(%ebp),%eax
0858747b +0x0bc3:  mov    %eax,0x14(%ebp)
0858747e +0x0bc6:  mov    0x10(%ebp),%eax
08587481 +0x0bc9:  mov    %eax,(%esp)
08587484 +0x0bcc:  call   08587c03 <+0x134b>
08587489 +0x0bd1:  mov    %eax,0x10(%ebp)
0858748c +0x0bd4:  jmp    0858749c <+0xbe4>
0858748e +0x0bd6:  mov    0x10(%ebp),%eax
08587491 +0x0bd9:  mov    %eax,(%esp)
08587494 +0x0bdc:  call   08587c0e <+0x1356>
08587499 +0x0be1:  mov    %eax,0x10(%ebp)
0858749c +0x0be4:  cmpl   $0x0,0x10(%ebp)
085874a0 +0x0be8:  setne  %al
085874a3 +0x0beb:  test   %al,%al
085874a5 +0x0bed:  jne    08587450 <+0xb98>
085874a7 +0x0bef:  mov    0x14(%ebp),%eax
085874aa +0x0bf2:  mov    %eax,0x4(%esp)
085874ae +0x0bf6:  mov    %ebx,(%esp)
085874b1 +0x0bf9:  call   085874f6 <+0xc3e>
085874b6 +0x0bfe:  mov    %ebx,%eax
085874b8 +0x0c00:  add    $0x14,%esp
085874bb +0x0c03:  pop    %ebx
085874bc +0x0c04:  pop    %ebp
085874bd +0x0c05:  ret    $0x4
085874c0 +0x0c08:  push   %ebp
085874c1 +0x0c09:  mov    %esp,%ebp
085874c3 +0x0c0b:  sub    $0x28,%esp
085874c6 +0x0c0e:  mov    0x8(%ebp),%eax
085874c9 +0x0c11:  mov    %eax,(%esp)
085874cc +0x0c14:  call   08587c19 <+0x1361>
085874d1 +0x0c19:  mov    %eax,0x4(%esp)
085874d5 +0x0c1d:  lea    -0x9(%ebp),%eax
085874d8 +0x0c20:  mov    %eax,(%esp)
085874db +0x0c23:  call   0858759a <+0xce2>
085874e0 +0x0c28:  leave
085874e1 +0x0c29:  ret
085874e2 +0x0c2a:  push   %ebp
085874e3 +0x0c2b:  mov    %esp,%ebp
085874e5 +0x0c2d:  mov    0x8(%ebp),%eax
085874e8 +0x0c30:  mov    (%eax),%edx
085874ea +0x0c32:  mov    0xc(%ebp),%eax
085874ed +0x0c35:  mov    (%eax),%eax
085874ef +0x0c37:  cmp    %eax,%edx
085874f1 +0x0c39:  sete   %al
085874f4 +0x0c3c:  pop    %ebp
085874f5 +0x0c3d:  ret
085874f6 +0x0c3e:  push   %ebp
085874f7 +0x0c3f:  mov    %esp,%ebp
085874f9 +0x0c41:  mov    0xc(%ebp),%edx
085874fc +0x0c44:  mov    0x8(%ebp),%eax
085874ff +0x0c47:  mov    %edx,(%eax)
08587501 +0x0c49:  pop    %ebp
08587502 +0x0c4a:  ret
08587503 +0x0c4b:  nop
08587504 +0x0c4c:  push   %ebp
08587505 +0x0c4d:  mov    %esp,%ebp
08587507 +0x0c4f:  mov    0x8(%ebp),%eax
0858750a +0x0c52:  add    $0x4,%eax
0858750d +0x0c55:  pop    %ebp
0858750e +0x0c56:  ret
0858750f +0x0c57:  nop
08587510 +0x0c58:  push   %ebp
08587511 +0x0c59:  mov    %esp,%ebp
08587513 +0x0c5b:  push   %ebx
08587514 +0x0c5c:  sub    $0x14,%esp
08587517 +0x0c5f:  mov    0x8(%ebp),%ebx
0858751a +0x0c62:  jmp    08587568 <+0xcb0>
0858751c +0x0c64:  mov    0x10(%ebp),%eax
0858751f +0x0c67:  mov    %eax,(%esp)
08587522 +0x0c6a:  call   085875a2 <+0xcea>
08587527 +0x0c6f:  mov    0xc(%ebp),%edx
0858752a +0x0c72:  mov    0x18(%ebp),%ecx
0858752d +0x0c75:  mov    %ecx,0x8(%esp)
08587531 +0x0c79:  mov    %eax,0x4(%esp)
08587535 +0x0c7d:  mov    %edx,(%esp)
08587538 +0x0c80:  call   08587274 <+0x9bc>
0858753d +0x0c85:  xor    $0x1,%eax
08587540 +0x0c88:  test   %al,%al
08587542 +0x0c8a:  je     0858755a <+0xca2>
08587544 +0x0c8c:  mov    0x10(%ebp),%eax
08587547 +0x0c8f:  mov    %eax,0x14(%ebp)
0858754a +0x0c92:  mov    0x10(%ebp),%eax
0858754d +0x0c95:  mov    %eax,(%esp)
08587550 +0x0c98:  call   085875cf <+0xd17>
08587555 +0x0c9d:  mov    %eax,0x10(%ebp)
08587558 +0x0ca0:  jmp    08587568 <+0xcb0>
0858755a +0x0ca2:  mov    0x10(%ebp),%eax
0858755d +0x0ca5:  mov    %eax,(%esp)
08587560 +0x0ca8:  call   085875c4 <+0xd0c>
08587565 +0x0cad:  mov    %eax,0x10(%ebp)
08587568 +0x0cb0:  cmpl   $0x0,0x10(%ebp)
0858756c +0x0cb4:  setne  %al
0858756f +0x0cb7:  test   %al,%al
08587571 +0x0cb9:  jne    0858751c <+0xc64>
08587573 +0x0cbb:  mov    0x14(%ebp),%eax
08587576 +0x0cbe:  mov    %eax,0x4(%esp)
0858757a +0x0cc2:  mov    %ebx,(%esp)
0858757d +0x0cc5:  call   0858758c <+0xcd4>
08587582 +0x0cca:  mov    %ebx,%eax
08587584 +0x0ccc:  add    $0x14,%esp
08587587 +0x0ccf:  pop    %ebx
08587588 +0x0cd0:  pop    %ebp
08587589 +0x0cd1:  ret    $0x4
0858758c +0x0cd4:  push   %ebp
0858758d +0x0cd5:  mov    %esp,%ebp
0858758f +0x0cd7:  mov    0xc(%ebp),%edx
08587592 +0x0cda:  mov    0x8(%ebp),%eax
08587595 +0x0cdd:  mov    %edx,(%eax)
08587597 +0x0cdf:  pop    %ebp
08587598 +0x0ce0:  ret
08587599 +0x0ce1:  nop
0858759a +0x0ce2:  push   %ebp
0858759b +0x0ce3:  mov    %esp,%ebp
0858759d +0x0ce5:  mov    0xc(%ebp),%eax
085875a0 +0x0ce8:  pop    %ebp
085875a1 +0x0ce9:  ret
085875a2 +0x0cea:  push   %ebp
085875a3 +0x0ceb:  mov    %esp,%ebp
085875a5 +0x0ced:  sub    $0x28,%esp
085875a8 +0x0cf0:  mov    0x8(%ebp),%eax
085875ab +0x0cf3:  mov    %eax,(%esp)
085875ae +0x0cf6:  call   08587c24 <+0x136c>
085875b3 +0x0cfb:  mov    %eax,0x4(%esp)
085875b7 +0x0cff:  lea    -0x9(%ebp),%eax
085875ba +0x0d02:  mov    %eax,(%esp)
085875bd +0x0d05:  call   0858759a <+0xce2>
085875c2 +0x0d0a:  leave
085875c3 +0x0d0b:  ret
085875c4 +0x0d0c:  push   %ebp
085875c5 +0x0d0d:  mov    %esp,%ebp
085875c7 +0x0d0f:  mov    0x8(%ebp),%eax
085875ca +0x0d12:  mov    0xc(%eax),%eax
085875cd +0x0d15:  pop    %ebp
085875ce +0x0d16:  ret
085875cf +0x0d17:  push   %ebp
085875d0 +0x0d18:  mov    %esp,%ebp
085875d2 +0x0d1a:  mov    0x8(%ebp),%eax
085875d5 +0x0d1d:  mov    0x8(%eax),%eax
085875d8 +0x0d20:  pop    %ebp
085875d9 +0x0d21:  ret
085875da +0x0d22:  push   %ebp
085875db +0x0d23:  mov    %esp,%ebp
085875dd +0x0d25:  push   %esi
085875de +0x0d26:  push   %ebx
085875df +0x0d27:  sub    $0x20,%esp
085875e2 +0x0d2a:  mov    0x8(%ebp),%esi
085875e5 +0x0d2d:  cmpl   $0x0,0x10(%ebp)
085875e9 +0x0d31:  jne    08587631 <+0xd79>
085875eb +0x0d33:  mov    0xc(%ebp),%eax
085875ee +0x0d36:  mov    %eax,(%esp)
085875f1 +0x0d39:  call   08587504 <+0xc4c>
085875f6 +0x0d3e:  cmp    0x14(%ebp),%eax
085875f9 +0x0d41:  je     08587631 <+0xd79>
085875fb +0x0d43:  mov    0x14(%ebp),%eax
085875fe +0x0d46:  mov    %eax,(%esp)
08587601 +0x0d49:  call   085874c0 <+0xc08>
08587606 +0x0d4e:  mov    %eax,%ebx
08587608 +0x0d50:  mov    0x18(%ebp),%eax
0858760b +0x0d53:  mov    %eax,0x4(%esp)
0858760f +0x0d57:  lea    -0xe(%ebp),%eax
08587612 +0x0d5a:  mov    %eax,(%esp)
08587615 +0x0d5d:  call   0858759a <+0xce2>
0858761a +0x0d62:  mov    0xc(%ebp),%edx
0858761d +0x0d65:  mov    %ebx,0x8(%esp)
08587621 +0x0d69:  mov    %eax,0x4(%esp)
08587625 +0x0d6d:  mov    %edx,(%esp)
08587628 +0x0d70:  call   08587274 <+0x9bc>
0858762d +0x0d75:  test   %al,%al
0858762f +0x0d77:  je     08587638 <+0xd80>
08587631 +0x0d79:  mov    $0x1,%eax
08587636 +0x0d7e:  jmp    0858763d <+0xd85>
08587638 +0x0d80:  mov    $0x0,%eax
0858763d +0x0d85:  mov    %al,-0xd(%ebp)
08587640 +0x0d88:  mov    0x18(%ebp),%eax
08587643 +0x0d8b:  mov    %eax,0x4(%esp)
08587647 +0x0d8f:  mov    0xc(%ebp),%eax
0858764a +0x0d92:  mov    %eax,(%esp)
0858764d +0x0d95:  call   08587c30 <+0x1378>
08587652 +0x0d9a:  mov    %eax,-0xc(%ebp)
08587655 +0x0d9d:  mov    0xc(%ebp),%eax
08587658 +0x0da0:  lea    0x4(%eax),%ecx
0858765b +0x0da3:  mov    -0xc(%ebp),%edx
0858765e +0x0da6:  movzbl -0xd(%ebp),%eax
08587662 +0x0daa:  mov    %ecx,0xc(%esp)
08587666 +0x0dae:  mov    0x14(%ebp),%ecx
08587669 +0x0db1:  mov    %ecx,0x8(%esp)
0858766d +0x0db5:  mov    %edx,0x4(%esp)
08587671 +0x0db9:  mov    %eax,(%esp)
08587674 +0x0dbc:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08587679 +0x0dc1:  mov    0xc(%ebp),%eax
0858767c +0x0dc4:  mov    0x14(%eax),%eax
0858767f +0x0dc7:  lea    0x1(%eax),%edx
08587682 +0x0dca:  mov    0xc(%ebp),%eax
08587685 +0x0dcd:  mov    %edx,0x14(%eax)
08587688 +0x0dd0:  mov    -0xc(%ebp),%eax
0858768b +0x0dd3:  mov    %eax,0x4(%esp)
0858768f +0x0dd7:  mov    %esi,(%esp)
08587692 +0x0dda:  call   0858758c <+0xcd4>
08587697 +0x0ddf:  mov    %esi,%eax
08587699 +0x0de1:  add    $0x20,%esp
0858769c +0x0de4:  pop    %ebx
0858769d +0x0de5:  pop    %esi
0858769e +0x0de6:  pop    %ebp
0858769f +0x0de7:  ret    $0x4
085876a2 +0x0dea:  push   %ebp
085876a3 +0x0deb:  mov    %esp,%ebp
085876a5 +0x0ded:  sub    $0x18,%esp
085876a8 +0x0df0:  mov    0xc(%ebp),%eax
085876ab +0x0df3:  mov    %eax,(%esp)
085876ae +0x0df6:  call   08587cb1 <+0x13f9>
085876b3 +0x0dfb:  mov    0x8(%ebp),%edx
085876b6 +0x0dfe:  mov    (%eax),%eax
085876b8 +0x0e00:  mov    %eax,(%edx)
085876ba +0x0e02:  mov    0x10(%ebp),%eax
085876bd +0x0e05:  mov    %eax,(%esp)
085876c0 +0x0e08:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085876c5 +0x0e0d:  movzbl (%eax),%edx
085876c8 +0x0e10:  mov    0x8(%ebp),%eax
085876cb +0x0e13:  mov    %dl,0x4(%eax)
085876ce +0x0e16:  leave
085876cf +0x0e17:  ret
085876d0 +0x0e18:  push   %ebp
085876d1 +0x0e19:  mov    %esp,%ebp
085876d3 +0x0e1b:  sub    $0x18,%esp
085876d6 +0x0e1e:  mov    0x8(%ebp),%eax
085876d9 +0x0e21:  mov    (%eax),%eax
085876db +0x0e23:  mov    %eax,(%esp)
085876de +0x0e26:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
085876e3 +0x0e2b:  mov    0x8(%ebp),%edx
085876e6 +0x0e2e:  mov    %eax,(%edx)
085876e8 +0x0e30:  mov    0x8(%ebp),%eax
085876eb +0x0e33:  leave
085876ec +0x0e34:  ret
085876ed +0x0e35:  nop
085876ee +0x0e36:  push   %ebp
085876ef +0x0e37:  mov    %esp,%ebp
085876f1 +0x0e39:  sub    $0x18,%esp
085876f4 +0x0e3c:  mov    0xc(%ebp),%eax
085876f7 +0x0e3f:  mov    %eax,(%esp)
085876fa +0x0e42:  call   08587cb9 <+0x1401>
085876ff +0x0e47:  mov    0x8(%ebp),%edx
08587702 +0x0e4a:  mov    (%eax),%eax
08587704 +0x0e4c:  mov    %eax,(%edx)
08587706 +0x0e4e:  mov    0x10(%ebp),%eax
08587709 +0x0e51:  mov    %eax,(%esp)
0858770c +0x0e54:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08587711 +0x0e59:  movzbl (%eax),%edx
08587714 +0x0e5c:  mov    0x8(%ebp),%eax
08587717 +0x0e5f:  mov    %dl,0x4(%eax)
0858771a +0x0e62:  leave
0858771b +0x0e63:  ret
0858771c +0x0e64:  push   %ebp
0858771d +0x0e65:  mov    %esp,%ebp
0858771f +0x0e67:  sub    $0x18,%esp
08587722 +0x0e6a:  mov    0x8(%ebp),%eax
08587725 +0x0e6d:  mov    %eax,(%esp)
08587728 +0x0e70:  call   08587cc2 <+0x140a>
0858772d +0x0e75:  mov    0x8(%ebp),%eax
08587730 +0x0e78:  movl   $0x0,0x4(%eax)
08587737 +0x0e7f:  mov    0x8(%ebp),%eax
0858773a +0x0e82:  movl   $0x0,0x8(%eax)
08587741 +0x0e89:  mov    0x8(%ebp),%eax
08587744 +0x0e8c:  movl   $0x0,0xc(%eax)
0858774b +0x0e93:  mov    0x8(%ebp),%eax
0858774e +0x0e96:  movl   $0x0,0x10(%eax)
08587755 +0x0e9d:  mov    0x8(%ebp),%eax
08587758 +0x0ea0:  movl   $0x0,0x14(%eax)
0858775f +0x0ea7:  mov    0x8(%ebp),%eax
08587762 +0x0eaa:  mov    %eax,(%esp)
08587765 +0x0ead:  call   08587cd6 <+0x141e>
0858776a +0x0eb2:  leave
0858776b +0x0eb3:  ret
0858776c +0x0eb4:  push   %ebp
0858776d +0x0eb5:  mov    %esp,%ebp
0858776f +0x0eb7:  pop    %ebp
08587770 +0x0eb8:  ret
08587771 +0x0eb9:  nop
08587772 +0x0eba:  push   %ebp
08587773 +0x0ebb:  mov    %esp,%ebp
08587775 +0x0ebd:  sub    $0x18,%esp
08587778 +0x0ec0:  mov    0x8(%ebp),%eax
0858777b +0x0ec3:  mov    %eax,(%esp)
0858777e +0x0ec6:  call   08587d08 <+0x1450>
08587783 +0x0ecb:  mov    0xc(%ebp),%edx
08587786 +0x0ece:  mov    %edx,0x4(%esp)
0858778a +0x0ed2:  mov    %eax,(%esp)
0858778d +0x0ed5:  call   08587d16 <+0x145e>
08587792 +0x0eda:  mov    0xc(%ebp),%eax
08587795 +0x0edd:  mov    %eax,0x4(%esp)
08587799 +0x0ee1:  mov    0x8(%ebp),%eax
0858779c +0x0ee4:  mov    %eax,(%esp)
0858779f +0x0ee7:  call   08587d2a <+0x1472>
085877a4 +0x0eec:  leave
085877a5 +0x0eed:  ret
085877a6 +0x0eee:  push   %ebp
085877a7 +0x0eef:  mov    %esp,%ebp
085877a9 +0x0ef1:  push   %esi
085877aa +0x0ef2:  push   %ebx
085877ab +0x0ef3:  sub    $0x20,%esp
085877ae +0x0ef6:  mov    0x8(%ebp),%esi
085877b1 +0x0ef9:  mov    0xc(%ebp),%eax
085877b4 +0x0efc:  mov    %eax,(%esp)
085877b7 +0x0eff:  call   08587504 <+0xc4c>
085877bc +0x0f04:  mov    %eax,%ebx
085877be +0x0f06:  mov    0xc(%ebp),%eax
085877c1 +0x0f09:  mov    %eax,(%esp)
085877c4 +0x0f0c:  call   08587208 <+0x950>
085877c9 +0x0f11:  mov    0x10(%ebp),%edx
085877cc +0x0f14:  mov    %edx,0x10(%esp)
085877d0 +0x0f18:  mov    %ebx,0xc(%esp)
085877d4 +0x0f1c:  mov    %eax,0x8(%esp)
085877d8 +0x0f20:  mov    0xc(%ebp),%eax
085877db +0x0f23:  mov    %eax,0x4(%esp)
085877df +0x0f27:  mov    %esi,(%esp)
085877e2 +0x0f2a:  call   08587510 <+0xc58>
085877e7 +0x0f2f:  sub    $0x4,%esp
085877ea +0x0f32:  mov    %esi,%eax
085877ec +0x0f34:  lea    -0x8(%ebp),%esp
085877ef +0x0f37:  add    $0x0,%esp
085877f2 +0x0f3a:  pop    %ebx
085877f3 +0x0f3b:  pop    %esi
085877f4 +0x0f3c:  pop    %ebp
085877f5 +0x0f3d:  ret    $0x4
085877f8 +0x0f40:  push   %ebp
085877f9 +0x0f41:  mov    %esp,%ebp
085877fb +0x0f43:  mov    0x8(%ebp),%eax
085877fe +0x0f46:  pop    %ebp
085877ff +0x0f47:  ret    $0x4
08587802 +0x0f4a:  push   %ebp
08587803 +0x0f4b:  mov    %esp,%ebp
08587805 +0x0f4d:  mov    0x8(%ebp),%eax
08587808 +0x0f50:  pop    %ebp
08587809 +0x0f51:  ret
0858780a +0x0f52:  push   %ebp
0858780b +0x0f53:  mov    %esp,%ebp
0858780d +0x0f55:  mov    0xc(%ebp),%eax
08587810 +0x0f58:  mov    (%eax),%edx
08587812 +0x0f5a:  mov    0x8(%ebp),%eax
08587815 +0x0f5d:  mov    %edx,(%eax)
08587817 +0x0f5f:  pop    %ebp
08587818 +0x0f60:  ret
08587819 +0x0f61:  nop
0858781a +0x0f62:  push   %ebp
0858781b +0x0f63:  mov    %esp,%ebp
0858781d +0x0f65:  push   %esi
0858781e +0x0f66:  push   %ebx
0858781f +0x0f67:  sub    $0x50,%esp
08587822 +0x0f6a:  mov    0x8(%ebp),%ebx
08587825 +0x0f6d:  mov    0x10(%ebp),%esi
08587828 +0x0f70:  mov    0xc(%ebp),%eax
0858782b +0x0f73:  mov    %eax,(%esp)
0858782e +0x0f76:  call   08587504 <+0xc4c>
08587833 +0x0f7b:  cmp    %eax,%esi
08587835 +0x0f7d:  sete   %al
08587838 +0x0f80:  test   %al,%al
0858783a +0x0f82:  je     085878fc <+0x1044>
08587840 +0x0f88:  mov    0xc(%ebp),%eax
08587843 +0x0f8b:  mov    %eax,(%esp)
08587846 +0x0f8e:  call   08586f54 <+0x69c>
0858784b +0x0f93:  test   %eax,%eax
0858784d +0x0f95:  je     08587896 <+0xfde>
0858784f +0x0f97:  mov    0x14(%ebp),%eax
08587852 +0x0f9a:  mov    %eax,0x4(%esp)
08587856 +0x0f9e:  lea    -0x29(%ebp),%eax
08587859 +0x0fa1:  mov    %eax,(%esp)
0858785c +0x0fa4:  call   0858759a <+0xce2>
08587861 +0x0fa9:  mov    %eax,%esi
08587863 +0x0fab:  mov    0xc(%ebp),%eax
08587866 +0x0fae:  mov    %eax,(%esp)
08587869 +0x0fb1:  call   08587bf8 <+0x1340>
0858786e +0x0fb6:  mov    (%eax),%eax
08587870 +0x0fb8:  mov    %eax,(%esp)
08587873 +0x0fbb:  call   085874c0 <+0xc08>
08587878 +0x0fc0:  mov    0xc(%ebp),%edx
0858787b +0x0fc3:  mov    %esi,0x8(%esp)
0858787f +0x0fc7:  mov    %eax,0x4(%esp)
08587883 +0x0fcb:  mov    %edx,(%esp)
08587886 +0x0fce:  call   08587274 <+0x9bc>
0858788b +0x0fd3:  test   %al,%al
0858788d +0x0fd5:  je     08587896 <+0xfde>
0858788f +0x0fd7:  mov    $0x1,%eax
08587894 +0x0fdc:  jmp    0858789b <+0xfe3>
08587896 +0x0fde:  mov    $0x0,%eax
0858789b +0x0fe3:  test   %al,%al
0858789d +0x0fe5:  je     085878d6 <+0x101e>
0858789f +0x0fe7:  mov    0xc(%ebp),%eax
085878a2 +0x0fea:  mov    %eax,(%esp)
085878a5 +0x0fed:  call   08587bf8 <+0x1340>
085878aa +0x0ff2:  mov    (%eax),%eax
085878ac +0x0ff4:  mov    0x14(%ebp),%edx
085878af +0x0ff7:  mov    %edx,0x10(%esp)
085878b3 +0x0ffb:  mov    %eax,0xc(%esp)
085878b7 +0x0fff:  movl   $0x0,0x8(%esp)
085878bf +0x1007:  mov    0xc(%ebp),%eax
085878c2 +0x100a:  mov    %eax,0x4(%esp)
085878c6 +0x100e:  mov    %ebx,(%esp)
085878c9 +0x1011:  call   085875da <+0xd22>
085878ce +0x1016:  sub    $0x4,%esp
085878d1 +0x1019:  jmp    08587bd1 <+0x1319>
085878d6 +0x101e:  lea    -0x28(%ebp),%eax
085878d9 +0x1021:  mov    0x14(%ebp),%edx
085878dc +0x1024:  mov    %edx,0x8(%esp)
085878e0 +0x1028:  mov    0xc(%ebp),%edx
085878e3 +0x102b:  mov    %edx,0x4(%esp)
085878e7 +0x102f:  mov    %eax,(%esp)
085878ea +0x1032:  call   08586fba <+0x702>
085878ef +0x1037:  sub    $0x4,%esp
085878f2 +0x103a:  mov    -0x28(%ebp),%eax
085878f5 +0x103d:  mov    %eax,(%ebx)
085878f7 +0x103f:  jmp    08587bd1 <+0x1319>
085878fc +0x1044:  mov    0x10(%ebp),%eax
085878ff +0x1047:  mov    %eax,(%esp)
08587902 +0x104a:  call   085874c0 <+0xc08>
08587907 +0x104f:  mov    %eax,%esi
08587909 +0x1051:  mov    0x14(%ebp),%eax
0858790c +0x1054:  mov    %eax,0x4(%esp)
08587910 +0x1058:  lea    -0x1e(%ebp),%eax
08587913 +0x105b:  mov    %eax,(%esp)
08587916 +0x105e:  call   0858759a <+0xce2>
0858791b +0x1063:  mov    0xc(%ebp),%edx
0858791e +0x1066:  mov    %esi,0x8(%esp)
08587922 +0x106a:  mov    %eax,0x4(%esp)
08587926 +0x106e:  mov    %edx,(%esp)
08587929 +0x1071:  call   08587274 <+0x9bc>
0858792e +0x1076:  test   %al,%al
08587930 +0x1078:  je     08587a68 <+0x11b0>
08587936 +0x107e:  mov    0x10(%ebp),%eax
08587939 +0x1081:  mov    %eax,-0x30(%ebp)
0858793c +0x1084:  mov    0x10(%ebp),%esi
0858793f +0x1087:  mov    0xc(%ebp),%eax
08587942 +0x108a:  mov    %eax,(%esp)
08587945 +0x108d:  call   08587be0 <+0x1328>
0858794a +0x1092:  mov    (%eax),%eax
0858794c +0x1094:  cmp    %eax,%esi
0858794e +0x1096:  sete   %al
08587951 +0x1099:  test   %al,%al
08587953 +0x109b:  je     08587995 <+0x10dd>
08587955 +0x109d:  mov    0xc(%ebp),%eax
08587958 +0x10a0:  mov    %eax,(%esp)
0858795b +0x10a3:  call   08587be0 <+0x1328>
08587960 +0x10a8:  mov    (%eax),%esi
08587962 +0x10aa:  mov    0xc(%ebp),%eax
08587965 +0x10ad:  mov    %eax,(%esp)
08587968 +0x10b0:  call   08587be0 <+0x1328>
0858796d +0x10b5:  mov    (%eax),%eax
0858796f +0x10b7:  mov    0x14(%ebp),%edx
08587972 +0x10ba:  mov    %edx,0x10(%esp)
08587976 +0x10be:  mov    %esi,0xc(%esp)
0858797a +0x10c2:  mov    %eax,0x8(%esp)
0858797e +0x10c6:  mov    0xc(%ebp),%eax
08587981 +0x10c9:  mov    %eax,0x4(%esp)
08587985 +0x10cd:  mov    %ebx,(%esp)
08587988 +0x10d0:  call   085875da <+0xd22>
0858798d +0x10d5:  sub    $0x4,%esp
08587990 +0x10d8:  jmp    08587bd1 <+0x1319>
08587995 +0x10dd:  mov    0x14(%ebp),%eax
08587998 +0x10e0:  mov    %eax,0x4(%esp)
0858799c +0x10e4:  lea    -0x1d(%ebp),%eax
0858799f +0x10e7:  mov    %eax,(%esp)
085879a2 +0x10ea:  call   0858759a <+0xce2>
085879a7 +0x10ef:  mov    %eax,%esi
085879a9 +0x10f1:  lea    -0x30(%ebp),%eax
085879ac +0x10f4:  mov    %eax,(%esp)
085879af +0x10f7:  call   08587d4c <+0x1494>
085879b4 +0x10fc:  mov    (%eax),%eax
085879b6 +0x10fe:  mov    %eax,(%esp)
085879b9 +0x1101:  call   085874c0 <+0xc08>
085879be +0x1106:  mov    0xc(%ebp),%edx
085879c1 +0x1109:  mov    %esi,0x8(%esp)
085879c5 +0x110d:  mov    %eax,0x4(%esp)
085879c9 +0x1111:  mov    %edx,(%esp)
085879cc +0x1114:  call   08587274 <+0x9bc>
085879d1 +0x1119:  test   %al,%al
085879d3 +0x111b:  je     08587a42 <+0x118a>
085879d5 +0x111d:  mov    -0x30(%ebp),%eax
085879d8 +0x1120:  mov    %eax,(%esp)
085879db +0x1123:  call   08587c0e <+0x1356>
085879e0 +0x1128:  test   %eax,%eax
085879e2 +0x112a:  sete   %al
085879e5 +0x112d:  test   %al,%al
085879e7 +0x112f:  je     08587a16 <+0x115e>
085879e9 +0x1131:  mov    -0x30(%ebp),%eax
085879ec +0x1134:  mov    0x14(%ebp),%edx
085879ef +0x1137:  mov    %edx,0x10(%esp)
085879f3 +0x113b:  mov    %eax,0xc(%esp)
085879f7 +0x113f:  movl   $0x0,0x8(%esp)
085879ff +0x1147:  mov    0xc(%ebp),%eax
08587a02 +0x114a:  mov    %eax,0x4(%esp)
08587a06 +0x114e:  mov    %ebx,(%esp)
08587a09 +0x1151:  call   085875da <+0xd22>
08587a0e +0x1156:  sub    $0x4,%esp
08587a11 +0x1159:  jmp    08587bd1 <+0x1319>
08587a16 +0x115e:  mov    0x10(%ebp),%edx
08587a19 +0x1161:  mov    0x10(%ebp),%eax
08587a1c +0x1164:  mov    0x14(%ebp),%ecx
08587a1f +0x1167:  mov    %ecx,0x10(%esp)
08587a23 +0x116b:  mov    %edx,0xc(%esp)
08587a27 +0x116f:  mov    %eax,0x8(%esp)
08587a2b +0x1173:  mov    0xc(%ebp),%eax
08587a2e +0x1176:  mov    %eax,0x4(%esp)
08587a32 +0x117a:  mov    %ebx,(%esp)
08587a35 +0x117d:  call   085875da <+0xd22>
08587a3a +0x1182:  sub    $0x4,%esp
08587a3d +0x1185:  jmp    08587bd1 <+0x1319>
08587a42 +0x118a:  lea    -0x1c(%ebp),%eax
08587a45 +0x118d:  mov    0x14(%ebp),%edx
08587a48 +0x1190:  mov    %edx,0x8(%esp)
08587a4c +0x1194:  mov    0xc(%ebp),%edx
08587a4f +0x1197:  mov    %edx,0x4(%esp)
08587a53 +0x119b:  mov    %eax,(%esp)
08587a56 +0x119e:  call   08586fba <+0x702>
08587a5b +0x11a3:  sub    $0x4,%esp
08587a5e +0x11a6:  mov    -0x1c(%ebp),%eax
08587a61 +0x11a9:  mov    %eax,(%ebx)
08587a63 +0x11ab:  jmp    08587bd1 <+0x1319>
08587a68 +0x11b0:  mov    0x14(%ebp),%eax
08587a6b +0x11b3:  mov    %eax,0x4(%esp)
08587a6f +0x11b7:  lea    -0x12(%ebp),%eax
08587a72 +0x11ba:  mov    %eax,(%esp)
08587a75 +0x11bd:  call   0858759a <+0xce2>
08587a7a +0x11c2:  mov    %eax,%esi
08587a7c +0x11c4:  mov    0x10(%ebp),%eax
08587a7f +0x11c7:  mov    %eax,(%esp)
08587a82 +0x11ca:  call   085874c0 <+0xc08>
08587a87 +0x11cf:  mov    0xc(%ebp),%edx
08587a8a +0x11d2:  mov    %esi,0x8(%esp)
08587a8e +0x11d6:  mov    %eax,0x4(%esp)
08587a92 +0x11da:  mov    %edx,(%esp)
08587a95 +0x11dd:  call   08587274 <+0x9bc>
08587a9a +0x11e2:  test   %al,%al
08587a9c +0x11e4:  je     08587bc2 <+0x130a>
08587aa2 +0x11ea:  mov    0x10(%ebp),%eax
08587aa5 +0x11ed:  mov    %eax,-0x34(%ebp)
08587aa8 +0x11f0:  mov    0x10(%ebp),%esi
08587aab +0x11f3:  mov    0xc(%ebp),%eax
08587aae +0x11f6:  mov    %eax,(%esp)
08587ab1 +0x11f9:  call   08587bf8 <+0x1340>
08587ab6 +0x11fe:  mov    (%eax),%eax
08587ab8 +0x1200:  cmp    %eax,%esi
08587aba +0x1202:  sete   %al
08587abd +0x1205:  test   %al,%al
08587abf +0x1207:  je     08587af8 <+0x1240>
08587ac1 +0x1209:  mov    0xc(%ebp),%eax
08587ac4 +0x120c:  mov    %eax,(%esp)
08587ac7 +0x120f:  call   08587bf8 <+0x1340>
08587acc +0x1214:  mov    (%eax),%eax
08587ace +0x1216:  mov    0x14(%ebp),%edx
08587ad1 +0x1219:  mov    %edx,0x10(%esp)
08587ad5 +0x121d:  mov    %eax,0xc(%esp)
08587ad9 +0x1221:  movl   $0x0,0x8(%esp)
08587ae1 +0x1229:  mov    0xc(%ebp),%eax
08587ae4 +0x122c:  mov    %eax,0x4(%esp)
08587ae8 +0x1230:  mov    %ebx,(%esp)
08587aeb +0x1233:  call   085875da <+0xd22>
08587af0 +0x1238:  sub    $0x4,%esp
08587af3 +0x123b:  jmp    08587bd1 <+0x1319>
08587af8 +0x1240:  lea    -0x34(%ebp),%eax
08587afb +0x1243:  mov    %eax,(%esp)
08587afe +0x1246:  call   08587d6a <+0x14b2>
08587b03 +0x124b:  mov    (%eax),%eax
08587b05 +0x124d:  mov    %eax,(%esp)
08587b08 +0x1250:  call   085874c0 <+0xc08>
08587b0d +0x1255:  mov    %eax,%esi
08587b0f +0x1257:  mov    0x14(%ebp),%eax
08587b12 +0x125a:  mov    %eax,0x4(%esp)
08587b16 +0x125e:  lea    -0x11(%ebp),%eax
08587b19 +0x1261:  mov    %eax,(%esp)
08587b1c +0x1264:  call   0858759a <+0xce2>
08587b21 +0x1269:  mov    0xc(%ebp),%edx
08587b24 +0x126c:  mov    %esi,0x8(%esp)
08587b28 +0x1270:  mov    %eax,0x4(%esp)
08587b2c +0x1274:  mov    %edx,(%esp)
08587b2f +0x1277:  call   08587274 <+0x9bc>
08587b34 +0x127c:  test   %al,%al
08587b36 +0x127e:  je     08587b9f <+0x12e7>
08587b38 +0x1280:  mov    0x10(%ebp),%eax
08587b3b +0x1283:  mov    %eax,(%esp)
08587b3e +0x1286:  call   08587c0e <+0x1356>
08587b43 +0x128b:  test   %eax,%eax
08587b45 +0x128d:  sete   %al
08587b48 +0x1290:  test   %al,%al
08587b4a +0x1292:  je     08587b76 <+0x12be>
08587b4c +0x1294:  mov    0x10(%ebp),%eax
08587b4f +0x1297:  mov    0x14(%ebp),%edx
08587b52 +0x129a:  mov    %edx,0x10(%esp)
08587b56 +0x129e:  mov    %eax,0xc(%esp)
08587b5a +0x12a2:  movl   $0x0,0x8(%esp)
08587b62 +0x12aa:  mov    0xc(%ebp),%eax
08587b65 +0x12ad:  mov    %eax,0x4(%esp)
08587b69 +0x12b1:  mov    %ebx,(%esp)
08587b6c +0x12b4:  call   085875da <+0xd22>
08587b71 +0x12b9:  sub    $0x4,%esp
08587b74 +0x12bc:  jmp    08587bd1 <+0x1319>
08587b76 +0x12be:  mov    -0x34(%ebp),%edx
08587b79 +0x12c1:  mov    -0x34(%ebp),%eax
08587b7c +0x12c4:  mov    0x14(%ebp),%ecx
08587b7f +0x12c7:  mov    %ecx,0x10(%esp)
08587b83 +0x12cb:  mov    %edx,0xc(%esp)
08587b87 +0x12cf:  mov    %eax,0x8(%esp)
08587b8b +0x12d3:  mov    0xc(%ebp),%eax
08587b8e +0x12d6:  mov    %eax,0x4(%esp)
08587b92 +0x12da:  mov    %ebx,(%esp)
08587b95 +0x12dd:  call   085875da <+0xd22>
08587b9a +0x12e2:  sub    $0x4,%esp
08587b9d +0x12e5:  jmp    08587bd1 <+0x1319>
08587b9f +0x12e7:  lea    -0x10(%ebp),%eax
08587ba2 +0x12ea:  mov    0x14(%ebp),%edx
08587ba5 +0x12ed:  mov    %edx,0x8(%esp)
08587ba9 +0x12f1:  mov    0xc(%ebp),%edx
08587bac +0x12f4:  mov    %edx,0x4(%esp)
08587bb0 +0x12f8:  mov    %eax,(%esp)
08587bb3 +0x12fb:  call   08586fba <+0x702>
08587bb8 +0x1300:  sub    $0x4,%esp
08587bbb +0x1303:  mov    -0x10(%ebp),%eax
08587bbe +0x1306:  mov    %eax,(%ebx)
08587bc0 +0x1308:  jmp    08587bd1 <+0x1319>
08587bc2 +0x130a:  mov    0x10(%ebp),%eax
08587bc5 +0x130d:  mov    %eax,0x4(%esp)
08587bc9 +0x1311:  mov    %ebx,(%esp)
08587bcc +0x1314:  call   0858758c <+0xcd4>
08587bd1 +0x1319:  mov    %ebx,%eax
08587bd3 +0x131b:  lea    -0x8(%ebp),%esp
08587bd6 +0x131e:  add    $0x0,%esp
08587bd9 +0x1321:  pop    %ebx
08587bda +0x1322:  pop    %esi
08587bdb +0x1323:  pop    %ebp
08587bdc +0x1324:  ret    $0x4
08587bdf +0x1327:  nop
08587be0 +0x1328:  push   %ebp
08587be1 +0x1329:  mov    %esp,%ebp
08587be3 +0x132b:  mov    0x8(%ebp),%eax
08587be6 +0x132e:  add    $0xc,%eax
08587be9 +0x1331:  pop    %ebp
08587bea +0x1332:  ret
08587beb +0x1333:  nop
08587bec +0x1334:  push   %ebp
08587bed +0x1335:  mov    %esp,%ebp
08587bef +0x1337:  mov    0x8(%ebp),%eax
08587bf2 +0x133a:  add    $0x8,%eax
08587bf5 +0x133d:  pop    %ebp
08587bf6 +0x133e:  ret
08587bf7 +0x133f:  nop
08587bf8 +0x1340:  push   %ebp
08587bf9 +0x1341:  mov    %esp,%ebp
08587bfb +0x1343:  mov    0x8(%ebp),%eax
08587bfe +0x1346:  add    $0x10,%eax
08587c01 +0x1349:  pop    %ebp
08587c02 +0x134a:  ret
08587c03 +0x134b:  push   %ebp
08587c04 +0x134c:  mov    %esp,%ebp
08587c06 +0x134e:  mov    0x8(%ebp),%eax
08587c09 +0x1351:  mov    0x8(%eax),%eax
08587c0c +0x1354:  pop    %ebp
08587c0d +0x1355:  ret
08587c0e +0x1356:  push   %ebp
08587c0f +0x1357:  mov    %esp,%ebp
08587c11 +0x1359:  mov    0x8(%ebp),%eax
08587c14 +0x135c:  mov    0xc(%eax),%eax
08587c17 +0x135f:  pop    %ebp
08587c18 +0x1360:  ret
08587c19 +0x1361:  push   %ebp
08587c1a +0x1362:  mov    %esp,%ebp
08587c1c +0x1364:  mov    0x8(%ebp),%eax
08587c1f +0x1367:  add    $0x10,%eax
08587c22 +0x136a:  pop    %ebp
08587c23 +0x136b:  ret
08587c24 +0x136c:  push   %ebp
08587c25 +0x136d:  mov    %esp,%ebp
08587c27 +0x136f:  mov    0x8(%ebp),%eax
08587c2a +0x1372:  add    $0x10,%eax
08587c2d +0x1375:  pop    %ebp
08587c2e +0x1376:  ret
08587c2f +0x1377:  nop
08587c30 +0x1378:  push   %ebp
08587c31 +0x1379:  mov    %esp,%ebp
08587c33 +0x137b:  push   %esi
08587c34 +0x137c:  push   %ebx
08587c35 +0x137d:  sub    $0x20,%esp
08587c38 +0x1380:  mov    0x8(%ebp),%eax
08587c3b +0x1383:  mov    %eax,(%esp)
08587c3e +0x1386:  call   08587d88 <+0x14d0>
08587c43 +0x138b:  mov    %eax,-0xc(%ebp)
08587c46 +0x138e:  mov    0xc(%ebp),%eax
08587c49 +0x1391:  mov    %eax,(%esp)
08587c4c +0x1394:  call   08587dab <+0x14f3>
08587c51 +0x1399:  mov    %eax,%ebx
08587c53 +0x139b:  mov    0x8(%ebp),%eax
08587c56 +0x139e:  mov    %eax,(%esp)
08587c59 +0x13a1:  call   08587d08 <+0x1450>
08587c5e +0x13a6:  mov    %ebx,0x8(%esp)
08587c62 +0x13aa:  mov    -0xc(%ebp),%edx
08587c65 +0x13ad:  mov    %edx,0x4(%esp)
08587c69 +0x13b1:  mov    %eax,(%esp)
08587c6c +0x13b4:  call   08587db4 <+0x14fc>
08587c71 +0x13b9:  jmp    08587ca7 <+0x13ef>
08587c73 +0x13bb:  mov    %eax,(%esp)
08587c76 +0x13be:  call   08725ce0 <__cxa_begin_catch>
08587c7b +0x13c3:  mov    -0xc(%ebp),%eax
08587c7e +0x13c6:  mov    %eax,0x4(%esp)
08587c82 +0x13ca:  mov    0x8(%ebp),%eax
08587c85 +0x13cd:  mov    %eax,(%esp)
08587c88 +0x13d0:  call   08587d2a <+0x1472>
08587c8d +0x13d5:  call   08724be0 <__cxa_rethrow>
08587c92 +0x13da:  mov    %edx,%ebx
08587c94 +0x13dc:  mov    %eax,%esi
08587c96 +0x13de:  call   08725c30 <__cxa_end_catch>
08587c9b +0x13e3:  mov    %esi,%eax
08587c9d +0x13e5:  mov    %ebx,%edx
08587c9f +0x13e7:  mov    %eax,(%esp)
08587ca2 +0x13ea:  call   08ae3750 <_Unwind_Resume>
08587ca7 +0x13ef:  mov    -0xc(%ebp),%eax
08587caa +0x13f2:  add    $0x20,%esp
08587cad +0x13f5:  pop    %ebx
08587cae +0x13f6:  pop    %esi
08587caf +0x13f7:  pop    %ebp
08587cb0 +0x13f8:  ret
08587cb1 +0x13f9:  push   %ebp
08587cb2 +0x13fa:  mov    %esp,%ebp
08587cb4 +0x13fc:  mov    0x8(%ebp),%eax
08587cb7 +0x13ff:  pop    %ebp
08587cb8 +0x1400:  ret
08587cb9 +0x1401:  push   %ebp
08587cba +0x1402:  mov    %esp,%ebp
08587cbc +0x1404:  mov    0x8(%ebp),%eax
08587cbf +0x1407:  pop    %ebp
08587cc0 +0x1408:  ret
08587cc1 +0x1409:  nop
08587cc2 +0x140a:  push   %ebp
08587cc3 +0x140b:  mov    %esp,%ebp
08587cc5 +0x140d:  sub    $0x18,%esp
08587cc8 +0x1410:  mov    0x8(%ebp),%eax
08587ccb +0x1413:  mov    %eax,(%esp)
08587cce +0x1416:  call   08587df4 <+0x153c>
08587cd3 +0x141b:  leave
08587cd4 +0x141c:  ret
08587cd5 +0x141d:  nop
08587cd6 +0x141e:  push   %ebp
08587cd7 +0x141f:  mov    %esp,%ebp
08587cd9 +0x1421:  mov    0x8(%ebp),%eax
08587cdc +0x1424:  movl   $0x0,0x4(%eax)
08587ce3 +0x142b:  mov    0x8(%ebp),%eax
08587ce6 +0x142e:  movl   $0x0,0x8(%eax)
08587ced +0x1435:  mov    0x8(%ebp),%eax
08587cf0 +0x1438:  lea    0x4(%eax),%edx
08587cf3 +0x143b:  mov    0x8(%ebp),%eax
08587cf6 +0x143e:  mov    %edx,0xc(%eax)
08587cf9 +0x1441:  mov    0x8(%ebp),%eax
08587cfc +0x1444:  lea    0x4(%eax),%edx
08587cff +0x1447:  mov    0x8(%ebp),%eax
08587d02 +0x144a:  mov    %edx,0x10(%eax)
08587d05 +0x144d:  pop    %ebp
08587d06 +0x144e:  ret
08587d07 +0x144f:  nop
08587d08 +0x1450:  push   %ebp
08587d09 +0x1451:  mov    %esp,%ebp
08587d0b +0x1453:  mov    0x8(%ebp),%eax
08587d0e +0x1456:  pop    %ebp
08587d0f +0x1457:  ret
08587d10 +0x1458:  push   %ebp
08587d11 +0x1459:  mov    %esp,%ebp
08587d13 +0x145b:  pop    %ebp
08587d14 +0x145c:  ret
08587d15 +0x145d:  nop
08587d16 +0x145e:  push   %ebp
08587d17 +0x145f:  mov    %esp,%ebp
08587d19 +0x1461:  sub    $0x18,%esp
08587d1c +0x1464:  mov    0xc(%ebp),%eax
08587d1f +0x1467:  mov    %eax,(%esp)
08587d22 +0x146a:  call   08587d10 <+0x1458>
08587d27 +0x146f:  leave
08587d28 +0x1470:  ret
08587d29 +0x1471:  nop
08587d2a +0x1472:  push   %ebp
08587d2b +0x1473:  mov    %esp,%ebp
08587d2d +0x1475:  sub    $0x18,%esp
08587d30 +0x1478:  mov    0x8(%ebp),%eax
08587d33 +0x147b:  movl   $0x1,0x8(%esp)
08587d3b +0x1483:  mov    0xc(%ebp),%edx
08587d3e +0x1486:  mov    %edx,0x4(%esp)
08587d42 +0x148a:  mov    %eax,(%esp)
08587d45 +0x148d:  call   08587dfa <+0x1542>
08587d4a +0x1492:  leave
08587d4b +0x1493:  ret
08587d4c +0x1494:  push   %ebp
08587d4d +0x1495:  mov    %esp,%ebp
08587d4f +0x1497:  sub    $0x18,%esp
08587d52 +0x149a:  mov    0x8(%ebp),%eax
08587d55 +0x149d:  mov    (%eax),%eax
08587d57 +0x149f:  mov    %eax,(%esp)
08587d5a +0x14a2:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
08587d5f +0x14a7:  mov    0x8(%ebp),%edx
08587d62 +0x14aa:  mov    %eax,(%edx)
08587d64 +0x14ac:  mov    0x8(%ebp),%eax
08587d67 +0x14af:  leave
08587d68 +0x14b0:  ret
08587d69 +0x14b1:  nop
08587d6a +0x14b2:  push   %ebp
08587d6b +0x14b3:  mov    %esp,%ebp
08587d6d +0x14b5:  sub    $0x18,%esp
08587d70 +0x14b8:  mov    0x8(%ebp),%eax
08587d73 +0x14bb:  mov    (%eax),%eax
08587d75 +0x14bd:  mov    %eax,(%esp)
08587d78 +0x14c0:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08587d7d +0x14c5:  mov    0x8(%ebp),%edx
08587d80 +0x14c8:  mov    %eax,(%edx)
08587d82 +0x14ca:  mov    0x8(%ebp),%eax
08587d85 +0x14cd:  leave
08587d86 +0x14ce:  ret
08587d87 +0x14cf:  nop
08587d88 +0x14d0:  push   %ebp
08587d89 +0x14d1:  mov    %esp,%ebp
08587d8b +0x14d3:  sub    $0x18,%esp
08587d8e +0x14d6:  mov    0x8(%ebp),%eax
08587d91 +0x14d9:  movl   $0x0,0x8(%esp)
08587d99 +0x14e1:  movl   $0x1,0x4(%esp)
08587da1 +0x14e9:  mov    %eax,(%esp)
08587da4 +0x14ec:  call   08587e0e <+0x1556>
08587da9 +0x14f1:  leave
08587daa +0x14f2:  ret
08587dab +0x14f3:  push   %ebp
08587dac +0x14f4:  mov    %esp,%ebp
08587dae +0x14f6:  mov    0x8(%ebp),%eax
08587db1 +0x14f9:  pop    %ebp
08587db2 +0x14fa:  ret
08587db3 +0x14fb:  nop
08587db4 +0x14fc:  push   %ebp
08587db5 +0x14fd:  mov    %esp,%ebp
08587db7 +0x14ff:  push   %ebx
08587db8 +0x1500:  sub    $0x14,%esp
08587dbb +0x1503:  mov    0x10(%ebp),%eax
08587dbe +0x1506:  mov    %eax,(%esp)
08587dc1 +0x1509:  call   08587dab <+0x14f3>
08587dc6 +0x150e:  mov    %eax,%ebx
08587dc8 +0x1510:  mov    0xc(%ebp),%eax
08587dcb +0x1513:  mov    %eax,0x4(%esp)
08587dcf +0x1517:  movl   $0x20,(%esp)
08587dd6 +0x151e:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08587ddb +0x1523:  mov    %eax,%edx
08587ddd +0x1525:  test   %edx,%edx
08587ddf +0x1527:  je     08587ded <+0x1535>
08587de1 +0x1529:  mov    %ebx,0x4(%esp)
08587de5 +0x152d:  mov    %eax,(%esp)
08587de8 +0x1530:  call   08587e46 <+0x158e>
08587ded +0x1535:  add    $0x14,%esp
08587df0 +0x1538:  pop    %ebx
08587df1 +0x1539:  pop    %ebp
08587df2 +0x153a:  ret
08587df3 +0x153b:  nop
08587df4 +0x153c:  push   %ebp
08587df5 +0x153d:  mov    %esp,%ebp
08587df7 +0x153f:  pop    %ebp
08587df8 +0x1540:  ret
08587df9 +0x1541:  nop
08587dfa +0x1542:  push   %ebp
08587dfb +0x1543:  mov    %esp,%ebp
08587dfd +0x1545:  sub    $0x18,%esp
08587e00 +0x1548:  mov    0xc(%ebp),%eax
08587e03 +0x154b:  mov    %eax,(%esp)
08587e06 +0x154e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08587e0b +0x1553:  leave
08587e0c +0x1554:  ret
08587e0d +0x1555:  nop
08587e0e +0x1556:  push   %ebp
08587e0f +0x1557:  mov    %esp,%ebp
08587e11 +0x1559:  sub    $0x18,%esp
08587e14 +0x155c:  mov    0x8(%ebp),%eax
08587e17 +0x155f:  mov    %eax,(%esp)
08587e1a +0x1562:  call   08587e9a <+0x15e2>
08587e1f +0x1567:  cmp    0xc(%ebp),%eax
08587e22 +0x156a:  setb   %al
08587e25 +0x156d:  movzbl %al,%eax
08587e28 +0x1570:  test   %eax,%eax
08587e2a +0x1572:  setne  %al
08587e2d +0x1575:  test   %al,%al
08587e2f +0x1577:  je     08587e36 <+0x157e>
08587e31 +0x1579:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08587e36 +0x157e:  mov    0xc(%ebp),%eax
08587e39 +0x1581:  shl    $0x5,%eax
08587e3c +0x1584:  mov    %eax,(%esp)
08587e3f +0x1587:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08587e44 +0x158c:  leave
08587e45 +0x158d:  ret
08587e46 +0x158e:  push   %ebp
08587e47 +0x158f:  mov    %esp,%ebp
08587e49 +0x1591:  sub    $0x18,%esp
08587e4c +0x1594:  mov    0x8(%ebp),%eax
08587e4f +0x1597:  movl   $0x0,(%eax)
08587e55 +0x159d:  mov    0x8(%ebp),%eax
08587e58 +0x15a0:  movl   $0x0,0x4(%eax)
08587e5f +0x15a7:  mov    0x8(%ebp),%eax
08587e62 +0x15aa:  movl   $0x0,0x8(%eax)
08587e69 +0x15b1:  mov    0x8(%ebp),%eax
08587e6c +0x15b4:  movl   $0x0,0xc(%eax)
08587e73 +0x15bb:  mov    0xc(%ebp),%eax
08587e76 +0x15be:  mov    %eax,(%esp)
08587e79 +0x15c1:  call   08587dab <+0x14f3>
08587e7e +0x15c6:  mov    0x8(%ebp),%edx
08587e81 +0x15c9:  mov    (%eax),%ecx
08587e83 +0x15cb:  mov    %ecx,0x10(%edx)
08587e86 +0x15ce:  mov    0x4(%eax),%ecx
08587e89 +0x15d1:  mov    %ecx,0x14(%edx)
08587e8c +0x15d4:  mov    0x8(%eax),%ecx
08587e8f +0x15d7:  mov    %ecx,0x18(%edx)
08587e92 +0x15da:  mov    0xc(%eax),%eax
08587e95 +0x15dd:  mov    %eax,0x1c(%edx)
08587e98 +0x15e0:  leave
08587e99 +0x15e1:  ret
08587e9a +0x15e2:  push   %ebp
08587e9b +0x15e3:  mov    %esp,%ebp
08587e9d +0x15e5:  mov    $0x7ffffff,%eax
08587ea2 +0x15ea:  pop    %ebp
08587ea3 +0x15eb:  ret
```

## 反编译 C

```c
// <global>::global @ 0x85868b8

/* online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember() */

void online_preliminary::COnlinePreliminaryMember::_GLOBAL__I_COnlinePreliminaryMember(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
