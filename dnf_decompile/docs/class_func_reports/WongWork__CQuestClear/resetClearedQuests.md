# resetClearedQuests

`_ZN8WongWork11CQuestClear18resetClearedQuestsEj`

`WongWork::CQuestClear::resetClearedQuests(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808baac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808baac  _ZN8WongWork11CQuestClear18resetClearedQuestsEj
#           WongWork::CQuestClear::resetClearedQuests(unsigned int)
# range [0x0808baac, 0x0808badf]
0808baac +0x00:  push   %ebp
0808baad +0x01:  mov    %esp,%ebp
0808baaf +0x03:  cmpl   $0x0,0xc(%ebp)
0808bab3 +0x07:  je     0808babe <+0x12>
0808bab5 +0x09:  cmpl   $0x752f,0xc(%ebp)
0808babc +0x10:  jbe    0808bac5 <+0x19>
0808babe +0x12:  mov    $0x0,%eax
0808bac3 +0x17:  jmp    0808bade <+0x32>
0808bac5 +0x19:  mov    0x8(%ebp),%eax
0808bac8 +0x1c:  movb   $0x1,0x7530(%eax)
0808bacf +0x23:  mov    0xc(%ebp),%eax
0808bad2 +0x26:  mov    0x8(%ebp),%edx
0808bad5 +0x29:  movb   $0x0,(%edx,%eax,1)
0808bad9 +0x2d:  mov    $0x1,%eax
0808bade +0x32:  pop    %ebp
0808badf +0x33:  ret
```

## 反编译 C

```c
// WongWork::CQuestClear::resetClearedQuests @ 0x808baac

/* WongWork::CQuestClear::resetClearedQuests(unsigned int) */

undefined4 __thiscall WongWork::CQuestClear::resetClearedQuests(CQuestClear *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (29999 < param_1)) {
    uVar1 = 0;
  }
  else {
    this[30000] = (CQuestClear)0x1;
    this[param_1] = (CQuestClear)0x0;
    uVar1 = 1;
  }
  return uVar1;
}
```
