# SetBit

`_ZN8TaoCrypt7Integer6SetBitEjb`

`TaoCrypt::Integer::SetBit(unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760c50  _ZN8TaoCrypt7Integer6SetBitEjb
#           TaoCrypt::Integer::SetBit(unsigned int, bool)
# range [0x08760c50, 0x08760d6a]
08760c50 +0x000:  push   %ebp
08760c51 +0x001:  mov    %esp,%ebp
08760c53 +0x003:  sub    $0x48,%esp
08760c56 +0x006:  mov    %ebx,-0xc(%ebp)
08760c59 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
08760c5e +0x00e:  add    $0xc0bf3a,%ebx
08760c64 +0x014:  cmpb   $0x0,0x10(%ebp)
08760c68 +0x018:  mov    %esi,-0x8(%ebp)
08760c6b +0x01b:  mov    0x8(%ebp),%esi
08760c6e +0x01e:  mov    %edi,-0x4(%ebp)
08760c71 +0x021:  mov    0xc(%ebp),%edi
08760c74 +0x024:  jne    08760ca0 <+0x50>
08760c76 +0x026:  mov    %edi,%eax
08760c78 +0x028:  shr    $0x5,%eax
08760c7b +0x02b:  cmp    (%esi),%eax
08760c7d +0x02d:  jae    08760c93 <+0x43>
08760c7f +0x02f:  shl    $0x2,%eax
08760c82 +0x032:  mov    %edi,%ecx
08760c84 +0x034:  add    0x4(%esi),%eax
08760c87 +0x037:  and    $0x1f,%ecx
08760c8a +0x03a:  mov    $0xfffffffe,%edx
08760c8f +0x03f:  rol    %cl,%edx
08760c91 +0x041:  and    %edx,(%eax)
08760c93 +0x043:  mov    -0xc(%ebp),%ebx
08760c96 +0x046:  mov    -0x8(%ebp),%esi
08760c99 +0x049:  mov    -0x4(%ebp),%edi
08760c9c +0x04c:  mov    %ebp,%esp
08760c9e +0x04e:  pop    %ebp
08760c9f +0x04f:  ret
08760ca0 +0x050:  lea    0x20(%edi),%eax
08760ca3 +0x053:  shr    $0x5,%eax
08760ca6 +0x056:  cmp    $0x8,%eax
08760ca9 +0x059:  jbe    08760ce0 <+0x90>
08760cab +0x05b:  cmp    $0x10,%eax
08760cae +0x05e:  mov    $0x10,%edx
08760cb3 +0x063:  jbe    08760ce7 <+0x97>
08760cb5 +0x065:  cmp    $0x20,%eax
08760cb8 +0x068:  mov    $0x20,%dl
08760cba +0x06a:  jbe    08760ce7 <+0x97>
08760cbc +0x06c:  cmp    $0x40,%eax
08760cbf +0x06f:  mov    $0x40,%dl
08760cc1 +0x071:  jbe    08760ce7 <+0x97>
08760cc3 +0x073:  sub    $0x1,%eax
08760cc6 +0x076:  mov    %eax,(%esp)
08760cc9 +0x079:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
08760cce +0x07e:  mov    $0x1,%edx
08760cd3 +0x083:  mov    %eax,%ecx
08760cd5 +0x085:  shl    %cl,%edx
08760cd7 +0x087:  jmp    08760ce7 <+0x97>
08760cd9 +0x089:  lea    0x0(%esi,%eiz,1),%esi
08760ce0 +0x090:  mov    -0x6678b8(%ebx,%eax,4),%edx
08760ce7 +0x097:  mov    (%esi),%eax
08760ce9 +0x099:  cmp    %eax,%edx
08760ceb +0x09b:  jbe    08760d3d <+0xed>
08760ced +0x09d:  mov    %edx,0xc(%esp)
08760cf1 +0x0a1:  movl   $0x1,0x10(%esp)
08760cf9 +0x0a9:  mov    %eax,0x8(%esp)
08760cfd +0x0ad:  mov    0x4(%esi),%eax
08760d00 +0x0b0:  mov    %edx,-0x20(%ebp)
08760d03 +0x0b3:  mov    %eax,0x4(%esp)
08760d07 +0x0b7:  lea    0x8(%esi),%eax
08760d0a +0x0ba:  mov    %eax,(%esp)
08760d0d +0x0bd:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
08760d12 +0x0c2:  mov    -0x20(%ebp),%edx
08760d15 +0x0c5:  mov    %edx,%ecx
08760d17 +0x0c7:  sub    (%esi),%ecx
08760d19 +0x0c9:  mov    %eax,0x4(%esi)
08760d1c +0x0cc:  shl    $0x2,%ecx
08760d1f +0x0cf:  mov    %ecx,0x8(%esp)
08760d23 +0x0d3:  mov    (%esi),%ecx
08760d25 +0x0d5:  movl   $0x0,0x4(%esp)
08760d2d +0x0dd:  lea    (%eax,%ecx,4),%eax
08760d30 +0x0e0:  mov    %eax,(%esp)
08760d33 +0x0e3:  call   0807dcc0 <_init+0x5b8>
08760d38 +0x0e8:  mov    -0x20(%ebp),%edx
08760d3b +0x0eb:  mov    %edx,(%esi)
08760d3d +0x0ed:  mov    %edi,%eax
08760d3f +0x0ef:  mov    %edi,%ecx
08760d41 +0x0f1:  shr    $0x5,%eax
08760d44 +0x0f4:  and    $0x1f,%ecx
08760d47 +0x0f7:  shl    $0x2,%eax
08760d4a +0x0fa:  mov    $0x1,%edx
08760d4f +0x0ff:  add    0x4(%esi),%eax
08760d52 +0x102:  shl    %cl,%edx
08760d54 +0x104:  or     %edx,(%eax)
08760d56 +0x106:  mov    -0xc(%ebp),%ebx
08760d59 +0x109:  mov    -0x8(%ebp),%esi
08760d5c +0x10c:  mov    -0x4(%ebp),%edi
08760d5f +0x10f:  mov    %ebp,%esp
08760d61 +0x111:  pop    %ebp
08760d62 +0x112:  ret
08760d63 +0x113:  nop
08760d64 +0x114:  lea    0x0(%esi),%esi
08760d6a +0x11a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::SetBit @ 0x8760c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::SetBit(unsigned int, bool) */

void __thiscall TaoCrypt::Integer::SetBit(Integer *this,uint param_1,bool param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  if (!param_2) {
    if (param_1 >> 5 < *(uint *)this) {
      puVar1 = (uint *)((param_1 >> 5) * 4 + *(int *)(this + 4));
      bVar4 = (byte)param_1 & 0x1f;
      *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    }
    return;
  }
  uVar2 = param_1 + 0x20 >> 5;
  if (uVar2 < 9) {
    uVar5 = (&RoundupSizeTable)[uVar2];
  }
  else {
    uVar5 = 0x10;
    if (((0x10 < uVar2) && (uVar5 = 0x20, 0x20 < uVar2)) && (uVar5 = 0x40, 0x40 < uVar2)) {
      bVar4 = BitPrecision(uVar2 - 1);
      uVar5 = 1 << (bVar4 & 0x1f);
    }
  }
  if (*(uint *)this < uVar5) {
    iVar3 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar5,true);
    *(int *)(this + 4) = iVar3;
    memset((void *)(iVar3 + *(int *)this * 4),0,(uVar5 - *(int *)this) * 4);
    *(uint *)this = uVar5;
  }
  puVar1 = (uint *)((param_1 >> 5) * 4 + *(int *)(this + 4));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}
```
