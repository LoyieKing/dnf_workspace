# get_etc_option

`_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC`

`CGameOption::get_etc_option(ENUM_OPTION_ETC)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b7246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7246  _ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC
#           CGameOption::get_etc_option(ENUM_OPTION_ETC)
# range [0x084b7246, 0x084b7265]
084b7246 +0x00:  push   %ebp
084b7247 +0x01:  mov    %esp,%ebp
084b7249 +0x03:  sub    $0x18,%esp
084b724c +0x06:  mov    0x8(%ebp),%eax
084b724f +0x09:  lea    0x17a(%eax),%edx
084b7255 +0x0f:  mov    0xc(%ebp),%eax
084b7258 +0x12:  mov    %eax,0x4(%esp)
084b725c +0x16:  mov    %edx,(%esp)
084b725f +0x19:  call   0822ab72 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21c
084b7264 +0x1e:  leave
084b7265 +0x1f:  ret
```

## 反编译 C

```c
// CGameOption::get_etc_option @ 0x84b7246

/* CGameOption::get_etc_option(ENUM_OPTION_ETC) */

void __thiscall CGameOption::get_etc_option(CGameOption *this,undefined4 param_2)

{
  CETCOption::getETCOption((CETCOption *)(this + 0x17a),param_2);
  return;
}
```
