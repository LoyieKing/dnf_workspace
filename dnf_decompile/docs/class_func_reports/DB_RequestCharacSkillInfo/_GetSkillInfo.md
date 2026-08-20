# _GetSkillInfo

`_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill`

`DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)`

| 类 | 地址 |
|---|---|
| `DB_RequestCharacSkillInfo` | `0x08447312` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08447312  _ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill
#           DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)
# range [0x08447312, 0x084474f1]
08447312 +0x000:  push   %ebp
08447313 +0x001:  mov    %esp,%ebp
08447315 +0x003:  sub    $0x48,%esp
08447318 +0x006:  mov    0x10(%ebp),%eax
0844731b +0x009:  mov    %al,-0x1c(%ebp)
0844731e +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08447323 +0x011:  movl   $0x0,0x8(%esp)
0844732b +0x019:  movl   $0x3,0x4(%esp)
08447333 +0x021:  mov    %eax,(%esp)
08447336 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844733b +0x029:  mov    %eax,-0x18(%ebp)
0844733e +0x02c:  movsbl -0x1c(%ebp),%eax
08447342 +0x030:  mov    %eax,(%esp)
08447345 +0x033:  call   083fbd93 <_Z19get_skill_slot_namec>  ; get_skill_slot_name(char)
0844734a +0x038:  mov    0xc(%ebp),%edx
0844734d +0x03b:  mov    %edx,0xc(%esp)
08447351 +0x03f:  mov    %eax,0x8(%esp)
08447355 +0x043:  movl   $"seLect %s from skill where charac_no=%d",0x4(%esp)
0844735d +0x04b:  mov    -0x18(%ebp),%eax
08447360 +0x04e:  mov    %eax,(%esp)
08447363 +0x051:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447368 +0x056:  movl   $0x1,0x4(%esp)
08447370 +0x05e:  mov    -0x18(%ebp),%eax
08447373 +0x061:  mov    %eax,(%esp)
08447376 +0x064:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844737b +0x069:  mov    %al,-0x11(%ebp)
0844737e +0x06c:  movzbl -0x11(%ebp),%eax
08447382 +0x070:  xor    $0x1,%eax
08447385 +0x073:  test   %al,%al
08447387 +0x075:  je     084473c6 <+0xb4>
08447389 +0x077:  mov    0xc(%ebp),%eax
0844738c +0x07a:  mov    %eax,0x14(%esp)
08447390 +0x07e:  movl   $"DB_RequestCharacSkillInfo::_GetSkillInfo exec() failed, charac_no(%d)",0x10(%esp)
08447398 +0x086:  movl   $0xb1c5,0xc(%esp)
084473a0 +0x08e:  movl   $&_ZZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skillE19__PRETTY_FUNCTION__,0x8(%esp)
084473a8 +0x096:  movl   $"DBThread.cpp",0x4(%esp)
084473b0 +0x09e:  movl   $0x1,(%esp)
084473b7 +0x0a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084473bc +0x0aa:  mov    $0x0,%eax
084473c1 +0x0af:  jmp    084474ef <+0x1dd>
084473c6 +0x0b4:  mov    -0x18(%ebp),%eax
084473c9 +0x0b7:  mov    %eax,(%esp)
084473cc +0x0ba:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084473d1 +0x0bf:  mov    %al,-0x11(%ebp)
084473d4 +0x0c2:  movzbl -0x11(%ebp),%eax
084473d8 +0x0c6:  xor    $0x1,%eax
084473db +0x0c9:  test   %al,%al
084473dd +0x0cb:  je     0844741c <+0x10a>
084473df +0x0cd:  mov    0xc(%ebp),%eax
084473e2 +0x0d0:  mov    %eax,0x14(%esp)
084473e6 +0x0d4:  movl   $"DB_RequestCharacSkillInfo::_GetSkillInfo fetch() failed, charac_no(%d)",0x10(%esp)
084473ee +0x0dc:  movl   $0xb1ce,0xc(%esp)
084473f6 +0x0e4:  movl   $&_ZZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skillE19__PRETTY_FUNCTION__,0x8(%esp)
084473fe +0x0ec:  movl   $"DBThread.cpp",0x4(%esp)
08447406 +0x0f4:  movl   $0x1,(%esp)
0844740d +0x0fb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447412 +0x100:  mov    $0x0,%eax
08447417 +0x105:  jmp    084474ef <+0x1dd>
0844741c +0x10a:  mov    -0x18(%ebp),%eax
0844741f +0x10d:  mov    %eax,(%esp)
08447422 +0x110:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08447427 +0x115:  or     %edx,%eax
08447429 +0x117:  test   %eax,%eax
0844742b +0x119:  sete   %al
0844742e +0x11c:  test   %al,%al
08447430 +0x11e:  je     0844746f <+0x15d>
08447432 +0x120:  mov    0xc(%ebp),%eax
08447435 +0x123:  mov    %eax,0x14(%esp)
08447439 +0x127:  movl   $"DB_RequestCharacSkillInfo::_GetSkillInfo no result, charac_no(%d)",0x10(%esp)
08447441 +0x12f:  movl   $0xb1d5,0xc(%esp)
08447449 +0x137:  movl   $&_ZZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skillE19__PRETTY_FUNCTION__,0x8(%esp)
08447451 +0x13f:  movl   $"DBThread.cpp",0x4(%esp)
08447459 +0x147:  movl   $0x1,(%esp)
08447460 +0x14e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447465 +0x153:  mov    $0x0,%eax
0844746a +0x158:  jmp    084474ef <+0x1dd>
0844746f +0x15d:  movl   $0x0,-0x10(%ebp)
08447476 +0x164:  movl   $0x198,-0xc(%ebp)
0844747d +0x16b:  mov    -0xc(%ebp),%ecx
08447480 +0x16e:  mov    0x14(%ebp),%edx
08447483 +0x171:  mov    -0x10(%ebp),%eax
08447486 +0x174:  addl   $0x1,-0x10(%ebp)
0844748a +0x178:  movl   $0x2,0x10(%esp)
08447492 +0x180:  mov    %ecx,0xc(%esp)
08447496 +0x184:  mov    %edx,0x8(%esp)
0844749a +0x188:  mov    %eax,0x4(%esp)
0844749e +0x18c:  mov    -0x18(%ebp),%eax
084474a1 +0x18f:  mov    %eax,(%esp)
084474a4 +0x192:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
084474a9 +0x197:  xor    $0x1,%eax
084474ac +0x19a:  test   %al,%al
084474ae +0x19c:  je     084474ea <+0x1d8>
084474b0 +0x19e:  mov    0xc(%ebp),%eax
084474b3 +0x1a1:  mov    %eax,0x14(%esp)
084474b7 +0x1a5:  movl   $"DB_RequestCharacSkillInfo::_GetSkillInfo get_compressed_blob_data failed, charac_no(%d)",0x10(%esp)
084474bf +0x1ad:  movl   $0xb1e0,0xc(%esp)
084474c7 +0x1b5:  movl   $&_ZZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skillE19__PRETTY_FUNCTION__,0x8(%esp)
084474cf +0x1bd:  movl   $"DBThread.cpp",0x4(%esp)
084474d7 +0x1c5:  movl   $0x1,(%esp)
084474de +0x1cc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084474e3 +0x1d1:  mov    $0x0,%eax
084474e8 +0x1d6:  jmp    084474ef <+0x1dd>
084474ea +0x1d8:  mov    $0x1,%eax
084474ef +0x1dd:  leave
084474f0 +0x1de:  ret
084474f1 +0x1df:  nop
```

## 反编译 C

```c
// DB_RequestCharacSkillInfo::_GetSkillInfo @ 0x8447312

/* DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*) */

undefined4 __thiscall
DB_RequestCharacSkillInfo::_GetSkillInfo
          (DB_RequestCharacSkillInfo *this,uint param_1,char param_2,_Mastered_skill *param_3)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  longlong lVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar2 = get_skill_slot_name(param_2);
  MySQL::set_query(this_00,"seLect %s from skill where charac_no=%d",uVar2,param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(this_00);
      if (lVar3 == 0) {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
                   ,0xb1d5,"DB_RequestCharacSkillInfo::_GetSkillInfo no result, charac_no(%d)",
                   param_1);
        uVar2 = 0;
      }
      else {
        cVar1 = get_compressed_blob_data(this_00,0,(char *)param_3,0x198,2);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          LogManager::logFormat
                    (1,"DBThread.cpp",
                     "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
                     ,0xb1e0,
                     "DB_RequestCharacSkillInfo::_GetSkillInfo get_compressed_blob_data failed, charac_no(%d)"
                     ,param_1);
          uVar2 = 0;
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
                 ,0xb1ce,"DB_RequestCharacSkillInfo::_GetSkillInfo fetch() failed, charac_no(%d)",
                 param_1);
      uVar2 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
               ,0xb1c5,"DB_RequestCharacSkillInfo::_GetSkillInfo exec() failed, charac_no(%d)",
               param_1);
    uVar2 = 0;
  }
  return uVar2;
}
```
