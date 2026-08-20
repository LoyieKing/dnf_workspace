# dispatch

`_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream`

`DB_TOD_Update_UserState::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_TOD_Update_UserState` | `0x084403aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084403aa  _ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream
#           DB_TOD_Update_UserState::dispatch(int, int, Stream*)
# range [0x084403aa, 0x08440547]
084403aa +0x000:  push   %ebp
084403ab +0x001:  mov    %esp,%ebp
084403ad +0x003:  push   %edi
084403ae +0x004:  push   %esi
084403af +0x005:  push   %ebx
084403b0 +0x006:  sub    $0x6c,%esp
084403b3 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084403b8 +0x00e:  movl   $0x0,0x8(%esp)
084403c0 +0x016:  movl   $0x2,0x4(%esp)
084403c8 +0x01e:  mov    %eax,(%esp)
084403cb +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084403d0 +0x026:  mov    %eax,-0x20(%ebp)
084403d3 +0x029:  mov    0x14(%ebp),%eax
084403d6 +0x02c:  mov    %eax,(%esp)
084403d9 +0x02f:  call   08453cce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x68e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x68e4
084403de +0x034:  mov    %eax,-0x1c(%ebp)
084403e1 +0x037:  mov    -0x1c(%ebp),%eax
084403e4 +0x03a:  mov    0x4(%eax),%eax
084403e7 +0x03d:  test   %eax,%eax
084403e9 +0x03f:  jne    084403f5 <+0x4b>
084403eb +0x041:  mov    $0x1,%eax
084403f0 +0x046:  jmp    0844053f <+0x195>
084403f5 +0x04b:  mov    -0x1c(%ebp),%eax
084403f8 +0x04e:  mov    (%eax),%eax
084403fa +0x050:  mov    %eax,-0x30(%ebp)
084403fd +0x053:  mov    -0x1c(%ebp),%eax
08440400 +0x056:  mov    0x14(%eax),%edi
08440403 +0x059:  mov    -0x1c(%ebp),%eax
08440406 +0x05c:  mov    0x10(%eax),%esi
08440409 +0x05f:  mov    -0x1c(%ebp),%eax
0844040c +0x062:  movzwl 0xe(%eax),%eax
08440410 +0x066:  movswl %ax,%ebx
08440413 +0x069:  mov    -0x1c(%ebp),%eax
08440416 +0x06c:  add    $0xc,%eax
08440419 +0x06f:  mov    %eax,(%esp)
0844041c +0x072:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
08440421 +0x077:  movzwl %ax,%ecx
08440424 +0x07a:  mov    -0x1c(%ebp),%eax
08440427 +0x07d:  mov    0x8(%eax),%edx
0844042a +0x080:  mov    -0x1c(%ebp),%eax
0844042d +0x083:  mov    0x4(%eax),%eax
08440430 +0x086:  mov    %eax,-0x3c(%ebp)
08440433 +0x089:  mov    -0x30(%ebp),%eax
08440436 +0x08c:  mov    %eax,0x20(%esp)
0844043a +0x090:  mov    %edi,0x1c(%esp)
0844043e +0x094:  mov    %esi,0x18(%esp)
08440442 +0x098:  mov    %ebx,0x14(%esp)
08440446 +0x09c:  mov    %ecx,0x10(%esp)
0844044a +0x0a0:  mov    %edx,0xc(%esp)
0844044e +0x0a4:  mov    -0x3c(%ebp),%eax
08440451 +0x0a7:  mov    %eax,0x8(%esp)
08440455 +0x0ab:  movl   $"upDate charac_tower_despair set first_layer_start_date=from_unixtime(%d), today_enter_count=%d, last_clear_layer=%d, enter_count_by_week=%d, m_date=from_unixtime(%d), last_clear_date=from_unixtime(%d) where charac_no=%u",0x4(%esp)
0844045d +0x0b3:  mov    -0x20(%ebp),%eax
08440460 +0x0b6:  mov    %eax,(%esp)
08440463 +0x0b9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440468 +0x0be:  movl   $0x1,0x4(%esp)
08440470 +0x0c6:  mov    -0x20(%ebp),%eax
08440473 +0x0c9:  mov    %eax,(%esp)
08440476 +0x0cc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844047b +0x0d1:  xor    $0x1,%eax
0844047e +0x0d4:  test   %al,%al
08440480 +0x0d6:  je     0844048c <+0xe2>
08440482 +0x0d8:  mov    $0x0,%eax
08440487 +0x0dd:  jmp    0844053f <+0x195>
0844048c +0x0e2:  mov    -0x20(%ebp),%eax
0844048f +0x0e5:  mov    %eax,(%esp)
08440492 +0x0e8:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08440497 +0x0ed:  or     %edx,%eax
08440499 +0x0ef:  test   %eax,%eax
0844049b +0x0f1:  sete   %al
0844049e +0x0f4:  test   %al,%al
084404a0 +0x0f6:  je     0844053a <+0x190>
084404a6 +0x0fc:  mov    -0x1c(%ebp),%eax
084404a9 +0x0ff:  mov    0x14(%eax),%eax
084404ac +0x102:  mov    %eax,-0x2c(%ebp)
084404af +0x105:  mov    -0x1c(%ebp),%eax
084404b2 +0x108:  mov    0x10(%eax),%edi
084404b5 +0x10b:  mov    -0x1c(%ebp),%eax
084404b8 +0x10e:  movzwl 0xe(%eax),%eax
084404bc +0x112:  movswl %ax,%esi
084404bf +0x115:  mov    -0x1c(%ebp),%eax
084404c2 +0x118:  add    $0xc,%eax
084404c5 +0x11b:  mov    %eax,(%esp)
084404c8 +0x11e:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
084404cd +0x123:  movzwl %ax,%ebx
084404d0 +0x126:  mov    -0x1c(%ebp),%eax
084404d3 +0x129:  mov    0x8(%eax),%ecx
084404d6 +0x12c:  mov    -0x1c(%ebp),%eax
084404d9 +0x12f:  mov    0x4(%eax),%edx
084404dc +0x132:  mov    -0x1c(%ebp),%eax
084404df +0x135:  mov    (%eax),%eax
084404e1 +0x137:  mov    %eax,-0x3c(%ebp)
084404e4 +0x13a:  mov    -0x2c(%ebp),%eax
084404e7 +0x13d:  mov    %eax,0x20(%esp)
084404eb +0x141:  mov    %edi,0x1c(%esp)
084404ef +0x145:  mov    %esi,0x18(%esp)
084404f3 +0x149:  mov    %ebx,0x14(%esp)
084404f7 +0x14d:  mov    %ecx,0x10(%esp)
084404fb +0x151:  mov    %edx,0xc(%esp)
084404ff +0x155:  mov    -0x3c(%ebp),%eax
08440502 +0x158:  mov    %eax,0x8(%esp)
08440506 +0x15c:  movl   $"inSert into charac_tower_despair(charac_no,first_layer_start_date,today_enter_count,last_clear_layer,enter_count_by_week,m_date,last_clear_date) values(%u,from_unixtime(%d),%d,%d,%d,from_unixtime(%d),from_unixtime(%d))",0x4(%esp)
0844050e +0x164:  mov    -0x20(%ebp),%eax
08440511 +0x167:  mov    %eax,(%esp)
08440514 +0x16a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440519 +0x16f:  movl   $0x1,0x4(%esp)
08440521 +0x177:  mov    -0x20(%ebp),%eax
08440524 +0x17a:  mov    %eax,(%esp)
08440527 +0x17d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844052c +0x182:  xor    $0x1,%eax
0844052f +0x185:  test   %al,%al
08440531 +0x187:  je     0844053a <+0x190>
08440533 +0x189:  mov    $0x0,%eax
08440538 +0x18e:  jmp    0844053f <+0x195>
0844053a +0x190:  mov    $0x1,%eax
0844053f +0x195:  add    $0x6c,%esp
08440542 +0x198:  pop    %ebx
08440543 +0x199:  pop    %esi
08440544 +0x19a:  pop    %edi
08440545 +0x19b:  pop    %ebp
08440546 +0x19c:  ret
08440547 +0x19d:  nop
```

