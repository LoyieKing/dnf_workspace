# get_length

`_ZNK5yaSSL4Data10get_lengthEv`

`yaSSL::Data::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746ca0  _ZNK5yaSSL4Data10get_lengthEv
#           yaSSL::Data::get_length() const
# range [0x08746ca0, 0x08746cac]
08746ca0 +0x00:  push   %ebp
08746ca1 +0x01:  mov    %esp,%ebp
08746ca3 +0x03:  mov    0x8(%ebp),%eax
08746ca6 +0x06:  pop    %ebp
08746ca7 +0x07:  movzwl 0x4(%eax),%eax
08746cab +0x0b:  ret
08746cac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Data::get_length @ 0x8746ca0

/* yaSSL::Data::get_length() const */

undefined2 __thiscall yaSSL::Data::get_length(Data *this)

{
  return *(undefined2 *)(this + 4);
}
```
