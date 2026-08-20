# yy_get_next_buffer

`_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv`

`__slang_filter__FlexLexer::yy_get_next_buffer()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08093b84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08093b84  _ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv
#           __slang_filter__FlexLexer::yy_get_next_buffer()
# range [0x08093b84, 0x0809401f]
08093b84 +0x000:  push   %ebp
08093b85 +0x001:  mov    %esp,%ebp
08093b87 +0x003:  push   %edi
08093b88 +0x004:  push   %esi
08093b89 +0x005:  push   %ebx
08093b8a +0x006:  sub    $0x4c,%esp
08093b8d +0x009:  mov    0x8(%ebp),%eax
08093b90 +0x00c:  mov    0x48(%eax),%edx
08093b93 +0x00f:  mov    0x8(%ebp),%eax
08093b96 +0x012:  mov    0x40(%eax),%eax
08093b99 +0x015:  shl    $0x2,%eax
08093b9c +0x018:  lea    (%edx,%eax,1),%eax
08093b9f +0x01b:  mov    (%eax),%eax
08093ba1 +0x01d:  mov    0x4(%eax),%edi
08093ba4 +0x020:  mov    0x8(%ebp),%eax
08093ba7 +0x023:  mov    0x4(%eax),%esi
08093baa +0x026:  mov    0x8(%ebp),%eax
08093bad +0x029:  mov    0x30(%eax),%edx
08093bb0 +0x02c:  mov    0x8(%ebp),%eax
08093bb3 +0x02f:  mov    0x48(%eax),%ecx
08093bb6 +0x032:  mov    0x8(%ebp),%eax
08093bb9 +0x035:  mov    0x40(%eax),%eax
08093bbc +0x038:  shl    $0x2,%eax
08093bbf +0x03b:  lea    (%ecx,%eax,1),%eax
08093bc2 +0x03e:  mov    (%eax),%eax
08093bc4 +0x040:  mov    0x4(%eax),%ecx
08093bc7 +0x043:  mov    0x8(%ebp),%eax
08093bca +0x046:  mov    0x2c(%eax),%eax
08093bcd +0x049:  add    $0x1,%eax
08093bd0 +0x04c:  lea    (%ecx,%eax,1),%eax
08093bd3 +0x04f:  cmp    %eax,%edx
08093bd5 +0x051:  jbe    08093bf1 <+0x6d>
08093bd7 +0x053:  mov    0x8(%ebp),%eax
08093bda +0x056:  mov    (%eax),%eax
08093bdc +0x058:  add    $0x2c,%eax
08093bdf +0x05b:  mov    (%eax),%edx
08093be1 +0x05d:  movl   $"fatal flex scanner internal error--end of buffer missed",0x4(%esp)
08093be9 +0x065:  mov    0x8(%ebp),%eax
08093bec +0x068:  mov    %eax,(%esp)
08093bef +0x06b:  call   *%edx
08093bf1 +0x06d:  mov    0x8(%ebp),%eax
08093bf4 +0x070:  mov    0x48(%eax),%edx
08093bf7 +0x073:  mov    0x8(%ebp),%eax
08093bfa +0x076:  mov    0x40(%eax),%eax
08093bfd +0x079:  shl    $0x2,%eax
08093c00 +0x07c:  lea    (%edx,%eax,1),%eax
08093c03 +0x07f:  mov    (%eax),%eax
08093c05 +0x081:  mov    0x28(%eax),%eax
08093c08 +0x084:  test   %eax,%eax
08093c0a +0x086:  jne    08093c39 <+0xb5>
08093c0c +0x088:  mov    0x8(%ebp),%eax
08093c0f +0x08b:  mov    0x30(%eax),%eax
08093c12 +0x08e:  mov    %eax,%edx
08093c14 +0x090:  mov    0x8(%ebp),%eax
08093c17 +0x093:  mov    0x4(%eax),%eax
08093c1a +0x096:  mov    %edx,%ecx
08093c1c +0x098:  sub    %eax,%ecx
08093c1e +0x09a:  mov    %ecx,%eax
08093c20 +0x09c:  cmp    $0x1,%eax
08093c23 +0x09f:  jne    08093c2f <+0xab>
08093c25 +0x0a1:  mov    $0x1,%eax
08093c2a +0x0a6:  jmp    08094018 <+0x494>
08093c2f +0x0ab:  mov    $0x2,%eax
08093c34 +0x0b0:  jmp    08094018 <+0x494>
08093c39 +0x0b5:  mov    0x8(%ebp),%eax
08093c3c +0x0b8:  mov    0x30(%eax),%eax
08093c3f +0x0bb:  mov    %eax,%edx
08093c41 +0x0bd:  mov    0x8(%ebp),%eax
08093c44 +0x0c0:  mov    0x4(%eax),%eax
08093c47 +0x0c3:  mov    %edx,%ecx
08093c49 +0x0c5:  sub    %eax,%ecx
08093c4b +0x0c7:  mov    %ecx,%eax
08093c4d +0x0c9:  lea    -0x1(%eax),%ebx
08093c50 +0x0cc:  movl   $0x0,-0x3c(%ebp)
08093c57 +0x0d3:  jmp    08093c68 <+0xe4>
08093c59 +0x0d5:  movzbl (%esi),%eax
08093c5c +0x0d8:  mov    %al,(%edi)
08093c5e +0x0da:  add    $0x1,%edi
08093c61 +0x0dd:  add    $0x1,%esi
08093c64 +0x0e0:  addl   $0x1,-0x3c(%ebp)
08093c68 +0x0e4:  cmp    %ebx,-0x3c(%ebp)
08093c6b +0x0e7:  setl   %al
08093c6e +0x0ea:  test   %al,%al
08093c70 +0x0ec:  jne    08093c59 <+0xd5>
08093c72 +0x0ee:  mov    0x8(%ebp),%eax
08093c75 +0x0f1:  mov    0x48(%eax),%edx
08093c78 +0x0f4:  mov    0x8(%ebp),%eax
08093c7b +0x0f7:  mov    0x40(%eax),%eax
08093c7e +0x0fa:  shl    $0x2,%eax
08093c81 +0x0fd:  lea    (%edx,%eax,1),%eax
08093c84 +0x100:  mov    (%eax),%eax
08093c86 +0x102:  mov    0x2c(%eax),%eax
08093c89 +0x105:  cmp    $0x2,%eax
08093c8c +0x108:  jne    08093cba <+0x136>
08093c8e +0x10a:  mov    0x8(%ebp),%eax
08093c91 +0x10d:  mov    0x48(%eax),%edx
08093c94 +0x110:  mov    0x8(%ebp),%eax
08093c97 +0x113:  mov    0x40(%eax),%eax
08093c9a +0x116:  shl    $0x2,%eax
08093c9d +0x119:  lea    (%edx,%eax,1),%eax
08093ca0 +0x11c:  mov    (%eax),%eax
08093ca2 +0x11e:  mov    0x8(%ebp),%edx
08093ca5 +0x121:  movl   $0x0,0x2c(%edx)
08093cac +0x128:  mov    0x8(%ebp),%edx
08093caf +0x12b:  mov    0x2c(%edx),%edx
08093cb2 +0x12e:  mov    %edx,0x10(%eax)
08093cb5 +0x131:  jmp    08093e90 <+0x30c>
08093cba +0x136:  mov    0x8(%ebp),%eax
08093cbd +0x139:  mov    0x48(%eax),%edx
08093cc0 +0x13c:  mov    0x8(%ebp),%eax
08093cc3 +0x13f:  mov    0x40(%eax),%eax
08093cc6 +0x142:  shl    $0x2,%eax
08093cc9 +0x145:  lea    (%edx,%eax,1),%eax
08093ccc +0x148:  mov    (%eax),%eax
08093cce +0x14a:  mov    0xc(%eax),%edx
08093cd1 +0x14d:  mov    %ebx,%eax
08093cd3 +0x14f:  mov    %edx,%ecx
08093cd5 +0x151:  sub    %eax,%ecx
08093cd7 +0x153:  mov    %ecx,%eax
08093cd9 +0x155:  sub    $0x1,%eax
08093cdc +0x158:  mov    %eax,-0x2c(%ebp)
08093cdf +0x15b:  jmp    08093def <+0x26b>
08093ce4 +0x160:  mov    0x8(%ebp),%eax
08093ce7 +0x163:  mov    0x48(%eax),%eax
08093cea +0x166:  test   %eax,%eax
08093cec +0x168:  je     08093d04 <+0x180>
08093cee +0x16a:  mov    0x8(%ebp),%eax
08093cf1 +0x16d:  mov    0x48(%eax),%edx
08093cf4 +0x170:  mov    0x8(%ebp),%eax
08093cf7 +0x173:  mov    0x40(%eax),%eax
08093cfa +0x176:  shl    $0x2,%eax
08093cfd +0x179:  lea    (%edx,%eax,1),%eax
08093d00 +0x17c:  mov    (%eax),%eax
08093d02 +0x17e:  jmp    08093d09 <+0x185>
08093d04 +0x180:  mov    $0x0,%eax
08093d09 +0x185:  mov    %eax,-0x28(%ebp)
08093d0c +0x188:  mov    0x8(%ebp),%eax
08093d0f +0x18b:  mov    0x30(%eax),%eax
08093d12 +0x18e:  mov    %eax,%edx
08093d14 +0x190:  mov    -0x28(%ebp),%eax
08093d17 +0x193:  mov    0x4(%eax),%eax
08093d1a +0x196:  mov    %edx,%ecx
08093d1c +0x198:  sub    %eax,%ecx
08093d1e +0x19a:  mov    %ecx,%eax
08093d20 +0x19c:  mov    %eax,-0x24(%ebp)
08093d23 +0x19f:  mov    -0x28(%ebp),%eax
08093d26 +0x1a2:  mov    0x14(%eax),%eax
08093d29 +0x1a5:  test   %eax,%eax
08093d2b +0x1a7:  je     08093d8b <+0x207>
08093d2d +0x1a9:  mov    -0x28(%ebp),%eax
08093d30 +0x1ac:  mov    0xc(%eax),%eax
08093d33 +0x1af:  add    %eax,%eax
08093d35 +0x1b1:  mov    %eax,-0x20(%ebp)
08093d38 +0x1b4:  cmpl   $0x0,-0x20(%ebp)
08093d3c +0x1b8:  jg     08093d57 <+0x1d3>
08093d3e +0x1ba:  mov    -0x28(%ebp),%eax
08093d41 +0x1bd:  mov    0xc(%eax),%edx
08093d44 +0x1c0:  mov    -0x28(%ebp),%eax
08093d47 +0x1c3:  mov    0xc(%eax),%eax
08093d4a +0x1c6:  shr    $0x3,%eax
08093d4d +0x1c9:  add    %eax,%edx
08093d4f +0x1cb:  mov    -0x28(%ebp),%eax
08093d52 +0x1ce:  mov    %edx,0xc(%eax)
08093d55 +0x1d1:  jmp    08093d66 <+0x1e2>
08093d57 +0x1d3:  mov    -0x28(%ebp),%eax
08093d5a +0x1d6:  mov    0xc(%eax),%eax
08093d5d +0x1d9:  lea    (%eax,%eax,1),%edx
08093d60 +0x1dc:  mov    -0x28(%ebp),%eax
08093d63 +0x1df:  mov    %edx,0xc(%eax)
08093d66 +0x1e2:  mov    -0x28(%ebp),%eax
08093d69 +0x1e5:  mov    0xc(%eax),%eax
08093d6c +0x1e8:  lea    0x2(%eax),%edx
08093d6f +0x1eb:  mov    -0x28(%ebp),%eax
08093d72 +0x1ee:  mov    0x4(%eax),%eax
08093d75 +0x1f1:  mov    %edx,0x4(%esp)
08093d79 +0x1f5:  mov    %eax,(%esp)
08093d7c +0x1f8:  call   08094d88 <_Z23__slang_filter__reallocPvj>  ; __slang_filter__realloc(void*, unsigned int)
08093d81 +0x1fd:  mov    %eax,%edx
08093d83 +0x1ff:  mov    -0x28(%ebp),%eax
08093d86 +0x202:  mov    %edx,0x4(%eax)
08093d89 +0x205:  jmp    08093d95 <+0x211>
08093d8b +0x207:  mov    -0x28(%ebp),%eax
08093d8e +0x20a:  movl   $0x0,0x4(%eax)
08093d95 +0x211:  mov    -0x28(%ebp),%eax
08093d98 +0x214:  mov    0x4(%eax),%eax
08093d9b +0x217:  test   %eax,%eax
08093d9d +0x219:  jne    08093db9 <+0x235>
08093d9f +0x21b:  mov    0x8(%ebp),%eax
08093da2 +0x21e:  mov    (%eax),%eax
08093da4 +0x220:  add    $0x2c,%eax
08093da7 +0x223:  mov    (%eax),%edx
08093da9 +0x225:  movl   $"fatal error - scanner input buffer overflow",0x4(%esp)
08093db1 +0x22d:  mov    0x8(%ebp),%eax
08093db4 +0x230:  mov    %eax,(%esp)
08093db7 +0x233:  call   *%edx
08093db9 +0x235:  mov    -0x28(%ebp),%eax
08093dbc +0x238:  mov    0x4(%eax),%edx
08093dbf +0x23b:  mov    -0x24(%ebp),%eax
08093dc2 +0x23e:  add    %eax,%edx
08093dc4 +0x240:  mov    0x8(%ebp),%eax
08093dc7 +0x243:  mov    %edx,0x30(%eax)
08093dca +0x246:  mov    0x8(%ebp),%eax
08093dcd +0x249:  mov    0x48(%eax),%edx
08093dd0 +0x24c:  mov    0x8(%ebp),%eax
08093dd3 +0x24f:  mov    0x40(%eax),%eax
08093dd6 +0x252:  shl    $0x2,%eax
08093dd9 +0x255:  lea    (%edx,%eax,1),%eax
08093ddc +0x258:  mov    (%eax),%eax
08093dde +0x25a:  mov    0xc(%eax),%edx
08093de1 +0x25d:  mov    %ebx,%eax
08093de3 +0x25f:  mov    %edx,%ecx
08093de5 +0x261:  sub    %eax,%ecx
08093de7 +0x263:  mov    %ecx,%eax
08093de9 +0x265:  sub    $0x1,%eax
08093dec +0x268:  mov    %eax,-0x2c(%ebp)
08093def +0x26b:  cmpl   $0x0,-0x2c(%ebp)
08093df3 +0x26f:  setle  %al
08093df6 +0x272:  test   %al,%al
08093df8 +0x274:  jne    08093ce4 <+0x160>
08093dfe +0x27a:  cmpl   $0x2000,-0x2c(%ebp)
08093e05 +0x281:  jle    08093e0e <+0x28a>
08093e07 +0x283:  movl   $0x2000,-0x2c(%ebp)
08093e0e +0x28a:  mov    0x8(%ebp),%eax
08093e11 +0x28d:  mov    (%eax),%eax
08093e13 +0x28f:  add    $0x24,%eax
08093e16 +0x292:  mov    (%eax),%edx
08093e18 +0x294:  mov    0x8(%ebp),%eax
08093e1b +0x297:  mov    0x48(%eax),%ecx
08093e1e +0x29a:  mov    0x8(%ebp),%eax
08093e21 +0x29d:  mov    0x40(%eax),%eax
08093e24 +0x2a0:  shl    $0x2,%eax
08093e27 +0x2a3:  lea    (%ecx,%eax,1),%eax
08093e2a +0x2a6:  mov    (%eax),%eax
08093e2c +0x2a8:  mov    0x4(%eax),%ecx
08093e2f +0x2ab:  mov    %ebx,%eax
08093e31 +0x2ad:  add    %eax,%ecx
08093e33 +0x2af:  mov    -0x2c(%ebp),%eax
08093e36 +0x2b2:  mov    %eax,0x8(%esp)
08093e3a +0x2b6:  mov    %ecx,0x4(%esp)
08093e3e +0x2ba:  mov    0x8(%ebp),%eax
08093e41 +0x2bd:  mov    %eax,(%esp)
08093e44 +0x2c0:  call   *%edx
08093e46 +0x2c2:  mov    0x8(%ebp),%edx
08093e49 +0x2c5:  mov    %eax,0x2c(%edx)
08093e4c +0x2c8:  mov    0x8(%ebp),%eax
08093e4f +0x2cb:  mov    0x2c(%eax),%eax
08093e52 +0x2ce:  shr    $0x1f,%eax
08093e55 +0x2d1:  test   %al,%al
08093e57 +0x2d3:  je     08093e73 <+0x2ef>
08093e59 +0x2d5:  mov    0x8(%ebp),%eax
08093e5c +0x2d8:  mov    (%eax),%eax
08093e5e +0x2da:  add    $0x2c,%eax
08093e61 +0x2dd:  mov    (%eax),%edx
08093e63 +0x2df:  movl   $"input in flex scanner failed",0x4(%esp)
08093e6b +0x2e7:  mov    0x8(%ebp),%eax
08093e6e +0x2ea:  mov    %eax,(%esp)
08093e71 +0x2ed:  call   *%edx
08093e73 +0x2ef:  mov    0x8(%ebp),%eax
08093e76 +0x2f2:  mov    0x48(%eax),%edx
08093e79 +0x2f5:  mov    0x8(%ebp),%eax
08093e7c +0x2f8:  mov    0x40(%eax),%eax
08093e7f +0x2fb:  shl    $0x2,%eax
08093e82 +0x2fe:  lea    (%edx,%eax,1),%eax
08093e85 +0x301:  mov    (%eax),%eax
08093e87 +0x303:  mov    0x8(%ebp),%edx
08093e8a +0x306:  mov    0x2c(%edx),%edx
08093e8d +0x309:  mov    %edx,0x10(%eax)
08093e90 +0x30c:  mov    0x8(%ebp),%eax
08093e93 +0x30f:  mov    0x2c(%eax),%eax
08093e96 +0x312:  test   %eax,%eax
08093e98 +0x314:  jne    08093ee7 <+0x363>
08093e9a +0x316:  test   %ebx,%ebx
08093e9c +0x318:  jne    08093ec3 <+0x33f>
08093e9e +0x31a:  movl   $0x1,-0x30(%ebp)
08093ea5 +0x321:  mov    0x8(%ebp),%eax
08093ea8 +0x324:  mov    (%eax),%eax
08093eaa +0x326:  add    $0x14,%eax
08093ead +0x329:  mov    (%eax),%edx
08093eaf +0x32b:  mov    0x8(%ebp),%eax
08093eb2 +0x32e:  mov    0x20(%eax),%eax
08093eb5 +0x331:  mov    %eax,0x4(%esp)
08093eb9 +0x335:  mov    0x8(%ebp),%eax
08093ebc +0x338:  mov    %eax,(%esp)
08093ebf +0x33b:  call   *%edx
08093ec1 +0x33d:  jmp    08093eee <+0x36a>
08093ec3 +0x33f:  movl   $0x2,-0x30(%ebp)
08093eca +0x346:  mov    0x8(%ebp),%eax
08093ecd +0x349:  mov    0x48(%eax),%edx
08093ed0 +0x34c:  mov    0x8(%ebp),%eax
08093ed3 +0x34f:  mov    0x40(%eax),%eax
08093ed6 +0x352:  shl    $0x2,%eax
08093ed9 +0x355:  lea    (%edx,%eax,1),%eax
08093edc +0x358:  mov    (%eax),%eax
08093ede +0x35a:  movl   $0x2,0x2c(%eax)
08093ee5 +0x361:  jmp    08093eee <+0x36a>
08093ee7 +0x363:  movl   $0x0,-0x30(%ebp)
08093eee +0x36a:  mov    0x8(%ebp),%eax
08093ef1 +0x36d:  mov    0x2c(%eax),%eax
08093ef4 +0x370:  add    %ebx,%eax
08093ef6 +0x372:  mov    %eax,%edx
08093ef8 +0x374:  mov    0x8(%ebp),%eax
08093efb +0x377:  mov    0x48(%eax),%ecx
08093efe +0x37a:  mov    0x8(%ebp),%eax
08093f01 +0x37d:  mov    0x40(%eax),%eax
08093f04 +0x380:  shl    $0x2,%eax
08093f07 +0x383:  lea    (%ecx,%eax,1),%eax
08093f0a +0x386:  mov    (%eax),%eax
08093f0c +0x388:  mov    0xc(%eax),%eax
08093f0f +0x38b:  cmp    %eax,%edx
08093f11 +0x38d:  jbe    08093fa0 <+0x41c>
08093f17 +0x393:  mov    0x8(%ebp),%eax
08093f1a +0x396:  mov    0x2c(%eax),%eax
08093f1d +0x399:  lea    (%eax,%ebx,1),%edx
08093f20 +0x39c:  mov    0x8(%ebp),%eax
08093f23 +0x39f:  mov    0x2c(%eax),%eax
08093f26 +0x3a2:  sar    %eax
08093f28 +0x3a4:  lea    (%edx,%eax,1),%eax
08093f2b +0x3a7:  mov    %eax,-0x1c(%ebp)
08093f2e +0x3aa:  mov    0x8(%ebp),%eax
08093f31 +0x3ad:  mov    0x48(%eax),%edx
08093f34 +0x3b0:  mov    0x8(%ebp),%eax
08093f37 +0x3b3:  mov    0x40(%eax),%eax
08093f3a +0x3b6:  shl    $0x2,%eax
08093f3d +0x3b9:  lea    (%edx,%eax,1),%eax
08093f40 +0x3bc:  mov    (%eax),%esi
08093f42 +0x3be:  mov    0x8(%ebp),%eax
08093f45 +0x3c1:  mov    0x48(%eax),%edx
08093f48 +0x3c4:  mov    0x8(%ebp),%eax
08093f4b +0x3c7:  mov    0x40(%eax),%eax
08093f4e +0x3ca:  shl    $0x2,%eax
08093f51 +0x3cd:  lea    (%edx,%eax,1),%eax
08093f54 +0x3d0:  mov    (%eax),%eax
08093f56 +0x3d2:  mov    0x4(%eax),%eax
08093f59 +0x3d5:  mov    -0x1c(%ebp),%edx
08093f5c +0x3d8:  mov    %edx,0x4(%esp)
08093f60 +0x3dc:  mov    %eax,(%esp)
08093f63 +0x3df:  call   08094d88 <_Z23__slang_filter__reallocPvj>  ; __slang_filter__realloc(void*, unsigned int)
08093f68 +0x3e4:  mov    %eax,0x4(%esi)
08093f6b +0x3e7:  mov    0x8(%ebp),%eax
08093f6e +0x3ea:  mov    0x48(%eax),%edx
08093f71 +0x3ed:  mov    0x8(%ebp),%eax
08093f74 +0x3f0:  mov    0x40(%eax),%eax
08093f77 +0x3f3:  shl    $0x2,%eax
08093f7a +0x3f6:  lea    (%edx,%eax,1),%eax
08093f7d +0x3f9:  mov    (%eax),%eax
08093f7f +0x3fb:  mov    0x4(%eax),%eax
08093f82 +0x3fe:  test   %eax,%eax
08093f84 +0x400:  jne    08093fa0 <+0x41c>
08093f86 +0x402:  mov    0x8(%ebp),%eax
08093f89 +0x405:  mov    (%eax),%eax
08093f8b +0x407:  add    $0x2c,%eax
08093f8e +0x40a:  mov    (%eax),%edx
08093f90 +0x40c:  movl   $"out of dynamic memory in yy_get_next_buffer()",0x4(%esp)
08093f98 +0x414:  mov    0x8(%ebp),%eax
08093f9b +0x417:  mov    %eax,(%esp)
08093f9e +0x41a:  call   *%edx
08093fa0 +0x41c:  mov    0x8(%ebp),%eax
08093fa3 +0x41f:  mov    0x2c(%eax),%eax
08093fa6 +0x422:  lea    (%eax,%ebx,1),%edx
08093fa9 +0x425:  mov    0x8(%ebp),%eax
08093fac +0x428:  mov    %edx,0x2c(%eax)
08093faf +0x42b:  mov    0x8(%ebp),%eax
08093fb2 +0x42e:  mov    0x48(%eax),%edx
08093fb5 +0x431:  mov    0x8(%ebp),%eax
08093fb8 +0x434:  mov    0x40(%eax),%eax
08093fbb +0x437:  shl    $0x2,%eax
08093fbe +0x43a:  lea    (%edx,%eax,1),%eax
08093fc1 +0x43d:  mov    (%eax),%eax
08093fc3 +0x43f:  mov    0x4(%eax),%edx
08093fc6 +0x442:  mov    0x8(%ebp),%eax
08093fc9 +0x445:  mov    0x2c(%eax),%eax
08093fcc +0x448:  lea    (%edx,%eax,1),%eax
08093fcf +0x44b:  movb   $0x0,(%eax)
08093fd2 +0x44e:  mov    0x8(%ebp),%eax
08093fd5 +0x451:  mov    0x48(%eax),%edx
08093fd8 +0x454:  mov    0x8(%ebp),%eax
08093fdb +0x457:  mov    0x40(%eax),%eax
08093fde +0x45a:  shl    $0x2,%eax
08093fe1 +0x45d:  lea    (%edx,%eax,1),%eax
08093fe4 +0x460:  mov    (%eax),%eax
08093fe6 +0x462:  mov    0x4(%eax),%edx
08093fe9 +0x465:  mov    0x8(%ebp),%eax
08093fec +0x468:  mov    0x2c(%eax),%eax
08093fef +0x46b:  add    $0x1,%eax
08093ff2 +0x46e:  lea    (%edx,%eax,1),%eax
08093ff5 +0x471:  movb   $0x0,(%eax)
08093ff8 +0x474:  mov    0x8(%ebp),%eax
08093ffb +0x477:  mov    0x48(%eax),%edx
08093ffe +0x47a:  mov    0x8(%ebp),%eax
08094001 +0x47d:  mov    0x40(%eax),%eax
08094004 +0x480:  shl    $0x2,%eax
08094007 +0x483:  lea    (%edx,%eax,1),%eax
0809400a +0x486:  mov    (%eax),%eax
0809400c +0x488:  mov    0x4(%eax),%edx
0809400f +0x48b:  mov    0x8(%ebp),%eax
08094012 +0x48e:  mov    %edx,0x4(%eax)
08094015 +0x491:  mov    -0x30(%ebp),%eax
08094018 +0x494:  add    $0x4c,%esp
0809401b +0x497:  pop    %ebx
0809401c +0x498:  pop    %esi
0809401d +0x499:  pop    %edi
0809401e +0x49a:  pop    %ebp
0809401f +0x49b:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_get_next_buffer @ 0x8093b84

/* __slang_filter__FlexLexer::yy_get_next_buffer() */

undefined4 __thiscall __slang_filter__FlexLexer::yy_get_next_buffer(__slang_filter__FlexLexer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int local_40;
  undefined4 local_34;
  int local_30;
  
  puVar7 = *(undefined1 **)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4);
  puVar6 = *(undefined1 **)(this + 4);
  if ((uint)(*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
            *(int *)(this + 0x2c) + 1) < *(uint *)(this + 0x30)) {
    (**(code **)(*(int *)this + 0x2c))
              (this,"fatal flex scanner internal error--end of buffer missed");
  }
  if (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x28) == 0) {
    if (*(int *)(this + 0x30) - *(int *)(this + 4) == 1) {
      local_34 = 1;
    }
    else {
      local_34 = 2;
    }
  }
  else {
    iVar1 = (*(int *)(this + 0x30) - *(int *)(this + 4)) + -1;
    for (local_40 = 0; local_40 < iVar1; local_40 = local_40 + 1) {
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x2c) == 2) {
      iVar4 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(this + 0x2c);
    }
    else {
      local_30 = *(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) - iVar1
      ;
      while (local_30 = local_30 + -1, local_30 < 1) {
        if (*(int *)(this + 0x48) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
        }
        iVar2 = *(int *)(this + 0x30);
        iVar3 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar4 + 0x14) == 0) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        else {
          if (*(int *)(iVar4 + 0xc) * 2 < 1) {
            *(uint *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + (*(uint *)(iVar4 + 0xc) >> 3);
          }
          else {
            *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) * 2;
          }
          uVar5 = __slang_filter__realloc(*(void **)(iVar4 + 4),*(int *)(iVar4 + 0xc) + 2);
          *(undefined4 *)(iVar4 + 4) = uVar5;
        }
        if (*(int *)(iVar4 + 4) == 0) {
          (**(code **)(*(int *)this + 0x2c))(this,"fatal error - scanner input buffer overflow");
        }
        *(int *)(this + 0x30) = *(int *)(iVar4 + 4) + (iVar2 - iVar3);
        local_30 = *(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) -
                   iVar1;
      }
      if (0x2000 < local_30) {
        local_30 = 0x2000;
      }
      uVar5 = (**(code **)(*(int *)this + 0x24))
                        (this,*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) +
                                      4) + iVar1,local_30);
      *(undefined4 *)(this + 0x2c) = uVar5;
      if (*(int *)(this + 0x2c) < 0) {
        (**(code **)(*(int *)this + 0x2c))(this,"input in flex scanner failed");
      }
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10) =
           *(undefined4 *)(this + 0x2c);
    }
    if (*(int *)(this + 0x2c) == 0) {
      if (iVar1 == 0) {
        local_34 = 1;
        (**(code **)(*(int *)this + 0x14))(this,*(undefined4 *)(this + 0x20));
      }
      else {
        local_34 = 2;
        *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x2c) = 2;
      }
    }
    else {
      local_34 = 0;
    }
    if (*(uint *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) <
        (uint)(*(int *)(this + 0x2c) + iVar1)) {
      iVar4 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
      uVar5 = __slang_filter__realloc
                        (*(void **)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4)
                         ,*(int *)(this + 0x2c) + iVar1 + (*(int *)(this + 0x2c) >> 1));
      *(undefined4 *)(iVar4 + 4) = uVar5;
      if (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) == 0) {
        (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yy_get_next_buffer()");
      }
    }
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + iVar1;
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
     *(int *)(this + 0x2c)) = 0;
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
     *(int *)(this + 0x2c) + 1) = 0;
    *(undefined4 *)(this + 4) =
         *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4);
  }
  return local_34;
}
```
