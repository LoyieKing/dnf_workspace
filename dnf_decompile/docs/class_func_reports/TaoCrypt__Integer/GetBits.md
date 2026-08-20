# GetBits

`_ZNK8TaoCrypt7Integer7GetBitsEjj`

`TaoCrypt::Integer::GetBits(unsigned int, unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d0b0  _ZNK8TaoCrypt7Integer7GetBitsEjj
#           TaoCrypt::Integer::GetBits(unsigned int, unsigned int) const
# range [0x0875d0b0, 0x0875d0ff]
0875d0b0 +0x00:  push   %ebp
0875d0b1 +0x01:  mov    %esp,%ebp
0875d0b3 +0x03:  push   %edi
0875d0b4 +0x04:  xor    %edi,%edi
0875d0b6 +0x06:  push   %esi
0875d0b7 +0x07:  xor    %esi,%esi
0875d0b9 +0x09:  push   %ebx
0875d0ba +0x0a:  sub    $0x1c,%esp
0875d0bd +0x0d:  mov    0x10(%ebp),%eax
0875d0c0 +0x10:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d0c5 +0x15:  add    $0xc0fad3,%ebx
0875d0cb +0x1b:  test   %eax,%eax
0875d0cd +0x1d:  je     0875d0f6 <+0x46>
0875d0cf +0x1f:  nop
0875d0d0 +0x20:  mov    0xc(%ebp),%eax
0875d0d3 +0x23:  lea    (%edi,%eax,1),%eax
0875d0d6 +0x26:  mov    %eax,0x4(%esp)
0875d0da +0x2a:  mov    0x8(%ebp),%eax
0875d0dd +0x2d:  mov    %eax,(%esp)
0875d0e0 +0x30:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
0875d0e5 +0x35:  mov    %edi,%ecx
0875d0e7 +0x37:  add    $0x1,%edi
0875d0ea +0x3a:  movzbl %al,%eax
0875d0ed +0x3d:  shl    %cl,%eax
0875d0ef +0x3f:  or     %eax,%esi
0875d0f1 +0x41:  cmp    %edi,0x10(%ebp)
0875d0f4 +0x44:  ja     0875d0d0 <+0x20>
0875d0f6 +0x46:  add    $0x1c,%esp
0875d0f9 +0x49:  mov    %esi,%eax
0875d0fb +0x4b:  pop    %ebx
0875d0fc +0x4c:  pop    %esi
0875d0fd +0x4d:  pop    %edi
0875d0fe +0x4e:  pop    %ebp
0875d0ff +0x4f:  ret
```

## 反编译 C

```c
// TaoCrypt::Integer::GetBits @ 0x875d0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::GetBits(unsigned int, unsigned int) const */

uint __thiscall TaoCrypt::Integer::GetBits(Integer *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = GetBit(this,uVar3 + param_1);
      uVar4 = uVar3 + 1;
      uVar2 = uVar2 | (uVar1 & 0xff) << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
    } while (uVar4 < param_2);
  }
  return uVar2;
}
```
