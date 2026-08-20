# alonePlay_Mode

`_ZN5CUser14alonePlay_ModeERK15MSG_REQ_TO_PEER`

`CUser::alonePlay_Mode(MSG_REQ_TO_PEER const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dcbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dcbc  _ZN5CUser14alonePlay_ModeERK15MSG_REQ_TO_PEER
#           CUser::alonePlay_Mode(MSG_REQ_TO_PEER const&)
# range [0x0868dcbc, 0x0868dd17]
0868dcbc +0x00:  push   %ebp
0868dcbd +0x01:  mov    %esp,%ebp
0868dcbf +0x03:  sub    $0x28,%esp
0868dcc2 +0x06:  mov    0x8(%ebp),%eax
0868dcc5 +0x09:  mov    %eax,(%esp)
0868dcc8 +0x0c:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
0868dccd +0x11:  mov    %eax,-0x10(%ebp)
0868dcd0 +0x14:  movl   $0x1b,0x4(%esp)
0868dcd8 +0x1c:  mov    -0x10(%ebp),%eax
0868dcdb +0x1f:  mov    %eax,(%esp)
0868dcde +0x22:  call   084b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>  ; CGameOption::get_etc_option(ENUM_OPTION_ETC)
0868dce3 +0x27:  mov    %ax,-0xa(%ebp)
0868dce7 +0x2b:  mov    0xc(%ebp),%eax
0868dcea +0x2e:  movzbl 0xf(%eax),%eax
0868dcee +0x32:  movsbl %al,%eax
0868dcf1 +0x35:  add    $0x0,%eax
0868dcf4 +0x38:  cmp    $0x3,%eax
0868dcf7 +0x3b:  jbe    0868dd00 <+0x44>
0868dcf9 +0x3d:  mov    $0x0,%eax
0868dcfe +0x42:  jmp    0868dd16 <+0x5a>
0868dd00 +0x44:  nop
0868dd01 +0x45:  movswl -0xa(%ebp),%eax
0868dd05 +0x49:  cmp    $0x1,%eax
0868dd08 +0x4c:  jne    0868dd11 <+0x55>
0868dd0a +0x4e:  mov    $0x1,%eax
0868dd0f +0x53:  jmp    0868dd16 <+0x5a>
0868dd11 +0x55:  mov    $0x0,%eax
0868dd16 +0x5a:  leave
0868dd17 +0x5b:  ret
```

## 反编译 C

```c
// CUser::alonePlay_Mode @ 0x868dcbc

/* CUser::alonePlay_Mode(MSG_REQ_TO_PEER const&) */

undefined4 __thiscall CUser::alonePlay_Mode(CUser *this,MSG_REQ_TO_PEER *param_1)

{
  short sVar1;
  CGameOption *pCVar2;
  undefined4 uVar3;
  
  pCVar2 = (CGameOption *)GetGameOptionRef(this);
  sVar1 = CGameOption::get_etc_option(pCVar2,0x1b);
  if ((byte)param_1[0xf] < 4) {
    if (sVar1 == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
