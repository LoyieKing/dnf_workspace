# Decode

`_ZN8TaoCrypt10HexDecoder6DecodeEv`

`TaoCrypt::HexDecoder::Decode()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HexDecoder` | `0x08757200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757200  _ZN8TaoCrypt10HexDecoder6DecodeEv
#           TaoCrypt::HexDecoder::Decode()
# range [0x08757200, 0x087573bf]
08757200 +0x000:  push   %ebp
08757201 +0x001:  mov    %esp,%ebp
08757203 +0x003:  push   %edi
08757204 +0x004:  push   %esi
08757205 +0x005:  push   %ebx
08757206 +0x006:  sub    $0x5c,%esp
08757209 +0x009:  mov    0x8(%ebp),%esi
0875720c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08757211 +0x011:  add    $0xc15987,%ebx
08757217 +0x017:  mov    0xc(%esi),%eax
0875721a +0x01a:  mov    (%eax),%eax
0875721c +0x01c:  movl   $0x0,0x10(%esp)
08757224 +0x024:  mov    %eax,%edi
08757226 +0x026:  shr    %edi
08757228 +0x028:  mov    %edi,0xc(%esp)
0875722c +0x02c:  mov    %eax,-0x20(%ebp)
0875722f +0x02f:  mov    (%esi),%eax
08757231 +0x031:  mov    %eax,0x8(%esp)
08757235 +0x035:  mov    0x4(%esi),%eax
08757238 +0x038:  mov    %eax,0x4(%esp)
0875723c +0x03c:  lea    0x8(%esi),%eax
0875723f +0x03f:  mov    %eax,(%esp)
08757242 +0x042:  call   087572d0 <+0xd0>
08757247 +0x047:  mov    %edi,(%esi)
08757249 +0x049:  mov    -0x20(%ebp),%edi
0875724c +0x04c:  test   %edi,%edi
0875724e +0x04e:  mov    %eax,0x4(%esi)
08757251 +0x051:  je     087572b6 <+0xb6>
08757253 +0x053:  lea    -0x6678f8(%ebx),%eax
08757259 +0x059:  xor    %edi,%edi
0875725b +0x05b:  mov    %eax,-0x24(%ebp)
0875725e +0x05e:  xchg   %ax,%ax
08757260 +0x060:  mov    0xc(%esi),%edx
08757263 +0x063:  mov    %edi,-0x3c(%ebp)
08757266 +0x066:  mov    0xc(%edx),%eax
08757269 +0x069:  lea    0x1(%eax),%ecx
0875726c +0x06c:  mov    %ecx,0xc(%edx)
0875726f +0x06f:  mov    0x4(%edx),%ecx
08757272 +0x072:  lea    0x2(%eax),%edi
08757275 +0x075:  movzbl (%ecx,%eax,1),%edx
08757279 +0x079:  sub    $0x30,%edx
0875727c +0x07c:  mov    %dl,-0x19(%ebp)
0875727f +0x07f:  mov    0xc(%esi),%edx
08757282 +0x082:  mov    %edi,0xc(%edx)
08757285 +0x085:  movzbl -0x19(%ebp),%edx
08757289 +0x089:  movzbl 0x1(%ecx,%eax,1),%eax
0875728e +0x08e:  mov    -0x24(%ebp),%ecx
08757291 +0x091:  mov    -0x3c(%ebp),%edi
08757294 +0x094:  sub    $0x30,%eax
08757297 +0x097:  movzbl (%ecx,%edx,1),%edx
0875729b +0x09b:  movzbl %al,%eax
0875729e +0x09e:  add    $0x1,%edi
087572a1 +0x0a1:  shl    $0x4,%edx
087572a4 +0x0a4:  or     (%ecx,%eax,1),%dl
087572a7 +0x0a7:  mov    0x4(%esi),%ecx
087572aa +0x0aa:  mov    -0x3c(%ebp),%eax
087572ad +0x0ad:  mov    %dl,(%ecx,%eax,1)
087572b0 +0x0b0:  subl   $0x2,-0x20(%ebp)
087572b4 +0x0b4:  jne    08757260 <+0x60>
087572b6 +0x0b6:  mov    %esi,0x4(%esp)
087572ba +0x0ba:  mov    0xc(%esi),%eax
087572bd +0x0bd:  mov    %eax,(%esp)
087572c0 +0x0c0:  call   08758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>  ; TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned char> >&)
087572c5 +0x0c5:  add    $0x5c,%esp
087572c8 +0x0c8:  pop    %ebx
087572c9 +0x0c9:  pop    %esi
087572ca +0x0ca:  pop    %edi
087572cb +0x0cb:  pop    %ebp
087572cc +0x0cc:  ret
087572cd +0x0cd:  nop
087572ce +0x0ce:  nop
087572cf +0x0cf:  nop
087572d0 +0x0d0:  push   %ebp
087572d1 +0x0d1:  mov    %esp,%ebp
087572d3 +0x0d3:  sub    $0x38,%esp
087572d6 +0x0d6:  mov    %edi,-0x4(%ebp)
087572d9 +0x0d9:  mov    0x10(%ebp),%edx
087572dc +0x0dc:  mov    0x14(%ebp),%edi
087572df +0x0df:  mov    %ebx,-0xc(%ebp)
087572e2 +0x0e2:  movzbl 0x18(%ebp),%eax
087572e6 +0x0e6:  call   08722df8 <__i686.get_pc_thunk.bx>
087572eb +0x0eb:  add    $0xc158ad,%ebx
087572f1 +0x0f1:  mov    %esi,-0x8(%ebp)
087572f4 +0x0f4:  mov    0xc(%ebp),%esi
087572f7 +0x0f7:  cmp    %edi,%edx
087572f9 +0x0f9:  je     0875734d <+0x14d>
087572fb +0x0fb:  test   %al,%al
087572fd +0x0fd:  je     08757360 <+0x160>
087572ff +0x0ff:  xor    %ecx,%ecx
08757301 +0x101:  test   %edi,%edi
08757303 +0x103:  jne    08757398 <+0x198>
08757309 +0x109:  cmp    %edx,%edi
0875730b +0x10b:  cmova  %edx,%edi
0875730e +0x10e:  mov    %ecx,(%esp)
08757311 +0x111:  mov    %ecx,-0x1c(%ebp)
08757314 +0x114:  mov    %esi,0x4(%esp)
08757318 +0x118:  mov    %edx,-0x20(%ebp)
0875731b +0x11b:  mov    %edi,0x8(%esp)
0875731f +0x11f:  call   0807d8a0 <_init+0x198>
08757324 +0x124:  mov    -0x20(%ebp),%edx
08757327 +0x127:  mov    %esi,(%esp)
0875732a +0x12a:  movl   $0x0,0x4(%esp)
08757332 +0x132:  mov    %edx,0x8(%esp)
08757336 +0x136:  call   0807dcc0 <_init+0x5b8>
0875733b +0x13b:  mov    %esi,(%esp)
0875733e +0x13e:  movb   $0x0,0x4(%esp)
08757343 +0x143:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757348 +0x148:  mov    -0x1c(%ebp),%ecx
0875734b +0x14b:  mov    %ecx,%esi
0875734d +0x14d:  mov    %esi,%eax
0875734f +0x14f:  mov    -0xc(%ebp),%ebx
08757352 +0x152:  mov    -0x8(%ebp),%esi
08757355 +0x155:  mov    -0x4(%ebp),%edi
08757358 +0x158:  mov    %ebp,%esp
0875735a +0x15a:  pop    %ebp
0875735b +0x15b:  ret
0875735c +0x15c:  lea    0x0(%esi,%eiz,1),%esi
08757360 +0x160:  mov    %edx,0x8(%esp)
08757364 +0x164:  mov    %esi,(%esp)
08757367 +0x167:  movl   $0x0,0x4(%esp)
0875736f +0x16f:  call   0807dcc0 <_init+0x5b8>
08757374 +0x174:  mov    %esi,(%esp)
08757377 +0x177:  xor    %esi,%esi
08757379 +0x179:  movb   $0x0,0x4(%esp)
0875737e +0x17e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757383 +0x183:  test   %edi,%edi
08757385 +0x185:  je     0875734d <+0x14d>
08757387 +0x187:  movb   $0x0,0x4(%esp)
0875738c +0x18c:  mov    %edi,(%esp)
0875738f +0x18f:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08757394 +0x194:  mov    %eax,%esi
08757396 +0x196:  jmp    0875734d <+0x14d>
08757398 +0x198:  mov    %edx,-0x20(%ebp)
0875739b +0x19b:  movb   $0x0,0x4(%esp)
087573a0 +0x1a0:  mov    %edi,(%esp)
087573a3 +0x1a3:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087573a8 +0x1a8:  mov    -0x20(%ebp),%edx
087573ab +0x1ab:  mov    %eax,%ecx
087573ad +0x1ad:  jmp    08757309 <+0x109>
087573b2 +0x1b2:  nop
087573b3 +0x1b3:  nop
087573b4 +0x1b4:  nop
087573b5 +0x1b5:  nop
087573b6 +0x1b6:  nop
087573b7 +0x1b7:  nop
087573b8 +0x1b8:  nop
087573b9 +0x1b9:  nop
087573ba +0x1ba:  nop
087573bb +0x1bb:  nop
087573bc +0x1bc:  nop
087573bd +0x1bd:  nop
087573be +0x1be:  nop
087573bf +0x1bf:  nop
```

## 反编译 C

```c
// TaoCrypt::HexDecoder::Decode @ 0x8757200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HexDecoder::Decode() */

void __thiscall TaoCrypt::HexDecoder::Decode(HexDecoder *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_24;
  
  local_24 = **(uint **)(this + 0xc);
  uVar4 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,local_24 >> 1,0);
  *(uint *)this = local_24 >> 1;
  *(undefined4 *)(this + 4) = uVar4;
  if (local_24 != 0) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(this + 0xc);
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar3 + 1;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + iVar3);
      *(int *)(*(int *)(this + 0xc) + 0xc) = iVar3 + 2;
      *(char *)(*(int *)(this + 4) + iVar5) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
           [(byte)(cVar1 - 0x30) + 0x40] << 4 |
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
           [(*(byte *)(iVar2 + 1 + iVar3) - 0x30 & 0xff) + 0x40];
      local_24 = local_24 - 2;
      iVar5 = iVar5 + 1;
    } while (local_24 != 0);
  }
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}
```
