# set_md5

`_ZN5yaSSL8Finished7set_md5Ev`

`yaSSL::Finished::set_md5()`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x087471e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087471e0  _ZN5yaSSL8Finished7set_md5Ev
#           yaSSL::Finished::set_md5()
# range [0x087471e0, 0x087471ec]
087471e0 +0x00:  push   %ebp
087471e1 +0x01:  mov    %esp,%ebp
087471e3 +0x03:  mov    0x8(%ebp),%eax
087471e6 +0x06:  pop    %ebp
087471e7 +0x07:  add    $0x8,%eax
087471ea +0x0a:  ret
087471eb +0x0b:  nop
087471ec +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Finished::set_md5 @ 0x87471e0

/* yaSSL::Finished::set_md5() */

Finished * __thiscall yaSSL::Finished::set_md5(Finished *this)

{
  return this + 8;
}
```
