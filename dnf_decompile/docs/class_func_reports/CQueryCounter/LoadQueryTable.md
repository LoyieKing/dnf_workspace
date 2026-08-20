# LoadQueryTable

`_ZN13CQueryCounter14LoadQueryTableEv`

`CQueryCounter::LoadQueryTable()`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ed18a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ed18a  _ZN13CQueryCounter14LoadQueryTableEv
#           CQueryCounter::LoadQueryTable()
# range [0x085ed18a, 0x085ed3a1]
085ed18a +0x000:  push   %ebp
085ed18b +0x001:  mov    %esp,%ebp
085ed18d +0x003:  sub    $0x6068,%esp
085ed193 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
085ed198 +0x00e:  movl   $0x0,0x8(%esp)
085ed1a0 +0x016:  movl   $0x6,0x4(%esp)
085ed1a8 +0x01e:  mov    %eax,(%esp)
085ed1ab +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
085ed1b0 +0x026:  mov    %eax,-0x18(%ebp)
085ed1b3 +0x029:  movl   $0x0,-0x14(%ebp)
085ed1ba +0x030:  movl   $"seLect q_id,query from log_query_ref",0x4(%esp)
085ed1c2 +0x038:  mov    -0x18(%ebp),%eax
085ed1c5 +0x03b:  mov    %eax,(%esp)
085ed1c8 +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
085ed1cd +0x043:  movl   $0x1,0x4(%esp)
085ed1d5 +0x04b:  mov    -0x18(%ebp),%eax
085ed1d8 +0x04e:  mov    %eax,(%esp)
085ed1db +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
085ed1e0 +0x056:  xor    $0x1,%eax
085ed1e3 +0x059:  test   %al,%al
085ed1e5 +0x05b:  je     085ed1f1 <+0x67>
085ed1e7 +0x05d:  mov    $0x0,%eax
085ed1ec +0x062:  jmp    085ed3a0 <+0x216>
085ed1f1 +0x067:  mov    -0x18(%ebp),%eax
085ed1f4 +0x06a:  mov    %eax,(%esp)
085ed1f7 +0x06d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
085ed1fc +0x072:  mov    %eax,-0x10(%ebp)
085ed1ff +0x075:  movl   $0x0,-0xc(%ebp)
085ed206 +0x07c:  movl   $0x0,-0xc(%ebp)
085ed20d +0x083:  jmp    085ed38a <+0x200>
085ed212 +0x088:  movl   $0x0,-0x4c(%ebp)
085ed219 +0x08f:  lea    -0x604d(%ebp),%eax
085ed21f +0x095:  mov    $0x6001,%edx
085ed224 +0x09a:  mov    %edx,0x8(%esp)
085ed228 +0x09e:  movl   $0x0,0x4(%esp)
085ed230 +0x0a6:  mov    %eax,(%esp)
085ed233 +0x0a9:  call   0807dcc0 <_init+0x5b8>
085ed238 +0x0ae:  mov    -0x18(%ebp),%eax
085ed23b +0x0b1:  mov    %eax,(%esp)
085ed23e +0x0b4:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
085ed243 +0x0b9:  xor    $0x1,%eax
085ed246 +0x0bc:  test   %al,%al
085ed248 +0x0be:  je     085ed28a <+0x100>
085ed24a +0x0c0:  movl   $0x5,0xc(%esp)
085ed252 +0x0c8:  movl   $0x22f,0x8(%esp)
085ed25a +0x0d0:  movl   $&_ZZN13CQueryCounter14LoadQueryTableEvE19__PRETTY_FUNCTION__,0x4(%esp)
085ed262 +0x0d8:  lea    -0x48(%ebp),%eax
085ed265 +0x0db:  mov    %eax,(%esp)
085ed268 +0x0de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed26d +0x0e3:  movl   $"LoadQueryTable, fatch ERROR",0x4(%esp)
085ed275 +0x0eb:  lea    -0x48(%ebp),%eax
085ed278 +0x0ee:  mov    %eax,(%esp)
085ed27b +0x0f1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed280 +0x0f6:  mov    $0x0,%eax
085ed285 +0x0fb:  jmp    085ed3a0 <+0x216>
085ed28a +0x100:  lea    -0x4c(%ebp),%eax
085ed28d +0x103:  mov    %eax,0x8(%esp)
085ed291 +0x107:  movl   $0x0,0x4(%esp)
085ed299 +0x10f:  mov    -0x18(%ebp),%eax
085ed29c +0x112:  mov    %eax,(%esp)
085ed29f +0x115:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
085ed2a4 +0x11a:  xor    $0x1,%eax
085ed2a7 +0x11d:  test   %al,%al
085ed2a9 +0x11f:  je     085ed2eb <+0x161>
085ed2ab +0x121:  movl   $0x5,0xc(%esp)
085ed2b3 +0x129:  movl   $0x235,0x8(%esp)
085ed2bb +0x131:  movl   $&_ZZN13CQueryCounter14LoadQueryTableEvE19__PRETTY_FUNCTION__,0x4(%esp)
085ed2c3 +0x139:  lea    -0x38(%ebp),%eax
085ed2c6 +0x13c:  mov    %eax,(%esp)
085ed2c9 +0x13f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed2ce +0x144:  movl   $"LoadQueryTable, get_int(0) ERROR",0x4(%esp)
085ed2d6 +0x14c:  lea    -0x38(%ebp),%eax
085ed2d9 +0x14f:  mov    %eax,(%esp)
085ed2dc +0x152:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed2e1 +0x157:  mov    $0x0,%eax
085ed2e6 +0x15c:  jmp    085ed3a0 <+0x216>
085ed2eb +0x161:  movl   $0x6000,0xc(%esp)
085ed2f3 +0x169:  lea    -0x604d(%ebp),%eax
085ed2f9 +0x16f:  mov    %eax,0x8(%esp)
085ed2fd +0x173:  movl   $0x1,0x4(%esp)
085ed305 +0x17b:  mov    -0x18(%ebp),%eax
085ed308 +0x17e:  mov    %eax,(%esp)
085ed30b +0x181:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
085ed310 +0x186:  xor    $0x1,%eax
085ed313 +0x189:  test   %al,%al
085ed315 +0x18b:  je     085ed354 <+0x1ca>
085ed317 +0x18d:  movl   $0x5,0xc(%esp)
085ed31f +0x195:  movl   $0x23b,0x8(%esp)
085ed327 +0x19d:  movl   $&_ZZN13CQueryCounter14LoadQueryTableEvE19__PRETTY_FUNCTION__,0x4(%esp)
085ed32f +0x1a5:  lea    -0x28(%ebp),%eax
085ed332 +0x1a8:  mov    %eax,(%esp)
085ed335 +0x1ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed33a +0x1b0:  movl   $"LoadQueryTable, get_str(1) ERROR",0x4(%esp)
085ed342 +0x1b8:  lea    -0x28(%ebp),%eax
085ed345 +0x1bb:  mov    %eax,(%esp)
085ed348 +0x1be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed34d +0x1c3:  mov    $0x0,%eax
085ed352 +0x1c8:  jmp    085ed3a0 <+0x216>
085ed354 +0x1ca:  mov    -0x4c(%ebp),%eax
085ed357 +0x1cd:  movl   $0x0,0xc(%esp)
085ed35f +0x1d5:  mov    %eax,0x8(%esp)
085ed363 +0x1d9:  lea    -0x604d(%ebp),%eax
085ed369 +0x1df:  mov    %eax,0x4(%esp)
085ed36d +0x1e3:  mov    0x8(%ebp),%eax
085ed370 +0x1e6:  mov    %eax,(%esp)
085ed373 +0x1e9:  call   085ed5ae <_ZN13CQueryCounter13RegisterQueryEPKcii>  ; CQueryCounter::RegisterQuery(char const*, int, int)
085ed378 +0x1ee:  xor    $0x1,%eax
085ed37b +0x1f1:  test   %al,%al
085ed37d +0x1f3:  je     085ed386 <+0x1fc>
085ed37f +0x1f5:  mov    $0x0,%eax
085ed384 +0x1fa:  jmp    085ed3a0 <+0x216>
085ed386 +0x1fc:  addl   $0x1,-0xc(%ebp)
085ed38a +0x200:  mov    -0xc(%ebp),%eax
085ed38d +0x203:  cmp    -0x10(%ebp),%eax
085ed390 +0x206:  setl   %al
085ed393 +0x209:  test   %al,%al
085ed395 +0x20b:  jne    085ed212 <+0x88>
085ed39b +0x211:  mov    $0x1,%eax
085ed3a0 +0x216:  leave
085ed3a1 +0x217:  ret
```

## 反编译 C

```c
// CQueryCounter::LoadQueryTable @ 0x85ed18a

