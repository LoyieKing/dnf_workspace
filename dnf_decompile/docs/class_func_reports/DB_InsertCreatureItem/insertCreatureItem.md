# insertCreatureItem

`_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM`

`DB_InsertCreatureItem::insertCreatureItem(MySQL*, SIG_CREATURE_ITEM const*)`

| 类 | 地址 |
|---|---|
| `DB_InsertCreatureItem` | `0x0841fa28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841fa28  _ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM
#           DB_InsertCreatureItem::insertCreatureItem(MySQL*, SIG_CREATURE_ITEM const*)
# range [0x0841fa28, 0x0841fd11]
0841fa28 +0x000:  push   %ebp
0841fa29 +0x001:  mov    %esp,%ebp
0841fa2b +0x003:  push   %edi
0841fa2c +0x004:  push   %esi
0841fa2d +0x005:  push   %ebx
0841fa2e +0x006:  sub    $0xfc,%esp
0841fa34 +0x00c:  mov    0xc(%ebp),%eax
0841fa37 +0x00f:  mov    0x68(%eax),%eax
0841fa3a +0x012:  test   %eax,%eax
0841fa3c +0x014:  jne    0841facb <+0xa3>
0841fa42 +0x01a:  mov    0xc(%ebp),%eax
0841fa45 +0x01d:  mov    0x48(%eax),%eax
0841fa48 +0x020:  mov    %eax,0xc(%esp)
0841fa4c +0x024:  movl   $0x1,0x8(%esp)
0841fa54 +0x02c:  movl   $"upDate inventory set creature_flag=%d where charac_no=%d",0x4(%esp)
0841fa5c +0x034:  mov    0x8(%ebp),%eax
0841fa5f +0x037:  mov    %eax,(%esp)
0841fa62 +0x03a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841fa67 +0x03f:  movl   $0x1,0x4(%esp)
0841fa6f +0x047:  mov    0x8(%ebp),%eax
0841fa72 +0x04a:  mov    %eax,(%esp)
0841fa75 +0x04d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841fa7a +0x052:  xor    $0x1,%eax
0841fa7d +0x055:  test   %al,%al
0841fa7f +0x057:  je     0841facb <+0xa3>
0841fa81 +0x059:  mov    0xc(%ebp),%eax
0841fa84 +0x05c:  mov    0x48(%eax),%ebx
0841fa87 +0x05f:  movl   $0x5,0xc(%esp)
0841fa8f +0x067:  movl   $0x55dd,0x8(%esp)
0841fa97 +0x06f:  movl   $&_ZZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEME19__PRETTY_FUNCTION__,0x4(%esp)
0841fa9f +0x077:  lea    -0x34(%ebp),%eax
0841faa2 +0x07a:  mov    %eax,(%esp)
0841faa5 +0x07d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841faaa +0x082:  mov    %ebx,0x8(%esp)
0841faae +0x086:  movl   $"DB_InsertCreatureItem::dispatch, exec() ERROR charac_no=%u",0x4(%esp)
0841fab6 +0x08e:  lea    -0x34(%ebp),%eax
0841fab9 +0x091:  mov    %eax,(%esp)
0841fabc +0x094:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841fac1 +0x099:  mov    $0x0,%eax
0841fac6 +0x09e:  jmp    0841fd07 <+0x2df>
0841facb +0x0a3:  movl   $0x39393927,-0x74(%ebp)
0841fad2 +0x0aa:  movl   $0x32312d39,-0x70(%ebp)
0841fad9 +0x0b1:  movl   $0x2031332d,-0x6c(%ebp)
0841fae0 +0x0b8:  movl   $0x353a3332,-0x68(%ebp)
0841fae7 +0x0bf:  movl   $0x39353a39,-0x64(%ebp)
0841faee +0x0c6:  movl   $0x27,-0x60(%ebp)
0841faf5 +0x0cd:  lea    -0x5c(%ebp),%ebx
0841faf8 +0x0d0:  mov    $0x0,%eax
0841fafd +0x0d5:  mov    $0xa,%edx
0841fb02 +0x0da:  mov    %ebx,%edi
0841fb04 +0x0dc:  mov    %edx,%ecx
0841fb06 +0x0de:  rep stos %eax,%es:(%edi)
0841fb08 +0x0e0:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0841fb0d +0x0e5:  mov    %eax,-0x24(%ebp)
0841fb10 +0x0e8:  mov    0xc(%ebp),%eax
0841fb13 +0x0eb:  mov    0x54(%eax),%eax
0841fb16 +0x0ee:  mov    %eax,-0x20(%ebp)
0841fb19 +0x0f1:  cmpl   $0x0,-0x20(%ebp)
0841fb1d +0x0f5:  je     0841fb5d <+0x135>
0841fb1f +0x0f7:  movl   $0x40,0x8(%esp)
0841fb27 +0x0ff:  movl   $0x0,0x4(%esp)
0841fb2f +0x107:  lea    -0x74(%ebp),%eax
0841fb32 +0x10a:  mov    %eax,(%esp)
0841fb35 +0x10d:  call   0807dcc0 <_init+0x5b8>
0841fb3a +0x112:  mov    -0x20(%ebp),%eax
0841fb3d +0x115:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0841fb43 +0x11b:  add    -0x24(%ebp),%eax
0841fb46 +0x11e:  mov    %eax,0x8(%esp)
0841fb4a +0x122:  movl   $"from_unixtime('%d')",0x4(%esp)
0841fb52 +0x12a:  lea    -0x74(%ebp),%eax
0841fb55 +0x12d:  mov    %eax,(%esp)
0841fb58 +0x130:  call   0807e440 <_init+0xd38>
0841fb5d +0x135:  movl   $0x39393927,-0xb4(%ebp)
0841fb67 +0x13f:  movl   $0x32312d39,-0xb0(%ebp)
0841fb71 +0x149:  movl   $0x2031332d,-0xac(%ebp)
0841fb7b +0x153:  movl   $0x353a3332,-0xa8(%ebp)
0841fb85 +0x15d:  movl   $0x39353a39,-0xa4(%ebp)
0841fb8f +0x167:  movl   $0x27,-0xa0(%ebp)
0841fb99 +0x171:  lea    -0x9c(%ebp),%ebx
0841fb9f +0x177:  mov    $0x0,%eax
0841fba4 +0x17c:  mov    $0xa,%edx
0841fba9 +0x181:  mov    %ebx,%edi
0841fbab +0x183:  mov    %edx,%ecx
0841fbad +0x185:  rep stos %eax,%es:(%edi)
0841fbaf +0x187:  mov    0xc(%ebp),%eax
0841fbb2 +0x18a:  mov    0x58(%eax),%eax
0841fbb5 +0x18d:  mov    %eax,-0x1c(%ebp)
0841fbb8 +0x190:  cmpl   $0x0,-0x1c(%ebp)
0841fbbc +0x194:  je     0841fbf9 <+0x1d1>
0841fbbe +0x196:  movl   $0x40,0x8(%esp)
0841fbc6 +0x19e:  movl   $0x0,0x4(%esp)
0841fbce +0x1a6:  lea    -0xb4(%ebp),%eax
0841fbd4 +0x1ac:  mov    %eax,(%esp)
0841fbd7 +0x1af:  call   0807dcc0 <_init+0x5b8>
0841fbdc +0x1b4:  mov    -0x1c(%ebp),%eax
0841fbdf +0x1b7:  mov    %eax,0x8(%esp)
0841fbe3 +0x1bb:  movl   $"from_unixtime('%d')",0x4(%esp)
0841fbeb +0x1c3:  lea    -0xb4(%ebp),%eax
0841fbf1 +0x1c9:  mov    %eax,(%esp)
0841fbf4 +0x1cc:  call   0807e440 <_init+0xd38>
0841fbf9 +0x1d1:  cmpl   $0x0,-0x20(%ebp)
0841fbfd +0x1d5:  jne    0841fc3a <+0x212>
0841fbff +0x1d7:  cmpl   $0x0,-0x1c(%ebp)
0841fc03 +0x1db:  je     0841fc3a <+0x212>
0841fc05 +0x1dd:  movl   $0x40,0x8(%esp)
0841fc0d +0x1e5:  movl   $0x0,0x4(%esp)
0841fc15 +0x1ed:  lea    -0x74(%ebp),%eax
0841fc18 +0x1f0:  mov    %eax,(%esp)
0841fc1b +0x1f3:  call   0807dcc0 <_init+0x5b8>
0841fc20 +0x1f8:  mov    -0x1c(%ebp),%eax
0841fc23 +0x1fb:  mov    %eax,0x8(%esp)
0841fc27 +0x1ff:  movl   $"from_unixtime('%d')",0x4(%esp)
0841fc2f +0x207:  lea    -0x74(%ebp),%eax
0841fc32 +0x20a:  mov    %eax,(%esp)
0841fc35 +0x20d:  call   0807e440 <_init+0xd38>
0841fc3a +0x212:  mov    0xc(%ebp),%eax
0841fc3d +0x215:  movzbl 0x50(%eax),%eax
0841fc41 +0x219:  movsbl %al,%ebx
0841fc44 +0x21c:  mov    0xc(%ebp),%eax
0841fc47 +0x21f:  movzbl 0x53(%eax),%eax
0841fc4b +0x223:  movsbl %al,%edi
0841fc4e +0x226:  mov    0xc(%ebp),%eax
0841fc51 +0x229:  movzwl 0x14(%eax),%eax
0841fc55 +0x22d:  movzwl %ax,%eax
0841fc58 +0x230:  mov    %eax,-0xc8(%ebp)
0841fc5e +0x236:  mov    0xc(%ebp),%eax
0841fc61 +0x239:  mov    0x4c(%eax),%eax
0841fc64 +0x23c:  mov    %eax,-0xc4(%ebp)
0841fc6a +0x242:  mov    0xc(%ebp),%eax
0841fc6d +0x245:  mov    0x44(%eax),%eax
0841fc70 +0x248:  mov    %eax,-0xc0(%ebp)
0841fc76 +0x24e:  mov    0xc(%ebp),%eax
0841fc79 +0x251:  add    $0x34,%eax
0841fc7c +0x254:  mov    %eax,-0xbc(%ebp)
0841fc82 +0x25a:  mov    0xc(%ebp),%eax
0841fc85 +0x25d:  mov    0x8(%eax),%esi
0841fc88 +0x260:  mov    0xc(%ebp),%eax
0841fc8b +0x263:  mov    0x2c(%eax),%ecx
0841fc8e +0x266:  mov    0xc(%ebp),%eax
0841fc91 +0x269:  mov    0x48(%eax),%edx
0841fc94 +0x26c:  mov    %ebx,0x30(%esp)
0841fc98 +0x270:  mov    %edi,0x2c(%esp)
0841fc9c +0x274:  mov    -0xc8(%ebp),%eax
0841fca2 +0x27a:  mov    %eax,0x28(%esp)
0841fca6 +0x27e:  mov    -0xc4(%ebp),%edi
0841fcac +0x284:  mov    %edi,0x24(%esp)
0841fcb0 +0x288:  mov    -0xc0(%ebp),%eax
0841fcb6 +0x28e:  mov    %eax,0x20(%esp)
0841fcba +0x292:  mov    -0xbc(%ebp),%edi
0841fcc0 +0x298:  mov    %edi,0x1c(%esp)
0841fcc4 +0x29c:  lea    -0xb4(%ebp),%eax
0841fcca +0x2a2:  mov    %eax,0x18(%esp)
0841fcce +0x2a6:  lea    -0x74(%ebp),%eax
0841fcd1 +0x2a9:  mov    %eax,0x14(%esp)
0841fcd5 +0x2ad:  mov    %esi,0x10(%esp)
0841fcd9 +0x2b1:  mov    %ecx,0xc(%esp)
0841fcdd +0x2b5:  mov    %edx,0x8(%esp)
0841fce1 +0x2b9:  movl   $"inSert into creature_items(charac_no,slot,it_id,expire_date,delete_date,reg_date,name,stomach,exp,endurance,no_charge,stat,creature_type)values(%d,%d,%d,%s,%s,NOW(),'%s',%d,%d,%d,0,%d,%d)",0x4(%esp)
0841fce9 +0x2c1:  mov    0x8(%ebp),%eax
0841fcec +0x2c4:  mov    %eax,(%esp)
0841fcef +0x2c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841fcf4 +0x2cc:  movl   $0x1,0x4(%esp)
0841fcfc +0x2d4:  mov    0x8(%ebp),%eax
0841fcff +0x2d7:  mov    %eax,(%esp)
0841fd02 +0x2da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841fd07 +0x2df:  add    $0xfc,%esp
0841fd0d +0x2e5:  pop    %ebx
0841fd0e +0x2e6:  pop    %esi
0841fd0f +0x2e7:  pop    %edi
0841fd10 +0x2e8:  pop    %ebp
0841fd11 +0x2e9:  ret
```

