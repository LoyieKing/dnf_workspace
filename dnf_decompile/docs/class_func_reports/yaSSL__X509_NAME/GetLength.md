# GetLength

`_ZNK5yaSSL9X509_NAME9GetLengthEv`

`yaSSL::X509_NAME::GetLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::X509_NAME` | `0x0874eff0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874eff0  _ZNK5yaSSL9X509_NAME9GetLengthEv
#           yaSSL::X509_NAME::GetLength() const
# range [0x0874eff0, 0x0874effc]
0874eff0 +0x00:  push   %ebp
0874eff1 +0x01:  mov    %esp,%ebp
0874eff3 +0x03:  mov    0x8(%ebp),%eax
0874eff6 +0x06:  pop    %ebp
0874eff7 +0x07:  mov    0x4(%eax),%eax
0874effa +0x0a:  ret
0874effb +0x0b:  nop
0874effc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::X509_NAME::GetLength @ 0x874eff0

/* yaSSL::X509_NAME::GetLength() const */

undefined4 __thiscall yaSSL::X509_NAME::GetLength(X509_NAME *this)

{
  return *(undefined4 *)(this + 4);
}
```
