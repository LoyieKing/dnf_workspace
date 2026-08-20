# Inverse

`_ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE`

`TaoCrypt::ModularArithmetic::Inverse(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x0875d820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d820  _ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE
#           TaoCrypt::ModularArithmetic::Inverse(TaoCrypt::Integer const&) const
# range [0x0875d820, 0x0875d8b9]
0875d820 +0x00:  push   %ebp
0875d821 +0x01:  mov    %esp,%ebp
0875d823 +0x03:  push   %edi
0875d824 +0x04:  push   %esi
0875d825 +0x05:  push   %ebx
0875d826 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d82b +0x0b:  add    $0xc0f36d,%ebx
0875d831 +0x11:  sub    $0x1c,%esp
0875d834 +0x14:  mov    0xc(%ebp),%eax
0875d837 +0x17:  mov    %eax,(%esp)
0875d83a +0x1a:  call   0875d280 <_ZNK8TaoCrypt7IntegerntEv>  ; TaoCrypt::Integer::operator!() const
0875d83f +0x1f:  test   %al,%al
0875d841 +0x21:  jne    0875d88f <+0x6f>
0875d843 +0x23:  mov    0x8(%ebp),%edx
0875d846 +0x26:  mov    0xc(%edx),%esi
0875d849 +0x29:  mov    0x10(%edx),%edi
0875d84c +0x2c:  mov    0x20(%edx),%ecx
0875d84f +0x2f:  test   %esi,%esi
0875d851 +0x31:  je     0875d865 <+0x45>
0875d853 +0x33:  xor    %eax,%eax
0875d855 +0x35:  lea    0x0(%esi),%esi
0875d858 +0x38:  mov    (%edi,%eax,4),%edx
0875d85b +0x3b:  mov    %edx,(%ecx,%eax,4)
0875d85e +0x3e:  add    $0x1,%eax
0875d861 +0x41:  cmp    %eax,%esi
0875d863 +0x43:  ja     0875d858 <+0x38>
0875d865 +0x45:  mov    0xc(%ebp),%esi
0875d868 +0x48:  mov    (%esi),%eax
0875d86a +0x4a:  mov    %eax,0xc(%esp)
0875d86e +0x4e:  mov    0x4(%esi),%eax
0875d871 +0x51:  mov    %ecx,0x4(%esp)
0875d875 +0x55:  mov    %ecx,(%esp)
0875d878 +0x58:  mov    %eax,0x8(%esp)
0875d87c +0x5c:  call   *0x124c90(%ebx)
0875d882 +0x62:  test   %eax,%eax
0875d884 +0x64:  jne    0875d8a0 <+0x80>
0875d886 +0x66:  mov    0x8(%ebp),%eax
0875d889 +0x69:  add    $0x1c,%eax
0875d88c +0x6c:  mov    %eax,0xc(%ebp)
0875d88f +0x6f:  mov    0xc(%ebp),%eax
0875d892 +0x72:  add    $0x1c,%esp
0875d895 +0x75:  pop    %ebx
0875d896 +0x76:  pop    %esi
0875d897 +0x77:  pop    %edi
0875d898 +0x78:  pop    %ebp
0875d899 +0x79:  ret
0875d89a +0x7a:  lea    0x0(%esi),%esi
0875d8a0 +0x80:  mov    (%esi),%ecx
0875d8a2 +0x82:  mov    0x8(%ebp),%edx
0875d8a5 +0x85:  lea    0x0(,%ecx,4),%eax
0875d8ac +0x8c:  add    0x20(%edx),%eax
0875d8af +0x8f:  mov    0xc(%edx),%edx
0875d8b2 +0x92:  sub    %ecx,%edx
0875d8b4 +0x94:  sub    %edx,(%eax)
0875d8b6 +0x96:  jmp    0875d886 <+0x66>
0875d8b8 +0x98:  nop
0875d8b9 +0x99:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::Inverse @ 0x875d820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Inverse(TaoCrypt::Integer const&) const */

Integer * __thiscall TaoCrypt::ModularArithmetic::Inverse(ModularArithmetic *this,Integer *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  cVar3 = Integer::operator!(param_1);
  if (cVar3 == '\0') {
    uVar1 = *(uint *)(this + 0xc);
    iVar5 = *(int *)(this + 0x10);
    iVar2 = *(int *)(this + 0x20);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(iVar2 + uVar4 * 4) = *(undefined4 *)(iVar5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    iVar5 = (*s_pSub)(iVar2,iVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)param_1);
    if (iVar5 != 0) {
      piVar6 = (int *)(*(int *)param_1 * 4 + *(int *)(this + 0x20));
      *piVar6 = *piVar6 - (*(int *)(this + 0xc) - *(int *)param_1);
    }
    param_1 = (Integer *)(this + 0x1c);
  }
  return param_1;
}
```
