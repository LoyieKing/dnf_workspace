# getAdvanceAltarIndex

`_ZN12CGameManager20getAdvanceAltarIndexEPN12advancealtar12StageControlE`

`CGameManager::getAdvanceAltarIndex(advancealtar::StageControl*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295ca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295ca8  _ZN12CGameManager20getAdvanceAltarIndexEPN12advancealtar12StageControlE
#           CGameManager::getAdvanceAltarIndex(advancealtar::StageControl*)
# range [0x08295ca8, 0x08295ccd]
08295ca8 +0x00:  push   %ebp
08295ca9 +0x01:  mov    %esp,%ebp
08295cab +0x03:  sub    $0x28,%esp
08295cae +0x06:  mov    0x8(%ebp),%eax
08295cb1 +0x09:  lea    0x19c(%eax),%edx
08295cb7 +0x0f:  mov    0xc(%ebp),%eax
08295cba +0x12:  mov    %eax,0x4(%esp)
08295cbe +0x16:  mov    %edx,(%esp)
08295cc1 +0x19:  call   082b26a6 <_GLOBAL__I__ZN4CLog5this_E+0xeacd>  ; global constructors keyed to CLog::this_+0xeacd
08295cc6 +0x1e:  mov    %eax,-0xc(%ebp)
08295cc9 +0x21:  mov    -0xc(%ebp),%eax
08295ccc +0x24:  leave
08295ccd +0x25:  ret
```

## 反编译 C

```c
// CGameManager::getAdvanceAltarIndex @ 0x8295ca8

/* CGameManager::getAdvanceAltarIndex(advancealtar::StageControl*) */

undefined4 __thiscall CGameManager::getAdvanceAltarIndex(CGameManager *this,StageControl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<advancealtar::StageControl,600>::GetIndex
                    ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),param_1);
  return uVar1;
}
```
