# SetByte

`_ZN8TaoCrypt7Integer7SetByteEjh`

`TaoCrypt::Integer::SetByte(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875ef40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ef40  _ZN8TaoCrypt7Integer7SetByteEjh
#           TaoCrypt::Integer::SetByte(unsigned int, unsigned char)
# range [0x0875ef40, 0x0875f04e]
0875ef40 +0x000:  push   %ebp
0875ef41 +0x001:  mov    %esp,%ebp
0875ef43 +0x003:  sub    $0x48,%esp
0875ef46 +0x006:  movzbl 0x10(%ebp),%eax
0875ef4a +0x00a:  mov    0xc(%ebp),%edx
0875ef4d +0x00d:  mov    %ebx,-0xc(%ebp)
0875ef50 +0x010:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ef55 +0x015:  add    $0xc0dc43,%ebx
0875ef5b +0x01b:  mov    %al,-0x19(%ebp)
0875ef5e +0x01e:  lea    0x4(%edx),%eax
0875ef61 +0x021:  shr    $0x2,%eax
0875ef64 +0x024:  cmp    $0x8,%eax
0875ef67 +0x027:  mov    %esi,-0x8(%ebp)
0875ef6a +0x02a:  mov    0x8(%ebp),%esi
0875ef6d +0x02d:  mov    %edi,-0x4(%ebp)
0875ef70 +0x030:  jbe    0875f020 <+0xe0>
0875ef76 +0x036:  cmp    $0x10,%eax
0875ef79 +0x039:  mov    $0x10,%edi
0875ef7e +0x03e:  jbe    0875ef98 <+0x58>
0875ef80 +0x040:  cmp    $0x20,%eax
0875ef83 +0x043:  mov    $0x20,%di
0875ef87 +0x047:  jbe    0875ef98 <+0x58>
0875ef89 +0x049:  cmp    $0x40,%eax
0875ef8c +0x04c:  mov    $0x40,%di
0875ef90 +0x050:  ja     0875f030 <+0xf0>
0875ef96 +0x056:  xchg   %ax,%ax
0875ef98 +0x058:  mov    (%esi),%eax
0875ef9a +0x05a:  cmp    %eax,%edi
0875ef9c +0x05c:  jbe    0875efeb <+0xab>
0875ef9e +0x05e:  movl   $0x1,0x10(%esp)
0875efa6 +0x066:  mov    %edi,0xc(%esp)
0875efaa +0x06a:  mov    %eax,0x8(%esp)
0875efae +0x06e:  mov    0x4(%esi),%eax
0875efb1 +0x071:  mov    %edx,-0x24(%ebp)
0875efb4 +0x074:  mov    %eax,0x4(%esp)
0875efb8 +0x078:  lea    0x8(%esi),%eax
0875efbb +0x07b:  mov    %eax,(%esp)
0875efbe +0x07e:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875efc3 +0x083:  mov    %edi,%ecx
0875efc5 +0x085:  sub    (%esi),%ecx
0875efc7 +0x087:  shl    $0x2,%ecx
0875efca +0x08a:  mov    %eax,0x4(%esi)
0875efcd +0x08d:  mov    %ecx,0x8(%esp)
0875efd1 +0x091:  mov    (%esi),%ecx
0875efd3 +0x093:  movl   $0x0,0x4(%esp)
0875efdb +0x09b:  lea    (%eax,%ecx,4),%eax
0875efde +0x09e:  mov    %eax,(%esp)
0875efe1 +0x0a1:  call   0807dcc0 <_init+0x5b8>
0875efe6 +0x0a6:  mov    -0x24(%ebp),%edx
0875efe9 +0x0a9:  mov    %edi,(%esi)
0875efeb +0x0ab:  mov    %edx,%eax
0875efed +0x0ad:  and    $0x3,%edx
0875eff0 +0x0b0:  and    $0xfffffffc,%eax
0875eff3 +0x0b3:  add    0x4(%esi),%eax
0875eff6 +0x0b6:  mov    $0xff,%esi
0875effb +0x0bb:  lea    0x0(,%edx,8),%ecx
0875f002 +0x0c2:  shl    %cl,%esi
0875f004 +0x0c4:  not    %esi
0875f006 +0x0c6:  and    %esi,(%eax)
0875f008 +0x0c8:  movzbl -0x19(%ebp),%esi
0875f00c +0x0cc:  shl    %cl,%esi
0875f00e +0x0ce:  or     %esi,(%eax)
0875f010 +0x0d0:  mov    -0xc(%ebp),%ebx
0875f013 +0x0d3:  mov    -0x8(%ebp),%esi
0875f016 +0x0d6:  mov    -0x4(%ebp),%edi
0875f019 +0x0d9:  mov    %ebp,%esp
0875f01b +0x0db:  pop    %ebp
0875f01c +0x0dc:  ret
0875f01d +0x0dd:  lea    0x0(%esi),%esi
0875f020 +0x0e0:  mov    -0x6678b8(%ebx,%eax,4),%edi
0875f027 +0x0e7:  jmp    0875ef98 <+0x58>
0875f02c +0x0ec:  lea    0x0(%esi,%eiz,1),%esi
0875f030 +0x0f0:  sub    $0x1,%eax
0875f033 +0x0f3:  mov    $0x1,%di
0875f037 +0x0f7:  mov    %edx,-0x24(%ebp)
0875f03a +0x0fa:  mov    %eax,(%esp)
0875f03d +0x0fd:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0875f042 +0x102:  mov    -0x24(%ebp),%edx
0875f045 +0x105:  mov    %eax,%ecx
0875f047 +0x107:  shl    %cl,%edi
0875f049 +0x109:  jmp    0875ef98 <+0x58>
0875f04e +0x10e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::SetByte @ 0x875ef40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::SetByte(unsigned int, unsigned char) */

void __thiscall TaoCrypt::Integer::SetByte(Integer *this,uint param_1,uchar param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  sbyte sVar5;
  uint uVar6;
  
  uVar2 = param_1 + 4 >> 2;
  if (uVar2 < 9) {
    uVar6 = (&RoundupSizeTable)[uVar2];
  }
  else {
    uVar6 = 0x10;
    if (((0x10 < uVar2) && (uVar6 = 0x20, 0x20 < uVar2)) && (uVar6 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      uVar6 = 1 << (bVar1 & 0x1f);
    }
  }
  if (*(uint *)this < uVar6) {
    iVar3 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar6,true);
    *(int *)(this + 4) = iVar3;
    memset((void *)(iVar3 + *(int *)this * 4),0,(uVar6 - *(int *)this) * 4);
    *(uint *)this = uVar6;
  }
  puVar4 = (uint *)((param_1 & 0xfffffffc) + *(int *)(this + 4));
  sVar5 = ((byte)param_1 & 3) * '\b';
  *puVar4 = *puVar4 & ~(0xff << sVar5);
  *puVar4 = *puVar4 | (uint)param_2 << sVar5;
  return;
}
```
