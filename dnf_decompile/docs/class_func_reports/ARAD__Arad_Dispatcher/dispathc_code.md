# dispathc_code

`_ZN4ARAD15Arad_Dispatcher13dispathc_codeEv`

`ARAD::Arad_Dispatcher::dispathc_code()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher` | `0x0818e898` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e898  _ZN4ARAD15Arad_Dispatcher13dispathc_codeEv
#           ARAD::Arad_Dispatcher::dispathc_code()
# range [0x0818e898, 0x0818e8a2]
0818e898 +0x00:  push   %ebp
0818e899 +0x01:  mov    %esp,%ebp
0818e89b +0x03:  mov    0x8(%ebp),%eax
0818e89e +0x06:  mov    0x4(%eax),%eax
0818e8a1 +0x09:  pop    %ebp
0818e8a2 +0x0a:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher::dispathc_code @ 0x818e898

/* ARAD::Arad_Dispatcher::dispathc_code() */

undefined4 __thiscall ARAD::Arad_Dispatcher::dispathc_code(Arad_Dispatcher *this)

{
  return *(undefined4 *)(this + 4);
}
```
