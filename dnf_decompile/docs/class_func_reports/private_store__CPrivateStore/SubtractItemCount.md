# SubtractItemCount

`_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi`

`private_store::CPrivateStore::SubtractItemCount(CItem const*, private_store::PrivateStoreItem&, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7bbc  _ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi
#           private_store::CPrivateStore::SubtractItemCount(CItem const*, private_store::PrivateStoreItem&, int)
# range [0x085c7bbc, 0x085c7c09]
085c7bbc +0x00:  push   %ebp
085c7bbd +0x01:  mov    %esp,%ebp
085c7bbf +0x03:  sub    $0x18,%esp
085c7bc2 +0x06:  mov    0xc(%ebp),%eax
085c7bc5 +0x09:  mov    %eax,(%esp)
085c7bc8 +0x0c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085c7bcd +0x11:  test   %al,%al
085c7bcf +0x13:  je     085c7bfc <+0x40>
085c7bd1 +0x15:  mov    0x10(%ebp),%eax
085c7bd4 +0x18:  mov    0x7(%eax),%eax
085c7bd7 +0x1b:  cmp    0x14(%ebp),%eax
085c7bda +0x1e:  jne    085c7be9 <+0x2d>
085c7bdc +0x20:  mov    0x10(%ebp),%eax
085c7bdf +0x23:  mov    %eax,(%esp)
085c7be2 +0x26:  call   0823459a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c44
085c7be7 +0x2b:  jmp    085c7c07 <+0x4b>
085c7be9 +0x2d:  mov    0x10(%ebp),%eax
085c7bec +0x30:  mov    0x7(%eax),%eax
085c7bef +0x33:  mov    %eax,%edx
085c7bf1 +0x35:  sub    0x14(%ebp),%edx
085c7bf4 +0x38:  mov    0x10(%ebp),%eax
085c7bf7 +0x3b:  mov    %edx,0x7(%eax)
085c7bfa +0x3e:  jmp    085c7c07 <+0x4b>
085c7bfc +0x40:  mov    0x10(%ebp),%eax
085c7bff +0x43:  mov    %eax,(%esp)
085c7c02 +0x46:  call   0823459a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c44
085c7c07 +0x4b:  leave
085c7c08 +0x4c:  ret
085c7c09 +0x4d:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::SubtractItemCount @ 0x85c7bbc

/* private_store::CPrivateStore::SubtractItemCount(CItem const*, private_store::PrivateStoreItem&,
   int) */

void __thiscall
private_store::CPrivateStore::SubtractItemCount
          (CPrivateStore *this,CItem *param_1,PrivateStoreItem *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CItem::is_stackable(param_1);
  if (cVar1 == '\0') {
    PrivateStoreItem::Reset(param_2);
  }
  else if (*(int *)(param_2 + 7) == param_3) {
    PrivateStoreItem::Reset(param_2);
  }
  else {
    *(int *)(param_2 + 7) = *(int *)(param_2 + 7) - param_3;
  }
  return;
}
```
