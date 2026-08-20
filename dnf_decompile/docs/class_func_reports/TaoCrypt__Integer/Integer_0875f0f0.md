# Integer

`_ZN8TaoCrypt7IntegerC1Ejj`

`TaoCrypt::Integer::Integer(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f0f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f0f0  _ZN8TaoCrypt7IntegerC1Ejj
#           TaoCrypt::Integer::Integer(unsigned int, unsigned int)
# range [0x0875f0f0, 0x0875f1f9]
0875f0f0 +0x000:  push   %ebp
0875f0f1 +0x001:  mov    %esp,%ebp
0875f0f3 +0x003:  push   %edi
0875f0f4 +0x004:  push   %esi
0875f0f5 +0x005:  push   %ebx
0875f0f6 +0x006:  sub    $0x2c,%esp
0875f0f9 +0x009:  mov    0x10(%ebp),%eax
0875f0fc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f101 +0x011:  add    $0xc0da97,%ebx
0875f107 +0x017:  mov    0x8(%ebp),%esi
0875f10a +0x01a:  cmp    $0x8,%eax
0875f10d +0x01d:  jbe    0875f1c0 <+0xd0>
0875f113 +0x023:  cmp    $0x10,%eax
0875f116 +0x026:  mov    $0x40,%edx
0875f11b +0x02b:  mov    $0x10,%ecx
0875f120 +0x030:  jbe    0875f13a <+0x4a>
0875f122 +0x032:  cmp    $0x20,%eax
0875f125 +0x035:  mov    $0x80,%dl
0875f127 +0x037:  mov    $0x20,%cl
0875f129 +0x039:  jbe    0875f13a <+0x4a>
0875f12b +0x03b:  cmp    $0x40,%eax
0875f12e +0x03e:  mov    $0x100,%dx
0875f132 +0x042:  mov    $0x40,%cl
0875f134 +0x044:  ja     0875f1d8 <+0xe8>
0875f13a +0x04a:  mov    %ecx,(%esi)
0875f13c +0x04c:  movb   $0x0,0x4(%esp)
0875f141 +0x051:  mov    %edx,(%esp)
0875f144 +0x054:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875f149 +0x059:  mov    (%esi),%edi
0875f14b +0x05b:  mov    %eax,0x4(%esi)
0875f14e +0x05e:  mov    %eax,0x4(%esp)
0875f152 +0x062:  lea    0x8(%esi),%eax
0875f155 +0x065:  movl   $0x0,0x10(%esp)
0875f15d +0x06d:  mov    %edi,0xc(%esp)
0875f161 +0x071:  mov    %edi,0x8(%esp)
0875f165 +0x075:  mov    %eax,(%esp)
0875f168 +0x078:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875f16d +0x07d:  mov    %edi,(%esi)
0875f16f +0x07f:  shl    $0x2,%edi
0875f172 +0x082:  mov    %eax,0x4(%esi)
0875f175 +0x085:  mov    %edi,0x8(%esp)
0875f179 +0x089:  movl   $0x0,0x4(%esp)
0875f181 +0x091:  mov    %eax,(%esp)
0875f184 +0x094:  call   0807dcc0 <_init+0x5b8>
0875f189 +0x099:  mov    0x4(%esi),%edx
0875f18c +0x09c:  mov    0xc(%ebp),%eax
0875f18f +0x09f:  movl   $0x0,0xc(%esi)
0875f196 +0x0a6:  mov    %eax,(%edx)
0875f198 +0x0a8:  mov    (%esi),%ecx
0875f19a +0x0aa:  sub    $0x1,%ecx
0875f19d +0x0ad:  je     0875f1b7 <+0xc7>
0875f19f +0x0af:  xor    %eax,%eax
0875f1a1 +0x0b1:  lea    0x0(%esi,%eiz,1),%esi
0875f1a8 +0x0b8:  movl   $0x0,0x4(%edx,%eax,4)
0875f1b0 +0x0c0:  add    $0x1,%eax
0875f1b3 +0x0c3:  cmp    %eax,%ecx
0875f1b5 +0x0c5:  ja     0875f1a8 <+0xb8>
0875f1b7 +0x0c7:  add    $0x2c,%esp
0875f1ba +0x0ca:  pop    %ebx
0875f1bb +0x0cb:  pop    %esi
0875f1bc +0x0cc:  pop    %edi
0875f1bd +0x0cd:  pop    %ebp
0875f1be +0x0ce:  ret
0875f1bf +0x0cf:  nop
0875f1c0 +0x0d0:  mov    -0x6678b8(%ebx,%eax,4),%edx
0875f1c7 +0x0d7:  test   %edx,%edx
0875f1c9 +0x0d9:  mov    %edx,(%esi)
0875f1cb +0x0db:  jne    0875f1ee <+0xfe>
0875f1cd +0x0dd:  xor    %eax,%eax
0875f1cf +0x0df:  jmp    0875f149 <+0x59>
0875f1d4 +0x0e4:  lea    0x0(%esi,%eiz,1),%esi
0875f1d8 +0x0e8:  sub    $0x1,%eax
0875f1db +0x0eb:  mov    %eax,(%esp)
0875f1de +0x0ee:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0875f1e3 +0x0f3:  mov    $0x1,%edx
0875f1e8 +0x0f8:  mov    %eax,%ecx
0875f1ea +0x0fa:  shl    %cl,%edx
0875f1ec +0x0fc:  jmp    0875f1c7 <+0xd7>
0875f1ee +0x0fe:  shl    $0x2,%edx
0875f1f1 +0x101:  jmp    0875f13c <+0x4c>
0875f1f6 +0x106:  lea    0x0(%esi),%esi
0875f1f9 +0x109:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x875f0f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(unsigned int, unsigned int) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,uint param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  void *__s;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_stack_ffffffc8;
  
  if (param_2 < 9) {
    iVar5 = (&RoundupSizeTable)[param_2];
LAB_0875f1c7:
    *(int *)this = iVar5;
    if (iVar5 == 0) {
      puVar2 = (uint *)0x0;
      goto LAB_0875f149;
    }
    iVar5 = iVar5 << 2;
  }
  else {
    iVar5 = 0x40;
    uVar4 = 0x10;
    if (0x10 < param_2) {
      iVar5 = 0x80;
      uVar4 = 0x20;
      if (0x20 < param_2) {
        iVar5 = 0x100;
        uVar4 = 0x40;
        if (0x40 < param_2) {
          bVar1 = BitPrecision(param_2 - 1);
          iVar5 = 1 << (bVar1 & 0x1f);
          goto LAB_0875f1c7;
        }
      }
    }
    *(undefined4 *)this = uVar4;
  }
  puVar2 = operator_new__(iVar5,in_stack_ffffffc8 & 0xffffff00);
LAB_0875f149:
  uVar3 = *(uint *)this;
  *(uint **)(this + 4) = puVar2;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar2,uVar3,uVar3,false
                          );
  *(uint *)this = uVar3;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar3 << 2);
  puVar2 = *(uint **)(this + 4);
  *(undefined4 *)(this + 0xc) = 0;
  *puVar2 = param_1;
  iVar5 = *(int *)this;
  if (iVar5 != 1) {
    uVar3 = 0;
    do {
      puVar2[uVar3 + 1] = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar5 - 1U);
  }
  return;
}
```
