# OnCompleteLoad

`_ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser`

`pvp_assault::CAssaultMgr::OnCompleteLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef1e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef1e2  _ZN11pvp_assault11CAssaultMgr14OnCompleteLoadEP5CUser
#           pvp_assault::CAssaultMgr::OnCompleteLoad(CUser*)
# range [0x082ef1e2, 0x082ef279]
082ef1e2 +0x00:  push   %ebp
082ef1e3 +0x01:  mov    %esp,%ebp
082ef1e5 +0x03:  push   %esi
082ef1e6 +0x04:  push   %ebx
082ef1e7 +0x05:  sub    $0x20,%esp
082ef1ea +0x08:  mov    0xc(%ebp),%eax
082ef1ed +0x0b:  mov    %eax,(%esp)
082ef1f0 +0x0e:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ef1f5 +0x13:  mov    %eax,0x4(%esp)
082ef1f9 +0x17:  mov    0x8(%ebp),%eax
082ef1fc +0x1a:  mov    %eax,(%esp)
082ef1ff +0x1d:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082ef204 +0x22:  mov    %eax,-0x10(%ebp)
082ef207 +0x25:  mov    0xc(%ebp),%eax
082ef20a +0x28:  mov    %eax,0x4(%esp)
082ef20e +0x2c:  mov    -0x10(%ebp),%eax
082ef211 +0x2f:  mov    %eax,(%esp)
082ef214 +0x32:  call   082eb774 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser>  ; pvp_assault::CAssaultPlace::CompleteLoad(CUser*)
082ef219 +0x37:  jmp    082ef26e <+0x8c>
082ef21b +0x39:  cmp    $0x1,%edx
082ef21e +0x3c:  je     082ef228 <+0x46>
082ef220 +0x3e:  mov    %eax,(%esp)
082ef223 +0x41:  call   08ae3750 <_Unwind_Resume>
082ef228 +0x46:  mov    %eax,(%esp)
082ef22b +0x49:  call   08725ce0 <__cxa_begin_catch>
082ef230 +0x4e:  mov    (%eax),%eax
082ef232 +0x50:  mov    %eax,-0xc(%ebp)
082ef235 +0x53:  mov    -0xc(%ebp),%eax
082ef238 +0x56:  movzbl %al,%eax
082ef23b +0x59:  mov    %eax,0x8(%esp)
082ef23f +0x5d:  movl   $0x94,0x4(%esp)
082ef247 +0x65:  mov    0xc(%ebp),%eax
082ef24a +0x68:  mov    %eax,(%esp)
082ef24d +0x6b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082ef252 +0x70:  jmp    082ef269 <+0x87>
082ef254 +0x72:  mov    %edx,%ebx
082ef256 +0x74:  mov    %eax,%esi
082ef258 +0x76:  call   08725c30 <__cxa_end_catch>
082ef25d +0x7b:  mov    %esi,%eax
082ef25f +0x7d:  mov    %ebx,%edx
082ef261 +0x7f:  mov    %eax,(%esp)
082ef264 +0x82:  call   08ae3750 <_Unwind_Resume>
082ef269 +0x87:  call   08725c30 <__cxa_end_catch>
082ef26e +0x8c:  mov    $0x1,%eax
082ef273 +0x91:  add    $0x20,%esp
082ef276 +0x94:  pop    %ebx
082ef277 +0x95:  pop    %esi
082ef278 +0x96:  pop    %ebp
082ef279 +0x97:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnCompleteLoad @ 0x82ef1e2

/* pvp_assault::CAssaultMgr::OnCompleteLoad(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultMgr::OnCompleteLoad(CAssaultMgr *this,CUser *param_1)

{
  CAssaultPlace *this_00;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082ef1ff to 082ef218 has its CatchHandler @ 082ef21b */
  this_00 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  CAssaultPlace::CompleteLoad(this_00,param_1);
  return 1;
}
```
