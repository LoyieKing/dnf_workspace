# InitClientKeyFactory

`_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE`

`yaSSL::InitClientKeyFactory(yaSSL::Factory<yaSSL::ClientKeyBase, int, yaSSL::ClientKeyBase* (*)()>&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874c2e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874c2e0  _ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE
#           yaSSL::InitClientKeyFactory(yaSSL::Factory<yaSSL::ClientKeyBase, int, yaSSL::ClientKeyBase* (*)()>&)
# range [0x0874c2e0, 0x0874c59f]
0874c2e0 +0x000:  push   %ebp
0874c2e1 +0x001:  mov    %esp,%ebp
0874c2e3 +0x003:  push   %edi
0874c2e4 +0x004:  push   %esi
0874c2e5 +0x005:  push   %ebx
0874c2e6 +0x006:  sub    $0x2c,%esp
0874c2e9 +0x009:  mov    0x8(%ebp),%esi
0874c2ec +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874c2f1 +0x011:  add    $0xc208a7,%ebx
0874c2f7 +0x017:  mov    0x8(%esi),%edx
0874c2fa +0x01a:  mov    %edx,%eax
0874c2fc +0x01c:  sub    (%esi),%eax
0874c2fe +0x01e:  sar    $0x3,%eax
0874c301 +0x021:  cmp    $0x2,%eax
0874c304 +0x024:  jbe    0874c370 <+0x90>
0874c306 +0x026:  mov    0x4(%esi),%eax
0874c309 +0x029:  cmp    %edx,%eax
0874c30b +0x02b:  je     0874c3e4 <+0x104>
0874c311 +0x031:  mov    -0x478(%ebx),%edx
0874c317 +0x037:  movl   $0x1,(%eax)
0874c31d +0x03d:  mov    %edx,0x4(%eax)
0874c320 +0x040:  mov    0x4(%esi),%eax
0874c323 +0x043:  add    $0x8,%eax
0874c326 +0x046:  cmp    %eax,0x8(%esi)
0874c329 +0x049:  mov    %eax,0x4(%esi)
0874c32c +0x04c:  je     0874c478 <+0x198>
0874c332 +0x052:  mov    -0x4a4(%ebx),%edx
0874c338 +0x058:  movl   $0x2,(%eax)
0874c33e +0x05e:  mov    %edx,0x4(%eax)
0874c341 +0x061:  mov    0x4(%esi),%eax
0874c344 +0x064:  add    $0x8,%eax
0874c347 +0x067:  cmp    %eax,0x8(%esi)
0874c34a +0x06a:  mov    %eax,0x4(%esi)
0874c34d +0x06d:  je     0874c510 <+0x230>
0874c353 +0x073:  mov    -0x2d0(%ebx),%edx
0874c359 +0x079:  addl   $0x8,0x4(%esi)
0874c35d +0x07d:  movl   $0x3,(%eax)
0874c363 +0x083:  mov    %edx,0x4(%eax)
0874c366 +0x086:  add    $0x2c,%esp
0874c369 +0x089:  pop    %ebx
0874c36a +0x08a:  pop    %esi
0874c36b +0x08b:  pop    %edi
0874c36c +0x08c:  pop    %ebp
0874c36d +0x08d:  ret
0874c36e +0x08e:  xchg   %ax,%ax
0874c370 +0x090:  movb   $0x0,0x4(%esp)
0874c375 +0x095:  movl   $0x18,(%esp)
0874c37c +0x09c:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c381 +0x0a1:  mov    0x4(%esi),%edi
0874c384 +0x0a4:  mov    (%esi),%ecx
0874c386 +0x0a6:  cmp    %ecx,%edi
0874c388 +0x0a8:  mov    %eax,%edx
0874c38a +0x0aa:  je     0874c3be <+0xde>
0874c38c +0x0ac:  lea    0x8(%ecx),%edx
0874c38f +0x0af:  sub    %edx,%edi
0874c391 +0x0b1:  xor    %edx,%edx
0874c393 +0x0b3:  shr    $0x3,%edi
0874c396 +0x0b6:  add    $0x1,%edi
0874c399 +0x0b9:  mov    %edi,-0x1c(%ebp)
0874c39c +0x0bc:  mov    %esi,-0x20(%ebp)
0874c39f +0x0bf:  nop
0874c3a0 +0x0c0:  mov    (%ecx,%edx,8),%esi
0874c3a3 +0x0c3:  mov    0x4(%ecx,%edx,8),%edi
0874c3a7 +0x0c7:  mov    %esi,(%eax,%edx,8)
0874c3aa +0x0ca:  mov    %edi,0x4(%eax,%edx,8)
0874c3ae +0x0ce:  add    $0x1,%edx
0874c3b1 +0x0d1:  cmp    -0x1c(%ebp),%edx
0874c3b4 +0x0d4:  jne    0874c3a0 <+0xc0>
0874c3b6 +0x0d6:  mov    -0x20(%ebp),%esi
0874c3b9 +0x0d9:  lea    (%eax,%edx,8),%edx
0874c3bc +0x0dc:  mov    (%esi),%edi
0874c3be +0x0de:  mov    %eax,(%esi)
0874c3c0 +0x0e0:  add    $0x18,%eax
0874c3c3 +0x0e3:  mov    %edx,0x4(%esi)
0874c3c6 +0x0e6:  mov    %eax,0x8(%esi)
0874c3c9 +0x0e9:  movb   $0x0,0x4(%esp)
0874c3ce +0x0ee:  mov    %edi,(%esp)
0874c3d1 +0x0f1:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c3d6 +0x0f6:  mov    0x8(%esi),%edx
0874c3d9 +0x0f9:  mov    0x4(%esi),%eax
0874c3dc +0x0fc:  cmp    %edx,%eax
0874c3de +0x0fe:  jne    0874c311 <+0x31>
0874c3e4 +0x104:  sub    (%esi),%edx
0874c3e6 +0x106:  sar    $0x3,%edx
0874c3e9 +0x109:  lea    0x1(%edx,%edx,1),%eax
0874c3ed +0x10d:  shl    $0x3,%eax
0874c3f0 +0x110:  mov    %eax,-0x20(%ebp)
0874c3f3 +0x113:  movb   $0x0,0x4(%esp)
0874c3f8 +0x118:  mov    %eax,(%esp)
0874c3fb +0x11b:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c400 +0x120:  mov    0x4(%esi),%edi
0874c403 +0x123:  mov    (%esi),%ecx
0874c405 +0x125:  cmp    %ecx,%edi
0874c407 +0x127:  mov    %eax,%edx
0874c409 +0x129:  je     0874c43c <+0x15c>
0874c40b +0x12b:  lea    0x8(%ecx),%edx
0874c40e +0x12e:  sub    %edx,%edi
0874c410 +0x130:  xor    %edx,%edx
0874c412 +0x132:  shr    $0x3,%edi
0874c415 +0x135:  add    $0x1,%edi
0874c418 +0x138:  mov    %edi,-0x1c(%ebp)
0874c41b +0x13b:  mov    %esi,-0x24(%ebp)
0874c41e +0x13e:  xchg   %ax,%ax
0874c420 +0x140:  mov    (%ecx,%edx,8),%esi
0874c423 +0x143:  mov    0x4(%ecx,%edx,8),%edi
0874c427 +0x147:  mov    %esi,(%eax,%edx,8)
0874c42a +0x14a:  mov    %edi,0x4(%eax,%edx,8)
0874c42e +0x14e:  add    $0x1,%edx
0874c431 +0x151:  cmp    -0x1c(%ebp),%edx
0874c434 +0x154:  jne    0874c420 <+0x140>
0874c436 +0x156:  mov    -0x24(%ebp),%esi
0874c439 +0x159:  lea    (%eax,%edx,8),%edx
0874c43c +0x15c:  mov    -0x478(%ebx),%ecx
0874c442 +0x162:  movl   $0x1,(%edx)
0874c448 +0x168:  mov    %ecx,0x4(%edx)
0874c44b +0x16b:  mov    (%esi),%ecx
0874c44d +0x16d:  add    $0x8,%edx
0874c450 +0x170:  mov    %eax,(%esi)
0874c452 +0x172:  add    -0x20(%ebp),%eax
0874c455 +0x175:  mov    %edx,0x4(%esi)
0874c458 +0x178:  mov    %eax,0x8(%esi)
0874c45b +0x17b:  movb   $0x0,0x4(%esp)
0874c460 +0x180:  mov    %ecx,(%esp)
0874c463 +0x183:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c468 +0x188:  mov    0x4(%esi),%eax
0874c46b +0x18b:  cmp    %eax,0x8(%esi)
0874c46e +0x18e:  jne    0874c332 <+0x52>
0874c474 +0x194:  lea    0x0(%esi,%eiz,1),%esi
0874c478 +0x198:  sub    (%esi),%eax
0874c47a +0x19a:  sar    $0x3,%eax
0874c47d +0x19d:  lea    0x1(%eax,%eax,1),%eax
0874c481 +0x1a1:  shl    $0x3,%eax
0874c484 +0x1a4:  mov    %eax,-0x20(%ebp)
0874c487 +0x1a7:  movb   $0x0,0x4(%esp)
0874c48c +0x1ac:  mov    %eax,(%esp)
0874c48f +0x1af:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c494 +0x1b4:  mov    0x4(%esi),%edi
0874c497 +0x1b7:  mov    (%esi),%ecx
0874c499 +0x1b9:  cmp    %ecx,%edi
0874c49b +0x1bb:  mov    %eax,%edx
0874c49d +0x1bd:  je     0874c4d4 <+0x1f4>
0874c49f +0x1bf:  lea    0x8(%ecx),%edx
0874c4a2 +0x1c2:  sub    %edx,%edi
0874c4a4 +0x1c4:  xor    %edx,%edx
0874c4a6 +0x1c6:  shr    $0x3,%edi
0874c4a9 +0x1c9:  add    $0x1,%edi
0874c4ac +0x1cc:  mov    %edi,-0x1c(%ebp)
0874c4af +0x1cf:  mov    %esi,-0x24(%ebp)
0874c4b2 +0x1d2:  lea    0x0(%esi),%esi
0874c4b8 +0x1d8:  mov    (%ecx,%edx,8),%esi
0874c4bb +0x1db:  mov    0x4(%ecx,%edx,8),%edi
0874c4bf +0x1df:  mov    %esi,(%eax,%edx,8)
0874c4c2 +0x1e2:  mov    %edi,0x4(%eax,%edx,8)
0874c4c6 +0x1e6:  add    $0x1,%edx
0874c4c9 +0x1e9:  cmp    -0x1c(%ebp),%edx
0874c4cc +0x1ec:  jne    0874c4b8 <+0x1d8>
0874c4ce +0x1ee:  mov    -0x24(%ebp),%esi
0874c4d1 +0x1f1:  lea    (%eax,%edx,8),%edx
0874c4d4 +0x1f4:  mov    -0x4a4(%ebx),%ecx
0874c4da +0x1fa:  movl   $0x2,(%edx)
0874c4e0 +0x200:  mov    %ecx,0x4(%edx)
0874c4e3 +0x203:  mov    (%esi),%ecx
0874c4e5 +0x205:  add    $0x8,%edx
0874c4e8 +0x208:  mov    %eax,(%esi)
0874c4ea +0x20a:  add    -0x20(%ebp),%eax
0874c4ed +0x20d:  mov    %edx,0x4(%esi)
0874c4f0 +0x210:  mov    %eax,0x8(%esi)
0874c4f3 +0x213:  movb   $0x0,0x4(%esp)
0874c4f8 +0x218:  mov    %ecx,(%esp)
0874c4fb +0x21b:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c500 +0x220:  mov    0x4(%esi),%eax
0874c503 +0x223:  cmp    %eax,0x8(%esi)
0874c506 +0x226:  jne    0874c353 <+0x73>
0874c50c +0x22c:  lea    0x0(%esi,%eiz,1),%esi
0874c510 +0x230:  sub    (%esi),%eax
0874c512 +0x232:  sar    $0x3,%eax
0874c515 +0x235:  lea    0x1(%eax,%eax,1),%eax
0874c519 +0x239:  shl    $0x3,%eax
0874c51c +0x23c:  mov    %eax,-0x20(%ebp)
0874c51f +0x23f:  movb   $0x0,0x4(%esp)
0874c524 +0x244:  mov    %eax,(%esp)
0874c527 +0x247:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c52c +0x24c:  mov    0x4(%esi),%edi
0874c52f +0x24f:  mov    (%esi),%ecx
0874c531 +0x251:  cmp    %ecx,%edi
0874c533 +0x253:  mov    %eax,%edx
0874c535 +0x255:  je     0874c56c <+0x28c>
0874c537 +0x257:  lea    0x8(%ecx),%edx
0874c53a +0x25a:  sub    %edx,%edi
0874c53c +0x25c:  xor    %edx,%edx
0874c53e +0x25e:  shr    $0x3,%edi
0874c541 +0x261:  add    $0x1,%edi
0874c544 +0x264:  mov    %edi,-0x1c(%ebp)
0874c547 +0x267:  mov    %esi,-0x24(%ebp)
0874c54a +0x26a:  lea    0x0(%esi),%esi
0874c550 +0x270:  mov    (%ecx,%edx,8),%esi
0874c553 +0x273:  mov    0x4(%ecx,%edx,8),%edi
0874c557 +0x277:  mov    %esi,(%eax,%edx,8)
0874c55a +0x27a:  mov    %edi,0x4(%eax,%edx,8)
0874c55e +0x27e:  add    $0x1,%edx
0874c561 +0x281:  cmp    -0x1c(%ebp),%edx
0874c564 +0x284:  jne    0874c550 <+0x270>
0874c566 +0x286:  mov    -0x24(%ebp),%esi
0874c569 +0x289:  lea    (%eax,%edx,8),%edx
0874c56c +0x28c:  mov    -0x2d0(%ebx),%ecx
0874c572 +0x292:  movl   $0x3,(%edx)
0874c578 +0x298:  mov    %ecx,0x4(%edx)
0874c57b +0x29b:  mov    (%esi),%ecx
0874c57d +0x29d:  add    $0x8,%edx
0874c580 +0x2a0:  mov    %eax,(%esi)
0874c582 +0x2a2:  add    -0x20(%ebp),%eax
0874c585 +0x2a5:  mov    %edx,0x4(%esi)
0874c588 +0x2a8:  mov    %eax,0x8(%esi)
0874c58b +0x2ab:  movb   $0x0,0x4(%esp)
0874c590 +0x2b0:  mov    %ecx,(%esp)
0874c593 +0x2b3:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c598 +0x2b8:  add    $0x2c,%esp
0874c59b +0x2bb:  pop    %ebx
0874c59c +0x2bc:  pop    %esi
0874c59d +0x2bd:  pop    %edi
0874c59e +0x2be:  pop    %ebp
0874c59f +0x2bf:  ret
```

## 反编译 C

```c
// yaSSL::InitClientKeyFactory @ 0x874c2e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitClientKeyFactory(yaSSL::Factory<yaSSL::ClientKeyBase, int, yaSSL::ClientKeyBase*
   (*)()>&) */

void yaSSL::InitClientKeyFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 3) {
    pvVar5 = operator_new__(0x18,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x18;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874c311;
LAB_0874c3e4:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateRSAClient_0936c720;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c478:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateDHClient_0936c6f4;
      *puVar4 = 2;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c510;
      goto LAB_0874c353;
    }
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874c3e4;
LAB_0874c311:
    puVar3 = PTR_CreateRSAClient_0936c720;
    *puVar6 = 1;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c478;
  }
  puVar3 = PTR_CreateDHClient_0936c6f4;
  *puVar4 = 2;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c510:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateFortezzaClient_0936c8c8;
    *puVar4 = 3;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874c353:
  puVar3 = PTR_CreateFortezzaClient_0936c8c8;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 3;
  puVar4[1] = puVar3;
  return;
}
```
