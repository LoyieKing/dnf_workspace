# clear

`_ZN8WongWork11CQuestClear5clearEv`

`WongWork::CQuestClear::clear()`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb06  _ZN8WongWork11CQuestClear5clearEv
#           WongWork::CQuestClear::clear()
# range [0x0808bb06, 0x0808bb33]
0808bb06 +0x00:  push   %ebp
0808bb07 +0x01:  mov    %esp,%ebp
0808bb09 +0x03:  sub    $0x18,%esp
0808bb0c +0x06:  mov    0x8(%ebp),%eax
0808bb0f +0x09:  movl   $0x7530,0x8(%esp)
0808bb17 +0x11:  movl   $0x0,0x4(%esp)
0808bb1f +0x19:  mov    %eax,(%esp)
0808bb22 +0x1c:  call   0807dcc0 <_init+0x5b8>
0808bb27 +0x21:  mov    0x8(%ebp),%eax
0808bb2a +0x24:  movb   $0x0,0x7530(%eax)
0808bb31 +0x2b:  leave
0808bb32 +0x2c:  ret
0808bb33 +0x2d:  nop
```

## 反编译 C

```c
// WongWork::CQuestClear::clear @ 0x808bb06

/* WongWork::CQuestClear::clear() */

void __thiscall WongWork::CQuestClear::clear(CQuestClear *this)

{
  memset(this,0,30000);
  this[30000] = (CQuestClear)0x0;
  return;
}
```
