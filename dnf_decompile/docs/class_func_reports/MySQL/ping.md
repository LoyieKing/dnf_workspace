# ping

`_ZN5MySQL4pingEv`

`MySQL::ping()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4514` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4514  _ZN5MySQL4pingEv
#           MySQL::ping()
# range [0x083f4514, 0x083f4529]
083f4514 +0x00:  push   %ebp
083f4515 +0x01:  mov    %esp,%ebp
083f4517 +0x03:  sub    $0x18,%esp
083f451a +0x06:  mov    0x8(%ebp),%eax
083f451d +0x09:  mov    0x4(%eax),%eax
083f4520 +0x0c:  mov    %eax,(%esp)
083f4523 +0x0f:  call   08738ff0 <mysql_ping>
083f4528 +0x14:  leave
083f4529 +0x15:  ret
```

## 反编译 C

```c
// MySQL::ping @ 0x83f4514

/* MySQL::ping() */

void __thiscall MySQL::ping(MySQL *this)

{
  mysql_ping(*(undefined4 *)(this + 4));
  return;
}
```
