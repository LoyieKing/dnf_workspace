# GetUserInven

`_ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840b0d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840b0d8  _ZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)
# range [0x0840b0d8, 0x0840bd39]
0840b0d8 +0x000:  push   %ebp
0840b0d9 +0x001:  mov    %esp,%ebp
0840b0db +0x003:  push   %edi
0840b0dc +0x004:  push   %esi
0840b0dd +0x005:  push   %ebx
0840b0de +0x006:  sub    $0x695c,%esp
0840b0e4 +0x00c:  lea    -0x4ca(%ebp),%edx
0840b0ea +0x012:  mov    $0x37a,%ebx
0840b0ef +0x017:  mov    $0x0,%eax
0840b0f4 +0x01c:  mov    %edx,%ecx
0840b0f6 +0x01e:  and    $0x2,%ecx
0840b0f9 +0x021:  test   %ecx,%ecx
0840b0fb +0x023:  je     0840b106 <+0x2e>
0840b0fd +0x025:  mov    %ax,(%edx)
0840b100 +0x028:  add    $0x2,%edx
0840b103 +0x02b:  sub    $0x2,%ebx
0840b106 +0x02e:  mov    %ebx,%ecx
0840b108 +0x030:  shr    $0x2,%ecx
0840b10b +0x033:  mov    %edx,%edi
0840b10d +0x035:  rep stos %eax,%es:(%edi)
0840b10f +0x037:  mov    %edi,%edx
0840b111 +0x039:  mov    %ebx,%ecx
0840b113 +0x03b:  and    $0x2,%ecx
0840b116 +0x03e:  test   %ecx,%ecx
0840b118 +0x040:  je     0840b120 <+0x48>
0840b11a +0x042:  mov    %ax,(%edx)
0840b11d +0x045:  add    $0x2,%edx
0840b120 +0x048:  mov    %ebx,%ecx
0840b122 +0x04a:  and    $0x1,%ecx
0840b125 +0x04d:  test   %ecx,%ecx
0840b127 +0x04f:  je     0840b12e <+0x56>
0840b129 +0x051:  mov    %al,(%edx)
0840b12b +0x053:  add    $0x1,%edx
0840b12e +0x056:  lea    -0x693e(%ebp),%eax
0840b134 +0x05c:  mov    $0x473e,%edx
0840b139 +0x061:  mov    %edx,0x8(%esp)
0840b13d +0x065:  movl   $0x0,0x4(%esp)
0840b145 +0x06d:  mov    %eax,(%esp)
0840b148 +0x070:  call   0807dcc0 <_init+0x5b8>
0840b14d +0x075:  lea    -0x2200(%ebp),%edx
0840b153 +0x07b:  mov    $0x0,%eax
0840b158 +0x080:  mov    $0x74d,%ecx
0840b15d +0x085:  mov    %edx,%edi
0840b15f +0x087:  rep stos %eax,%es:(%edi)
0840b161 +0x089:  mov    %edi,%edx
0840b163 +0x08b:  mov    %ax,(%edx)
0840b166 +0x08e:  add    $0x2,%edx
0840b169 +0x091:  movl   $0x1d36,-0x148(%ebp)
0840b173 +0x09b:  movl   $0x37a,-0x14c(%ebp)
0840b17d +0x0a5:  movl   $0x473e,-0x150(%ebp)
0840b187 +0x0af:  mov    -0x150(%ebp),%eax
0840b18d +0x0b5:  mov    %eax,-0x30(%ebp)
0840b190 +0x0b8:  mov    -0x14c(%ebp),%eax
0840b196 +0x0be:  mov    %eax,-0x2c(%ebp)
0840b199 +0x0c1:  mov    -0x148(%ebp),%eax
0840b19f +0x0c7:  mov    %eax,-0x28(%ebp)
0840b1a2 +0x0ca:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840b1a7 +0x0cf:  movl   $0x0,0x8(%esp)
0840b1af +0x0d7:  movl   $0x3,0x4(%esp)
0840b1b7 +0x0df:  mov    %eax,(%esp)
0840b1ba +0x0e2:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840b1bf +0x0e7:  mov    %eax,-0x24(%ebp)
0840b1c2 +0x0ea:  mov    0xc(%ebp),%eax
0840b1c5 +0x0ed:  mov    0x4(%eax),%eax
0840b1c8 +0x0f0:  mov    %eax,0x8(%esp)
0840b1cc +0x0f4:  movl   $"seLect money,coin,inventory,equipslot,pay_coin,event_coin,creature,creature_flag,inventory_capacity from inventory where charac_no=%u",0x4(%esp)
0840b1d4 +0x0fc:  mov    -0x24(%ebp),%eax
0840b1d7 +0x0ff:  mov    %eax,(%esp)
0840b1da +0x102:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840b1df +0x107:  movl   $0x1,0x4(%esp)
0840b1e7 +0x10f:  mov    -0x24(%ebp),%eax
0840b1ea +0x112:  mov    %eax,(%esp)
0840b1ed +0x115:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840b1f2 +0x11a:  mov    %al,-0x31(%ebp)
0840b1f5 +0x11d:  movzbl -0x31(%ebp),%eax
0840b1f9 +0x121:  xor    $0x1,%eax
0840b1fc +0x124:  test   %al,%al
0840b1fe +0x126:  je     0840b250 <+0x178>
0840b200 +0x128:  mov    0xc(%ebp),%eax
0840b203 +0x12b:  mov    0x4(%eax),%ebx
0840b206 +0x12e:  movl   $0x5,0xc(%esp)
0840b20e +0x136:  movl   $0x24cb,0x8(%esp)
0840b216 +0x13e:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b21e +0x146:  lea    -0x144(%ebp),%eax
0840b224 +0x14c:  mov    %eax,(%esp)
0840b227 +0x14f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b22c +0x154:  mov    %ebx,0x8(%esp)
0840b230 +0x158:  movl   $"DB_LoadInventory::GetUserInven, exec ERROR charac_no=%u",0x4(%esp)
0840b238 +0x160:  lea    -0x144(%ebp),%eax
0840b23e +0x166:  mov    %eax,(%esp)
0840b241 +0x169:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b246 +0x16e:  mov    $0x0,%ebx
0840b24b +0x173:  jmp    0840bd2d <+0xc55>
0840b250 +0x178:  mov    -0x24(%ebp),%eax
0840b253 +0x17b:  mov    %eax,(%esp)
0840b256 +0x17e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840b25b +0x183:  mov    %al,-0x31(%ebp)
0840b25e +0x186:  movzbl -0x31(%ebp),%eax
0840b262 +0x18a:  xor    $0x1,%eax
0840b265 +0x18d:  test   %al,%al
0840b267 +0x18f:  je     0840b2b9 <+0x1e1>
0840b269 +0x191:  mov    0xc(%ebp),%eax
0840b26c +0x194:  mov    0x4(%eax),%ebx
0840b26f +0x197:  movl   $0x5,0xc(%esp)
0840b277 +0x19f:  movl   $0x24d2,0x8(%esp)
0840b27f +0x1a7:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b287 +0x1af:  lea    -0x134(%ebp),%eax
0840b28d +0x1b5:  mov    %eax,(%esp)
0840b290 +0x1b8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b295 +0x1bd:  mov    %ebx,0x8(%esp)
0840b299 +0x1c1:  movl   $"DB_LoadInventory::GetUserInven, fetch ERROR charac_no=%u",0x4(%esp)
0840b2a1 +0x1c9:  lea    -0x134(%ebp),%eax
0840b2a7 +0x1cf:  mov    %eax,(%esp)
0840b2aa +0x1d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b2af +0x1d7:  mov    $0x0,%ebx
0840b2b4 +0x1dc:  jmp    0840bd2d <+0xc55>
0840b2b9 +0x1e1:  mov    0xc(%ebp),%eax
0840b2bc +0x1e4:  add    $0x4034,%eax
0840b2c1 +0x1e9:  mov    %eax,0x8(%esp)
0840b2c5 +0x1ed:  movl   $0x0,0x4(%esp)
0840b2cd +0x1f5:  mov    -0x24(%ebp),%eax
0840b2d0 +0x1f8:  mov    %eax,(%esp)
0840b2d3 +0x1fb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840b2d8 +0x200:  mov    %al,-0x31(%ebp)
0840b2db +0x203:  movzbl -0x31(%ebp),%eax
0840b2df +0x207:  xor    $0x1,%eax
0840b2e2 +0x20a:  test   %al,%al
0840b2e4 +0x20c:  je     0840b336 <+0x25e>
0840b2e6 +0x20e:  mov    0xc(%ebp),%eax
0840b2e9 +0x211:  mov    0x4(%eax),%ebx
0840b2ec +0x214:  movl   $0x5,0xc(%esp)
0840b2f4 +0x21c:  movl   $0x24d9,0x8(%esp)
0840b2fc +0x224:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b304 +0x22c:  lea    -0x124(%ebp),%eax
0840b30a +0x232:  mov    %eax,(%esp)
0840b30d +0x235:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b312 +0x23a:  mov    %ebx,0x8(%esp)
0840b316 +0x23e:  movl   $"DB_LoadInventory::GetUserInven, get_uint(0, pContext->money) ERROR charac_no=%u",0x4(%esp)
0840b31e +0x246:  lea    -0x124(%ebp),%eax
0840b324 +0x24c:  mov    %eax,(%esp)
0840b327 +0x24f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b32c +0x254:  mov    $0x0,%ebx
0840b331 +0x259:  jmp    0840bd2d <+0xc55>
0840b336 +0x25e:  mov    0xc(%ebp),%eax
0840b339 +0x261:  add    $0x4038,%eax
0840b33e +0x266:  mov    %eax,0x8(%esp)
0840b342 +0x26a:  movl   $0x1,0x4(%esp)
0840b34a +0x272:  mov    -0x24(%ebp),%eax
0840b34d +0x275:  mov    %eax,(%esp)
0840b350 +0x278:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840b355 +0x27d:  mov    %al,-0x31(%ebp)
0840b358 +0x280:  movzbl -0x31(%ebp),%eax
0840b35c +0x284:  xor    $0x1,%eax
0840b35f +0x287:  test   %al,%al
0840b361 +0x289:  je     0840b3b3 <+0x2db>
0840b363 +0x28b:  mov    0xc(%ebp),%eax
0840b366 +0x28e:  mov    0x4(%eax),%ebx
0840b369 +0x291:  movl   $0x5,0xc(%esp)
0840b371 +0x299:  movl   $0x24e0,0x8(%esp)
0840b379 +0x2a1:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b381 +0x2a9:  lea    -0x114(%ebp),%eax
0840b387 +0x2af:  mov    %eax,(%esp)
0840b38a +0x2b2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b38f +0x2b7:  mov    %ebx,0x8(%esp)
0840b393 +0x2bb:  movl   $"DB_LoadInventory::GetUserInven, get_uint(1, pContext->coin) ERROR charac_no=%u",0x4(%esp)
0840b39b +0x2c3:  lea    -0x114(%ebp),%eax
0840b3a1 +0x2c9:  mov    %eax,(%esp)
0840b3a4 +0x2cc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b3a9 +0x2d1:  mov    $0x0,%ebx
0840b3ae +0x2d6:  jmp    0840bd2d <+0xc55>
0840b3b3 +0x2db:  movl   $0x2,0x4(%esp)
0840b3bb +0x2e3:  mov    -0x24(%ebp),%eax
0840b3be +0x2e6:  mov    %eax,(%esp)
0840b3c1 +0x2e9:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840b3c6 +0x2ee:  mov    %eax,-0x30(%ebp)
0840b3c9 +0x2f1:  mov    -0x150(%ebp),%eax
0840b3cf +0x2f7:  mov    %eax,0xc(%esp)
0840b3d3 +0x2fb:  lea    -0x693e(%ebp),%eax
0840b3d9 +0x301:  mov    %eax,0x8(%esp)
0840b3dd +0x305:  movl   $0x2,0x4(%esp)
0840b3e5 +0x30d:  mov    -0x24(%ebp),%eax
0840b3e8 +0x310:  mov    %eax,(%esp)
0840b3eb +0x313:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840b3f0 +0x318:  mov    %al,-0x31(%ebp)
0840b3f3 +0x31b:  movzbl -0x31(%ebp),%eax
0840b3f7 +0x31f:  xor    $0x1,%eax
0840b3fa +0x322:  test   %al,%al
0840b3fc +0x324:  je     0840b44e <+0x376>
0840b3fe +0x326:  mov    0xc(%ebp),%eax
0840b401 +0x329:  mov    0x4(%eax),%ebx
0840b404 +0x32c:  movl   $0x5,0xc(%esp)
0840b40c +0x334:  movl   $0x24e8,0x8(%esp)
0840b414 +0x33c:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b41c +0x344:  lea    -0x104(%ebp),%eax
0840b422 +0x34a:  mov    %eax,(%esp)
0840b425 +0x34d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b42a +0x352:  mov    %ebx,0x8(%esp)
0840b42e +0x356:  movl   $"DB_LoadInventory::GetUserInven, get_binary(2) ERROR charac_no=%u",0x4(%esp)
0840b436 +0x35e:  lea    -0x104(%ebp),%eax
0840b43c +0x364:  mov    %eax,(%esp)
0840b43f +0x367:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b444 +0x36c:  mov    $0x0,%ebx
0840b449 +0x371:  jmp    0840bd2d <+0xc55>
0840b44e +0x376:  movl   $0x3,0x4(%esp)
0840b456 +0x37e:  mov    -0x24(%ebp),%eax
0840b459 +0x381:  mov    %eax,(%esp)
0840b45c +0x384:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840b461 +0x389:  mov    %eax,-0x2c(%ebp)
0840b464 +0x38c:  mov    -0x14c(%ebp),%eax
0840b46a +0x392:  mov    %eax,0xc(%esp)
0840b46e +0x396:  lea    -0x4ca(%ebp),%eax
0840b474 +0x39c:  mov    %eax,0x8(%esp)
0840b478 +0x3a0:  movl   $0x3,0x4(%esp)
0840b480 +0x3a8:  mov    -0x24(%ebp),%eax
0840b483 +0x3ab:  mov    %eax,(%esp)
0840b486 +0x3ae:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840b48b +0x3b3:  mov    %al,-0x31(%ebp)
0840b48e +0x3b6:  movzbl -0x31(%ebp),%eax
0840b492 +0x3ba:  xor    $0x1,%eax
0840b495 +0x3bd:  test   %al,%al
0840b497 +0x3bf:  je     0840b4e9 <+0x411>
0840b499 +0x3c1:  mov    0xc(%ebp),%eax
0840b49c +0x3c4:  mov    0x4(%eax),%ebx
0840b49f +0x3c7:  movl   $0x5,0xc(%esp)
0840b4a7 +0x3cf:  movl   $0x24f0,0x8(%esp)
0840b4af +0x3d7:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b4b7 +0x3df:  lea    -0xf4(%ebp),%eax
0840b4bd +0x3e5:  mov    %eax,(%esp)
0840b4c0 +0x3e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b4c5 +0x3ed:  mov    %ebx,0x8(%esp)
0840b4c9 +0x3f1:  movl   $"DB_LoadInventory::GetUserInven, get_binary(3) ERROR charac_no=%u",0x4(%esp)
0840b4d1 +0x3f9:  lea    -0xf4(%ebp),%eax
0840b4d7 +0x3ff:  mov    %eax,(%esp)
0840b4da +0x402:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b4df +0x407:  mov    $0x0,%ebx
0840b4e4 +0x40c:  jmp    0840bd2d <+0xc55>
0840b4e9 +0x411:  mov    0xc(%ebp),%eax
0840b4ec +0x414:  add    $0x403c,%eax
0840b4f1 +0x419:  mov    %eax,0x8(%esp)
0840b4f5 +0x41d:  movl   $0x4,0x4(%esp)
0840b4fd +0x425:  mov    -0x24(%ebp),%eax
0840b500 +0x428:  mov    %eax,(%esp)
0840b503 +0x42b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840b508 +0x430:  mov    %al,-0x31(%ebp)
0840b50b +0x433:  movzbl -0x31(%ebp),%eax
0840b50f +0x437:  xor    $0x1,%eax
0840b512 +0x43a:  test   %al,%al
0840b514 +0x43c:  je     0840b566 <+0x48e>
0840b516 +0x43e:  mov    0xc(%ebp),%eax
0840b519 +0x441:  mov    0x4(%eax),%ebx
0840b51c +0x444:  movl   $0x5,0xc(%esp)
0840b524 +0x44c:  movl   $0x24f7,0x8(%esp)
0840b52c +0x454:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b534 +0x45c:  lea    -0xe4(%ebp),%eax
0840b53a +0x462:  mov    %eax,(%esp)
0840b53d +0x465:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b542 +0x46a:  mov    %ebx,0x8(%esp)
0840b546 +0x46e:  movl   $"DB_LoadInventory::GetUserInven, get_uint(4) ERROR charac_no=%u",0x4(%esp)
0840b54e +0x476:  lea    -0xe4(%ebp),%eax
0840b554 +0x47c:  mov    %eax,(%esp)
0840b557 +0x47f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b55c +0x484:  mov    $0x0,%ebx
0840b561 +0x489:  jmp    0840bd2d <+0xc55>
0840b566 +0x48e:  mov    0xc(%ebp),%eax
0840b569 +0x491:  add    $0x4040,%eax
0840b56e +0x496:  mov    %eax,0x8(%esp)
0840b572 +0x49a:  movl   $0x5,0x4(%esp)
0840b57a +0x4a2:  mov    -0x24(%ebp),%eax
0840b57d +0x4a5:  mov    %eax,(%esp)
0840b580 +0x4a8:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840b585 +0x4ad:  mov    %al,-0x31(%ebp)
0840b588 +0x4b0:  movzbl -0x31(%ebp),%eax
0840b58c +0x4b4:  xor    $0x1,%eax
0840b58f +0x4b7:  test   %al,%al
0840b591 +0x4b9:  je     0840b5e3 <+0x50b>
0840b593 +0x4bb:  mov    0xc(%ebp),%eax
0840b596 +0x4be:  mov    0x4(%eax),%ebx
0840b599 +0x4c1:  movl   $0x5,0xc(%esp)
0840b5a1 +0x4c9:  movl   $0x24ff,0x8(%esp)
0840b5a9 +0x4d1:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b5b1 +0x4d9:  lea    -0xd4(%ebp),%eax
0840b5b7 +0x4df:  mov    %eax,(%esp)
0840b5ba +0x4e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b5bf +0x4e7:  mov    %ebx,0x8(%esp)
0840b5c3 +0x4eb:  movl   $"DB_LoadInventory::GetUserInven, get_uint(5) ERROR charac_no=%u",0x4(%esp)
0840b5cb +0x4f3:  lea    -0xd4(%ebp),%eax
0840b5d1 +0x4f9:  mov    %eax,(%esp)
0840b5d4 +0x4fc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b5d9 +0x501:  mov    $0x0,%ebx
0840b5de +0x506:  jmp    0840bd2d <+0xc55>
0840b5e3 +0x50b:  movl   $0x6,-0x20(%ebp)
0840b5ea +0x512:  mov    -0x20(%ebp),%eax
0840b5ed +0x515:  mov    %eax,0x4(%esp)
0840b5f1 +0x519:  mov    -0x24(%ebp),%eax
0840b5f4 +0x51c:  mov    %eax,(%esp)
0840b5f7 +0x51f:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840b5fc +0x524:  mov    %eax,-0x28(%ebp)
0840b5ff +0x527:  mov    -0x148(%ebp),%eax
0840b605 +0x52d:  mov    %eax,%edx
0840b607 +0x52f:  mov    -0x20(%ebp),%eax
0840b60a +0x532:  addl   $0x1,-0x20(%ebp)
0840b60e +0x536:  mov    %edx,0xc(%esp)
0840b612 +0x53a:  lea    -0x2200(%ebp),%edx
0840b618 +0x540:  mov    %edx,0x8(%esp)
0840b61c +0x544:  mov    %eax,0x4(%esp)
0840b620 +0x548:  mov    -0x24(%ebp),%eax
0840b623 +0x54b:  mov    %eax,(%esp)
0840b626 +0x54e:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840b62b +0x553:  mov    %al,-0x31(%ebp)
0840b62e +0x556:  movzbl -0x31(%ebp),%eax
0840b632 +0x55a:  xor    $0x1,%eax
0840b635 +0x55d:  test   %al,%al
0840b637 +0x55f:  je     0840b689 <+0x5b1>
0840b639 +0x561:  mov    0xc(%ebp),%eax
0840b63c +0x564:  mov    0x4(%eax),%ebx
0840b63f +0x567:  movl   $0x5,0xc(%esp)
0840b647 +0x56f:  movl   $0x251b,0x8(%esp)
0840b64f +0x577:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b657 +0x57f:  lea    -0xc4(%ebp),%eax
0840b65d +0x585:  mov    %eax,(%esp)
0840b660 +0x588:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b665 +0x58d:  mov    %ebx,0x8(%esp)
0840b669 +0x591:  movl   $"DB_LoadCreature, get_binary(8) ERROR charac_no=%u",0x4(%esp)
0840b671 +0x599:  lea    -0xc4(%ebp),%eax
0840b677 +0x59f:  mov    %eax,(%esp)
0840b67a +0x5a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b67f +0x5a7:  mov    $0x0,%ebx
0840b684 +0x5ac:  jmp    0840bd2d <+0xc55>
0840b689 +0x5b1:  mov    0xc(%ebp),%eax
0840b68c +0x5b4:  lea    &_ZL14gUnicodeBuffer+0x8350(%eax),%edx
0840b692 +0x5ba:  mov    -0x20(%ebp),%eax
0840b695 +0x5bd:  addl   $0x1,-0x20(%ebp)
0840b699 +0x5c1:  mov    %edx,0x8(%esp)
0840b69d +0x5c5:  mov    %eax,0x4(%esp)
0840b6a1 +0x5c9:  mov    -0x24(%ebp),%eax
0840b6a4 +0x5cc:  mov    %eax,(%esp)
0840b6a7 +0x5cf:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840b6ac +0x5d4:  mov    %al,-0x31(%ebp)
0840b6af +0x5d7:  movzbl -0x31(%ebp),%eax
0840b6b3 +0x5db:  xor    $0x1,%eax
0840b6b6 +0x5de:  test   %al,%al
0840b6b8 +0x5e0:  je     0840b70a <+0x632>
0840b6ba +0x5e2:  mov    0xc(%ebp),%eax
0840b6bd +0x5e5:  mov    0x4(%eax),%ebx
0840b6c0 +0x5e8:  movl   $0x5,0xc(%esp)
0840b6c8 +0x5f0:  movl   $0x2522,0x8(%esp)
0840b6d0 +0x5f8:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b6d8 +0x600:  lea    -0xb4(%ebp),%eax
0840b6de +0x606:  mov    %eax,(%esp)
0840b6e1 +0x609:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b6e6 +0x60e:  mov    %ebx,0x8(%esp)
0840b6ea +0x612:  movl   $"DB_LoadInventory::GetUserInven, get_uint(9) ERROR charac_no=%u",0x4(%esp)
0840b6f2 +0x61a:  lea    -0xb4(%ebp),%eax
0840b6f8 +0x620:  mov    %eax,(%esp)
0840b6fb +0x623:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b700 +0x628:  mov    $0x0,%ebx
0840b705 +0x62d:  jmp    0840bd2d <+0xc55>
0840b70a +0x632:  mov    0xc(%ebp),%eax
0840b70d +0x635:  lea    &_ZL14gUnicodeBuffer+0xae10(%eax),%edx
0840b713 +0x63b:  mov    -0x20(%ebp),%eax
0840b716 +0x63e:  addl   $0x1,-0x20(%ebp)
0840b71a +0x642:  mov    %edx,0x8(%esp)
0840b71e +0x646:  mov    %eax,0x4(%esp)
0840b722 +0x64a:  mov    -0x24(%ebp),%eax
0840b725 +0x64d:  mov    %eax,(%esp)
0840b728 +0x650:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840b72d +0x655:  mov    %al,-0x31(%ebp)
0840b730 +0x658:  movzbl -0x31(%ebp),%eax
0840b734 +0x65c:  xor    $0x1,%eax
0840b737 +0x65f:  test   %al,%al
0840b739 +0x661:  je     0840b78b <+0x6b3>
0840b73b +0x663:  mov    0xc(%ebp),%eax
0840b73e +0x666:  mov    0x4(%eax),%ebx
0840b741 +0x669:  movl   $0x5,0xc(%esp)
0840b749 +0x671:  movl   $0x253a,0x8(%esp)
0840b751 +0x679:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b759 +0x681:  lea    -0xa4(%ebp),%eax
0840b75f +0x687:  mov    %eax,(%esp)
0840b762 +0x68a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b767 +0x68f:  mov    %ebx,0x8(%esp)
0840b76b +0x693:  movl   $"DB_LoadInventory::GetUserInven, get_uint(13) ERROR charac_no=%u",0x4(%esp)
0840b773 +0x69b:  lea    -0xa4(%ebp),%eax
0840b779 +0x6a1:  mov    %eax,(%esp)
0840b77c +0x6a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b781 +0x6a9:  mov    $0x0,%ebx
0840b786 +0x6ae:  jmp    0840bd2d <+0xc55>
0840b78b +0x6b3:  mov    -0x14c(%ebp),%eax
0840b791 +0x6b9:  cmp    %eax,-0x2c(%ebp)
0840b794 +0x6bc:  jbe    0840b7c2 <+0x6ea>
0840b796 +0x6be:  movl   $0x4,(%esp)
0840b79d +0x6c5:  call   08725800 <__cxa_allocate_exception>
0840b7a2 +0x6ca:  mov    %eax,%edx
0840b7a4 +0x6cc:  movl   $0x255a,(%edx)
0840b7aa +0x6d2:  movl   $0x0,0x8(%esp)
0840b7b2 +0x6da:  movl   $&_ZTIj,0x4(%esp)
0840b7ba +0x6e2:  mov    %eax,(%esp)
0840b7bd +0x6e5:  call   08724c50 <__cxa_throw>
0840b7c2 +0x6ea:  mov    -0x150(%ebp),%eax
0840b7c8 +0x6f0:  cmp    %eax,-0x30(%ebp)
0840b7cb +0x6f3:  jbe    0840b7f9 <+0x721>
0840b7cd +0x6f5:  movl   $0x4,(%esp)
0840b7d4 +0x6fc:  call   08725800 <__cxa_allocate_exception>
0840b7d9 +0x701:  mov    %eax,%edx
0840b7db +0x703:  movl   $0x255c,(%edx)
0840b7e1 +0x709:  movl   $0x0,0x8(%esp)
0840b7e9 +0x711:  movl   $&_ZTIj,0x4(%esp)
0840b7f1 +0x719:  mov    %eax,(%esp)
0840b7f4 +0x71c:  call   08724c50 <__cxa_throw>
0840b7f9 +0x721:  mov    -0x148(%ebp),%eax
0840b7ff +0x727:  cmp    %eax,-0x28(%ebp)
0840b802 +0x72a:  jbe    0840b830 <+0x758>
0840b804 +0x72c:  movl   $0x4,(%esp)
0840b80b +0x733:  call   08725800 <__cxa_allocate_exception>
0840b810 +0x738:  mov    %eax,%edx
0840b812 +0x73a:  movl   $0x2563,(%edx)
0840b818 +0x740:  movl   $0x0,0x8(%esp)
0840b820 +0x748:  movl   $&_ZTIj,0x4(%esp)
0840b828 +0x750:  mov    %eax,(%esp)
0840b82b +0x753:  call   08724c50 <__cxa_throw>
0840b830 +0x758:  mov    0xc(%ebp),%eax
0840b833 +0x75b:  add    $0xa603,%eax
0840b838 +0x760:  mov    -0x2c(%ebp),%edx
0840b83b +0x763:  mov    %edx,0xc(%esp)
0840b83f +0x767:  lea    -0x4ca(%ebp),%edx
0840b845 +0x76d:  mov    %edx,0x8(%esp)
0840b849 +0x771:  lea    -0x14c(%ebp),%edx
0840b84f +0x777:  mov    %edx,0x4(%esp)
0840b853 +0x77b:  mov    %eax,(%esp)
0840b856 +0x77e:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840b85b +0x783:  xor    $0x1,%eax
0840b85e +0x786:  test   %al,%al
0840b860 +0x788:  je     0840b88e <+0x7b6>
0840b862 +0x78a:  movl   $0x4,(%esp)
0840b869 +0x791:  call   08725800 <__cxa_allocate_exception>
0840b86e +0x796:  mov    %eax,%edx
0840b870 +0x798:  movl   $0x2565,(%edx)
0840b876 +0x79e:  movl   $0x0,0x8(%esp)
0840b87e +0x7a6:  movl   $&_ZTIj,0x4(%esp)
0840b886 +0x7ae:  mov    %eax,(%esp)
0840b889 +0x7b1:  call   08724c50 <__cxa_throw>
0840b88e +0x7b6:  mov    0xc(%ebp),%eax
0840b891 +0x7b9:  add    $0x5949,%eax
0840b896 +0x7be:  mov    -0x30(%ebp),%edx
0840b899 +0x7c1:  mov    %edx,0xc(%esp)
0840b89d +0x7c5:  lea    -0x693e(%ebp),%edx
0840b8a3 +0x7cb:  mov    %edx,0x8(%esp)
0840b8a7 +0x7cf:  lea    -0x150(%ebp),%edx
0840b8ad +0x7d5:  mov    %edx,0x4(%esp)
0840b8b1 +0x7d9:  mov    %eax,(%esp)
0840b8b4 +0x7dc:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840b8b9 +0x7e1:  xor    $0x1,%eax
0840b8bc +0x7e4:  test   %al,%al
0840b8be +0x7e6:  je     0840b8ec <+0x814>
0840b8c0 +0x7e8:  movl   $0x4,(%esp)
0840b8c7 +0x7ef:  call   08725800 <__cxa_allocate_exception>
0840b8cc +0x7f4:  mov    %eax,%edx
0840b8ce +0x7f6:  movl   $0x2567,(%edx)
0840b8d4 +0x7fc:  movl   $0x0,0x8(%esp)
0840b8dc +0x804:  movl   $&_ZTIj,0x4(%esp)
0840b8e4 +0x80c:  mov    %eax,(%esp)
0840b8e7 +0x80f:  call   08724c50 <__cxa_throw>
0840b8ec +0x814:  mov    0xc(%ebp),%eax
0840b8ef +0x817:  add    $&_ZL14gUnicodeBuffer+0x6b01,%eax
0840b8f4 +0x81c:  mov    -0x28(%ebp),%edx
0840b8f7 +0x81f:  mov    %edx,0xc(%esp)
0840b8fb +0x823:  lea    -0x2200(%ebp),%edx
0840b901 +0x829:  mov    %edx,0x8(%esp)
0840b905 +0x82d:  lea    -0x148(%ebp),%edx
0840b90b +0x833:  mov    %edx,0x4(%esp)
0840b90f +0x837:  mov    %eax,(%esp)
0840b912 +0x83a:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840b917 +0x83f:  xor    $0x1,%eax
0840b91a +0x842:  test   %al,%al
0840b91c +0x844:  je     0840b94a <+0x872>
0840b91e +0x846:  movl   $0x4,(%esp)
0840b925 +0x84d:  call   08725800 <__cxa_allocate_exception>
0840b92a +0x852:  mov    %eax,%edx
0840b92c +0x854:  movl   $0x256e,(%edx)
0840b932 +0x85a:  movl   $0x0,0x8(%esp)
0840b93a +0x862:  movl   $&_ZTIj,0x4(%esp)
0840b942 +0x86a:  mov    %eax,(%esp)
0840b945 +0x86d:  call   08724c50 <__cxa_throw>
0840b94a +0x872:  mov    -0x14c(%ebp),%ecx
0840b950 +0x878:  mov    $0x4325c53f,%edx
0840b955 +0x87d:  mov    %ecx,%eax
0840b957 +0x87f:  mul    %edx
0840b959 +0x881:  mov    %edx,%eax
0840b95b +0x883:  shr    $0x4,%eax
0840b95e +0x886:  imul   $0x3d,%eax,%eax
0840b961 +0x889:  mov    %ecx,%edx
0840b963 +0x88b:  sub    %eax,%edx
0840b965 +0x88d:  mov    %edx,%eax
0840b967 +0x88f:  test   %eax,%eax
0840b969 +0x891:  je     0840b9d4 <+0x8fc>
0840b96b +0x893:  mov    -0x14c(%ebp),%eax
0840b971 +0x899:  test   %eax,%eax
0840b973 +0x89b:  je     0840b9d4 <+0x8fc>
0840b975 +0x89d:  mov    0xc(%ebp),%eax
0840b978 +0x8a0:  mov    0x4(%eax),%ebx
0840b97b +0x8a3:  movl   $0x5,0xc(%esp)
0840b983 +0x8ab:  movl   $0x2573,0x8(%esp)
0840b98b +0x8b3:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840b993 +0x8bb:  lea    -0x94(%ebp),%eax
0840b999 +0x8c1:  mov    %eax,(%esp)
0840b99c +0x8c4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840b9a1 +0x8c9:  mov    -0x2c(%ebp),%eax
0840b9a4 +0x8cc:  mov    %eax,0x10(%esp)
0840b9a8 +0x8d0:  movl   $0x53e,0xc(%esp)
0840b9b0 +0x8d8:  mov    %ebx,0x8(%esp)
0840b9b4 +0x8dc:  movl   $"incorrect inventory size charac_no(%d), equip, original_size(%d), db_size(%d)\n",0x4(%esp)
0840b9bc +0x8e4:  lea    -0x94(%ebp),%eax
0840b9c2 +0x8ea:  mov    %eax,(%esp)
0840b9c5 +0x8ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840b9ca +0x8f2:  mov    $0x0,%ebx
0840b9cf +0x8f7:  jmp    0840bd2d <+0xc55>
0840b9d4 +0x8fc:  mov    -0x150(%ebp),%ecx
0840b9da +0x902:  mov    $0x4325c53f,%edx
0840b9df +0x907:  mov    %ecx,%eax
0840b9e1 +0x909:  mul    %edx
0840b9e3 +0x90b:  mov    %edx,%eax
0840b9e5 +0x90d:  shr    $0x4,%eax
0840b9e8 +0x910:  imul   $0x3d,%eax,%eax
0840b9eb +0x913:  mov    %ecx,%edx
0840b9ed +0x915:  sub    %eax,%edx
0840b9ef +0x917:  mov    %edx,%eax
0840b9f1 +0x919:  test   %eax,%eax
0840b9f3 +0x91b:  je     0840ba5e <+0x986>
0840b9f5 +0x91d:  mov    -0x150(%ebp),%eax
0840b9fb +0x923:  test   %eax,%eax
0840b9fd +0x925:  je     0840ba5e <+0x986>
0840b9ff +0x927:  mov    0xc(%ebp),%eax
0840ba02 +0x92a:  mov    0x4(%eax),%ebx
0840ba05 +0x92d:  movl   $0x5,0xc(%esp)
0840ba0d +0x935:  movl   $0x2579,0x8(%esp)
0840ba15 +0x93d:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840ba1d +0x945:  lea    -0x84(%ebp),%eax
0840ba23 +0x94b:  mov    %eax,(%esp)
0840ba26 +0x94e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840ba2b +0x953:  mov    -0x30(%ebp),%eax
0840ba2e +0x956:  mov    %eax,0x10(%esp)
0840ba32 +0x95a:  movl   $0x4a58,0xc(%esp)
0840ba3a +0x962:  mov    %ebx,0x8(%esp)
0840ba3e +0x966:  movl   $"incorrect inventory size charac_no(%d), inven, original_size(%d), db_size(%d)\n",0x4(%esp)
0840ba46 +0x96e:  lea    -0x84(%ebp),%eax
0840ba4c +0x974:  mov    %eax,(%esp)
0840ba4f +0x977:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840ba54 +0x97c:  mov    $0x0,%ebx
0840ba59 +0x981:  jmp    0840bd2d <+0xc55>
0840ba5e +0x986:  mov    -0x148(%ebp),%ecx
0840ba64 +0x98c:  mov    $0x4325c53f,%edx
0840ba69 +0x991:  mov    %ecx,%eax
0840ba6b +0x993:  mul    %edx
0840ba6d +0x995:  mov    %edx,%eax
0840ba6f +0x997:  shr    $0x4,%eax
0840ba72 +0x99a:  imul   $0x3d,%eax,%eax
0840ba75 +0x99d:  mov    %ecx,%edx
0840ba77 +0x99f:  sub    %eax,%edx
0840ba79 +0x9a1:  mov    %edx,%eax
0840ba7b +0x9a3:  test   %eax,%eax
0840ba7d +0x9a5:  je     0840bb65 <+0xa8d>
0840ba83 +0x9ab:  mov    -0x148(%ebp),%eax
0840ba89 +0x9b1:  test   %eax,%eax
0840ba8b +0x9b3:  je     0840bb65 <+0xa8d>
0840ba91 +0x9b9:  mov    0xc(%ebp),%eax
0840ba94 +0x9bc:  mov    0x4(%eax),%ebx
0840ba97 +0x9bf:  movl   $0x5,0xc(%esp)
0840ba9f +0x9c7:  movl   $0x2588,0x8(%esp)
0840baa7 +0x9cf:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840baaf +0x9d7:  lea    -0x74(%ebp),%eax
0840bab2 +0x9da:  mov    %eax,(%esp)
0840bab5 +0x9dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840baba +0x9e2:  mov    -0x28(%ebp),%eax
0840babd +0x9e5:  mov    %eax,0x10(%esp)
0840bac1 +0x9e9:  movl   $0x4a58,0xc(%esp)
0840bac9 +0x9f1:  mov    %ebx,0x8(%esp)
0840bacd +0x9f5:  movl   $"incorrect inventory size charac_no(%d), creature, original_size(%d), db_size(%d)\n",0x4(%esp)
0840bad5 +0x9fd:  lea    -0x74(%ebp),%eax
0840bad8 +0xa00:  mov    %eax,(%esp)
0840badb +0xa03:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840bae0 +0xa08:  mov    $0x0,%ebx
0840bae5 +0xa0d:  jmp    0840bd2d <+0xc55>
0840baea +0xa12:  cmp    $0x1,%edx
0840baed +0xa15:  je     0840baf7 <+0xa1f>
0840baef +0xa17:  mov    %eax,(%esp)
0840baf2 +0xa1a:  call   08ae3750 <_Unwind_Resume>
0840baf7 +0xa1f:  mov    %eax,(%esp)
0840bafa +0xa22:  call   08725ce0 <__cxa_begin_catch>
0840baff +0xa27:  mov    (%eax),%eax
0840bb01 +0xa29:  mov    %eax,-0x1c(%ebp)
0840bb04 +0xa2c:  mov    0xc(%ebp),%eax
0840bb07 +0xa2f:  mov    0x4(%eax),%eax
0840bb0a +0xa32:  mov    -0x1c(%ebp),%edx
0840bb0d +0xa35:  mov    %edx,0x18(%esp)
0840bb11 +0xa39:  mov    %eax,0x14(%esp)
0840bb15 +0xa3d:  movl   $"Uncompress failed. charac_no(%d)(%d)",0x10(%esp)
0840bb1d +0xa45:  movl   $0x259c,0xc(%esp)
0840bb25 +0xa4d:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x8(%esp)
0840bb2d +0xa55:  movl   $"DBThread.cpp",0x4(%esp)
0840bb35 +0xa5d:  movl   $0x1,(%esp)
0840bb3c +0xa64:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0840bb41 +0xa69:  mov    $0x0,%ebx
0840bb46 +0xa6e:  call   08725c30 <__cxa_end_catch>
0840bb4b +0xa73:  jmp    0840bd2d <+0xc55>
0840bb50 +0xa78:  mov    %edx,%ebx
0840bb52 +0xa7a:  mov    %eax,%esi
0840bb54 +0xa7c:  call   08725c30 <__cxa_end_catch>
0840bb59 +0xa81:  mov    %esi,%eax
0840bb5b +0xa83:  mov    %ebx,%edx
0840bb5d +0xa85:  mov    %eax,(%esp)
0840bb60 +0xa88:  call   08ae3750 <_Unwind_Resume>
0840bb65 +0xa8d:  mov    0xc(%ebp),%eax
0840bb68 +0xa90:  mov    (%eax),%eax
0840bb6a +0xa92:  movl   $0x0,0x4(%esp)
0840bb72 +0xa9a:  mov    %eax,(%esp)
0840bb75 +0xa9d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840bb7a +0xaa2:  mov    %eax,0x8(%esp)
0840bb7e +0xaa6:  movl   $"seLect ifnull(min(avatar_coin),0) as avatar_coin from member_avatar_coin where m_id = %s",0x4(%esp)
0840bb86 +0xaae:  mov    -0x24(%ebp),%eax
0840bb89 +0xab1:  mov    %eax,(%esp)
0840bb8c +0xab4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840bb91 +0xab9:  movl   $0x1,0x4(%esp)
0840bb99 +0xac1:  mov    -0x24(%ebp),%eax
0840bb9c +0xac4:  mov    %eax,(%esp)
0840bb9f +0xac7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840bba4 +0xacc:  mov    %al,-0x31(%ebp)
0840bba7 +0xacf:  movzbl -0x31(%ebp),%eax
0840bbab +0xad3:  xor    $0x1,%eax
0840bbae +0xad6:  test   %al,%al
0840bbb0 +0xad8:  je     0840bc0d <+0xb35>
0840bbb2 +0xada:  mov    0xc(%ebp),%eax
0840bbb5 +0xadd:  mov    (%eax),%eax
0840bbb7 +0xadf:  movl   $0x0,0x4(%esp)
0840bbbf +0xae7:  mov    %eax,(%esp)
0840bbc2 +0xaea:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840bbc7 +0xaef:  mov    %eax,%ebx
0840bbc9 +0xaf1:  movl   $0x5,0xc(%esp)
0840bbd1 +0xaf9:  movl   $0x25a6,0x8(%esp)
0840bbd9 +0xb01:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840bbe1 +0xb09:  lea    -0x64(%ebp),%eax
0840bbe4 +0xb0c:  mov    %eax,(%esp)
0840bbe7 +0xb0f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840bbec +0xb14:  mov    %ebx,0x8(%esp)
0840bbf0 +0xb18:  movl   $"DB_LoadInventory::GetUserInven, avatar_coin exec ERROR m_id=%s",0x4(%esp)
0840bbf8 +0xb20:  lea    -0x64(%ebp),%eax
0840bbfb +0xb23:  mov    %eax,(%esp)
0840bbfe +0xb26:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840bc03 +0xb2b:  mov    $0x0,%ebx
0840bc08 +0xb30:  jmp    0840bd2d <+0xc55>
0840bc0d +0xb35:  mov    -0x24(%ebp),%eax
0840bc10 +0xb38:  mov    %eax,(%esp)
0840bc13 +0xb3b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840bc18 +0xb40:  mov    %al,-0x31(%ebp)
0840bc1b +0xb43:  movzbl -0x31(%ebp),%eax
0840bc1f +0xb47:  xor    $0x1,%eax
0840bc22 +0xb4a:  test   %al,%al
0840bc24 +0xb4c:  je     0840bc81 <+0xba9>
0840bc26 +0xb4e:  mov    0xc(%ebp),%eax
0840bc29 +0xb51:  mov    (%eax),%eax
0840bc2b +0xb53:  movl   $0x0,0x4(%esp)
0840bc33 +0xb5b:  mov    %eax,(%esp)
0840bc36 +0xb5e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840bc3b +0xb63:  mov    %eax,%ebx
0840bc3d +0xb65:  movl   $0x5,0xc(%esp)
0840bc45 +0xb6d:  movl   $0x25ac,0x8(%esp)
0840bc4d +0xb75:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840bc55 +0xb7d:  lea    -0x54(%ebp),%eax
0840bc58 +0xb80:  mov    %eax,(%esp)
0840bc5b +0xb83:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840bc60 +0xb88:  mov    %ebx,0x8(%esp)
0840bc64 +0xb8c:  movl   $"DB_LoadInventory::GetUserInven, avatar_coin fetch ERROR m_id=%s",0x4(%esp)
0840bc6c +0xb94:  lea    -0x54(%ebp),%eax
0840bc6f +0xb97:  mov    %eax,(%esp)
0840bc72 +0xb9a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840bc77 +0xb9f:  mov    $0x0,%ebx
0840bc7c +0xba4:  jmp    0840bd2d <+0xc55>
0840bc81 +0xba9:  mov    0xc(%ebp),%eax
0840bc84 +0xbac:  add    $&_ZL14gUnicodeBuffer+0xa254,%eax
0840bc89 +0xbb1:  mov    %eax,0x8(%esp)
0840bc8d +0xbb5:  movl   $0x0,0x4(%esp)
0840bc95 +0xbbd:  mov    -0x24(%ebp),%eax
0840bc98 +0xbc0:  mov    %eax,(%esp)
0840bc9b +0xbc3:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840bca0 +0xbc8:  mov    %al,-0x31(%ebp)
0840bca3 +0xbcb:  movzbl -0x31(%ebp),%eax
0840bca7 +0xbcf:  xor    $0x1,%eax
0840bcaa +0xbd2:  test   %al,%al
0840bcac +0xbd4:  je     0840bd06 <+0xc2e>
0840bcae +0xbd6:  mov    0xc(%ebp),%eax
0840bcb1 +0xbd9:  mov    (%eax),%eax
0840bcb3 +0xbdb:  movl   $0x0,0x4(%esp)
0840bcbb +0xbe3:  mov    %eax,(%esp)
0840bcbe +0xbe6:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840bcc3 +0xbeb:  mov    %eax,%ebx
0840bcc5 +0xbed:  movl   $0x5,0xc(%esp)
0840bccd +0xbf5:  movl   $0x25b2,0x8(%esp)
0840bcd5 +0xbfd:  movl   $&_ZZN16DB_LoadInventory12GetUserInvenEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0840bcdd +0xc05:  lea    -0x44(%ebp),%eax
0840bce0 +0xc08:  mov    %eax,(%esp)
0840bce3 +0xc0b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840bce8 +0xc10:  mov    %ebx,0x8(%esp)
0840bcec +0xc14:  movl   $"DB_LoadInventory::GetUserInven, get_uint(%u, pContext->avatar_coin) ERROR m_id=%s",0x4(%esp)
0840bcf4 +0xc1c:  lea    -0x44(%ebp),%eax
0840bcf7 +0xc1f:  mov    %eax,(%esp)
0840bcfa +0xc22:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840bcff +0xc27:  mov    $0x0,%ebx
0840bd04 +0xc2c:  jmp    0840bd2d <+0xc55>
0840bd06 +0xc2e:  mov    0xc(%ebp),%eax
0840bd09 +0xc31:  mov    0x8(%eax),%eax
0840bd0c +0xc34:  test   %eax,%eax
0840bd0e +0xc36:  je     0840bd28 <+0xc50>
0840bd10 +0xc38:  mov    0xc(%ebp),%eax
0840bd13 +0xc3b:  lea    0xc(%eax),%edx
0840bd16 +0xc3e:  mov    0xc(%ebp),%eax
0840bd19 +0xc41:  mov    0x8(%eax),%eax
0840bd1c +0xc44:  mov    %edx,0x4(%esp)
0840bd20 +0xc48:  mov    %eax,(%esp)
0840bd23 +0xc4b:  call   0840aba2 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA>  ; DB_LoadInventory::_GetTagCharacInven(unsigned int, TAG_CHARAC_INVEN_DATA*)
0840bd28 +0xc50:  mov    $0x1,%ebx
0840bd2d +0xc55:  mov    %ebx,%eax
0840bd2f +0xc57:  add    $0x695c,%esp
0840bd35 +0xc5d:  pop    %ebx
0840bd36 +0xc5e:  pop    %esi
0840bd37 +0xc5f:  pop    %edi
0840bd38 +0xc60:  pop    %ebp
0840bd39 +0xc61:  ret
```

