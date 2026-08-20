# InverseMod

`_ZNK8TaoCrypt7Integer10InverseModEj`

`TaoCrypt::Integer::InverseMod(unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d760  _ZNK8TaoCrypt7Integer10InverseModEj
#           TaoCrypt::Integer::InverseMod(unsigned int) const
# range [0x0875d760, 0x0875d81a]
0875d760 +0x00:  push   %ebp
0875d761 +0x01:  mov    %esp,%ebp
0875d763 +0x03:  push   %edi
0875d764 +0x04:  push   %esi
0875d765 +0x05:  push   %ebx
0875d766 +0x06:  sub    $0x2c,%esp
0875d769 +0x09:  mov    0xc(%ebp),%eax
0875d76c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d771 +0x11:  add    $0xc0f427,%ebx
0875d777 +0x17:  mov    %eax,0x4(%esp)
0875d77b +0x1b:  mov    0x8(%ebp),%eax
0875d77e +0x1e:  mov    %eax,(%esp)
0875d781 +0x21:  call   0875d5c0 <_ZNK8TaoCrypt7Integer6ModuloEj>  ; TaoCrypt::Integer::Modulo(unsigned int) const
0875d786 +0x26:  test   %eax,%eax
0875d788 +0x28:  mov    %eax,%ecx
0875d78a +0x2a:  je     0875d7e8 <+0x88>
0875d78c +0x2c:  cmp    $0x1,%eax
0875d78f +0x2f:  mov    $0x1,%edi
0875d794 +0x34:  je     0875d7ea <+0x8a>
0875d796 +0x36:  mov    0xc(%ebp),%eax
0875d799 +0x39:  xor    %edx,%edx
0875d79b +0x3b:  div    %ecx
0875d79d +0x3d:  test   %edx,%edx
0875d79f +0x3f:  je     0875d7e8 <+0x88>
0875d7a1 +0x41:  cmp    $0x1,%edx
0875d7a4 +0x44:  mov    %eax,-0x1c(%ebp)
0875d7a7 +0x47:  je     0875d7f8 <+0x98>
0875d7a9 +0x49:  mov    %ecx,%eax
0875d7ab +0x4b:  mov    %edi,%ecx
0875d7ad +0x4d:  mov    %edx,%edi
0875d7af +0x4f:  jmp    0875d7de <+0x7e>
0875d7b1 +0x51:  lea    0x0(%esi,%eiz,1),%esi
0875d7b8 +0x58:  imul   -0x1c(%ebp),%eax
0875d7bc +0x5c:  add    %eax,%ecx
0875d7be +0x5e:  cmp    $0x1,%esi
0875d7c1 +0x61:  je     0875d808 <+0xa8>
0875d7c3 +0x63:  mov    %edi,%eax
0875d7c5 +0x65:  xor    %edx,%edx
0875d7c7 +0x67:  div    %esi
0875d7c9 +0x69:  test   %edx,%edx
0875d7cb +0x6b:  mov    %eax,%edi
0875d7cd +0x6d:  je     0875d7e8 <+0x88>
0875d7cf +0x6f:  imul   %ecx,%edi
0875d7d2 +0x72:  add    %edi,-0x1c(%ebp)
0875d7d5 +0x75:  cmp    $0x1,%edx
0875d7d8 +0x78:  je     0875d7f8 <+0x98>
0875d7da +0x7a:  mov    %edx,%edi
0875d7dc +0x7c:  mov    %esi,%eax
0875d7de +0x7e:  xor    %edx,%edx
0875d7e0 +0x80:  div    %edi
0875d7e2 +0x82:  test   %edx,%edx
0875d7e4 +0x84:  mov    %edx,%esi
0875d7e6 +0x86:  jne    0875d7b8 <+0x58>
0875d7e8 +0x88:  xor    %edi,%edi
0875d7ea +0x8a:  add    $0x2c,%esp
0875d7ed +0x8d:  mov    %edi,%eax
0875d7ef +0x8f:  pop    %ebx
0875d7f0 +0x90:  pop    %esi
0875d7f1 +0x91:  pop    %edi
0875d7f2 +0x92:  pop    %ebp
0875d7f3 +0x93:  ret
0875d7f4 +0x94:  lea    0x0(%esi,%eiz,1),%esi
0875d7f8 +0x98:  mov    0xc(%ebp),%edi
0875d7fb +0x9b:  sub    -0x1c(%ebp),%edi
0875d7fe +0x9e:  add    $0x2c,%esp
0875d801 +0xa1:  pop    %ebx
0875d802 +0xa2:  pop    %esi
0875d803 +0xa3:  mov    %edi,%eax
0875d805 +0xa5:  pop    %edi
0875d806 +0xa6:  pop    %ebp
0875d807 +0xa7:  ret
0875d808 +0xa8:  mov    %ecx,%edi
0875d80a +0xaa:  add    $0x2c,%esp
0875d80d +0xad:  mov    %edi,%eax
0875d80f +0xaf:  pop    %ebx
0875d810 +0xb0:  pop    %esi
0875d811 +0xb1:  pop    %edi
0875d812 +0xb2:  pop    %ebp
0875d813 +0xb3:  ret
0875d814 +0xb4:  lea    0x0(%esi),%esi
0875d81a +0xba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::InverseMod @ 0x875d760

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::InverseMod(unsigned int) const */

int __thiscall TaoCrypt::Integer::InverseMod(Integer *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_20;
  
  uVar3 = Modulo(this,param_1);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      return 1;
    }
    local_20 = param_1 / uVar3;
    uVar6 = param_1 % uVar3;
    if (uVar6 != 0) {
      if (uVar6 != 1) {
        iVar5 = 1;
        do {
          uVar4 = uVar3 / uVar6;
          uVar2 = (ulonglong)uVar3 % (ulonglong)uVar6;
          uVar3 = (uint)uVar2;
          if (uVar3 == 0) {
            return 0;
          }
          iVar5 = iVar5 + uVar4 * local_20;
          if (uVar3 == 1) {
            return iVar5;
          }
          uVar1 = (ulonglong)uVar6;
          uVar6 = (uint)(uVar1 % uVar2);
          if (uVar6 == 0) {
            return 0;
          }
          local_20 = local_20 + (int)(uVar1 / uVar2) * iVar5;
        } while (uVar6 != 1);
      }
      return param_1 - local_20;
    }
  }
  return 0;
}
```
