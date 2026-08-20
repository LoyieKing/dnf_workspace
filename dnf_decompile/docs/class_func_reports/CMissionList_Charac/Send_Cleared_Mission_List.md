# Send_Cleared_Mission_List

`_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE`

`CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5760  _ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE
#           CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
# range [0x085e5760, 0x085e5857]
085e5760 +0x00:  push   %ebp
085e5761 +0x01:  mov    %esp,%ebp
085e5763 +0x03:  push   %esi
085e5764 +0x04:  push   %ebx
085e5765 +0x05:  sub    $0x20,%esp
085e5768 +0x08:  mov    0x10(%ebp),%eax
085e576b +0x0b:  mov    %eax,(%esp)
085e576e +0x0e:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
085e5773 +0x13:  test   %al,%al
085e5775 +0x15:  jne    085e584f <+0xef>
085e577b +0x1b:  lea    -0x18(%ebp),%eax
085e577e +0x1e:  mov    %eax,(%esp)
085e5781 +0x21:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085e5786 +0x26:  movl   $0x141,0x8(%esp)
085e578e +0x2e:  movl   $0x0,0x4(%esp)
085e5796 +0x36:  lea    -0x18(%ebp),%eax
085e5799 +0x39:  mov    %eax,(%esp)
085e579c +0x3c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085e57a1 +0x41:  mov    0x10(%ebp),%eax
085e57a4 +0x44:  mov    %eax,(%esp)
085e57a7 +0x47:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085e57ac +0x4c:  mov    %eax,0x4(%esp)
085e57b0 +0x50:  lea    -0x18(%ebp),%eax
085e57b3 +0x53:  mov    %eax,(%esp)
085e57b6 +0x56:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085e57bb +0x5b:  movl   $0x0,-0xc(%ebp)
085e57c2 +0x62:  jmp    085e57eb <+0x8b>
085e57c4 +0x64:  mov    -0xc(%ebp),%eax
085e57c7 +0x67:  mov    %eax,0x4(%esp)
085e57cb +0x6b:  mov    0x10(%ebp),%eax
085e57ce +0x6e:  mov    %eax,(%esp)
085e57d1 +0x71:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
085e57d6 +0x76:  mov    (%eax),%eax
085e57d8 +0x78:  mov    %eax,0x4(%esp)
085e57dc +0x7c:  lea    -0x18(%ebp),%eax
085e57df +0x7f:  mov    %eax,(%esp)
085e57e2 +0x82:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e57e7 +0x87:  addl   $0x1,-0xc(%ebp)
085e57eb +0x8b:  mov    0x10(%ebp),%eax
085e57ee +0x8e:  mov    %eax,(%esp)
085e57f1 +0x91:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085e57f6 +0x96:  cmp    -0xc(%ebp),%eax
085e57f9 +0x99:  seta   %al
085e57fc +0x9c:  test   %al,%al
085e57fe +0x9e:  jne    085e57c4 <+0x64>
085e5800 +0xa0:  movl   $0x1,0x4(%esp)
085e5808 +0xa8:  lea    -0x18(%ebp),%eax
085e580b +0xab:  mov    %eax,(%esp)
085e580e +0xae:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085e5813 +0xb3:  lea    -0x18(%ebp),%eax
085e5816 +0xb6:  mov    %eax,0x4(%esp)
085e581a +0xba:  mov    0xc(%ebp),%eax
085e581d +0xbd:  mov    %eax,(%esp)
085e5820 +0xc0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085e5825 +0xc5:  jmp    085e5842 <+0xe2>
085e5827 +0xc7:  mov    %edx,%ebx
085e5829 +0xc9:  mov    %eax,%esi
085e582b +0xcb:  lea    -0x18(%ebp),%eax
085e582e +0xce:  mov    %eax,(%esp)
085e5831 +0xd1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085e5836 +0xd6:  mov    %esi,%eax
085e5838 +0xd8:  mov    %ebx,%edx
085e583a +0xda:  mov    %eax,(%esp)
085e583d +0xdd:  call   08ae3750 <_Unwind_Resume>
085e5842 +0xe2:  lea    -0x18(%ebp),%eax
085e5845 +0xe5:  mov    %eax,(%esp)
085e5848 +0xe8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085e584d +0xed:  jmp    085e5850 <+0xf0>
085e584f +0xef:  nop
085e5850 +0xf0:  add    $0x20,%esp
085e5853 +0xf3:  pop    %ebx
085e5854 +0xf4:  pop    %esi
085e5855 +0xf5:  pop    %ebp
085e5856 +0xf6:  ret
085e5857 +0xf7:  nop
```

## 反编译 C

```c
// CMissionList_Charac::Send_Cleared_Mission_List @ 0x85e5760

/* CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> >
   const&) */

void __thiscall
CMissionList_Charac::Send_Cleared_Mission_List
          (CMissionList_Charac *this,CUser *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  PacketGuard local_1c [12];
  uint local_10;
  
  cVar1 = std::vector<int,std::allocator<int>>::empty();
  if (cVar1 == '\0') {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085e579c to 085e5824 has its CatchHandler @ 085e5827 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x141);
    iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar2);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2)
      ;
      if (uVar4 <= local_10) break;
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)param_2,local_10);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*piVar3);
      local_10 = local_10 + 1;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
