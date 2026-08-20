# getString

`_ZNK5yaSSL6States9getStringEv`

`yaSSL::States::getString() const`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874dee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dee0  _ZNK5yaSSL6States9getStringEv
#           yaSSL::States::getString() const
# range [0x0874dee0, 0x0874deec]
0874dee0 +0x00:  push   %ebp
0874dee1 +0x01:  mov    %esp,%ebp
0874dee3 +0x03:  mov    0x8(%ebp),%eax
0874dee6 +0x06:  pop    %ebp
0874dee7 +0x07:  add    $0x18,%eax
0874deea +0x0a:  ret
0874deeb +0x0b:  nop
0874deec +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::getString @ 0x874dee0

/* yaSSL::States::getString() const */

States * __thiscall yaSSL::States::getString(States *this)

{
  return this + 0x18;
}
```
