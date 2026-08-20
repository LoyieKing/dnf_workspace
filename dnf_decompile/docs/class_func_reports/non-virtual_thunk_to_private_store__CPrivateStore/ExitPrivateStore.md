# ExitPrivateStore

`_ZThn4_N13private_store13CPrivateStore16ExitPrivateStoreEv`

`non-virtual thunk to private_store::CPrivateStore::ExitPrivateStore()`

| 类 | 地址 |
|---|---|
| `non-virtual thunk to private_store::CPrivateStore` | `0x085c8fcd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c8fcd  _ZThn4_N13private_store13CPrivateStore16ExitPrivateStoreEv
#           non-virtual thunk to private_store::CPrivateStore::ExitPrivateStore()
# range [0x085c8fcd, 0x085c8fd2]
085c8fcd +0x00:  addl   $0xfffffffc,0x4(%esp)
085c8fd2 +0x05:  jmp    085c8fd4 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv>  ; private_store::CPrivateStore::ExitPrivateStore()
```

## 反编译 C

```c
// <global>::non-virtual @ 0x85c8fcd

/* non-virtual thunk to private_store::CPrivateStore::ExitPrivateStore() */

void __thiscall private_store::CPrivateStore::ExitPrivateStore(CPrivateStore *this)

{
  ExitPrivateStore(this + -4);
  return;
}
```
