# dispatch

`_ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream`

`DB_UpdateOntimeLastRecvIdx::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOntimeLastRecvIdx` | `0x0844280a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844280a  _ZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6Stream
#           DB_UpdateOntimeLastRecvIdx::dispatch(int, int, Stream*)
# range [0x0844280a, 0x08442965]
0844280a +0x000:  push   %ebp
0844280b +0x001:  mov    %esp,%ebp
0844280d +0x003:  push   %esi
0844280e +0x004:  push   %ebx
0844280f +0x005:  sub    $0x40,%esp
08442812 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08442817 +0x00d:  movl   $0x0,0x8(%esp)
0844281f +0x015:  movl   $0xd,0x4(%esp)
08442827 +0x01d:  mov    %eax,(%esp)
0844282a +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844282f +0x025:  mov    %eax,-0x10(%ebp)
08442832 +0x028:  movl   $0x0,-0x24(%ebp)
08442839 +0x02f:  movl   $0x0,-0x28(%ebp)
08442840 +0x036:  lea    -0x24(%ebp),%eax
08442843 +0x039:  mov    %eax,0x4(%esp)
08442847 +0x03d:  mov    0x14(%ebp),%eax
0844284a +0x040:  mov    %eax,(%esp)
0844284d +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08442852 +0x048:  lea    -0x28(%ebp),%eax
08442855 +0x04b:  mov    %eax,0x4(%esp)
08442859 +0x04f:  mov    0x14(%ebp),%eax
0844285c +0x052:  mov    %eax,(%esp)
0844285f +0x055:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08442864 +0x05a:  mov    -0x24(%ebp),%ecx
08442867 +0x05d:  mov    $0xcccccccd,%edx
0844286c +0x062:  mov    %ecx,%eax
0844286e +0x064:  mul    %edx
08442870 +0x066:  shr    $0x3,%edx
08442873 +0x069:  mov    %edx,%eax
08442875 +0x06b:  shl    $0x2,%eax
08442878 +0x06e:  add    %edx,%eax
0844287a +0x070:  add    %eax,%eax
0844287c +0x072:  mov    %ecx,%edx
0844287e +0x074:  sub    %eax,%edx
08442880 +0x076:  mov    %edx,-0xc(%ebp)
08442883 +0x079:  mov    -0x24(%ebp),%eax
08442886 +0x07c:  movl   $0x0,0x4(%esp)
0844288e +0x084:  mov    %eax,(%esp)
08442891 +0x087:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442896 +0x08c:  mov    -0x28(%ebp),%edx
08442899 +0x08f:  mov    %eax,0x10(%esp)
0844289d +0x093:  mov    %edx,0xc(%esp)
084428a1 +0x097:  mov    -0xc(%ebp),%eax
084428a4 +0x09a:  mov    %eax,0x8(%esp)
084428a8 +0x09e:  movl   $"upDate event_1112_ontime_user_%u set last_no=%u where m_id=%s",0x4(%esp)
084428b0 +0x0a6:  mov    -0x10(%ebp),%eax
084428b3 +0x0a9:  mov    %eax,(%esp)
084428b6 +0x0ac:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084428bb +0x0b1:  movl   $0x1,0x4(%esp)
084428c3 +0x0b9:  mov    -0x10(%ebp),%eax
084428c6 +0x0bc:  mov    %eax,(%esp)
084428c9 +0x0bf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084428ce +0x0c4:  xor    $0x1,%eax
084428d1 +0x0c7:  test   %al,%al
084428d3 +0x0c9:  jne    084428e6 <+0xdc>
084428d5 +0x0cb:  mov    -0x10(%ebp),%eax
084428d8 +0x0ce:  mov    %eax,(%esp)
084428db +0x0d1:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084428e0 +0x0d6:  or     %edx,%eax
084428e2 +0x0d8:  test   %eax,%eax
084428e4 +0x0da:  jne    084428ed <+0xe3>
084428e6 +0x0dc:  mov    $0x1,%eax
084428eb +0x0e1:  jmp    084428f2 <+0xe8>
084428ed +0x0e3:  mov    $0x0,%eax
084428f2 +0x0e8:  test   %al,%al
084428f4 +0x0ea:  je     0844295a <+0x150>
084428f6 +0x0ec:  mov    -0x24(%ebp),%eax
084428f9 +0x0ef:  movl   $0x0,0x4(%esp)
08442901 +0x0f7:  mov    %eax,(%esp)
08442904 +0x0fa:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442909 +0x0ff:  mov    %eax,%ebx
0844290b +0x101:  mov    -0x28(%ebp),%esi
0844290e +0x104:  movl   $0x5,0xc(%esp)
08442916 +0x10c:  movl   $0xa407,0x8(%esp)
0844291e +0x114:  movl   $&_ZZN26DB_UpdateOntimeLastRecvIdx8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08442926 +0x11c:  lea    -0x20(%ebp),%eax
08442929 +0x11f:  mov    %eax,(%esp)
0844292c +0x122:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08442931 +0x127:  mov    %ebx,0x10(%esp)
08442935 +0x12b:  mov    %esi,0xc(%esp)
08442939 +0x12f:  mov    -0xc(%ebp),%eax
0844293c +0x132:  mov    %eax,0x8(%esp)
08442940 +0x136:  movl   $"upDate event_1112_ontime_user_%u set last_no=%u failed at m_id(%s)",0x4(%esp)
08442948 +0x13e:  lea    -0x20(%ebp),%eax
0844294b +0x141:  mov    %eax,(%esp)
0844294e +0x144:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08442953 +0x149:  mov    $0x0,%eax
08442958 +0x14e:  jmp    0844295f <+0x155>
0844295a +0x150:  mov    $0x1,%eax
0844295f +0x155:  add    $0x40,%esp
08442962 +0x158:  pop    %ebx
08442963 +0x159:  pop    %esi
08442964 +0x15a:  pop    %ebp
08442965 +0x15b:  ret
```

## 反编译 C

```c
// DB_UpdateOntimeLastRecvIdx::dispatch @ 0x844280a

/* DB_UpdateOntimeLastRecvIdx::dispatch(int, int, Stream*) */

bool DB_UpdateOntimeLastRecvIdx::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  int local_2c;
  uint local_28;
  cMyTrace local_24 [16];
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  local_28 = 0;
  local_2c = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  local_10 = local_28 % 10;
  uVar4 = NumberToString(local_28,0);
  MySQL::set_query(local_14,"upDate event_1112_ontime_user_%u set last_no=%u where m_id=%s",local_10
                   ,local_2c,uVar4);
  cVar3 = MySQL::exec(local_14,true);
  if ((cVar3 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_14), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = NumberToString(local_28,0);
    iVar2 = local_2c;
    cMyTrace::cMyTrace(local_24,
                       "virtual bool DB_UpdateOntimeLastRecvIdx::dispatch(int, int, Stream*)",0xa407
                       ,5);
    cMyTrace::operator()
              (local_24,"upDate event_1112_ontime_user_%u set last_no=%u failed at m_id(%s)",
               local_10,iVar2,uVar4);
  }
  return !bVar1;
}
```
