# ~MySQL

`_ZN5MySQLD1Ev`

`MySQL::~MySQL()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3aea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3aea  _ZN5MySQLD1Ev
#           MySQL::~MySQL()
# range [0x083f3aea, 0x083f3afd]
083f3aea +0x00:  push   %ebp
083f3aeb +0x01:  mov    %esp,%ebp
083f3aed +0x03:  sub    $0x18,%esp
083f3af0 +0x06:  mov    0x8(%ebp),%eax
083f3af3 +0x09:  mov    %eax,(%esp)
083f3af6 +0x0c:  call   083f3e74 <_ZN5MySQL5closeEv>  ; MySQL::close()
083f3afb +0x11:  leave
083f3afc +0x12:  ret
083f3afd +0x13:  nop
```

## 反编译 C

```c
// MySQL::~MySQL @ 0x83f3aea

/* MySQL::~MySQL() */

void __thiscall MySQL::~MySQL(MySQL *this)

{
  close(this);
  return;
}
```
