# ResetItems

`_ZN13private_store13CPrivateStore10ResetItemsEv`

`private_store::CPrivateStore::ResetItems()`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c4f52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4f52  _ZN13private_store13CPrivateStore10ResetItemsEv
#           private_store::CPrivateStore::ResetItems()
# range [0x085c4f52, 0x085c4f9b]
085c4f52 +0x00:  push   %ebp
085c4f53 +0x01:  mov    %esp,%ebp
085c4f55 +0x03:  sub    $0x28,%esp
085c4f58 +0x06:  movl   $0x0,-0xc(%ebp)
085c4f5f +0x0d:  jmp    085c4f82 <+0x30>
085c4f61 +0x0f:  mov    -0xc(%ebp),%eax
085c4f64 +0x12:  mov    0x8(%ebp),%edx
085c4f67 +0x15:  add    $0x3c,%edx
085c4f6a +0x18:  mov    %eax,0x4(%esp)
085c4f6e +0x1c:  mov    %edx,(%esp)
085c4f71 +0x1f:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c4f76 +0x24:  mov    %eax,(%esp)
085c4f79 +0x27:  call   0823459a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c44
085c4f7e +0x2c:  addl   $0x1,-0xc(%ebp)
085c4f82 +0x30:  mov    0x8(%ebp),%eax
085c4f85 +0x33:  add    $0x3c,%eax
085c4f88 +0x36:  mov    %eax,(%esp)
085c4f8b +0x39:  call   085cd156 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e6c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e6c
085c4f90 +0x3e:  cmp    -0xc(%ebp),%eax
085c4f93 +0x41:  setg   %al
085c4f96 +0x44:  test   %al,%al
085c4f98 +0x46:  jne    085c4f61 <+0xf>
085c4f9a +0x48:  leave
085c4f9b +0x49:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::ResetItems @ 0x85c4f52

/* private_store::CPrivateStore::ResetItems() */

void __thiscall private_store::CPrivateStore::ResetItems(CPrivateStore *this)

{
  PrivateStoreItem *this_00;
  int iVar1;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = std::
            vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
            ::size((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                    *)(this + 0x3c));
    if (iVar1 <= (int)local_10) break;
    this_00 = (PrivateStoreItem *)
              std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_10);
    PrivateStoreItem::Reset(this_00);
    local_10 = local_10 + 1;
  }
  return;
}
```
