# dispatch

`_ZN19DB_SaveDungeonClear8dispatchEiiP6Stream`

`DB_SaveDungeonClear::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveDungeonClear` | `0x0841a056` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a056  _ZN19DB_SaveDungeonClear8dispatchEiiP6Stream
#           DB_SaveDungeonClear::dispatch(int, int, Stream*)
# range [0x0841a056, 0x0841a0a5]
0841a056 +0x00:  push   %ebp
0841a057 +0x01:  mov    %esp,%ebp
0841a059 +0x03:  sub    $0x28,%esp
0841a05c +0x06:  mov    0x14(%ebp),%eax
0841a05f +0x09:  mov    %eax,(%esp)
0841a062 +0x0c:  call   08450fc8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bde>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bde
0841a067 +0x11:  mov    %eax,-0xc(%ebp)
0841a06a +0x14:  cmpl   $0x0,-0xc(%ebp)
0841a06e +0x18:  jne    0841a077 <+0x21>
0841a070 +0x1a:  mov    $0x0,%eax
0841a075 +0x1f:  jmp    0841a0a3 <+0x4d>
0841a077 +0x21:  mov    -0xc(%ebp),%eax
0841a07a +0x24:  mov    %eax,0x4(%esp)
0841a07e +0x28:  mov    0x8(%ebp),%eax
0841a081 +0x2b:  mov    %eax,(%esp)
0841a084 +0x2e:  call   0841a0a6 <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR>  ; DB_SaveDungeonClear::SaveDungeonClear(SIG_SAVE_DUNGEON_CLEAR*)
0841a089 +0x33:  mov    %al,-0xd(%ebp)
0841a08c +0x36:  movzbl -0xd(%ebp),%eax
0841a090 +0x3a:  xor    $0x1,%eax
0841a093 +0x3d:  test   %al,%al
0841a095 +0x3f:  je     0841a09e <+0x48>
0841a097 +0x41:  mov    $0x0,%eax
0841a09c +0x46:  jmp    0841a0a3 <+0x4d>
0841a09e +0x48:  mov    $0x1,%eax
0841a0a3 +0x4d:  leave
0841a0a4 +0x4e:  ret
0841a0a5 +0x4f:  nop
```

## 反编译 C

```c
// DB_SaveDungeonClear::dispatch @ 0x841a056

/* DB_SaveDungeonClear::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveDungeonClear::dispatch(DB_SaveDungeonClear *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_DUNGEON_CLEAR *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_DUNGEON_CLEAR>(param_3);
  if (pSVar2 == (SIG_SAVE_DUNGEON_CLEAR *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveDungeonClear(this,pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
