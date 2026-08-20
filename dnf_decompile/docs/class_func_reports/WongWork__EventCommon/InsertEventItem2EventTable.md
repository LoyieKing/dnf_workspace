# InsertEventItem2EventTable

`_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj`

`WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::EventCommon` | `0x083f9b54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f9b54  _ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj
#           WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x083f9b54, 0x083f9c7a]
083f9b54 +0x000:  push   %ebp
083f9b55 +0x001:  mov    %esp,%ebp
083f9b57 +0x003:  sub    $0x58,%esp
083f9b5a +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083f9b5f +0x00b:  movl   $0x0,0x8(%esp)
083f9b67 +0x013:  movl   $0x3,0x4(%esp)
083f9b6f +0x01b:  mov    %eax,(%esp)
083f9b72 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083f9b77 +0x023:  mov    %eax,-0xc(%ebp)
083f9b7a +0x026:  mov    0x14(%ebp),%eax
083f9b7d +0x029:  mov    %eax,0x14(%esp)
083f9b81 +0x02d:  mov    0x10(%ebp),%eax
083f9b84 +0x030:  mov    %eax,0x10(%esp)
083f9b88 +0x034:  mov    0xc(%ebp),%eax
083f9b8b +0x037:  mov    %eax,0xc(%esp)
083f9b8f +0x03b:  mov    0x8(%ebp),%eax
083f9b92 +0x03e:  mov    %eax,0x8(%esp)
083f9b96 +0x042:  movl   $"inSert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())",0x4(%esp)
083f9b9e +0x04a:  mov    -0xc(%ebp),%eax
083f9ba1 +0x04d:  mov    %eax,(%esp)
083f9ba4 +0x050:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
083f9ba9 +0x055:  movl   $0x1,0x4(%esp)
083f9bb1 +0x05d:  mov    -0xc(%ebp),%eax
083f9bb4 +0x060:  mov    %eax,(%esp)
083f9bb7 +0x063:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
083f9bbc +0x068:  xor    $0x1,%eax
083f9bbf +0x06b:  test   %al,%al
083f9bc1 +0x06d:  je     083f9c1c <+0xc8>
083f9bc3 +0x06f:  movl   $0x0,0xc(%esp)
083f9bcb +0x077:  movl   $0x25,0x8(%esp)
083f9bd3 +0x07f:  movl   $&_ZZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjjE19__PRETTY_FUNCTION__,0x4(%esp)
083f9bdb +0x087:  lea    -0x2c(%ebp),%eax
083f9bde +0x08a:  mov    %eax,(%esp)
083f9be1 +0x08d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f9be6 +0x092:  mov    0x14(%ebp),%eax
083f9be9 +0x095:  mov    %eax,0x14(%esp)
083f9bed +0x099:  mov    0x10(%ebp),%eax
083f9bf0 +0x09c:  mov    %eax,0x10(%esp)
083f9bf4 +0x0a0:  mov    0xc(%ebp),%eax
083f9bf7 +0x0a3:  mov    %eax,0xc(%esp)
083f9bfb +0x0a7:  mov    0x8(%ebp),%eax
083f9bfe +0x0aa:  mov    %eax,0x8(%esp)
083f9c02 +0x0ae:  movl   $"FAIL : insert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())",0x4(%esp)
083f9c0a +0x0b6:  lea    -0x2c(%ebp),%eax
083f9c0d +0x0b9:  mov    %eax,(%esp)
083f9c10 +0x0bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f9c15 +0x0c1:  mov    $0x0,%eax
083f9c1a +0x0c6:  jmp    083f9c79 <+0x125>
083f9c1c +0x0c8:  movl   $0x0,0xc(%esp)
083f9c24 +0x0d0:  movl   $0x28,0x8(%esp)
083f9c2c +0x0d8:  movl   $&_ZZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjjE19__PRETTY_FUNCTION__,0x4(%esp)
083f9c34 +0x0e0:  lea    -0x1c(%ebp),%eax
083f9c37 +0x0e3:  mov    %eax,(%esp)
083f9c3a +0x0e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f9c3f +0x0eb:  mov    0x14(%ebp),%eax
083f9c42 +0x0ee:  mov    %eax,0x14(%esp)
083f9c46 +0x0f2:  mov    0x10(%ebp),%eax
083f9c49 +0x0f5:  mov    %eax,0x10(%esp)
083f9c4d +0x0f9:  mov    0xc(%ebp),%eax
083f9c50 +0x0fc:  mov    %eax,0xc(%esp)
083f9c54 +0x100:  mov    0x8(%ebp),%eax
083f9c57 +0x103:  mov    %eax,0x8(%esp)
083f9c5b +0x107:  movl   $"SUCCESS : insert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())",0x4(%esp)
083f9c63 +0x10f:  lea    -0x1c(%ebp),%eax
083f9c66 +0x112:  mov    %eax,(%esp)
083f9c69 +0x115:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f9c6e +0x11a:  mov    -0xc(%ebp),%eax
083f9c71 +0x11d:  mov    %eax,(%esp)
083f9c74 +0x120:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
083f9c79 +0x125:  leave
083f9c7a +0x126:  ret
```

## 反编译 C

```c
// WongWork::EventCommon::InsertEventItem2EventTable @ 0x83f9b54

/* WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4
WongWork::EventCommon::InsertEventItem2EventTable
          (uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "inSert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())"
                   ,param_1,param_2,param_3,param_4);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    cMyTrace::cMyTrace(local_20,
                       "unsigned int WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)"
                       ,0x28,0);
    cMyTrace::operator()
              (local_20,
               "SUCCESS : insert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())"
               ,param_1,param_2,param_3,param_4);
    uVar2 = DBCommon::GetIdentity(local_10);
  }
  else {
    cMyTrace::cMyTrace(local_30,
                       "unsigned int WongWork::EventCommon::InsertEventItem2EventTable(unsigned int, unsigned int, unsigned int, unsigned int)"
                       ,0x25,0);
    cMyTrace::operator()
              (local_30,
               "FAIL : insert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time) values(%d,%d,%d,%d,now())"
               ,param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}
```
