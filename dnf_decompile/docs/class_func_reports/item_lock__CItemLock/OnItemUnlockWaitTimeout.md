# OnItemUnlockWaitTimeout

`_ZN9item_lock9CItemLock23OnItemUnlockWaitTimeoutEP5CUser`

`item_lock::CItemLock::OnItemUnlockWaitTimeout(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542a6a  _ZN9item_lock9CItemLock23OnItemUnlockWaitTimeoutEP5CUser
#           item_lock::CItemLock::OnItemUnlockWaitTimeout(CUser*)
# range [0x08542a6a, 0x08542a89]
08542a6a +0x00:  push   %ebp
08542a6b +0x01:  mov    %esp,%ebp
08542a6d +0x03:  sub    $0x18,%esp
08542a70 +0x06:  mov    0xc(%ebp),%eax
08542a73 +0x09:  mov    %eax,0x4(%esp)
08542a77 +0x0d:  mov    0x8(%ebp),%eax
08542a7a +0x10:  mov    %eax,(%esp)
08542a7d +0x13:  call   08542b80 <_ZN9item_lock9CItemLock11PopItemLockEP5CUser>  ; item_lock::CItemLock::PopItemLock(CUser*)
08542a82 +0x18:  mov    $0x1,%eax
08542a87 +0x1d:  leave
08542a88 +0x1e:  ret
08542a89 +0x1f:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::OnItemUnlockWaitTimeout @ 0x8542a6a

/* item_lock::CItemLock::OnItemUnlockWaitTimeout(CUser*) */

undefined4 __thiscall item_lock::CItemLock::OnItemUnlockWaitTimeout(CItemLock *this,CUser *param_1)

{
  PopItemLock(this,param_1);
  return 1;
}
```
