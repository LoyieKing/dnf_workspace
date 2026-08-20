# SendProperDungeonClearCount

`_ZN5CUser27SendProperDungeonClearCountEv`

`CUser::SendProperDungeonClearCount()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681820  _ZN5CUser27SendProperDungeonClearCountEv
#           CUser::SendProperDungeonClearCount()
# range [0x08681820, 0x086818fb]
08681820 +0x00:  push   %ebp
08681821 +0x01:  mov    %esp,%ebp
08681823 +0x03:  push   %esi
08681824 +0x04:  push   %ebx
08681825 +0x05:  sub    $0x20,%esp
08681828 +0x08:  mov    0x8(%ebp),%eax
0868182b +0x0b:  mov    %eax,(%esp)
0868182e +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08681833 +0x13:  cmp    $0x2,%eax
08681836 +0x16:  setle  %al
08681839 +0x19:  test   %al,%al
0868183b +0x1b:  jne    086818f0 <+0xd0>
08681841 +0x21:  mov    0x8(%ebp),%eax
08681844 +0x24:  mov    %eax,(%esp)
08681847 +0x27:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868184c +0x2c:  test   %eax,%eax
0868184e +0x2e:  sete   %al
08681851 +0x31:  test   %al,%al
08681853 +0x33:  jne    086818f3 <+0xd3>
08681859 +0x39:  lea    -0x18(%ebp),%eax
0868185c +0x3c:  mov    %eax,(%esp)
0868185f +0x3f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08681864 +0x44:  movl   $0x10b,0x8(%esp)
0868186c +0x4c:  movl   $0x0,0x4(%esp)
08681874 +0x54:  lea    -0x18(%ebp),%eax
08681877 +0x57:  mov    %eax,(%esp)
0868187a +0x5a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868187f +0x5f:  mov    0x8(%ebp),%eax
08681882 +0x62:  mov    %eax,(%esp)
08681885 +0x65:  call   08335c80 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x126>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x126
0868188a +0x6a:  mov    %ax,-0xa(%ebp)
0868188e +0x6e:  movswl -0xa(%ebp),%eax
08681892 +0x72:  mov    %eax,0x4(%esp)
08681896 +0x76:  lea    -0x18(%ebp),%eax
08681899 +0x79:  mov    %eax,(%esp)
0868189c +0x7c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086818a1 +0x81:  movl   $0x1,0x4(%esp)
086818a9 +0x89:  lea    -0x18(%ebp),%eax
086818ac +0x8c:  mov    %eax,(%esp)
086818af +0x8f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086818b4 +0x94:  lea    -0x18(%ebp),%eax
086818b7 +0x97:  mov    %eax,0x4(%esp)
086818bb +0x9b:  mov    0x8(%ebp),%eax
086818be +0x9e:  mov    %eax,(%esp)
086818c1 +0xa1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086818c6 +0xa6:  jmp    086818e3 <+0xc3>
086818c8 +0xa8:  mov    %edx,%ebx
086818ca +0xaa:  mov    %eax,%esi
086818cc +0xac:  lea    -0x18(%ebp),%eax
086818cf +0xaf:  mov    %eax,(%esp)
086818d2 +0xb2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086818d7 +0xb7:  mov    %esi,%eax
086818d9 +0xb9:  mov    %ebx,%edx
086818db +0xbb:  mov    %eax,(%esp)
086818de +0xbe:  call   08ae3750 <_Unwind_Resume>
086818e3 +0xc3:  lea    -0x18(%ebp),%eax
086818e6 +0xc6:  mov    %eax,(%esp)
086818e9 +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086818ee +0xce:  jmp    086818f4 <+0xd4>
086818f0 +0xd0:  nop
086818f1 +0xd1:  jmp    086818f4 <+0xd4>
086818f3 +0xd3:  nop
086818f4 +0xd4:  add    $0x20,%esp
086818f7 +0xd7:  pop    %ebx
086818f8 +0xd8:  pop    %esi
086818f9 +0xd9:  pop    %ebp
086818fa +0xda:  ret
086818fb +0xdb:  nop
```

## 反编译 C

```c
// CUser::SendProperDungeonClearCount @ 0x8681820

/* CUser::SendProperDungeonClearCount() */

void __thiscall CUser::SendProperDungeonClearCount(CUser *this)

{
  int iVar1;
  PacketGuard local_1c [14];
  short local_e;
  
  iVar1 = get_state(this);
  if ((2 < iVar1) && (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this), iVar1 != 0))
  {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0868187a to 086818c5 has its CatchHandler @ 086818c8 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x10b);
    local_e = CUserCharacInfo::GetProperDungeonClearCount((CUserCharacInfo *)this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)local_e);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    Send(this,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
