# Decode

`_ZN8TaoCrypt13Base64Decoder6DecodeEv`

`TaoCrypt::Base64Decoder::Decode()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Base64Decoder` | `0x08756cc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08756cc0  _ZN8TaoCrypt13Base64Decoder6DecodeEv
#           TaoCrypt::Base64Decoder::Decode()
# range [0x08756cc0, 0x08756faf]
08756cc0 +0x000:  push   %ebp
08756cc1 +0x001:  mov    %esp,%ebp
08756cc3 +0x003:  push   %edi
08756cc4 +0x004:  push   %esi
08756cc5 +0x005:  push   %ebx
08756cc6 +0x006:  sub    $0x7c,%esp
08756cc9 +0x009:  mov    0x8(%ebp),%edi
08756ccc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08756cd1 +0x011:  add    $0xc15ec7,%ebx
08756cd7 +0x017:  mov    0xc(%edi),%eax
08756cda +0x01a:  mov    (%eax),%esi
08756cdc +0x01c:  movl   $0x0,0x10(%esp)
08756ce4 +0x024:  lea    0x3f(%esi),%edx
08756ce7 +0x027:  shr    $0x6,%edx
08756cea +0x02a:  lea    0x1(%esi),%eax
08756ced +0x02d:  sub    %edx,%eax
08756cef +0x02f:  lea    (%eax,%eax,2),%edx
08756cf2 +0x032:  shr    $0x2,%edx
08756cf5 +0x035:  lea    0x8(%edi),%eax
08756cf8 +0x038:  mov    %edx,0xc(%esp)
08756cfc +0x03c:  mov    %eax,-0x4c(%ebp)
08756cff +0x03f:  mov    (%edi),%eax
08756d01 +0x041:  mov    -0x4c(%ebp),%ecx
08756d04 +0x044:  mov    %edx,-0x50(%ebp)
08756d07 +0x047:  mov    %eax,0x8(%esp)
08756d0b +0x04b:  mov    0x4(%edi),%eax
08756d0e +0x04e:  mov    %ecx,(%esp)
08756d11 +0x051:  mov    %eax,0x4(%esp)
08756d15 +0x055:  call   087572d0 <_ZN8TaoCrypt10HexDecoder6DecodeEv+0xd0>  ; TaoCrypt::HexDecoder::Decode()+0xd0
08756d1a +0x05a:  mov    -0x50(%ebp),%edx
08756d1d +0x05d:  cmp    $0x3,%esi
08756d20 +0x060:  movl   $0x0,-0x20(%ebp)
08756d27 +0x067:  mov    %edx,(%edi)
08756d29 +0x069:  mov    %eax,0x4(%edi)
08756d2c +0x06c:  jbe    08756f17 <+0x257>
08756d32 +0x072:  mov    0xc(%edi),%edx
08756d35 +0x075:  mov    0xc(%edx),%eax
08756d38 +0x078:  lea    0x1(%eax),%ecx
08756d3b +0x07b:  mov    %ecx,0xc(%edx)
08756d3e +0x07e:  mov    0x4(%edx),%ecx
08756d41 +0x081:  mov    %ecx,-0x20(%ebp)
08756d44 +0x084:  movzbl (%ecx,%eax,1),%ecx
08756d48 +0x088:  mov    %cl,-0x24(%ebp)
08756d4b +0x08b:  lea    0x2(%eax),%ecx
08756d4e +0x08e:  mov    %ecx,0xc(%edx)
08756d51 +0x091:  mov    -0x20(%ebp),%ecx
08756d54 +0x094:  cmpb   $0x0,-0x24(%ebp)
08756d58 +0x098:  movzbl 0x1(%ecx,%eax,1),%ecx
08756d5d +0x09d:  mov    %cl,-0x28(%ebp)
08756d60 +0x0a0:  lea    0x3(%eax),%ecx
08756d63 +0x0a3:  mov    %ecx,0xc(%edx)
08756d66 +0x0a6:  mov    -0x20(%ebp),%ecx
08756d69 +0x0a9:  movzbl 0x2(%ecx,%eax,1),%ecx
08756d6e +0x0ae:  mov    %cl,-0x1c(%ebp)
08756d71 +0x0b1:  lea    0x4(%eax),%ecx
08756d74 +0x0b4:  mov    %ecx,0xc(%edx)
08756d77 +0x0b7:  mov    -0x20(%ebp),%ecx
08756d7a +0x0ba:  movzbl 0x3(%ecx,%eax,1),%edx
08756d7f +0x0bf:  movl   $0x0,-0x3c(%ebp)
08756d86 +0x0c6:  movl   $0x0,-0x20(%ebp)
08756d8d +0x0cd:  je     08756f15 <+0x255>
08756d93 +0x0d3:  mov    %dl,-0x5a(%ebp)
08756d96 +0x0d6:  xchg   %ax,%ax
08756d98 +0x0d8:  movzbl -0x24(%ebp),%eax
08756d9c +0x0dc:  cmpb   $0x3d,-0x1c(%ebp)
08756da0 +0x0e0:  movb   $0x0,-0x24(%ebp)
08756da4 +0x0e4:  movb   $0x0,-0x38(%ebp)
08756da8 +0x0e8:  movzbl -0x6679c3(%ebx,%eax,1),%eax
08756db0 +0x0f0:  mov    %al,-0x41(%ebp)
08756db3 +0x0f3:  movzbl -0x28(%ebp),%eax
08756db7 +0x0f7:  movzbl -0x6679c3(%ebx,%eax,1),%edx
08756dbf +0x0ff:  je     08756ddb <+0x11b>
08756dc1 +0x101:  movzbl -0x1c(%ebp),%eax
08756dc5 +0x105:  movzbl -0x6679c3(%ebx,%eax,1),%ecx
08756dcd +0x10d:  mov    %ecx,%eax
08756dcf +0x10f:  shr    $0x2,%eax
08756dd2 +0x112:  shl    $0x6,%ecx
08756dd5 +0x115:  mov    %al,-0x38(%ebp)
08756dd8 +0x118:  mov    %cl,-0x24(%ebp)
08756ddb +0x11b:  cmpb   $0x3d,-0x5a(%ebp)
08756ddf +0x11f:  movb   $0x0,-0x59(%ebp)
08756de3 +0x123:  je     08756df4 <+0x134>
08756de5 +0x125:  movzbl -0x5a(%ebp),%eax
08756de9 +0x129:  movzbl -0x6679c3(%ebx,%eax,1),%eax
08756df1 +0x131:  mov    %al,-0x59(%ebp)
08756df4 +0x134:  movzbl %dl,%edx
08756df7 +0x137:  movzbl -0x41(%ebp),%eax
08756dfb +0x13b:  mov    %edx,-0x28(%ebp)
08756dfe +0x13e:  mov    -0x20(%ebp),%edx
08756e01 +0x141:  mov    -0x20(%ebp),%ecx
08756e04 +0x144:  shl    $0x2,%eax
08756e07 +0x147:  add    $0x1,%edx
08756e0a +0x14a:  mov    %edx,-0x40(%ebp)
08756e0d +0x14d:  mov    -0x28(%ebp),%edx
08756e10 +0x150:  sar    $0x4,%edx
08756e13 +0x153:  or     %edx,%eax
08756e15 +0x155:  mov    0x4(%edi),%edx
08756e18 +0x158:  mov    %al,(%edx,%ecx,1)
08756e1b +0x15b:  cmpb   $0x3d,-0x1c(%ebp)
08756e1f +0x15f:  jne    08756f60 <+0x2a0>
08756e25 +0x165:  mov    -0x40(%ebp),%ecx
08756e28 +0x168:  mov    %ecx,-0x20(%ebp)
08756e2b +0x16b:  cmpb   $0x3d,-0x5a(%ebp)
08756e2f +0x16f:  je     08756f15 <+0x255>
08756e35 +0x175:  movzbl -0x59(%ebp),%ecx
08756e39 +0x179:  sub    $0x4,%esi
08756e3c +0x17c:  mov    0x4(%edi),%eax
08756e3f +0x17f:  mov    -0x20(%ebp),%edx
08756e42 +0x182:  or     -0x24(%ebp),%cl
08756e45 +0x185:  mov    %cl,(%eax,%edx,1)
08756e48 +0x188:  addl   $0x1,-0x3c(%ebp)
08756e4c +0x18c:  testb  $0xf,-0x3c(%ebp)
08756e50 +0x190:  jne    08756eb6 <+0x1f6>
08756e52 +0x192:  mov    0xc(%edi),%ecx
08756e55 +0x195:  sub    $0x1,%esi
08756e58 +0x198:  mov    0xc(%ecx),%eax
08756e5b +0x19b:  mov    %eax,-0x28(%ebp)
08756e5e +0x19e:  addl   $0x1,-0x28(%ebp)
08756e62 +0x1a2:  mov    -0x28(%ebp),%edx
08756e65 +0x1a5:  mov    %eax,-0x24(%ebp)
08756e68 +0x1a8:  mov    0x4(%ecx),%eax
08756e6b +0x1ab:  mov    %edx,0xc(%ecx)
08756e6e +0x1ae:  mov    -0x24(%ebp),%edx
08756e71 +0x1b1:  mov    %eax,-0x1c(%ebp)
08756e74 +0x1b4:  movzbl (%eax,%edx,1),%edx
08756e78 +0x1b8:  cmp    $0x20,%dl
08756e7b +0x1bb:  mov    %dl,-0x38(%ebp)
08756e7e +0x1be:  jne    08756ea2 <+0x1e2>
08756e80 +0x1c0:  mov    %edi,-0x24(%ebp)
08756e83 +0x1c3:  mov    %eax,%edi
08756e85 +0x1c5:  mov    -0x28(%ebp),%eax
08756e88 +0x1c8:  mov    %eax,%edx
08756e8a +0x1ca:  add    $0x1,%eax
08756e8d +0x1cd:  mov    %eax,0xc(%ecx)
08756e90 +0x1d0:  movzbl (%edi,%edx,1),%edx
08756e94 +0x1d4:  sub    $0x1,%esi
08756e97 +0x1d7:  cmp    $0x20,%dl
08756e9a +0x1da:  je     08756e88 <+0x1c8>
08756e9c +0x1dc:  mov    -0x24(%ebp),%edi
08756e9f +0x1df:  mov    %dl,-0x38(%ebp)
08756ea2 +0x1e2:  cmpb   $0xd,-0x38(%ebp)
08756ea6 +0x1e6:  je     08756f80 <+0x2c0>
08756eac +0x1ec:  cmpb   $0xa,-0x38(%ebp)
08756eb0 +0x1f0:  jne    08756fa0 <+0x2e0>
08756eb6 +0x1f6:  addl   $0x1,-0x20(%ebp)
08756eba +0x1fa:  cmp    $0x3,%esi
08756ebd +0x1fd:  jbe    08756f15 <+0x255>
08756ebf +0x1ff:  mov    0xc(%edi),%edx
08756ec2 +0x202:  mov    0xc(%edx),%eax
08756ec5 +0x205:  lea    0x1(%eax),%ecx
08756ec8 +0x208:  mov    %ecx,0xc(%edx)
08756ecb +0x20b:  mov    0x4(%edx),%ecx
08756ece +0x20e:  mov    %ecx,-0x40(%ebp)
08756ed1 +0x211:  movzbl (%ecx,%eax,1),%ecx
08756ed5 +0x215:  mov    %cl,-0x24(%ebp)
08756ed8 +0x218:  lea    0x2(%eax),%ecx
08756edb +0x21b:  mov    %ecx,0xc(%edx)
08756ede +0x21e:  mov    -0x40(%ebp),%ecx
08756ee1 +0x221:  cmpb   $0x0,-0x24(%ebp)
08756ee5 +0x225:  movzbl 0x1(%ecx,%eax,1),%ecx
08756eea +0x22a:  mov    %cl,-0x28(%ebp)
08756eed +0x22d:  lea    0x3(%eax),%ecx
08756ef0 +0x230:  mov    %ecx,0xc(%edx)
08756ef3 +0x233:  mov    -0x40(%ebp),%ecx
08756ef6 +0x236:  movzbl 0x2(%ecx,%eax,1),%ecx
08756efb +0x23b:  mov    %cl,-0x1c(%ebp)
08756efe +0x23e:  lea    0x4(%eax),%ecx
08756f01 +0x241:  mov    %ecx,0xc(%edx)
08756f04 +0x244:  mov    -0x40(%ebp),%edx
08756f07 +0x247:  movzbl 0x3(%edx,%eax,1),%eax
08756f0c +0x24c:  mov    %al,-0x5a(%ebp)
08756f0f +0x24f:  jne    08756d98 <+0xd8>
08756f15 +0x255:  mov    (%edi),%edx
08756f17 +0x257:  cmp    %edx,-0x20(%ebp)
08756f1a +0x25a:  je     08756f49 <+0x289>
08756f1c +0x25c:  mov    -0x20(%ebp),%ecx
08756f1f +0x25f:  mov    %edx,0x8(%esp)
08756f23 +0x263:  movl   $0x1,0x10(%esp)
08756f2b +0x26b:  mov    %ecx,0xc(%esp)
08756f2f +0x26f:  mov    0x4(%edi),%eax
08756f32 +0x272:  mov    %eax,0x4(%esp)
08756f36 +0x276:  mov    -0x4c(%ebp),%eax
08756f39 +0x279:  mov    %eax,(%esp)
08756f3c +0x27c:  call   087572d0 <_ZN8TaoCrypt10HexDecoder6DecodeEv+0xd0>  ; TaoCrypt::HexDecoder::Decode()+0xd0
08756f41 +0x281:  mov    -0x20(%ebp),%edx
08756f44 +0x284:  mov    %edx,(%edi)
08756f46 +0x286:  mov    %eax,0x4(%edi)
08756f49 +0x289:  mov    %edi,0x4(%esp)
08756f4d +0x28d:  mov    0xc(%edi),%eax
08756f50 +0x290:  mov    %eax,(%esp)
08756f53 +0x293:  call   08758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>  ; TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned char> >&)
08756f58 +0x298:  add    $0x7c,%esp
08756f5b +0x29b:  pop    %ebx
08756f5c +0x29c:  pop    %esi
08756f5d +0x29d:  pop    %edi
08756f5e +0x29e:  pop    %ebp
08756f5f +0x29f:  ret
08756f60 +0x2a0:  mov    -0x28(%ebp),%eax
08756f63 +0x2a3:  mov    0x4(%edi),%ecx
08756f66 +0x2a6:  mov    -0x40(%ebp),%edx
08756f69 +0x2a9:  addl   $0x2,-0x20(%ebp)
08756f6d +0x2ad:  shl    $0x4,%eax
08756f70 +0x2b0:  or     -0x38(%ebp),%al
08756f73 +0x2b3:  mov    %al,(%ecx,%edx,1)
08756f76 +0x2b6:  jmp    08756e2b <+0x16b>
08756f7b +0x2bb:  nop
08756f7c +0x2bc:  lea    0x0(%esi,%eiz,1),%esi
08756f80 +0x2c0:  mov    0xc(%ecx),%edx
08756f83 +0x2c3:  sub    $0x1,%esi
08756f86 +0x2c6:  lea    0x1(%edx),%eax
08756f89 +0x2c9:  mov    %eax,0xc(%ecx)
08756f8c +0x2cc:  mov    0x4(%ecx),%eax
08756f8f +0x2cf:  movzbl (%eax,%edx,1),%eax
08756f93 +0x2d3:  mov    %al,-0x38(%ebp)
08756f96 +0x2d6:  cmpb   $0xa,-0x38(%ebp)
08756f9a +0x2da:  je     08756eb6 <+0x1f6>
08756fa0 +0x2e0:  movl   $0x411,0x10(%ecx)
08756fa7 +0x2e7:  add    $0x7c,%esp
08756faa +0x2ea:  pop    %ebx
08756fab +0x2eb:  pop    %esi
08756fac +0x2ec:  pop    %edi
08756fad +0x2ed:  pop    %ebp
08756fae +0x2ee:  ret
08756faf +0x2ef:  nop
```

