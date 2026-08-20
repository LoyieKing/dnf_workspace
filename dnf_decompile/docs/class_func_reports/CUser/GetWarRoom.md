# GetWarRoom

`_ZN5CUser10GetWarRoomEv`

`CUser::GetWarRoom()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086551de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086551de  _ZN5CUser10GetWarRoomEv
#           CUser::GetWarRoom()
# range [0x086551de, 0x0865521f]
086551de +0x00:  push   %ebp
086551df +0x01:  mov    %esp,%ebp
086551e1 +0x03:  push   %ebx
086551e2 +0x04:  sub    $0x14,%esp
086551e5 +0x07:  mov    0x8(%ebp),%eax
086551e8 +0x0a:  movzwl 0x8d008(%eax),%eax
086551ef +0x11:  test   %ax,%ax
086551f2 +0x14:  js     08655214 <+0x36>
086551f4 +0x16:  mov    0x8(%ebp),%eax
086551f7 +0x19:  movzwl 0x8d008(%eax),%eax
086551fe +0x20:  movswl %ax,%ebx
08655201 +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08655206 +0x28:  mov    %ebx,0x4(%esp)
0865520a +0x2c:  mov    %eax,(%esp)
0865520d +0x2f:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
08655212 +0x34:  jmp    08655219 <+0x3b>
08655214 +0x36:  mov    $0x0,%eax
08655219 +0x3b:  add    $0x14,%esp
0865521c +0x3e:  pop    %ebx
0865521d +0x3f:  pop    %ebp
0865521e +0x40:  ret
0865521f +0x41:  nop
```

## 反编译 C

```c
// CUser::GetWarRoom @ 0x86551de

/* CUser::GetWarRoom() */

undefined4 __thiscall CUser::GetWarRoom(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d008) < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = G_CGameManager();
    uVar2 = CGameManager::GetWarRoom(iVar1);
  }
  return uVar2;
}
```
