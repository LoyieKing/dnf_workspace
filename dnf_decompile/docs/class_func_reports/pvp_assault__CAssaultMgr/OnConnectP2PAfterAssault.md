# OnConnectP2PAfterAssault

`_ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci`

`pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef320  _ZN11pvp_assault11CAssaultMgr24OnConnectP2PAfterAssaultEP5CUserPci
#           pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser*, char*, int)
# range [0x082ef320, 0x082ef3bd]
082ef320 +0x00:  push   %ebp
082ef321 +0x01:  mov    %esp,%ebp
082ef323 +0x03:  push   %esi
082ef324 +0x04:  push   %ebx
082ef325 +0x05:  sub    $0x20,%esp
082ef328 +0x08:  mov    0xc(%ebp),%eax
082ef32b +0x0b:  mov    %eax,(%esp)
082ef32e +0x0e:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ef333 +0x13:  mov    %eax,-0x10(%ebp)
082ef336 +0x16:  cmpl   $0x0,-0x10(%ebp)
082ef33a +0x1a:  je     082ef3b1 <+0x91>
082ef33c +0x1c:  mov    0x14(%ebp),%eax
082ef33f +0x1f:  mov    %eax,0xc(%esp)
082ef343 +0x23:  mov    0x10(%ebp),%eax
082ef346 +0x26:  mov    %eax,0x8(%esp)
082ef34a +0x2a:  mov    0xc(%ebp),%eax
082ef34d +0x2d:  mov    %eax,0x4(%esp)
082ef351 +0x31:  mov    -0x10(%ebp),%eax
082ef354 +0x34:  mov    %eax,(%esp)
082ef357 +0x37:  call   0859a48c <_ZN6CParty10ConnectP2PEP5CUserPci>  ; CParty::ConnectP2P(CUser*, char*, int)
082ef35c +0x3c:  jmp    082ef3b1 <+0x91>
082ef35e +0x3e:  cmp    $0x1,%edx
082ef361 +0x41:  je     082ef36b <+0x4b>
082ef363 +0x43:  mov    %eax,(%esp)
082ef366 +0x46:  call   08ae3750 <_Unwind_Resume>
082ef36b +0x4b:  mov    %eax,(%esp)
082ef36e +0x4e:  call   08725ce0 <__cxa_begin_catch>
082ef373 +0x53:  mov    (%eax),%eax
082ef375 +0x55:  mov    %eax,-0xc(%ebp)
082ef378 +0x58:  mov    -0xc(%ebp),%eax
082ef37b +0x5b:  movzbl %al,%eax
082ef37e +0x5e:  mov    %eax,0x8(%esp)
082ef382 +0x62:  movl   $0xf9,0x4(%esp)
082ef38a +0x6a:  mov    0xc(%ebp),%eax
082ef38d +0x6d:  mov    %eax,(%esp)
082ef390 +0x70:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082ef395 +0x75:  jmp    082ef3ac <+0x8c>
082ef397 +0x77:  mov    %edx,%ebx
082ef399 +0x79:  mov    %eax,%esi
082ef39b +0x7b:  call   08725c30 <__cxa_end_catch>
082ef3a0 +0x80:  mov    %esi,%eax
082ef3a2 +0x82:  mov    %ebx,%edx
082ef3a4 +0x84:  mov    %eax,(%esp)
082ef3a7 +0x87:  call   08ae3750 <_Unwind_Resume>
082ef3ac +0x8c:  call   08725c30 <__cxa_end_catch>
082ef3b1 +0x91:  mov    $0x1,%eax
082ef3b6 +0x96:  add    $0x20,%esp
082ef3b9 +0x99:  pop    %ebx
082ef3ba +0x9a:  pop    %esi
082ef3bb +0x9b:  pop    %ebp
082ef3bc +0x9c:  ret
082ef3bd +0x9d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault @ 0x82ef320

/* pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser*, char*, int) */

undefined4
pvp_assault::CAssaultMgr::OnConnectP2PAfterAssault(CUser *param_1,char *param_2,int param_3)

{
  CUser *pCVar1;
  
                    /* try { // try from 082ef32e to 082ef35b has its CatchHandler @ 082ef35e */
  pCVar1 = (CUser *)CUser::GetParty((CUser *)param_2);
  if (pCVar1 != (CUser *)0x0) {
    CParty::ConnectP2P(pCVar1,param_2,param_3);
  }
  return 1;
}
```
