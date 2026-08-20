# _checkCharacName

`_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC`

`DB_CreateCharac::_checkCharacName(MySQL*, char const*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084011d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084011d4  _ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC
#           DB_CreateCharac::_checkCharacName(MySQL*, char const*, SIG_CREATE_CHARAC*)
# range [0x084011d4, 0x084013b1]
084011d4 +0x000:  push   %ebp
084011d5 +0x001:  mov    %esp,%ebp
084011d7 +0x003:  push   %esi
084011d8 +0x004:  push   %ebx
084011d9 +0x005:  sub    $0x40,%esp
084011dc +0x008:  mov    0x14(%ebp),%eax
084011df +0x00b:  add    $0x4,%eax
084011e2 +0x00e:  mov    %eax,0xc(%esp)
084011e6 +0x012:  mov    0x10(%ebp),%eax
084011e9 +0x015:  mov    %eax,0x8(%esp)
084011ed +0x019:  movl   $"seLect delete_flag from %s.charac_info where charac_name='%s'",0x4(%esp)
084011f5 +0x021:  mov    0xc(%ebp),%eax
084011f8 +0x024:  mov    %eax,(%esp)
084011fb +0x027:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08401200 +0x02c:  movl   $0x1,0x4(%esp)
08401208 +0x034:  mov    0xc(%ebp),%eax
0840120b +0x037:  mov    %eax,(%esp)
0840120e +0x03a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401213 +0x03f:  xor    $0x1,%eax
08401216 +0x042:  test   %al,%al
08401218 +0x044:  je     08401231 <+0x5d>
0840121a +0x046:  mov    0x14(%ebp),%eax
0840121d +0x049:  movl   $0x2,0x5344(%eax)
08401227 +0x053:  mov    $0x0,%eax
0840122c +0x058:  jmp    084013ab <+0x1d7>
08401231 +0x05d:  movl   $0x0,-0x2c(%ebp)
08401238 +0x064:  mov    0xc(%ebp),%eax
0840123b +0x067:  mov    %eax,(%esp)
0840123e +0x06a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08401243 +0x06f:  test   %eax,%eax
08401245 +0x071:  setne  %al
08401248 +0x074:  test   %al,%al
0840124a +0x076:  je     084013a6 <+0x1d2>
08401250 +0x07c:  mov    0x14(%ebp),%eax
08401253 +0x07f:  movl   $0x2,0x5344(%eax)
0840125d +0x089:  mov    0xc(%ebp),%eax
08401260 +0x08c:  mov    %eax,(%esp)
08401263 +0x08f:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08401268 +0x094:  xor    $0x1,%eax
0840126b +0x097:  test   %al,%al
0840126d +0x099:  jne    08401290 <+0xbc>
0840126f +0x09b:  lea    -0x2c(%ebp),%eax
08401272 +0x09e:  mov    %eax,0x8(%esp)
08401276 +0x0a2:  movl   $0x0,0x4(%esp)
0840127e +0x0aa:  mov    0xc(%ebp),%eax
08401281 +0x0ad:  mov    %eax,(%esp)
08401284 +0x0b0:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08401289 +0x0b5:  xor    $0x1,%eax
0840128c +0x0b8:  test   %al,%al
0840128e +0x0ba:  je     08401297 <+0xc3>
08401290 +0x0bc:  mov    $0x1,%eax
08401295 +0x0c1:  jmp    0840129c <+0xc8>
08401297 +0x0c3:  mov    $0x0,%eax
0840129c +0x0c8:  test   %al,%al
0840129e +0x0ca:  je     084012aa <+0xd6>
084012a0 +0x0cc:  mov    $0x0,%eax
084012a5 +0x0d1:  jmp    084013ab <+0x1d7>
084012aa +0x0d6:  mov    -0x2c(%ebp),%eax
084012ad +0x0d9:  test   %eax,%eax
084012af +0x0db:  je     084012c3 <+0xef>
084012b1 +0x0dd:  mov    0x14(%ebp),%eax
084012b4 +0x0e0:  movl   $0x3,0x5344(%eax)
084012be +0x0ea:  jmp    0840139f <+0x1cb>
084012c3 +0x0ef:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084012c8 +0x0f4:  mov    %eax,(%esp)
084012cb +0x0f7:  call   0844dc6e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x884>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x884
084012d0 +0x0fc:  cmp    $0x3f2,%eax
084012d5 +0x101:  sete   %al
084012d8 +0x104:  test   %al,%al
084012da +0x106:  je     08401392 <+0x1be>
084012e0 +0x10c:  mov    0xc(%ebp),%eax
084012e3 +0x10f:  mov    %eax,(%esp)
084012e6 +0x112:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084012eb +0x117:  mov    %eax,%ebx
084012ed +0x119:  mov    0x14(%ebp),%eax
084012f0 +0x11c:  lea    0x4(%eax),%esi
084012f3 +0x11f:  movl   $0x5,0xc(%esp)
084012fb +0x127:  movl   $0xd6a,0x8(%esp)
08401303 +0x12f:  movl   $&_ZZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
0840130b +0x137:  lea    -0x28(%ebp),%eax
0840130e +0x13a:  mov    %eax,(%esp)
08401311 +0x13d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08401316 +0x142:  mov    %ebx,0xc(%esp)
0840131a +0x146:  mov    %esi,0x8(%esp)
0840131e +0x14a:  movl   $"already charac_name(%s) row(%d)",0x4(%esp)
08401326 +0x152:  lea    -0x28(%ebp),%eax
08401329 +0x155:  mov    %eax,(%esp)
0840132c +0x158:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08401331 +0x15d:  mov    0x14(%ebp),%eax
08401334 +0x160:  add    $0x4,%eax
08401337 +0x163:  movl   $"사이토",0x4(%esp)
0840133f +0x16b:  mov    %eax,(%esp)
08401342 +0x16e:  call   0807e4e0 <_init+0xdd8>
08401347 +0x173:  test   %eax,%eax
08401349 +0x175:  jne    08401392 <+0x1be>
0840134b +0x177:  mov    0xc(%ebp),%eax
0840134e +0x17a:  mov    %eax,(%esp)
08401351 +0x17d:  call   0844d65e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x274>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x274
08401356 +0x182:  mov    %eax,%ebx
08401358 +0x184:  movl   $0x5,0xc(%esp)
08401360 +0x18c:  movl   $0xd6d,0x8(%esp)
08401368 +0x194:  movl   $&_ZZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
08401370 +0x19c:  lea    -0x18(%ebp),%eax
08401373 +0x19f:  mov    %eax,(%esp)
08401376 +0x1a2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840137b +0x1a7:  mov    %ebx,0x8(%esp)
0840137f +0x1ab:  movl   $"already charac_name query(%s)",0x4(%esp)
08401387 +0x1b3:  lea    -0x18(%ebp),%eax
0840138a +0x1b6:  mov    %eax,(%esp)
0840138d +0x1b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08401392 +0x1be:  mov    0x14(%ebp),%eax
08401395 +0x1c1:  movl   $0x1,0x5344(%eax)
0840139f +0x1cb:  mov    $0x0,%eax
084013a4 +0x1d0:  jmp    084013ab <+0x1d7>
084013a6 +0x1d2:  mov    $0x1,%eax
084013ab +0x1d7:  add    $0x40,%esp
084013ae +0x1da:  pop    %ebx
084013af +0x1db:  pop    %esi
084013b0 +0x1dc:  pop    %ebp
084013b1 +0x1dd:  ret
```

