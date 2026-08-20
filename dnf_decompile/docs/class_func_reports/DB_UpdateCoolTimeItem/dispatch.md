# dispatch

`_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream`

`DB_UpdateCoolTimeItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCoolTimeItem` | `0x08430570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08430570  _ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream
#           DB_UpdateCoolTimeItem::dispatch(int, int, Stream*)
# range [0x08430570, 0x08430675]
08430570 +0x000:  push   %ebp
08430571 +0x001:  mov    %esp,%ebp
08430573 +0x003:  sub    $0x28,%esp
08430576 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843057b +0x00b:  movl   $0x0,0x8(%esp)
08430583 +0x013:  movl   $0x2,0x4(%esp)
0843058b +0x01b:  mov    %eax,(%esp)
0843058e +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08430593 +0x023:  mov    %eax,-0x14(%ebp)
08430596 +0x026:  mov    0x14(%ebp),%eax
08430599 +0x029:  mov    %eax,(%esp)
0843059c +0x02c:  call   08452d66 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x597c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x597c
084305a1 +0x031:  mov    %eax,-0x10(%ebp)
084305a4 +0x034:  mov    -0x10(%ebp),%eax
084305a7 +0x037:  add    $0x4,%eax
084305aa +0x03a:  movl   $0x194,0xc(%esp)
084305b2 +0x042:  mov    %eax,0x8(%esp)
084305b6 +0x046:  movl   $0x0,0x4(%esp)
084305be +0x04e:  mov    -0x14(%ebp),%eax
084305c1 +0x051:  mov    %eax,(%esp)
084305c4 +0x054:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084305c9 +0x059:  mov    %eax,-0xc(%ebp)
084305cc +0x05c:  mov    -0x10(%ebp),%eax
084305cf +0x05f:  mov    (%eax),%eax
084305d1 +0x061:  mov    %eax,0xc(%esp)
084305d5 +0x065:  mov    -0xc(%ebp),%eax
084305d8 +0x068:  mov    %eax,0x8(%esp)
084305dc +0x06c:  movl   $"upDate charac_item_stat set cooltime_item='%s' where charac_no=%u",0x4(%esp)
084305e4 +0x074:  mov    -0x14(%ebp),%eax
084305e7 +0x077:  mov    %eax,(%esp)
084305ea +0x07a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084305ef +0x07f:  movl   $0x1,0x4(%esp)
084305f7 +0x087:  mov    -0x14(%ebp),%eax
084305fa +0x08a:  mov    %eax,(%esp)
084305fd +0x08d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430602 +0x092:  xor    $0x1,%eax
08430605 +0x095:  test   %al,%al
08430607 +0x097:  jne    0843061a <+0xaa>
08430609 +0x099:  mov    -0x14(%ebp),%eax
0843060c +0x09c:  mov    %eax,(%esp)
0843060f +0x09f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08430614 +0x0a4:  or     %edx,%eax
08430616 +0x0a6:  test   %eax,%eax
08430618 +0x0a8:  jne    08430621 <+0xb1>
0843061a +0x0aa:  mov    $0x1,%eax
0843061f +0x0af:  jmp    08430626 <+0xb6>
08430621 +0x0b1:  mov    $0x0,%eax
08430626 +0x0b6:  test   %al,%al
08430628 +0x0b8:  je     0843066e <+0xfe>
0843062a +0x0ba:  mov    -0x10(%ebp),%eax
0843062d +0x0bd:  mov    (%eax),%eax
0843062f +0x0bf:  mov    -0xc(%ebp),%edx
08430632 +0x0c2:  mov    %edx,0xc(%esp)
08430636 +0x0c6:  mov    %eax,0x8(%esp)
0843063a +0x0ca:  movl   $"inSert into charac_item_stat(charac_no, cooltime_item) values(%u, '%s')",0x4(%esp)
08430642 +0x0d2:  mov    -0x14(%ebp),%eax
08430645 +0x0d5:  mov    %eax,(%esp)
08430648 +0x0d8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843064d +0x0dd:  movl   $0x1,0x4(%esp)
08430655 +0x0e5:  mov    -0x14(%ebp),%eax
08430658 +0x0e8:  mov    %eax,(%esp)
0843065b +0x0eb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430660 +0x0f0:  xor    $0x1,%eax
08430663 +0x0f3:  test   %al,%al
08430665 +0x0f5:  je     0843066e <+0xfe>
08430667 +0x0f7:  mov    $0x0,%eax
0843066c +0x0fc:  jmp    08430673 <+0x103>
0843066e +0x0fe:  mov    $0x1,%eax
08430673 +0x103:  leave
08430674 +0x104:  ret
08430675 +0x105:  nop
```

## 反编译 C

```c
// DB_UpdateCoolTimeItem::dispatch @ 0x8430570

/* DB_UpdateCoolTimeItem::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCoolTimeItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO>(in_stack_00000010);
  uVar4 = MySQL::blob_to_str(this,0,pSVar3 + 4,0x194);
  MySQL::set_query(this,"upDate charac_item_stat set cooltime_item=\'%s\' where charac_no=%u",uVar4,
                   *(undefined4 *)pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into charac_item_stat(charac_no, cooltime_item) values(%u, \'%s\')",
                     *(undefined4 *)pSVar3,uVar4);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
