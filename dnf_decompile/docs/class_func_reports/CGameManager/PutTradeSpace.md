# PutTradeSpace

`_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace`

`CGameManager::PutTradeSpace(CTradeSpace*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294dde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294dde  _ZN12CGameManager13PutTradeSpaceEP11CTradeSpace
#           CGameManager::PutTradeSpace(CTradeSpace*)
# range [0x08294dde, 0x08294e0f]
08294dde +0x00:  push   %ebp
08294ddf +0x01:  mov    %esp,%ebp
08294de1 +0x03:  sub    $0x18,%esp
08294de4 +0x06:  cmpl   $0x0,0xc(%ebp)
08294de8 +0x0a:  je     08294e0c <+0x2e>
08294dea +0x0c:  mov    0xc(%ebp),%eax
08294ded +0x0f:  mov    %eax,(%esp)
08294df0 +0x12:  call   085297f2 <_ZN11CTradeSpace5resetEv>  ; CTradeSpace::reset()
08294df5 +0x17:  mov    0x8(%ebp),%eax
08294df8 +0x1a:  lea    0x7c(%eax),%edx
08294dfb +0x1d:  mov    0xc(%ebp),%eax
08294dfe +0x20:  mov    %eax,0x4(%esp)
08294e02 +0x24:  mov    %edx,(%esp)
08294e05 +0x27:  call   082b0d02 <_GLOBAL__I__ZN4CLog5this_E+0xd129>  ; global constructors keyed to CLog::this_+0xd129
08294e0a +0x2c:  jmp    08294e0d <+0x2f>
08294e0c +0x2e:  nop
08294e0d +0x2f:  leave
08294e0e +0x30:  ret
08294e0f +0x31:  nop
```

## 反编译 C

```c
// CGameManager::PutTradeSpace @ 0x8294dde

/* CGameManager::PutTradeSpace(CTradeSpace*) */

void __thiscall CGameManager::PutTradeSpace(CGameManager *this,CTradeSpace *param_1)

{
  if (param_1 != (CTradeSpace *)0x0) {
    CTradeSpace::reset(param_1);
    StaticPool<CTradeSpace,300>::Free((StaticPool<CTradeSpace,300> *)(this + 0x7c),param_1);
  }
  return;
}
```
