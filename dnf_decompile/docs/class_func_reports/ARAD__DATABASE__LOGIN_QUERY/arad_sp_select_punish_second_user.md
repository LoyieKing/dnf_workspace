# arad_sp_select_punish_second_user

`_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818bfb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818bfb0  _ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*)
# range [0x0818bfb0, 0x0818c0df]
0818bfb0 +0x000:  push   %ebp
0818bfb1 +0x001:  mov    %esp,%ebp
0818bfb3 +0x003:  sub    $0x38,%esp
0818bfb6 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818bfbb +0x00b:  movl   $0x0,0x8(%esp)
0818bfc3 +0x013:  movl   $0x6,0x4(%esp)
0818bfcb +0x01b:  mov    %eax,(%esp)
0818bfce +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818bfd3 +0x023:  mov    %eax,-0xc(%ebp)
0818bfd6 +0x026:  cmpl   $0x0,-0xc(%ebp)
0818bfda +0x02a:  jne    0818c01a <+0x6a>
0818bfdc +0x02c:  movl   $"Database null!!",0x14(%esp)
0818bfe4 +0x034:  movl   $"%s",0x10(%esp)
0818bfec +0x03c:  movl   $0x293,0xc(%esp)
0818bff4 +0x044:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818bffc +0x04c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c004 +0x054:  movl   $0x1,(%esp)
0818c00b +0x05b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c010 +0x060:  mov    $0xffffffff,%eax
0818c015 +0x065:  jmp    0818c0de <+0x12e>
0818c01a +0x06a:  mov    0x8(%ebp),%eax
0818c01d +0x06d:  mov    0xc0(%eax),%eax
0818c023 +0x073:  mov    %eax,0x8(%esp)
0818c027 +0x077:  movl   $"seLect trade_cnt,trade_gold,punish_flag,unix_timestamp(occ_time) from auto_punish_second_user where m_id=%d",0x4(%esp)
0818c02f +0x07f:  mov    -0xc(%ebp),%eax
0818c032 +0x082:  mov    %eax,(%esp)
0818c035 +0x085:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818c03a +0x08a:  test   %eax,%eax
0818c03c +0x08c:  setne  %al
0818c03f +0x08f:  test   %al,%al
0818c041 +0x091:  je     0818c04d <+0x9d>
0818c043 +0x093:  mov    $0xffffffff,%eax
0818c048 +0x098:  jmp    0818c0de <+0x12e>
0818c04d +0x09d:  movl   $0x0,-0x10(%ebp)
0818c054 +0x0a4:  movb   $0x0,-0x11(%ebp)
0818c058 +0x0a8:  mov    0x8(%ebp),%eax
0818c05b +0x0ab:  add    $0x3a24,%eax
0818c060 +0x0b0:  mov    %eax,0x8(%esp)
0818c064 +0x0b4:  movl   $0x0,0x4(%esp)
0818c06c +0x0bc:  mov    -0xc(%ebp),%eax
0818c06f +0x0bf:  mov    %eax,(%esp)
0818c072 +0x0c2:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818c077 +0x0c7:  mov    0x8(%ebp),%eax
0818c07a +0x0ca:  add    $0x3a28,%eax
0818c07f +0x0cf:  mov    %eax,0x8(%esp)
0818c083 +0x0d3:  movl   $0x1,0x4(%esp)
0818c08b +0x0db:  mov    -0xc(%ebp),%eax
0818c08e +0x0de:  mov    %eax,(%esp)
0818c091 +0x0e1:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
0818c096 +0x0e6:  lea    -0x11(%ebp),%eax
0818c099 +0x0e9:  mov    %eax,0x8(%esp)
0818c09d +0x0ed:  movl   $0x2,0x4(%esp)
0818c0a5 +0x0f5:  mov    -0xc(%ebp),%eax
0818c0a8 +0x0f8:  mov    %eax,(%esp)
0818c0ab +0x0fb:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0818c0b0 +0x100:  lea    -0x10(%ebp),%eax
0818c0b3 +0x103:  mov    %eax,0x8(%esp)
0818c0b7 +0x107:  movl   $0x3,0x4(%esp)
0818c0bf +0x10f:  mov    -0xc(%ebp),%eax
0818c0c2 +0x112:  mov    %eax,(%esp)
0818c0c5 +0x115:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c0ca +0x11a:  movzbl -0x11(%ebp),%eax
0818c0ce +0x11e:  test   %al,%al
0818c0d0 +0x120:  je     0818c0d9 <+0x129>
0818c0d2 +0x122:  mov    $0x0,%eax
0818c0d7 +0x127:  jmp    0818c0de <+0x12e>
0818c0d9 +0x129:  mov    $0xffffffff,%eax
0818c0de +0x12e:  leave
0818c0df +0x12f:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user @ 0x818bfb0

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_15;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*)"
               ,0x293,"%s","Database null!!");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = MySQL::select(local_10,
                          "seLect trade_cnt,trade_gold,punish_flag,unix_timestamp(occ_time) from auto_punish_second_user where m_id=%d"
                          ,*(undefined4 *)(param_1 + 0xc0));
    if (iVar2 == 0) {
      local_14 = 0;
      local_15 = '\0';
      MySQL::get_uint(local_10,0,(uint *)(param_1 + 0x3a24));
      MySQL::get_ulonglong(local_10,1,(ulonglong *)(param_1 + 0x3a28));
      MySQL::get_byte(local_10,2,&local_15);
      MySQL::get_int(local_10,3,&local_14);
      if (local_15 == '\0') {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
