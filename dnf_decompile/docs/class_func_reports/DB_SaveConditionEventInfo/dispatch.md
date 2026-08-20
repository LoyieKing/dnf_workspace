# dispatch

`_ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream`

`DB_SaveConditionEventInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveConditionEventInfo` | `0x08437930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437930  _ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream
#           DB_SaveConditionEventInfo::dispatch(int, int, Stream*)
# range [0x08437930, 0x08437a31]
08437930 +0x000:  push   %ebp
08437931 +0x001:  mov    %esp,%ebp
08437933 +0x003:  sub    $0x38,%esp
08437936 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843793b +0x00b:  movl   $0x0,0x8(%esp)
08437943 +0x013:  movl   $0x2,0x4(%esp)
0843794b +0x01b:  mov    %eax,(%esp)
0843794e +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08437953 +0x023:  mov    %eax,-0x10(%ebp)
08437956 +0x026:  mov    0x14(%ebp),%eax
08437959 +0x029:  mov    %eax,(%esp)
0843795c +0x02c:  call   084535e8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x61fe>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x61fe
08437961 +0x031:  mov    %eax,-0xc(%ebp)
08437964 +0x034:  mov    -0xc(%ebp),%eax
08437967 +0x037:  mov    (%eax),%ecx
08437969 +0x039:  mov    -0xc(%ebp),%eax
0843796c +0x03c:  movzwl 0x6(%eax),%eax
08437970 +0x040:  movswl %ax,%edx
08437973 +0x043:  mov    -0xc(%ebp),%eax
08437976 +0x046:  movzwl 0x4(%eax),%eax
0843797a +0x04a:  cwtl
0843797b +0x04b:  mov    %ecx,0x10(%esp)
0843797f +0x04f:  mov    %edx,0xc(%esp)
08437983 +0x053:  mov    %eax,0x8(%esp)
08437987 +0x057:  movl   $"upDate event_conditionable_info set current_step=%d, reward_step=%d, update_time=now() where charac_no=%u",0x4(%esp)
0843798f +0x05f:  mov    -0x10(%ebp),%eax
08437992 +0x062:  mov    %eax,(%esp)
08437995 +0x065:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843799a +0x06a:  movl   $0x1,0x4(%esp)
084379a2 +0x072:  mov    -0x10(%ebp),%eax
084379a5 +0x075:  mov    %eax,(%esp)
084379a8 +0x078:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084379ad +0x07d:  xor    $0x1,%eax
084379b0 +0x080:  test   %al,%al
084379b2 +0x082:  je     084379bb <+0x8b>
084379b4 +0x084:  mov    $0x0,%eax
084379b9 +0x089:  jmp    08437a2f <+0xff>
084379bb +0x08b:  mov    -0x10(%ebp),%eax
084379be +0x08e:  mov    %eax,(%esp)
084379c1 +0x091:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084379c6 +0x096:  or     %edx,%eax
084379c8 +0x098:  test   %eax,%eax
084379ca +0x09a:  sete   %al
084379cd +0x09d:  test   %al,%al
084379cf +0x09f:  je     08437a2a <+0xfa>
084379d1 +0x0a1:  mov    -0xc(%ebp),%eax
084379d4 +0x0a4:  movzwl 0x6(%eax),%eax
084379d8 +0x0a8:  movswl %ax,%ecx
084379db +0x0ab:  mov    -0xc(%ebp),%eax
084379de +0x0ae:  movzwl 0x4(%eax),%eax
084379e2 +0x0b2:  movswl %ax,%edx
084379e5 +0x0b5:  mov    -0xc(%ebp),%eax
084379e8 +0x0b8:  mov    (%eax),%eax
084379ea +0x0ba:  mov    %ecx,0x10(%esp)
084379ee +0x0be:  mov    %edx,0xc(%esp)
084379f2 +0x0c2:  mov    %eax,0x8(%esp)
084379f6 +0x0c6:  movl   $"inSert into event_conditionable_info(charac_no, current_step, reward_step, update_time) values(%u, %d, %d, now())",0x4(%esp)
084379fe +0x0ce:  mov    -0x10(%ebp),%eax
08437a01 +0x0d1:  mov    %eax,(%esp)
08437a04 +0x0d4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08437a09 +0x0d9:  movl   $0x1,0x4(%esp)
08437a11 +0x0e1:  mov    -0x10(%ebp),%eax
08437a14 +0x0e4:  mov    %eax,(%esp)
08437a17 +0x0e7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08437a1c +0x0ec:  xor    $0x1,%eax
08437a1f +0x0ef:  test   %al,%al
08437a21 +0x0f1:  je     08437a2a <+0xfa>
08437a23 +0x0f3:  mov    $0x0,%eax
08437a28 +0x0f8:  jmp    08437a2f <+0xff>
08437a2a +0x0fa:  mov    $0x1,%eax
08437a2f +0x0ff:  leave
08437a30 +0x100:  ret
08437a31 +0x101:  nop
```

## 反编译 C

```c
// DB_SaveConditionEventInfo::dispatch @ 0x8437930

/* DB_SaveConditionEventInfo::dispatch(int, int, Stream*) */

undefined4 DB_SaveConditionEventInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_SAVE_CONDITION_EVENT *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_CONDITION_EVENT>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate event_conditionable_info set current_step=%d, reward_step=%d, update_time=now() where charac_no=%u"
                   ,(int)*(short *)(pSVar2 + 4),(int)*(short *)(pSVar2 + 6),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into event_conditionable_info(charac_no, current_step, reward_step, update_time) values(%u, %d, %d, now())"
                       ,*(undefined4 *)pSVar2,(int)*(short *)(pSVar2 + 4),
                       (int)*(short *)(pSVar2 + 6));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
