# dispatch

`_ZN16DB_SaveExpertJob8dispatchEiiP6Stream`

`DB_SaveExpertJob::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveExpertJob` | `0x084367f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084367f4  _ZN16DB_SaveExpertJob8dispatchEiiP6Stream
#           DB_SaveExpertJob::dispatch(int, int, Stream*)
# range [0x084367f4, 0x08436963]
084367f4 +0x000:  push   %ebp
084367f5 +0x001:  mov    %esp,%ebp
084367f7 +0x003:  push   %esi
084367f8 +0x004:  push   %ebx
084367f9 +0x005:  sub    $0x30,%esp
084367fc +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08436801 +0x00d:  movl   $0x0,0x8(%esp)
08436809 +0x015:  movl   $0x2,0x4(%esp)
08436811 +0x01d:  mov    %eax,(%esp)
08436814 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08436819 +0x025:  mov    %eax,-0x10(%ebp)
0843681c +0x028:  mov    0x14(%ebp),%eax
0843681f +0x02b:  mov    %eax,(%esp)
08436822 +0x02e:  call   08453344 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5f5a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5f5a
08436827 +0x033:  mov    %eax,-0xc(%ebp)
0843682a +0x036:  mov    -0xc(%ebp),%eax
0843682d +0x039:  mov    (%eax),%esi
0843682f +0x03b:  mov    -0xc(%ebp),%eax
08436832 +0x03e:  add    $0x10,%eax
08436835 +0x041:  movl   $0x1e,0xc(%esp)
0843683d +0x049:  mov    %eax,0x8(%esp)
08436841 +0x04d:  movl   $0x0,0x4(%esp)
08436849 +0x055:  mov    -0x10(%ebp),%eax
0843684c +0x058:  mov    %eax,(%esp)
0843684f +0x05b:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08436854 +0x060:  mov    -0xc(%ebp),%edx
08436857 +0x063:  mov    0xc(%edx),%ebx
0843685a +0x066:  mov    -0xc(%ebp),%edx
0843685d +0x069:  mov    0x8(%edx),%ecx
08436860 +0x06c:  mov    -0xc(%ebp),%edx
08436863 +0x06f:  movzwl 0x4(%edx),%edx
08436867 +0x073:  movzwl %dx,%edx
0843686a +0x076:  mov    %esi,0x18(%esp)
0843686e +0x07a:  mov    %eax,0x14(%esp)
08436872 +0x07e:  mov    %ebx,0x10(%esp)
08436876 +0x082:  mov    %ecx,0xc(%esp)
0843687a +0x086:  mov    %edx,0x8(%esp)
0843687e +0x08a:  movl   $"upDate charac_expert_job set expert_job_giveup_cnt=%d, expert_job_info=%d, expert_job_info_ex=%d, recipe='%s' where charac_no=%u",0x4(%esp)
08436886 +0x092:  mov    -0x10(%ebp),%eax
08436889 +0x095:  mov    %eax,(%esp)
0843688c +0x098:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436891 +0x09d:  movl   $0x1,0x4(%esp)
08436899 +0x0a5:  mov    -0x10(%ebp),%eax
0843689c +0x0a8:  mov    %eax,(%esp)
0843689f +0x0ab:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084368a4 +0x0b0:  xor    $0x1,%eax
084368a7 +0x0b3:  test   %al,%al
084368a9 +0x0b5:  je     084368b5 <+0xc1>
084368ab +0x0b7:  mov    $0x0,%eax
084368b0 +0x0bc:  jmp    0843695c <+0x168>
084368b5 +0x0c1:  mov    -0x10(%ebp),%eax
084368b8 +0x0c4:  mov    %eax,(%esp)
084368bb +0x0c7:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084368c0 +0x0cc:  or     %edx,%eax
084368c2 +0x0ce:  test   %eax,%eax
084368c4 +0x0d0:  sete   %al
084368c7 +0x0d3:  test   %al,%al
084368c9 +0x0d5:  je     08436957 <+0x163>
084368cf +0x0db:  mov    -0xc(%ebp),%eax
084368d2 +0x0de:  add    $0x10,%eax
084368d5 +0x0e1:  movl   $0x1e,0xc(%esp)
084368dd +0x0e9:  mov    %eax,0x8(%esp)
084368e1 +0x0ed:  movl   $0x0,0x4(%esp)
084368e9 +0x0f5:  mov    -0x10(%ebp),%eax
084368ec +0x0f8:  mov    %eax,(%esp)
084368ef +0x0fb:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084368f4 +0x100:  mov    -0xc(%ebp),%edx
084368f7 +0x103:  mov    0xc(%edx),%esi
084368fa +0x106:  mov    -0xc(%ebp),%edx
084368fd +0x109:  mov    0x8(%edx),%ebx
08436900 +0x10c:  mov    -0xc(%ebp),%edx
08436903 +0x10f:  movzwl 0x4(%edx),%edx
08436907 +0x113:  movzwl %dx,%ecx
0843690a +0x116:  mov    -0xc(%ebp),%edx
0843690d +0x119:  mov    (%edx),%edx
0843690f +0x11b:  mov    %eax,0x18(%esp)
08436913 +0x11f:  mov    %esi,0x14(%esp)
08436917 +0x123:  mov    %ebx,0x10(%esp)
0843691b +0x127:  mov    %ecx,0xc(%esp)
0843691f +0x12b:  mov    %edx,0x8(%esp)
08436923 +0x12f:  movl   $"inSert into charac_expert_job(charac_no, expert_job_giveup_cnt, expert_job_info, expert_job_info_ex, recipe) values(%u, %d, %d, %d, '%s')",0x4(%esp)
0843692b +0x137:  mov    -0x10(%ebp),%eax
0843692e +0x13a:  mov    %eax,(%esp)
08436931 +0x13d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08436936 +0x142:  movl   $0x1,0x4(%esp)
0843693e +0x14a:  mov    -0x10(%ebp),%eax
08436941 +0x14d:  mov    %eax,(%esp)
08436944 +0x150:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08436949 +0x155:  xor    $0x1,%eax
0843694c +0x158:  test   %al,%al
0843694e +0x15a:  je     08436957 <+0x163>
08436950 +0x15c:  mov    $0x0,%eax
08436955 +0x161:  jmp    0843695c <+0x168>
08436957 +0x163:  mov    $0x1,%eax
0843695c +0x168:  add    $0x30,%esp
0843695f +0x16b:  pop    %ebx
08436960 +0x16c:  pop    %esi
08436961 +0x16d:  pop    %ebp
08436962 +0x16e:  ret
08436963 +0x16f:  nop
```

