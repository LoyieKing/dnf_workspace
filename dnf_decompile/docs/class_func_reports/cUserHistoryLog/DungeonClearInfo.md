# DungeonClearInfo

`_ZN15cUserHistoryLog16DungeonClearInfoEiliii17ENUM_DUNGEON_MODEPKci`

`cUserHistoryLog::DungeonClearInfo(int, long, int, int, int, ENUM_DUNGEON_MODE, char const*, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684a6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684a6e  _ZN15cUserHistoryLog16DungeonClearInfoEiliii17ENUM_DUNGEON_MODEPKci
#           cUserHistoryLog::DungeonClearInfo(int, long, int, int, int, ENUM_DUNGEON_MODE, char const*, int)
# range [0x08684a6e, 0x08684ac3]
08684a6e +0x00:  push   %ebp
08684a6f +0x01:  mov    %esp,%ebp
08684a71 +0x03:  sub    $0x38,%esp
08684a74 +0x06:  mov    0x20(%ebp),%edx
08684a77 +0x09:  mov    0x8(%ebp),%eax
08684a7a +0x0c:  mov    (%eax),%eax
08684a7c +0x0e:  mov    0x28(%ebp),%ecx
08684a7f +0x11:  mov    %ecx,0x24(%esp)
08684a83 +0x15:  mov    0x24(%ebp),%ecx
08684a86 +0x18:  mov    %ecx,0x20(%esp)
08684a8a +0x1c:  mov    %edx,0x1c(%esp)
08684a8e +0x20:  mov    0x1c(%ebp),%edx
08684a91 +0x23:  mov    %edx,0x18(%esp)
08684a95 +0x27:  mov    0x10(%ebp),%edx
08684a98 +0x2a:  mov    %edx,0x14(%esp)
08684a9c +0x2e:  mov    0xc(%ebp),%edx
08684a9f +0x31:  mov    %edx,0x10(%esp)
08684aa3 +0x35:  mov    0x18(%ebp),%edx
08684aa6 +0x38:  mov    %edx,0xc(%esp)
08684aaa +0x3c:  mov    0x14(%ebp),%edx
08684aad +0x3f:  mov    %edx,0x8(%esp)
08684ab1 +0x43:  movl   $"AdvanceDungeonClearInfo,%d,%d,%d,%d,%d,%d,%s,%d",0x4(%esp)
08684ab9 +0x4b:  mov    %eax,(%esp)
08684abc +0x4e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684ac1 +0x53:  leave
08684ac2 +0x54:  ret
08684ac3 +0x55:  nop
```

## 反编译 C

```c
// cUserHistoryLog::DungeonClearInfo @ 0x8684a6e

/* cUserHistoryLog::DungeonClearInfo(int, long, int, int, int, ENUM_DUNGEON_MODE, char const*, int)
    */

void __thiscall
cUserHistoryLog::DungeonClearInfo
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  CUser::LogHistory(*(CUser **)this,"AdvanceDungeonClearInfo,%d,%d,%d,%d,%d,%d,%s,%d",param_3,
                    param_4,param_1,param_2,param_5,param_7,param_8,param_9);
  return;
}
```
