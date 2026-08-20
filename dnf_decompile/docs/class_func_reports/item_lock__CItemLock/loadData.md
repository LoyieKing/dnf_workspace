# loadData

`_ZN9item_lock9CItemLock8loadDataEP5CUserPc`

`item_lock::CItemLock::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541714` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541714  _ZN9item_lock9CItemLock8loadDataEP5CUserPc
#           item_lock::CItemLock::loadData(CUser*, char*)
# range [0x08541714, 0x0854176d]
08541714 +0x00:  push   %ebp
08541715 +0x01:  mov    %esp,%ebp
08541717 +0x03:  sub    $0x28,%esp
0854171a +0x06:  mov    0x10(%ebp),%eax
0854171d +0x09:  mov    %eax,-0x10(%ebp)
08541720 +0x0c:  movl   $0x63,-0xc(%ebp)
08541727 +0x13:  jmp    0854175b <+0x47>
08541729 +0x15:  mov    -0xc(%ebp),%eax
0854172c +0x18:  shl    $0x3,%eax
0854172f +0x1b:  mov    %eax,%edx
08541731 +0x1d:  add    -0x10(%ebp),%edx
08541734 +0x20:  mov    -0xc(%ebp),%eax
08541737 +0x23:  add    $0x1,%eax
0854173a +0x26:  movzbl %al,%eax
0854173d +0x29:  mov    %edx,0xc(%esp)
08541741 +0x2d:  mov    %eax,0x8(%esp)
08541745 +0x31:  mov    0xc(%ebp),%eax
08541748 +0x34:  mov    %eax,0x4(%esp)
0854174c +0x38:  mov    0x8(%ebp),%eax
0854174f +0x3b:  mov    %eax,(%esp)
08541752 +0x3e:  call   08542a8a <_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo>  ; item_lock::CItemLock::PushItemLock(CUser*, unsigned char, stItemLockInfo*)
08541757 +0x43:  subl   $0x1,-0xc(%ebp)
0854175b +0x47:  mov    -0xc(%ebp),%eax
0854175e +0x4a:  not    %eax
08541760 +0x4c:  shr    $0x1f,%eax
08541763 +0x4f:  test   %al,%al
08541765 +0x51:  jne    08541729 <+0x15>
08541767 +0x53:  mov    $0x1,%eax
0854176c +0x58:  leave
0854176d +0x59:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::loadData @ 0x8541714

/* item_lock::CItemLock::loadData(CUser*, char*) */

undefined4 __thiscall item_lock::CItemLock::loadData(CItemLock *this,CUser *param_1,char *param_2)

{
  int local_10;
  
  for (local_10 = 99; -1 < local_10; local_10 = local_10 + -1) {
    PushItemLock(this,param_1,(char)local_10 + '\x01',(stItemLockInfo *)(param_2 + local_10 * 8));
  }
  return 1;
}
```
