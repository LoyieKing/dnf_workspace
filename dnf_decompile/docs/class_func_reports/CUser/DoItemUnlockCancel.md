# DoItemUnlockCancel

`_ZN5CUser18DoItemUnlockCancelEii`

`CUser::DoItemUnlockCancel(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646dba  _ZN5CUser18DoItemUnlockCancelEii
#           CUser::DoItemUnlockCancel(int, int)
# range [0x08646dba, 0x08646df1]
08646dba +0x00:  push   %ebp
08646dbb +0x01:  mov    %esp,%ebp
08646dbd +0x03:  sub    $0x18,%esp
08646dc0 +0x06:  movl   $0x2,0x4(%esp)
08646dc8 +0x0e:  mov    0x8(%ebp),%eax
08646dcb +0x11:  mov    %eax,(%esp)
08646dce +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08646dd3 +0x19:  mov    0x10(%ebp),%edx
08646dd6 +0x1c:  mov    %edx,0xc(%esp)
08646dda +0x20:  mov    0xc(%ebp),%edx
08646ddd +0x23:  mov    %edx,0x8(%esp)
08646de1 +0x27:  mov    0x8(%ebp),%edx
08646de4 +0x2a:  mov    %edx,0x4(%esp)
08646de8 +0x2e:  mov    %eax,(%esp)
08646deb +0x31:  call   085424c2 <_ZN9item_lock9CItemLock18DoItemUnlockCancelEP5CUserii>  ; item_lock::CItemLock::DoItemUnlockCancel(CUser*, int, int)
08646df0 +0x36:  leave
08646df1 +0x37:  ret
```

## 反编译 C

```c
// CUser::DoItemUnlockCancel @ 0x8646dba

/* CUser::DoItemUnlockCancel(int, int) */

void __thiscall CUser::DoItemUnlockCancel(CUser *this,int param_1,int param_2)

{
  CItemLock *this_00;
  
  this_00 = (CItemLock *)GetCharacExpandData(this,2);
  item_lock::CItemLock::DoItemUnlockCancel(this_00,this,param_1,param_2);
  return;
}
```
