# Encode

`_ZN8TaoCrypt13Base64Encoder6EncodeEv`

`TaoCrypt::Base64Encoder::Encode()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Base64Encoder` | `0x08756fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08756fb0  _ZN8TaoCrypt13Base64Encoder6EncodeEv
#           TaoCrypt::Base64Encoder::Encode()
# range [0x08756fb0, 0x087571f9]
08756fb0 +0x000:  push   %ebp
08756fb1 +0x001:  mov    $0xaaaaaaab,%edx
08756fb6 +0x006:  mov    %esp,%ebp
08756fb8 +0x008:  push   %edi
08756fb9 +0x009:  push   %esi
08756fba +0x00a:  push   %ebx
08756fbb +0x00b:  sub    $0x6c,%esp
08756fbe +0x00e:  mov    0x8(%ebp),%esi
08756fc1 +0x011:  call   08722df8 <__i686.get_pc_thunk.bx>
08756fc6 +0x016:  add    $0xc15bd2,%ebx
08756fcc +0x01c:  mov    0xc(%esi),%eax
08756fcf +0x01f:  mov    (%eax),%eax
08756fd1 +0x021:  movl   $0x0,0x10(%esp)
08756fd9 +0x029:  mov    %eax,-0x20(%ebp)
08756fdc +0x02c:  add    $0x2,%eax
08756fdf +0x02f:  mul    %edx
08756fe1 +0x031:  shr    %edx
08756fe3 +0x033:  shl    $0x2,%edx
08756fe6 +0x036:  lea    0x3f(%edx),%eax
08756fe9 +0x039:  shr    $0x6,%eax
08756fec +0x03c:  lea    (%eax,%edx,1),%edi
08756fef +0x03f:  mov    %edi,0xc(%esp)
08756ff3 +0x043:  mov    (%esi),%eax
08756ff5 +0x045:  mov    %eax,0x8(%esp)
08756ff9 +0x049:  mov    0x4(%esi),%eax
08756ffc +0x04c:  mov    %eax,0x4(%esp)
08757000 +0x050:  lea    0x8(%esi),%eax
08757003 +0x053:  mov    %eax,(%esp)
08757006 +0x056:  call   087572d0 <_ZN8TaoCrypt10HexDecoder6DecodeEv+0xd0>  ; TaoCrypt::HexDecoder::Decode()+0xd0
0875700b +0x05b:  xor    %edx,%edx
0875700d +0x05d:  mov    %edi,(%esi)
0875700f +0x05f:  movl   $0x0,-0x38(%ebp)
08757016 +0x066:  mov    %eax,0x4(%esi)
08757019 +0x069:  cmpl   $0x2,-0x20(%ebp)
0875701d +0x06d:  jbe    087570f5 <+0x145>
08757023 +0x073:  mov    0xc(%esi),%ecx
08757026 +0x076:  mov    0xc(%ecx),%eax
08757029 +0x079:  lea    0x1(%eax),%edi
0875702c +0x07c:  mov    %edi,0xc(%ecx)
0875702f +0x07f:  mov    0x4(%ecx),%edi
08757032 +0x082:  mov    %edi,-0x4c(%ebp)
08757035 +0x085:  movzbl (%edi,%eax,1),%ecx
08757039 +0x089:  lea    0x2(%eax),%edi
0875703c +0x08c:  mov    %cl,-0x39(%ebp)
0875703f +0x08f:  mov    0xc(%esi),%ecx
08757042 +0x092:  mov    %edi,0xc(%ecx)
08757045 +0x095:  mov    -0x4c(%ebp),%ecx
08757048 +0x098:  lea    0x3(%eax),%edi
0875704b +0x09b:  movzbl 0x1(%ecx,%eax,1),%ecx
08757050 +0x0a0:  mov    %cl,-0x19(%ebp)
08757053 +0x0a3:  mov    0xc(%esi),%ecx
08757056 +0x0a6:  mov    %edi,0xc(%ecx)
08757059 +0x0a9:  mov    -0x4c(%ebp),%edi
0875705c +0x0ac:  movzbl -0x39(%ebp),%ecx
08757060 +0x0b0:  movzbl 0x2(%edi,%eax,1),%eax
08757065 +0x0b5:  mov    %ecx,%edi
08757067 +0x0b7:  and    $0x3,%ecx
0875706a +0x0ba:  shr    $0x2,%edi
0875706d +0x0bd:  shl    $0x4,%ecx
08757070 +0x0c0:  mov    %al,-0x1a(%ebp)
08757073 +0x0c3:  movzbl -0x19(%ebp),%eax
08757077 +0x0c7:  mov    %eax,-0x4c(%ebp)
0875707a +0x0ca:  movzbl -0x667938(%ebx,%edi,1),%eax
08757082 +0x0d2:  mov    0x4(%esi),%edi
08757085 +0x0d5:  mov    %al,(%edi,%edx,1)
08757088 +0x0d8:  mov    -0x4c(%ebp),%edi
0875708b +0x0db:  mov    0x4(%esi),%eax
0875708e +0x0de:  sar    $0x4,%edi
08757091 +0x0e1:  or     %edi,%ecx
08757093 +0x0e3:  movzbl -0x667938(%ebx,%ecx,1),%ecx
0875709b +0x0eb:  mov    %cl,0x1(%eax,%edx,1)
0875709f +0x0ef:  movzbl -0x1a(%ebp),%ecx
087570a3 +0x0f3:  mov    -0x4c(%ebp),%eax
087570a6 +0x0f6:  mov    %ecx,%edi
087570a8 +0x0f8:  and    $0x3f,%ecx
087570ab +0x0fb:  and    $0xf,%eax
087570ae +0x0fe:  movzbl -0x667938(%ebx,%ecx,1),%ecx
087570b6 +0x106:  sar    $0x6,%edi
087570b9 +0x109:  shl    $0x2,%eax
087570bc +0x10c:  or     %edi,%eax
087570be +0x10e:  mov    0x4(%esi),%edi
087570c1 +0x111:  movzbl -0x667938(%ebx,%eax,1),%eax
087570c9 +0x119:  mov    %al,0x2(%edi,%edx,1)
087570cd +0x11d:  mov    0x4(%esi),%eax
087570d0 +0x120:  lea    0x4(%edx),%edi
087570d3 +0x123:  mov    %cl,0x3(%eax,%edx,1)
087570d7 +0x127:  addl   $0x1,-0x38(%ebp)
087570db +0x12b:  subl   $0x3,-0x20(%ebp)
087570df +0x12f:  testb  $0xf,-0x38(%ebp)
087570e3 +0x133:  je     087571c0 <+0x210>
087570e9 +0x139:  cmpl   $0x2,-0x20(%ebp)
087570ed +0x13d:  mov    %edi,%edx
087570ef +0x13f:  ja     08757023 <+0x73>
087570f5 +0x145:  cmpl   $0x0,-0x20(%ebp)
087570f9 +0x149:  je     087571c9 <+0x219>
087570ff +0x14f:  mov    0xc(%esi),%eax
08757102 +0x152:  cmpl   $0x2,-0x20(%ebp)
08757106 +0x156:  mov    0xc(%eax),%ecx
08757109 +0x159:  sete   -0x20(%ebp)
0875710d +0x15d:  mov    %ecx,%edi
0875710f +0x15f:  add    $0x1,%edi
08757112 +0x162:  mov    %edi,0xc(%eax)
08757115 +0x165:  mov    0x4(%eax),%edi
08757118 +0x168:  mov    %ecx,-0x4c(%ebp)
0875711b +0x16b:  cmpb   $0x0,-0x20(%ebp)
0875711f +0x16f:  movzbl (%edi,%ecx,1),%ecx
08757123 +0x173:  movb   $0x0,-0x1a(%ebp)
08757127 +0x177:  movb   $0x0,-0x38(%ebp)
0875712b +0x17b:  mov    %cl,-0x19(%ebp)
0875712e +0x17e:  je     08757159 <+0x1a9>
08757130 +0x180:  mov    -0x4c(%ebp),%ecx
08757133 +0x183:  add    $0x2,%ecx
08757136 +0x186:  mov    %ecx,0xc(%eax)
08757139 +0x189:  mov    -0x4c(%ebp),%ecx
0875713c +0x18c:  movzbl 0x1(%edi,%ecx,1),%eax
08757141 +0x191:  movzbl %al,%ecx
08757144 +0x194:  and    $0xf,%eax
08757147 +0x197:  shr    $0x4,%ecx
0875714a +0x19a:  lea    0x0(,%eax,4),%edi
08757151 +0x1a1:  mov    %cl,-0x38(%ebp)
08757154 +0x1a4:  mov    %edi,%ecx
08757156 +0x1a6:  mov    %cl,-0x1a(%ebp)
08757159 +0x1a9:  movzbl -0x19(%ebp),%eax
0875715d +0x1ad:  mov    0x4(%esi),%edi
08757160 +0x1b0:  mov    %eax,%ecx
08757162 +0x1b2:  and    $0x3,%eax
08757165 +0x1b5:  shr    $0x2,%ecx
08757168 +0x1b8:  movzbl -0x667938(%ebx,%ecx,1),%ecx
08757170 +0x1c0:  shl    $0x4,%eax
08757173 +0x1c3:  mov    %cl,(%edi,%edx,1)
08757176 +0x1c6:  mov    0x4(%esi),%edi
08757179 +0x1c9:  lea    0x2(%edx),%ecx
0875717c +0x1cc:  or     -0x38(%ebp),%al
0875717f +0x1cf:  movzbl %al,%eax
08757182 +0x1d2:  movzbl -0x667938(%ebx,%eax,1),%eax
0875718a +0x1da:  mov    %al,0x1(%edi,%edx,1)
0875718e +0x1de:  lea    0x3(%edx),%eax
08757191 +0x1e1:  mov    0x4(%esi),%edi
08757194 +0x1e4:  cmpb   $0x0,-0x20(%ebp)
08757198 +0x1e8:  mov    $0x3d,%edx
0875719d +0x1ed:  je     087571ab <+0x1fb>
0875719f +0x1ef:  movzbl -0x1a(%ebp),%edx
087571a3 +0x1f3:  movzbl -0x667938(%ebx,%edx,1),%edx
087571ab +0x1fb:  mov    %dl,(%edi,%ecx,1)
087571ae +0x1fe:  mov    0x4(%esi),%ecx
087571b1 +0x201:  lea    0x1(%eax),%edx
087571b4 +0x204:  movb   $0x3d,(%ecx,%eax,1)
087571b8 +0x208:  jmp    087571c9 <+0x219>
087571ba +0x20a:  lea    0x0(%esi),%esi
087571c0 +0x210:  mov    -0x20(%ebp),%ecx
087571c3 +0x213:  test   %ecx,%ecx
087571c5 +0x215:  jne    087571e8 <+0x238>
087571c7 +0x217:  mov    %edi,%edx
087571c9 +0x219:  mov    0x4(%esi),%eax
087571cc +0x21c:  movb   $0xa,(%eax,%edx,1)
087571d0 +0x220:  mov    %esi,0x4(%esp)
087571d4 +0x224:  mov    0xc(%esi),%eax
087571d7 +0x227:  mov    %eax,(%esp)
087571da +0x22a:  call   08758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>  ; TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned char> >&)
087571df +0x22f:  add    $0x6c,%esp
087571e2 +0x232:  pop    %ebx
087571e3 +0x233:  pop    %esi
087571e4 +0x234:  pop    %edi
087571e5 +0x235:  pop    %ebp
087571e6 +0x236:  ret
087571e7 +0x237:  nop
087571e8 +0x238:  mov    0x4(%esi),%eax
087571eb +0x23b:  add    $0x5,%edx
087571ee +0x23e:  movb   $0xa,(%eax,%edi,1)
087571f2 +0x242:  jmp    08757019 <+0x69>
087571f7 +0x247:  nop
087571f8 +0x248:  nop
087571f9 +0x249:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Base64Encoder::Encode @ 0x8756fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Base64Encoder::Encode() */

void __thiscall TaoCrypt::Base64Encoder::Encode(Base64Encoder *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint local_3c;
  byte local_1e;
  
  uVar4 = **(uint **)(this + 0xc);
  iVar11 = ((uVar4 + 2) / 3) * 4;
  iVar11 = (iVar11 + 0x3fU >> 6) + iVar11;
  uVar7 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,iVar11,0);
  *(int *)this = iVar11;
  local_3c = 0;
  *(undefined4 *)(this + 4) = uVar7;
  iVar11 = 0;
  while (iVar6 = iVar11, 2 < uVar4) {
    iVar11 = *(int *)(this + 0xc);
    iVar5 = *(int *)(iVar11 + 0xc);
    *(int *)(iVar11 + 0xc) = iVar5 + 1;
    iVar11 = *(int *)(iVar11 + 4);
    bVar1 = *(byte *)(iVar11 + iVar5);
    *(int *)(*(int *)(this + 0xc) + 0xc) = iVar5 + 2;
    bVar2 = *(byte *)(iVar11 + 1 + iVar5);
    *(int *)(*(int *)(this + 0xc) + 0xc) = iVar5 + 3;
    bVar3 = *(byte *)(iVar11 + 2 + iVar5);
    uVar8 = (uint)bVar2;
    *(char *)(*(int *)(this + 4) + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 >> 2];
    *(char *)(*(int *)(this + 4) + 1 + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(bVar1 & 3) << 4 | (int)uVar8 >> 4];
    uVar9 = (uint)bVar3;
    cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar9 & 0x3f];
    *(char *)(*(int *)(this + 4) + 2 + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(uVar8 & 0xf) << 2 | (int)uVar9 >> 6];
    iVar11 = iVar6 + 4;
    *(char *)(*(int *)(this + 4) + 3 + iVar6) = cVar10;
    local_3c = local_3c + 1;
    uVar4 = uVar4 - 3;
    if ((local_3c & 0xf) == 0) {
      if (uVar4 == 0) goto LAB_087571c9;
      *(undefined1 *)(*(int *)(this + 4) + iVar11) = 10;
      iVar11 = iVar6 + 5;
    }
  }
  iVar11 = iVar6;
  if (uVar4 != 0) {
    iVar11 = *(int *)(this + 0xc);
    iVar5 = *(int *)(iVar11 + 0xc);
    *(int *)(iVar11 + 0xc) = iVar5 + 1;
    bVar1 = *(byte *)(*(int *)(iVar11 + 4) + iVar5);
    local_1e = 0;
    bVar2 = 0;
    if (uVar4 == 2) {
      *(int *)(iVar11 + 0xc) = iVar5 + 2;
      bVar3 = *(byte *)(*(int *)(iVar11 + 4) + 1 + iVar5);
      bVar2 = bVar3 >> 4;
      local_1e = (bVar3 & 0xf) * '\x04';
    }
    *(char *)(*(int *)(this + 4) + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar1 >> 2];
    *(char *)(*(int *)(this + 4) + 1 + iVar6) =
         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
         [(byte)((bVar1 & 3) << 4 | bVar2)];
    cVar10 = '=';
    if (uVar4 == 2) {
      cVar10 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[local_1e];
    }
    *(char *)(*(int *)(this + 4) + iVar6 + 2) = cVar10;
    iVar11 = iVar6 + 4;
    *(undefined1 *)(*(int *)(this + 4) + iVar6 + 3) = 0x3d;
  }
LAB_087571c9:
  *(undefined1 *)(*(int *)(this + 4) + iVar11) = 10;
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}
```
