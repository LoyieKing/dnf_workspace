# saveTaxMoneyForUpperMember

`_ZN5CUser26saveTaxMoneyForUpperMemberEi`

`CUser::saveTaxMoneyForUpperMember(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864f8ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864f8ea  _ZN5CUser26saveTaxMoneyForUpperMemberEi
#           CUser::saveTaxMoneyForUpperMember(int)
# range [0x0864f8ea, 0x0864f92f]
0864f8ea +0x00:  push   %ebp
0864f8eb +0x01:  mov    %esp,%ebp
0864f8ed +0x03:  sub    $0x18,%esp
0864f8f0 +0x06:  mov    0x8(%ebp),%eax
0864f8f3 +0x09:  mov    %eax,(%esp)
0864f8f6 +0x0c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
0864f8fb +0x11:  test   %eax,%eax
0864f8fd +0x13:  sete   %al
0864f900 +0x16:  test   %al,%al
0864f902 +0x18:  jne    0864f92d <+0x43>
0864f904 +0x1a:  mov    0x8(%ebp),%eax
0864f907 +0x1d:  mov    %eax,(%esp)
0864f90a +0x20:  call   0822f5e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c90
0864f90f +0x25:  test   %al,%al
0864f911 +0x27:  je     0864f92e <+0x44>
0864f913 +0x29:  cmpl   $0x0,0xc(%ebp)
0864f917 +0x2d:  jle    0864f92e <+0x44>
0864f919 +0x2f:  mov    0x8(%ebp),%eax
0864f91c +0x32:  mov    0xc(%ebp),%edx
0864f91f +0x35:  mov    %edx,0x4(%esp)
0864f923 +0x39:  mov    %eax,(%esp)
0864f926 +0x3c:  call   086968ce <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3123>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3123
0864f92b +0x41:  jmp    0864f92e <+0x44>
0864f92d +0x43:  nop
0864f92e +0x44:  leave
0864f92f +0x45:  ret
```

## 反编译 C

```c
// CUser::saveTaxMoneyForUpperMember @ 0x864f8ea

/* CUser::saveTaxMoneyForUpperMember(int) */

void __thiscall CUser::saveTaxMoneyForUpperMember(CUser *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    cVar1 = CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)this);
    if ((cVar1 != '\0') && (0 < param_1)) {
      CUserCharacInfo::add_member_pay_tex_money_to_upper((CUserCharacInfo *)this,param_1);
    }
  }
  return;
}
```