/* CQueryCounter::LoadQueryTable() */

undefined4 __thiscall CQueryCounter::LoadQueryTable(CQueryCounter *this)

{
  char cVar1;
  undefined4 uVar2;
  char local_6051 [24577];
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = 0;
  MySQL::set_query(local_1c,"seLect q_id,query from log_query_ref");
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_14 = MySQL::get_n_rows(local_1c);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      local_50 = 0;
      memset(local_6051,0,0x6001);
      cVar1 = MySQL::fetch(local_1c);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_4c,"bool CQueryCounter::LoadQueryTable()",0x22f,5);
        cMyTrace::operator()(local_4c,"LoadQueryTable, fatch ERROR");
        return 0;
      }
      cVar1 = MySQL::get_int(local_1c,0,&local_50);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_3c,"bool CQueryCounter::LoadQueryTable()",0x235,5);
        cMyTrace::operator()(local_3c,"LoadQueryTable, get_int(0) ERROR");
        return 0;
      }
      cVar1 = MySQL::get_str(local_1c,1,local_6051,0x6000);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_2c,"bool CQueryCounter::LoadQueryTable()",0x23b,5);
        cMyTrace::operator()(local_2c,"LoadQueryTable, get_str(1) ERROR");
        return 0;
      }
      cVar1 = RegisterQuery((char *)this,(int)local_6051,local_50);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
