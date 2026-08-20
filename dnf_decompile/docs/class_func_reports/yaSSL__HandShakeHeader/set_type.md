# set_type

`_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE`

`yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x08746a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a90  _ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE
#           yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
# range [0x08746a90, 0x08746a9e]
08746a90 +0x00:  push   %ebp
08746a91 +0x01:  mov    %esp,%ebp
08746a93 +0x03:  mov    0xc(%ebp),%edx
08746a96 +0x06:  mov    0x8(%ebp),%eax
08746a99 +0x09:  mov    %edx,0x4(%eax)
08746a9c +0x0c:  pop    %ebp
08746a9d +0x0d:  ret
08746a9e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::set_type @ 0x8746a90

/* yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType) */

void __thiscall yaSSL::HandShakeHeader::set_type(HandShakeHeader *this,undefined4 param_2)

{
  *(undefined4 *)(this + 4) = param_2;
  return;
}
```
