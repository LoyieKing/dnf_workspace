# gainExpAsUpperMember

`_ZN5CUser20gainExpAsUpperMemberEi`

`CUser::gainExpAsUpperMember(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fa08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fa08  _ZN5CUser20gainExpAsUpperMemberEi
#           CUser::gainExpAsUpperMember(int)
# range [0x0864fa08, 0x0864fac3]
0864fa08 +0x00:  push   %ebp
0864fa09 +0x01:  mov    %esp,%ebp
0864fa0b +0x03:  sub    $0x38,%esp
0864fa0e +0x06:  mov    0x8(%ebp),%eax
0864fa11 +0x09:  mov    %eax,(%esp)
0864fa14 +0x0c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
0864fa19 +0x11:  test   %eax,%eax
0864fa1b +0x13:  sete   %al
0864fa1e +0x16:  test   %al,%al
0864fa20 +0x18:  je     0864fa2c <+0x24>
0864fa22 +0x1a:  mov    $0x0,%eax
0864fa27 +0x1f:  jmp    0864fac1 <+0xb9>
0864fa2c +0x24:  mov    0x8(%ebp),%eax
0864fa2f +0x27:  mov    %eax,(%esp)
0864fa32 +0x2a:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
0864fa37 +0x2f:  test   %al,%al
0864fa39 +0x31:  je     0864faa9 <+0xa1>
0864fa3b +0x33:  mov    0x8(%ebp),%eax
0864fa3e +0x36:  mov    %eax,(%esp)
0864fa41 +0x39:  call   08696866 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x30bb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x30bb
0864fa46 +0x3e:  movzbl %al,%eax
0864fa49 +0x41:  mov    %ax,-0x1a(%ebp)
0864fa4d +0x45:  filds  -0x1a(%ebp)
0864fa50 +0x48:  flds   &data#29322982(.rodata)
0864fa56 +0x4e:  fmulp  %st,%st(1)
0864fa58 +0x50:  fstps  -0x10(%ebp)
0864fa5b +0x53:  fildl  0xc(%ebp)
0864fa5e +0x56:  fmuls  -0x10(%ebp)
0864fa61 +0x59:  fnstcw -0x1c(%ebp)
0864fa64 +0x5c:  movzwl -0x1c(%ebp),%eax
0864fa68 +0x60:  mov    $0xc,%ah
0864fa6a +0x62:  mov    %ax,-0x1e(%ebp)
0864fa6e +0x66:  fldcw  -0x1e(%ebp)
0864fa71 +0x69:  fistpl -0xc(%ebp)
0864fa74 +0x6c:  fldcw  -0x1c(%ebp)
0864fa77 +0x6f:  cmpl   $0x0,-0xc(%ebp)
0864fa7b +0x73:  jle    0864fa91 <+0x89>
0864fa7d +0x75:  mov    0x8(%ebp),%eax
0864fa80 +0x78:  mov    -0xc(%ebp),%edx
0864fa83 +0x7b:  mov    %edx,0x4(%esp)
0864fa87 +0x7f:  mov    %eax,(%esp)
0864fa8a +0x82:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0864fa8f +0x87:  jmp    0864faa4 <+0x9c>
0864fa91 +0x89:  mov    0x8(%ebp),%eax
0864fa94 +0x8c:  movl   $0x0,0x4(%esp)
0864fa9c +0x94:  mov    %eax,(%esp)
0864fa9f +0x97:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0864faa4 +0x9c:  mov    -0xc(%ebp),%eax
0864faa7 +0x9f:  jmp    0864fac1 <+0xb9>
0864faa9 +0xa1:  mov    0x8(%ebp),%eax
0864faac +0xa4:  movl   $0x0,0x4(%esp)
0864fab4 +0xac:  mov    %eax,(%esp)
0864fab7 +0xaf:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0864fabc +0xb4:  mov    $0x0,%eax
0864fac1 +0xb9:  leave
0864fac2 +0xba:  ret
0864fac3 +0xbb:  nop
```

## 反编译 C

```c
// CUser::gainExpAsUpperMember @ 0x864fa08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::gainExpAsUpperMember(int) */

int __thiscall CUser::gainExpAsUpperMember(CUser *this,int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)this);
    if (cVar1 == '\0') {
      CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)this,0);
      iVar3 = 0;
    }
    else {
      bVar2 = CUserCharacInfo::get_uppermember_exp_level((CUserCharacInfo *)this);
      iVar3 = (int)ROUND((float)param_1 * _DAT_08cf3958 * (float)bVar2);
      if (iVar3 < 1) {
        CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)this,0);
      }
      else {
        CUserCharacInfo::set_charac_member_bonus_exp((CUserCharacInfo *)this,iVar3);
      }
    }
  }
  return iVar3;
}
```
