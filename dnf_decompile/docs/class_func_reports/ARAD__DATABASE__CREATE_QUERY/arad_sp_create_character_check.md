# arad_sp_create_character_check

`_ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818aea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818aea2  _ZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818aea2, 0x0818af99]
0818aea2 +0x00:  push   %ebp
0818aea3 +0x01:  mov    %esp,%ebp
0818aea5 +0x03:  sub    $0x38,%esp
0818aea8 +0x06:  mov    0xc(%ebp),%eax
0818aeab +0x09:  mov    (%eax),%eax
0818aead +0x0b:  mov    %eax,0x8(%esp)
0818aeb1 +0x0f:  movl   $"seLect count(*) from charac_info where m_id=%d and delete_flag=0",0x4(%esp)
0818aeb9 +0x17:  mov    0x8(%ebp),%eax
0818aebc +0x1a:  mov    %eax,(%esp)
0818aebf +0x1d:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818aec4 +0x22:  mov    %eax,-0xc(%ebp)
0818aec7 +0x25:  cmpl   $0x0,-0xc(%ebp)
0818aecb +0x29:  je     0818af0b <+0x69>
0818aecd +0x2b:  movl   $"select charac_info error",0x14(%esp)
0818aed5 +0x33:  movl   $"%s",0x10(%esp)
0818aedd +0x3b:  movl   $0x62,0xc(%esp)
0818aee5 +0x43:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818aeed +0x4b:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818aef5 +0x53:  movl   $0x1,(%esp)
0818aefc +0x5a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818af01 +0x5f:  mov    $0xffffffff,%eax
0818af06 +0x64:  jmp    0818af98 <+0xf6>
0818af0b +0x69:  movl   $0x0,-0x10(%ebp)
0818af12 +0x70:  lea    -0x10(%ebp),%eax
0818af15 +0x73:  mov    %eax,0x8(%esp)
0818af19 +0x77:  movl   $0x0,0x4(%esp)
0818af21 +0x7f:  mov    0x8(%ebp),%eax
0818af24 +0x82:  mov    %eax,(%esp)
0818af27 +0x85:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818af2c +0x8a:  xor    $0x1,%eax
0818af2f +0x8d:  test   %al,%al
0818af31 +0x8f:  jne    0818af3b <+0x99>
0818af33 +0x91:  mov    -0x10(%ebp),%eax
0818af36 +0x94:  cmp    $0x23,%eax
0818af39 +0x97:  jle    0818af42 <+0xa0>
0818af3b +0x99:  mov    $0x1,%eax
0818af40 +0x9e:  jmp    0818af47 <+0xa5>
0818af42 +0xa0:  mov    $0x0,%eax
0818af47 +0xa5:  test   %al,%al
0818af49 +0xa7:  je     0818af93 <+0xf1>
0818af4b +0xa9:  mov    0xc(%ebp),%eax
0818af4e +0xac:  movl   $0x2,0x5344(%eax)
0818af58 +0xb6:  movl   $"max charac slot limit",0x14(%esp)
0818af60 +0xbe:  movl   $"%s",0x10(%esp)
0818af68 +0xc6:  movl   $0x69,0xc(%esp)
0818af70 +0xce:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY30arad_sp_create_character_checkEP5MySQLP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818af78 +0xd6:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818af80 +0xde:  movl   $0x1,(%esp)
0818af87 +0xe5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818af8c +0xea:  mov    $0xffffffff,%eax
0818af91 +0xef:  jmp    0818af98 <+0xf6>
0818af93 +0xf1:  mov    $0x0,%eax
0818af98 +0xf6:  leave
0818af99 +0xf7:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check @ 0x818aea2

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  int local_10;
  
  local_10 = MySQL::select(param_1,
                           "seLect count(*) from charac_info where m_id=%d and delete_flag=0",
                           *(undefined4 *)param_2);
  if (local_10 == 0) {
    local_14 = 0;
    cVar2 = MySQL::get_int(param_1,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 < 0x24)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_2 + 0x5344) = 2;
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)"
                 ,0x69,"%s","max charac slot limit");
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character_check(MySQL*, SIG_CREATE_CHARAC*)"
               ,0x62,"%s","select charac_info error");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