## 反编译 C

```c
// TaoCrypt::Base64Decoder::Decode @ 0x8756cc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Base64Decoder::Decode() */

void __thiscall TaoCrypt::Base64Decoder::Decode(Base64Decoder *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  byte local_5d;
  uint local_40;
  byte local_3c;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = **(uint **)(this + 0xc);
  uVar11 = ((uVar5 + 1) - (uVar5 + 0x3f >> 6)) * 3 >> 2;
  uVar9 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,uVar11,0);
  local_24 = 0;
  *(uint *)this = uVar11;
  *(undefined4 *)(this + 4) = uVar9;
  if (3 < uVar5) {
    iVar6 = *(int *)(this + 0xc);
    iVar7 = *(int *)(iVar6 + 0xc);
    *(int *)(iVar6 + 0xc) = iVar7 + 1;
    iVar8 = *(int *)(iVar6 + 4);
    bVar1 = *(byte *)(iVar8 + iVar7);
    *(int *)(iVar6 + 0xc) = iVar7 + 2;
    bVar10 = *(byte *)(iVar8 + 1 + iVar7);
    *(int *)(iVar6 + 0xc) = iVar7 + 3;
    bVar2 = *(byte *)(iVar8 + 2 + iVar7);
    *(int *)(iVar6 + 0xc) = iVar7 + 4;
    bVar3 = *(byte *)(iVar8 + 3 + iVar7);
    local_40 = 0;
    local_24 = 0;
    while (bVar1 != 0) {
      local_28 = (uint)bVar1;
      local_2c = (uint)bVar10;
      bVar10 = 0;
      local_3c = 0;
      bVar1 = "yaSSL.log"[local_2c + 9];
      if (bVar2 != 0x3d) {
        local_3c = (byte)"yaSSL.log"[bVar2 + 9] >> 2;
        bVar10 = "yaSSL.log"[bVar2 + 9] << 6;
      }
      local_5d = 0;
      if (bVar3 != 0x3d) {
        local_5d = "yaSSL.log"[bVar3 + 9];
      }
      *(byte *)(*(int *)(this + 4) + local_24) =
           "yaSSL.log"[local_28 + 9] << 2 | (byte)((int)(uint)bVar1 >> 4);
      uVar11 = local_24 + 1;
      if (bVar2 != 0x3d) {
        *(byte *)(*(int *)(this + 4) + local_24 + 1) = bVar1 << 4 | local_3c;
        uVar11 = local_24 + 2;
      }
      local_24 = uVar11;
      if (bVar3 == 0x3d) break;
      uVar11 = uVar5 - 4;
      *(byte *)(*(int *)(this + 4) + local_24) = local_5d | bVar10;
      local_40 = local_40 + 1;
      if ((local_40 & 0xf) == 0) {
        iVar7 = *(int *)(this + 0xc);
        uVar11 = uVar5 - 5;
        iVar8 = *(int *)(iVar7 + 0xc);
        iVar6 = iVar8 + 1;
        *(int *)(iVar7 + 0xc) = iVar6;
        cVar4 = *(char *)(*(int *)(iVar7 + 4) + iVar8);
        while (cVar4 == ' ') {
          *(int *)(iVar7 + 0xc) = iVar6 + 1;
          uVar11 = uVar11 - 1;
          cVar4 = *(char *)(*(int *)(iVar7 + 4) + iVar6);
          iVar6 = iVar6 + 1;
        }
        if (cVar4 == '\r') {
          iVar6 = *(int *)(iVar7 + 0xc);
          uVar11 = uVar11 - 1;
          *(int *)(iVar7 + 0xc) = iVar6 + 1;
          cVar4 = *(char *)(*(int *)(iVar7 + 4) + iVar6);
        }
        if (cVar4 != '\n') {
          *(undefined4 *)(iVar7 + 0x10) = 0x411;
          return;
        }
      }
      local_24 = local_24 + 1;
      if (uVar11 < 4) break;
      iVar6 = *(int *)(this + 0xc);
      iVar7 = *(int *)(iVar6 + 0xc);
      *(int *)(iVar6 + 0xc) = iVar7 + 1;
      iVar8 = *(int *)(iVar6 + 4);
      bVar1 = *(byte *)(iVar8 + iVar7);
      *(int *)(iVar6 + 0xc) = iVar7 + 2;
      bVar10 = *(byte *)(iVar8 + 1 + iVar7);
      *(int *)(iVar6 + 0xc) = iVar7 + 3;
      bVar2 = *(byte *)(iVar8 + 2 + iVar7);
      *(int *)(iVar6 + 0xc) = iVar7 + 4;
      bVar3 = *(byte *)(iVar8 + 3 + iVar7);
      uVar5 = uVar11;
    }
    uVar11 = *(uint *)this;
  }
  if (local_24 != uVar11) {
    uVar9 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                      (this + 8,*(undefined4 *)(this + 4),uVar11,local_24,1);
    *(uint *)this = local_24;
    *(undefined4 *)(this + 4) = uVar9;
  }
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}
```
