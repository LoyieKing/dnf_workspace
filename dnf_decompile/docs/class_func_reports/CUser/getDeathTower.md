# getDeathTower

`_ZN5CUser13getDeathTowerEv`

`CUser::getDeathTower()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086552a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086552a4  _ZN5CUser13getDeathTowerEv
#           CUser::getDeathTower()
# range [0x086552a4, 0x086552e5]
086552a4 +0x00:  push   %ebp
086552a5 +0x01:  mov    %esp,%ebp
086552a7 +0x03:  push   %ebx
086552a8 +0x04:  sub    $0x14,%esp
086552ab +0x07:  mov    0x8(%ebp),%eax
086552ae +0x0a:  movzwl 0x8d00e(%eax),%eax
086552b5 +0x11:  test   %ax,%ax
086552b8 +0x14:  js     086552da <+0x36>
086552ba +0x16:  mov    0x8(%ebp),%eax
086552bd +0x19:  movzwl 0x8d00e(%eax),%eax
086552c4 +0x20:  movswl %ax,%ebx
086552c7 +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086552cc +0x28:  mov    %ebx,0x4(%esp)
086552d0 +0x2c:  mov    %eax,(%esp)
086552d3 +0x2f:  call   082957bc <_ZN12CGameManager13getDeathTowerEi>  ; CGameManager::getDeathTower(int)
086552d8 +0x34:  jmp    086552df <+0x3b>
086552da +0x36:  mov    $0x0,%eax
086552df +0x3b:  add    $0x14,%esp
086552e2 +0x3e:  pop    %ebx
086552e3 +0x3f:  pop    %ebp
086552e4 +0x40:  ret
086552e5 +0x41:  nop
```

## 反编译 C

```c
// CUser::getDeathTower @ 0x86552a4

/* CUser::getDeathTower() */

undefined4 __thiscall CUser::getDeathTower(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d00e) < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = G_CGameManager();
    uVar2 = CGameManager::getDeathTower(iVar1);
  }
  return uVar2;
}
```
