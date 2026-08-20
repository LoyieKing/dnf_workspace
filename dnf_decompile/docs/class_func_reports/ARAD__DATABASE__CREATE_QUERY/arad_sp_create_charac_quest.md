# arad_sp_create_charac_quest

`_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_charac_questEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b68c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b68c  _ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_charac_questEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b68c, 0x0818b6c8]
0818b68c +0x00:  push   %ebp
0818b68d +0x01:  mov    %esp,%ebp
0818b68f +0x03:  sub    $0x18,%esp
0818b692 +0x06:  mov    0xc(%ebp),%eax
0818b695 +0x09:  mov    0x5348(%eax),%eax
0818b69b +0x0f:  mov    %eax,0x8(%esp)
0818b69f +0x13:  movl   $"inSert into charac_quest(charac_no,quest_10,quest_15,quest_20,quest_30,quest_40,quest_50, quest_60,quest_70,quest_etc,play_1,play_1_trigger,play_2,play_2_trigger,play_3,play_3_trigger,play_4,play_4_trigger,play_5,play_5_trigger,play_6,play_6_trigger,play_7,play_7_trigger,play_8,play_8_trigger,play_9,play_9_trigger,play_10,play_10_trigger) values(%d,'','','','','','','','','',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)",0x4(%esp)
0818b6a7 +0x1b:  mov    0x8(%ebp),%eax
0818b6aa +0x1e:  mov    %eax,(%esp)
0818b6ad +0x21:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b6b2 +0x26:  test   %eax,%eax
0818b6b4 +0x28:  setne  %al
0818b6b7 +0x2b:  test   %al,%al
0818b6b9 +0x2d:  je     0818b6c2 <+0x36>
0818b6bb +0x2f:  mov    $0xffffffff,%eax
0818b6c0 +0x34:  jmp    0818b6c7 <+0x3b>
0818b6c2 +0x36:  mov    $0x0,%eax
0818b6c7 +0x3b:  leave
0818b6c8 +0x3c:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest @ 0x818b68c

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        "inSert into charac_quest(charac_no,quest_10,quest_15,quest_20,quest_30,quest_40,quest_50, quest_60,quest_70,quest_etc,play_1,play_1_trigger,play_2,play_2_trigger,play_3,play_3_trigger,play_4,play_4_trigger,play_5,play_5_trigger,play_6,play_6_trigger,play_7,play_7_trigger,play_8,play_8_trigger,play_9,play_9_trigger,play_10,play_10_trigger) values(%d,\'\',\'\',\'\',\'\',\'\',\'\',\'\',\'\',\'\',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)"
                        ,*(undefined4 *)(param_2 + 0x5348));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
