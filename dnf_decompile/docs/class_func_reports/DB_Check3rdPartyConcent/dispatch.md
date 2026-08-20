# dispatch

`_ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream`

`DB_Check3rdPartyConcent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_Check3rdPartyConcent` | `0x08445eee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08445eee  _ZN23DB_Check3rdPartyConcent8dispatchEiiP6Stream
#           DB_Check3rdPartyConcent::dispatch(int, int, Stream*)
# range [0x08445eee, 0x084460bf]
08445eee +0x000:  push   %ebp
08445eef +0x001:  mov    %esp,%ebp
08445ef1 +0x003:  push   %esi
08445ef2 +0x004:  push   %ebx
08445ef3 +0x005:  sub    $0x30,%esp
08445ef6 +0x008:  movl   $0x0,-0x14(%ebp)
08445efd +0x00f:  lea    -0x14(%ebp),%eax
08445f00 +0x012:  mov    %eax,0x4(%esp)
08445f04 +0x016:  mov    0x14(%ebp),%eax
08445f07 +0x019:  mov    %eax,(%esp)
08445f0a +0x01c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08445f0f +0x021:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08445f14 +0x026:  movl   $0x0,0x8(%esp)
08445f1c +0x02e:  movl   $0x1,0x4(%esp)
08445f24 +0x036:  mov    %eax,(%esp)
08445f27 +0x039:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08445f2c +0x03e:  mov    %eax,-0x10(%ebp)
08445f2f +0x041:  mov    -0x14(%ebp),%eax
08445f32 +0x044:  movl   $0x0,0x4(%esp)
08445f3a +0x04c:  mov    %eax,(%esp)
08445f3d +0x04f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08445f42 +0x054:  mov    %eax,0x8(%esp)
08445f46 +0x058:  movl   $"seLect 3dparty_consent from member_join_info where m_id = %s",0x4(%esp)
08445f4e +0x060:  mov    -0x10(%ebp),%eax
08445f51 +0x063:  mov    %eax,(%esp)
08445f54 +0x066:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08445f59 +0x06b:  movl   $0x1,0x4(%esp)
08445f61 +0x073:  mov    -0x10(%ebp),%eax
08445f64 +0x076:  mov    %eax,(%esp)
08445f67 +0x079:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08445f6c +0x07e:  xor    $0x1,%eax
08445f6f +0x081:  test   %al,%al
08445f71 +0x083:  je     08445f7d <+0x8f>
08445f73 +0x085:  mov    $0x0,%ebx
08445f78 +0x08a:  jmp    084460b6 <+0x1c8>
08445f7d +0x08f:  mov    -0x10(%ebp),%eax
08445f80 +0x092:  mov    %eax,(%esp)
08445f83 +0x095:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08445f88 +0x09a:  mov    %eax,-0xc(%ebp)
08445f8b +0x09d:  movb   $0x0,-0x15(%ebp)
08445f8f +0x0a1:  cmpl   $0x0,-0xc(%ebp)
08445f93 +0x0a5:  jle    08445fdc <+0xee>
08445f95 +0x0a7:  mov    -0x10(%ebp),%eax
08445f98 +0x0aa:  mov    %eax,(%esp)
08445f9b +0x0ad:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08445fa0 +0x0b2:  xor    $0x1,%eax
08445fa3 +0x0b5:  test   %al,%al
08445fa5 +0x0b7:  je     08445fb1 <+0xc3>
08445fa7 +0x0b9:  mov    $0x0,%ebx
08445fac +0x0be:  jmp    084460b6 <+0x1c8>
08445fb1 +0x0c3:  lea    -0x15(%ebp),%eax
08445fb4 +0x0c6:  mov    %eax,0x8(%esp)
08445fb8 +0x0ca:  movl   $0x0,0x4(%esp)
08445fc0 +0x0d2:  mov    -0x10(%ebp),%eax
08445fc3 +0x0d5:  mov    %eax,(%esp)
08445fc6 +0x0d8:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08445fcb +0x0dd:  xor    $0x1,%eax
08445fce +0x0e0:  test   %al,%al
08445fd0 +0x0e2:  je     08445fe6 <+0xf8>
08445fd2 +0x0e4:  mov    $0x0,%ebx
08445fd7 +0x0e9:  jmp    084460b6 <+0x1c8>
08445fdc +0x0ee:  cmpl   $0x0,-0xc(%ebp)
08445fe0 +0x0f2:  jne    08445fe6 <+0xf8>
08445fe2 +0x0f4:  movb   $0x0,-0x15(%ebp)
08445fe6 +0x0f8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08445feb +0x0fd:  movl   $0xad91,0x8(%esp)
08445ff3 +0x105:  movl   $"DBThread.cpp",0x4(%esp)
08445ffb +0x10d:  mov    %eax,(%esp)
08445ffe +0x110:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08446003 +0x115:  movl   $0x1,0x8(%esp)
0844600b +0x11d:  mov    %eax,0x4(%esp)
0844600f +0x121:  lea    -0x20(%ebp),%eax
08446012 +0x124:  mov    %eax,(%esp)
08446015 +0x127:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844601a +0x12c:  lea    -0x20(%ebp),%eax
0844601d +0x12f:  mov    %eax,(%esp)
08446020 +0x132:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446025 +0x137:  movl   $0x2b7,0x4(%esp)
0844602d +0x13f:  mov    %eax,(%esp)
08446030 +0x142:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08446035 +0x147:  lea    -0x20(%ebp),%eax
08446038 +0x14a:  mov    %eax,(%esp)
0844603b +0x14d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446040 +0x152:  mov    0x10(%ebp),%edx
08446043 +0x155:  mov    %edx,0x4(%esp)
08446047 +0x159:  mov    %eax,(%esp)
0844604a +0x15c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844604f +0x161:  movzbl -0x15(%ebp),%eax
08446053 +0x165:  movzbl %al,%ebx
08446056 +0x168:  lea    -0x20(%ebp),%eax
08446059 +0x16b:  mov    %eax,(%esp)
0844605c +0x16e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446061 +0x173:  mov    %ebx,0x4(%esp)
08446065 +0x177:  mov    %eax,(%esp)
08446068 +0x17a:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
0844606d +0x17f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08446072 +0x184:  lea    -0x20(%ebp),%edx
08446075 +0x187:  mov    %edx,0x8(%esp)
08446079 +0x18b:  movl   $0x1,0x4(%esp)
08446081 +0x193:  mov    %eax,(%esp)
08446084 +0x196:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08446089 +0x19b:  mov    $0x1,%ebx
0844608e +0x1a0:  lea    -0x20(%ebp),%eax
08446091 +0x1a3:  mov    %eax,(%esp)
08446094 +0x1a6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08446099 +0x1ab:  jmp    084460b6 <+0x1c8>
0844609b +0x1ad:  mov    %edx,%ebx
0844609d +0x1af:  mov    %eax,%esi
0844609f +0x1b1:  lea    -0x20(%ebp),%eax
084460a2 +0x1b4:  mov    %eax,(%esp)
084460a5 +0x1b7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084460aa +0x1bc:  mov    %esi,%eax
084460ac +0x1be:  mov    %ebx,%edx
084460ae +0x1c0:  mov    %eax,(%esp)
084460b1 +0x1c3:  call   08ae3750 <_Unwind_Resume>
084460b6 +0x1c8:  mov    %ebx,%eax
084460b8 +0x1ca:  add    $0x30,%esp
084460bb +0x1cd:  pop    %ebx
084460bc +0x1ce:  pop    %esi
084460bd +0x1cf:  pop    %ebp
084460be +0x1d0:  ret
084460bf +0x1d1:  nop
```

## 反编译 C

```c
// DB_Check3rdPartyConcent::dispatch @ 0x8445eee

/* DB_Check3rdPartyConcent::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Check3rdPartyConcent::dispatch
          (DB_Check3rdPartyConcent *this,int param_1,int param_2,Stream *param_3)

{
  uchar uVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_24 [11];
  uchar local_19;
  uint local_18;
  MySQL *local_14;
  int local_10;
  
  local_18 = 0;
  Stream::operator>>(param_3,&local_18);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(local_18,0);
  MySQL::set_query(local_14,"seLect 3dparty_consent from member_join_info where m_id = %s",uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_10 = MySQL::get_n_rows(local_14);
  local_19 = '\0';
  if (local_10 < 1) {
    if (local_10 == 0) {
      local_19 = '\0';
    }
  }
  else {
    cVar2 = MySQL::fetch(local_14);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_ubyte(local_14,0,&local_19);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xad91);
  CStreamGuard::CStreamGuard(local_24,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08446030 to 08446088 has its CatchHandler @ 0844609b */
  CStreamGuard::operator<<(pCVar5,0x2b7);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar5,param_2);
  uVar1 = local_19;
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar5,uVar1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return 1;
}
```
