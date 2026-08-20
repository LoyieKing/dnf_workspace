# _GetUserAvatar

`_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri`

`DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840be8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840be8a  _ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri
#           DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)
# range [0x0840be8a, 0x0840ca73]
0840be8a +0x000:  push   %ebp
0840be8b +0x001:  mov    %esp,%ebp
0840be8d +0x003:  push   %esi
0840be8e +0x004:  push   %ebx
0840be8f +0x005:  sub    $0x1a0,%esp
0840be95 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840be9a +0x010:  movl   $0x0,0x8(%esp)
0840bea2 +0x018:  movl   $0x3,0x4(%esp)
0840beaa +0x020:  mov    %eax,(%esp)
0840bead +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840beb2 +0x028:  mov    %eax,-0x18(%ebp)
0840beb5 +0x02b:  movl   $0x73,0xc(%esp)
0840bebd +0x033:  mov    0x8(%ebp),%eax
0840bec0 +0x036:  mov    %eax,0x8(%esp)
0840bec4 +0x03a:  movl   $"seLect slot,it_id,unix_timestamp(expire_date),ability_no,ipg_agency_no,unix_timestamp(reg_date),ui_id,clear_avatar_id,jewel_socket,item_lock_key, hidden_option, emblem_endurance, color1, color2, trade_restrict from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d",0x4(%esp)
0840becc +0x042:  mov    -0x18(%ebp),%eax
0840becf +0x045:  mov    %eax,(%esp)
0840bed2 +0x048:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840bed7 +0x04d:  movl   $0x1,0x4(%esp)
0840bedf +0x055:  mov    -0x18(%ebp),%eax
0840bee2 +0x058:  mov    %eax,(%esp)
0840bee5 +0x05b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840beea +0x060:  mov    %al,-0x19(%ebp)
0840beed +0x063:  movzbl -0x19(%ebp),%eax
0840bef1 +0x067:  xor    $0x1,%eax
0840bef4 +0x06a:  test   %al,%al
0840bef6 +0x06c:  je     0840bf45 <+0xbb>
0840bef8 +0x06e:  movl   $0x5,0xc(%esp)
0840bf00 +0x076:  movl   $0x26dc,0x8(%esp)
0840bf08 +0x07e:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840bf10 +0x086:  lea    -0x12c(%ebp),%eax
0840bf16 +0x08c:  mov    %eax,(%esp)
0840bf19 +0x08f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840bf1e +0x094:  mov    0x8(%ebp),%eax
0840bf21 +0x097:  mov    %eax,0x8(%esp)
0840bf25 +0x09b:  movl   $"DB_LoadInventory::GetUserAvatar, exec() ERROR charac_no=%u",0x4(%esp)
0840bf2d +0x0a3:  lea    -0x12c(%ebp),%eax
0840bf33 +0x0a9:  mov    %eax,(%esp)
0840bf36 +0x0ac:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840bf3b +0x0b1:  mov    $0x0,%eax
0840bf40 +0x0b6:  jmp    0840ca6a <+0xbe0>
0840bf45 +0x0bb:  movl   $0x0,-0x138(%ebp)
0840bf4f +0x0c5:  movl   $0x0,-0x13c(%ebp)
0840bf59 +0x0cf:  lea    -0x155(%ebp),%eax
0840bf5f +0x0d5:  mov    $0x19,%edx
0840bf64 +0x0da:  mov    $0x0,%ecx
0840bf69 +0x0df:  mov    %eax,%ebx
0840bf6b +0x0e1:  and    $0x1,%ebx
0840bf6e +0x0e4:  test   %ebx,%ebx
0840bf70 +0x0e6:  je     0840bf7a <+0xf0>
0840bf72 +0x0e8:  mov    %cl,(%eax)
0840bf74 +0x0ea:  add    $0x1,%eax
0840bf77 +0x0ed:  sub    $0x1,%edx
0840bf7a +0x0f0:  mov    %eax,%ebx
0840bf7c +0x0f2:  and    $0x2,%ebx
0840bf7f +0x0f5:  test   %ebx,%ebx
0840bf81 +0x0f7:  je     0840bf8c <+0x102>
0840bf83 +0x0f9:  mov    %cx,(%eax)
0840bf86 +0x0fc:  add    $0x2,%eax
0840bf89 +0x0ff:  sub    $0x2,%edx
0840bf8c +0x102:  mov    %edx,%esi
0840bf8e +0x104:  and    $0xfffffffc,%esi
0840bf91 +0x107:  mov    $0x0,%ebx
0840bf96 +0x10c:  mov    %ecx,(%eax,%ebx,1)
0840bf99 +0x10f:  add    $0x4,%ebx
0840bf9c +0x112:  cmp    %esi,%ebx
0840bf9e +0x114:  jb     0840bf96 <+0x10c>
0840bfa0 +0x116:  add    %ebx,%eax
0840bfa2 +0x118:  mov    %edx,%ebx
0840bfa4 +0x11a:  and    $0x2,%ebx
0840bfa7 +0x11d:  test   %ebx,%ebx
0840bfa9 +0x11f:  je     0840bfb1 <+0x127>
0840bfab +0x121:  mov    %cx,(%eax)
0840bfae +0x124:  add    $0x2,%eax
0840bfb1 +0x127:  and    $0x1,%edx
0840bfb4 +0x12a:  test   %edx,%edx
0840bfb6 +0x12c:  je     0840bfbd <+0x133>
0840bfb8 +0x12e:  mov    %cl,(%eax)
0840bfba +0x130:  add    $0x1,%eax
0840bfbd +0x133:  movl   $0x0,-0x15c(%ebp)
0840bfc7 +0x13d:  movl   $0x0,-0x160(%ebp)
0840bfd1 +0x147:  mov    -0x18(%ebp),%eax
0840bfd4 +0x14a:  mov    %eax,(%esp)
0840bfd7 +0x14d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0840bfdc +0x152:  mov    %eax,%edx
0840bfde +0x154:  mov    0x18(%ebp),%eax
0840bfe1 +0x157:  mov    %edx,(%eax)
0840bfe3 +0x159:  movl   $0x0,-0x164(%ebp)
0840bfed +0x163:  movl   $0x0,-0x14(%ebp)
0840bff4 +0x16a:  jmp    0840ca4c <+0xbc2>
0840bff9 +0x16f:  mov    -0x18(%ebp),%eax
0840bffc +0x172:  mov    %eax,(%esp)
0840bfff +0x175:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840c004 +0x17a:  mov    %al,-0x19(%ebp)
0840c007 +0x17d:  movzbl -0x19(%ebp),%eax
0840c00b +0x181:  xor    $0x1,%eax
0840c00e +0x184:  test   %al,%al
0840c010 +0x186:  je     0840c061 <+0x1d7>
0840c012 +0x188:  movl   $0x5,0xc(%esp)
0840c01a +0x190:  movl   $0x26f3,0x8(%esp)
0840c022 +0x198:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c02a +0x1a0:  lea    -0x11c(%ebp),%eax
0840c030 +0x1a6:  mov    %eax,(%esp)
0840c033 +0x1a9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c038 +0x1ae:  mov    -0x14(%ebp),%eax
0840c03b +0x1b1:  mov    %eax,0xc(%esp)
0840c03f +0x1b5:  mov    0x8(%ebp),%eax
0840c042 +0x1b8:  mov    %eax,0x8(%esp)
0840c046 +0x1bc:  movl   $"DB_LoadInventory::GetUserAvatar, fetch() ERROR charac_no=%u,%d",0x4(%esp)
0840c04e +0x1c4:  lea    -0x11c(%ebp),%eax
0840c054 +0x1ca:  mov    %eax,(%esp)
0840c057 +0x1cd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c05c +0x1d2:  jmp    0840ca65 <+0xbdb>
0840c061 +0x1d7:  lea    -0x130(%ebp),%eax
0840c067 +0x1dd:  mov    %eax,0x8(%esp)
0840c06b +0x1e1:  movl   $0x0,0x4(%esp)
0840c073 +0x1e9:  mov    -0x18(%ebp),%eax
0840c076 +0x1ec:  mov    %eax,(%esp)
0840c079 +0x1ef:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840c07e +0x1f4:  mov    %al,-0x19(%ebp)
0840c081 +0x1f7:  movzbl -0x19(%ebp),%eax
0840c085 +0x1fb:  xor    $0x1,%eax
0840c088 +0x1fe:  test   %al,%al
0840c08a +0x200:  je     0840c0d9 <+0x24f>
0840c08c +0x202:  movl   $0x5,0xc(%esp)
0840c094 +0x20a:  movl   $0x26fa,0x8(%esp)
0840c09c +0x212:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c0a4 +0x21a:  lea    -0x10c(%ebp),%eax
0840c0aa +0x220:  mov    %eax,(%esp)
0840c0ad +0x223:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c0b2 +0x228:  mov    0x8(%ebp),%eax
0840c0b5 +0x22b:  mov    %eax,0x8(%esp)
0840c0b9 +0x22f:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(0) ERROR charac_no=%u",0x4(%esp)
0840c0c1 +0x237:  lea    -0x10c(%ebp),%eax
0840c0c7 +0x23d:  mov    %eax,(%esp)
0840c0ca +0x240:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c0cf +0x245:  mov    $0x0,%eax
0840c0d4 +0x24a:  jmp    0840ca6a <+0xbe0>
0840c0d9 +0x24f:  lea    -0x134(%ebp),%eax
0840c0df +0x255:  mov    %eax,0x8(%esp)
0840c0e3 +0x259:  movl   $0x1,0x4(%esp)
0840c0eb +0x261:  mov    -0x18(%ebp),%eax
0840c0ee +0x264:  mov    %eax,(%esp)
0840c0f1 +0x267:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840c0f6 +0x26c:  mov    %al,-0x19(%ebp)
0840c0f9 +0x26f:  movzbl -0x19(%ebp),%eax
0840c0fd +0x273:  xor    $0x1,%eax
0840c100 +0x276:  test   %al,%al
0840c102 +0x278:  je     0840c151 <+0x2c7>
0840c104 +0x27a:  movl   $0x5,0xc(%esp)
0840c10c +0x282:  movl   $0x2701,0x8(%esp)
0840c114 +0x28a:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c11c +0x292:  lea    -0xfc(%ebp),%eax
0840c122 +0x298:  mov    %eax,(%esp)
0840c125 +0x29b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c12a +0x2a0:  mov    0x8(%ebp),%eax
0840c12d +0x2a3:  mov    %eax,0x8(%esp)
0840c131 +0x2a7:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(1) ERROR charac_no=%u",0x4(%esp)
0840c139 +0x2af:  lea    -0xfc(%ebp),%eax
0840c13f +0x2b5:  mov    %eax,(%esp)
0840c142 +0x2b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c147 +0x2bd:  mov    $0x0,%eax
0840c14c +0x2c2:  jmp    0840ca6a <+0xbe0>
0840c151 +0x2c7:  lea    -0x138(%ebp),%eax
0840c157 +0x2cd:  mov    %eax,0x8(%esp)
0840c15b +0x2d1:  movl   $0x2,0x4(%esp)
0840c163 +0x2d9:  mov    -0x18(%ebp),%eax
0840c166 +0x2dc:  mov    %eax,(%esp)
0840c169 +0x2df:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840c16e +0x2e4:  mov    %al,-0x19(%ebp)
0840c171 +0x2e7:  movzbl -0x19(%ebp),%eax
0840c175 +0x2eb:  xor    $0x1,%eax
0840c178 +0x2ee:  test   %al,%al
0840c17a +0x2f0:  je     0840c1c9 <+0x33f>
0840c17c +0x2f2:  movl   $0x5,0xc(%esp)
0840c184 +0x2fa:  movl   $0x2708,0x8(%esp)
0840c18c +0x302:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c194 +0x30a:  lea    -0xec(%ebp),%eax
0840c19a +0x310:  mov    %eax,(%esp)
0840c19d +0x313:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c1a2 +0x318:  mov    0x8(%ebp),%eax
0840c1a5 +0x31b:  mov    %eax,0x8(%esp)
0840c1a9 +0x31f:  movl   $"DB_LoadInventory::GetUserAvatar, get_uint(2) ERROR charac_no=%u",0x4(%esp)
0840c1b1 +0x327:  lea    -0xec(%ebp),%eax
0840c1b7 +0x32d:  mov    %eax,(%esp)
0840c1ba +0x330:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c1bf +0x335:  mov    $0x0,%eax
0840c1c4 +0x33a:  jmp    0840ca6a <+0xbe0>
0840c1c9 +0x33f:  lea    -0x164(%ebp),%eax
0840c1cf +0x345:  mov    %eax,0x8(%esp)
0840c1d3 +0x349:  movl   $0x3,0x4(%esp)
0840c1db +0x351:  mov    -0x18(%ebp),%eax
0840c1de +0x354:  mov    %eax,(%esp)
0840c1e1 +0x357:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840c1e6 +0x35c:  mov    %al,-0x19(%ebp)
0840c1e9 +0x35f:  movzbl -0x19(%ebp),%eax
0840c1ed +0x363:  xor    $0x1,%eax
0840c1f0 +0x366:  test   %al,%al
0840c1f2 +0x368:  je     0840c241 <+0x3b7>
0840c1f4 +0x36a:  movl   $0x5,0xc(%esp)
0840c1fc +0x372:  movl   $0x270f,0x8(%esp)
0840c204 +0x37a:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c20c +0x382:  lea    -0xdc(%ebp),%eax
0840c212 +0x388:  mov    %eax,(%esp)
0840c215 +0x38b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c21a +0x390:  mov    0x8(%ebp),%eax
0840c21d +0x393:  mov    %eax,0x8(%esp)
0840c221 +0x397:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(3) ERROR charac_no=%u",0x4(%esp)
0840c229 +0x39f:  lea    -0xdc(%ebp),%eax
0840c22f +0x3a5:  mov    %eax,(%esp)
0840c232 +0x3a8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c237 +0x3ad:  mov    $0x0,%eax
0840c23c +0x3b2:  jmp    0840ca6a <+0xbe0>
0840c241 +0x3b7:  movl   $0x18,0xc(%esp)
0840c249 +0x3bf:  lea    -0x155(%ebp),%eax
0840c24f +0x3c5:  mov    %eax,0x8(%esp)
0840c253 +0x3c9:  movl   $0x4,0x4(%esp)
0840c25b +0x3d1:  mov    -0x18(%ebp),%eax
0840c25e +0x3d4:  mov    %eax,(%esp)
0840c261 +0x3d7:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0840c266 +0x3dc:  xor    $0x1,%eax
0840c269 +0x3df:  test   %al,%al
0840c26b +0x3e1:  je     0840c2ba <+0x430>
0840c26d +0x3e3:  movl   $0x5,0xc(%esp)
0840c275 +0x3eb:  movl   $0x2727,0x8(%esp)
0840c27d +0x3f3:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c285 +0x3fb:  lea    -0xcc(%ebp),%eax
0840c28b +0x401:  mov    %eax,(%esp)
0840c28e +0x404:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c293 +0x409:  mov    0x8(%ebp),%eax
0840c296 +0x40c:  mov    %eax,0x8(%esp)
0840c29a +0x410:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(4) ERROR charac_no=%u",0x4(%esp)
0840c2a2 +0x418:  lea    -0xcc(%ebp),%eax
0840c2a8 +0x41e:  mov    %eax,(%esp)
0840c2ab +0x421:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c2b0 +0x426:  mov    $0x0,%eax
0840c2b5 +0x42b:  jmp    0840ca6a <+0xbe0>
0840c2ba +0x430:  lea    -0x13c(%ebp),%eax
0840c2c0 +0x436:  mov    %eax,0x8(%esp)
0840c2c4 +0x43a:  movl   $0x5,0x4(%esp)
0840c2cc +0x442:  mov    -0x18(%ebp),%eax
0840c2cf +0x445:  mov    %eax,(%esp)
0840c2d2 +0x448:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840c2d7 +0x44d:  xor    $0x1,%eax
0840c2da +0x450:  test   %al,%al
0840c2dc +0x452:  je     0840c32b <+0x4a1>
0840c2de +0x454:  movl   $0x5,0xc(%esp)
0840c2e6 +0x45c:  movl   $0x272e,0x8(%esp)
0840c2ee +0x464:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c2f6 +0x46c:  lea    -0xbc(%ebp),%eax
0840c2fc +0x472:  mov    %eax,(%esp)
0840c2ff +0x475:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c304 +0x47a:  mov    0x8(%ebp),%eax
0840c307 +0x47d:  mov    %eax,0x8(%esp)
0840c30b +0x481:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(5) ERROR charac_no=%u",0x4(%esp)
0840c313 +0x489:  lea    -0xbc(%ebp),%eax
0840c319 +0x48f:  mov    %eax,(%esp)
0840c31c +0x492:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c321 +0x497:  mov    $0x0,%eax
0840c326 +0x49c:  jmp    0840ca6a <+0xbe0>
0840c32b +0x4a1:  lea    -0x15c(%ebp),%eax
0840c331 +0x4a7:  mov    %eax,0x8(%esp)
0840c335 +0x4ab:  movl   $0x6,0x4(%esp)
0840c33d +0x4b3:  mov    -0x18(%ebp),%eax
0840c340 +0x4b6:  mov    %eax,(%esp)
0840c343 +0x4b9:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840c348 +0x4be:  xor    $0x1,%eax
0840c34b +0x4c1:  test   %al,%al
0840c34d +0x4c3:  je     0840c39c <+0x512>
0840c34f +0x4c5:  movl   $0x5,0xc(%esp)
0840c357 +0x4cd:  movl   $0x2734,0x8(%esp)
0840c35f +0x4d5:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c367 +0x4dd:  lea    -0xac(%ebp),%eax
0840c36d +0x4e3:  mov    %eax,(%esp)
0840c370 +0x4e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c375 +0x4eb:  mov    0x8(%ebp),%eax
0840c378 +0x4ee:  mov    %eax,0x8(%esp)
0840c37c +0x4f2:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",0x4(%esp)
0840c384 +0x4fa:  lea    -0xac(%ebp),%eax
0840c38a +0x500:  mov    %eax,(%esp)
0840c38d +0x503:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c392 +0x508:  mov    $0x0,%eax
0840c397 +0x50d:  jmp    0840ca6a <+0xbe0>
0840c39c +0x512:  movl   $0x7,-0x10(%ebp)
0840c3a3 +0x519:  mov    -0x10(%ebp),%eax
0840c3a6 +0x51c:  addl   $0x1,-0x10(%ebp)
0840c3aa +0x520:  lea    -0x160(%ebp),%edx
0840c3b0 +0x526:  mov    %edx,0x8(%esp)
0840c3b4 +0x52a:  mov    %eax,0x4(%esp)
0840c3b8 +0x52e:  mov    -0x18(%ebp),%eax
0840c3bb +0x531:  mov    %eax,(%esp)
0840c3be +0x534:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840c3c3 +0x539:  xor    $0x1,%eax
0840c3c6 +0x53c:  test   %al,%al
0840c3c8 +0x53e:  je     0840c417 <+0x58d>
0840c3ca +0x540:  movl   $0x5,0xc(%esp)
0840c3d2 +0x548:  movl   $0x273b,0x8(%esp)
0840c3da +0x550:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c3e2 +0x558:  lea    -0x9c(%ebp),%eax
0840c3e8 +0x55e:  mov    %eax,(%esp)
0840c3eb +0x561:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c3f0 +0x566:  mov    0x8(%ebp),%eax
0840c3f3 +0x569:  mov    %eax,0x8(%esp)
0840c3f7 +0x56d:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",0x4(%esp)
0840c3ff +0x575:  lea    -0x9c(%ebp),%eax
0840c405 +0x57b:  mov    %eax,(%esp)
0840c408 +0x57e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c40d +0x583:  mov    $0x0,%eax
0840c412 +0x588:  jmp    0840ca6a <+0xbe0>
0840c417 +0x58d:  lea    -0x182(%ebp),%eax
0840c41d +0x593:  mov    %eax,(%esp)
0840c420 +0x596:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0840c425 +0x59b:  mov    -0x10(%ebp),%eax
0840c428 +0x59e:  addl   $0x1,-0x10(%ebp)
0840c42c +0x5a2:  movl   $0x1e,0xc(%esp)
0840c434 +0x5aa:  lea    -0x182(%ebp),%edx
0840c43a +0x5b0:  mov    %edx,0x8(%esp)
0840c43e +0x5b4:  mov    %eax,0x4(%esp)
0840c442 +0x5b8:  mov    -0x18(%ebp),%eax
0840c445 +0x5bb:  mov    %eax,(%esp)
0840c448 +0x5be:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840c44d +0x5c3:  xor    $0x1,%eax
0840c450 +0x5c6:  test   %al,%al
0840c452 +0x5c8:  je     0840c4a1 <+0x617>
0840c454 +0x5ca:  movl   $0x5,0xc(%esp)
0840c45c +0x5d2:  movl   $0x2742,0x8(%esp)
0840c464 +0x5da:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c46c +0x5e2:  lea    -0x8c(%ebp),%eax
0840c472 +0x5e8:  mov    %eax,(%esp)
0840c475 +0x5eb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c47a +0x5f0:  mov    0x8(%ebp),%eax
0840c47d +0x5f3:  mov    %eax,0x8(%esp)
0840c481 +0x5f7:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",0x4(%esp)
0840c489 +0x5ff:  lea    -0x8c(%ebp),%eax
0840c48f +0x605:  mov    %eax,(%esp)
0840c492 +0x608:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c497 +0x60d:  mov    $0x0,%eax
0840c49c +0x612:  jmp    0840ca6a <+0xbe0>
0840c4a1 +0x617:  movb   $0x0,-0x183(%ebp)
0840c4a8 +0x61e:  mov    -0x10(%ebp),%eax
0840c4ab +0x621:  addl   $0x1,-0x10(%ebp)
0840c4af +0x625:  lea    -0x183(%ebp),%edx
0840c4b5 +0x62b:  mov    %edx,0x8(%esp)
0840c4b9 +0x62f:  mov    %eax,0x4(%esp)
0840c4bd +0x633:  mov    -0x18(%ebp),%eax
0840c4c0 +0x636:  mov    %eax,(%esp)
0840c4c3 +0x639:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
0840c4c8 +0x63e:  xor    $0x1,%eax
0840c4cb +0x641:  test   %al,%al
0840c4cd +0x643:  je     0840c516 <+0x68c>
0840c4cf +0x645:  movl   $0x5,0xc(%esp)
0840c4d7 +0x64d:  movl   $0x2749,0x8(%esp)
0840c4df +0x655:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c4e7 +0x65d:  lea    -0x7c(%ebp),%eax
0840c4ea +0x660:  mov    %eax,(%esp)
0840c4ed +0x663:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c4f2 +0x668:  mov    0x8(%ebp),%eax
0840c4f5 +0x66b:  mov    %eax,0x8(%esp)
0840c4f9 +0x66f:  movl   $"DB_LoadInventory::GetUserAvatar, get_ubyte(8) ERROR charac_no=%u",0x4(%esp)
0840c501 +0x677:  lea    -0x7c(%ebp),%eax
0840c504 +0x67a:  mov    %eax,(%esp)
0840c507 +0x67d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c50c +0x682:  mov    $0x0,%eax
0840c511 +0x687:  jmp    0840ca6a <+0xbe0>
0840c516 +0x68c:  movl   $0x0,-0x188(%ebp)
0840c520 +0x696:  mov    -0x10(%ebp),%eax
0840c523 +0x699:  addl   $0x1,-0x10(%ebp)
0840c527 +0x69d:  lea    -0x188(%ebp),%edx
0840c52d +0x6a3:  mov    %edx,0x8(%esp)
0840c531 +0x6a7:  mov    %eax,0x4(%esp)
0840c535 +0x6ab:  mov    -0x18(%ebp),%eax
0840c538 +0x6ae:  mov    %eax,(%esp)
0840c53b +0x6b1:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840c540 +0x6b6:  xor    $0x1,%eax
0840c543 +0x6b9:  test   %al,%al
0840c545 +0x6bb:  je     0840c598 <+0x70e>
0840c547 +0x6bd:  mov    -0x10(%ebp),%eax
0840c54a +0x6c0:  lea    -0x1(%eax),%ebx
0840c54d +0x6c3:  movl   $0x5,0xc(%esp)
0840c555 +0x6cb:  movl   $0x275c,0x8(%esp)
0840c55d +0x6d3:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c565 +0x6db:  lea    -0x6c(%ebp),%eax
0840c568 +0x6de:  mov    %eax,(%esp)
0840c56b +0x6e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c570 +0x6e6:  mov    0x8(%ebp),%eax
0840c573 +0x6e9:  mov    %eax,0xc(%esp)
0840c577 +0x6ed:  mov    %ebx,0x8(%esp)
0840c57b +0x6f1:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(%d) ERROR charac_no=%u",0x4(%esp)
0840c583 +0x6f9:  lea    -0x6c(%ebp),%eax
0840c586 +0x6fc:  mov    %eax,(%esp)
0840c589 +0x6ff:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c58e +0x704:  mov    $0x0,%eax
0840c593 +0x709:  jmp    0840ca6a <+0xbe0>
0840c598 +0x70e:  movl   $0x0,-0x18c(%ebp)
0840c5a2 +0x718:  mov    -0x10(%ebp),%eax
0840c5a5 +0x71b:  addl   $0x1,-0x10(%ebp)
0840c5a9 +0x71f:  lea    -0x18c(%ebp),%edx
0840c5af +0x725:  mov    %edx,0x8(%esp)
0840c5b3 +0x729:  mov    %eax,0x4(%esp)
0840c5b7 +0x72d:  mov    -0x18(%ebp),%eax
0840c5ba +0x730:  mov    %eax,(%esp)
0840c5bd +0x733:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840c5c2 +0x738:  xor    $0x1,%eax
0840c5c5 +0x73b:  test   %al,%al
0840c5c7 +0x73d:  je     0840c61a <+0x790>
0840c5c9 +0x73f:  mov    -0x10(%ebp),%eax
0840c5cc +0x742:  lea    -0x1(%eax),%ebx
0840c5cf +0x745:  movl   $0x5,0xc(%esp)
0840c5d7 +0x74d:  movl   $0x2762,0x8(%esp)
0840c5df +0x755:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c5e7 +0x75d:  lea    -0x5c(%ebp),%eax
0840c5ea +0x760:  mov    %eax,(%esp)
0840c5ed +0x763:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c5f2 +0x768:  mov    0x8(%ebp),%eax
0840c5f5 +0x76b:  mov    %eax,0xc(%esp)
0840c5f9 +0x76f:  mov    %ebx,0x8(%esp)
0840c5fd +0x773:  movl   $"DB_LoadInventory::GetUserAvatar, get_int(%d) ERROR charac_no=%u",0x4(%esp)
0840c605 +0x77b:  lea    -0x5c(%ebp),%eax
0840c608 +0x77e:  mov    %eax,(%esp)
0840c60b +0x781:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c610 +0x786:  mov    $0x0,%eax
0840c615 +0x78b:  jmp    0840ca6a <+0xbe0>
0840c61a +0x790:  movw   $0x0,-0x18e(%ebp)
0840c623 +0x799:  mov    -0x10(%ebp),%eax
0840c626 +0x79c:  addl   $0x1,-0x10(%ebp)
0840c62a +0x7a0:  lea    -0x18e(%ebp),%edx
0840c630 +0x7a6:  mov    %edx,0x8(%esp)
0840c634 +0x7aa:  mov    %eax,0x4(%esp)
0840c638 +0x7ae:  mov    -0x18(%ebp),%eax
0840c63b +0x7b1:  mov    %eax,(%esp)
0840c63e +0x7b4:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840c643 +0x7b9:  xor    $0x1,%eax
0840c646 +0x7bc:  test   %al,%al
0840c648 +0x7be:  je     0840c687 <+0x7fd>
0840c64a +0x7c0:  movl   $0x5,0xc(%esp)
0840c652 +0x7c8:  movl   $0x276a,0x8(%esp)
0840c65a +0x7d0:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c662 +0x7d8:  lea    -0x4c(%ebp),%eax
0840c665 +0x7db:  mov    %eax,(%esp)
0840c668 +0x7de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c66d +0x7e3:  mov    0x8(%ebp),%eax
0840c670 +0x7e6:  mov    %eax,0x8(%esp)
0840c674 +0x7ea:  movl   $"DB_LoadInventory::GetUserAvatar, get_short(10) ERROR charac_no=%u",0x4(%esp)
0840c67c +0x7f2:  lea    -0x4c(%ebp),%eax
0840c67f +0x7f5:  mov    %eax,(%esp)
0840c682 +0x7f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c687 +0x7fd:  movw   $0x0,-0x190(%ebp)
0840c690 +0x806:  mov    -0x10(%ebp),%eax
0840c693 +0x809:  addl   $0x1,-0x10(%ebp)
0840c697 +0x80d:  lea    -0x190(%ebp),%edx
0840c69d +0x813:  mov    %edx,0x8(%esp)
0840c6a1 +0x817:  mov    %eax,0x4(%esp)
0840c6a5 +0x81b:  mov    -0x18(%ebp),%eax
0840c6a8 +0x81e:  mov    %eax,(%esp)
0840c6ab +0x821:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0840c6b0 +0x826:  xor    $0x1,%eax
0840c6b3 +0x829:  test   %al,%al
0840c6b5 +0x82b:  je     0840c6fe <+0x874>
0840c6b7 +0x82d:  movl   $0x5,0xc(%esp)
0840c6bf +0x835:  movl   $0x2771,0x8(%esp)
0840c6c7 +0x83d:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c6cf +0x845:  lea    -0x3c(%ebp),%eax
0840c6d2 +0x848:  mov    %eax,(%esp)
0840c6d5 +0x84b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c6da +0x850:  mov    0x8(%ebp),%eax
0840c6dd +0x853:  mov    %eax,0x8(%esp)
0840c6e1 +0x857:  movl   $"DB_LoadInventory::GetUserAvatar, get_short(10) ERROR charac_no=%u",0x4(%esp)
0840c6e9 +0x85f:  lea    -0x3c(%ebp),%eax
0840c6ec +0x862:  mov    %eax,(%esp)
0840c6ef +0x865:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c6f4 +0x86a:  mov    $0x0,%eax
0840c6f9 +0x86f:  jmp    0840ca6a <+0xbe0>
0840c6fe +0x874:  mov    -0x14(%ebp),%eax
0840c701 +0x877:  imul   $0x4b,%eax,%eax
0840c704 +0x87a:  add    0xc(%ebp),%eax
0840c707 +0x87d:  movzwl -0x18e(%ebp),%edx
0840c70e +0x884:  mov    %dx,0x47(%eax)
0840c712 +0x888:  mov    -0x14(%ebp),%eax
0840c715 +0x88b:  imul   $0x4b,%eax,%eax
0840c718 +0x88e:  add    0xc(%ebp),%eax
0840c71b +0x891:  movzwl -0x190(%ebp),%edx
0840c722 +0x898:  mov    %dx,0x49(%eax)
0840c726 +0x89c:  movb   $0x0,-0x191(%ebp)
0840c72d +0x8a3:  mov    -0x10(%ebp),%eax
0840c730 +0x8a6:  addl   $0x1,-0x10(%ebp)
0840c734 +0x8aa:  lea    -0x191(%ebp),%edx
0840c73a +0x8b0:  mov    %edx,0x8(%esp)
0840c73e +0x8b4:  mov    %eax,0x4(%esp)
0840c742 +0x8b8:  mov    -0x18(%ebp),%eax
0840c745 +0x8bb:  mov    %eax,(%esp)
0840c748 +0x8be:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0840c74d +0x8c3:  xor    $0x1,%eax
0840c750 +0x8c6:  test   %al,%al
0840c752 +0x8c8:  je     0840c79b <+0x911>
0840c754 +0x8ca:  movl   $0x5,0xc(%esp)
0840c75c +0x8d2:  movl   $0x277d,0x8(%esp)
0840c764 +0x8da:  movl   $&_ZZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_RiE19__PRETTY_FUNCTION__,0x4(%esp)
0840c76c +0x8e2:  lea    -0x2c(%ebp),%eax
0840c76f +0x8e5:  mov    %eax,(%esp)
0840c772 +0x8e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840c777 +0x8ed:  mov    0x8(%ebp),%eax
0840c77a +0x8f0:  mov    %eax,0x8(%esp)
0840c77e +0x8f4:  movl   $"DB_LoadInventory::GetUserAvatar, get_byte(11) ERROR charac_no=%u",0x4(%esp)
0840c786 +0x8fc:  lea    -0x2c(%ebp),%eax
0840c789 +0x8ff:  mov    %eax,(%esp)
0840c78c +0x902:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840c791 +0x907:  mov    $0x0,%eax
0840c796 +0x90c:  jmp    0840ca6a <+0xbe0>
0840c79b +0x911:  mov    -0x14(%ebp),%eax
0840c79e +0x914:  imul   $0x4b,%eax,%eax
0840c7a1 +0x917:  add    0xc(%ebp),%eax
0840c7a4 +0x91a:  mov    -0x138(%ebp),%edx
0840c7aa +0x920:  mov    %edx,0x4(%eax)
0840c7ad +0x923:  mov    -0x14(%ebp),%eax
0840c7b0 +0x926:  imul   $0x4b,%eax,%eax
0840c7b3 +0x929:  add    0xc(%ebp),%eax
0840c7b6 +0x92c:  mov    -0x15c(%ebp),%edx
0840c7bc +0x932:  mov    %edx,(%eax)
0840c7be +0x934:  mov    -0x14(%ebp),%eax
0840c7c1 +0x937:  imul   $0x4b,%eax,%eax
0840c7c4 +0x93a:  add    0xc(%ebp),%eax
0840c7c7 +0x93d:  mov    -0x13c(%ebp),%edx
0840c7cd +0x943:  mov    %edx,0x8(%eax)
0840c7d0 +0x946:  mov    -0x14(%ebp),%eax
0840c7d3 +0x949:  imul   $0x4b,%eax,%eax
0840c7d6 +0x94c:  add    0xc(%ebp),%eax
0840c7d9 +0x94f:  lea    0xc(%eax),%edx
0840c7dc +0x952:  movl   $0x18,0x8(%esp)
0840c7e4 +0x95a:  lea    -0x155(%ebp),%eax
0840c7ea +0x960:  mov    %eax,0x4(%esp)
0840c7ee +0x964:  mov    %edx,(%esp)
0840c7f1 +0x967:  call   0807d8d0 <_init+0x1c8>
0840c7f6 +0x96c:  mov    -0x14(%ebp),%eax
0840c7f9 +0x96f:  imul   $0x4b,%eax,%eax
0840c7fc +0x972:  add    0xc(%ebp),%eax
0840c7ff +0x975:  mov    -0x160(%ebp),%edx
0840c805 +0x97b:  mov    %edx,0x25(%eax)
0840c808 +0x97e:  mov    -0x14(%ebp),%eax
0840c80b +0x981:  imul   $0x4b,%eax,%eax
0840c80e +0x984:  add    0xc(%ebp),%eax
0840c811 +0x987:  mov    -0x182(%ebp),%edx
0840c817 +0x98d:  mov    %edx,0x29(%eax)
0840c81a +0x990:  mov    -0x17e(%ebp),%edx
0840c820 +0x996:  mov    %edx,0x2d(%eax)
0840c823 +0x999:  mov    -0x17a(%ebp),%edx
0840c829 +0x99f:  mov    %edx,0x31(%eax)
0840c82c +0x9a2:  mov    -0x176(%ebp),%edx
0840c832 +0x9a8:  mov    %edx,0x35(%eax)
0840c835 +0x9ab:  mov    -0x172(%ebp),%edx
0840c83b +0x9b1:  mov    %edx,0x39(%eax)
0840c83e +0x9b4:  mov    -0x16e(%ebp),%edx
0840c844 +0x9ba:  mov    %edx,0x3d(%eax)
0840c847 +0x9bd:  mov    -0x16a(%ebp),%edx
0840c84d +0x9c3:  mov    %edx,0x41(%eax)
0840c850 +0x9c6:  movzwl -0x166(%ebp),%edx
0840c857 +0x9cd:  mov    %dx,0x45(%eax)
0840c85b +0x9d1:  mov    -0x130(%ebp),%eax
0840c861 +0x9d7:  cmp    $0x72,%eax
0840c864 +0x9da:  jg     0840ca41 <+0xbb7>
0840c86a +0x9e0:  mov    -0x130(%ebp),%eax
0840c870 +0x9e6:  cmp    $0x9,%eax
0840c873 +0x9e9:  jle    0840c956 <+0xacc>
0840c879 +0x9ef:  mov    -0x130(%ebp),%eax
0840c87f +0x9f5:  sub    $0xa,%eax
0840c882 +0x9f8:  mov    %eax,-0xc(%ebp)
0840c885 +0x9fb:  cmpl   $0x68,-0xc(%ebp)
0840c889 +0x9ff:  jg     0840ca44 <+0xbba>
0840c88f +0xa05:  mov    -0xc(%ebp),%eax
0840c892 +0xa08:  imul   $0x3d,%eax,%eax
0840c895 +0xa0b:  add    0x10(%ebp),%eax
0840c898 +0xa0e:  movb   $0x8,0x1(%eax)
0840c89c +0xa12:  mov    -0xc(%ebp),%eax
0840c89f +0xa15:  imul   $0x3d,%eax,%eax
0840c8a2 +0xa18:  add    0x10(%ebp),%eax
0840c8a5 +0xa1b:  mov    -0x164(%ebp),%edx
0840c8ab +0xa21:  mov    %dx,0xb(%eax)
0840c8af +0xa25:  mov    -0xc(%ebp),%eax
0840c8b2 +0xa28:  imul   $0x3d,%eax,%eax
0840c8b5 +0xa2b:  add    0x10(%ebp),%eax
0840c8b8 +0xa2e:  mov    -0x134(%ebp),%edx
0840c8be +0xa34:  mov    %edx,0x2(%eax)
0840c8c1 +0xa37:  mov    -0xc(%ebp),%eax
0840c8c4 +0xa3a:  imul   $0x3d,%eax,%eax
0840c8c7 +0xa3d:  add    0x10(%ebp),%eax
0840c8ca +0xa40:  mov    -0x15c(%ebp),%edx
0840c8d0 +0xa46:  mov    %edx,0x7(%eax)
0840c8d3 +0xa49:  movzbl -0x183(%ebp),%eax
0840c8da +0xa50:  movzbl %al,%eax
0840c8dd +0xa53:  mov    -0xc(%ebp),%edx
0840c8e0 +0xa56:  imul   $0x3d,%edx,%edx
0840c8e3 +0xa59:  add    0x10(%ebp),%edx
0840c8e6 +0xa5c:  add    $0x11,%edx
0840c8e9 +0xa5f:  mov    %eax,0x4(%esp)
0840c8ed +0xa63:  mov    %edx,(%esp)
0840c8f0 +0xa66:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
0840c8f5 +0xa6b:  mov    -0xc(%ebp),%eax
0840c8f8 +0xa6e:  imul   $0x3d,%eax,%eax
0840c8fb +0xa71:  add    0x10(%ebp),%eax
0840c8fe +0xa74:  mov    -0x188(%ebp),%edx
0840c904 +0xa7a:  mov    %dx,0xd(%eax)
0840c908 +0xa7e:  mov    -0xc(%ebp),%eax
0840c90b +0xa81:  imul   $0x3d,%eax,%eax
0840c90e +0xa84:  add    0x10(%ebp),%eax
0840c911 +0xa87:  mov    -0x18c(%ebp),%edx
0840c917 +0xa8d:  mov    %dx,0xf(%eax)
0840c91b +0xa91:  movzbl -0x191(%ebp),%eax
0840c922 +0xa98:  test   %al,%al
0840c924 +0xa9a:  je     0840c93e <+0xab4>
0840c926 +0xa9c:  mov    -0xc(%ebp),%eax
0840c929 +0xa9f:  imul   $0x3d,%eax,%eax
0840c92c +0xaa2:  add    0x10(%ebp),%eax
0840c92f +0xaa5:  movzbl 0x33(%eax),%edx
0840c933 +0xaa9:  or     $0x20,%edx
0840c936 +0xaac:  mov    %dl,0x33(%eax)
0840c939 +0xaaf:  jmp    0840ca48 <+0xbbe>
0840c93e +0xab4:  mov    -0xc(%ebp),%eax
0840c941 +0xab7:  imul   $0x3d,%eax,%eax
0840c944 +0xaba:  add    0x10(%ebp),%eax
0840c947 +0xabd:  movzbl 0x33(%eax),%edx
0840c94b +0xac1:  and    $0xffffffdf,%edx
0840c94e +0xac4:  mov    %dl,0x33(%eax)
0840c951 +0xac7:  jmp    0840ca48 <+0xbbe>
0840c956 +0xacc:  mov    -0x130(%ebp),%eax
0840c95c +0xad2:  cmp    $0x9,%eax
0840c95f +0xad5:  jg     0840ca47 <+0xbbd>
0840c965 +0xadb:  mov    -0x130(%ebp),%eax
0840c96b +0xae1:  imul   $0x3d,%eax,%eax
0840c96e +0xae4:  add    0x14(%ebp),%eax
0840c971 +0xae7:  movb   $0x8,0x1(%eax)
0840c975 +0xaeb:  mov    -0x130(%ebp),%eax
0840c97b +0xaf1:  imul   $0x3d,%eax,%eax
0840c97e +0xaf4:  add    0x14(%ebp),%eax
0840c981 +0xaf7:  mov    -0x164(%ebp),%edx
0840c987 +0xafd:  mov    %dx,0xb(%eax)
0840c98b +0xb01:  mov    -0x130(%ebp),%eax
0840c991 +0xb07:  imul   $0x3d,%eax,%eax
0840c994 +0xb0a:  add    0x14(%ebp),%eax
0840c997 +0xb0d:  mov    -0x134(%ebp),%edx
0840c99d +0xb13:  mov    %edx,0x2(%eax)
0840c9a0 +0xb16:  mov    -0x130(%ebp),%eax
0840c9a6 +0xb1c:  imul   $0x3d,%eax,%eax
0840c9a9 +0xb1f:  add    0x14(%ebp),%eax
0840c9ac +0xb22:  mov    -0x15c(%ebp),%edx
0840c9b2 +0xb28:  mov    %edx,0x7(%eax)
0840c9b5 +0xb2b:  movzbl -0x183(%ebp),%eax
0840c9bc +0xb32:  movzbl %al,%eax
0840c9bf +0xb35:  mov    -0x130(%ebp),%edx
0840c9c5 +0xb3b:  imul   $0x3d,%edx,%edx
0840c9c8 +0xb3e:  add    0x14(%ebp),%edx
0840c9cb +0xb41:  add    $0x11,%edx
0840c9ce +0xb44:  mov    %eax,0x4(%esp)
0840c9d2 +0xb48:  mov    %edx,(%esp)
0840c9d5 +0xb4b:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
0840c9da +0xb50:  mov    -0x130(%ebp),%eax
0840c9e0 +0xb56:  imul   $0x3d,%eax,%eax
0840c9e3 +0xb59:  add    0x14(%ebp),%eax
0840c9e6 +0xb5c:  mov    -0x188(%ebp),%edx
0840c9ec +0xb62:  mov    %dx,0xd(%eax)
0840c9f0 +0xb66:  mov    -0x130(%ebp),%eax
0840c9f6 +0xb6c:  imul   $0x3d,%eax,%eax
0840c9f9 +0xb6f:  add    0x14(%ebp),%eax
0840c9fc +0xb72:  mov    -0x18c(%ebp),%edx
0840ca02 +0xb78:  mov    %dx,0xf(%eax)
0840ca06 +0xb7c:  movzbl -0x191(%ebp),%eax
0840ca0d +0xb83:  test   %al,%al
0840ca0f +0xb85:  je     0840ca29 <+0xb9f>
0840ca11 +0xb87:  mov    -0x130(%ebp),%eax
0840ca17 +0xb8d:  imul   $0x3d,%eax,%eax
0840ca1a +0xb90:  add    0x14(%ebp),%eax
0840ca1d +0xb93:  movzbl 0x33(%eax),%edx
0840ca21 +0xb97:  or     $0x20,%edx
0840ca24 +0xb9a:  mov    %dl,0x33(%eax)
0840ca27 +0xb9d:  jmp    0840ca48 <+0xbbe>
0840ca29 +0xb9f:  mov    -0x130(%ebp),%eax
0840ca2f +0xba5:  imul   $0x3d,%eax,%eax
0840ca32 +0xba8:  add    0x14(%ebp),%eax
0840ca35 +0xbab:  movzbl 0x33(%eax),%edx
0840ca39 +0xbaf:  and    $0xffffffdf,%edx
0840ca3c +0xbb2:  mov    %dl,0x33(%eax)
0840ca3f +0xbb5:  jmp    0840ca48 <+0xbbe>
0840ca41 +0xbb7:  nop
0840ca42 +0xbb8:  jmp    0840ca48 <+0xbbe>
0840ca44 +0xbba:  nop
0840ca45 +0xbbb:  jmp    0840ca48 <+0xbbe>
0840ca47 +0xbbd:  nop
0840ca48 +0xbbe:  addl   $0x1,-0x14(%ebp)
0840ca4c +0xbc2:  mov    -0x18(%ebp),%eax
0840ca4f +0xbc5:  mov    %eax,(%esp)
0840ca52 +0xbc8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0840ca57 +0xbcd:  cmp    -0x14(%ebp),%eax
0840ca5a +0xbd0:  setg   %al
0840ca5d +0xbd3:  test   %al,%al
0840ca5f +0xbd5:  jne    0840bff9 <+0x16f>
0840ca65 +0xbdb:  mov    $0x1,%eax
0840ca6a +0xbe0:  add    $0x1a0,%esp
0840ca70 +0xbe6:  pop    %ebx
0840ca71 +0xbe7:  pop    %esi
0840ca72 +0xbe8:  pop    %ebp
0840ca73 +0xbe9:  ret
```

