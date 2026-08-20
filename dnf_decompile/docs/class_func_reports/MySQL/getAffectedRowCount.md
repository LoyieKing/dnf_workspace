# getAffectedRowCount

`_ZN5MySQL19getAffectedRowCountEv`

`MySQL::getAffectedRowCount()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4310  _ZN5MySQL19getAffectedRowCountEv
#           MySQL::getAffectedRowCount()
# range [0x083f4310, 0x083f4325]
083f4310 +0x00:  push   %ebp
083f4311 +0x01:  mov    %esp,%ebp
083f4313 +0x03:  sub    $0x18,%esp
083f4316 +0x06:  mov    0x8(%ebp),%eax
083f4319 +0x09:  mov    0x4(%eax),%eax
083f431c +0x0c:  mov    %eax,(%esp)
083f431f +0x0f:  call   08739110 <mysql_affected_rows>
083f4324 +0x14:  leave
083f4325 +0x15:  ret
```

## 反编译 C

```c
// MySQL::getAffectedRowCount @ 0x83f4310

/* MySQL::getAffectedRowCount() */

void __thiscall MySQL::getAffectedRowCount(MySQL *this)

{
  mysql_affected_rows(*(undefined4 *)(this + 4));
  return;
}
```
