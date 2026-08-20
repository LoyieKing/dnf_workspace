# operator=

`_ZN8TaoCrypt7IntegeraSERKS0_`

`TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760460  _ZN8TaoCrypt7IntegeraSERKS0_
#           TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
# range [0x08760460, 0x0876057b]
08760460 +0x000:  push   %ebp
08760461 +0x001:  mov    %esp,%ebp
08760463 +0x003:  push   %edi
08760464 +0x004:  push   %esi
08760465 +0x005:  push   %ebx
08760466 +0x006:  sub    $0x1c,%esp
08760469 +0x009:  mov    0xc(%ebp),%eax
0876046c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08760471 +0x011:  add    $0xc0c727,%ebx
08760477 +0x017:  cmp    %eax,0x8(%ebp)
0876047a +0x01a:  je     087604f4 <+0x94>
0876047c +0x01c:  mov    %eax,(%esp)
0876047f +0x01f:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08760484 +0x024:  cmp    $0x8,%eax
08760487 +0x027:  jbe    08760538 <+0xd8>
0876048d +0x02d:  cmp    $0x10,%eax
08760490 +0x030:  mov    $0x10,%esi
08760495 +0x035:  jbe    087604ad <+0x4d>
08760497 +0x037:  cmp    $0x20,%eax
0876049a +0x03a:  mov    $0x20,%si
0876049e +0x03e:  jbe    087604ad <+0x4d>
087604a0 +0x040:  cmp    $0x40,%eax
087604a3 +0x043:  mov    $0x40,%si
087604a7 +0x047:  ja     08760568 <+0x108>
087604ad +0x04d:  mov    0x8(%ebp),%eax
087604b0 +0x050:  mov    (%eax),%edx
087604b2 +0x052:  mov    %eax,%ecx
087604b4 +0x054:  mov    0x4(%eax),%eax
087604b7 +0x057:  cmp    %esi,%edx
087604b9 +0x059:  je     08760551 <+0xf1>
087604bf +0x05f:  mov    %eax,0x4(%esp)
087604c3 +0x063:  mov    %ecx,%eax
087604c5 +0x065:  add    $0x8,%eax
087604c8 +0x068:  mov    %edx,0x8(%esp)
087604cc +0x06c:  mov    %eax,(%esp)
087604cf +0x06f:  call   08763b80 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x360>  ; TaoCrypt::Integer::IsSquare() const+0x360
087604d4 +0x074:  test   %esi,%esi
087604d6 +0x076:  jne    08760500 <+0xa0>
087604d8 +0x078:  mov    0x8(%ebp),%eax
087604db +0x07b:  movl   $0x0,0x4(%eax)
087604e2 +0x082:  movl   $0x0,(%eax)
087604e8 +0x088:  mov    0xc(%ebp),%edx
087604eb +0x08b:  mov    0x8(%ebp),%ecx
087604ee +0x08e:  mov    0xc(%edx),%eax
087604f1 +0x091:  mov    %eax,0xc(%ecx)
087604f4 +0x094:  mov    0x8(%ebp),%eax
087604f7 +0x097:  add    $0x1c,%esp
087604fa +0x09a:  pop    %ebx
087604fb +0x09b:  pop    %esi
087604fc +0x09c:  pop    %edi
087604fd +0x09d:  pop    %ebp
087604fe +0x09e:  ret
087604ff +0x09f:  nop
08760500 +0x0a0:  lea    0x0(,%esi,4),%eax
08760507 +0x0a7:  movb   $0x0,0x4(%esp)
0876050c +0x0ac:  mov    %eax,(%esp)
0876050f +0x0af:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08760514 +0x0b4:  mov    0x8(%ebp),%edx
08760517 +0x0b7:  mov    0xc(%ebp),%ecx
0876051a +0x0ba:  mov    %esi,(%edx)
0876051c +0x0bc:  mov    %eax,0x4(%edx)
0876051f +0x0bf:  mov    0x4(%ecx),%edi
08760522 +0x0c2:  xor    %edx,%edx
08760524 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
08760528 +0x0c8:  mov    (%edi,%edx,4),%ecx
0876052b +0x0cb:  mov    %ecx,(%eax,%edx,4)
0876052e +0x0ce:  add    $0x1,%edx
08760531 +0x0d1:  cmp    %esi,%edx
08760533 +0x0d3:  jb     08760528 <+0xc8>
08760535 +0x0d5:  jmp    087604e8 <+0x88>
08760537 +0x0d7:  nop
08760538 +0x0d8:  mov    -0x6678b8(%ebx,%eax,4),%esi
0876053f +0x0df:  mov    0x8(%ebp),%eax
08760542 +0x0e2:  mov    (%eax),%edx
08760544 +0x0e4:  mov    %eax,%ecx
08760546 +0x0e6:  mov    0x4(%eax),%eax
08760549 +0x0e9:  cmp    %esi,%edx
0876054b +0x0eb:  jne    087604bf <+0x5f>
08760551 +0x0f1:  mov    0x8(%ebp),%edx
08760554 +0x0f4:  test   %esi,%esi
08760556 +0x0f6:  mov    0xc(%ebp),%ecx
08760559 +0x0f9:  mov    %eax,0x4(%edx)
0876055c +0x0fc:  mov    %esi,(%edx)
0876055e +0x0fe:  mov    0x4(%ecx),%edi
08760561 +0x101:  jne    08760522 <+0xc2>
08760563 +0x103:  jmp    087604e8 <+0x88>
08760565 +0x105:  lea    0x0(%esi),%esi
08760568 +0x108:  sub    $0x1,%eax
0876056b +0x10b:  mov    $0x1,%si
0876056f +0x10f:  mov    %eax,(%esp)
08760572 +0x112:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
08760577 +0x117:  mov    %eax,%ecx
08760579 +0x119:  shl    %cl,%esi
0876057b +0x11b:  jmp    087604ad <+0x4d>
```

## 反编译 C

```c
// TaoCrypt::Integer::operator= @ 0x8760460

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::operator=(Integer *this,Integer *param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  if (this == param_1) {
    return this;
  }
  uVar2 = WordCount(param_1);
  if (uVar2 < 9) {
    uVar4 = (&RoundupSizeTable)[uVar2];
    uVar2 = *(uint *)this;
    pvVar3 = *(void **)(this + 4);
    if (uVar2 == uVar4) goto LAB_08760551;
LAB_087604bf:
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(this + 8),pvVar3,uVar2);
    if (uVar4 == 0) {
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)this = 0;
      goto LAB_087604e8;
    }
    pvVar3 = operator_new__(uVar4 * 4,(uint)pvVar3 & 0xffffff00);
    *(uint *)this = uVar4;
    *(void **)(this + 4) = pvVar3;
    iVar5 = *(int *)(param_1 + 4);
  }
  else {
    uVar4 = 0x10;
    if (((0x10 < uVar2) && (uVar4 = 0x20, 0x20 < uVar2)) && (uVar4 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      uVar4 = 1 << (bVar1 & 0x1f);
    }
    uVar2 = *(uint *)this;
    pvVar3 = *(void **)(this + 4);
    if (uVar2 != uVar4) goto LAB_087604bf;
LAB_08760551:
    *(void **)(this + 4) = pvVar3;
    *(uint *)this = uVar4;
    iVar5 = *(int *)(param_1 + 4);
    if (uVar4 == 0) goto LAB_087604e8;
  }
  uVar2 = 0;
  do {
    *(undefined4 *)((int)pvVar3 + uVar2 * 4) = *(undefined4 *)(iVar5 + uVar2 * 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < uVar4);
LAB_087604e8:
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}
```
