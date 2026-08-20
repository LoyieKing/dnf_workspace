# GetByte

`_ZNK8TaoCrypt7Integer7GetByteEj`

`TaoCrypt::Integer::GetByte(unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d100  _ZNK8TaoCrypt7Integer7GetByteEj
#           TaoCrypt::Integer::GetByte(unsigned int) const
# range [0x0875d100, 0x0875d129]
0875d100 +0x00:  push   %ebp
0875d101 +0x01:  xor    %eax,%eax
0875d103 +0x03:  mov    %esp,%ebp
0875d105 +0x05:  mov    0xc(%ebp),%ecx
0875d108 +0x08:  push   %esi
0875d109 +0x09:  mov    0x8(%ebp),%esi
0875d10c +0x0c:  mov    %ecx,%edx
0875d10e +0x0e:  shr    $0x2,%edx
0875d111 +0x11:  cmp    (%esi),%edx
0875d113 +0x13:  jae    0875d123 <+0x23>
0875d115 +0x15:  mov    0x4(%esi),%esi
0875d118 +0x18:  and    $0x3,%ecx
0875d11b +0x1b:  shl    $0x3,%ecx
0875d11e +0x1e:  mov    (%esi,%edx,4),%eax
0875d121 +0x21:  shr    %cl,%eax
0875d123 +0x23:  pop    %esi
0875d124 +0x24:  pop    %ebp
0875d125 +0x25:  ret
0875d126 +0x26:  lea    0x0(%esi),%esi
0875d129 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::GetByte @ 0x875d100

/* TaoCrypt::Integer::GetByte(unsigned int) const */

uint __thiscall TaoCrypt::Integer::GetByte(Integer *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 >> 2 < *(uint *)this) {
    uVar1 = *(uint *)(*(int *)(this + 4) + (param_1 >> 2) * 4) >> (sbyte)((param_1 & 3) << 3);
  }
  return uVar1;
}
```
