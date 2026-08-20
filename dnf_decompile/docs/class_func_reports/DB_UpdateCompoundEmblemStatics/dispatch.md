# dispatch

`_ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream`

`DB_UpdateCompoundEmblemStatics::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCompoundEmblemStatics` | `0x08439c6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08439c6c  _ZN30DB_UpdateCompoundEmblemStatics8dispatchEiiP6Stream
#           DB_UpdateCompoundEmblemStatics::dispatch(int, int, Stream*)
# range [0x08439c6c, 0x08439deb]
08439c6c +0x000:  push   %ebp
08439c6d +0x001:  mov    %esp,%ebp
08439c6f +0x003:  push   %edi
08439c70 +0x004:  push   %esi
08439c71 +0x005:  push   %ebx
08439c72 +0x006:  sub    $0x5c,%esp
08439c75 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08439c7a +0x00e:  movl   $0x0,0x8(%esp)
08439c82 +0x016:  movl   $0x4,0x4(%esp)
08439c8a +0x01e:  mov    %eax,(%esp)
08439c8d +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08439c92 +0x026:  mov    %eax,-0x20(%ebp)
08439c95 +0x029:  mov    0x14(%ebp),%eax
08439c98 +0x02c:  mov    %eax,(%esp)
08439c9b +0x02f:  call   084537bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x63d2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x63d2
08439ca0 +0x034:  mov    %eax,-0x1c(%ebp)
08439ca3 +0x037:  mov    -0x1c(%ebp),%eax
08439ca6 +0x03a:  mov    0x1c(%eax),%ecx
08439ca9 +0x03d:  mov    -0x1c(%ebp),%eax
08439cac +0x040:  mov    0x18(%eax),%eax
08439caf +0x043:  mov    %eax,-0x38(%ebp)
08439cb2 +0x046:  mov    -0x1c(%ebp),%eax
08439cb5 +0x049:  mov    0x14(%eax),%eax
08439cb8 +0x04c:  mov    %eax,-0x34(%ebp)
08439cbb +0x04f:  mov    -0x1c(%ebp),%eax
08439cbe +0x052:  mov    0x10(%eax),%edi
08439cc1 +0x055:  mov    -0x1c(%ebp),%eax
08439cc4 +0x058:  mov    0xc(%eax),%esi
08439cc7 +0x05b:  mov    -0x1c(%ebp),%eax
08439cca +0x05e:  mov    0x8(%eax),%ebx
08439ccd +0x061:  mov    -0x1c(%ebp),%eax
08439cd0 +0x064:  mov    0x4(%eax),%edx
08439cd3 +0x067:  mov    -0x1c(%ebp),%eax
08439cd6 +0x06a:  mov    (%eax),%eax
08439cd8 +0x06c:  mov    %ecx,0x24(%esp)
08439cdc +0x070:  mov    -0x38(%ebp),%ecx
08439cdf +0x073:  mov    %ecx,0x20(%esp)
08439ce3 +0x077:  mov    -0x34(%ebp),%ecx
08439ce6 +0x07a:  mov    %ecx,0x1c(%esp)
08439cea +0x07e:  mov    %edi,0x18(%esp)
08439cee +0x082:  mov    %esi,0x14(%esp)
08439cf2 +0x086:  mov    %ebx,0x10(%esp)
08439cf6 +0x08a:  mov    %edx,0xc(%esp)
08439cfa +0x08e:  mov    %eax,0x8(%esp)
08439cfe +0x092:  movl   $"inSert into log_emblem_compound(occ_date, channel_no, grade0, grade1, grade2, grade3, grade4, grade5, grade6) values(DATE_SUB(CURDATE(), INTERVAL 1 DAY), %d, %d, %d, %d, %d, %d, %d, %d)",0x4(%esp)
08439d06 +0x09a:  mov    -0x20(%ebp),%eax
08439d09 +0x09d:  mov    %eax,(%esp)
08439d0c +0x0a0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439d11 +0x0a5:  movl   $0x1,0x4(%esp)
08439d19 +0x0ad:  mov    -0x20(%ebp),%eax
08439d1c +0x0b0:  mov    %eax,(%esp)
08439d1f +0x0b3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439d24 +0x0b8:  xor    $0x1,%eax
08439d27 +0x0bb:  test   %al,%al
08439d29 +0x0bd:  jne    08439d3c <+0xd0>
08439d2b +0x0bf:  mov    -0x20(%ebp),%eax
08439d2e +0x0c2:  mov    %eax,(%esp)
08439d31 +0x0c5:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08439d36 +0x0ca:  or     %edx,%eax
08439d38 +0x0cc:  test   %eax,%eax
08439d3a +0x0ce:  jne    08439d43 <+0xd7>
08439d3c +0x0d0:  mov    $0x1,%eax
08439d41 +0x0d5:  jmp    08439d48 <+0xdc>
08439d43 +0x0d7:  mov    $0x0,%eax
08439d48 +0x0dc:  test   %al,%al
08439d4a +0x0de:  je     08439ddf <+0x173>
08439d50 +0x0e4:  mov    -0x1c(%ebp),%eax
08439d53 +0x0e7:  mov    (%eax),%ecx
08439d55 +0x0e9:  mov    -0x1c(%ebp),%eax
08439d58 +0x0ec:  mov    0x1c(%eax),%eax
08439d5b +0x0ef:  mov    %eax,-0x30(%ebp)
08439d5e +0x0f2:  mov    -0x1c(%ebp),%eax
08439d61 +0x0f5:  mov    0x18(%eax),%eax
08439d64 +0x0f8:  mov    %eax,-0x2c(%ebp)
08439d67 +0x0fb:  mov    -0x1c(%ebp),%eax
08439d6a +0x0fe:  mov    0x14(%eax),%edi
08439d6d +0x101:  mov    -0x1c(%ebp),%eax
08439d70 +0x104:  mov    0x10(%eax),%esi
08439d73 +0x107:  mov    -0x1c(%ebp),%eax
08439d76 +0x10a:  mov    0xc(%eax),%ebx
08439d79 +0x10d:  mov    -0x1c(%ebp),%eax
08439d7c +0x110:  mov    0x8(%eax),%edx
08439d7f +0x113:  mov    -0x1c(%ebp),%eax
08439d82 +0x116:  mov    0x4(%eax),%eax
08439d85 +0x119:  mov    %ecx,0x24(%esp)
08439d89 +0x11d:  mov    -0x30(%ebp),%ecx
08439d8c +0x120:  mov    %ecx,0x20(%esp)
08439d90 +0x124:  mov    -0x2c(%ebp),%ecx
08439d93 +0x127:  mov    %ecx,0x1c(%esp)
08439d97 +0x12b:  mov    %edi,0x18(%esp)
08439d9b +0x12f:  mov    %esi,0x14(%esp)
08439d9f +0x133:  mov    %ebx,0x10(%esp)
08439da3 +0x137:  mov    %edx,0xc(%esp)
08439da7 +0x13b:  mov    %eax,0x8(%esp)
08439dab +0x13f:  movl   $"upDate log_emblem_compound set grade0 = grade0+%d, grade1=grade1+%d, grade2=grade2+%d, grade3=grade3+%d, grade4=grade4+%d, grade5=grade5+%d, grade6=grade6+%d where occ_date=DATE_SUB(CURDATE(), INTERVAL 1 DAY) and channel_no=%d",0x4(%esp)
08439db3 +0x147:  mov    -0x20(%ebp),%eax
08439db6 +0x14a:  mov    %eax,(%esp)
08439db9 +0x14d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439dbe +0x152:  movl   $0x1,0x4(%esp)
08439dc6 +0x15a:  mov    -0x20(%ebp),%eax
08439dc9 +0x15d:  mov    %eax,(%esp)
08439dcc +0x160:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439dd1 +0x165:  xor    $0x1,%eax
08439dd4 +0x168:  test   %al,%al
08439dd6 +0x16a:  je     08439ddf <+0x173>
08439dd8 +0x16c:  mov    $0x0,%eax
08439ddd +0x171:  jmp    08439de4 <+0x178>
08439ddf +0x173:  mov    $0x1,%eax
08439de4 +0x178:  add    $0x5c,%esp
08439de7 +0x17b:  pop    %ebx
08439de8 +0x17c:  pop    %esi
08439de9 +0x17d:  pop    %edi
08439dea +0x17e:  pop    %ebp
08439deb +0x17f:  ret
```

