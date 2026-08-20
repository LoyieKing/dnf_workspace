# dispatch

`_ZN22DB_UpdateHappyBeanInfo8dispatchEiiP6Stream`

`DB_UpdateHappyBeanInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateHappyBeanInfo` | `0x084258ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084258ee  _ZN22DB_UpdateHappyBeanInfo8dispatchEiiP6Stream
#           DB_UpdateHappyBeanInfo::dispatch(int, int, Stream*)
# range [0x084258ee, 0x08425a01]
084258ee +0x000:  push   %ebp
084258ef +0x001:  mov    %esp,%ebp
084258f1 +0x003:  sub    $0x48,%esp
084258f4 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084258f9 +0x00b:  movl   $0x0,0x8(%esp)
08425901 +0x013:  movl   $0x1,0x4(%esp)
08425909 +0x01b:  mov    %eax,(%esp)
0842590c +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08425911 +0x023:  mov    %eax,-0xc(%ebp)
08425914 +0x026:  movl   $0x0,-0x10(%ebp)
0842591b +0x02d:  movl   $0x0,-0x14(%ebp)
08425922 +0x034:  lea    -0x10(%ebp),%eax
08425925 +0x037:  mov    %eax,0x4(%esp)
08425929 +0x03b:  mov    0x14(%ebp),%eax
0842592c +0x03e:  mov    %eax,(%esp)
0842592f +0x041:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425934 +0x046:  lea    -0x14(%ebp),%eax
08425937 +0x049:  mov    %eax,0x4(%esp)
0842593b +0x04d:  mov    0x14(%ebp),%eax
0842593e +0x050:  mov    %eax,(%esp)
08425941 +0x053:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08425946 +0x058:  lea    -0x31(%ebp),%eax
08425949 +0x05b:  mov    %eax,0x4(%esp)
0842594d +0x05f:  mov    0x14(%ebp),%eax
08425950 +0x062:  mov    %eax,(%esp)
08425953 +0x065:  call   0861c6a8 <_ZN6StreamrsEPc>  ; Stream::operator>>(char*)
08425958 +0x06a:  mov    -0x10(%ebp),%eax
0842595b +0x06d:  movl   $0x0,0x4(%esp)
08425963 +0x075:  mov    %eax,(%esp)
08425966 +0x078:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842596b +0x07d:  mov    %eax,0x8(%esp)
0842596f +0x081:  movl   $"upDate event_happybean_log set cnt=cnt+1 where occ_date=now() and m_id=%s",0x4(%esp)
08425977 +0x089:  mov    -0xc(%ebp),%eax
0842597a +0x08c:  mov    %eax,(%esp)
0842597d +0x08f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08425982 +0x094:  movl   $0x1,0x4(%esp)
0842598a +0x09c:  mov    -0xc(%ebp),%eax
0842598d +0x09f:  mov    %eax,(%esp)
08425990 +0x0a2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08425995 +0x0a7:  xor    $0x1,%eax
08425998 +0x0aa:  test   %al,%al
0842599a +0x0ac:  jne    084259ad <+0xbf>
0842599c +0x0ae:  mov    -0xc(%ebp),%eax
0842599f +0x0b1:  mov    %eax,(%esp)
084259a2 +0x0b4:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084259a7 +0x0b9:  or     %edx,%eax
084259a9 +0x0bb:  test   %eax,%eax
084259ab +0x0bd:  jne    084259b4 <+0xc6>
084259ad +0x0bf:  mov    $0x1,%eax
084259b2 +0x0c4:  jmp    084259b9 <+0xcb>
084259b4 +0x0c6:  mov    $0x0,%eax
084259b9 +0x0cb:  test   %al,%al
084259bb +0x0cd:  je     084259fa <+0x10c>
084259bd +0x0cf:  mov    -0x10(%ebp),%eax
084259c0 +0x0d2:  movl   $0x0,0x4(%esp)
084259c8 +0x0da:  mov    %eax,(%esp)
084259cb +0x0dd:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084259d0 +0x0e2:  mov    %eax,0x8(%esp)
084259d4 +0x0e6:  movl   $"inSert into event_happybean_log(occ_date,m_id,cnt) values(now(),%s,1)",0x4(%esp)
084259dc +0x0ee:  mov    -0xc(%ebp),%eax
084259df +0x0f1:  mov    %eax,(%esp)
084259e2 +0x0f4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084259e7 +0x0f9:  movl   $0x1,0x4(%esp)
084259ef +0x101:  mov    -0xc(%ebp),%eax
084259f2 +0x104:  mov    %eax,(%esp)
084259f5 +0x107:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084259fa +0x10c:  mov    $0x1,%eax
084259ff +0x111:  leave
08425a00 +0x112:  ret
08425a01 +0x113:  nop
```

## 反编译 C

```c
// DB_UpdateHappyBeanInfo::dispatch @ 0x84258ee

/* DB_UpdateHappyBeanInfo::dispatch(int, int, Stream*) */

undefined4 DB_UpdateHappyBeanInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  char local_35 [29];
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,local_35);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate event_happybean_log set cnt=cnt+1 where occ_date=now() and m_id=%s",uVar3
                  );
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(local_10);
    if (lVar4 != 0) {
      bVar1 = false;
      goto LAB_084259b9;
    }
  }
  bVar1 = true;
LAB_084259b9:
  if (bVar1) {
    uVar3 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "inSert into event_happybean_log(occ_date,m_id,cnt) values(now(),%s,1)",uVar3);
    MySQL::exec(local_10,true);
  }
  return 1;
}
```
