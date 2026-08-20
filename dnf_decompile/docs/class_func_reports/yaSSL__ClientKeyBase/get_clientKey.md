# get_clientKey

`_ZNK5yaSSL13ClientKeyBase13get_clientKeyEv`

`yaSSL::ClientKeyBase::get_clientKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyBase` | `0x08746f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746f10  _ZNK5yaSSL13ClientKeyBase13get_clientKeyEv
#           yaSSL::ClientKeyBase::get_clientKey() const
# range [0x08746f10, 0x08746f19]
08746f10 +0x00:  push   %ebp
08746f11 +0x01:  xor    %eax,%eax
08746f13 +0x03:  mov    %esp,%ebp
08746f15 +0x05:  pop    %ebp
08746f16 +0x06:  ret
08746f17 +0x07:  nop
08746f18 +0x08:  nop
08746f19 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyBase::get_clientKey @ 0x8746f10

/* yaSSL::ClientKeyBase::get_clientKey() const */

undefined4 yaSSL::ClientKeyBase::get_clientKey(void)

{
  return 0;
}
```
