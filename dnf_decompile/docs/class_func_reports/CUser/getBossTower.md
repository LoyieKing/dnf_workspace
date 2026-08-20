# getBossTower

`_ZN5CUser12getBossTowerEv`

`CUser::getBossTower()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08655220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08655220  _ZN5CUser12getBossTowerEv
#           CUser::getBossTower()
# range [0x08655220, 0x08655261]
08655220 +0x00:  push   %ebp
08655221 +0x01:  mov    %esp,%ebp
08655223 +0x03:  push   %ebx
08655224 +0x04:  sub    $0x14,%esp
08655227 +0x07:  mov    0x8(%ebp),%eax
0865522a +0x0a:  movzwl 0x8d010(%eax),%eax
08655231 +0x11:  test   %ax,%ax
08655234 +0x14:  js     08655256 <+0x36>
08655236 +0x16:  mov    0x8(%ebp),%eax
08655239 +0x19:  movzwl 0x8d010(%eax),%eax
08655240 +0x20:  movswl %ax,%ebx
08655243 +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08655248 +0x28:  mov    %ebx,0x4(%esp)
0865524c +0x2c:  mov    %eax,(%esp)
0865524f +0x2f:  call   082959fa <_ZN12CGameManager12getBossTowerEi>  ; CGameManager::getBossTower(int)
08655254 +0x34:  jmp    0865525b <+0x3b>
08655256 +0x36:  mov    $0x0,%eax
0865525b +0x3b:  add    $0x14,%esp
0865525e +0x3e:  pop    %ebx
0865525f +0x3f:  pop    %ebp
08655260 +0x40:  ret
08655261 +0x41:  nop
```

## 反编译 C

```c
// CUser::getBossTower @ 0x8655220

/* CUser::getBossTower() */

undefined4 __thiscall CUser::getBossTower(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d010) < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = G_CGameManager();
    uVar2 = CGameManager::getBossTower(iVar1);
  }
  return uVar2;
}
```
