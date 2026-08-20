# send_event_init_record_data

`_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser`

`EventClassify::CEventScriptMng::send_event_init_record_data(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810cb2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810cb2c  _ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser
#           EventClassify::CEventScriptMng::send_event_init_record_data(CUser*)
# range [0x0810cb2c, 0x0810cc6f]
0810cb2c +0x000:  push   %ebp
0810cb2d +0x001:  mov    %esp,%ebp
0810cb2f +0x003:  push   %esi
0810cb30 +0x004:  push   %ebx
0810cb31 +0x005:  sub    $0x30,%esp
0810cb34 +0x008:  cmpl   $0x0,0xc(%ebp)
0810cb38 +0x00c:  je     0810cc65 <+0x139>
0810cb3e +0x012:  mov    0xc(%ebp),%eax
0810cb41 +0x015:  mov    %eax,(%esp)
0810cb44 +0x018:  call   0868d4f0 <_ZN5CUser24get_ingame_event_historyEv>  ; CUser::get_ingame_event_history()
0810cb49 +0x01d:  mov    %eax,-0xc(%ebp)
0810cb4c +0x020:  lea    -0x18(%ebp),%eax
0810cb4f +0x023:  mov    %eax,(%esp)
0810cb52 +0x026:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0810cb57 +0x02b:  movl   $0x177,0x8(%esp)
0810cb5f +0x033:  movl   $0x0,0x4(%esp)
0810cb67 +0x03b:  lea    -0x18(%ebp),%eax
0810cb6a +0x03e:  mov    %eax,(%esp)
0810cb6d +0x041:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0810cb72 +0x046:  mov    -0xc(%ebp),%eax
0810cb75 +0x049:  mov    %eax,(%esp)
0810cb78 +0x04c:  call   081119d0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xee2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xee2
0810cb7d +0x051:  movsbl %al,%eax
0810cb80 +0x054:  mov    %eax,0x4(%esp)
0810cb84 +0x058:  lea    -0x18(%ebp),%eax
0810cb87 +0x05b:  mov    %eax,(%esp)
0810cb8a +0x05e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0810cb8f +0x063:  lea    -0x1c(%ebp),%eax
0810cb92 +0x066:  mov    -0xc(%ebp),%edx
0810cb95 +0x069:  mov    %edx,0x4(%esp)
0810cb99 +0x06d:  mov    %eax,(%esp)
0810cb9c +0x070:  call   081119e4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xef6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xef6
0810cba1 +0x075:  sub    $0x4,%esp
0810cba4 +0x078:  lea    -0x20(%ebp),%eax
0810cba7 +0x07b:  mov    -0xc(%ebp),%edx
0810cbaa +0x07e:  mov    %edx,0x4(%esp)
0810cbae +0x082:  mov    %eax,(%esp)
0810cbb1 +0x085:  call   0811196a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe7c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe7c
0810cbb6 +0x08a:  sub    $0x4,%esp
0810cbb9 +0x08d:  jmp    0810cc00 <+0xd4>
0810cbbb +0x08f:  lea    -0x1c(%ebp),%eax
0810cbbe +0x092:  mov    %eax,(%esp)
0810cbc1 +0x095:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
0810cbc6 +0x09a:  mov    (%eax),%eax
0810cbc8 +0x09c:  cwtl
0810cbc9 +0x09d:  mov    %eax,0x4(%esp)
0810cbcd +0x0a1:  lea    -0x18(%ebp),%eax
0810cbd0 +0x0a4:  mov    %eax,(%esp)
0810cbd3 +0x0a7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0810cbd8 +0x0ac:  lea    -0x1c(%ebp),%eax
0810cbdb +0x0af:  mov    %eax,(%esp)
0810cbde +0x0b2:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
0810cbe3 +0x0b7:  mov    0x4(%eax),%eax
0810cbe6 +0x0ba:  mov    %eax,0x4(%esp)
0810cbea +0x0be:  lea    -0x18(%ebp),%eax
0810cbed +0x0c1:  mov    %eax,(%esp)
0810cbf0 +0x0c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0810cbf5 +0x0c9:  lea    -0x1c(%ebp),%eax
0810cbf8 +0x0cc:  mov    %eax,(%esp)
0810cbfb +0x0cf:  call   08111a0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf1c
0810cc00 +0x0d4:  lea    -0x20(%ebp),%eax
0810cc03 +0x0d7:  mov    %eax,0x4(%esp)
0810cc07 +0x0db:  lea    -0x1c(%ebp),%eax
0810cc0a +0x0de:  mov    %eax,(%esp)
0810cc0d +0x0e1:  call   08111990 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xea2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xea2
0810cc12 +0x0e6:  test   %al,%al
0810cc14 +0x0e8:  jne    0810cbbb <+0x8f>
0810cc16 +0x0ea:  movl   $0x1,0x4(%esp)
0810cc1e +0x0f2:  lea    -0x18(%ebp),%eax
0810cc21 +0x0f5:  mov    %eax,(%esp)
0810cc24 +0x0f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0810cc29 +0x0fd:  lea    -0x18(%ebp),%eax
0810cc2c +0x100:  mov    %eax,0x4(%esp)
0810cc30 +0x104:  mov    0xc(%ebp),%eax
0810cc33 +0x107:  mov    %eax,(%esp)
0810cc36 +0x10a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0810cc3b +0x10f:  jmp    0810cc58 <+0x12c>
0810cc3d +0x111:  mov    %edx,%ebx
0810cc3f +0x113:  mov    %eax,%esi
0810cc41 +0x115:  lea    -0x18(%ebp),%eax
0810cc44 +0x118:  mov    %eax,(%esp)
0810cc47 +0x11b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0810cc4c +0x120:  mov    %esi,%eax
0810cc4e +0x122:  mov    %ebx,%edx
0810cc50 +0x124:  mov    %eax,(%esp)
0810cc53 +0x127:  call   08ae3750 <_Unwind_Resume>
0810cc58 +0x12c:  lea    -0x18(%ebp),%eax
0810cc5b +0x12f:  mov    %eax,(%esp)
0810cc5e +0x132:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0810cc63 +0x137:  jmp    0810cc66 <+0x13a>
0810cc65 +0x139:  nop
0810cc66 +0x13a:  lea    -0x8(%ebp),%esp
0810cc69 +0x13d:  add    $0x0,%esp
0810cc6c +0x140:  pop    %ebx
0810cc6d +0x141:  pop    %esi
0810cc6e +0x142:  pop    %ebp
0810cc6f +0x143:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::send_event_init_record_data @ 0x810cb2c

/* EventClassify::CEventScriptMng::send_event_init_record_data(CUser*) */

void __thiscall
EventClassify::CEventScriptMng::send_event_init_record_data(CEventScriptMng *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_24 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_20 [4];
  PacketGuard local_1c [12];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_10 = (map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                *)CUser::get_ingame_event_history(param_1);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0810cb6d to 0810cc3a has its CatchHandler @ 0810cc3d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x177);
    cVar1 = std::
            map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
            ::size(local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::begin(local_20);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::end(local_24);
    while( true ) {
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)
                         local_20,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                         ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)
                          local_20);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)(short)*puVar2);
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)
                         local_20);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar3 + 4));
      std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)local_20);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
