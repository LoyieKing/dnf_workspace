# Compare

`_ZNK8TaoCrypt7Integer7CompareERKS0_`

`TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d220  _ZNK8TaoCrypt7Integer7CompareERKS0_
#           TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
# range [0x0875d220, 0x0875d27c]
0875d220 +0x00:  push   %ebp
0875d221 +0x01:  mov    %esp,%ebp
0875d223 +0x03:  push   %ebx
0875d224 +0x04:  sub    $0x14,%esp
0875d227 +0x07:  mov    0x8(%ebp),%edx
0875d22a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d22f +0x0f:  add    $0xc0f969,%ebx
0875d235 +0x15:  mov    0xc(%ebp),%ecx
0875d238 +0x18:  cmpl   $0x1,0xc(%edx)
0875d23c +0x1c:  je     0875d260 <+0x40>
0875d23e +0x1e:  cmpl   $0x1,0xc(%ecx)
0875d242 +0x22:  mov    $0x1,%eax
0875d247 +0x27:  je     0875d255 <+0x35>
0875d249 +0x29:  mov    %ecx,0x4(%esp)
0875d24d +0x2d:  mov    %edx,(%esp)
0875d250 +0x30:  call   0875d170 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_>  ; TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const
0875d255 +0x35:  add    $0x14,%esp
0875d258 +0x38:  pop    %ebx
0875d259 +0x39:  pop    %ebp
0875d25a +0x3a:  ret
0875d25b +0x3b:  nop
0875d25c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
0875d260 +0x40:  cmpl   $0x1,0xc(%ecx)
0875d264 +0x44:  mov    $0xffffffff,%eax
0875d269 +0x49:  jne    0875d255 <+0x35>
0875d26b +0x4b:  mov    %ecx,0x4(%esp)
0875d26f +0x4f:  mov    %edx,(%esp)
0875d272 +0x52:  call   0875d170 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_>  ; TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const
0875d277 +0x57:  neg    %eax
0875d279 +0x59:  jmp    0875d255 <+0x35>
0875d27b +0x5b:  nop
0875d27c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Compare @ 0x875d220

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const */

int __thiscall TaoCrypt::Integer::Compare(Integer *this,Integer *param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0xc) == 1) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0xc) == 1) {
      iVar1 = PositiveCompare(this,param_1);
      iVar1 = -iVar1;
    }
  }
  else {
    iVar1 = 1;
    if (*(int *)(param_1 + 0xc) != 1) {
      iVar1 = PositiveCompare(this,param_1);
    }
  }
  return iVar1;
}
```
