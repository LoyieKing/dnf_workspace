# arad_sp_buy_item_check

`_ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE`

`ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::ITEM_QUERY` | `0x0818cfab` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818cfab  _ZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoE
#           ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)
# range [0x0818cfab, 0x0818d23f]
0818cfab +0x000:  push   %ebp
0818cfac +0x001:  mov    %esp,%ebp
0818cfae +0x003:  push   %ebx
0818cfaf +0x004:  sub    $0x44,%esp
0818cfb2 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818cfb7 +0x00c:  movl   $0x0,0x8(%esp)
0818cfbf +0x014:  movl   $0x7,0x4(%esp)
0818cfc7 +0x01c:  mov    %eax,(%esp)
0818cfca +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818cfcf +0x024:  mov    %eax,-0xc(%ebp)
0818cfd2 +0x027:  cmpl   $0x0,-0xc(%ebp)
0818cfd6 +0x02b:  jne    0818d016 <+0x6b>
0818cfd8 +0x02d:  movl   $"Database null!!",0x14(%esp)
0818cfe0 +0x035:  movl   $"%s",0x10(%esp)
0818cfe8 +0x03d:  movl   $0x454,0xc(%esp)
0818cff0 +0x045:  movl   $&_ZZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoEE19__PRETTY_FUNCTION__,0x8(%esp)
0818cff8 +0x04d:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818d000 +0x055:  movl   $0x1,(%esp)
0818d007 +0x05c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818d00c +0x061:  mov    $0xffffffff,%eax
0818d011 +0x066:  jmp    0818d23a <+0x28f>
0818d016 +0x06b:  movl   $0x0,-0x11(%ebp)
0818d01d +0x072:  movb   $0x0,-0xd(%ebp)
0818d021 +0x076:  lea    -0x11(%ebp),%eax
0818d024 +0x079:  mov    %eax,(%esp)
0818d027 +0x07c:  call   0819e8d0 <_ZN4ARAD16GetQuarterOfYearEPc>  ; ARAD::GetQuarterOfYear(char*)
0818d02c +0x081:  mov    0x8(%ebp),%eax
0818d02f +0x084:  movzwl 0x2(%eax),%eax
0818d033 +0x088:  cmp    $0x1,%ax
0818d037 +0x08c:  jne    0818d073 <+0xc8>
0818d039 +0x08e:  mov    0x8(%ebp),%eax
0818d03c +0x091:  mov    0x8(%eax),%ecx
0818d03f +0x094:  mov    0x8(%ebp),%eax
0818d042 +0x097:  mov    0xc(%eax),%edx
0818d045 +0x09a:  mov    0x8(%ebp),%eax
0818d048 +0x09d:  mov    0x10(%eax),%eax
0818d04b +0x0a0:  mov    %ecx,0x14(%esp)
0818d04f +0x0a4:  mov    %edx,0x10(%esp)
0818d053 +0x0a8:  mov    %eax,0xc(%esp)
0818d057 +0x0ac:  lea    -0x11(%ebp),%eax
0818d05a +0x0af:  mov    %eax,0x8(%esp)
0818d05e +0x0b3:  movl   $"select count(*) from prod_sale_entry_%s where  ipg_no = %d and  m_id = %d   and  charac_no = %d",0x4(%esp)
0818d066 +0x0bb:  mov    -0xc(%ebp),%eax
0818d069 +0x0be:  mov    %eax,(%esp)
0818d06c +0x0c1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818d071 +0x0c6:  jmp    0818d0a1 <+0xf6>
0818d073 +0x0c8:  mov    0x8(%ebp),%eax
0818d076 +0x0cb:  mov    0xc(%eax),%edx
0818d079 +0x0ce:  mov    0x8(%ebp),%eax
0818d07c +0x0d1:  mov    0x10(%eax),%eax
0818d07f +0x0d4:  mov    %edx,0x10(%esp)
0818d083 +0x0d8:  mov    %eax,0xc(%esp)
0818d087 +0x0dc:  lea    -0x11(%ebp),%eax
0818d08a +0x0df:  mov    %eax,0x8(%esp)
0818d08e +0x0e3:  movl   $"select count(*) from prod_sale_entry_%s where  ipg_no = %d and  m_id = %d",0x4(%esp)
0818d096 +0x0eb:  mov    -0xc(%ebp),%eax
0818d099 +0x0ee:  mov    %eax,(%esp)
0818d09c +0x0f1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818d0a1 +0x0f6:  movl   $0x1,0x4(%esp)
0818d0a9 +0x0fe:  mov    -0xc(%ebp),%eax
0818d0ac +0x101:  mov    %eax,(%esp)
0818d0af +0x104:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0818d0b4 +0x109:  xor    $0x1,%eax
0818d0b7 +0x10c:  test   %al,%al
0818d0b9 +0x10e:  je     0818d11d <+0x172>
0818d0bb +0x110:  mov    0x8(%ebp),%eax
0818d0be +0x113:  movzwl 0x2(%eax),%eax
0818d0c2 +0x117:  movswl %ax,%ebx
0818d0c5 +0x11a:  mov    0x8(%ebp),%eax
0818d0c8 +0x11d:  mov    0x10(%eax),%ecx
0818d0cb +0x120:  mov    0x8(%ebp),%eax
0818d0ce +0x123:  mov    0x8(%eax),%edx
0818d0d1 +0x126:  mov    0x8(%ebp),%eax
0818d0d4 +0x129:  mov    0xc(%eax),%eax
0818d0d7 +0x12c:  mov    %ebx,0x20(%esp)
0818d0db +0x130:  mov    %ecx,0x1c(%esp)
0818d0df +0x134:  mov    %edx,0x18(%esp)
0818d0e3 +0x138:  mov    %eax,0x14(%esp)
0818d0e7 +0x13c:  movl   $"[ERROR] DB Exec Error => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",0x10(%esp)
0818d0ef +0x144:  movl   $0x472,0xc(%esp)
0818d0f7 +0x14c:  movl   $&_ZZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoEE19__PRETTY_FUNCTION__,0x8(%esp)
0818d0ff +0x154:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818d107 +0x15c:  movl   $0x1,(%esp)
0818d10e +0x163:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818d113 +0x168:  mov    $0xffffffff,%eax
0818d118 +0x16d:  jmp    0818d23a <+0x28f>
0818d11d +0x172:  mov    -0xc(%ebp),%eax
0818d120 +0x175:  mov    %eax,(%esp)
0818d123 +0x178:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0818d128 +0x17d:  xor    $0x1,%eax
0818d12b +0x180:  test   %al,%al
0818d12d +0x182:  je     0818d191 <+0x1e6>
0818d12f +0x184:  mov    0x8(%ebp),%eax
0818d132 +0x187:  movzwl 0x2(%eax),%eax
0818d136 +0x18b:  movswl %ax,%ebx
0818d139 +0x18e:  mov    0x8(%ebp),%eax
0818d13c +0x191:  mov    0x10(%eax),%ecx
0818d13f +0x194:  mov    0x8(%ebp),%eax
0818d142 +0x197:  mov    0x8(%eax),%edx
0818d145 +0x19a:  mov    0x8(%ebp),%eax
0818d148 +0x19d:  mov    0xc(%eax),%eax
0818d14b +0x1a0:  mov    %ebx,0x20(%esp)
0818d14f +0x1a4:  mov    %ecx,0x1c(%esp)
0818d153 +0x1a8:  mov    %edx,0x18(%esp)
0818d157 +0x1ac:  mov    %eax,0x14(%esp)
0818d15b +0x1b0:  movl   $"[ERROR] DB Fetch Error => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",0x10(%esp)
0818d163 +0x1b8:  movl   $0x47b,0xc(%esp)
0818d16b +0x1c0:  movl   $&_ZZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoEE19__PRETTY_FUNCTION__,0x8(%esp)
0818d173 +0x1c8:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818d17b +0x1d0:  movl   $0x1,(%esp)
0818d182 +0x1d7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818d187 +0x1dc:  mov    $0xffffffff,%eax
0818d18c +0x1e1:  jmp    0818d23a <+0x28f>
0818d191 +0x1e6:  movl   $0x0,-0x18(%ebp)
0818d198 +0x1ed:  lea    -0x18(%ebp),%eax
0818d19b +0x1f0:  mov    %eax,0x8(%esp)
0818d19f +0x1f4:  movl   $0x0,0x4(%esp)
0818d1a7 +0x1fc:  mov    -0xc(%ebp),%eax
0818d1aa +0x1ff:  mov    %eax,(%esp)
0818d1ad +0x202:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818d1b2 +0x207:  xor    $0x1,%eax
0818d1b5 +0x20a:  test   %al,%al
0818d1b7 +0x20c:  je     0818d218 <+0x26d>
0818d1b9 +0x20e:  mov    0x8(%ebp),%eax
0818d1bc +0x211:  movzwl 0x2(%eax),%eax
0818d1c0 +0x215:  movswl %ax,%ebx
0818d1c3 +0x218:  mov    0x8(%ebp),%eax
0818d1c6 +0x21b:  mov    0x10(%eax),%ecx
0818d1c9 +0x21e:  mov    0x8(%ebp),%eax
0818d1cc +0x221:  mov    0x8(%eax),%edx
0818d1cf +0x224:  mov    0x8(%ebp),%eax
0818d1d2 +0x227:  mov    0xc(%eax),%eax
0818d1d5 +0x22a:  mov    %ebx,0x20(%esp)
0818d1d9 +0x22e:  mov    %ecx,0x1c(%esp)
0818d1dd +0x232:  mov    %edx,0x18(%esp)
0818d1e1 +0x236:  mov    %eax,0x14(%esp)
0818d1e5 +0x23a:  movl   $"RESULT_COUNT MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",0x10(%esp)
0818d1ed +0x242:  movl   $0x485,0xc(%esp)
0818d1f5 +0x24a:  movl   $&_ZZN4ARAD8DATABASE10ITEM_QUERY22arad_sp_buy_item_checkERN10ARAD_DATAS11BuyItemInfoEE19__PRETTY_FUNCTION__,0x8(%esp)
0818d1fd +0x252:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818d205 +0x25a:  movl   $0x1,(%esp)
0818d20c +0x261:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818d211 +0x266:  mov    $0xffffffff,%eax
0818d216 +0x26b:  jmp    0818d23a <+0x28f>
0818d218 +0x26d:  mov    0x8(%ebp),%eax
0818d21b +0x270:  movb   $0x1,(%eax)
0818d21e +0x273:  mov    0x8(%ebp),%eax
0818d221 +0x276:  movzwl 0x4(%eax),%eax
0818d225 +0x27a:  movswl %ax,%edx
0818d228 +0x27d:  mov    -0x18(%ebp),%eax
0818d22b +0x280:  cmp    %eax,%edx
0818d22d +0x282:  jg     0818d235 <+0x28a>
0818d22f +0x284:  mov    0x8(%ebp),%eax
0818d232 +0x287:  movb   $0x0,(%eax)
0818d235 +0x28a:  mov    $0x0,%eax
0818d23a +0x28f:  add    $0x44,%esp
0818d23d +0x292:  pop    %ebx
0818d23e +0x293:  pop    %ebp
0818d23f +0x294:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check @ 0x818cfab

/* ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&) */

undefined4 ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(BuyItemInfo *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_1c;
  char local_15 [5];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)",
               0x454,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    local_15[0] = '\0';
    local_15[1] = '\0';
    local_15[2] = '\0';
    local_15[3] = '\0';
    local_15[4] = 0;
    GetQuarterOfYear(local_15);
    if (*(short *)(param_1 + 2) == 1) {
      MySQL::set_query(local_10,
                       "select count(*) from prod_sale_entry_%s where  ipg_no = %d and  m_id = %d   and  charac_no = %d"
                       ,local_15,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 8));
    }
    else {
      MySQL::set_query(local_10,
                       "select count(*) from prod_sale_entry_%s where  ipg_no = %d and  m_id = %d",
                       local_15,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
    }
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::fetch(local_10);
      if (cVar1 == '\x01') {
        local_1c = 0;
        cVar1 = MySQL::get_int(local_10,0,&local_1c);
        if (cVar1 == '\x01') {
          *param_1 = (BuyItemInfo)0x1;
          if (*(short *)(param_1 + 4) <= local_1c) {
            *param_1 = (BuyItemInfo)0x0;
          }
          uVar2 = 0;
        }
        else {
          LogManager::logFormat
                    (1,"localjapan/Arad_DB_Query.cpp",
                     "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)"
                     ,0x485,"RESULT_COUNT MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0x10),(int)*(short *)(param_1 + 2));
          uVar2 = 0xffffffff;
        }
      }
      else {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)"
                   ,0x47b,
                   "[ERROR] DB Fetch Error => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0x10),(int)*(short *)(param_1 + 2));
        uVar2 = 0xffffffff;
      }
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::ITEM_QUERY::arad_sp_buy_item_check(ARAD_DATAS::BuyItemInfo&)",
                 0x472,"[ERROR] DB Exec Error => MID[%d], CHARIDX[%d], ITEMIDX[%d], CHECKTYPE[%d]",
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0x10),(int)*(short *)(param_1 + 2));
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
