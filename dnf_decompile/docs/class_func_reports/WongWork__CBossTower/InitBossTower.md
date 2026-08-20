# InitBossTower

`_ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi`

`WongWork::CBossTower::InitBossTower(CParty*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142f32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142f32  _ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi
#           WongWork::CBossTower::InitBossTower(CParty*, int)
# range [0x08142f32, 0x08142fa5]
08142f32 +0x00:  push   %ebp
08142f33 +0x01:  mov    %esp,%ebp
08142f35 +0x03:  sub    $0x18,%esp
08142f38 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08142f3d +0x0b:  mov    0x10(%ebp),%edx
08142f40 +0x0e:  mov    %edx,0x4(%esp)
08142f44 +0x12:  mov    %eax,(%esp)
08142f47 +0x15:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
08142f4c +0x1a:  mov    0x8(%ebp),%edx
08142f4f +0x1d:  mov    %eax,0x9f0(%edx)
08142f55 +0x23:  cmpl   $0x0,0xc(%ebp)
08142f59 +0x27:  je     08142f68 <+0x36>
08142f5b +0x29:  mov    0x8(%ebp),%eax
08142f5e +0x2c:  mov    0x9f0(%eax),%eax
08142f64 +0x32:  test   %eax,%eax
08142f66 +0x34:  jne    08142f6f <+0x3d>
08142f68 +0x36:  mov    $0x0,%eax
08142f6d +0x3b:  jmp    08142fa3 <+0x71>
08142f6f +0x3d:  mov    0x8(%ebp),%eax
08142f72 +0x40:  mov    0xc(%ebp),%edx
08142f75 +0x43:  mov    %edx,0x4(%eax)
08142f78 +0x46:  mov    0x8(%ebp),%eax
08142f7b +0x49:  mov    0x9f0(%eax),%eax
08142f81 +0x4f:  mov    %eax,(%esp)
08142f84 +0x52:  call   081455bc <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x3f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x3f
08142f89 +0x57:  mov    %eax,%edx
08142f8b +0x59:  mov    0x8(%ebp),%eax
08142f8e +0x5c:  mov    %edx,0xae4(%eax)
08142f94 +0x62:  mov    0x8(%ebp),%eax
08142f97 +0x65:  movb   $0x0,0xafc(%eax)
08142f9e +0x6c:  mov    $0x1,%eax
08142fa3 +0x71:  leave
08142fa4 +0x72:  ret
08142fa5 +0x73:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::InitBossTower @ 0x8142f32

/* WongWork::CBossTower::InitBossTower(CParty*, int) */

undefined4 WongWork::CBossTower::InitBossTower(CParty *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  uVar2 = CDataManager::find_dungeon(iVar1);
  *(undefined4 *)(param_1 + 0x9f0) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_1 + 0x9f0) == 0)) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    uVar2 = CDungeon::getRandomTowerMaxStage(*(CDungeon **)(param_1 + 0x9f0));
    *(undefined4 *)(param_1 + 0xae4) = uVar2;
    param_1[0xafc] = (CParty)0x0;
    uVar2 = 1;
  }
  return uVar2;
}
```
