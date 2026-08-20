# DoItemLock

`_ZN5CUser10DoItemLockEii`

`CUser::DoItemLock(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646d4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646d4a  _ZN5CUser10DoItemLockEii
#           CUser::DoItemLock(int, int)
# range [0x08646d4a, 0x08646d81]
08646d4a +0x00:  push   %ebp
08646d4b +0x01:  mov    %esp,%ebp
08646d4d +0x03:  sub    $0x18,%esp
08646d50 +0x06:  movl   $0x2,0x4(%esp)
08646d58 +0x0e:  mov    0x8(%ebp),%eax
08646d5b +0x11:  mov    %eax,(%esp)
08646d5e +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08646d63 +0x19:  mov    0x10(%ebp),%edx
08646d66 +0x1c:  mov    %edx,0xc(%esp)
08646d6a +0x20:  mov    0xc(%ebp),%edx
08646d6d +0x23:  mov    %edx,0x8(%esp)
08646d71 +0x27:  mov    0x8(%ebp),%edx
08646d74 +0x2a:  mov    %edx,0x4(%esp)
08646d78 +0x2e:  mov    %eax,(%esp)
08646d7b +0x31:  call   08542192 <_ZN9item_lock9CItemLock10DoItemLockEP5CUserii>  ; item_lock::CItemLock::DoItemLock(CUser*, int, int)
08646d80 +0x36:  leave
08646d81 +0x37:  ret
```

## 反编译 C

```c
// CUser::DoItemLock @ 0x8646d4a

/* CUser::DoItemLock(int, int) */

void __thiscall CUser::DoItemLock(CUser *this,int param_1,int param_2)

{
  CItemLock *this_00;
  
  this_00 = (CItemLock *)GetCharacExpandData(this,2);
  item_lock::CItemLock::DoItemLock(this_00,this,param_1,param_2);
  return;
}
```
