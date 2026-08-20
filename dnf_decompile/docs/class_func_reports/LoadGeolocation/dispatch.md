# dispatch

`_ZN15LoadGeolocation8dispatchEiiP6Stream`

`LoadGeolocation::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `LoadGeolocation` | `0x0815b010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b010  _ZN15LoadGeolocation8dispatchEiiP6Stream
#           LoadGeolocation::dispatch(int, int, Stream*)
# range [0x0815b010, 0x0815b265]
0815b010 +0x000:  push   %ebp
0815b011 +0x001:  mov    %esp,%ebp
0815b013 +0x003:  push   %esi
0815b014 +0x004:  push   %ebx
0815b015 +0x005:  sub    $0x310,%esp
0815b01b +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815b020 +0x010:  movl   $0x0,0x8(%esp)
0815b028 +0x018:  movl   $0x1,0x4(%esp)
0815b030 +0x020:  mov    %eax,(%esp)
0815b033 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815b038 +0x028:  mov    %eax,-0x14(%ebp)
0815b03b +0x02b:  cmpl   $0x0,-0x14(%ebp)
0815b03f +0x02f:  jne    0815b06d <+0x5d>
0815b041 +0x031:  movl   $0x4,(%esp)
0815b048 +0x038:  call   08725800 <__cxa_allocate_exception>
0815b04d +0x03d:  mov    %eax,%edx
0815b04f +0x03f:  movl   $"handle null",(%edx)
0815b055 +0x045:  movl   $0x0,0x8(%esp)
0815b05d +0x04d:  movl   $&_ZTIPKc,0x4(%esp)
0815b065 +0x055:  mov    %eax,(%esp)
0815b068 +0x058:  call   08724c50 <__cxa_throw>
0815b06d +0x05d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815b072 +0x062:  mov    %eax,(%esp)
0815b075 +0x065:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
0815b07a +0x06a:  mov    %eax,-0x10(%ebp)
0815b07d +0x06d:  mov    -0x10(%ebp),%eax
0815b080 +0x070:  mov    %eax,0x8(%esp)
0815b084 +0x074:  movl   $"seLect country_code from geo_allow_country where server_group = %d",0x4(%esp)
0815b08c +0x07c:  mov    -0x14(%ebp),%eax
0815b08f +0x07f:  mov    %eax,(%esp)
0815b092 +0x082:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815b097 +0x087:  movl   $0x1,0x4(%esp)
0815b09f +0x08f:  mov    -0x14(%ebp),%eax
0815b0a2 +0x092:  mov    %eax,(%esp)
0815b0a5 +0x095:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815b0aa +0x09a:  xor    $0x1,%eax
0815b0ad +0x09d:  test   %al,%al
0815b0af +0x09f:  je     0815b0dd <+0xcd>
0815b0b1 +0x0a1:  movl   $0x4,(%esp)
0815b0b8 +0x0a8:  call   08725800 <__cxa_allocate_exception>
0815b0bd +0x0ad:  mov    %eax,%edx
0815b0bf +0x0af:  movl   $"exec",(%edx)
0815b0c5 +0x0b5:  movl   $0x0,0x8(%esp)
0815b0cd +0x0bd:  movl   $&_ZTIPKc,0x4(%esp)
0815b0d5 +0x0c5:  mov    %eax,(%esp)
0815b0d8 +0x0c8:  call   08724c50 <__cxa_throw>
0815b0dd +0x0cd:  movl   $0x0,-0x24(%ebp)
0815b0e4 +0x0d4:  movl   $0x0,-0x20(%ebp)
0815b0eb +0x0db:  movl   $0x0,-0x1c(%ebp)
0815b0f2 +0x0e2:  movl   $0x0,-0x18(%ebp)
0815b0f9 +0x0e9:  lea    -0x2f8(%ebp),%eax
0815b0ff +0x0ef:  mov    %eax,(%esp)
0815b102 +0x0f2:  call   0815de9c <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x110>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x110
0815b107 +0x0f7:  jmp    0815b1bf <+0x1af>
0815b10c +0x0fc:  movl   $0x10,0x8(%esp)
0815b114 +0x104:  movl   $0x0,0x4(%esp)
0815b11c +0x10c:  lea    -0x24(%ebp),%eax
0815b11f +0x10f:  mov    %eax,(%esp)
0815b122 +0x112:  call   0807dcc0 <_init+0x5b8>
0815b127 +0x117:  movl   $0x10,0xc(%esp)
0815b12f +0x11f:  lea    -0x24(%ebp),%eax
0815b132 +0x122:  mov    %eax,0x8(%esp)
0815b136 +0x126:  movl   $0x0,0x4(%esp)
0815b13e +0x12e:  mov    -0x14(%ebp),%eax
0815b141 +0x131:  mov    %eax,(%esp)
0815b144 +0x134:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0815b149 +0x139:  xor    $0x1,%eax
0815b14c +0x13c:  test   %al,%al
0815b14e +0x13e:  je     0815b17c <+0x16c>
0815b150 +0x140:  movl   $0x4,(%esp)
0815b157 +0x147:  call   08725800 <__cxa_allocate_exception>
0815b15c +0x14c:  mov    %eax,%edx
0815b15e +0x14e:  movl   $"get_str",(%edx)
0815b164 +0x154:  movl   $0x0,0x8(%esp)
0815b16c +0x15c:  movl   $&_ZTIPKc,0x4(%esp)
0815b174 +0x164:  mov    %eax,(%esp)
0815b177 +0x167:  call   08724c50 <__cxa_throw>
0815b17c +0x16c:  lea    -0x24(%ebp),%eax
0815b17f +0x16f:  mov    %eax,0x4(%esp)
0815b183 +0x173:  lea    -0x2f8(%ebp),%eax
0815b189 +0x179:  mov    %eax,(%esp)
0815b18c +0x17c:  call   0815decc <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x140>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x140
0815b191 +0x181:  mov    -0x2f8(%ebp),%eax
0815b197 +0x187:  cmp    $0x2b,%eax
0815b19a +0x18a:  jbe    0815b1bf <+0x1af>
0815b19c +0x18c:  lea    -0x2f8(%ebp),%eax
0815b1a2 +0x192:  mov    %eax,0x4(%esp)
0815b1a6 +0x196:  mov    0x8(%ebp),%eax
0815b1a9 +0x199:  mov    %eax,(%esp)
0815b1ac +0x19c:  call   0815b266 <_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE>  ; LoadGeolocation::sendCountryData(Taiwan::SigLoadGeolocation&)
0815b1b1 +0x1a1:  lea    -0x2f8(%ebp),%eax
0815b1b7 +0x1a7:  mov    %eax,(%esp)
0815b1ba +0x1aa:  call   0815de9c <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x110>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x110
0815b1bf +0x1af:  mov    -0x14(%ebp),%eax
0815b1c2 +0x1b2:  mov    %eax,(%esp)
0815b1c5 +0x1b5:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0815b1ca +0x1ba:  test   %al,%al
0815b1cc +0x1bc:  jne    0815b10c <+0xfc>
0815b1d2 +0x1c2:  lea    -0x2f8(%ebp),%eax
0815b1d8 +0x1c8:  mov    %eax,0x4(%esp)
0815b1dc +0x1cc:  mov    0x8(%ebp),%eax
0815b1df +0x1cf:  mov    %eax,(%esp)
0815b1e2 +0x1d2:  call   0815b266 <_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE>  ; LoadGeolocation::sendCountryData(Taiwan::SigLoadGeolocation&)
0815b1e7 +0x1d7:  mov    $0x1,%ebx
0815b1ec +0x1dc:  jmp    0815b25a <+0x24a>
0815b1ee +0x1de:  cmp    $0x1,%edx
0815b1f1 +0x1e1:  je     0815b1fb <+0x1eb>
0815b1f3 +0x1e3:  mov    %eax,(%esp)
0815b1f6 +0x1e6:  call   08ae3750 <_Unwind_Resume>
0815b1fb +0x1eb:  mov    %eax,(%esp)
0815b1fe +0x1ee:  call   08725ce0 <__cxa_begin_catch>
0815b203 +0x1f3:  mov    %eax,-0xc(%ebp)
0815b206 +0x1f6:  mov    -0xc(%ebp),%eax
0815b209 +0x1f9:  mov    %eax,0x14(%esp)
0815b20d +0x1fd:  movl   $"[Taiwan, GeoIP] select geo_allow_country. (error:%s)",0x10(%esp)
0815b215 +0x205:  movl   $0x13c,0xc(%esp)
0815b21d +0x20d:  movl   $&_ZZN15LoadGeolocation8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815b225 +0x215:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815b22d +0x21d:  movl   $0x1,(%esp)
0815b234 +0x224:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815b239 +0x229:  mov    $0x0,%ebx
0815b23e +0x22e:  call   08725c30 <__cxa_end_catch>
0815b243 +0x233:  jmp    0815b25a <+0x24a>
0815b245 +0x235:  mov    %edx,%ebx
0815b247 +0x237:  mov    %eax,%esi
0815b249 +0x239:  call   08725c30 <__cxa_end_catch>
0815b24e +0x23e:  mov    %esi,%eax
0815b250 +0x240:  mov    %ebx,%edx
0815b252 +0x242:  mov    %eax,(%esp)
0815b255 +0x245:  call   08ae3750 <_Unwind_Resume>
0815b25a +0x24a:  mov    %ebx,%eax
0815b25c +0x24c:  add    $0x310,%esp
0815b262 +0x252:  pop    %ebx
0815b263 +0x253:  pop    %esi
0815b264 +0x254:  pop    %ebp
0815b265 +0x255:  ret
```

## 反编译 C

```c
// LoadGeolocation::dispatch @ 0x815b010

