# _GetSkillTreeIndex

`_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc`

`DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `DB_RequestCharacSkillInfo` | `0x08447162` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08447162  _ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc
#           DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)
# range [0x08447162, 0x08447311]
08447162 +0x000:  push   %ebp
08447163 +0x001:  mov    %esp,%ebp
08447165 +0x003:  sub    $0x38,%esp
08447168 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844716d +0x00b:  movl   $0x0,0x8(%esp)
08447175 +0x013:  movl   $0x2,0x4(%esp)
0844717d +0x01b:  mov    %eax,(%esp)
08447180 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08447185 +0x023:  mov    %eax,-0x14(%ebp)
08447188 +0x026:  mov    0xc(%ebp),%eax
0844718b +0x029:  mov    %eax,0x8(%esp)
0844718f +0x02d:  movl   $"seLect skill_tree_index from charac_info where charac_no=%u",0x4(%esp)
08447197 +0x035:  mov    -0x14(%ebp),%eax
0844719a +0x038:  mov    %eax,(%esp)
0844719d +0x03b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084471a2 +0x040:  movl   $0x1,0x4(%esp)
084471aa +0x048:  mov    -0x14(%ebp),%eax
084471ad +0x04b:  mov    %eax,(%esp)
084471b0 +0x04e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084471b5 +0x053:  mov    %al,-0xd(%ebp)
084471b8 +0x056:  movzbl -0xd(%ebp),%eax
084471bc +0x05a:  xor    $0x1,%eax
084471bf +0x05d:  test   %al,%al
084471c1 +0x05f:  je     08447200 <+0x9e>
084471c3 +0x061:  mov    0xc(%ebp),%eax
084471c6 +0x064:  mov    %eax,0x14(%esp)
084471ca +0x068:  movl   $"DB_RequestCharacSkillInfo::_GetSkillTreeIndex exec() failed, charac_no(%d)",0x10(%esp)
084471d2 +0x070:  movl   $0xb19a,0xc(%esp)
084471da +0x078:  movl   $&_ZZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPcE19__PRETTY_FUNCTION__,0x8(%esp)
084471e2 +0x080:  movl   $"DBThread.cpp",0x4(%esp)
084471ea +0x088:  movl   $0x1,(%esp)
084471f1 +0x08f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084471f6 +0x094:  mov    $0x0,%eax
084471fb +0x099:  jmp    08447310 <+0x1ae>
08447200 +0x09e:  mov    -0x14(%ebp),%eax
08447203 +0x0a1:  mov    %eax,(%esp)
08447206 +0x0a4:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844720b +0x0a9:  mov    %al,-0xd(%ebp)
0844720e +0x0ac:  movzbl -0xd(%ebp),%eax
08447212 +0x0b0:  xor    $0x1,%eax
08447215 +0x0b3:  test   %al,%al
08447217 +0x0b5:  je     08447256 <+0xf4>
08447219 +0x0b7:  mov    0xc(%ebp),%eax
0844721c +0x0ba:  mov    %eax,0x14(%esp)
08447220 +0x0be:  movl   $"DB_RequestCharacSkillInfo::_GetSkillTreeIndex fetch() failed, charac_no(%d)",0x10(%esp)
08447228 +0x0c6:  movl   $0xb1a3,0xc(%esp)
08447230 +0x0ce:  movl   $&_ZZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPcE19__PRETTY_FUNCTION__,0x8(%esp)
08447238 +0x0d6:  movl   $"DBThread.cpp",0x4(%esp)
08447240 +0x0de:  movl   $0x1,(%esp)
08447247 +0x0e5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0844724c +0x0ea:  mov    $0x0,%eax
08447251 +0x0ef:  jmp    08447310 <+0x1ae>
08447256 +0x0f4:  mov    -0x14(%ebp),%eax
08447259 +0x0f7:  mov    %eax,(%esp)
0844725c +0x0fa:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08447261 +0x0ff:  or     %edx,%eax
08447263 +0x101:  test   %eax,%eax
08447265 +0x103:  sete   %al
08447268 +0x106:  test   %al,%al
0844726a +0x108:  je     084472a6 <+0x144>
0844726c +0x10a:  mov    0xc(%ebp),%eax
0844726f +0x10d:  mov    %eax,0x14(%esp)
08447273 +0x111:  movl   $"DB_RequestCharacSkillInfo::_GetSkillTreeIndex no result, charac_no(%d)",0x10(%esp)
0844727b +0x119:  movl   $0xb1aa,0xc(%esp)
08447283 +0x121:  movl   $&_ZZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPcE19__PRETTY_FUNCTION__,0x8(%esp)
0844728b +0x129:  movl   $"DBThread.cpp",0x4(%esp)
08447293 +0x131:  movl   $0x1,(%esp)
0844729a +0x138:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0844729f +0x13d:  mov    $0x0,%eax
084472a4 +0x142:  jmp    08447310 <+0x1ae>
084472a6 +0x144:  movl   $0x0,-0xc(%ebp)
084472ad +0x14b:  mov    -0xc(%ebp),%eax
084472b0 +0x14e:  addl   $0x1,-0xc(%ebp)
084472b4 +0x152:  mov    0x10(%ebp),%edx
084472b7 +0x155:  mov    %edx,0x8(%esp)
084472bb +0x159:  mov    %eax,0x4(%esp)
084472bf +0x15d:  mov    -0x14(%ebp),%eax
084472c2 +0x160:  mov    %eax,(%esp)
084472c5 +0x163:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084472ca +0x168:  xor    $0x1,%eax
084472cd +0x16b:  test   %al,%al
084472cf +0x16d:  je     0844730b <+0x1a9>
084472d1 +0x16f:  mov    0xc(%ebp),%eax
084472d4 +0x172:  mov    %eax,0x14(%esp)
084472d8 +0x176:  movl   $"DB_RequestCharacSkillInfo::_GetSkillTreeIndex get_byte() failed, charac_no(%d)",0x10(%esp)
084472e0 +0x17e:  movl   $0xb1b2,0xc(%esp)
084472e8 +0x186:  movl   $&_ZZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPcE19__PRETTY_FUNCTION__,0x8(%esp)
084472f0 +0x18e:  movl   $"DBThread.cpp",0x4(%esp)
084472f8 +0x196:  movl   $0x1,(%esp)
084472ff +0x19d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447304 +0x1a2:  mov    $0x0,%eax
08447309 +0x1a7:  jmp    08447310 <+0x1ae>
0844730b +0x1a9:  mov    $0x1,%eax
08447310 +0x1ae:  leave
08447311 +0x1af:  ret
```

