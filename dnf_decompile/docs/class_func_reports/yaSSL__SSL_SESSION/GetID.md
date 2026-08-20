# GetID

`_ZNK5yaSSL11SSL_SESSION5GetIDEv`

`yaSSL::SSL_SESSION::GetID() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874e320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e320  _ZNK5yaSSL11SSL_SESSION5GetIDEv
#           yaSSL::SSL_SESSION::GetID() const
# range [0x0874e320, 0x0874e329]
0874e320 +0x00:  push   %ebp
0874e321 +0x01:  mov    %esp,%ebp
0874e323 +0x03:  mov    0x8(%ebp),%eax
0874e326 +0x06:  pop    %ebp
0874e327 +0x07:  ret
0874e328 +0x08:  nop
0874e329 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::GetID @ 0x874e320

/* yaSSL::SSL_SESSION::GetID() const */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::GetID(SSL_SESSION *this)

{
  return this;
}
```
