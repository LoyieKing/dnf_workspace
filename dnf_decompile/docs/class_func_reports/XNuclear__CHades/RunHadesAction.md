# RunHadesAction

`_ZN8XNuclear6CHades14RunHadesActionEjjjjPc`

`XNuclear::CHades::RunHadesAction(unsigned int, unsigned int, unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b95bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b95bc  _ZN8XNuclear6CHades14RunHadesActionEjjjjPc
#           XNuclear::CHades::RunHadesAction(unsigned int, unsigned int, unsigned int, unsigned int, char*)
# range [0x084b95bc, 0x084b9717]
084b95bc +0x000:  push   %ebp
084b95bd +0x001:  mov    %esp,%ebp
084b95bf +0x003:  sub    $0x28,%esp
084b95c2 +0x006:  cmpl   $0x40,0xc(%ebp)
084b95c6 +0x00a:  je     084b95f8 <+0x3c>
084b95c8 +0x00c:  mov    0x8(%ebp),%eax
084b95cb +0x00f:  mov    0x20(%eax),%eax
084b95ce +0x012:  lea    0x79700(%eax),%edx
084b95d4 +0x018:  mov    0x18(%ebp),%eax
084b95d7 +0x01b:  mov    %eax,0x10(%esp)
084b95db +0x01f:  mov    0x14(%ebp),%eax
084b95de +0x022:  mov    %eax,0xc(%esp)
084b95e2 +0x026:  mov    0x10(%ebp),%eax
084b95e5 +0x029:  mov    %eax,0x8(%esp)
084b95e9 +0x02d:  mov    0xc(%ebp),%eax
084b95ec +0x030:  mov    %eax,0x4(%esp)
084b95f0 +0x034:  mov    %edx,(%esp)
084b95f3 +0x037:  call   08685418 <_ZN15cUserHistoryLog15HadesHistoryLogEjjjj>  ; cUserHistoryLog::HadesHistoryLog(unsigned int, unsigned int, unsigned int, unsigned int)
084b95f8 +0x03c:  mov    0xc(%ebp),%eax
084b95fb +0x03f:  and    $0x2,%eax
084b95fe +0x042:  test   %eax,%eax
084b9600 +0x044:  je     084b9660 <+0xa4>
084b9602 +0x046:  mov    0x8(%ebp),%eax
084b9605 +0x049:  mov    0x20(%eax),%eax
084b9608 +0x04c:  mov    %eax,(%esp)
084b960b +0x04f:  call   084b9a92 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x168>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x168
084b9610 +0x054:  mov    0x8(%ebp),%eax
084b9613 +0x057:  mov    0x20(%eax),%eax
084b9616 +0x05a:  movl   $0x4,0x4(%esp)
084b961e +0x062:  mov    %eax,(%esp)
084b9621 +0x065:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084b9626 +0x06a:  mov    0x8(%ebp),%eax
084b9629 +0x06d:  mov    0x20(%eax),%eax
084b962c +0x070:  mov    %eax,(%esp)
084b962f +0x073:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b9634 +0x078:  mov    0x1c(%ebp),%edx
084b9637 +0x07b:  mov    %edx,0x14(%esp)
084b963b +0x07f:  mov    0x18(%ebp),%edx
084b963e +0x082:  mov    %edx,0x10(%esp)
084b9642 +0x086:  mov    0x14(%ebp),%edx
084b9645 +0x089:  mov    %edx,0xc(%esp)
084b9649 +0x08d:  mov    0x10(%ebp),%edx
084b964c +0x090:  mov    %edx,0x8(%esp)
084b9650 +0x094:  movl   $0x2,0x4(%esp)
084b9658 +0x09c:  mov    %eax,(%esp)
084b965b +0x09f:  call   08445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>  ; DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*)
084b9660 +0x0a4:  mov    0xc(%ebp),%eax
084b9663 +0x0a7:  and    $0x1,%eax
084b9666 +0x0aa:  test   %al,%al
084b9668 +0x0ac:  je     084b9686 <+0xca>
084b966a +0x0ae:  mov    0x8(%ebp),%eax
084b966d +0x0b1:  mov    0x20(%eax),%eax
084b9670 +0x0b4:  mov    %eax,(%esp)
084b9673 +0x0b7:  call   0822fd4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53f6
084b9678 +0x0bc:  xor    $0x1,%eax
084b967b +0x0bf:  test   %al,%al
084b967d +0x0c1:  je     084b9686 <+0xca>
084b967f +0x0c3:  mov    $0x1,%eax
084b9684 +0x0c8:  jmp    084b968b <+0xcf>
084b9686 +0x0ca:  mov    $0x0,%eax
084b968b +0x0cf:  test   %al,%al
084b968d +0x0d1:  je     084b96e5 <+0x129>
084b968f +0x0d3:  mov    0x8(%ebp),%eax
084b9692 +0x0d6:  mov    0x20(%eax),%eax
084b9695 +0x0d9:  mov    %eax,(%esp)
084b9698 +0x0dc:  call   084b9a92 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x168>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x168
084b969d +0x0e1:  mov    0x8(%ebp),%eax
084b96a0 +0x0e4:  mov    0x20(%eax),%eax
084b96a3 +0x0e7:  mov    %eax,(%esp)
084b96a6 +0x0ea:  call   084b9a82 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x158>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x158
084b96ab +0x0ef:  mov    0x8(%ebp),%eax
084b96ae +0x0f2:  mov    0x20(%eax),%eax
084b96b1 +0x0f5:  mov    %eax,(%esp)
084b96b4 +0x0f8:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b96b9 +0x0fd:  mov    0x1c(%ebp),%edx
084b96bc +0x100:  mov    %edx,0x14(%esp)
084b96c0 +0x104:  mov    0x18(%ebp),%edx
084b96c3 +0x107:  mov    %edx,0x10(%esp)
084b96c7 +0x10b:  mov    0x14(%ebp),%edx
084b96ca +0x10e:  mov    %edx,0xc(%esp)
084b96ce +0x112:  mov    0x10(%ebp),%edx
084b96d1 +0x115:  mov    %edx,0x8(%esp)
084b96d5 +0x119:  movl   $0x1,0x4(%esp)
084b96dd +0x121:  mov    %eax,(%esp)
084b96e0 +0x124:  call   08445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>  ; DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*)
084b96e5 +0x129:  mov    0xc(%ebp),%eax
084b96e8 +0x12c:  and    $0x4,%eax
084b96eb +0x12f:  test   %eax,%eax
084b96ed +0x131:  je     084b9715 <+0x159>
084b96ef +0x133:  mov    0x8(%ebp),%eax
084b96f2 +0x136:  mov    0x20(%eax),%eax
084b96f5 +0x139:  movl   $0x0,0xc(%esp)
084b96fd +0x141:  movl   $0x1,0x8(%esp)
084b9705 +0x149:  movl   $0x39,0x4(%esp)
084b970d +0x151:  mov    %eax,(%esp)
084b9710 +0x154:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084b9715 +0x159:  leave
084b9716 +0x15a:  ret
084b9717 +0x15b:  nop
```