## 反编译 C

```c
// DB_RequestCharacSkillInfo::_GetSkillTreeIndex @ 0x8447162

/* DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*) */

undefined4 __thiscall
DB_RequestCharacSkillInfo::_GetSkillTreeIndex
          (DB_RequestCharacSkillInfo *this,uint param_1,char *param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  longlong lVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect skill_tree_index from charac_info where charac_no=%u",param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(this_00);
      if (lVar3 == 0) {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",0xb1aa,
                   "DB_RequestCharacSkillInfo::_GetSkillTreeIndex no result, charac_no(%d)",param_1)
        ;
        uVar2 = 0;
      }
      else {
        cVar1 = MySQL::get_byte(this_00,0,param_2);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          LogManager::logFormat
                    (1,"DBThread.cpp",
                     "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",
                     0xb1b2,
                     "DB_RequestCharacSkillInfo::_GetSkillTreeIndex get_byte() failed, charac_no(%d)"
                     ,param_1);
          uVar2 = 0;
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",0xb1a3,
                 "DB_RequestCharacSkillInfo::_GetSkillTreeIndex fetch() failed, charac_no(%d)",
                 param_1);
      uVar2 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",0xb19a,
               "DB_RequestCharacSkillInfo::_GetSkillTreeIndex exec() failed, charac_no(%d)",param_1)
    ;
    uVar2 = 0;
  }
  return uVar2;
}
```
