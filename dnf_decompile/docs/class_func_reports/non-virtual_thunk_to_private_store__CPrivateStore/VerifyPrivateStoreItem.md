# VerifyPrivateStoreItem

`_ZThn4_N13private_store13CPrivateStore22VerifyPrivateStoreItemEii`

`non-virtual thunk to private_store::CPrivateStore::VerifyPrivateStoreItem(int, int)`

| 类 | 地址 |
|---|---|
| `non-virtual thunk to private_store::CPrivateStore` | `0x085c8745` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c8745  _ZThn4_N13private_store13CPrivateStore22VerifyPrivateStoreItemEii
#           non-virtual thunk to private_store::CPrivateStore::VerifyPrivateStoreItem(int, int)
# range [0x085c8745, 0x085c874a]
085c8745 +0x00:  addl   $0xfffffffc,0x4(%esp)
085c874a +0x05:  jmp    085c874c <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii>  ; private_store::CPrivateStore::VerifyPrivateStoreItem(int, int)
```

## 反编译 C

```c
// <global>::non-virtual @ 0x85c8745

/* non-virtual thunk to private_store::CPrivateStore::VerifyPrivateStoreItem(int, int) */

void __thiscall
private_store::CPrivateStore::VerifyPrivateStoreItem(CPrivateStore *this,int param_1,int param_2)

{
  VerifyPrivateStoreItem(this + -4,param_1,param_2);
  return;
}
```
