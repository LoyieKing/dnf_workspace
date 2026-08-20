# makeNotiPacketNPCMood

`_ZNK22CNPCDynamicInfoManager21makeNotiPacketNPCMoodER11PacketGuard`

`CNPCDynamicInfoManager::makeNotiPacketNPCMood(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfoManager` | `0x085808a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085808a6  _ZNK22CNPCDynamicInfoManager21makeNotiPacketNPCMoodER11PacketGuard
#           CNPCDynamicInfoManager::makeNotiPacketNPCMood(PacketGuard&) const
# range [0x085808a6, 0x085809a5]
085808a6 +0x00:  push   %ebp
085808a7 +0x01:  mov    %esp,%ebp
085808a9 +0x03:  sub    $0x38,%esp
085808ac +0x06:  mov    0xc(%ebp),%eax
085808af +0x09:  movl   $0xc3,0x8(%esp)
085808b7 +0x11:  movl   $0x0,0x4(%esp)
085808bf +0x19:  mov    %eax,(%esp)
085808c2 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085808c7 +0x21:  mov    0xc(%ebp),%eax
085808ca +0x24:  mov    %eax,(%esp)
085808cd +0x27:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085808d2 +0x2c:  mov    %eax,-0x14(%ebp)
085808d5 +0x2f:  movw   $0x0,-0xe(%ebp)
085808db +0x35:  mov    0xc(%ebp),%eax
085808de +0x38:  movl   $0x0,0x4(%esp)
085808e6 +0x40:  mov    %eax,(%esp)
085808e9 +0x43:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085808ee +0x48:  mov    0x8(%ebp),%edx
085808f1 +0x4b:  lea    -0x18(%ebp),%eax
085808f4 +0x4e:  mov    %edx,0x4(%esp)
085808f8 +0x52:  mov    %eax,(%esp)
085808fb +0x55:  call   08582a28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x11ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x11ba
08580900 +0x5a:  sub    $0x4,%esp
08580903 +0x5d:  mov    0x8(%ebp),%edx
08580906 +0x60:  lea    -0x1c(%ebp),%eax
08580909 +0x63:  mov    %edx,0x4(%esp)
0858090d +0x67:  mov    %eax,(%esp)
08580910 +0x6a:  call   08582a4e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x11e0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x11e0
08580915 +0x6f:  sub    $0x4,%esp
08580918 +0x72:  jmp    08580960 <+0xba>
0858091a +0x74:  lea    -0x18(%ebp),%eax
0858091d +0x77:  mov    %eax,(%esp)
08580920 +0x7a:  call   08582aa6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1238>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1238
08580925 +0x7f:  mov    0x4(%eax),%eax
08580928 +0x82:  mov    %eax,(%esp)
0858092b +0x85:  call   08581910 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xa2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xa2
08580930 +0x8a:  mov    %eax,-0xc(%ebp)
08580933 +0x8d:  lea    -0x18(%ebp),%eax
08580936 +0x90:  mov    %eax,(%esp)
08580939 +0x93:  call   08582aa6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1238>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1238
0858093e +0x98:  mov    0x4(%eax),%eax
08580941 +0x9b:  mov    0xc(%ebp),%edx
08580944 +0x9e:  mov    %edx,0x4(%esp)
08580948 +0xa2:  mov    %eax,(%esp)
0858094b +0xa5:  call   08580624 <_ZNK15CNPCDynamicInfo21makeNotiPacketCurMoodER11PacketGuard>  ; CNPCDynamicInfo::makeNotiPacketCurMood(PacketGuard&) const
08580950 +0xaa:  addw   $0x1,-0xe(%ebp)
08580955 +0xaf:  lea    -0x18(%ebp),%eax
08580958 +0xb2:  mov    %eax,(%esp)
0858095b +0xb5:  call   08582a88 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x121a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x121a
08580960 +0xba:  lea    -0x1c(%ebp),%eax
08580963 +0xbd:  mov    %eax,0x4(%esp)
08580967 +0xc1:  lea    -0x18(%ebp),%eax
0858096a +0xc4:  mov    %eax,(%esp)
0858096d +0xc7:  call   08582a74 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1206>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1206
08580972 +0xcc:  test   %al,%al
08580974 +0xce:  jne    0858091a <+0x74>
08580976 +0xd0:  movswl -0xe(%ebp),%edx
0858097a +0xd4:  mov    0xc(%ebp),%eax
0858097d +0xd7:  mov    %edx,0x8(%esp)
08580981 +0xdb:  lea    -0x14(%ebp),%edx
08580984 +0xde:  mov    %edx,0x4(%esp)
08580988 +0xe2:  mov    %eax,(%esp)
0858098b +0xe5:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
08580990 +0xea:  mov    0xc(%ebp),%eax
08580993 +0xed:  movl   $0x1,0x4(%esp)
0858099b +0xf5:  mov    %eax,(%esp)
0858099e +0xf8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085809a3 +0xfd:  leave
085809a4 +0xfe:  ret
085809a5 +0xff:  nop
```

## 反编译 C

```c
// CNPCDynamicInfoManager::makeNotiPacketNPCMood @ 0x85808a6

/* CNPCDynamicInfoManager::makeNotiPacketNPCMood(PacketGuard&) const */

void __thiscall
CNPCDynamicInfoManager::makeNotiPacketNPCMood(CNPCDynamicInfoManager *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_20 [4];
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  local_1c [4];
  int local_18;
  short local_12;
  undefined4 local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xc3);
  local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  local_12 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::begin(local_1c);
  std::
  map<unsigned_int,CNPCDynamicInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>>
  ::end(local_20);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                       local_1c,(_Rb_tree_const_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                       local_1c);
    local_10 = CNPCDynamicInfo::getMood(*(CNPCDynamicInfo **)(iVar2 + 4));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)
                       local_1c);
    CNPCDynamicInfo::makeNotiPacketCurMood(*(CNPCDynamicInfo **)(iVar2 + 4),param_1);
    local_12 = local_12 + 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,CNPCDynamicInfo*>> *)local_1c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,&local_18,(int)local_12);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
