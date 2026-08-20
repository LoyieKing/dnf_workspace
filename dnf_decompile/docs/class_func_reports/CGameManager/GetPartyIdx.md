# GetPartyIdx

`_ZN12CGameManager11GetPartyIdxEP6CParty`

`CGameManager::GetPartyIdx(CParty*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294fa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294fa2  _ZN12CGameManager11GetPartyIdxEP6CParty
#           CGameManager::GetPartyIdx(CParty*)
# range [0x08294fa2, 0x08294fc7]
08294fa2 +0x00:  push   %ebp
08294fa3 +0x01:  mov    %esp,%ebp
08294fa5 +0x03:  sub    $0x28,%esp
08294fa8 +0x06:  mov    0x8(%ebp),%eax
08294fab +0x09:  lea    0xac(%eax),%edx
08294fb1 +0x0f:  mov    0xc(%ebp),%eax
08294fb4 +0x12:  mov    %eax,0x4(%esp)
08294fb8 +0x16:  mov    %edx,(%esp)
08294fbb +0x19:  call   082b0f88 <_GLOBAL__I__ZN4CLog5this_E+0xd3af>  ; global constructors keyed to CLog::this_+0xd3af
08294fc0 +0x1e:  mov    %eax,-0xc(%ebp)
08294fc3 +0x21:  mov    -0xc(%ebp),%eax
08294fc6 +0x24:  leave
08294fc7 +0x25:  ret
```

## 反编译 C

```c
// CGameManager::GetPartyIdx @ 0x8294fa2

/* CGameManager::GetPartyIdx(CParty*) */

undefined4 __thiscall CGameManager::GetPartyIdx(CGameManager *this,CParty *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<CParty,600>::GetIndex((StaticPool<CParty,600> *)(this + 0xac),param_1);
  return uVar1;
}
```
