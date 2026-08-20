# close

`_ZN5MySQL5closeEv`

`MySQL::close()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3e74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3e74  _ZN5MySQL5closeEv
#           MySQL::close()
# range [0x083f3e74, 0x083f3e9d]
083f3e74 +0x00:  push   %ebp
083f3e75 +0x01:  mov    %esp,%ebp
083f3e77 +0x03:  sub    $0x18,%esp
083f3e7a +0x06:  mov    0x8(%ebp),%eax
083f3e7d +0x09:  mov    0x4(%eax),%eax
083f3e80 +0x0c:  test   %eax,%eax
083f3e82 +0x0e:  je     083f3e9c <+0x28>
083f3e84 +0x10:  mov    0x8(%ebp),%eax
083f3e87 +0x13:  mov    0x4(%eax),%eax
083f3e8a +0x16:  mov    %eax,(%esp)
083f3e8d +0x19:  call   08738510 <mysql_close>
083f3e92 +0x1e:  mov    0x8(%ebp),%eax
083f3e95 +0x21:  movl   $0x0,0x4(%eax)
083f3e9c +0x28:  leave
083f3e9d +0x29:  ret
```

## 反编译 C

```c
// MySQL::close @ 0x83f3e74

/* MySQL::close() */

void __thiscall MySQL::close(MySQL *this)

{
  if (*(int *)(this + 4) != 0) {
    mysql_close(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}
```
