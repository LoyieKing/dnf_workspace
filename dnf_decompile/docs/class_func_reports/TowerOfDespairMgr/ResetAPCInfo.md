# ResetAPCInfo

`_ZN17TowerOfDespairMgr12ResetAPCInfoEv`

`TowerOfDespairMgr::ResetAPCInfo()`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x0864431e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864431e  _ZN17TowerOfDespairMgr12ResetAPCInfoEv
#           TowerOfDespairMgr::ResetAPCInfo()
# range [0x0864431e, 0x08644337]
0864431e +0x00:  push   %ebp
0864431f +0x01:  mov    %esp,%ebp
08644321 +0x03:  sub    $0x18,%esp
08644324 +0x06:  mov    0x8(%ebp),%eax
08644327 +0x09:  mov    0x354(%eax),%eax
0864432d +0x0f:  mov    %eax,(%esp)
08644330 +0x12:  call   085feed0 <_ZN22TowerOfDespair_APC_Mgr14Reset_APC_InfoEv>  ; TowerOfDespair_APC_Mgr::Reset_APC_Info()
08644335 +0x17:  leave
08644336 +0x18:  ret
08644337 +0x19:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::ResetAPCInfo @ 0x864431e

/* TowerOfDespairMgr::ResetAPCInfo() */

void __thiscall TowerOfDespairMgr::ResetAPCInfo(TowerOfDespairMgr *this)

{
  TowerOfDespair_APC_Mgr::Reset_APC_Info(*(TowerOfDespair_APC_Mgr **)(this + 0x354));
  return;
}
```
