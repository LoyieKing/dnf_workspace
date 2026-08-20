# dispatch

`_ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream`

`DB_SaveCharacSlotExtend::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharacSlotExtend` | `0x084420ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084420ea  _ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream
#           DB_SaveCharacSlotExtend::dispatch(int, int, Stream*)
# range [0x084420ea, 0x08442225]
084420ea +0x000:  push   %ebp
084420eb +0x001:  mov    %esp,%ebp
084420ed +0x003:  push   %edi
084420ee +0x004:  push   %esi
084420ef +0x005:  push   %ebx
084420f0 +0x006:  sub    $0x4c,%esp
084420f3 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084420f8 +0x00e:  movl   $0x0,0x8(%esp)
08442100 +0x016:  movl   $0x2,0x4(%esp)
08442108 +0x01e:  mov    %eax,(%esp)
0844210b +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08442110 +0x026:  mov    %eax,-0x20(%ebp)
08442113 +0x029:  mov    0x14(%ebp),%eax
08442116 +0x02c:  mov    %eax,(%esp)
08442119 +0x02f:  call   08453dca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x69e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x69e0
0844211e +0x034:  mov    %eax,-0x1c(%ebp)
08442121 +0x037:  mov    -0x1c(%ebp),%eax
08442124 +0x03a:  mov    (%eax),%eax
08442126 +0x03c:  movl   $0x0,0x4(%esp)
0844212e +0x044:  mov    %eax,(%esp)
08442131 +0x047:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442136 +0x04c:  mov    -0x1c(%ebp),%edx
08442139 +0x04f:  movzbl 0x5(%edx),%edx
0844213d +0x053:  movzbl %dl,%ecx
08442140 +0x056:  mov    -0x1c(%ebp),%edx
08442143 +0x059:  movzbl 0x4(%edx),%edx
08442147 +0x05d:  movzbl %dl,%edx
0844214a +0x060:  mov    %eax,0x10(%esp)
0844214e +0x064:  mov    %ecx,0xc(%esp)
08442152 +0x068:  mov    %edx,0x8(%esp)
08442156 +0x06c:  movl   $"upDate charac_view set slot_effect_count=%u, charac_slot_limit=%u where m_id=%s",0x4(%esp)
0844215e +0x074:  mov    -0x20(%ebp),%eax
08442161 +0x077:  mov    %eax,(%esp)
08442164 +0x07a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08442169 +0x07f:  movl   $0x1,0x4(%esp)
08442171 +0x087:  mov    -0x20(%ebp),%eax
08442174 +0x08a:  mov    %eax,(%esp)
08442177 +0x08d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844217c +0x092:  xor    $0x1,%eax
0844217f +0x095:  test   %al,%al
08442181 +0x097:  jne    08442194 <+0xaa>
08442183 +0x099:  mov    -0x20(%ebp),%eax
08442186 +0x09c:  mov    %eax,(%esp)
08442189 +0x09f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844218e +0x0a4:  or     %edx,%eax
08442190 +0x0a6:  test   %eax,%eax
08442192 +0x0a8:  jne    0844219b <+0xb1>
08442194 +0x0aa:  mov    $0x1,%eax
08442199 +0x0af:  jmp    084421a0 <+0xb6>
0844219b +0x0b1:  mov    $0x0,%eax
084421a0 +0x0b6:  test   %al,%al
084421a2 +0x0b8:  je     08442218 <+0x12e>
084421a4 +0x0ba:  mov    -0x1c(%ebp),%eax
084421a7 +0x0bd:  mov    (%eax),%eax
084421a9 +0x0bf:  movl   $0x0,0x4(%esp)
084421b1 +0x0c7:  mov    %eax,(%esp)
084421b4 +0x0ca:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084421b9 +0x0cf:  mov    %eax,%ebx
084421bb +0x0d1:  mov    -0x1c(%ebp),%eax
084421be +0x0d4:  movzbl 0x5(%eax),%eax
084421c2 +0x0d8:  movzbl %al,%edi
084421c5 +0x0db:  mov    -0x1c(%ebp),%eax
084421c8 +0x0de:  movzbl 0x4(%eax),%eax
084421cc +0x0e2:  movzbl %al,%esi
084421cf +0x0e5:  movl   $0x5,0xc(%esp)
084421d7 +0x0ed:  movl   $0xa1f5,0x8(%esp)
084421df +0x0f5:  movl   $&_ZZN23DB_SaveCharacSlotExtend8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084421e7 +0x0fd:  lea    -0x30(%ebp),%eax
084421ea +0x100:  mov    %eax,(%esp)
084421ed +0x103:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084421f2 +0x108:  mov    %ebx,0x10(%esp)
084421f6 +0x10c:  mov    %edi,0xc(%esp)
084421fa +0x110:  mov    %esi,0x8(%esp)
084421fe +0x114:  movl   $"upDate charac_view set slot_effect_count(%u), charac_slot_limit(%u) failed at m_id(%u)",0x4(%esp)
08442206 +0x11c:  lea    -0x30(%ebp),%eax
08442209 +0x11f:  mov    %eax,(%esp)
0844220c +0x122:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08442211 +0x127:  mov    $0x0,%eax
08442216 +0x12c:  jmp    0844221d <+0x133>
08442218 +0x12e:  mov    $0x1,%eax
0844221d +0x133:  add    $0x4c,%esp
08442220 +0x136:  pop    %ebx
08442221 +0x137:  pop    %esi
08442222 +0x138:  pop    %edi
08442223 +0x139:  pop    %ebp
08442224 +0x13a:  ret
08442225 +0x13b:  nop
```

## 反编译 C

```c
// DB_SaveCharacSlotExtend::dispatch @ 0x84420ea

/* DB_SaveCharacSlotExtend::dispatch(int, int, Stream*) */

bool DB_SaveCharacSlotExtend::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_EXTEND_CHARAC_SLOT SVar1;
  SIG_EXTEND_CHARAC_SLOT SVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  cMyTrace local_34 [16];
  MySQL *local_24;
  SIG_EXTEND_CHARAC_SLOT *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = Stream::GetOutBuffer<SIG_EXTEND_CHARAC_SLOT>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)local_20,0);
  MySQL::set_query(local_24,
                   "upDate charac_view set slot_effect_count=%u, charac_slot_limit=%u where m_id=%s"
                   ,(uint)(byte)local_20[4],(uint)(byte)local_20[5],uVar5);
  cVar4 = MySQL::exec(local_24,true);
  if ((cVar4 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_24), lVar6 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = NumberToString(*(uint *)local_20,0);
    SVar1 = local_20[5];
    SVar2 = local_20[4];
    cMyTrace::cMyTrace(local_34,"virtual bool DB_SaveCharacSlotExtend::dispatch(int, int, Stream*)",
                       0xa1f5,5);
    cMyTrace::operator()
              (local_34,
               "upDate charac_view set slot_effect_count(%u), charac_slot_limit(%u) failed at m_id(%u)"
               ,(uint)(byte)SVar2,(uint)(byte)SVar1,uVar5);
  }
  return !bVar3;
}
```
