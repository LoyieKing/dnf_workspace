# dispatch

`_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream`

`DB_UpdateBloodBestRecord::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBloodBestRecord` | `0x08431c74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08431c74  _ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream
#           DB_UpdateBloodBestRecord::dispatch(int, int, Stream*)
# range [0x08431c74, 0x08431d8b]
08431c74 +0x000:  push   %ebp
08431c75 +0x001:  mov    %esp,%ebp
08431c77 +0x003:  push   %ebx
08431c78 +0x004:  sub    $0x34,%esp
08431c7b +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08431c80 +0x00c:  movl   $0x0,0x8(%esp)
08431c88 +0x014:  movl   $0x2,0x4(%esp)
08431c90 +0x01c:  mov    %eax,(%esp)
08431c93 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08431c98 +0x024:  mov    %eax,-0x10(%ebp)
08431c9b +0x027:  mov    0x14(%ebp),%eax
08431c9e +0x02a:  mov    %eax,(%esp)
08431ca1 +0x02d:  call   08452e8e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5aa4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5aa4
08431ca6 +0x032:  mov    %eax,-0xc(%ebp)
08431ca9 +0x035:  mov    -0xc(%ebp),%eax
08431cac +0x038:  mov    0xc(%eax),%ebx
08431caf +0x03b:  mov    -0xc(%ebp),%eax
08431cb2 +0x03e:  mov    (%eax),%ecx
08431cb4 +0x040:  mov    -0xc(%ebp),%eax
08431cb7 +0x043:  mov    0x4(%eax),%edx
08431cba +0x046:  mov    -0xc(%ebp),%eax
08431cbd +0x049:  mov    0x8(%eax),%eax
08431cc0 +0x04c:  mov    %ebx,0x14(%esp)
08431cc4 +0x050:  mov    %ecx,0x10(%esp)
08431cc8 +0x054:  mov    %edx,0xc(%esp)
08431ccc +0x058:  mov    %eax,0x8(%esp)
08431cd0 +0x05c:  movl   $"upDate charac_blood_best_record set best_round=%d, best_time=%u where charac_no=%u and dungeon_index=%d",0x4(%esp)
08431cd8 +0x064:  mov    -0x10(%ebp),%eax
08431cdb +0x067:  mov    %eax,(%esp)
08431cde +0x06a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08431ce3 +0x06f:  movl   $0x1,0x4(%esp)
08431ceb +0x077:  mov    -0x10(%ebp),%eax
08431cee +0x07a:  mov    %eax,(%esp)
08431cf1 +0x07d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08431cf6 +0x082:  xor    $0x1,%eax
08431cf9 +0x085:  test   %al,%al
08431cfb +0x087:  jne    08431d0e <+0x9a>
08431cfd +0x089:  mov    -0x10(%ebp),%eax
08431d00 +0x08c:  mov    %eax,(%esp)
08431d03 +0x08f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08431d08 +0x094:  or     %edx,%eax
08431d0a +0x096:  test   %eax,%eax
08431d0c +0x098:  jne    08431d15 <+0xa1>
08431d0e +0x09a:  mov    $0x1,%eax
08431d13 +0x09f:  jmp    08431d1a <+0xa6>
08431d15 +0x0a1:  mov    $0x0,%eax
08431d1a +0x0a6:  test   %al,%al
08431d1c +0x0a8:  je     08431d80 <+0x10c>
08431d1e +0x0aa:  mov    -0xc(%ebp),%eax
08431d21 +0x0ad:  mov    0x4(%eax),%ebx
08431d24 +0x0b0:  mov    -0xc(%ebp),%eax
08431d27 +0x0b3:  mov    0x8(%eax),%ecx
08431d2a +0x0b6:  mov    -0xc(%ebp),%eax
08431d2d +0x0b9:  mov    0xc(%eax),%edx
08431d30 +0x0bc:  mov    -0xc(%ebp),%eax
08431d33 +0x0bf:  mov    (%eax),%eax
08431d35 +0x0c1:  mov    %ebx,0x14(%esp)
08431d39 +0x0c5:  mov    %ecx,0x10(%esp)
08431d3d +0x0c9:  mov    %edx,0xc(%esp)
08431d41 +0x0cd:  mov    %eax,0x8(%esp)
08431d45 +0x0d1:  movl   $"inSert into charac_blood_best_record(charac_no,dungeon_index,best_round,best_time) values(%u,%d,%d,%u)",0x4(%esp)
08431d4d +0x0d9:  mov    -0x10(%ebp),%eax
08431d50 +0x0dc:  mov    %eax,(%esp)
08431d53 +0x0df:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08431d58 +0x0e4:  movl   $0x1,0x4(%esp)
08431d60 +0x0ec:  mov    -0x10(%ebp),%eax
08431d63 +0x0ef:  mov    %eax,(%esp)
08431d66 +0x0f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08431d6b +0x0f7:  xor    $0x1,%eax
08431d6e +0x0fa:  test   %al,%al
08431d70 +0x0fc:  je     08431d79 <+0x105>
08431d72 +0x0fe:  mov    $0x0,%eax
08431d77 +0x103:  jmp    08431d85 <+0x111>
08431d79 +0x105:  mov    $0x1,%eax
08431d7e +0x10a:  jmp    08431d85 <+0x111>
08431d80 +0x10c:  mov    $0x1,%eax
08431d85 +0x111:  add    $0x34,%esp
08431d88 +0x114:  pop    %ebx
08431d89 +0x115:  pop    %ebp
08431d8a +0x116:  ret
08431d8b +0x117:  nop
```

## 反编译 C

```c
// DB_UpdateBloodBestRecord::dispatch @ 0x8431c74

/* DB_UpdateBloodBestRecord::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBloodBestRecord::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORD *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORD>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate charac_blood_best_record set best_round=%d, best_time=%u where charac_no=%u and dungeon_index=%d"
                   ,*(undefined4 *)(pSVar3 + 8),*(undefined4 *)(pSVar3 + 4),*(undefined4 *)pSVar3,
                   *(undefined4 *)(pSVar3 + 0xc));
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(this);
    if (lVar5 != 0) {
      bVar1 = false;
      goto LAB_08431d1a;
    }
  }
  bVar1 = true;
LAB_08431d1a:
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into charac_blood_best_record(charac_no,dungeon_index,best_round,best_time) values(%u,%d,%d,%u)"
                     ,*(undefined4 *)pSVar3,*(undefined4 *)(pSVar3 + 0xc),
                     *(undefined4 *)(pSVar3 + 8),*(undefined4 *)(pSVar3 + 4));
    cVar2 = MySQL::exec(this,true);
    if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
