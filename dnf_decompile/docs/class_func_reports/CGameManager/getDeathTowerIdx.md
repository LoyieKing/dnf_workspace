# getDeathTowerIdx

`_ZN12CGameManager16getDeathTowerIdxEPN8WongWork11CDeathTowerE`

`CGameManager::getDeathTowerIdx(WongWork::CDeathTower*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829582c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829582c  _ZN12CGameManager16getDeathTowerIdxEPN8WongWork11CDeathTowerE
#           CGameManager::getDeathTowerIdx(WongWork::CDeathTower*)
# range [0x0829582c, 0x08295851]
0829582c +0x00:  push   %ebp
0829582d +0x01:  mov    %esp,%ebp
0829582f +0x03:  sub    $0x28,%esp
08295832 +0x06:  mov    0x8(%ebp),%eax
08295835 +0x09:  lea    0x13c(%eax),%edx
0829583b +0x0f:  mov    0xc(%ebp),%eax
0829583e +0x12:  mov    %eax,0x4(%esp)
08295842 +0x16:  mov    %edx,(%esp)
08295845 +0x19:  call   082b1d56 <_GLOBAL__I__ZN4CLog5this_E+0xe17d>  ; global constructors keyed to CLog::this_+0xe17d
0829584a +0x1e:  mov    %eax,-0xc(%ebp)
0829584d +0x21:  mov    -0xc(%ebp),%eax
08295850 +0x24:  leave
08295851 +0x25:  ret
```

## 反编译 C

```c
// CGameManager::getDeathTowerIdx @ 0x829582c

/* CGameManager::getDeathTowerIdx(WongWork::CDeathTower*) */

undefined4 __thiscall CGameManager::getDeathTowerIdx(CGameManager *this,CDeathTower *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<WongWork::CDeathTower,600>::GetIndex
                    ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c),param_1);
  return uVar1;
}
```
