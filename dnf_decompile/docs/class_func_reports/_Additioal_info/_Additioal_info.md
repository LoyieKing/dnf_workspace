# _Additioal_info

`_ZN15_Additioal_infoC1Ev`

`_Additioal_info::_Additioal_info()`

| 类 | 地址 |
|---|---|
| `_Additioal_info` | `0x08348254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08348254  _ZN15_Additioal_infoC1Ev
#           _Additioal_info::_Additioal_info()
# range [0x08348254, 0x08348267]
08348254 +0x00:  push   %ebp
08348255 +0x01:  mov    %esp,%ebp
08348257 +0x03:  sub    $0x18,%esp
0834825a +0x06:  mov    0x8(%ebp),%eax
0834825d +0x09:  mov    %eax,(%esp)
08348260 +0x0c:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
08348265 +0x11:  leave
08348266 +0x12:  ret
08348267 +0x13:  nop
```

## 反编译 C

```c
// _Additioal_info::_Additioal_info @ 0x8348254

/* _Additioal_info::_Additioal_info() */

void __thiscall _Additioal_info::_Additioal_info(_Additioal_info *this)

{
  clear(this);
  return;
}
```
