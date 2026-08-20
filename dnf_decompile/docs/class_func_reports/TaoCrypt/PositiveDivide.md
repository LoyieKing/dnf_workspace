# PositiveDivide

`_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_`

`TaoCrypt::PositiveDivide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087621b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087621b0  _ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_
#           TaoCrypt::PositiveDivide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x087621b0, 0x08762519]
087621b0 +0x000:  push   %ebp
087621b1 +0x001:  mov    %esp,%ebp
087621b3 +0x003:  push   %edi
087621b4 +0x004:  push   %esi
087621b5 +0x005:  push   %ebx
087621b6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087621bb +0x00b:  add    $0xc0a9dd,%ebx
087621c1 +0x011:  sub    $0x6c,%esp
087621c4 +0x014:  mov    0x10(%ebp),%eax
087621c7 +0x017:  mov    0x8(%ebp),%esi
087621ca +0x01a:  mov    0xc(%ebp),%edi
087621cd +0x01d:  mov    %eax,(%esp)
087621d0 +0x020:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
087621d5 +0x025:  mov    0x14(%ebp),%ecx
087621d8 +0x028:  mov    %ecx,(%esp)
087621db +0x02b:  mov    %eax,-0x38(%ebp)
087621de +0x02e:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
087621e3 +0x033:  mov    %eax,%ecx
087621e5 +0x035:  mov    0x14(%ebp),%eax
087621e8 +0x038:  mov    %ecx,-0x3c(%ebp)
087621eb +0x03b:  mov    %eax,0x4(%esp)
087621ef +0x03f:  mov    0x10(%ebp),%eax
087621f2 +0x042:  mov    %eax,(%esp)
087621f5 +0x045:  call   0875d170 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_>  ; TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const
087621fa +0x04a:  mov    -0x38(%ebp),%edx
087621fd +0x04d:  mov    -0x3c(%ebp),%ecx
08762200 +0x050:  cmp    $0xffffffff,%eax
08762203 +0x053:  je     087624e8 <+0x338>
08762209 +0x059:  mov    %edx,%eax
0876220b +0x05b:  and    $0x1,%eax
0876220e +0x05e:  add    %edx,%eax
08762210 +0x060:  mov    %eax,-0x34(%ebp)
08762213 +0x063:  mov    %ecx,%eax
08762215 +0x065:  and    $0x1,%eax
08762218 +0x068:  add    %ecx,%eax
0876221a +0x06a:  cmp    $0x8,%eax
0876221d +0x06d:  mov    %eax,-0x2c(%ebp)
08762220 +0x070:  jbe    08762480 <+0x2d0>
08762226 +0x076:  cmpl   $0x10,-0x2c(%ebp)
0876222a +0x07a:  mov    $0x10,%edx
0876222f +0x07f:  movl   $0x40,-0x4c(%ebp)
08762236 +0x086:  jbe    08762260 <+0xb0>
08762238 +0x088:  cmpl   $0x20,-0x2c(%ebp)
0876223c +0x08c:  mov    $0x20,%dl
0876223e +0x08e:  movl   $0x80,-0x4c(%ebp)
08762245 +0x095:  jbe    08762260 <+0xb0>
08762247 +0x097:  cmpl   $0x40,-0x2c(%ebp)
0876224b +0x09b:  mov    $0x40,%dl
0876224d +0x09d:  movl   $0x100,-0x4c(%ebp)
08762254 +0x0a4:  ja     08762498 <+0x2e8>
0876225a +0x0aa:  lea    0x0(%esi),%esi
08762260 +0x0b0:  mov    (%esi),%ecx
08762262 +0x0b2:  mov    0x4(%esi),%eax
08762265 +0x0b5:  cmp    %ecx,%edx
08762267 +0x0b7:  mov    %ecx,-0x30(%ebp)
0876226a +0x0ba:  je     0876228f <+0xdf>
0876226c +0x0bc:  mov    %eax,0x4(%esp)
08762270 +0x0c0:  lea    0x8(%esi),%eax
08762273 +0x0c3:  mov    %eax,(%esp)
08762276 +0x0c6:  mov    %edx,-0x38(%ebp)
08762279 +0x0c9:  mov    %ecx,0x8(%esp)
0876227d +0x0cd:  call   08763b80 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x360>  ; TaoCrypt::Integer::IsSquare() const+0x360
08762282 +0x0d2:  mov    -0x38(%ebp),%edx
08762285 +0x0d5:  xor    %eax,%eax
08762287 +0x0d7:  test   %edx,%edx
08762289 +0x0d9:  jne    08762448 <+0x298>
0876228f +0x0df:  mov    %edx,(%esi)
08762291 +0x0e1:  mov    -0x4c(%ebp),%edx
08762294 +0x0e4:  mov    %eax,0x4(%esi)
08762297 +0x0e7:  movl   $0x0,0x4(%esp)
0876229f +0x0ef:  mov    %eax,(%esp)
087622a2 +0x0f2:  mov    %edx,0x8(%esp)
087622a6 +0x0f6:  call   0807dcc0 <_init+0x5b8>
087622ab +0x0fb:  mov    -0x34(%ebp),%eax
087622ae +0x0fe:  movl   $0x0,0xc(%esi)
087622b5 +0x105:  add    $0x2,%eax
087622b8 +0x108:  sub    -0x2c(%ebp),%eax
087622bb +0x10b:  cmp    $0x8,%eax
087622be +0x10e:  jbe    08762468 <+0x2b8>
087622c4 +0x114:  cmp    $0x10,%eax
087622c7 +0x117:  mov    $0x10,%edx
087622cc +0x11c:  movl   $0x40,-0x30(%ebp)
087622d3 +0x123:  jbe    087622f8 <+0x148>
087622d5 +0x125:  cmp    $0x20,%eax
087622d8 +0x128:  mov    $0x20,%dl
087622da +0x12a:  movl   $0x80,-0x30(%ebp)
087622e1 +0x131:  jbe    087622f8 <+0x148>
087622e3 +0x133:  cmp    $0x40,%eax
087622e6 +0x136:  mov    $0x40,%dl
087622e8 +0x138:  movl   $0x100,-0x30(%ebp)
087622ef +0x13f:  ja     087624c0 <+0x310>
087622f5 +0x145:  lea    0x0(%esi),%esi
087622f8 +0x148:  mov    (%edi),%ecx
087622fa +0x14a:  mov    0x4(%edi),%eax
087622fd +0x14d:  cmp    %ecx,%edx
087622ff +0x14f:  je     08762324 <+0x174>
08762301 +0x151:  mov    %eax,0x4(%esp)
08762305 +0x155:  lea    0x8(%edi),%eax
08762308 +0x158:  mov    %eax,(%esp)
0876230b +0x15b:  mov    %edx,-0x38(%ebp)
0876230e +0x15e:  mov    %ecx,0x8(%esp)
08762312 +0x162:  call   08763b80 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x360>  ; TaoCrypt::Integer::IsSquare() const+0x360
08762317 +0x167:  mov    -0x38(%ebp),%edx
0876231a +0x16a:  xor    %eax,%eax
0876231c +0x16c:  test   %edx,%edx
0876231e +0x16e:  jne    08762428 <+0x278>
08762324 +0x174:  mov    %edx,(%edi)
08762326 +0x176:  mov    -0x30(%ebp),%edx
08762329 +0x179:  mov    %eax,0x4(%edi)
0876232c +0x17c:  movl   $0x0,0x4(%esp)
08762334 +0x184:  mov    %eax,(%esp)
08762337 +0x187:  mov    %edx,0x8(%esp)
0876233b +0x18b:  call   0807dcc0 <_init+0x5b8>
08762340 +0x190:  mov    -0x34(%ebp),%eax
08762343 +0x193:  mov    -0x2c(%ebp),%ecx
08762346 +0x196:  movl   $0x0,0xc(%edi)
0876234d +0x19d:  lea    0x4(%eax,%ecx,2),%edx
08762351 +0x1a1:  xor    %eax,%eax
08762353 +0x1a3:  test   %edx,%edx
08762355 +0x1a5:  mov    %edx,-0x24(%ebp)
08762358 +0x1a8:  jne    08762410 <+0x260>
0876235e +0x1ae:  mov    %eax,-0x20(%ebp)
08762361 +0x1b1:  mov    %eax,0x4(%esp)
08762365 +0x1b5:  lea    -0x1c(%ebp),%eax
08762368 +0x1b8:  mov    %edx,0xc(%esp)
0876236c +0x1bc:  mov    %edx,0x8(%esp)
08762370 +0x1c0:  mov    %edx,-0x38(%ebp)
08762373 +0x1c3:  movl   $0x0,0x10(%esp)
0876237b +0x1cb:  mov    %eax,(%esp)
0876237e +0x1ce:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
08762383 +0x1d3:  mov    -0x38(%ebp),%edx
08762386 +0x1d6:  movl   $0x0,0x4(%esp)
0876238e +0x1de:  mov    %edx,-0x24(%ebp)
08762391 +0x1e1:  shl    $0x2,%edx
08762394 +0x1e4:  mov    %edx,0x8(%esp)
08762398 +0x1e8:  mov    %eax,-0x20(%ebp)
0876239b +0x1eb:  mov    %eax,(%esp)
0876239e +0x1ee:  call   0807dcc0 <_init+0x5b8>
087623a3 +0x1f3:  mov    0x14(%ebp),%ecx
087623a6 +0x1f6:  mov    -0x2c(%ebp),%edx
087623a9 +0x1f9:  mov    %edx,0x18(%esp)
087623ad +0x1fd:  mov    0x4(%ecx),%eax
087623b0 +0x200:  mov    0x10(%ebp),%edx
087623b3 +0x203:  mov    %eax,0x14(%esp)
087623b7 +0x207:  mov    -0x34(%ebp),%eax
087623ba +0x20a:  mov    %eax,0x10(%esp)
087623be +0x20e:  mov    0x4(%edx),%eax
087623c1 +0x211:  mov    %eax,0xc(%esp)
087623c5 +0x215:  mov    -0x20(%ebp),%eax
087623c8 +0x218:  mov    %eax,0x8(%esp)
087623cc +0x21c:  mov    0x4(%edi),%eax
087623cf +0x21f:  mov    %eax,0x4(%esp)
087623d3 +0x223:  mov    0x4(%esi),%eax
087623d6 +0x226:  mov    %eax,(%esp)
087623d9 +0x229:  call   0875e580 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j>  ; TaoCrypt::Divide(unsigned int*, unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
087623de +0x22e:  mov    -0x24(%ebp),%eax
087623e1 +0x231:  mov    -0x20(%ebp),%esi
087623e4 +0x234:  movl   $0x0,0x4(%esp)
087623ec +0x23c:  shl    $0x2,%eax
087623ef +0x23f:  mov    %esi,(%esp)
087623f2 +0x242:  mov    %eax,0x8(%esp)
087623f6 +0x246:  call   0807dcc0 <_init+0x5b8>
087623fb +0x24b:  mov    %esi,(%esp)
087623fe +0x24e:  movb   $0x0,0x4(%esp)
08762403 +0x253:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762408 +0x258:  add    $0x6c,%esp
0876240b +0x25b:  pop    %ebx
0876240c +0x25c:  pop    %esi
0876240d +0x25d:  pop    %edi
0876240e +0x25e:  pop    %ebp
0876240f +0x25f:  ret
08762410 +0x260:  shl    $0x2,%edx
08762413 +0x263:  mov    %edx,(%esp)
08762416 +0x266:  movb   $0x0,0x4(%esp)
0876241b +0x26b:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08762420 +0x270:  mov    -0x24(%ebp),%edx
08762423 +0x273:  jmp    0876235e <+0x1ae>
08762428 +0x278:  mov    -0x30(%ebp),%ecx
0876242b +0x27b:  mov    %edx,-0x38(%ebp)
0876242e +0x27e:  movb   $0x0,0x4(%esp)
08762433 +0x283:  mov    %ecx,(%esp)
08762436 +0x286:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0876243b +0x28b:  mov    -0x38(%ebp),%edx
0876243e +0x28e:  jmp    08762324 <+0x174>
08762443 +0x293:  nop
08762444 +0x294:  lea    0x0(%esi,%eiz,1),%esi
08762448 +0x298:  mov    -0x4c(%ebp),%eax
0876244b +0x29b:  mov    %edx,-0x38(%ebp)
0876244e +0x29e:  movb   $0x0,0x4(%esp)
08762453 +0x2a3:  mov    %eax,(%esp)
08762456 +0x2a6:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0876245b +0x2ab:  mov    -0x38(%ebp),%edx
0876245e +0x2ae:  jmp    0876228f <+0xdf>
08762463 +0x2b3:  nop
08762464 +0x2b4:  lea    0x0(%esi,%eiz,1),%esi
08762468 +0x2b8:  mov    -0x6678b8(%ebx,%eax,4),%edx
0876246f +0x2bf:  lea    0x0(,%edx,4),%ecx
08762476 +0x2c6:  mov    %ecx,-0x30(%ebp)
08762479 +0x2c9:  jmp    087622f8 <+0x148>
0876247e +0x2ce:  xchg   %ax,%ax
08762480 +0x2d0:  mov    -0x6678b8(%ebx,%eax,4),%edx
08762487 +0x2d7:  lea    0x0(,%edx,4),%ecx
0876248e +0x2de:  mov    %ecx,-0x4c(%ebp)
08762491 +0x2e1:  jmp    08762260 <+0xb0>
08762496 +0x2e6:  xchg   %ax,%ax
08762498 +0x2e8:  mov    -0x2c(%ebp),%eax
0876249b +0x2eb:  sub    $0x1,%eax
0876249e +0x2ee:  mov    %eax,(%esp)
087624a1 +0x2f1:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
087624a6 +0x2f6:  mov    $0x1,%edx
087624ab +0x2fb:  mov    %eax,%ecx
087624ad +0x2fd:  shl    %cl,%edx
087624af +0x2ff:  lea    0x0(,%edx,4),%eax
087624b6 +0x306:  mov    %eax,-0x4c(%ebp)
087624b9 +0x309:  jmp    08762260 <+0xb0>
087624be +0x30e:  xchg   %ax,%ax
087624c0 +0x310:  sub    $0x1,%eax
087624c3 +0x313:  mov    %eax,(%esp)
087624c6 +0x316:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
087624cb +0x31b:  mov    $0x1,%edx
087624d0 +0x320:  mov    %eax,%ecx
087624d2 +0x322:  shl    %cl,%edx
087624d4 +0x324:  lea    0x0(,%edx,4),%eax
087624db +0x32b:  mov    %eax,-0x30(%ebp)
087624de +0x32e:  jmp    087622f8 <+0x148>
087624e3 +0x333:  nop
087624e4 +0x334:  lea    0x0(%esi,%eiz,1),%esi
087624e8 +0x338:  mov    0x10(%ebp),%edx
087624eb +0x33b:  mov    %esi,(%esp)
087624ee +0x33e:  mov    %edx,0x4(%esp)
087624f2 +0x342:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087624f7 +0x347:  movl   $0x0,0xc(%esi)
087624fe +0x34e:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
08762503 +0x353:  mov    %edi,(%esp)
08762506 +0x356:  mov    %eax,0x4(%esp)
0876250a +0x35a:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0876250f +0x35f:  add    $0x6c,%esp
08762512 +0x362:  pop    %ebx
08762513 +0x363:  pop    %esi
08762514 +0x364:  pop    %edi
08762515 +0x365:  pop    %ebp
08762516 +0x366:  ret
08762517 +0x367:  nop
08762518 +0x368:  nop
08762519 +0x369:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::PositiveDivide @ 0x87621b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveDivide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void TaoCrypt::PositiveDivide(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  Integer *pIVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  size_t local_50;
  size_t local_34;
  AllocatorWithCleanup<unsigned_int> local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x87621bb;
  uVar2 = Integer::WordCount(param_3);
  uVar3 = Integer::WordCount(param_4);
  iVar4 = Integer::PositiveCompare(param_3,param_4);
  if (iVar4 == -1) {
    Integer::operator=(param_1,param_3);
    *(undefined4 *)(param_1 + 0xc) = 0;
    pIVar7 = (Integer *)Integer::Zero();
    Integer::operator=(param_2,pIVar7);
    return;
  }
  uVar2 = (uVar2 & 1) + uVar2;
  uVar3 = (uVar3 & 1) + uVar3;
  if (uVar3 < 9) {
    uVar8 = (&RoundupSizeTable)[uVar3];
    local_50 = uVar8 * 4;
  }
  else {
    uVar8 = 0x10;
    local_50 = 0x40;
    if (0x10 < uVar3) {
      uVar8 = 0x20;
      local_50 = 0x80;
      if (0x20 < uVar3) {
        uVar8 = 0x40;
        local_50 = 0x100;
        if (0x40 < uVar3) {
          bVar1 = BitPrecision(uVar3 - 1);
          uVar8 = 1 << (bVar1 & 0x1f);
          local_50 = uVar8 * 4;
        }
      }
    }
  }
  pvVar5 = *(void **)(param_1 + 4);
  if (uVar8 != *(uint *)param_1) {
    pvVar10 = pvVar5;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(param_1 + 8),pvVar5,*(uint *)param_1);
    pvVar5 = (void *)0x0;
    if (uVar8 != 0) {
      pvVar5 = operator_new__(local_50,(uint)pvVar10 & 0xffffff00);
    }
  }
  *(uint *)param_1 = uVar8;
  *(void **)(param_1 + 4) = pvVar5;
  memset(pvVar5,0,local_50);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar8 = (uVar2 + 2) - uVar3;
  if (uVar8 < 9) {
    uVar9 = (&RoundupSizeTable)[uVar8];
    local_34 = uVar9 * 4;
  }
  else {
    uVar9 = 0x10;
    local_34 = 0x40;
    if (0x10 < uVar8) {
      uVar9 = 0x20;
      local_34 = 0x80;
      if (0x20 < uVar8) {
        uVar9 = 0x40;
        local_34 = 0x100;
        if (0x40 < uVar8) {
          bVar1 = BitPrecision(uVar8 - 1);
          uVar9 = 1 << (bVar1 & 0x1f);
          local_34 = uVar9 * 4;
        }
      }
    }
  }
  pvVar5 = *(void **)(param_2 + 4);
  if (uVar9 != *(uint *)param_2) {
    pvVar10 = pvVar5;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(param_2 + 8),pvVar5,*(uint *)param_2);
    pvVar5 = (void *)0x0;
    if (uVar9 != 0) {
      pvVar5 = operator_new__(local_34,(uint)pvVar10 & 0xffffff00);
    }
  }
  *(uint *)param_2 = uVar9;
  *(void **)(param_2 + 4) = pvVar5;
  uVar9 = 0;
  memset(pvVar5,0,local_34);
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar8 = uVar2 + 4 + uVar3 * 2;
  puVar6 = (uint *)0x0;
  if (uVar8 != 0) {
    puVar6 = operator_new__(uVar8 * 4,uVar9 & 0xffffff00);
  }
  puVar6 = (uint *)AllocatorWithCleanup<unsigned_int>::reallocate(local_20,puVar6,uVar8,uVar8,false)
  ;
  memset(puVar6,0,uVar8 * 4);
  Divide(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),puVar6,*(uint **)(param_3 + 4),uVar2,
         *(uint **)(param_4 + 4),uVar3);
  uVar2 = 0;
  memset(puVar6,0,uVar8 * 4);
  operator_delete__(puVar6,uVar2 & 0xffffff00);
  return;
}
```
