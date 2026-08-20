# get_SoloPlay_mode

`_ZN5CUser17get_SoloPlay_modeEv`

`CUser::get_SoloPlay_mode()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dd44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dd44  _ZN5CUser17get_SoloPlay_modeEv
#           CUser::get_SoloPlay_mode()
# range [0x0868dd44, 0x0868dd75]
0868dd44 +0x00:  push   %ebp
0868dd45 +0x01:  mov    %esp,%ebp
0868dd47 +0x03:  sub    $0x28,%esp
0868dd4a +0x06:  mov    0x8(%ebp),%eax
0868dd4d +0x09:  mov    %eax,(%esp)
0868dd50 +0x0c:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
0868dd55 +0x11:  mov    %eax,-0x10(%ebp)
0868dd58 +0x14:  movl   $0x1b,0x4(%esp)
0868dd60 +0x1c:  mov    -0x10(%ebp),%eax
0868dd63 +0x1f:  mov    %eax,(%esp)
0868dd66 +0x22:  call   084b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>  ; CGameOption::get_etc_option(ENUM_OPTION_ETC)
0868dd6b +0x27:  mov    %ax,-0xa(%ebp)
0868dd6f +0x2b:  movswl -0xa(%ebp),%eax
0868dd73 +0x2f:  leave
0868dd74 +0x30:  ret
0868dd75 +0x31:  nop
```

## 反编译 C

```c
// CUser::get_SoloPlay_mode @ 0x868dd44

/* CUser::get_SoloPlay_mode() */

int __thiscall CUser::get_SoloPlay_mode(CUser *this)

{
  short sVar1;
  CGameOption *pCVar2;
  
  pCVar2 = (CGameOption *)GetGameOptionRef(this);
  sVar1 = CGameOption::get_etc_option(pCVar2,0x1b);
  return (int)sVar1;
}
```
