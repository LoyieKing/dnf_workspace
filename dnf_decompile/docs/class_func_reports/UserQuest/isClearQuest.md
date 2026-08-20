# isClearQuest

`_ZNK9UserQuest12isClearQuestEi`

`UserQuest::isClearQuest(int) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ab920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ab920  _ZNK9UserQuest12isClearQuestEi
#           UserQuest::isClearQuest(int) const
# range [0x086ab920, 0x086ab93d]
086ab920 +0x00:  push   %ebp
086ab921 +0x01:  mov    %esp,%ebp
086ab923 +0x03:  sub    $0x18,%esp
086ab926 +0x06:  mov    0xc(%ebp),%eax
086ab929 +0x09:  mov    0x8(%ebp),%edx
086ab92c +0x0c:  add    $0x4,%edx
086ab92f +0x0f:  mov    %eax,0x4(%esp)
086ab933 +0x13:  mov    %edx,(%esp)
086ab936 +0x16:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
086ab93b +0x1b:  leave
086ab93c +0x1c:  ret
086ab93d +0x1d:  nop
```

## 反编译 C

```c
// UserQuest::isClearQuest @ 0x86ab920

/* UserQuest::isClearQuest(int) const */

void __thiscall UserQuest::isClearQuest(UserQuest *this,int param_1)

{
  WongWork::CQuestClear::isClearedQuest((CQuestClear *)(this + 4),param_1);
  return;
}
```
