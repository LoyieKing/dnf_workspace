# dispatch

`_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream`

`DB_UpdateEffectItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateEffectItem` | `0x08430676` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08430676  _ZN19DB_UpdateEffectItem8dispatchEiiP6Stream
#           DB_UpdateEffectItem::dispatch(int, int, Stream*)
# range [0x08430676, 0x0843077b]
08430676 +0x000:  push   %ebp
08430677 +0x001:  mov    %esp,%ebp
08430679 +0x003:  sub    $0x28,%esp
0843067c +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08430681 +0x00b:  movl   $0x0,0x8(%esp)
08430689 +0x013:  movl   $0x2,0x4(%esp)
08430691 +0x01b:  mov    %eax,(%esp)
08430694 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08430699 +0x023:  mov    %eax,-0x14(%ebp)
0843069c +0x026:  mov    0x14(%ebp),%eax
0843069f +0x029:  mov    %eax,(%esp)
084306a2 +0x02c:  call   08452d66 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x597c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x597c
084306a7 +0x031:  mov    %eax,-0x10(%ebp)
084306aa +0x034:  mov    -0x10(%ebp),%eax
084306ad +0x037:  add    $0x4,%eax
084306b0 +0x03a:  movl   $0x194,0xc(%esp)
084306b8 +0x042:  mov    %eax,0x8(%esp)
084306bc +0x046:  movl   $0x0,0x4(%esp)
084306c4 +0x04e:  mov    -0x14(%ebp),%eax
084306c7 +0x051:  mov    %eax,(%esp)
084306ca +0x054:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084306cf +0x059:  mov    %eax,-0xc(%ebp)
084306d2 +0x05c:  mov    -0x10(%ebp),%eax
084306d5 +0x05f:  mov    (%eax),%eax
084306d7 +0x061:  mov    %eax,0xc(%esp)
084306db +0x065:  mov    -0xc(%ebp),%eax
084306de +0x068:  mov    %eax,0x8(%esp)
084306e2 +0x06c:  movl   $"upDate charac_item_stat set effect_item='%s' where charac_no=%u",0x4(%esp)
084306ea +0x074:  mov    -0x14(%ebp),%eax
084306ed +0x077:  mov    %eax,(%esp)
084306f0 +0x07a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084306f5 +0x07f:  movl   $0x1,0x4(%esp)
084306fd +0x087:  mov    -0x14(%ebp),%eax
08430700 +0x08a:  mov    %eax,(%esp)
08430703 +0x08d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430708 +0x092:  xor    $0x1,%eax
0843070b +0x095:  test   %al,%al
0843070d +0x097:  jne    08430720 <+0xaa>
0843070f +0x099:  mov    -0x14(%ebp),%eax
08430712 +0x09c:  mov    %eax,(%esp)
08430715 +0x09f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0843071a +0x0a4:  or     %edx,%eax
0843071c +0x0a6:  test   %eax,%eax
0843071e +0x0a8:  jne    08430727 <+0xb1>
08430720 +0x0aa:  mov    $0x1,%eax
08430725 +0x0af:  jmp    0843072c <+0xb6>
08430727 +0x0b1:  mov    $0x0,%eax
0843072c +0x0b6:  test   %al,%al
0843072e +0x0b8:  je     08430774 <+0xfe>
08430730 +0x0ba:  mov    -0x10(%ebp),%eax
08430733 +0x0bd:  mov    (%eax),%eax
08430735 +0x0bf:  mov    -0xc(%ebp),%edx
08430738 +0x0c2:  mov    %edx,0xc(%esp)
0843073c +0x0c6:  mov    %eax,0x8(%esp)
08430740 +0x0ca:  movl   $"inSert into charac_item_stat(charac_no, effect_item) values(%u, '%s')",0x4(%esp)
08430748 +0x0d2:  mov    -0x14(%ebp),%eax
0843074b +0x0d5:  mov    %eax,(%esp)
0843074e +0x0d8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430753 +0x0dd:  movl   $0x1,0x4(%esp)
0843075b +0x0e5:  mov    -0x14(%ebp),%eax
0843075e +0x0e8:  mov    %eax,(%esp)
08430761 +0x0eb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430766 +0x0f0:  xor    $0x1,%eax
08430769 +0x0f3:  test   %al,%al
0843076b +0x0f5:  je     08430774 <+0xfe>
0843076d +0x0f7:  mov    $0x0,%eax
08430772 +0x0fc:  jmp    08430779 <+0x103>
08430774 +0x0fe:  mov    $0x1,%eax
08430779 +0x103:  leave
0843077a +0x104:  ret
0843077b +0x105:  nop
```

## 反编译 C

```c
// DB_UpdateEffectItem::dispatch @ 0x8430676

/* DB_UpdateEffectItem::dispatch(int, int, Stream*) */

undefined4 DB_UpdateEffectItem::dispatch(int param_1,int param_2,Stream *param_3)

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
  MySQL::set_query(this,"upDate charac_item_stat set effect_item=\'%s\' where charac_no=%u",uVar4,
                   *(undefined4 *)pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,"inSert into charac_item_stat(charac_no, effect_item) values(%u, \'%s\')",
                     *(undefined4 *)pSVar3,uVar4);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
