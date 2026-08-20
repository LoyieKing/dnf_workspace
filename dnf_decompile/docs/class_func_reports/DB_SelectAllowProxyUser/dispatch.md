# dispatch

`_ZN23DB_SelectAllowProxyUser8dispatchEiiP6Stream`

`DB_SelectAllowProxyUser::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SelectAllowProxyUser` | `0x0844d17c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844d17c  _ZN23DB_SelectAllowProxyUser8dispatchEiiP6Stream
#           DB_SelectAllowProxyUser::dispatch(int, int, Stream*)
# range [0x0844d17c, 0x0844d2d3]
0844d17c +0x000:  push   %ebp
0844d17d +0x001:  mov    %esp,%ebp
0844d17f +0x003:  push   %esi
0844d180 +0x004:  push   %ebx
0844d181 +0x005:  sub    $0x20,%esp
0844d184 +0x008:  movl   $0x0,-0x10(%ebp)
0844d18b +0x00f:  lea    -0x10(%ebp),%eax
0844d18e +0x012:  mov    %eax,0x4(%esp)
0844d192 +0x016:  mov    0x14(%ebp),%eax
0844d195 +0x019:  mov    %eax,(%esp)
0844d198 +0x01c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844d19d +0x021:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844d1a2 +0x026:  movl   $0x0,0x8(%esp)
0844d1aa +0x02e:  movl   $0x6,0x4(%esp)
0844d1b2 +0x036:  mov    %eax,(%esp)
0844d1b5 +0x039:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844d1ba +0x03e:  mov    %eax,-0xc(%ebp)
0844d1bd +0x041:  mov    -0x10(%ebp),%eax
0844d1c0 +0x044:  movl   $0x0,0x4(%esp)
0844d1c8 +0x04c:  mov    %eax,(%esp)
0844d1cb +0x04f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844d1d0 +0x054:  mov    %eax,0x8(%esp)
0844d1d4 +0x058:  movl   $"seLect m_id from allow_proxy_user where m_id=%s",0x4(%esp)
0844d1dc +0x060:  mov    -0xc(%ebp),%eax
0844d1df +0x063:  mov    %eax,(%esp)
0844d1e2 +0x066:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844d1e7 +0x06b:  movl   $0x1,0x4(%esp)
0844d1ef +0x073:  mov    -0xc(%ebp),%eax
0844d1f2 +0x076:  mov    %eax,(%esp)
0844d1f5 +0x079:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844d1fa +0x07e:  test   %al,%al
0844d1fc +0x080:  je     0844d2c7 <+0x14b>
0844d202 +0x086:  mov    -0xc(%ebp),%eax
0844d205 +0x089:  mov    %eax,(%esp)
0844d208 +0x08c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844d20d +0x091:  test   %eax,%eax
0844d20f +0x093:  sete   %al
0844d212 +0x096:  test   %al,%al
0844d214 +0x098:  je     0844d2c7 <+0x14b>
0844d21a +0x09e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844d21f +0x0a3:  movl   $0xc2b7,0x8(%esp)
0844d227 +0x0ab:  movl   $"DBThread.cpp",0x4(%esp)
0844d22f +0x0b3:  mov    %eax,(%esp)
0844d232 +0x0b6:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844d237 +0x0bb:  movl   $0x1,0x8(%esp)
0844d23f +0x0c3:  mov    %eax,0x4(%esp)
0844d243 +0x0c7:  lea    -0x18(%ebp),%eax
0844d246 +0x0ca:  mov    %eax,(%esp)
0844d249 +0x0cd:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844d24e +0x0d2:  lea    -0x18(%ebp),%eax
0844d251 +0x0d5:  mov    %eax,(%esp)
0844d254 +0x0d8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d259 +0x0dd:  movl   $0x352,0x4(%esp)
0844d261 +0x0e5:  mov    %eax,(%esp)
0844d264 +0x0e8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d269 +0x0ed:  lea    -0x18(%ebp),%eax
0844d26c +0x0f0:  mov    %eax,(%esp)
0844d26f +0x0f3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844d274 +0x0f8:  mov    0x10(%ebp),%edx
0844d277 +0x0fb:  mov    %edx,0x4(%esp)
0844d27b +0x0ff:  mov    %eax,(%esp)
0844d27e +0x102:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844d283 +0x107:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844d288 +0x10c:  lea    -0x18(%ebp),%edx
0844d28b +0x10f:  mov    %edx,0x8(%esp)
0844d28f +0x113:  movl   $0x1,0x4(%esp)
0844d297 +0x11b:  mov    %eax,(%esp)
0844d29a +0x11e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844d29f +0x123:  jmp    0844d2bc <+0x140>
0844d2a1 +0x125:  mov    %edx,%ebx
0844d2a3 +0x127:  mov    %eax,%esi
0844d2a5 +0x129:  lea    -0x18(%ebp),%eax
0844d2a8 +0x12c:  mov    %eax,(%esp)
0844d2ab +0x12f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d2b0 +0x134:  mov    %esi,%eax
0844d2b2 +0x136:  mov    %ebx,%edx
0844d2b4 +0x138:  mov    %eax,(%esp)
0844d2b7 +0x13b:  call   08ae3750 <_Unwind_Resume>
0844d2bc +0x140:  lea    -0x18(%ebp),%eax
0844d2bf +0x143:  mov    %eax,(%esp)
0844d2c2 +0x146:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844d2c7 +0x14b:  mov    $0x1,%eax
0844d2cc +0x150:  add    $0x20,%esp
0844d2cf +0x153:  pop    %ebx
0844d2d0 +0x154:  pop    %esi
0844d2d1 +0x155:  pop    %ebp
0844d2d2 +0x156:  ret
0844d2d3 +0x157:  nop
```

## 反编译 C

```c
// DB_SelectAllowProxyUser::dispatch @ 0x844d17c

/* DB_SelectAllowProxyUser::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SelectAllowProxyUser::dispatch
          (DB_SelectAllowProxyUser *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_1c [8];
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  Stream::operator>>(param_3,&local_14);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"seLect m_id from allow_proxy_user where m_id=%s",uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\0') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 == 0) {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc2b7);
      CStreamGuard::CStreamGuard(local_1c,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0844d264 to 0844d29e has its CatchHandler @ 0844d2a1 */
      CStreamGuard::operator<<(pCVar5,0x352);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar5,param_2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
    }
  }
  return 1;
}
```
