# GetWarRoomIdx

`_ZN12CGameManager13GetWarRoomIdxEP7WarRoom`

`CGameManager::GetWarRoomIdx(WarRoom*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a2640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a2640  _ZN12CGameManager13GetWarRoomIdxEP7WarRoom
#           CGameManager::GetWarRoomIdx(WarRoom*)
# range [0x082a2640, 0x082a2665]
082a2640 +0x00:  push   %ebp
082a2641 +0x01:  mov    %esp,%ebp
082a2643 +0x03:  sub    $0x28,%esp
082a2646 +0x06:  mov    0x8(%ebp),%eax
082a2649 +0x09:  lea    0x10c(%eax),%edx
082a264f +0x0f:  mov    0xc(%ebp),%eax
082a2652 +0x12:  mov    %eax,0x4(%esp)
082a2656 +0x16:  mov    %edx,(%esp)
082a2659 +0x19:  call   082b4ae8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x69e3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x69e3
082a265e +0x1e:  mov    %eax,-0xc(%ebp)
082a2661 +0x21:  mov    -0xc(%ebp),%eax
082a2664 +0x24:  leave
082a2665 +0x25:  ret
```

## 反编译 C

```c
// CGameManager::GetWarRoomIdx @ 0x82a2640

/* CGameManager::GetWarRoomIdx(WarRoom*) */

undefined4 __thiscall CGameManager::GetWarRoomIdx(CGameManager *this,WarRoom *param_1)

{
  undefined4 uVar1;
  
  uVar1 = StaticPool<WarRoom,40>::GetIndex((StaticPool<WarRoom,40> *)(this + 0x10c),param_1);
  return uVar1;
}
```
