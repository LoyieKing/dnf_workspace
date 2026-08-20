# dispatch

`_ZN15DB_SaveProxyLog8dispatchEiiP6Stream`

`DB_SaveProxyLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveProxyLog` | `0x08422742` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422742  _ZN15DB_SaveProxyLog8dispatchEiiP6Stream
#           DB_SaveProxyLog::dispatch(int, int, Stream*)
# range [0x08422742, 0x084227f5]
08422742 +0x00:  push   %ebp
08422743 +0x01:  mov    %esp,%ebp
08422745 +0x03:  push   %edi
08422746 +0x04:  push   %esi
08422747 +0x05:  push   %ebx
08422748 +0x06:  sub    $0x3c,%esp
0842274b +0x09:  mov    0x14(%ebp),%eax
0842274e +0x0c:  mov    %eax,(%esp)
08422751 +0x0f:  call   08451cb4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x48ca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x48ca
08422756 +0x14:  mov    %eax,-0x20(%ebp)
08422759 +0x17:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842275e +0x1c:  movl   $0x0,0x8(%esp)
08422766 +0x24:  movl   $0x4,0x4(%esp)
0842276e +0x2c:  mov    %eax,(%esp)
08422771 +0x2f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08422776 +0x34:  mov    %eax,-0x1c(%ebp)
08422779 +0x37:  mov    -0x20(%ebp),%eax
0842277c +0x3a:  movzbl 0x2c(%eax),%eax
08422780 +0x3e:  movzbl %al,%ebx
08422783 +0x41:  mov    -0x20(%ebp),%eax
08422786 +0x44:  lea    0x18(%eax),%edi
08422789 +0x47:  mov    -0x20(%ebp),%eax
0842278c +0x4a:  lea    0x4(%eax),%esi
0842278f +0x4d:  mov    -0x20(%ebp),%eax
08422792 +0x50:  mov    (%eax),%eax
08422794 +0x52:  movl   $0x0,0x4(%esp)
0842279c +0x5a:  mov    %eax,(%esp)
0842279f +0x5d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084227a4 +0x62:  mov    %ebx,0x14(%esp)
084227a8 +0x66:  mov    %edi,0x10(%esp)
084227ac +0x6a:  mov    %esi,0xc(%esp)
084227b0 +0x6e:  mov    %eax,0x8(%esp)
084227b4 +0x72:  movl   $"inSert into dnf_proxy_log values(now(),%s,'%s','%s',%d)",0x4(%esp)
084227bc +0x7a:  mov    -0x1c(%ebp),%eax
084227bf +0x7d:  mov    %eax,(%esp)
084227c2 +0x80:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084227c7 +0x85:  movl   $0x1,0x4(%esp)
084227cf +0x8d:  mov    -0x1c(%ebp),%eax
084227d2 +0x90:  mov    %eax,(%esp)
084227d5 +0x93:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084227da +0x98:  xor    $0x1,%eax
084227dd +0x9b:  test   %al,%al
084227df +0x9d:  je     084227e8 <+0xa6>
084227e1 +0x9f:  mov    $0x0,%eax
084227e6 +0xa4:  jmp    084227ed <+0xab>
084227e8 +0xa6:  mov    $0x1,%eax
084227ed +0xab:  add    $0x3c,%esp
084227f0 +0xae:  pop    %ebx
084227f1 +0xaf:  pop    %esi
084227f2 +0xb0:  pop    %edi
084227f3 +0xb1:  pop    %ebp
084227f4 +0xb2:  ret
084227f5 +0xb3:  nop
```

## 反编译 C

```c
// DB_SaveProxyLog::dispatch @ 0x8422742

/* DB_SaveProxyLog::dispatch(int, int, Stream*) */

bool DB_SaveProxyLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_PROXY_LOG SVar1;
  char cVar2;
  SIG_SAVE_PROXY_LOG *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_PROXY_LOG>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  SVar1 = pSVar3[0x2c];
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,"inSert into dnf_proxy_log values(now(),%s,\'%s\',\'%s\',%d)",uVar4,
                   pSVar3 + 4,pSVar3 + 0x18,(uint)(byte)SVar1);
  cVar2 = MySQL::exec(this,true);
  return cVar2 == '\x01';
}
```
