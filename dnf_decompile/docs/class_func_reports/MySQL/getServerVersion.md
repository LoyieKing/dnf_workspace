# getServerVersion

`_ZN5MySQL16getServerVersionEv`

`MySQL::getServerVersion()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f460c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f460c  _ZN5MySQL16getServerVersionEv
#           MySQL::getServerVersion()
# range [0x083f460c, 0x083f4621]
083f460c +0x00:  push   %ebp
083f460d +0x01:  mov    %esp,%ebp
083f460f +0x03:  sub    $0x18,%esp
083f4612 +0x06:  mov    0x8(%ebp),%eax
083f4615 +0x09:  mov    0x4(%eax),%eax
083f4618 +0x0c:  mov    %eax,(%esp)
083f461b +0x0f:  call   08739050 <mysql_get_server_info>
083f4620 +0x14:  leave
083f4621 +0x15:  ret
```

## 反编译 C

```c
// MySQL::getServerVersion @ 0x83f460c

/* MySQL::getServerVersion() */

void __thiscall MySQL::getServerVersion(MySQL *this)

{
  mysql_get_server_info(*(undefined4 *)(this + 4));
  return;
}
```
