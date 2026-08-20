# GetName

`_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE`

`TaoCrypt::CertDecoder::GetName(TaoCrypt::CertDecoder::NameType)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08754ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754ca0  _ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE
#           TaoCrypt::CertDecoder::GetName(TaoCrypt::CertDecoder::NameType)
# range [0x08754ca0, 0x087550ab]
08754ca0 +0x000:  push   %ebp
08754ca1 +0x001:  mov    %esp,%ebp
08754ca3 +0x003:  push   %edi
08754ca4 +0x004:  push   %esi
08754ca5 +0x005:  push   %ebx
08754ca6 +0x006:  sub    $0xbc,%esp
08754cac +0x00c:  mov    0x8(%ebp),%esi
08754caf +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08754cb4 +0x014:  add    $0xc17ee4,%ebx
08754cba +0x01a:  mov    0x4(%esi),%eax
08754cbd +0x01d:  mov    0x10(%eax),%eax
08754cc0 +0x020:  test   %eax,%eax
08754cc2 +0x022:  je     08754cd0 <+0x30>
08754cc4 +0x024:  add    $0xbc,%esp
08754cca +0x02a:  pop    %ebx
08754ccb +0x02b:  pop    %esi
08754ccc +0x02c:  pop    %edi
08754ccd +0x02d:  pop    %ebp
08754cce +0x02e:  ret
08754ccf +0x02f:  nop
08754cd0 +0x030:  lea    -0x88(%ebp),%eax
08754cd6 +0x036:  mov    %eax,-0x9c(%ebp)
08754cdc +0x03c:  mov    %eax,(%esp)
08754cdf +0x03f:  movl   $0x40,0x8(%esp)
08754ce7 +0x047:  movl   $0x5,0x4(%esp)
08754cef +0x04f:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08754cf4 +0x054:  mov    -0xc(%ebx),%eax
08754cfa +0x05a:  mov    -0x9c(%ebp),%edx
08754d00 +0x060:  add    $0x8,%eax
08754d03 +0x063:  mov    %edx,(%esp)
08754d06 +0x066:  mov    %eax,-0x88(%ebp)
08754d0c +0x06c:  call   087683b0 <_ZN8TaoCrypt3SHA4InitEv>  ; TaoCrypt::SHA::Init()
08754d11 +0x071:  mov    %esi,(%esp)
08754d14 +0x074:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08754d19 +0x079:  mov    0x4(%esi),%edx
08754d1c +0x07c:  lea    0x50(%esi),%ecx
08754d1f +0x07f:  mov    0xc(%ebp),%edi
08754d22 +0x082:  movl   $0x0,-0x98(%ebp)
08754d2c +0x08c:  mov    0xc(%edx),%edx
08754d2f +0x08f:  add    %edx,%eax
08754d31 +0x091:  test   %edi,%edi
08754d33 +0x093:  mov    %eax,-0x90(%ebp)
08754d39 +0x099:  lea    0x250(%esi),%eax
08754d3f +0x09f:  cmove  %ecx,%eax
08754d42 +0x0a2:  mov    %eax,-0x94(%ebp)
08754d48 +0x0a8:  jmp    08754d79 <+0xd9>
08754d4a +0x0aa:  lea    0x0(%esi),%esi
08754d50 +0x0b0:  cmp    $0x2a,%cl
08754d53 +0x0b3:  je     08754e80 <+0x1e0>
08754d59 +0x0b9:  mov    -0xac(%ebp),%ecx
08754d5f +0x0bf:  lea    0x1(%edi,%ecx,1),%eax
08754d63 +0x0c3:  mov    %eax,0xc(%edx)
08754d66 +0x0c6:  mov    %edx,(%esp)
08754d69 +0x0c9:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08754d6e +0x0ce:  mov    %eax,%edi
08754d70 +0x0d0:  mov    0x4(%esi),%edx
08754d73 +0x0d3:  add    %edi,0xc(%edx)
08754d76 +0x0d6:  mov    0xc(%edx),%edx
08754d79 +0x0d9:  cmp    %edx,-0x90(%ebp)
08754d7f +0x0df:  jbe    08754f20 <+0x280>
08754d85 +0x0e5:  mov    %esi,(%esp)
08754d88 +0x0e8:  call   087537f0 <_ZN8TaoCrypt11BER_Decoder6GetSetEv>  ; TaoCrypt::BER_Decoder::GetSet()
08754d8d +0x0ed:  mov    %esi,(%esp)
08754d90 +0x0f0:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
08754d95 +0x0f5:  mov    0x4(%esi),%eax
08754d98 +0x0f8:  mov    0xc(%eax),%edx
08754d9b +0x0fb:  lea    0x1(%edx),%ecx
08754d9e +0x0fe:  mov    %ecx,0xc(%eax)
08754da1 +0x101:  mov    0x4(%eax),%ecx
08754da4 +0x104:  cmpb   $0x6,(%ecx,%edx,1)
08754da8 +0x108:  jne    08754f58 <+0x2b8>
08754dae +0x10e:  mov    %eax,(%esp)
08754db1 +0x111:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08754db6 +0x116:  mov    0x4(%esi),%edx
08754db9 +0x119:  mov    0xc(%edx),%edi
08754dbc +0x11c:  mov    0x4(%edx),%ecx
08754dbf +0x11f:  mov    %eax,-0xac(%ebp)
08754dc5 +0x125:  add    %edi,%ecx
08754dc7 +0x127:  movzbl 0x1(%ecx),%eax
08754dcb +0x12b:  mov    %al,-0x8c(%ebp)
08754dd1 +0x131:  movzbl (%ecx),%ecx
08754dd4 +0x134:  cmp    $0x55,%cl
08754dd7 +0x137:  jne    08754d50 <+0xb0>
08754ddd +0x13d:  cmp    $0x4,%al
08754ddf +0x13f:  jne    08754d59 <+0xb9>
08754de5 +0x145:  lea    0x3(%edi),%eax
08754de8 +0x148:  mov    %eax,0xc(%edx)
08754deb +0x14b:  mov    0x4(%edx),%eax
08754dee +0x14e:  movzbl 0x2(%eax,%edi,1),%ecx
08754df3 +0x153:  addl   $0x1,0xc(%edx)
08754df7 +0x157:  mov    %edx,(%esp)
08754dfa +0x15a:  mov    %cl,-0xa0(%ebp)
08754e00 +0x160:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08754e05 +0x165:  movzbl -0xa0(%ebp),%ecx
08754e0c +0x16c:  cmp    $0x3,%cl
08754e0f +0x16f:  mov    %eax,%edi
08754e11 +0x171:  je     08754f90 <+0x2f0>
08754e17 +0x177:  cmp    $0x4,%cl
08754e1a +0x17a:  je     08754ff2 <+0x352>
08754e20 +0x180:  cmp    $0x6,%cl
08754e23 +0x183:  je     0875500c <+0x36c>
08754e29 +0x189:  cmp    $0x7,%cl
08754e2c +0x18c:  je     0875502c <+0x38c>
08754e32 +0x192:  cmp    $0x8,%cl
08754e35 +0x195:  je     0875504f <+0x3af>
08754e3b +0x19b:  cmp    $0xa,%cl
08754e3e +0x19e:  xchg   %ax,%ax
08754e40 +0x1a0:  je     0875506c <+0x3cc>
08754e46 +0x1a6:  cmp    $0xb,%cl
08754e49 +0x1a9:  je     0875508f <+0x3ef>
08754e4f +0x1af:  mov    0x4(%esi),%edx
08754e52 +0x1b2:  mov    %edi,0x8(%esp)
08754e56 +0x1b6:  mov    0x4(%edx),%eax
08754e59 +0x1b9:  add    0xc(%edx),%eax
08754e5c +0x1bc:  mov    %eax,0x4(%esp)
08754e60 +0x1c0:  mov    -0x9c(%ebp),%eax
08754e66 +0x1c6:  mov    %eax,(%esp)
08754e69 +0x1c9:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
08754e6e +0x1ce:  mov    0x4(%esi),%edx
08754e71 +0x1d1:  add    %edi,0xc(%edx)
08754e74 +0x1d4:  jmp    08754d76 <+0xd6>
08754e79 +0x1d9:  lea    0x0(%esi,%eiz,1),%esi
08754e80 +0x1e0:  cmpb   $0x86,-0x8c(%ebp)
08754e87 +0x1e7:  jne    08754d59 <+0xb9>
08754e8d +0x1ed:  mov    -0xac(%ebp),%ecx
08754e93 +0x1f3:  lea    0x1(%edi,%ecx,1),%eax
08754e97 +0x1f7:  mov    %eax,0xc(%edx)
08754e9a +0x1fa:  mov    %edx,(%esp)
08754e9d +0x1fd:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08754ea2 +0x202:  mov    %eax,%edi
08754ea4 +0x204:  mov    -0x94(%ebp),%eax
08754eaa +0x20a:  add    -0x98(%ebp),%eax
08754eb0 +0x210:  movl   $0x616d652f,(%eax)
08754eb6 +0x216:  movl   $0x64416c69,0x4(%eax)
08754ebd +0x21d:  movl   $0x73657264,0x8(%eax)
08754ec4 +0x224:  movw   $0x3d73,0xc(%eax)
08754eca +0x22a:  mov    -0x98(%ebp),%edx
08754ed0 +0x230:  mov    -0x94(%ebp),%eax
08754ed6 +0x236:  mov    0x4(%esi),%ecx
08754ed9 +0x239:  add    $0xe,%edx
08754edc +0x23c:  add    %edx,%eax
08754ede +0x23e:  mov    %eax,-0x8c(%ebp)
08754ee4 +0x244:  mov    0x4(%ecx),%eax
08754ee7 +0x247:  add    0xc(%ecx),%eax
08754eea +0x24a:  mov    -0x8c(%ebp),%ecx
08754ef0 +0x250:  mov    %edx,-0xa0(%ebp)
08754ef6 +0x256:  mov    %edi,0x8(%esp)
08754efa +0x25a:  mov    %eax,0x4(%esp)
08754efe +0x25e:  mov    %ecx,(%esp)
08754f01 +0x261:  call   0807d8a0 <_init+0x198>
08754f06 +0x266:  mov    -0xa0(%ebp),%edx
08754f0c +0x26c:  lea    (%edi,%edx,1),%edx
08754f0f +0x26f:  mov    %edx,-0x98(%ebp)
08754f15 +0x275:  jmp    08754d70 <+0xd0>
08754f1a +0x27a:  lea    0x0(%esi),%esi
08754f20 +0x280:  mov    -0x94(%ebp),%edx
08754f26 +0x286:  mov    -0x98(%ebp),%eax
08754f2c +0x28c:  movb   $0x0,(%edx,%eax,1)
08754f30 +0x290:  mov    0xc(%ebp),%edi
08754f33 +0x293:  test   %edi,%edi
08754f35 +0x295:  jne    08754f70 <+0x2d0>
08754f37 +0x297:  mov    -0x9c(%ebp),%ecx
08754f3d +0x29d:  add    $0x38,%esi
08754f40 +0x2a0:  mov    %esi,0x4(%esp)
08754f44 +0x2a4:  mov    %ecx,(%esp)
08754f47 +0x2a7:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08754f4c +0x2ac:  add    $0xbc,%esp
08754f52 +0x2b2:  pop    %ebx
08754f53 +0x2b3:  pop    %esi
08754f54 +0x2b4:  pop    %edi
08754f55 +0x2b5:  pop    %ebp
08754f56 +0x2b6:  ret
08754f57 +0x2b7:  nop
08754f58 +0x2b8:  movl   $0x402,0x10(%eax)
08754f5f +0x2bf:  add    $0xbc,%esp
08754f65 +0x2c5:  pop    %ebx
08754f66 +0x2c6:  pop    %esi
08754f67 +0x2c7:  pop    %edi
08754f68 +0x2c8:  pop    %ebp
08754f69 +0x2c9:  ret
08754f6a +0x2ca:  lea    0x0(%esi),%esi
08754f70 +0x2d0:  mov    -0x9c(%ebp),%eax
08754f76 +0x2d6:  add    $0x24,%esi
08754f79 +0x2d9:  mov    %esi,0x4(%esp)
08754f7d +0x2dd:  mov    %eax,(%esp)
08754f80 +0x2e0:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08754f85 +0x2e5:  add    $0xbc,%esp
08754f8b +0x2eb:  pop    %ebx
08754f8c +0x2ec:  pop    %esi
08754f8d +0x2ed:  pop    %edi
08754f8e +0x2ee:  pop    %ebp
08754f8f +0x2ef:  ret
08754f90 +0x2f0:  mov    -0x98(%ebp),%edx
08754f96 +0x2f6:  mov    -0x94(%ebp),%ecx
08754f9c +0x2fc:  movl   $0x3d4e432f,(%ecx,%edx,1)
08754fa3 +0x303:  mov    -0x98(%ebp),%edx
08754fa9 +0x309:  add    $0x4,%edx
08754fac +0x30c:  mov    -0x94(%ebp),%eax
08754fb2 +0x312:  mov    0x4(%esi),%ecx
08754fb5 +0x315:  mov    %edx,-0xa0(%ebp)
08754fbb +0x31b:  add    %edx,%eax
08754fbd +0x31d:  mov    %eax,-0x8c(%ebp)
08754fc3 +0x323:  mov    0x4(%ecx),%eax
08754fc6 +0x326:  add    0xc(%ecx),%eax
08754fc9 +0x329:  mov    -0x8c(%ebp),%ecx
08754fcf +0x32f:  mov    %edi,0x8(%esp)
08754fd3 +0x333:  mov    %eax,0x4(%esp)
08754fd7 +0x337:  mov    %ecx,(%esp)
08754fda +0x33a:  call   0807d8a0 <_init+0x198>
08754fdf +0x33f:  mov    -0xa0(%ebp),%edx
08754fe5 +0x345:  add    %edi,%edx
08754fe7 +0x347:  mov    %edx,-0x98(%ebp)
08754fed +0x34d:  jmp    08754e4f <+0x1af>
08754ff2 +0x352:  mov    -0x94(%ebp),%edx
08754ff8 +0x358:  mov    -0x98(%ebp),%eax
08754ffe +0x35e:  movl   $0x3d4e532f,(%edx,%eax,1)
08755005 +0x365:  mov    %eax,%edx
08755007 +0x367:  add    $0x4,%edx
0875500a +0x36a:  jmp    08754fac <+0x30c>
0875500c +0x36c:  mov    -0x94(%ebp),%eax
08755012 +0x372:  add    -0x98(%ebp),%eax
08755018 +0x378:  movw   $0x432f,(%eax)
0875501d +0x37d:  movb   $0x3d,0x2(%eax)
08755021 +0x381:  mov    -0x98(%ebp),%edx
08755027 +0x387:  add    $0x3,%edx
0875502a +0x38a:  jmp    08754fac <+0x30c>
0875502c +0x38c:  mov    -0x94(%ebp),%eax
08755032 +0x392:  add    -0x98(%ebp),%eax
08755038 +0x398:  movw   $0x4c2f,(%eax)
0875503d +0x39d:  movb   $0x3d,0x2(%eax)
08755041 +0x3a1:  mov    -0x98(%ebp),%edx
08755047 +0x3a7:  add    $0x3,%edx
0875504a +0x3aa:  jmp    08754fac <+0x30c>
0875504f +0x3af:  mov    -0x98(%ebp),%ecx
08755055 +0x3b5:  mov    -0x94(%ebp),%eax
0875505b +0x3bb:  mov    %ecx,%edx
0875505d +0x3bd:  movl   $0x3d54532f,(%eax,%ecx,1)
08755064 +0x3c4:  add    $0x4,%edx
08755067 +0x3c7:  jmp    08754fac <+0x30c>
0875506c +0x3cc:  mov    -0x94(%ebp),%eax
08755072 +0x3d2:  add    -0x98(%ebp),%eax
08755078 +0x3d8:  movw   $0x4f2f,(%eax)
0875507d +0x3dd:  movb   $0x3d,0x2(%eax)
08755081 +0x3e1:  mov    -0x98(%ebp),%edx
08755087 +0x3e7:  add    $0x3,%edx
0875508a +0x3ea:  jmp    08754fac <+0x30c>
0875508f +0x3ef:  mov    -0x98(%ebp),%edx
08755095 +0x3f5:  mov    -0x94(%ebp),%ecx
0875509b +0x3fb:  movl   $0x3d554f2f,(%ecx,%edx,1)
087550a2 +0x402:  mov    -0x98(%ebp),%edx
087550a8 +0x408:  add    $0x4,%edx
087550ab +0x40b:  jmp    08754fac <+0x30c>
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetName @ 0x8754ca0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetName(TaoCrypt::CertDecoder::NameType) */

void __thiscall TaoCrypt::CertDecoder::GetName(CertDecoder *this,int param_2)

{
  char cVar1;
  char cVar2;
  Source *pSVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  CertDecoder *pCVar6;
  int iVar7;
  uint uVar8;
  CertDecoder *pCVar9;
  int local_9c;
  undefined *local_8c [31];
  
  if (*(int *)(*(int *)(this + 4) + 0x10) != 0) {
    return;
  }
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)local_8c,5,0x40);
  local_8c[0] = PTR_vtable_0936cb8c + 8;
  SHA::Init((SHA *)local_8c);
  iVar4 = BER_Decoder::GetSequence((BER_Decoder *)this);
  local_9c = 0;
  uVar8 = *(uint *)(*(int *)(this + 4) + 0xc);
  uVar5 = iVar4 + uVar8;
  pCVar6 = this + 0x250;
  if (param_2 == 0) {
    pCVar6 = this + 0x50;
  }
  do {
    if (uVar5 <= uVar8) {
      pCVar6[local_9c] = (CertDecoder)0x0;
      if (param_2 != 0) {
        HASHwithTransform::Final((HASHwithTransform *)local_8c,(uchar *)(this + 0x24));
        return;
      }
      HASHwithTransform::Final((HASHwithTransform *)local_8c,(uchar *)(this + 0x38));
      return;
    }
    BER_Decoder::GetSet((BER_Decoder *)this);
    BER_Decoder::GetSequence((BER_Decoder *)this);
    pSVar3 = *(Source **)(this + 4);
    iVar4 = *(int *)(pSVar3 + 0xc);
    *(int *)(pSVar3 + 0xc) = iVar4 + 1;
    if (*(char *)(*(int *)(pSVar3 + 4) + iVar4) != '\x06') {
      *(undefined4 *)(pSVar3 + 0x10) = 0x402;
      return;
    }
    iVar7 = GetLength(pSVar3);
    pSVar3 = *(Source **)(this + 4);
    iVar4 = *(int *)(pSVar3 + 0xc);
    cVar1 = ((char *)(*(int *)(pSVar3 + 4) + iVar4))[1];
    cVar2 = *(char *)(*(int *)(pSVar3 + 4) + iVar4);
    if (cVar2 == 'U') {
      if (cVar1 != '\x04') {
LAB_08754d59:
        *(int *)(pSVar3 + 0xc) = iVar4 + 1 + iVar7;
        __n = GetLength(pSVar3);
        goto LAB_08754d70;
      }
      *(int *)(pSVar3 + 0xc) = iVar4 + 3;
      cVar1 = *(char *)(*(int *)(pSVar3 + 4) + 2 + iVar4);
      *(int *)(pSVar3 + 0xc) = *(int *)(pSVar3 + 0xc) + 1;
      uVar8 = GetLength(pSVar3);
      if (cVar1 == '\x03') {
        *(undefined4 *)(pCVar6 + local_9c) = 0x3d4e432f;
        local_9c = local_9c + 4;
LAB_08754fac:
        memcpy(pCVar6 + local_9c,
               (void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),uVar8
              );
        local_9c = local_9c + uVar8;
      }
      else {
        if (cVar1 == '\x04') {
          *(undefined4 *)(pCVar6 + local_9c) = 0x3d4e532f;
          local_9c = local_9c + 4;
          goto LAB_08754fac;
        }
        if (cVar1 == '\x06') {
          *(undefined2 *)(pCVar6 + local_9c) = 0x432f;
          (pCVar6 + local_9c)[2] = (CertDecoder)0x3d;
          local_9c = local_9c + 3;
          goto LAB_08754fac;
        }
        if (cVar1 == '\a') {
          *(undefined2 *)(pCVar6 + local_9c) = 0x4c2f;
          (pCVar6 + local_9c)[2] = (CertDecoder)0x3d;
          local_9c = local_9c + 3;
          goto LAB_08754fac;
        }
        if (cVar1 == '\b') {
          *(undefined4 *)(pCVar6 + local_9c) = 0x3d54532f;
          local_9c = local_9c + 4;
          goto LAB_08754fac;
        }
        if (cVar1 == '\n') {
          *(undefined2 *)(pCVar6 + local_9c) = 0x4f2f;
          (pCVar6 + local_9c)[2] = (CertDecoder)0x3d;
          local_9c = local_9c + 3;
          goto LAB_08754fac;
        }
        if (cVar1 == '\v') {
          *(undefined4 *)(pCVar6 + local_9c) = 0x3d554f2f;
          local_9c = local_9c + 4;
          goto LAB_08754fac;
        }
      }
      SHA::Update((SHA *)local_8c,
                  (uchar *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),
                  uVar8);
      iVar4 = *(int *)(this + 4);
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + uVar8;
    }
    else {
      if ((cVar2 != '*') || (cVar1 != -0x7a)) goto LAB_08754d59;
      *(int *)(pSVar3 + 0xc) = iVar4 + 1 + iVar7;
      __n = GetLength(pSVar3);
      pCVar9 = pCVar6 + local_9c;
      *(undefined4 *)pCVar9 = 0x616d652f;
      *(undefined4 *)(pCVar9 + 4) = 0x64416c69;
      *(undefined4 *)(pCVar9 + 8) = 0x73657264;
      *(undefined2 *)(pCVar9 + 0xc) = 0x3d73;
      memcpy(pCVar6 + local_9c + 0xe,
             (void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),__n);
      local_9c = __n + local_9c + 0xe;
LAB_08754d70:
      iVar4 = *(int *)(this + 4);
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + __n;
    }
    uVar8 = *(uint *)(iVar4 + 0xc);
  } while( true );
}
```
