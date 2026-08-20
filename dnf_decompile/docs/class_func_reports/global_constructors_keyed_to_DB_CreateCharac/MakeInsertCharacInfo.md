# MakeInsertCharacInfo

`_GLOBAL__I__ZN15DB_CreateCharac20MakeInsertCharacInfoEP5MySQLP17SIG_CREATE_CHARACPKc`

`global constructors keyed to DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DB_CreateCharac` | `0x080ec4ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec4ea  _GLOBAL__I__ZN15DB_CreateCharac20MakeInsertCharacInfoEP5MySQLP17SIG_CREATE_CHARACPKc
#           global constructors keyed to DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*)
# range [0x080ec4ea, 0x080ec507]
080ec4ea +0x00:  push   %ebp
080ec4eb +0x01:  mov    %esp,%ebp
080ec4ed +0x03:  sub    $0x18,%esp
080ec4f0 +0x06:  movl   $0xffff,0x4(%esp)
080ec4f8 +0x0e:  movl   $0x1,(%esp)
080ec4ff +0x15:  call   080ec4aa <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080ec504 +0x1a:  leave
080ec505 +0x1b:  ret
080ec506 +0x1c:  nop
080ec507 +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80ec4ea

/* DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*) */

void DB_CreateCharac::_GLOBAL__I_MakeInsertCharacInfo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
