# arad_sp_create_charac_stat

`_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_create_charac_statEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b26d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b26d  _ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_create_charac_statEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b26d, 0x0818b2b6]
0818b26d +0x00:  push   %ebp
0818b26e +0x01:  mov    %esp,%ebp
0818b270 +0x03:  sub    $0x18,%esp
0818b273 +0x06:  mov    0xc(%ebp),%eax
0818b276 +0x09:  mov    0x5348(%eax),%eax
0818b27c +0x0f:  mov    %eax,0x8(%esp)
0818b280 +0x13:  movl   $"inSert into charac_stat  (charac_no,HP, forbidden_to_play, forbidden_due_to)  values(%d,100,0,0) ",0x4(%esp)
0818b288 +0x1b:  mov    0x8(%ebp),%eax
0818b28b +0x1e:  mov    %eax,(%esp)
0818b28e +0x21:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b293 +0x26:  test   %eax,%eax
0818b295 +0x28:  setne  %al
0818b298 +0x2b:  test   %al,%al
0818b29a +0x2d:  je     0818b2b0 <+0x43>
0818b29c +0x2f:  mov    0xc(%ebp),%eax
0818b29f +0x32:  movl   $0x2,0x5344(%eax)
0818b2a9 +0x3c:  mov    $0xffffffff,%eax
0818b2ae +0x41:  jmp    0818b2b5 <+0x48>
0818b2b0 +0x43:  mov    $0x0,%eax
0818b2b5 +0x48:  leave
0818b2b6 +0x49:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat @ 0x818b26d

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        "inSert into charac_stat  (charac_no,HP, forbidden_to_play, forbidden_due_to)  values(%d,100,0,0) "
                        ,*(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x5344) = 2;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
