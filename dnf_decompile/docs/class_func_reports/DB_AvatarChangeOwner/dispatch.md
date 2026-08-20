# dispatch

`_ZN20DB_AvatarChangeOwner8dispatchEiiP6Stream`

`DB_AvatarChangeOwner::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarChangeOwner` | `0x084004bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084004bc  _ZN20DB_AvatarChangeOwner8dispatchEiiP6Stream
#           DB_AvatarChangeOwner::dispatch(int, int, Stream*)
# range [0x084004bc, 0x0840055b]
084004bc +0x00:  push   %ebp
084004bd +0x01:  mov    %esp,%ebp
084004bf +0x03:  push   %ebx
084004c0 +0x04:  sub    $0x34,%esp
084004c3 +0x07:  mov    0x14(%ebp),%eax
084004c6 +0x0a:  mov    %eax,(%esp)
084004c9 +0x0d:  call   08450418 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x302e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x302e
084004ce +0x12:  mov    %eax,-0x10(%ebp)
084004d1 +0x15:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084004d6 +0x1a:  movl   $0x0,0x8(%esp)
084004de +0x22:  movl   $0x3,0x4(%esp)
084004e6 +0x2a:  mov    %eax,(%esp)
084004e9 +0x2d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084004ee +0x32:  mov    %eax,-0xc(%ebp)
084004f1 +0x35:  mov    -0x10(%ebp),%eax
084004f4 +0x38:  mov    0x4(%eax),%ebx
084004f7 +0x3b:  mov    -0x10(%ebp),%eax
084004fa +0x3e:  mov    (%eax),%ecx
084004fc +0x40:  mov    -0x10(%ebp),%eax
084004ff +0x43:  movzbl 0xc(%eax),%eax
08400503 +0x47:  movzbl %al,%edx
08400506 +0x4a:  mov    -0x10(%ebp),%eax
08400509 +0x4d:  mov    0x8(%eax),%eax
0840050c +0x50:  mov    %ebx,0x14(%esp)
08400510 +0x54:  mov    %ecx,0x10(%esp)
08400514 +0x58:  mov    %edx,0xc(%esp)
08400518 +0x5c:  mov    %eax,0x8(%esp)
0840051c +0x60:  movl   $"upDate user_items set charac_no=%u,slot=%d where ui_id=%d && charac_no=%u",0x4(%esp)
08400524 +0x68:  mov    -0xc(%ebp),%eax
08400527 +0x6b:  mov    %eax,(%esp)
0840052a +0x6e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840052f +0x73:  movl   $0x1,0x4(%esp)
08400537 +0x7b:  mov    -0xc(%ebp),%eax
0840053a +0x7e:  mov    %eax,(%esp)
0840053d +0x81:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08400542 +0x86:  xor    $0x1,%eax
08400545 +0x89:  test   %al,%al
08400547 +0x8b:  je     08400550 <+0x94>
08400549 +0x8d:  mov    $0x0,%eax
0840054e +0x92:  jmp    08400555 <+0x99>
08400550 +0x94:  mov    $0x1,%eax
08400555 +0x99:  add    $0x34,%esp
08400558 +0x9c:  pop    %ebx
08400559 +0x9d:  pop    %ebp
0840055a +0x9e:  ret
0840055b +0x9f:  nop
```

## 反编译 C

```c
// DB_AvatarChangeOwner::dispatch @ 0x84004bc

/* DB_AvatarChangeOwner::dispatch(int, int, Stream*) */

bool DB_AvatarChangeOwner::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_AVATAR_CHANGE_OWNER *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_AVATAR_CHANGE_OWNER>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this,"upDate user_items set charac_no=%u,slot=%d where ui_id=%d && charac_no=%u",
                   *(undefined4 *)(pSVar2 + 8),(uint)(byte)pSVar2[0xc],*(undefined4 *)pSVar2,
                   *(undefined4 *)(pSVar2 + 4));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}
```
