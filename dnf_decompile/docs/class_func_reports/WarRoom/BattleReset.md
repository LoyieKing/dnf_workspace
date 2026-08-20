# BattleReset

`_ZN7WarRoom11BattleResetEv`

`WarRoom::BattleReset()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086baa8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086baa8e  _ZN7WarRoom11BattleResetEv
#           WarRoom::BattleReset()
# range [0x086baa8e, 0x086babad]
086baa8e +0x000:  push   %ebp
086baa8f +0x001:  mov    %esp,%ebp
086baa91 +0x003:  sub    $0x28,%esp
086baa94 +0x006:  movl   $0x0,-0xc(%ebp)
086baa9b +0x00d:  jmp    086bab45 <+0xb7>
086baaa0 +0x012:  mov    -0xc(%ebp),%edx
086baaa3 +0x015:  mov    0x8(%ebp),%eax
086baaa6 +0x018:  add    $0x48,%edx
086baaa9 +0x01b:  mov    0xc(%eax,%edx,4),%eax
086baaad +0x01f:  test   %eax,%eax
086baaaf +0x021:  je     086bab00 <+0x72>
086baab1 +0x023:  mov    -0xc(%ebp),%edx
086baab4 +0x026:  mov    0x8(%ebp),%eax
086baab7 +0x029:  add    $0x48,%edx
086baaba +0x02c:  mov    0xc(%eax,%edx,4),%eax
086baabe +0x030:  mov    %eax,(%esp)
086baac1 +0x033:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086baac6 +0x038:  mov    %eax,(%esp)
086baac9 +0x03b:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
086baace +0x040:  mov    -0xc(%ebp),%edx
086baad1 +0x043:  mov    0x8(%ebp),%eax
086baad4 +0x046:  add    $0x48,%edx
086baad7 +0x049:  mov    0xc(%eax,%edx,4),%eax
086baadb +0x04d:  mov    %eax,(%esp)
086baade +0x050:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086baae3 +0x055:  mov    %eax,(%esp)
086baae6 +0x058:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
086baaeb +0x05d:  mov    -0xc(%ebp),%edx
086baaee +0x060:  mov    0x8(%ebp),%eax
086baaf1 +0x063:  add    $0x48,%edx
086baaf4 +0x066:  mov    0xc(%eax,%edx,4),%eax
086baaf8 +0x06a:  mov    %eax,(%esp)
086baafb +0x06d:  call   086c0b6e <_GLOBAL__I__ZN7WarRoomC2Ev+0x67>  ; global constructors keyed to WarRoom::WarRoom()+0x67
086bab00 +0x072:  mov    -0xc(%ebp),%eax
086bab03 +0x075:  mov    0x8(%ebp),%edx
086bab06 +0x078:  movb   $0x0,0x184(%edx,%eax,1)
086bab0e +0x080:  mov    -0xc(%ebp),%edx
086bab11 +0x083:  mov    0x8(%ebp),%eax
086bab14 +0x086:  add    $0x60,%edx
086bab17 +0x089:  movl   $0x0,0xc(%eax,%edx,4)
086bab1f +0x091:  mov    -0xc(%ebp),%edx
086bab22 +0x094:  mov    0x8(%ebp),%eax
086bab25 +0x097:  add    $0x68,%edx
086bab28 +0x09a:  movl   $0x0,0x4(%eax,%edx,4)
086bab30 +0x0a2:  mov    -0xc(%ebp),%edx
086bab33 +0x0a5:  mov    0x8(%ebp),%eax
086bab36 +0x0a8:  add    $0x4,%edx
086bab39 +0x0ab:  movl   $0xffffffff,0x4(%eax,%edx,4)
086bab41 +0x0b3:  addl   $0x1,-0xc(%ebp)
086bab45 +0x0b7:  cmpl   $0x5,-0xc(%ebp)
086bab49 +0x0bb:  setle  %al
086bab4c +0x0be:  test   %al,%al
086bab4e +0x0c0:  jne    086baaa0 <+0x12>
086bab54 +0x0c6:  mov    0x8(%ebp),%eax
086bab57 +0x0c9:  add    $0x34,%eax
086bab5a +0x0cc:  mov    %eax,(%esp)
086bab5d +0x0cf:  call   086b8a14 <_ZN8WarField5ResetEv>  ; WarField::Reset()
086bab62 +0x0d4:  mov    0x8(%ebp),%eax
086bab65 +0x0d7:  add    $0x1bc,%eax
086bab6a +0x0dc:  movl   $0x10,0x8(%esp)
086bab72 +0x0e4:  movl   $0x0,0x4(%esp)
086bab7a +0x0ec:  mov    %eax,(%esp)
086bab7d +0x0ef:  call   0807dcc0 <_init+0x5b8>
086bab82 +0x0f4:  mov    0x8(%ebp),%eax
086bab85 +0x0f7:  movl   $0x0,0x2c(%eax)
086bab8c +0x0fe:  mov    0x8(%ebp),%eax
086bab8f +0x101:  movb   $0x0,0x10(%eax)
086bab93 +0x105:  mov    0x8(%ebp),%eax
086bab96 +0x108:  movb   $0x0,0x11(%eax)
086bab9a +0x10c:  mov    0x8(%ebp),%eax
086bab9d +0x10f:  movb   $0x0,0x12(%eax)
086baba1 +0x113:  mov    0x8(%ebp),%eax
086baba4 +0x116:  mov    %eax,(%esp)
086baba7 +0x119:  call   086c077e <_ZN7WarRoom17CurSpawnStepResetEv>  ; WarRoom::CurSpawnStepReset()
086babac +0x11e:  leave
086babad +0x11f:  ret
```

## 反编译 C

```c
// WarRoom::BattleReset @ 0x86baa8e

/* WarRoom::BattleReset() */

void __thiscall WarRoom::BattleReset(WarRoom *this)

{
  CHackAnalyzer *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::reportHackInfo();
      this_00 = (CHackAnalyzer *)
                CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::resetHackInfo(this_00);
      CUser::ResetCoinCount(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
    }
    this[local_10 + 0x184] = (WarRoom)0x0;
    *(undefined4 *)(this + (local_10 + 0x60) * 4 + 0xc) = 0;
    *(undefined4 *)(this + (local_10 + 0x68) * 4 + 4) = 0;
    *(undefined4 *)(this + (local_10 + 4) * 4 + 4) = 0xffffffff;
  }
  WarField::Reset((WarField *)(this + 0x34));
  memset(this + 0x1bc,0,0x10);
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x10] = (WarRoom)0x0;
  this[0x11] = (WarRoom)0x0;
  this[0x12] = (WarRoom)0x0;
  CurSpawnStepReset(this);
  return;
}
```
