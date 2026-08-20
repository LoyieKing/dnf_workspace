# setCreatureData

`_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST`

`DB_MailBox_Req_List::setCreatureData(MySQL*, unsigned int, unsigned int*, SIG_MAILBOX_LIST*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_List` | `0x0841dc84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841dc84  _ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST
#           DB_MailBox_Req_List::setCreatureData(MySQL*, unsigned int, unsigned int*, SIG_MAILBOX_LIST*)
# range [0x0841dc84, 0x0841de49]
0841dc84 +0x000:  push   %ebp
0841dc85 +0x001:  mov    %esp,%ebp
0841dc87 +0x003:  push   %edi
0841dc88 +0x004:  push   %ebx
0841dc89 +0x005:  sub    $0x1020,%esp
0841dc8f +0x00b:  lea    -0x1018(%ebp),%ebx
0841dc95 +0x011:  mov    $0x0,%eax
0841dc9a +0x016:  mov    $0x400,%edx
0841dc9f +0x01b:  mov    %ebx,%edi
0841dca1 +0x01d:  mov    %edx,%ecx
0841dca3 +0x01f:  rep stos %eax,%es:(%edi)
0841dca5 +0x021:  movl   $0x0,-0x10(%ebp)
0841dcac +0x028:  movl   $0x0,-0x14(%ebp)
0841dcb3 +0x02f:  movl   $0x0,-0x18(%ebp)
0841dcba +0x036:  lea    -0x1018(%ebp),%eax
0841dcc0 +0x03c:  mov    %eax,0x4(%esp)
0841dcc4 +0x040:  mov    0x14(%ebp),%eax
0841dcc7 +0x043:  mov    %eax,(%esp)
0841dcca +0x046:  call   083ff968 <_Z15getList2inQueryPjPc>  ; getList2inQuery(unsigned int*, char*)
0841dccf +0x04b:  lea    -0x1018(%ebp),%eax
0841dcd5 +0x051:  mov    %eax,0x8(%esp)
0841dcd9 +0x055:  movl   $"seLect ui_id,unix_timestamp(expire_date),unix_timestamp(reg_date) from creature_items where ui_id %s and stat = 1",0x4(%esp)
0841dce1 +0x05d:  mov    0xc(%ebp),%eax
0841dce4 +0x060:  mov    %eax,(%esp)
0841dce7 +0x063:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841dcec +0x068:  movl   $0x1,0x4(%esp)
0841dcf4 +0x070:  mov    0xc(%ebp),%eax
0841dcf7 +0x073:  mov    %eax,(%esp)
0841dcfa +0x076:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841dcff +0x07b:  mov    0xc(%ebp),%eax
0841dd02 +0x07e:  mov    %eax,(%esp)
0841dd05 +0x081:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841dd0a +0x086:  mov    %eax,%edx
0841dd0c +0x088:  mov    0x18(%ebp),%eax
0841dd0f +0x08b:  mov    %edx,0xd30(%eax)
0841dd15 +0x091:  movl   $0x0,-0xc(%ebp)
0841dd1c +0x098:  jmp    0841de22 <+0x19e>
0841dd21 +0x09d:  mov    0xc(%ebp),%eax
0841dd24 +0x0a0:  mov    %eax,(%esp)
0841dd27 +0x0a3:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841dd2c +0x0a8:  xor    $0x1,%eax
0841dd2f +0x0ab:  test   %al,%al
0841dd31 +0x0ad:  je     0841dd3d <+0xb9>
0841dd33 +0x0af:  mov    $0x0,%eax
0841dd38 +0x0b4:  jmp    0841de40 <+0x1bc>
0841dd3d +0x0b9:  lea    -0x18(%ebp),%eax
0841dd40 +0x0bc:  mov    %eax,0x8(%esp)
0841dd44 +0x0c0:  movl   $0x0,0x4(%esp)
0841dd4c +0x0c8:  mov    0xc(%ebp),%eax
0841dd4f +0x0cb:  mov    %eax,(%esp)
0841dd52 +0x0ce:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841dd57 +0x0d3:  xor    $0x1,%eax
0841dd5a +0x0d6:  test   %al,%al
0841dd5c +0x0d8:  je     0841dd68 <+0xe4>
0841dd5e +0x0da:  mov    $0x0,%eax
0841dd63 +0x0df:  jmp    0841de40 <+0x1bc>
0841dd68 +0x0e4:  lea    -0x10(%ebp),%eax
0841dd6b +0x0e7:  mov    %eax,0x8(%esp)
0841dd6f +0x0eb:  movl   $0x1,0x4(%esp)
0841dd77 +0x0f3:  mov    0xc(%ebp),%eax
0841dd7a +0x0f6:  mov    %eax,(%esp)
0841dd7d +0x0f9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841dd82 +0x0fe:  xor    $0x1,%eax
0841dd85 +0x101:  test   %al,%al
0841dd87 +0x103:  je     0841dd93 <+0x10f>
0841dd89 +0x105:  mov    $0x0,%eax
0841dd8e +0x10a:  jmp    0841de40 <+0x1bc>
0841dd93 +0x10f:  lea    -0x14(%ebp),%eax
0841dd96 +0x112:  mov    %eax,0x8(%esp)
0841dd9a +0x116:  movl   $0x2,0x4(%esp)
0841dda2 +0x11e:  mov    0xc(%ebp),%eax
0841dda5 +0x121:  mov    %eax,(%esp)
0841dda8 +0x124:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841ddad +0x129:  xor    $0x1,%eax
0841ddb0 +0x12c:  test   %al,%al
0841ddb2 +0x12e:  je     0841ddbe <+0x13a>
0841ddb4 +0x130:  mov    $0x0,%eax
0841ddb9 +0x135:  jmp    0841de40 <+0x1bc>
0841ddbe +0x13a:  mov    -0xc(%ebp),%edx
0841ddc1 +0x13d:  mov    -0x18(%ebp),%ecx
0841ddc4 +0x140:  mov    0x18(%ebp),%ebx
0841ddc7 +0x143:  mov    %edx,%eax
0841ddc9 +0x145:  shl    $0x3,%eax
0841ddcc +0x148:  add    %edx,%eax
0841ddce +0x14a:  shl    $0x2,%eax
0841ddd1 +0x14d:  add    %edx,%eax
0841ddd3 +0x14f:  lea    (%ebx,%eax,1),%eax
0841ddd6 +0x152:  add    $0xd30,%eax
0841dddb +0x157:  mov    %ecx,0x4(%eax)
0841ddde +0x15a:  mov    -0xc(%ebp),%edx
0841dde1 +0x15d:  mov    -0x10(%ebp),%ecx
0841dde4 +0x160:  mov    0x18(%ebp),%ebx
0841dde7 +0x163:  mov    %edx,%eax
0841dde9 +0x165:  shl    $0x3,%eax
0841ddec +0x168:  add    %edx,%eax
0841ddee +0x16a:  shl    $0x2,%eax
0841ddf1 +0x16d:  add    %edx,%eax
0841ddf3 +0x16f:  lea    (%ebx,%eax,1),%eax
0841ddf6 +0x172:  add    $0xd30,%eax
0841ddfb +0x177:  mov    %ecx,0x8(%eax)
0841ddfe +0x17a:  mov    -0xc(%ebp),%edx
0841de01 +0x17d:  mov    -0x14(%ebp),%ecx
0841de04 +0x180:  mov    0x18(%ebp),%ebx
0841de07 +0x183:  mov    %edx,%eax
0841de09 +0x185:  shl    $0x3,%eax
0841de0c +0x188:  add    %edx,%eax
0841de0e +0x18a:  shl    $0x2,%eax
0841de11 +0x18d:  add    %edx,%eax
0841de13 +0x18f:  lea    (%ebx,%eax,1),%eax
0841de16 +0x192:  add    $0xd30,%eax
0841de1b +0x197:  mov    %ecx,0xc(%eax)
0841de1e +0x19a:  addl   $0x1,-0xc(%ebp)
0841de22 +0x19e:  mov    0xc(%ebp),%eax
0841de25 +0x1a1:  mov    %eax,(%esp)
0841de28 +0x1a4:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841de2d +0x1a9:  cmp    -0xc(%ebp),%eax
0841de30 +0x1ac:  seta   %al
0841de33 +0x1af:  test   %al,%al
0841de35 +0x1b1:  jne    0841dd21 <+0x9d>
0841de3b +0x1b7:  mov    $0x1,%eax
0841de40 +0x1bc:  add    $0x1020,%esp
0841de46 +0x1c2:  pop    %ebx
0841de47 +0x1c3:  pop    %edi
0841de48 +0x1c4:  pop    %ebp
0841de49 +0x1c5:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_List::setCreatureData @ 0x841dc84

/* DB_MailBox_Req_List::setCreatureData(MySQL*, unsigned int, unsigned int*, SIG_MAILBOX_LIST*) */

undefined4 __thiscall
DB_MailBox_Req_List::setCreatureData
          (DB_MailBox_Req_List *this,MySQL *param_1,uint param_2,uint *param_3,
          SIG_MAILBOX_LIST *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char local_101c [4096];
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  pcVar5 = local_101c;
  for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  getList2inQuery(param_3,local_101c);
  MySQL::set_query(param_1,
                   "seLect ui_id,unix_timestamp(expire_date),unix_timestamp(reg_date) from creature_items where ui_id %s and stat = 1"
                   ,local_101c);
  MySQL::exec(param_1,true);
  uVar2 = MySQL::get_n_rows(param_1);
  *(undefined4 *)(param_4 + 0xd30) = uVar2;
  local_10 = 0;
  while( true ) {
    uVar3 = MySQL::get_n_rows(param_1);
    if (uVar3 <= local_10) {
      return 1;
    }
    cVar1 = MySQL::fetch(param_1);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(param_1,0,&local_1c);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(param_1,1,&local_14);
    if (cVar1 != '\x01') break;
    cVar1 = MySQL::get_int(param_1,2,&local_18);
    if (cVar1 != '\x01') {
      return 0;
    }
    *(int *)(param_4 + local_10 * 0x25 + 0xd34) = local_1c;
    *(int *)(param_4 + local_10 * 0x25 + 0xd38) = local_14;
    *(int *)(param_4 + local_10 * 0x25 + 0xd3c) = local_18;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
