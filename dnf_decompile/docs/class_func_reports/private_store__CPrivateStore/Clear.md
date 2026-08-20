# Clear

`_ZN13private_store13CPrivateStore5ClearEv`

`private_store::CPrivateStore::Clear()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c4e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4e70  _ZN13private_store13CPrivateStore5ClearEv
#           private_store::CPrivateStore::Clear()
# range [0x085c4e70, 0x085c4ecb]
085c4e70 +0x00:  push   %ebp
085c4e71 +0x01:  mov    %esp,%ebp
085c4e73 +0x03:  sub    $0x18,%esp
085c4e76 +0x06:  mov    0x8(%ebp),%eax
085c4e79 +0x09:  movl   $0x0,0x2c(%eax)
085c4e80 +0x10:  mov    0x8(%ebp),%eax
085c4e83 +0x13:  movl   $0x0,0x30(%eax)
085c4e8a +0x1a:  mov    0x8(%ebp),%eax
085c4e8d +0x1d:  movb   $0x0,0x10(%eax)
085c4e91 +0x21:  mov    0x8(%ebp),%eax
085c4e94 +0x24:  add    $0x24,%eax
085c4e97 +0x27:  mov    %eax,(%esp)
085c4e9a +0x2a:  call   085cb784 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x49a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x49a
085c4e9f +0x2f:  mov    0x8(%ebp),%eax
085c4ea2 +0x32:  add    $0x34,%eax
085c4ea5 +0x35:  mov    %eax,(%esp)
085c4ea8 +0x38:  call   085cd138 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e4e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e4e
085c4ead +0x3d:  mov    0x8(%ebp),%eax
085c4eb0 +0x40:  mov    %eax,(%esp)
085c4eb3 +0x43:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c4eb8 +0x48:  mov    0x8(%ebp),%eax
085c4ebb +0x4b:  movb   $0x0,0x8(%eax)
085c4ebf +0x4f:  mov    0x8(%ebp),%eax
085c4ec2 +0x52:  movl   $0x0,0xc(%eax)
085c4ec9 +0x59:  leave
085c4eca +0x5a:  ret
085c4ecb +0x5b:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::Clear @ 0x85c4e70

/* private_store::CPrivateStore::Clear() */

void __thiscall private_store::CPrivateStore::Clear(CPrivateStore *this)

{
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x10] = (CPrivateStore)0x0;
  PrivateStorePos::clear((PrivateStorePos *)(this + 0x24));
  std::list<CUser*,std::allocator<CUser*>>::clear
            ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
  ResetItems(this);
  this[8] = (CPrivateStore)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
