# IsAbleItemLock

`_ZNK9item_lock9CItemLock14IsAbleItemLockEh`

`item_lock::CItemLock::IsAbleItemLock(unsigned char) const`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541afe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541afe  _ZNK9item_lock9CItemLock14IsAbleItemLockEh
#           item_lock::CItemLock::IsAbleItemLock(unsigned char) const
# range [0x08541afe, 0x08541b29]
08541afe +0x00:  push   %ebp
08541aff +0x01:  mov    %esp,%ebp
08541b01 +0x03:  sub    $0x28,%esp
08541b04 +0x06:  mov    0xc(%ebp),%eax
08541b07 +0x09:  mov    %al,-0xc(%ebp)
08541b0a +0x0c:  mov    0x8(%ebp),%eax
08541b0d +0x0f:  add    $0x20,%eax
08541b10 +0x12:  mov    %eax,(%esp)
08541b13 +0x15:  call   08543396 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x378>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x378
08541b18 +0x1a:  test   %al,%al
08541b1a +0x1c:  je     08541b23 <+0x25>
08541b1c +0x1e:  mov    $0x16,%eax
08541b21 +0x23:  jmp    08541b28 <+0x2a>
08541b23 +0x25:  mov    $0x0,%eax
08541b28 +0x2a:  leave
08541b29 +0x2b:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::IsAbleItemLock @ 0x8541afe

/* item_lock::CItemLock::IsAbleItemLock(unsigned char) const */

undefined4 item_lock::CItemLock::IsAbleItemLock(uchar param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined3 in_stack_00000005;
  
  cVar1 = std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::empty
                    ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *
                     )(_param_1 + 0x20));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x16;
  }
  return uVar2;
}
```
