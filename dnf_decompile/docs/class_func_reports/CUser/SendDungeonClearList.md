# SendDungeonClearList

`_ZN5CUser20SendDungeonClearListEv`

`CUser::SendDungeonClearList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086781b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086781b4  _ZN5CUser20SendDungeonClearListEv
#           CUser::SendDungeonClearList()
# range [0x086781b4, 0x08678281]
086781b4 +0x00:  push   %ebp
086781b5 +0x01:  mov    %esp,%ebp
086781b7 +0x03:  push   %esi
086781b8 +0x04:  push   %ebx
086781b9 +0x05:  sub    $0x20,%esp
086781bc +0x08:  lea    -0x14(%ebp),%eax
086781bf +0x0b:  mov    %eax,(%esp)
086781c2 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086781c7 +0x13:  movl   $0x5,0x8(%esp)
086781cf +0x1b:  movl   $0x0,0x4(%esp)
086781d7 +0x23:  lea    -0x14(%ebp),%eax
086781da +0x26:  mov    %eax,(%esp)
086781dd +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086781e2 +0x2e:  mov    0x8(%ebp),%eax
086781e5 +0x31:  mov    %eax,(%esp)
086781e8 +0x34:  call   085bfab2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1010>  ; global constructors keyed to CParty::cMember::cMember()+0x1010
086781ed +0x39:  mov    %eax,(%esp)
086781f0 +0x3c:  call   0869595e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21b3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21b3
086781f5 +0x41:  mov    %eax,0x4(%esp)
086781f9 +0x45:  lea    -0x14(%ebp),%eax
086781fc +0x48:  mov    %eax,(%esp)
086781ff +0x4b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08678204 +0x50:  mov    0x8(%ebp),%eax
08678207 +0x53:  mov    %eax,(%esp)
0867820a +0x56:  call   085bfab2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1010>  ; global constructors keyed to CParty::cMember::cMember()+0x1010
0867820f +0x5b:  lea    -0x14(%ebp),%edx
08678212 +0x5e:  mov    %edx,0xc(%esp)
08678216 +0x62:  movl   $&_Z18fnEnumDungeonClearscPc,0x8(%esp)
0867821e +0x6a:  mov    0x8(%ebp),%edx
08678221 +0x6d:  mov    %edx,0x4(%esp)
08678225 +0x71:  mov    %eax,(%esp)
08678228 +0x74:  call   084846e2 <_ZNK8WongWork13CDungeonClear16enumDungeonClearEP5CUserPFbscPcEz>  ; WongWork::CDungeonClear::enumDungeonClear(CUser*, bool (*)(short, char, char*), ...) const
0867822d +0x79:  movl   $0x1,0x4(%esp)
08678235 +0x81:  lea    -0x14(%ebp),%eax
08678238 +0x84:  mov    %eax,(%esp)
0867823b +0x87:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08678240 +0x8c:  lea    -0x14(%ebp),%eax
08678243 +0x8f:  mov    %eax,0x4(%esp)
08678247 +0x93:  mov    0x8(%ebp),%eax
0867824a +0x96:  mov    %eax,(%esp)
0867824d +0x99:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08678252 +0x9e:  jmp    0867826f <+0xbb>
08678254 +0xa0:  mov    %edx,%ebx
08678256 +0xa2:  mov    %eax,%esi
08678258 +0xa4:  lea    -0x14(%ebp),%eax
0867825b +0xa7:  mov    %eax,(%esp)
0867825e +0xaa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08678263 +0xaf:  mov    %esi,%eax
08678265 +0xb1:  mov    %ebx,%edx
08678267 +0xb3:  mov    %eax,(%esp)
0867826a +0xb6:  call   08ae3750 <_Unwind_Resume>
0867826f +0xbb:  lea    -0x14(%ebp),%eax
08678272 +0xbe:  mov    %eax,(%esp)
08678275 +0xc1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867827a +0xc6:  add    $0x20,%esp
0867827d +0xc9:  pop    %ebx
0867827e +0xca:  pop    %esi
0867827f +0xcb:  pop    %ebp
08678280 +0xcc:  ret
08678281 +0xcd:  nop
```

## 反编译 C

```c
// CUser::SendDungeonClearList @ 0x86781b4

/* CUser::SendDungeonClearList() */

void __thiscall CUser::SendDungeonClearList(CUser *this)

{
  CDungeonClear *pCVar1;
  int iVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086781dd to 08678251 has its CatchHandler @ 08678254 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,5);
  pCVar1 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefR((CUserCharacInfo *)this);
  iVar2 = WongWork::CDungeonClear::getDungeonClearSize(pCVar1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar2);
  pCVar1 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefR((CUserCharacInfo *)this);
  WongWork::CDungeonClear::enumDungeonClear(pCVar1,this,fnEnumDungeonClear,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
