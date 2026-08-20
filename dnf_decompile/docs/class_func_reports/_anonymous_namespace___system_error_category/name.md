# name

`_ZNK12_GLOBAL__N_121system_error_category4nameEv`

`(anonymous namespace)::system_error_category::name() const`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)::system_error_category` | `0x086df550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df550  _ZNK12_GLOBAL__N_121system_error_category4nameEv
#           (anonymous namespace)::system_error_category::name() const
# range [0x086df550, 0x086df55f]
086df550 +0x00:  push   %ebp
086df551 +0x01:  mov    $"system",%eax
086df556 +0x06:  mov    %esp,%ebp
086df558 +0x08:  pop    %ebp
086df559 +0x09:  ret
086df55a +0x0a:  nop
086df55b +0x0b:  nop
086df55c +0x0c:  nop
086df55d +0x0d:  nop
086df55e +0x0e:  nop
086df55f +0x0f:  nop
```

## 反编译 C

```c
// name @ 0x86df550

/* (anonymous namespace)::system_error_category::name() const */

char * (anonymous_namespace)::system_error_category::name(void)

{
  return "system";
}
```
