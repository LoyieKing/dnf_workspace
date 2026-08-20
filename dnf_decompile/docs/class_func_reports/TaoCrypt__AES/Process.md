# Process

`_ZN8TaoCrypt3AES7ProcessEPhPKhj`

`TaoCrypt::AES::Process(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AES` | `0x087a3950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3950  _ZN8TaoCrypt3AES7ProcessEPhPKhj
#           TaoCrypt::AES::Process(unsigned char*, unsigned char const*, unsigned int)
# range [0x087a3950, 0x087a3d2f]
087a3950 +0x000:  push   %ebp
087a3951 +0x001:  mov    %esp,%ebp
087a3953 +0x003:  push   %edi
087a3954 +0x004:  push   %esi
087a3955 +0x005:  push   %ebx
087a3956 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a395b +0x00b:  add    $0xbc923d,%ebx
087a3961 +0x011:  sub    $0x5c,%esp
087a3964 +0x014:  mov    0x8(%ebp),%esi
087a3967 +0x017:  mov    0x10(%ebp),%edi
087a396a +0x01a:  mov    0x14(%ebp),%eax
087a396d +0x01d:  mov    -0x5c8(%ebx),%edx
087a3973 +0x023:  cmpb   $0x0,(%edx)
087a3976 +0x026:  je     087a3a30 <+0xe0>
087a397c +0x02c:  mov    0x34(%esi),%edx
087a397f +0x02f:  shr    $0x4,%eax
087a3982 +0x032:  test   %edx,%edx
087a3984 +0x034:  jne    087a3a18 <+0xc8>
087a398a +0x03a:  test   %eax,%eax
087a398c +0x03c:  je     087a3a21 <+0xd1>
087a3992 +0x042:  sub    $0x1,%eax
087a3995 +0x045:  mov    %esi,%ecx
087a3997 +0x047:  mov    %eax,%esi
087a3999 +0x049:  mov    0xc(%ebp),%eax
087a399c +0x04c:  mov    %edi,-0x34(%ebp)
087a399f +0x04f:  mov    %edx,%edi
087a39a1 +0x051:  mov    %eax,-0x2c(%ebp)
087a39a4 +0x054:  mov    %ecx,%eax
087a39a6 +0x056:  jmp    087a39d7 <+0x87>
087a39a8 +0x058:  mov    -0x28(%ebx),%edx
087a39ae +0x05e:  mov    %eax,-0x40(%ebp)
087a39b1 +0x061:  mov    (%edx),%edx
087a39b3 +0x063:  mov    %ecx,0x8(%esp)
087a39b7 +0x067:  mov    -0x30(%ebp),%ecx
087a39ba +0x06a:  mov    %eax,(%esp)
087a39bd +0x06d:  mov    %edx,0xc(%esp)
087a39c1 +0x071:  mov    %ecx,0x4(%esp)
087a39c5 +0x075:  call   087a17d0 <_ZNK8TaoCrypt3AES10AsmEncryptEPKhPhPv>  ; TaoCrypt::AES::AsmEncrypt(unsigned char const*, unsigned char*, void*) const
087a39ca +0x07a:  mov    -0x40(%ebp),%eax
087a39cd +0x07d:  add    $0x10,%edi
087a39d0 +0x080:  test   %esi,%esi
087a39d2 +0x082:  je     087a3a21 <+0xd1>
087a39d4 +0x084:  sub    $0x1,%esi
087a39d7 +0x087:  mov    -0x34(%ebp),%edx
087a39da +0x08a:  mov    -0x2c(%ebp),%ecx
087a39dd +0x08d:  add    %edi,%edx
087a39df +0x08f:  mov    %edx,-0x30(%ebp)
087a39e2 +0x092:  mov    0x30(%eax),%edx
087a39e5 +0x095:  add    %edi,%ecx
087a39e7 +0x097:  test   %edx,%edx
087a39e9 +0x099:  je     087a39a8 <+0x58>
087a39eb +0x09b:  mov    -0x178(%ebx),%edx
087a39f1 +0x0a1:  mov    %eax,-0x40(%ebp)
087a39f4 +0x0a4:  mov    (%edx),%edx
087a39f6 +0x0a6:  mov    %ecx,0x8(%esp)
087a39fa +0x0aa:  mov    -0x30(%ebp),%ecx
087a39fd +0x0ad:  mov    %eax,(%esp)
087a3a00 +0x0b0:  mov    %edx,0xc(%esp)
087a3a04 +0x0b4:  mov    %ecx,0x4(%esp)
087a3a08 +0x0b8:  call   087a1a90 <_ZNK8TaoCrypt3AES10AsmDecryptEPKhPhPv>  ; TaoCrypt::AES::AsmDecrypt(unsigned char const*, unsigned char*, void*) const
087a3a0d +0x0bd:  mov    -0x40(%ebp),%eax
087a3a10 +0x0c0:  jmp    087a39cd <+0x7d>
087a3a12 +0x0c2:  lea    0x0(%esi),%esi
087a3a18 +0x0c8:  cmp    $0x1,%edx
087a3a1b +0x0cb:  je     087a3b10 <+0x1c0>
087a3a21 +0x0d1:  add    $0x5c,%esp
087a3a24 +0x0d4:  pop    %ebx
087a3a25 +0x0d5:  pop    %esi
087a3a26 +0x0d6:  pop    %edi
087a3a27 +0x0d7:  pop    %ebp
087a3a28 +0x0d8:  ret
087a3a29 +0x0d9:  lea    0x0(%esi,%eiz,1),%esi
087a3a30 +0x0e0:  mov    0x34(%esi),%edx
087a3a33 +0x0e3:  test   %edx,%edx
087a3a35 +0x0e5:  jne    087a3a88 <+0x138>
087a3a37 +0x0e7:  xor    %edx,%edx
087a3a39 +0x0e9:  divl   0x4(%esi)
087a3a3c +0x0ec:  test   %eax,%eax
087a3a3e +0x0ee:  mov    %eax,-0x2c(%ebp)
087a3a41 +0x0f1:  je     087a3a21 <+0xd1>
087a3a43 +0x0f3:  mov    %edi,%eax
087a3a45 +0x0f5:  mov    0xc(%ebp),%ecx
087a3a48 +0x0f8:  mov    %esi,%edi
087a3a4a +0x0fa:  mov    -0x2c(%ebp),%esi
087a3a4d +0x0fd:  lea    0x0(%esi),%esi
087a3a50 +0x100:  mov    (%edi),%edx
087a3a52 +0x102:  mov    %eax,-0x40(%ebp)
087a3a55 +0x105:  mov    %ecx,0xc(%esp)
087a3a59 +0x109:  mov    %eax,0x4(%esp)
087a3a5d +0x10d:  mov    %ecx,-0x44(%ebp)
087a3a60 +0x110:  movl   $0x0,0x8(%esp)
087a3a68 +0x118:  mov    %edi,(%esp)
087a3a6b +0x11b:  call   *0xc(%edx)
087a3a6e +0x11e:  mov    0x4(%edi),%edx
087a3a71 +0x121:  mov    -0x44(%ebp),%ecx
087a3a74 +0x124:  mov    -0x40(%ebp),%eax
087a3a77 +0x127:  add    %edx,%ecx
087a3a79 +0x129:  add    %edx,%eax
087a3a7b +0x12b:  sub    $0x1,%esi
087a3a7e +0x12e:  jne    087a3a50 <+0x100>
087a3a80 +0x130:  jmp    087a3a21 <+0xd1>
087a3a82 +0x132:  lea    0x0(%esi),%esi
087a3a88 +0x138:  cmp    $0x1,%edx
087a3a8b +0x13b:  jne    087a3a21 <+0xd1>
087a3a8d +0x13d:  mov    0x30(%esi),%ecx
087a3a90 +0x140:  test   %ecx,%ecx
087a3a92 +0x142:  jne    087a3c1e <+0x2ce>
087a3a98 +0x148:  xor    %edx,%edx
087a3a9a +0x14a:  divl   0x4(%esi)
087a3a9d +0x14d:  test   %eax,%eax
087a3a9f +0x14f:  mov    %eax,-0x2c(%ebp)
087a3aa2 +0x152:  je     087a3a21 <+0xd1>
087a3aa8 +0x158:  mov    %edi,%edx
087a3aaa +0x15a:  mov    0x4(%esi),%eax
087a3aad +0x15d:  mov    0xc(%ebp),%edi
087a3ab0 +0x160:  mov    %edx,0x4(%esp)
087a3ab4 +0x164:  mov    %eax,0x8(%esp)
087a3ab8 +0x168:  mov    0x8(%esi),%eax
087a3abb +0x16b:  mov    %edx,-0x44(%ebp)
087a3abe +0x16e:  mov    %eax,(%esp)
087a3ac1 +0x171:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
087a3ac6 +0x176:  mov    0x8(%esi),%eax
087a3ac9 +0x179:  mov    (%esi),%ecx
087a3acb +0x17b:  movl   $0x0,0x8(%esp)
087a3ad3 +0x183:  mov    %esi,(%esp)
087a3ad6 +0x186:  mov    %eax,0xc(%esp)
087a3ada +0x18a:  mov    %eax,0x4(%esp)
087a3ade +0x18e:  call   *0xc(%ecx)
087a3ae1 +0x191:  mov    0x8(%esi),%eax
087a3ae4 +0x194:  mov    0x4(%esi),%ecx
087a3ae7 +0x197:  mov    %edi,(%esp)
087a3aea +0x19a:  mov    %eax,0x4(%esp)
087a3aee +0x19e:  mov    %ecx,0x8(%esp)
087a3af2 +0x1a2:  call   0807d8a0 <_init+0x198>
087a3af7 +0x1a7:  mov    0x4(%esi),%eax
087a3afa +0x1aa:  mov    -0x44(%ebp),%edx
087a3afd +0x1ad:  add    %eax,%edi
087a3aff +0x1af:  add    %eax,%edx
087a3b01 +0x1b1:  subl   $0x1,-0x2c(%ebp)
087a3b05 +0x1b5:  jne    087a3ab0 <+0x160>
087a3b07 +0x1b7:  jmp    087a3a21 <+0xd1>
087a3b0c +0x1bc:  lea    0x0(%esi,%eiz,1),%esi
087a3b10 +0x1c0:  mov    0x30(%esi),%edx
087a3b13 +0x1c3:  test   %edx,%edx
087a3b15 +0x1c5:  je     087a3ba0 <+0x250>
087a3b1b +0x1cb:  test   %eax,%eax
087a3b1d +0x1cd:  lea    0x0(%esi),%esi
087a3b20 +0x1d0:  je     087a3a21 <+0xd1>
087a3b26 +0x1d6:  lea    0x10(%esi),%edx
087a3b29 +0x1d9:  mov    %eax,-0x2c(%ebp)
087a3b2c +0x1dc:  mov    %esi,%eax
087a3b2e +0x1de:  mov    0xc(%ebp),%esi
087a3b31 +0x1e1:  lea    0x0(%esi,%eiz,1),%esi
087a3b38 +0x1e8:  mov    -0x178(%ebx),%ecx
087a3b3e +0x1ee:  mov    %eax,-0x40(%ebp)
087a3b41 +0x1f1:  mov    %edx,-0x44(%ebp)
087a3b44 +0x1f4:  mov    (%ecx),%ecx
087a3b46 +0x1f6:  mov    %esi,0x8(%esp)
087a3b4a +0x1fa:  mov    %edi,0x4(%esp)
087a3b4e +0x1fe:  mov    %eax,(%esp)
087a3b51 +0x201:  mov    %ecx,0xc(%esp)
087a3b55 +0x205:  call   087a1a90 <_ZNK8TaoCrypt3AES10AsmDecryptEPKhPhPv>  ; TaoCrypt::AES::AsmDecrypt(unsigned char const*, unsigned char*, void*) const
087a3b5a +0x20a:  mov    -0x40(%ebp),%eax
087a3b5d +0x20d:  mov    -0x44(%ebp),%edx
087a3b60 +0x210:  mov    0x10(%eax),%ecx
087a3b63 +0x213:  xor    %ecx,(%esi)
087a3b65 +0x215:  mov    0x14(%eax),%ecx
087a3b68 +0x218:  xor    %ecx,0x4(%esi)
087a3b6b +0x21b:  mov    0x18(%eax),%ecx
087a3b6e +0x21e:  xor    %ecx,0x8(%esi)
087a3b71 +0x221:  mov    0x1c(%eax),%ecx
087a3b74 +0x224:  xor    %ecx,0xc(%esi)
087a3b77 +0x227:  add    $0x10,%esi
087a3b7a +0x22a:  mov    (%edi),%ecx
087a3b7c +0x22c:  mov    %ecx,(%edx)
087a3b7e +0x22e:  mov    0x4(%edi),%ecx
087a3b81 +0x231:  mov    %ecx,0x4(%edx)
087a3b84 +0x234:  mov    0x8(%edi),%ecx
087a3b87 +0x237:  mov    %ecx,0x8(%edx)
087a3b8a +0x23a:  mov    0xc(%edi),%ecx
087a3b8d +0x23d:  add    $0x10,%edi
087a3b90 +0x240:  mov    %ecx,0xc(%edx)
087a3b93 +0x243:  subl   $0x1,-0x2c(%ebp)
087a3b97 +0x247:  jne    087a3b38 <+0x1e8>
087a3b99 +0x249:  jmp    087a3a21 <+0xd1>
087a3b9e +0x24e:  xchg   %ax,%ax
087a3ba0 +0x250:  test   %eax,%eax
087a3ba2 +0x252:  je     087a3a21 <+0xd1>
087a3ba8 +0x258:  mov    0xc(%ebp),%ecx
087a3bab +0x25b:  lea    0x10(%esi),%edx
087a3bae +0x25e:  mov    %eax,-0x2c(%ebp)
087a3bb1 +0x261:  mov    %edi,%eax
087a3bb3 +0x263:  mov    %edx,%edi
087a3bb5 +0x265:  lea    0x0(%esi),%esi
087a3bb8 +0x268:  mov    (%eax),%edx
087a3bba +0x26a:  xor    %edx,0x10(%esi)
087a3bbd +0x26d:  mov    0x4(%eax),%edx
087a3bc0 +0x270:  xor    %edx,0x14(%esi)
087a3bc3 +0x273:  mov    0x8(%eax),%edx
087a3bc6 +0x276:  xor    %edx,0x18(%esi)
087a3bc9 +0x279:  mov    0xc(%eax),%edx
087a3bcc +0x27c:  xor    %edx,0x1c(%esi)
087a3bcf +0x27f:  mov    -0x28(%ebx),%edx
087a3bd5 +0x285:  mov    %eax,-0x40(%ebp)
087a3bd8 +0x288:  mov    %ecx,-0x44(%ebp)
087a3bdb +0x28b:  mov    (%edx),%edx
087a3bdd +0x28d:  mov    %edi,0x8(%esp)
087a3be1 +0x291:  mov    %edi,0x4(%esp)
087a3be5 +0x295:  mov    %esi,(%esp)
087a3be8 +0x298:  mov    %edx,0xc(%esp)
087a3bec +0x29c:  call   087a17d0 <_ZNK8TaoCrypt3AES10AsmEncryptEPKhPhPv>  ; TaoCrypt::AES::AsmEncrypt(unsigned char const*, unsigned char*, void*) const
087a3bf1 +0x2a1:  mov    (%edi),%edx
087a3bf3 +0x2a3:  mov    -0x44(%ebp),%ecx
087a3bf6 +0x2a6:  mov    %edx,(%ecx)
087a3bf8 +0x2a8:  mov    0x4(%edi),%edx
087a3bfb +0x2ab:  mov    %edx,0x4(%ecx)
087a3bfe +0x2ae:  mov    0x8(%edi),%edx
087a3c01 +0x2b1:  mov    %edx,0x8(%ecx)
087a3c04 +0x2b4:  mov    0xc(%edi),%edx
087a3c07 +0x2b7:  mov    %edx,0xc(%ecx)
087a3c0a +0x2ba:  mov    -0x40(%ebp),%eax
087a3c0d +0x2bd:  add    $0x10,%ecx
087a3c10 +0x2c0:  add    $0x10,%eax
087a3c13 +0x2c3:  subl   $0x1,-0x2c(%ebp)
087a3c17 +0x2c7:  jne    087a3bb8 <+0x268>
087a3c19 +0x2c9:  jmp    087a3a21 <+0xd1>
087a3c1e +0x2ce:  xor    %edx,%edx
087a3c20 +0x2d0:  divl   0x4(%esi)
087a3c23 +0x2d3:  test   %eax,%eax
087a3c25 +0x2d5:  mov    %eax,-0x2c(%ebp)
087a3c28 +0x2d8:  je     087a3a21 <+0xd1>
087a3c2e +0x2de:  lea    -0x28(%ebp),%edx
087a3c31 +0x2e1:  mov    0x4(%esi),%eax
087a3c34 +0x2e4:  mov    %edx,-0x34(%ebp)
087a3c37 +0x2e7:  mov    %edi,%edx
087a3c39 +0x2e9:  mov    0xc(%ebp),%edi
087a3c3c +0x2ec:  lea    0x0(%esi,%eiz,1),%esi
087a3c40 +0x2f0:  mov    0xc(%esi),%ecx
087a3c43 +0x2f3:  mov    %edx,-0x44(%ebp)
087a3c46 +0x2f6:  mov    %edx,0x4(%esp)
087a3c4a +0x2fa:  mov    %eax,0x8(%esp)
087a3c4e +0x2fe:  mov    %ecx,(%esp)
087a3c51 +0x301:  call   0807d8a0 <_init+0x198>
087a3c56 +0x306:  mov    (%esi),%eax
087a3c58 +0x308:  mov    %edi,0xc(%esp)
087a3c5c +0x30c:  movl   $0x0,0x8(%esp)
087a3c64 +0x314:  mov    0xc(%esi),%ecx
087a3c67 +0x317:  mov    %esi,(%esp)
087a3c6a +0x31a:  mov    %ecx,0x4(%esp)
087a3c6e +0x31e:  call   *0xc(%eax)
087a3c71 +0x321:  mov    0x4(%esi),%eax
087a3c74 +0x324:  mov    %eax,0x8(%esp)
087a3c78 +0x328:  mov    0x8(%esi),%eax
087a3c7b +0x32b:  mov    %edi,(%esp)
087a3c7e +0x32e:  mov    %eax,0x4(%esp)
087a3c82 +0x332:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
087a3c87 +0x337:  mov    0x4(%esi),%ecx
087a3c8a +0x33a:  mov    0x8(%esi),%eax
087a3c8d +0x33d:  mov    %ecx,0x8(%esp)
087a3c91 +0x341:  mov    -0x34(%ebp),%ecx
087a3c94 +0x344:  mov    %eax,0x4(%esp)
087a3c98 +0x348:  mov    %ecx,(%esp)
087a3c9b +0x34b:  call   0807d8a0 <_init+0x198>
087a3ca0 +0x350:  mov    0xc(%esi),%eax
087a3ca3 +0x353:  mov    0x4(%esi),%ecx
087a3ca6 +0x356:  mov    %eax,0x4(%esp)
087a3caa +0x35a:  mov    %ecx,0x8(%esp)
087a3cae +0x35e:  mov    0x8(%esi),%eax
087a3cb1 +0x361:  mov    %eax,(%esp)
087a3cb4 +0x364:  call   0807d8a0 <_init+0x198>
087a3cb9 +0x369:  mov    0x4(%esi),%ecx
087a3cbc +0x36c:  mov    0xc(%esi),%eax
087a3cbf +0x36f:  mov    %ecx,0x8(%esp)
087a3cc3 +0x373:  mov    -0x34(%ebp),%ecx
087a3cc6 +0x376:  mov    %eax,(%esp)
087a3cc9 +0x379:  mov    %ecx,0x4(%esp)
087a3ccd +0x37d:  call   0807d8a0 <_init+0x198>
087a3cd2 +0x382:  mov    0x4(%esi),%eax
087a3cd5 +0x385:  mov    -0x44(%ebp),%edx
087a3cd8 +0x388:  add    %eax,%edi
087a3cda +0x38a:  add    %eax,%edx
087a3cdc +0x38c:  subl   $0x1,-0x2c(%ebp)
087a3ce0 +0x390:  jne    087a3c40 <+0x2f0>
087a3ce6 +0x396:  jmp    087a3a21 <+0xd1>
087a3ceb +0x39b:  nop
087a3cec +0x39c:  nop
087a3ced +0x39d:  nop
087a3cee +0x39e:  nop
087a3cef +0x39f:  nop
087a3cf0 +0x3a0:  call   087245c4 <__i686.get_pc_thunk.cx>
087a3cf5 +0x3a5:  add    $0xbc8ea3,%ecx
087a3cfb +0x3ab:  push   %ebp
087a3cfc +0x3ac:  mov    %esp,%ebp
087a3cfe +0x3ae:  mov    -0x474(%ecx),%eax
087a3d04 +0x3b4:  lea    0x8(%eax),%edx
087a3d07 +0x3b7:  mov    0x8(%ebp),%eax
087a3d0a +0x3ba:  mov    %edx,(%eax)
087a3d0c +0x3bc:  pop    %ebp
087a3d0d +0x3bd:  ret
087a3d0e +0x3be:  nop
087a3d0f +0x3bf:  nop
087a3d10 +0x3c0:  call   087245c4 <__i686.get_pc_thunk.cx>
087a3d15 +0x3c5:  add    $0xbc8e83,%ecx
087a3d1b +0x3cb:  push   %ebp
087a3d1c +0x3cc:  mov    %esp,%ebp
087a3d1e +0x3ce:  mov    -0x474(%ecx),%eax
087a3d24 +0x3d4:  lea    0x8(%eax),%edx
087a3d27 +0x3d7:  mov    0x8(%ebp),%eax
087a3d2a +0x3da:  mov    %edx,(%eax)
087a3d2c +0x3dc:  pop    %ebp
087a3d2d +0x3dd:  ret
087a3d2e +0x3de:  nop
087a3d2f +0x3df:  nop
```

