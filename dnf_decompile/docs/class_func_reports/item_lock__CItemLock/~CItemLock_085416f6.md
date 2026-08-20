# ~CItemLock

`_ZN9item_lock9CItemLockD0Ev`

`item_lock::CItemLock::~CItemLock()`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x085416f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085416f6  _ZN9item_lock9CItemLockD0Ev
#           item_lock::CItemLock::~CItemLock()
# range [0x085416f6, 0x08541713]
085416f6 +0x00:  push   %ebp
085416f7 +0x01:  mov    %esp,%ebp
085416f9 +0x03:  sub    $0x18,%esp
085416fc +0x06:  mov    0x8(%ebp),%eax
085416ff +0x09:  mov    %eax,(%esp)
08541702 +0x0c:  call   08541644 <_ZN9item_lock9CItemLockD1Ev>  ; item_lock::CItemLock::~CItemLock()
08541707 +0x11:  mov    0x8(%ebp),%eax
0854170a +0x14:  mov    %eax,(%esp)
0854170d +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08541712 +0x1c:  leave
08541713 +0x1d:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::~CItemLock @ 0x85416f6

/* item_lock::CItemLock::~CItemLock() */

void __thiscall item_lock::CItemLock::~CItemLock(CItemLock *this)

{
  ~CItemLock(this);
  operator_delete(this);
  return;
}
```
