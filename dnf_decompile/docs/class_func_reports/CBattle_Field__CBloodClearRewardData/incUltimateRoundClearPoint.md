# incUltimateRoundClearPoint

`_ZN13CBattle_Field21CBloodClearRewardData26incUltimateRoundClearPointEi`

`CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodClearRewardData` | `0x08307096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307096  _ZN13CBattle_Field21CBloodClearRewardData26incUltimateRoundClearPointEi
#           CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint(int)
# range [0x08307096, 0x083070c9]
08307096 +0x00:  push   %ebp
08307097 +0x01:  mov    %esp,%ebp
08307099 +0x03:  push   %ebx
0830709a +0x04:  sub    $0x4,%esp
0830709d +0x07:  mov    0x8(%ebp),%eax
083070a0 +0x0a:  mov    0x9c8(%eax),%ebx
083070a6 +0x10:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083070ab +0x15:  mov    0xc(%ebp),%edx
083070ae +0x18:  add    $0x185c,%edx
083070b4 +0x1e:  mov    (%eax,%edx,4),%eax
083070b7 +0x21:  lea    (%ebx,%eax,1),%edx
083070ba +0x24:  mov    0x8(%ebp),%eax
083070bd +0x27:  mov    %edx,0x9c8(%eax)
083070c3 +0x2d:  add    $0x4,%esp
083070c6 +0x30:  pop    %ebx
083070c7 +0x31:  pop    %ebp
083070c8 +0x32:  ret
083070c9 +0x33:  nop
```

## 反编译 C

```c
// CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint @ 0x8307096

/* CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint(int) */

void __thiscall
CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint
          (CBloodClearRewardData *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x9c8);
  iVar2 = G_CDataManager();
  *(int *)(this + 0x9c8) = iVar1 + *(int *)(iVar2 + (param_1 + 0x185c) * 4);
  return;
}
```
