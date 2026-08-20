# set_data

`_ZN10CCharacter8set_dataEP17STCharacterScript`

`CCharacter::set_data(STCharacterScript*)`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x08348894` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08348894  _ZN10CCharacter8set_dataEP17STCharacterScript
#           CCharacter::set_data(STCharacterScript*)
# range [0x08348894, 0x083493e9]
08348894 +0x000:  push   %ebp
08348895 +0x001:  mov    %esp,%ebp
08348897 +0x003:  push   %edi
08348898 +0x004:  push   %esi
08348899 +0x005:  push   %ebx
0834889a +0x006:  sub    $0x5c,%esp
0834889d +0x009:  movl   $0x0,-0x3c(%ebp)
083488a4 +0x010:  jmp    08348e4e <+0x5ba>
083488a9 +0x015:  cmpl   $0x0,-0x3c(%ebp)
083488ad +0x019:  jne    08348ad2 <+0x23e>
083488b3 +0x01f:  mov    -0x3c(%ebp),%eax
083488b6 +0x022:  mov    0xc(%ebp),%edx
083488b9 +0x025:  imul   $0x57,%eax,%eax
083488bc +0x028:  lea    (%edx,%eax,1),%eax
083488bf +0x02b:  add    $0x24,%eax
083488c2 +0x02e:  mov    (%eax),%edx
083488c4 +0x030:  mov    0x8(%ebp),%eax
083488c7 +0x033:  mov    %edx,(%eax)
083488c9 +0x035:  mov    -0x3c(%ebp),%eax
083488cc +0x038:  mov    0xc(%ebp),%edx
083488cf +0x03b:  imul   $0x57,%eax,%eax
083488d2 +0x03e:  lea    (%edx,%eax,1),%eax
083488d5 +0x041:  add    $0x28,%eax
083488d8 +0x044:  mov    (%eax),%edx
083488da +0x046:  mov    0x8(%ebp),%eax
083488dd +0x049:  mov    %edx,0x4(%eax)
083488e0 +0x04c:  mov    -0x3c(%ebp),%eax
083488e3 +0x04f:  mov    0xc(%ebp),%edx
083488e6 +0x052:  imul   $0x57,%eax,%eax
083488e9 +0x055:  lea    (%edx,%eax,1),%eax
083488ec +0x058:  add    $0x20,%eax
083488ef +0x05b:  movzwl 0xc(%eax),%edx
083488f3 +0x05f:  mov    0x8(%ebp),%eax
083488f6 +0x062:  mov    %dx,0x8(%eax)
083488fa +0x066:  mov    -0x3c(%ebp),%eax
083488fd +0x069:  mov    0xc(%ebp),%edx
08348900 +0x06c:  imul   $0x57,%eax,%eax
08348903 +0x06f:  lea    (%edx,%eax,1),%eax
08348906 +0x072:  add    $0x20,%eax
08348909 +0x075:  movzwl 0xe(%eax),%edx
0834890d +0x079:  mov    0x8(%ebp),%eax
08348910 +0x07c:  mov    %dx,0xa(%eax)
08348914 +0x080:  mov    -0x3c(%ebp),%eax
08348917 +0x083:  mov    0xc(%ebp),%edx
0834891a +0x086:  imul   $0x57,%eax,%eax
0834891d +0x089:  lea    (%edx,%eax,1),%eax
08348920 +0x08c:  add    $0x20,%eax
08348923 +0x08f:  movzwl 0x10(%eax),%edx
08348927 +0x093:  mov    0x8(%ebp),%eax
0834892a +0x096:  mov    %dx,0xc(%eax)
0834892e +0x09a:  mov    -0x3c(%ebp),%eax
08348931 +0x09d:  mov    0xc(%ebp),%edx
08348934 +0x0a0:  imul   $0x57,%eax,%eax
08348937 +0x0a3:  lea    (%edx,%eax,1),%eax
0834893a +0x0a6:  add    $0x20,%eax
0834893d +0x0a9:  movzwl 0x12(%eax),%edx
08348941 +0x0ad:  mov    0x8(%ebp),%eax
08348944 +0x0b0:  mov    %dx,0xe(%eax)
08348948 +0x0b4:  movl   $0x0,-0x38(%ebp)
0834894f +0x0bb:  jmp    0834897f <+0xeb>
08348951 +0x0bd:  mov    -0x38(%ebp),%ecx
08348954 +0x0c0:  mov    -0x3c(%ebp),%edx
08348957 +0x0c3:  mov    -0x38(%ebp),%ebx
0834895a +0x0c6:  mov    0xc(%ebp),%eax
0834895d +0x0c9:  add    $0x8,%ebx
08348960 +0x0cc:  add    %ebx,%ebx
08348962 +0x0ce:  imul   $0x57,%edx,%edx
08348965 +0x0d1:  lea    (%ebx,%edx,1),%edx
08348968 +0x0d4:  add    %edx,%eax
0834896a +0x0d6:  add    $0x20,%eax
0834896d +0x0d9:  movzwl 0x4(%eax),%edx
08348971 +0x0dd:  mov    0x8(%ebp),%eax
08348974 +0x0e0:  add    $0x8,%ecx
08348977 +0x0e3:  mov    %dx,(%eax,%ecx,2)
0834897b +0x0e7:  addl   $0x1,-0x38(%ebp)
0834897f +0x0eb:  cmpl   $0x3,-0x38(%ebp)
08348983 +0x0ef:  setle  %al
08348986 +0x0f2:  test   %al,%al
08348988 +0x0f4:  jne    08348951 <+0xbd>
0834898a +0x0f6:  movl   $0x0,-0x34(%ebp)
08348991 +0x0fd:  jmp    083489c2 <+0x12e>
08348993 +0x0ff:  mov    -0x34(%ebp),%ecx
08348996 +0x102:  mov    -0x3c(%ebp),%edx
08348999 +0x105:  mov    -0x34(%ebp),%ebx
0834899c +0x108:  mov    0xc(%ebp),%eax
0834899f +0x10b:  add    $0x8,%ebx
083489a2 +0x10e:  add    %ebx,%ebx
083489a4 +0x110:  imul   $0x57,%edx,%edx
083489a7 +0x113:  lea    (%ebx,%edx,1),%edx
083489aa +0x116:  add    %edx,%eax
083489ac +0x118:  add    $0x20,%eax
083489af +0x11b:  movzwl 0xc(%eax),%edx
083489b3 +0x11f:  mov    0x8(%ebp),%eax
083489b6 +0x122:  add    $0x8,%ecx
083489b9 +0x125:  mov    %dx,0x8(%eax,%ecx,2)
083489be +0x12a:  addl   $0x1,-0x34(%ebp)
083489c2 +0x12e:  cmpl   $0x10,-0x34(%ebp)
083489c6 +0x132:  setle  %al
083489c9 +0x135:  test   %al,%al
083489cb +0x137:  jne    08348993 <+0xff>
083489cd +0x139:  mov    -0x3c(%ebp),%eax
083489d0 +0x13c:  mov    0xc(%ebp),%edx
083489d3 +0x13f:  imul   $0x57,%eax,%eax
083489d6 +0x142:  lea    (%edx,%eax,1),%eax
083489d9 +0x145:  add    $0x50,%eax
083489dc +0x148:  mov    0xe(%eax),%edx
083489df +0x14b:  mov    0x8(%ebp),%eax
083489e2 +0x14e:  mov    %edx,0x3a(%eax)
083489e5 +0x151:  mov    -0x3c(%ebp),%eax
083489e8 +0x154:  mov    0xc(%ebp),%edx
083489eb +0x157:  imul   $0x57,%eax,%eax
083489ee +0x15a:  lea    (%edx,%eax,1),%eax
083489f1 +0x15d:  add    $0x50,%eax
083489f4 +0x160:  movzwl 0x12(%eax),%edx
083489f8 +0x164:  mov    0x8(%ebp),%eax
083489fb +0x167:  mov    %dx,0x3e(%eax)
083489ff +0x16b:  mov    -0x3c(%ebp),%eax
08348a02 +0x16e:  mov    0xc(%ebp),%edx
08348a05 +0x171:  imul   $0x57,%eax,%eax
08348a08 +0x174:  lea    (%edx,%eax,1),%eax
08348a0b +0x177:  add    $0x60,%eax
08348a0e +0x17a:  movzwl 0x4(%eax),%edx
08348a12 +0x17e:  mov    0x8(%ebp),%eax
08348a15 +0x181:  mov    %dx,0x40(%eax)
08348a19 +0x185:  mov    -0x3c(%ebp),%eax
08348a1c +0x188:  mov    0xc(%ebp),%edx
08348a1f +0x18b:  imul   $0x57,%eax,%eax
08348a22 +0x18e:  lea    (%edx,%eax,1),%eax
08348a25 +0x191:  add    $0x60,%eax
08348a28 +0x194:  mov    0x6(%eax),%edx
08348a2b +0x197:  mov    0x8(%ebp),%eax
08348a2e +0x19a:  mov    %edx,0x42(%eax)
08348a31 +0x19d:  mov    -0x3c(%ebp),%eax
08348a34 +0x1a0:  mov    0xc(%ebp),%edx
08348a37 +0x1a3:  imul   $0x57,%eax,%eax
08348a3a +0x1a6:  lea    (%edx,%eax,1),%eax
08348a3d +0x1a9:  add    $0x60,%eax
08348a40 +0x1ac:  movzwl 0xa(%eax),%edx
08348a44 +0x1b0:  mov    0x8(%ebp),%eax
08348a47 +0x1b3:  mov    %dx,0x46(%eax)
08348a4b +0x1b7:  mov    -0x3c(%ebp),%eax
08348a4e +0x1ba:  mov    0xc(%ebp),%edx
08348a51 +0x1bd:  imul   $0x57,%eax,%eax
08348a54 +0x1c0:  lea    (%edx,%eax,1),%eax
08348a57 +0x1c3:  add    $0x60,%eax
08348a5a +0x1c6:  movzwl 0xc(%eax),%edx
08348a5e +0x1ca:  mov    0x8(%ebp),%eax
08348a61 +0x1cd:  mov    %dx,0x48(%eax)
08348a65 +0x1d1:  mov    -0x3c(%ebp),%eax
08348a68 +0x1d4:  mov    0xc(%ebp),%edx
08348a6b +0x1d7:  imul   $0x57,%eax,%eax
08348a6e +0x1da:  lea    (%edx,%eax,1),%eax
08348a71 +0x1dd:  add    $0x60,%eax
08348a74 +0x1e0:  movzwl 0xe(%eax),%edx
08348a78 +0x1e4:  mov    0x8(%ebp),%eax
08348a7b +0x1e7:  mov    %dx,0x4a(%eax)
08348a7f +0x1eb:  mov    -0x3c(%ebp),%eax
08348a82 +0x1ee:  mov    0xc(%ebp),%edx
08348a85 +0x1f1:  imul   $0x57,%eax,%eax
08348a88 +0x1f4:  lea    (%edx,%eax,1),%eax
08348a8b +0x1f7:  add    $0x60,%eax
08348a8e +0x1fa:  movzwl 0x10(%eax),%edx
08348a92 +0x1fe:  mov    0x8(%ebp),%eax
08348a95 +0x201:  mov    %dx,0x4c(%eax)
08348a99 +0x205:  mov    -0x3c(%ebp),%eax
08348a9c +0x208:  mov    0xc(%ebp),%edx
08348a9f +0x20b:  imul   $0x57,%eax,%eax
08348aa2 +0x20e:  lea    (%edx,%eax,1),%eax
08348aa5 +0x211:  add    $0x60,%eax
08348aa8 +0x214:  mov    0x12(%eax),%edx
08348aab +0x217:  mov    0x8(%ebp),%eax
08348aae +0x21a:  mov    %edx,0x4e(%eax)
08348ab1 +0x21d:  mov    -0x3c(%ebp),%eax
08348ab4 +0x220:  mov    0xc(%ebp),%edx
08348ab7 +0x223:  imul   $0x57,%eax,%eax
08348aba +0x226:  lea    (%edx,%eax,1),%eax
08348abd +0x229:  add    $0x70,%eax
08348ac0 +0x22c:  movzbl 0x6(%eax),%edx
08348ac4 +0x230:  mov    0x8(%ebp),%eax
08348ac7 +0x233:  mov    %dl,0x7d4(%eax)
08348acd +0x239:  jmp    08348e13 <+0x57f>
08348ad2 +0x23e:  mov    -0x3c(%ebp),%eax
08348ad5 +0x241:  lea    -0x1(%eax),%ebx
08348ad8 +0x244:  mov    -0x3c(%ebp),%eax
08348adb +0x247:  mov    0xc(%ebp),%edx
08348ade +0x24a:  imul   $0x57,%eax,%eax
08348ae1 +0x24d:  lea    (%edx,%eax,1),%eax
08348ae4 +0x250:  add    $0x24,%eax
08348ae7 +0x253:  mov    (%eax),%eax
08348ae9 +0x255:  mov    0x8(%ebp),%ecx
08348aec +0x258:  imul   $0x52,%ebx,%edx
08348aef +0x25b:  lea    (%ecx,%edx,1),%edx
08348af2 +0x25e:  add    $0x50,%edx
08348af5 +0x261:  mov    %eax,0x2(%edx)
08348af8 +0x264:  mov    -0x3c(%ebp),%eax
08348afb +0x267:  lea    -0x1(%eax),%ebx
08348afe +0x26a:  mov    -0x3c(%ebp),%eax
08348b01 +0x26d:  mov    0xc(%ebp),%edx
08348b04 +0x270:  imul   $0x57,%eax,%eax
08348b07 +0x273:  lea    (%edx,%eax,1),%eax
08348b0a +0x276:  add    $0x28,%eax
08348b0d +0x279:  mov    (%eax),%eax
08348b0f +0x27b:  mov    0x8(%ebp),%ecx
08348b12 +0x27e:  imul   $0x52,%ebx,%edx
08348b15 +0x281:  lea    (%ecx,%edx,1),%edx
08348b18 +0x284:  add    $0x50,%edx
08348b1b +0x287:  mov    %eax,0x6(%edx)
08348b1e +0x28a:  mov    -0x3c(%ebp),%eax
08348b21 +0x28d:  lea    -0x1(%eax),%ebx
08348b24 +0x290:  mov    -0x3c(%ebp),%eax
08348b27 +0x293:  mov    0xc(%ebp),%edx
08348b2a +0x296:  imul   $0x57,%eax,%eax
08348b2d +0x299:  lea    (%edx,%eax,1),%eax
08348b30 +0x29c:  add    $0x20,%eax
08348b33 +0x29f:  movzwl 0xc(%eax),%eax
08348b37 +0x2a3:  mov    0x8(%ebp),%ecx
08348b3a +0x2a6:  imul   $0x52,%ebx,%edx
08348b3d +0x2a9:  lea    (%ecx,%edx,1),%edx
08348b40 +0x2ac:  add    $0x50,%edx
08348b43 +0x2af:  mov    %ax,0xa(%edx)
08348b47 +0x2b3:  mov    -0x3c(%ebp),%eax
08348b4a +0x2b6:  lea    -0x1(%eax),%ebx
08348b4d +0x2b9:  mov    -0x3c(%ebp),%eax
08348b50 +0x2bc:  mov    0xc(%ebp),%edx
08348b53 +0x2bf:  imul   $0x57,%eax,%eax
08348b56 +0x2c2:  lea    (%edx,%eax,1),%eax
08348b59 +0x2c5:  add    $0x20,%eax
08348b5c +0x2c8:  movzwl 0xe(%eax),%eax
08348b60 +0x2cc:  mov    0x8(%ebp),%ecx
08348b63 +0x2cf:  imul   $0x52,%ebx,%edx
08348b66 +0x2d2:  lea    (%ecx,%edx,1),%edx
08348b69 +0x2d5:  add    $0x50,%edx
08348b6c +0x2d8:  mov    %ax,0xc(%edx)
08348b70 +0x2dc:  mov    -0x3c(%ebp),%eax
08348b73 +0x2df:  lea    -0x1(%eax),%ebx
08348b76 +0x2e2:  mov    -0x3c(%ebp),%eax
08348b79 +0x2e5:  mov    0xc(%ebp),%edx
08348b7c +0x2e8:  imul   $0x57,%eax,%eax
08348b7f +0x2eb:  lea    (%edx,%eax,1),%eax
08348b82 +0x2ee:  add    $0x20,%eax
08348b85 +0x2f1:  movzwl 0x10(%eax),%eax
08348b89 +0x2f5:  mov    0x8(%ebp),%ecx
08348b8c +0x2f8:  imul   $0x52,%ebx,%edx
08348b8f +0x2fb:  lea    (%ecx,%edx,1),%edx
08348b92 +0x2fe:  add    $0x50,%edx
08348b95 +0x301:  mov    %ax,0xe(%edx)
08348b99 +0x305:  mov    -0x3c(%ebp),%eax
08348b9c +0x308:  lea    -0x1(%eax),%ebx
08348b9f +0x30b:  mov    -0x3c(%ebp),%eax
08348ba2 +0x30e:  mov    0xc(%ebp),%edx
08348ba5 +0x311:  imul   $0x57,%eax,%eax
08348ba8 +0x314:  lea    (%edx,%eax,1),%eax
08348bab +0x317:  add    $0x20,%eax
08348bae +0x31a:  movzwl 0x12(%eax),%eax
08348bb2 +0x31e:  mov    0x8(%ebp),%ecx
08348bb5 +0x321:  imul   $0x52,%ebx,%edx
08348bb8 +0x324:  lea    (%ecx,%edx,1),%edx
08348bbb +0x327:  add    $0x50,%edx
08348bbe +0x32a:  mov    %ax,0x10(%edx)
08348bc2 +0x32e:  movl   $0x0,-0x30(%ebp)
08348bc9 +0x335:  jmp    08348c0e <+0x37a>
08348bcb +0x337:  mov    -0x3c(%ebp),%eax
08348bce +0x33a:  lea    -0x1(%eax),%edx
08348bd1 +0x33d:  mov    -0x30(%ebp),%esi
08348bd4 +0x340:  mov    -0x3c(%ebp),%ecx
08348bd7 +0x343:  mov    -0x30(%ebp),%ebx
08348bda +0x346:  mov    0xc(%ebp),%eax
08348bdd +0x349:  add    $0x8,%ebx
08348be0 +0x34c:  add    %ebx,%ebx
08348be2 +0x34e:  imul   $0x57,%ecx,%ecx
08348be5 +0x351:  lea    (%ebx,%ecx,1),%ecx
08348be8 +0x354:  add    %ecx,%eax
08348bea +0x356:  add    $0x20,%eax
08348bed +0x359:  movzwl 0x4(%eax),%ebx
08348bf1 +0x35d:  mov    0x8(%ebp),%ecx
08348bf4 +0x360:  mov    %edx,%eax
08348bf6 +0x362:  shl    $0x2,%eax
08348bf9 +0x365:  add    %edx,%eax
08348bfb +0x367:  shl    $0x3,%eax
08348bfe +0x36a:  add    %edx,%eax
08348c00 +0x36c:  add    %esi,%eax
08348c02 +0x36e:  add    $0x30,%eax
08348c05 +0x371:  mov    %bx,0x2(%ecx,%eax,2)
08348c0a +0x376:  addl   $0x1,-0x30(%ebp)
08348c0e +0x37a:  cmpl   $0x3,-0x30(%ebp)
08348c12 +0x37e:  setle  %al
08348c15 +0x381:  test   %al,%al
08348c17 +0x383:  jne    08348bcb <+0x337>
08348c19 +0x385:  movl   $0x0,-0x2c(%ebp)
08348c20 +0x38c:  jmp    08348c65 <+0x3d1>
08348c22 +0x38e:  mov    -0x3c(%ebp),%eax
08348c25 +0x391:  lea    -0x1(%eax),%edx
08348c28 +0x394:  mov    -0x2c(%ebp),%esi
08348c2b +0x397:  mov    -0x3c(%ebp),%ecx
08348c2e +0x39a:  mov    -0x2c(%ebp),%ebx
08348c31 +0x39d:  mov    0xc(%ebp),%eax
08348c34 +0x3a0:  add    $0x8,%ebx
08348c37 +0x3a3:  add    %ebx,%ebx
08348c39 +0x3a5:  imul   $0x57,%ecx,%ecx
08348c3c +0x3a8:  lea    (%ebx,%ecx,1),%ecx
08348c3f +0x3ab:  add    %ecx,%eax
08348c41 +0x3ad:  add    $0x20,%eax
08348c44 +0x3b0:  movzwl 0xc(%eax),%ebx
08348c48 +0x3b4:  mov    0x8(%ebp),%ecx
08348c4b +0x3b7:  mov    %edx,%eax
08348c4d +0x3b9:  shl    $0x2,%eax
08348c50 +0x3bc:  add    %edx,%eax
08348c52 +0x3be:  shl    $0x3,%eax
08348c55 +0x3c1:  add    %edx,%eax
08348c57 +0x3c3:  add    %esi,%eax
08348c59 +0x3c5:  add    $0x30,%eax
08348c5c +0x3c8:  mov    %bx,0xa(%ecx,%eax,2)
08348c61 +0x3cd:  addl   $0x1,-0x2c(%ebp)
08348c65 +0x3d1:  cmpl   $0x10,-0x2c(%ebp)
08348c69 +0x3d5:  setle  %al
08348c6c +0x3d8:  test   %al,%al
08348c6e +0x3da:  jne    08348c22 <+0x38e>
08348c70 +0x3dc:  mov    -0x3c(%ebp),%eax
08348c73 +0x3df:  lea    -0x1(%eax),%ebx
08348c76 +0x3e2:  mov    -0x3c(%ebp),%eax
08348c79 +0x3e5:  mov    0xc(%ebp),%edx
08348c7c +0x3e8:  imul   $0x57,%eax,%eax
08348c7f +0x3eb:  lea    (%edx,%eax,1),%eax
08348c82 +0x3ee:  add    $0x50,%eax
08348c85 +0x3f1:  mov    0xe(%eax),%eax
08348c88 +0x3f4:  mov    0x8(%ebp),%ecx
08348c8b +0x3f7:  imul   $0x52,%ebx,%edx
08348c8e +0x3fa:  lea    (%ecx,%edx,1),%edx
08348c91 +0x3fd:  add    $0x8c,%edx
08348c97 +0x403:  mov    %eax,(%edx)
08348c99 +0x405:  mov    -0x3c(%ebp),%eax
08348c9c +0x408:  lea    -0x1(%eax),%ebx
08348c9f +0x40b:  mov    -0x3c(%ebp),%eax
08348ca2 +0x40e:  mov    0xc(%ebp),%edx
08348ca5 +0x411:  imul   $0x57,%eax,%eax
08348ca8 +0x414:  lea    (%edx,%eax,1),%eax
08348cab +0x417:  add    $0x50,%eax
08348cae +0x41a:  movzwl 0x12(%eax),%eax
08348cb2 +0x41e:  mov    0x8(%ebp),%ecx
08348cb5 +0x421:  imul   $0x52,%ebx,%edx
08348cb8 +0x424:  lea    (%ecx,%edx,1),%edx
08348cbb +0x427:  sub    $0xffffff80,%edx
08348cbe +0x42a:  mov    %ax,0x10(%edx)
08348cc2 +0x42e:  mov    -0x3c(%ebp),%eax
08348cc5 +0x431:  lea    -0x1(%eax),%ebx
08348cc8 +0x434:  mov    -0x3c(%ebp),%eax
08348ccb +0x437:  mov    0xc(%ebp),%edx
08348cce +0x43a:  imul   $0x57,%eax,%eax
08348cd1 +0x43d:  lea    (%edx,%eax,1),%eax
08348cd4 +0x440:  add    $0x60,%eax
08348cd7 +0x443:  movzwl 0x4(%eax),%eax
08348cdb +0x447:  mov    0x8(%ebp),%ecx
08348cde +0x44a:  imul   $0x52,%ebx,%edx
08348ce1 +0x44d:  lea    (%ecx,%edx,1),%edx
08348ce4 +0x450:  add    $0x90,%edx
08348cea +0x456:  mov    %ax,0x2(%edx)
08348cee +0x45a:  mov    -0x3c(%ebp),%eax
08348cf1 +0x45d:  lea    -0x1(%eax),%ebx
08348cf4 +0x460:  mov    -0x3c(%ebp),%eax
08348cf7 +0x463:  mov    0xc(%ebp),%edx
08348cfa +0x466:  imul   $0x57,%eax,%eax
08348cfd +0x469:  lea    (%edx,%eax,1),%eax
08348d00 +0x46c:  add    $0x60,%eax
08348d03 +0x46f:  mov    0x6(%eax),%eax
08348d06 +0x472:  mov    0x8(%ebp),%ecx
08348d09 +0x475:  imul   $0x52,%ebx,%edx
08348d0c +0x478:  lea    (%ecx,%edx,1),%edx
08348d0f +0x47b:  add    $0x94,%edx
08348d15 +0x481:  mov    %eax,(%edx)
08348d17 +0x483:  mov    -0x3c(%ebp),%eax
08348d1a +0x486:  lea    -0x1(%eax),%ebx
08348d1d +0x489:  mov    -0x3c(%ebp),%eax
08348d20 +0x48c:  mov    0xc(%ebp),%edx
08348d23 +0x48f:  imul   $0x57,%eax,%eax
08348d26 +0x492:  lea    (%edx,%eax,1),%eax
08348d29 +0x495:  add    $0x60,%eax
08348d2c +0x498:  movzwl 0xa(%eax),%eax
08348d30 +0x49c:  mov    0x8(%ebp),%ecx
08348d33 +0x49f:  imul   $0x52,%ebx,%edx
08348d36 +0x4a2:  lea    (%ecx,%edx,1),%edx
08348d39 +0x4a5:  add    $0x90,%edx
08348d3f +0x4ab:  mov    %ax,0x8(%edx)
08348d43 +0x4af:  mov    -0x3c(%ebp),%eax
08348d46 +0x4b2:  lea    -0x1(%eax),%ebx
08348d49 +0x4b5:  mov    -0x3c(%ebp),%eax
08348d4c +0x4b8:  mov    0xc(%ebp),%edx
08348d4f +0x4bb:  imul   $0x57,%eax,%eax
08348d52 +0x4be:  lea    (%edx,%eax,1),%eax
08348d55 +0x4c1:  add    $0x60,%eax
08348d58 +0x4c4:  movzwl 0xc(%eax),%eax
08348d5c +0x4c8:  mov    0x8(%ebp),%ecx
08348d5f +0x4cb:  imul   $0x52,%ebx,%edx
08348d62 +0x4ce:  lea    (%ecx,%edx,1),%edx
08348d65 +0x4d1:  add    $0x90,%edx
08348d6b +0x4d7:  mov    %ax,0xa(%edx)
08348d6f +0x4db:  mov    -0x3c(%ebp),%eax
08348d72 +0x4de:  lea    -0x1(%eax),%ebx
08348d75 +0x4e1:  mov    -0x3c(%ebp),%eax
08348d78 +0x4e4:  mov    0xc(%ebp),%edx
08348d7b +0x4e7:  imul   $0x57,%eax,%eax
08348d7e +0x4ea:  lea    (%edx,%eax,1),%eax
08348d81 +0x4ed:  add    $0x60,%eax
08348d84 +0x4f0:  movzwl 0xe(%eax),%eax
08348d88 +0x4f4:  mov    0x8(%ebp),%ecx
08348d8b +0x4f7:  imul   $0x52,%ebx,%edx
08348d8e +0x4fa:  lea    (%ecx,%edx,1),%edx
08348d91 +0x4fd:  add    $0x90,%edx
08348d97 +0x503:  mov    %ax,0xc(%edx)
08348d9b +0x507:  mov    -0x3c(%ebp),%eax
08348d9e +0x50a:  lea    -0x1(%eax),%ebx
08348da1 +0x50d:  mov    -0x3c(%ebp),%eax
08348da4 +0x510:  mov    0xc(%ebp),%edx
08348da7 +0x513:  imul   $0x57,%eax,%eax
08348daa +0x516:  lea    (%edx,%eax,1),%eax
08348dad +0x519:  add    $0x60,%eax
08348db0 +0x51c:  movzwl 0x10(%eax),%eax
08348db4 +0x520:  mov    0x8(%ebp),%ecx
08348db7 +0x523:  imul   $0x52,%ebx,%edx
08348dba +0x526:  lea    (%ecx,%edx,1),%edx
08348dbd +0x529:  add    $0x90,%edx
08348dc3 +0x52f:  mov    %ax,0xe(%edx)
08348dc7 +0x533:  mov    -0x3c(%ebp),%eax
08348dca +0x536:  lea    -0x1(%eax),%ebx
08348dcd +0x539:  mov    -0x3c(%ebp),%eax
08348dd0 +0x53c:  mov    0xc(%ebp),%edx
08348dd3 +0x53f:  imul   $0x57,%eax,%eax
08348dd6 +0x542:  lea    (%edx,%eax,1),%eax
08348dd9 +0x545:  add    $0x60,%eax
08348ddc +0x548:  mov    0x12(%eax),%eax
08348ddf +0x54b:  mov    0x8(%ebp),%ecx
08348de2 +0x54e:  imul   $0x52,%ebx,%edx
08348de5 +0x551:  lea    (%ecx,%edx,1),%edx
08348de8 +0x554:  add    $0xa0,%edx
08348dee +0x55a:  mov    %eax,(%edx)
08348df0 +0x55c:  mov    -0x3c(%ebp),%eax
08348df3 +0x55f:  lea    -0x1(%eax),%ecx
08348df6 +0x562:  mov    -0x3c(%ebp),%eax
08348df9 +0x565:  mov    0xc(%ebp),%edx
08348dfc +0x568:  imul   $0x57,%eax,%eax
08348dff +0x56b:  lea    (%edx,%eax,1),%eax
08348e02 +0x56e:  add    $0x70,%eax
08348e05 +0x571:  movzbl 0x6(%eax),%edx
08348e09 +0x575:  mov    0x8(%ebp),%eax
08348e0c +0x578:  mov    %dl,0x7d5(%eax,%ecx,1)
08348e13 +0x57f:  mov    -0x3c(%ebp),%edx
08348e16 +0x582:  mov    %edx,%eax
08348e18 +0x584:  add    %eax,%eax
08348e1a +0x586:  add    %edx,%eax
08348e1c +0x588:  shl    $0x2,%eax
08348e1f +0x58b:  add    $0x280,%eax
08348e24 +0x590:  add    0xc(%ebp),%eax
08348e27 +0x593:  lea    0x8(%eax),%ecx
08348e2a +0x596:  mov    -0x3c(%ebp),%edx
08348e2d +0x599:  mov    %edx,%eax
08348e2f +0x59b:  add    %eax,%eax
08348e31 +0x59d:  add    %edx,%eax
08348e33 +0x59f:  shl    $0x2,%eax
08348e36 +0x5a2:  add    $0x240,%eax
08348e3b +0x5a7:  add    0x8(%ebp),%eax
08348e3e +0x5aa:  mov    %ecx,0x4(%esp)
08348e42 +0x5ae:  mov    %eax,(%esp)
08348e45 +0x5b1:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
08348e4a +0x5b6:  addl   $0x1,-0x3c(%ebp)
08348e4e +0x5ba:  cmpl   $0x6,-0x3c(%ebp)
08348e52 +0x5be:  setle  %al
08348e55 +0x5c1:  test   %al,%al
08348e57 +0x5c3:  jne    083488a9 <+0x15>
08348e5d +0x5c9:  movl   $0x0,-0x28(%ebp)
08348e64 +0x5d0:  jmp    083493d2 <+0xb3e>
08348e69 +0x5d5:  movl   $0x0,-0x24(%ebp)
08348e70 +0x5dc:  jmp    083493bf <+0xb2b>
08348e75 +0x5e1:  mov    -0x28(%ebp),%edx
08348e78 +0x5e4:  mov    -0x24(%ebp),%eax
08348e7b +0x5e7:  mov    -0x28(%ebp),%esi
08348e7e +0x5ea:  mov    -0x24(%ebp),%ebx
08348e81 +0x5ed:  mov    0xc(%ebp),%ecx
08348e84 +0x5f0:  imul   $0x57,%ebx,%ebx
08348e87 +0x5f3:  shl    $0x8,%esi
08348e8a +0x5f6:  add    %esi,%ebx
08348e8c +0x5f8:  add    %ebx,%ecx
08348e8e +0x5fa:  add    $0x3d0,%ecx
08348e94 +0x600:  mov    (%ecx),%ecx
08348e96 +0x602:  mov    0x8(%ebp),%ebx
08348e99 +0x605:  imul   $0x52,%eax,%esi
08348e9c +0x608:  mov    %edx,%eax
08348e9e +0x60a:  add    %eax,%eax
08348ea0 +0x60c:  add    %edx,%eax
08348ea2 +0x60e:  shl    $0x6,%eax
08348ea5 +0x611:  lea    (%esi,%eax,1),%eax
08348ea8 +0x614:  lea    (%ebx,%eax,1),%eax
08348eab +0x617:  add    $0x294,%eax
08348eb0 +0x61c:  mov    %ecx,(%eax)
08348eb2 +0x61e:  mov    -0x28(%ebp),%edx
08348eb5 +0x621:  mov    -0x24(%ebp),%eax
08348eb8 +0x624:  mov    -0x28(%ebp),%esi
08348ebb +0x627:  mov    -0x24(%ebp),%ebx
08348ebe +0x62a:  mov    0xc(%ebp),%ecx
08348ec1 +0x62d:  imul   $0x57,%ebx,%ebx
08348ec4 +0x630:  shl    $0x8,%esi
08348ec7 +0x633:  add    %esi,%ebx
08348ec9 +0x635:  add    %ebx,%ecx
08348ecb +0x637:  add    $0x3d4,%ecx
08348ed1 +0x63d:  mov    (%ecx),%ecx
08348ed3 +0x63f:  mov    0x8(%ebp),%ebx
08348ed6 +0x642:  imul   $0x52,%eax,%esi
08348ed9 +0x645:  mov    %edx,%eax
08348edb +0x647:  add    %eax,%eax
08348edd +0x649:  add    %edx,%eax
08348edf +0x64b:  shl    $0x6,%eax
08348ee2 +0x64e:  lea    (%esi,%eax,1),%eax
08348ee5 +0x651:  lea    (%ebx,%eax,1),%eax
08348ee8 +0x654:  add    $0x298,%eax
08348eed +0x659:  mov    %ecx,(%eax)
08348eef +0x65b:  mov    -0x28(%ebp),%edx
08348ef2 +0x65e:  mov    -0x24(%ebp),%eax
08348ef5 +0x661:  mov    -0x28(%ebp),%esi
08348ef8 +0x664:  mov    -0x24(%ebp),%ebx
08348efb +0x667:  mov    0xc(%ebp),%ecx
08348efe +0x66a:  imul   $0x57,%ebx,%ebx
08348f01 +0x66d:  shl    $0x8,%esi
08348f04 +0x670:  add    %esi,%ebx
08348f06 +0x672:  add    %ebx,%ecx
08348f08 +0x674:  add    $0x3d0,%ecx
08348f0e +0x67a:  movzwl 0x8(%ecx),%ecx
08348f12 +0x67e:  mov    0x8(%ebp),%ebx
08348f15 +0x681:  imul   $0x52,%eax,%esi
08348f18 +0x684:  mov    %edx,%eax
08348f1a +0x686:  add    %eax,%eax
08348f1c +0x688:  add    %edx,%eax
08348f1e +0x68a:  shl    $0x6,%eax
08348f21 +0x68d:  lea    (%esi,%eax,1),%eax
08348f24 +0x690:  lea    (%ebx,%eax,1),%eax
08348f27 +0x693:  add    $0x290,%eax
08348f2c +0x698:  mov    %cx,0xc(%eax)
08348f30 +0x69c:  mov    -0x28(%ebp),%edx
08348f33 +0x69f:  mov    -0x24(%ebp),%eax
08348f36 +0x6a2:  mov    -0x28(%ebp),%esi
08348f39 +0x6a5:  mov    -0x24(%ebp),%ebx
08348f3c +0x6a8:  mov    0xc(%ebp),%ecx
08348f3f +0x6ab:  imul   $0x57,%ebx,%ebx
08348f42 +0x6ae:  shl    $0x8,%esi
08348f45 +0x6b1:  add    %esi,%ebx
08348f47 +0x6b3:  add    %ebx,%ecx
08348f49 +0x6b5:  add    $0x3d0,%ecx
08348f4f +0x6bb:  movzwl 0xa(%ecx),%ecx
08348f53 +0x6bf:  mov    0x8(%ebp),%ebx
08348f56 +0x6c2:  imul   $0x52,%eax,%esi
08348f59 +0x6c5:  mov    %edx,%eax
08348f5b +0x6c7:  add    %eax,%eax
08348f5d +0x6c9:  add    %edx,%eax
08348f5f +0x6cb:  shl    $0x6,%eax
08348f62 +0x6ce:  lea    (%esi,%eax,1),%eax
08348f65 +0x6d1:  lea    (%ebx,%eax,1),%eax
08348f68 +0x6d4:  add    $0x290,%eax
08348f6d +0x6d9:  mov    %cx,0xe(%eax)
08348f71 +0x6dd:  mov    -0x28(%ebp),%edx
08348f74 +0x6e0:  mov    -0x24(%ebp),%eax
08348f77 +0x6e3:  mov    -0x28(%ebp),%esi
08348f7a +0x6e6:  mov    -0x24(%ebp),%ebx
08348f7d +0x6e9:  mov    0xc(%ebp),%ecx
08348f80 +0x6ec:  imul   $0x57,%ebx,%ebx
08348f83 +0x6ef:  shl    $0x8,%esi
08348f86 +0x6f2:  add    %esi,%ebx
08348f88 +0x6f4:  add    %ebx,%ecx
08348f8a +0x6f6:  add    $0x3d0,%ecx
08348f90 +0x6fc:  movzwl 0xc(%ecx),%ecx
08348f94 +0x700:  mov    0x8(%ebp),%ebx
08348f97 +0x703:  imul   $0x52,%eax,%esi
08348f9a +0x706:  mov    %edx,%eax
08348f9c +0x708:  add    %eax,%eax
08348f9e +0x70a:  add    %edx,%eax
08348fa0 +0x70c:  shl    $0x6,%eax
08348fa3 +0x70f:  lea    (%esi,%eax,1),%eax
08348fa6 +0x712:  lea    (%ebx,%eax,1),%eax
08348fa9 +0x715:  add    $0x290,%eax
08348fae +0x71a:  mov    %cx,0x10(%eax)
08348fb2 +0x71e:  mov    -0x28(%ebp),%edx
08348fb5 +0x721:  mov    -0x24(%ebp),%eax
08348fb8 +0x724:  mov    -0x28(%ebp),%esi
08348fbb +0x727:  mov    -0x24(%ebp),%ebx
08348fbe +0x72a:  mov    0xc(%ebp),%ecx
08348fc1 +0x72d:  imul   $0x57,%ebx,%ebx
08348fc4 +0x730:  shl    $0x8,%esi
08348fc7 +0x733:  add    %esi,%ebx
08348fc9 +0x735:  add    %ebx,%ecx
08348fcb +0x737:  add    $0x3d0,%ecx
08348fd1 +0x73d:  movzwl 0xe(%ecx),%ecx
08348fd5 +0x741:  mov    0x8(%ebp),%ebx
08348fd8 +0x744:  imul   $0x52,%eax,%esi
08348fdb +0x747:  mov    %edx,%eax
08348fdd +0x749:  add    %eax,%eax
08348fdf +0x74b:  add    %edx,%eax
08348fe1 +0x74d:  shl    $0x6,%eax
08348fe4 +0x750:  lea    (%esi,%eax,1),%eax
08348fe7 +0x753:  lea    (%ebx,%eax,1),%eax
08348fea +0x756:  add    $0x290,%eax
08348fef +0x75b:  mov    %cx,0x12(%eax)
08348ff3 +0x75f:  movl   $0x0,-0x20(%ebp)
08348ffa +0x766:  jmp    08349061 <+0x7cd>
08348ffc +0x768:  mov    -0x28(%ebp),%edi
08348fff +0x76b:  mov    -0x24(%ebp),%esi
08349002 +0x76e:  mov    -0x20(%ebp),%eax
08349005 +0x771:  mov    %eax,-0x58(%ebp)
08349008 +0x774:  mov    -0x28(%ebp),%eax
0834900b +0x777:  mov    %eax,-0x54(%ebp)
0834900e +0x77a:  mov    -0x24(%ebp),%ecx
08349011 +0x77d:  mov    -0x20(%ebp),%eax
08349014 +0x780:  mov    0xc(%ebp),%ebx
08349017 +0x783:  add    $0x8,%eax
0834901a +0x786:  lea    (%eax,%eax,1),%edx
0834901d +0x789:  imul   $0x57,%ecx,%eax
08349020 +0x78c:  add    %eax,%edx
08349022 +0x78e:  mov    -0x54(%ebp),%eax
08349025 +0x791:  shl    $0x8,%eax
08349028 +0x794:  lea    (%edx,%eax,1),%eax
0834902b +0x797:  lea    (%ebx,%eax,1),%eax
0834902e +0x79a:  add    $0x3d0,%eax
08349033 +0x79f:  movzwl (%eax),%ebx
08349036 +0x7a2:  mov    0x8(%ebp),%ecx
08349039 +0x7a5:  mov    %esi,%eax
0834903b +0x7a7:  shl    $0x2,%eax
0834903e +0x7aa:  add    %esi,%eax
08349040 +0x7ac:  shl    $0x3,%eax
08349043 +0x7af:  add    %esi,%eax
08349045 +0x7b1:  mov    %edi,%edx
08349047 +0x7b3:  add    %edx,%edx
08349049 +0x7b5:  add    %edi,%edx
0834904b +0x7b7:  shl    $0x5,%edx
0834904e +0x7ba:  add    %edx,%eax
08349050 +0x7bc:  add    -0x58(%ebp),%eax
08349053 +0x7bf:  add    $0x150,%eax
08349058 +0x7c4:  mov    %bx,0x4(%ecx,%eax,2)
0834905d +0x7c9:  addl   $0x1,-0x20(%ebp)
08349061 +0x7cd:  cmpl   $0x3,-0x20(%ebp)
08349065 +0x7d1:  setle  %al
08349068 +0x7d4:  test   %al,%al
0834906a +0x7d6:  jne    08348ffc <+0x768>
0834906c +0x7d8:  movl   $0x0,-0x1c(%ebp)
08349073 +0x7df:  jmp    083490db <+0x847>
08349075 +0x7e1:  mov    -0x28(%ebp),%edi
08349078 +0x7e4:  mov    -0x24(%ebp),%esi
0834907b +0x7e7:  mov    -0x1c(%ebp),%eax
0834907e +0x7ea:  mov    %eax,-0x50(%ebp)
08349081 +0x7ed:  mov    -0x28(%ebp),%eax
08349084 +0x7f0:  mov    %eax,-0x4c(%ebp)
08349087 +0x7f3:  mov    -0x24(%ebp),%ecx
0834908a +0x7f6:  mov    -0x1c(%ebp),%eax
0834908d +0x7f9:  mov    0xc(%ebp),%ebx
08349090 +0x7fc:  add    $0x8,%eax
08349093 +0x7ff:  lea    (%eax,%eax,1),%edx
08349096 +0x802:  imul   $0x57,%ecx,%eax
08349099 +0x805:  add    %eax,%edx
0834909b +0x807:  mov    -0x4c(%ebp),%eax
0834909e +0x80a:  shl    $0x8,%eax
083490a1 +0x80d:  lea    (%edx,%eax,1),%eax
083490a4 +0x810:  lea    (%ebx,%eax,1),%eax
083490a7 +0x813:  add    $0x3d0,%eax
083490ac +0x818:  movzwl 0x8(%eax),%ebx
083490b0 +0x81c:  mov    0x8(%ebp),%ecx
083490b3 +0x81f:  mov    %esi,%eax
083490b5 +0x821:  shl    $0x2,%eax
083490b8 +0x824:  add    %esi,%eax
083490ba +0x826:  shl    $0x3,%eax
083490bd +0x829:  add    %esi,%eax
083490bf +0x82b:  mov    %edi,%edx
083490c1 +0x82d:  add    %edx,%edx
083490c3 +0x82f:  add    %edi,%edx
083490c5 +0x831:  shl    $0x5,%edx
083490c8 +0x834:  add    %edx,%eax
083490ca +0x836:  add    -0x50(%ebp),%eax
083490cd +0x839:  add    $0x150,%eax
083490d2 +0x83e:  mov    %bx,0xc(%ecx,%eax,2)
083490d7 +0x843:  addl   $0x1,-0x1c(%ebp)
083490db +0x847:  cmpl   $0x10,-0x1c(%ebp)
083490df +0x84b:  setle  %al
083490e2 +0x84e:  test   %al,%al
083490e4 +0x850:  jne    08349075 <+0x7e1>
083490e6 +0x852:  mov    -0x28(%ebp),%edx
083490e9 +0x855:  mov    -0x24(%ebp),%eax
083490ec +0x858:  mov    -0x28(%ebp),%esi
083490ef +0x85b:  mov    -0x24(%ebp),%ebx
083490f2 +0x85e:  mov    0xc(%ebp),%ecx
083490f5 +0x861:  imul   $0x57,%ebx,%ebx
083490f8 +0x864:  shl    $0x8,%esi
083490fb +0x867:  add    %esi,%ebx
083490fd +0x869:  add    %ebx,%ecx
083490ff +0x86b:  add    $0x400,%ecx
08349105 +0x871:  mov    0xa(%ecx),%ecx
08349108 +0x874:  mov    0x8(%ebp),%ebx
0834910b +0x877:  imul   $0x52,%eax,%esi
0834910e +0x87a:  mov    %edx,%eax
08349110 +0x87c:  add    %eax,%eax
08349112 +0x87e:  add    %edx,%eax
08349114 +0x880:  shl    $0x6,%eax
08349117 +0x883:  lea    (%esi,%eax,1),%eax
0834911a +0x886:  lea    (%ebx,%eax,1),%eax
0834911d +0x889:  add    $0x2c0,%eax
08349122 +0x88e:  mov    %ecx,0xe(%eax)
08349125 +0x891:  mov    -0x28(%ebp),%edx
08349128 +0x894:  mov    -0x24(%ebp),%eax
0834912b +0x897:  mov    -0x28(%ebp),%esi
0834912e +0x89a:  mov    -0x24(%ebp),%ebx
08349131 +0x89d:  mov    0xc(%ebp),%ecx
08349134 +0x8a0:  imul   $0x57,%ebx,%ebx
08349137 +0x8a3:  shl    $0x8,%esi
0834913a +0x8a6:  add    %esi,%ebx
0834913c +0x8a8:  add    %ebx,%ecx
0834913e +0x8aa:  add    $0x400,%ecx
08349144 +0x8b0:  movzwl 0xe(%ecx),%ecx
08349148 +0x8b4:  mov    0x8(%ebp),%ebx
0834914b +0x8b7:  imul   $0x52,%eax,%esi
0834914e +0x8ba:  mov    %edx,%eax
08349150 +0x8bc:  add    %eax,%eax
08349152 +0x8be:  add    %edx,%eax
08349154 +0x8c0:  shl    $0x6,%eax
08349157 +0x8c3:  lea    (%esi,%eax,1),%eax
0834915a +0x8c6:  lea    (%ebx,%eax,1),%eax
0834915d +0x8c9:  add    $0x2c0,%eax
08349162 +0x8ce:  mov    %cx,0x12(%eax)
08349166 +0x8d2:  mov    -0x28(%ebp),%edx
08349169 +0x8d5:  mov    -0x24(%ebp),%eax
0834916c +0x8d8:  mov    -0x28(%ebp),%esi
0834916f +0x8db:  mov    -0x24(%ebp),%ebx
08349172 +0x8de:  mov    0xc(%ebp),%ecx
08349175 +0x8e1:  imul   $0x57,%ebx,%ebx
08349178 +0x8e4:  shl    $0x8,%esi
0834917b +0x8e7:  add    %esi,%ebx
0834917d +0x8e9:  add    %ebx,%ecx
0834917f +0x8eb:  add    $0x410,%ecx
08349185 +0x8f1:  movzwl (%ecx),%ecx
08349188 +0x8f4:  mov    0x8(%ebp),%ebx
0834918b +0x8f7:  imul   $0x52,%eax,%esi
0834918e +0x8fa:  mov    %edx,%eax
08349190 +0x8fc:  add    %eax,%eax
08349192 +0x8fe:  add    %edx,%eax
08349194 +0x900:  shl    $0x6,%eax
08349197 +0x903:  lea    (%esi,%eax,1),%eax
0834919a +0x906:  lea    (%ebx,%eax,1),%eax
0834919d +0x909:  add    $0x2d0,%eax
083491a2 +0x90e:  mov    %cx,0x4(%eax)
083491a6 +0x912:  mov    -0x28(%ebp),%edx
083491a9 +0x915:  mov    -0x24(%ebp),%eax
083491ac +0x918:  mov    -0x28(%ebp),%esi
083491af +0x91b:  mov    -0x24(%ebp),%ebx
083491b2 +0x91e:  mov    0xc(%ebp),%ecx
083491b5 +0x921:  imul   $0x57,%ebx,%ebx
083491b8 +0x924:  shl    $0x8,%esi
083491bb +0x927:  add    %esi,%ebx
083491bd +0x929:  add    %ebx,%ecx
083491bf +0x92b:  add    $0x410,%ecx
083491c5 +0x931:  mov    0x2(%ecx),%ecx
083491c8 +0x934:  mov    0x8(%ebp),%ebx
083491cb +0x937:  imul   $0x52,%eax,%esi
083491ce +0x93a:  mov    %edx,%eax
083491d0 +0x93c:  add    %eax,%eax
083491d2 +0x93e:  add    %edx,%eax
083491d4 +0x940:  shl    $0x6,%eax
083491d7 +0x943:  lea    (%esi,%eax,1),%eax
083491da +0x946:  lea    (%ebx,%eax,1),%eax
083491dd +0x949:  add    $0x2d0,%eax
083491e2 +0x94e:  mov    %ecx,0x6(%eax)
083491e5 +0x951:  mov    -0x28(%ebp),%edx
083491e8 +0x954:  mov    -0x24(%ebp),%eax
083491eb +0x957:  mov    -0x28(%ebp),%esi
083491ee +0x95a:  mov    -0x24(%ebp),%ebx
083491f1 +0x95d:  mov    0xc(%ebp),%ecx
083491f4 +0x960:  imul   $0x57,%ebx,%ebx
083491f7 +0x963:  shl    $0x8,%esi
083491fa +0x966:  add    %esi,%ebx
083491fc +0x968:  add    %ebx,%ecx
083491fe +0x96a:  add    $0x410,%ecx
08349204 +0x970:  movzwl 0x6(%ecx),%ecx
08349208 +0x974:  mov    0x8(%ebp),%ebx
0834920b +0x977:  imul   $0x52,%eax,%esi
0834920e +0x97a:  mov    %edx,%eax
08349210 +0x97c:  add    %eax,%eax
08349212 +0x97e:  add    %edx,%eax
08349214 +0x980:  shl    $0x6,%eax
08349217 +0x983:  lea    (%esi,%eax,1),%eax
0834921a +0x986:  lea    (%ebx,%eax,1),%eax
0834921d +0x989:  add    $0x2d0,%eax
08349222 +0x98e:  mov    %cx,0xa(%eax)
08349226 +0x992:  mov    -0x28(%ebp),%edx
08349229 +0x995:  mov    -0x24(%ebp),%eax
0834922c +0x998:  mov    -0x28(%ebp),%esi
0834922f +0x99b:  mov    -0x24(%ebp),%ebx
08349232 +0x99e:  mov    0xc(%ebp),%ecx
08349235 +0x9a1:  imul   $0x57,%ebx,%ebx
08349238 +0x9a4:  shl    $0x8,%esi
0834923b +0x9a7:  add    %esi,%ebx
0834923d +0x9a9:  add    %ebx,%ecx
0834923f +0x9ab:  add    $0x410,%ecx
08349245 +0x9b1:  movzwl 0x8(%ecx),%ecx
08349249 +0x9b5:  mov    0x8(%ebp),%ebx
0834924c +0x9b8:  imul   $0x52,%eax,%esi
0834924f +0x9bb:  mov    %edx,%eax
08349251 +0x9bd:  add    %eax,%eax
08349253 +0x9bf:  add    %edx,%eax
08349255 +0x9c1:  shl    $0x6,%eax
08349258 +0x9c4:  lea    (%esi,%eax,1),%eax
0834925b +0x9c7:  lea    (%ebx,%eax,1),%eax
0834925e +0x9ca:  add    $0x2d0,%eax
08349263 +0x9cf:  mov    %cx,0xc(%eax)
08349267 +0x9d3:  mov    -0x28(%ebp),%edx
0834926a +0x9d6:  mov    -0x24(%ebp),%eax
0834926d +0x9d9:  mov    -0x28(%ebp),%esi
08349270 +0x9dc:  mov    -0x24(%ebp),%ebx
08349273 +0x9df:  mov    0xc(%ebp),%ecx
08349276 +0x9e2:  imul   $0x57,%ebx,%ebx
08349279 +0x9e5:  shl    $0x8,%esi
0834927c +0x9e8:  add    %esi,%ebx
0834927e +0x9ea:  add    %ebx,%ecx
08349280 +0x9ec:  add    $0x410,%ecx
08349286 +0x9f2:  movzwl 0xa(%ecx),%ecx
0834928a +0x9f6:  mov    0x8(%ebp),%ebx
0834928d +0x9f9:  imul   $0x52,%eax,%esi
08349290 +0x9fc:  mov    %edx,%eax
08349292 +0x9fe:  add    %eax,%eax
08349294 +0xa00:  add    %edx,%eax
08349296 +0xa02:  shl    $0x6,%eax
08349299 +0xa05:  lea    (%esi,%eax,1),%eax
0834929c +0xa08:  lea    (%ebx,%eax,1),%eax
0834929f +0xa0b:  add    $0x2d0,%eax
083492a4 +0xa10:  mov    %cx,0xe(%eax)
083492a8 +0xa14:  mov    -0x28(%ebp),%edx
083492ab +0xa17:  mov    -0x24(%ebp),%eax
083492ae +0xa1a:  mov    -0x28(%ebp),%esi
083492b1 +0xa1d:  mov    -0x24(%ebp),%ebx
083492b4 +0xa20:  mov    0xc(%ebp),%ecx
083492b7 +0xa23:  imul   $0x57,%ebx,%ebx
083492ba +0xa26:  shl    $0x8,%esi
083492bd +0xa29:  add    %esi,%ebx
083492bf +0xa2b:  add    %ebx,%ecx
083492c1 +0xa2d:  add    $0x410,%ecx
083492c7 +0xa33:  movzwl 0xc(%ecx),%ecx
083492cb +0xa37:  mov    0x8(%ebp),%ebx
083492ce +0xa3a:  imul   $0x52,%eax,%esi
083492d1 +0xa3d:  mov    %edx,%eax
083492d3 +0xa3f:  add    %eax,%eax
083492d5 +0xa41:  add    %edx,%eax
083492d7 +0xa43:  shl    $0x6,%eax
083492da +0xa46:  lea    (%esi,%eax,1),%eax
083492dd +0xa49:  lea    (%ebx,%eax,1),%eax
083492e0 +0xa4c:  add    $0x2d0,%eax
083492e5 +0xa51:  mov    %cx,0x10(%eax)
083492e9 +0xa55:  mov    -0x28(%ebp),%edx
083492ec +0xa58:  mov    -0x24(%ebp),%eax
083492ef +0xa5b:  mov    -0x28(%ebp),%esi
083492f2 +0xa5e:  mov    -0x24(%ebp),%ebx
083492f5 +0xa61:  mov    0xc(%ebp),%ecx
083492f8 +0xa64:  imul   $0x57,%ebx,%ebx
083492fb +0xa67:  shl    $0x8,%esi
083492fe +0xa6a:  add    %esi,%ebx
08349300 +0xa6c:  add    %ebx,%ecx
08349302 +0xa6e:  add    $0x410,%ecx
08349308 +0xa74:  mov    0xe(%ecx),%ecx
0834930b +0xa77:  mov    0x8(%ebp),%ebx
0834930e +0xa7a:  imul   $0x52,%eax,%esi
08349311 +0xa7d:  mov    %edx,%eax
08349313 +0xa7f:  add    %eax,%eax
08349315 +0xa81:  add    %edx,%eax
08349317 +0xa83:  shl    $0x6,%eax
0834931a +0xa86:  lea    (%esi,%eax,1),%eax
0834931d +0xa89:  lea    (%ebx,%eax,1),%eax
08349320 +0xa8c:  add    $0x2d0,%eax
08349325 +0xa91:  mov    %ecx,0x12(%eax)
08349328 +0xa94:  mov    -0x28(%ebp),%edx
0834932b +0xa97:  mov    -0x24(%ebp),%ebx
0834932e +0xa9a:  mov    -0x28(%ebp),%esi
08349331 +0xa9d:  mov    -0x24(%ebp),%ecx
08349334 +0xaa0:  mov    0xc(%ebp),%eax
08349337 +0xaa3:  imul   $0x57,%ecx,%ecx
0834933a +0xaa6:  shl    $0x8,%esi
0834933d +0xaa9:  add    %esi,%ecx
0834933f +0xaab:  add    %ecx,%eax
08349341 +0xaad:  add    $0x420,%eax
08349346 +0xab2:  movzbl 0x2(%eax),%ecx
0834934a +0xab6:  mov    0x8(%ebp),%esi
0834934d +0xab9:  mov    %edx,%eax
0834934f +0xabb:  add    %eax,%eax
08349351 +0xabd:  add    %edx,%eax
08349353 +0xabf:  shl    $0x6,%eax
08349356 +0xac2:  lea    (%esi,%eax,1),%eax
08349359 +0xac5:  add    %ebx,%eax
0834935b +0xac7:  add    $0x340,%eax
08349360 +0xacc:  mov    %cl,0x10(%eax)
08349363 +0xacf:  mov    -0x28(%ebp),%ecx
08349366 +0xad2:  mov    -0x24(%ebp),%edx
08349369 +0xad5:  mov    %edx,%eax
0834936b +0xad7:  add    %eax,%eax
0834936d +0xad9:  add    %edx,%eax
0834936f +0xadb:  shl    $0x2,%eax
08349372 +0xade:  mov    %ecx,%edx
08349374 +0xae0:  shl    $0x8,%edx
08349377 +0xae3:  add    %edx,%eax
08349379 +0xae5:  add    $0x480,%eax
0834937e +0xaea:  mov    %eax,%ebx
08349380 +0xaec:  add    0xc(%ebp),%ebx
08349383 +0xaef:  mov    -0x28(%ebp),%ecx
08349386 +0xaf2:  mov    -0x24(%ebp),%eax
08349389 +0xaf5:  mov    %eax,%edx
0834938b +0xaf7:  add    %edx,%edx
0834938d +0xaf9:  add    %eax,%edx
0834938f +0xafb:  lea    0x0(,%edx,4),%eax
08349396 +0xb02:  mov    %eax,%edx
08349398 +0xb04:  mov    %ecx,%eax
0834939a +0xb06:  add    %eax,%eax
0834939c +0xb08:  add    %ecx,%eax
0834939e +0xb0a:  shl    $0x6,%eax
083493a1 +0xb0d:  lea    (%edx,%eax,1),%eax
083493a4 +0xb10:  add    $0x330,%eax
083493a9 +0xb15:  add    0x8(%ebp),%eax
083493ac +0xb18:  add    $0x8,%eax
083493af +0xb1b:  mov    %ebx,0x4(%esp)
083493b3 +0xb1f:  mov    %eax,(%esp)
083493b6 +0xb22:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
083493bb +0xb27:  addl   $0x1,-0x24(%ebp)
083493bf +0xb2b:  cmpl   $0x1,-0x24(%ebp)
083493c3 +0xb2f:  setle  %al
083493c6 +0xb32:  test   %al,%al
083493c8 +0xb34:  jne    08348e75 <+0x5e1>
083493ce +0xb3a:  addl   $0x1,-0x28(%ebp)
083493d2 +0xb3e:  cmpl   $0x6,-0x28(%ebp)
083493d6 +0xb42:  setle  %al
083493d9 +0xb45:  test   %al,%al
083493db +0xb47:  jne    08348e69 <+0x5d5>
083493e1 +0xb4d:  add    $0x5c,%esp
083493e4 +0xb50:  pop    %ebx
083493e5 +0xb51:  pop    %esi
083493e6 +0xb52:  pop    %edi
083493e7 +0xb53:  pop    %ebp
083493e8 +0xb54:  ret
083493e9 +0xb55:  nop
```

