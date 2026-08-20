# InsertSaleEntry

`_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb`

`DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)`

| 类 | 地址 |
|---|---|
| `DB_BillingRecord` | `0x084247e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084247e0  _ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb
#           DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)
# range [0x084247e0, 0x08424ce5]
084247e0 +0x000:  push   %ebp
084247e1 +0x001:  mov    %esp,%ebp
084247e3 +0x003:  push   %edi
084247e4 +0x004:  push   %esi
084247e5 +0x005:  push   %ebx
084247e6 +0x006:  sub    $0x16c,%esp
084247ec +0x00c:  mov    0x10(%ebp),%eax
084247ef +0x00f:  mov    %al,-0x5c(%ebp)
084247f2 +0x012:  movl   $0x0,-0x21(%ebp)
084247f9 +0x019:  movb   $0x0,-0x1d(%ebp)
084247fd +0x01d:  lea    -0x28(%ebp),%eax
08424800 +0x020:  mov    %eax,(%esp)
08424803 +0x023:  call   0807d750 <_init+0x48>
08424808 +0x028:  lea    -0x54(%ebp),%eax
0842480b +0x02b:  mov    %eax,0x4(%esp)
0842480f +0x02f:  lea    -0x28(%ebp),%eax
08424812 +0x032:  mov    %eax,(%esp)
08424815 +0x035:  call   0807e360 <_init+0xc58>
0842481a +0x03a:  mov    -0x44(%ebp),%ecx
0842481d +0x03d:  mov    $0x55555556,%edx
08424822 +0x042:  mov    %ecx,%eax
08424824 +0x044:  imul   %edx
08424826 +0x046:  mov    %ecx,%eax
08424828 +0x048:  sar    $0x1f,%eax
0842482b +0x04b:  mov    %edx,%ecx
0842482d +0x04d:  sub    %eax,%ecx
0842482f +0x04f:  mov    %ecx,%eax
08424831 +0x051:  lea    0x1(%eax),%ebx
08424834 +0x054:  mov    -0x40(%ebp),%eax
08424837 +0x057:  lea    0x76c(%eax),%ecx
0842483d +0x05d:  mov    $0x10624dd3,%edx
08424842 +0x062:  mov    %ecx,%eax
08424844 +0x064:  imul   %edx
08424846 +0x066:  sar    $0x7,%edx
08424849 +0x069:  mov    %ecx,%eax
0842484b +0x06b:  sar    $0x1f,%eax
0842484e +0x06e:  mov    %edx,%esi
08424850 +0x070:  sub    %eax,%esi
08424852 +0x072:  mov    %esi,%eax
08424854 +0x074:  imul   $0x7d0,%eax,%eax
0842485a +0x07a:  mov    %ecx,%edx
0842485c +0x07c:  sub    %eax,%edx
0842485e +0x07e:  mov    %edx,%eax
08424860 +0x080:  mov    %ebx,0xc(%esp)
08424864 +0x084:  mov    %eax,0x8(%esp)
08424868 +0x088:  movl   $"%02d%d",0x4(%esp)
08424870 +0x090:  lea    -0x21(%ebp),%eax
08424873 +0x093:  mov    %eax,(%esp)
08424876 +0x096:  call   0807e440 <_init+0xd38>
0842487b +0x09b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08424880 +0x0a0:  movl   $0x0,0x8(%esp)
08424888 +0x0a8:  movl   $0x7,0x4(%esp)
08424890 +0x0b0:  mov    %eax,(%esp)
08424893 +0x0b3:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08424898 +0x0b8:  mov    %eax,-0x1c(%ebp)
0842489b +0x0bb:  mov    0xc(%ebp),%eax
0842489e +0x0be:  mov    0x105(%eax),%edx
084248a4 +0x0c4:  mov    0x109(%eax),%ecx
084248aa +0x0ca:  mov    0xc(%ebp),%eax
084248ad +0x0cd:  movzbl 0x10d(%eax),%eax
084248b4 +0x0d4:  movsbl %al,%eax
084248b7 +0x0d7:  mov    %eax,-0xe0(%ebp)
084248bd +0x0dd:  mov    0xc(%ebp),%eax
084248c0 +0x0e0:  add    $0xf5,%eax
084248c5 +0x0e5:  mov    %eax,-0xdc(%ebp)
084248cb +0x0eb:  mov    0xc(%ebp),%eax
084248ce +0x0ee:  mov    0xf1(%eax),%eax
084248d4 +0x0f4:  mov    %eax,-0xd8(%ebp)
084248da +0x0fa:  mov    0xc(%ebp),%eax
084248dd +0x0fd:  mov    0xed(%eax),%eax
084248e3 +0x103:  mov    %eax,-0xd4(%ebp)
084248e9 +0x109:  mov    0xc(%ebp),%eax
084248ec +0x10c:  mov    0xe9(%eax),%eax
084248f2 +0x112:  mov    %eax,-0xd0(%ebp)
084248f8 +0x118:  mov    0xc(%ebp),%eax
084248fb +0x11b:  mov    0xe5(%eax),%eax
08424901 +0x121:  mov    %eax,-0xcc(%ebp)
08424907 +0x127:  mov    0xc(%ebp),%eax
0842490a +0x12a:  mov    0xe1(%eax),%eax
08424910 +0x130:  mov    %eax,-0xc8(%ebp)
08424916 +0x136:  mov    0xc(%ebp),%eax
08424919 +0x139:  mov    0xdd(%eax),%eax
0842491f +0x13f:  mov    %eax,-0xc4(%ebp)
08424925 +0x145:  mov    0xc(%ebp),%eax
08424928 +0x148:  mov    0xd9(%eax),%eax
0842492e +0x14e:  mov    %eax,-0xc0(%ebp)
08424934 +0x154:  mov    0xc(%ebp),%eax
08424937 +0x157:  add    $0x69,%eax
0842493a +0x15a:  mov    %eax,-0xbc(%ebp)
08424940 +0x160:  mov    0xc(%ebp),%eax
08424943 +0x163:  mov    0x65(%eax),%eax
08424946 +0x166:  mov    %eax,-0xb8(%ebp)
0842494c +0x16c:  cmpb   $0x0,-0x5c(%ebp)
08424950 +0x170:  je     0842495e <+0x17e>
08424952 +0x172:  movl   $0x1,-0xb4(%ebp)
0842495c +0x17c:  jmp    08424968 <+0x188>
0842495e +0x17e:  movl   $0x2,-0xb4(%ebp)
08424968 +0x188:  mov    0xc(%ebp),%eax
0842496b +0x18b:  mov    0x61(%eax),%eax
0842496e +0x18e:  mov    %eax,-0xb0(%ebp)
08424974 +0x194:  mov    0xc(%ebp),%eax
08424977 +0x197:  mov    0xd5(%eax),%eax
0842497d +0x19d:  mov    %eax,-0xac(%ebp)
08424983 +0x1a3:  mov    0xc(%ebp),%eax
08424986 +0x1a6:  mov    0xd1(%eax),%eax
0842498c +0x1ac:  mov    %eax,-0xa8(%ebp)
08424992 +0x1b2:  mov    0xc(%ebp),%eax
08424995 +0x1b5:  mov    0x4e(%eax),%eax
08424998 +0x1b8:  mov    %eax,-0xa4(%ebp)
0842499e +0x1be:  mov    0xc(%ebp),%eax
084249a1 +0x1c1:  mov    0x31(%eax),%eax
084249a4 +0x1c4:  mov    %eax,-0xa0(%ebp)
084249aa +0x1ca:  mov    0xc(%ebp),%eax
084249ad +0x1cd:  mov    0xcd(%eax),%eax
084249b3 +0x1d3:  mov    %eax,-0x9c(%ebp)
084249b9 +0x1d9:  mov    0xc(%ebp),%eax
084249bc +0x1dc:  add    $0x35,%eax
084249bf +0x1df:  mov    %eax,-0x98(%ebp)
084249c5 +0x1e5:  mov    0xc(%ebp),%eax
084249c8 +0x1e8:  mov    0x2d(%eax),%eax
084249cb +0x1eb:  mov    %eax,-0x94(%ebp)
084249d1 +0x1f1:  mov    0xc(%ebp),%eax
084249d4 +0x1f4:  mov    0x29(%eax),%eax
084249d7 +0x1f7:  mov    %eax,-0x90(%ebp)
084249dd +0x1fd:  mov    0xc(%ebp),%eax
084249e0 +0x200:  mov    0x25(%eax),%eax
084249e3 +0x203:  mov    %eax,-0x8c(%ebp)
084249e9 +0x209:  mov    0xc(%ebp),%eax
084249ec +0x20c:  mov    0x21(%eax),%eax
084249ef +0x20f:  mov    %eax,-0x88(%ebp)
084249f5 +0x215:  mov    0xc(%ebp),%eax
084249f8 +0x218:  mov    0x1d(%eax),%edi
084249fb +0x21b:  mov    0xc(%ebp),%eax
084249fe +0x21e:  mov    0x19(%eax),%esi
08424a01 +0x221:  mov    0xc(%ebp),%eax
08424a04 +0x224:  mov    0x15(%eax),%ebx
08424a07 +0x227:  mov    0xc(%ebp),%eax
08424a0a +0x22a:  mov    %edx,0x78(%esp)
08424a0e +0x22e:  mov    %ecx,0x7c(%esp)
08424a12 +0x232:  mov    -0xe0(%ebp),%ecx
08424a18 +0x238:  mov    %ecx,0x74(%esp)
08424a1c +0x23c:  mov    -0xdc(%ebp),%edx
08424a22 +0x242:  mov    %edx,0x70(%esp)
08424a26 +0x246:  mov    -0xd8(%ebp),%ecx
08424a2c +0x24c:  mov    %ecx,0x6c(%esp)
08424a30 +0x250:  mov    -0xd4(%ebp),%edx
08424a36 +0x256:  mov    %edx,0x68(%esp)
08424a3a +0x25a:  mov    -0xd0(%ebp),%ecx
08424a40 +0x260:  mov    %ecx,0x64(%esp)
08424a44 +0x264:  mov    -0xcc(%ebp),%edx
08424a4a +0x26a:  mov    %edx,0x60(%esp)
08424a4e +0x26e:  mov    -0xc8(%ebp),%ecx
08424a54 +0x274:  mov    %ecx,0x5c(%esp)
08424a58 +0x278:  mov    -0xc4(%ebp),%edx
08424a5e +0x27e:  mov    %edx,0x58(%esp)
08424a62 +0x282:  mov    -0xc0(%ebp),%ecx
08424a68 +0x288:  mov    %ecx,0x54(%esp)
08424a6c +0x28c:  mov    -0xbc(%ebp),%edx
08424a72 +0x292:  mov    %edx,0x50(%esp)
08424a76 +0x296:  mov    -0xb8(%ebp),%ecx
08424a7c +0x29c:  mov    %ecx,0x4c(%esp)
08424a80 +0x2a0:  mov    -0xb4(%ebp),%edx
08424a86 +0x2a6:  mov    %edx,0x48(%esp)
08424a8a +0x2aa:  mov    -0xb0(%ebp),%ecx
08424a90 +0x2b0:  mov    %ecx,0x44(%esp)
08424a94 +0x2b4:  mov    -0xac(%ebp),%edx
08424a9a +0x2ba:  mov    %edx,0x40(%esp)
08424a9e +0x2be:  mov    -0xa8(%ebp),%ecx
08424aa4 +0x2c4:  mov    %ecx,0x3c(%esp)
08424aa8 +0x2c8:  mov    -0xa4(%ebp),%edx
08424aae +0x2ce:  mov    %edx,0x38(%esp)
08424ab2 +0x2d2:  mov    -0xa0(%ebp),%ecx
08424ab8 +0x2d8:  mov    %ecx,0x34(%esp)
08424abc +0x2dc:  mov    -0x9c(%ebp),%edx
08424ac2 +0x2e2:  mov    %edx,0x30(%esp)
08424ac6 +0x2e6:  mov    -0x98(%ebp),%ecx
08424acc +0x2ec:  mov    %ecx,0x2c(%esp)
08424ad0 +0x2f0:  mov    -0x94(%ebp),%edx
08424ad6 +0x2f6:  mov    %edx,0x28(%esp)
08424ada +0x2fa:  mov    -0x90(%ebp),%ecx
08424ae0 +0x300:  mov    %ecx,0x24(%esp)
08424ae4 +0x304:  mov    -0x8c(%ebp),%edx
08424aea +0x30a:  mov    %edx,0x20(%esp)
08424aee +0x30e:  mov    -0x88(%ebp),%ecx
08424af4 +0x314:  mov    %ecx,0x1c(%esp)
08424af8 +0x318:  mov    %edi,0x18(%esp)
08424afc +0x31c:  mov    %esi,0x14(%esp)
08424b00 +0x320:  mov    %ebx,0x10(%esp)
08424b04 +0x324:  mov    %eax,0xc(%esp)
08424b08 +0x328:  lea    -0x21(%ebp),%eax
08424b0b +0x32b:  mov    %eax,0x8(%esp)
08424b0f +0x32f:  movl   $" insert into prod_sale_entry_%s  ( agency_no, seal_flag, sale_time, price, slot_part_type, slot_part_code, ipg_no, bonus_ipg_no, m_id, user_id  , server_id, charac_no, job, grow_type, level, prize_flag, new_flag, result_code, result_message, gift_server_info, gift_get_charac_no  , charge_price, free_price, count_no, each_price, price_type, user_ip, buy_type, tran_id )  values( '%s', %d, now(), %d, %d, %d, %d, %d, %d, '%s', %d, %d, %d, %d, %d, %d, %d, %d, '%s', %d, %d, %d, %d, %d, %d, %d, '%s', %u, %u ) ",0x4(%esp)
08424b17 +0x337:  mov    -0x1c(%ebp),%eax
08424b1a +0x33a:  mov    %eax,(%esp)
08424b1d +0x33d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424b22 +0x342:  movl   $0x1,0x4(%esp)
08424b2a +0x34a:  mov    -0x1c(%ebp),%eax
08424b2d +0x34d:  mov    %eax,(%esp)
08424b30 +0x350:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08424b35 +0x355:  xor    $0x1,%eax
08424b38 +0x358:  test   %al,%al
08424b3a +0x35a:  je     08424cda <+0x4fa>
08424b40 +0x360:  mov    0xc(%ebp),%eax
08424b43 +0x363:  mov    0x2d(%eax),%eax
08424b46 +0x366:  mov    %eax,0x18(%esp)
08424b4a +0x36a:  lea    -0x21(%ebp),%eax
08424b4d +0x36d:  mov    %eax,0x14(%esp)
08424b51 +0x371:  movl   $"db insert error prod_sale_entry_%s m_id: %d",0x10(%esp)
08424b59 +0x379:  movl   $0x6191,0xc(%esp)
08424b61 +0x381:  movl   $&_ZZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDbE19__PRETTY_FUNCTION__,0x8(%esp)
08424b69 +0x389:  movl   $"DBThread.cpp",0x4(%esp)
08424b71 +0x391:  movl   $0x1,(%esp)
08424b78 +0x398:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08424b7d +0x39d:  mov    0xc(%ebp),%eax
08424b80 +0x3a0:  add    $0x69,%eax
08424b83 +0x3a3:  mov    %eax,-0x84(%ebp)
08424b89 +0x3a9:  mov    0xc(%ebp),%eax
08424b8c +0x3ac:  mov    0x65(%eax),%eax
08424b8f +0x3af:  mov    %eax,-0x80(%ebp)
08424b92 +0x3b2:  cmpb   $0x0,-0x5c(%ebp)
08424b96 +0x3b6:  je     08424b9f <+0x3bf>
08424b98 +0x3b8:  mov    $0x1,%ebx
08424b9d +0x3bd:  jmp    08424ba4 <+0x3c4>
08424b9f +0x3bf:  mov    $0x2,%ebx
08424ba4 +0x3c4:  mov    0xc(%ebp),%eax
08424ba7 +0x3c7:  mov    0x61(%eax),%eax
08424baa +0x3ca:  mov    %eax,-0x7c(%ebp)
08424bad +0x3cd:  mov    0xc(%ebp),%eax
08424bb0 +0x3d0:  mov    0x4e(%eax),%eax
08424bb3 +0x3d3:  mov    %eax,-0x78(%ebp)
08424bb6 +0x3d6:  mov    0xc(%ebp),%eax
08424bb9 +0x3d9:  mov    0x31(%eax),%eax
08424bbc +0x3dc:  mov    %eax,-0x74(%ebp)
08424bbf +0x3df:  mov    0xc(%ebp),%eax
08424bc2 +0x3e2:  mov    0xcd(%eax),%eax
08424bc8 +0x3e8:  mov    %eax,-0x70(%ebp)
08424bcb +0x3eb:  mov    0xc(%ebp),%eax
08424bce +0x3ee:  add    $0x35,%eax
08424bd1 +0x3f1:  mov    %eax,-0x6c(%ebp)
08424bd4 +0x3f4:  mov    0xc(%ebp),%eax
08424bd7 +0x3f7:  mov    0x2d(%eax),%eax
08424bda +0x3fa:  mov    %eax,-0x68(%ebp)
08424bdd +0x3fd:  mov    0xc(%ebp),%eax
08424be0 +0x400:  mov    0x29(%eax),%eax
08424be3 +0x403:  mov    %eax,-0x64(%ebp)
08424be6 +0x406:  mov    0xc(%ebp),%eax
08424be9 +0x409:  mov    0x25(%eax),%eax
08424bec +0x40c:  mov    %eax,-0x60(%ebp)
08424bef +0x40f:  mov    0xc(%ebp),%eax
08424bf2 +0x412:  mov    0x21(%eax),%edi
08424bf5 +0x415:  mov    0xc(%ebp),%eax
08424bf8 +0x418:  mov    0x1d(%eax),%esi
08424bfb +0x41b:  mov    0xc(%ebp),%eax
08424bfe +0x41e:  mov    0x19(%eax),%ecx
08424c01 +0x421:  mov    0xc(%ebp),%eax
08424c04 +0x424:  mov    0x15(%eax),%edx
08424c07 +0x427:  mov    0xc(%ebp),%eax
08424c0a +0x42a:  mov    %eax,-0xec(%ebp)
08424c10 +0x430:  mov    -0x84(%ebp),%eax
08424c16 +0x436:  mov    %eax,0x44(%esp)
08424c1a +0x43a:  mov    -0x80(%ebp),%eax
08424c1d +0x43d:  mov    %eax,0x40(%esp)
08424c21 +0x441:  mov    %ebx,0x3c(%esp)
08424c25 +0x445:  mov    -0x7c(%ebp),%eax
08424c28 +0x448:  mov    %eax,0x38(%esp)
08424c2c +0x44c:  mov    -0x78(%ebp),%eax
08424c2f +0x44f:  mov    %eax,0x34(%esp)
08424c33 +0x453:  mov    -0x74(%ebp),%eax
08424c36 +0x456:  mov    %eax,0x30(%esp)
08424c3a +0x45a:  mov    -0x70(%ebp),%eax
08424c3d +0x45d:  mov    %eax,0x2c(%esp)
08424c41 +0x461:  mov    -0x6c(%ebp),%eax
08424c44 +0x464:  mov    %eax,0x28(%esp)
08424c48 +0x468:  mov    -0x68(%ebp),%eax
08424c4b +0x46b:  mov    %eax,0x24(%esp)
08424c4f +0x46f:  mov    -0x64(%ebp),%eax
08424c52 +0x472:  mov    %eax,0x20(%esp)
08424c56 +0x476:  mov    -0x60(%ebp),%eax
08424c59 +0x479:  mov    %eax,0x1c(%esp)
08424c5d +0x47d:  mov    %edi,0x18(%esp)
08424c61 +0x481:  mov    %esi,0x14(%esp)
08424c65 +0x485:  mov    %ecx,0x10(%esp)
08424c69 +0x489:  mov    %edx,0xc(%esp)
08424c6d +0x48d:  mov    -0xec(%ebp),%edx
08424c73 +0x493:  mov    %edx,0x8(%esp)
08424c77 +0x497:  movl   $" insert into prod_sale_entry_073 ( agency_no, seal_flag, sale_time, price, slot_part_type, slot_part_code, ipg_no, bonus_ipg_no, m_id, user_id, server_id, charac_no, job, prize_flag, new_flag, result_code, result_message )  values( '%s', %d, now(), %d, %d, %d, %d, %d, %d, '%s', %d, %d, %d, %d, %d, %d, '%s' ) ",0x4(%esp)
08424c7f +0x49f:  mov    -0x1c(%ebp),%eax
08424c82 +0x4a2:  mov    %eax,(%esp)
08424c85 +0x4a5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424c8a +0x4aa:  movl   $0x1,0x4(%esp)
08424c92 +0x4b2:  mov    -0x1c(%ebp),%eax
08424c95 +0x4b5:  mov    %eax,(%esp)
08424c98 +0x4b8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08424c9d +0x4bd:  xor    $0x1,%eax
08424ca0 +0x4c0:  test   %al,%al
08424ca2 +0x4c2:  je     08424cda <+0x4fa>
08424ca4 +0x4c4:  mov    0xc(%ebp),%eax
08424ca7 +0x4c7:  mov    0x2d(%eax),%eax
08424caa +0x4ca:  mov    %eax,0x14(%esp)
08424cae +0x4ce:  movl   $"db insert error prod_sale_entry_073 m_id: %d",0x10(%esp)
08424cb6 +0x4d6:  movl   $0x61ab,0xc(%esp)
08424cbe +0x4de:  movl   $&_ZZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDbE19__PRETTY_FUNCTION__,0x8(%esp)
08424cc6 +0x4e6:  movl   $"DBThread.cpp",0x4(%esp)
08424cce +0x4ee:  movl   $0x1,(%esp)
08424cd5 +0x4f5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08424cda +0x4fa:  add    $0x16c,%esp
08424ce0 +0x500:  pop    %ebx
08424ce1 +0x501:  pop    %esi
08424ce2 +0x502:  pop    %edi
08424ce3 +0x503:  pop    %ebp
08424ce4 +0x504:  ret
08424ce5 +0x505:  nop
```

