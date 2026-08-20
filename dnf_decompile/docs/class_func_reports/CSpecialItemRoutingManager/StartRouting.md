# StartRouting

`_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj`

`CSpecialItemRoutingManager::StartRouting(CUser*, Inven_Item&, unsigned int)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860a9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a9d4  _ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj
#           CSpecialItemRoutingManager::StartRouting(CUser*, Inven_Item&, unsigned int)
# range [0x0860a9d4, 0x0860ab2d]
0860a9d4 +0x000:  push   %ebp
0860a9d5 +0x001:  mov    %esp,%ebp
0860a9d7 +0x003:  push   %esi
0860a9d8 +0x004:  push   %ebx
0860a9d9 +0x005:  sub    $0x30,%esp
0860a9dc +0x008:  mov    0xc(%ebp),%eax
0860a9df +0x00b:  mov    %eax,(%esp)
0860a9e2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0860a9e7 +0x013:  cmp    $0x5,%eax
0860a9ea +0x016:  je     0860a9fb <+0x27>
0860a9ec +0x018:  cmp    $0xc,%eax
0860a9ef +0x01b:  je     0860a9fe <+0x2a>
0860a9f1 +0x01d:  mov    $0x1,%ebx
0860a9f6 +0x022:  jmp    0860ab25 <+0x151>
0860a9fb +0x027:  nop
0860a9fc +0x028:  jmp    0860a9ff <+0x2b>
0860a9fe +0x02a:  nop
0860a9ff +0x02b:  mov    0xc(%ebp),%eax
0860aa02 +0x02e:  mov    %eax,(%esp)
0860aa05 +0x031:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0860aa0a +0x036:  mov    %eax,-0x10(%ebp)
0860aa0d +0x039:  cmpl   $0x0,-0x10(%ebp)
0860aa11 +0x03d:  jne    0860aa1d <+0x49>
0860aa13 +0x03f:  mov    $0x1,%ebx
0860aa18 +0x044:  jmp    0860ab25 <+0x151>
0860aa1d +0x049:  mov    0x10(%ebp),%eax
0860aa20 +0x04c:  mov    0x2(%eax),%eax
0860aa23 +0x04f:  mov    %eax,%ebx
0860aa25 +0x051:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860aa2a +0x056:  mov    %ebx,0x4(%esp)
0860aa2e +0x05a:  mov    %eax,(%esp)
0860aa31 +0x05d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0860aa36 +0x062:  mov    %eax,-0xc(%ebp)
0860aa39 +0x065:  cmpl   $0x0,-0xc(%ebp)
0860aa3d +0x069:  jne    0860aa49 <+0x75>
0860aa3f +0x06b:  mov    $0x1,%ebx
0860aa44 +0x070:  jmp    0860ab25 <+0x151>
0860aa49 +0x075:  mov    -0x10(%ebp),%eax
0860aa4c +0x078:  mov    %eax,(%esp)
0860aa4f +0x07b:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
0860aa54 +0x080:  test   %al,%al
0860aa56 +0x082:  je     0860aa62 <+0x8e>
0860aa58 +0x084:  mov    $0x12,%ebx
0860aa5d +0x089:  jmp    0860ab25 <+0x151>
0860aa62 +0x08e:  mov    -0x10(%ebp),%eax
0860aa65 +0x091:  mov    %eax,(%esp)
0860aa68 +0x094:  call   0860b59c <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0x7f>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0x7f
0860aa6d +0x099:  mov    0x14(%ebp),%eax
0860aa70 +0x09c:  mov    %eax,0x8(%esp)
0860aa74 +0x0a0:  mov    0x10(%ebp),%eax
0860aa77 +0x0a3:  mov    %eax,0x4(%esp)
0860aa7b +0x0a7:  mov    -0x10(%ebp),%eax
0860aa7e +0x0aa:  mov    %eax,(%esp)
0860aa81 +0x0ad:  call   0860b5cc <_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev+0xaf>  ; global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()+0xaf
0860aa86 +0x0b2:  mov    -0x10(%ebp),%eax
0860aa89 +0x0b5:  mov    %eax,0x4(%esp)
0860aa8d +0x0b9:  mov    0x8(%ebp),%eax
0860aa90 +0x0bc:  mov    %eax,(%esp)
0860aa93 +0x0bf:  call   0860b45c <_ZN26CSpecialItemRoutingManager11insertTimerEP6CParty>  ; CSpecialItemRoutingManager::insertTimer(CParty*)
0860aa98 +0x0c4:  lea    -0x1c(%ebp),%eax
0860aa9b +0x0c7:  mov    %eax,(%esp)
0860aa9e +0x0ca:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0860aaa3 +0x0cf:  movl   $0x119,0x8(%esp)
0860aaab +0x0d7:  movl   $0x0,0x4(%esp)
0860aab3 +0x0df:  lea    -0x1c(%ebp),%eax
0860aab6 +0x0e2:  mov    %eax,(%esp)
0860aab9 +0x0e5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0860aabe +0x0ea:  mov    0x10(%ebp),%eax
0860aac1 +0x0ed:  mov    0x2(%eax),%eax
0860aac4 +0x0f0:  mov    %eax,0x4(%esp)
0860aac8 +0x0f4:  lea    -0x1c(%ebp),%eax
0860aacb +0x0f7:  mov    %eax,(%esp)
0860aace +0x0fa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0860aad3 +0x0ff:  movl   $0x1,0x4(%esp)
0860aadb +0x107:  lea    -0x1c(%ebp),%eax
0860aade +0x10a:  mov    %eax,(%esp)
0860aae1 +0x10d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0860aae6 +0x112:  lea    -0x1c(%ebp),%eax
0860aae9 +0x115:  mov    %eax,0x4(%esp)
0860aaed +0x119:  mov    -0x10(%ebp),%eax
0860aaf0 +0x11c:  mov    %eax,(%esp)
0860aaf3 +0x11f:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0860aaf8 +0x124:  mov    $0x0,%ebx
0860aafd +0x129:  lea    -0x1c(%ebp),%eax
0860ab00 +0x12c:  mov    %eax,(%esp)
0860ab03 +0x12f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0860ab08 +0x134:  jmp    0860ab25 <+0x151>
0860ab0a +0x136:  mov    %edx,%ebx
0860ab0c +0x138:  mov    %eax,%esi
0860ab0e +0x13a:  lea    -0x1c(%ebp),%eax
0860ab11 +0x13d:  mov    %eax,(%esp)
0860ab14 +0x140:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0860ab19 +0x145:  mov    %esi,%eax
0860ab1b +0x147:  mov    %ebx,%edx
0860ab1d +0x149:  mov    %eax,(%esp)
0860ab20 +0x14c:  call   08ae3750 <_Unwind_Resume>
0860ab25 +0x151:  mov    %ebx,%eax
0860ab27 +0x153:  add    $0x30,%esp
0860ab2a +0x156:  pop    %ebx
0860ab2b +0x157:  pop    %esi
0860ab2c +0x158:  pop    %ebp
0860ab2d +0x159:  ret
```

## 反编译 C

```c
// CSpecialItemRoutingManager::StartRouting @ 0x860a9d4

/* CSpecialItemRoutingManager::StartRouting(CUser*, Inven_Item&, unsigned int) */

undefined4 __thiscall
CSpecialItemRoutingManager::StartRouting
          (CSpecialItemRoutingManager *this,CUser *param_1,Inven_Item *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 5) || (iVar2 == 0xc)) {
    local_14 = (CParty *)CUser::GetParty(param_1);
    if (local_14 == (CParty *)0x0) {
      uVar3 = 1;
    }
    else {
      iVar2 = *(int *)(param_2 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = CDataManager::find_item(this_00,iVar2);
      if (local_10 == 0) {
        uVar3 = 1;
      }
      else {
        cVar1 = CParty::IsRoutingState(local_14);
        if (cVar1 == '\0') {
          CParty::SetStartRouting(local_14);
          CParty::SetRoutingItem(local_14,param_2,param_3);
          insertTimer(this,local_14);
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0860aab9 to 0860aaf7 has its CatchHandler @ 0860ab0a */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x119);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(param_2 + 2));
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
          CParty::send_to_party(local_14,local_20);
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_20);
        }
        else {
          uVar3 = 0x12;
        }
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
