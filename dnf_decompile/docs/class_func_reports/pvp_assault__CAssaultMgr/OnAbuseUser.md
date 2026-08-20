# OnAbuseUser

`_ZN11pvp_assault11CAssaultMgr11OnAbuseUserEP5CUser`

`pvp_assault::CAssaultMgr::OnAbuseUser(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efc54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efc54  _ZN11pvp_assault11CAssaultMgr11OnAbuseUserEP5CUser
#           pvp_assault::CAssaultMgr::OnAbuseUser(CUser*)
# range [0x082efc54, 0x082efcb1]
082efc54 +0x00:  push   %ebp
082efc55 +0x01:  mov    %esp,%ebp
082efc57 +0x03:  sub    $0x28,%esp
082efc5a +0x06:  mov    0xc(%ebp),%eax
082efc5d +0x09:  mov    %eax,(%esp)
082efc60 +0x0c:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082efc65 +0x11:  mov    %eax,0x4(%esp)
082efc69 +0x15:  mov    0x8(%ebp),%eax
082efc6c +0x18:  mov    %eax,(%esp)
082efc6f +0x1b:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082efc74 +0x20:  mov    %eax,-0x10(%ebp)
082efc77 +0x23:  mov    0xc(%ebp),%eax
082efc7a +0x26:  mov    %eax,0x4(%esp)
082efc7e +0x2a:  mov    -0x10(%ebp),%eax
082efc81 +0x2d:  mov    %eax,(%esp)
082efc84 +0x30:  call   082eb5e2 <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser>  ; pvp_assault::CAssaultPlace::AbuseUser(CUser*)
082efc89 +0x35:  jmp    082efcaa <+0x56>
082efc8b +0x37:  cmp    $0x1,%edx
082efc8e +0x3a:  je     082efc98 <+0x44>
082efc90 +0x3c:  mov    %eax,(%esp)
082efc93 +0x3f:  call   08ae3750 <_Unwind_Resume>
082efc98 +0x44:  mov    %eax,(%esp)
082efc9b +0x47:  call   08725ce0 <__cxa_begin_catch>
082efca0 +0x4c:  mov    (%eax),%eax
082efca2 +0x4e:  mov    %eax,-0xc(%ebp)
082efca5 +0x51:  call   08725c30 <__cxa_end_catch>
082efcaa +0x56:  mov    $0x1,%eax
082efcaf +0x5b:  leave
082efcb0 +0x5c:  ret
082efcb1 +0x5d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnAbuseUser @ 0x82efc54

/* pvp_assault::CAssaultMgr::OnAbuseUser(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnAbuseUser(CAssaultMgr *this,CUser *param_1)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082efc6f to 082efc88 has its CatchHandler @ 082efc8b */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::AbuseUser(this_00,param_1);
  return 1;
}
```
