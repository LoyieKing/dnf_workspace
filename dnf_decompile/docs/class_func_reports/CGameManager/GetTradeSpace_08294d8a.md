# GetTradeSpace

`_ZN12CGameManager13GetTradeSpaceEi`

`CGameManager::GetTradeSpace(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294d8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294d8a  _ZN12CGameManager13GetTradeSpaceEi
#           CGameManager::GetTradeSpace(int)
# range [0x08294d8a, 0x08294db9]
08294d8a +0x00:  push   %ebp
08294d8b +0x01:  mov    %esp,%ebp
08294d8d +0x03:  sub    $0x28,%esp
08294d90 +0x06:  mov    0x8(%ebp),%eax
08294d93 +0x09:  lea    0x7c(%eax),%edx
08294d96 +0x0c:  mov    0xc(%ebp),%eax
08294d99 +0x0f:  mov    %eax,0x4(%esp)
08294d9d +0x13:  mov    %edx,(%esp)
08294da0 +0x16:  call   082b0bec <_GLOBAL__I__ZN4CLog5this_E+0xd013>  ; global constructors keyed to CLog::this_+0xd013
08294da5 +0x1b:  mov    %eax,-0xc(%ebp)
08294da8 +0x1e:  cmpl   $0x0,-0xc(%ebp)
08294dac +0x22:  jne    08294db5 <+0x2b>
08294dae +0x24:  mov    $0x0,%eax
08294db3 +0x29:  jmp    08294db8 <+0x2e>
08294db5 +0x2b:  mov    -0xc(%ebp),%eax
08294db8 +0x2e:  leave
08294db9 +0x2f:  ret
```

## 反编译 C

```c
// CGameManager::GetTradeSpace @ 0x8294d8a

/* CGameManager::GetTradeSpace(int) */

int __thiscall CGameManager::GetTradeSpace(CGameManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = StaticPool<CTradeSpace,300>::Get((StaticPool<CTradeSpace,300> *)(this + 0x7c),param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}
```
