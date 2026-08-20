# arad_sp_get_characer_index

`_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818ad8b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ad8b  _ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818ad8b, 0x0818aea1]
0818ad8b +0x000:  push   %ebp
0818ad8c +0x001:  mov    %esp,%ebp
0818ad8e +0x003:  sub    $0x38,%esp
0818ad91 +0x006:  movl   $0x0,-0xc(%ebp)
0818ad98 +0x00d:  movl   $"seLect @@identity",0x4(%esp)
0818ada0 +0x015:  mov    0x8(%ebp),%eax
0818ada3 +0x018:  mov    %eax,(%esp)
0818ada6 +0x01b:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818adab +0x020:  test   %eax,%eax
0818adad +0x022:  setne  %al
0818adb0 +0x025:  test   %al,%al
0818adb2 +0x027:  je     0818adf2 <+0x67>
0818adb4 +0x029:  movl   $"select @@identity error",0x14(%esp)
0818adbc +0x031:  movl   $"%s",0x10(%esp)
0818adc4 +0x039:  movl   $0x47,0xc(%esp)
0818adcc +0x041:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818add4 +0x049:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818addc +0x051:  movl   $0x1,(%esp)
0818ade3 +0x058:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ade8 +0x05d:  mov    $0xffffffff,%eax
0818aded +0x062:  jmp    0818aea0 <+0x115>
0818adf2 +0x067:  mov    0xc(%ebp),%eax
0818adf5 +0x06a:  add    $0x5348,%eax
0818adfa +0x06f:  mov    %eax,0x8(%esp)
0818adfe +0x073:  movl   $0x0,0x4(%esp)
0818ae06 +0x07b:  mov    0x8(%ebp),%eax
0818ae09 +0x07e:  mov    %eax,(%esp)
0818ae0c +0x081:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818ae11 +0x086:  xor    $0x1,%eax
0818ae14 +0x089:  test   %al,%al
0818ae16 +0x08b:  je     0818ae53 <+0xc8>
0818ae18 +0x08d:  movl   $"Parsing Error of Selected Field",0x14(%esp)
0818ae20 +0x095:  movl   $"%s",0x10(%esp)
0818ae28 +0x09d:  movl   $0x4c,0xc(%esp)
0818ae30 +0x0a5:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818ae38 +0x0ad:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818ae40 +0x0b5:  movl   $0x1,(%esp)
0818ae47 +0x0bc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ae4c +0x0c1:  mov    $0xffffffff,%eax
0818ae51 +0x0c6:  jmp    0818aea0 <+0x115>
0818ae53 +0x0c8:  mov    0xc(%ebp),%eax
0818ae56 +0x0cb:  mov    0x5348(%eax),%eax
0818ae5c +0x0d1:  test   %eax,%eax
0818ae5e +0x0d3:  jne    0818ae9b <+0x110>
0818ae60 +0x0d5:  movl   $"charac_no error",0x14(%esp)
0818ae68 +0x0dd:  movl   $"%s",0x10(%esp)
0818ae70 +0x0e5:  movl   $0x51,0xc(%esp)
0818ae78 +0x0ed:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818ae80 +0x0f5:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818ae88 +0x0fd:  movl   $0x1,(%esp)
0818ae8f +0x104:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ae94 +0x109:  mov    $0xffffffff,%eax
0818ae99 +0x10e:  jmp    0818aea0 <+0x115>
0818ae9b +0x110:  mov    $0x0,%eax
0818aea0 +0x115:  leave
0818aea1 +0x116:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index @ 0x818ad8b

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = MySQL::select(param_1,"seLect @@identity");
  if (iVar2 == 0) {
    cVar1 = MySQL::get_uint(param_1,0,(uint *)(param_2 + 0x5348));
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x5348) == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)"
                   ,0x51,"%s","charac_no error");
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)"
                 ,0x4c,"%s","Parsing Error of Selected Field");
      uVar3 = 0xffffffff;
    }
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)"
               ,0x47,"%s","select @@identity error");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
