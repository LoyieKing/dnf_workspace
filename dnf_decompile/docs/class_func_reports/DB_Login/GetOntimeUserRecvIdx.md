# GetOntimeUserRecvIdx

`_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA`

`DB_Login::GetOntimeUserRecvIdx(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414f5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414f5c  _ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA
#           DB_Login::GetOntimeUserRecvIdx(SIG_LOGIN_DATA*)
# range [0x08414f5c, 0x084150e7]
08414f5c +0x000:  push   %ebp
08414f5d +0x001:  mov    %esp,%ebp
08414f5f +0x003:  push   %ebx
08414f60 +0x004:  sub    $0x34,%esp
08414f63 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08414f68 +0x00c:  movl   $0x0,0x8(%esp)
08414f70 +0x014:  movl   $0xd,0x4(%esp)
08414f78 +0x01c:  mov    %eax,(%esp)
08414f7b +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08414f80 +0x024:  mov    %eax,-0x10(%ebp)
08414f83 +0x027:  mov    0xc(%ebp),%eax
08414f86 +0x02a:  movl   $0x0,0x3fa4(%eax)
08414f90 +0x034:  mov    0xc(%ebp),%eax
08414f93 +0x037:  mov    0xc0(%eax),%ecx
08414f99 +0x03d:  mov    $0xcccccccd,%edx
08414f9e +0x042:  mov    %ecx,%eax
08414fa0 +0x044:  mul    %edx
08414fa2 +0x046:  shr    $0x3,%edx
08414fa5 +0x049:  mov    %edx,%eax
08414fa7 +0x04b:  shl    $0x2,%eax
08414faa +0x04e:  add    %edx,%eax
08414fac +0x050:  add    %eax,%eax
08414fae +0x052:  mov    %ecx,%edx
08414fb0 +0x054:  sub    %eax,%edx
08414fb2 +0x056:  mov    %edx,-0xc(%ebp)
08414fb5 +0x059:  mov    0xc(%ebp),%eax
08414fb8 +0x05c:  mov    0xc0(%eax),%eax
08414fbe +0x062:  movl   $0x0,0x4(%esp)
08414fc6 +0x06a:  mov    %eax,(%esp)
08414fc9 +0x06d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08414fce +0x072:  mov    %eax,0xc(%esp)
08414fd2 +0x076:  mov    -0xc(%ebp),%eax
08414fd5 +0x079:  mov    %eax,0x8(%esp)
08414fd9 +0x07d:  movl   $"seLect last_no from event_1112_ontime_user_%u where m_id=%s",0x4(%esp)
08414fe1 +0x085:  mov    -0x10(%ebp),%eax
08414fe4 +0x088:  mov    %eax,(%esp)
08414fe7 +0x08b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08414fec +0x090:  movl   $0x1,0x4(%esp)
08414ff4 +0x098:  mov    -0x10(%ebp),%eax
08414ff7 +0x09b:  mov    %eax,(%esp)
08414ffa +0x09e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08414fff +0x0a3:  xor    $0x1,%eax
08415002 +0x0a6:  test   %al,%al
08415004 +0x0a8:  je     08415010 <+0xb4>
08415006 +0x0aa:  mov    $0x0,%eax
0841500b +0x0af:  jmp    084150e1 <+0x185>
08415010 +0x0b4:  mov    -0x10(%ebp),%eax
08415013 +0x0b7:  mov    %eax,(%esp)
08415016 +0x0ba:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841501b +0x0bf:  test   %eax,%eax
0841501d +0x0c1:  sete   %al
08415020 +0x0c4:  test   %al,%al
08415022 +0x0c6:  je     08415096 <+0x13a>
08415024 +0x0c8:  mov    0xc(%ebp),%eax
08415027 +0x0cb:  movl   $0x1,0x3fa4(%eax)
08415031 +0x0d5:  mov    0xc(%ebp),%eax
08415034 +0x0d8:  mov    0x3fa4(%eax),%ebx
0841503a +0x0de:  mov    0xc(%ebp),%eax
0841503d +0x0e1:  mov    0xc0(%eax),%eax
08415043 +0x0e7:  movl   $0x0,0x4(%esp)
0841504b +0x0ef:  mov    %eax,(%esp)
0841504e +0x0f2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08415053 +0x0f7:  mov    %ebx,0x10(%esp)
08415057 +0x0fb:  mov    %eax,0xc(%esp)
0841505b +0x0ff:  mov    -0xc(%ebp),%eax
0841505e +0x102:  mov    %eax,0x8(%esp)
08415062 +0x106:  movl   $"inSert into event_1112_ontime_user_%u(m_id,last_no) values (%s,%u )",0x4(%esp)
0841506a +0x10e:  mov    -0x10(%ebp),%eax
0841506d +0x111:  mov    %eax,(%esp)
08415070 +0x114:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08415075 +0x119:  movl   $0x1,0x4(%esp)
0841507d +0x121:  mov    -0x10(%ebp),%eax
08415080 +0x124:  mov    %eax,(%esp)
08415083 +0x127:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08415088 +0x12c:  xor    $0x1,%eax
0841508b +0x12f:  test   %al,%al
0841508d +0x131:  je     084150dc <+0x180>
0841508f +0x133:  mov    $0x0,%eax
08415094 +0x138:  jmp    084150e1 <+0x185>
08415096 +0x13a:  mov    -0x10(%ebp),%eax
08415099 +0x13d:  mov    %eax,(%esp)
0841509c +0x140:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084150a1 +0x145:  xor    $0x1,%eax
084150a4 +0x148:  test   %al,%al
084150a6 +0x14a:  je     084150af <+0x153>
084150a8 +0x14c:  mov    $0x0,%eax
084150ad +0x151:  jmp    084150e1 <+0x185>
084150af +0x153:  mov    0xc(%ebp),%eax
084150b2 +0x156:  add    $0x3fa4,%eax
084150b7 +0x15b:  mov    %eax,0x8(%esp)
084150bb +0x15f:  movl   $0x0,0x4(%esp)
084150c3 +0x167:  mov    -0x10(%ebp),%eax
084150c6 +0x16a:  mov    %eax,(%esp)
084150c9 +0x16d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084150ce +0x172:  xor    $0x1,%eax
084150d1 +0x175:  test   %al,%al
084150d3 +0x177:  je     084150dc <+0x180>
084150d5 +0x179:  mov    $0x0,%eax
084150da +0x17e:  jmp    084150e1 <+0x185>
084150dc +0x180:  mov    $0x1,%eax
084150e1 +0x185:  add    $0x34,%esp
084150e4 +0x188:  pop    %ebx
084150e5 +0x189:  pop    %ebp
084150e6 +0x18a:  ret
084150e7 +0x18b:  nop
```

## 反编译 C

```c
// DB_Login::GetOntimeUserRecvIdx @ 0x8414f5c

/* DB_Login::GetOntimeUserRecvIdx(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetOntimeUserRecvIdx(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  uint uVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  *(undefined4 *)(param_1 + 0x3fa4) = 0;
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,"seLect last_no from event_1112_ontime_user_%u where m_id=%s",uVar1 % 10,
                   uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar4 = MySQL::get_n_rows(this_00);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x3fa4) = 1;
    uVar3 = *(undefined4 *)(param_1 + 0x3fa4);
    uVar5 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(this_00,"inSert into event_1112_ontime_user_%u(m_id,last_no) values (%s,%u )",
                     uVar1 % 10,uVar5,uVar3);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    cVar2 = MySQL::fetch(this_00);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_int(this_00,0,(int *)(param_1 + 0x3fa4));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
