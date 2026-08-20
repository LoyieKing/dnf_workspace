# walkout_member

`_ZN6CParty14walkout_memberEP5CUseri`

`CParty::walkout_member(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859ca4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859ca4a  _ZN6CParty14walkout_memberEP5CUseri
#           CParty::walkout_member(CUser*, int)
# range [0x0859ca4a, 0x0859caff]
0859ca4a +0x00:  push   %ebp
0859ca4b +0x01:  mov    %esp,%ebp
0859ca4d +0x03:  sub    $0x28,%esp
0859ca50 +0x06:  mov    0x8(%ebp),%eax
0859ca53 +0x09:  mov    0x74(%eax),%eax
0859ca56 +0x0c:  cmp    0xc(%ebp),%eax
0859ca59 +0x0f:  je     0859ca65 <+0x1b>
0859ca5b +0x11:  mov    $0x8,%eax
0859ca60 +0x16:  jmp    0859cafe <+0xb4>
0859ca65 +0x1b:  mov    0x10(%ebp),%edx
0859ca68 +0x1e:  mov    0x8(%ebp),%ecx
0859ca6b +0x21:  mov    %edx,%eax
0859ca6d +0x23:  add    %eax,%eax
0859ca6f +0x25:  add    %edx,%eax
0859ca71 +0x27:  shl    $0x3,%eax
0859ca74 +0x2a:  lea    (%ecx,%eax,1),%eax
0859ca77 +0x2d:  add    $0x78,%eax
0859ca7a +0x30:  mov    (%eax),%eax
0859ca7c +0x32:  test   %eax,%eax
0859ca7e +0x34:  je     0859caf9 <+0xaf>
0859ca80 +0x36:  mov    0x10(%ebp),%edx
0859ca83 +0x39:  mov    0x8(%ebp),%ecx
0859ca86 +0x3c:  mov    %edx,%eax
0859ca88 +0x3e:  add    %eax,%eax
0859ca8a +0x40:  add    %edx,%eax
0859ca8c +0x42:  shl    $0x3,%eax
0859ca8f +0x45:  lea    (%ecx,%eax,1),%eax
0859ca92 +0x48:  add    $0x78,%eax
0859ca95 +0x4b:  mov    (%eax),%eax
0859ca97 +0x4d:  mov    %eax,-0x10(%ebp)
0859ca9a +0x50:  mov    0x10(%ebp),%edx
0859ca9d +0x53:  mov    0x8(%ebp),%ecx
0859caa0 +0x56:  mov    %edx,%eax
0859caa2 +0x58:  add    %eax,%eax
0859caa4 +0x5a:  add    %edx,%eax
0859caa6 +0x5c:  shl    $0x3,%eax
0859caa9 +0x5f:  lea    (%ecx,%eax,1),%eax
0859caac +0x62:  add    $0x78,%eax
0859caaf +0x65:  mov    (%eax),%eax
0859cab1 +0x67:  movl   $0x2,0x8(%esp)
0859cab9 +0x6f:  mov    %eax,0x4(%esp)
0859cabd +0x73:  mov    0x8(%ebp),%eax
0859cac0 +0x76:  mov    %eax,(%esp)
0859cac3 +0x79:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0859cac8 +0x7e:  mov    %eax,-0xc(%ebp)
0859cacb +0x81:  cmpl   $0x0,-0xc(%ebp)
0859cacf +0x85:  jne    0859caec <+0xa2>
0859cad1 +0x87:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0859cad6 +0x8c:  mov    -0x10(%ebp),%edx
0859cad9 +0x8f:  mov    %edx,0x4(%esp)
0859cadd +0x93:  mov    %eax,(%esp)
0859cae0 +0x96:  call   082ed672 <_ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser>  ; pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CUser*)
0859cae5 +0x9b:  mov    $0x0,%eax
0859caea +0xa0:  jmp    0859cafe <+0xb4>
0859caec +0xa2:  cmpl   $0x1,-0xc(%ebp)
0859caf0 +0xa6:  jne    0859caf9 <+0xaf>
0859caf2 +0xa8:  mov    $0x1,%eax
0859caf7 +0xad:  jmp    0859cafe <+0xb4>
0859caf9 +0xaf:  mov    $0x4,%eax
0859cafe +0xb4:  leave
0859caff +0xb5:  ret
```

## 反编译 C

```c
// CParty::walkout_member @ 0x859ca4a

/* CParty::walkout_member(CUser*, int) */

undefined4 __thiscall CParty::walkout_member(CParty *this,CUser *param_1,int param_2)

{
  CUser *pCVar1;
  int iVar2;
  CAssaultMgr *this_00;
  
  if (*(CUser **)(this + 0x74) != param_1) {
    return 8;
  }
  if (*(int *)(this + param_2 * 0x18 + 0x78) != 0) {
    pCVar1 = *(CUser **)(this + param_2 * 0x18 + 0x78);
    iVar2 = leave_user(this,*(undefined4 *)(this + param_2 * 0x18 + 0x78),2);
    if (iVar2 == 0) {
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(this_00,pCVar1);
      return 0;
    }
    if (iVar2 == 1) {
      return 1;
    }
  }
  return 4;
}
```