## 反编译 C

```c
// DB_TOD_Update_UserState::dispatch @ 0x84403aa

/* DB_TOD_Update_UserState::dispatch(int, int, Stream*) */

undefined4 DB_TOD_Update_UserState::dispatch(int param_1,int param_2,Stream *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  MySQL *this;
  SIG_REQUEST_TOD_USER_STATE *pSVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar5 = Stream::GetOutBuffer<SIG_REQUEST_TOD_USER_STATE>(in_stack_00000010);
  if (*(int *)(pSVar5 + 4) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)pSVar5;
    uVar2 = *(undefined4 *)(pSVar5 + 0x14);
    uVar3 = *(undefined4 *)(pSVar5 + 0x10);
    sVar1 = *(short *)(pSVar5 + 0xe);
    uVar7 = TOD_Layer::GetLayer((TOD_Layer *)(pSVar5 + 0xc));
    MySQL::set_query(this,
                     "upDate charac_tower_despair set first_layer_start_date=from_unixtime(%d), today_enter_count=%d, last_clear_layer=%d, enter_count_by_week=%d, m_date=from_unixtime(%d), last_clear_date=from_unixtime(%d) where charac_no=%u"
                     ,*(undefined4 *)(pSVar5 + 4),*(undefined4 *)(pSVar5 + 8),uVar7 & 0xffff,
                     (int)sVar1,uVar3,uVar2,uVar6);
    cVar4 = MySQL::exec(this,true);
    if (cVar4 == '\x01') {
      lVar8 = MySQL::getAffectedRowCount(this);
      if (lVar8 == 0) {
        uVar6 = *(undefined4 *)(pSVar5 + 0x14);
        uVar2 = *(undefined4 *)(pSVar5 + 0x10);
        sVar1 = *(short *)(pSVar5 + 0xe);
        uVar7 = TOD_Layer::GetLayer((TOD_Layer *)(pSVar5 + 0xc));
        MySQL::set_query(this,
                         "inSert into charac_tower_despair(charac_no,first_layer_start_date,today_enter_count,last_clear_layer,enter_count_by_week,m_date,last_clear_date) values(%u,from_unixtime(%d),%d,%d,%d,from_unixtime(%d),from_unixtime(%d))"
                         ,*(undefined4 *)pSVar5,*(undefined4 *)(pSVar5 + 4),
                         *(undefined4 *)(pSVar5 + 8),uVar7 & 0xffff,(int)sVar1,uVar2,uVar6);
        cVar4 = MySQL::exec(this,true);
        if (cVar4 != '\x01') {
          return 0;
        }
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
