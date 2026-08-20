# OnEvadeAssaultPlace

`_ZN11pvp_assault11CAssaultMgr19OnEvadeAssaultPlaceEP5CUser`

`pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efbf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efbf6  _ZN11pvp_assault11CAssaultMgr19OnEvadeAssaultPlaceEP5CUser
#           pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CUser*)
# range [0x082efbf6, 0x082efc53]
082efbf6 +0x00:  push   %ebp
082efbf7 +0x01:  mov    %esp,%ebp
082efbf9 +0x03:  sub    $0x28,%esp
082efbfc +0x06:  mov    0xc(%ebp),%eax
082efbff +0x09:  mov    %eax,(%esp)
082efc02 +0x0c:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082efc07 +0x11:  mov    %eax,0x4(%esp)
082efc0b +0x15:  mov    0x8(%ebp),%eax
082efc0e +0x18:  mov    %eax,(%esp)
082efc11 +0x1b:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082efc16 +0x20:  mov    %eax,-0x10(%ebp)
082efc19 +0x23:  mov    0xc(%ebp),%eax
082efc1c +0x26:  mov    %eax,0x4(%esp)
082efc20 +0x2a:  mov    -0x10(%ebp),%eax
082efc23 +0x2d:  mov    %eax,(%esp)
082efc26 +0x30:  call   082eb49c <_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser>  ; pvp_assault::CAssaultPlace::EvadeAssaultPlace(CUser*)
082efc2b +0x35:  jmp    082efc4c <+0x56>
082efc2d +0x37:  cmp    $0x1,%edx
082efc30 +0x3a:  je     082efc3a <+0x44>
082efc32 +0x3c:  mov    %eax,(%esp)
082efc35 +0x3f:  call   08ae3750 <_Unwind_Resume>
082efc3a +0x44:  mov    %eax,(%esp)
082efc3d +0x47:  call   08725ce0 <__cxa_begin_catch>
082efc42 +0x4c:  mov    (%eax),%eax
082efc44 +0x4e:  mov    %eax,-0xc(%ebp)
082efc47 +0x51:  call   08725c30 <__cxa_end_catch>
082efc4c +0x56:  mov    $0x1,%eax
082efc51 +0x5b:  leave
082efc52 +0x5c:  ret
082efc53 +0x5d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnEvadeAssaultPlace @ 0x82efbf6

/* pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CUser*) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CAssaultMgr *this,CUser *param_1)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082efc11 to 082efc2a has its CatchHandler @ 082efc2d */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::EvadeAssaultPlace(this_00,param_1);
  return 1;
}
```
