# get_type

`_ZNK5yaSSL13HandShakeBase8get_typeEv`

`yaSSL::HandShakeBase::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeBase` | `0x08746ac0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ac0  _ZNK5yaSSL13HandShakeBase8get_typeEv
#           yaSSL::HandShakeBase::get_type() const
# range [0x08746ac0, 0x08746aca]
08746ac0 +0x00:  push   %ebp
08746ac1 +0x01:  mov    $0xffffffff,%eax
08746ac6 +0x06:  mov    %esp,%ebp
08746ac8 +0x08:  pop    %ebp
08746ac9 +0x09:  ret
08746aca +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeBase::get_type @ 0x8746ac0

/* yaSSL::HandShakeBase::get_type() const */

undefined4 yaSSL::HandShakeBase::get_type(void)

{
  return 0xffffffff;
}
```
