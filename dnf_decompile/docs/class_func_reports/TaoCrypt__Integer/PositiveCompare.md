# PositiveCompare

`_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_`

`TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d170  _ZNK8TaoCrypt7Integer15PositiveCompareERKS0_
#           TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const
# range [0x0875d170, 0x0875d21a]
0875d170 +0x00:  push   %ebp
0875d171 +0x01:  mov    %esp,%ebp
0875d173 +0x03:  sub    $0x28,%esp
0875d176 +0x06:  mov    %ebx,-0xc(%ebp)
0875d179 +0x09:  mov    0x8(%ebp),%eax
0875d17c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d181 +0x11:  add    $0xc0fa17,%ebx
0875d187 +0x17:  mov    %esi,-0x8(%ebp)
0875d18a +0x1a:  mov    %edi,-0x4(%ebp)
0875d18d +0x1d:  mov    0xc(%ebp),%edi
0875d190 +0x20:  mov    %eax,(%esp)
0875d193 +0x23:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d198 +0x28:  mov    %edi,(%esp)
0875d19b +0x2b:  mov    %eax,%esi
0875d19d +0x2d:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d1a2 +0x32:  cmp    %eax,%esi
0875d1a4 +0x34:  je     0875d1d8 <+0x68>
0875d1a6 +0x36:  ja     0875d1c0 <+0x50>
0875d1a8 +0x38:  mov    $0xffffffff,%eax
0875d1ad +0x3d:  mov    -0xc(%ebp),%ebx
0875d1b0 +0x40:  mov    -0x8(%ebp),%esi
0875d1b3 +0x43:  mov    -0x4(%ebp),%edi
0875d1b6 +0x46:  mov    %ebp,%esp
0875d1b8 +0x48:  pop    %ebp
0875d1b9 +0x49:  ret
0875d1ba +0x4a:  lea    0x0(%esi),%esi
0875d1c0 +0x50:  mov    -0xc(%ebp),%ebx
0875d1c3 +0x53:  mov    $0x1,%eax
0875d1c8 +0x58:  mov    -0x8(%ebp),%esi
0875d1cb +0x5b:  mov    -0x4(%ebp),%edi
0875d1ce +0x5e:  mov    %ebp,%esp
0875d1d0 +0x60:  pop    %ebp
0875d1d1 +0x61:  ret
0875d1d2 +0x62:  lea    0x0(%esi),%esi
0875d1d8 +0x68:  mov    0x8(%ebp),%ecx
0875d1db +0x6b:  lea    -0x4(,%esi,4),%eax
0875d1e2 +0x72:  mov    %eax,%edx
0875d1e4 +0x74:  add    0x4(%edi),%eax
0875d1e7 +0x77:  add    0x4(%ecx),%edx
0875d1ea +0x7a:  lea    0x0(%esi),%esi
0875d1f0 +0x80:  test   %esi,%esi
0875d1f2 +0x82:  je     0875d210 <+0xa0>
0875d1f4 +0x84:  mov    (%edx),%edi
0875d1f6 +0x86:  sub    $0x1,%esi
0875d1f9 +0x89:  mov    (%eax),%ecx
0875d1fb +0x8b:  cmp    %ecx,%edi
0875d1fd +0x8d:  ja     0875d1c0 <+0x50>
0875d1ff +0x8f:  sub    $0x4,%edx
0875d202 +0x92:  sub    $0x4,%eax
0875d205 +0x95:  cmp    %ecx,%edi
0875d207 +0x97:  jae    0875d1f0 <+0x80>
0875d209 +0x99:  jmp    0875d1a8 <+0x38>
0875d20b +0x9b:  nop
0875d20c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
0875d210 +0xa0:  xor    %eax,%eax
0875d212 +0xa2:  jmp    0875d1ad <+0x3d>
0875d214 +0xa4:  lea    0x0(%esi),%esi
0875d21a +0xaa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::PositiveCompare @ 0x875d170

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::PositiveCompare(TaoCrypt::Integer const&) const */

undefined4 __thiscall TaoCrypt::Integer::PositiveCompare(Integer *this,Integer *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = WordCount(this);
  uVar4 = WordCount(param_1);
  if (uVar3 == uVar4) {
    iVar1 = uVar3 * 4 + -4;
    puVar5 = (uint *)(iVar1 + *(int *)(param_1 + 4));
    puVar6 = (uint *)(iVar1 + *(int *)(this + 4));
    do {
      if (uVar3 == 0) {
        return 0;
      }
      uVar4 = *puVar6;
      uVar3 = uVar3 - 1;
      uVar2 = *puVar5;
      if (uVar2 < uVar4) {
        return 1;
      }
      puVar6 = puVar6 + -1;
      puVar5 = puVar5 + -1;
    } while (uVar2 <= uVar4);
  }
  else if (uVar4 < uVar3) {
    return 1;
  }
  return 0xffffffff;
}
```