## 反编译 C

```c
// DB_LoadInventory::_GetUserAvatar @ 0x840be8a

/* DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)
    */

undefined4
DB_LoadInventory::_GetUserAvatar
          (uint param_1,AvatarDetailInfo *param_2,Inven_Item *param_3,Inven_Item *param_4,
          int *param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_195;
  short local_194;
  short local_192;
  uint local_190 [2];
  uchar local_187;
  undefined4 local_186;
  undefined4 local_182;
  undefined4 local_17e;
  undefined4 local_17a;
  undefined4 local_176;
  undefined4 local_172;
  undefined4 local_16e;
  undefined2 local_16a;
  int local_168;
  int local_164;
  int local_160;
  char local_159;
  char local_158 [24];
  int local_140;
  uint local_13c;
  int local_138;
  int local_134;
  cMyTrace local_130 [16];
  cMyTrace local_120 [16];
  cMyTrace local_110 [16];
  cMyTrace local_100 [16];
  cMyTrace local_f0 [16];
  cMyTrace local_e0 [16];
  cMyTrace local_d0 [16];
  cMyTrace local_c0 [16];
  cMyTrace local_b0 [16];
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [19];
  char local_1d;
  MySQL *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_1c,
                   "seLect slot,it_id,unix_timestamp(expire_date),ability_no,ipg_agency_no,unix_timestamp(reg_date),ui_id,clear_avatar_id,jewel_socket,item_lock_key, hidden_option, emblem_endurance, color1, color2, trade_restrict from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d"
                   ,param_1,0x73);
  local_1d = MySQL::exec(local_1c,true);
  if (local_1d == '\x01') {
    local_13c = 0;
    local_140 = 0;
    pcVar4 = &local_159;
    uVar6 = 0x19;
    bVar8 = ((uint)pcVar4 & 1) != 0;
    if (bVar8) {
      local_159 = '\0';
      pcVar4 = local_158;
      uVar6 = 0x18;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar6 = uVar6 - 2;
    }
    uVar7 = 0;
    local_1d = '\x01';
    do {
      pcVar1 = pcVar4 + uVar7;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar6 & 0xfffffffc));
    pcVar4 = pcVar4 + uVar7;
    if ((uVar6 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar8) {
      *pcVar4 = '\0';
    }
    local_160 = 0;
    local_164 = 0;
    iVar5 = MySQL::get_n_rows(local_1c);
    *param_5 = iVar5;
    local_168 = 0;
    local_18 = 0;
    while (iVar5 = MySQL::get_n_rows(local_1c), local_18 < iVar5) {
      local_1d = MySQL::fetch(local_1c);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_120,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x26f3,5);
        cMyTrace::operator()
                  (local_120,"DB_LoadInventory::GetUserAvatar, fetch() ERROR charac_no=%u,%d",
                   param_1,local_18);
        break;
      }
      local_1d = MySQL::get_int(local_1c,0,&local_134);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_110,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x26fa,5);
        cMyTrace::operator()
                  (local_110,"DB_LoadInventory::GetUserAvatar, get_int(0) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_1d = MySQL::get_int(local_1c,1,&local_138);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_100,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2701,5);
        cMyTrace::operator()
                  (local_100,"DB_LoadInventory::GetUserAvatar, get_int(1) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_1d = MySQL::get_uint(local_1c,2,&local_13c);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_f0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2708,5);
        cMyTrace::operator()
                  (local_f0,"DB_LoadInventory::GetUserAvatar, get_uint(2) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_1d = MySQL::get_int(local_1c,3,&local_168);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_e0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,9999,5);
        cMyTrace::operator()
                  (local_e0,"DB_LoadInventory::GetUserAvatar, get_int(3) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      cVar2 = MySQL::get_str(local_1c,4,&local_159,0x18);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_d0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2727,5);
        cMyTrace::operator()
                  (local_d0,"DB_LoadInventory::GetUserAvatar, get_int(4) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,5,&local_140);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_c0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x272e,5);
        cMyTrace::operator()
                  (local_c0,"DB_LoadInventory::GetUserAvatar, get_int(5) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,6,&local_160);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_b0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2734,5);
        cMyTrace::operator()
                  (local_b0,"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      local_14 = 8;
      cVar2 = MySQL::get_int(local_1c,7,&local_164);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_a0,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x273b,5);
        cMyTrace::operator()
                  (local_a0,"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)&local_186);
      iVar5 = local_14;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_binary(local_1c,iVar5,&local_186,0x1e);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_90,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2742,5);
        cMyTrace::operator()
                  (local_90,"DB_LoadInventory::GetUserAvatar, get_int(6) ERROR charac_no=%u",param_1
                  );
        return 0;
      }
      local_187 = '\0';
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_ubyte(local_1c,iVar5,&local_187);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_80,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2749,5);
        cMyTrace::operator()
                  (local_80,"DB_LoadInventory::GetUserAvatar, get_ubyte(8) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      local_190[1] = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_uint(local_1c,iVar5,local_190 + 1);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        iVar5 = local_14 + -1;
        cMyTrace::cMyTrace(local_70,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x275c,5);
        cMyTrace::operator()
                  (local_70,"DB_LoadInventory::GetUserAvatar, get_int(%d) ERROR charac_no=%u",iVar5,
                   param_1);
        return 0;
      }
      local_190[0] = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_uint(local_1c,iVar5,local_190);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        iVar5 = local_14 + -1;
        cMyTrace::cMyTrace(local_60,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2762,5);
        cMyTrace::operator()
                  (local_60,"DB_LoadInventory::GetUserAvatar, get_int(%d) ERROR charac_no=%u",iVar5,
                   param_1);
        return 0;
      }
      local_192 = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_short(local_1c,iVar5,&local_192);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_50,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x276a,5);
        cMyTrace::operator()
                  (local_50,"DB_LoadInventory::GetUserAvatar, get_short(10) ERROR charac_no=%u",
                   param_1);
      }
      iVar5 = local_14;
      local_194 = 0;
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_short(local_1c,iVar5,&local_194);
      iVar5 = local_14;
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_40,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x2771,5);
        cMyTrace::operator()
                  (local_40,"DB_LoadInventory::GetUserAvatar, get_short(10) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      *(short *)(param_2 + local_18 * 0x4b + 0x47) = local_192;
      *(short *)(param_2 + local_18 * 0x4b + 0x49) = local_194;
      local_195 = '\0';
      local_14 = local_14 + 1;
      cVar2 = MySQL::get_byte(local_1c,iVar5,&local_195);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_30,
                           "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                           ,0x277d,5);
        cMyTrace::operator()
                  (local_30,"DB_LoadInventory::GetUserAvatar, get_byte(11) ERROR charac_no=%u",
                   param_1);
        return 0;
      }
      *(uint *)(param_2 + local_18 * 0x4b + 4) = local_13c;
      *(int *)(param_2 + local_18 * 0x4b) = local_160;
      *(int *)(param_2 + local_18 * 0x4b + 8) = local_140;
      strncpy((char *)(param_2 + local_18 * 0x4b + 0xc),&local_159,0x18);
      *(int *)(param_2 + local_18 * 0x4b + 0x25) = local_164;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x29) = local_186;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x2d) = local_182;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x31) = local_17e;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x35) = local_17a;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x39) = local_176;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x3d) = local_172;
      *(undefined4 *)(param_2 + local_18 * 0x4b + 0x41) = local_16e;
      *(undefined2 *)(param_2 + local_18 * 0x4b + 0x45) = local_16a;
      if (local_134 < 0x73) {
        if (local_134 < 10) {
          if (local_134 < 10) {
            param_4[local_134 * 0x3d + 1] = (Inven_Item)0x8;
            *(short *)(param_4 + local_134 * 0x3d + 0xb) = (short)local_168;
            *(int *)(param_4 + local_134 * 0x3d + 2) = local_138;
            *(int *)(param_4 + local_134 * 0x3d + 7) = local_160;
            stAmplifyOption_t::SetLock
                      ((stAmplifyOption_t *)(param_4 + local_134 * 0x3d + 0x11),local_187);
            *(short *)(param_4 + local_134 * 0x3d + 0xd) = (short)local_190[1];
            *(short *)(param_4 + local_134 * 0x3d + 0xf) = (short)local_190[0];
            if (local_195 == '\0') {
              param_4[local_134 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_4[local_134 * 0x3d + 0x33] & 0xdf);
            }
            else {
              param_4[local_134 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_4[local_134 * 0x3d + 0x33] | 0x20);
            }
          }
        }
        else {
          local_10 = local_134 + -10;
          if (local_10 < 0x69) {
            param_3[local_10 * 0x3d + 1] = (Inven_Item)0x8;
            *(short *)(param_3 + local_10 * 0x3d + 0xb) = (short)local_168;
            *(int *)(param_3 + local_10 * 0x3d + 2) = local_138;
            *(int *)(param_3 + local_10 * 0x3d + 7) = local_160;
            stAmplifyOption_t::SetLock
                      ((stAmplifyOption_t *)(param_3 + local_10 * 0x3d + 0x11),local_187);
            *(short *)(param_3 + local_10 * 0x3d + 0xd) = (short)local_190[1];
            *(short *)(param_3 + local_10 * 0x3d + 0xf) = (short)local_190[0];
            if (local_195 == '\0') {
              param_3[local_10 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_3[local_10 * 0x3d + 0x33] & 0xdf);
            }
            else {
              param_3[local_10 * 0x3d + 0x33] =
                   (Inven_Item)((byte)param_3[local_10 * 0x3d + 0x33] | 0x20);
            }
          }
        }
      }
      local_18 = local_18 + 1;
    }
    uVar3 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_130,
                       "static bool DB_LoadInventory::_GetUserAvatar(unsigned int, AvatarDetailInfo*, Inven_Item*, Inven_Item*, int&)"
                       ,0x26dc,5);
    cMyTrace::operator()
              (local_130,"DB_LoadInventory::GetUserAvatar, exec() ERROR charac_no=%u",param_1);
    uVar3 = 0;
  }
  return uVar3;
}
```