/* LoadGeolocation::dispatch(int, int, Stream*) */

undefined4 LoadGeolocation::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  CEnvironment *this;
  uint local_2fc [181];
  char local_28 [16];
  MySQL *local_18;
  undefined4 local_14;
  
                    /* try { // try from 0815b033 to 0815b1e6 has its CatchHandler @ 0815b1ee */
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_18 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  this = (CEnvironment *)G_CEnvironment();
  local_14 = CEnvironment::get_server_group(this);
  MySQL::set_query(local_18,"seLect country_code from geo_allow_country where server_group = %d",
                   local_14);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  Taiwan::SigLoadGeolocation::init((SigLoadGeolocation *)local_2fc);
  while( true ) {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 == '\0') {
      sendCountryData((LoadGeolocation *)param_1,(SigLoadGeolocation *)local_2fc);
      return 1;
    }
    memset(local_28,0,0x10);
    cVar1 = MySQL::get_str(local_18,0,local_28,0x10);
    if (cVar1 != '\x01') break;
    Taiwan::SigLoadGeolocation::set((SigLoadGeolocation *)local_2fc,local_28);
    if (0x2b < local_2fc[0]) {
      sendCountryData((LoadGeolocation *)param_1,(SigLoadGeolocation *)local_2fc);
      Taiwan::SigLoadGeolocation::init((SigLoadGeolocation *)local_2fc);
    }
  }
  puVar2 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar2 = "get_str";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&char_const*::typeinfo,0);
}
```
