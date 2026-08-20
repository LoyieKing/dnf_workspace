# IsConvertableToLong

`_ZNK8TaoCrypt7Integer19IsConvertableToLongEv`

`TaoCrypt::Integer::IsConvertableToLong() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875ec80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ec80  _ZNK8TaoCrypt7Integer19IsConvertableToLongEv
#           TaoCrypt::Integer::IsConvertableToLong() const
# range [0x0875ec80, 0x0875ecd9]
0875ec80 +0x00:  push   %ebp
0875ec81 +0x01:  mov    %esp,%ebp
0875ec83 +0x03:  sub    $0x18,%esp
0875ec86 +0x06:  mov    %ebx,-0x8(%ebp)
0875ec89 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ec8e +0x0e:  add    $0xc0df0a,%ebx
0875ec94 +0x14:  mov    %esi,-0x4(%ebp)
0875ec97 +0x17:  mov    0x8(%ebp),%esi
0875ec9a +0x1a:  mov    %esi,(%esp)
0875ec9d +0x1d:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0875eca2 +0x22:  mov    %eax,%edx
0875eca4 +0x24:  xor    %eax,%eax
0875eca6 +0x26:  cmp    $0x4,%edx
0875eca9 +0x29:  ja     0875ecbc <+0x3c>
0875ecab +0x2b:  mov    0xc(%esi),%edx
0875ecae +0x2e:  mov    0x4(%esi),%eax
0875ecb1 +0x31:  test   %edx,%edx
0875ecb3 +0x33:  mov    (%eax),%eax
0875ecb5 +0x35:  je     0875ecc8 <+0x48>
0875ecb7 +0x37:  neg    %eax
0875ecb9 +0x39:  shr    $0x1f,%eax
0875ecbc +0x3c:  mov    -0x8(%ebp),%ebx
0875ecbf +0x3f:  mov    -0x4(%ebp),%esi
0875ecc2 +0x42:  mov    %ebp,%esp
0875ecc4 +0x44:  pop    %ebp
0875ecc5 +0x45:  ret
0875ecc6 +0x46:  xchg   %ax,%ax
0875ecc8 +0x48:  not    %eax
0875ecca +0x4a:  mov    -0x8(%ebp),%ebx
0875eccd +0x4d:  mov    -0x4(%ebp),%esi
0875ecd0 +0x50:  shr    $0x1f,%eax
0875ecd3 +0x53:  mov    %ebp,%esp
0875ecd5 +0x55:  pop    %ebp
0875ecd6 +0x56:  ret
0875ecd7 +0x57:  mov    %esi,%esi
0875ecd9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::IsConvertableToLong @ 0x875ec80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::IsConvertableToLong() const */

uint __thiscall TaoCrypt::Integer::IsConvertableToLong(Integer *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ByteCount(this);
  uVar2 = 0;
  if (uVar1 < 5) {
    if (*(int *)(this + 0xc) == 0) {
      return ~**(uint **)(this + 4) >> 0x1f;
    }
    uVar2 = -**(uint **)(this + 4) >> 0x1f;
  }
  return uVar2;
}
```
