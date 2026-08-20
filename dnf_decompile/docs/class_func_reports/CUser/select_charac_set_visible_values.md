# select_charac_set_visible_values

`_ZN5CUser32select_charac_set_visible_valuesEc`

`CUser::select_charac_set_visible_values(char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868bf14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bf14  _ZN5CUser32select_charac_set_visible_valuesEc
#           CUser::select_charac_set_visible_values(char)
# range [0x0868bf14, 0x0868bf97]
0868bf14 +0x00:  push   %ebp
0868bf15 +0x01:  mov    %esp,%ebp
0868bf17 +0x03:  sub    $0x28,%esp
0868bf1a +0x06:  mov    0xc(%ebp),%eax
0868bf1d +0x09:  mov    %al,-0xc(%ebp)
0868bf20 +0x0c:  movsbl -0xc(%ebp),%edx
0868bf24 +0x10:  mov    0x8(%ebp),%eax
0868bf27 +0x13:  mov    %edx,0x4(%esp)
0868bf2b +0x17:  mov    %eax,(%esp)
0868bf2e +0x1a:  call   0868be08 <_ZN15CUserCharacInfo25set_charac_visible_valuesEc>  ; CUserCharacInfo::set_charac_visible_values(char)
0868bf33 +0x1f:  mov    0x8(%ebp),%eax
0868bf36 +0x22:  mov    %eax,(%esp)
0868bf39 +0x25:  call   0868bdc8 <_ZN15CUserCharacInfo10SetVisibleEv>  ; CUserCharacInfo::SetVisible()
0868bf3e +0x2a:  mov    0x8(%ebp),%eax
0868bf41 +0x2d:  mov    %eax,(%esp)
0868bf44 +0x30:  call   0868beb4 <_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv>  ; CUserCharacInfo::get_charac_visible_grow_avatar()
0868bf49 +0x35:  test   %al,%al
0868bf4b +0x37:  je     0868bf72 <+0x5e>
0868bf4d +0x39:  mov    0x8(%ebp),%eax
0868bf50 +0x3c:  mov    %eax,(%esp)
0868bf53 +0x3f:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
0868bf58 +0x44:  movl   $0x1,0x8(%esp)
0868bf60 +0x4c:  movl   $0x1,0x4(%esp)
0868bf68 +0x54:  mov    %eax,(%esp)
0868bf6b +0x57:  call   084b7216 <_ZN11CGameOption14set_etc_optionE15ENUM_OPTION_ETCs>  ; CGameOption::set_etc_option(ENUM_OPTION_ETC, short)
0868bf70 +0x5c:  jmp    0868bf95 <+0x81>
0868bf72 +0x5e:  mov    0x8(%ebp),%eax
0868bf75 +0x61:  mov    %eax,(%esp)
0868bf78 +0x64:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
0868bf7d +0x69:  movl   $0x0,0x8(%esp)
0868bf85 +0x71:  movl   $0x1,0x4(%esp)
0868bf8d +0x79:  mov    %eax,(%esp)
0868bf90 +0x7c:  call   084b7216 <_ZN11CGameOption14set_etc_optionE15ENUM_OPTION_ETCs>  ; CGameOption::set_etc_option(ENUM_OPTION_ETC, short)
0868bf95 +0x81:  leave
0868bf96 +0x82:  ret
0868bf97 +0x83:  nop
```

## 反编译 C

```c
// CUser::select_charac_set_visible_values @ 0x868bf14

/* CUser::select_charac_set_visible_values(char) */

void __thiscall CUser::select_charac_set_visible_values(CUser *this,char param_1)

{
  char cVar1;
  CGameOption *pCVar2;
  
  CUserCharacInfo::set_charac_visible_values((CUserCharacInfo *)this,param_1);
  CUserCharacInfo::SetVisible((CUserCharacInfo *)this);
  cVar1 = CUserCharacInfo::get_charac_visible_grow_avatar((CUserCharacInfo *)this);
  if (cVar1 == '\0') {
    pCVar2 = (CGameOption *)GetGameOptionRef(this);
    CGameOption::set_etc_option(pCVar2,1,0);
  }
  else {
    pCVar2 = (CGameOption *)GetGameOptionRef(this);
    CGameOption::set_etc_option(pCVar2,1,1);
  }
  return;
}
```
