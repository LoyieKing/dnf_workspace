# ~DB_UpdateQuest

`_ZN14DB_UpdateQuestD1Ev`

`DB_UpdateQuest::~DB_UpdateQuest()`

| 类 | 地址 |
|---|---|
| `DB_UpdateQuest` | `0x08418b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418b90  _ZN14DB_UpdateQuestD1Ev
#           DB_UpdateQuest::~DB_UpdateQuest()
# range [0x08418b90, 0x08418bbf]
08418b90 +0x00:  push   %ebp
08418b91 +0x01:  mov    %esp,%ebp
08418b93 +0x03:  sub    $0x18,%esp
08418b96 +0x06:  mov    0x8(%ebp),%eax
08418b99 +0x09:  movl   $&_ZTV14DB_UpdateQuest+0x8,(%eax)
08418b9f +0x0f:  mov    0x8(%ebp),%eax
08418ba2 +0x12:  mov    %eax,(%esp)
08418ba5 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08418baa +0x1a:  mov    $0x0,%eax
08418baf +0x1f:  test   %al,%al
08418bb1 +0x21:  je     08418bbe <+0x2e>
08418bb3 +0x23:  mov    0x8(%ebp),%eax
08418bb6 +0x26:  mov    %eax,(%esp)
08418bb9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08418bbe +0x2e:  leave
08418bbf +0x2f:  ret
```

## 反编译 C

```c
// DB_UpdateQuest::~DB_UpdateQuest @ 0x8418b90

/* WARNING: Removing unreachable block (ram,0x08418bb3) */
/* DB_UpdateQuest::~DB_UpdateQuest() */

void __thiscall DB_UpdateQuest::~DB_UpdateQuest(DB_UpdateQuest *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f990;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
