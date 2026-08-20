# _getAutoPunishedSecondUserData

`_ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy`

`DB_Login::_getAutoPunishedSecondUserData(unsigned int, unsigned int&, unsigned long long&)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084110c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084110c6  _ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy
#           DB_Login::_getAutoPunishedSecondUserData(unsigned int, unsigned int&, unsigned long long&)
# range [0x084110c6, 0x084111e1]
084110c6 +0x000:  push   %ebp
084110c7 +0x001:  mov    %esp,%ebp
084110c9 +0x003:  sub    $0x28,%esp
084110cc +0x006:  movb   $0x0,-0xd(%ebp)
084110d0 +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084110d5 +0x00f:  movl   $0x0,0x8(%esp)
084110dd +0x017:  movl   $0x6,0x4(%esp)
084110e5 +0x01f:  mov    %eax,(%esp)
084110e8 +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084110ed +0x027:  mov    %eax,-0xc(%ebp)
084110f0 +0x02a:  movl   $0x0,0x4(%esp)
084110f8 +0x032:  mov    0xc(%ebp),%eax
084110fb +0x035:  mov    %eax,(%esp)
084110fe +0x038:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08411103 +0x03d:  mov    %eax,0x8(%esp)
08411107 +0x041:  movl   $"seLect trade_cnt,trade_gold,punish_flag,unix_timestamp(occ_time) from auto_punish_second_user where m_id=%s",0x4(%esp)
0841110f +0x049:  mov    -0xc(%ebp),%eax
08411112 +0x04c:  mov    %eax,(%esp)
08411115 +0x04f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841111a +0x054:  movl   $0x1,0x4(%esp)
08411122 +0x05c:  mov    -0xc(%ebp),%eax
08411125 +0x05f:  mov    %eax,(%esp)
08411128 +0x062:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841112d +0x067:  xor    $0x1,%eax
08411130 +0x06a:  test   %al,%al
08411132 +0x06c:  jne    08411143 <+0x7d>
08411134 +0x06e:  mov    -0xc(%ebp),%eax
08411137 +0x071:  mov    %eax,(%esp)
0841113a +0x074:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841113f +0x079:  test   %eax,%eax
08411141 +0x07b:  jne    0841114a <+0x84>
08411143 +0x07d:  mov    $0x1,%eax
08411148 +0x082:  jmp    0841114f <+0x89>
0841114a +0x084:  mov    $0x0,%eax
0841114f +0x089:  test   %al,%al
08411151 +0x08b:  je     0841115d <+0x97>
08411153 +0x08d:  mov    $0x0,%eax
08411158 +0x092:  jmp    084111e0 <+0x11a>
0841115d +0x097:  mov    -0xc(%ebp),%eax
08411160 +0x09a:  mov    %eax,(%esp)
08411163 +0x09d:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08411168 +0x0a2:  mov    0x10(%ebp),%eax
0841116b +0x0a5:  mov    %eax,0x8(%esp)
0841116f +0x0a9:  movl   $0x0,0x4(%esp)
08411177 +0x0b1:  mov    -0xc(%ebp),%eax
0841117a +0x0b4:  mov    %eax,(%esp)
0841117d +0x0b7:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08411182 +0x0bc:  mov    0x14(%ebp),%eax
08411185 +0x0bf:  mov    %eax,0x8(%esp)
08411189 +0x0c3:  movl   $0x1,0x4(%esp)
08411191 +0x0cb:  mov    -0xc(%ebp),%eax
08411194 +0x0ce:  mov    %eax,(%esp)
08411197 +0x0d1:  call   081754c8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x1c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x1c
0841119c +0x0d6:  lea    -0xd(%ebp),%eax
0841119f +0x0d9:  mov    %eax,0x8(%esp)
084111a3 +0x0dd:  movl   $0x2,0x4(%esp)
084111ab +0x0e5:  mov    -0xc(%ebp),%eax
084111ae +0x0e8:  mov    %eax,(%esp)
084111b1 +0x0eb:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084111b6 +0x0f0:  movl   $0x0,-0x14(%ebp)
084111bd +0x0f7:  lea    -0x14(%ebp),%eax
084111c0 +0x0fa:  mov    %eax,0x8(%esp)
084111c4 +0x0fe:  movl   $0x3,0x4(%esp)
084111cc +0x106:  mov    -0xc(%ebp),%eax
084111cf +0x109:  mov    %eax,(%esp)
084111d2 +0x10c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084111d7 +0x111:  movzbl -0xd(%ebp),%eax
084111db +0x115:  test   %al,%al
084111dd +0x117:  setne  %al
084111e0 +0x11a:  leave
084111e1 +0x11b:  ret
```

## 反编译 C

```c
// DB_Login::_getAutoPunishedSecondUserData @ 0x84110c6

/* DB_Login::_getAutoPunishedSecondUserData(unsigned int, unsigned int&, unsigned long long&) */

bool __thiscall
DB_Login::_getAutoPunishedSecondUserData
          (DB_Login *this,uint param_1,uint *param_2,ulonglong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  char local_11;
  MySQL *local_10;
  
  local_11 = '\0';
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "seLect trade_cnt,trade_gold,punish_flag,unix_timestamp(occ_time) from auto_punish_second_user where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 != 0) {
      bVar4 = false;
      goto LAB_0841114f;
    }
  }
  bVar4 = true;
LAB_0841114f:
  if (bVar4) {
    bVar4 = false;
  }
  else {
    MySQL::fetch(local_10);
    MySQL::get_uint(local_10,0,param_2);
    MySQL::get_ulonglong(local_10,1,param_3);
    MySQL::get_byte(local_10,2,&local_11);
    local_18 = 0;
    MySQL::get_int(local_10,3,&local_18);
    bVar4 = local_11 != '\0';
  }
  return bVar4;
}
```
