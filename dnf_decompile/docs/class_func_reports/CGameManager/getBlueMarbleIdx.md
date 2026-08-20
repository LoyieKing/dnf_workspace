# getBlueMarbleIdx

`_ZN12CGameManager16getBlueMarbleIdxEP10BlueMarble`

`CGameManager::getBlueMarbleIdx(BlueMarble*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a240e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a240e  _ZN12CGameManager16getBlueMarbleIdxEP10BlueMarble
#           CGameManager::getBlueMarbleIdx(BlueMarble*)
# range [0x082a240e, 0x082a2433]
082a240e +0x00:  push   %ebp
082a240f +0x01:  mov    %esp,%ebp
082a2411 +0x03:  sub    $0x28,%esp
082a2414 +0x06:  mov    0x8(%ebp),%eax
082a2417 +0x09:  lea    0x1fc(%eax),%edx
082a241d +0x0f:  mov    0xc(%ebp),%eax
082a2420 +0x12:  mov    %eax,0x4(%esp)
082a2424 +0x16:  mov    %edx,(%esp)
082a2427 +0x19:  call   082b465e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6559>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6559
082a242c +0x1e:  mov    %eax,-0xc(%ebp)
082a242f +0x21:  mov    -0xc(%ebp),%eax
082a2432 +0x24:  leave
082a2433 +0x25:  ret
```

## 反编译 C

```c
// CGameManager::getBlueMarbleIdx @ 0x82a240e

/* CGameManager::getBlueMarbleIdx(BlueMarble*) */

undefined4 __thiscall CGameManager::getBlueMarbleIdx(CGameManager *this,BlueMarble *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<BlueMarble,300>::GetIndex((StaticPool<BlueMarble,300> *)(this + 0x1fc),param_1)
  ;
  return uVar1;
}
```
