# get_length

`_ZNK5yaSSL13ServerKeyBase10get_lengthEv`

`yaSSL::ServerKeyBase::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyBase` | `0x08746e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e50  _ZNK5yaSSL13ServerKeyBase10get_lengthEv
#           yaSSL::ServerKeyBase::get_length() const
# range [0x08746e50, 0x08746e59]
08746e50 +0x00:  push   %ebp
08746e51 +0x01:  xor    %eax,%eax
08746e53 +0x03:  mov    %esp,%ebp
08746e55 +0x05:  pop    %ebp
08746e56 +0x06:  ret
08746e57 +0x07:  nop
08746e58 +0x08:  nop
08746e59 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyBase::get_length @ 0x8746e50

/* yaSSL::ServerKeyBase::get_length() const */

undefined4 yaSSL::ServerKeyBase::get_length(void)

{
  return 0;
}
```
