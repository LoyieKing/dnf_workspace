# UseItem

`_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item`

`Global::CBossTowerFunc::UseItem(CUser*, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `Global::CBossTowerFunc` | `0x08146c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146c20  _ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item
#           Global::CBossTowerFunc::UseItem(CUser*, Inven_Item const&)
# range [0x08146c20, 0x08146cbc]
08146c20 +0x00:  push   %ebp
08146c21 +0x01:  mov    %esp,%ebp
08146c23 +0x03:  sub    $0x28,%esp
08146c26 +0x06:  mov    0x8(%ebp),%eax
08146c29 +0x09:  mov    %eax,(%esp)
08146c2c +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08146c31 +0x11:  cmp    $0x5,%eax
08146c34 +0x14:  je     08146c3d <+0x1d>
08146c36 +0x16:  cmp    $0xc,%eax
08146c39 +0x19:  je     08146c71 <+0x51>
08146c3b +0x1b:  jmp    08146cb6 <+0x96>
08146c3d +0x1d:  mov    0x8(%ebp),%eax
08146c40 +0x20:  mov    %eax,(%esp)
08146c43 +0x23:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08146c48 +0x28:  mov    %eax,-0x10(%ebp)
08146c4b +0x2b:  cmpl   $0x0,-0x10(%ebp)
08146c4f +0x2f:  je     08146c6a <+0x4a>
08146c51 +0x31:  mov    0xc(%ebp),%eax
08146c54 +0x34:  mov    %eax,0x8(%esp)
08146c58 +0x38:  mov    0x8(%ebp),%eax
08146c5b +0x3b:  mov    %eax,0x4(%esp)
08146c5f +0x3f:  mov    -0x10(%ebp),%eax
08146c62 +0x42:  mov    %eax,(%esp)
08146c65 +0x45:  call   085a7800 <_ZN6CParty7useItemEP5CUserRK10Inven_Item>  ; CParty::useItem(CUser*, Inven_Item const&)
08146c6a +0x4a:  mov    $0x1,%eax
08146c6f +0x4f:  jmp    08146cbb <+0x9b>
08146c71 +0x51:  mov    0x8(%ebp),%eax
08146c74 +0x54:  mov    %eax,(%esp)
08146c77 +0x57:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
08146c7c +0x5c:  mov    %eax,-0xc(%ebp)
08146c7f +0x5f:  cmpl   $0x0,-0xc(%ebp)
08146c83 +0x63:  je     08146caf <+0x8f>
08146c85 +0x65:  mov    0xc(%ebp),%eax
08146c88 +0x68:  movzbl 0x1(%eax),%eax
08146c8c +0x6c:  movzbl %al,%edx
08146c8f +0x6f:  mov    0xc(%ebp),%eax
08146c92 +0x72:  mov    0x2(%eax),%eax
08146c95 +0x75:  mov    %edx,0xc(%esp)
08146c99 +0x79:  mov    %eax,0x8(%esp)
08146c9d +0x7d:  mov    0x8(%ebp),%eax
08146ca0 +0x80:  mov    %eax,0x4(%esp)
08146ca4 +0x84:  mov    -0xc(%ebp),%eax
08146ca7 +0x87:  mov    %eax,(%esp)
08146caa +0x8a:  call   081454b8 <_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh>  ; WongWork::CBossTower::handleUseItem(CUser*, unsigned long, unsigned char)
08146caf +0x8f:  mov    $0x1,%eax
08146cb4 +0x94:  jmp    08146cbb <+0x9b>
08146cb6 +0x96:  mov    $0x0,%eax
08146cbb +0x9b:  leave
08146cbc +0x9c:  ret
```

## 反编译 C

```c
// Global::CBossTowerFunc::UseItem @ 0x8146c20

/* Global::CBossTowerFunc::UseItem(CUser*, Inven_Item const&) */

undefined4 Global::CBossTowerFunc::UseItem(CUser *param_1,Inven_Item *param_2)

{
  int iVar1;
  CParty *this;
  CBossTower *this_00;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 == 5) {
    this = (CParty *)CUser::GetParty(param_1);
    if (this != (CParty *)0x0) {
      CParty::useItem(this,param_1,param_2);
    }
    uVar2 = 1;
  }
  else if (iVar1 == 0xc) {
    this_00 = (CBossTower *)CUser::getBossTower(param_1);
    if (this_00 != (CBossTower *)0x0) {
      WongWork::CBossTower::handleUseItem(this_00,param_1,*(ulong *)(param_2 + 2),(uchar)param_2[1])
      ;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
