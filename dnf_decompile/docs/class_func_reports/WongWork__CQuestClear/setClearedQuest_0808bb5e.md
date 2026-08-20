# setClearedQuest

`_ZN8WongWork11CQuestClear15setClearedQuestEPKNS_14STClearedQuestE`

`WongWork::CQuestClear::setClearedQuest(WongWork::STClearedQuest const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CQuestClear` | `0x0808bb5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808bb5e  _ZN8WongWork11CQuestClear15setClearedQuestEPKNS_14STClearedQuestE
#           WongWork::CQuestClear::setClearedQuest(WongWork::STClearedQuest const*)
# range [0x0808bb5e, 0x0808bb7f]
0808bb5e +0x00:  push   %ebp
0808bb5f +0x01:  mov    %esp,%ebp
0808bb61 +0x03:  sub    $0x18,%esp
0808bb64 +0x06:  mov    0x8(%ebp),%eax
0808bb67 +0x09:  movl   $0x7530,0x8(%esp)
0808bb6f +0x11:  mov    0xc(%ebp),%edx
0808bb72 +0x14:  mov    %edx,0x4(%esp)
0808bb76 +0x18:  mov    %eax,(%esp)
0808bb79 +0x1b:  call   0807d8a0 <_init+0x198>
0808bb7e +0x20:  leave
0808bb7f +0x21:  ret
```

## 反编译 C

```c
// WongWork::CQuestClear::setClearedQuest @ 0x808bb5e

/* WongWork::CQuestClear::setClearedQuest(WongWork::STClearedQuest const*) */

void __thiscall WongWork::CQuestClear::setClearedQuest(CQuestClear *this,STClearedQuest *param_1)

{
  memcpy(this,param_1,30000);
  return;
}
```
