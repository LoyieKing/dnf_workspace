# dispatch

`_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream`

`DBInsertCreateDnfUserInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBInsertCreateDnfUserInfo` | `0x0815c3b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815c3b0  _ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream
#           DBInsertCreateDnfUserInfo::dispatch(int, int, Stream*)
# range [0x0815c3b0, 0x0815c585]
0815c3b0 +0x000:  push   %ebp
0815c3b1 +0x001:  mov    %esp,%ebp
0815c3b3 +0x003:  push   %esi
0815c3b4 +0x004:  push   %ebx
0815c3b5 +0x005:  sub    $0x40,%esp
0815c3b8 +0x008:  mov    0x14(%ebp),%eax
0815c3bb +0x00b:  mov    %eax,(%esp)
0815c3be +0x00e:  call   0815eb76 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xdea>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xdea
0815c3c3 +0x013:  mov    %eax,-0x14(%ebp)
0815c3c6 +0x016:  cmpl   $0x0,-0x14(%ebp)
0815c3ca +0x01a:  jne    0815c3f8 <+0x48>
0815c3cc +0x01c:  movl   $0x4,(%esp)
0815c3d3 +0x023:  call   08725800 <__cxa_allocate_exception>
0815c3d8 +0x028:  mov    %eax,%edx
0815c3da +0x02a:  movl   $"msg is null",(%edx)
0815c3e0 +0x030:  movl   $0x0,0x8(%esp)
0815c3e8 +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815c3f0 +0x040:  mov    %eax,(%esp)
0815c3f3 +0x043:  call   08724c50 <__cxa_throw>
0815c3f8 +0x048:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815c3fd +0x04d:  movl   $0x0,0x8(%esp)
0815c405 +0x055:  movl   $0x9,0x4(%esp)
0815c40d +0x05d:  mov    %eax,(%esp)
0815c410 +0x060:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815c415 +0x065:  mov    %eax,-0x10(%ebp)
0815c418 +0x068:  cmpl   $0x0,-0x10(%ebp)
0815c41c +0x06c:  jne    0815c44a <+0x9a>
0815c41e +0x06e:  movl   $0x4,(%esp)
0815c425 +0x075:  call   08725800 <__cxa_allocate_exception>
0815c42a +0x07a:  mov    %eax,%edx
0815c42c +0x07c:  movl   $"handle null",(%edx)
0815c432 +0x082:  movl   $0x0,0x8(%esp)
0815c43a +0x08a:  movl   $&_ZTIPKc,0x4(%esp)
0815c442 +0x092:  mov    %eax,(%esp)
0815c445 +0x095:  call   08724c50 <__cxa_throw>
0815c44a +0x09a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815c44f +0x09f:  mov    0x378(%eax),%ebx
0815c455 +0x0a5:  mov    -0x14(%ebp),%eax
0815c458 +0x0a8:  mov    (%eax),%eax
0815c45a +0x0aa:  movl   $0x0,0x4(%esp)
0815c462 +0x0b2:  mov    %eax,(%esp)
0815c465 +0x0b5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0815c46a +0x0ba:  mov    %ebx,0xc(%esp)
0815c46e +0x0be:  mov    %eax,0x8(%esp)
0815c472 +0x0c2:  movl   $"inSert into event_create_dnf_user(occ_date,m_id,server_id,occ_time) VALUES(CURDATE(),%s,%d,CURTIME())",0x4(%esp)
0815c47a +0x0ca:  mov    -0x10(%ebp),%eax
0815c47d +0x0cd:  mov    %eax,(%esp)
0815c480 +0x0d0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815c485 +0x0d5:  movl   $0x1,0x4(%esp)
0815c48d +0x0dd:  mov    -0x10(%ebp),%eax
0815c490 +0x0e0:  mov    %eax,(%esp)
0815c493 +0x0e3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815c498 +0x0e8:  xor    $0x1,%eax
0815c49b +0x0eb:  test   %al,%al
0815c49d +0x0ed:  je     0815c4cb <+0x11b>
0815c49f +0x0ef:  movl   $0x4,(%esp)
0815c4a6 +0x0f6:  call   08725800 <__cxa_allocate_exception>
0815c4ab +0x0fb:  mov    %eax,%edx
0815c4ad +0x0fd:  movl   $"insert_exec",(%edx)
0815c4b3 +0x103:  movl   $0x0,0x8(%esp)
0815c4bb +0x10b:  movl   $&_ZTIPKc,0x4(%esp)
0815c4c3 +0x113:  mov    %eax,(%esp)
0815c4c6 +0x116:  call   08724c50 <__cxa_throw>
0815c4cb +0x11b:  mov    -0x14(%ebp),%eax
0815c4ce +0x11e:  mov    (%eax),%ebx
0815c4d0 +0x120:  movl   $0x0,0xc(%esp)
0815c4d8 +0x128:  movl   $0x281,0x8(%esp)
0815c4e0 +0x130:  movl   $&_ZZN25DBInsertCreateDnfUserInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0815c4e8 +0x138:  lea    -0x24(%ebp),%eax
0815c4eb +0x13b:  mov    %eax,(%esp)
0815c4ee +0x13e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0815c4f3 +0x143:  mov    %ebx,0x8(%esp)
0815c4f7 +0x147:  movl   $"[Taiwan, Event] insert event_create_dnf_user. m_id:%d",0x4(%esp)
0815c4ff +0x14f:  lea    -0x24(%ebp),%eax
0815c502 +0x152:  mov    %eax,(%esp)
0815c505 +0x155:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0815c50a +0x15a:  mov    $0x1,%ebx
0815c50f +0x15f:  jmp    0815c57d <+0x1cd>
0815c511 +0x161:  cmp    $0x1,%edx
0815c514 +0x164:  je     0815c51e <+0x16e>
0815c516 +0x166:  mov    %eax,(%esp)
0815c519 +0x169:  call   08ae3750 <_Unwind_Resume>
0815c51e +0x16e:  mov    %eax,(%esp)
0815c521 +0x171:  call   08725ce0 <__cxa_begin_catch>
0815c526 +0x176:  mov    %eax,-0xc(%ebp)
0815c529 +0x179:  mov    -0xc(%ebp),%eax
0815c52c +0x17c:  mov    %eax,0x14(%esp)
0815c530 +0x180:  movl   $"[Taiwan, Event] insert event_create_dnf_user. (error:%s)",0x10(%esp)
0815c538 +0x188:  movl   $0x286,0xc(%esp)
0815c540 +0x190:  movl   $&_ZZN25DBInsertCreateDnfUserInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815c548 +0x198:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815c550 +0x1a0:  movl   $0x1,(%esp)
0815c557 +0x1a7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815c55c +0x1ac:  mov    $0x0,%ebx
0815c561 +0x1b1:  call   08725c30 <__cxa_end_catch>
0815c566 +0x1b6:  jmp    0815c57d <+0x1cd>
0815c568 +0x1b8:  mov    %edx,%ebx
0815c56a +0x1ba:  mov    %eax,%esi
0815c56c +0x1bc:  call   08725c30 <__cxa_end_catch>
0815c571 +0x1c1:  mov    %esi,%eax
0815c573 +0x1c3:  mov    %ebx,%edx
0815c575 +0x1c5:  mov    %eax,(%esp)
0815c578 +0x1c8:  call   08ae3750 <_Unwind_Resume>
0815c57d +0x1cd:  mov    %ebx,%eax
0815c57f +0x1cf:  add    $0x40,%esp
0815c582 +0x1d2:  pop    %ebx
0815c583 +0x1d3:  pop    %esi
0815c584 +0x1d4:  pop    %ebp
0815c585 +0x1d5:  ret
```

