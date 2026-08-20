# set_etc_option

`_ZN11CGameOption14set_etc_optionE15ENUM_OPTION_ETCs`

`CGameOption::set_etc_option(ENUM_OPTION_ETC, short)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b7216` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7216  _ZN11CGameOption14set_etc_optionE15ENUM_OPTION_ETCs
#           CGameOption::set_etc_option(ENUM_OPTION_ETC, short)
# range [0x084b7216, 0x084b7245]
084b7216 +0x00:  push   %ebp
084b7217 +0x01:  mov    %esp,%ebp
084b7219 +0x03:  sub    $0x28,%esp
084b721c +0x06:  mov    0x10(%ebp),%eax
084b721f +0x09:  mov    %ax,-0xc(%ebp)
084b7223 +0x0d:  movswl -0xc(%ebp),%eax
084b7227 +0x11:  mov    0x8(%ebp),%edx
084b722a +0x14:  add    $0x17a,%edx
084b7230 +0x1a:  mov    %eax,0x8(%esp)
084b7234 +0x1e:  mov    0xc(%ebp),%eax
084b7237 +0x21:  mov    %eax,0x4(%esp)
084b723b +0x25:  mov    %edx,(%esp)
084b723e +0x28:  call   084b7336 <_GLOBAL__I__ZN11CGameOptionC2Ev+0x1c>  ; global constructors keyed to CGameOption::CGameOption()+0x1c
084b7243 +0x2d:  leave
084b7244 +0x2e:  ret
084b7245 +0x2f:  nop
```

## 反编译 C

```c
// CGameOption::set_etc_option @ 0x84b7216

/* CGameOption::set_etc_option(ENUM_OPTION_ETC, short) */

void __thiscall CGameOption::set_etc_option(CGameOption *this,undefined4 param_2,short param_3)

{
  CETCOption::setETCOption((CETCOption *)(this + 0x17a),param_2,(int)param_3);
  return;
}
```
