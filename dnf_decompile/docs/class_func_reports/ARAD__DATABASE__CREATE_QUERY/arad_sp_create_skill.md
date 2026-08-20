# arad_sp_create_skill

`_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_skillEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b588` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b588  _ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_skillEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b588, 0x0818b5f3]
0818b588 +0x00:  push   %ebp
0818b589 +0x01:  mov    %esp,%ebp
0818b58b +0x03:  sub    $0x28,%esp
0818b58e +0x06:  movl   $0x198,-0xc(%ebp)
0818b595 +0x0d:  mov    -0xc(%ebp),%eax
0818b598 +0x10:  mov    0xc(%ebp),%edx
0818b59b +0x13:  add    $0x79,%edx
0818b59e +0x16:  mov    %eax,0xc(%esp)
0818b5a2 +0x1a:  mov    %edx,0x8(%esp)
0818b5a6 +0x1e:  movl   $0x0,0x4(%esp)
0818b5ae +0x26:  mov    0x8(%ebp),%eax
0818b5b1 +0x29:  mov    %eax,(%esp)
0818b5b4 +0x2c:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0818b5b9 +0x31:  mov    0xc(%ebp),%edx
0818b5bc +0x34:  mov    0x5348(%edx),%edx
0818b5c2 +0x3a:  mov    %eax,0xc(%esp)
0818b5c6 +0x3e:  mov    %edx,0x8(%esp)
0818b5ca +0x42:  movl   $"inSert into skill (charac_no, skill_slot) values(%u, '%s')",0x4(%esp)
0818b5d2 +0x4a:  mov    0x8(%ebp),%eax
0818b5d5 +0x4d:  mov    %eax,(%esp)
0818b5d8 +0x50:  call   083f46ae <_ZN5MySQL6insertEPKcz>  ; MySQL::insert(char const*, ...)
0818b5dd +0x55:  test   %eax,%eax
0818b5df +0x57:  setne  %al
0818b5e2 +0x5a:  test   %al,%al
0818b5e4 +0x5c:  je     0818b5ed <+0x65>
0818b5e6 +0x5e:  mov    $0xffffffff,%eax
0818b5eb +0x63:  jmp    0818b5f2 <+0x6a>
0818b5ed +0x65:  mov    $0x0,%eax
0818b5f2 +0x6a:  leave
0818b5f3 +0x6b:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill @ 0x818b588

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = MySQL::blob_to_str(param_1,0,param_2 + 0x79,0x198);
  iVar2 = MySQL::insert(param_1,"inSert into skill (charac_no, skill_slot) values(%u, \'%s\')",
                        *(undefined4 *)(param_2 + 0x5348),uVar1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
