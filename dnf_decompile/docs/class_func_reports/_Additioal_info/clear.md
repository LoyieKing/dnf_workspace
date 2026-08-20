# clear

`_ZN15_Additioal_info5clearEv`

`_Additioal_info::clear()`

| 类 | 地址 |
|---|---|
| `_Additioal_info` | `0x08348268` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08348268  _ZN15_Additioal_info5clearEv
#           _Additioal_info::clear()
# range [0x08348268, 0x0834828b]
08348268 +0x00:  push   %ebp
08348269 +0x01:  mov    %esp,%ebp
0834826b +0x03:  sub    $0x18,%esp
0834826e +0x06:  movl   $0x52,0x8(%esp)
08348276 +0x0e:  movl   $0x0,0x4(%esp)
0834827e +0x16:  mov    0x8(%ebp),%eax
08348281 +0x19:  mov    %eax,(%esp)
08348284 +0x1c:  call   0807dcc0 <_init+0x5b8>
08348289 +0x21:  leave
0834828a +0x22:  ret
0834828b +0x23:  nop
```

## 反编译 C

```c
// _Additioal_info::clear @ 0x8348268

/* _Additioal_info::clear() */

void __thiscall _Additioal_info::clear(_Additioal_info *this)

{
  memset(this,0,0x52);
  return;
}
```