## 反编译 C

```c
// DB_CreateCharac::_checkCharacName @ 0x84011d4

/* DB_CreateCharac::_checkCharacName(MySQL*, char const*, SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::_checkCharacName
          (DB_CreateCharac *this,MySQL *param_1,char *param_2,SIG_CREATE_CHARAC *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CEnvironment *this_00;
  undefined4 uVar4;
  int local_30;
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  MySQL::set_query(param_1,"seLect delete_flag from %s.charac_info where charac_name=\'%s\'",param_2
                   ,param_3 + 4);
  cVar2 = MySQL::exec(param_1,true);
  if (cVar2 != '\x01') {
    *(undefined4 *)(param_3 + 0x5344) = 2;
    return 0;
  }
  local_30 = 0;
  iVar3 = MySQL::get_n_rows(param_1);
  if (iVar3 == 0) {
    return 1;
  }
  *(undefined4 *)(param_3 + 0x5344) = 2;
  cVar2 = MySQL::fetch(param_1);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(param_1,0,&local_30), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (local_30 == 0) {
      this_00 = (CEnvironment *)G_CEnvironment();
      iVar3 = CEnvironment::get_gc_no(this_00);
      if (iVar3 == 0x3f2) {
        uVar4 = MySQL::get_n_rows(param_1);
        cMyTrace::cMyTrace(local_2c,
                           "bool DB_CreateCharac::_checkCharacName(MySQL*, const char*, SIG_CREATE_CHARAC*)"
                           ,0xd6a,5);
        cMyTrace::operator()(local_2c,"already charac_name(%s) row(%d)",param_3 + 4,uVar4);
        iVar3 = strcmp((char *)(param_3 + 4),&DAT_08c42c04);
        if (iVar3 == 0) {
          uVar4 = MySQL::GetQueryString(param_1);
          cMyTrace::cMyTrace(local_1c,
                             "bool DB_CreateCharac::_checkCharacName(MySQL*, const char*, SIG_CREATE_CHARAC*)"
                             ,0xd6d,5);
          cMyTrace::operator()(local_1c,"already charac_name query(%s)",uVar4);
        }
      }
      *(undefined4 *)(param_3 + 0x5344) = 1;
    }
    else {
      *(undefined4 *)(param_3 + 0x5344) = 3;
    }
  }
  return 0;
}
```