## 反编译 C

```c
// CCharacter::set_data @ 0x8348894

/* CCharacter::set_data(STCharacterScript*) */

void __thiscall CCharacter::set_data(CCharacter *this,STCharacterScript *param_1)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  for (local_40 = 0; local_40 < 7; local_40 = local_40 + 1) {
    if (local_40 == 0) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0x28);
      *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 0x2c);
      *(undefined2 *)(this + 10) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0x30);
      *(undefined2 *)(this + 0xe) = *(undefined2 *)(param_1 + 0x32);
      for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
        *(undefined2 *)(this + (local_3c + 8) * 2) =
             *(undefined2 *)(param_1 + (local_3c + 8) * 2 + 0x24);
      }
      for (local_38 = 0; local_38 < 0x11; local_38 = local_38 + 1) {
        *(undefined2 *)(this + (local_38 + 8) * 2 + 8) =
             *(undefined2 *)(param_1 + (local_38 + 8) * 2 + 0x2c);
      }
      *(undefined4 *)(this + 0x3a) = *(undefined4 *)(param_1 + 0x5e);
      *(undefined2 *)(this + 0x3e) = *(undefined2 *)(param_1 + 0x62);
      *(undefined2 *)(this + 0x40) = *(undefined2 *)(param_1 + 100);
      *(undefined4 *)(this + 0x42) = *(undefined4 *)(param_1 + 0x66);
      *(undefined2 *)(this + 0x46) = *(undefined2 *)(param_1 + 0x6a);
      *(undefined2 *)(this + 0x48) = *(undefined2 *)(param_1 + 0x6c);
      *(undefined2 *)(this + 0x4a) = *(undefined2 *)(param_1 + 0x6e);
      *(undefined2 *)(this + 0x4c) = *(undefined2 *)(param_1 + 0x70);
      *(undefined4 *)(this + 0x4e) = *(undefined4 *)(param_1 + 0x72);
      this[0x7d4] = *(CCharacter *)(param_1 + 0x76);
    }
    else {
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x52) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x24);
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x56) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x28);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x5a) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x2c);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x5c) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x2e);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x5e) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x30);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x60) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x32);
      for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
        *(undefined2 *)(this + (local_40 + -1) * 0x52 + local_34 * 2 + 0x62) =
             *(undefined2 *)(param_1 + (local_34 + 8) * 2 + local_40 * 0x57 + 0x24);
      }
      for (local_30 = 0; local_30 < 0x11; local_30 = local_30 + 1) {
        *(undefined2 *)(this + (local_40 + -1) * 0x52 + local_30 * 2 + 0x6a) =
             *(undefined2 *)(param_1 + (local_30 + 8) * 2 + local_40 * 0x57 + 0x2c);
      }
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x8c) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x5e);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x90) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x62);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x92) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 100);
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x94) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x66);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x98) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x6a);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x9a) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x6c);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x9c) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x6e);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x9e) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x70);
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0xa0) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x72);
      this[local_40 + 0x7d4] = *(CCharacter *)(param_1 + local_40 * 0x57 + 0x76);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_40 * 0xc + 0x240),(vector *)(param_1 + local_40 * 0xc + 0x288));
  }
  for (local_2c = 0; local_2c < 7; local_2c = local_2c + 1) {
    for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x294) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3d0);
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x298) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3d4);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x29c) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3d8);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x29e) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3da);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2a0) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3dc);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2a2) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3de);
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        *(undefined2 *)(this + (local_28 * 0x29 + local_2c * 0x60) * 2 + local_24 * 2 + 0x2a4) =
             *(undefined2 *)
              (param_1 + (local_24 + 8) * 2 + local_28 * 0x57 + local_2c * 0x100 + 0x3d0);
      }
      for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
        *(undefined2 *)(this + (local_28 * 0x29 + local_2c * 0x60) * 2 + local_20 * 2 + 0x2ac) =
             *(undefined2 *)
              (param_1 + (local_20 + 8) * 2 + local_28 * 0x57 + local_2c * 0x100 + 0x3d8);
      }
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2ce) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x40a);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2d2) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x40e);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2d4) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x410);
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2d6) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x412);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2da) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x416);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2dc) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x418);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2de) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x41a);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2e0) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x41c);
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2e2) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x41e);
      this[local_28 + local_2c * 0xc0 + 0x350] =
           *(CCharacter *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x422);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                 (this + local_28 * 0xc + local_2c * 0xc0 + 0x338),
                 (vector *)(param_1 + local_28 * 0xc + local_2c * 0x100 + 0x480));
    }
  }
  return;
}
```
