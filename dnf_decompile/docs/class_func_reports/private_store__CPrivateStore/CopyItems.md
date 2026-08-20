# CopyItems

`_ZN13private_store13CPrivateStore9CopyItemsEPNS_16PrivateStoreItemEi`

`private_store::CPrivateStore::CopyItems(private_store::PrivateStoreItem*, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c4f9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4f9c  _ZN13private_store13CPrivateStore9CopyItemsEPNS_16PrivateStoreItemEi
#           private_store::CPrivateStore::CopyItems(private_store::PrivateStoreItem*, int)
# range [0x085c4f9c, 0x085c4ff1]
085c4f9c +0x00:  push   %ebp
085c4f9d +0x01:  mov    %esp,%ebp
085c4f9f +0x03:  sub    $0x28,%esp
085c4fa2 +0x06:  mov    0x8(%ebp),%eax
085c4fa5 +0x09:  mov    %eax,(%esp)
085c4fa8 +0x0c:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c4fad +0x11:  mov    0x8(%ebp),%eax
085c4fb0 +0x14:  lea    0x3c(%eax),%edx
085c4fb3 +0x17:  lea    -0xc(%ebp),%eax
085c4fb6 +0x1a:  mov    %edx,0x4(%esp)
085c4fba +0x1e:  mov    %eax,(%esp)
085c4fbd +0x21:  call   085cd178 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1e8e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1e8e
085c4fc2 +0x26:  sub    $0x4,%esp
085c4fc5 +0x29:  mov    0x10(%ebp),%eax
085c4fc8 +0x2c:  imul   $0x4c,%eax,%eax
085c4fcb +0x2f:  mov    %eax,%edx
085c4fcd +0x31:  add    0xc(%ebp),%edx
085c4fd0 +0x34:  lea    -0x10(%ebp),%eax
085c4fd3 +0x37:  mov    -0xc(%ebp),%ecx
085c4fd6 +0x3a:  mov    %ecx,0xc(%esp)
085c4fda +0x3e:  mov    %edx,0x8(%esp)
085c4fde +0x42:  mov    0xc(%ebp),%edx
085c4fe1 +0x45:  mov    %edx,0x4(%esp)
085c4fe5 +0x49:  mov    %eax,(%esp)
085c4fe8 +0x4c:  call   085cd19b <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1eb1>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1eb1
085c4fed +0x51:  sub    $0x4,%esp
085c4ff0 +0x54:  leave
085c4ff1 +0x55:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::CopyItems @ 0x85c4f9c

/* private_store::CPrivateStore::CopyItems(private_store::PrivateStoreItem*, int) */

void __thiscall
private_store::CPrivateStore::CopyItems(CPrivateStore *this,PrivateStoreItem *param_1,int param_2)

{
  undefined1 local_14 [4];
  undefined4 local_10;
  
  ResetItems(this);
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  begin();
  std::
  copy<private_store::PrivateStoreItem*,__gnu_cxx::__normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>>
            (local_14,param_1,param_1 + param_2 * 0x4c,local_10);
  return;
}
```
