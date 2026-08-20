# get_type

`_ZNK5yaSSL16ChangeCipherSpec8get_typeEv`

`yaSSL::ChangeCipherSpec::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ChangeCipherSpec` | `0x08746b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b70  _ZNK5yaSSL16ChangeCipherSpec8get_typeEv
#           yaSSL::ChangeCipherSpec::get_type() const
# range [0x08746b70, 0x08746b7a]
08746b70 +0x00:  push   %ebp
08746b71 +0x01:  mov    $0x14,%eax
08746b76 +0x06:  mov    %esp,%ebp
08746b78 +0x08:  pop    %ebp
08746b79 +0x09:  ret
08746b7a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ChangeCipherSpec::get_type @ 0x8746b70

/* yaSSL::ChangeCipherSpec::get_type() const */

undefined4 yaSSL::ChangeCipherSpec::get_type(void)

{
  return 0x14;
}
```
