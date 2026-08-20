# GetDate

`_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE`

`TaoCrypt::CertDecoder::GetDate(TaoCrypt::CertDecoder::DateType)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08754830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754830  _ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE
#           TaoCrypt::CertDecoder::GetDate(TaoCrypt::CertDecoder::DateType)
# range [0x08754830, 0x08754c39]
08754830 +0x000:  push   %ebp
08754831 +0x001:  mov    %esp,%ebp
08754833 +0x003:  sub    $0x98,%esp
08754839 +0x009:  mov    %esi,-0x8(%ebp)
0875483c +0x00c:  mov    0x8(%ebp),%esi
0875483f +0x00f:  mov    %ebx,-0xc(%ebp)
08754842 +0x012:  mov    %edi,-0x4(%ebp)
08754845 +0x015:  call   08722df8 <__i686.get_pc_thunk.bx>
0875484a +0x01a:  add    $0xc1834e,%ebx
08754850 +0x020:  mov    0x4(%esi),%eax
08754853 +0x023:  mov    0x10(%eax),%edx
08754856 +0x026:  test   %edx,%edx
08754858 +0x028:  jne    08754879 <+0x49>
0875485a +0x02a:  mov    0xc(%eax),%edx
0875485d +0x02d:  lea    0x1(%edx),%ecx
08754860 +0x030:  mov    %ecx,0xc(%eax)
08754863 +0x033:  mov    0x4(%eax),%ecx
08754866 +0x036:  movzbl (%ecx,%edx,1),%edx
0875486a +0x03a:  lea    -0x17(%edx),%ecx
0875486d +0x03d:  cmp    $0x1,%cl
08754870 +0x040:  jbe    08754888 <+0x58>
08754872 +0x042:  movl   $0x406,0x10(%eax)
08754879 +0x049:  mov    -0xc(%ebp),%ebx
0875487c +0x04c:  mov    -0x8(%ebp),%esi
0875487f +0x04f:  mov    -0x4(%ebp),%edi
08754882 +0x052:  mov    %ebp,%esp
08754884 +0x054:  pop    %ebp
08754885 +0x055:  ret
08754886 +0x056:  xchg   %ax,%ax
08754888 +0x058:  mov    %dl,-0x88(%ebp)
0875488e +0x05e:  mov    %eax,(%esp)
08754891 +0x061:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08754896 +0x066:  movzbl -0x88(%ebp),%edx
0875489d +0x06d:  mov    %eax,-0x5c(%ebp)
087548a0 +0x070:  sub    $0xd,%eax
087548a3 +0x073:  cmp    $0x3,%eax
087548a6 +0x076:  jbe    087548b8 <+0x88>
087548a8 +0x078:  mov    0x4(%esi),%eax
087548ab +0x07b:  movl   $0x407,0x10(%eax)
087548b2 +0x082:  jmp    08754879 <+0x49>
087548b4 +0x084:  lea    0x0(%esi,%eiz,1),%esi
087548b8 +0x088:  mov    0x4(%esi),%ecx
087548bb +0x08b:  lea    -0x2c(%ebp),%eax
087548be +0x08e:  mov    %eax,-0x64(%ebp)
087548c1 +0x091:  mov    %dl,-0x88(%ebp)
087548c7 +0x097:  mov    0x4(%ecx),%eax
087548ca +0x09a:  add    0xc(%ecx),%eax
087548cd +0x09d:  mov    -0x5c(%ebp),%ecx
087548d0 +0x0a0:  mov    %eax,0x4(%esp)
087548d4 +0x0a4:  mov    -0x64(%ebp),%eax
087548d7 +0x0a7:  mov    %ecx,0x8(%esp)
087548db +0x0ab:  mov    %eax,(%esp)
087548de +0x0ae:  call   0807d8a0 <_init+0x198>
087548e3 +0x0b3:  mov    0x4(%esi),%eax
087548e6 +0x0b6:  mov    -0x5c(%ebp),%ecx
087548e9 +0x0b9:  add    %ecx,0xc(%eax)
087548ec +0x0bc:  mov    $0xb,%ecx
087548f1 +0x0c1:  lea    -0x58(%ebp),%eax
087548f4 +0x0c4:  mov    %eax,-0x60(%ebp)
087548f7 +0x0c7:  mov    -0x60(%ebp),%edi
087548fa +0x0ca:  xor    %eax,%eax
087548fc +0x0cc:  rep stos %eax,%es:(%edi)
087548fe +0x0ce:  movzbl -0x88(%ebp),%edx
08754905 +0x0d5:  cmp    $0x17,%dl
08754908 +0x0d8:  je     08754b20 <+0x2f0>
0875490e +0x0de:  movzbl -0x2c(%ebp),%ecx
08754912 +0x0e2:  lea    -0x1f(%ebp),%edx
08754915 +0x0e5:  movzbl -0x2b(%ebp),%eax
08754919 +0x0e9:  lea    -0x28(%ebp),%edi
0875491c +0x0ec:  mov    %edx,-0x60(%ebp)
0875491f +0x0ef:  lea    -0x21(%ebp),%edx
08754922 +0x0f2:  mov    %edx,-0x6c(%ebp)
08754925 +0x0f5:  lea    -0x23(%ebp),%edx
08754928 +0x0f8:  sub    $0x30,%ecx
0875492b +0x0fb:  sub    $0x30,%eax
0875492e +0x0fe:  imul   $0x64,%eax,%eax
08754931 +0x101:  imul   $0x3e8,%ecx,%ecx
08754937 +0x107:  mov    %edx,-0x74(%ebp)
0875493a +0x10a:  lea    -0x25(%ebp),%edx
0875493d +0x10d:  mov    %edx,-0x7c(%ebp)
08754940 +0x110:  lea    -0x27(%ebp),%edx
08754943 +0x113:  mov    %edx,-0x84(%ebp)
08754949 +0x119:  lea    -0x29(%ebp),%edx
0875494c +0x11c:  add    %eax,%ecx
0875494e +0x11e:  lea    -0x20(%ebp),%eax
08754951 +0x121:  add    -0x44(%ebp),%ecx
08754954 +0x124:  mov    %eax,-0x68(%ebp)
08754957 +0x127:  lea    -0x22(%ebp),%eax
0875495a +0x12a:  mov    %eax,-0x70(%ebp)
0875495d +0x12d:  lea    -0x24(%ebp),%eax
08754960 +0x130:  mov    %eax,-0x78(%ebp)
08754963 +0x133:  lea    -0x26(%ebp),%eax
08754966 +0x136:  mov    %eax,-0x80(%ebp)
08754969 +0x139:  lea    -0x2a(%ebp),%eax
0875496c +0x13c:  mov    %ecx,-0x44(%ebp)
0875496f +0x13f:  movzbl (%eax),%eax
08754972 +0x142:  movzbl (%edx),%edx
08754975 +0x145:  lea    -0xf0(%eax,%eax,4),%eax
0875497c +0x14c:  lea    (%ecx,%eax,2),%eax
0875497f +0x14f:  mov    -0x84(%ebp),%ecx
08754985 +0x155:  lea    -0x79c(%eax,%edx,1),%eax
0875498c +0x15c:  mov    %eax,-0x44(%ebp)
0875498f +0x15f:  movzbl (%edi),%eax
08754992 +0x162:  movzbl (%ecx),%edx
08754995 +0x165:  mov    -0x7c(%ebp),%ecx
08754998 +0x168:  lea    -0xf0(%eax,%eax,4),%eax
0875499f +0x16f:  add    %eax,%eax
087549a1 +0x171:  add    -0x48(%ebp),%eax
087549a4 +0x174:  lea    -0x31(%eax,%edx,1),%eax
087549a8 +0x178:  mov    -0x80(%ebp),%edx
087549ab +0x17b:  mov    %eax,-0x48(%ebp)
087549ae +0x17e:  movzbl (%edx),%eax
087549b1 +0x181:  movzbl (%ecx),%edx
087549b4 +0x184:  mov    -0x74(%ebp),%ecx
087549b7 +0x187:  lea    -0xf0(%eax,%eax,4),%eax
087549be +0x18e:  add    %eax,%eax
087549c0 +0x190:  add    -0x4c(%ebp),%eax
087549c3 +0x193:  lea    -0x30(%eax,%edx,1),%eax
087549c7 +0x197:  mov    -0x78(%ebp),%edx
087549ca +0x19a:  mov    %eax,-0x4c(%ebp)
087549cd +0x19d:  movzbl (%edx),%eax
087549d0 +0x1a0:  movzbl (%ecx),%edx
087549d3 +0x1a3:  mov    -0x6c(%ebp),%ecx
087549d6 +0x1a6:  lea    -0xf0(%eax,%eax,4),%eax
087549dd +0x1ad:  add    %eax,%eax
087549df +0x1af:  add    -0x50(%ebp),%eax
087549e2 +0x1b2:  lea    -0x30(%eax,%edx,1),%eax
087549e6 +0x1b6:  mov    -0x70(%ebp),%edx
087549e9 +0x1b9:  mov    %eax,-0x50(%ebp)
087549ec +0x1bc:  movzbl (%edx),%eax
087549ef +0x1bf:  movzbl (%ecx),%edx
087549f2 +0x1c2:  mov    -0x60(%ebp),%ecx
087549f5 +0x1c5:  lea    -0xf0(%eax,%eax,4),%eax
087549fc +0x1cc:  add    %eax,%eax
087549fe +0x1ce:  add    -0x54(%ebp),%eax
08754a01 +0x1d1:  lea    -0x30(%eax,%edx,1),%eax
08754a05 +0x1d5:  mov    -0x68(%ebp),%edx
08754a08 +0x1d8:  mov    %eax,-0x54(%ebp)
08754a0b +0x1db:  movzbl (%edx),%eax
08754a0e +0x1de:  movzbl (%ecx),%edx
08754a11 +0x1e1:  movl   $0x0,(%esp)
08754a18 +0x1e8:  lea    -0xf0(%eax,%eax,4),%eax
08754a1f +0x1ef:  add    %eax,%eax
08754a21 +0x1f1:  add    -0x58(%ebp),%eax
08754a24 +0x1f4:  lea    -0x30(%eax,%edx,1),%eax
08754a28 +0x1f8:  mov    %eax,-0x58(%ebp)
08754a2b +0x1fb:  call   0807d750 <_init+0x48>
08754a30 +0x200:  mov    %eax,-0x1c(%ebp)
08754a33 +0x203:  lea    -0x1c(%ebp),%eax
08754a36 +0x206:  mov    %eax,(%esp)
08754a39 +0x209:  call   0807e490 <_init+0xd88>
08754a3e +0x20e:  mov    0xc(%ebp),%edi
08754a41 +0x211:  test   %edi,%edi
08754a43 +0x213:  jne    08754ad8 <+0x2a8>
08754a49 +0x219:  mov    -0x44(%ebp),%edx
08754a4c +0x21c:  cmp    %edx,0x14(%eax)
08754a4f +0x21f:  jg     08754a70 <+0x240>
08754a51 +0x221:  je     08754bec <+0x3bc>
08754a57 +0x227:  cmpb   $0x0,0x470(%esi)
08754a5e +0x22e:  jne    08754b7f <+0x34f>
08754a64 +0x234:  cmpl   $0x0,0xc(%ebp)
08754a68 +0x238:  jne    08754aa6 <+0x276>
08754a6a +0x23a:  lea    0x0(%esi),%esi
08754a70 +0x240:  mov    -0x5c(%ebp),%edx
08754a73 +0x243:  lea    0x450(%esi),%eax
08754a79 +0x249:  mov    -0x64(%ebp),%ecx
08754a7c +0x24c:  mov    %eax,(%esp)
08754a7f +0x24f:  mov    %edx,0x8(%esp)
08754a83 +0x253:  mov    %ecx,0x4(%esp)
08754a87 +0x257:  call   0807d8a0 <_init+0x198>
08754a8c +0x25c:  mov    -0x5c(%ebp),%eax
08754a8f +0x25f:  movb   $0x0,0x450(%esi,%eax,1)
08754a97 +0x267:  jmp    08754879 <+0x49>
08754a9c +0x26c:  mov    0x4(%esi),%eax
08754a9f +0x26f:  movl   $0x40d,0x10(%eax)
08754aa6 +0x276:  mov    -0x5c(%ebp),%edx
08754aa9 +0x279:  lea    0x460(%esi),%eax
08754aaf +0x27f:  mov    -0x64(%ebp),%ecx
08754ab2 +0x282:  mov    %eax,(%esp)
08754ab5 +0x285:  mov    %edx,0x8(%esp)
08754ab9 +0x289:  mov    %ecx,0x4(%esp)
08754abd +0x28d:  call   0807d8a0 <_init+0x198>
08754ac2 +0x292:  mov    -0x5c(%ebp),%eax
08754ac5 +0x295:  movb   $0x0,0x460(%esi,%eax,1)
08754acd +0x29d:  jmp    08754879 <+0x49>
08754ad2 +0x2a2:  lea    0x0(%esi),%esi
08754ad8 +0x2a8:  mov    -0x44(%ebp),%edx
08754adb +0x2ab:  cmp    %edx,0x14(%eax)
08754ade +0x2ae:  jg     08754a57 <+0x227>
08754ae4 +0x2b4:  jne    08754aa6 <+0x276>
08754ae6 +0x2b6:  mov    -0x48(%ebp),%edx
08754ae9 +0x2b9:  cmp    %edx,0x10(%eax)
08754aec +0x2bc:  jg     08754a57 <+0x227>
08754af2 +0x2c2:  jne    08754aa6 <+0x276>
08754af4 +0x2c4:  mov    -0x4c(%ebp),%edx
08754af7 +0x2c7:  cmp    %edx,0xc(%eax)
08754afa +0x2ca:  jg     08754a57 <+0x227>
08754b00 +0x2d0:  jne    08754aa6 <+0x276>
08754b02 +0x2d2:  mov    0x8(%eax),%edx
08754b05 +0x2d5:  cmp    -0x50(%ebp),%edx
08754b08 +0x2d8:  jg     08754a57 <+0x227>
08754b0e +0x2de:  xchg   %ax,%ax
08754b10 +0x2e0:  jne    08754aa6 <+0x276>
08754b12 +0x2e2:  mov    0x4(%eax),%eax
08754b15 +0x2e5:  cmp    -0x54(%ebp),%eax
08754b18 +0x2e8:  jle    08754aa6 <+0x276>
08754b1a +0x2ea:  jmp    08754a57 <+0x227>
08754b1f +0x2ef:  nop
08754b20 +0x2f0:  movzbl -0x2c(%ebp),%eax
08754b24 +0x2f4:  sub    $0x30,%eax
08754b27 +0x2f7:  cmp    $0x4,%eax
08754b2a +0x2fa:  jbe    08754b99 <+0x369>
08754b2c +0x2fc:  lea    -0x21(%ebp),%edx
08754b2f +0x2ff:  lea    -0x22(%ebp),%ecx
08754b32 +0x302:  lea    -0x23(%ebp),%eax
08754b35 +0x305:  mov    %edx,-0x60(%ebp)
08754b38 +0x308:  lea    -0x24(%ebp),%edx
08754b3b +0x30b:  mov    %ecx,-0x68(%ebp)
08754b3e +0x30e:  lea    -0x25(%ebp),%ecx
08754b41 +0x311:  mov    %eax,-0x6c(%ebp)
08754b44 +0x314:  lea    -0x26(%ebp),%eax
08754b47 +0x317:  mov    %edx,-0x70(%ebp)
08754b4a +0x31a:  lea    -0x27(%ebp),%edx
08754b4d +0x31d:  mov    %ecx,-0x74(%ebp)
08754b50 +0x320:  lea    -0x28(%ebp),%ecx
08754b53 +0x323:  mov    %eax,-0x78(%ebp)
08754b56 +0x326:  lea    -0x29(%ebp),%eax
08754b59 +0x329:  mov    %edx,-0x7c(%ebp)
08754b5c +0x32c:  lea    -0x2a(%ebp),%edi
08754b5f +0x32f:  mov    %ecx,-0x80(%ebp)
08754b62 +0x332:  lea    -0x2b(%ebp),%edx
08754b65 +0x335:  mov    $0x76c,%ecx
08754b6a +0x33a:  mov    %eax,-0x84(%ebp)
08754b70 +0x340:  mov    -0x64(%ebp),%eax
08754b73 +0x343:  movl   $0x76c,-0x44(%ebp)
08754b7a +0x34a:  jmp    0875496f <+0x13f>
08754b7f +0x34f:  mov    0xc(%ebp),%ecx
08754b82 +0x352:  test   %ecx,%ecx
08754b84 +0x354:  jne    08754a9c <+0x26c>
08754b8a +0x35a:  mov    0x4(%esi),%eax
08754b8d +0x35d:  movl   $0x40c,0x10(%eax)
08754b94 +0x364:  jmp    08754a70 <+0x240>
08754b99 +0x369:  lea    -0x21(%ebp),%edx
08754b9c +0x36c:  lea    -0x22(%ebp),%ecx
08754b9f +0x36f:  lea    -0x23(%ebp),%eax
08754ba2 +0x372:  mov    %edx,-0x60(%ebp)
08754ba5 +0x375:  lea    -0x24(%ebp),%edx
08754ba8 +0x378:  mov    %ecx,-0x68(%ebp)
08754bab +0x37b:  lea    -0x25(%ebp),%ecx
08754bae +0x37e:  mov    %eax,-0x6c(%ebp)
08754bb1 +0x381:  lea    -0x26(%ebp),%eax
08754bb4 +0x384:  mov    %edx,-0x70(%ebp)
08754bb7 +0x387:  lea    -0x27(%ebp),%edx
08754bba +0x38a:  mov    %ecx,-0x74(%ebp)
08754bbd +0x38d:  lea    -0x28(%ebp),%ecx
08754bc0 +0x390:  mov    %eax,-0x78(%ebp)
08754bc3 +0x393:  lea    -0x29(%ebp),%eax
08754bc6 +0x396:  mov    %edx,-0x7c(%ebp)
08754bc9 +0x399:  lea    -0x2a(%ebp),%edi
08754bcc +0x39c:  mov    %ecx,-0x80(%ebp)
08754bcf +0x39f:  lea    -0x2b(%ebp),%edx
08754bd2 +0x3a2:  mov    $0x7d0,%ecx
08754bd7 +0x3a7:  mov    %eax,-0x84(%ebp)
08754bdd +0x3ad:  mov    -0x64(%ebp),%eax
08754be0 +0x3b0:  movl   $0x7d0,-0x44(%ebp)
08754be7 +0x3b7:  jmp    0875496f <+0x13f>
08754bec +0x3bc:  mov    -0x48(%ebp),%edx
08754bef +0x3bf:  cmp    %edx,0x10(%eax)
08754bf2 +0x3c2:  jg     08754a70 <+0x240>
08754bf8 +0x3c8:  jne    08754a57 <+0x227>
08754bfe +0x3ce:  mov    -0x4c(%ebp),%edx
08754c01 +0x3d1:  cmp    %edx,0xc(%eax)
08754c04 +0x3d4:  jg     08754a70 <+0x240>
08754c0a +0x3da:  jne    08754a57 <+0x227>
08754c10 +0x3e0:  mov    0x8(%eax),%edx
08754c13 +0x3e3:  cmp    -0x50(%ebp),%edx
08754c16 +0x3e6:  jg     08754a70 <+0x240>
08754c1c +0x3ec:  lea    0x0(%esi,%eiz,1),%esi
08754c20 +0x3f0:  jne    08754a57 <+0x227>
08754c26 +0x3f6:  mov    0x4(%eax),%eax
08754c29 +0x3f9:  cmp    -0x54(%ebp),%eax
08754c2c +0x3fc:  jle    08754a57 <+0x227>
08754c32 +0x402:  jmp    08754a70 <+0x240>
08754c37 +0x407:  nop
08754c38 +0x408:  nop
08754c39 +0x409:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetDate @ 0x8754830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetDate(TaoCrypt::CertDecoder::DateType) */

void __thiscall TaoCrypt::CertDecoder::GetDate(CertDecoder *this,int param_2)

{
  char cVar1;
  Source *pSVar2;
  size_t __n;
  byte *pbVar3;
  tm *ptVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  byte bVar9;
  byte *local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  byte *local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23 [3];
  time_t local_20 [4];
  
  bVar9 = 0;
  pSVar2 = *(Source **)(this + 4);
  if (*(int *)(pSVar2 + 0x10) != 0) {
    return;
  }
  iVar5 = *(int *)(pSVar2 + 0xc);
  *(int *)(pSVar2 + 0xc) = iVar5 + 1;
  cVar1 = *(char *)(*(int *)(pSVar2 + 4) + iVar5);
  if (1 < (byte)(cVar1 - 0x17U)) {
    *(undefined4 *)(pSVar2 + 0x10) = 0x406;
    return;
  }
  __n = GetLength(pSVar2);
  if (3 < __n - 0xd) {
    *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x407;
    return;
  }
  memcpy(&local_30,(void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),
         __n);
  *(int *)(*(int *)(this + 4) + 0xc) = *(int *)(*(int *)(this + 4) + 0xc) + __n;
  piVar7 = &local_5c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
  }
  if (cVar1 == '\x17') {
    pbVar3 = &local_30;
    if (local_30 - 0x30 < 5) {
      local_64 = &local_25;
      local_6c = &local_26;
      local_70 = &local_27;
      local_74 = &local_28;
      local_78 = &local_29;
      local_7c = &local_2a;
      local_80 = &local_2b;
      local_84 = &local_2c;
      local_88 = &local_2d;
      pbVar8 = &local_2e;
      pbVar6 = &local_2f;
      local_48 = 2000;
    }
    else {
      local_64 = &local_25;
      local_6c = &local_26;
      local_70 = &local_27;
      local_74 = &local_28;
      local_78 = &local_29;
      local_7c = &local_2a;
      local_80 = &local_2b;
      local_84 = &local_2c;
      local_88 = &local_2d;
      pbVar8 = &local_2e;
      pbVar6 = &local_2f;
      local_48 = 0x76c;
    }
  }
  else {
    local_64 = local_23;
    pbVar8 = &local_2c;
    local_70 = &local_25;
    local_78 = &local_27;
    local_80 = &local_29;
    local_88 = &local_2b;
    pbVar6 = &local_2d;
    local_6c = &local_24;
    local_48 = (local_30 - 0x30) * 1000 + (local_2f - 0x30) * 100 + local_48;
    local_74 = &local_26;
    local_7c = &local_28;
    local_84 = &local_2a;
    pbVar3 = &local_2e;
  }
  local_48 = local_48 + ((uint)*pbVar3 * 5 + -0xf0) * 2 + -0x79c + (uint)*pbVar6;
  local_4c = ((uint)*pbVar8 * 5 + -0xf0) * 2 + local_4c + -0x31 + (uint)*local_88;
  local_50 = ((uint)*local_84 * 5 + -0xf0) * 2 + local_50 + -0x30 + (uint)*local_80;
  local_54 = ((uint)*local_7c * 5 + -0xf0) * 2 + local_54 + -0x30 + (uint)*local_78;
  local_58 = ((uint)*local_74 * 5 + -0xf0) * 2 + local_58 + -0x30 + (uint)*local_70;
  local_5c = ((uint)*local_6c * 5 + -0xf0) * 2 + local_5c + -0x30 + (uint)*local_64;
  local_20[0] = time((time_t *)0x0);
  ptVar4 = gmtime(local_20);
  if (param_2 == 0) {
    iVar5 = ptVar4->tm_year;
    if ((iVar5 != local_48 && local_48 <= iVar5) ||
       ((iVar5 == local_48 &&
        ((local_4c < ptVar4->tm_mon ||
         ((ptVar4->tm_mon == local_4c &&
          ((local_50 < ptVar4->tm_mday ||
           ((ptVar4->tm_mday == local_50 &&
            ((local_54 < ptVar4->tm_hour ||
             ((ptVar4->tm_hour == local_54 && (local_58 < ptVar4->tm_min))))))))))))))))
    goto LAB_08754a70;
  }
  else if ((ptVar4->tm_year <= local_48) &&
          ((ptVar4->tm_year != local_48 ||
           ((ptVar4->tm_mon <= local_4c &&
            ((ptVar4->tm_mon != local_4c ||
             ((ptVar4->tm_mday <= local_50 &&
              ((ptVar4->tm_mday != local_50 ||
               ((ptVar4->tm_hour <= local_54 &&
                ((ptVar4->tm_hour != local_54 || (ptVar4->tm_min <= local_58))))))))))))))))
  goto LAB_08754aa6;
  if (this[0x470] == (CertDecoder)0x0) {
    if (param_2 == 0) {
LAB_08754a70:
      memcpy(this + 0x450,&local_30,__n);
      this[__n + 0x450] = (CertDecoder)0x0;
      return;
    }
  }
  else {
    if (param_2 == 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x40c;
      goto LAB_08754a70;
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x40d;
  }
LAB_08754aa6:
  memcpy(this + 0x460,&local_30,__n);
  this[__n + 0x460] = (CertDecoder)0x0;
  return;
}
```
