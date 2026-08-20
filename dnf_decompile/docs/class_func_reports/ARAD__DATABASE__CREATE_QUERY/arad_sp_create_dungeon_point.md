# arad_sp_create_dungeon_point

`_ZN4ARAD8DATABASE12CREATE_QUERY28arad_sp_create_dungeon_pointEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b638  _ZN4ARAD8DATABASE12CREATE_QUERY28arad_sp_create_dungeon_pointEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b638, 0x0818b641]
0818b638 +0x00:  push   %ebp
0818b639 +0x01:  mov    %esp,%ebp
0818b63b +0x03:  mov    $0xffffffff,%eax
0818b640 +0x08:  pop    %ebp
0818b641 +0x09:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point @ 0x818b638

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_dungeon_point
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  return 0xffffffff;
}
```
