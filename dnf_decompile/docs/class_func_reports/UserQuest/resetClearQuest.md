# resetClearQuest

`_ZN9UserQuest15resetClearQuestEi`

`UserQuest::resetClearQuest(int)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ab93e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ab93e  _ZN9UserQuest15resetClearQuestEi
#           UserQuest::resetClearQuest(int)
# range [0x086ab93e, 0x086ab95b]
086ab93e +0x00:  push   %ebp
086ab93f +0x01:  mov    %esp,%ebp
086ab941 +0x03:  sub    $0x18,%esp
086ab944 +0x06:  mov    0xc(%ebp),%eax
086ab947 +0x09:  mov    0x8(%ebp),%edx
086ab94a +0x0c:  add    $0x4,%edx
086ab94d +0x0f:  mov    %eax,0x4(%esp)
086ab951 +0x13:  mov    %edx,(%esp)
086ab954 +0x16:  call   0808baac <_ZN8WongWork11CQuestClear18resetClearedQuestsEj>  ; WongWork::CQuestClear::resetClearedQuests(unsigned int)
086ab959 +0x1b:  leave
086ab95a +0x1c:  ret
086ab95b +0x1d:  nop
```

## 反编译 C

```c
// UserQuest::resetClearQuest @ 0x86ab93e

/* UserQuest::resetClearQuest(int) */

void __thiscall UserQuest::resetClearQuest(UserQuest *this,int param_1)

{
  WongWork::CQuestClear::resetClearedQuests((CQuestClear *)(this + 4),param_1);
  return;
}
```
