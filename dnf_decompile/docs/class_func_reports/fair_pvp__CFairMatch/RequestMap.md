# RequestMap

`_ZN8fair_pvp10CFairMatch10RequestMapERsR15PVP_BATTLE_MODE`

`fair_pvp::CFairMatch::RequestMap(short&, PVP_BATTLE_MODE&)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562bae  _ZN8fair_pvp10CFairMatch10RequestMapERsR15PVP_BATTLE_MODE
#           fair_pvp::CFairMatch::RequestMap(short&, PVP_BATTLE_MODE&)
# range [0x08562bae, 0x08562bdb]
08562bae +0x00:  push   %ebp
08562baf +0x01:  mov    %esp,%ebp
08562bb1 +0x03:  sub    $0x18,%esp
08562bb4 +0x06:  mov    0xc(%ebp),%eax
08562bb7 +0x09:  movw   $0x0,(%eax)
08562bbc +0x0e:  mov    0x10(%ebp),%eax
08562bbf +0x11:  mov    (%eax),%eax
08562bc1 +0x13:  cmp    $0x6,%eax
08562bc4 +0x16:  je     08562bda <+0x2c>
08562bc6 +0x18:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08562bcb +0x1d:  mov    %eax,(%esp)
08562bce +0x20:  call   0844d4ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xc4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xc4
08562bd3 +0x25:  mov    %eax,%edx
08562bd5 +0x27:  mov    0x10(%ebp),%eax
08562bd8 +0x2a:  mov    %edx,(%eax)
08562bda +0x2c:  leave
08562bdb +0x2d:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::RequestMap @ 0x8562bae

/* fair_pvp::CFairMatch::RequestMap(short&, PVP_BATTLE_MODE&) */

void __thiscall
fair_pvp::CFairMatch::RequestMap(CFairMatch *this,short *param_1,PVP_BATTLE_MODE *param_2)

{
  CDataManager *this_00;
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*(int *)param_2 != 6) {
    this_00 = (CDataManager *)G_CDataManager();
    uVar1 = CDataManager::GetPvPMode(this_00);
    *(undefined4 *)param_2 = uVar1;
  }
  return;
}
```
