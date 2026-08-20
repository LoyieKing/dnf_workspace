# Decode

`_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE`

`TaoCrypt::Integer::Decode(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760280  _ZN8TaoCrypt7Integer6DecodeERNS_6SourceE
#           TaoCrypt::Integer::Decode(TaoCrypt::Source&)
# range [0x08760280, 0x087603ba]
08760280 +0x000:  push   %ebp
08760281 +0x001:  mov    %esp,%ebp
08760283 +0x003:  sub    $0x38,%esp
08760286 +0x006:  mov    %esi,-0x8(%ebp)
08760289 +0x009:  mov    0xc(%ebp),%esi
0876028c +0x00c:  mov    %ebx,-0xc(%ebp)
0876028f +0x00f:  mov    %edi,-0x4(%ebp)
08760292 +0x012:  call   08722df8 <__i686.get_pc_thunk.bx>
08760297 +0x017:  add    $0xc0c901,%ebx
0876029d +0x01d:  mov    0xc(%esi),%eax
087602a0 +0x020:  lea    0x1(%eax),%edx
087602a3 +0x023:  mov    %edx,0xc(%esi)
087602a6 +0x026:  mov    0x4(%esi),%edx
087602a9 +0x029:  cmpb   $0x2,(%edx,%eax,1)
087602ad +0x02d:  je     087602c8 <+0x48>
087602af +0x02f:  movl   $0x3f2,0x10(%esi)
087602b6 +0x036:  mov    -0xc(%ebp),%ebx
087602b9 +0x039:  mov    -0x8(%ebp),%esi
087602bc +0x03c:  mov    -0x4(%ebp),%edi
087602bf +0x03f:  mov    %ebp,%esp
087602c1 +0x041:  pop    %ebp
087602c2 +0x042:  ret
087602c3 +0x043:  nop
087602c4 +0x044:  lea    0x0(%esi,%eiz,1),%esi
087602c8 +0x048:  mov    %esi,(%esp)
087602cb +0x04b:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
087602d0 +0x050:  mov    %eax,%edi
087602d2 +0x052:  mov    0xc(%esi),%eax
087602d5 +0x055:  lea    0x1(%eax),%edx
087602d8 +0x058:  mov    %edx,0xc(%esi)
087602db +0x05b:  mov    0x4(%esi),%edx
087602de +0x05e:  cmpb   $0x0,(%edx,%eax,1)
087602e2 +0x062:  jne    08760378 <+0xf8>
087602e8 +0x068:  sub    $0x1,%edi
087602eb +0x06b:  lea    0x3(%edi),%eax
087602ee +0x06e:  shr    $0x2,%eax
087602f1 +0x071:  cmp    $0x8,%eax
087602f4 +0x074:  jbe    08760380 <+0x100>
087602fa +0x07a:  cmp    $0x10,%eax
087602fd +0x07d:  mov    $0x10,%edx
08760302 +0x082:  jbe    08760318 <+0x98>
08760304 +0x084:  cmp    $0x20,%eax
08760307 +0x087:  mov    $0x20,%dl
08760309 +0x089:  jbe    08760318 <+0x98>
0876030b +0x08b:  cmp    $0x40,%eax
0876030e +0x08e:  mov    $0x40,%dl
08760310 +0x090:  ja     087603a0 <+0x120>
08760316 +0x096:  xchg   %ax,%ax
08760318 +0x098:  mov    0x8(%ebp),%eax
0876031b +0x09b:  cmp    %edx,(%eax)
0876031d +0x09d:  jb     08760390 <+0x110>
0876031f +0x09f:  test   %edi,%edi
08760321 +0x0a1:  mov    %edi,%eax
08760323 +0x0a3:  jle    087602b6 <+0x36>
08760325 +0x0a5:  mov    0x8(%ebp),%ecx
08760328 +0x0a8:  mov    %esi,%edi
0876032a +0x0aa:  mov    0x4(%esi),%edx
0876032d +0x0ad:  mov    0x4(%ecx),%ecx
08760330 +0x0b0:  mov    %edx,-0x20(%ebp)
08760333 +0x0b3:  mov    %ecx,-0x1c(%ebp)
08760336 +0x0b6:  xchg   %ax,%ax
08760338 +0x0b8:  mov    0xc(%edi),%edx
0876033b +0x0bb:  sub    $0x1,%eax
0876033e +0x0be:  mov    %eax,%esi
08760340 +0x0c0:  and    $0xfffffffc,%esi
08760343 +0x0c3:  lea    0x1(%edx),%ecx
08760346 +0x0c6:  mov    %ecx,0xc(%edi)
08760349 +0x0c9:  mov    -0x20(%ebp),%ecx
0876034c +0x0cc:  movzbl (%ecx,%edx,1),%edx
08760350 +0x0d0:  mov    %eax,%ecx
08760352 +0x0d2:  and    $0x3,%ecx
08760355 +0x0d5:  shl    $0x3,%ecx
08760358 +0x0d8:  shl    %cl,%edx
0876035a +0x0da:  mov    -0x1c(%ebp),%ecx
0876035d +0x0dd:  or     %edx,(%ecx,%esi,1)
08760360 +0x0e0:  test   %eax,%eax
08760362 +0x0e2:  jne    08760338 <+0xb8>
08760364 +0x0e4:  mov    -0xc(%ebp),%ebx
08760367 +0x0e7:  mov    -0x8(%ebp),%esi
0876036a +0x0ea:  mov    -0x4(%ebp),%edi
0876036d +0x0ed:  mov    %ebp,%esp
0876036f +0x0ef:  pop    %ebp
08760370 +0x0f0:  ret
08760371 +0x0f1:  lea    0x0(%esi,%eiz,1),%esi
08760378 +0x0f8:  mov    %eax,0xc(%esi)
0876037b +0x0fb:  jmp    087602eb <+0x6b>
08760380 +0x100:  mov    -0x6678b8(%ebx,%eax,4),%edx
08760387 +0x107:  jmp    08760318 <+0x98>
08760389 +0x109:  lea    0x0(%esi,%eiz,1),%esi
08760390 +0x110:  mov    %edx,0x4(%esp)
08760394 +0x114:  mov    %eax,(%esp)
08760397 +0x117:  call   08764370 <_ZNK8TaoCrypt7Integer8IsSquareEv+0xb50>  ; TaoCrypt::Integer::IsSquare() const+0xb50
0876039c +0x11c:  jmp    0876031f <+0x9f>
0876039e +0x11e:  xchg   %ax,%ax
087603a0 +0x120:  sub    $0x1,%eax
087603a3 +0x123:  mov    %eax,(%esp)
087603a6 +0x126:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
087603ab +0x12b:  mov    $0x1,%edx
087603b0 +0x130:  mov    %eax,%ecx
087603b2 +0x132:  shl    %cl,%edx
087603b4 +0x134:  jmp    08760318 <+0x98>
087603b9 +0x139:  nop
087603ba +0x13a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Decode @ 0x8760280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Decode(TaoCrypt::Source&) */

void __thiscall TaoCrypt::Integer::Decode(Integer *this,Source *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (*(char *)(*(int *)(param_1 + 4) + iVar2) == '\x02') {
    uVar6 = GetLength(param_1);
    iVar2 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(param_1 + 4) + iVar2) == '\0') {
      uVar6 = uVar6 - 1;
    }
    else {
      *(int *)(param_1 + 0xc) = iVar2;
    }
    uVar7 = uVar6 + 3 >> 2;
    if (uVar7 < 9) {
      uVar8 = (&RoundupSizeTable)[uVar7];
    }
    else {
      uVar8 = 0x10;
      if (((0x10 < uVar7) && (uVar8 = 0x20, 0x20 < uVar7)) && (uVar8 = 0x40, 0x40 < uVar7)) {
        bVar5 = BitPrecision(uVar7 - 1);
        uVar8 = 1 << (bVar5 & 0x1f);
      }
    }
    if (*(uint *)this < uVar8) {
      Block<unsigned_int,TaoCrypt::AllocatorWithCleanup<unsigned_int>>::CleanNew
                ((Block<unsigned_int,TaoCrypt::AllocatorWithCleanup<unsigned_int>> *)this,uVar8);
    }
    if (0 < (int)uVar6) {
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(this + 4);
      do {
        iVar4 = *(int *)(param_1 + 0xc);
        uVar6 = uVar6 - 1;
        *(int *)(param_1 + 0xc) = iVar4 + 1;
        puVar1 = (uint *)(iVar3 + (uVar6 & 0xfffffffc));
        *puVar1 = *puVar1 | (uint)*(byte *)(iVar2 + iVar4) << (sbyte)((uVar6 & 3) << 3);
      } while (uVar6 != 0);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x3f2;
  }
  return;
}
```
