# OnChangeHp

`_ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri`

`pvp_assault::CAssaultMgr::OnChangeHp(CUser*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef570  _ZN11pvp_assault11CAssaultMgr10OnChangeHpEP5CUseri
#           pvp_assault::CAssaultMgr::OnChangeHp(CUser*, int)
# range [0x082ef570, 0x082ef60f]
082ef570 +0x00:  push   %ebp
082ef571 +0x01:  mov    %esp,%ebp
082ef573 +0x03:  push   %esi
082ef574 +0x04:  push   %ebx
082ef575 +0x05:  sub    $0x20,%esp
082ef578 +0x08:  mov    0xc(%ebp),%eax
082ef57b +0x0b:  mov    %eax,(%esp)
082ef57e +0x0e:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ef583 +0x13:  mov    %eax,0x4(%esp)
082ef587 +0x17:  mov    0x8(%ebp),%eax
082ef58a +0x1a:  mov    %eax,(%esp)
082ef58d +0x1d:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082ef592 +0x22:  mov    %eax,-0x10(%ebp)
082ef595 +0x25:  mov    0x10(%ebp),%eax
082ef598 +0x28:  mov    %eax,0x8(%esp)
082ef59c +0x2c:  mov    0xc(%ebp),%eax
082ef59f +0x2f:  mov    %eax,0x4(%esp)
082ef5a3 +0x33:  mov    -0x10(%ebp),%eax
082ef5a6 +0x36:  mov    %eax,(%esp)
082ef5a9 +0x39:  call   082ed752 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri>  ; pvp_assault::CAssaultPlace::ChangeHp(CUser*, int)
082ef5ae +0x3e:  jmp    082ef603 <+0x93>
082ef5b0 +0x40:  cmp    $0x1,%edx
082ef5b3 +0x43:  je     082ef5bd <+0x4d>
082ef5b5 +0x45:  mov    %eax,(%esp)
082ef5b8 +0x48:  call   08ae3750 <_Unwind_Resume>
082ef5bd +0x4d:  mov    %eax,(%esp)
082ef5c0 +0x50:  call   08725ce0 <__cxa_begin_catch>
082ef5c5 +0x55:  mov    (%eax),%eax
082ef5c7 +0x57:  mov    %eax,-0xc(%ebp)
082ef5ca +0x5a:  mov    -0xc(%ebp),%eax
082ef5cd +0x5d:  movzbl %al,%eax
082ef5d0 +0x60:  mov    %eax,0x8(%esp)
082ef5d4 +0x64:  movl   $0x98,0x4(%esp)
082ef5dc +0x6c:  mov    0xc(%ebp),%eax
082ef5df +0x6f:  mov    %eax,(%esp)
082ef5e2 +0x72:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082ef5e7 +0x77:  jmp    082ef5fe <+0x8e>
082ef5e9 +0x79:  mov    %edx,%ebx
082ef5eb +0x7b:  mov    %eax,%esi
082ef5ed +0x7d:  call   08725c30 <__cxa_end_catch>
082ef5f2 +0x82:  mov    %esi,%eax
082ef5f4 +0x84:  mov    %ebx,%edx
082ef5f6 +0x86:  mov    %eax,(%esp)
082ef5f9 +0x89:  call   08ae3750 <_Unwind_Resume>
082ef5fe +0x8e:  call   08725c30 <__cxa_end_catch>
082ef603 +0x93:  mov    $0x1,%eax
082ef608 +0x98:  add    $0x20,%esp
082ef60b +0x9b:  pop    %ebx
082ef60c +0x9c:  pop    %esi
082ef60d +0x9d:  pop    %ebp
082ef60e +0x9e:  ret
082ef60f +0x9f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnChangeHp @ 0x82ef570

/* pvp_assault::CAssaultMgr::OnChangeHp(CUser*, int) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::OnChangeHp(CAssaultMgr *this,CUser *param_1,int param_2)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef58d to 082ef5ad has its CatchHandler @ 082ef5b0 */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::ChangeHp(this_00,param_1,param_2);
  return 1;
}
```
