# ~CQuestShop

`_ZN10CQuestShopD0Ev`

`CQuestShop::~CQuestShop()`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eecea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eecea  _ZN10CQuestShopD0Ev
#           CQuestShop::~CQuestShop()
# range [0x085eecea, 0x085eed07]
085eecea +0x00:  push   %ebp
085eeceb +0x01:  mov    %esp,%ebp
085eeced +0x03:  sub    $0x18,%esp
085eecf0 +0x06:  mov    0x8(%ebp),%eax
085eecf3 +0x09:  mov    %eax,(%esp)
085eecf6 +0x0c:  call   085eec60 <_ZN10CQuestShopD1Ev>  ; CQuestShop::~CQuestShop()
085eecfb +0x11:  mov    0x8(%ebp),%eax
085eecfe +0x14:  mov    %eax,(%esp)
085eed01 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085eed06 +0x1c:  leave
085eed07 +0x1d:  ret
```

## 反编译 C

```c
// CQuestShop::~CQuestShop @ 0x85eecea

/* CQuestShop::~CQuestShop() */

void __thiscall CQuestShop::~CQuestShop(CQuestShop *this)

{
  ~CQuestShop(this);
  operator_delete(this);
  return;
}
```
