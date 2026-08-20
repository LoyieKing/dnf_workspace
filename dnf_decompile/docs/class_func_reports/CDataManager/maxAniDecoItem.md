# maxAniDecoItem

`_ZN12CDataManager14maxAniDecoItemEv`

`CDataManager::maxAniDecoItem()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365d0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365d0e  _ZN12CDataManager14maxAniDecoItemEv
#           CDataManager::maxAniDecoItem()
# range [0x08365d0e, 0x08365d25]
08365d0e +0x00:  push   %ebp
08365d0f +0x01:  mov    %esp,%ebp
08365d11 +0x03:  sub    $0x18,%esp
08365d14 +0x06:  mov    0x8(%ebp),%eax
08365d17 +0x09:  add    $0x4c5c,%eax
08365d1c +0x0e:  mov    %eax,(%esp)
08365d1f +0x11:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
08365d24 +0x16:  leave
08365d25 +0x17:  ret
```

## 反编译 C

```c
// CDataManager::maxAniDecoItem @ 0x8365d0e

/* CDataManager::maxAniDecoItem() */

void __thiscall CDataManager::maxAniDecoItem(CDataManager *this)

{
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c5c)
            );
  return;
}
```
