# EnterPrivateStore

`_ZThn4_N13private_store13CPrivateStore17EnterPrivateStoreEv`

`non-virtual thunk to private_store::CPrivateStore::EnterPrivateStore()`

| 类 | 地址 |
|---|---|
| `non-virtual thunk to private_store::CPrivateStore` | `0x085c8dcf` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c8dcf  _ZThn4_N13private_store13CPrivateStore17EnterPrivateStoreEv
#           non-virtual thunk to private_store::CPrivateStore::EnterPrivateStore()
# range [0x085c8dcf, 0x085c8dd4]
085c8dcf +0x00:  addl   $0xfffffffc,0x4(%esp)
085c8dd4 +0x05:  jmp    085c8dd6 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv>  ; private_store::CPrivateStore::EnterPrivateStore()
```

## 反编译 C

```c
// <global>::non-virtual @ 0x85c8dcf

/* non-virtual thunk to private_store::CPrivateStore::EnterPrivateStore() */

void __thiscall private_store::CPrivateStore::EnterPrivateStore(CPrivateStore *this)

{
  EnterPrivateStore(this + -4);
  return;
}
```
