# _M_initialize_moneypunct

`_ZNSt10moneypunctIwLb1EE24_M_initialize_moneypunctEP15__locale_structPKc`

`std::moneypunct<wchar_t, true>::_M_initialize_moneypunct(__locale_struct*, char const*)`

| 类 | 地址 |
|---|---|
| `std::moneypunct<wchar_t, true>` | `0x08720b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08720b00  _ZNSt10moneypunctIwLb1EE24_M_initialize_moneypunctEP15__locale_structPKc
#           std::moneypunct<wchar_t, true>::_M_initialize_moneypunct(__locale_struct*, char const*)
# range [0x08720b00, 0x0872106f]
08720b00 +0x000:  push   %ebp
08720b01 +0x001:  mov    %esp,%ebp
08720b03 +0x003:  push   %edi
08720b04 +0x004:  push   %esi
08720b05 +0x005:  push   %ebx
08720b06 +0x006:  sub    $0x5c,%esp
08720b09 +0x009:  mov    0x8(%ebp),%esi
08720b0c +0x00c:  mov    %gs:0x14,%eax
08720b12 +0x012:  mov    %eax,-0x1c(%ebp)
08720b15 +0x015:  xor    %eax,%eax
08720b17 +0x017:  mov    0xc(%ebp),%ebx
08720b1a +0x01a:  mov    0x8(%esi),%edx
08720b1d +0x01d:  test   %edx,%edx
08720b1f +0x01f:  je     08720f68 <+0x468>
08720b25 +0x025:  test   %ebx,%ebx
08720b27 +0x027:  je     08720df0 <+0x2f0>
08720b2d +0x02d:  mov    %ebx,(%esp)
08720b30 +0x030:  call   0807de70 <_init+0x768>
08720b35 +0x035:  mov    %ebx,0x4(%esp)
08720b39 +0x039:  movl   $0x4002b,(%esp)
08720b40 +0x040:  mov    %eax,-0x4c(%ebp)
08720b43 +0x043:  call   0807de10 <_init+0x708>
08720b48 +0x048:  mov    0x8(%esi),%edx
08720b4b +0x04b:  mov    %eax,0x14(%edx)
08720b4e +0x04e:  mov    %ebx,0x4(%esp)
08720b52 +0x052:  movl   $0x4002c,(%esp)
08720b59 +0x059:  call   0807de10 <_init+0x708>
08720b5e +0x05e:  mov    0x8(%esi),%edx
08720b61 +0x061:  test   %eax,%eax
08720b63 +0x063:  mov    %eax,0x18(%edx)
08720b66 +0x066:  jne    08720d78 <+0x278>
08720b6c +0x06c:  mov    0x14(%edx),%eax
08720b6f +0x06f:  movl   $&data#2fb52a47(.rodata),0x8(%edx)
08720b76 +0x076:  movl   $0x0,0xc(%edx)
08720b7d +0x07d:  movb   $0x0,0x10(%edx)
08720b81 +0x081:  test   %eax,%eax
08720b83 +0x083:  movl   $0x2c,0x18(%edx)
08720b8a +0x08a:  jne    08720db3 <+0x2b3>
08720b90 +0x090:  movl   $0x0,0x34(%edx)
08720b97 +0x097:  movl   $0x2e,0x14(%edx)
08720b9e +0x09e:  mov    %ebx,0x4(%esp)
08720ba2 +0x0a2:  movl   $0x40005,(%esp)
08720ba9 +0x0a9:  call   0807de10 <_init+0x708>
08720bae +0x0ae:  mov    %ebx,0x4(%esp)
08720bb2 +0x0b2:  movl   $0x40006,(%esp)
08720bb9 +0x0b9:  mov    %eax,-0x28(%ebp)
08720bbc +0x0bc:  call   0807de10 <_init+0x708>
08720bc1 +0x0c1:  mov    %ebx,0x4(%esp)
08720bc5 +0x0c5:  movl   $0x40000,(%esp)
08720bcc +0x0cc:  mov    %eax,-0x2c(%ebp)
08720bcf +0x0cf:  call   0807de10 <_init+0x708>
08720bd4 +0x0d4:  movl   $0x0,-0x40(%ebp)
08720bdb +0x0db:  movl   $0x0,-0x44(%ebp)
08720be2 +0x0e2:  mov    %ebx,0x4(%esp)
08720be6 +0x0e6:  movl   $0x40015,(%esp)
08720bed +0x0ed:  mov    %eax,-0x30(%ebp)
08720bf0 +0x0f0:  call   0807de10 <_init+0x708>
08720bf5 +0x0f5:  movzbl (%eax),%edi
08720bf8 +0x0f8:  mov    -0x28(%ebp),%eax
08720bfb +0x0fb:  mov    %eax,(%esp)
08720bfe +0x0fe:  call   0807e3b0 <_init+0xca8>
08720c03 +0x103:  test   %eax,%eax
08720c05 +0x105:  jne    08720ec8 <+0x3c8>
08720c0b +0x10b:  mov    0x8(%esi),%edx
08720c0e +0x10e:  movl   $"",0x24(%edx)
08720c15 +0x115:  mov    0x24(%edx),%eax
08720c18 +0x118:  mov    %edx,-0x50(%ebp)
08720c1b +0x11b:  mov    %eax,(%esp)
08720c1e +0x11e:  call   0807e130 <_init+0xa28>
08720c23 +0x123:  mov    -0x50(%ebp),%edx
08720c26 +0x126:  mov    %eax,0x28(%edx)
08720c29 +0x129:  mov    -0x2c(%ebp),%eax
08720c2c +0x12c:  mov    %eax,(%esp)
08720c2f +0x12f:  call   0807e3b0 <_init+0xca8>
08720c34 +0x134:  mov    %edi,%ecx
08720c36 +0x136:  mov    -0x50(%ebp),%edx
08720c39 +0x139:  test   %cl,%cl
08720c3b +0x13b:  jne    08720dd8 <+0x2d8>
08720c41 +0x141:  movl   $"(",0x2c(%edx)
08720c48 +0x148:  mov    0x2c(%edx),%eax
08720c4b +0x14b:  mov    %edx,-0x50(%ebp)
08720c4e +0x14e:  mov    %eax,(%esp)
08720c51 +0x151:  call   0807e130 <_init+0xa28>
08720c56 +0x156:  mov    -0x50(%ebp),%edx
08720c59 +0x159:  mov    %eax,0x30(%edx)
08720c5c +0x15c:  mov    -0x30(%ebp),%eax
08720c5f +0x15f:  mov    %eax,(%esp)
08720c62 +0x162:  call   0807e3b0 <_init+0xca8>
08720c67 +0x167:  mov    -0x50(%ebp),%edx
08720c6a +0x16a:  test   %eax,%eax
08720c6c +0x16c:  jne    08720e78 <+0x378>
08720c72 +0x172:  movl   $"",0x1c(%edx)
08720c79 +0x179:  mov    0x1c(%edx),%eax
08720c7c +0x17c:  mov    %edx,-0x50(%ebp)
08720c7f +0x17f:  mov    %eax,(%esp)
08720c82 +0x182:  call   0807e130 <_init+0xa28>
08720c87 +0x187:  mov    -0x50(%ebp),%edx
08720c8a +0x18a:  mov    %eax,0x20(%edx)
08720c8d +0x18d:  mov    %ebx,0x4(%esp)
08720c91 +0x191:  movl   $0x40010,(%esp)
08720c98 +0x198:  call   0807de10 <_init+0x708>
08720c9d +0x19d:  movsbl (%eax),%eax
08720ca0 +0x1a0:  mov    %ebx,0x4(%esp)
08720ca4 +0x1a4:  movl   $0x40011,(%esp)
08720cab +0x1ab:  mov    %eax,-0x44(%ebp)
08720cae +0x1ae:  call   0807de10 <_init+0x708>
08720cb3 +0x1b3:  movsbl (%eax),%eax
08720cb6 +0x1b6:  mov    %ebx,0x4(%esp)
08720cba +0x1ba:  movl   $0x40014,(%esp)
08720cc1 +0x1c1:  mov    %eax,-0x40(%ebp)
08720cc4 +0x1c4:  call   0807de10 <_init+0x708>
08720cc9 +0x1c9:  mov    0x8(%esi),%ecx
08720ccc +0x1cc:  lea    -0x3c(%ebp),%edx
08720ccf +0x1cf:  movsbl (%eax),%eax
08720cd2 +0x1d2:  mov    %edx,(%esp)
08720cd5 +0x1d5:  mov    %edx,-0x50(%ebp)
08720cd8 +0x1d8:  mov    %ecx,-0x54(%ebp)
08720cdb +0x1db:  mov    %eax,0xc(%esp)
08720cdf +0x1df:  mov    -0x40(%ebp),%eax
08720ce2 +0x1e2:  mov    %eax,0x8(%esp)
08720ce6 +0x1e6:  mov    -0x44(%ebp),%eax
08720ce9 +0x1e9:  mov    %eax,0x4(%esp)
08720ced +0x1ed:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
08720cf2 +0x1f2:  mov    -0x54(%ebp),%ecx
08720cf5 +0x1f5:  mov    -0x3c(%ebp),%eax
08720cf8 +0x1f8:  mov    %eax,0x38(%ecx)
08720cfb +0x1fb:  sub    $0x4,%esp
08720cfe +0x1fe:  mov    %ebx,0x4(%esp)
08720d02 +0x202:  movl   $0x40012,(%esp)
08720d09 +0x209:  call   0807de10 <_init+0x708>
08720d0e +0x20e:  movsbl (%eax),%eax
08720d11 +0x211:  mov    %ebx,0x4(%esp)
08720d15 +0x215:  movl   $0x40013,(%esp)
08720d1c +0x21c:  mov    %eax,-0x40(%ebp)
08720d1f +0x21f:  call   0807de10 <_init+0x708>
08720d24 +0x224:  mov    %edi,%ecx
08720d26 +0x226:  mov    0x8(%esi),%ebx
08720d29 +0x229:  movsbl %cl,%edi
08720d2c +0x22c:  mov    -0x50(%ebp),%edx
08720d2f +0x22f:  mov    %edi,0xc(%esp)
08720d33 +0x233:  movsbl (%eax),%eax
08720d36 +0x236:  mov    %edx,(%esp)
08720d39 +0x239:  mov    %eax,0x8(%esp)
08720d3d +0x23d:  mov    -0x40(%ebp),%eax
08720d40 +0x240:  mov    %eax,0x4(%esp)
08720d44 +0x244:  call   0871fa80 <_ZNSt10money_base20_S_construct_patternEccc>  ; std::money_base::_S_construct_pattern(char, char, char)
08720d49 +0x249:  mov    -0x3c(%ebp),%eax
08720d4c +0x24c:  mov    %eax,0x3c(%ebx)
08720d4f +0x24f:  mov    -0x4c(%ebp),%eax
08720d52 +0x252:  sub    $0x4,%esp
08720d55 +0x255:  mov    %eax,(%esp)
08720d58 +0x258:  call   0807de70 <_init+0x768>
08720d5d +0x25d:  mov    -0x1c(%ebp),%eax
08720d60 +0x260:  xor    %gs:0x14,%eax
08720d67 +0x267:  jne    08720ffe <+0x4fe>
08720d6d +0x26d:  lea    -0xc(%ebp),%esp
08720d70 +0x270:  pop    %ebx
08720d71 +0x271:  pop    %esi
08720d72 +0x272:  pop    %edi
08720d73 +0x273:  pop    %ebp
08720d74 +0x274:  ret
08720d75 +0x275:  lea    0x0(%esi),%esi
08720d78 +0x278:  mov    %edx,-0x50(%ebp)
08720d7b +0x27b:  mov    %ebx,0x4(%esp)
08720d7f +0x27f:  movl   $0x40004,(%esp)
08720d86 +0x286:  call   0807de10 <_init+0x708>
08720d8b +0x28b:  mov    -0x50(%ebp),%edx
08720d8e +0x28e:  mov    %eax,0x8(%edx)
08720d91 +0x291:  mov    0x8(%esi),%edx
08720d94 +0x294:  mov    0x8(%edx),%eax
08720d97 +0x297:  mov    %edx,-0x50(%ebp)
08720d9a +0x29a:  mov    %eax,(%esp)
08720d9d +0x29d:  call   0807e3b0 <_init+0xca8>
08720da2 +0x2a2:  mov    -0x50(%ebp),%edx
08720da5 +0x2a5:  mov    %eax,0xc(%edx)
08720da8 +0x2a8:  mov    0x14(%edx),%eax
08720dab +0x2ab:  test   %eax,%eax
08720dad +0x2ad:  je     08720b90 <+0x90>
08720db3 +0x2b3:  mov    %edx,-0x50(%ebp)
08720db6 +0x2b6:  mov    %ebx,0x4(%esp)
08720dba +0x2ba:  movl   $0x40007,(%esp)
08720dc1 +0x2c1:  call   0807de10 <_init+0x708>
08720dc6 +0x2c6:  mov    -0x50(%ebp),%edx
08720dc9 +0x2c9:  movsbl (%eax),%eax
08720dcc +0x2cc:  mov    %eax,0x34(%edx)
08720dcf +0x2cf:  jmp    08720b9e <+0x9e>
08720dd4 +0x2d4:  lea    0x0(%esi,%eiz,1),%esi
08720dd8 +0x2d8:  test   %eax,%eax
08720dda +0x2da:  jne    08720f18 <+0x418>
08720de0 +0x2e0:  movl   $"",0x2c(%edx)
08720de7 +0x2e7:  jmp    08720c48 <+0x148>
08720dec +0x2ec:  lea    0x0(%esi,%eiz,1),%esi
08720df0 +0x2f0:  mov    0x8(%esi),%eax
08720df3 +0x2f3:  mov    &_ZNSt10money_base18_S_default_patternE,%edx
08720df9 +0x2f9:  mov    &_ZNSt10money_base8_S_atomsE,%ebx
08720dff +0x2ff:  movl   $0x2e,0x14(%eax)
08720e06 +0x306:  mov    %edx,0x38(%eax)
08720e09 +0x309:  movl   $0x2c,0x18(%eax)
08720e10 +0x310:  movl   $&data#2fb52a47(.rodata),0x8(%eax)
08720e17 +0x317:  movl   $0x0,0xc(%eax)
08720e1e +0x31e:  movb   $0x0,0x10(%eax)
08720e22 +0x322:  movl   $"",0x1c(%eax)
08720e29 +0x329:  movl   $0x0,0x20(%eax)
08720e30 +0x330:  movl   $"",0x24(%eax)
08720e37 +0x337:  movl   $0x0,0x28(%eax)
08720e3e +0x33e:  movl   $"",0x2c(%eax)
08720e45 +0x345:  movl   $0x0,0x30(%eax)
08720e4c +0x34c:  movl   $0x0,0x34(%eax)
08720e53 +0x353:  mov    0x8(%esi),%eax
08720e56 +0x356:  mov    %edx,0x3c(%eax)
08720e59 +0x359:  mov    0x8(%esi),%ecx
08720e5c +0x35c:  xor    %eax,%eax
08720e5e +0x35e:  xchg   %ax,%ax
08720e60 +0x360:  movsbl (%ebx,%eax,1),%edx
08720e64 +0x364:  mov    %edx,0x40(%ecx,%eax,4)
08720e68 +0x368:  add    $0x1,%eax
08720e6b +0x36b:  cmp    $0xb,%eax
08720e6e +0x36e:  jne    08720e60 <+0x360>
08720e70 +0x370:  jmp    08720d5d <+0x25d>
08720e75 +0x375:  lea    0x0(%esi),%esi
08720e78 +0x378:  add    $0x1,%eax
08720e7b +0x37b:  mov    %eax,-0x48(%ebp)
08720e7e +0x37e:  shl    $0x2,%eax
08720e81 +0x381:  movl   $0x0,-0x24(%ebp)
08720e88 +0x388:  movl   $0x0,-0x20(%ebp)
08720e8f +0x38f:  mov    %eax,(%esp)
08720e92 +0x392:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08720e97 +0x397:  mov    %eax,%ecx
08720e99 +0x399:  lea    -0x24(%ebp),%eax
08720e9c +0x39c:  mov    %eax,0xc(%esp)
08720ea0 +0x3a0:  mov    -0x48(%ebp),%eax
08720ea3 +0x3a3:  mov    %ecx,(%esp)
08720ea6 +0x3a6:  mov    %ecx,-0x54(%ebp)
08720ea9 +0x3a9:  mov    %eax,0x8(%esp)
08720ead +0x3ad:  lea    -0x30(%ebp),%eax
08720eb0 +0x3b0:  mov    %eax,0x4(%esp)
08720eb4 +0x3b4:  call   0807df10 <_init+0x808>
08720eb9 +0x3b9:  mov    0x8(%esi),%edx
08720ebc +0x3bc:  mov    -0x54(%ebp),%ecx
08720ebf +0x3bf:  mov    %ecx,0x1c(%edx)
08720ec2 +0x3c2:  jmp    08720c79 <+0x179>
08720ec7 +0x3c7:  nop
08720ec8 +0x3c8:  add    $0x1,%eax
08720ecb +0x3cb:  mov    %eax,-0x48(%ebp)
08720ece +0x3ce:  shl    $0x2,%eax
08720ed1 +0x3d1:  movl   $0x0,-0x24(%ebp)
08720ed8 +0x3d8:  movl   $0x0,-0x20(%ebp)
08720edf +0x3df:  mov    %eax,(%esp)
08720ee2 +0x3e2:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08720ee7 +0x3e7:  mov    %eax,-0x40(%ebp)
08720eea +0x3ea:  lea    -0x24(%ebp),%eax
08720eed +0x3ed:  mov    -0x48(%ebp),%ecx
08720ef0 +0x3f0:  mov    %eax,0xc(%esp)
08720ef4 +0x3f4:  lea    -0x28(%ebp),%eax
08720ef7 +0x3f7:  mov    %eax,0x4(%esp)
08720efb +0x3fb:  mov    -0x40(%ebp),%eax
08720efe +0x3fe:  mov    %ecx,0x8(%esp)
08720f02 +0x402:  mov    %eax,(%esp)
08720f05 +0x405:  call   0807df10 <_init+0x808>
08720f0a +0x40a:  mov    0x8(%esi),%edx
08720f0d +0x40d:  mov    -0x40(%ebp),%ecx
08720f10 +0x410:  mov    %ecx,0x24(%edx)
08720f13 +0x413:  jmp    08720c15 <+0x115>
08720f18 +0x418:  add    $0x1,%eax
08720f1b +0x41b:  mov    %eax,-0x48(%ebp)
08720f1e +0x41e:  shl    $0x2,%eax
08720f21 +0x421:  movl   $0x0,-0x24(%ebp)
08720f28 +0x428:  movl   $0x0,-0x20(%ebp)
08720f2f +0x42f:  mov    %eax,(%esp)
08720f32 +0x432:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08720f37 +0x437:  mov    %eax,-0x44(%ebp)
08720f3a +0x43a:  lea    -0x24(%ebp),%eax
08720f3d +0x43d:  mov    -0x44(%ebp),%ecx
08720f40 +0x440:  mov    %eax,0xc(%esp)
08720f44 +0x444:  mov    -0x48(%ebp),%eax
08720f47 +0x447:  mov    %ecx,(%esp)
08720f4a +0x44a:  mov    %eax,0x8(%esp)
08720f4e +0x44e:  lea    -0x2c(%ebp),%eax
08720f51 +0x451:  mov    %eax,0x4(%esp)
08720f55 +0x455:  call   0807df10 <_init+0x808>
08720f5a +0x45a:  mov    0x8(%esi),%edx
08720f5d +0x45d:  mov    -0x44(%ebp),%eax
08720f60 +0x460:  mov    %eax,0x2c(%edx)
08720f63 +0x463:  jmp    08720c48 <+0x148>
08720f68 +0x468:  movl   $0x70,(%esp)
08720f6f +0x46f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08720f74 +0x474:  movb   $0x0,0x38(%eax)
08720f78 +0x478:  movb   $0x0,0x39(%eax)
08720f7c +0x47c:  movb   $0x0,0x3a(%eax)
08720f80 +0x480:  movb   $0x0,0x3b(%eax)
08720f84 +0x484:  movb   $0x0,0x3c(%eax)
08720f88 +0x488:  movb   $0x0,0x3d(%eax)
08720f8c +0x48c:  movb   $0x0,0x3e(%eax)
08720f90 +0x490:  movb   $0x0,0x3f(%eax)
08720f94 +0x494:  movl   $0x0,0x4(%eax)
08720f9b +0x49b:  movl   $&_ZTVSt18__moneypunct_cacheIwLb1EE+0x8,(%eax)
08720fa1 +0x4a1:  movl   $0x0,0x8(%eax)
08720fa8 +0x4a8:  movl   $0x0,0xc(%eax)
08720faf +0x4af:  movb   $0x0,0x10(%eax)
08720fb3 +0x4b3:  movl   $0x0,0x14(%eax)
08720fba +0x4ba:  movl   $0x0,0x18(%eax)
08720fc1 +0x4c1:  movl   $0x0,0x1c(%eax)
08720fc8 +0x4c8:  movl   $0x0,0x20(%eax)
08720fcf +0x4cf:  movl   $0x0,0x24(%eax)
08720fd6 +0x4d6:  movl   $0x0,0x28(%eax)
08720fdd +0x4dd:  movl   $0x0,0x2c(%eax)
08720fe4 +0x4e4:  movl   $0x0,0x30(%eax)
08720feb +0x4eb:  movl   $0x0,0x34(%eax)
08720ff2 +0x4f2:  movb   $0x0,0x6c(%eax)
08720ff6 +0x4f6:  mov    %eax,0x8(%esi)
08720ff9 +0x4f9:  jmp    08720b25 <+0x25>
08720ffe +0x4fe:  call   0807d980 <_init+0x278>
08721003 +0x503:  mov    %eax,(%esp)
08721006 +0x506:  call   08725ce0 <__cxa_begin_catch>
0872100b +0x50b:  mov    0x8(%esi),%eax
0872100e +0x50e:  test   %eax,%eax
08721010 +0x510:  je     0872101a <+0x51a>
08721012 +0x512:  mov    (%eax),%edx
08721014 +0x514:  mov    %eax,(%esp)
08721017 +0x517:  call   *0x4(%edx)
0872101a +0x51a:  cmpl   $0x0,-0x40(%ebp)
0872101e +0x51e:  movl   $0x0,0x8(%esi)
08721025 +0x525:  je     08721032 <+0x532>
08721027 +0x527:  mov    -0x40(%ebp),%ecx
0872102a +0x52a:  mov    %ecx,(%esp)
0872102d +0x52d:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08721032 +0x532:  cmpl   $0x0,-0x44(%ebp)
08721036 +0x536:  je     08721043 <+0x543>
08721038 +0x538:  mov    -0x44(%ebp),%eax
0872103b +0x53b:  mov    %eax,(%esp)
0872103e +0x53e:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08721043 +0x543:  mov    -0x4c(%ebp),%ecx
08721046 +0x546:  mov    %ecx,(%esp)
08721049 +0x549:  call   0807de70 <_init+0x768>
0872104e +0x54e:  call   08724be0 <__cxa_rethrow>
08721053 +0x553:  mov    %eax,%ebx
08721055 +0x555:  call   08725c30 <__cxa_end_catch>
0872105a +0x55a:  mov    %ebx,(%esp)
0872105d +0x55d:  call   08ae3750 <_Unwind_Resume>
08721062 +0x562:  nop
08721063 +0x563:  nop
08721064 +0x564:  nop
08721065 +0x565:  nop
08721066 +0x566:  nop
08721067 +0x567:  nop
08721068 +0x568:  nop
08721069 +0x569:  nop
0872106a +0x56a:  nop
0872106b +0x56b:  nop
0872106c +0x56c:  nop
0872106d +0x56d:  nop
0872106e +0x56e:  nop
0872106f +0x56f:  nop
```

