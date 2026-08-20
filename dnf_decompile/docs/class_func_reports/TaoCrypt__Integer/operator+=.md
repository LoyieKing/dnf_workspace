# operator+=

`_ZN8TaoCrypt7IntegerpLERKS0_`

`TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875fde0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875fde0  _ZN8TaoCrypt7IntegerpLERKS0_
#           TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
# range [0x0875fde0, 0x0875fef9]
0875fde0 +0x000:  push   %ebp
0875fde1 +0x001:  mov    %esp,%ebp
0875fde3 +0x003:  sub    $0x48,%esp
0875fde6 +0x006:  mov    %esi,-0x8(%ebp)
0875fde9 +0x009:  mov    0x8(%ebp),%esi
0875fdec +0x00c:  mov    %edi,-0x4(%ebp)
0875fdef +0x00f:  mov    0xc(%ebp),%edi
0875fdf2 +0x012:  mov    %ebx,-0xc(%ebp)
0875fdf5 +0x015:  call   08722df8 <__i686.get_pc_thunk.bx>
0875fdfa +0x01a:  add    $0xc0cd9e,%ebx
0875fe00 +0x020:  mov    (%esi),%eax
0875fe02 +0x022:  mov    (%edi),%edx
0875fe04 +0x024:  cmp    %eax,%edx
0875fe06 +0x026:  jbe    0875fe58 <+0x78>
0875fe08 +0x028:  mov    %edx,0xc(%esp)
0875fe0c +0x02c:  movl   $0x1,0x10(%esp)
0875fe14 +0x034:  mov    %eax,0x8(%esp)
0875fe18 +0x038:  mov    0x4(%esi),%eax
0875fe1b +0x03b:  mov    %edx,-0x20(%ebp)
0875fe1e +0x03e:  mov    %eax,0x4(%esp)
0875fe22 +0x042:  lea    0x8(%esi),%eax
0875fe25 +0x045:  mov    %eax,(%esp)
0875fe28 +0x048:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875fe2d +0x04d:  mov    -0x20(%ebp),%edx
0875fe30 +0x050:  mov    %edx,%ecx
0875fe32 +0x052:  sub    (%esi),%ecx
0875fe34 +0x054:  mov    %eax,0x4(%esi)
0875fe37 +0x057:  shl    $0x2,%ecx
0875fe3a +0x05a:  mov    %ecx,0x8(%esp)
0875fe3e +0x05e:  mov    (%esi),%ecx
0875fe40 +0x060:  movl   $0x0,0x4(%esp)
0875fe48 +0x068:  lea    (%eax,%ecx,4),%eax
0875fe4b +0x06b:  mov    %eax,(%esp)
0875fe4e +0x06e:  call   0807dcc0 <_init+0x5b8>
0875fe53 +0x073:  mov    -0x20(%ebp),%edx
0875fe56 +0x076:  mov    %edx,(%esi)
0875fe58 +0x078:  cmpl   $0x1,0xc(%esi)
0875fe5c +0x07c:  je     0875fe88 <+0xa8>
0875fe5e +0x07e:  cmpl   $0x1,0xc(%edi)
0875fe62 +0x082:  je     0875feb0 <+0xd0>
0875fe64 +0x084:  mov    %edi,0x8(%esp)
0875fe68 +0x088:  mov    %esi,0x4(%esp)
0875fe6c +0x08c:  mov    %esi,(%esp)
0875fe6f +0x08f:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fe74 +0x094:  mov    %esi,%eax
0875fe76 +0x096:  mov    -0xc(%ebp),%ebx
0875fe79 +0x099:  mov    -0x8(%ebp),%esi
0875fe7c +0x09c:  mov    -0x4(%ebp),%edi
0875fe7f +0x09f:  mov    %ebp,%esp
0875fe81 +0x0a1:  pop    %ebp
0875fe82 +0x0a2:  ret
0875fe83 +0x0a3:  nop
0875fe84 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
0875fe88 +0x0a8:  cmpl   $0x1,0xc(%edi)
0875fe8c +0x0ac:  je     0875fed0 <+0xf0>
0875fe8e +0x0ae:  mov    %esi,0x8(%esp)
0875fe92 +0x0b2:  mov    %edi,0x4(%esp)
0875fe96 +0x0b6:  mov    %esi,(%esp)
0875fe99 +0x0b9:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fe9e +0x0be:  mov    %esi,%eax
0875fea0 +0x0c0:  mov    -0xc(%ebp),%ebx
0875fea3 +0x0c3:  mov    -0x8(%ebp),%esi
0875fea6 +0x0c6:  mov    -0x4(%ebp),%edi
0875fea9 +0x0c9:  mov    %ebp,%esp
0875feab +0x0cb:  pop    %ebp
0875feac +0x0cc:  ret
0875fead +0x0cd:  lea    0x0(%esi),%esi
0875feb0 +0x0d0:  mov    %edi,0x8(%esp)
0875feb4 +0x0d4:  mov    %esi,0x4(%esp)
0875feb8 +0x0d8:  mov    %esi,(%esp)
0875febb +0x0db:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fec0 +0x0e0:  mov    %esi,%eax
0875fec2 +0x0e2:  mov    -0xc(%ebp),%ebx
0875fec5 +0x0e5:  mov    -0x8(%ebp),%esi
0875fec8 +0x0e8:  mov    -0x4(%ebp),%edi
0875fecb +0x0eb:  mov    %ebp,%esp
0875fecd +0x0ed:  pop    %ebp
0875fece +0x0ee:  ret
0875fecf +0x0ef:  nop
0875fed0 +0x0f0:  mov    %edi,0x8(%esp)
0875fed4 +0x0f4:  mov    %esi,0x4(%esp)
0875fed8 +0x0f8:  mov    %esi,(%esp)
0875fedb +0x0fb:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fee0 +0x100:  mov    %esi,%eax
0875fee2 +0x102:  movl   $0x1,0xc(%esi)
0875fee9 +0x109:  mov    -0xc(%ebp),%ebx
0875feec +0x10c:  mov    -0x8(%ebp),%esi
0875feef +0x10f:  mov    -0x4(%ebp),%edi
0875fef2 +0x112:  mov    %ebp,%esp
0875fef4 +0x114:  pop    %ebp
0875fef5 +0x115:  ret
0875fef6 +0x116:  lea    0x0(%esi),%esi
0875fef9 +0x119:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::operator+= @ 0x875fde0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::operator+=(Integer *this,Integer *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)param_1;
  if (*(uint *)this < uVar1) {
    iVar2 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(this + 8),*(uint **)(this + 4),
                       *(uint *)this,uVar1,true);
    *(int *)(this + 4) = iVar2;
    memset((void *)(iVar2 + *(int *)this * 4),0,(uVar1 - *(int *)this) * 4);
    *(uint *)this = uVar1;
  }
  if (*(int *)(this + 0xc) != 1) {
    if (*(int *)(param_1 + 0xc) != 1) {
      PositiveAdd(this,this,param_1);
      return this;
    }
    PositiveSubtract(this,this,param_1);
    return this;
  }
  if (*(int *)(param_1 + 0xc) != 1) {
    PositiveSubtract(this,param_1,this);
    return this;
  }
  PositiveAdd(this,this,param_1);
  *(undefined4 *)(this + 0xc) = 1;
  return this;
}
```
