# get_serverKey

`_ZNK5yaSSL13ServerKeyBase13get_serverKeyEv`

`yaSSL::ServerKeyBase::get_serverKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyBase` | `0x08746e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e60  _ZNK5yaSSL13ServerKeyBase13get_serverKeyEv
#           yaSSL::ServerKeyBase::get_serverKey() const
# range [0x08746e60, 0x08746e69]
08746e60 +0x00:  push   %ebp
08746e61 +0x01:  xor    %eax,%eax
08746e63 +0x03:  mov    %esp,%ebp
08746e65 +0x05:  pop    %ebp
08746e66 +0x06:  ret
08746e67 +0x07:  nop
08746e68 +0x08:  nop
08746e69 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyBase::get_serverKey @ 0x8746e60

/* yaSSL::ServerKeyBase::get_serverKey() const */

undefined4 yaSSL::ServerKeyBase::get_serverKey(void)

{
  return 0;
}
```
