# GetTradeIdx

`_ZN12CGameManager11GetTradeIdxEP11CTradeSpace`

`CGameManager::GetTradeIdx(CTradeSpace*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294dba  _ZN12CGameManager11GetTradeIdxEP11CTradeSpace
#           CGameManager::GetTradeIdx(CTradeSpace*)
# range [0x08294dba, 0x08294ddd]
08294dba +0x00:  push   %ebp
08294dbb +0x01:  mov    %esp,%ebp
08294dbd +0x03:  sub    $0x28,%esp
08294dc0 +0x06:  mov    0x8(%ebp),%eax
08294dc3 +0x09:  lea    0x7c(%eax),%edx
08294dc6 +0x0c:  mov    0xc(%ebp),%eax
08294dc9 +0x0f:  mov    %eax,0x4(%esp)
08294dcd +0x13:  mov    %edx,(%esp)
08294dd0 +0x16:  call   082b0ab0 <_GLOBAL__I__ZN4CLog5this_E+0xced7>  ; global constructors keyed to CLog::this_+0xced7
08294dd5 +0x1b:  mov    %eax,-0xc(%ebp)
08294dd8 +0x1e:  mov    -0xc(%ebp),%eax
08294ddb +0x21:  leave
08294ddc +0x22:  ret
08294ddd +0x23:  nop
```

## 反编译 C

```c
// CGameManager::GetTradeIdx @ 0x8294dba

/* CGameManager::GetTradeIdx(CTradeSpace*) */

undefined4 __thiscall CGameManager::GetTradeIdx(CGameManager *this,CTradeSpace *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<CTradeSpace,300>::GetIndex
                    ((StaticPool<CTradeSpace,300> *)(this + 0x7c),param_1);
  return uVar1;
}
```
