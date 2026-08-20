# RecursiveMultiplyBottom

`_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j`

`TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875c490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875c490  _ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j
#           TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875c490, 0x0875c609]
0875c490 +0x000:  push   %ebp
0875c491 +0x001:  mov    %esp,%ebp
0875c493 +0x003:  sub    $0x48,%esp
0875c496 +0x006:  mov    %edi,-0x4(%ebp)
0875c499 +0x009:  mov    0x18(%ebp),%edi
0875c49c +0x00c:  mov    %ebx,-0xc(%ebp)
0875c49f +0x00f:  mov    0x8(%ebp),%edx
0875c4a2 +0x012:  call   08722df8 <__i686.get_pc_thunk.bx>
0875c4a7 +0x017:  add    $0xc106f1,%ebx
0875c4ad +0x01d:  mov    %esi,-0x8(%ebp)
0875c4b0 +0x020:  mov    0xc(%ebp),%esi
0875c4b3 +0x023:  cmp    $0x8,%edi
0875c4b6 +0x026:  je     0875c590 <+0x100>
0875c4bc +0x02c:  cmp    $0x4,%edi
0875c4bf +0x02f:  je     0875c5b8 <+0x128>
0875c4c5 +0x035:  cmp    $0x2,%edi
0875c4c8 +0x038:  je     0875c5e0 <+0x150>
0875c4ce +0x03e:  mov    0x14(%ebp),%eax
0875c4d1 +0x041:  shr    %edi
0875c4d3 +0x043:  mov    %edx,(%esp)
0875c4d6 +0x046:  mov    %edx,-0x20(%ebp)
0875c4d9 +0x049:  mov    %edi,0x10(%esp)
0875c4dd +0x04d:  mov    %eax,0xc(%esp)
0875c4e1 +0x051:  mov    0x10(%ebp),%eax
0875c4e4 +0x054:  mov    %esi,0x4(%esp)
0875c4e8 +0x058:  mov    %eax,0x8(%esp)
0875c4ec +0x05c:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c4f1 +0x061:  lea    0x0(,%edi,4),%ecx
0875c4f8 +0x068:  lea    (%esi,%ecx,1),%eax
0875c4fb +0x06b:  mov    %eax,-0x1c(%ebp)
0875c4fe +0x06e:  mov    0x14(%ebp),%eax
0875c501 +0x071:  mov    %edi,0x10(%esp)
0875c505 +0x075:  mov    %esi,(%esp)
0875c508 +0x078:  mov    %ecx,-0x24(%ebp)
0875c50b +0x07b:  mov    %eax,0xc(%esp)
0875c50f +0x07f:  mov    0x10(%ebp),%eax
0875c512 +0x082:  add    %ecx,%eax
0875c514 +0x084:  mov    %eax,0x8(%esp)
0875c518 +0x088:  mov    -0x1c(%ebp),%eax
0875c51b +0x08b:  mov    %eax,0x4(%esp)
0875c51f +0x08f:  call   0875c490 <+0x0>
0875c524 +0x094:  mov    -0x20(%ebp),%edx
0875c527 +0x097:  mov    -0x24(%ebp),%ecx
0875c52a +0x09a:  mov    %edi,0xc(%esp)
0875c52e +0x09e:  mov    %esi,0x8(%esp)
0875c532 +0x0a2:  add    %ecx,%edx
0875c534 +0x0a4:  mov    %edx,0x4(%esp)
0875c538 +0x0a8:  mov    %edx,(%esp)
0875c53b +0x0ab:  mov    %edx,-0x20(%ebp)
0875c53e +0x0ae:  call   *0x124c8c(%ebx)
0875c544 +0x0b4:  mov    0x10(%ebp),%eax
0875c547 +0x0b7:  mov    -0x24(%ebp),%ecx
0875c54a +0x0ba:  add    0x14(%ebp),%ecx
0875c54d +0x0bd:  mov    %edi,0x10(%esp)
0875c551 +0x0c1:  mov    %eax,0x8(%esp)
0875c555 +0x0c5:  mov    -0x1c(%ebp),%eax
0875c558 +0x0c8:  mov    %ecx,0xc(%esp)
0875c55c +0x0cc:  mov    %esi,(%esp)
0875c55f +0x0cf:  mov    %eax,0x4(%esp)
0875c563 +0x0d3:  call   0875c490 <+0x0>
0875c568 +0x0d8:  mov    -0x20(%ebp),%edx
0875c56b +0x0db:  mov    %edi,0xc(%esp)
0875c56f +0x0df:  mov    %esi,0x8(%esp)
0875c573 +0x0e3:  mov    %edx,0x4(%esp)
0875c577 +0x0e7:  mov    %edx,(%esp)
0875c57a +0x0ea:  call   *0x124c8c(%ebx)
0875c580 +0x0f0:  mov    -0xc(%ebp),%ebx
0875c583 +0x0f3:  mov    -0x8(%ebp),%esi
0875c586 +0x0f6:  mov    -0x4(%ebp),%edi
0875c589 +0x0f9:  mov    %ebp,%esp
0875c58b +0x0fb:  pop    %ebp
0875c58c +0x0fc:  ret
0875c58d +0x0fd:  lea    0x0(%esi),%esi
0875c590 +0x100:  mov    0x14(%ebp),%eax
0875c593 +0x103:  mov    %edx,(%esp)
0875c596 +0x106:  mov    %eax,0x8(%esp)
0875c59a +0x10a:  mov    0x10(%ebp),%eax
0875c59d +0x10d:  mov    %eax,0x4(%esp)
0875c5a1 +0x111:  call   0875bba0 <_ZN8TaoCrypt16PentiumOptimized15Multiply8BottomEPjPKjS3_>  ; TaoCrypt::PentiumOptimized::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*)
0875c5a6 +0x116:  mov    -0xc(%ebp),%ebx
0875c5a9 +0x119:  mov    -0x8(%ebp),%esi
0875c5ac +0x11c:  mov    -0x4(%ebp),%edi
0875c5af +0x11f:  mov    %ebp,%esp
0875c5b1 +0x121:  pop    %ebp
0875c5b2 +0x122:  ret
0875c5b3 +0x123:  nop
0875c5b4 +0x124:  lea    0x0(%esi,%eiz,1),%esi
0875c5b8 +0x128:  mov    0x14(%ebp),%eax
0875c5bb +0x12b:  mov    %edx,(%esp)
0875c5be +0x12e:  mov    %eax,0x8(%esp)
0875c5c2 +0x132:  mov    0x10(%ebp),%eax
0875c5c5 +0x135:  mov    %eax,0x4(%esp)
0875c5c9 +0x139:  call   0875ad80 <_ZN8TaoCrypt8Portable15Multiply4BottomEPjPKjS3_>  ; TaoCrypt::Portable::Multiply4Bottom(unsigned int*, unsigned int const*, unsigned int const*)
0875c5ce +0x13e:  mov    -0xc(%ebp),%ebx
0875c5d1 +0x141:  mov    -0x8(%ebp),%esi
0875c5d4 +0x144:  mov    -0x4(%ebp),%edi
0875c5d7 +0x147:  mov    %ebp,%esp
0875c5d9 +0x149:  pop    %ebp
0875c5da +0x14a:  ret
0875c5db +0x14b:  nop
0875c5dc +0x14c:  lea    0x0(%esi,%eiz,1),%esi
0875c5e0 +0x150:  mov    0x14(%ebp),%eax
0875c5e3 +0x153:  mov    %edx,(%esp)
0875c5e6 +0x156:  mov    %eax,0x8(%esp)
0875c5ea +0x15a:  mov    0x10(%ebp),%eax
0875c5ed +0x15d:  mov    %eax,0x4(%esp)
0875c5f1 +0x161:  call   08759660 <_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_>  ; TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*)
0875c5f6 +0x166:  mov    -0xc(%ebp),%ebx
0875c5f9 +0x169:  mov    -0x8(%ebp),%esi
0875c5fc +0x16c:  mov    -0x4(%ebp),%edi
0875c5ff +0x16f:  mov    %ebp,%esp
0875c601 +0x171:  pop    %ebp
0875c602 +0x172:  ret
0875c603 +0x173:  lea    0x0(%esi),%esi
0875c609 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RecursiveMultiplyBottom @ 0x875c490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int) */

void TaoCrypt::RecursiveMultiplyBottom
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_5 == 8) {
    PentiumOptimized::Multiply8Bottom(param_1,param_3,param_4);
    return;
  }
  if (param_5 != 4) {
    if (param_5 != 2) {
      uVar2 = param_5 >> 1;
      RecursiveMultiply(param_1,param_2,param_3,param_4,uVar2);
      RecursiveMultiplyBottom(param_2,param_2 + uVar2,param_3 + uVar2,param_4,uVar2);
      puVar1 = param_1 + uVar2;
      (*s_pAdd)(puVar1,puVar1,param_2,uVar2);
      RecursiveMultiplyBottom(param_2,param_2 + uVar2,param_3,param_4 + uVar2,uVar2);
      (*s_pAdd)(puVar1,puVar1,param_2,uVar2);
      return;
    }
    Portable::Multiply2Bottom(param_1,param_3,param_4);
    return;
  }
  Portable::Multiply4Bottom(param_1,param_3,param_4);
  return;
}
```
