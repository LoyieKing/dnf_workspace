# _destroy

`_ZN8WongWork11CDeathTower8_destroyEv`

`WongWork::CDeathTower::_destroy()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467b20  _ZN8WongWork11CDeathTower8_destroyEv
#           WongWork::CDeathTower::_destroy()
# range [0x08467b20, 0x08467b4f]
08467b20 +0x00:  push   %ebp
08467b21 +0x01:  mov    %esp,%ebp
08467b23 +0x03:  sub    $0x18,%esp
08467b26 +0x06:  movl   $0x0,0x4(%esp)
08467b2e +0x0e:  mov    0x8(%ebp),%eax
08467b31 +0x11:  mov    %eax,(%esp)
08467b34 +0x14:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
08467b39 +0x19:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08467b3e +0x1e:  mov    0x8(%ebp),%edx
08467b41 +0x21:  mov    %edx,0x4(%esp)
08467b45 +0x25:  mov    %eax,(%esp)
08467b48 +0x28:  call   08295852 <_ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE>  ; CGameManager::returnDeathTower(WongWork::CDeathTower*)
08467b4d +0x2d:  leave
08467b4e +0x2e:  ret
08467b4f +0x2f:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_destroy @ 0x8467b20

/* WongWork::CDeathTower::_destroy() */

void __thiscall WongWork::CDeathTower::_destroy(CDeathTower *this)

{
  CGameManager *this_00;
  
  setTowerState(this,0);
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::returnDeathTower(this_00,this);
  return;
}
```