## 反编译 C

```c
// DBInsertCreateDnfUserInfo::dispatch @ 0x815c3b0

/* DBInsertCreateDnfUserInfo::dispatch(int, int, Stream*) */

undefined4 DBInsertCreateDnfUserInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  cMyTrace local_28 [16];
  MSG *local_18;
  MySQL *local_14;
  
                    /* try { // try from 0815c3be to 0815c509 has its CatchHandler @ 0815c511 */
  local_18 = Stream::GetOutBuffer<DBInsertCreateDnfUserInfo::MSG>(in_stack_00000010);
  if (local_18 == (MSG *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  iVar5 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar5 + 0x378);
  uVar6 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,
                   "inSert into event_create_dnf_user(occ_date,m_id,server_id,occ_time) VALUES(CURDATE(),%s,%d,CURTIME())"
                   ,uVar6,uVar1);
  cVar3 = MySQL::exec(local_14,true);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "insert_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  uVar2 = *(uint *)local_18;
  cMyTrace::cMyTrace(local_28,"virtual bool DBInsertCreateDnfUserInfo::dispatch(int, int, Stream*)",
                     0x281,0);
  cMyTrace::operator()(local_28,"[Taiwan, Event] insert event_create_dnf_user. m_id:%d",uVar2);
  return 1;
}
```
