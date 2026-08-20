# ConvertToLong

`_ZNK8TaoCrypt7Integer13ConvertToLongEv`

`TaoCrypt::Integer::ConvertToLong() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d570  _ZNK8TaoCrypt7Integer13ConvertToLongEv
#           TaoCrypt::Integer::ConvertToLong() const
# range [0x0875d570, 0x0875d58a]
0875d570 +0x00:  push   %ebp
0875d571 +0x01:  mov    %esp,%ebp
0875d573 +0x03:  mov    0x8(%ebp),%edx
0875d576 +0x06:  pop    %ebp
0875d577 +0x07:  mov    0x4(%edx),%eax
0875d57a +0x0a:  mov    0xc(%edx),%edx
0875d57d +0x0d:  mov    (%eax),%eax
0875d57f +0x0f:  mov    %eax,%ecx
0875d581 +0x11:  neg    %ecx
0875d583 +0x13:  test   %edx,%edx
0875d585 +0x15:  cmovne %ecx,%eax
0875d588 +0x18:  ret
0875d589 +0x19:  nop
0875d58a +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::ConvertToLong @ 0x875d570

/* TaoCrypt::Integer::ConvertToLong() const */

int __thiscall TaoCrypt::Integer::ConvertToLong(Integer *this)

{
  int iVar1;
  
  iVar1 = **(int **)(this + 4);
  if (*(int *)(this + 0xc) != 0) {
    iVar1 = -**(int **)(this + 4);
  }
  return iVar1;
}
```
