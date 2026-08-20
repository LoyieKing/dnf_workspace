# CheckMemberLastTryAssaultTime

`_ZN6CParty29CheckMemberLastTryAssaultTimeEv`

`CParty::CheckMemberLastTryAssaultTime()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bcab6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bcab6  _ZN6CParty29CheckMemberLastTryAssaultTimeEv
#           CParty::CheckMemberLastTryAssaultTime()
# range [0x085bcab6, 0x085bcb3f]
085bcab6 +0x00:  push   %ebp
085bcab7 +0x01:  mov    %esp,%ebp
085bcab9 +0x03:  sub    $0x28,%esp
085bcabc +0x06:  movl   $0x0,-0x18(%ebp)
085bcac3 +0x0d:  jmp    085bcb2e <+0x78>
085bcac5 +0x0f:  mov    -0x18(%ebp),%eax
085bcac8 +0x12:  mov    %eax,0x4(%esp)
085bcacc +0x16:  mov    0x8(%ebp),%eax
085bcacf +0x19:  mov    %eax,(%esp)
085bcad2 +0x1c:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bcad7 +0x21:  xor    $0x1,%eax
085bcada +0x24:  test   %al,%al
085bcadc +0x26:  jne    085bcb29 <+0x73>
085bcade +0x28:  mov    -0x18(%ebp),%edx
085bcae1 +0x2b:  mov    0x8(%ebp),%ecx
085bcae4 +0x2e:  mov    %edx,%eax
085bcae6 +0x30:  add    %eax,%eax
085bcae8 +0x32:  add    %edx,%eax
085bcaea +0x34:  shl    $0x3,%eax
085bcaed +0x37:  lea    (%ecx,%eax,1),%eax
085bcaf0 +0x3a:  add    $0x78,%eax
085bcaf3 +0x3d:  mov    (%eax),%eax
085bcaf5 +0x3f:  mov    %eax,-0x14(%ebp)
085bcaf8 +0x42:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085bcaff +0x49:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085bcb04 +0x4e:  mov    %eax,-0x10(%ebp)
085bcb07 +0x51:  mov    -0x14(%ebp),%eax
085bcb0a +0x54:  mov    %eax,(%esp)
085bcb0d +0x57:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
085bcb12 +0x5c:  mov    %eax,-0xc(%ebp)
085bcb15 +0x5f:  mov    -0xc(%ebp),%eax
085bcb18 +0x62:  add    $0x258,%eax
085bcb1d +0x67:  cmp    -0x10(%ebp),%eax
085bcb20 +0x6a:  jle    085bcb2a <+0x74>
085bcb22 +0x6c:  mov    $0x1,%eax
085bcb27 +0x71:  jmp    085bcb3e <+0x88>
085bcb29 +0x73:  nop
085bcb2a +0x74:  addl   $0x1,-0x18(%ebp)
085bcb2e +0x78:  cmpl   $0x3,-0x18(%ebp)
085bcb32 +0x7c:  setle  %al
085bcb35 +0x7f:  test   %al,%al
085bcb37 +0x81:  jne    085bcac5 <+0xf>
085bcb39 +0x83:  mov    $0x0,%eax
085bcb3e +0x88:  leave
085bcb3f +0x89:  ret
```

## 反编译 C

```c
// CParty::CheckMemberLastTryAssaultTime @ 0x85bcab6

/* CParty::CheckMemberLastTryAssaultTime() */

undefined4 __thiscall CParty::CheckMemberLastTryAssaultTime(CParty *this)

{
  CUserCharacInfo *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  local_1c = 0;
  do {
    if (3 < local_1c) {
      return 0;
    }
    cVar1 = checkValidUser(this,local_1c);
    if (cVar1 == '\x01') {
      this_00 = *(CUserCharacInfo **)(this + local_1c * 0x18 + 0x78);
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar3 = CUserCharacInfo::GetCurCharacChaosKillTime(this_00);
      if (iVar2 < iVar3 + 600) {
        return 1;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
