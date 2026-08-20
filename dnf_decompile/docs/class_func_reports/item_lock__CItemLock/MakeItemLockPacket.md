# MakeItemLockPacket

`_ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh`

`item_lock::CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x085426a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085426a6  _ZNK9item_lock9CItemLock18MakeItemLockPacketER11PacketGuardh
#           item_lock::CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const
# range [0x085426a6, 0x0854279f]
085426a6 +0x00:  push   %ebp
085426a7 +0x01:  mov    %esp,%ebp
085426a9 +0x03:  push   %ebx
085426aa +0x04:  sub    $0x34,%esp
085426ad +0x07:  mov    0x10(%ebp),%eax
085426b0 +0x0a:  mov    %al,-0x1c(%ebp)
085426b3 +0x0d:  mov    0x8(%ebp),%eax
085426b6 +0x10:  lea    0x8(%eax),%ecx
085426b9 +0x13:  lea    -0x14(%ebp),%eax
085426bc +0x16:  lea    -0x1c(%ebp),%edx
085426bf +0x19:  mov    %edx,0x8(%esp)
085426c3 +0x1d:  mov    %ecx,0x4(%esp)
085426c7 +0x21:  mov    %eax,(%esp)
085426ca +0x24:  call   085433be <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3a0>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3a0
085426cf +0x29:  sub    $0x4,%esp
085426d2 +0x2c:  mov    0x8(%ebp),%eax
085426d5 +0x2f:  lea    0x8(%eax),%edx
085426d8 +0x32:  lea    -0x10(%ebp),%eax
085426db +0x35:  mov    %edx,0x4(%esp)
085426df +0x39:  mov    %eax,(%esp)
085426e2 +0x3c:  call   08543300 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2e2>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2e2
085426e7 +0x41:  sub    $0x4,%esp
085426ea +0x44:  lea    -0x10(%ebp),%eax
085426ed +0x47:  mov    %eax,0x4(%esp)
085426f1 +0x4b:  lea    -0x14(%ebp),%eax
085426f4 +0x4e:  mov    %eax,(%esp)
085426f7 +0x51:  call   08543326 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x308>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x308
085426fc +0x56:  test   %al,%al
085426fe +0x58:  je     08542787 <+0xe1>
08542704 +0x5e:  lea    -0x14(%ebp),%eax
08542707 +0x61:  mov    %eax,(%esp)
0854270a +0x64:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
0854270f +0x69:  movzbl 0x8(%eax),%eax
08542713 +0x6d:  movzbl %al,%edx
08542716 +0x70:  mov    0xc(%ebp),%eax
08542719 +0x73:  mov    %edx,0x4(%esp)
0854271d +0x77:  mov    %eax,(%esp)
08542720 +0x7a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08542725 +0x7f:  lea    -0x14(%ebp),%eax
08542728 +0x82:  mov    %eax,(%esp)
0854272b +0x85:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
08542730 +0x8a:  movzbl 0x8(%eax),%eax
08542734 +0x8e:  cmp    $0x2,%al
08542736 +0x90:  sete   %al
08542739 +0x93:  test   %al,%al
0854273b +0x95:  je     0854279a <+0xf4>
0854273d +0x97:  lea    -0x14(%ebp),%eax
08542740 +0x9a:  mov    %eax,(%esp)
08542743 +0x9d:  call   08543358 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x33a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x33a
08542748 +0xa2:  mov    0x4(%eax),%eax
0854274b +0xa5:  lea    0x3f480(%eax),%ebx
08542751 +0xab:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08542758 +0xb2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0854275d +0xb7:  mov    %ebx,%edx
0854275f +0xb9:  sub    %eax,%edx
08542761 +0xbb:  mov    %edx,%eax
08542763 +0xbd:  mov    %eax,-0xc(%ebp)
08542766 +0xc0:  cmpl   $0x0,-0xc(%ebp)
0854276a +0xc4:  jns    08542773 <+0xcd>
0854276c +0xc6:  movl   $0x0,-0xc(%ebp)
08542773 +0xcd:  mov    0xc(%ebp),%eax
08542776 +0xd0:  mov    -0xc(%ebp),%edx
08542779 +0xd3:  mov    %edx,0x4(%esp)
0854277d +0xd7:  mov    %eax,(%esp)
08542780 +0xda:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08542785 +0xdf:  jmp    0854279a <+0xf4>
08542787 +0xe1:  mov    0xc(%ebp),%eax
0854278a +0xe4:  movl   $0x0,0x4(%esp)
08542792 +0xec:  mov    %eax,(%esp)
08542795 +0xef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854279a +0xf4:  mov    -0x4(%ebp),%ebx
0854279d +0xf7:  leave
0854279e +0xf8:  ret
0854279f +0xf9:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::MakeItemLockPacket @ 0x85426a6

/* item_lock::CItemLock::MakeItemLockPacket(PacketGuard&, unsigned char) const */

void item_lock::CItemLock::MakeItemLockPacket(PacketGuard *param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  undefined3 in_stack_00000009;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>> local_18 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_14 [4];
  int local_10;
  
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::find((uchar *)local_18);
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                    (local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte(_param_2,0);
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_18);
    InterfacePacketBuf::put_byte(_param_2,(uint)*(byte *)(iVar2 + 8));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                      (local_18);
    if (*(char *)(iVar2 + 8) == '\x02') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
              operator->(local_18);
      iVar2 = *(int *)(iVar2 + 4);
      local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_10 = (iVar2 + 0x3f480) - local_10;
      if (local_10 < 0) {
        local_10 = 0;
      }
      InterfacePacketBuf::put_int(_param_2,local_10);
    }
  }
  return;
}
```
