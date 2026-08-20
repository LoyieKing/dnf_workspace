# RecursiveSquare

`_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj`

`TaoCrypt::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875c310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875c310  _ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj
#           TaoCrypt::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned int)
# range [0x0875c310, 0x0875c489]
0875c310 +0x000:  push   %ebp
0875c311 +0x001:  mov    %esp,%ebp
0875c313 +0x003:  push   %edi
0875c314 +0x004:  push   %esi
0875c315 +0x005:  push   %ebx
0875c316 +0x006:  sub    $0x5c,%esp
0875c319 +0x009:  mov    0x14(%ebp),%edi
0875c31c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875c321 +0x011:  add    $0xc10877,%ebx
0875c327 +0x017:  mov    0x10(%ebp),%eax
0875c32a +0x01a:  cmp    $0x4,%edi
0875c32d +0x01d:  je     0875c450 <+0x140>
0875c333 +0x023:  cmp    $0x2,%edi
0875c336 +0x026:  je     0875c470 <+0x160>
0875c33c +0x02c:  mov    0xc(%ebp),%edx
0875c33f +0x02f:  lea    0x0(,%edi,4),%ecx
0875c346 +0x036:  mov    %edi,%esi
0875c348 +0x038:  mov    %ecx,-0x20(%ebp)
0875c34b +0x03b:  shr    %esi
0875c34d +0x03d:  mov    %eax,0x8(%esp)
0875c351 +0x041:  mov    %eax,-0x28(%ebp)
0875c354 +0x044:  add    %ecx,%edx
0875c356 +0x046:  mov    0x8(%ebp),%ecx
0875c359 +0x049:  mov    %edx,0x4(%esp)
0875c35d +0x04d:  mov    %edx,-0x24(%ebp)
0875c360 +0x050:  mov    %esi,0xc(%esp)
0875c364 +0x054:  mov    %ecx,(%esp)
0875c367 +0x057:  call   0875c310 <+0x0>
0875c36c +0x05c:  mov    -0x28(%ebp),%eax
0875c36f +0x05f:  lea    0x0(,%esi,4),%ecx
0875c376 +0x066:  mov    %ecx,-0x1c(%ebp)
0875c379 +0x069:  mov    -0x24(%ebp),%edx
0875c37c +0x06c:  mov    %esi,0xc(%esp)
0875c380 +0x070:  add    %eax,%ecx
0875c382 +0x072:  mov    %ecx,-0x3c(%ebp)
0875c385 +0x075:  mov    %ecx,0x8(%esp)
0875c389 +0x079:  mov    0x8(%ebp),%ecx
0875c38c +0x07c:  add    -0x20(%ebp),%ecx
0875c38f +0x07f:  mov    %edx,0x4(%esp)
0875c393 +0x083:  mov    %ecx,(%esp)
0875c396 +0x086:  call   0875c310 <+0x0>
0875c39b +0x08b:  mov    -0x28(%ebp),%eax
0875c39e +0x08e:  mov    -0x3c(%ebp),%ecx
0875c3a1 +0x091:  mov    -0x24(%ebp),%edx
0875c3a4 +0x094:  mov    %esi,0x10(%esp)
0875c3a8 +0x098:  mov    %eax,0x8(%esp)
0875c3ac +0x09c:  mov    0xc(%ebp),%eax
0875c3af +0x09f:  mov    %ecx,0xc(%esp)
0875c3b3 +0x0a3:  mov    %edx,0x4(%esp)
0875c3b7 +0x0a7:  mov    %eax,(%esp)
0875c3ba +0x0aa:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c3bf +0x0af:  mov    0xc(%ebp),%ecx
0875c3c2 +0x0b2:  mov    0x8(%ebp),%edx
0875c3c5 +0x0b5:  add    -0x1c(%ebp),%edx
0875c3c8 +0x0b8:  mov    %edi,0xc(%esp)
0875c3cc +0x0bc:  mov    %ecx,0x8(%esp)
0875c3d0 +0x0c0:  mov    %edx,0x4(%esp)
0875c3d4 +0x0c4:  mov    %edx,(%esp)
0875c3d7 +0x0c7:  mov    %edx,-0x24(%ebp)
0875c3da +0x0ca:  call   *0x124c8c(%ebx)
0875c3e0 +0x0d0:  mov    -0x24(%ebp),%edx
0875c3e3 +0x0d3:  mov    %edi,0xc(%esp)
0875c3e7 +0x0d7:  lea    (%esi,%edi,1),%edi
0875c3ea +0x0da:  mov    %edx,0x4(%esp)
0875c3ee +0x0de:  mov    %edx,(%esp)
0875c3f1 +0x0e1:  mov    %eax,-0x1c(%ebp)
0875c3f4 +0x0e4:  mov    0xc(%ebp),%eax
0875c3f7 +0x0e7:  mov    %eax,0x8(%esp)
0875c3fb +0x0eb:  call   *0x124c8c(%ebx)
0875c401 +0x0f1:  mov    0x8(%ebp),%ecx
0875c404 +0x0f4:  add    -0x1c(%ebp),%eax
0875c407 +0x0f7:  lea    (%ecx,%edi,4),%edx
0875c40a +0x0fa:  mov    (%edx),%ecx
0875c40c +0x0fc:  add    %ecx,%eax
0875c40e +0x0fe:  cmp    %eax,%ecx
0875c410 +0x100:  mov    %eax,(%edx)
0875c412 +0x102:  jbe    0875c444 <+0x134>
0875c414 +0x104:  cmp    $0x1,%esi
0875c417 +0x107:  jbe    0875c444 <+0x134>
0875c419 +0x109:  mov    0x4(%edx),%ecx
0875c41c +0x10c:  mov    $0x1,%eax
0875c421 +0x111:  add    $0x1,%ecx
0875c424 +0x114:  test   %ecx,%ecx
0875c426 +0x116:  mov    %ecx,0x4(%edx)
0875c429 +0x119:  je     0875c43d <+0x12d>
0875c42b +0x11b:  jmp    0875c444 <+0x134>
0875c42d +0x11d:  lea    0x0(%esi),%esi
0875c430 +0x120:  mov    (%edx,%eax,4),%ecx
0875c433 +0x123:  add    $0x1,%ecx
0875c436 +0x126:  test   %ecx,%ecx
0875c438 +0x128:  mov    %ecx,(%edx,%eax,4)
0875c43b +0x12b:  jne    0875c444 <+0x134>
0875c43d +0x12d:  add    $0x1,%eax
0875c440 +0x130:  cmp    %eax,%esi
0875c442 +0x132:  ja     0875c430 <+0x120>
0875c444 +0x134:  add    $0x5c,%esp
0875c447 +0x137:  pop    %ebx
0875c448 +0x138:  pop    %esi
0875c449 +0x139:  pop    %edi
0875c44a +0x13a:  pop    %ebp
0875c44b +0x13b:  ret
0875c44c +0x13c:  lea    0x0(%esi,%eiz,1),%esi
0875c450 +0x140:  mov    %eax,0x8(%esp)
0875c454 +0x144:  mov    %eax,0x4(%esp)
0875c458 +0x148:  mov    0x8(%ebp),%eax
0875c45b +0x14b:  mov    %eax,(%esp)
0875c45e +0x14e:  call   0875b670 <_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_>  ; TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)
0875c463 +0x153:  add    $0x5c,%esp
0875c466 +0x156:  pop    %ebx
0875c467 +0x157:  pop    %esi
0875c468 +0x158:  pop    %edi
0875c469 +0x159:  pop    %ebp
0875c46a +0x15a:  ret
0875c46b +0x15b:  nop
0875c46c +0x15c:  lea    0x0(%esi,%eiz,1),%esi
0875c470 +0x160:  mov    0x8(%ebp),%edx
0875c473 +0x163:  mov    %eax,0x4(%esp)
0875c477 +0x167:  mov    %edx,(%esp)
0875c47a +0x16a:  call   08759b90 <_ZN8TaoCrypt8Portable7Square2EPjPKj>  ; TaoCrypt::Portable::Square2(unsigned int*, unsigned int const*)
0875c47f +0x16f:  add    $0x5c,%esp
0875c482 +0x172:  pop    %ebx
0875c483 +0x173:  pop    %esi
0875c484 +0x174:  pop    %edi
0875c485 +0x175:  pop    %ebp
0875c486 +0x176:  ret
0875c487 +0x177:  mov    %esi,%esi
0875c489 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RecursiveSquare @ 0x875c310

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned int) */

void TaoCrypt::RecursiveSquare(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_4 == 4) {
    PentiumOptimized::Multiply4(param_1,param_3,param_3);
    return;
  }
  if (param_4 != 2) {
    uVar6 = param_4 >> 1;
    puVar5 = param_2 + param_4;
    RecursiveSquare(param_1,puVar5,param_3,uVar6);
    RecursiveSquare(param_1 + param_4,puVar5,param_3 + uVar6,uVar6);
    RecursiveMultiply(param_2,puVar5,param_3,param_3 + uVar6,uVar6);
    puVar5 = param_1 + uVar6;
    iVar1 = (*s_pAdd)(puVar5,puVar5,param_2,param_4);
    iVar2 = (*s_pAdd)(puVar5,puVar5,param_2,param_4);
    puVar5 = param_1 + uVar6 + param_4;
    uVar4 = *puVar5;
    uVar3 = iVar2 + iVar1 + uVar4;
    *puVar5 = uVar3;
    if ((uVar3 < uVar4) && (1 < uVar6)) {
      uVar4 = 1;
      uVar3 = puVar5[1] + 1;
      puVar5[1] = uVar3;
      while ((uVar3 == 0 && (uVar4 = uVar4 + 1, uVar4 < uVar6))) {
        uVar3 = puVar5[uVar4] + 1;
        puVar5[uVar4] = uVar3;
      }
    }
    return;
  }
  Portable::Square2(param_1,param_3);
  return;
}
```
