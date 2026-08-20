# getLuckPointDeductionRate

`_ZN21ServerParameterScript25getLuckPointDeductionRateEii`

`ServerParameterScript::getLuckPointDeductionRate(int, int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c4fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c4fe  _ZN21ServerParameterScript25getLuckPointDeductionRateEii
#           ServerParameterScript::getLuckPointDeductionRate(int, int)
# range [0x08a8c4fe, 0x08a8c5f1]
08a8c4fe +0x00:  push   %ebp
08a8c4ff +0x01:  mov    %esp,%ebp
08a8c501 +0x03:  push   %ebx
08a8c502 +0x04:  sub    $0x24,%esp
08a8c505 +0x07:  movl   $0x0,-0x10(%ebp)
08a8c50c +0x0e:  jmp    08a8c5ca <+0xcc>
08a8c511 +0x13:  mov    0x8(%ebp),%eax
08a8c514 +0x16:  lea    0x54(%eax),%edx
08a8c517 +0x19:  mov    -0x10(%ebp),%eax
08a8c51a +0x1c:  mov    %eax,0x4(%esp)
08a8c51e +0x20:  mov    %edx,(%esp)
08a8c521 +0x23:  call   08a8daca <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf41>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf41
08a8c526 +0x28:  mov    (%eax),%eax
08a8c528 +0x2a:  cmp    0xc(%ebp),%eax
08a8c52b +0x2d:  setge  %al
08a8c52e +0x30:  test   %al,%al
08a8c530 +0x32:  je     08a8c5c6 <+0xc8>
08a8c536 +0x38:  movl   $0x0,-0xc(%ebp)
08a8c53d +0x3f:  jmp    08a8c58f <+0x91>
08a8c53f +0x41:  mov    -0xc(%ebp),%eax
08a8c542 +0x44:  mov    0x8(%ebp),%edx
08a8c545 +0x47:  add    $0x6c,%edx
08a8c548 +0x4a:  mov    %eax,0x4(%esp)
08a8c54c +0x4e:  mov    %edx,(%esp)
08a8c54f +0x51:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08a8c554 +0x56:  mov    (%eax),%eax
08a8c556 +0x58:  cmp    0x10(%ebp),%eax
08a8c559 +0x5b:  setle  %al
08a8c55c +0x5e:  test   %al,%al
08a8c55e +0x60:  je     08a8c58b <+0x8d>
08a8c560 +0x62:  mov    -0xc(%ebp),%ebx
08a8c563 +0x65:  mov    0x8(%ebp),%eax
08a8c566 +0x68:  lea    0x54(%eax),%edx
08a8c569 +0x6b:  mov    -0x10(%ebp),%eax
08a8c56c +0x6e:  mov    %eax,0x4(%esp)
08a8c570 +0x72:  mov    %edx,(%esp)
08a8c573 +0x75:  call   08a8daca <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf41>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf41
08a8c578 +0x7a:  add    $0x4,%eax
08a8c57b +0x7d:  mov    %ebx,0x4(%esp)
08a8c57f +0x81:  mov    %eax,(%esp)
08a8c582 +0x84:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08a8c587 +0x89:  mov    (%eax),%eax
08a8c589 +0x8b:  jmp    08a8c5eb <+0xed>
08a8c58b +0x8d:  addl   $0x1,-0xc(%ebp)
08a8c58f +0x91:  cmpl   $0x2,-0xc(%ebp)
08a8c593 +0x95:  setle  %al
08a8c596 +0x98:  test   %al,%al
08a8c598 +0x9a:  jne    08a8c53f <+0x41>
08a8c59a +0x9c:  mov    0x8(%ebp),%eax
08a8c59d +0x9f:  lea    0x54(%eax),%edx
08a8c5a0 +0xa2:  mov    -0x10(%ebp),%eax
08a8c5a3 +0xa5:  mov    %eax,0x4(%esp)
08a8c5a7 +0xa9:  mov    %edx,(%esp)
08a8c5aa +0xac:  call   08a8daca <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf41>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf41
08a8c5af +0xb1:  add    $0x4,%eax
08a8c5b2 +0xb4:  movl   $0x3,0x4(%esp)
08a8c5ba +0xbc:  mov    %eax,(%esp)
08a8c5bd +0xbf:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08a8c5c2 +0xc4:  mov    (%eax),%eax
08a8c5c4 +0xc6:  jmp    08a8c5eb <+0xed>
08a8c5c6 +0xc8:  addl   $0x1,-0x10(%ebp)
08a8c5ca +0xcc:  mov    0x8(%ebp),%eax
08a8c5cd +0xcf:  add    $0x54,%eax
08a8c5d0 +0xd2:  mov    %eax,(%esp)
08a8c5d3 +0xd5:  call   08a8daae <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0xf25>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0xf25
08a8c5d8 +0xda:  cmp    -0x10(%ebp),%eax
08a8c5db +0xdd:  seta   %al
08a8c5de +0xe0:  test   %al,%al
08a8c5e0 +0xe2:  jne    08a8c511 <+0x13>
08a8c5e6 +0xe8:  mov    $0x0,%eax
08a8c5eb +0xed:  add    $0x24,%esp
08a8c5ee +0xf0:  pop    %ebx
08a8c5ef +0xf1:  pop    %ebp
08a8c5f0 +0xf2:  ret
08a8c5f1 +0xf3:  nop
```

## 反编译 C

```c
// ServerParameterScript::getLuckPointDeductionRate @ 0x8a8c4fe

/* ServerParameterScript::getLuckPointDeductionRate(int, int) */

undefined4 __thiscall
ServerParameterScript::getLuckPointDeductionRate
          (ServerParameterScript *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  while( true ) {
    uVar4 = std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::size
                      ((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>> *)
                       (this + 0x54));
    if (uVar4 <= local_14) {
      return 0;
    }
    piVar1 = (int *)std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::
                    operator[]((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>
                                *)(this + 0x54),local_14);
    if (param_1 <= *piVar1) break;
    local_14 = local_14 + 1;
  }
  local_10 = 0;
  while( true ) {
    if (2 < (int)local_10) {
      iVar2 = std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::operator[]
                        ((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>> *)
                         (this + 0x54),local_14);
      puVar3 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)(iVar2 + 4),3);
      return *puVar3;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(this + 0x6c),local_10);
    if (*piVar1 <= param_2) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>>::operator[]
                    ((vector<stLuckPointDeduction_t,std::allocator<stLuckPointDeduction_t>> *)
                     (this + 0x54),local_14);
  puVar3 = (undefined4 *)
           std::vector<int,std::allocator<int>>::operator[]
                     ((vector<int,std::allocator<int>> *)(iVar2 + 4),local_10);
  return *puVar3;
}
```
