# send_event_init_data

`_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb`

`EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c40e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c40e  _ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb
#           EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool)
# range [0x0810c40e, 0x0810c5d1]
0810c40e +0x000:  push   %ebp
0810c40f +0x001:  mov    %esp,%ebp
0810c411 +0x003:  push   %edi
0810c412 +0x004:  push   %esi
0810c413 +0x005:  push   %ebx
0810c414 +0x006:  sub    $0x5c,%esp
0810c417 +0x009:  mov    0x10(%ebp),%eax
0810c41a +0x00c:  mov    %al,-0x3c(%ebp)
0810c41d +0x00f:  cmpl   $0x0,0xc(%ebp)
0810c421 +0x013:  je     0810c5c6 <+0x1b8>
0810c427 +0x019:  lea    -0x28(%ebp),%eax
0810c42a +0x01c:  mov    %eax,(%esp)
0810c42d +0x01f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0810c432 +0x024:  movl   $0x176,0x8(%esp)
0810c43a +0x02c:  movl   $0x0,0x4(%esp)
0810c442 +0x034:  lea    -0x28(%ebp),%eax
0810c445 +0x037:  mov    %eax,(%esp)
0810c448 +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0810c44d +0x03f:  mov    0x8(%ebp),%eax
0810c450 +0x042:  mov    0x48(%eax),%eax
0810c453 +0x045:  mov    %eax,0x4(%esp)
0810c457 +0x049:  lea    -0x28(%ebp),%eax
0810c45a +0x04c:  mov    %eax,(%esp)
0810c45d +0x04f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0810c462 +0x054:  lea    -0x28(%ebp),%eax
0810c465 +0x057:  mov    %eax,(%esp)
0810c468 +0x05a:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0810c46d +0x05f:  mov    %eax,-0x2c(%ebp)
0810c470 +0x062:  movl   $0x0,0x4(%esp)
0810c478 +0x06a:  lea    -0x28(%ebp),%eax
0810c47b +0x06d:  mov    %eax,(%esp)
0810c47e +0x070:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0810c483 +0x075:  movb   $0x0,-0x19(%ebp)
0810c487 +0x079:  mov    0x8(%ebp),%eax
0810c48a +0x07c:  lea    0x30(%eax),%edx
0810c48d +0x07f:  lea    -0x30(%ebp),%eax
0810c490 +0x082:  mov    %edx,0x4(%esp)
0810c494 +0x086:  mov    %eax,(%esp)
0810c497 +0x089:  call   081115a6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xab8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xab8
0810c49c +0x08e:  sub    $0x4,%esp
0810c49f +0x091:  mov    0x8(%ebp),%eax
0810c4a2 +0x094:  lea    0x30(%eax),%edx
0810c4a5 +0x097:  lea    -0x34(%ebp),%eax
0810c4a8 +0x09a:  mov    %edx,0x4(%esp)
0810c4ac +0x09e:  mov    %eax,(%esp)
0810c4af +0x0a1:  call   081115cc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xade>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xade
0810c4b4 +0x0a6:  sub    $0x4,%esp
0810c4b7 +0x0a9:  jmp    0810c543 <+0x135>
0810c4bc +0x0ae:  lea    -0x30(%ebp),%eax
0810c4bf +0x0b1:  mov    %eax,(%esp)
0810c4c2 +0x0b4:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810c4c7 +0x0b9:  mov    (%eax),%eax
0810c4c9 +0x0bb:  mov    %eax,0x4(%esp)
0810c4cd +0x0bf:  mov    0x8(%ebp),%eax
0810c4d0 +0x0c2:  mov    %eax,(%esp)
0810c4d3 +0x0c5:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c4d8 +0x0ca:  test   %al,%al
0810c4da +0x0cc:  je     0810c538 <+0x12a>
0810c4dc +0x0ce:  lea    -0x30(%ebp),%eax
0810c4df +0x0d1:  mov    %eax,(%esp)
0810c4e2 +0x0d4:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810c4e7 +0x0d9:  mov    0x4(%eax),%ebx
0810c4ea +0x0dc:  mov    (%ebx),%eax
0810c4ec +0x0de:  add    $0x1c,%eax
0810c4ef +0x0e1:  mov    (%eax),%eax
0810c4f1 +0x0e3:  mov    %eax,-0x40(%ebp)
0810c4f4 +0x0e6:  movzbl -0x3c(%ebp),%edi
0810c4f8 +0x0ea:  mov    0x8(%ebp),%eax
0810c4fb +0x0ed:  movzbl 0x4c(%eax),%eax
0810c4ff +0x0f1:  movzbl %al,%esi
0810c502 +0x0f4:  lea    -0x30(%ebp),%eax
0810c505 +0x0f7:  mov    %eax,(%esp)
0810c508 +0x0fa:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810c50d +0x0ff:  mov    (%eax),%eax
0810c50f +0x101:  cwtl
0810c510 +0x102:  mov    %edi,0x14(%esp)
0810c514 +0x106:  mov    %esi,0x10(%esp)
0810c518 +0x10a:  mov    %eax,0xc(%esp)
0810c51c +0x10e:  lea    -0x28(%ebp),%eax
0810c51f +0x111:  mov    %eax,0x8(%esp)
0810c523 +0x115:  mov    0xc(%ebp),%eax
0810c526 +0x118:  mov    %eax,0x4(%esp)
0810c52a +0x11c:  mov    %ebx,(%esp)
0810c52d +0x11f:  call   *-0x40(%ebp)
0810c530 +0x122:  test   %al,%al
0810c532 +0x124:  je     0810c538 <+0x12a>
0810c534 +0x126:  addb   $0x1,-0x19(%ebp)
0810c538 +0x12a:  lea    -0x30(%ebp),%eax
0810c53b +0x12d:  mov    %eax,(%esp)
0810c53e +0x130:  call   08111614 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb26>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb26
0810c543 +0x135:  lea    -0x34(%ebp),%eax
0810c546 +0x138:  mov    %eax,0x4(%esp)
0810c54a +0x13c:  lea    -0x30(%ebp),%eax
0810c54d +0x13f:  mov    %eax,(%esp)
0810c550 +0x142:  call   081115f2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb04>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb04
0810c555 +0x147:  test   %al,%al
0810c557 +0x149:  jne    0810c4bc <+0xae>
0810c55d +0x14f:  movzbl -0x19(%ebp),%eax
0810c561 +0x153:  mov    %eax,0x8(%esp)
0810c565 +0x157:  lea    -0x2c(%ebp),%eax
0810c568 +0x15a:  mov    %eax,0x4(%esp)
0810c56c +0x15e:  lea    -0x28(%ebp),%eax
0810c56f +0x161:  mov    %eax,(%esp)
0810c572 +0x164:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0810c577 +0x169:  movl   $0x1,0x4(%esp)
0810c57f +0x171:  lea    -0x28(%ebp),%eax
0810c582 +0x174:  mov    %eax,(%esp)
0810c585 +0x177:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0810c58a +0x17c:  lea    -0x28(%ebp),%eax
0810c58d +0x17f:  mov    %eax,0x4(%esp)
0810c591 +0x183:  mov    0xc(%ebp),%eax
0810c594 +0x186:  mov    %eax,(%esp)
0810c597 +0x189:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0810c59c +0x18e:  jmp    0810c5b9 <+0x1ab>
0810c59e +0x190:  mov    %edx,%ebx
0810c5a0 +0x192:  mov    %eax,%esi
0810c5a2 +0x194:  lea    -0x28(%ebp),%eax
0810c5a5 +0x197:  mov    %eax,(%esp)
0810c5a8 +0x19a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0810c5ad +0x19f:  mov    %esi,%eax
0810c5af +0x1a1:  mov    %ebx,%edx
0810c5b1 +0x1a3:  mov    %eax,(%esp)
0810c5b4 +0x1a6:  call   08ae3750 <_Unwind_Resume>
0810c5b9 +0x1ab:  lea    -0x28(%ebp),%eax
0810c5bc +0x1ae:  mov    %eax,(%esp)
0810c5bf +0x1b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0810c5c4 +0x1b6:  jmp    0810c5c7 <+0x1b9>
0810c5c6 +0x1b8:  nop
0810c5c7 +0x1b9:  lea    -0xc(%ebp),%esp
0810c5ca +0x1bc:  add    $0x0,%esp
0810c5cd +0x1bf:  pop    %ebx
0810c5ce +0x1c0:  pop    %esi
0810c5cf +0x1c1:  pop    %edi
0810c5d0 +0x1c2:  pop    %ebp
0810c5d1 +0x1c3:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::send_event_init_data @ 0x810c40e

/* EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool) */

void __thiscall
EventClassify::CEventScriptMng::send_event_init_data
          (CEventScriptMng *this,CUser *param_1,bool param_2)

{
  CEventScriptMng CVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_38 [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_34 [4];
  int local_30;
  PacketGuard local_2c [15];
  byte local_1d;
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0810c448 to 0810c59b has its CatchHandler @ 0810c59e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x176);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(this + 0x48));
    local_30 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    local_1d = 0;
    std::
    map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
    ::begin(local_34);
    std::
    map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
    ::end(local_38);
    while( true ) {
      cVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                         local_34,(_Rb_tree_iterator *)local_38);
      if (cVar3 == '\0') break;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
                      operator->((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>
                                  *)local_34);
      cVar3 = is_eventing(this,*piVar4);
      if (cVar3 != '\0') {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                           local_34);
        piVar4 = *(int **)(iVar5 + 4);
        pcVar2 = *(code **)(*piVar4 + 0x1c);
        CVar1 = this[0x4c];
        puVar6 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
                 operator->((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                            local_34);
        cVar3 = (*pcVar2)(piVar4,param_1,local_2c,(int)(short)*puVar6,CVar1,param_2);
        if (cVar3 != '\0') {
          local_1d = local_1d + 1;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)local_34);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,&local_30,(uint)local_1d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  return;
}
```
