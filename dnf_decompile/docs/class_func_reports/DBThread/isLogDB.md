# isLogDB

`_ZN8DBThread7isLogDBEv`

`DBThread::isLogDB()`

| 类 | 地址 |
|---|---|
| `DBThread` | `0x083ff77a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff77a  _ZN8DBThread7isLogDBEv
#           DBThread::isLogDB()
# range [0x083ff77a, 0x083ff785]
083ff77a +0x00:  push   %ebp
083ff77b +0x01:  mov    %esp,%ebp
083ff77d +0x03:  mov    0x8(%ebp),%eax
083ff780 +0x06:  movzbl 0xc(%eax),%eax
083ff784 +0x0a:  pop    %ebp
083ff785 +0x0b:  ret
```

## 反编译 C

```c
// DBThread::isLogDB @ 0x83ff77a

/* DBThread::isLogDB() */

DBThread __thiscall DBThread::isLogDB(DBThread *this)

{
  return this[0xc];
}
```
