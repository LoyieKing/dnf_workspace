# allocBlueMarble

`_ZN12CGameManager15allocBlueMarbleEv`

`CGameManager::allocBlueMarble()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a3396` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a3396  _ZN12CGameManager15allocBlueMarbleEv
#           CGameManager::allocBlueMarble()
# range [0x082a3396, 0x082a3423]
082a3396 +0x00:  push   %ebp
082a3397 +0x01:  mov    %esp,%ebp
082a3399 +0x03:  sub    $0x28,%esp
082a339c +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a33a1 +0x0b:  mov    %eax,(%esp)
082a33a4 +0x0e:  call   08365eea <_ZN12CDataManager19getBlueMarbleScriptEv>  ; CDataManager::getBlueMarbleScript()
082a33a9 +0x13:  mov    %eax,-0x18(%ebp)
082a33ac +0x16:  movl   $0x0,-0x14(%ebp)
082a33b3 +0x1d:  jmp    082a3413 <+0x7d>
082a33b5 +0x1f:  mov    0x8(%ebp),%eax
082a33b8 +0x22:  mov    %eax,(%esp)
082a33bb +0x25:  call   082a22b6 <_ZN12CGameManager13getBlueMarbleEv>  ; CGameManager::getBlueMarble()
082a33c0 +0x2a:  mov    %eax,-0x10(%ebp)
082a33c3 +0x2d:  mov    -0x10(%ebp),%eax
082a33c6 +0x30:  mov    %eax,(%esp)
082a33c9 +0x33:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
082a33ce +0x38:  movl   $0x0,-0xc(%ebp)
082a33d5 +0x3f:  jmp    082a33ed <+0x57>
082a33d7 +0x41:  mov    -0x18(%ebp),%eax
082a33da +0x44:  mov    %eax,0x4(%esp)
082a33de +0x48:  mov    -0x10(%ebp),%eax
082a33e1 +0x4b:  mov    %eax,(%esp)
082a33e4 +0x4e:  call   080d8c3e <_ZN10BlueMarble11setUserInfoEP23BlueMarbleScriptManager>  ; BlueMarble::setUserInfo(BlueMarbleScriptManager*)
082a33e9 +0x53:  addl   $0x1,-0xc(%ebp)
082a33ed +0x57:  mov    -0x18(%ebp),%eax
082a33f0 +0x5a:  mov    0x30(%eax),%eax
082a33f3 +0x5d:  cmp    -0xc(%ebp),%eax
082a33f6 +0x60:  setg   %al
082a33f9 +0x63:  test   %al,%al
082a33fb +0x65:  jne    082a33d7 <+0x41>
082a33fd +0x67:  mov    -0x18(%ebp),%eax
082a3400 +0x6a:  mov    %eax,0x4(%esp)
082a3404 +0x6e:  mov    -0x10(%ebp),%eax
082a3407 +0x71:  mov    %eax,(%esp)
082a340a +0x74:  call   080d8ca8 <_ZN10BlueMarble9setScriptEP23BlueMarbleScriptManager>  ; BlueMarble::setScript(BlueMarbleScriptManager*)
082a340f +0x79:  addl   $0x1,-0x14(%ebp)
082a3413 +0x7d:  cmpl   $0x12b,-0x14(%ebp)
082a341a +0x84:  setle  %al
082a341d +0x87:  test   %al,%al
082a341f +0x89:  jne    082a33b5 <+0x1f>
082a3421 +0x8b:  leave
082a3422 +0x8c:  ret
082a3423 +0x8d:  nop
```

## 反编译 C

```c
// CGameManager::allocBlueMarble @ 0x82a3396

/* CGameManager::allocBlueMarble() */

void __thiscall CGameManager::allocBlueMarble(CGameManager *this)

{
  CDataManager *this_00;
  BlueMarbleScriptManager *pBVar1;
  BlueMarble *this_01;
  int local_18;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  pBVar1 = (BlueMarbleScriptManager *)CDataManager::getBlueMarbleScript(this_00);
  for (local_18 = 0; local_18 < 300; local_18 = local_18 + 1) {
    this_01 = (BlueMarble *)getBlueMarble(this);
    BlueMarble::getMemoryPoolIndex(this_01);
    for (local_10 = 0; local_10 < *(int *)(pBVar1 + 0x30); local_10 = local_10 + 1) {
      BlueMarble::setUserInfo(this_01,pBVar1);
    }
    BlueMarble::setScript(this_01,pBVar1);
  }
  return;
}
```
