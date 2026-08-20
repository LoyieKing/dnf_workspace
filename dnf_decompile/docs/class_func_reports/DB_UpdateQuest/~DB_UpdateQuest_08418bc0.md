# ~DB_UpdateQuest

`_ZN14DB_UpdateQuestD0Ev`

`DB_UpdateQuest::~DB_UpdateQuest()`

| 类 | 地址 |
|---|---|
| `DB_UpdateQuest` | `0x08418bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418bc0  _ZN14DB_UpdateQuestD0Ev
#           DB_UpdateQuest::~DB_UpdateQuest()
# range [0x08418bc0, 0x08418bdd]
08418bc0 +0x00:  push   %ebp
08418bc1 +0x01:  mov    %esp,%ebp
08418bc3 +0x03:  sub    $0x18,%esp
08418bc6 +0x06:  mov    0x8(%ebp),%eax
08418bc9 +0x09:  mov    %eax,(%esp)
08418bcc +0x0c:  call   08418b90 <_ZN14DB_UpdateQuestD1Ev>  ; DB_UpdateQuest::~DB_UpdateQuest()
08418bd1 +0x11:  mov    0x8(%ebp),%eax
08418bd4 +0x14:  mov    %eax,(%esp)
08418bd7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08418bdc +0x1c:  leave
08418bdd +0x1d:  ret
```

## 反编译 C

```c
// DB_UpdateQuest::~DB_UpdateQuest @ 0x8418bc0

/* DB_UpdateQuest::~DB_UpdateQuest() */

void __thiscall DB_UpdateQuest::~DB_UpdateQuest(DB_UpdateQuest *this)

{
  ~DB_UpdateQuest(this);
  operator_delete(this);
  return;
}
```
