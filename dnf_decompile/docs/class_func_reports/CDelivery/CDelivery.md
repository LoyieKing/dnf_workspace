# CDelivery

`_ZN9CDeliveryC1Ev`

`CDelivery::CDelivery()`

| 类 | 地址 |
|---|---|
| `CDelivery` | `0x08116386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08116386  _ZN9CDeliveryC1Ev
#           CDelivery::CDelivery()
# range [0x08116386, 0x08116399]
08116386 +0x00:  push   %ebp
08116387 +0x01:  mov    %esp,%ebp
08116389 +0x03:  sub    $0x18,%esp
0811638c +0x06:  mov    0x8(%ebp),%eax
0811638f +0x09:  mov    %eax,(%esp)
08116392 +0x0c:  call   08117ad2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x11e7>  ; global constructors keyed to CEventManager::CEventManager()+0x11e7
08116397 +0x11:  leave
08116398 +0x12:  ret
08116399 +0x13:  nop
```

## 反编译 C

```c
// CDelivery::CDelivery @ 0x8116386

/* CDelivery::CDelivery() */

void __thiscall CDelivery::CDelivery(CDelivery *this)

{
  std::
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  ::map((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
         *)this);
  return;
}
```
