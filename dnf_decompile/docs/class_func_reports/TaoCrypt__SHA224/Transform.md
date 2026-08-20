# Transform

`_ZN8TaoCrypt6SHA2249TransformEv`

`TaoCrypt::SHA224::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA224` | `0x0876e350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876e350  _ZN8TaoCrypt6SHA2249TransformEv
#           TaoCrypt::SHA224::Transform()
# range [0x0876e350, 0x0876e369]
0876e350 +0x00:  push   %ebp
0876e351 +0x01:  mov    %esp,%ebp
0876e353 +0x03:  mov    0x8(%ebp),%eax
0876e356 +0x06:  pop    %ebp
0876e357 +0x07:  lea    0x30(%eax),%edx
0876e35a +0x0a:  add    $0x10,%eax
0876e35d +0x0d:  jmp    0876d4a0 <_ZN8TaoCryptL12Transform256EPjS0_>  ; TaoCrypt::Transform256(unsigned int*, unsigned int*)
0876e362 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0876e369 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SHA224::Transform @ 0x876e350

/* TaoCrypt::SHA224::Transform() */

void __thiscall TaoCrypt::SHA224::Transform(SHA224 *this)

{
  Transform256((uint *)(this + 0x10),(uint *)(this + 0x30));
  return;
}
```