## 反编译 C

```c
// DB_InsertCreatureItem::insertCreatureItem @ 0x841fa28

/* DB_InsertCreatureItem::insertCreatureItem(MySQL*, SIG_CREATURE_ITEM const*) */

undefined4 DB_InsertCreatureItem::insertCreatureItem(MySQL *param_1,SIG_CREATURE_ITEM *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  char local_b8 [24];
  undefined4 local_a0 [10];
  char local_78 [24];
  undefined4 local_60 [10];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  bVar5 = 0;
  if (*(int *)(param_2 + 0x68) == 0) {
    MySQL::set_query(param_1,"upDate inventory set creature_flag=%d where charac_no=%d",1,
                     *(undefined4 *)(param_2 + 0x48));
    cVar1 = MySQL::exec(param_1,true);
    if (cVar1 != '\x01') {
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      cMyTrace::cMyTrace(local_38,
                         "static bool DB_InsertCreatureItem::insertCreatureItem(MySQL*, const SIG_CREATURE_ITEM*)"
                         ,0x55dd,5);
      cMyTrace::operator()
                (local_38,"DB_InsertCreatureItem::dispatch, exec() ERROR charac_no=%u",uVar2);
      return 0;
    }
  }
  builtin_strncpy(local_78,"\'9999-12-31 23:59:59\'",0x16);
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  puVar4 = local_60;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_28 = OS_API::GetDateTimeTick();
  local_24 = *(int *)(param_2 + 0x54);
  if (local_24 != 0) {
    memset(local_78,0,0x40);
    sprintf(local_78,"from_unixtime(\'%d\')",local_24 * 0x15180 + local_28);
  }
  builtin_strncpy(local_b8,"\'9999-12-31 23:59:59\'",0x16);
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  puVar4 = local_a0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_20 = *(int *)(param_2 + 0x58);
  if (local_20 != 0) {
    memset(local_b8,0,0x40);
    sprintf(local_b8,"from_unixtime(\'%d\')",local_20);
  }
  if ((local_24 == 0) && (local_20 != 0)) {
    memset(local_78,0,0x40);
    sprintf(local_78,"from_unixtime(\'%d\')",local_20);
  }
  MySQL::set_query(param_1,
                   "inSert into creature_items(charac_no,slot,it_id,expire_date,delete_date,reg_date,name,stomach,exp,endurance,no_charge,stat,creature_type)values(%d,%d,%d,%s,%s,NOW(),\'%s\',%d,%d,%d,0,%d,%d)"
                   ,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x2c),
                   *(undefined4 *)(param_2 + 8),local_78,local_b8,param_2 + 0x34,
                   *(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x4c),
                   (uint)*(ushort *)(param_2 + 0x14),(int)(char)param_2[0x53],
                   (int)(char)param_2[0x50]);
  uVar2 = MySQL::exec(param_1,true);
  return uVar2;
}
```
