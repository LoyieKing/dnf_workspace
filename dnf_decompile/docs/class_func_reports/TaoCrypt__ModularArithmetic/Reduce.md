# Reduce

`_ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_`

`TaoCrypt::ModularArithmetic::Reduce(TaoCrypt::Integer&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x0875ff00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ff00  _ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_
#           TaoCrypt::ModularArithmetic::Reduce(TaoCrypt::Integer&, TaoCrypt::Integer const&) const
# range [0x0875ff00, 0x0875ffb9]
0875ff00 +0x00:  push   %ebp
0875ff01 +0x01:  mov    %esp,%ebp
0875ff03 +0x03:  sub    $0x28,%esp
0875ff06 +0x06:  mov    %esi,-0x8(%ebp)
0875ff09 +0x09:  mov    0xc(%ebp),%esi
0875ff0c +0x0c:  mov    %edi,-0x4(%ebp)
0875ff0f +0x0f:  mov    0x8(%ebp),%edi
0875ff12 +0x12:  mov    %ebx,-0xc(%ebp)
0875ff15 +0x15:  mov    0x10(%ebp),%edx
0875ff18 +0x18:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ff1d +0x1d:  add    $0xc0cc7b,%ebx
0875ff23 +0x23:  mov    (%esi),%eax
0875ff25 +0x25:  cmp    0xc(%edi),%eax
0875ff28 +0x28:  je     0875ff50 <+0x50>
0875ff2a +0x2a:  mov    %edx,0x4(%esp)
0875ff2e +0x2e:  mov    %esi,(%esp)
0875ff31 +0x31:  call   0875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>  ; TaoCrypt::Integer::operator-=(TaoCrypt::Integer const&)
0875ff36 +0x36:  cmpl   $0x1,0xc(%esi)
0875ff3a +0x3a:  je     0875ffa0 <+0xa0>
0875ff3c +0x3c:  mov    %esi,%eax
0875ff3e +0x3e:  mov    -0xc(%ebp),%ebx
0875ff41 +0x41:  mov    -0x8(%ebp),%esi
0875ff44 +0x44:  mov    -0x4(%ebp),%edi
0875ff47 +0x47:  mov    %ebp,%esp
0875ff49 +0x49:  pop    %ebp
0875ff4a +0x4a:  ret
0875ff4b +0x4b:  nop
0875ff4c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
0875ff50 +0x50:  cmp    (%edx),%eax
0875ff52 +0x52:  jne    0875ff2a <+0x2a>
0875ff54 +0x54:  mov    0x4(%esi),%ecx
0875ff57 +0x57:  mov    %eax,0xc(%esp)
0875ff5b +0x5b:  mov    0x4(%edx),%eax
0875ff5e +0x5e:  mov    %ecx,0x4(%esp)
0875ff62 +0x62:  mov    %eax,0x8(%esp)
0875ff66 +0x66:  mov    %ecx,(%esp)
0875ff69 +0x69:  call   *0x124c90(%ebx)
0875ff6f +0x6f:  test   %eax,%eax
0875ff71 +0x71:  je     0875ff3c <+0x3c>
0875ff73 +0x73:  mov    (%esi),%edx
0875ff75 +0x75:  mov    0x4(%esi),%eax
0875ff78 +0x78:  mov    %edx,0xc(%esp)
0875ff7c +0x7c:  mov    0x10(%edi),%edx
0875ff7f +0x7f:  mov    %eax,0x4(%esp)
0875ff83 +0x83:  mov    %eax,(%esp)
0875ff86 +0x86:  mov    %edx,0x8(%esp)
0875ff8a +0x8a:  call   *0x124c8c(%ebx)
0875ff90 +0x90:  mov    %esi,%eax
0875ff92 +0x92:  mov    -0xc(%ebp),%ebx
0875ff95 +0x95:  mov    -0x8(%ebp),%esi
0875ff98 +0x98:  mov    -0x4(%ebp),%edi
0875ff9b +0x9b:  mov    %ebp,%esp
0875ff9d +0x9d:  pop    %ebp
0875ff9e +0x9e:  ret
0875ff9f +0x9f:  nop
0875ffa0 +0xa0:  add    $0xc,%edi
0875ffa3 +0xa3:  mov    %edi,0x4(%esp)
0875ffa7 +0xa7:  mov    %esi,(%esp)
0875ffaa +0xaa:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
0875ffaf +0xaf:  jmp    0875ff3c <+0x3c>
0875ffb1 +0xb1:  nop
0875ffb2 +0xb2:  lea    0x0(%esi,%eiz,1),%esi
0875ffb9 +0xb9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::Reduce @ 0x875ff00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Reduce(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Reduce(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if ((iVar1 == *(int *)(this + 0xc)) && (iVar1 == *(int *)param_2)) {
    iVar1 = (*s_pSub)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(param_2 + 4),iVar1);
    if (iVar1 != 0) {
      (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                *(undefined4 *)(this + 0x10),*(undefined4 *)param_1);
      return param_1;
    }
  }
  else {
    Integer::operator-=(param_1,param_2);
    if (*(int *)(param_1 + 0xc) == 1) {
      Integer::operator+=(param_1,(Integer *)(this + 0xc));
    }
  }
  return param_1;
}
```
