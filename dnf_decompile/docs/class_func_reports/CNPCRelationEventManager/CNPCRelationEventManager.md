# CNPCRelationEventManager

`_ZN24CNPCRelationEventManagerC1Ev`

`CNPCRelationEventManager::CNPCRelationEventManager()`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890ce20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890ce20  _ZN24CNPCRelationEventManagerC1Ev
#           CNPCRelationEventManager::CNPCRelationEventManager()
# range [0x0890ce20, 0x0890ce33]
0890ce20 +0x00:  push   %ebp
0890ce21 +0x01:  mov    %esp,%ebp
0890ce23 +0x03:  sub    $0x18,%esp
0890ce26 +0x06:  mov    0x8(%ebp),%eax
0890ce29 +0x09:  mov    %eax,(%esp)
0890ce2c +0x0c:  call   0891fcb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6995>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6995
0890ce31 +0x11:  leave
0890ce32 +0x12:  ret
0890ce33 +0x13:  nop
```

## 反编译 C

```c
// CNPCRelationEventManager::CNPCRelationEventManager @ 0x890ce20

/* CNPCRelationEventManager::CNPCRelationEventManager() */

void __thiscall CNPCRelationEventManager::CNPCRelationEventManager(CNPCRelationEventManager *this)

{
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::map((map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
         *)this);
  return;
}
```
