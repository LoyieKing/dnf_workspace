# GetPvpIdx

`_ZN12CGameManager9GetPvpIdxEP8PvP_Room`

`CGameManager::GetPvpIdx(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295322  _ZN12CGameManager9GetPvpIdxEP8PvP_Room
#           CGameManager::GetPvpIdx(PvP_Room*)
# range [0x08295322, 0x08295347]
08295322 +0x00:  push   %ebp
08295323 +0x01:  mov    %esp,%ebp
08295325 +0x03:  sub    $0x28,%esp
08295328 +0x06:  mov    0x8(%ebp),%eax
0829532b +0x09:  lea    0xdc(%eax),%edx
08295331 +0x0f:  mov    0xc(%ebp),%eax
08295334 +0x12:  mov    %eax,0x4(%esp)
08295338 +0x16:  mov    %edx,(%esp)
0829533b +0x19:  call   082b1430 <_GLOBAL__I__ZN4CLog5this_E+0xd857>  ; global constructors keyed to CLog::this_+0xd857
08295340 +0x1e:  mov    %eax,-0xc(%ebp)
08295343 +0x21:  mov    -0xc(%ebp),%eax
08295346 +0x24:  leave
08295347 +0x25:  ret
```

## 反编译 C

```c
// CGameManager::GetPvpIdx @ 0x8295322

/* CGameManager::GetPvpIdx(PvP_Room*) */

undefined4 __thiscall CGameManager::GetPvpIdx(CGameManager *this,PvP_Room *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<PvP_Room,600>::GetIndex((StaticPool<PvP_Room,600> *)(this + 0xdc),param_1);
  return uVar1;
}
```
