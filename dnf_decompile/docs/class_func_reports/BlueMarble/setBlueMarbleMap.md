# setBlueMarbleMap

`_ZN10BlueMarble16setBlueMarbleMapEv`

`BlueMarble::setBlueMarbleMap()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d6e34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6e34  _ZN10BlueMarble16setBlueMarbleMapEv
#           BlueMarble::setBlueMarbleMap()
# range [0x080d6e34, 0x080d6e7b]
080d6e34 +0x00:  push   %ebp
080d6e35 +0x01:  mov    %esp,%ebp
080d6e37 +0x03:  push   %ebx
080d6e38 +0x04:  sub    $0x14,%esp
080d6e3b +0x07:  mov    0x8(%ebp),%eax
080d6e3e +0x0a:  mov    0x14(%eax),%eax
080d6e41 +0x0d:  add    $0x9c8,%eax
080d6e46 +0x12:  mov    %eax,(%esp)
080d6e49 +0x15:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
080d6e4e +0x1a:  mov    %eax,%ebx
080d6e50 +0x1c:  mov    0x8(%ebp),%eax
080d6e53 +0x1f:  mov    0x38(%eax),%eax
080d6e56 +0x22:  mov    %eax,(%esp)
080d6e59 +0x25:  call   088d6726 <_ZN23BlueMarbleScriptManager16getMapTotalCountEv>  ; BlueMarbleScriptManager::getMapTotalCount()
080d6e5e +0x2a:  mov    %eax,%ecx
080d6e60 +0x2c:  mov    %ebx,%eax
080d6e62 +0x2e:  mov    $0x0,%edx
080d6e67 +0x33:  div    %ecx
080d6e69 +0x35:  mov    %edx,%eax
080d6e6b +0x37:  add    $0x1,%eax
080d6e6e +0x3a:  mov    %eax,%edx
080d6e70 +0x3c:  mov    0x8(%ebp),%eax
080d6e73 +0x3f:  mov    %edx,0x1c(%eax)
080d6e76 +0x42:  add    $0x14,%esp
080d6e79 +0x45:  pop    %ebx
080d6e7a +0x46:  pop    %ebp
080d6e7b +0x47:  ret
```

## 反编译 C

```c
// BlueMarble::setBlueMarbleMap @ 0x80d6e34

/* BlueMarble::setBlueMarbleMap() */

void __thiscall BlueMarble::setBlueMarbleMap(BlueMarble *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = CMTRand::randInt((CMTRand *)(*(int *)(this + 0x14) + 0x9c8));
  uVar2 = BlueMarbleScriptManager::getMapTotalCount(*(BlueMarbleScriptManager **)(this + 0x38));
  *(uint *)(this + 0x1c) = uVar1 % uVar2 + 1;
  return;
}
```
