# RecursiveInverseModPower2

`_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj`

`TaoCrypt::RecursiveInverseModPower2(unsigned int*, unsigned int*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875dfd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875dfd0  _ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj
#           TaoCrypt::RecursiveInverseModPower2(unsigned int*, unsigned int*, unsigned int const*, unsigned int)
# range [0x0875dfd0, 0x0875e1de]
0875dfd0 +0x000:  push   %ebp
0875dfd1 +0x001:  mov    %esp,%ebp
0875dfd3 +0x003:  push   %edi
0875dfd4 +0x004:  push   %esi
0875dfd5 +0x005:  push   %ebx
0875dfd6 +0x006:  sub    $0x3c,%esp
0875dfd9 +0x009:  mov    0x14(%ebp),%edi
0875dfdc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875dfe1 +0x011:  add    $0xc0ebb7,%ebx
0875dfe7 +0x017:  mov    0xc(%ebp),%esi
0875dfea +0x01a:  mov    0x10(%ebp),%eax
0875dfed +0x01d:  cmp    $0x2,%edi
0875dff0 +0x020:  je     0875e138 <+0x168>
0875dff6 +0x026:  mov    0x8(%ebp),%edx
0875dff9 +0x029:  shr    %edi
0875dffb +0x02b:  mov    %eax,0x8(%esp)
0875dfff +0x02f:  mov    %eax,-0x24(%ebp)
0875e002 +0x032:  mov    %edi,0xc(%esp)
0875e006 +0x036:  mov    %esi,0x4(%esp)
0875e00a +0x03a:  mov    %edx,(%esp)
0875e00d +0x03d:  call   0875dfd0 <+0x0>
0875e012 +0x042:  mov    %edi,%ecx
0875e014 +0x044:  mov    -0x24(%ebp),%eax
0875e017 +0x047:  sub    $0x1,%ecx
0875e01a +0x04a:  movl   $0x1,(%esi)
0875e020 +0x050:  je     0875e037 <+0x67>
0875e022 +0x052:  xor    %edx,%edx
0875e024 +0x054:  lea    0x0(%esi,%eiz,1),%esi
0875e028 +0x058:  movl   $0x0,0x4(%esi,%edx,4)
0875e030 +0x060:  add    $0x1,%edx
0875e033 +0x063:  cmp    %edx,%ecx
0875e035 +0x065:  ja     0875e028 <+0x58>
0875e037 +0x067:  lea    0x0(,%edi,4),%edx
0875e03e +0x06e:  lea    (%esi,%edx,1),%ecx
0875e041 +0x071:  mov    %ecx,-0x20(%ebp)
0875e044 +0x074:  mov    0x8(%ebp),%ecx
0875e047 +0x077:  mov    %eax,0x10(%esp)
0875e04b +0x07b:  mov    %eax,-0x24(%ebp)
0875e04e +0x07e:  mov    %edx,-0x28(%ebp)
0875e051 +0x081:  add    %edx,%ecx
0875e053 +0x083:  mov    %ecx,-0x1c(%ebp)
0875e056 +0x086:  mov    0x8(%ebp),%ecx
0875e059 +0x089:  mov    %edi,0x14(%esp)
0875e05d +0x08d:  mov    %esi,0x8(%esp)
0875e061 +0x091:  mov    %ecx,0xc(%esp)
0875e065 +0x095:  mov    -0x20(%ebp),%ecx
0875e068 +0x098:  mov    %ecx,0x4(%esp)
0875e06c +0x09c:  mov    -0x1c(%ebp),%ecx
0875e06f +0x09f:  mov    %ecx,(%esp)
0875e072 +0x0a2:  call   0875d980 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j>  ; TaoCrypt::RecursiveMultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
0875e077 +0x0a7:  mov    -0x28(%ebp),%edx
0875e07a +0x0aa:  mov    -0x24(%ebp),%eax
0875e07d +0x0ad:  mov    %edi,0x10(%esp)
0875e081 +0x0b1:  mov    %esi,(%esp)
0875e084 +0x0b4:  add    %edx,%eax
0875e086 +0x0b6:  mov    -0x20(%ebp),%edx
0875e089 +0x0b9:  mov    %eax,0xc(%esp)
0875e08d +0x0bd:  mov    0x8(%ebp),%eax
0875e090 +0x0c0:  mov    %edx,0x4(%esp)
0875e094 +0x0c4:  mov    %eax,0x8(%esp)
0875e098 +0x0c8:  call   0875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875e09d +0x0cd:  mov    -0x1c(%ebp),%ecx
0875e0a0 +0x0d0:  mov    %edi,0xc(%esp)
0875e0a4 +0x0d4:  mov    %esi,0x8(%esp)
0875e0a8 +0x0d8:  mov    %esi,(%esp)
0875e0ab +0x0db:  mov    %ecx,0x4(%esp)
0875e0af +0x0df:  call   *0x124c8c(%ebx)
0875e0b5 +0x0e5:  mov    (%esi),%edx
0875e0b7 +0x0e7:  lea    -0x1(%edx),%eax
0875e0ba +0x0ea:  cmp    %eax,%edx
0875e0bc +0x0ec:  mov    %eax,(%esi)
0875e0be +0x0ee:  jae    0875e130 <+0x160>
0875e0c0 +0x0f0:  cmp    $0x1,%edi
0875e0c3 +0x0f3:  jbe    0875e130 <+0x160>
0875e0c5 +0x0f5:  mov    0x4(%esi),%edx
0875e0c8 +0x0f8:  lea    -0x1(%edx),%eax
0875e0cb +0x0fb:  test   %edx,%edx
0875e0cd +0x0fd:  mov    %eax,0x4(%esi)
0875e0d0 +0x100:  mov    $0x1,%eax
0875e0d5 +0x105:  je     0875e0ed <+0x11d>
0875e0d7 +0x107:  jmp    0875e0f4 <+0x124>
0875e0d9 +0x109:  lea    0x0(%esi,%eiz,1),%esi
0875e0e0 +0x110:  mov    (%esi,%eax,4),%edx
0875e0e3 +0x113:  lea    -0x1(%edx),%ecx
0875e0e6 +0x116:  test   %edx,%edx
0875e0e8 +0x118:  mov    %ecx,(%esi,%eax,4)
0875e0eb +0x11b:  jne    0875e0f4 <+0x124>
0875e0ed +0x11d:  add    $0x1,%eax
0875e0f0 +0x120:  cmp    %eax,%edi
0875e0f2 +0x122:  ja     0875e0e0 <+0x110>
0875e0f4 +0x124:  xor    %eax,%eax
0875e0f6 +0x126:  xchg   %ax,%ax
0875e0f8 +0x128:  notl   (%esi,%eax,4)
0875e0fb +0x12b:  add    $0x1,%eax
0875e0fe +0x12e:  cmp    %eax,%edi
0875e100 +0x130:  ja     0875e0f8 <+0x128>
0875e102 +0x132:  mov    0x8(%ebp),%eax
0875e105 +0x135:  mov    -0x20(%ebp),%edx
0875e108 +0x138:  mov    -0x1c(%ebp),%ecx
0875e10b +0x13b:  mov    %edi,0x10(%esp)
0875e10f +0x13f:  mov    %esi,0xc(%esp)
0875e113 +0x143:  mov    %eax,0x8(%esp)
0875e117 +0x147:  mov    %edx,0x4(%esp)
0875e11b +0x14b:  mov    %ecx,(%esp)
0875e11e +0x14e:  call   0875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875e123 +0x153:  add    $0x3c,%esp
0875e126 +0x156:  pop    %ebx
0875e127 +0x157:  pop    %esi
0875e128 +0x158:  pop    %edi
0875e129 +0x159:  pop    %ebp
0875e12a +0x15a:  ret
0875e12b +0x15b:  nop
0875e12c +0x15c:  lea    0x0(%esi,%eiz,1),%esi
0875e130 +0x160:  test   %edi,%edi
0875e132 +0x162:  jne    0875e0f4 <+0x124>
0875e134 +0x164:  jmp    0875e102 <+0x132>
0875e136 +0x166:  xchg   %ax,%ax
0875e138 +0x168:  mov    (%eax),%ecx
0875e13a +0x16a:  mov    (%eax),%edx
0875e13c +0x16c:  and    $0x7,%ecx
0875e13f +0x16f:  imul   %ecx,%edx
0875e142 +0x172:  mov    %edx,-0x1c(%ebp)
0875e145 +0x175:  mov    %edi,%edx
0875e147 +0x177:  sub    -0x1c(%ebp),%edx
0875e14a +0x17a:  imul   %edx,%ecx
0875e14d +0x17d:  mov    %edi,%edx
0875e14f +0x17f:  mov    %ecx,-0x1c(%ebp)
0875e152 +0x182:  mov    (%eax),%ecx
0875e154 +0x184:  imul   -0x1c(%ebp),%ecx
0875e158 +0x188:  sub    %ecx,%edx
0875e15a +0x18a:  mov    -0x1c(%ebp),%ecx
0875e15d +0x18d:  imul   %edx,%ecx
0875e160 +0x190:  mov    (%eax),%edx
0875e162 +0x192:  imul   %ecx,%edx
0875e165 +0x195:  mov    %edx,-0x1c(%ebp)
0875e168 +0x198:  mov    %edi,%edx
0875e16a +0x19a:  sub    -0x1c(%ebp),%edx
0875e16d +0x19d:  imul   %edx,%ecx
0875e170 +0x1a0:  mov    %ecx,-0x1c(%ebp)
0875e173 +0x1a3:  mov    (%eax),%ecx
0875e175 +0x1a5:  imul   -0x1c(%ebp),%ecx
0875e179 +0x1a9:  movl   $0x0,0x4(%esi)
0875e180 +0x1b0:  sub    %ecx,%edi
0875e182 +0x1b2:  imul   -0x1c(%ebp),%edi
0875e186 +0x1b6:  mov    %edi,(%esi)
0875e188 +0x1b8:  lea    0x8(%esi),%edi
0875e18b +0x1bb:  mov    %eax,0x8(%esp)
0875e18f +0x1bf:  mov    %esi,0x4(%esp)
0875e193 +0x1c3:  mov    %edi,(%esp)
0875e196 +0x1c6:  call   08759660 <_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_>  ; TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*)
0875e19b +0x1cb:  mov    0x8(%esi),%edx
0875e19e +0x1ce:  lea    -0x1(%edx),%eax
0875e1a1 +0x1d1:  cmp    %eax,%edx
0875e1a3 +0x1d3:  mov    %eax,0x8(%esi)
0875e1a6 +0x1d6:  jae    0875e1ac <+0x1dc>
0875e1a8 +0x1d8:  subl   $0x1,0xc(%esi)
0875e1ac +0x1dc:  notl   (%edi)
0875e1ae +0x1de:  lea    0x4(%edi),%eax
0875e1b1 +0x1e1:  notl   (%eax)
0875e1b3 +0x1e3:  mov    0x8(%esi),%ecx
0875e1b6 +0x1e6:  lea    0x2(%ecx),%edx
0875e1b9 +0x1e9:  cmp    %edx,%ecx
0875e1bb +0x1eb:  mov    %edx,0x8(%esi)
0875e1be +0x1ee:  jbe    0875e1c3 <+0x1f3>
0875e1c0 +0x1f0:  addl   $0x1,(%eax)
0875e1c3 +0x1f3:  mov    0x8(%ebp),%ecx
0875e1c6 +0x1f6:  mov    %edi,0x8(%esp)
0875e1ca +0x1fa:  mov    %esi,0x4(%esp)
0875e1ce +0x1fe:  mov    %ecx,(%esp)
0875e1d1 +0x201:  call   08759660 <_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_>  ; TaoCrypt::Portable::Multiply2Bottom(unsigned int*, unsigned int const*, unsigned int const*)
0875e1d6 +0x206:  add    $0x3c,%esp
0875e1d9 +0x209:  pop    %ebx
0875e1da +0x20a:  pop    %esi
0875e1db +0x20b:  pop    %edi
0875e1dc +0x20c:  pop    %ebp
0875e1dd +0x20d:  ret
0875e1de +0x20e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::RecursiveInverseModPower2 @ 0x875dfd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveInverseModPower2(unsigned int*, unsigned int*, unsigned int const*, unsigned
   int) */

void TaoCrypt::RecursiveInverseModPower2(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_4 == 2) {
    iVar4 = (*param_3 & 7) * (2 - *param_3 * (*param_3 & 7));
    iVar4 = iVar4 * (2 - *param_3 * iVar4);
    iVar4 = iVar4 * (2 - *param_3 * iVar4);
    uVar6 = *param_3;
    param_2[1] = 0;
    *param_2 = (2 - uVar6 * iVar4) * iVar4;
    puVar1 = param_2 + 2;
    Portable::Multiply2Bottom(puVar1,param_2,param_3);
    uVar5 = param_2[2];
    uVar6 = uVar5 - 1;
    param_2[2] = uVar6;
    if (uVar5 < uVar6) {
      param_2[3] = param_2[3] - 1;
    }
    *puVar1 = ~*puVar1;
    puVar3 = param_2 + 3;
    *puVar3 = ~*puVar3;
    uVar5 = param_2[2];
    uVar6 = uVar5 + 2;
    param_2[2] = uVar6;
    if (uVar6 < uVar5) {
      *puVar3 = *puVar3 + 1;
    }
    Portable::Multiply2Bottom(param_1,param_2,puVar1);
    return;
  }
  uVar6 = param_4 >> 1;
  RecursiveInverseModPower2(param_1,param_2,param_3,uVar6);
  *param_2 = 1;
  if (uVar6 != 1) {
    uVar5 = 0;
    do {
      param_2[uVar5 + 1] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6 - 1);
  }
  puVar1 = param_2 + uVar6;
  puVar3 = param_1 + uVar6;
  RecursiveMultiplyTop(puVar3,puVar1,param_2,param_1,param_3,uVar6);
  RecursiveMultiplyBottom(param_2,puVar1,param_1,param_3 + uVar6,uVar6);
  (*s_pAdd)(param_2,puVar3,param_2,uVar6);
  uVar2 = *param_2;
  uVar5 = uVar2 - 1;
  *param_2 = uVar5;
  if ((uVar2 < uVar5) && (1 < uVar6)) {
    uVar5 = param_2[1];
    param_2[1] = uVar5 - 1;
    uVar2 = 1;
    while ((uVar5 == 0 && (uVar2 = uVar2 + 1, uVar2 < uVar6))) {
      uVar5 = param_2[uVar2];
      param_2[uVar2] = uVar5 - 1;
    }
  }
  else if (uVar6 == 0) goto LAB_0875e102;
  uVar5 = 0;
  do {
    param_2[uVar5] = ~param_2[uVar5];
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar6);
LAB_0875e102:
  RecursiveMultiplyBottom(puVar3,puVar1,param_1,param_2,uVar6);
  return;
}
```
