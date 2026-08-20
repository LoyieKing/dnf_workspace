# alonePlay_Mode

`_ZN5CUser14alonePlay_ModeEv`

`CUser::alonePlay_Mode()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dc7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dc7a  _ZN5CUser14alonePlay_ModeEv
#           CUser::alonePlay_Mode()
# range [0x0868dc7a, 0x0868dcbb]
0868dc7a +0x00:  push   %ebp
0868dc7b +0x01:  mov    %esp,%ebp
0868dc7d +0x03:  sub    $0x28,%esp
0868dc80 +0x06:  mov    0x8(%ebp),%eax
0868dc83 +0x09:  mov    %eax,(%esp)
0868dc86 +0x0c:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
0868dc8b +0x11:  mov    %eax,-0x10(%ebp)
0868dc8e +0x14:  movl   $0x1b,0x4(%esp)
0868dc96 +0x1c:  mov    -0x10(%ebp),%eax
0868dc99 +0x1f:  mov    %eax,(%esp)
0868dc9c +0x22:  call   084b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>  ; CGameOption::get_etc_option(ENUM_OPTION_ETC)
0868dca1 +0x27:  mov    %ax,-0xa(%ebp)
0868dca5 +0x2b:  movswl -0xa(%ebp),%eax
0868dca9 +0x2f:  cmp    $0x1,%eax
0868dcac +0x32:  jne    0868dcb5 <+0x3b>
0868dcae +0x34:  mov    $0x1,%eax
0868dcb3 +0x39:  jmp    0868dcba <+0x40>
0868dcb5 +0x3b:  mov    $0x0,%eax
0868dcba +0x40:  leave
0868dcbb +0x41:  ret
```

## 反编译 C

```c
// CUser::alonePlay_Mode @ 0x868dc7a

/* CUser::alonePlay_Mode() */

bool __thiscall CUser::alonePlay_Mode(CUser *this)

{
  short sVar1;
  CGameOption *pCVar2;
  
  pCVar2 = (CGameOption *)GetGameOptionRef(this);
  sVar1 = CGameOption::get_etc_option(pCVar2,0x1b);
  return sVar1 == 1;
}
```