## 反编译 C

```c
// DB_UpdateCompoundEmblemStatics::dispatch @ 0x8439c6c

/* DB_UpdateCompoundEmblemStatics::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCompoundEmblemStatics::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC *pSVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_COMPOUND_EMBLEM_STATISTIC>(in_stack_00000010);
  MySQL::set_query(this,
                   "inSert into log_emblem_compound(occ_date, channel_no, grade0, grade1, grade2, grade3, grade4, grade5, grade6) values(DATE_SUB(CURDATE(), INTERVAL 1 DAY), %d, %d, %d, %d, %d, %d, %d, %d)"
                   ,*(undefined4 *)pSVar3,*(undefined4 *)(pSVar3 + 4),*(undefined4 *)(pSVar3 + 8),
                   *(undefined4 *)(pSVar3 + 0xc),*(undefined4 *)(pSVar3 + 0x10),
                   *(undefined4 *)(pSVar3 + 0x14),*(undefined4 *)(pSVar3 + 0x18),
                   *(undefined4 *)(pSVar3 + 0x1c));
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "upDate log_emblem_compound set grade0 = grade0+%d, grade1=grade1+%d, grade2=grade2+%d, grade3=grade3+%d, grade4=grade4+%d, grade5=grade5+%d, grade6=grade6+%d where occ_date=DATE_SUB(CURDATE(), INTERVAL 1 DAY) and channel_no=%d"
                     ,*(undefined4 *)(pSVar3 + 4),*(undefined4 *)(pSVar3 + 8),
                     *(undefined4 *)(pSVar3 + 0xc),*(undefined4 *)(pSVar3 + 0x10),
                     *(undefined4 *)(pSVar3 + 0x14),*(undefined4 *)(pSVar3 + 0x18),
                     *(undefined4 *)(pSVar3 + 0x1c),*(undefined4 *)pSVar3);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
