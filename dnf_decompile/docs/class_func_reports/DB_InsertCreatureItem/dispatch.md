# dispatch

`_ZN21DB_InsertCreatureItem8dispatchEiiP6Stream`

`DB_InsertCreatureItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertCreatureItem` | `0x0841f8d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841f8d4  _ZN21DB_InsertCreatureItem8dispatchEiiP6Stream
#           DB_InsertCreatureItem::dispatch(int, int, Stream*)
# range [0x0841f8d4, 0x0841fa27]
0841f8d4 +0x000:  push   %ebp
0841f8d5 +0x001:  mov    %esp,%ebp
0841f8d7 +0x003:  push   %edi
0841f8d8 +0x004:  push   %esi
0841f8d9 +0x005:  push   %ebx
0841f8da +0x006:  sub    $0x3c,%esp
0841f8dd +0x009:  mov    0x14(%ebp),%eax
0841f8e0 +0x00c:  mov    %eax,(%esp)
0841f8e3 +0x00f:  call   08451a52 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4668>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4668
0841f8e8 +0x014:  mov    %eax,-0x24(%ebp)
0841f8eb +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841f8f0 +0x01c:  movl   $0x0,0x8(%esp)
0841f8f8 +0x024:  movl   $0x3,0x4(%esp)
0841f900 +0x02c:  mov    %eax,(%esp)
0841f903 +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841f908 +0x034:  mov    %eax,-0x20(%ebp)
0841f90b +0x037:  mov    -0x24(%ebp),%eax
0841f90e +0x03a:  mov    %eax,0x4(%esp)
0841f912 +0x03e:  mov    -0x20(%ebp),%eax
0841f915 +0x041:  mov    %eax,(%esp)
0841f918 +0x044:  call   0841fa28 <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM>  ; DB_InsertCreatureItem::insertCreatureItem(MySQL*, SIG_CREATURE_ITEM const*)
0841f91d +0x049:  xor    $0x1,%eax
0841f920 +0x04c:  test   %al,%al
0841f922 +0x04e:  je     0841f92e <+0x5a>
0841f924 +0x050:  mov    $0x0,%ebx
0841f929 +0x055:  jmp    0841fa1e <+0x14a>
0841f92e +0x05a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841f933 +0x05f:  movl   $0x55c8,0x8(%esp)
0841f93b +0x067:  movl   $"DBThread.cpp",0x4(%esp)
0841f943 +0x06f:  mov    %eax,(%esp)
0841f946 +0x072:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0841f94b +0x077:  movl   $0x1,0x8(%esp)
0841f953 +0x07f:  mov    %eax,0x4(%esp)
0841f957 +0x083:  lea    -0x2c(%ebp),%eax
0841f95a +0x086:  mov    %eax,(%esp)
0841f95d +0x089:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841f962 +0x08e:  lea    -0x2c(%ebp),%eax
0841f965 +0x091:  mov    %eax,(%esp)
0841f968 +0x094:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841f96d +0x099:  movl   $0x88,0x4(%esp)
0841f975 +0x0a1:  mov    %eax,(%esp)
0841f978 +0x0a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841f97d +0x0a9:  lea    -0x2c(%ebp),%eax
0841f980 +0x0ac:  mov    %eax,(%esp)
0841f983 +0x0af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841f988 +0x0b4:  mov    0x10(%ebp),%edx
0841f98b +0x0b7:  mov    %edx,0x4(%esp)
0841f98f +0x0bb:  mov    %eax,(%esp)
0841f992 +0x0be:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841f997 +0x0c3:  lea    -0x2c(%ebp),%eax
0841f99a +0x0c6:  mov    %eax,(%esp)
0841f99d +0x0c9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0841f9a2 +0x0ce:  mov    %eax,(%esp)
0841f9a5 +0x0d1:  call   08343ade <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x5bab>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x5bab
0841f9aa +0x0d6:  mov    %eax,-0x1c(%ebp)
0841f9ad +0x0d9:  mov    -0x1c(%ebp),%edx
0841f9b0 +0x0dc:  mov    -0x24(%ebp),%eax
0841f9b3 +0x0df:  mov    %eax,%ebx
0841f9b5 +0x0e1:  mov    $0x1d,%eax
0841f9ba +0x0e6:  mov    %edx,%edi
0841f9bc +0x0e8:  mov    %ebx,%esi
0841f9be +0x0ea:  mov    %eax,%ecx
0841f9c0 +0x0ec:  rep movsl %ds:(%esi),%es:(%edi)
0841f9c2 +0x0ee:  mov    -0x20(%ebp),%eax
0841f9c5 +0x0f1:  mov    %eax,(%esp)
0841f9c8 +0x0f4:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
0841f9cd +0x0f9:  mov    %eax,%edx
0841f9cf +0x0fb:  mov    -0x1c(%ebp),%eax
0841f9d2 +0x0fe:  mov    %edx,0x30(%eax)
0841f9d5 +0x101:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0841f9da +0x106:  lea    -0x2c(%ebp),%edx
0841f9dd +0x109:  mov    %edx,0x8(%esp)
0841f9e1 +0x10d:  movl   $0x1,0x4(%esp)
0841f9e9 +0x115:  mov    %eax,(%esp)
0841f9ec +0x118:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0841f9f1 +0x11d:  mov    $0x1,%ebx
0841f9f6 +0x122:  lea    -0x2c(%ebp),%eax
0841f9f9 +0x125:  mov    %eax,(%esp)
0841f9fc +0x128:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841fa01 +0x12d:  jmp    0841fa1e <+0x14a>
0841fa03 +0x12f:  mov    %edx,%ebx
0841fa05 +0x131:  mov    %eax,%esi
0841fa07 +0x133:  lea    -0x2c(%ebp),%eax
0841fa0a +0x136:  mov    %eax,(%esp)
0841fa0d +0x139:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0841fa12 +0x13e:  mov    %esi,%eax
0841fa14 +0x140:  mov    %ebx,%edx
0841fa16 +0x142:  mov    %eax,(%esp)
0841fa19 +0x145:  call   08ae3750 <_Unwind_Resume>
0841fa1e +0x14a:  mov    %ebx,%eax
0841fa20 +0x14c:  add    $0x3c,%esp
0841fa23 +0x14f:  pop    %ebx
0841fa24 +0x150:  pop    %esi
0841fa25 +0x151:  pop    %edi
0841fa26 +0x152:  pop    %ebp
0841fa27 +0x153:  ret
```

