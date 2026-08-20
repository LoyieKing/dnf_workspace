# dispatch

`_ZN23DB_InsertQueryCounterDb8dispatchEiiP6Stream`

`DB_InsertQueryCounterDb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertQueryCounterDb` | `0x08425b0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425b0c  _ZN23DB_InsertQueryCounterDb8dispatchEiiP6Stream
#           DB_InsertQueryCounterDb::dispatch(int, int, Stream*)
# range [0x08425b0c, 0x08425cdd]
08425b0c +0x000:  push   %ebp
08425b0d +0x001:  mov    %esp,%ebp
08425b0f +0x003:  push   %esi
08425b10 +0x004:  push   %ebx
08425b11 +0x005:  sub    $0x6030,%esp
08425b17 +0x00b:  movl   $0x0,-0x10(%ebp)
08425b1e +0x012:  movl   $0x0,-0x14(%ebp)
08425b25 +0x019:  lea    -0x601d(%ebp),%eax
08425b2b +0x01f:  mov    $0x6001,%edx
08425b30 +0x024:  mov    %edx,0x8(%esp)
08425b34 +0x028:  movl   $0x0,0x4(%esp)
08425b3c +0x030:  mov    %eax,(%esp)
08425b3f +0x033:  call   0807dcc0 <_init+0x5b8>
08425b44 +0x038:  lea    -0x14(%ebp),%eax
08425b47 +0x03b:  mov    %eax,0x4(%esp)
08425b4b +0x03f:  mov    0x14(%ebp),%eax
08425b4e +0x042:  mov    %eax,(%esp)
08425b51 +0x045:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08425b56 +0x04a:  mov    -0x14(%ebp),%eax
08425b59 +0x04d:  mov    %eax,0x8(%esp)
08425b5d +0x051:  lea    -0x601d(%ebp),%eax
08425b63 +0x057:  mov    %eax,0x4(%esp)
08425b67 +0x05b:  mov    0x14(%ebp),%eax
08425b6a +0x05e:  mov    %eax,(%esp)
08425b6d +0x061:  call   0861c7fa <_ZN6Stream10get_binaryEPvi>  ; Stream::get_binary(void*, int)
08425b72 +0x066:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08425b77 +0x06b:  movl   $0x0,0x8(%esp)
08425b7f +0x073:  movl   $0x2,0x4(%esp)
08425b87 +0x07b:  mov    %eax,(%esp)
08425b8a +0x07e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08425b8f +0x083:  mov    %eax,-0xc(%ebp)
08425b92 +0x086:  mov    -0xc(%ebp),%eax
08425b95 +0x089:  mov    %eax,(%esp)
08425b98 +0x08c:  call   082a4202 <_GLOBAL__I__ZN4CLog5this_E+0x629>  ; global constructors keyed to CLog::this_+0x629
08425b9d +0x091:  lea    -0x10(%ebp),%edx
08425ba0 +0x094:  mov    %edx,0x8(%esp)
08425ba4 +0x098:  lea    -0x601d(%ebp),%edx
08425baa +0x09e:  mov    %edx,0x4(%esp)
08425bae +0x0a2:  mov    %eax,(%esp)
08425bb1 +0x0a5:  call   085ed3a2 <_ZN13CQueryCounter9SaveQueryEPKcRi>  ; CQueryCounter::SaveQuery(char const*, int&)
08425bb6 +0x0aa:  xor    $0x1,%eax
08425bb9 +0x0ad:  test   %al,%al
08425bbb +0x0af:  je     08425bc7 <+0xbb>
08425bbd +0x0b1:  mov    $0x0,%ebx
08425bc2 +0x0b6:  jmp    08425cd2 <+0x1c6>
08425bc7 +0x0bb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08425bcc +0x0c0:  movl   $0x63c1,0x8(%esp)
08425bd4 +0x0c8:  movl   $"DBThread.cpp",0x4(%esp)
08425bdc +0x0d0:  mov    %eax,(%esp)
08425bdf +0x0d3:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08425be4 +0x0d8:  movl   $0x1,0x8(%esp)
08425bec +0x0e0:  mov    %eax,0x4(%esp)
08425bf0 +0x0e4:  lea    -0x1c(%ebp),%eax
08425bf3 +0x0e7:  mov    %eax,(%esp)
08425bf6 +0x0ea:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08425bfb +0x0ef:  lea    -0x1c(%ebp),%eax
08425bfe +0x0f2:  mov    %eax,(%esp)
08425c01 +0x0f5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425c06 +0x0fa:  movl   $0xbf,0x4(%esp)
08425c0e +0x102:  mov    %eax,(%esp)
08425c11 +0x105:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425c16 +0x10a:  lea    -0x1c(%ebp),%eax
08425c19 +0x10d:  mov    %eax,(%esp)
08425c1c +0x110:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425c21 +0x115:  movl   $0xffffffff,0x4(%esp)
08425c29 +0x11d:  mov    %eax,(%esp)
08425c2c +0x120:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425c31 +0x125:  mov    -0x10(%ebp),%ebx
08425c34 +0x128:  lea    -0x1c(%ebp),%eax
08425c37 +0x12b:  mov    %eax,(%esp)
08425c3a +0x12e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425c3f +0x133:  mov    %ebx,0x4(%esp)
08425c43 +0x137:  mov    %eax,(%esp)
08425c46 +0x13a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425c4b +0x13f:  mov    -0x14(%ebp),%ebx
08425c4e +0x142:  lea    -0x1c(%ebp),%eax
08425c51 +0x145:  mov    %eax,(%esp)
08425c54 +0x148:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425c59 +0x14d:  mov    %ebx,0x4(%esp)
08425c5d +0x151:  mov    %eax,(%esp)
08425c60 +0x154:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425c65 +0x159:  mov    -0x14(%ebp),%ebx
08425c68 +0x15c:  lea    -0x1c(%ebp),%eax
08425c6b +0x15f:  mov    %eax,(%esp)
08425c6e +0x162:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08425c73 +0x167:  mov    %ebx,0x8(%esp)
08425c77 +0x16b:  lea    -0x601d(%ebp),%edx
08425c7d +0x171:  mov    %edx,0x4(%esp)
08425c81 +0x175:  mov    %eax,(%esp)
08425c84 +0x178:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08425c89 +0x17d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08425c8e +0x182:  lea    -0x1c(%ebp),%edx
08425c91 +0x185:  mov    %edx,0x8(%esp)
08425c95 +0x189:  movl   $0x4,0x4(%esp)
08425c9d +0x191:  mov    %eax,(%esp)
08425ca0 +0x194:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08425ca5 +0x199:  mov    $0x1,%ebx
08425caa +0x19e:  lea    -0x1c(%ebp),%eax
08425cad +0x1a1:  mov    %eax,(%esp)
08425cb0 +0x1a4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08425cb5 +0x1a9:  jmp    08425cd2 <+0x1c6>
08425cb7 +0x1ab:  mov    %edx,%ebx
08425cb9 +0x1ad:  mov    %eax,%esi
08425cbb +0x1af:  lea    -0x1c(%ebp),%eax
08425cbe +0x1b2:  mov    %eax,(%esp)
08425cc1 +0x1b5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08425cc6 +0x1ba:  mov    %esi,%eax
08425cc8 +0x1bc:  mov    %ebx,%edx
08425cca +0x1be:  mov    %eax,(%esp)
08425ccd +0x1c1:  call   08ae3750 <_Unwind_Resume>
08425cd2 +0x1c6:  mov    %ebx,%eax
08425cd4 +0x1c8:  add    $0x6030,%esp
08425cda +0x1ce:  pop    %ebx
08425cdb +0x1cf:  pop    %esi
08425cdc +0x1d0:  pop    %ebp
08425cdd +0x1d1:  ret
```

## 反编译 C

```c
// DB_InsertQueryCounterDb::dispatch @ 0x8425b0c

/* DB_InsertQueryCounterDb::dispatch(int, int, Stream*) */

bool DB_InsertQueryCounterDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  CQueryCounter *this;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  Stream *in_stack_00000010;
  char local_6021 [24577];
  CStreamGuard local_20 [8];
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  memset(local_6021,0,0x6001);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::get_binary(in_stack_00000010,local_6021,local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this = (CQueryCounter *)MySQL::GetQueryCounter(local_10);
  cVar2 = CQueryCounter::SaveQuery(this,local_6021,&local_14);
  if (cVar2 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x63c1);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08425c11 to 08425ca4 has its CatchHandler @ 08425cb7 */
    CStreamGuard::operator<<(pCVar4,0xbf);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar1 = local_14;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,iVar1);
    iVar1 = local_18;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,iVar1);
    iVar1 = local_18;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    CStreamGuard::put_binary(pCVar4,local_6021,iVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_20);
    CStreamGuard::~CStreamGuard(local_20);
  }
  return cVar2 == '\x01';
}
```
