# SendHasNoGoWithApcQuestInParty

`_ZN5CUser30SendHasNoGoWithApcQuestInPartyEPK5Quest`

`CUser::SendHasNoGoWithApcQuestInParty(Quest const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866d972` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866d972  _ZN5CUser30SendHasNoGoWithApcQuestInPartyEPK5Quest
#           CUser::SendHasNoGoWithApcQuestInParty(Quest const*)
# range [0x0866d972, 0x0866da89]
0866d972 +0x000:  push   %ebp
0866d973 +0x001:  mov    %esp,%ebp
0866d975 +0x003:  push   %esi
0866d976 +0x004:  push   %ebx
0866d977 +0x005:  sub    $0x20,%esp
0866d97a +0x008:  mov    0x8(%ebp),%eax
0866d97d +0x00b:  mov    %eax,(%esp)
0866d980 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0866d985 +0x013:  cmp    $0x5,%eax
0866d988 +0x016:  je     0866d99a <+0x28>
0866d98a +0x018:  mov    0x8(%ebp),%eax
0866d98d +0x01b:  mov    %eax,(%esp)
0866d990 +0x01e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0866d995 +0x023:  cmp    $0xa,%eax
0866d998 +0x026:  jne    0866d9b9 <+0x47>
0866d99a +0x028:  mov    0xc(%ebp),%eax
0866d99d +0x02b:  mov    0x7c(%eax),%eax
0866d9a0 +0x02e:  cmp    $0x3,%eax
0866d9a3 +0x031:  jne    0866d9b9 <+0x47>
0866d9a5 +0x033:  mov    0xc(%ebp),%eax
0866d9a8 +0x036:  mov    0x80(%eax),%eax
0866d9ae +0x03c:  test   %eax,%eax
0866d9b0 +0x03e:  jne    0866d9b9 <+0x47>
0866d9b2 +0x040:  mov    $0x1,%eax
0866d9b7 +0x045:  jmp    0866d9be <+0x4c>
0866d9b9 +0x047:  mov    $0x0,%eax
0866d9be +0x04c:  test   %al,%al
0866d9c0 +0x04e:  je     0866da83 <+0x111>
0866d9c6 +0x054:  mov    0x8(%ebp),%eax
0866d9c9 +0x057:  mov    %eax,(%esp)
0866d9cc +0x05a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0866d9d1 +0x05f:  mov    %eax,-0xc(%ebp)
0866d9d4 +0x062:  cmpl   $0x0,-0xc(%ebp)
0866d9d8 +0x066:  je     0866da82 <+0x110>
0866d9de +0x06c:  mov    0xc(%ebp),%eax
0866d9e1 +0x06f:  mov    %eax,0x4(%esp)
0866d9e5 +0x073:  mov    -0xc(%ebp),%eax
0866d9e8 +0x076:  mov    %eax,(%esp)
0866d9eb +0x079:  call   085b65a2 <_ZN6CParty26HasNoQuestGoWithApcInPartyEPK5Quest>  ; CParty::HasNoQuestGoWithApcInParty(Quest const*)
0866d9f0 +0x07e:  test   %al,%al
0866d9f2 +0x080:  je     0866da83 <+0x111>
0866d9f8 +0x086:  lea    -0x18(%ebp),%eax
0866d9fb +0x089:  mov    %eax,(%esp)
0866d9fe +0x08c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866da03 +0x091:  movl   $0xa8,0x8(%esp)
0866da0b +0x099:  movl   $0x0,0x4(%esp)
0866da13 +0x0a1:  lea    -0x18(%ebp),%eax
0866da16 +0x0a4:  mov    %eax,(%esp)
0866da19 +0x0a7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866da1e +0x0ac:  mov    0xc(%ebp),%eax
0866da21 +0x0af:  mov    0x4(%eax),%eax
0866da24 +0x0b2:  mov    %eax,0x4(%esp)
0866da28 +0x0b6:  lea    -0x18(%ebp),%eax
0866da2b +0x0b9:  mov    %eax,(%esp)
0866da2e +0x0bc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866da33 +0x0c1:  movl   $0x1,0x4(%esp)
0866da3b +0x0c9:  lea    -0x18(%ebp),%eax
0866da3e +0x0cc:  mov    %eax,(%esp)
0866da41 +0x0cf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866da46 +0x0d4:  lea    -0x18(%ebp),%eax
0866da49 +0x0d7:  mov    %eax,0x4(%esp)
0866da4d +0x0db:  mov    -0xc(%ebp),%eax
0866da50 +0x0de:  mov    %eax,(%esp)
0866da53 +0x0e1:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0866da58 +0x0e6:  jmp    0866da75 <+0x103>
0866da5a +0x0e8:  mov    %edx,%ebx
0866da5c +0x0ea:  mov    %eax,%esi
0866da5e +0x0ec:  lea    -0x18(%ebp),%eax
0866da61 +0x0ef:  mov    %eax,(%esp)
0866da64 +0x0f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866da69 +0x0f7:  mov    %esi,%eax
0866da6b +0x0f9:  mov    %ebx,%edx
0866da6d +0x0fb:  mov    %eax,(%esp)
0866da70 +0x0fe:  call   08ae3750 <_Unwind_Resume>
0866da75 +0x103:  lea    -0x18(%ebp),%eax
0866da78 +0x106:  mov    %eax,(%esp)
0866da7b +0x109:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866da80 +0x10e:  jmp    0866da83 <+0x111>
0866da82 +0x110:  nop
0866da83 +0x111:  add    $0x20,%esp
0866da86 +0x114:  pop    %ebx
0866da87 +0x115:  pop    %esi
0866da88 +0x116:  pop    %ebp
0866da89 +0x117:  ret
```

## 反编译 C

```c
// CUser::SendHasNoGoWithApcQuestInParty @ 0x866d972

/* CUser::SendHasNoGoWithApcQuestInParty(Quest const*) */

void __thiscall CUser::SendHasNoGoWithApcQuestInParty(CUser *this,Quest *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  iVar3 = get_state(this);
  if (iVar3 == 5) {
LAB_0866d99a:
    if ((*(int *)(param_1 + 0x7c) == 3) && (*(int *)(param_1 + 0x80) == 0)) {
      bVar1 = true;
      goto LAB_0866d9be;
    }
  }
  else {
    iVar3 = get_state(this);
    if (iVar3 == 10) goto LAB_0866d99a;
  }
  bVar1 = false;
LAB_0866d9be:
  if (bVar1) {
    local_10 = (CParty *)GetParty(this);
    if (local_10 != (CParty *)0x0) {
      cVar2 = CParty::HasNoQuestGoWithApcInParty(local_10,param_1);
      if (cVar2 != '\0') {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0866da19 to 0866da57 has its CatchHandler @ 0866da5a */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa8);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(param_1 + 4));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CParty::send_to_party(local_10,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
  }
  return;
}
```
