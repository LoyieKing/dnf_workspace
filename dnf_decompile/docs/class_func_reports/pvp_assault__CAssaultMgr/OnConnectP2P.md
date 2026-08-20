# OnConnectP2P

`_ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci`

`pvp_assault::CAssaultMgr::OnConnectP2P(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ef27a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ef27a  _ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci
#           pvp_assault::CAssaultMgr::OnConnectP2P(CUser*, char*, int)
# range [0x082ef27a, 0x082ef31f]
082ef27a +0x00:  push   %ebp
082ef27b +0x01:  mov    %esp,%ebp
082ef27d +0x03:  push   %esi
082ef27e +0x04:  push   %ebx
082ef27f +0x05:  sub    $0x20,%esp
082ef282 +0x08:  mov    0xc(%ebp),%eax
082ef285 +0x0b:  mov    %eax,(%esp)
082ef288 +0x0e:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082ef28d +0x13:  mov    %eax,0x4(%esp)
082ef291 +0x17:  mov    0x8(%ebp),%eax
082ef294 +0x1a:  mov    %eax,(%esp)
082ef297 +0x1d:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082ef29c +0x22:  mov    %eax,-0x10(%ebp)
082ef29f +0x25:  mov    0x14(%ebp),%eax
082ef2a2 +0x28:  mov    %eax,0xc(%esp)
082ef2a6 +0x2c:  mov    0x10(%ebp),%eax
082ef2a9 +0x2f:  mov    %eax,0x8(%esp)
082ef2ad +0x33:  mov    0xc(%ebp),%eax
082ef2b0 +0x36:  mov    %eax,0x4(%esp)
082ef2b4 +0x3a:  mov    -0x10(%ebp),%eax
082ef2b7 +0x3d:  mov    %eax,(%esp)
082ef2ba +0x40:  call   082eb956 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci>  ; pvp_assault::CAssaultPlace::ConnectP2P(CUser*, char*, int)
082ef2bf +0x45:  jmp    082ef314 <+0x9a>
082ef2c1 +0x47:  cmp    $0x1,%edx
082ef2c4 +0x4a:  je     082ef2ce <+0x54>
082ef2c6 +0x4c:  mov    %eax,(%esp)
082ef2c9 +0x4f:  call   08ae3750 <_Unwind_Resume>
082ef2ce +0x54:  mov    %eax,(%esp)
082ef2d1 +0x57:  call   08725ce0 <__cxa_begin_catch>
082ef2d6 +0x5c:  mov    (%eax),%eax
082ef2d8 +0x5e:  mov    %eax,-0xc(%ebp)
082ef2db +0x61:  mov    -0xc(%ebp),%eax
082ef2de +0x64:  movzbl %al,%eax
082ef2e1 +0x67:  mov    %eax,0x8(%esp)
082ef2e5 +0x6b:  movl   $0x95,0x4(%esp)
082ef2ed +0x73:  mov    0xc(%ebp),%eax
082ef2f0 +0x76:  mov    %eax,(%esp)
082ef2f3 +0x79:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082ef2f8 +0x7e:  jmp    082ef30f <+0x95>
082ef2fa +0x80:  mov    %edx,%ebx
082ef2fc +0x82:  mov    %eax,%esi
082ef2fe +0x84:  call   08725c30 <__cxa_end_catch>
082ef303 +0x89:  mov    %esi,%eax
082ef305 +0x8b:  mov    %ebx,%edx
082ef307 +0x8d:  mov    %eax,(%esp)
082ef30a +0x90:  call   08ae3750 <_Unwind_Resume>
082ef30f +0x95:  call   08725c30 <__cxa_end_catch>
082ef314 +0x9a:  mov    $0x1,%eax
082ef319 +0x9f:  add    $0x20,%esp
082ef31c +0xa2:  pop    %ebx
082ef31d +0xa3:  pop    %esi
082ef31e +0xa4:  pop    %ebp
082ef31f +0xa5:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::OnConnectP2P @ 0x82ef27a

/* pvp_assault::CAssaultMgr::OnConnectP2P(CUser*, char*, int) */

undefined4 pvp_assault::CAssaultMgr::OnConnectP2P(CUser *param_1,char *param_2,int param_3)

{
  CUser *pCVar1;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_2);
                    /* try { // try from 082ef297 to 082ef2be has its CatchHandler @ 082ef2c1 */
  pCVar1 = (CUser *)_GetAssaultPlace((uint)param_1);
  CAssaultPlace::ConnectP2P(pCVar1,param_2,param_3);
  return 1;
}
```
