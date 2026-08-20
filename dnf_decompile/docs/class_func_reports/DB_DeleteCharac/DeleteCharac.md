# DeleteCharac

`_ZN15DB_DeleteCharac12DeleteCharacEP17SIG_DELETE_CHARAC`

`DB_DeleteCharac::DeleteCharac(SIG_DELETE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x0840340c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840340c  _ZN15DB_DeleteCharac12DeleteCharacEP17SIG_DELETE_CHARAC
#           DB_DeleteCharac::DeleteCharac(SIG_DELETE_CHARAC*)
# range [0x0840340c, 0x084034fd]
0840340c +0x00:  push   %ebp
0840340d +0x01:  mov    %esp,%ebp
0840340f +0x03:  push   %ebx
08403410 +0x04:  sub    $0x34,%esp
08403413 +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08403418 +0x0c:  movl   $0x0,0x8(%esp)
08403420 +0x14:  movl   $0x2,0x4(%esp)
08403428 +0x1c:  mov    %eax,(%esp)
0840342b +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08403430 +0x24:  mov    %eax,-0x10(%ebp)
08403433 +0x27:  mov    0xc(%ebp),%eax
08403436 +0x2a:  mov    (%eax),%eax
08403438 +0x2c:  movl   $0x0,0x4(%esp)
08403440 +0x34:  mov    %eax,(%esp)
08403443 +0x37:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08403448 +0x3c:  mov    0xc(%ebp),%edx
0840344b +0x3f:  mov    0x4(%edx),%edx
0840344e +0x42:  mov    %eax,0xc(%esp)
08403452 +0x46:  mov    %edx,0x8(%esp)
08403456 +0x4a:  movl   $"upDate charac_info set delete_time=now(),delete_flag=1 where charac_no=%u and m_id=%s",0x4(%esp)
0840345e +0x52:  mov    -0x10(%ebp),%eax
08403461 +0x55:  mov    %eax,(%esp)
08403464 +0x58:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08403469 +0x5d:  movl   $0x1,0x4(%esp)
08403471 +0x65:  mov    -0x10(%ebp),%eax
08403474 +0x68:  mov    %eax,(%esp)
08403477 +0x6b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840347c +0x70:  xor    $0x1,%eax
0840347f +0x73:  test   %al,%al
08403481 +0x75:  je     0840348a <+0x7e>
08403483 +0x77:  mov    $0x0,%eax
08403488 +0x7c:  jmp    084034f7 <+0xeb>
0840348a +0x7e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840348f +0x83:  movl   $0x0,0x8(%esp)
08403497 +0x8b:  movl   $0x1,0x4(%esp)
0840349f +0x93:  mov    %eax,(%esp)
084034a2 +0x96:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084034a7 +0x9b:  mov    %eax,-0xc(%ebp)
084034aa +0x9e:  mov    0xc(%ebp),%eax
084034ad +0xa1:  mov    0x4(%eax),%ebx
084034b0 +0xa4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084034b5 +0xa9:  mov    0x378(%eax),%edx
084034bb +0xaf:  mov    0xc(%ebp),%eax
084034be +0xb2:  mov    (%eax),%eax
084034c0 +0xb4:  mov    %ebx,0x10(%esp)
084034c4 +0xb8:  mov    %edx,0xc(%esp)
084034c8 +0xbc:  mov    %eax,0x8(%esp)
084034cc +0xc0:  movl   $"deLete from dnf_master_charac where m_id='%u' and server_id='%u' and charac_no='%u'",0x4(%esp)
084034d4 +0xc8:  mov    -0xc(%ebp),%eax
084034d7 +0xcb:  mov    %eax,(%esp)
084034da +0xce:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084034df +0xd3:  movl   $0x1,0x4(%esp)
084034e7 +0xdb:  mov    -0xc(%ebp),%eax
084034ea +0xde:  mov    %eax,(%esp)
084034ed +0xe1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084034f2 +0xe6:  mov    $0x1,%eax
084034f7 +0xeb:  add    $0x34,%esp
084034fa +0xee:  pop    %ebx
084034fb +0xef:  pop    %ebp
084034fc +0xf0:  ret
084034fd +0xf1:  nop
```

## 反编译 C

```c
// DB_DeleteCharac::DeleteCharac @ 0x840340c

/* DB_DeleteCharac::DeleteCharac(SIG_DELETE_CHARAC*) */

bool __thiscall DB_DeleteCharac::DeleteCharac(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  char cVar1;
  MySQL *pMVar2;
  undefined4 uVar3;
  int iVar4;
  
  pMVar2 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(pMVar2,
                   "upDate charac_info set delete_time=now(),delete_flag=1 where charac_no=%u and m_id=%s"
                   ,*(undefined4 *)(param_1 + 4),uVar3);
  cVar1 = MySQL::exec(pMVar2,true);
  if (cVar1 == '\x01') {
    pMVar2 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = *(undefined4 *)(param_1 + 4);
    iVar4 = G_CEnvironment();
    MySQL::set_query(pMVar2,
                     "deLete from dnf_master_charac where m_id=\'%u\' and server_id=\'%u\' and charac_no=\'%u\'"
                     ,*(undefined4 *)param_1,*(undefined4 *)(iVar4 + 0x378),uVar3);
    MySQL::exec(pMVar2,true);
  }
  return cVar1 == '\x01';
}
```
