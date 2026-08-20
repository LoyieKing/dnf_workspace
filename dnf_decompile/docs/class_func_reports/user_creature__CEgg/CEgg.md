# CEgg

`_ZN13user_creature4CEggC1Ev`

`user_creature::CEgg::CEgg()`

| 类 | 地址 |
|---|---|
| `user_creature::CEgg` | `0x08338f4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338f4c  _ZN13user_creature4CEggC1Ev
#           user_creature::CEgg::CEgg()
# range [0x08338f4c, 0x08338f73]
08338f4c +0x00:  push   %ebp
08338f4d +0x01:  mov    %esp,%ebp
08338f4f +0x03:  sub    $0x18,%esp
08338f52 +0x06:  mov    0x8(%ebp),%eax
08338f55 +0x09:  mov    %eax,(%esp)
08338f58 +0x0c:  call   08340c82 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d4f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d4f
08338f5d +0x11:  mov    0x8(%ebp),%eax
08338f60 +0x14:  movl   $&_ZTVN13user_creature4CEggE+0x8,(%eax)
08338f66 +0x1a:  mov    0x8(%ebp),%eax
08338f69 +0x1d:  mov    %eax,(%esp)
08338f6c +0x20:  call   08338f82 <_ZN13user_creature4CEgg5ResetEv>  ; user_creature::CEgg::Reset()
08338f71 +0x25:  leave
08338f72 +0x26:  ret
08338f73 +0x27:  nop
```

## 反编译 C

```c
// user_creature::CEgg::CEgg @ 0x8338f4c

/* user_creature::CEgg::CEgg() */

void __thiscall user_creature::CEgg::CEgg(CEgg *this)

{
  CCreatureItem::CCreatureItem((CCreatureItem *)this);
  *(undefined ***)this = &PTR_Reset_08c2f4a8;
  Reset(this);
  return;
}
```
