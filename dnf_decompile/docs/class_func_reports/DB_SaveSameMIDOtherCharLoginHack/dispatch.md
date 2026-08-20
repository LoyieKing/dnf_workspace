# dispatch

`_ZN32DB_SaveSameMIDOtherCharLoginHack8dispatchEiiP6Stream`

`DB_SaveSameMIDOtherCharLoginHack::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveSameMIDOtherCharLoginHack` | `0x08422680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422680  _ZN32DB_SaveSameMIDOtherCharLoginHack8dispatchEiiP6Stream
#           DB_SaveSameMIDOtherCharLoginHack::dispatch(int, int, Stream*)
# range [0x08422680, 0x08422741]
08422680 +0x00:  push   %ebp
08422681 +0x01:  mov    %esp,%ebp
08422683 +0x03:  push   %edi
08422684 +0x04:  push   %esi
08422685 +0x05:  push   %ebx
08422686 +0x06:  sub    $0x3c,%esp
08422689 +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842268e +0x0e:  movl   $0x0,0x8(%esp)
08422696 +0x16:  movl   $0x4,0x4(%esp)
0842269e +0x1e:  mov    %eax,(%esp)
084226a1 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084226a6 +0x26:  mov    %eax,-0x20(%ebp)
084226a9 +0x29:  mov    0x14(%ebp),%eax
084226ac +0x2c:  mov    %eax,(%esp)
084226af +0x2f:  call   08451c60 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4876>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4876
084226b4 +0x34:  mov    %eax,-0x1c(%ebp)
084226b7 +0x37:  mov    -0x1c(%ebp),%eax
084226ba +0x3a:  lea    0xc(%eax),%edi
084226bd +0x3d:  mov    -0x1c(%ebp),%eax
084226c0 +0x40:  mov    0x8(%eax),%esi
084226c3 +0x43:  mov    -0x1c(%ebp),%eax
084226c6 +0x46:  mov    0x4(%eax),%eax
084226c9 +0x49:  movl   $0x1,0x4(%esp)
084226d1 +0x51:  mov    %eax,(%esp)
084226d4 +0x54:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084226d9 +0x59:  mov    %eax,%ebx
084226db +0x5b:  mov    -0x1c(%ebp),%eax
084226de +0x5e:  mov    (%eax),%eax
084226e0 +0x60:  movl   $0x0,0x4(%esp)
084226e8 +0x68:  mov    %eax,(%esp)
084226eb +0x6b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084226f0 +0x70:  mov    %edi,0x14(%esp)
084226f4 +0x74:  mov    %esi,0x10(%esp)
084226f8 +0x78:  mov    %ebx,0xc(%esp)
084226fc +0x7c:  mov    %eax,0x8(%esp)
08422700 +0x80:  movl   $"inSert into login_view_log values(now(),%s,%s,%d,'%s')",0x4(%esp)
08422708 +0x88:  mov    -0x20(%ebp),%eax
0842270b +0x8b:  mov    %eax,(%esp)
0842270e +0x8e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08422713 +0x93:  movl   $0x1,0x4(%esp)
0842271b +0x9b:  mov    -0x20(%ebp),%eax
0842271e +0x9e:  mov    %eax,(%esp)
08422721 +0xa1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08422726 +0xa6:  xor    $0x1,%eax
08422729 +0xa9:  test   %al,%al
0842272b +0xab:  je     08422734 <+0xb4>
0842272d +0xad:  mov    $0x0,%eax
08422732 +0xb2:  jmp    08422739 <+0xb9>
08422734 +0xb4:  mov    $0x1,%eax
08422739 +0xb9:  add    $0x3c,%esp
0842273c +0xbc:  pop    %ebx
0842273d +0xbd:  pop    %esi
0842273e +0xbe:  pop    %edi
0842273f +0xbf:  pop    %ebp
08422740 +0xc0:  ret
08422741 +0xc1:  nop
```

## 反编译 C

```c
// DB_SaveSameMIDOtherCharLoginHack::dispatch @ 0x8422680

/* DB_SaveSameMIDOtherCharLoginHack::dispatch(int, int, Stream*) */

bool DB_SaveSameMIDOtherCharLoginHack::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  MySQL *this;
  SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar3 + 8);
  uVar4 = NumberToString(*(uint *)(pSVar3 + 4),1);
  uVar5 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,"inSert into login_view_log values(now(),%s,%s,%d,\'%s\')",uVar5,uVar4,uVar1
                   ,pSVar3 + 0xc);
  cVar2 = MySQL::exec(this,true);
  return cVar2 == '\x01';
}
```
