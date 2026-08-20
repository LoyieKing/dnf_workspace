# InsertBuyUser

`_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb`

`DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)`

| 类 | 地址 |
|---|---|
| `DB_BillingRecord` | `0x08424602` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08424602  _ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb
#           DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)
# range [0x08424602, 0x084247df]
08424602 +0x000:  push   %ebp
08424603 +0x001:  mov    %esp,%ebp
08424605 +0x003:  push   %ebx
08424606 +0x004:  sub    $0x34,%esp
08424609 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842460e +0x00c:  movl   $0x0,0x8(%esp)
08424616 +0x014:  movl   $0x7,0x4(%esp)
0842461e +0x01c:  mov    %eax,(%esp)
08424621 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08424626 +0x024:  mov    %eax,-0xc(%ebp)
08424629 +0x027:  mov    0x10(%ebp),%eax
0842462c +0x02a:  movb   $0x0,(%eax)
0842462f +0x02d:  mov    0xc(%ebp),%eax
08424632 +0x030:  mov    0x2d(%eax),%edx
08424635 +0x033:  mov    0xc(%ebp),%eax
08424638 +0x036:  lea    0x56(%eax),%ebx
0842463b +0x039:  mov    0xc(%ebp),%eax
0842463e +0x03c:  mov    0x52(%eax),%eax
08424641 +0x03f:  mov    0xc(%ebp),%ecx
08424644 +0x042:  add    $0x35,%ecx
08424647 +0x045:  mov    %edx,0x14(%esp)
0842464b +0x049:  mov    %ebx,0x10(%esp)
0842464f +0x04d:  mov    %eax,0xc(%esp)
08424653 +0x051:  mov    %ecx,0x8(%esp)
08424657 +0x055:  movl   $" upDate prod_buy_user  set user_id = '%s', sex = %d, birthday = '%s', last_buy_time = now()  where m_id = %d ",0x4(%esp)
0842465f +0x05d:  mov    -0xc(%ebp),%eax
08424662 +0x060:  mov    %eax,(%esp)
08424665 +0x063:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842466a +0x068:  movl   $0x1,0x4(%esp)
08424672 +0x070:  mov    -0xc(%ebp),%eax
08424675 +0x073:  mov    %eax,(%esp)
08424678 +0x076:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842467d +0x07b:  xor    $0x1,%eax
08424680 +0x07e:  test   %al,%al
08424682 +0x080:  je     084246bf <+0xbd>
08424684 +0x082:  mov    0xc(%ebp),%eax
08424687 +0x085:  mov    0x2d(%eax),%eax
0842468a +0x088:  mov    %eax,0x14(%esp)
0842468e +0x08c:  movl   $"[QUERY_ERROR] (upDate prod_buy_user m_id:%d)",0x10(%esp)
08424696 +0x094:  movl   $0x6117,0xc(%esp)
0842469e +0x09c:  movl   $&_ZZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRbE19__PRETTY_FUNCTION__,0x8(%esp)
084246a6 +0x0a4:  movl   $"DBThread.cpp",0x4(%esp)
084246ae +0x0ac:  movl   $0x1,(%esp)
084246b5 +0x0b3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084246ba +0x0b8:  jmp    084247da <+0x1d8>
084246bf +0x0bd:  mov    0xc(%ebp),%eax
084246c2 +0x0c0:  mov    0x2d(%eax),%eax
084246c5 +0x0c3:  mov    %eax,0x8(%esp)
084246c9 +0x0c7:  movl   $"seLect m_id, user_id from prod_buy_user where m_id = %d",0x4(%esp)
084246d1 +0x0cf:  mov    -0xc(%ebp),%eax
084246d4 +0x0d2:  mov    %eax,(%esp)
084246d7 +0x0d5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084246dc +0x0da:  movl   $0x1,0x4(%esp)
084246e4 +0x0e2:  mov    -0xc(%ebp),%eax
084246e7 +0x0e5:  mov    %eax,(%esp)
084246ea +0x0e8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084246ef +0x0ed:  xor    $0x1,%eax
084246f2 +0x0f0:  test   %al,%al
084246f4 +0x0f2:  je     08424731 <+0x12f>
084246f6 +0x0f4:  mov    0xc(%ebp),%eax
084246f9 +0x0f7:  mov    0x2d(%eax),%eax
084246fc +0x0fa:  mov    %eax,0x14(%esp)
08424700 +0x0fe:  movl   $"[QUERY_ERROR] (seLect prod_buy_user m_id:%d)",0x10(%esp)
08424708 +0x106:  movl   $0x6120,0xc(%esp)
08424710 +0x10e:  movl   $&_ZZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRbE19__PRETTY_FUNCTION__,0x8(%esp)
08424718 +0x116:  movl   $"DBThread.cpp",0x4(%esp)
08424720 +0x11e:  movl   $0x1,(%esp)
08424727 +0x125:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0842472c +0x12a:  jmp    084247da <+0x1d8>
08424731 +0x12f:  mov    -0xc(%ebp),%eax
08424734 +0x132:  mov    %eax,(%esp)
08424737 +0x135:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842473c +0x13a:  test   %eax,%eax
0842473e +0x13c:  sete   %al
08424741 +0x13f:  test   %al,%al
08424743 +0x141:  je     084247da <+0x1d8>
08424749 +0x147:  mov    0xc(%ebp),%eax
0842474c +0x14a:  lea    0x56(%eax),%ebx
0842474f +0x14d:  mov    0xc(%ebp),%eax
08424752 +0x150:  mov    0x52(%eax),%edx
08424755 +0x153:  mov    0xc(%ebp),%eax
08424758 +0x156:  lea    0x35(%eax),%ecx
0842475b +0x159:  mov    0xc(%ebp),%eax
0842475e +0x15c:  mov    0x2d(%eax),%eax
08424761 +0x15f:  mov    %ebx,0x14(%esp)
08424765 +0x163:  mov    %edx,0x10(%esp)
08424769 +0x167:  mov    %ecx,0xc(%esp)
0842476d +0x16b:  mov    %eax,0x8(%esp)
08424771 +0x16f:  movl   $" inSert into prod_buy_user ( m_id, user_id, sex, birthday, first_buy_time, last_buy_time )  values(%d, '%s', %d, '%s', now(), now() ) ",0x4(%esp)
08424779 +0x177:  mov    -0xc(%ebp),%eax
0842477c +0x17a:  mov    %eax,(%esp)
0842477f +0x17d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424784 +0x182:  mov    0x10(%ebp),%eax
08424787 +0x185:  movb   $0x1,(%eax)
0842478a +0x188:  movl   $0x1,0x4(%esp)
08424792 +0x190:  mov    -0xc(%ebp),%eax
08424795 +0x193:  mov    %eax,(%esp)
08424798 +0x196:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842479d +0x19b:  xor    $0x1,%eax
084247a0 +0x19e:  test   %al,%al
084247a2 +0x1a0:  je     084247da <+0x1d8>
084247a4 +0x1a2:  mov    0xc(%ebp),%eax
084247a7 +0x1a5:  mov    0x2d(%eax),%eax
084247aa +0x1a8:  mov    %eax,0x14(%esp)
084247ae +0x1ac:  movl   $"[QUERY_ERROR] (inSert into prod_buy_user m_id:%d)",0x10(%esp)
084247b6 +0x1b4:  movl   $0x6134,0xc(%esp)
084247be +0x1bc:  movl   $&_ZZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRbE19__PRETTY_FUNCTION__,0x8(%esp)
084247c6 +0x1c4:  movl   $"DBThread.cpp",0x4(%esp)
084247ce +0x1cc:  movl   $0x1,(%esp)
084247d5 +0x1d3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084247da +0x1d8:  add    $0x34,%esp
084247dd +0x1db:  pop    %ebx
084247de +0x1dc:  pop    %ebp
084247df +0x1dd:  ret
```

## 反编译 C

```c
// DB_BillingRecord::InsertBuyUser @ 0x8424602

/* DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&) */

void __thiscall
DB_BillingRecord::InsertBuyUser(DB_BillingRecord *this,SIG_BILLING_RECORD *param_1,bool *param_2)

{
  char cVar1;
  MySQL *this_00;
  int iVar2;
  undefined4 uVar3;
  SIG_BILLING_RECORD *pSVar4;
  undefined4 uVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  *param_2 = false;
  uVar5 = *(undefined4 *)(param_1 + 0x2d);
  pSVar4 = param_1 + 0x56;
  uVar3 = *(undefined4 *)(param_1 + 0x52);
  MySQL::set_query(this_00,
                   " upDate prod_buy_user  set user_id = \'%s\', sex = %d, birthday = \'%s\', last_buy_time = now()  where m_id = %d "
                   ,param_1 + 0x35,uVar3,pSVar4,uVar5);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    MySQL::set_query(this_00,"seLect m_id, user_id from prod_buy_user where m_id = %d",
                     *(undefined4 *)(param_1 + 0x2d),uVar3,pSVar4,uVar5);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar2 = MySQL::get_n_rows(this_00);
      if (iVar2 == 0) {
        MySQL::set_query(this_00,
                         " inSert into prod_buy_user ( m_id, user_id, sex, birthday, first_buy_time, last_buy_time )  values(%d, \'%s\', %d, \'%s\', now(), now() ) "
                         ,*(undefined4 *)(param_1 + 0x2d),param_1 + 0x35,
                         *(undefined4 *)(param_1 + 0x52),param_1 + 0x56);
        *param_2 = true;
        cVar1 = MySQL::exec(this_00,true);
        if (cVar1 != '\x01') {
          LogManager::logFormat
                    (1,"DBThread.cpp",
                     "void DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)",0x6134,
                     "[QUERY_ERROR] (inSert into prod_buy_user m_id:%d)",
                     *(undefined4 *)(param_1 + 0x2d));
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","void DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)"
                 ,0x6120,"[QUERY_ERROR] (seLect prod_buy_user m_id:%d)",
                 *(undefined4 *)(param_1 + 0x2d));
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp","void DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)",
               0x6117,"[QUERY_ERROR] (upDate prod_buy_user m_id:%d)",*(undefined4 *)(param_1 + 0x2d)
              );
  }
  return;
}
```
