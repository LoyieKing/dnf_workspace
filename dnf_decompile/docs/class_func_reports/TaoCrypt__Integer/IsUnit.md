# IsUnit

`_ZNK8TaoCrypt7Integer6IsUnitEv`

`TaoCrypt::Integer::IsUnit() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d710  _ZNK8TaoCrypt7Integer6IsUnitEv
#           TaoCrypt::Integer::IsUnit() const
# range [0x0875d710, 0x0875d75c]
0875d710 +0x00:  push   %ebp
0875d711 +0x01:  mov    %esp,%ebp
0875d713 +0x03:  sub    $0x18,%esp
0875d716 +0x06:  mov    %ebx,-0x8(%ebp)
0875d719 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d71e +0x0e:  add    $0xc0f47a,%ebx
0875d724 +0x14:  mov    %esi,-0x4(%ebp)
0875d727 +0x17:  mov    0x8(%ebp),%esi
0875d72a +0x1a:  mov    %esi,(%esp)
0875d72d +0x1d:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d732 +0x22:  mov    %eax,%edx
0875d734 +0x24:  xor    %eax,%eax
0875d736 +0x26:  cmp    $0x1,%edx
0875d739 +0x29:  je     0875d748 <+0x38>
0875d73b +0x2b:  mov    -0x8(%ebp),%ebx
0875d73e +0x2e:  mov    -0x4(%ebp),%esi
0875d741 +0x31:  mov    %ebp,%esp
0875d743 +0x33:  pop    %ebp
0875d744 +0x34:  ret
0875d745 +0x35:  lea    0x0(%esi),%esi
0875d748 +0x38:  mov    0x4(%esi),%eax
0875d74b +0x3b:  mov    -0x8(%ebp),%ebx
0875d74e +0x3e:  mov    -0x4(%ebp),%esi
0875d751 +0x41:  cmpl   $0x1,(%eax)
0875d754 +0x44:  sete   %al
0875d757 +0x47:  mov    %ebp,%esp
0875d759 +0x49:  pop    %ebp
0875d75a +0x4a:  ret
0875d75b +0x4b:  nop
0875d75c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::IsUnit @ 0x875d710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::IsUnit() const */

undefined4 __thiscall TaoCrypt::Integer::IsUnit(Integer *this)

{
  int iVar1;
  
  iVar1 = WordCount(this);
  if (iVar1 != 1) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int **)(this + 4) >> 8),**(int **)(this + 4) == 1);
}
```
