# GetBit

`_ZNK8TaoCrypt7Integer6GetBitEj`

`TaoCrypt::Integer::GetBit(unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d080  _ZNK8TaoCrypt7Integer6GetBitEj
#           TaoCrypt::Integer::GetBit(unsigned int) const
# range [0x0875d080, 0x0875d0a9]
0875d080 +0x00:  push   %ebp
0875d081 +0x01:  xor    %eax,%eax
0875d083 +0x03:  mov    %esp,%ebp
0875d085 +0x05:  mov    0xc(%ebp),%ecx
0875d088 +0x08:  push   %esi
0875d089 +0x09:  mov    0x8(%ebp),%esi
0875d08c +0x0c:  mov    %ecx,%edx
0875d08e +0x0e:  shr    $0x5,%edx
0875d091 +0x11:  cmp    (%esi),%edx
0875d093 +0x13:  jae    0875d0a3 <+0x23>
0875d095 +0x15:  mov    0x4(%esi),%eax
0875d098 +0x18:  and    $0x1f,%ecx
0875d09b +0x1b:  mov    (%eax,%edx,4),%eax
0875d09e +0x1e:  shr    %cl,%eax
0875d0a0 +0x20:  and    $0x1,%eax
0875d0a3 +0x23:  pop    %esi
0875d0a4 +0x24:  pop    %ebp
0875d0a5 +0x25:  ret
0875d0a6 +0x26:  lea    0x0(%esi),%esi
0875d0a9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::GetBit @ 0x875d080

/* TaoCrypt::Integer::GetBit(unsigned int) const */

uint __thiscall TaoCrypt::Integer::GetBit(Integer *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 >> 5 < *(uint *)this) {
    uVar1 = *(uint *)(*(int *)(this + 4) + (param_1 >> 5) * 4) >> ((byte)param_1 & 0x1f) & 1;
  }
  return uVar1;
}
```
