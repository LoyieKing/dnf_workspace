# CCharacInformNotice

`_GLOBAL__I__ZN19CCharacInformNoticeC2Ev`

`global constructors keyed to CCharacInformNotice::CCharacInformNotice()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCharacInformNotice` | `0x080e4cda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4cda  _GLOBAL__I__ZN19CCharacInformNoticeC2Ev
#           global constructors keyed to CCharacInformNotice::CCharacInformNotice()
# range [0x080e4cda, 0x080e52b3]
080e4cda +0x000:  push   %ebp
080e4cdb +0x001:  mov    %esp,%ebp
080e4cdd +0x003:  sub    $0x18,%esp
080e4ce0 +0x006:  movl   $0xffff,0x4(%esp)
080e4ce8 +0x00e:  movl   $0x1,(%esp)
080e4cef +0x015:  call   080e4c9a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080e4cf4 +0x01a:  leave
080e4cf5 +0x01b:  ret
080e4cf6 +0x01c:  push   %ebp
080e4cf7 +0x01d:  mov    %esp,%ebp
080e4cf9 +0x01f:  sub    $0x18,%esp
080e4cfc +0x022:  mov    0x8(%ebp),%eax
080e4cff +0x025:  mov    (%eax),%eax
080e4d01 +0x027:  mov    %eax,0x4(%esp)
080e4d05 +0x02b:  mov    0x8(%ebp),%eax
080e4d08 +0x02e:  mov    %eax,(%esp)
080e4d0b +0x031:  call   080e4dd4 <+0xfa>
080e4d10 +0x036:  leave
080e4d11 +0x037:  ret
080e4d12 +0x038:  push   %ebp
080e4d13 +0x039:  mov    %esp,%ebp
080e4d15 +0x03b:  sub    $0x18,%esp
080e4d18 +0x03e:  mov    0x8(%ebp),%eax
080e4d1b +0x041:  mov    %eax,(%esp)
080e4d1e +0x044:  call   080e4e1e <+0x144>
080e4d23 +0x049:  leave
080e4d24 +0x04a:  ret
080e4d25 +0x04b:  nop
080e4d26 +0x04c:  push   %ebp
080e4d27 +0x04d:  mov    %esp,%ebp
080e4d29 +0x04f:  push   %esi
080e4d2a +0x050:  push   %ebx
080e4d2b +0x051:  sub    $0x10,%esp
080e4d2e +0x054:  mov    0x8(%ebp),%eax
080e4d31 +0x057:  mov    %eax,(%esp)
080e4d34 +0x05a:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
080e4d39 +0x05f:  mov    0x8(%ebp),%edx
080e4d3c +0x062:  mov    0x4(%edx),%ecx
080e4d3f +0x065:  mov    0x8(%ebp),%edx
080e4d42 +0x068:  mov    (%edx),%edx
080e4d44 +0x06a:  mov    %eax,0x8(%esp)
080e4d48 +0x06e:  mov    %ecx,0x4(%esp)
080e4d4c +0x072:  mov    %edx,(%esp)
080e4d4f +0x075:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
080e4d54 +0x07a:  jmp    080e4d71 <+0x97>
080e4d56 +0x07c:  mov    %edx,%ebx
080e4d58 +0x07e:  mov    %eax,%esi
080e4d5a +0x080:  mov    0x8(%ebp),%eax
080e4d5d +0x083:  mov    %eax,(%esp)
080e4d60 +0x086:  call   080e4e32 <+0x158>
080e4d65 +0x08b:  mov    %esi,%eax
080e4d67 +0x08d:  mov    %ebx,%edx
080e4d69 +0x08f:  mov    %eax,(%esp)
080e4d6c +0x092:  call   08ae3750 <_Unwind_Resume>
080e4d71 +0x097:  mov    0x8(%ebp),%eax
080e4d74 +0x09a:  mov    %eax,(%esp)
080e4d77 +0x09d:  call   080e4e32 <+0x158>
080e4d7c +0x0a2:  add    $0x10,%esp
080e4d7f +0x0a5:  pop    %ebx
080e4d80 +0x0a6:  pop    %esi
080e4d81 +0x0a7:  pop    %ebp
080e4d82 +0x0a8:  ret
080e4d83 +0x0a9:  nop
080e4d84 +0x0aa:  push   %ebp
080e4d85 +0x0ab:  mov    %esp,%ebp
080e4d87 +0x0ad:  sub    $0x28,%esp
080e4d8a +0x0b0:  mov    0xc(%ebp),%eax
080e4d8d +0x0b3:  mov    %eax,(%esp)
080e4d90 +0x0b6:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
080e4d95 +0x0bb:  movzbl (%eax),%eax
080e4d98 +0x0be:  mov    %al,-0x9(%ebp)
080e4d9b +0x0c1:  lea    -0x9(%ebp),%eax
080e4d9e +0x0c4:  mov    %eax,0x4(%esp)
080e4da2 +0x0c8:  mov    0x8(%ebp),%eax
080e4da5 +0x0cb:  mov    %eax,(%esp)
080e4da8 +0x0ce:  call   080e4e96 <+0x1bc>
080e4dad +0x0d3:  leave
080e4dae +0x0d4:  ret
080e4daf +0x0d5:  nop
080e4db0 +0x0d6:  push   %ebp
080e4db1 +0x0d7:  mov    %esp,%ebp
080e4db3 +0x0d9:  mov    0x8(%ebp),%eax
080e4db6 +0x0dc:  mov    (%eax),%eax
080e4db8 +0x0de:  add    0xc(%ebp),%eax
080e4dbb +0x0e1:  pop    %ebp
080e4dbc +0x0e2:  ret
080e4dbd +0x0e3:  nop
080e4dbe +0x0e4:  push   %ebp
080e4dbf +0x0e5:  mov    %esp,%ebp
080e4dc1 +0x0e7:  sub    $0x18,%esp
080e4dc4 +0x0ea:  mov    0x8(%ebp),%eax
080e4dc7 +0x0ed:  mov    (%eax),%eax
080e4dc9 +0x0ef:  mov    %eax,(%esp)
080e4dcc +0x0f2:  call   080e4f2c <+0x252>
080e4dd1 +0x0f7:  leave
080e4dd2 +0x0f8:  ret
080e4dd3 +0x0f9:  nop
080e4dd4 +0x0fa:  push   %ebp
080e4dd5 +0x0fb:  mov    %esp,%ebp
080e4dd7 +0x0fd:  sub    $0x18,%esp
080e4dda +0x100:  mov    0x8(%ebp),%eax
080e4ddd +0x103:  mov    %eax,(%esp)
080e4de0 +0x106:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
080e4de5 +0x10b:  mov    0x8(%ebp),%edx
080e4de8 +0x10e:  mov    0x4(%edx),%edx
080e4deb +0x111:  mov    %eax,0x8(%esp)
080e4def +0x115:  mov    %edx,0x4(%esp)
080e4df3 +0x119:  mov    0xc(%ebp),%eax
080e4df6 +0x11c:  mov    %eax,(%esp)
080e4df9 +0x11f:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
080e4dfe +0x124:  mov    0x8(%ebp),%eax
080e4e01 +0x127:  mov    0xc(%ebp),%edx
080e4e04 +0x12a:  mov    %edx,0x4(%eax)
080e4e07 +0x12d:  leave
080e4e08 +0x12e:  ret
080e4e09 +0x12f:  nop
080e4e0a +0x130:  push   %ebp
080e4e0b +0x131:  mov    %esp,%ebp
080e4e0d +0x133:  sub    $0x18,%esp
080e4e10 +0x136:  mov    0x8(%ebp),%eax
080e4e13 +0x139:  mov    %eax,(%esp)
080e4e16 +0x13c:  call   080e4fc6 <+0x2ec>
080e4e1b +0x141:  leave
080e4e1c +0x142:  ret
080e4e1d +0x143:  nop
080e4e1e +0x144:  push   %ebp
080e4e1f +0x145:  mov    %esp,%ebp
080e4e21 +0x147:  sub    $0x18,%esp
080e4e24 +0x14a:  mov    0x8(%ebp),%eax
080e4e27 +0x14d:  mov    %eax,(%esp)
080e4e2a +0x150:  call   080e4f96 <+0x2bc>
080e4e2f +0x155:  leave
080e4e30 +0x156:  ret
080e4e31 +0x157:  nop
080e4e32 +0x158:  push   %ebp
080e4e33 +0x159:  mov    %esp,%ebp
080e4e35 +0x15b:  push   %esi
080e4e36 +0x15c:  push   %ebx
080e4e37 +0x15d:  sub    $0x10,%esp
080e4e3a +0x160:  mov    0x8(%ebp),%eax
080e4e3d +0x163:  mov    0x8(%eax),%eax
080e4e40 +0x166:  mov    %eax,%edx
080e4e42 +0x168:  mov    0x8(%ebp),%eax
080e4e45 +0x16b:  mov    (%eax),%eax
080e4e47 +0x16d:  mov    %edx,%ecx
080e4e49 +0x16f:  sub    %eax,%ecx
080e4e4b +0x171:  mov    %ecx,%eax
080e4e4d +0x173:  mov    %eax,%edx
080e4e4f +0x175:  mov    0x8(%ebp),%eax
080e4e52 +0x178:  mov    (%eax),%eax
080e4e54 +0x17a:  mov    %edx,0x8(%esp)
080e4e58 +0x17e:  mov    %eax,0x4(%esp)
080e4e5c +0x182:  mov    0x8(%ebp),%eax
080e4e5f +0x185:  mov    %eax,(%esp)
080e4e62 +0x188:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
080e4e67 +0x18d:  jmp    080e4e84 <+0x1aa>
080e4e69 +0x18f:  mov    %edx,%ebx
080e4e6b +0x191:  mov    %eax,%esi
080e4e6d +0x193:  mov    0x8(%ebp),%eax
080e4e70 +0x196:  mov    %eax,(%esp)
080e4e73 +0x199:  call   080e4e0a <+0x130>
080e4e78 +0x19e:  mov    %esi,%eax
080e4e7a +0x1a0:  mov    %ebx,%edx
080e4e7c +0x1a2:  mov    %eax,(%esp)
080e4e7f +0x1a5:  call   08ae3750 <_Unwind_Resume>
080e4e84 +0x1aa:  mov    0x8(%ebp),%eax
080e4e87 +0x1ad:  mov    %eax,(%esp)
080e4e8a +0x1b0:  call   080e4e0a <+0x130>
080e4e8f +0x1b5:  add    $0x10,%esp
080e4e92 +0x1b8:  pop    %ebx
080e4e93 +0x1b9:  pop    %esi
080e4e94 +0x1ba:  pop    %ebp
080e4e95 +0x1bb:  ret
080e4e96 +0x1bc:  push   %ebp
080e4e97 +0x1bd:  mov    %esp,%ebp
080e4e99 +0x1bf:  sub    $0x28,%esp
080e4e9c +0x1c2:  mov    0x8(%ebp),%eax
080e4e9f +0x1c5:  mov    0x4(%eax),%edx
080e4ea2 +0x1c8:  mov    0x8(%ebp),%eax
080e4ea5 +0x1cb:  mov    0x8(%eax),%eax
080e4ea8 +0x1ce:  cmp    %eax,%edx
080e4eaa +0x1d0:  je     080e4eea <+0x210>
080e4eac +0x1d2:  mov    0xc(%ebp),%eax
080e4eaf +0x1d5:  mov    %eax,(%esp)
080e4eb2 +0x1d8:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
080e4eb7 +0x1dd:  movzbl (%eax),%eax
080e4eba +0x1e0:  mov    %al,-0xe(%ebp)
080e4ebd +0x1e3:  mov    0x8(%ebp),%eax
080e4ec0 +0x1e6:  mov    0x4(%eax),%edx
080e4ec3 +0x1e9:  mov    0x8(%ebp),%eax
080e4ec6 +0x1ec:  lea    -0xe(%ebp),%ecx
080e4ec9 +0x1ef:  mov    %ecx,0x8(%esp)
080e4ecd +0x1f3:  mov    %edx,0x4(%esp)
080e4ed1 +0x1f7:  mov    %eax,(%esp)
080e4ed4 +0x1fa:  call   0807f2e0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3b0>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3b0
080e4ed9 +0x1ff:  mov    0x8(%ebp),%eax
080e4edc +0x202:  mov    0x4(%eax),%eax
080e4edf +0x205:  lea    0x1(%eax),%edx
080e4ee2 +0x208:  mov    0x8(%ebp),%eax
080e4ee5 +0x20b:  mov    %edx,0x4(%eax)
080e4ee8 +0x20e:  jmp    080e4f29 <+0x24f>
080e4eea +0x210:  mov    0xc(%ebp),%eax
080e4eed +0x213:  mov    %eax,(%esp)
080e4ef0 +0x216:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
080e4ef5 +0x21b:  movzbl (%eax),%eax
080e4ef8 +0x21e:  mov    %al,-0xd(%ebp)
080e4efb +0x221:  lea    -0xc(%ebp),%eax
080e4efe +0x224:  mov    0x8(%ebp),%edx
080e4f01 +0x227:  mov    %edx,0x4(%esp)
080e4f05 +0x22b:  mov    %eax,(%esp)
080e4f08 +0x22e:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
080e4f0d +0x233:  sub    $0x4,%esp
080e4f10 +0x236:  lea    -0xd(%ebp),%eax
080e4f13 +0x239:  mov    %eax,0x8(%esp)
080e4f17 +0x23d:  mov    -0xc(%ebp),%eax
080e4f1a +0x240:  mov    %eax,0x4(%esp)
080e4f1e +0x244:  mov    0x8(%ebp),%eax
080e4f21 +0x247:  mov    %eax,(%esp)
080e4f24 +0x24a:  call   080e4fda <+0x300>
080e4f29 +0x24f:  leave
080e4f2a +0x250:  ret
080e4f2b +0x251:  nop
080e4f2c +0x252:  push   %ebp
080e4f2d +0x253:  mov    %esp,%ebp
080e4f2f +0x255:  sub    $0x28,%esp
080e4f32 +0x258:  jmp    080e4f50 <+0x276>
080e4f34 +0x25a:  mov    0x8(%ebp),%eax
080e4f37 +0x25d:  mov    %eax,(%esp)
080e4f3a +0x260:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
080e4f3f +0x265:  add    %eax,%eax
080e4f41 +0x267:  mov    %eax,0x4(%esp)
080e4f45 +0x26b:  mov    0x8(%ebp),%eax
080e4f48 +0x26e:  mov    %eax,(%esp)
080e4f4b +0x271:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
080e4f50 +0x276:  movl   $0x14,0x4(%esp)
080e4f58 +0x27e:  mov    0x8(%ebp),%eax
080e4f5b +0x281:  mov    %eax,(%esp)
080e4f5e +0x284:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
080e4f63 +0x289:  xor    $0x1,%eax
080e4f66 +0x28c:  test   %al,%al
080e4f68 +0x28e:  jne    080e4f34 <+0x25a>
080e4f6a +0x290:  mov    0x8(%ebp),%eax
080e4f6d +0x293:  mov    0x8(%eax),%eax
080e4f70 +0x296:  mov    %eax,%edx
080e4f72 +0x298:  mov    0x8(%ebp),%eax
080e4f75 +0x29b:  mov    0xc(%eax),%eax
080e4f78 +0x29e:  lea    (%edx,%eax,1),%eax
080e4f7b +0x2a1:  mov    %eax,-0xc(%ebp)
080e4f7e +0x2a4:  movl   $0x14,0x4(%esp)
080e4f86 +0x2ac:  mov    0x8(%ebp),%eax
080e4f89 +0x2af:  mov    %eax,(%esp)
080e4f8c +0x2b2:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
080e4f91 +0x2b7:  mov    -0xc(%ebp),%eax
080e4f94 +0x2ba:  leave
080e4f95 +0x2bb:  ret
080e4f96 +0x2bc:  push   %ebp
080e4f97 +0x2bd:  mov    %esp,%ebp
080e4f99 +0x2bf:  sub    $0x18,%esp
080e4f9c +0x2c2:  mov    0x8(%ebp),%eax
080e4f9f +0x2c5:  mov    %eax,(%esp)
080e4fa2 +0x2c8:  call   080e5294 <+0x5ba>
080e4fa7 +0x2cd:  mov    0x8(%ebp),%eax
080e4faa +0x2d0:  movl   $0x0,(%eax)
080e4fb0 +0x2d6:  mov    0x8(%ebp),%eax
080e4fb3 +0x2d9:  movl   $0x0,0x4(%eax)
080e4fba +0x2e0:  mov    0x8(%ebp),%eax
080e4fbd +0x2e3:  movl   $0x0,0x8(%eax)
080e4fc4 +0x2ea:  leave
080e4fc5 +0x2eb:  ret
080e4fc6 +0x2ec:  push   %ebp
080e4fc7 +0x2ed:  mov    %esp,%ebp
080e4fc9 +0x2ef:  sub    $0x18,%esp
080e4fcc +0x2f2:  mov    0x8(%ebp),%eax
080e4fcf +0x2f5:  mov    %eax,(%esp)
080e4fd2 +0x2f8:  call   080e52a8 <+0x5ce>
080e4fd7 +0x2fd:  leave
080e4fd8 +0x2fe:  ret
080e4fd9 +0x2ff:  nop
080e4fda +0x300:  push   %ebp
080e4fdb +0x301:  mov    %esp,%ebp
080e4fdd +0x303:  push   %esi
080e4fde +0x304:  push   %ebx
080e4fdf +0x305:  sub    $0x30,%esp
080e4fe2 +0x308:  mov    0x8(%ebp),%eax
080e4fe5 +0x30b:  mov    0x4(%eax),%edx
080e4fe8 +0x30e:  mov    0x8(%ebp),%eax
080e4feb +0x311:  mov    0x8(%eax),%eax
080e4fee +0x314:  cmp    %eax,%edx
080e4ff0 +0x316:  je     080e5089 <+0x3af>
080e4ff6 +0x31c:  mov    0x8(%ebp),%eax
080e4ff9 +0x31f:  mov    0x4(%eax),%eax
080e4ffc +0x322:  sub    $0x1,%eax
080e4fff +0x325:  mov    %eax,(%esp)
080e5002 +0x328:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
080e5007 +0x32d:  movzbl (%eax),%eax
080e500a +0x330:  mov    %al,-0x21(%ebp)
080e500d +0x333:  mov    0x8(%ebp),%eax
080e5010 +0x336:  mov    0x4(%eax),%edx
080e5013 +0x339:  mov    0x8(%ebp),%eax
080e5016 +0x33c:  lea    -0x21(%ebp),%ecx
080e5019 +0x33f:  mov    %ecx,0x8(%esp)
080e501d +0x343:  mov    %edx,0x4(%esp)
080e5021 +0x347:  mov    %eax,(%esp)
080e5024 +0x34a:  call   0807f2e0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3b0>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3b0
080e5029 +0x34f:  mov    0x8(%ebp),%eax
080e502c +0x352:  mov    0x4(%eax),%eax
080e502f +0x355:  lea    0x1(%eax),%edx
080e5032 +0x358:  mov    0x8(%ebp),%eax
080e5035 +0x35b:  mov    %edx,0x4(%eax)
080e5038 +0x35e:  mov    0x8(%ebp),%eax
080e503b +0x361:  mov    0x4(%eax),%eax
080e503e +0x364:  lea    -0x1(%eax),%esi
080e5041 +0x367:  mov    0x8(%ebp),%eax
080e5044 +0x36a:  mov    0x4(%eax),%eax
080e5047 +0x36d:  lea    -0x2(%eax),%ebx
080e504a +0x370:  lea    0xc(%ebp),%eax
080e504d +0x373:  mov    %eax,(%esp)
080e5050 +0x376:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
080e5055 +0x37b:  mov    (%eax),%eax
080e5057 +0x37d:  mov    %esi,0x8(%esp)
080e505b +0x381:  mov    %ebx,0x4(%esp)
080e505f +0x385:  mov    %eax,(%esp)
080e5062 +0x388:  call   0807f31e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3ee>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3ee
080e5067 +0x38d:  lea    0xc(%ebp),%eax
080e506a +0x390:  mov    %eax,(%esp)
080e506d +0x393:  call   0807f35e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x42e>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x42e
080e5072 +0x398:  mov    %eax,%ebx
080e5074 +0x39a:  mov    0x10(%ebp),%eax
080e5077 +0x39d:  mov    %eax,(%esp)
080e507a +0x3a0:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
080e507f +0x3a5:  movzbl (%eax),%eax
080e5082 +0x3a8:  mov    %al,(%ebx)
080e5084 +0x3aa:  jmp    080e5289 <+0x5af>
080e5089 +0x3af:  movl   $"vector::_M_insert_aux",0x8(%esp)
080e5091 +0x3b7:  movl   $0x1,0x4(%esp)
080e5099 +0x3bf:  mov    0x8(%ebp),%eax
080e509c +0x3c2:  mov    %eax,(%esp)
080e509f +0x3c5:  call   0807f368 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x438>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x438
080e50a4 +0x3ca:  mov    %eax,-0x18(%ebp)
080e50a7 +0x3cd:  lea    -0x20(%ebp),%eax
080e50aa +0x3d0:  mov    0x8(%ebp),%edx
080e50ad +0x3d3:  mov    %edx,0x4(%esp)
080e50b1 +0x3d7:  mov    %eax,(%esp)
080e50b4 +0x3da:  call   0807f40e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x4de>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4de
080e50b9 +0x3df:  sub    $0x4,%esp
080e50bc +0x3e2:  lea    -0x20(%ebp),%eax
080e50bf +0x3e5:  mov    %eax,0x4(%esp)
080e50c3 +0x3e9:  lea    0xc(%ebp),%eax
080e50c6 +0x3ec:  mov    %eax,(%esp)
080e50c9 +0x3ef:  call   0807f431 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x501>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x501
080e50ce +0x3f4:  mov    %eax,-0x14(%ebp)
080e50d1 +0x3f7:  mov    0x8(%ebp),%eax
080e50d4 +0x3fa:  mov    -0x18(%ebp),%edx
080e50d7 +0x3fd:  mov    %edx,0x4(%esp)
080e50db +0x401:  mov    %eax,(%esp)
080e50de +0x404:  call   0807f460 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x530>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x530
080e50e3 +0x409:  mov    %eax,-0x10(%ebp)
080e50e6 +0x40c:  mov    -0x10(%ebp),%eax
080e50e9 +0x40f:  mov    %eax,-0xc(%ebp)
080e50ec +0x412:  mov    0x10(%ebp),%eax
080e50ef +0x415:  mov    %eax,(%esp)
080e50f2 +0x418:  call   0807f54c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x61c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x61c
080e50f7 +0x41d:  movzbl (%eax),%eax
080e50fa +0x420:  mov    %al,-0x19(%ebp)
080e50fd +0x423:  mov    -0x14(%ebp),%eax
080e5100 +0x426:  mov    -0x10(%ebp),%edx
080e5103 +0x429:  lea    (%edx,%eax,1),%ecx
080e5106 +0x42c:  mov    0x8(%ebp),%eax
080e5109 +0x42f:  lea    -0x19(%ebp),%edx
080e510c +0x432:  mov    %edx,0x8(%esp)
080e5110 +0x436:  mov    %ecx,0x4(%esp)
080e5114 +0x43a:  mov    %eax,(%esp)
080e5117 +0x43d:  call   0807f2e0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3b0>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3b0
080e511c +0x442:  movl   $0x0,-0xc(%ebp)
080e5123 +0x449:  mov    0x8(%ebp),%eax
080e5126 +0x44c:  mov    %eax,(%esp)
080e5129 +0x44f:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
080e512e +0x454:  mov    %eax,%ebx
080e5130 +0x456:  lea    0xc(%ebp),%eax
080e5133 +0x459:  mov    %eax,(%esp)
080e5136 +0x45c:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
080e513b +0x461:  mov    (%eax),%edx
080e513d +0x463:  mov    0x8(%ebp),%eax
080e5140 +0x466:  mov    (%eax),%eax
080e5142 +0x468:  mov    %ebx,0xc(%esp)
080e5146 +0x46c:  mov    -0x10(%ebp),%ecx
080e5149 +0x46f:  mov    %ecx,0x8(%esp)
080e514d +0x473:  mov    %edx,0x4(%esp)
080e5151 +0x477:  mov    %eax,(%esp)
080e5154 +0x47a:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
080e5159 +0x47f:  mov    %eax,-0xc(%ebp)
080e515c +0x482:  addl   $0x1,-0xc(%ebp)
080e5160 +0x486:  mov    0x8(%ebp),%eax
080e5163 +0x489:  mov    %eax,(%esp)
080e5166 +0x48c:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
080e516b +0x491:  mov    %eax,%ebx
080e516d +0x493:  mov    0x8(%ebp),%eax
080e5170 +0x496:  mov    0x4(%eax),%esi
080e5173 +0x499:  lea    0xc(%ebp),%eax
080e5176 +0x49c:  mov    %eax,(%esp)
080e5179 +0x49f:  call   0807f316 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3e6>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e6
080e517e +0x4a4:  mov    (%eax),%eax
080e5180 +0x4a6:  mov    %ebx,0xc(%esp)
080e5184 +0x4aa:  mov    -0xc(%ebp),%edx
080e5187 +0x4ad:  mov    %edx,0x8(%esp)
080e518b +0x4b1:  mov    %esi,0x4(%esp)
080e518f +0x4b5:  mov    %eax,(%esp)
080e5192 +0x4b8:  call   0807f498 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x568>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x568
080e5197 +0x4bd:  mov    %eax,-0xc(%ebp)
080e519a +0x4c0:  mov    0x8(%ebp),%eax
080e519d +0x4c3:  mov    %eax,(%esp)
080e51a0 +0x4c6:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
080e51a5 +0x4cb:  mov    0x8(%ebp),%edx
080e51a8 +0x4ce:  mov    0x4(%edx),%ecx
080e51ab +0x4d1:  mov    0x8(%ebp),%edx
080e51ae +0x4d4:  mov    (%edx),%edx
080e51b0 +0x4d6:  mov    %eax,0x8(%esp)
080e51b4 +0x4da:  mov    %ecx,0x4(%esp)
080e51b8 +0x4de:  mov    %edx,(%esp)
080e51bb +0x4e1:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
080e51c0 +0x4e6:  mov    0x8(%ebp),%eax
080e51c3 +0x4e9:  mov    0x8(%eax),%eax
080e51c6 +0x4ec:  mov    %eax,%edx
080e51c8 +0x4ee:  mov    0x8(%ebp),%eax
080e51cb +0x4f1:  mov    (%eax),%eax
080e51cd +0x4f3:  mov    %edx,%ecx
080e51cf +0x4f5:  sub    %eax,%ecx
080e51d1 +0x4f7:  mov    %ecx,%eax
080e51d3 +0x4f9:  mov    %eax,%ecx
080e51d5 +0x4fb:  mov    0x8(%ebp),%eax
080e51d8 +0x4fe:  mov    (%eax),%edx
080e51da +0x500:  mov    0x8(%ebp),%eax
080e51dd +0x503:  mov    %ecx,0x8(%esp)
080e51e1 +0x507:  mov    %edx,0x4(%esp)
080e51e5 +0x50b:  mov    %eax,(%esp)
080e51e8 +0x50e:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
080e51ed +0x513:  mov    0x8(%ebp),%eax
080e51f0 +0x516:  mov    -0x10(%ebp),%edx
080e51f3 +0x519:  mov    %edx,(%eax)
080e51f5 +0x51b:  mov    0x8(%ebp),%eax
080e51f8 +0x51e:  mov    -0xc(%ebp),%edx
080e51fb +0x521:  mov    %edx,0x4(%eax)
080e51fe +0x524:  mov    -0x18(%ebp),%eax
080e5201 +0x527:  mov    -0x10(%ebp),%edx
080e5204 +0x52a:  add    %eax,%edx
080e5206 +0x52c:  mov    0x8(%ebp),%eax
080e5209 +0x52f:  mov    %edx,0x8(%eax)
080e520c +0x532:  jmp    080e5289 <+0x5af>
080e520e +0x534:  mov    %eax,(%esp)
080e5211 +0x537:  call   08725ce0 <__cxa_begin_catch>
080e5216 +0x53c:  cmpl   $0x0,-0xc(%ebp)
080e521a +0x540:  jne    080e5235 <+0x55b>
080e521c +0x542:  mov    -0x14(%ebp),%eax
080e521f +0x545:  mov    -0x10(%ebp),%edx
080e5222 +0x548:  add    %eax,%edx
080e5224 +0x54a:  mov    0x8(%ebp),%eax
080e5227 +0x54d:  mov    %edx,0x4(%esp)
080e522b +0x551:  mov    %eax,(%esp)
080e522e +0x554:  call   0807f4ea <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5ba>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5ba
080e5233 +0x559:  jmp    080e5256 <+0x57c>
080e5235 +0x55b:  mov    0x8(%ebp),%eax
080e5238 +0x55e:  mov    %eax,(%esp)
080e523b +0x561:  call   0807f490 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x560>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x560
080e5240 +0x566:  mov    %eax,0x8(%esp)
080e5244 +0x56a:  mov    -0xc(%ebp),%eax
080e5247 +0x56d:  mov    %eax,0x4(%esp)
080e524b +0x571:  mov    -0x10(%ebp),%eax
080e524e +0x574:  mov    %eax,(%esp)
080e5251 +0x577:  call   0807f4ef <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5bf>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5bf
080e5256 +0x57c:  mov    0x8(%ebp),%eax
080e5259 +0x57f:  mov    -0x18(%ebp),%edx
080e525c +0x582:  mov    %edx,0x8(%esp)
080e5260 +0x586:  mov    -0x10(%ebp),%edx
080e5263 +0x589:  mov    %edx,0x4(%esp)
080e5267 +0x58d:  mov    %eax,(%esp)
080e526a +0x590:  call   0807f50a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5da>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5da
080e526f +0x595:  call   08724be0 <__cxa_rethrow>
080e5274 +0x59a:  mov    %edx,%ebx
080e5276 +0x59c:  mov    %eax,%esi
080e5278 +0x59e:  call   08725c30 <__cxa_end_catch>
080e527d +0x5a3:  mov    %esi,%eax
080e527f +0x5a5:  mov    %ebx,%edx
080e5281 +0x5a7:  mov    %eax,(%esp)
080e5284 +0x5aa:  call   08ae3750 <_Unwind_Resume>
080e5289 +0x5af:  lea    -0x8(%ebp),%esp
080e528c +0x5b2:  add    $0x0,%esp
080e528f +0x5b5:  pop    %ebx
080e5290 +0x5b6:  pop    %esi
080e5291 +0x5b7:  pop    %ebp
080e5292 +0x5b8:  ret
080e5293 +0x5b9:  nop
080e5294 +0x5ba:  push   %ebp
080e5295 +0x5bb:  mov    %esp,%ebp
080e5297 +0x5bd:  sub    $0x18,%esp
080e529a +0x5c0:  mov    0x8(%ebp),%eax
080e529d +0x5c3:  mov    %eax,(%esp)
080e52a0 +0x5c6:  call   080e52ae <+0x5d4>
080e52a5 +0x5cb:  leave
080e52a6 +0x5cc:  ret
080e52a7 +0x5cd:  nop
080e52a8 +0x5ce:  push   %ebp
080e52a9 +0x5cf:  mov    %esp,%ebp
080e52ab +0x5d1:  pop    %ebp
080e52ac +0x5d2:  ret
080e52ad +0x5d3:  nop
080e52ae +0x5d4:  push   %ebp
080e52af +0x5d5:  mov    %esp,%ebp
080e52b1 +0x5d7:  pop    %ebp
080e52b2 +0x5d8:  ret
080e52b3 +0x5d9:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80e4cda

/* CCharacInformNotice::CCharacInformNotice() */

void CCharacInformNotice::_GLOBAL__I_CCharacInformNotice(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
