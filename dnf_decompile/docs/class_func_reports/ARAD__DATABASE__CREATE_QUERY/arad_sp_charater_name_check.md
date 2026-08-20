# arad_sp_charater_name_check

`_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818ac54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ac54  _ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)
# range [0x0818ac54, 0x0818ad8a]
0818ac54 +0x000:  push   %ebp
0818ac55 +0x001:  mov    %esp,%ebp
0818ac57 +0x003:  sub    $0x38,%esp
0818ac5a +0x006:  mov    0xc(%ebp),%eax
0818ac5d +0x009:  add    $0x4,%eax
0818ac60 +0x00c:  mov    %eax,0xc(%esp)
0818ac64 +0x010:  mov    0x10(%ebp),%eax
0818ac67 +0x013:  mov    %eax,0x8(%esp)
0818ac6b +0x017:  movl   $"seLect delete_flag from %s.charac_info where charac_name='%s'",0x4(%esp)
0818ac73 +0x01f:  mov    0x8(%ebp),%eax
0818ac76 +0x022:  mov    %eax,(%esp)
0818ac79 +0x025:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818ac7e +0x02a:  mov    %eax,-0xc(%ebp)
0818ac81 +0x02d:  cmpl   $0x0,-0xc(%ebp)
0818ac85 +0x031:  je     0818acd2 <+0x7e>
0818ac87 +0x033:  mov    0xc(%ebp),%eax
0818ac8a +0x036:  movl   $0x2,0x5344(%eax)
0818ac94 +0x040:  movl   $"select error",0x14(%esp)
0818ac9c +0x048:  movl   $"%s",0x10(%esp)
0818aca4 +0x050:  movl   $0x1f,0xc(%esp)
0818acac +0x058:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKcE19__PRETTY_FUNCTION__,0x8(%esp)
0818acb4 +0x060:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818acbc +0x068:  movl   $0x1,(%esp)
0818acc3 +0x06f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818acc8 +0x074:  mov    $0xffffffff,%eax
0818accd +0x079:  jmp    0818ad89 <+0x135>
0818acd2 +0x07e:  movl   $0x0,-0x10(%ebp)
0818acd9 +0x085:  mov    0x8(%ebp),%eax
0818acdc +0x088:  mov    %eax,(%esp)
0818acdf +0x08b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818ace4 +0x090:  test   %eax,%eax
0818ace6 +0x092:  setne  %al
0818ace9 +0x095:  test   %al,%al
0818aceb +0x097:  je     0818ad84 <+0x130>
0818acf1 +0x09d:  mov    0xc(%ebp),%eax
0818acf4 +0x0a0:  movl   $0x2,0x5344(%eax)
0818acfe +0x0aa:  lea    -0x10(%ebp),%eax
0818ad01 +0x0ad:  mov    %eax,0x8(%esp)
0818ad05 +0x0b1:  movl   $0x0,0x4(%esp)
0818ad0d +0x0b9:  mov    0x8(%ebp),%eax
0818ad10 +0x0bc:  mov    %eax,(%esp)
0818ad13 +0x0bf:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818ad18 +0x0c4:  xor    $0x1,%eax
0818ad1b +0x0c7:  test   %al,%al
0818ad1d +0x0c9:  je     0818ad5a <+0x106>
0818ad1f +0x0cb:  movl   $"Parsing Error of Selected Field",0x14(%esp)
0818ad27 +0x0d3:  movl   $"%s",0x10(%esp)
0818ad2f +0x0db:  movl   $0x28,0xc(%esp)
0818ad37 +0x0e3:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKcE19__PRETTY_FUNCTION__,0x8(%esp)
0818ad3f +0x0eb:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818ad47 +0x0f3:  movl   $0x1,(%esp)
0818ad4e +0x0fa:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ad53 +0x0ff:  mov    $0xffffffff,%eax
0818ad58 +0x104:  jmp    0818ad89 <+0x135>
0818ad5a +0x106:  mov    -0x10(%ebp),%eax
0818ad5d +0x109:  test   %eax,%eax
0818ad5f +0x10b:  je     0818ad70 <+0x11c>
0818ad61 +0x10d:  mov    0xc(%ebp),%eax
0818ad64 +0x110:  movl   $0x3,0x5344(%eax)
0818ad6e +0x11a:  jmp    0818ad7d <+0x129>
0818ad70 +0x11c:  mov    0xc(%ebp),%eax
0818ad73 +0x11f:  movl   $0x1,0x5344(%eax)
0818ad7d +0x129:  mov    $0xffffffff,%eax
0818ad82 +0x12e:  jmp    0818ad89 <+0x135>
0818ad84 +0x130:  mov    $0x0,%eax
0818ad89 +0x135:  leave
0818ad8a +0x136:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check @ 0x818ac54

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char
   const*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check
          (MySQL *param_1,SIG_CREATE_CHARAC *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  int local_10;
  
  local_10 = MySQL::select(param_1,"seLect delete_flag from %s.charac_info where charac_name=\'%s\'"
                           ,param_3,param_2 + 4);
  if (local_10 == 0) {
    local_14 = 0;
    iVar3 = MySQL::get_n_rows(param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x5344) = 2;
      cVar1 = MySQL::get_int(param_1,0,&local_14);
      if (cVar1 == '\x01') {
        if (local_14 == 0) {
          *(undefined4 *)(param_2 + 0x5344) = 1;
        }
        else {
          *(undefined4 *)(param_2 + 0x5344) = 3;
        }
        uVar2 = 0xffffffff;
      }
      else {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, const char*)"
                   ,0x28,"%s","Parsing Error of Selected Field");
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x5344) = 2;
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, const char*)"
               ,0x1f,"%s","select error");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