## 反编译 C

```c
// XNuclear::CHades::RunHadesAction @ 0x84b95bc

/* XNuclear::CHades::RunHadesAction(unsigned int, unsigned int, unsigned int, unsigned int, char*)
    */

void __thiscall
XNuclear::CHades::RunHadesAction
          (CHades *this,uint param_1,uint param_2,uint param_3,uint param_4,char *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  if (param_1 != 0x40) {
    cUserHistoryLog::HadesHistoryLog
              ((cUserHistoryLog *)(*(int *)(this + 0x20) + 0x79700),param_1,param_2,param_3,param_4)
    ;
  }
  if ((param_1 & 2) != 0) {
    CUser::setHackUserFlag(*(CUser **)(this + 0x20));
    CUser::SetTradePunishType(*(CUser **)(this + 0x20),4);
    uVar3 = CUser::get_acc_id(*(CUser **)(this + 0x20));
    DB_HadesPunish::makeRequest(uVar3,2,param_2,param_3,param_4,param_5);
  }
  if ((param_1 & 1) != 0) {
    cVar2 = CUser::isHackUserTimer(*(CUser **)(this + 0x20));
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_084b968b;
    }
  }
  bVar1 = false;
LAB_084b968b:
  if (bVar1) {
    CUser::setHackUserFlag(*(CUser **)(this + 0x20));
    CUser::setHackUserTimer(*(CUser **)(this + 0x20));
    uVar3 = CUser::get_acc_id(*(CUser **)(this + 0x20));
    DB_HadesPunish::makeRequest(uVar3,1,param_2,param_3,param_4,param_5);
  }
  if ((param_1 & 4) != 0) {
    CUser::DisConnSig(*(CUser **)(this + 0x20),0x39,1,0);
  }
  return;
}
```
