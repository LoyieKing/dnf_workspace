# _GetTagCharacInven

`_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA`

`DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840aba2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840aba2  _ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA
#           DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)
# range [0x0840aba2, 0x0840ad29]
0840aba2 +0x000:  push   %ebp
0840aba3 +0x001:  mov    %esp,%ebp
0840aba5 +0x003:  sub    $0x68,%esp
0840aba8 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840abad +0x00b:  movl   $0x0,0x8(%esp)
0840abb5 +0x013:  movl   $0x3,0x4(%esp)
0840abbd +0x01b:  mov    %eax,(%esp)
0840abc0 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840abc5 +0x023:  mov    %eax,-0x14(%ebp)
0840abc8 +0x026:  mov    0x8(%ebp),%eax
0840abcb +0x029:  mov    %eax,0x8(%esp)
0840abcf +0x02d:  movl   $"seLect equipslot from inventory where charac_no = %d",0x4(%esp)
0840abd7 +0x035:  mov    -0x14(%ebp),%eax
0840abda +0x038:  mov    %eax,(%esp)
0840abdd +0x03b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840abe2 +0x040:  movl   $0x1,0x4(%esp)
0840abea +0x048:  mov    -0x14(%ebp),%eax
0840abed +0x04b:  mov    %eax,(%esp)
0840abf0 +0x04e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840abf5 +0x053:  xor    $0x1,%eax
0840abf8 +0x056:  test   %al,%al
0840abfa +0x058:  je     0840ac43 <+0xa1>
0840abfc +0x05a:  movl   $0x5,0xc(%esp)
0840ac04 +0x062:  movl   $0x23e2,0x8(%esp)
0840ac0c +0x06a:  movl   $&_ZZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0840ac14 +0x072:  lea    -0x44(%ebp),%eax
0840ac17 +0x075:  mov    %eax,(%esp)
0840ac1a +0x078:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840ac1f +0x07d:  mov    0x8(%ebp),%eax
0840ac22 +0x080:  mov    %eax,0x8(%esp)
0840ac26 +0x084:  movl   $"DB_LoadInventory::_GetTagCharacInven, exec ERROR charac_no=%u",0x4(%esp)
0840ac2e +0x08c:  lea    -0x44(%ebp),%eax
0840ac31 +0x08f:  mov    %eax,(%esp)
0840ac34 +0x092:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840ac39 +0x097:  mov    $0x0,%eax
0840ac3e +0x09c:  jmp    0840ad28 <+0x186>
0840ac43 +0x0a1:  mov    -0x14(%ebp),%eax
0840ac46 +0x0a4:  mov    %eax,(%esp)
0840ac49 +0x0a7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840ac4e +0x0ac:  xor    $0x1,%eax
0840ac51 +0x0af:  test   %al,%al
0840ac53 +0x0b1:  je     0840ac9c <+0xfa>
0840ac55 +0x0b3:  movl   $0x5,0xc(%esp)
0840ac5d +0x0bb:  movl   $0x23e8,0x8(%esp)
0840ac65 +0x0c3:  movl   $&_ZZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0840ac6d +0x0cb:  lea    -0x34(%ebp),%eax
0840ac70 +0x0ce:  mov    %eax,(%esp)
0840ac73 +0x0d1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840ac78 +0x0d6:  mov    0x8(%ebp),%eax
0840ac7b +0x0d9:  mov    %eax,0x8(%esp)
0840ac7f +0x0dd:  movl   $"DB_LoadInventory::_GetTagCharacInven, fetch ERROR charac_no=%u",0x4(%esp)
0840ac87 +0x0e5:  lea    -0x34(%ebp),%eax
0840ac8a +0x0e8:  mov    %eax,(%esp)
0840ac8d +0x0eb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840ac92 +0x0f0:  mov    $0x0,%eax
0840ac97 +0x0f5:  jmp    0840ad28 <+0x186>
0840ac9c +0x0fa:  movl   $0x0,-0x10(%ebp)
0840aca3 +0x101:  mov    0xc(%ebp),%eax
0840aca6 +0x104:  add    $0x262,%eax
0840acab +0x109:  movl   $0x3d,0x10(%esp)
0840acb3 +0x111:  movl   $0x2dc,0xc(%esp)
0840acbb +0x119:  mov    %eax,0x8(%esp)
0840acbf +0x11d:  mov    -0x10(%ebp),%eax
0840acc2 +0x120:  mov    %eax,0x4(%esp)
0840acc6 +0x124:  mov    -0x14(%ebp),%eax
0840acc9 +0x127:  mov    %eax,(%esp)
0840accc +0x12a:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0840acd1 +0x12f:  mov    %al,-0x9(%ebp)
0840acd4 +0x132:  movzbl -0x9(%ebp),%eax
0840acd8 +0x136:  xor    $0x1,%eax
0840acdb +0x139:  test   %al,%al
0840acdd +0x13b:  je     0840ad23 <+0x181>
0840acdf +0x13d:  movl   $0x5,0xc(%esp)
0840ace7 +0x145:  movl   $0x23f1,0x8(%esp)
0840acef +0x14d:  movl   $&_ZZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0840acf7 +0x155:  lea    -0x24(%ebp),%eax
0840acfa +0x158:  mov    %eax,(%esp)
0840acfd +0x15b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840ad02 +0x160:  mov    0x8(%ebp),%eax
0840ad05 +0x163:  mov    %eax,0x8(%esp)
0840ad09 +0x167:  movl   $"DB_LoadInventory::GetUserInven, get_compressed_blob_data ERROR charac_no=%u",0x4(%esp)
0840ad11 +0x16f:  lea    -0x24(%ebp),%eax
0840ad14 +0x172:  mov    %eax,(%esp)
0840ad17 +0x175:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840ad1c +0x17a:  mov    $0x0,%eax
0840ad21 +0x17f:  jmp    0840ad28 <+0x186>
0840ad23 +0x181:  mov    $0x1,%eax
0840ad28 +0x186:  leave
0840ad29 +0x187:  ret
```

## 反编译 C

```c
// DB_LoadInventory::_GetTagCharacInven @ 0x840aba2

/* DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*) */

undefined4 DB_LoadInventory::_GetTagCharacInven(uint param_1,TAG_CHARAC_INVEN_DATA *param_2)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  undefined4 local_14;
  char local_d;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,"seLect equipslot from inventory where charac_no = %d",param_1);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 == '\x01') {
      local_14 = 0;
      local_d = get_compressed_blob_data(local_18,0,(char *)(param_2 + 0x262),0x2dc,0x3d);
      if (local_d == '\x01') {
        uVar2 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_28,
                           "static bool DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)"
                           ,0x23f1,5);
        cMyTrace::operator()
                  (local_28,
                   "DB_LoadInventory::GetUserInven, get_compressed_blob_data ERROR charac_no=%u",
                   param_1);
        uVar2 = 0;
      }
    }
    else {
      cMyTrace::cMyTrace(local_38,
                         "static bool DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)"
                         ,0x23e8,5);
      cMyTrace::operator()
                (local_38,"DB_LoadInventory::_GetTagCharacInven, fetch ERROR charac_no=%u",param_1);
      uVar2 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_48,
                       "static bool DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)"
                       ,0x23e2,5);
    cMyTrace::operator()
              (local_48,"DB_LoadInventory::_GetTagCharacInven, exec ERROR charac_no=%u",param_1);
    uVar2 = 0;
  }
  return uVar2;
}
```
