# set_sha

`_ZN5yaSSL8Finished7set_shaEv`

`yaSSL::Finished::set_sha()`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x087471f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087471f0  _ZN5yaSSL8Finished7set_shaEv
#           yaSSL::Finished::set_sha()
# range [0x087471f0, 0x087471fc]
087471f0 +0x00:  push   %ebp
087471f1 +0x01:  mov    %esp,%ebp
087471f3 +0x03:  mov    0x8(%ebp),%eax
087471f6 +0x06:  pop    %ebp
087471f7 +0x07:  add    $0x18,%eax
087471fa +0x0a:  ret
087471fb +0x0b:  nop
087471fc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Finished::set_sha @ 0x87471f0

/* yaSSL::Finished::set_sha() */

Finished * __thiscall yaSSL::Finished::set_sha(Finished *this)

{
  return this + 0x18;
}
```
