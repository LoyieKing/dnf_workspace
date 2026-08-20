# get_padSize

`_ZNK5yaSSL3RMD11get_padSizeEv`

`yaSSL::RMD::get_padSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08798520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798520  _ZNK5yaSSL3RMD11get_padSizeEv
#           yaSSL::RMD::get_padSize() const
# range [0x08798520, 0x0879852a]
08798520 +0x00:  push   %ebp
08798521 +0x01:  mov    $0x2c,%eax
08798526 +0x06:  mov    %esp,%ebp
08798528 +0x08:  pop    %ebp
08798529 +0x09:  ret
0879852a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::RMD::get_padSize @ 0x8798520

/* yaSSL::RMD::get_padSize() const */

undefined4 yaSSL::RMD::get_padSize(void)

{
  return 0x2c;
}
```
