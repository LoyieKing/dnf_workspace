# GetSuite

`_ZNK5yaSSL11SSL_SESSION8GetSuiteEv`

`yaSSL::SSL_SESSION::GetSuite() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874e340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e340  _ZNK5yaSSL11SSL_SESSION8GetSuiteEv
#           yaSSL::SSL_SESSION::GetSuite() const
# range [0x0874e340, 0x0874e34c]
0874e340 +0x00:  push   %ebp
0874e341 +0x01:  mov    %esp,%ebp
0874e343 +0x03:  mov    0x8(%ebp),%eax
0874e346 +0x06:  pop    %ebp
0874e347 +0x07:  add    $0x50,%eax
0874e34a +0x0a:  ret
0874e34b +0x0b:  nop
0874e34c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::GetSuite @ 0x874e340

/* yaSSL::SSL_SESSION::GetSuite() const */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::GetSuite(SSL_SESSION *this)

{
  return this + 0x50;
}
```
