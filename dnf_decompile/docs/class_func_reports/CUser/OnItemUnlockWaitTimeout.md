# OnItemUnlockWaitTimeout

`_ZN5CUser23OnItemUnlockWaitTimeoutEii`

`CUser::OnItemUnlockWaitTimeout(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646912` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646912  _ZN5CUser23OnItemUnlockWaitTimeoutEii
#           CUser::OnItemUnlockWaitTimeout(int, int)
# range [0x08646912, 0x08646941]
08646912 +0x00:  push   %ebp
08646913 +0x01:  mov    %esp,%ebp
08646915 +0x03:  sub    $0x18,%esp
08646918 +0x06:  movl   $0x2,0x4(%esp)
08646920 +0x0e:  mov    0x8(%ebp),%eax
08646923 +0x11:  mov    %eax,(%esp)
08646926 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0864692b +0x19:  mov    0x8(%ebp),%edx
0864692e +0x1c:  mov    %edx,0x4(%esp)
08646932 +0x20:  mov    %eax,(%esp)
08646935 +0x23:  call   08542a6a <_ZN9item_lock9CItemLock23OnItemUnlockWaitTimeoutEP5CUser>  ; item_lock::CItemLock::OnItemUnlockWaitTimeout(CUser*)
0864693a +0x28:  xor    $0x1,%eax
0864693d +0x2b:  test   %al,%al
0864693f +0x2d:  leave
08646940 +0x2e:  ret
08646941 +0x2f:  nop
```

## 反编译 C

```c
// CUser::OnItemUnlockWaitTimeout @ 0x8646912

/* CUser::OnItemUnlockWaitTimeout(int, int) */

uint CUser::OnItemUnlockWaitTimeout(int param_1,int param_2)

{
  CItemLock *this;
  uint uVar1;
  
  this = (CItemLock *)GetCharacExpandData((CUser *)param_1,2);
  uVar1 = item_lock::CItemLock::OnItemUnlockWaitTimeout(this,(CUser *)param_1);
  return uVar1 ^ 1;
}
```
