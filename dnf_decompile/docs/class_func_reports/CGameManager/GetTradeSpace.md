# GetTradeSpace

`_ZN12CGameManager13GetTradeSpaceEv`

`CGameManager::GetTradeSpace()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294d3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294d3c  _ZN12CGameManager13GetTradeSpaceEv
#           CGameManager::GetTradeSpace()
# range [0x08294d3c, 0x08294d89]
08294d3c +0x00:  push   %ebp
08294d3d +0x01:  mov    %esp,%ebp
08294d3f +0x03:  sub    $0x28,%esp
08294d42 +0x06:  mov    0x8(%ebp),%eax
08294d45 +0x09:  add    $0x7c,%eax
08294d48 +0x0c:  mov    %eax,(%esp)
08294d4b +0x0f:  call   082b0982 <_GLOBAL__I__ZN4CLog5this_E+0xcda9>  ; global constructors keyed to CLog::this_+0xcda9
08294d50 +0x14:  mov    %eax,-0xc(%ebp)
08294d53 +0x17:  cmpl   $0x0,-0xc(%ebp)
08294d57 +0x1b:  jne    08294d60 <+0x24>
08294d59 +0x1d:  mov    $0x0,%eax
08294d5e +0x22:  jmp    08294d87 <+0x4b>
08294d60 +0x24:  mov    0x8(%ebp),%eax
08294d63 +0x27:  lea    0x7c(%eax),%edx
08294d66 +0x2a:  mov    -0xc(%ebp),%eax
08294d69 +0x2d:  mov    %eax,0x4(%esp)
08294d6d +0x31:  mov    %edx,(%esp)
08294d70 +0x34:  call   082b0ab0 <_GLOBAL__I__ZN4CLog5this_E+0xced7>  ; global constructors keyed to CLog::this_+0xced7
08294d75 +0x39:  mov    %eax,0x4(%esp)
08294d79 +0x3d:  mov    -0xc(%ebp),%eax
08294d7c +0x40:  mov    %eax,(%esp)
08294d7f +0x43:  call   082a41f4 <_GLOBAL__I__ZN4CLog5this_E+0x61b>  ; global constructors keyed to CLog::this_+0x61b
08294d84 +0x48:  mov    -0xc(%ebp),%eax
08294d87 +0x4b:  leave
08294d88 +0x4c:  ret
08294d89 +0x4d:  nop
```

## 反编译 C

```c
// CGameManager::GetTradeSpace @ 0x8294d3c

/* CGameManager::GetTradeSpace() */

CTradeSpace * __thiscall CGameManager::GetTradeSpace(CGameManager *this)

{
  CTradeSpace *this_00;
  int iVar1;
  
  this_00 = (CTradeSpace *)
            StaticPool<CTradeSpace,300>::Acquire((StaticPool<CTradeSpace,300> *)(this + 0x7c));
  if (this_00 == (CTradeSpace *)0x0) {
    this_00 = (CTradeSpace *)0x0;
  }
  else {
    iVar1 = StaticPool<CTradeSpace,300>::GetIndex
                      ((StaticPool<CTradeSpace,300> *)(this + 0x7c),this_00);
    CTradeSpace::SetIDX(this_00,iVar1);
  }
  return this_00;
}
```
