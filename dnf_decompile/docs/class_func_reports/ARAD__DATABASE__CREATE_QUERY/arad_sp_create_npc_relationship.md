# arad_sp_create_npc_relationship

`_ZN4ARAD8DATABASE12CREATE_QUERY31arad_sp_create_npc_relationshipEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b6c9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b6c9  _ZN4ARAD8DATABASE12CREATE_QUERY31arad_sp_create_npc_relationshipEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b6c9, 0x0818b705]
0818b6c9 +0x00:  push   %ebp
0818b6ca +0x01:  mov    %esp,%ebp
0818b6cc +0x03:  sub    $0x18,%esp
0818b6cf +0x06:  mov    0xc(%ebp),%eax
0818b6d2 +0x09:  mov    0x5348(%eax),%eax
0818b6d8 +0x0f:  mov    %eax,0x8(%esp)
0818b6dc +0x13:  movl   $"inSert into charac_npc(charac_no,npc_cnt,npc_data) values(%d,0,'')",0x4(%esp)
0818b6e4 +0x1b:  mov    0x8(%ebp),%eax
0818b6e7 +0x1e:  mov    %eax,(%esp)
0818b6ea +0x21:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b6ef +0x26:  test   %eax,%eax
0818b6f1 +0x28:  setne  %al
0818b6f4 +0x2b:  test   %al,%al
0818b6f6 +0x2d:  je     0818b6ff <+0x36>
0818b6f8 +0x2f:  mov    $0xffffffff,%eax
0818b6fd +0x34:  jmp    0818b704 <+0x3b>
0818b6ff +0x36:  mov    $0x0,%eax
0818b704 +0x3b:  leave
0818b705 +0x3c:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship @ 0x818b6c9

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MySQL::insert(param_1,
                        "inSert into charac_npc(charac_no,npc_cnt,npc_data) values(%d,0,\'\')",
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
