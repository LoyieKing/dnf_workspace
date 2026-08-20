# _getPassPadInfo

`_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA`

`DB_Login::_getPassPadInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0841144a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841144a  _ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA
#           DB_Login::_getPassPadInfo(SIG_LOGIN_DATA*)
# range [0x0841144a, 0x084115f7]
0841144a +0x000:  push   %ebp
0841144b +0x001:  mov    %esp,%ebp
0841144d +0x003:  sub    $0x28,%esp
08411450 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08411455 +0x00b:  movl   $0x0,0x8(%esp)
0841145d +0x013:  movl   $0x6,0x4(%esp)
08411465 +0x01b:  mov    %eax,(%esp)
08411468 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841146d +0x023:  mov    %eax,-0xc(%ebp)
08411470 +0x026:  mov    0xc(%ebp),%eax
08411473 +0x029:  movb   $0x0,0x38e0(%eax)
0841147a +0x030:  mov    0xc(%ebp),%eax
0841147d +0x033:  movl   $0x0,0x3918(%eax)
08411487 +0x03d:  mov    0xc(%ebp),%eax
0841148a +0x040:  movl   $0x0,0x3914(%eax)
08411494 +0x04a:  mov    0xc(%ebp),%eax
08411497 +0x04d:  add    $0x38e1,%eax
0841149c +0x052:  movl   $0x24,0x8(%esp)
084114a4 +0x05a:  movl   $0x0,0x4(%esp)
084114ac +0x062:  mov    %eax,(%esp)
084114af +0x065:  call   0807dcc0 <_init+0x5b8>
084114b4 +0x06a:  mov    0xc(%ebp),%eax
084114b7 +0x06d:  mov    0xc0(%eax),%eax
084114bd +0x073:  movl   $0x0,0x4(%esp)
084114c5 +0x07b:  mov    %eax,(%esp)
084114c8 +0x07e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084114cd +0x083:  mov    %eax,0x8(%esp)
084114d1 +0x087:  movl   $"seLect mousepass,fail_cnt,cancel_cnt from member_mousepass where m_id=%s and enable_flag = '1'",0x4(%esp)
084114d9 +0x08f:  mov    -0xc(%ebp),%eax
084114dc +0x092:  mov    %eax,(%esp)
084114df +0x095:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084114e4 +0x09a:  movl   $0x1,0x4(%esp)
084114ec +0x0a2:  mov    -0xc(%ebp),%eax
084114ef +0x0a5:  mov    %eax,(%esp)
084114f2 +0x0a8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084114f7 +0x0ad:  xor    $0x1,%eax
084114fa +0x0b0:  test   %al,%al
084114fc +0x0b2:  je     08411508 <+0xbe>
084114fe +0x0b4:  mov    $0x1,%eax
08411503 +0x0b9:  jmp    084115f5 <+0x1ab>
08411508 +0x0be:  mov    -0xc(%ebp),%eax
0841150b +0x0c1:  mov    %eax,(%esp)
0841150e +0x0c4:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08411513 +0x0c9:  test   %eax,%eax
08411515 +0x0cb:  sete   %al
08411518 +0x0ce:  test   %al,%al
0841151a +0x0d0:  je     08411526 <+0xdc>
0841151c +0x0d2:  mov    $0x0,%eax
08411521 +0x0d7:  jmp    084115f5 <+0x1ab>
08411526 +0x0dc:  mov    -0xc(%ebp),%eax
08411529 +0x0df:  mov    %eax,(%esp)
0841152c +0x0e2:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08411531 +0x0e7:  xor    $0x1,%eax
08411534 +0x0ea:  test   %al,%al
08411536 +0x0ec:  je     08411542 <+0xf8>
08411538 +0x0ee:  mov    $0x1,%eax
0841153d +0x0f3:  jmp    084115f5 <+0x1ab>
08411542 +0x0f8:  mov    0xc(%ebp),%eax
08411545 +0x0fb:  add    $0x38e1,%eax
0841154a +0x100:  movl   $0x24,0xc(%esp)
08411552 +0x108:  mov    %eax,0x8(%esp)
08411556 +0x10c:  movl   $0x0,0x4(%esp)
0841155e +0x114:  mov    -0xc(%ebp),%eax
08411561 +0x117:  mov    %eax,(%esp)
08411564 +0x11a:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08411569 +0x11f:  xor    $0x1,%eax
0841156c +0x122:  test   %al,%al
0841156e +0x124:  je     08411577 <+0x12d>
08411570 +0x126:  mov    $0x1,%eax
08411575 +0x12b:  jmp    084115f5 <+0x1ab>
08411577 +0x12d:  mov    0xc(%ebp),%eax
0841157a +0x130:  add    $0x3914,%eax
0841157f +0x135:  mov    %eax,0x8(%esp)
08411583 +0x139:  movl   $0x1,0x4(%esp)
0841158b +0x141:  mov    -0xc(%ebp),%eax
0841158e +0x144:  mov    %eax,(%esp)
08411591 +0x147:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08411596 +0x14c:  xor    $0x1,%eax
08411599 +0x14f:  test   %al,%al
0841159b +0x151:  je     084115a4 <+0x15a>
0841159d +0x153:  mov    $0x1,%eax
084115a2 +0x158:  jmp    084115f5 <+0x1ab>
084115a4 +0x15a:  mov    0xc(%ebp),%eax
084115a7 +0x15d:  add    $0x3918,%eax
084115ac +0x162:  mov    %eax,0x8(%esp)
084115b0 +0x166:  movl   $0x2,0x4(%esp)
084115b8 +0x16e:  mov    -0xc(%ebp),%eax
084115bb +0x171:  mov    %eax,(%esp)
084115be +0x174:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084115c3 +0x179:  xor    $0x1,%eax
084115c6 +0x17c:  test   %al,%al
084115c8 +0x17e:  je     084115d1 <+0x187>
084115ca +0x180:  mov    $0x1,%eax
084115cf +0x185:  jmp    084115f5 <+0x1ab>
084115d1 +0x187:  mov    0xc(%ebp),%eax
084115d4 +0x18a:  movb   $0x1,0x38e0(%eax)
084115db +0x191:  mov    0xc(%ebp),%eax
084115de +0x194:  mov    0x3914(%eax),%eax
084115e4 +0x19a:  cmp    $0x2,%eax
084115e7 +0x19d:  jle    084115f0 <+0x1a6>
084115e9 +0x19f:  mov    $0x49,%eax
084115ee +0x1a4:  jmp    084115f5 <+0x1ab>
084115f0 +0x1a6:  mov    $0x0,%eax
084115f5 +0x1ab:  leave
084115f6 +0x1ac:  ret
084115f7 +0x1ad:  nop
```

## 反编译 C

```c
// DB_Login::_getPassPadInfo @ 0x841144a

/* DB_Login::_getPassPadInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::_getPassPadInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  param_1[0x38e0] = (SIG_LOGIN_DATA)0x0;
  *(undefined4 *)(param_1 + 0x3918) = 0;
  *(undefined4 *)(param_1 + 0x3914) = 0;
  memset(param_1 + 0x38e1,0,0x24);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect mousepass,fail_cnt,cancel_cnt from member_mousepass where m_id=%s and enable_flag = \'1\'"
                   ,uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,(char *)(param_1 + 0x38e1),0x24);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + 0x3914));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(this_00,2,(int *)(param_1 + 0x3918));
            if (cVar1 == '\x01') {
              param_1[0x38e0] = (SIG_LOGIN_DATA)0x1;
              if (*(int *)(param_1 + 0x3914) < 3) {
                uVar2 = 0;
              }
              else {
                uVar2 = 0x49;
              }
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
