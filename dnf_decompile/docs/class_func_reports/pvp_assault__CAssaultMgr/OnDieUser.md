# OnDieUser

`_ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER`

`pvp_assault::CAssaultMgr::OnDieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef3be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef3be  _ZN11pvp_assault11CAssaultMgr9OnDieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER
#           pvp_assault::CAssaultMgr::OnDieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&)
# range [0x082ef3be, 0x082ef463]
082ef3be +0x00:  push   %ebp
082ef3bf +0x01:  mov    %esp,%ebp
082ef3c1 +0x03:  push   %esi
082ef3c2 +0x04:  push   %ebx
082ef3c3 +0x05:  sub    $0x20,%esp
082ef3c6 +0x08:  mov    0xc(%ebp),%eax
082ef3c9 +0x0b:  mov    %eax,(%esp)
082ef3cc +0x0e:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ef3d1 +0x13:  mov    %eax,0x4(%esp)
082ef3d5 +0x17:  mov    0x8(%ebp),%eax
082ef3d8 +0x1a:  mov    %eax,(%esp)
082ef3db +0x1d:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082ef3e0 +0x22:  mov    %eax,-0x10(%ebp)
082ef3e3 +0x25:  mov    0x14(%ebp),%eax
082ef3e6 +0x28:  mov    %eax,0xc(%esp)
082ef3ea +0x2c:  mov    0x10(%ebp),%eax
082ef3ed +0x2f:  mov    %eax,0x8(%esp)
082ef3f1 +0x33:  mov    0xc(%ebp),%eax
082ef3f4 +0x36:  mov    %eax,0x4(%esp)
082ef3f8 +0x3a:  mov    -0x10(%ebp),%eax
082ef3fb +0x3d:  mov    %eax,(%esp)
082ef3fe +0x40:  call   082ed3fe <_ZN11pvp_assault13CAssaultPlace7DieUserEP5CUseriR22MSG_DIE_ASSAULT_PLAYER>  ; pvp_assault::CAssaultPlace::DieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&)
082ef403 +0x45:  jmp    082ef458 <+0x9a>
082ef405 +0x47:  cmp    $0x1,%edx
082ef408 +0x4a:  je     082ef412 <+0x54>
082ef40a +0x4c:  mov    %eax,(%esp)
082ef40d +0x4f:  call   08ae3750 <_Unwind_Resume>
082ef412 +0x54:  mov    %eax,(%esp)
082ef415 +0x57:  call   08725ce0 <__cxa_begin_catch>
082ef41a +0x5c:  mov    (%eax),%eax
082ef41c +0x5e:  mov    %eax,-0xc(%ebp)
082ef41f +0x61:  mov    -0xc(%ebp),%eax
082ef422 +0x64:  movzbl %al,%eax
082ef425 +0x67:  mov    %eax,0x8(%esp)
082ef429 +0x6b:  movl   $0x96,0x4(%esp)
082ef431 +0x73:  mov    0xc(%ebp),%eax
082ef434 +0x76:  mov    %eax,(%esp)
082ef437 +0x79:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082ef43c +0x7e:  jmp    082ef453 <+0x95>
082ef43e +0x80:  mov    %edx,%ebx
082ef440 +0x82:  mov    %eax,%esi
082ef442 +0x84:  call   08725c30 <__cxa_end_catch>
082ef447 +0x89:  mov    %esi,%eax
082ef449 +0x8b:  mov    %ebx,%edx
082ef44b +0x8d:  mov    %eax,(%esp)
082ef44e +0x90:  call   08ae3750 <_Unwind_Resume>
082ef453 +0x95:  call   08725c30 <__cxa_end_catch>
082ef458 +0x9a:  mov    $0x1,%eax
082ef45d +0x9f:  add    $0x20,%esp
082ef460 +0xa2:  pop    %ebx
082ef461 +0xa3:  pop    %esi
082ef462 +0xa4:  pop    %ebp
082ef463 +0xa5:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnDieUser @ 0x82ef3be

/* pvp_assault::CAssaultMgr::OnDieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnDieUser
          (CAssaultMgr *this,CUser *param_1,int param_2,MSG_DIE_ASSAULT_PLAYER *param_3)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef3db to 082ef402 has its CatchHandler @ 082ef405 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::DieUser(this_00,param_1,param_2,param_3);
  return 1;
}
```
