# GetCA_List

`_ZNK5yaSSL7SSL_CTX10GetCA_ListEv`

`yaSSL::SSL_CTX::GetCA_List() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e460  _ZNK5yaSSL7SSL_CTX10GetCA_ListEv
#           yaSSL::SSL_CTX::GetCA_List() const
# range [0x0874e460, 0x0874e46c]
0874e460 +0x00:  push   %ebp
0874e461 +0x01:  mov    %esp,%ebp
0874e463 +0x03:  mov    0x8(%ebp),%eax
0874e466 +0x06:  pop    %ebp
0874e467 +0x07:  add    $0xc,%eax
0874e46a +0x0a:  ret
0874e46b +0x0b:  nop
0874e46c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetCA_List @ 0x874e460

/* yaSSL::SSL_CTX::GetCA_List() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetCA_List(SSL_CTX *this)

{
  return this + 0xc;
}
```
