# Destroy

`_ZN19CerashopAddRestrict7Manager7DestroyEv`

`CerashopAddRestrict::Manager::Destroy()`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0e40  _ZN19CerashopAddRestrict7Manager7DestroyEv
#           CerashopAddRestrict::Manager::Destroy()
# range [0x080e0e40, 0x080e0e49]
080e0e40 +0x00:  push   %ebp
080e0e41 +0x01:  mov    %esp,%ebp
080e0e43 +0x03:  mov    $0x1,%eax
080e0e48 +0x08:  pop    %ebp
080e0e49 +0x09:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::Destroy @ 0x80e0e40

/* CerashopAddRestrict::Manager::Destroy() */

undefined4 CerashopAddRestrict::Manager::Destroy(void)

{
  return 1;
}
```
