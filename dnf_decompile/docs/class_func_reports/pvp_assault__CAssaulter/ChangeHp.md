# ChangeHp

`_ZN11pvp_assault10CAssaulter8ChangeHpEi`

`pvp_assault::CAssaulter::ChangeHp(int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e6694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6694  _ZN11pvp_assault10CAssaulter8ChangeHpEi
#           pvp_assault::CAssaulter::ChangeHp(int)
# range [0x082e6694, 0x082e677f]
082e6694 +0x00:  push   %ebp
082e6695 +0x01:  mov    %esp,%ebp
082e6697 +0x03:  sub    $0x38,%esp
082e669a +0x06:  cmpl   $0x0,0xc(%ebp)
082e669e +0x0a:  js     082e66a6 <+0x12>
082e66a0 +0x0c:  cmpl   $0x64,0xc(%ebp)
082e66a4 +0x10:  jle    082e66ed <+0x59>
082e66a6 +0x12:  movl   $0x0,0xc(%esp)
082e66ae +0x1a:  movl   $0x18a,0x8(%esp)
082e66b6 +0x22:  movl   $&_ZZN11pvp_assault10CAssaulter8ChangeHpEiE19__PRETTY_FUNCTION__,0x4(%esp)
082e66be +0x2a:  lea    -0x20(%ebp),%eax
082e66c1 +0x2d:  mov    %eax,(%esp)
082e66c4 +0x30:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082e66c9 +0x35:  mov    0xc(%ebp),%eax
082e66cc +0x38:  mov    %eax,0x8(%esp)
082e66d0 +0x3c:  movl   $"ASSAULT_CHANGE_HP error (%d)",0x4(%esp)
082e66d8 +0x44:  lea    -0x20(%ebp),%eax
082e66db +0x47:  mov    %eax,(%esp)
082e66de +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082e66e3 +0x4f:  mov    $0x0,%eax
082e66e8 +0x54:  jmp    082e677d <+0xe9>
082e66ed +0x59:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e66f2 +0x5e:  mov    %eax,(%esp)
082e66f5 +0x61:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e66fa +0x66:  test   %al,%al
082e66fc +0x68:  je     082e6716 <+0x82>
082e66fe +0x6a:  mov    0x8(%ebp),%eax
082e6701 +0x6d:  mov    (%eax),%eax
082e6703 +0x6f:  mov    %eax,(%esp)
082e6706 +0x72:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e670b +0x77:  cmp    $0x7,%al
082e670d +0x79:  jne    082e6716 <+0x82>
082e670f +0x7b:  mov    $0x1,%eax
082e6714 +0x80:  jmp    082e671b <+0x87>
082e6716 +0x82:  mov    $0x0,%eax
082e671b +0x87:  test   %al,%al
082e671d +0x89:  je     082e6738 <+0xa4>
082e671f +0x8b:  mov    0xc(%ebp),%eax
082e6722 +0x8e:  movzwl %ax,%edx
082e6725 +0x91:  mov    0x8(%ebp),%eax
082e6728 +0x94:  mov    (%eax),%eax
082e672a +0x96:  mov    %edx,0x4(%esp)
082e672e +0x9a:  mov    %eax,(%esp)
082e6731 +0x9d:  call   082f09c4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x748>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x748
082e6736 +0xa2:  jmp    082e6741 <+0xad>
082e6738 +0xa4:  mov    0x8(%ebp),%eax
082e673b +0xa7:  mov    0xc(%ebp),%edx
082e673e +0xaa:  mov    %edx,0x10(%eax)
082e6741 +0xad:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e6748 +0xb4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e674d +0xb9:  mov    %eax,-0x10(%ebp)
082e6750 +0xbc:  mov    0x8(%ebp),%eax
082e6753 +0xbf:  mov    0xc(%eax),%eax
082e6756 +0xc2:  mov    -0x10(%ebp),%edx
082e6759 +0xc5:  mov    %edx,%ecx
082e675b +0xc7:  sub    %eax,%ecx
082e675d +0xc9:  mov    %ecx,%eax
082e675f +0xcb:  mov    %eax,-0xc(%ebp)
082e6762 +0xce:  mov    0x8(%ebp),%eax
082e6765 +0xd1:  mov    -0x10(%ebp),%edx
082e6768 +0xd4:  mov    %edx,0xc(%eax)
082e676b +0xd7:  cmpl   $0x2,-0xc(%ebp)
082e676f +0xdb:  jg     082e6778 <+0xe4>
082e6771 +0xdd:  mov    $0x0,%eax
082e6776 +0xe2:  jmp    082e677d <+0xe9>
082e6778 +0xe4:  mov    $0x1,%eax
082e677d +0xe9:  leave
082e677e +0xea:  ret
082e677f +0xeb:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::ChangeHp @ 0x82e6694

/* pvp_assault::CAssaulter::ChangeHp(int) */

bool __thiscall pvp_assault::CAssaulter::ChangeHp(CAssaulter *this,int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  cMyTrace local_24 [32];
  
  if ((-1 < param_1) && (param_1 < 0x65)) {
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\0') ||
       (cVar3 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)this), cVar3 != '\a')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      CUserCharacInfo::setPowerWarHP(*(CUserCharacInfo **)this,(ushort)param_1);
    }
    else {
      *(int *)(this + 0x10) = param_1;
    }
    iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar1 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar4;
    return 2 < iVar4 - iVar1;
  }
  cMyTrace::cMyTrace(local_24,"bool pvp_assault::CAssaulter::ChangeHp(int)",0x18a,0);
  cMyTrace::operator()(local_24,"ASSAULT_CHANGE_HP error (%d)",param_1);
  return false;
}
```
