# Swap

`_ZN8TaoCrypt7Integer4SwapERS0_`

`TaoCrypt::Integer::Swap(TaoCrypt::Integer&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d590  _ZN8TaoCrypt7Integer4SwapERS0_
#           TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
# range [0x0875d590, 0x0875d5be]
0875d590 +0x00:  push   %ebp
0875d591 +0x01:  mov    %esp,%ebp
0875d593 +0x03:  mov    0x8(%ebp),%edx
0875d596 +0x06:  mov    0xc(%ebp),%eax
0875d599 +0x09:  push   %esi
0875d59a +0x0a:  mov    (%edx),%ecx
0875d59c +0x0c:  mov    (%eax),%esi
0875d59e +0x0e:  mov    %esi,(%edx)
0875d5a0 +0x10:  mov    0x4(%eax),%esi
0875d5a3 +0x13:  mov    %ecx,(%eax)
0875d5a5 +0x15:  mov    0x4(%edx),%ecx
0875d5a8 +0x18:  mov    %esi,0x4(%edx)
0875d5ab +0x1b:  mov    0xc(%eax),%esi
0875d5ae +0x1e:  mov    %ecx,0x4(%eax)
0875d5b1 +0x21:  mov    0xc(%edx),%ecx
0875d5b4 +0x24:  mov    %esi,0xc(%edx)
0875d5b7 +0x27:  mov    %ecx,0xc(%eax)
0875d5ba +0x2a:  pop    %esi
0875d5bb +0x2b:  pop    %ebp
0875d5bc +0x2c:  ret
0875d5bd +0x2d:  nop
0875d5be +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::Swap @ 0x875d590

/* TaoCrypt::Integer::Swap(TaoCrypt::Integer&) */

void __thiscall TaoCrypt::Integer::Swap(Integer *this,Integer *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}
```
