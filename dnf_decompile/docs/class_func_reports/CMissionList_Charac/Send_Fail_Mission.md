# Send_Fail_Mission

`_ZN19CMissionList_Charac17Send_Fail_MissionER5CUsers`

`CMissionList_Charac::Send_Fail_Mission(CUser&, short)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5858` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5858  _ZN19CMissionList_Charac17Send_Fail_MissionER5CUsers
#           CMissionList_Charac::Send_Fail_Mission(CUser&, short)
# range [0x085e5858, 0x085e58f3]
085e5858 +0x00:  push   %ebp
085e5859 +0x01:  mov    %esp,%ebp
085e585b +0x03:  push   %esi
085e585c +0x04:  push   %ebx
085e585d +0x05:  sub    $0x30,%esp
085e5860 +0x08:  mov    0x10(%ebp),%eax
085e5863 +0x0b:  mov    %ax,-0x1c(%ebp)
085e5867 +0x0f:  lea    -0x14(%ebp),%eax
085e586a +0x12:  mov    %eax,(%esp)
085e586d +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085e5872 +0x1a:  movl   $0x157,0x8(%esp)
085e587a +0x22:  movl   $0x0,0x4(%esp)
085e5882 +0x2a:  lea    -0x14(%ebp),%eax
085e5885 +0x2d:  mov    %eax,(%esp)
085e5888 +0x30:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085e588d +0x35:  movswl -0x1c(%ebp),%eax
085e5891 +0x39:  mov    %eax,0x4(%esp)
085e5895 +0x3d:  lea    -0x14(%ebp),%eax
085e5898 +0x40:  mov    %eax,(%esp)
085e589b +0x43:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085e58a0 +0x48:  movl   $0x1,0x4(%esp)
085e58a8 +0x50:  lea    -0x14(%ebp),%eax
085e58ab +0x53:  mov    %eax,(%esp)
085e58ae +0x56:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085e58b3 +0x5b:  lea    -0x14(%ebp),%eax
085e58b6 +0x5e:  mov    %eax,0x4(%esp)
085e58ba +0x62:  mov    0xc(%ebp),%eax
085e58bd +0x65:  mov    %eax,(%esp)
085e58c0 +0x68:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085e58c5 +0x6d:  jmp    085e58e2 <+0x8a>
085e58c7 +0x6f:  mov    %edx,%ebx
085e58c9 +0x71:  mov    %eax,%esi
085e58cb +0x73:  lea    -0x14(%ebp),%eax
085e58ce +0x76:  mov    %eax,(%esp)
085e58d1 +0x79:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085e58d6 +0x7e:  mov    %esi,%eax
085e58d8 +0x80:  mov    %ebx,%edx
085e58da +0x82:  mov    %eax,(%esp)
085e58dd +0x85:  call   08ae3750 <_Unwind_Resume>
085e58e2 +0x8a:  lea    -0x14(%ebp),%eax
085e58e5 +0x8d:  mov    %eax,(%esp)
085e58e8 +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085e58ed +0x95:  add    $0x30,%esp
085e58f0 +0x98:  pop    %ebx
085e58f1 +0x99:  pop    %esi
085e58f2 +0x9a:  pop    %ebp
085e58f3 +0x9b:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Send_Fail_Mission @ 0x85e5858

/* CMissionList_Charac::Send_Fail_Mission(CUser&, short) */

void __thiscall
CMissionList_Charac::Send_Fail_Mission(CMissionList_Charac *this,CUser *param_1,short param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085e5888 to 085e58c4 has its CatchHandler @ 085e58c7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x157);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
