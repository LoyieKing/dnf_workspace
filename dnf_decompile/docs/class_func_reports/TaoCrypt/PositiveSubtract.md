# PositiveSubtract

`_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_`

`TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875d310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d310  _ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_
#           TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x0875d310, 0x0875d56c]
0875d310 +0x000:  push   %ebp
0875d311 +0x001:  mov    %esp,%ebp
0875d313 +0x003:  push   %edi
0875d314 +0x004:  push   %esi
0875d315 +0x005:  push   %ebx
0875d316 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d31b +0x00b:  add    $0xc0f87d,%ebx
0875d321 +0x011:  sub    $0x2c,%esp
0875d324 +0x014:  mov    0xc(%ebp),%edx
0875d327 +0x017:  mov    0x10(%ebp),%edi
0875d32a +0x01a:  mov    %edx,(%esp)
0875d32d +0x01d:  mov    %edx,-0x28(%ebp)
0875d330 +0x020:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d335 +0x025:  mov    %edi,(%esp)
0875d338 +0x028:  mov    %eax,%esi
0875d33a +0x02a:  and    $0x1,%esi
0875d33d +0x02d:  add    %eax,%esi
0875d33f +0x02f:  mov    %esi,-0x1c(%ebp)
0875d342 +0x032:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d347 +0x037:  mov    -0x28(%ebp),%edx
0875d34a +0x03a:  mov    %eax,%esi
0875d34c +0x03c:  and    $0x1,%esi
0875d34f +0x03f:  add    %eax,%esi
0875d351 +0x041:  cmp    %esi,-0x1c(%ebp)
0875d354 +0x044:  je     0875d4c8 <+0x1b8>
0875d35a +0x04a:  jbe    0875d418 <+0x108>
0875d360 +0x050:  mov    %esi,0xc(%esp)
0875d364 +0x054:  mov    0x4(%edi),%eax
0875d367 +0x057:  mov    0x8(%ebp),%ecx
0875d36a +0x05a:  mov    %edx,-0x28(%ebp)
0875d36d +0x05d:  mov    %eax,0x8(%esp)
0875d371 +0x061:  mov    0x4(%edx),%eax
0875d374 +0x064:  mov    %eax,0x4(%esp)
0875d378 +0x068:  mov    0x4(%ecx),%eax
0875d37b +0x06b:  mov    %eax,(%esp)
0875d37e +0x06e:  call   *0x124c90(%ebx)
0875d384 +0x074:  mov    -0x28(%ebp),%edx
0875d387 +0x077:  mov    0x4(%edx),%ecx
0875d38a +0x07a:  mov    %eax,-0x24(%ebp)
0875d38d +0x07d:  lea    0x0(,%esi,4),%eax
0875d394 +0x084:  mov    %eax,%edx
0875d396 +0x086:  add    %eax,%ecx
0875d398 +0x088:  mov    %eax,-0x20(%ebp)
0875d39b +0x08b:  mov    0x8(%ebp),%eax
0875d39e +0x08e:  add    0x4(%eax),%edx
0875d3a1 +0x091:  mov    -0x1c(%ebp),%eax
0875d3a4 +0x094:  sub    %esi,%eax
0875d3a6 +0x096:  mov    %eax,%esi
0875d3a8 +0x098:  je     0875d3c6 <+0xb6>
0875d3aa +0x09a:  xor    %eax,%eax
0875d3ac +0x09c:  lea    0x0(%esi,%eiz,1),%esi
0875d3b0 +0x0a0:  mov    (%ecx,%eax,4),%edi
0875d3b3 +0x0a3:  mov    %edi,(%edx,%eax,4)
0875d3b6 +0x0a6:  add    $0x1,%eax
0875d3b9 +0x0a9:  cmp    %eax,%esi
0875d3bb +0x0ab:  ja     0875d3b0 <+0xa0>
0875d3bd +0x0ad:  mov    0x8(%ebp),%ecx
0875d3c0 +0x0b0:  mov    -0x20(%ebp),%edx
0875d3c3 +0x0b3:  add    0x4(%ecx),%edx
0875d3c6 +0x0b6:  mov    (%edx),%eax
0875d3c8 +0x0b8:  mov    %eax,%ecx
0875d3ca +0x0ba:  sub    -0x24(%ebp),%ecx
0875d3cd +0x0bd:  cmp    %ecx,%eax
0875d3cf +0x0bf:  mov    %ecx,(%edx)
0875d3d1 +0x0c1:  jae    0875d404 <+0xf4>
0875d3d3 +0x0c3:  cmp    $0x1,%esi
0875d3d6 +0x0c6:  jbe    0875d404 <+0xf4>
0875d3d8 +0x0c8:  mov    0x4(%edx),%ecx
0875d3db +0x0cb:  lea    -0x1(%ecx),%eax
0875d3de +0x0ce:  test   %ecx,%ecx
0875d3e0 +0x0d0:  mov    %eax,0x4(%edx)
0875d3e3 +0x0d3:  mov    $0x1,%eax
0875d3e8 +0x0d8:  je     0875d3fd <+0xed>
0875d3ea +0x0da:  jmp    0875d404 <+0xf4>
0875d3ec +0x0dc:  lea    0x0(%esi,%eiz,1),%esi
0875d3f0 +0x0e0:  mov    (%edx,%eax,4),%ecx
0875d3f3 +0x0e3:  lea    -0x1(%ecx),%edi
0875d3f6 +0x0e6:  test   %ecx,%ecx
0875d3f8 +0x0e8:  mov    %edi,(%edx,%eax,4)
0875d3fb +0x0eb:  jne    0875d404 <+0xf4>
0875d3fd +0x0ed:  add    $0x1,%eax
0875d400 +0x0f0:  cmp    %eax,%esi
0875d402 +0x0f2:  ja     0875d3f0 <+0xe0>
0875d404 +0x0f4:  mov    0x8(%ebp),%eax
0875d407 +0x0f7:  movl   $0x0,0xc(%eax)
0875d40e +0x0fe:  add    $0x2c,%esp
0875d411 +0x101:  pop    %ebx
0875d412 +0x102:  pop    %esi
0875d413 +0x103:  pop    %edi
0875d414 +0x104:  pop    %ebp
0875d415 +0x105:  ret
0875d416 +0x106:  xchg   %ax,%ax
0875d418 +0x108:  mov    -0x1c(%ebp),%ecx
0875d41b +0x10b:  mov    %ecx,0xc(%esp)
0875d41f +0x10f:  mov    0x4(%edx),%eax
0875d422 +0x112:  mov    0x8(%ebp),%edx
0875d425 +0x115:  mov    %eax,0x8(%esp)
0875d429 +0x119:  mov    0x4(%edi),%eax
0875d42c +0x11c:  mov    %eax,0x4(%esp)
0875d430 +0x120:  mov    0x4(%edx),%eax
0875d433 +0x123:  mov    %eax,(%esp)
0875d436 +0x126:  call   *0x124c90(%ebx)
0875d43c +0x12c:  mov    -0x1c(%ebp),%ecx
0875d43f +0x12f:  shl    $0x2,%ecx
0875d442 +0x132:  mov    %ecx,-0x20(%ebp)
0875d445 +0x135:  mov    -0x20(%ebp),%edx
0875d448 +0x138:  mov    %eax,-0x24(%ebp)
0875d44b +0x13b:  mov    0x8(%ebp),%eax
0875d44e +0x13e:  add    0x4(%edi),%ecx
0875d451 +0x141:  add    0x4(%eax),%edx
0875d454 +0x144:  sub    -0x1c(%ebp),%esi
0875d457 +0x147:  je     0875d476 <+0x166>
0875d459 +0x149:  xor    %eax,%eax
0875d45b +0x14b:  nop
0875d45c +0x14c:  lea    0x0(%esi,%eiz,1),%esi
0875d460 +0x150:  mov    (%ecx,%eax,4),%edi
0875d463 +0x153:  mov    %edi,(%edx,%eax,4)
0875d466 +0x156:  add    $0x1,%eax
0875d469 +0x159:  cmp    %eax,%esi
0875d46b +0x15b:  ja     0875d460 <+0x150>
0875d46d +0x15d:  mov    0x8(%ebp),%ecx
0875d470 +0x160:  mov    -0x20(%ebp),%edx
0875d473 +0x163:  add    0x4(%ecx),%edx
0875d476 +0x166:  mov    (%edx),%eax
0875d478 +0x168:  mov    %eax,%ecx
0875d47a +0x16a:  sub    -0x24(%ebp),%ecx
0875d47d +0x16d:  cmp    %ecx,%eax
0875d47f +0x16f:  mov    %ecx,(%edx)
0875d481 +0x171:  jae    0875d4b4 <+0x1a4>
0875d483 +0x173:  cmp    $0x1,%esi
0875d486 +0x176:  jbe    0875d4b4 <+0x1a4>
0875d488 +0x178:  mov    0x4(%edx),%ecx
0875d48b +0x17b:  lea    -0x1(%ecx),%eax
0875d48e +0x17e:  test   %ecx,%ecx
0875d490 +0x180:  mov    %eax,0x4(%edx)
0875d493 +0x183:  mov    $0x1,%eax
0875d498 +0x188:  je     0875d4ad <+0x19d>
0875d49a +0x18a:  jmp    0875d4b4 <+0x1a4>
0875d49c +0x18c:  lea    0x0(%esi,%eiz,1),%esi
0875d4a0 +0x190:  mov    (%edx,%eax,4),%ecx
0875d4a3 +0x193:  lea    -0x1(%ecx),%edi
0875d4a6 +0x196:  test   %ecx,%ecx
0875d4a8 +0x198:  mov    %edi,(%edx,%eax,4)
0875d4ab +0x19b:  jne    0875d4b4 <+0x1a4>
0875d4ad +0x19d:  add    $0x1,%eax
0875d4b0 +0x1a0:  cmp    %eax,%esi
0875d4b2 +0x1a2:  ja     0875d4a0 <+0x190>
0875d4b4 +0x1a4:  mov    0x8(%ebp),%eax
0875d4b7 +0x1a7:  movl   $0x1,0xc(%eax)
0875d4be +0x1ae:  add    $0x2c,%esp
0875d4c1 +0x1b1:  pop    %ebx
0875d4c2 +0x1b2:  pop    %esi
0875d4c3 +0x1b3:  pop    %edi
0875d4c4 +0x1b4:  pop    %ebp
0875d4c5 +0x1b5:  ret
0875d4c6 +0x1b6:  xchg   %ax,%ax
0875d4c8 +0x1b8:  mov    0x4(%edx),%edx
0875d4cb +0x1bb:  mov    -0x1c(%ebp),%eax
0875d4ce +0x1be:  mov    0x4(%edi),%edi
0875d4d1 +0x1c1:  mov    %edx,-0x20(%ebp)
0875d4d4 +0x1c4:  mov    -0x20(%ebp),%ecx
0875d4d7 +0x1c7:  lea    -0x4(,%eax,4),%edx
0875d4de +0x1ce:  mov    %edi,-0x24(%ebp)
0875d4e1 +0x1d1:  add    %edx,%ecx
0875d4e3 +0x1d3:  add    %edi,%edx
0875d4e5 +0x1d5:  lea    0x0(%esi),%esi
0875d4e8 +0x1d8:  test   %eax,%eax
0875d4ea +0x1da:  je     0875d538 <+0x228>
0875d4ec +0x1dc:  mov    (%ecx),%edi
0875d4ee +0x1de:  sub    $0x1,%eax
0875d4f1 +0x1e1:  mov    (%edx),%esi
0875d4f3 +0x1e3:  cmp    %esi,%edi
0875d4f5 +0x1e5:  ja     0875d538 <+0x228>
0875d4f7 +0x1e7:  sub    $0x4,%ecx
0875d4fa +0x1ea:  sub    $0x4,%edx
0875d4fd +0x1ed:  cmp    %esi,%edi
0875d4ff +0x1ef:  jae    0875d4e8 <+0x1d8>
0875d501 +0x1f1:  mov    -0x1c(%ebp),%edx
0875d504 +0x1f4:  mov    -0x20(%ebp),%ecx
0875d507 +0x1f7:  mov    -0x24(%ebp),%eax
0875d50a +0x1fa:  mov    %edx,0xc(%esp)
0875d50e +0x1fe:  mov    0x8(%ebp),%edx
0875d511 +0x201:  mov    %ecx,0x8(%esp)
0875d515 +0x205:  mov    %eax,0x4(%esp)
0875d519 +0x209:  mov    0x4(%edx),%eax
0875d51c +0x20c:  mov    %eax,(%esp)
0875d51f +0x20f:  call   *0x124c90(%ebx)
0875d525 +0x215:  mov    0x8(%ebp),%ecx
0875d528 +0x218:  movl   $0x1,0xc(%ecx)
0875d52f +0x21f:  add    $0x2c,%esp
0875d532 +0x222:  pop    %ebx
0875d533 +0x223:  pop    %esi
0875d534 +0x224:  pop    %edi
0875d535 +0x225:  pop    %ebp
0875d536 +0x226:  ret
0875d537 +0x227:  nop
0875d538 +0x228:  mov    -0x1c(%ebp),%edx
0875d53b +0x22b:  mov    -0x24(%ebp),%ecx
0875d53e +0x22e:  mov    -0x20(%ebp),%eax
0875d541 +0x231:  mov    %edx,0xc(%esp)
0875d545 +0x235:  mov    0x8(%ebp),%edx
0875d548 +0x238:  mov    %ecx,0x8(%esp)
0875d54c +0x23c:  mov    %eax,0x4(%esp)
0875d550 +0x240:  mov    0x4(%edx),%eax
0875d553 +0x243:  mov    %eax,(%esp)
0875d556 +0x246:  call   *0x124c90(%ebx)
0875d55c +0x24c:  mov    0x8(%ebp),%ecx
0875d55f +0x24f:  movl   $0x0,0xc(%ecx)
0875d566 +0x256:  jmp    0875d4be <+0x1ae>
0875d56b +0x25b:  nop
0875d56c +0x25c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::PositiveSubtract @ 0x875d310

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

void TaoCrypt::PositiveSubtract(Integer *param_1,Integer *param_2,Integer *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar3 = Integer::WordCount(param_2);
  uVar3 = (uVar3 & 1) + uVar3;
  uVar4 = Integer::WordCount(param_3);
  uVar4 = (uVar4 & 1) + uVar4;
  if (uVar3 == uVar4) {
    iVar7 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_3 + 4);
    iVar1 = uVar3 * 4 + -4;
    puVar8 = (uint *)(iVar7 + iVar1);
    puVar9 = (uint *)(iVar1 + iVar5);
    uVar4 = uVar3;
    while (uVar4 != 0) {
      uVar6 = *puVar8;
      uVar4 = uVar4 - 1;
      uVar2 = *puVar9;
      if (uVar2 < uVar6) break;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + -1;
      if (uVar6 < uVar2) {
        (*s_pSub)(*(undefined4 *)(param_1 + 4),iVar5,iVar7,uVar3);
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
    }
    (*s_pSub)(*(undefined4 *)(param_1 + 4),iVar7,iVar5,uVar3);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    if (uVar4 < uVar3) {
      iVar5 = (*s_pSub)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                        *(undefined4 *)(param_3 + 4),uVar4);
      iVar7 = *(int *)(param_2 + 4);
      iVar1 = uVar4 * 4;
      puVar8 = (uint *)(iVar1 + *(int *)(param_1 + 4));
      uVar6 = uVar3 - uVar4;
      if (uVar3 != uVar4) {
        uVar3 = 0;
        do {
          puVar8[uVar3] = *(uint *)(iVar7 + iVar1 + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
        puVar8 = (uint *)(iVar1 + *(int *)(param_1 + 4));
      }
      uVar3 = *puVar8;
      uVar4 = uVar3 - iVar5;
      *puVar8 = uVar4;
      if ((uVar3 < uVar4) && (1 < uVar6)) {
        uVar3 = puVar8[1];
        puVar8[1] = uVar3 - 1;
        uVar4 = 1;
        while ((uVar3 == 0 && (uVar4 = uVar4 + 1, uVar4 < uVar6))) {
          uVar3 = puVar8[uVar4];
          puVar8[uVar4] = uVar3 - 1;
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    iVar7 = (*s_pSub)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_3 + 4),
                      *(undefined4 *)(param_2 + 4),uVar3);
    iVar5 = uVar3 * 4;
    iVar1 = *(int *)(param_3 + 4);
    puVar8 = (uint *)(iVar5 + *(int *)(param_1 + 4));
    uVar6 = uVar4 - uVar3;
    if (uVar4 != uVar3) {
      uVar3 = 0;
      do {
        puVar8[uVar3] = *(uint *)(iVar5 + iVar1 + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
      puVar8 = (uint *)(iVar5 + *(int *)(param_1 + 4));
    }
    uVar3 = *puVar8;
    uVar4 = uVar3 - iVar7;
    *puVar8 = uVar4;
    if ((uVar3 < uVar4) && (1 < uVar6)) {
      uVar3 = puVar8[1];
      puVar8[1] = uVar3 - 1;
      uVar4 = 1;
      while ((uVar3 == 0 && (uVar4 = uVar4 + 1, uVar4 < uVar6))) {
        uVar3 = puVar8[uVar4];
        puVar8[uVar4] = uVar3 - 1;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}
```
