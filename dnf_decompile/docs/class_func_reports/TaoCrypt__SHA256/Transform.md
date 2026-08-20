# Transform

`_ZN8TaoCrypt6SHA2569TransformEv`

`TaoCrypt::SHA256::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA256` | `0x0876e370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876e370  _ZN8TaoCrypt6SHA2569TransformEv
#           TaoCrypt::SHA256::Transform()
# range [0x0876e370, 0x0876e389]
0876e370 +0x00:  push   %ebp
0876e371 +0x01:  mov    %esp,%ebp
0876e373 +0x03:  mov    0x8(%ebp),%eax
0876e376 +0x06:  pop    %ebp
0876e377 +0x07:  lea    0x30(%eax),%edx
0876e37a +0x0a:  add    $0x10,%eax
0876e37d +0x0d:  jmp    0876d4a0 <_ZN8TaoCryptL12Transform256EPjS0_>  ; TaoCrypt::Transform256(unsigned int*, unsigned int*)
0876e382 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0876e389 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SHA256::Transform @ 0x876e370

/* TaoCrypt::SHA256::Transform() */

void __thiscall TaoCrypt::SHA256::Transform(SHA256 *this)

{
  Transform256((uint *)(this + 0x10),(uint *)(this + 0x30));
  return;
}
```
