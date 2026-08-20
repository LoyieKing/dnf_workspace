# DB_UpdateQuest

`_ZN14DB_UpdateQuestC1Ev`

`DB_UpdateQuest::DB_UpdateQuest()`

| 类 | 地址 |
|---|---|
| `DB_UpdateQuest` | `0x08418b74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418b74  _ZN14DB_UpdateQuestC1Ev
#           DB_UpdateQuest::DB_UpdateQuest()
# range [0x08418b74, 0x08418b8f]
08418b74 +0x00:  push   %ebp
08418b75 +0x01:  mov    %esp,%ebp
08418b77 +0x03:  sub    $0x18,%esp
08418b7a +0x06:  mov    0x8(%ebp),%eax
08418b7d +0x09:  mov    %eax,(%esp)
08418b80 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08418b85 +0x11:  mov    0x8(%ebp),%eax
08418b88 +0x14:  movl   $&_ZTV14DB_UpdateQuest+0x8,(%eax)
08418b8e +0x1a:  leave
08418b8f +0x1b:  ret
```

## 反编译 C

```c
// DB_UpdateQuest::DB_UpdateQuest @ 0x8418b74

/* DB_UpdateQuest::DB_UpdateQuest() */

void __thiscall DB_UpdateQuest::DB_UpdateQuest(DB_UpdateQuest *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f990;
  return;
}
```
