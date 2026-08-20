# getBlueMarble

`_ZN5CUser13getBlueMarbleEv`

`CUser::getBlueMarble()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086552e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086552e6  _ZN5CUser13getBlueMarbleEv
#           CUser::getBlueMarble()
# range [0x086552e6, 0x08655326]
086552e6 +0x00:  push   %ebp
086552e7 +0x01:  mov    %esp,%ebp
086552e9 +0x03:  push   %ebx
086552ea +0x04:  sub    $0x14,%esp
086552ed +0x07:  mov    0x8(%ebp),%eax
086552f0 +0x0a:  movzwl 0x8d00c(%eax),%eax
086552f7 +0x11:  test   %ax,%ax
086552fa +0x14:  js     0865531c <+0x36>
086552fc +0x16:  mov    0x8(%ebp),%eax
086552ff +0x19:  movzwl 0x8d00c(%eax),%eax
08655306 +0x20:  movswl %ax,%ebx
08655309 +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0865530e +0x28:  mov    %ebx,0x4(%esp)
08655312 +0x2c:  mov    %eax,(%esp)
08655315 +0x2f:  call   082a239e <_ZN12CGameManager13getBlueMarbleEi>  ; CGameManager::getBlueMarble(int)
0865531a +0x34:  jmp    08655321 <+0x3b>
0865531c +0x36:  mov    $0x0,%eax
08655321 +0x3b:  add    $0x14,%esp
08655324 +0x3e:  pop    %ebx
08655325 +0x3f:  pop    %ebp
08655326 +0x40:  ret
```

## 反编译 C

```c
// CUser::getBlueMarble @ 0x86552e6

/* CUser::getBlueMarble() */

undefined4 __thiscall CUser::getBlueMarble(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d00c) < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = G_CGameManager();
    uVar2 = CGameManager::getBlueMarble(iVar1);
  }
  return uVar2;
}
```
