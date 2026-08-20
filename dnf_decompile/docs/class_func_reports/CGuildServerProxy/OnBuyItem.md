# OnBuyItem

`_ZN17CGuildServerProxy9OnBuyItemEP5CUserPK5CItemjj`

`CGuildServerProxy::OnBuyItem(CUser*, CItem const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ef24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ef24  _ZN17CGuildServerProxy9OnBuyItemEP5CUserPK5CItemjj
#           CGuildServerProxy::OnBuyItem(CUser*, CItem const*, unsigned int, unsigned int)
# range [0x0846ef24, 0x0846efcd]
0846ef24 +0x00:  push   %ebp
0846ef25 +0x01:  mov    %esp,%ebp
0846ef27 +0x03:  push   %esi
0846ef28 +0x04:  push   %ebx
0846ef29 +0x05:  sub    $0x10,%esp
0846ef2c +0x08:  mov    0x10(%ebp),%eax
0846ef2f +0x0b:  mov    (%eax),%eax
0846ef31 +0x0d:  add    $0x28,%eax
0846ef34 +0x10:  mov    (%eax),%edx
0846ef36 +0x12:  mov    0x10(%ebp),%eax
0846ef39 +0x15:  mov    %eax,(%esp)
0846ef3c +0x18:  call   *%edx
0846ef3e +0x1a:  test   %eax,%eax
0846ef40 +0x1c:  setne  %al
0846ef43 +0x1f:  test   %al,%al
0846ef45 +0x21:  je     0846ef97 <+0x73>
0846ef47 +0x23:  mov    0x14(%ebp),%eax
0846ef4a +0x26:  mov    %eax,0x4(%esp)
0846ef4e +0x2a:  mov    0xc(%ebp),%eax
0846ef51 +0x2d:  mov    %eax,(%esp)
0846ef54 +0x30:  call   082301bc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5866>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5866
0846ef59 +0x35:  mov    0x14(%ebp),%eax
0846ef5c +0x38:  mov    %eax,%esi
0846ef5e +0x3a:  neg    %esi
0846ef60 +0x3c:  movl   $0xffffffff,0x4(%esp)
0846ef68 +0x44:  mov    0xc(%ebp),%eax
0846ef6b +0x47:  mov    %eax,(%esp)
0846ef6e +0x4a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0846ef73 +0x4f:  mov    %eax,%ebx
0846ef75 +0x51:  mov    0xc(%ebp),%eax
0846ef78 +0x54:  mov    %eax,(%esp)
0846ef7b +0x57:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0846ef80 +0x5c:  mov    %esi,0xc(%esp)
0846ef84 +0x60:  mov    %ebx,0x8(%esp)
0846ef88 +0x64:  mov    %eax,0x4(%esp)
0846ef8c +0x68:  mov    0x8(%ebp),%eax
0846ef8f +0x6b:  mov    %eax,(%esp)
0846ef92 +0x6e:  call   0846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>  ; CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int)
0846ef97 +0x73:  mov    0x10(%ebp),%eax
0846ef9a +0x76:  mov    (%eax),%eax
0846ef9c +0x78:  add    $0x2c,%eax
0846ef9f +0x7b:  mov    (%eax),%edx
0846efa1 +0x7d:  mov    0x10(%ebp),%eax
0846efa4 +0x80:  mov    %eax,(%esp)
0846efa7 +0x83:  call   *%edx
0846efa9 +0x85:  test   %eax,%eax
0846efab +0x87:  setne  %al
0846efae +0x8a:  test   %al,%al
0846efb0 +0x8c:  je     0846efc7 <+0xa3>
0846efb2 +0x8e:  mov    0x18(%ebp),%eax
0846efb5 +0x91:  movswl %ax,%edx
0846efb8 +0x94:  mov    0xc(%ebp),%eax
0846efbb +0x97:  mov    %edx,0x4(%esp)
0846efbf +0x9b:  mov    %eax,(%esp)
0846efc2 +0x9e:  call   08687f66 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs>  ; CUserCharacInfo::DecreasePowerWarPoint(short)
0846efc7 +0xa3:  add    $0x10,%esp
0846efca +0xa6:  pop    %ebx
0846efcb +0xa7:  pop    %esi
0846efcc +0xa8:  pop    %ebp
0846efcd +0xa9:  ret
```

## 反编译 C

```c
// CGuildServerProxy::OnBuyItem @ 0x846ef24

/* CGuildServerProxy::OnBuyItem(CUser*, CItem const*, unsigned int, unsigned int) */

void __thiscall
CGuildServerProxy::OnBuyItem
          (CGuildServerProxy *this,CUser *param_1,CItem *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*(int *)param_2 + 0x28))(param_2);
  if (iVar1 != 0) {
    CUser::DecreaseGuildPowerWarPoint(param_1,param_3);
    uVar2 = CUser::get_charac_no(param_1,-1);
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    SendIncreaseDecreasePowerWarPoint(this,uVar3,uVar2,-param_3);
  }
  iVar1 = (**(code **)(*(int *)param_2 + 0x2c))(param_2);
  if (iVar1 != 0) {
    CUserCharacInfo::DecreasePowerWarPoint((CUserCharacInfo *)param_1,(short)param_4);
  }
  return;
}
```
