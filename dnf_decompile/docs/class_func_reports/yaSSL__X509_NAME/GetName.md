# GetName

`_ZNK5yaSSL9X509_NAME7GetNameEv`

`yaSSL::X509_NAME::GetName() const`

| 类 | 地址 |
|---|---|
| `yaSSL::X509_NAME` | `0x0874efe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874efe0  _ZNK5yaSSL9X509_NAME7GetNameEv
#           yaSSL::X509_NAME::GetName() const
# range [0x0874efe0, 0x0874efea]
0874efe0 +0x00:  push   %ebp
0874efe1 +0x01:  mov    %esp,%ebp
0874efe3 +0x03:  mov    0x8(%ebp),%eax
0874efe6 +0x06:  pop    %ebp
0874efe7 +0x07:  mov    (%eax),%eax
0874efe9 +0x09:  ret
0874efea +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::X509_NAME::GetName @ 0x874efe0

/* yaSSL::X509_NAME::GetName() const */

undefined4 __thiscall yaSSL::X509_NAME::GetName(X509_NAME *this)

{
  return *(undefined4 *)this;
}
```
