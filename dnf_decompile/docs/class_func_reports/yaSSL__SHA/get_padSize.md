# get_padSize

`_ZNK5yaSSL3SHA11get_padSizeEv`

`yaSSL::SHA::get_padSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x08798500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798500  _ZNK5yaSSL3SHA11get_padSizeEv
#           yaSSL::SHA::get_padSize() const
# range [0x08798500, 0x0879850a]
08798500 +0x00:  push   %ebp
08798501 +0x01:  mov    $0x28,%eax
08798506 +0x06:  mov    %esp,%ebp
08798508 +0x08:  pop    %ebp
08798509 +0x09:  ret
0879850a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SHA::get_padSize @ 0x8798500

/* yaSSL::SHA::get_padSize() const */

undefined4 yaSSL::SHA::get_padSize(void)

{
  return 0x28;
}
```
