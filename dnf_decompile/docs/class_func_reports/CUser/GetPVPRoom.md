# GetPVPRoom

`_ZN5CUser10GetPVPRoomEv`

`CUser::GetPVPRoom()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865518e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865518e  _ZN5CUser10GetPVPRoomEv
#           CUser::GetPVPRoom()
# range [0x0865518e, 0x086551dd]
0865518e +0x00:  push   %ebp
0865518f +0x01:  mov    %esp,%ebp
08655191 +0x03:  push   %ebx
08655192 +0x04:  sub    $0x14,%esp
08655195 +0x07:  mov    0x8(%ebp),%eax
08655198 +0x0a:  movzwl 0x8d006(%eax),%eax
0865519f +0x11:  test   %ax,%ax
086551a2 +0x14:  js     086551d3 <+0x45>
086551a4 +0x16:  mov    0x8(%ebp),%eax
086551a7 +0x19:  movzwl 0x8d006(%eax),%eax
086551ae +0x20:  movswl %ax,%ebx
086551b1 +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086551b6 +0x28:  movl   $0x0,0xc(%esp)
086551be +0x30:  mov    0x8(%ebp),%edx
086551c1 +0x33:  mov    %edx,0x8(%esp)
086551c5 +0x37:  mov    %ebx,0x4(%esp)
086551c9 +0x3b:  mov    %eax,(%esp)
086551cc +0x3e:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
086551d1 +0x43:  jmp    086551d8 <+0x4a>
086551d3 +0x45:  mov    $0x0,%eax
086551d8 +0x4a:  add    $0x14,%esp
086551db +0x4d:  pop    %ebx
086551dc +0x4e:  pop    %ebp
086551dd +0x4f:  ret
```

## 反编译 C

```c
// CUser::GetPVPRoom @ 0x865518e

/* CUser::GetPVPRoom() */

undefined4 __thiscall CUser::GetPVPRoom(CUser *this)

{
  short sVar1;
  CGameManager *this_00;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d006) < 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)(this + 0x8d006);
    this_00 = (CGameManager *)G_CGameManager();
    uVar2 = CGameManager::GetPvp(this_00,(int)sVar1,this,0);
  }
  return uVar2;
}
```