## 反编译 C

```c
// DB_LoadInventory::GetUserInven @ 0x840b0d8

/* WARNING: Removing unreachable block (ram,0x0840b129) */
/* DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::GetUserInven(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  char local_6942 [18238];
  char local_2204 [7478];
  char local_4ce [890];
  uint local_154;
  uint local_150;
  uint local_14c;
  cMyTrace local_148 [16];
  cMyTrace local_138 [16];
  cMyTrace local_128 [16];
  cMyTrace local_118 [16];
  cMyTrace local_108 [16];
  cMyTrace local_f8 [16];
  cMyTrace local_e8 [16];
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [19];
  char local_35;
  uint local_34;
  uint local_30;
  uint local_2c;
  MySQL *local_28;
  int local_24;
  
  bVar8 = 0;
  pcVar4 = local_4ce;
  uVar5 = 0x37a;
  bVar7 = ((uint)pcVar4 & 2) != 0;
  if (bVar7) {
    local_4ce[0] = '\0';
    local_4ce[1] = '\0';
    pcVar4 = local_4ce + 2;
    uVar5 = 0x378;
  }
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (!bVar7) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
  }
  memset(local_6942,0,0x473e);
  pcVar4 = local_2204;
  for (iVar3 = 0x74d; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  local_14c = 0x1d36;
  local_150 = 0x37a;
  local_154 = 0x473e;
  local_34 = 0x473e;
  local_30 = 0x37a;
  local_2c = 0x1d36;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_28,
                   "seLect money,coin,inventory,equipslot,pay_coin,event_coin,creature,creature_flag,inventory_capacity from inventory where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_35 = MySQL::exec(local_28,true);
  if (local_35 == '\x01') {
    local_35 = MySQL::fetch(local_28);
    if (local_35 == '\x01') {
      local_35 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 0x4034));
      if (local_35 == '\x01') {
        local_35 = MySQL::get_uint(local_28,1,(uint *)(param_1 + 0x4038));
        if (local_35 == '\x01') {
          local_34 = MySQL::get_binary_length(local_28,2);
          local_35 = MySQL::get_binary(local_28,2,local_6942,local_154);
          if (local_35 == '\x01') {
            local_30 = MySQL::get_binary_length(local_28,3);
            local_35 = MySQL::get_binary(local_28,3,local_4ce,local_150);
            if (local_35 == '\x01') {
              local_35 = MySQL::get_uint(local_28,4,(uint *)(param_1 + 0x403c));
              if (local_35 == '\x01') {
                local_35 = MySQL::get_uint(local_28,5,(uint *)(param_1 + 0x4040));
                if (local_35 == '\x01') {
                  local_24 = 6;
                  local_2c = MySQL::get_binary_length(local_28,6);
                  iVar3 = local_24;
                  local_24 = local_24 + 1;
                  local_35 = MySQL::get_binary(local_28,iVar3,local_2204,local_14c);
                  iVar3 = local_24;
                  if (local_35 == '\x01') {
                    local_24 = local_24 + 1;
                    local_35 = MySQL::get_int(local_28,iVar3,(int *)(param_1 + 0x1287c));
                    iVar3 = local_24;
                    if (local_35 == '\x01') {
                      local_24 = local_24 + 1;
                      local_35 = MySQL::get_uint(local_28,iVar3,(uint *)(param_1 + 0x1533c));
                      if (local_35 == '\x01') {
                        if (local_150 < local_30) {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x255a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0840b7bd to 0840badf has its CatchHandler @ 0840baea */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        if (local_154 < local_34) {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x255c;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        if (local_14c < local_2c) {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x2563;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        cVar1 = uncompress_zip((char *)(param_1 + 0xa603),&local_150,local_4ce,
                                               local_30);
                        if (cVar1 != '\x01') {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x2565;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        cVar1 = uncompress_zip((char *)(param_1 + 0x5949),&local_154,local_6942,
                                               local_34);
                        if (cVar1 != '\x01') {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x2567;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        cVar1 = uncompress_zip((char *)(param_1 + 0x1102d),&local_14c,local_2204,
                                               local_2c);
                        if (cVar1 != '\x01') {
                          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
                          *puVar2 = 0x256e;
                    /* WARNING: Subroutine does not return */
                          __cxa_throw(puVar2,&unsigned_int::typeinfo,0);
                        }
                        if ((local_150 == (local_150 / 0x3d) * 0x3d) || (local_150 == 0)) {
                          if ((local_154 == (local_154 / 0x3d) * 0x3d) || (local_154 == 0)) {
                            if ((local_14c == (local_14c / 0x3d) * 0x3d) || (local_14c == 0)) {
                              uVar6 = NumberToString(*(uint *)param_1,0);
                              MySQL::set_query(local_28,
                                               "seLect ifnull(min(avatar_coin),0) as avatar_coin from member_avatar_coin where m_id = %s"
                                               ,uVar6);
                              local_35 = MySQL::exec(local_28,true);
                              if (local_35 == '\x01') {
                                local_35 = MySQL::fetch(local_28);
                                if (local_35 == '\x01') {
                                  local_35 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 0x14780))
                                  ;
                                  if (local_35 == '\x01') {
                                    if (*(int *)(param_1 + 8) != 0) {
                                      _GetTagCharacInven(*(uint *)(param_1 + 8),
                                                         (TAG_CHARAC_INVEN_DATA *)(param_1 + 0xc));
                                    }
                                    uVar6 = 1;
                                  }
                                  else {
                                    uVar6 = NumberToString(*(uint *)param_1,0);
                                    cMyTrace::cMyTrace(local_48,
                                                  "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                  ,0x25b2,5);
                                    cMyTrace::operator()
                                              (local_48,
                                               "DB_LoadInventory::GetUserInven, get_uint(%u, pContext->avatar_coin) ERROR m_id=%s"
                                               ,uVar6);
                                    uVar6 = 0;
                                  }
                                }
                                else {
                                  uVar6 = NumberToString(*(uint *)param_1,0);
                                  cMyTrace::cMyTrace(local_58,
                                                  "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                  ,0x25ac,5);
                                  cMyTrace::operator()
                                            (local_58,
                                             "DB_LoadInventory::GetUserInven, avatar_coin fetch ERROR m_id=%s"
                                             ,uVar6);
                                  uVar6 = 0;
                                }
                              }
                              else {
                                uVar6 = NumberToString(*(uint *)param_1,0);
                                cMyTrace::cMyTrace(local_68,
                                                  "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                  ,0x25a6,5);
                                cMyTrace::operator()
                                          (local_68,
                                           "DB_LoadInventory::GetUserInven, avatar_coin exec ERROR m_id=%s"
                                           ,uVar6);
                                uVar6 = 0;
                              }
                            }
                            else {
                              uVar6 = *(undefined4 *)(param_1 + 4);
                              cMyTrace::cMyTrace(local_78,
                                                 "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                                 ,0x2588,5);
                              cMyTrace::operator()
                                        (local_78,
                                         "incorrect inventory size charac_no(%d), creature, original_size(%d), db_size(%d)\n"
                                         ,uVar6,0x4a58,local_2c);
                              uVar6 = 0;
                            }
                          }
                          else {
                            uVar6 = *(undefined4 *)(param_1 + 4);
                            cMyTrace::cMyTrace(local_88,
                                               "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                               ,0x2579,5);
                            cMyTrace::operator()
                                      (local_88,
                                       "incorrect inventory size charac_no(%d), inven, original_size(%d), db_size(%d)\n"
                                       ,uVar6,0x4a58,local_34);
                            uVar6 = 0;
                          }
                        }
                        else {
                          uVar6 = *(undefined4 *)(param_1 + 4);
                          cMyTrace::cMyTrace(local_98,
                                             "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                             ,0x2573,5);
                          cMyTrace::operator()
                                    (local_98,
                                     "incorrect inventory size charac_no(%d), equip, original_size(%d), db_size(%d)\n"
                                     ,uVar6,0x53e,local_30);
                          uVar6 = 0;
                        }
                      }
                      else {
                        uVar6 = *(undefined4 *)(param_1 + 4);
                        cMyTrace::cMyTrace(local_a8,
                                           "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                           ,0x253a,5);
                        cMyTrace::operator()
                                  (local_a8,
                                   "DB_LoadInventory::GetUserInven, get_uint(13) ERROR charac_no=%u"
                                   ,uVar6);
                        uVar6 = 0;
                      }
                    }
                    else {
                      uVar6 = *(undefined4 *)(param_1 + 4);
                      cMyTrace::cMyTrace(local_b8,
                                         "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                                         0x2522,5);
                      cMyTrace::operator()
                                (local_b8,
                                 "DB_LoadInventory::GetUserInven, get_uint(9) ERROR charac_no=%u",
                                 uVar6);
                      uVar6 = 0;
                    }
                  }
                  else {
                    uVar6 = *(undefined4 *)(param_1 + 4);
                    cMyTrace::cMyTrace(local_c8,
                                       "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                                       0x251b,5);
                    cMyTrace::operator()
                              (local_c8,"DB_LoadCreature, get_binary(8) ERROR charac_no=%u",uVar6);
                    uVar6 = 0;
                  }
                }
                else {
                  uVar6 = *(undefined4 *)(param_1 + 4);
                  cMyTrace::cMyTrace(local_d8,
                                     "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                                     0x24ff,5);
                  cMyTrace::operator()
                            (local_d8,
                             "DB_LoadInventory::GetUserInven, get_uint(5) ERROR charac_no=%u",uVar6)
                  ;
                  uVar6 = 0;
                }
              }
              else {
                uVar6 = *(undefined4 *)(param_1 + 4);
                cMyTrace::cMyTrace(local_e8,
                                   "bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",0x24f7
                                   ,5);
                cMyTrace::operator()
                          (local_e8,"DB_LoadInventory::GetUserInven, get_uint(4) ERROR charac_no=%u"
                           ,uVar6);
                uVar6 = 0;
              }
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_f8,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)"
                                 ,0x24f0,5);
              cMyTrace::operator()
                        (local_f8,"DB_LoadInventory::GetUserInven, get_binary(3) ERROR charac_no=%u"
                         ,uVar6);
              uVar6 = 0;
            }
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_108,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                               0x24e8,5);
            cMyTrace::operator()
                      (local_108,"DB_LoadInventory::GetUserInven, get_binary(2) ERROR charac_no=%u",
                       uVar6);
            uVar6 = 0;
          }
        }
        else {
          uVar6 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_118,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                             0x24e0,5);
          cMyTrace::operator()
                    (local_118,
                     "DB_LoadInventory::GetUserInven, get_uint(1, pContext->coin) ERROR charac_no=%u"
                     ,uVar6);
          uVar6 = 0;
        }
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_128,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",
                           0x24d9,5);
        cMyTrace::operator()
                  (local_128,
                   "DB_LoadInventory::GetUserInven, get_uint(0, pContext->money) ERROR charac_no=%u"
                   ,uVar6);
        uVar6 = 0;
      }
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_138,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",0x24d2
                         ,5);
      cMyTrace::operator()
                (local_138,"DB_LoadInventory::GetUserInven, fetch ERROR charac_no=%u",uVar6);
      uVar6 = 0;
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_148,"bool DB_LoadInventory::GetUserInven(SIG_LOAD_INVENTORY*)",0x24cb,5
                      );
    cMyTrace::operator()(local_148,"DB_LoadInventory::GetUserInven, exec ERROR charac_no=%u",uVar6);
    uVar6 = 0;
  }
  return uVar6;
}
```
