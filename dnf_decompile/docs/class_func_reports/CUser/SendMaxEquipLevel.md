# SendMaxEquipLevel

`_ZN5CUser17SendMaxEquipLevelEv`

`CUser::SendMaxEquipLevel()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086910b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086910b2  _ZN5CUser17SendMaxEquipLevelEv
#           CUser::SendMaxEquipLevel()
# range [0x086910b2, 0x08691159]
086910b2 +0x00:  push   %ebp
086910b3 +0x01:  mov    %esp,%ebp
086910b5 +0x03:  push   %esi
086910b6 +0x04:  push   %ebx
086910b7 +0x05:  sub    $0x20,%esp
086910ba +0x08:  lea    -0x14(%ebp),%eax
086910bd +0x0b:  mov    %eax,(%esp)
086910c0 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086910c5 +0x13:  lea    -0x14(%ebp),%eax
086910c8 +0x16:  mov    %eax,(%esp)
086910cb +0x19:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086910d0 +0x1e:  movl   $0x1b6,0x8(%esp)
086910d8 +0x26:  movl   $0x0,0x4(%esp)
086910e0 +0x2e:  lea    -0x14(%ebp),%eax
086910e3 +0x31:  mov    %eax,(%esp)
086910e6 +0x34:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086910eb +0x39:  mov    0x8(%ebp),%eax
086910ee +0x3c:  mov    %eax,(%esp)
086910f1 +0x3f:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
086910f6 +0x44:  mov    %eax,0x4(%esp)
086910fa +0x48:  lea    -0x14(%ebp),%eax
086910fd +0x4b:  mov    %eax,(%esp)
08691100 +0x4e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08691105 +0x53:  movl   $0x1,0x4(%esp)
0869110d +0x5b:  lea    -0x14(%ebp),%eax
08691110 +0x5e:  mov    %eax,(%esp)
08691113 +0x61:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08691118 +0x66:  lea    -0x14(%ebp),%eax
0869111b +0x69:  mov    %eax,0x4(%esp)
0869111f +0x6d:  mov    0x8(%ebp),%eax
08691122 +0x70:  mov    %eax,(%esp)
08691125 +0x73:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0869112a +0x78:  jmp    08691147 <+0x95>
0869112c +0x7a:  mov    %edx,%ebx
0869112e +0x7c:  mov    %eax,%esi
08691130 +0x7e:  lea    -0x14(%ebp),%eax
08691133 +0x81:  mov    %eax,(%esp)
08691136 +0x84:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0869113b +0x89:  mov    %esi,%eax
0869113d +0x8b:  mov    %ebx,%edx
0869113f +0x8d:  mov    %eax,(%esp)
08691142 +0x90:  call   08ae3750 <_Unwind_Resume>
08691147 +0x95:  lea    -0x14(%ebp),%eax
0869114a +0x98:  mov    %eax,(%esp)
0869114d +0x9b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691152 +0xa0:  add    $0x20,%esp
08691155 +0xa3:  pop    %ebx
08691156 +0xa4:  pop    %esi
08691157 +0xa5:  pop    %ebp
08691158 +0xa6:  ret
08691159 +0xa7:  nop
```

## 反编译 C

```c
// CUser::SendMaxEquipLevel @ 0x86910b2

/* CUser::SendMaxEquipLevel() */

void __thiscall CUser::SendMaxEquipLevel(CUser *this)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086910cb to 08691129 has its CatchHandler @ 0869112c */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b6);
  iVar1 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
