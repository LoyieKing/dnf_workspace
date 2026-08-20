# IsUseFatigueDungeon

`_ZN6CParty19IsUseFatigueDungeonEv`

`CParty::IsUseFatigueDungeon()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be9c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be9c8  _ZN6CParty19IsUseFatigueDungeonEv
#           CParty::IsUseFatigueDungeon()
# range [0x085be9c8, 0x085bea49]
085be9c8 +0x00:  push   %ebp
085be9c9 +0x01:  mov    %esp,%ebp
085be9cb +0x03:  sub    $0x18,%esp
085be9ce +0x06:  mov    0x8(%ebp),%eax
085be9d1 +0x09:  mov    0xcd8(%eax),%eax
085be9d7 +0x0f:  cmp    $0x1,%eax
085be9da +0x12:  je     085bea43 <+0x7b>
085be9dc +0x14:  mov    0x8(%ebp),%eax
085be9df +0x17:  mov    0xcac(%eax),%eax
085be9e5 +0x1d:  test   %eax,%eax
085be9e7 +0x1f:  je     085bea43 <+0x7b>
085be9e9 +0x21:  mov    0x8(%ebp),%eax
085be9ec +0x24:  mov    0xcac(%eax),%eax
085be9f2 +0x2a:  movzbl 0x89f(%eax),%eax
085be9f9 +0x31:  test   %al,%al
085be9fb +0x33:  jne    085bea33 <+0x6b>
085be9fd +0x35:  mov    0x8(%ebp),%eax
085bea00 +0x38:  mov    0xcac(%eax),%eax
085bea06 +0x3e:  movzbl 0x87a(%eax),%eax
085bea0d +0x45:  xor    $0x1,%eax
085bea10 +0x48:  test   %al,%al
085bea12 +0x4a:  je     085bea33 <+0x6b>
085bea14 +0x4c:  mov    0x8(%ebp),%eax
085bea17 +0x4f:  mov    0xcac(%eax),%eax
085bea1d +0x55:  mov    %eax,(%esp)
085bea20 +0x58:  call   0822b4de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb88
085bea25 +0x5d:  xor    $0x1,%eax
085bea28 +0x60:  test   %al,%al
085bea2a +0x62:  je     085bea33 <+0x6b>
085bea2c +0x64:  mov    $0x1,%eax
085bea31 +0x69:  jmp    085bea38 <+0x70>
085bea33 +0x6b:  mov    $0x0,%eax
085bea38 +0x70:  test   %al,%al
085bea3a +0x72:  je     085bea43 <+0x7b>
085bea3c +0x74:  mov    $0x1,%eax
085bea41 +0x79:  jmp    085bea48 <+0x80>
085bea43 +0x7b:  mov    $0x0,%eax
085bea48 +0x80:  leave
085bea49 +0x81:  ret
```

## 反编译 C

```c
// CParty::IsUseFatigueDungeon @ 0x85be9c8

/* CParty::IsUseFatigueDungeon() */

undefined4 __thiscall CParty::IsUseFatigueDungeon(CParty *this)

{
  bool bVar1;
  char cVar2;
  
  if ((*(int *)(this + 0xcd8) != 1) && (*(int *)(this + 0xcac) != 0)) {
    if ((*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\0') &&
       ((*(char *)(*(int *)(this + 0xcac) + 0x87a) != '\x01' &&
        (cVar2 = CDungeon::isNoFatigueDungeon(*(CDungeon **)(this + 0xcac)), cVar2 != '\x01')))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}
```
