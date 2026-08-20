# dispatch

`_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream`

`DB_MailBox_Req_Delete::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_Delete` | `0x0841f084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841f084  _ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream
#           DB_MailBox_Req_Delete::dispatch(int, int, Stream*)
# range [0x0841f084, 0x0841f159]
0841f084 +0x00:  push   %ebp
0841f085 +0x01:  mov    %esp,%ebp
0841f087 +0x03:  sub    $0x28,%esp
0841f08a +0x06:  mov    0x14(%ebp),%eax
0841f08d +0x09:  mov    %eax,(%esp)
0841f090 +0x0c:  call   084519aa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x45c0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x45c0
0841f095 +0x11:  mov    %eax,-0x10(%ebp)
0841f098 +0x14:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841f09d +0x19:  movl   $0x0,0x8(%esp)
0841f0a5 +0x21:  movl   $0x3,0x4(%esp)
0841f0ad +0x29:  mov    %eax,(%esp)
0841f0b0 +0x2c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841f0b5 +0x31:  mov    %eax,-0xc(%ebp)
0841f0b8 +0x34:  mov    -0x10(%ebp),%eax
0841f0bb +0x37:  mov    (%eax),%eax
0841f0bd +0x39:  test   %eax,%eax
0841f0bf +0x3b:  jne    0841f0cb <+0x47>
0841f0c1 +0x3d:  mov    $0x0,%eax
0841f0c6 +0x42:  jmp    0841f158 <+0xd4>
0841f0cb +0x47:  mov    -0x10(%ebp),%eax
0841f0ce +0x4a:  mov    (%eax),%eax
0841f0d0 +0x4c:  cmp    $0x1,%eax
0841f0d3 +0x4f:  jne    0841f0fe <+0x7a>
0841f0d5 +0x51:  mov    -0x10(%ebp),%eax
0841f0d8 +0x54:  mov    0x4(%eax),%edx
0841f0db +0x57:  mov    -0x10(%ebp),%eax
0841f0de +0x5a:  mov    0x54(%eax),%eax
0841f0e1 +0x5d:  mov    %edx,0xc(%esp)
0841f0e5 +0x61:  mov    %eax,0x8(%esp)
0841f0e9 +0x65:  movl   $"upDate postal set delete_flag=%d,receive_time=now() where postal_id=%d",0x4(%esp)
0841f0f1 +0x6d:  mov    -0xc(%ebp),%eax
0841f0f4 +0x70:  mov    %eax,(%esp)
0841f0f7 +0x73:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841f0fc +0x78:  jmp    0841f132 <+0xae>
0841f0fe +0x7a:  mov    -0x10(%ebp),%eax
0841f101 +0x7d:  movl   $&_ZZN21DB_MailBox_Req_Delete8dispatchEiiP6StreamE8strQuery,0x4(%esp)
0841f109 +0x85:  mov    %eax,(%esp)
0841f10c +0x88:  call   083ff968 <_Z15getList2inQueryPjPc>  ; getList2inQuery(unsigned int*, char*)
0841f111 +0x8d:  mov    -0x10(%ebp),%edx
0841f114 +0x90:  mov    0x54(%edx),%edx
0841f117 +0x93:  mov    %eax,0xc(%esp)
0841f11b +0x97:  mov    %edx,0x8(%esp)
0841f11f +0x9b:  movl   $"upDate postal set delete_flag=%d,receive_time=now() where postal_id %s",0x4(%esp)
0841f127 +0xa3:  mov    -0xc(%ebp),%eax
0841f12a +0xa6:  mov    %eax,(%esp)
0841f12d +0xa9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841f132 +0xae:  movl   $0x1,0x4(%esp)
0841f13a +0xb6:  mov    -0xc(%ebp),%eax
0841f13d +0xb9:  mov    %eax,(%esp)
0841f140 +0xbc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841f145 +0xc1:  xor    $0x1,%eax
0841f148 +0xc4:  test   %al,%al
0841f14a +0xc6:  je     0841f153 <+0xcf>
0841f14c +0xc8:  mov    $0x0,%eax
0841f151 +0xcd:  jmp    0841f158 <+0xd4>
0841f153 +0xcf:  mov    $0x1,%eax
0841f158 +0xd4:  leave
0841f159 +0xd5:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_Delete::dispatch @ 0x841f084

/* DB_MailBox_Req_Delete::dispatch(int, int, Stream*) */

undefined4 DB_MailBox_Req_Delete::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_MAILBOX_DEL_MAIL *pSVar2;
  MySQL *this;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_MAILBOX_DEL_MAIL>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (*(int *)pSVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)pSVar2 == 1) {
      MySQL::set_query(this,"upDate postal set delete_flag=%d,receive_time=now() where postal_id=%d"
                       ,*(undefined4 *)(pSVar2 + 0x54),*(undefined4 *)(pSVar2 + 4));
    }
    else {
      uVar3 = getList2inQuery((uint *)pSVar2,dispatch(int,int,Stream*)::strQuery);
      MySQL::set_query(this,"upDate postal set delete_flag=%d,receive_time=now() where postal_id %s"
                       ,*(undefined4 *)(pSVar2 + 0x54),uVar3);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
