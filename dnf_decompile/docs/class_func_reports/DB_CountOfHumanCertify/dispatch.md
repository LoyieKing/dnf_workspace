# dispatch

`_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream`

`DB_CountOfHumanCertify::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CountOfHumanCertify` | `0x084282a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084282a0  _ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream
#           DB_CountOfHumanCertify::dispatch(int, int, Stream*)
# range [0x084282a0, 0x084283c9]
084282a0 +0x000:  push   %ebp
084282a1 +0x001:  mov    %esp,%ebp
084282a3 +0x003:  sub    $0x38,%esp
084282a6 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084282ab +0x00b:  movl   $0x0,0x8(%esp)
084282b3 +0x013:  movl   $0x6,0x4(%esp)
084282bb +0x01b:  mov    %eax,(%esp)
084282be +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084282c3 +0x023:  mov    %eax,-0xc(%ebp)
084282c6 +0x026:  lea    -0x20(%ebp),%eax
084282c9 +0x029:  mov    %eax,0x4(%esp)
084282cd +0x02d:  mov    0x14(%ebp),%eax
084282d0 +0x030:  mov    %eax,(%esp)
084282d3 +0x033:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084282d8 +0x038:  mov    -0x20(%ebp),%eax
084282db +0x03b:  movl   $0x0,0x4(%esp)
084282e3 +0x043:  mov    %eax,(%esp)
084282e6 +0x046:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084282eb +0x04b:  mov    %eax,0x8(%esp)
084282ef +0x04f:  movl   $"upDate human_certify_try_count set count = count + 1 where m_id = %s",0x4(%esp)
084282f7 +0x057:  mov    -0xc(%ebp),%eax
084282fa +0x05a:  mov    %eax,(%esp)
084282fd +0x05d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08428302 +0x062:  movl   $0x1,0x4(%esp)
0842830a +0x06a:  mov    -0xc(%ebp),%eax
0842830d +0x06d:  mov    %eax,(%esp)
08428310 +0x070:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08428315 +0x075:  xor    $0x1,%eax
08428318 +0x078:  test   %al,%al
0842831a +0x07a:  jne    0842832d <+0x8d>
0842831c +0x07c:  mov    -0xc(%ebp),%eax
0842831f +0x07f:  mov    %eax,(%esp)
08428322 +0x082:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08428327 +0x087:  or     %edx,%eax
08428329 +0x089:  test   %eax,%eax
0842832b +0x08b:  jne    08428334 <+0x94>
0842832d +0x08d:  mov    $0x1,%eax
08428332 +0x092:  jmp    08428339 <+0x99>
08428334 +0x094:  mov    $0x0,%eax
08428339 +0x099:  test   %al,%al
0842833b +0x09b:  je     084283c2 <+0x122>
08428341 +0x0a1:  mov    -0x20(%ebp),%eax
08428344 +0x0a4:  movl   $0x0,0x4(%esp)
0842834c +0x0ac:  mov    %eax,(%esp)
0842834f +0x0af:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08428354 +0x0b4:  mov    %eax,0x8(%esp)
08428358 +0x0b8:  movl   $"inSert into human_certify_try_count(m_id, count) values(%s, 1)",0x4(%esp)
08428360 +0x0c0:  mov    -0xc(%ebp),%eax
08428363 +0x0c3:  mov    %eax,(%esp)
08428366 +0x0c6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842836b +0x0cb:  movl   $0x1,0x4(%esp)
08428373 +0x0d3:  mov    -0xc(%ebp),%eax
08428376 +0x0d6:  mov    %eax,(%esp)
08428379 +0x0d9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842837e +0x0de:  xor    $0x1,%eax
08428381 +0x0e1:  test   %al,%al
08428383 +0x0e3:  je     084283c2 <+0x122>
08428385 +0x0e5:  movl   $0x5,0xc(%esp)
0842838d +0x0ed:  movl   $0x69cd,0x8(%esp)
08428395 +0x0f5:  movl   $&_ZZN22DB_CountOfHumanCertify8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842839d +0x0fd:  lea    -0x1c(%ebp),%eax
084283a0 +0x100:  mov    %eax,(%esp)
084283a3 +0x103:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084283a8 +0x108:  movl   $"Update and Insert into HumanCertifyCount failed",0x4(%esp)
084283b0 +0x110:  lea    -0x1c(%ebp),%eax
084283b3 +0x113:  mov    %eax,(%esp)
084283b6 +0x116:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084283bb +0x11b:  mov    $0x0,%eax
084283c0 +0x120:  jmp    084283c7 <+0x127>
084283c2 +0x122:  mov    $0x1,%eax
084283c7 +0x127:  leave
084283c8 +0x128:  ret
084283c9 +0x129:  nop
```

## 反编译 C

```c
// DB_CountOfHumanCertify::dispatch @ 0x84282a0

/* DB_CountOfHumanCertify::dispatch(int, int, Stream*) */

undefined4 DB_CountOfHumanCertify::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  Stream::operator>>(in_stack_00000010,&local_24);
  uVar3 = NumberToString(local_24,0);
  MySQL::set_query(local_10,"upDate human_certify_try_count set count = count + 1 where m_id = %s",
                   uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(local_24,0);
    MySQL::set_query(local_10,"inSert into human_certify_try_count(m_id, count) values(%s, 1)",uVar3
                    );
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      cMyTrace::cMyTrace(local_20,"virtual bool DB_CountOfHumanCertify::dispatch(int, int, Stream*)"
                         ,0x69cd,5);
      cMyTrace::operator()(local_20,"Update and Insert into HumanCertifyCount failed");
      return 0;
    }
  }
  return 1;
}
```
