# get_length

`_ZNK5yaSSL4x50910get_lengthEv`

`yaSSL::x509::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::x509` | `0x087973d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087973d0  _ZNK5yaSSL4x50910get_lengthEv
#           yaSSL::x509::get_length() const
# range [0x087973d0, 0x087973da]
087973d0 +0x00:  push   %ebp
087973d1 +0x01:  mov    %esp,%ebp
087973d3 +0x03:  mov    0x8(%ebp),%eax
087973d6 +0x06:  pop    %ebp
087973d7 +0x07:  mov    (%eax),%eax
087973d9 +0x09:  ret
087973da +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::x509::get_length @ 0x87973d0

/* yaSSL::x509::get_length() const */

undefined4 __thiscall yaSSL::x509::get_length(x509 *this)

{
  return *(undefined4 *)this;
}
```
