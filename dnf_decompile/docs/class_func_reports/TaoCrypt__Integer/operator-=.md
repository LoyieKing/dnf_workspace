# operator-=

`_ZN8TaoCrypt7IntegermIERKS0_`

`TaoCrypt::Integer::operator-=(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875fcc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875fcc0  _ZN8TaoCrypt7IntegermIERKS0_
#           TaoCrypt::Integer::operator-=(TaoCrypt::Integer const&)
# range [0x0875fcc0, 0x0875fdd9]
0875fcc0 +0x000:  push   %ebp
0875fcc1 +0x001:  mov    %esp,%ebp
0875fcc3 +0x003:  sub    $0x48,%esp
0875fcc6 +0x006:  mov    %esi,-0x8(%ebp)
0875fcc9 +0x009:  mov    0x8(%ebp),%esi
0875fccc +0x00c:  mov    %edi,-0x4(%ebp)
0875fccf +0x00f:  mov    0xc(%ebp),%edi
0875fcd2 +0x012:  mov    %ebx,-0xc(%ebp)
0875fcd5 +0x015:  call   08722df8 <__i686.get_pc_thunk.bx>
0875fcda +0x01a:  add    $0xc0cebe,%ebx
0875fce0 +0x020:  mov    (%esi),%eax
0875fce2 +0x022:  mov    (%edi),%edx
0875fce4 +0x024:  cmp    %eax,%edx
0875fce6 +0x026:  jbe    0875fd38 <+0x78>
0875fce8 +0x028:  mov    %edx,0xc(%esp)
0875fcec +0x02c:  movl   $0x1,0x10(%esp)
0875fcf4 +0x034:  mov    %eax,0x8(%esp)
0875fcf8 +0x038:  mov    0x4(%esi),%eax
0875fcfb +0x03b:  mov    %edx,-0x20(%ebp)
0875fcfe +0x03e:  mov    %eax,0x4(%esp)
0875fd02 +0x042:  lea    0x8(%esi),%eax
0875fd05 +0x045:  mov    %eax,(%esp)
0875fd08 +0x048:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875fd0d +0x04d:  mov    -0x20(%ebp),%edx
0875fd10 +0x050:  mov    %edx,%ecx
0875fd12 +0x052:  sub    (%esi),%ecx
0875fd14 +0x054:  mov    %eax,0x4(%esi)
0875fd17 +0x057:  shl    $0x2,%ecx
0875fd1a +0x05a:  mov    %ecx,0x8(%esp)
0875fd1e +0x05e:  mov    (%esi),%ecx
0875fd20 +0x060:  movl   $0x0,0x4(%esp)
0875fd28 +0x068:  lea    (%eax,%ecx,4),%eax
0875fd2b +0x06b:  mov    %eax,(%esp)
0875fd2e +0x06e:  call   0807dcc0 <_init+0x5b8>
0875fd33 +0x073:  mov    -0x20(%ebp),%edx
0875fd36 +0x076:  mov    %edx,(%esi)
0875fd38 +0x078:  cmpl   $0x1,0xc(%esi)
0875fd3c +0x07c:  je     0875fd68 <+0xa8>
0875fd3e +0x07e:  cmpl   $0x1,0xc(%edi)
0875fd42 +0x082:  je     0875fd98 <+0xd8>
0875fd44 +0x084:  mov    %edi,0x8(%esp)
0875fd48 +0x088:  mov    %esi,0x4(%esp)
0875fd4c +0x08c:  mov    %esi,(%esp)
0875fd4f +0x08f:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fd54 +0x094:  mov    %esi,%eax
0875fd56 +0x096:  mov    -0xc(%ebp),%ebx
0875fd59 +0x099:  mov    -0x8(%ebp),%esi
0875fd5c +0x09c:  mov    -0x4(%ebp),%edi
0875fd5f +0x09f:  mov    %ebp,%esp
0875fd61 +0x0a1:  pop    %ebp
0875fd62 +0x0a2:  ret
0875fd63 +0x0a3:  nop
0875fd64 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
0875fd68 +0x0a8:  cmpl   $0x1,0xc(%edi)
0875fd6c +0x0ac:  je     0875fdb8 <+0xf8>
0875fd6e +0x0ae:  mov    %edi,0x8(%esp)
0875fd72 +0x0b2:  mov    %esi,0x4(%esp)
0875fd76 +0x0b6:  mov    %esi,(%esp)
0875fd79 +0x0b9:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fd7e +0x0be:  mov    %esi,%eax
0875fd80 +0x0c0:  movl   $0x1,0xc(%esi)
0875fd87 +0x0c7:  mov    -0xc(%ebp),%ebx
0875fd8a +0x0ca:  mov    -0x8(%ebp),%esi
0875fd8d +0x0cd:  mov    -0x4(%ebp),%edi
0875fd90 +0x0d0:  mov    %ebp,%esp
0875fd92 +0x0d2:  pop    %ebp
0875fd93 +0x0d3:  ret
0875fd94 +0x0d4:  lea    0x0(%esi,%eiz,1),%esi
0875fd98 +0x0d8:  mov    %edi,0x8(%esp)
0875fd9c +0x0dc:  mov    %esi,0x4(%esp)
0875fda0 +0x0e0:  mov    %esi,(%esp)
0875fda3 +0x0e3:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fda8 +0x0e8:  mov    %esi,%eax
0875fdaa +0x0ea:  mov    -0xc(%ebp),%ebx
0875fdad +0x0ed:  mov    -0x8(%ebp),%esi
0875fdb0 +0x0f0:  mov    -0x4(%ebp),%edi
0875fdb3 +0x0f3:  mov    %ebp,%esp
0875fdb5 +0x0f5:  pop    %ebp
0875fdb6 +0x0f6:  ret
0875fdb7 +0x0f7:  nop
0875fdb8 +0x0f8:  mov    %esi,0x8(%esp)
0875fdbc +0x0fc:  mov    %edi,0x4(%esp)
0875fdc0 +0x100:  mov    %esi,(%esp)
0875fdc3 +0x103:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0875fdc8 +0x108:  mov    %esi,%eax
0875fdca +0x10a:  mov    -0xc(%ebp),%ebx
0875fdcd +0x10d:  mov    -0x8(%ebp),%esi
0875fdd0 +0x110:  mov    -0x4(%ebp),%edi
0875fdd3 +0x113:  mov    %ebp,%esp
0875fdd5 +0x115:  pop    %ebp
0875fdd6 +0x116:  ret
0875fdd7 +0x117:  nop
0875fdd8 +0x118:  nop
0875fdd9 +0x119:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::operator-= @ 0x875fcc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::Integer const&) */

Integer * __thiscall TaoCrypt::Integer::operator-=(Integer *this,Integer *param_1)

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
      PositiveSubtract(this,this,param_1);
      return this;
    }
    PositiveAdd(this,this,param_1);
    return this;
  }
  if (*(int *)(param_1 + 0xc) != 1) {
    PositiveAdd(this,this,param_1);
    *(undefined4 *)(this + 0xc) = 1;
    return this;
  }
  PositiveSubtract(this,param_1,this);
  return this;
}
```
