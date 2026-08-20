# incPvPRoomResult

`_ZN13StatisticsPvP16incPvPRoomResultEiii`

`StatisticsPvP::incPvPRoomResult(int, int, int)`

| 类 | 地址 |
|---|---|
| `StatisticsPvP` | `0x0860c5da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c5da  _ZN13StatisticsPvP16incPvPRoomResultEiii
#           StatisticsPvP::incPvPRoomResult(int, int, int)
# range [0x0860c5da, 0x0860c703]
0860c5da +0x000:  push   %ebp
0860c5db +0x001:  mov    %esp,%ebp
0860c5dd +0x003:  push   %esi
0860c5de +0x004:  push   %ebx
0860c5df +0x005:  sub    $0x60,%esp
0860c5e2 +0x008:  mov    0x8(%ebp),%eax
0860c5e5 +0x00b:  mov    %eax,0x4(%esp)
0860c5e9 +0x00f:  lea    -0x34(%ebp),%eax
0860c5ec +0x012:  mov    %eax,(%esp)
0860c5ef +0x015:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860c5f4 +0x01a:  mov    0xc(%ebp),%eax
0860c5f7 +0x01d:  mov    %eax,-0x3c(%ebp)
0860c5fa +0x020:  mov    0x10(%ebp),%eax
0860c5fd +0x023:  mov    %eax,-0x38(%ebp)
0860c600 +0x026:  mov    0x8(%ebp),%eax
0860c603 +0x029:  lea    0x18(%eax),%ecx
0860c606 +0x02c:  lea    -0x40(%ebp),%eax
0860c609 +0x02f:  lea    -0x3c(%ebp),%edx
0860c60c +0x032:  mov    %edx,0x8(%esp)
0860c610 +0x036:  mov    %ecx,0x4(%esp)
0860c614 +0x03a:  mov    %eax,(%esp)
0860c617 +0x03d:  call   08610cf4 <_GLOBAL__I__ZN10StatisticsC2Ev+0xd72>  ; global constructors keyed to Statistics::Statistics()+0xd72
0860c61c +0x042:  sub    $0x4,%esp
0860c61f +0x045:  mov    0x8(%ebp),%eax
0860c622 +0x048:  lea    0x18(%eax),%edx
0860c625 +0x04b:  lea    -0x30(%ebp),%eax
0860c628 +0x04e:  mov    %edx,0x4(%esp)
0860c62c +0x052:  mov    %eax,(%esp)
0860c62f +0x055:  call   0845123a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3e50>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3e50
0860c634 +0x05a:  sub    $0x4,%esp
0860c637 +0x05d:  lea    -0x30(%ebp),%eax
0860c63a +0x060:  mov    %eax,0x4(%esp)
0860c63e +0x064:  lea    -0x40(%ebp),%eax
0860c641 +0x067:  mov    %eax,(%esp)
0860c644 +0x06a:  call   08610d20 <_GLOBAL__I__ZN10StatisticsC2Ev+0xd9e>  ; global constructors keyed to Statistics::Statistics()+0xd9e
0860c649 +0x06f:  test   %al,%al
0860c64b +0x071:  je     0860c6a0 <+0xc6>
0860c64d +0x073:  mov    -0x3c(%ebp),%eax
0860c650 +0x076:  mov    -0x38(%ebp),%edx
0860c653 +0x079:  mov    %eax,-0x50(%ebp)
0860c656 +0x07c:  mov    %edx,-0x4c(%ebp)
0860c659 +0x07f:  movl   $0x1,-0x48(%ebp)
0860c660 +0x086:  mov    0x14(%ebp),%eax
0860c663 +0x089:  mov    %eax,-0x44(%ebp)
0860c666 +0x08c:  lea    -0x50(%ebp),%eax
0860c669 +0x08f:  mov    %eax,0x8(%esp)
0860c66d +0x093:  lea    -0x3c(%ebp),%eax
0860c670 +0x096:  mov    %eax,0x4(%esp)
0860c674 +0x09a:  lea    -0x24(%ebp),%eax
0860c677 +0x09d:  mov    %eax,(%esp)
0860c67a +0x0a0:  call   08610d34 <_GLOBAL__I__ZN10StatisticsC2Ev+0xdb2>  ; global constructors keyed to Statistics::Statistics()+0xdb2
0860c67f +0x0a5:  mov    0x8(%ebp),%eax
0860c682 +0x0a8:  lea    0x18(%eax),%ecx
0860c685 +0x0ab:  lea    -0x2c(%ebp),%eax
0860c688 +0x0ae:  lea    -0x24(%ebp),%edx
0860c68b +0x0b1:  mov    %edx,0x8(%esp)
0860c68f +0x0b5:  mov    %ecx,0x4(%esp)
0860c693 +0x0b9:  mov    %eax,(%esp)
0860c696 +0x0bc:  call   08610d7e <_GLOBAL__I__ZN10StatisticsC2Ev+0xdfc>  ; global constructors keyed to Statistics::Statistics()+0xdfc
0860c69b +0x0c1:  sub    $0x4,%esp
0860c69e +0x0c4:  jmp    0860c6ee <+0x114>
0860c6a0 +0x0c6:  lea    -0x40(%ebp),%eax
0860c6a3 +0x0c9:  mov    %eax,(%esp)
0860c6a6 +0x0cc:  call   08451292 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3ea8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3ea8
0860c6ab +0x0d1:  add    $0x8,%eax
0860c6ae +0x0d4:  mov    %eax,-0xc(%ebp)
0860c6b1 +0x0d7:  mov    -0xc(%ebp),%eax
0860c6b4 +0x0da:  mov    0x8(%eax),%eax
0860c6b7 +0x0dd:  lea    0x1(%eax),%edx
0860c6ba +0x0e0:  mov    -0xc(%ebp),%eax
0860c6bd +0x0e3:  mov    %edx,0x8(%eax)
0860c6c0 +0x0e6:  mov    -0xc(%ebp),%eax
0860c6c3 +0x0e9:  mov    0xc(%eax),%eax
0860c6c6 +0x0ec:  mov    %eax,%edx
0860c6c8 +0x0ee:  add    0x14(%ebp),%edx
0860c6cb +0x0f1:  mov    -0xc(%ebp),%eax
0860c6ce +0x0f4:  mov    %edx,0xc(%eax)
0860c6d1 +0x0f7:  jmp    0860c6ee <+0x114>
0860c6d3 +0x0f9:  mov    %edx,%ebx
0860c6d5 +0x0fb:  mov    %eax,%esi
0860c6d7 +0x0fd:  lea    -0x34(%ebp),%eax
0860c6da +0x100:  mov    %eax,(%esp)
0860c6dd +0x103:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c6e2 +0x108:  mov    %esi,%eax
0860c6e4 +0x10a:  mov    %ebx,%edx
0860c6e6 +0x10c:  mov    %eax,(%esp)
0860c6e9 +0x10f:  call   08ae3750 <_Unwind_Resume>
0860c6ee +0x114:  lea    -0x34(%ebp),%eax
0860c6f1 +0x117:  mov    %eax,(%esp)
0860c6f4 +0x11a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c6f9 +0x11f:  lea    -0x8(%ebp),%esp
0860c6fc +0x122:  add    $0x0,%esp
0860c6ff +0x125:  pop    %ebx
0860c700 +0x126:  pop    %esi
0860c701 +0x127:  pop    %ebp
0860c702 +0x128:  ret
0860c703 +0x129:  nop
```

