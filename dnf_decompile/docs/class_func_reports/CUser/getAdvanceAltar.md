# getAdvanceAltar

`_ZN5CUser15getAdvanceAltarEv`

`CUser::getAdvanceAltar()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08655262` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08655262  _ZN5CUser15getAdvanceAltarEv
#           CUser::getAdvanceAltar()
# range [0x08655262, 0x086552a3]
08655262 +0x00:  push   %ebp
08655263 +0x01:  mov    %esp,%ebp
08655265 +0x03:  push   %ebx
08655266 +0x04:  sub    $0x14,%esp
08655269 +0x07:  mov    0x8(%ebp),%eax
0865526c +0x0a:  movzwl 0x8d012(%eax),%eax
08655273 +0x11:  test   %ax,%ax
08655276 +0x14:  js     08655298 <+0x36>
08655278 +0x16:  mov    0x8(%ebp),%eax
0865527b +0x19:  movzwl 0x8d012(%eax),%eax
08655282 +0x20:  movswl %ax,%ebx
08655285 +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0865528a +0x28:  mov    %ebx,0x4(%esp)
0865528e +0x2c:  mov    %eax,(%esp)
08655291 +0x2f:  call   08295c38 <_ZN12CGameManager15getAdvanceAltarEi>  ; CGameManager::getAdvanceAltar(int)
08655296 +0x34:  jmp    0865529d <+0x3b>
08655298 +0x36:  mov    $0x0,%eax
0865529d +0x3b:  add    $0x14,%esp
086552a0 +0x3e:  pop    %ebx
086552a1 +0x3f:  pop    %ebp
086552a2 +0x40:  ret
086552a3 +0x41:  nop
```

## 反编译 C

```c
// CUser::getAdvanceAltar @ 0x8655262

/* CUser::getAdvanceAltar() */

undefined4 __thiscall CUser::getAdvanceAltar(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d012) < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = G_CGameManager();
    uVar2 = CGameManager::getAdvanceAltar(iVar1);
  }
  return uVar2;
}
```
