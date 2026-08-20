# BuyPrivateStoreItem

`_ZThn4_N13private_store13CPrivateStore19BuyPrivateStoreItemEii`

`non-virtual thunk to private_store::CPrivateStore::BuyPrivateStoreItem(int, int)`

| 类 | 地址 |
|---|---|
| `non-virtual thunk to private_store::CPrivateStore` | `0x085c7e6d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7e6d  _ZThn4_N13private_store13CPrivateStore19BuyPrivateStoreItemEii
#           non-virtual thunk to private_store::CPrivateStore::BuyPrivateStoreItem(int, int)
# range [0x085c7e6d, 0x085c7e72]
085c7e6d +0x00:  addl   $0xfffffffc,0x4(%esp)
085c7e72 +0x05:  jmp    085c7e74 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii>  ; private_store::CPrivateStore::BuyPrivateStoreItem(int, int)
```

## 反编译 C

```c
// <global>::non-virtual @ 0x85c7e6d

/* non-virtual thunk to private_store::CPrivateStore::BuyPrivateStoreItem(int, int) */

void __thiscall
private_store::CPrivateStore::BuyPrivateStoreItem(CPrivateStore *this,int param_1,int param_2)

{
  BuyPrivateStoreItem(this + -4,param_1,param_2);
  return;
}
```