## 反编译 C

```c
// TaoCrypt::AES::Process @ 0x87a3950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::Process(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::AES::Process(AES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  uchar *puVar1;
  AES *pAVar2;
  uint uVar3;
  size_t __n;
  int iVar4;
  uint local_30;
  undefined1 local_2c [24];
  undefined4 uStack_14;
  
  uStack_14 = 0x87a395b;
  if (*PTR_isMMX_0936c5d0 == '\0') {
    if (*(int *)(this + 0x34) == 0) {
      for (uVar3 = param_3 / *(uint *)(this + 4); uVar3 != 0; uVar3 = uVar3 - 1) {
        (**(code **)(*(int *)this + 0xc))(this,param_2,0,param_1);
        param_1 = param_1 + *(int *)(this + 4);
        param_2 = param_2 + *(int *)(this + 4);
      }
    }
    else if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        local_30 = param_3 / *(uint *)(this + 4);
        if (local_30 != 0) {
          uVar3 = *(uint *)(this + 4);
          do {
            xorbuf(*(uchar **)(this + 8),param_2,uVar3);
            (**(code **)(*(int *)this + 0xc))
                      (this,*(undefined4 *)(this + 8),0,*(undefined4 *)(this + 8));
            memcpy(param_1,*(void **)(this + 8),*(size_t *)(this + 4));
            uVar3 = *(uint *)(this + 4);
            param_1 = param_1 + uVar3;
            param_2 = param_2 + uVar3;
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
      else {
        local_30 = param_3 / *(uint *)(this + 4);
        if (local_30 != 0) {
          __n = *(size_t *)(this + 4);
          do {
            memcpy(*(void **)(this + 0xc),param_2,__n);
            (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(this + 0xc),0,param_1);
            xorbuf(param_1,*(uchar **)(this + 8),*(uint *)(this + 4));
            memcpy(local_2c,*(void **)(this + 8),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 8),*(void **)(this + 0xc),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 0xc),local_2c,*(size_t *)(this + 4));
            __n = *(size_t *)(this + 4);
            param_1 = param_1 + __n;
            param_2 = param_2 + __n;
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
    }
  }
  else {
    local_30 = param_3 >> 4;
    if (*(int *)(this + 0x34) == 0) {
      if (local_30 != 0) {
        iVar4 = 0;
        do {
          local_30 = local_30 - 1;
          if (*(int *)(this + 0x30) == 0) {
            AsmEncrypt(this,param_2 + iVar4,param_1 + iVar4,*(void **)PTR_Te0_0936cb70);
          }
          else {
            AsmDecrypt(this,param_2 + iVar4,param_1 + iVar4,*(void **)PTR_Td0_0936ca20);
          }
          iVar4 = iVar4 + 0x10;
        } while (local_30 != 0);
      }
    }
    else if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        if (local_30 != 0) {
          pAVar2 = this + 0x10;
          do {
            *(uint *)(this + 0x10) = *(uint *)(this + 0x10) ^ *(uint *)param_2;
            *(uint *)(this + 0x14) = *(uint *)(this + 0x14) ^ *(uint *)((int)param_2 + 4);
            *(uint *)(this + 0x18) = *(uint *)(this + 0x18) ^ *(uint *)((int)param_2 + 8);
            *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) ^ *(uint *)((int)param_2 + 0xc);
            AsmEncrypt(this,(uchar *)pAVar2,(uchar *)pAVar2,*(void **)PTR_Te0_0936cb70);
            *(undefined4 *)param_1 = *(undefined4 *)pAVar2;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x14);
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x18);
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x1c);
            param_1 = param_1 + 0x10;
            param_2 = (uchar *)((int)param_2 + 0x10);
            local_30 = local_30 - 1;
          } while (local_30 != 0);
        }
      }
      else if (local_30 != 0) {
        do {
          AsmDecrypt(this,param_2,param_1,*(void **)PTR_Td0_0936ca20);
          *(uint *)param_1 = *(uint *)param_1 ^ *(uint *)(this + 0x10);
          *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) ^ *(uint *)(this + 0x14);
          *(uint *)((int)param_1 + 8) = *(uint *)((int)param_1 + 8) ^ *(uint *)(this + 0x18);
          *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) ^ *(uint *)(this + 0x1c);
          param_1 = (uchar *)((int)param_1 + 0x10);
          *(undefined4 *)(this + 0x10) = *(undefined4 *)param_2;
          *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 8);
          puVar1 = param_2 + 0xc;
          param_2 = param_2 + 0x10;
          *(undefined4 *)(this + 0x1c) = *(undefined4 *)puVar1;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
    }
  }
  return;
}
```