## 反编译 C

```c
// DB_InsertCreatureItem::dispatch @ 0x841f8d4

/* DB_InsertCreatureItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_InsertCreatureItem::dispatch(DB_InsertCreatureItem *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  SIG_CREATURE_ITEM *pSVar6;
  SIG_CREATURE_ITEM *pSVar7;
  byte bVar8;
  CStreamGuard local_30 [8];
  SIG_CREATURE_ITEM *local_28;
  MySQL *local_24;
  SIG_CREATURE_ITEM *local_20;
  
  bVar8 = 0;
  local_28 = Stream::GetOutBuffer<SIG_CREATURE_ITEM>(param_3);
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  cVar1 = insertCreatureItem(local_24,local_28);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x55c8);
    CStreamGuard::CStreamGuard(local_30,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0841f978 to 0841f9f0 has its CatchHandler @ 0841fa03 */
    CStreamGuard::operator<<(pCVar3,0x88);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
    local_20 = CStreamGuard::GetInBuffer<SIG_CREATURE_ITEM>(pCVar3);
    pSVar6 = local_28;
    pSVar7 = local_20;
    for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar7 = *(undefined4 *)pSVar6;
      pSVar6 = pSVar6 + (uint)bVar8 * -8 + 4;
      pSVar7 = pSVar7 + (uint)bVar8 * -8 + 4;
    }
    uVar5 = WongWork::DBCommon::GetIdentity(local_24);
    *(undefined4 *)(local_20 + 0x30) = uVar5;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_30);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
