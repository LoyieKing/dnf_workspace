# PositiveAdd

`_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_`

`TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875fa30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875fa30  _ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_
#           TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x0875fa30, 0x0875fcba]
0875fa30 +0x000:  push   %ebp
0875fa31 +0x001:  mov    %esp,%ebp
0875fa33 +0x003:  push   %edi
0875fa34 +0x004:  push   %esi
0875fa35 +0x005:  push   %ebx
0875fa36 +0x006:  sub    $0x4c,%esp
0875fa39 +0x009:  mov    0xc(%ebp),%edx
0875fa3c +0x00c:  mov    0x10(%ebp),%ecx
0875fa3f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
0875fa44 +0x014:  add    $0xc0d154,%ebx
0875fa4a +0x01a:  mov    (%edx),%eax
0875fa4c +0x01c:  mov    (%ecx),%edx
0875fa4e +0x01e:  cmp    %edx,%eax
0875fa50 +0x020:  je     0875fc88 <+0x258>
0875fa56 +0x026:  jbe    0875fb50 <+0x120>
0875fa5c +0x02c:  mov    0x10(%ebp),%ecx
0875fa5f +0x02f:  mov    %edx,0xc(%esp)
0875fa63 +0x033:  mov    0xc(%ebp),%esi
0875fa66 +0x036:  mov    0x8(%ebp),%edx
0875fa69 +0x039:  mov    0x4(%ecx),%eax
0875fa6c +0x03c:  mov    %eax,0x8(%esp)
0875fa70 +0x040:  mov    0x4(%esi),%eax
0875fa73 +0x043:  mov    %eax,0x4(%esp)
0875fa77 +0x047:  mov    0x4(%edx),%eax
0875fa7a +0x04a:  mov    %eax,(%esp)
0875fa7d +0x04d:  call   *0x124c8c(%ebx)
0875fa83 +0x053:  mov    0x10(%ebp),%ecx
0875fa86 +0x056:  mov    (%esi),%esi
0875fa88 +0x058:  mov    (%ecx),%ecx
0875fa8a +0x05a:  mov    %esi,-0x20(%ebp)
0875fa8d +0x05d:  mov    %eax,-0x1c(%ebp)
0875fa90 +0x060:  mov    0xc(%ebp),%eax
0875fa93 +0x063:  mov    %ecx,-0x34(%ebp)
0875fa96 +0x066:  mov    %ecx,%edx
0875fa98 +0x068:  mov    0x8(%ebp),%ecx
0875fa9b +0x06b:  shl    $0x2,%edx
0875fa9e +0x06e:  mov    %edx,%edi
0875faa0 +0x070:  add    0x4(%eax),%edi
0875faa3 +0x073:  xor    %eax,%eax
0875faa5 +0x075:  add    0x4(%ecx),%edx
0875faa8 +0x078:  xor    %ecx,%ecx
0875faaa +0x07a:  sub    -0x34(%ebp),%esi
0875faad +0x07d:  mov    %esi,-0x2c(%ebp)
0875fab0 +0x080:  je     0875fada <+0xaa>
0875fab2 +0x082:  lea    0x0(%esi),%esi
0875fab8 +0x088:  mov    (%edi,%eax,4),%ecx
0875fabb +0x08b:  mov    %ecx,(%edx,%eax,4)
0875fabe +0x08e:  add    $0x1,%eax
0875fac1 +0x091:  cmp    %eax,%esi
0875fac3 +0x093:  ja     0875fab8 <+0x88>
0875fac5 +0x095:  mov    0x10(%ebp),%esi
0875fac8 +0x098:  mov    0xc(%ebp),%eax
0875facb +0x09b:  mov    (%esi),%edx
0875facd +0x09d:  mov    (%eax),%ecx
0875facf +0x09f:  mov    0x8(%ebp),%esi
0875fad2 +0x0a2:  sub    %edx,%ecx
0875fad4 +0x0a4:  shl    $0x2,%edx
0875fad7 +0x0a7:  add    0x4(%esi),%edx
0875fada +0x0aa:  mov    (%edx),%eax
0875fadc +0x0ac:  mov    -0x1c(%ebp),%esi
0875fadf +0x0af:  lea    (%eax,%esi,1),%esi
0875fae2 +0x0b2:  cmp    %esi,%eax
0875fae4 +0x0b4:  mov    %esi,(%edx)
0875fae6 +0x0b6:  jbe    0875fb3d <+0x10d>
0875fae8 +0x0b8:  cmp    $0x1,%ecx
0875faeb +0x0bb:  jbe    0875fb1c <+0xec>
0875faed +0x0bd:  mov    0x4(%edx),%esi
0875faf0 +0x0c0:  mov    $0x1,%eax
0875faf5 +0x0c5:  add    $0x1,%esi
0875faf8 +0x0c8:  test   %esi,%esi
0875fafa +0x0ca:  mov    %esi,0x4(%edx)
0875fafd +0x0cd:  jne    0875fb3d <+0x10d>
0875faff +0x0cf:  add    $0x1,%eax
0875fb02 +0x0d2:  cmp    %ecx,%eax
0875fb04 +0x0d4:  jae    0875fb1c <+0xec>
0875fb06 +0x0d6:  xchg   %ax,%ax
0875fb08 +0x0d8:  mov    (%edx,%eax,4),%esi
0875fb0b +0x0db:  add    $0x1,%esi
0875fb0e +0x0de:  test   %esi,%esi
0875fb10 +0x0e0:  mov    %esi,(%edx,%eax,4)
0875fb13 +0x0e3:  jne    0875fb3d <+0x10d>
0875fb15 +0x0e5:  add    $0x1,%eax
0875fb18 +0x0e8:  cmp    %ecx,%eax
0875fb1a +0x0ea:  jb     0875fb08 <+0xd8>
0875fb1c +0x0ec:  mov    0x8(%ebp),%edx
0875fb1f +0x0ef:  mov    (%edx),%eax
0875fb21 +0x0f1:  lea    (%eax,%eax,1),%esi
0875fb24 +0x0f4:  cmp    %eax,%esi
0875fb26 +0x0f6:  ja     0875fc30 <+0x200>
0875fb2c +0x0fc:  mov    0x8(%ebp),%edx
0875fb2f +0x0ff:  mov    %eax,%esi
0875fb31 +0x101:  mov    0x4(%edx),%eax
0875fb34 +0x104:  shr    %esi
0875fb36 +0x106:  movl   $0x1,(%eax,%esi,4)
0875fb3d +0x10d:  mov    0x8(%ebp),%ecx
0875fb40 +0x110:  movl   $0x0,0xc(%ecx)
0875fb47 +0x117:  add    $0x4c,%esp
0875fb4a +0x11a:  pop    %ebx
0875fb4b +0x11b:  pop    %esi
0875fb4c +0x11c:  pop    %edi
0875fb4d +0x11d:  pop    %ebp
0875fb4e +0x11e:  ret
0875fb4f +0x11f:  nop
0875fb50 +0x120:  mov    0x10(%ebp),%edx
0875fb53 +0x123:  mov    %eax,0xc(%esp)
0875fb57 +0x127:  mov    0xc(%ebp),%ecx
0875fb5a +0x12a:  mov    0x8(%ebp),%esi
0875fb5d +0x12d:  mov    0x4(%edx),%eax
0875fb60 +0x130:  mov    %eax,0x8(%esp)
0875fb64 +0x134:  mov    0x4(%ecx),%eax
0875fb67 +0x137:  mov    %eax,0x4(%esp)
0875fb6b +0x13b:  mov    0x4(%esi),%eax
0875fb6e +0x13e:  mov    %eax,(%esp)
0875fb71 +0x141:  call   *0x124c8c(%ebx)
0875fb77 +0x147:  mov    0x10(%ebp),%edx
0875fb7a +0x14a:  mov    0x10(%ebp),%ecx
0875fb7d +0x14d:  mov    (%edx),%edx
0875fb7f +0x14f:  mov    %eax,-0x1c(%ebp)
0875fb82 +0x152:  mov    0xc(%ebp),%eax
0875fb85 +0x155:  mov    %edx,-0x24(%ebp)
0875fb88 +0x158:  mov    (%eax),%eax
0875fb8a +0x15a:  mov    %eax,%edx
0875fb8c +0x15c:  shl    $0x2,%edx
0875fb8f +0x15f:  mov    %edx,%edi
0875fb91 +0x161:  add    0x4(%esi),%edx
0875fb94 +0x164:  mov    -0x24(%ebp),%esi
0875fb97 +0x167:  mov    %eax,-0x30(%ebp)
0875fb9a +0x16a:  xor    %eax,%eax
0875fb9c +0x16c:  add    0x4(%ecx),%edi
0875fb9f +0x16f:  xor    %ecx,%ecx
0875fba1 +0x171:  sub    -0x30(%ebp),%esi
0875fba4 +0x174:  mov    %esi,-0x2c(%ebp)
0875fba7 +0x177:  je     0875fbd2 <+0x1a2>
0875fba9 +0x179:  lea    0x0(%esi,%eiz,1),%esi
0875fbb0 +0x180:  mov    (%edi,%eax,4),%ecx
0875fbb3 +0x183:  mov    %ecx,(%edx,%eax,4)
0875fbb6 +0x186:  add    $0x1,%eax
0875fbb9 +0x189:  cmp    %eax,%esi
0875fbbb +0x18b:  ja     0875fbb0 <+0x180>
0875fbbd +0x18d:  mov    0xc(%ebp),%eax
0875fbc0 +0x190:  mov    0x10(%ebp),%esi
0875fbc3 +0x193:  mov    (%eax),%edx
0875fbc5 +0x195:  mov    (%esi),%ecx
0875fbc7 +0x197:  mov    0x8(%ebp),%eax
0875fbca +0x19a:  sub    %edx,%ecx
0875fbcc +0x19c:  shl    $0x2,%edx
0875fbcf +0x19f:  add    0x4(%eax),%edx
0875fbd2 +0x1a2:  mov    (%edx),%eax
0875fbd4 +0x1a4:  mov    -0x1c(%ebp),%esi
0875fbd7 +0x1a7:  lea    (%eax,%esi,1),%esi
0875fbda +0x1aa:  cmp    %esi,%eax
0875fbdc +0x1ac:  mov    %esi,(%edx)
0875fbde +0x1ae:  jbe    0875fb3d <+0x10d>
0875fbe4 +0x1b4:  cmp    $0x1,%ecx
0875fbe7 +0x1b7:  jbe    0875fb1c <+0xec>
0875fbed +0x1bd:  mov    0x4(%edx),%esi
0875fbf0 +0x1c0:  mov    $0x1,%eax
0875fbf5 +0x1c5:  add    $0x1,%esi
0875fbf8 +0x1c8:  test   %esi,%esi
0875fbfa +0x1ca:  mov    %esi,0x4(%edx)
0875fbfd +0x1cd:  jne    0875fb3d <+0x10d>
0875fc03 +0x1d3:  add    $0x1,%eax
0875fc06 +0x1d6:  cmp    %ecx,%eax
0875fc08 +0x1d8:  jae    0875fb1c <+0xec>
0875fc0e +0x1de:  xchg   %ax,%ax
0875fc10 +0x1e0:  mov    (%edx,%eax,4),%esi
0875fc13 +0x1e3:  add    $0x1,%esi
0875fc16 +0x1e6:  test   %esi,%esi
0875fc18 +0x1e8:  mov    %esi,(%edx,%eax,4)
0875fc1b +0x1eb:  jne    0875fb3d <+0x10d>
0875fc21 +0x1f1:  add    $0x1,%eax
0875fc24 +0x1f4:  cmp    %ecx,%eax
0875fc26 +0x1f6:  jb     0875fc10 <+0x1e0>
0875fc28 +0x1f8:  jmp    0875fb1c <+0xec>
0875fc2d +0x1fd:  lea    0x0(%esi),%esi
0875fc30 +0x200:  movl   $0x1,0x10(%esp)
0875fc38 +0x208:  mov    %esi,0xc(%esp)
0875fc3c +0x20c:  mov    %eax,0x8(%esp)
0875fc40 +0x210:  mov    0x4(%edx),%eax
0875fc43 +0x213:  mov    %eax,0x4(%esp)
0875fc47 +0x217:  mov    %edx,%eax
0875fc49 +0x219:  add    $0x8,%eax
0875fc4c +0x21c:  mov    %eax,(%esp)
0875fc4f +0x21f:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875fc54 +0x224:  mov    0x8(%ebp),%edx
0875fc57 +0x227:  mov    %esi,%ecx
0875fc59 +0x229:  mov    %eax,0x4(%edx)
0875fc5c +0x22c:  mov    (%edx),%edx
0875fc5e +0x22e:  movl   $0x0,0x4(%esp)
0875fc66 +0x236:  sub    %edx,%ecx
0875fc68 +0x238:  lea    (%eax,%edx,4),%eax
0875fc6b +0x23b:  shl    $0x2,%ecx
0875fc6e +0x23e:  mov    %ecx,0x8(%esp)
0875fc72 +0x242:  mov    %eax,(%esp)
0875fc75 +0x245:  call   0807dcc0 <_init+0x5b8>
0875fc7a +0x24a:  mov    0x8(%ebp),%eax
0875fc7d +0x24d:  mov    %esi,(%eax)
0875fc7f +0x24f:  mov    %eax,%edx
0875fc81 +0x251:  jmp    0875fb31 <+0x101>
0875fc86 +0x256:  xchg   %ax,%ax
0875fc88 +0x258:  mov    %eax,0xc(%esp)
0875fc8c +0x25c:  mov    0xc(%ebp),%esi
0875fc8f +0x25f:  mov    0x4(%ecx),%eax
0875fc92 +0x262:  mov    0x8(%ebp),%edx
0875fc95 +0x265:  mov    %eax,0x8(%esp)
0875fc99 +0x269:  mov    0x4(%esi),%eax
0875fc9c +0x26c:  mov    %eax,0x4(%esp)
0875fca0 +0x270:  mov    0x4(%edx),%eax
0875fca3 +0x273:  mov    %eax,(%esp)
0875fca6 +0x276:  call   *0x124c8c(%ebx)
0875fcac +0x27c:  test   %eax,%eax
0875fcae +0x27e:  jne    0875fb1c <+0xec>
0875fcb4 +0x284:  jmp    0875fb3d <+0x10d>
0875fcb9 +0x289:  nop
0875fcba +0x28a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::PositiveAdd @ 0x875fa30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void TaoCrypt::PositiveAdd(Integer *param_1,Integer *param_2,Integer *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar5 = *(uint *)param_2;
  uVar7 = *(uint *)param_3;
  if (uVar5 == uVar7) {
    iVar6 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_3 + 4),uVar5);
    if (iVar6 == 0) goto LAB_0875fb3d;
  }
  else if (uVar7 < uVar5) {
    iVar4 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_3 + 4),uVar7);
    iVar6 = *(int *)param_2;
    iVar1 = *(int *)param_3;
    iVar2 = *(int *)(param_2 + 4);
    uVar5 = 0;
    puVar8 = (uint *)(iVar1 * 4 + *(int *)(param_1 + 4));
    uVar7 = 0;
    if (iVar6 != iVar1) {
      do {
        puVar8[uVar5] = *(uint *)(iVar1 * 4 + iVar2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(iVar6 - iVar1));
      uVar7 = *(int *)param_2 - *(int *)param_3;
      puVar8 = (uint *)(*(int *)param_3 * 4 + *(int *)(param_1 + 4));
    }
    uVar3 = *puVar8;
    uVar5 = uVar3 + iVar4;
    *puVar8 = uVar5;
    if (uVar3 <= uVar5) goto LAB_0875fb3d;
    if (1 < uVar7) {
      uVar5 = puVar8[1];
      puVar8[1] = uVar5 + 1;
      if (uVar5 + 1 != 0) goto LAB_0875fb3d;
      uVar5 = 2;
      if (2 < uVar7) {
        do {
          uVar3 = puVar8[uVar5];
          puVar8[uVar5] = uVar3 + 1;
          if (uVar3 + 1 != 0) goto LAB_0875fb3d;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
    }
  }
  else {
    iVar4 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_3 + 4),uVar5);
    iVar6 = *(int *)param_3;
    iVar1 = *(int *)param_2;
    puVar8 = (uint *)(iVar1 * 4 + *(int *)(param_1 + 4));
    uVar5 = 0;
    iVar2 = *(int *)(param_3 + 4);
    uVar7 = 0;
    if (iVar6 != iVar1) {
      do {
        puVar8[uVar5] = *(uint *)(iVar1 * 4 + iVar2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(iVar6 - iVar1));
      uVar7 = *(int *)param_3 - *(int *)param_2;
      puVar8 = (uint *)(*(int *)param_2 * 4 + *(int *)(param_1 + 4));
    }
    uVar3 = *puVar8;
    uVar5 = uVar3 + iVar4;
    *puVar8 = uVar5;
    if (uVar3 <= uVar5) goto LAB_0875fb3d;
    if (1 < uVar7) {
      uVar5 = puVar8[1];
      puVar8[1] = uVar5 + 1;
      if (uVar5 + 1 != 0) goto LAB_0875fb3d;
      uVar5 = 2;
      if (2 < uVar7) {
        do {
          uVar3 = puVar8[uVar5];
          puVar8[uVar5] = uVar3 + 1;
          if (uVar3 + 1 != 0) goto LAB_0875fb3d;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
    }
  }
  uVar5 = *(uint *)param_1;
  uVar7 = uVar5 * 2;
  if (uVar5 < uVar7) {
    iVar6 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(param_1 + 8),*(uint **)(param_1 + 4),
                       uVar5,uVar7,true);
    *(int *)(param_1 + 4) = iVar6;
    memset((void *)(iVar6 + *(int *)param_1 * 4),0,(uVar7 - *(int *)param_1) * 4);
    *(uint *)param_1 = uVar7;
    uVar5 = uVar7;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + (uVar5 >> 1) * 4) = 1;
LAB_0875fb3d:
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
```
