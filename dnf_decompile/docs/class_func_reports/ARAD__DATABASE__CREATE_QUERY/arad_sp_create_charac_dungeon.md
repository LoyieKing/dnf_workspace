# arad_sp_create_charac_dungeon

`_ZN4ARAD8DATABASE12CREATE_QUERY29arad_sp_create_charac_dungeonEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b642` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b642  _ZN4ARAD8DATABASE12CREATE_QUERY29arad_sp_create_charac_dungeonEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b642, 0x0818b68b]
0818b642 +0x00:  push   %ebp
0818b643 +0x01:  mov    %esp,%ebp
0818b645 +0x03:  sub    $0x28,%esp
0818b648 +0x06:  movl   $0x0,-0xc(%ebp)
0818b64f +0x0d:  mov    0xc(%ebp),%eax
0818b652 +0x10:  mov    0x5348(%eax),%eax
0818b658 +0x16:  mov    %eax,-0xc(%ebp)
0818b65b +0x19:  mov    -0xc(%ebp),%eax
0818b65e +0x1c:  mov    %eax,0x8(%esp)
0818b662 +0x20:  movl   $"inSert into charac_dungeon(charac_no, dungeon) values(%d, '')",0x4(%esp)
0818b66a +0x28:  mov    0x8(%ebp),%eax
0818b66d +0x2b:  mov    %eax,(%esp)
0818b670 +0x2e:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b675 +0x33:  test   %eax,%eax
0818b677 +0x35:  setne  %al
0818b67a +0x38:  test   %al,%al
0818b67c +0x3a:  je     0818b685 <+0x43>
0818b67e +0x3c:  mov    $0xffffffff,%eax
0818b683 +0x41:  jmp    0818b68a <+0x48>
0818b685 +0x43:  mov    $0x0,%eax
0818b68a +0x48:  leave
0818b68b +0x49:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon @ 0x818b642

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,"inSert into charac_dungeon(charac_no, dungeon) values(%d, \'\')",
                        *(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
