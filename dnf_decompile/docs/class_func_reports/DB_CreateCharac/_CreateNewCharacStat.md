# _CreateNewCharacStat

`_ZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x0840215e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840215e  _ZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*)
# range [0x0840215e, 0x0840222f]
0840215e +0x00:  push   %ebp
0840215f +0x01:  mov    %esp,%ebp
08402161 +0x03:  push   %ebx
08402162 +0x04:  sub    $0x34,%esp
08402165 +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840216a +0x0c:  movl   $0x0,0x8(%esp)
08402172 +0x14:  movl   $0x2,0x4(%esp)
0840217a +0x1c:  mov    %eax,(%esp)
0840217d +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08402182 +0x24:  mov    %eax,-0xc(%ebp)
08402185 +0x27:  mov    0xc(%ebp),%eax
08402188 +0x2a:  mov    0x5348(%eax),%eax
0840218e +0x30:  mov    %eax,0x8(%esp)
08402192 +0x34:  movl   $"inSert into charac_stat (charac_no,HP, forbidden_to_play, forbidden_due_to) values(%d,100,0,0)",0x4(%esp)
0840219a +0x3c:  mov    -0xc(%ebp),%eax
0840219d +0x3f:  mov    %eax,(%esp)
084021a0 +0x42:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084021a5 +0x47:  movl   $0x1,0x4(%esp)
084021ad +0x4f:  mov    -0xc(%ebp),%eax
084021b0 +0x52:  mov    %eax,(%esp)
084021b3 +0x55:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084021b8 +0x5a:  xor    $0x1,%eax
084021bb +0x5d:  test   %al,%al
084021bd +0x5f:  je     08402224 <+0xc6>
084021bf +0x61:  mov    0xc(%ebp),%eax
084021c2 +0x64:  mov    (%eax),%eax
084021c4 +0x66:  movl   $0x0,0x4(%esp)
084021cc +0x6e:  mov    %eax,(%esp)
084021cf +0x71:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084021d4 +0x76:  mov    %eax,%ebx
084021d6 +0x78:  movl   $0x5,0xc(%esp)
084021de +0x80:  movl   $0x10fb,0x8(%esp)
084021e6 +0x88:  movl   $&_ZZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
084021ee +0x90:  lea    -0x1c(%ebp),%eax
084021f1 +0x93:  mov    %eax,(%esp)
084021f4 +0x96:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084021f9 +0x9b:  mov    %ebx,0x8(%esp)
084021fd +0x9f:  movl   $"DB_CreateCharac::_CreateNewCharacStat, exec() ERROR m_id=%s",0x4(%esp)
08402205 +0xa7:  lea    -0x1c(%ebp),%eax
08402208 +0xaa:  mov    %eax,(%esp)
0840220b +0xad:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08402210 +0xb2:  mov    0xc(%ebp),%eax
08402213 +0xb5:  movl   $0x2,0x5344(%eax)
0840221d +0xbf:  mov    $0x0,%eax
08402222 +0xc4:  jmp    08402229 <+0xcb>
08402224 +0xc6:  mov    $0x1,%eax
08402229 +0xcb:  add    $0x34,%esp
0840222c +0xce:  pop    %ebx
0840222d +0xcf:  pop    %ebp
0840222e +0xd0:  ret
0840222f +0xd1:  nop
```

## 反编译 C

```c
// DB_CreateCharac::_CreateNewCharacStat @ 0x840215e

/* DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*) */

bool __thiscall
DB_CreateCharac::_CreateNewCharacStat(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_10,
                   "inSert into charac_stat (charac_no,HP, forbidden_to_play, forbidden_due_to) values(%d,100,0,0)"
                   ,*(undefined4 *)(param_1 + 0x5348));
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(*(uint *)param_1,0);
    cMyTrace::cMyTrace(local_20,"bool DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*)",
                       0x10fb,5);
    cMyTrace::operator()
              (local_20,"DB_CreateCharac::_CreateNewCharacStat, exec() ERROR m_id=%s",uVar2);
    *(undefined4 *)(param_1 + 0x5344) = 2;
  }
  return cVar1 == '\x01';
}
```
