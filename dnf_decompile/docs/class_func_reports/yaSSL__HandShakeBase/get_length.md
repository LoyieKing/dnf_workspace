# get_length

`_ZNK5yaSSL13HandShakeBase10get_lengthEv`

`yaSSL::HandShakeBase::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeBase` | `0x08746aa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746aa0  _ZNK5yaSSL13HandShakeBase10get_lengthEv
#           yaSSL::HandShakeBase::get_length() const
# range [0x08746aa0, 0x08746aac]
08746aa0 +0x00:  push   %ebp
08746aa1 +0x01:  mov    %esp,%ebp
08746aa3 +0x03:  mov    0x8(%ebp),%eax
08746aa6 +0x06:  pop    %ebp
08746aa7 +0x07:  mov    0x4(%eax),%eax
08746aaa +0x0a:  ret
08746aab +0x0b:  nop
08746aac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeBase::get_length @ 0x8746aa0

/* yaSSL::HandShakeBase::get_length() const */

undefined4 __thiscall yaSSL::HandShakeBase::get_length(HandShakeBase *this)

{
  return *(undefined4 *)(this + 4);
}
```
