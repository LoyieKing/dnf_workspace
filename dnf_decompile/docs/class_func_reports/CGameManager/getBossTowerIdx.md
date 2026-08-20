# getBossTowerIdx

`_ZN12CGameManager15getBossTowerIdxEPN8WongWork10CBossTowerE`

`CGameManager::getBossTowerIdx(WongWork::CBossTower*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295a6a  _ZN12CGameManager15getBossTowerIdxEPN8WongWork10CBossTowerE
#           CGameManager::getBossTowerIdx(WongWork::CBossTower*)
# range [0x08295a6a, 0x08295a8f]
08295a6a +0x00:  push   %ebp
08295a6b +0x01:  mov    %esp,%ebp
08295a6d +0x03:  sub    $0x28,%esp
08295a70 +0x06:  mov    0x8(%ebp),%eax
08295a73 +0x09:  lea    0x16c(%eax),%edx
08295a79 +0x0f:  mov    0xc(%ebp),%eax
08295a7c +0x12:  mov    %eax,0x4(%esp)
08295a80 +0x16:  mov    %edx,(%esp)
08295a83 +0x19:  call   082b21fe <_GLOBAL__I__ZN4CLog5this_E+0xe625>  ; global constructors keyed to CLog::this_+0xe625
08295a88 +0x1e:  mov    %eax,-0xc(%ebp)
08295a8b +0x21:  mov    -0xc(%ebp),%eax
08295a8e +0x24:  leave
08295a8f +0x25:  ret
```

## 反编译 C

```c
// CGameManager::getBossTowerIdx @ 0x8295a6a

/* CGameManager::getBossTowerIdx(WongWork::CBossTower*) */

undefined4 __thiscall CGameManager::getBossTowerIdx(CGameManager *this,CBossTower *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<WongWork::CBossTower,600>::GetIndex
                    ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c),param_1);
  return uVar1;
}
```
