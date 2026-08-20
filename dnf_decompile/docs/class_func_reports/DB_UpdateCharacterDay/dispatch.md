# dispatch

`_ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream`

`DB_UpdateCharacterDay::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCharacterDay` | `0x08435d12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08435d12  _ZN21DB_UpdateCharacterDay8dispatchEiiP6Stream
#           DB_UpdateCharacterDay::dispatch(int, int, Stream*)
# range [0x08435d12, 0x08435e1d]
08435d12 +0x000:  push   %ebp
08435d13 +0x001:  mov    %esp,%ebp
08435d15 +0x003:  push   %ebx
08435d16 +0x004:  sub    $0x24,%esp
08435d19 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08435d1e +0x00c:  movl   $0x0,0x8(%esp)
08435d26 +0x014:  movl   $0x6,0x4(%esp)
08435d2e +0x01c:  mov    %eax,(%esp)
08435d31 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08435d36 +0x024:  mov    %eax,-0x10(%ebp)
08435d39 +0x027:  mov    0x14(%ebp),%eax
08435d3c +0x02a:  mov    %eax,(%esp)
08435d3f +0x02d:  call   084531c8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5dde>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5dde
08435d44 +0x032:  mov    %eax,-0xc(%ebp)
08435d47 +0x035:  mov    -0xc(%ebp),%eax
08435d4a +0x038:  mov    (%eax),%eax
08435d4c +0x03a:  movl   $0x0,0x4(%esp)
08435d54 +0x042:  mov    %eax,(%esp)
08435d57 +0x045:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08435d5c +0x04a:  mov    -0xc(%ebp),%edx
08435d5f +0x04d:  movzwl 0x4(%edx),%edx
08435d63 +0x051:  movzwl %dx,%edx
08435d66 +0x054:  mov    %eax,0xc(%esp)
08435d6a +0x058:  mov    %edx,0x8(%esp)
08435d6e +0x05c:  movl   $"upDate event_1111_charac_day set entries_count=entries_count+%u, update_time=now() where m_id=%s",0x4(%esp)
08435d76 +0x064:  mov    -0x10(%ebp),%eax
08435d79 +0x067:  mov    %eax,(%esp)
08435d7c +0x06a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435d81 +0x06f:  movl   $0x1,0x4(%esp)
08435d89 +0x077:  mov    -0x10(%ebp),%eax
08435d8c +0x07a:  mov    %eax,(%esp)
08435d8f +0x07d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435d94 +0x082:  xor    $0x1,%eax
08435d97 +0x085:  test   %al,%al
08435d99 +0x087:  je     08435da2 <+0x90>
08435d9b +0x089:  mov    $0x0,%eax
08435da0 +0x08e:  jmp    08435e18 <+0x106>
08435da2 +0x090:  mov    -0x10(%ebp),%eax
08435da5 +0x093:  mov    %eax,(%esp)
08435da8 +0x096:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08435dad +0x09b:  or     %edx,%eax
08435daf +0x09d:  test   %eax,%eax
08435db1 +0x09f:  sete   %al
08435db4 +0x0a2:  test   %al,%al
08435db6 +0x0a4:  je     08435e13 <+0x101>
08435db8 +0x0a6:  mov    -0xc(%ebp),%eax
08435dbb +0x0a9:  movzwl 0x4(%eax),%eax
08435dbf +0x0ad:  movzwl %ax,%ebx
08435dc2 +0x0b0:  mov    -0xc(%ebp),%eax
08435dc5 +0x0b3:  mov    (%eax),%eax
08435dc7 +0x0b5:  movl   $0x0,0x4(%esp)
08435dcf +0x0bd:  mov    %eax,(%esp)
08435dd2 +0x0c0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08435dd7 +0x0c5:  mov    %ebx,0xc(%esp)
08435ddb +0x0c9:  mov    %eax,0x8(%esp)
08435ddf +0x0cd:  movl   $"inSert into event_1111_charac_day(m_id, entries_count, update_time) values(%s, %u, now())",0x4(%esp)
08435de7 +0x0d5:  mov    -0x10(%ebp),%eax
08435dea +0x0d8:  mov    %eax,(%esp)
08435ded +0x0db:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435df2 +0x0e0:  movl   $0x1,0x4(%esp)
08435dfa +0x0e8:  mov    -0x10(%ebp),%eax
08435dfd +0x0eb:  mov    %eax,(%esp)
08435e00 +0x0ee:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435e05 +0x0f3:  xor    $0x1,%eax
08435e08 +0x0f6:  test   %al,%al
08435e0a +0x0f8:  je     08435e13 <+0x101>
08435e0c +0x0fa:  mov    $0x0,%eax
08435e11 +0x0ff:  jmp    08435e18 <+0x106>
08435e13 +0x101:  mov    $0x1,%eax
08435e18 +0x106:  add    $0x24,%esp
08435e1b +0x109:  pop    %ebx
08435e1c +0x10a:  pop    %ebp
08435e1d +0x10b:  ret
```

## 反编译 C

```c
// DB_UpdateCharacterDay::dispatch @ 0x8435d12

/* DB_UpdateCharacterDay::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCharacterDay::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_CHARACTER_DAY_EVENT *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_CHARACTER_DAY_EVENT>(in_stack_00000010);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "upDate event_1111_charac_day set entries_count=entries_count+%u, update_time=now() where m_id=%s"
                   ,(uint)*(ushort *)(pSVar3 + 4),uVar4);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(this);
    if (lVar5 == 0) {
      uVar1 = *(ushort *)(pSVar3 + 4);
      uVar4 = NumberToString(*(uint *)pSVar3,0);
      MySQL::set_query(this,
                       "inSert into event_1111_charac_day(m_id, entries_count, update_time) values(%s, %u, now())"
                       ,uVar4,(uint)uVar1);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
