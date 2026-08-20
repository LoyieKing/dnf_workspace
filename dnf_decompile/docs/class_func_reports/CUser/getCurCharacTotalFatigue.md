# getCurCharacTotalFatigue

`_ZNK5CUser24getCurCharacTotalFatigueEv`

`CUser::getCurCharacTotalFatigue() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657766` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657766  _ZNK5CUser24getCurCharacTotalFatigueEv
#           CUser::getCurCharacTotalFatigue() const
# range [0x08657766, 0x08657803]
08657766 +0x00:  push   %ebp
08657767 +0x01:  mov    %esp,%ebp
08657769 +0x03:  sub    $0x28,%esp
0865776c +0x06:  movw   $0x0,-0xa(%ebp)
08657772 +0x0c:  mov    0x8(%ebp),%eax
08657775 +0x0f:  mov    %eax,(%esp)
08657778 +0x12:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0865777d +0x17:  mov    %ax,-0xa(%ebp)
08657781 +0x1b:  mov    0x8(%ebp),%eax
08657784 +0x1e:  add    $0x7121c,%eax
08657789 +0x23:  mov    %eax,(%esp)
0865778c +0x26:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657791 +0x2b:  test   %ax,%ax
08657794 +0x2e:  setne  %al
08657797 +0x31:  test   %al,%al
08657799 +0x33:  je     086577fe <+0x98>
0865779b +0x35:  mov    0x8(%ebp),%eax
0865779e +0x38:  mov    %eax,(%esp)
086577a1 +0x3b:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
086577a6 +0x40:  mov    %ax,-0x12(%ebp)
086577aa +0x44:  mov    0x8(%ebp),%eax
086577ad +0x47:  mov    %eax,(%esp)
086577b0 +0x4a:  call   08696402 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c57
086577b5 +0x4f:  mov    %ax,-0xe(%ebp)
086577b9 +0x53:  mov    0x8(%ebp),%eax
086577bc +0x56:  mov    %eax,(%esp)
086577bf +0x59:  call   086963b0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c05>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c05
086577c4 +0x5e:  mov    %ax,-0xc(%ebp)
086577c8 +0x62:  lea    -0xe(%ebp),%eax
086577cb +0x65:  mov    %eax,0x4(%esp)
086577cf +0x69:  lea    -0xc(%ebp),%eax
086577d2 +0x6c:  mov    %eax,(%esp)
086577d5 +0x6f:  call   0828716d <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xab>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0xab
086577da +0x74:  movzwl (%eax),%eax
086577dd +0x77:  add    -0xa(%ebp),%ax
086577e1 +0x7b:  mov    %ax,-0x10(%ebp)
086577e5 +0x7f:  lea    -0x12(%ebp),%eax
086577e8 +0x82:  mov    %eax,0x4(%esp)
086577ec +0x86:  lea    -0x10(%ebp),%eax
086577ef +0x89:  mov    %eax,(%esp)
086577f2 +0x8c:  call   0828716d <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xab>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0xab
086577f7 +0x91:  movzwl (%eax),%eax
086577fa +0x94:  mov    %ax,-0xa(%ebp)
086577fe +0x98:  movzwl -0xa(%ebp),%eax
08657802 +0x9c:  leave
08657803 +0x9d:  ret
```

## 反编译 C

```c
// CUser::getCurCharacTotalFatigue @ 0x8657766

/* CUser::getCurCharacTotalFatigue() const */

ushort __thiscall CUser::getCurCharacTotalFatigue(CUser *this)

{
  short sVar1;
  ushort *puVar2;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  
  local_e = 0;
  local_e = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
  sVar1 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
  if (sVar1 != 0) {
    local_16 = getCurCharacTotalMaxFatigue(this);
    local_12 = CUserCharacInfo::getCurCharacMaxPremiumFatigue((CUserCharacInfo *)this);
    local_10 = CUserCharacInfo::getCurCharacPremiumFatigue((CUserCharacInfo *)this);
    puVar2 = std::min<unsigned_short>(&local_10,&local_12);
    local_14 = *puVar2 + local_e;
    puVar2 = std::min<unsigned_short>(&local_14,&local_16);
    local_e = *puVar2;
  }
  return local_e;
}
```
