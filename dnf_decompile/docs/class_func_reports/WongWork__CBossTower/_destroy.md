# _destroy

`_ZN8WongWork10CBossTower8_destroyEv`

`WongWork::CBossTower::_destroy()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142b36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142b36  _ZN8WongWork10CBossTower8_destroyEv
#           WongWork::CBossTower::_destroy()
# range [0x08142b36, 0x08142b71]
08142b36 +0x00:  push   %ebp
08142b37 +0x01:  mov    %esp,%ebp
08142b39 +0x03:  sub    $0x18,%esp
08142b3c +0x06:  mov    0x8(%ebp),%eax
08142b3f +0x09:  add    $0xb00,%eax
08142b44 +0x0e:  mov    %eax,(%esp)
08142b47 +0x11:  call   081568cc <_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv>  ; CBossDungeonEntranceLog::BossTowerLogDBUpdate()
08142b4c +0x16:  mov    0x8(%ebp),%eax
08142b4f +0x19:  add    $0xb00,%eax
08142b54 +0x1e:  mov    %eax,(%esp)
08142b57 +0x21:  call   08145746 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1c9>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1c9
08142b5c +0x26:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08142b61 +0x2b:  mov    0x8(%ebp),%edx
08142b64 +0x2e:  mov    %edx,0x4(%esp)
08142b68 +0x32:  mov    %eax,(%esp)
08142b6b +0x35:  call   08295a90 <_ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE>  ; CGameManager::returnBossTower(WongWork::CBossTower*)
08142b70 +0x3a:  leave
08142b71 +0x3b:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::_destroy @ 0x8142b36

/* WongWork::CBossTower::_destroy() */

void __thiscall WongWork::CBossTower::_destroy(CBossTower *this)

{
  CGameManager *this_00;
  
  CBossDungeonEntranceLog::BossTowerLogDBUpdate((CBossDungeonEntranceLog *)(this + 0xb00));
  CBossDungeonEntranceLog::reset((CBossDungeonEntranceLog *)(this + 0xb00));
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::returnBossTower(this_00,this);
  return;
}
```
