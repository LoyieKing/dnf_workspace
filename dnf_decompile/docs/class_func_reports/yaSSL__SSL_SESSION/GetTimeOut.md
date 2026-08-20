# GetTimeOut

`_ZNK5yaSSL11SSL_SESSION10GetTimeOutEv`

`yaSSL::SSL_SESSION::GetTimeOut() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874e370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e370  _ZNK5yaSSL11SSL_SESSION10GetTimeOutEv
#           yaSSL::SSL_SESSION::GetTimeOut() const
# range [0x0874e370, 0x0874e37c]
0874e370 +0x00:  push   %ebp
0874e371 +0x01:  mov    %esp,%ebp
0874e373 +0x03:  mov    0x8(%ebp),%eax
0874e376 +0x06:  pop    %ebp
0874e377 +0x07:  mov    0x58(%eax),%eax
0874e37a +0x0a:  ret
0874e37b +0x0b:  nop
0874e37c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::GetTimeOut @ 0x874e370

/* yaSSL::SSL_SESSION::GetTimeOut() const */

undefined4 __thiscall yaSSL::SSL_SESSION::GetTimeOut(SSL_SESSION *this)

{
  return *(undefined4 *)(this + 0x58);
}
```
