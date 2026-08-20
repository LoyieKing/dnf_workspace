# dispatch

`_ZN27DB_ReqSaveCrazyLevelupEvent8dispatchEiiP6Stream`

`DB_ReqSaveCrazyLevelupEvent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqSaveCrazyLevelupEvent` | `0x0842527a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842527a  _ZN27DB_ReqSaveCrazyLevelupEvent8dispatchEiiP6Stream
#           DB_ReqSaveCrazyLevelupEvent::dispatch(int, int, Stream*)
# range [0x0842527a, 0x08425373]
0842527a +0x00:  push   %ebp
0842527b +0x01:  mov    %esp,%ebp
0842527d +0x03:  push   %esi
0842527e +0x04:  push   %ebx
0842527f +0x05:  sub    $0x30,%esp
08425282 +0x08:  mov    0x14(%ebp),%eax
08425285 +0x0b:  mov    %eax,(%esp)
08425288 +0x0e:  call   08451f42 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4b58>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4b58
0842528d +0x13:  mov    %eax,-0x10(%ebp)
08425290 +0x16:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08425295 +0x1b:  movl   $0x0,0x8(%esp)
0842529d +0x23:  movl   $0x4,0x4(%esp)
084252a5 +0x2b:  mov    %eax,(%esp)
084252a8 +0x2e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084252ad +0x33:  mov    %eax,-0xc(%ebp)
084252b0 +0x36:  mov    -0x10(%ebp),%eax
084252b3 +0x39:  mov    0x9(%eax),%esi
084252b6 +0x3c:  mov    -0x10(%ebp),%ebx
084252b9 +0x3f:  mov    -0x10(%ebp),%eax
084252bc +0x42:  mov    0x5(%eax),%eax
084252bf +0x45:  movl   $0x0,0x4(%esp)
084252c7 +0x4d:  mov    %eax,(%esp)
084252ca +0x50:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084252cf +0x55:  mov    %esi,0x10(%esp)
084252d3 +0x59:  mov    %ebx,0xc(%esp)
084252d7 +0x5d:  mov    %eax,0x8(%esp)
084252db +0x61:  movl   $"inSert into log_fighter_event(m_id,event_id,charac_no,occ_time,occ_cnt) values(%s,'%s',%d,now(),1)",0x4(%esp)
084252e3 +0x69:  mov    -0xc(%ebp),%eax
084252e6 +0x6c:  mov    %eax,(%esp)
084252e9 +0x6f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084252ee +0x74:  movl   $0x1,0x4(%esp)
084252f6 +0x7c:  mov    -0xc(%ebp),%eax
084252f9 +0x7f:  mov    %eax,(%esp)
084252fc +0x82:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08425301 +0x87:  xor    $0x1,%eax
08425304 +0x8a:  test   %al,%al
08425306 +0x8c:  je     08425367 <+0xed>
08425308 +0x8e:  mov    -0x10(%ebp),%eax
0842530b +0x91:  mov    0x9(%eax),%esi
0842530e +0x94:  mov    -0x10(%ebp),%ebx
08425311 +0x97:  mov    -0x10(%ebp),%eax
08425314 +0x9a:  mov    0x5(%eax),%eax
08425317 +0x9d:  movl   $0x0,0x4(%esp)
0842531f +0xa5:  mov    %eax,(%esp)
08425322 +0xa8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08425327 +0xad:  mov    %esi,0x10(%esp)
0842532b +0xb1:  mov    %ebx,0xc(%esp)
0842532f +0xb5:  mov    %eax,0x8(%esp)
08425333 +0xb9:  movl   $"upDate log_fighter_event set occ_time=now(),occ_cnt=occ_cnt+1 where m_id=%s and event_id='%s' and charac_no=%d",0x4(%esp)
0842533b +0xc1:  mov    -0xc(%ebp),%eax
0842533e +0xc4:  mov    %eax,(%esp)
08425341 +0xc7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08425346 +0xcc:  movl   $0x1,0x4(%esp)
0842534e +0xd4:  mov    -0xc(%ebp),%eax
08425351 +0xd7:  mov    %eax,(%esp)
08425354 +0xda:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08425359 +0xdf:  xor    $0x1,%eax
0842535c +0xe2:  test   %al,%al
0842535e +0xe4:  je     08425367 <+0xed>
08425360 +0xe6:  mov    $0x0,%eax
08425365 +0xeb:  jmp    0842536c <+0xf2>
08425367 +0xed:  mov    $0x1,%eax
0842536c +0xf2:  add    $0x30,%esp
0842536f +0xf5:  pop    %ebx
08425370 +0xf6:  pop    %esi
08425371 +0xf7:  pop    %ebp
08425372 +0xf8:  ret
08425373 +0xf9:  nop
```

## 反编译 C

```c
// DB_ReqSaveCrazyLevelupEvent::dispatch @ 0x842527a

/* DB_ReqSaveCrazyLevelupEvent::dispatch(int, int, Stream*) */

undefined4 DB_ReqSaveCrazyLevelupEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  SIG_SAVE_CRAZY_LEVELUP_EVENT *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_CRAZY_LEVELUP_EVENT>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar1 = *(undefined4 *)(pSVar3 + 9);
  uVar4 = NumberToString(*(uint *)(pSVar3 + 5),0);
  MySQL::set_query(this,
                   "inSert into log_fighter_event(m_id,event_id,charac_no,occ_time,occ_cnt) values(%s,\'%s\',%d,now(),1)"
                   ,uVar4,pSVar3,uVar1);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 != '\x01') {
    uVar1 = *(undefined4 *)(pSVar3 + 9);
    uVar4 = NumberToString(*(uint *)(pSVar3 + 5),0);
    MySQL::set_query(this,
                     "upDate log_fighter_event set occ_time=now(),occ_cnt=occ_cnt+1 where m_id=%s and event_id=\'%s\' and charac_no=%d"
                     ,uVar4,pSVar3,uVar1);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
