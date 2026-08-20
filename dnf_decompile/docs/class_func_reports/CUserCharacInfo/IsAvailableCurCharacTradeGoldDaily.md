# IsAvailableCurCharacTradeGoldDaily

`_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj`

`CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08646496` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646496  _ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj
#           CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)
# range [0x08646496, 0x08646589]
08646496 +0x00:  push   %ebp
08646497 +0x01:  mov    %esp,%ebp
08646499 +0x03:  push   %edi
0864649a +0x04:  push   %esi
0864649b +0x05:  push   %ebx
0864649c +0x06:  sub    $0x4c,%esp
0864649f +0x09:  mov    0x8(%ebp),%eax
086464a2 +0x0c:  mov    0x10(%eax),%eax
086464a5 +0x0f:  test   %eax,%eax
086464a7 +0x11:  jne    086464b3 <+0x1d>
086464a9 +0x13:  mov    $0x0,%eax
086464ae +0x18:  jmp    08646582 <+0xec>
086464b3 +0x1d:  mov    0x8(%ebp),%eax
086464b6 +0x20:  mov    %eax,(%esp)
086464b9 +0x23:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086464be +0x28:  mov    %eax,%ebx
086464c0 +0x2a:  mov    0x8(%ebp),%eax
086464c3 +0x2d:  mov    %eax,(%esp)
086464c6 +0x30:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086464cb +0x35:  imul   %ebx,%eax
086464ce +0x38:  imul   $0x2710,%eax,%eax
086464d4 +0x3e:  mov    %eax,-0x1c(%ebp)
086464d7 +0x41:  mov    0x8(%ebp),%eax
086464da +0x44:  mov    0x10(%eax),%eax
086464dd +0x47:  add    $0x65,%eax
086464e0 +0x4a:  mov    %eax,(%esp)
086464e3 +0x4d:  call   0869599c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21f1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21f1
086464e8 +0x52:  add    0xc(%ebp),%eax
086464eb +0x55:  cmp    -0x1c(%ebp),%eax
086464ee +0x58:  seta   %al
086464f1 +0x5b:  test   %al,%al
086464f3 +0x5d:  je     0864657d <+0xe7>
086464f9 +0x63:  mov    0x8(%ebp),%eax
086464fc +0x66:  mov    0x10(%eax),%eax
086464ff +0x69:  add    $0x65,%eax
08646502 +0x6c:  mov    %eax,(%esp)
08646505 +0x6f:  call   0869599c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21f1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21f1
0864650a +0x74:  mov    %eax,%edi
0864650c +0x76:  mov    0x8(%ebp),%eax
0864650f +0x79:  mov    %eax,(%esp)
08646512 +0x7c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08646517 +0x81:  mov    %eax,%esi
08646519 +0x83:  mov    0x8(%ebp),%eax
0864651c +0x86:  mov    %eax,(%esp)
0864651f +0x89:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08646524 +0x8e:  mov    %eax,%ebx
08646526 +0x90:  movl   $0x0,0xc(%esp)
0864652e +0x98:  movl   $0x3f1,0x8(%esp)
08646536 +0xa0:  movl   $&_ZZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEjE19__PRETTY_FUNCTION__,0x4(%esp)
0864653e +0xa8:  lea    -0x2c(%ebp),%eax
08646541 +0xab:  mov    %eax,(%esp)
08646544 +0xae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08646549 +0xb3:  mov    %edi,0x18(%esp)
0864654d +0xb7:  mov    0xc(%ebp),%eax
08646550 +0xba:  mov    %eax,0x14(%esp)
08646554 +0xbe:  mov    -0x1c(%ebp),%eax
08646557 +0xc1:  mov    %eax,0x10(%esp)
0864655b +0xc5:  mov    %esi,0xc(%esp)
0864655f +0xc9:  mov    %ebx,0x8(%esp)
08646563 +0xcd:  movl   $"TRADE_RESTIRCTION charac_name(%s), charac_level(%d), limit_gold(%u), add_gold(%u), use_gold(%u)",0x4(%esp)
0864656b +0xd5:  lea    -0x2c(%ebp),%eax
0864656e +0xd8:  mov    %eax,(%esp)
08646571 +0xdb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08646576 +0xe0:  mov    $0x0,%eax
0864657b +0xe5:  jmp    08646582 <+0xec>
0864657d +0xe7:  mov    $0x1,%eax
08646582 +0xec:  add    $0x4c,%esp
08646585 +0xef:  pop    %ebx
08646586 +0xf0:  pop    %esi
08646587 +0xf1:  pop    %edi
08646588 +0xf2:  pop    %ebp
08646589 +0xf3:  ret
```

## 反编译 C

```c
// CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily @ 0x8646496

/* CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int) */

undefined4 __thiscall
CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(CUserCharacInfo *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_30 [16];
  uint local_20;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_charac_level(this);
    iVar3 = get_charac_level(this);
    local_20 = iVar3 * iVar2 * 10000;
    iVar2 = CReliablePerson::GetTradeGoldDaily((CReliablePerson *)(*(int *)(this + 0x10) + 0x65));
    if (local_20 < iVar2 + param_1) {
      uVar1 = CReliablePerson::GetTradeGoldDaily((CReliablePerson *)(*(int *)(this + 0x10) + 0x65));
      uVar4 = get_charac_level(this);
      uVar5 = getCurCharacName(this);
      cMyTrace::cMyTrace(local_30,
                         "bool CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)",
                         0x3f1,0);
      cMyTrace::operator()
                (local_30,
                 "TRADE_RESTIRCTION charac_name(%s), charac_level(%d), limit_gold(%u), add_gold(%u), use_gold(%u)"
                 ,uVar5,uVar4,local_20,param_1,uVar1);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