## 反编译 C

```c
// std::moneypunct<wchar_t, @ 0x8720b00

/* std::moneypunct<wchar_t, true>::_M_initialize_moneypunct(__locale_struct*, char const*) */

void std::moneypunct<wchar_t,true>::_M_initialize_moneypunct(__locale_struct *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  __locale_data *p_Var11;
  int in_GS_OFFSET;
  undefined4 local_40 [3];
  char *local_34;
  char *local_30;
  char *local_2c;
  mbstate_t local_28;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  if (param_1->__locales[2] == (__locale_data *)0x0) {
    p_Var11 = operator_new(0x70);
    p_Var11[0x38] = (__locale_data)0x0;
    p_Var11[0x39] = (__locale_data)0x0;
    p_Var11[0x3a] = (__locale_data)0x0;
    p_Var11[0x3b] = (__locale_data)0x0;
    p_Var11[0x3c] = (__locale_data)0x0;
    p_Var11[0x3d] = (__locale_data)0x0;
    p_Var11[0x3e] = (__locale_data)0x0;
    p_Var11[0x3f] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 4) = 0;
    *(undefined ***)p_Var11 = &PTR____moneypunct_cache_08d006a8;
    *(undefined4 *)(p_Var11 + 8) = 0;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 0x14) = 0;
    *(undefined4 *)(p_Var11 + 0x18) = 0;
    *(undefined4 *)(p_Var11 + 0x1c) = 0;
    *(undefined4 *)(p_Var11 + 0x20) = 0;
    *(undefined4 *)(p_Var11 + 0x24) = 0;
    *(undefined4 *)(p_Var11 + 0x28) = 0;
    *(undefined4 *)(p_Var11 + 0x2c) = 0;
    *(undefined4 *)(p_Var11 + 0x30) = 0;
    *(undefined4 *)(p_Var11 + 0x34) = 0;
    p_Var11[0x6c] = (__locale_data)0x0;
    param_1->__locales[2] = p_Var11;
  }
  puVar4 = money_base::_S_atoms;
  uVar5 = money_base::_S_default_pattern;
  if (param_2 == (char *)0x0) {
    p_Var11 = param_1->__locales[2];
    *(undefined4 *)(p_Var11 + 0x14) = 0x2e;
    *(undefined4 *)(p_Var11 + 0x38) = uVar5;
    *(undefined4 *)(p_Var11 + 0x18) = 0x2c;
    *(undefined1 **)(p_Var11 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined **)(p_Var11 + 0x1c) = &DAT_08d01188;
    *(undefined4 *)(p_Var11 + 0x20) = 0;
    *(undefined **)(p_Var11 + 0x24) = &DAT_08d01188;
    *(undefined4 *)(p_Var11 + 0x28) = 0;
    *(undefined **)(p_Var11 + 0x2c) = &DAT_08d01188;
    *(undefined4 *)(p_Var11 + 0x30) = 0;
    *(undefined4 *)(p_Var11 + 0x34) = 0;
    *(undefined4 *)(param_1->__locales[2] + 0x3c) = uVar5;
    p_Var11 = param_1->__locales[2];
    iVar7 = 0;
    do {
      *(int *)(p_Var11 + iVar7 * 4 + 0x40) = (int)(char)puVar4[iVar7];
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0xb);
    goto LAB_08720d5d;
  }
  uVar5 = __uselocale(param_2);
  uVar6 = __nl_langinfo_l(0x4002b,param_2);
  *(undefined4 *)(param_1->__locales[2] + 0x14) = uVar6;
  iVar7 = __nl_langinfo_l(0x4002c,param_2);
  p_Var11 = param_1->__locales[2];
  *(int *)(p_Var11 + 0x18) = iVar7;
  if (iVar7 == 0) {
    *(undefined1 **)(p_Var11 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(p_Var11 + 0xc) = 0;
    p_Var11[0x10] = (__locale_data)0x0;
    *(undefined4 *)(p_Var11 + 0x18) = 0x2c;
    if (*(int *)(p_Var11 + 0x14) != 0) goto LAB_08720db3;
LAB_08720b90:
    *(undefined4 *)(p_Var11 + 0x34) = 0;
    *(undefined4 *)(p_Var11 + 0x14) = 0x2e;
  }
  else {
    uVar6 = __nl_langinfo_l(0x40004,param_2);
    *(undefined4 *)(p_Var11 + 8) = uVar6;
    p_Var11 = param_1->__locales[2];
    sVar9 = strlen(*(char **)(p_Var11 + 8));
    *(size_t *)(p_Var11 + 0xc) = sVar9;
    if (*(int *)(p_Var11 + 0x14) == 0) goto LAB_08720b90;
LAB_08720db3:
    pcVar8 = (char *)__nl_langinfo_l(0x40007,param_2);
    *(int *)(p_Var11 + 0x34) = (int)*pcVar8;
  }
  local_2c = (char *)__nl_langinfo_l(0x40005,param_2);
  local_30 = (char *)__nl_langinfo_l(0x40006,param_2);
  local_34 = (char *)__nl_langinfo_l(0x40000,param_2);
  pcVar8 = (char *)__nl_langinfo_l(0x40015,param_2);
  cVar1 = *pcVar8;
  sVar9 = strlen(local_2c);
  if (sVar9 == 0) {
    p_Var11 = param_1->__locales[2];
    *(undefined **)(p_Var11 + 0x24) = &DAT_08d01188;
  }
  else {
    local_28.__count = 0;
    local_28.__value.__wch = 0;
    pwVar10 = operator_new__((sVar9 + 1) * 4);
    mbsrtowcs(pwVar10,&local_2c,sVar9 + 1,&local_28);
    p_Var11 = param_1->__locales[2];
    *(wchar_t **)(p_Var11 + 0x24) = pwVar10;
  }
  sVar9 = wcslen(*(wchar_t **)(p_Var11 + 0x24));
  *(size_t *)(p_Var11 + 0x28) = sVar9;
  sVar9 = strlen(local_30);
  if (cVar1 == '\0') {
    *(undefined **)(p_Var11 + 0x2c) = &DAT_08d01180;
  }
  else if (sVar9 == 0) {
    *(undefined **)(p_Var11 + 0x2c) = &DAT_08d01188;
  }
  else {
    local_28.__count = 0;
    local_28.__value.__wch = 0;
    pwVar10 = operator_new__((sVar9 + 1) * 4);
    mbsrtowcs(pwVar10,&local_30,sVar9 + 1,&local_28);
    p_Var11 = param_1->__locales[2];
    *(wchar_t **)(p_Var11 + 0x2c) = pwVar10;
  }
  sVar9 = wcslen(*(wchar_t **)(p_Var11 + 0x2c));
  *(size_t *)(p_Var11 + 0x30) = sVar9;
  sVar9 = strlen(local_34);
  if (sVar9 == 0) {
    *(undefined **)(p_Var11 + 0x1c) = &DAT_08d01188;
  }
  else {
    local_28.__count = 0;
    local_28.__value.__wch = 0;
                    /* try { // try from 08720e92 to 08720f36 has its CatchHandler @ 08721003 */
    pwVar10 = operator_new__((sVar9 + 1) * 4);
    mbsrtowcs(pwVar10,&local_34,sVar9 + 1,&local_28);
    p_Var11 = param_1->__locales[2];
    *(wchar_t **)(p_Var11 + 0x1c) = pwVar10;
  }
  sVar9 = wcslen(*(wchar_t **)(p_Var11 + 0x1c));
  *(size_t *)(p_Var11 + 0x20) = sVar9;
  pcVar8 = (char *)__nl_langinfo_l(0x40010,param_2);
  cVar2 = *pcVar8;
  pcVar8 = (char *)__nl_langinfo_l(0x40011,param_2);
  cVar3 = *pcVar8;
  pcVar8 = (char *)__nl_langinfo_l(0x40014,param_2);
  p_Var11 = param_1->__locales[2];
  money_base::_S_construct_pattern((money_base *)local_40,cVar2,cVar3,*pcVar8);
  *(undefined4 *)(p_Var11 + 0x38) = local_40[0];
  pcVar8 = (char *)__nl_langinfo_l(0x40012,param_2);
  cVar2 = *pcVar8;
  pcVar8 = (char *)__nl_langinfo_l(0x40013,param_2);
  p_Var11 = param_1->__locales[2];
  money_base::_S_construct_pattern((money_base *)local_40,cVar2,*pcVar8,cVar1);
  *(undefined4 *)(p_Var11 + 0x3c) = local_40[0];
  __uselocale(uVar5);
LAB_08720d5d:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}
```