## 反编译 C

```c
// DB_SaveExpertJob::dispatch @ 0x84367f4

/* DB_SaveExpertJob::dispatch(int, int, Stream*) */

undefined4 DB_SaveExpertJob::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_EXPERT_JOB *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_EXPERT_JOB>(in_stack_00000010);
  uVar4 = *(undefined4 *)pSVar2;
  uVar3 = MySQL::blob_to_str(this,0,pSVar2 + 0x10,0x1e);
  MySQL::set_query(this,
                   "upDate charac_expert_job set expert_job_giveup_cnt=%d, expert_job_info=%d, expert_job_info_ex=%d, recipe=\'%s\' where charac_no=%u"
                   ,(uint)*(ushort *)(pSVar2 + 4),*(undefined4 *)(pSVar2 + 8),
                   *(undefined4 *)(pSVar2 + 0xc),uVar3,uVar4);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(this);
    if (lVar5 == 0) {
      uVar4 = MySQL::blob_to_str(this,0,pSVar2 + 0x10,0x1e);
      MySQL::set_query(this,
                       "inSert into charac_expert_job(charac_no, expert_job_giveup_cnt, expert_job_info, expert_job_info_ex, recipe) values(%u, %d, %d, %d, \'%s\')"
                       ,*(undefined4 *)pSVar2,(uint)*(ushort *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),uVar4);
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
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
