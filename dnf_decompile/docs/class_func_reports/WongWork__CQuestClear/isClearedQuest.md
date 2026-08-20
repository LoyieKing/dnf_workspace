# isClearedQuest

`_ZNK8WongWork11CQuestClear14isClearedQuestEj`

`WongWork::CQuestClear::isClearedQuest(unsigned int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bae0  _ZNK8WongWork11CQuestClear14isClearedQuestEj
#           WongWork::CQuestClear::isClearedQuest(unsigned int) const
# range [0x0808bae0, 0x0808bb05]
0808bae0 +0x00:  push   %ebp
0808bae1 +0x01:  mov    %esp,%ebp
0808bae3 +0x03:  cmpl   $0x0,0xc(%ebp)
0808bae7 +0x07:  je     0808baf2 <+0x12>
0808bae9 +0x09:  cmpl   $0x752f,0xc(%ebp)
0808baf0 +0x10:  jbe    0808baf9 <+0x19>
0808baf2 +0x12:  mov    $0x0,%eax
0808baf7 +0x17:  jmp    0808bb03 <+0x23>
0808baf9 +0x19:  mov    0xc(%ebp),%eax
0808bafc +0x1c:  mov    0x8(%ebp),%edx
0808baff +0x1f:  movzbl (%edx,%eax,1),%eax
0808bb03 +0x23:  pop    %ebp
0808bb04 +0x24:  ret
0808bb05 +0x25:  nop
```

## 反编译 C

```c
// WongWork::CQuestClear::isClearedQuest @ 0x808bae0

/* WongWork::CQuestClear::isClearedQuest(unsigned int) const */

CQuestClear __thiscall WongWork::CQuestClear::isClearedQuest(CQuestClear *this,uint param_1)

{
  CQuestClear CVar1;
  
  if ((param_1 == 0) || (29999 < param_1)) {
    CVar1 = (CQuestClear)0x0;
  }
  else {
    CVar1 = this[param_1];
  }
  return CVar1;
}
```
