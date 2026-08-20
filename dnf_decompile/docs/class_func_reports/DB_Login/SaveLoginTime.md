# SaveLoginTime

`_ZN8DB_Login13SaveLoginTimeEjiPc`

`DB_Login::SaveLoginTime(unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084148a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084148a6  _ZN8DB_Login13SaveLoginTimeEjiPc
#           DB_Login::SaveLoginTime(unsigned int, int, char*)
# range [0x084148a6, 0x084149cd]
084148a6 +0x000:  push   %ebp
084148a7 +0x001:  mov    %esp,%ebp
084148a9 +0x003:  push   %ebx
084148aa +0x004:  sub    $0x54,%esp
084148ad +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084148b2 +0x00c:  movl   $0x0,0x8(%esp)
084148ba +0x014:  movl   $0x6,0x4(%esp)
084148c2 +0x01c:  mov    %eax,(%esp)
084148c5 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084148ca +0x024:  mov    %eax,-0xc(%ebp)
084148cd +0x027:  movl   $0x14,0x8(%esp)
084148d5 +0x02f:  movl   $0x0,0x4(%esp)
084148dd +0x037:  lea    -0x30(%ebp),%eax
084148e0 +0x03a:  mov    %eax,(%esp)
084148e3 +0x03d:  call   0807dcc0 <_init+0x5b8>
084148e8 +0x042:  movl   $0xd,0x8(%esp)
084148f0 +0x04a:  movl   $"member_login",0x4(%esp)
084148f8 +0x052:  lea    -0x30(%ebp),%eax
084148fb +0x055:  mov    %eax,(%esp)
084148fe +0x058:  call   0807d8a0 <_init+0x198>
08414903 +0x05d:  movl   $0x0,0x4(%esp)
0841490b +0x065:  mov    0xc(%ebp),%eax
0841490e +0x068:  mov    %eax,(%esp)
08414911 +0x06b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08414916 +0x070:  mov    0x14(%ebp),%edx
08414919 +0x073:  mov    %edx,0x1c(%esp)
0841491d +0x077:  mov    0x10(%ebp),%edx
08414920 +0x07a:  mov    %edx,0x18(%esp)
08414924 +0x07e:  mov    0x14(%ebp),%edx
08414927 +0x081:  mov    %edx,0x14(%esp)
0841492b +0x085:  mov    0x10(%ebp),%edx
0841492e +0x088:  mov    %edx,0x10(%esp)
08414932 +0x08c:  mov    %eax,0xc(%esp)
08414936 +0x090:  lea    -0x30(%ebp),%eax
08414939 +0x093:  mov    %eax,0x8(%esp)
0841493d +0x097:  movl   $"inSert into %s(m_id, login_time, login_ip) values(%s, %d, '%s') on duplicate key upDate login_time=%d, login_ip='%s'",0x4(%esp)
08414945 +0x09f:  mov    -0xc(%ebp),%eax
08414948 +0x0a2:  mov    %eax,(%esp)
0841494b +0x0a5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08414950 +0x0aa:  movl   $0x1,0x4(%esp)
08414958 +0x0b2:  mov    -0xc(%ebp),%eax
0841495b +0x0b5:  mov    %eax,(%esp)
0841495e +0x0b8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08414963 +0x0bd:  xor    $0x1,%eax
08414966 +0x0c0:  test   %al,%al
08414968 +0x0c2:  je     084149c7 <+0x121>
0841496a +0x0c4:  movl   $0x0,0x4(%esp)
08414972 +0x0cc:  mov    0xc(%ebp),%eax
08414975 +0x0cf:  mov    %eax,(%esp)
08414978 +0x0d2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841497d +0x0d7:  mov    %eax,%ebx
0841497f +0x0d9:  movl   $0x0,0xc(%esp)
08414987 +0x0e1:  movl   $0x3bd1,0x8(%esp)
0841498f +0x0e9:  movl   $&_ZZN8DB_Login13SaveLoginTimeEjiPcE19__PRETTY_FUNCTION__,0x4(%esp)
08414997 +0x0f1:  lea    -0x1c(%ebp),%eax
0841499a +0x0f4:  mov    %eax,(%esp)
0841499d +0x0f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084149a2 +0x0fc:  mov    0x14(%ebp),%eax
084149a5 +0x0ff:  mov    %eax,0x10(%esp)
084149a9 +0x103:  mov    0x10(%ebp),%eax
084149ac +0x106:  mov    %eax,0xc(%esp)
084149b0 +0x10a:  mov    %ebx,0x8(%esp)
084149b4 +0x10e:  movl   $"DB_Login::SaveLoginTime, inSert ERROR m_id=%s, logintime=%d, ip=%s",0x4(%esp)
084149bc +0x116:  lea    -0x1c(%ebp),%eax
084149bf +0x119:  mov    %eax,(%esp)
084149c2 +0x11c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084149c7 +0x121:  add    $0x54,%esp
084149ca +0x124:  pop    %ebx
084149cb +0x125:  pop    %ebp
084149cc +0x126:  ret
084149cd +0x127:  nop
```

## 反编译 C

```c
// DB_Login::SaveLoginTime @ 0x84148a6

/* DB_Login::SaveLoginTime(unsigned int, int, char*) */

void __thiscall DB_Login::SaveLoginTime(DB_Login *this,uint param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_34 [20];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  memset(local_34,0,0x14);
  memcpy(local_34,"member_login",0xd);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "inSert into %s(m_id, login_time, login_ip) values(%s, %d, \'%s\') on duplicate key upDate login_time=%d, login_ip=\'%s\'"
                   ,local_34,uVar2,param_2,param_3,param_2,param_3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_20,
                       "void DB_Login::SaveLoginTime(memberIdentificationNumber_t, int, char*)",
                       0x3bd1,0);
    cMyTrace::operator()
              (local_20,"DB_Login::SaveLoginTime, inSert ERROR m_id=%s, logintime=%d, ip=%s",uVar2,
               param_2,param_3);
  }
  return;
}
```