## 反编译 C

```c
// StatisticsPvP::incPvPRoomResult @ 0x860c5da

/* StatisticsPvP::incPvPRoomResult(int, int, int) */

void __thiscall
StatisticsPvP::incPvPRoomResult(StatisticsPvP *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  PvP_Key local_44 [4];
  int local_40;
  int local_3c;
  Guard<Mutex> local_38 [4];
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  local_34 [4];
  pair local_30 [8];
  pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room> local_28 [24];
  int local_10;
  
  Guard<Mutex>::Guard(local_38,(Mutex *)this);
  local_40 = param_1;
  local_3c = param_2;
                    /* try { // try from 0860c617 to 0860c69a has its CatchHandler @ 0860c6d3 */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::find(local_44);
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::end(local_34);
  cVar1 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>::
          operator==((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                      *)local_44,(_Rb_tree_iterator *)local_34);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
            ::operator*((_Rb_tree_iterator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>
                         *)local_44);
    local_10 = iVar2 + 8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + param_3;
  }
  else {
    local_54 = local_40;
    local_50 = local_3c;
    local_4c = 1;
    local_48 = param_3;
    std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>::
    pair<StatisticsPvP::PvP_Key&,StatisticsPvP::PvP_Room&>
              (local_28,(PvP_Key *)&local_40,(PvP_Room *)&local_54);
    std::
    map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
    ::insert(local_30);
  }
  Guard<Mutex>::~Guard(local_38);
  return;
}
```
