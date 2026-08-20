# SwapCreatureItem

`_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii`

`user_creature::CCreatureMgr::SwapCreatureItem(Inven_Item*, int, int, Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x083399fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083399fa  _ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii
#           user_creature::CCreatureMgr::SwapCreatureItem(Inven_Item*, int, int, Inven_Item*, int, int)
# range [0x083399fa, 0x08339acb]
083399fa +0x00:  push   %ebp
083399fb +0x01:  mov    %esp,%ebp
083399fd +0x03:  sub    $0x28,%esp
08339a00 +0x06:  mov    0xc(%ebp),%eax
08339a03 +0x09:  movzbl 0x1(%eax),%eax
08339a07 +0x0d:  cmp    $0x5,%al
08339a09 +0x0f:  je     08339a16 <+0x1c>
08339a0b +0x11:  mov    0x18(%ebp),%eax
08339a0e +0x14:  movzbl 0x1(%eax),%eax
08339a12 +0x18:  cmp    $0x5,%al
08339a14 +0x1a:  jne    08339a59 <+0x5f>
08339a16 +0x1c:  mov    0x20(%ebp),%eax
08339a19 +0x1f:  mov    %eax,0x18(%esp)
08339a1d +0x23:  mov    0x1c(%ebp),%eax
08339a20 +0x26:  mov    %eax,0x14(%esp)
08339a24 +0x2a:  mov    0x18(%ebp),%eax
08339a27 +0x2d:  mov    %eax,0x10(%esp)
08339a2b +0x31:  mov    0x14(%ebp),%eax
08339a2e +0x34:  mov    %eax,0xc(%esp)
08339a32 +0x38:  mov    0x10(%ebp),%eax
08339a35 +0x3b:  mov    %eax,0x8(%esp)
08339a39 +0x3f:  mov    0xc(%ebp),%eax
08339a3c +0x42:  mov    %eax,0x4(%esp)
08339a40 +0x46:  mov    0x8(%ebp),%eax
08339a43 +0x49:  mov    %eax,(%esp)
08339a46 +0x4c:  call   08339420 <_ZN13user_creature12CCreatureMgr12SwapCreatureEP10Inven_ItemiiS2_ii>  ; user_creature::CCreatureMgr::SwapCreature(Inven_Item*, int, int, Inven_Item*, int, int)
08339a4b +0x51:  xor    $0x1,%eax
08339a4e +0x54:  test   %al,%al
08339a50 +0x56:  je     08339ab2 <+0xb8>
08339a52 +0x58:  mov    $0x0,%eax
08339a57 +0x5d:  jmp    08339aca <+0xd0>
08339a59 +0x5f:  mov    0xc(%ebp),%eax
08339a5c +0x62:  movzbl 0x1(%eax),%eax
08339a60 +0x66:  cmp    $0x6,%al
08339a62 +0x68:  je     08339a6f <+0x75>
08339a64 +0x6a:  mov    0x18(%ebp),%eax
08339a67 +0x6d:  movzbl 0x1(%eax),%eax
08339a6b +0x71:  cmp    $0x6,%al
08339a6d +0x73:  jne    08339ab3 <+0xb9>
08339a6f +0x75:  mov    0x20(%ebp),%eax
08339a72 +0x78:  mov    %eax,0x18(%esp)
08339a76 +0x7c:  mov    0x1c(%ebp),%eax
08339a79 +0x7f:  mov    %eax,0x14(%esp)
08339a7d +0x83:  mov    0x18(%ebp),%eax
08339a80 +0x86:  mov    %eax,0x10(%esp)
08339a84 +0x8a:  mov    0x14(%ebp),%eax
08339a87 +0x8d:  mov    %eax,0xc(%esp)
08339a8b +0x91:  mov    0x10(%ebp),%eax
08339a8e +0x94:  mov    %eax,0x8(%esp)
08339a92 +0x98:  mov    0xc(%ebp),%eax
08339a95 +0x9b:  mov    %eax,0x4(%esp)
08339a99 +0x9f:  mov    0x8(%ebp),%eax
08339a9c +0xa2:  mov    %eax,(%esp)
08339a9f +0xa5:  call   08339752 <_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii>  ; user_creature::CCreatureMgr::SwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int)
08339aa4 +0xaa:  xor    $0x1,%eax
08339aa7 +0xad:  test   %al,%al
08339aa9 +0xaf:  je     08339ab3 <+0xb9>
08339aab +0xb1:  mov    $0x0,%eax
08339ab0 +0xb6:  jmp    08339aca <+0xd0>
08339ab2 +0xb8:  nop
08339ab3 +0xb9:  mov    0x18(%ebp),%eax
08339ab6 +0xbc:  mov    %eax,0x4(%esp)
08339aba +0xc0:  mov    0xc(%ebp),%eax
08339abd +0xc3:  mov    %eax,(%esp)
08339ac0 +0xc6:  call   08342836 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4903>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4903
08339ac5 +0xcb:  mov    $0x1,%eax
08339aca +0xd0:  leave
08339acb +0xd1:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SwapCreatureItem @ 0x83399fa

/* user_creature::CCreatureMgr::SwapCreatureItem(Inven_Item*, int, int, Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SwapCreatureItem
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,
          int param_5,int param_6)

{
  char cVar1;
  
  if ((param_1[1] == (Inven_Item)0x5) || (param_4[1] == (Inven_Item)0x5)) {
    cVar1 = SwapCreature(this,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  else if (((param_1[1] == (Inven_Item)0x6) || (param_4[1] == (Inven_Item)0x6)) &&
          (cVar1 = SwapArtifact(this,param_1,param_2,param_3,param_4,param_5,param_6),
          cVar1 != '\x01')) {
    return 0;
  }
  std::swap<Inven_Item>(param_1,param_4);
  return 1;
}
```
