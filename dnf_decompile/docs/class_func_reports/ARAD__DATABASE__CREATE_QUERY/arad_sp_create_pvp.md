# arad_sp_create_pvp

`_ZN4ARAD8DATABASE12CREATE_QUERY18arad_sp_create_pvpEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b5f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b5f4  _ZN4ARAD8DATABASE12CREATE_QUERY18arad_sp_create_pvpEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b5f4, 0x0818b637]
0818b5f4 +0x00:  push   %ebp
0818b5f5 +0x01:  mov    %esp,%ebp
0818b5f7 +0x03:  sub    $0x28,%esp
0818b5fa +0x06:  movl   $0x198,-0xc(%ebp)
0818b601 +0x0d:  mov    0xc(%ebp),%eax
0818b604 +0x10:  mov    0x5348(%eax),%eax
0818b60a +0x16:  mov    %eax,0x8(%esp)
0818b60e +0x1a:  movl   $"inSert into pvp_result (charac_no) values(%u)",0x4(%esp)
0818b616 +0x22:  mov    0x8(%ebp),%eax
0818b619 +0x25:  mov    %eax,(%esp)
0818b61c +0x28:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b621 +0x2d:  test   %eax,%eax
0818b623 +0x2f:  setne  %al
0818b626 +0x32:  test   %al,%al
0818b628 +0x34:  je     0818b631 <+0x3d>
0818b62a +0x36:  mov    $0xffffffff,%eax
0818b62f +0x3b:  jmp    0818b636 <+0x42>
0818b631 +0x3d:  mov    $0x0,%eax
0818b636 +0x42:  leave
0818b637 +0x43:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp @ 0x818b5f4

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,"inSert into pvp_result (charac_no) values(%u)",
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
