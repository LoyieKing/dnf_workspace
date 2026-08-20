# destroy

`_ZN12advancealtar12StageControl7destroyEv`

`advancealtar::StageControl::destroy()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x081300ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081300ce  _ZN12advancealtar12StageControl7destroyEv
#           advancealtar::StageControl::destroy()
# range [0x081300ce, 0x081300f5]
081300ce +0x00:  push   %ebp
081300cf +0x01:  mov    %esp,%ebp
081300d1 +0x03:  sub    $0x18,%esp
081300d4 +0x06:  mov    0x8(%ebp),%eax
081300d7 +0x09:  mov    %eax,(%esp)
081300da +0x0c:  call   0812fa54 <_ZN12advancealtar12StageControl5resetEv>  ; advancealtar::StageControl::reset()
081300df +0x11:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081300e4 +0x16:  mov    0x8(%ebp),%edx
081300e7 +0x19:  mov    %edx,0x4(%esp)
081300eb +0x1d:  mov    %eax,(%esp)
081300ee +0x20:  call   08295cce <_ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE>  ; CGameManager::returnAdvanceAltar(advancealtar::StageControl*)
081300f3 +0x25:  leave
081300f4 +0x26:  ret
081300f5 +0x27:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::destroy @ 0x81300ce

/* advancealtar::StageControl::destroy() */

void __thiscall advancealtar::StageControl::destroy(StageControl *this)

{
  CGameManager *this_00;
  
  reset(this);
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::returnAdvanceAltar(this_00,this);
  return;
}
```
