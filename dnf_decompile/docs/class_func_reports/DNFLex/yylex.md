# yylex

`_ZN6DNFLex5yylexEv`

`DNFLex::yylex()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08ad2860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2860  _ZN6DNFLex5yylexEv
#           DNFLex::yylex()
# range [0x08ad2860, 0x08ad2ed9]
08ad2860 +0x000:  push   %ebp
08ad2861 +0x001:  mov    %esp,%ebp
08ad2863 +0x003:  push   %edi
08ad2864 +0x004:  push   %esi
08ad2865 +0x005:  push   %ebx
08ad2866 +0x006:  sub    $0x4c,%esp
08ad2869 +0x009:  mov    0x8(%ebp),%eax
08ad286c +0x00c:  mov    0x34(%eax),%edi
08ad286f +0x00f:  test   %edi,%edi
08ad2871 +0x011:  je     08ad29cb <+0x16b>
08ad2877 +0x017:  mov    0x30(%eax),%ebx
08ad287a +0x01a:  movzbl 0x28(%eax),%edi
08ad287e +0x01e:  mov    0x8(%ebp),%edx
08ad2881 +0x021:  mov    0x8(%ebp),%ecx
08ad2884 +0x024:  add    $0x208c,%edx
08ad288a +0x02a:  add    $0x408a,%ecx
08ad2890 +0x030:  mov    %edx,-0x24(%ebp)
08ad2893 +0x033:  mov    %ecx,-0x20(%ebp)
08ad2896 +0x036:  mov    %edi,%eax
08ad2898 +0x038:  mov    %al,(%ebx)
08ad289a +0x03a:  mov    0x8(%ebp),%edx
08ad289d +0x03d:  mov    %ebx,-0x1c(%ebp)
08ad28a0 +0x040:  mov    0x38(%edx),%eax
08ad28a3 +0x043:  movzwl &_ZL7yy_base(%eax,%eax,1),%edx
08ad28ab +0x04b:  nop
08ad28ac +0x04c:  lea    0x0(%esi,%eiz,1),%esi
08ad28b0 +0x050:  cmpw   $0x0,&_ZL9yy_accept(%eax,%eax,1)
08ad28b9 +0x059:  je     08ad28c4 <+0x64>
08ad28bb +0x05b:  mov    0x8(%ebp),%ecx
08ad28be +0x05e:  mov    %eax,0x4c(%ecx)
08ad28c1 +0x061:  mov    %ebx,0x50(%ecx)
08ad28c4 +0x064:  mov    %edi,%ecx
08ad28c6 +0x066:  movswl %dx,%edx
08ad28c9 +0x069:  movzbl %cl,%esi
08ad28cc +0x06c:  lea    (%esi,%edx,1),%ecx
08ad28cf +0x06f:  movswl &_ZL6yy_chk(%ecx,%ecx,1),%ecx
08ad28d7 +0x077:  cmp    %ecx,%eax
08ad28d9 +0x079:  je     08ad28ff <+0x9f>
08ad28db +0x07b:  nop
08ad28dc +0x07c:  lea    0x0(%esi,%eiz,1),%esi
08ad28e0 +0x080:  movswl &_ZL6yy_def(%eax,%eax,1),%eax
08ad28e8 +0x088:  movswl &_ZL7yy_base(%eax,%eax,1),%edx
08ad28f0 +0x090:  lea    (%edx,%esi,1),%ecx
08ad28f3 +0x093:  movswl &_ZL6yy_chk(%ecx,%ecx,1),%ecx
08ad28fb +0x09b:  cmp    %eax,%ecx
08ad28fd +0x09d:  jne    08ad28e0 <+0x80>
08ad28ff +0x09f:  and    $0xff,%edi
08ad2905 +0x0a5:  add    $0x1,%ebx
08ad2908 +0x0a8:  lea    (%edx,%edi,1),%edi
08ad290b +0x0ab:  movswl &_ZL6yy_nxt(%edi,%edi,1),%eax
08ad2913 +0x0b3:  movzwl &_ZL7yy_base(%eax,%eax,1),%edx
08ad291b +0x0bb:  cmp    $0x779,%dx
08ad2920 +0x0c0:  je     08ad2928 <+0xc8>
08ad2922 +0x0c2:  movzbl (%ebx),%edi
08ad2925 +0x0c5:  jmp    08ad28b0 <+0x50>
08ad2927 +0x0c7:  nop
08ad2928 +0x0c8:  mov    0x8(%ebp),%esi
08ad292b +0x0cb:  movswl &_ZL9yy_accept(%eax,%eax,1),%eax
08ad2933 +0x0d3:  test   %eax,%eax
08ad2935 +0x0d5:  jne    08ad2945 <+0xe5>
08ad2937 +0x0d7:  mov    0x4c(%esi),%eax
08ad293a +0x0da:  mov    0x50(%esi),%ebx
08ad293d +0x0dd:  movswl &_ZL9yy_accept(%eax,%eax,1),%eax
08ad2945 +0x0e5:  mov    -0x1c(%ebp),%edi
08ad2948 +0x0e8:  mov    %ebx,%edx
08ad294a +0x0ea:  sub    %edi,%edx
08ad294c +0x0ec:  cmp    $0x15,%eax
08ad294f +0x0ef:  mov    %edi,0x4(%esi)
08ad2952 +0x0f2:  mov    %edx,0x8(%esi)
08ad2955 +0x0f5:  movzbl (%ebx),%edx
08ad2958 +0x0f8:  mov    %dl,0x28(%esi)
08ad295b +0x0fb:  movb   $0x0,(%ebx)
08ad295e +0x0fe:  mov    %ebx,0x30(%esi)
08ad2961 +0x101:  je     08ad2998 <+0x138>
08ad2963 +0x103:  mov    &_ZL21yy_rule_can_match_eol(,%eax,4),%edx
08ad296a +0x10a:  test   %edx,%edx
08ad296c +0x10c:  je     08ad2998 <+0x138>
08ad296e +0x10e:  mov    0x8(%esi),%ecx
08ad2971 +0x111:  test   %ecx,%ecx
08ad2973 +0x113:  jle    08ad2998 <+0x138>
08ad2975 +0x115:  mov    0x4(%esi),%edi
08ad2978 +0x118:  xor    %edx,%edx
08ad297a +0x11a:  jmp    08ad2987 <+0x127>
08ad297c +0x11c:  lea    0x0(%esi,%eiz,1),%esi
08ad2980 +0x120:  add    $0x1,%edx
08ad2983 +0x123:  cmp    %ecx,%edx
08ad2985 +0x125:  jge    08ad2998 <+0x138>
08ad2987 +0x127:  cmpb   $0xa,(%edi,%edx,1)
08ad298b +0x12b:  jne    08ad2980 <+0x120>
08ad298d +0x12d:  add    $0x1,%edx
08ad2990 +0x130:  addl   $0x1,0xc(%esi)
08ad2994 +0x134:  cmp    %ecx,%edx
08ad2996 +0x136:  jl     08ad2987 <+0x127>
08ad2998 +0x138:  mov    $0x2,%edi
08ad299d +0x13d:  cmp    $0x19,%eax
08ad29a0 +0x140:  jbe    08ad29c4 <+0x164>
08ad29a2 +0x142:  mov    (%esi),%eax
08ad29a4 +0x144:  mov    %esi,0x8(%ebp)
08ad29a7 +0x147:  movl   $"fatal flex scanner internal error--no action found",0x4(%esp)
08ad29af +0x14f:  mov    %esi,(%esp)
08ad29b2 +0x152:  call   *0x2c(%eax)
08ad29b5 +0x155:  mov    0x8(%ebp),%esi
08ad29b8 +0x158:  mov    0x30(%esi),%ebx
08ad29bb +0x15b:  movzbl 0x28(%esi),%edi
08ad29bf +0x15f:  jmp    08ad2896 <+0x36>
08ad29c4 +0x164:  jmp    *&data#e3c6da4d(.rodata)(,%eax,4)
08ad29cb +0x16b:  mov    0x8(%ebp),%edx
08ad29ce +0x16e:  mov    0x38(%edx),%esi
08ad29d1 +0x171:  movl   $0x1,0x34(%edx)
08ad29d8 +0x178:  test   %esi,%esi
08ad29da +0x17a:  jne    08ad29e3 <+0x183>
08ad29dc +0x17c:  movl   $0x1,0x38(%edx)
08ad29e3 +0x183:  mov    0x8(%ebp),%ecx
08ad29e6 +0x186:  mov    0x20(%ecx),%ebx
08ad29e9 +0x189:  test   %ebx,%ebx
08ad29eb +0x18b:  je     08ad2a4c <+0x1ec>
08ad29ed +0x18d:  mov    0x8(%ebp),%ebx
08ad29f0 +0x190:  mov    0x24(%ebx),%ecx
08ad29f3 +0x193:  test   %ecx,%ecx
08ad29f5 +0x195:  je     08ad2a55 <+0x1f5>
08ad29f7 +0x197:  mov    0x8(%ebp),%esi
08ad29fa +0x19a:  mov    0x48(%esi),%eax
08ad29fd +0x19d:  test   %eax,%eax
08ad29ff +0x19f:  je     08ad2ca8 <+0x448>
08ad2a05 +0x1a5:  mov    0x40(%esi),%edx
08ad2a08 +0x1a8:  mov    (%eax,%edx,4),%ecx
08ad2a0b +0x1ab:  test   %ecx,%ecx
08ad2a0d +0x1ad:  je     08ad2ca8 <+0x448>
08ad2a13 +0x1b3:  mov    0x8(%ebp),%ebx
08ad2a16 +0x1b6:  mov    (%eax,%edx,4),%eax
08ad2a19 +0x1b9:  mov    0x10(%ecx),%ecx
08ad2a1c +0x1bc:  mov    0x8(%ebp),%esi
08ad2a1f +0x1bf:  mov    %ecx,0x2c(%ebx)
08ad2a22 +0x1c2:  mov    0x8(%eax),%ebx
08ad2a25 +0x1c5:  mov    (%eax),%eax
08ad2a27 +0x1c7:  mov    %ebx,0x30(%esi)
08ad2a2a +0x1ca:  mov    %eax,0x20(%esi)
08ad2a2d +0x1cd:  mov    %ebx,0x4(%esi)
08ad2a30 +0x1d0:  movzbl (%ebx),%edi
08ad2a33 +0x1d3:  mov    %edi,%eax
08ad2a35 +0x1d5:  mov    %al,0x28(%esi)
08ad2a38 +0x1d8:  jmp    08ad287e <+0x1e>
08ad2a3d +0x1dd:  mov    %esi,0x8(%ebp)
08ad2a40 +0x1e0:  movl   $0x1,0x38(%esi)
08ad2a47 +0x1e7:  jmp    08ad29b5 <+0x155>
08ad2a4c +0x1ec:  movl   $&_ZSt3cin,0x20(%ecx)
08ad2a53 +0x1f3:  jmp    08ad29ed <+0x18d>
08ad2a55 +0x1f5:  movl   $&_ZSt4cout,0x24(%ebx)
08ad2a5c +0x1fc:  jmp    08ad29f7 <+0x197>
08ad2a5e +0x1fe:  movzbl 0x28(%esi),%eax
08ad2a62 +0x202:  mov    %al,(%ebx)
08ad2a64 +0x204:  mov    0x50(%esi),%ebx
08ad2a67 +0x207:  mov    0x4c(%esi),%eax
08ad2a6a +0x20a:  jmp    08ad292b <+0xcb>
08ad2a6f +0x20f:  mov    $0x2,%eax
08ad2a74 +0x214:  add    $0x4c,%esp
08ad2a77 +0x217:  pop    %ebx
08ad2a78 +0x218:  pop    %esi
08ad2a79 +0x219:  pop    %edi
08ad2a7a +0x21a:  pop    %ebp
08ad2a7b +0x21b:  ret
08ad2a7c +0x21c:  mov    $0x3,%eax
08ad2a81 +0x221:  jmp    08ad2a74 <+0x214>
08ad2a83 +0x223:  mov    $0x4,%eax
08ad2a88 +0x228:  jmp    08ad2a74 <+0x214>
08ad2a8a +0x22a:  or     $0xffffffff,%edx
08ad2a8d +0x22d:  sub    0x4(%esi),%edx
08ad2a90 +0x230:  lea    (%ebx,%edx,1),%edx
08ad2a93 +0x233:  mov    %edx,-0x2c(%ebp)
08ad2a96 +0x236:  movzbl 0x28(%esi),%eax
08ad2a9a +0x23a:  mov    %al,(%ebx)
08ad2a9c +0x23c:  mov    0x40(%esi),%eax
08ad2a9f +0x23f:  mov    0x48(%esi),%ecx
08ad2aa2 +0x242:  mov    (%ecx,%eax,4),%eax
08ad2aa5 +0x245:  cmpl   $0x0,0x2c(%eax)
08ad2aa9 +0x249:  jne    08ad2ac3 <+0x263>
08ad2aab +0x24b:  mov    0x10(%eax),%edx
08ad2aae +0x24e:  mov    %edx,0x2c(%esi)
08ad2ab1 +0x251:  mov    0x20(%esi),%edx
08ad2ab4 +0x254:  movl   $0x1,0x2c(%eax)
08ad2abb +0x25b:  mov    %edx,(%eax)
08ad2abd +0x25d:  mov    0x40(%esi),%eax
08ad2ac0 +0x260:  mov    (%ecx,%eax,4),%eax
08ad2ac3 +0x263:  mov    0x4(%eax),%eax
08ad2ac6 +0x266:  add    0x2c(%esi),%eax
08ad2ac9 +0x269:  cmp    %eax,0x30(%esi)
08ad2acc +0x26c:  jbe    08ad2dd9 <+0x579>
08ad2ad2 +0x272:  mov    %esi,(%esp)
08ad2ad5 +0x275:  call   08ad1ea0 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv>  ; __dnf_script__FlexLexer::yy_get_next_buffer()
08ad2ada +0x27a:  cmp    $0x1,%eax
08ad2add +0x27d:  je     08ad2d56 <+0x4f6>
08ad2ae3 +0x283:  cmp    $0x2,%eax
08ad2ae6 +0x286:  mov    -0x2c(%ebp),%edx
08ad2ae9 +0x289:  je     08ad2d2e <+0x4ce>
08ad2aef +0x28f:  test   %eax,%eax
08ad2af1 +0x291:  mov    %edx,%edi
08ad2af3 +0x293:  mov    %esi,0x8(%ebp)
08ad2af6 +0x296:  jne    08ad29b5 <+0x155>
08ad2afc +0x29c:  mov    0x8(%ebp),%ebx
08ad2aff +0x29f:  add    0x4(%ebx),%edi
08ad2b02 +0x2a2:  mov    %edi,0x30(%ebx)
08ad2b05 +0x2a5:  mov    %ebx,(%esp)
08ad2b08 +0x2a8:  call   08ad1a80 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv>  ; __dnf_script__FlexLexer::yy_get_previous_state()
08ad2b0d +0x2ad:  mov    0x8(%ebp),%esi
08ad2b10 +0x2b0:  mov    0x4(%esi),%edi
08ad2b13 +0x2b3:  mov    0x30(%esi),%ebx
08ad2b16 +0x2b6:  mov    %edi,-0x1c(%ebp)
08ad2b19 +0x2b9:  movzbl (%ebx),%edi
08ad2b1c +0x2bc:  jmp    08ad28a3 <+0x43>
08ad2b21 +0x2c1:  mov    %esi,0x8(%ebp)
08ad2b24 +0x2c4:  movl   $0x3,0x38(%esi)
08ad2b2b +0x2cb:  jmp    08ad29b5 <+0x155>
08ad2b30 +0x2d0:  mov    %esi,0x8(%ebp)
08ad2b33 +0x2d3:  movl   $0x5,0x38(%esi)
08ad2b3a +0x2da:  jmp    08ad29b5 <+0x155>
08ad2b3f +0x2df:  mov    0x8(%esi),%edx
08ad2b42 +0x2e2:  mov    (%esi),%eax
08ad2b44 +0x2e4:  mov    %esi,0x8(%ebp)
08ad2b47 +0x2e7:  mov    %edx,0x8(%esp)
08ad2b4b +0x2eb:  mov    0x4(%esi),%edx
08ad2b4e +0x2ee:  mov    %esi,(%esp)
08ad2b51 +0x2f1:  mov    %edx,0x4(%esp)
08ad2b55 +0x2f5:  call   *0x28(%eax)
08ad2b58 +0x2f8:  jmp    08ad29b5 <+0x155>
08ad2b5d +0x2fd:  mov    $0x8,%eax
08ad2b62 +0x302:  jmp    08ad2a74 <+0x214>
08ad2b67 +0x307:  mov    $0x9,%eax
08ad2b6c +0x30c:  jmp    08ad2a74 <+0x214>
08ad2b71 +0x311:  mov    $0xa,%eax
08ad2b76 +0x316:  jmp    08ad2a74 <+0x214>
08ad2b7b +0x31b:  mov    $0xb,%eax
08ad2b80 +0x320:  jmp    08ad2a74 <+0x214>
08ad2b85 +0x325:  mov    $0x5,%eax
08ad2b8a +0x32a:  jmp    08ad2a74 <+0x214>
08ad2b8f +0x32f:  mov    $0x6,%eax
08ad2b94 +0x334:  jmp    08ad2a74 <+0x214>
08ad2b99 +0x339:  mov    %esi,%ebx
08ad2b9b +0x33b:  mov    $"comment nest mismatch",%eax
08ad2ba0 +0x340:  add    $0x8c,%ebx
08ad2ba6 +0x346:  mov    $0x16,%ecx
08ad2bab +0x34b:  mov    %esi,0x8(%ebp)
08ad2bae +0x34e:  mov    %ebx,%edi
08ad2bb0 +0x350:  mov    %eax,%esi
08ad2bb2 +0x352:  rep movsb %ds:(%esi),%es:(%edi)
08ad2bb4 +0x354:  mov    0x8(%ebp),%edx
08ad2bb7 +0x357:  mov    (%edx),%eax
08ad2bb9 +0x359:  mov    %ebx,0x4(%esp)
08ad2bbd +0x35d:  mov    %edx,(%esp)
08ad2bc0 +0x360:  call   *0x2c(%eax)
08ad2bc3 +0x363:  mov    $0x1,%eax
08ad2bc8 +0x368:  jmp    08ad2a74 <+0x214>
08ad2bcd +0x36d:  mov    -0x24(%ebp),%ecx
08ad2bd0 +0x370:  mov    %esi,0x8(%ebp)
08ad2bd3 +0x373:  movb   $0x0,0x4090(%esi)
08ad2bda +0x37a:  movl   $0x7,0x38(%esi)
08ad2be1 +0x381:  mov    %ecx,0x408c(%esi)
08ad2be7 +0x387:  jmp    08ad29b5 <+0x155>
08ad2bec +0x38c:  cmpb   $0x0,0x4090(%esi)
08ad2bf3 +0x393:  mov    %esi,0x8(%ebp)
08ad2bf6 +0x396:  je     08ad2ce3 <+0x483>
08ad2bfc +0x39c:  mov    0x4(%esi),%edx
08ad2bff +0x39f:  mov    0x408c(%esi),%eax
08ad2c05 +0x3a5:  movzbl (%edx),%edx
08ad2c08 +0x3a8:  mov    %dl,(%eax)
08ad2c0a +0x3aa:  add    $0x1,%eax
08ad2c0d +0x3ad:  mov    %eax,0x408c(%esi)
08ad2c13 +0x3b3:  movb   $0x0,0x4090(%esi)
08ad2c1a +0x3ba:  jmp    08ad29b5 <+0x155>
08ad2c1f +0x3bf:  xor    %eax,%eax
08ad2c21 +0x3c1:  jmp    08ad2a74 <+0x214>
08ad2c26 +0x3c6:  mov    %esi,0x8(%ebp)
08ad2c29 +0x3c9:  mov    %esi,(%esp)
08ad2c2c +0x3cc:  call   08acd260 <_ZN6DNFLex8IsStreamEv>  ; DNFLex::IsStream()
08ad2c31 +0x3d1:  test   %al,%al
08ad2c33 +0x3d3:  je     08ad29b5 <+0x155>
08ad2c39 +0x3d9:  mov    %esi,(%esp)
08ad2c3c +0x3dc:  call   08acd280 <_ZN6DNFLex14GetInputStreamEv>  ; DNFLex::GetInputStream()
08ad2c41 +0x3e1:  mov    0x4(%esi),%edx
08ad2c44 +0x3e4:  movzbl (%edx),%edx
08ad2c47 +0x3e7:  test   %dl,%dl
08ad2c49 +0x3e9:  je     08ad2e7c <+0x61c>
08ad2c4f +0x3ef:  movsbl %dl,%edx
08ad2c52 +0x3f2:  mov    %esi,%ebx
08ad2c54 +0x3f4:  mov    %edx,0x18(%esp)
08ad2c58 +0x3f8:  mov    0xc(%esi),%edx
08ad2c5b +0x3fb:  add    $0x8c,%ebx
08ad2c61 +0x401:  mov    %edx,0x14(%esp)
08ad2c65 +0x405:  mov    0x4(%eax),%edx
08ad2c68 +0x408:  mov    %edx,0x10(%esp)
08ad2c6c +0x40c:  mov    (%eax),%eax
08ad2c6e +0x40e:  movl   $&_ZZN6DNFLex5yylexEvE12__FUNCTION__,0x8(%esp)
08ad2c76 +0x416:  movl   $"%s - %s/%s, line %d, unrecognized character '%c'.",0x4(%esp)
08ad2c7e +0x41e:  mov    %ebx,(%esp)
08ad2c81 +0x421:  mov    %eax,0xc(%esp)
08ad2c85 +0x425:  call   0807e440 <_init+0xd38>
08ad2c8a +0x42a:  mov    (%esi),%eax
08ad2c8c +0x42c:  mov    %ebx,0x4(%esp)
08ad2c90 +0x430:  mov    %esi,(%esp)
08ad2c93 +0x433:  call   *0x2c(%eax)
08ad2c96 +0x436:  mov    $0x1,%eax
08ad2c9b +0x43b:  jmp    08ad2a74 <+0x214>
08ad2ca0 +0x440:  mov    %esi,0x8(%ebp)
08ad2ca3 +0x443:  jmp    08ad29b5 <+0x155>
08ad2ca8 +0x448:  mov    0x8(%ebp),%edi
08ad2cab +0x44b:  mov    %edi,(%esp)
08ad2cae +0x44e:  call   08ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>  ; __dnf_script__FlexLexer::yyensure_buffer_stack()
08ad2cb3 +0x453:  mov    0x40(%edi),%ebx
08ad2cb6 +0x456:  mov    (%edi),%eax
08ad2cb8 +0x458:  shl    $0x2,%ebx
08ad2cbb +0x45b:  add    0x48(%edi),%ebx
08ad2cbe +0x45e:  movl   $0x4000,0x8(%esp)
08ad2cc6 +0x466:  mov    0x20(%edi),%edx
08ad2cc9 +0x469:  mov    %edi,(%esp)
08ad2ccc +0x46c:  mov    %edx,0x4(%esp)
08ad2cd0 +0x470:  call   *0xc(%eax)
08ad2cd3 +0x473:  mov    0x40(%edi),%edx
08ad2cd6 +0x476:  mov    %eax,(%ebx)
08ad2cd8 +0x478:  mov    0x48(%edi),%eax
08ad2cdb +0x47b:  mov    (%eax,%edx,4),%ecx
08ad2cde +0x47e:  jmp    08ad2a13 <+0x1b3>
08ad2ce3 +0x483:  mov    0x8(%ebp),%ebx
08ad2ce6 +0x486:  mov    0x4(%ebx),%eax
08ad2ce9 +0x489:  movzbl (%eax),%eax
08ad2cec +0x48c:  cmp    $0x60,%al
08ad2cee +0x48e:  je     08ad2e07 <+0x5a7>
08ad2cf4 +0x494:  mov    0x8(%ebp),%esi
08ad2cf7 +0x497:  mov    0x408c(%esi),%edx
08ad2cfd +0x49d:  cmp    %edx,-0x20(%ebp)
08ad2d00 +0x4a0:  jbe    08ad2d88 <+0x528>
08ad2d06 +0x4a6:  mov    %al,(%edx)
08ad2d08 +0x4a8:  mov    0x8(%ebp),%ecx
08ad2d0b +0x4ab:  add    $0x1,%edx
08ad2d0e +0x4ae:  movsbl %al,%eax
08ad2d11 +0x4b1:  mov    %edx,0x408c(%ecx)
08ad2d17 +0x4b7:  mov    %eax,(%esp)
08ad2d1a +0x4ba:  call   *0x4094(%ecx)
08ad2d20 +0x4c0:  mov    0x8(%ebp),%ebx
08ad2d23 +0x4c3:  mov    %al,0x4090(%ebx)
08ad2d29 +0x4c9:  jmp    08ad29b5 <+0x155>
08ad2d2e +0x4ce:  mov    0x40(%esi),%edx
08ad2d31 +0x4d1:  mov    0x48(%esi),%eax
08ad2d34 +0x4d4:  mov    (%eax,%edx,4),%eax
08ad2d37 +0x4d7:  mov    0x4(%eax),%eax
08ad2d3a +0x4da:  add    0x2c(%esi),%eax
08ad2d3d +0x4dd:  mov    %eax,0x30(%esi)
08ad2d40 +0x4e0:  mov    %esi,(%esp)
08ad2d43 +0x4e3:  call   08ad1a80 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv>  ; __dnf_script__FlexLexer::yy_get_previous_state()
08ad2d48 +0x4e8:  mov    0x4(%esi),%edx
08ad2d4b +0x4eb:  mov    0x30(%esi),%ebx
08ad2d4e +0x4ee:  mov    %edx,-0x1c(%ebp)
08ad2d51 +0x4f1:  jmp    08ad292b <+0xcb>
08ad2d56 +0x4f6:  mov    (%esi),%eax
08ad2d58 +0x4f8:  movl   $0x0,0x3c(%esi)
08ad2d5f +0x4ff:  mov    %esi,(%esp)
08ad2d62 +0x502:  call   *0x20(%eax)
08ad2d65 +0x505:  test   %eax,%eax
08ad2d67 +0x507:  je     08ad2e21 <+0x5c1>
08ad2d6d +0x50d:  mov    0x38(%esi),%edx
08ad2d70 +0x510:  mov    0x4(%esi),%eax
08ad2d73 +0x513:  sub    $0x1,%edx
08ad2d76 +0x516:  mov    %eax,0x30(%esi)
08ad2d79 +0x519:  mov    %edx,%eax
08ad2d7b +0x51b:  sar    $0x1f,%edx
08ad2d7e +0x51e:  idiv   %edi
08ad2d80 +0x520:  add    $0x16,%eax
08ad2d83 +0x523:  jmp    08ad299d <+0x13d>
08ad2d88 +0x528:  mov    %esi,(%esp)
08ad2d8b +0x52b:  call   08acd260 <_ZN6DNFLex8IsStreamEv>  ; DNFLex::IsStream()
08ad2d90 +0x530:  test   %al,%al
08ad2d92 +0x532:  je     08ad2e42 <+0x5e2>
08ad2d98 +0x538:  mov    %esi,(%esp)
08ad2d9b +0x53b:  mov    %esi,%ebx
08ad2d9d +0x53d:  call   08acd280 <_ZN6DNFLex14GetInputStreamEv>  ; DNFLex::GetInputStream()
08ad2da2 +0x542:  mov    0xc(%esi),%edx
08ad2da5 +0x545:  add    $0x8c,%ebx
08ad2dab +0x54b:  mov    %edx,0x14(%esp)
08ad2daf +0x54f:  mov    0x4(%eax),%edx
08ad2db2 +0x552:  mov    %edx,0x10(%esp)
08ad2db6 +0x556:  mov    (%eax),%eax
08ad2db8 +0x558:  movl   $&_ZZN6DNFLex5yylexEvE12__FUNCTION__,0x8(%esp)
08ad2dc0 +0x560:  movl   $"%s - %s/%s, line %d, string buffer overflow detected.",0x4(%esp)
08ad2dc8 +0x568:  mov    %ebx,(%esp)
08ad2dcb +0x56b:  mov    %eax,0xc(%esp)
08ad2dcf +0x56f:  call   0807e440 <_init+0xd38>
08ad2dd4 +0x574:  jmp    08ad2c8a <+0x42a>
08ad2dd9 +0x579:  mov    -0x2c(%ebp),%edx
08ad2ddc +0x57c:  add    0x4(%esi),%edx
08ad2ddf +0x57f:  mov    %edx,0x30(%esi)
08ad2de2 +0x582:  mov    %esi,(%esp)
08ad2de5 +0x585:  call   08ad1a80 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv>  ; __dnf_script__FlexLexer::yy_get_previous_state()
08ad2dea +0x58a:  mov    &_ZL12yy_NUL_trans(,%eax,4),%edx
08ad2df1 +0x591:  test   %edx,%edx
08ad2df3 +0x593:  jne    08ad2eb9 <+0x659>
08ad2df9 +0x599:  mov    0x4(%esi),%ecx
08ad2dfc +0x59c:  mov    0x30(%esi),%ebx
08ad2dff +0x59f:  mov    %ecx,-0x1c(%ebp)
08ad2e02 +0x5a2:  jmp    08ad292b <+0xcb>
08ad2e07 +0x5a7:  mov    0x408c(%ebx),%eax
08ad2e0d +0x5ad:  movb   $0x0,(%eax)
08ad2e10 +0x5b0:  mov    $0x7,%eax
08ad2e15 +0x5b5:  movl   $0x1,0x38(%ebx)
08ad2e1c +0x5bc:  jmp    08ad2a74 <+0x214>
08ad2e21 +0x5c1:  cmpl   $0x0,0x3c(%esi)
08ad2e25 +0x5c5:  mov    %esi,0x8(%ebp)
08ad2e28 +0x5c8:  jne    08ad29b5 <+0x155>
08ad2e2e +0x5ce:  mov    (%esi),%eax
08ad2e30 +0x5d0:  mov    0x20(%esi),%edx
08ad2e33 +0x5d3:  mov    %esi,(%esp)
08ad2e36 +0x5d6:  mov    %edx,0x4(%esp)
08ad2e3a +0x5da:  call   *0x14(%eax)
08ad2e3d +0x5dd:  jmp    08ad29b5 <+0x155>
08ad2e42 +0x5e2:  mov    0x8(%ebp),%ebx
08ad2e45 +0x5e5:  movl   $&_ZZN6DNFLex5yylexEvE12__FUNCTION__,0x8(%esp)
08ad2e4d +0x5ed:  movl   $"%s - the input stream is empty.",0x4(%esp)
08ad2e55 +0x5f5:  add    $0x8c,%ebx
08ad2e5b +0x5fb:  mov    %ebx,(%esp)
08ad2e5e +0x5fe:  call   0807e440 <_init+0xd38>
08ad2e63 +0x603:  mov    0x8(%ebp),%edi
08ad2e66 +0x606:  mov    (%edi),%eax
08ad2e68 +0x608:  mov    %ebx,0x4(%esp)
08ad2e6c +0x60c:  mov    %edi,(%esp)
08ad2e6f +0x60f:  call   *0x2c(%eax)
08ad2e72 +0x612:  mov    $0x1,%eax
08ad2e77 +0x617:  jmp    08ad2a74 <+0x214>
08ad2e7c +0x61c:  mov    0x8(%ebp),%esi
08ad2e7f +0x61f:  mov    0x8(%ebp),%ebx
08ad2e82 +0x622:  mov    0xc(%esi),%edx
08ad2e85 +0x625:  add    $0x8c,%ebx
08ad2e8b +0x62b:  mov    %edx,0x14(%esp)
08ad2e8f +0x62f:  mov    0x4(%eax),%edx
08ad2e92 +0x632:  mov    %edx,0x10(%esp)
08ad2e96 +0x636:  mov    (%eax),%eax
08ad2e98 +0x638:  movl   $&_ZZN6DNFLex5yylexEvE12__FUNCTION__,0x8(%esp)
08ad2ea0 +0x640:  movl   $"%s - %s/%s, line %d, unrecognized character 'NULL'.",0x4(%esp)
08ad2ea8 +0x648:  mov    %ebx,(%esp)
08ad2eab +0x64b:  mov    %eax,0xc(%esp)
08ad2eaf +0x64f:  call   0807e440 <_init+0xd38>
08ad2eb4 +0x654:  jmp    08ad2c8a <+0x42a>
08ad2eb9 +0x659:  mov    0x30(%esi),%ebx
08ad2ebc +0x65c:  mov    %edx,%eax
08ad2ebe +0x65e:  mov    0x4(%esi),%ecx
08ad2ec1 +0x661:  mov    %esi,0x8(%ebp)
08ad2ec4 +0x664:  add    $0x1,%ebx
08ad2ec7 +0x667:  mov    %ecx,-0x1c(%ebp)
08ad2eca +0x66a:  mov    %ebx,0x30(%esi)
08ad2ecd +0x66d:  jmp    08ad2b19 <+0x2b9>
08ad2ed2 +0x672:  lea    0x0(%esi,%eiz,1),%esi
08ad2ed9 +0x679:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLex::yylex @ 0x8ad2860

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: int yylex(DNFLex * this) */

int __thiscall DNFLex::yylex(DNFLex *this)

{
  int *piVar1;
  char cVar2;
  yy_buffer_state *pyVar3;
  istream *piVar4;
  size_t sVar5;
  _func_int_varargs **pp_Var6;
  bool bVar7;
  int iVar8;
  yy_buffer_state **ppyVar9;
  stream_t *psVar10;
  yy_buffer_state *pyVar11;
  flex_int16_t fVar12;
  int iVar13;
  int iVar14;
  size_t sVar15;
  byte *pbVar16;
  char *pcVar17;
  byte bVar18;
  char *pcVar19;
  byte bVar20;
  byte *local_20;
  
  bVar20 = 0;
                    /* Unresolved local var: yy_state_type yy_current_state@[???]
                       Unresolved local var: char * yy_cp@[???]
                       Unresolved local var: char * yy_bp@[???]
                       Unresolved local var: int yy_act@[???] */
  if ((this->super___dnf_script__FlexLexer).yy_init != 0) {
    pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
    bVar18 = (this->super___dnf_script__FlexLexer).yy_hold_char;
    goto LAB_08ad287e;
  }
  (this->super___dnf_script__FlexLexer).yy_init = 1;
  if ((this->super___dnf_script__FlexLexer).yy_start == 0) {
    (this->super___dnf_script__FlexLexer).yy_start = 1;
  }
  if ((this->super___dnf_script__FlexLexer).yyin == (istream *)0x0) {
    (this->super___dnf_script__FlexLexer).yyin = (istream *)std::cin;
  }
  if ((this->super___dnf_script__FlexLexer).yyout == (ostream *)0x0) {
    (this->super___dnf_script__FlexLexer).yyout = (ostream *)std::cout;
  }
  ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
  if (ppyVar9 == (yy_buffer_state **)0x0) {
LAB_08ad2ca8:
    __dnf_script__FlexLexer::yyensure_buffer_stack(&this->super___dnf_script__FlexLexer);
    sVar5 = (this->super___dnf_script__FlexLexer).yy_buffer_stack_top;
    ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
    pyVar11 = (yy_buffer_state *)
              (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[3])
                        (this,(this->super___dnf_script__FlexLexer).yyin,0x4000);
    sVar15 = (this->super___dnf_script__FlexLexer).yy_buffer_stack_top;
    ppyVar9[sVar5] = pyVar11;
    ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
    pyVar11 = ppyVar9[sVar15];
  }
  else {
    sVar15 = (this->super___dnf_script__FlexLexer).yy_buffer_stack_top;
    pyVar11 = ppyVar9[sVar15];
    if (pyVar11 == (yy_buffer_state *)0x0) goto LAB_08ad2ca8;
  }
  pyVar3 = ppyVar9[sVar15];
  (this->super___dnf_script__FlexLexer).yy_n_chars = pyVar11->yy_n_chars;
  pbVar16 = (byte *)pyVar3->yy_buf_pos;
  piVar4 = pyVar3->yy_input_file;
  (this->super___dnf_script__FlexLexer).yy_c_buf_p = (char *)pbVar16;
  (this->super___dnf_script__FlexLexer).yyin = piVar4;
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext = (char *)pbVar16;
  bVar18 = *pbVar16;
  (this->super___dnf_script__FlexLexer).yy_hold_char = bVar18;
LAB_08ad287e:
                    /* Unresolved local var: char c@[???] */
LAB_08ad2896:
  *pbVar16 = bVar18;
  iVar13 = (this->super___dnf_script__FlexLexer).yy_start;
  local_20 = pbVar16;
LAB_08ad28a3:
  fVar12 = yy_base[iVar13];
  iVar8 = iVar13;
  while( true ) {
                    /* Unresolved local var: YY_CHAR yy_c@[???] */
    if (yy_accept[iVar8] != 0) {
      (this->super___dnf_script__FlexLexer).yy_last_accepting_state = iVar8;
      (this->super___dnf_script__FlexLexer).yy_last_accepting_cpos = (char *)pbVar16;
    }
    iVar13 = (int)fVar12;
    if (iVar8 != yy_chk[(uint)bVar18 + iVar13]) {
      do {
        iVar8 = (int)yy_def[iVar8];
        iVar13 = (int)yy_base[iVar8];
      } while (yy_chk[iVar13 + (uint)bVar18] != iVar8);
    }
    pbVar16 = pbVar16 + 1;
    iVar8 = (int)yy_nxt[iVar13 + (uint)bVar18];
    fVar12 = yy_base[iVar8];
    if (fVar12 == 0x779) break;
    bVar18 = *pbVar16;
  }
LAB_08ad292b:
  iVar13 = (int)yy_accept[iVar8];
  if (iVar13 == 0) {
    pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_last_accepting_cpos;
    iVar13 = (int)yy_accept[(this->super___dnf_script__FlexLexer).yy_last_accepting_state];
  }
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext = (char *)local_20;
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yyleng = (int)pbVar16 - (int)local_20;
  (this->super___dnf_script__FlexLexer).yy_hold_char = *pbVar16;
  *pbVar16 = 0;
  (this->super___dnf_script__FlexLexer).yy_c_buf_p = (char *)pbVar16;
                    /* Unresolved local var: int yyl@[???] */
  if (((iVar13 != 0x15) && (yy_rule_can_match_eol[iVar13] != 0)) &&
     (iVar8 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yyleng, 0 < iVar8)) {
    pcVar17 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
    iVar14 = 0;
    do {
      while (pcVar17[iVar14] == '\n') {
        iVar14 = iVar14 + 1;
        piVar1 = &(this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
        *piVar1 = *piVar1 + 1;
        if (iVar8 <= iVar14) goto LAB_08ad299d;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar8);
  }
LAB_08ad299d:
  switch(iVar13) {
  case 0:
    goto switchD_08ad29c4_caseD_0;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 0xb;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 8;
  case 8:
    return 9;
  case 9:
    return 10;
  case 10:
    (this->super___dnf_script__FlexLexer).yy_start = 3;
    break;
  case 0xb:
  case 0xe:
    (this->super___dnf_script__FlexLexer).yy_start = 1;
    break;
  case 0xc:
  case 0xf:
  case 0x12:
    break;
  case 0xd:
    (this->super___dnf_script__FlexLexer).yy_start = 5;
    break;
  case 0x10:
    this->is_dbcs_ = false;
    (this->super___dnf_script__FlexLexer).yy_start = 7;
    this->m_str_tok_pos = this->STR_TOK_BUF;
    break;
  case 0x11:
    if (this->is_dbcs_ == false) {
      cVar2 = *(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      if (cVar2 == '`') {
        *this->m_str_tok_pos = '\0';
        (this->super___dnf_script__FlexLexer).yy_start = 1;
        return 7;
      }
      pcVar17 = this->m_str_tok_pos;
      if (this->STR_TOK_BUF + 0x1ffe <= pcVar17) {
        bVar7 = IsStream(this);
        if (!bVar7) {
          sprintf(this->ERR_BUF,"%s - the input stream is empty.","yylex");
          (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                    (this,this->ERR_BUF);
          return 1;
        }
                    /* Unresolved local var: stream_t * stream@[???] */
        psVar10 = GetInputStream(this);
        sprintf(this->ERR_BUF,"%s - %s/%s, line %d, string buffer overflow detected.","yylex",
                (psVar10->dir)._M_dataplus._M_p,(psVar10->filename)._M_dataplus._M_p,
                (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno);
        goto LAB_08ad2c8a;
      }
      *pcVar17 = cVar2;
      this->m_str_tok_pos = pcVar17 + 1;
      bVar7 = (*this->IsDbcsLeadChar_)(cVar2);
      this->is_dbcs_ = bVar7;
    }
    else {
      pcVar17 = this->m_str_tok_pos;
      *pcVar17 = *(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      this->m_str_tok_pos = pcVar17 + 1;
      this->is_dbcs_ = false;
    }
    break;
  case 0x13:
    bVar7 = IsStream(this);
    if (bVar7) {
                    /* Unresolved local var: stream_t * stream@[???] */
      psVar10 = GetInputStream(this);
      cVar2 = *(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      if (cVar2 == '\0') {
        sprintf(this->ERR_BUF,"%s - %s/%s, line %d, unrecognized character \'NULL\'.","yylex",
                (psVar10->dir)._M_dataplus._M_p,(psVar10->filename)._M_dataplus._M_p,
                (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno);
      }
      else {
        sprintf(this->ERR_BUF,"%s - %s/%s, line %d, unrecognized character \'%c\'.","yylex",
                (psVar10->dir)._M_dataplus._M_p,(psVar10->filename)._M_dataplus._M_p,
                (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno,(int)cVar2);
      }
LAB_08ad2c8a:
      (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                (this,this->ERR_BUF);
      return 1;
    }
    break;
  case 0x14:
    (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[10])
              (this,(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext,
               (this->super___dnf_script__FlexLexer).super_FlexLexer.yyleng);
    break;
  case 0x15:
    pcVar17 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
    *pbVar16 = (this->super___dnf_script__FlexLexer).yy_hold_char;
    ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
    pyVar11 = ppyVar9[(this->super___dnf_script__FlexLexer).yy_buffer_stack_top];
    if (pyVar11->yy_buffer_status == 0) {
      (this->super___dnf_script__FlexLexer).yy_n_chars = pyVar11->yy_n_chars;
      piVar4 = (this->super___dnf_script__FlexLexer).yyin;
      pyVar11->yy_buffer_status = 1;
      pyVar11->yy_input_file = piVar4;
      pyVar11 = ppyVar9[(this->super___dnf_script__FlexLexer).yy_buffer_stack_top];
    }
    if ((this->super___dnf_script__FlexLexer).yy_c_buf_p <=
        pyVar11->yy_ch_buf + (this->super___dnf_script__FlexLexer).yy_n_chars) {
      (this->super___dnf_script__FlexLexer).yy_c_buf_p =
           (char *)(pbVar16 + (-1 - (int)pcVar17) +
                   (int)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext);
      iVar8 = __dnf_script__FlexLexer::yy_get_previous_state(&this->super___dnf_script__FlexLexer);
                    /* Unresolved local var: int yy_is_jam@[???] */
      iVar13 = yy_NUL_trans[iVar8];
      if (iVar13 == 0) {
        local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
        pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
        goto LAB_08ad292b;
      }
      local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      pbVar16 = (byte *)((this->super___dnf_script__FlexLexer).yy_c_buf_p + 1);
      (this->super___dnf_script__FlexLexer).yy_c_buf_p = (char *)pbVar16;
LAB_08ad2b19:
      bVar18 = *pbVar16;
      goto LAB_08ad28a3;
    }
    iVar13 = __dnf_script__FlexLexer::yy_get_next_buffer(&this->super___dnf_script__FlexLexer);
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        if (iVar13 == 0) {
          (this->super___dnf_script__FlexLexer).yy_c_buf_p =
               (char *)(pbVar16 + (-1 - (int)pcVar17) +
                       (int)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext);
          iVar13 = __dnf_script__FlexLexer::yy_get_previous_state
                             (&this->super___dnf_script__FlexLexer);
          local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
          pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
          goto LAB_08ad2b19;
        }
        break;
      }
      (this->super___dnf_script__FlexLexer).yy_c_buf_p =
           (this->super___dnf_script__FlexLexer).yy_buffer_stack
           [(this->super___dnf_script__FlexLexer).yy_buffer_stack_top]->yy_ch_buf +
           (this->super___dnf_script__FlexLexer).yy_n_chars;
      iVar8 = __dnf_script__FlexLexer::yy_get_previous_state(&this->super___dnf_script__FlexLexer);
      local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
      goto LAB_08ad292b;
    }
    pp_Var6 = (this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer;
    (this->super___dnf_script__FlexLexer).yy_did_buffer_switch_on_eof = 0;
    iVar13 = (*pp_Var6[8])(this);
    if (iVar13 == 0) {
      if ((this->super___dnf_script__FlexLexer).yy_did_buffer_switch_on_eof == 0) {
        (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[5])
                  (this,(this->super___dnf_script__FlexLexer).yyin);
      }
      break;
    }
    (this->super___dnf_script__FlexLexer).yy_c_buf_p =
         (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
    iVar13 = ((this->super___dnf_script__FlexLexer).yy_start + -1) / 2 + 0x16;
    goto LAB_08ad299d;
  case 0x16:
  case 0x18:
  case 0x19:
    return 0;
  case 0x17:
    pcVar17 = "comment nest mismatch";
    pcVar19 = this->ERR_BUF;
    for (iVar13 = 0x16; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pcVar19 = *pcVar17;
      pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
      pcVar19 = pcVar19 + (uint)bVar20 * -2 + 1;
    }
    (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
              (this,this->ERR_BUF);
    return 1;
  default:
    (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
              (this,"fatal flex scanner internal error--no action found");
  }
                    /* Unresolved local var: yy_state_type yy_next_state@[???] */
  pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
  bVar18 = (this->super___dnf_script__FlexLexer).yy_hold_char;
  goto LAB_08ad2896;
switchD_08ad29c4_caseD_0:
  *pbVar16 = (this->super___dnf_script__FlexLexer).yy_hold_char;
  pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_last_accepting_cpos;
  iVar8 = (this->super___dnf_script__FlexLexer).yy_last_accepting_state;
  goto LAB_08ad292b;
}
```
