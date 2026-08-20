# arad_sp_select_punish_user_info

`_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818bd67` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818bd67  _ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*)
# range [0x0818bd67, 0x0818bfaf]
0818bd67 +0x000:  push   %ebp
0818bd68 +0x001:  mov    %esp,%ebp
0818bd6a +0x003:  sub    $0x38,%esp
0818bd6d +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818bd72 +0x00b:  movl   $0x0,0x8(%esp)
0818bd7a +0x013:  movl   $0x1,0x4(%esp)
0818bd82 +0x01b:  mov    %eax,(%esp)
0818bd85 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818bd8a +0x023:  mov    %eax,-0x10(%ebp)
0818bd8d +0x026:  cmpl   $0x0,-0x10(%ebp)
0818bd91 +0x02a:  jne    0818bdd1 <+0x6a>
0818bd93 +0x02c:  movl   $"Database null!!",0x14(%esp)
0818bd9b +0x034:  movl   $"%s",0x10(%esp)
0818bda3 +0x03c:  movl   $0x255,0xc(%esp)
0818bdab +0x044:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818bdb3 +0x04c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818bdbb +0x054:  movl   $0x1,(%esp)
0818bdc2 +0x05b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818bdc7 +0x060:  mov    $0xffffffff,%eax
0818bdcc +0x065:  jmp    0818bfae <+0x247>
0818bdd1 +0x06a:  mov    0x8(%ebp),%eax
0818bdd4 +0x06d:  mov    0xc0(%eax),%eax
0818bdda +0x073:  movl   $0x32,0xc(%esp)
0818bde2 +0x07b:  mov    %eax,0x8(%esp)
0818bde6 +0x07f:  movl   $"seLect punish_type, unix_timestamp(occ_time),punish_value, apply_flag, unix_timestamp(start_time),unix_timestamp(end_time) from member_punish_info where m_id=%d and apply_flag=1 LIMIT %d",0x4(%esp)
0818bdee +0x087:  mov    -0x10(%ebp),%eax
0818bdf1 +0x08a:  mov    %eax,(%esp)
0818bdf4 +0x08d:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818bdf9 +0x092:  test   %eax,%eax
0818bdfb +0x094:  setne  %al
0818bdfe +0x097:  test   %al,%al
0818be00 +0x099:  je     0818be0c <+0xa5>
0818be02 +0x09b:  mov    $0xffffffff,%eax
0818be07 +0x0a0:  jmp    0818bfae <+0x247>
0818be0c +0x0a5:  movl   $0x0,-0xc(%ebp)
0818be13 +0x0ac:  jmp    0818bf90 <+0x229>
0818be18 +0x0b1:  mov    -0xc(%ebp),%edx
0818be1b +0x0b4:  mov    %edx,%eax
0818be1d +0x0b6:  add    %eax,%eax
0818be1f +0x0b8:  add    %edx,%eax
0818be21 +0x0ba:  shl    $0x3,%eax
0818be24 +0x0bd:  add    $0x3a50,%eax
0818be29 +0x0c2:  add    0x8(%ebp),%eax
0818be2c +0x0c5:  add    $0x4,%eax
0818be2f +0x0c8:  mov    %eax,0x8(%esp)
0818be33 +0x0cc:  movl   $0x0,0x4(%esp)
0818be3b +0x0d4:  mov    -0x10(%ebp),%eax
0818be3e +0x0d7:  mov    %eax,(%esp)
0818be41 +0x0da:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818be46 +0x0df:  xor    $0x1,%eax
0818be49 +0x0e2:  test   %al,%al
0818be4b +0x0e4:  je     0818be57 <+0xf0>
0818be4d +0x0e6:  mov    $0xffffffff,%eax
0818be52 +0x0eb:  jmp    0818bfae <+0x247>
0818be57 +0x0f0:  mov    -0xc(%ebp),%edx
0818be5a +0x0f3:  mov    %edx,%eax
0818be5c +0x0f5:  add    %eax,%eax
0818be5e +0x0f7:  add    %edx,%eax
0818be60 +0x0f9:  shl    $0x3,%eax
0818be63 +0x0fc:  add    $0x3a50,%eax
0818be68 +0x101:  add    0x8(%ebp),%eax
0818be6b +0x104:  add    $0x8,%eax
0818be6e +0x107:  mov    %eax,0x8(%esp)
0818be72 +0x10b:  movl   $0x1,0x4(%esp)
0818be7a +0x113:  mov    -0x10(%ebp),%eax
0818be7d +0x116:  mov    %eax,(%esp)
0818be80 +0x119:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818be85 +0x11e:  xor    $0x1,%eax
0818be88 +0x121:  test   %al,%al
0818be8a +0x123:  je     0818be96 <+0x12f>
0818be8c +0x125:  mov    $0xffffffff,%eax
0818be91 +0x12a:  jmp    0818bfae <+0x247>
0818be96 +0x12f:  mov    -0xc(%ebp),%edx
0818be99 +0x132:  mov    %edx,%eax
0818be9b +0x134:  add    %eax,%eax
0818be9d +0x136:  add    %edx,%eax
0818be9f +0x138:  shl    $0x3,%eax
0818bea2 +0x13b:  add    $0x3a50,%eax
0818bea7 +0x140:  add    0x8(%ebp),%eax
0818beaa +0x143:  add    $0xc,%eax
0818bead +0x146:  mov    %eax,0x8(%esp)
0818beb1 +0x14a:  movl   $0x2,0x4(%esp)
0818beb9 +0x152:  mov    -0x10(%ebp),%eax
0818bebc +0x155:  mov    %eax,(%esp)
0818bebf +0x158:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818bec4 +0x15d:  xor    $0x1,%eax
0818bec7 +0x160:  test   %al,%al
0818bec9 +0x162:  je     0818bed5 <+0x16e>
0818becb +0x164:  mov    $0xffffffff,%eax
0818bed0 +0x169:  jmp    0818bfae <+0x247>
0818bed5 +0x16e:  mov    -0xc(%ebp),%edx
0818bed8 +0x171:  mov    %edx,%eax
0818beda +0x173:  add    %eax,%eax
0818bedc +0x175:  add    %edx,%eax
0818bede +0x177:  shl    $0x3,%eax
0818bee1 +0x17a:  add    $0x3a50,%eax
0818bee6 +0x17f:  add    0x8(%ebp),%eax
0818bee9 +0x182:  add    $0x10,%eax
0818beec +0x185:  mov    %eax,0x8(%esp)
0818bef0 +0x189:  movl   $0x3,0x4(%esp)
0818bef8 +0x191:  mov    -0x10(%ebp),%eax
0818befb +0x194:  mov    %eax,(%esp)
0818befe +0x197:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818bf03 +0x19c:  xor    $0x1,%eax
0818bf06 +0x19f:  test   %al,%al
0818bf08 +0x1a1:  je     0818bf14 <+0x1ad>
0818bf0a +0x1a3:  mov    $0xffffffff,%eax
0818bf0f +0x1a8:  jmp    0818bfae <+0x247>
0818bf14 +0x1ad:  mov    -0xc(%ebp),%edx
0818bf17 +0x1b0:  mov    %edx,%eax
0818bf19 +0x1b2:  add    %eax,%eax
0818bf1b +0x1b4:  add    %edx,%eax
0818bf1d +0x1b6:  shl    $0x3,%eax
0818bf20 +0x1b9:  add    $0x3a60,%eax
0818bf25 +0x1be:  add    0x8(%ebp),%eax
0818bf28 +0x1c1:  add    $0x4,%eax
0818bf2b +0x1c4:  mov    %eax,0x8(%esp)
0818bf2f +0x1c8:  movl   $0x4,0x4(%esp)
0818bf37 +0x1d0:  mov    -0x10(%ebp),%eax
0818bf3a +0x1d3:  mov    %eax,(%esp)
0818bf3d +0x1d6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818bf42 +0x1db:  xor    $0x1,%eax
0818bf45 +0x1de:  test   %al,%al
0818bf47 +0x1e0:  je     0818bf50 <+0x1e9>
0818bf49 +0x1e2:  mov    $0xffffffff,%eax
0818bf4e +0x1e7:  jmp    0818bfae <+0x247>
0818bf50 +0x1e9:  mov    -0xc(%ebp),%edx
0818bf53 +0x1ec:  mov    %edx,%eax
0818bf55 +0x1ee:  add    %eax,%eax
0818bf57 +0x1f0:  add    %edx,%eax
0818bf59 +0x1f2:  shl    $0x3,%eax
0818bf5c +0x1f5:  add    $0x3a60,%eax
0818bf61 +0x1fa:  add    0x8(%ebp),%eax
0818bf64 +0x1fd:  add    $0x8,%eax
0818bf67 +0x200:  mov    %eax,0x8(%esp)
0818bf6b +0x204:  movl   $0x5,0x4(%esp)
0818bf73 +0x20c:  mov    -0x10(%ebp),%eax
0818bf76 +0x20f:  mov    %eax,(%esp)
0818bf79 +0x212:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818bf7e +0x217:  xor    $0x1,%eax
0818bf81 +0x21a:  test   %al,%al
0818bf83 +0x21c:  je     0818bf8c <+0x225>
0818bf85 +0x21e:  mov    $0xffffffff,%eax
0818bf8a +0x223:  jmp    0818bfae <+0x247>
0818bf8c +0x225:  addl   $0x1,-0xc(%ebp)
0818bf90 +0x229:  mov    -0x10(%ebp),%eax
0818bf93 +0x22c:  mov    %eax,(%esp)
0818bf96 +0x22f:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818bf9b +0x234:  cmp    -0xc(%ebp),%eax
0818bf9e +0x237:  seta   %al
0818bfa1 +0x23a:  test   %al,%al
0818bfa3 +0x23c:  jne    0818be18 <+0xb1>
0818bfa9 +0x242:  mov    $0x0,%eax
0818bfae +0x247:  leave
0818bfaf +0x248:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info @ 0x818bd67

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*)",
               0x255,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = MySQL::select(this,
                          "seLect punish_type, unix_timestamp(occ_time),punish_value, apply_flag, unix_timestamp(start_time),unix_timestamp(end_time) from member_punish_info where m_id=%d and apply_flag=1 LIMIT %d"
                          ,*(undefined4 *)(param_1 + 0xc0),0x32);
    if (iVar3 == 0) {
      for (local_10 = 0; uVar4 = MySQL::get_n_rows(this), local_10 < uVar4; local_10 = local_10 + 1)
      {
        cVar1 = MySQL::get_int(this,0,(int *)(param_1 + local_10 * 0x18 + 0x3a54));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_uint(this,1,(uint *)(param_1 + local_10 * 0x18 + 0x3a58));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_int(this,2,(int *)(param_1 + local_10 * 0x18 + 0x3a5c));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_int(this,3,(int *)(param_1 + local_10 * 0x18 + 0x3a60));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_uint(this,4,(uint *)(param_1 + local_10 * 0x18 + 0x3a64));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_uint(this,5,(uint *)(param_1 + local_10 * 0x18 + 0x3a68));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
