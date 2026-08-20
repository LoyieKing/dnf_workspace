# getClientVersion

`_ZN5MySQL16getClientVersionEv`

`MySQL::getClientVersion()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4622` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4622  _ZN5MySQL16getClientVersionEv
#           MySQL::getClientVersion()
# range [0x083f4622, 0x083f462f]
083f4622 +0x00:  push   %ebp
083f4623 +0x01:  mov    %esp,%ebp
083f4625 +0x03:  sub    $0x8,%esp
083f4628 +0x06:  call   08739080 <mysql_get_client_info>
083f462d +0x0b:  leave
083f462e +0x0c:  ret
083f462f +0x0d:  nop
```

## 反编译 C

```c
// MySQL::getClientVersion @ 0x83f4622

/* MySQL::getClientVersion() */

void MySQL::getClientVersion(void)

{
  mysql_get_client_info();
  return;
}
```