## 反编译 C

```c
// DB_BillingRecord::InsertSaleEntry @ 0x84247e0

/* DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool) */

void __thiscall
DB_BillingRecord::InsertSaleEntry(DB_BillingRecord *this,SIG_BILLING_RECORD *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  SIG_BILLING_RECORD *pSVar3;
  SIG_BILLING_RECORD *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_b8;
  tm local_58;
  time_t local_2c;
  char local_25 [5];
  MySQL *local_20;
  
  local_25[0] = '\0';
  local_25[1] = '\0';
  local_25[2] = '\0';
  local_25[3] = '\0';
  local_25[4] = 0;
  time(&local_2c);
  localtime_r(&local_2c,&local_58);
  sprintf(local_25,"%02d%d",(local_58.tm_year + 0x76c) % 2000,local_58.tm_mon / 3 + 1);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  uVar14 = *(undefined4 *)(param_1 + 0x105);
  uVar15 = *(undefined4 *)(param_1 + 0x109);
  iVar2 = (int)(char)param_1[0x10d];
  pSVar3 = param_1 + 0xf5;
  uVar13 = *(undefined4 *)(param_1 + 0xf1);
  uVar12 = *(undefined4 *)(param_1 + 0xed);
  uVar11 = *(undefined4 *)(param_1 + 0xe9);
  uVar10 = *(undefined4 *)(param_1 + 0xe5);
  uVar9 = *(undefined4 *)(param_1 + 0xe1);
  uVar8 = *(undefined4 *)(param_1 + 0xdd);
  uVar7 = *(undefined4 *)(param_1 + 0xd9);
  pSVar4 = param_1 + 0x69;
  uVar6 = *(undefined4 *)(param_1 + 0x65);
  if (param_2) {
    local_b8 = 1;
  }
  else {
    local_b8 = 2;
  }
  MySQL::set_query(local_20,
                   " insert into prod_sale_entry_%s  ( agency_no, seal_flag, sale_time, price, slot_part_type, slot_part_code, ipg_no, bonus_ipg_no, m_id, user_id  , server_id, charac_no, job, grow_type, level, prize_flag, new_flag, result_code, result_message, gift_server_info, gift_get_charac_no  , charge_price, free_price, count_no, each_price, price_type, user_ip, buy_type, tran_id )  values( \'%s\', %d, now(), %d, %d, %d, %d, %d, %d, \'%s\', %d, %d, %d, %d, %d, %d, %d, %d, \'%s\', %d, %d, %d, %d, %d, %d, %d, \'%s\', %u, %u ) "
                   ,local_25,param_1,*(undefined4 *)(param_1 + 0x15),*(undefined4 *)(param_1 + 0x19)
                   ,*(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                   *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0x29),
                   *(undefined4 *)(param_1 + 0x2d),param_1 + 0x35,*(undefined4 *)(param_1 + 0xcd),
                   *(undefined4 *)(param_1 + 0x31),*(undefined4 *)(param_1 + 0x4e),
                   *(undefined4 *)(param_1 + 0xd1),*(undefined4 *)(param_1 + 0xd5),
                   *(undefined4 *)(param_1 + 0x61),local_b8,uVar6,pSVar4,uVar7,uVar8,uVar9,uVar10,
                   uVar11,uVar12,uVar13,pSVar3,iVar2,uVar14,uVar15);
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","void DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)",
               0x6191,"db insert error prod_sale_entry_%s m_id: %d",local_25,
               *(undefined4 *)(param_1 + 0x2d));
    if (param_2) {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
    MySQL::set_query(local_20,
                     " insert into prod_sale_entry_073 ( agency_no, seal_flag, sale_time, price, slot_part_type, slot_part_code, ipg_no, bonus_ipg_no, m_id, user_id, server_id, charac_no, job, prize_flag, new_flag, result_code, result_message )  values( \'%s\', %d, now(), %d, %d, %d, %d, %d, %d, \'%s\', %d, %d, %d, %d, %d, %d, \'%s\' ) "
                     ,param_1,*(undefined4 *)(param_1 + 0x15),*(undefined4 *)(param_1 + 0x19),
                     *(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                     *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0x29),
                     *(undefined4 *)(param_1 + 0x2d),param_1 + 0x35,*(undefined4 *)(param_1 + 0xcd),
                     *(undefined4 *)(param_1 + 0x31),*(undefined4 *)(param_1 + 0x4e),
                     *(undefined4 *)(param_1 + 0x61),uVar5,*(undefined4 *)(param_1 + 0x65),
                     param_1 + 0x69,local_b8,uVar6,pSVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                     uVar13,pSVar3,iVar2,uVar14,uVar15);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "void DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)",0x61ab,
                 "db insert error prod_sale_entry_073 m_id: %d",*(undefined4 *)(param_1 + 0x2d));
    }
  }
  return;
}
```
