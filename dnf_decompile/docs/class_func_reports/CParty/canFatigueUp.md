# canFatigueUp

`_ZN6CParty12canFatigueUpEh`

`CParty::canFatigueUp(unsigned char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8c88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8c88  _ZN6CParty12canFatigueUpEh
#           CParty::canFatigueUp(unsigned char)
# range [0x085a8c88, 0x085a8d1d]
085a8c88 +0x00:  push   %ebp
085a8c89 +0x01:  mov    %esp,%ebp
085a8c8b +0x03:  sub    $0x28,%esp
085a8c8e +0x06:  mov    0xc(%ebp),%eax
085a8c91 +0x09:  mov    %al,-0xc(%ebp)
085a8c94 +0x0c:  mov    0x8(%ebp),%eax
085a8c97 +0x0f:  mov    0xcd8(%eax),%eax
085a8c9d +0x15:  cmp    $0x1,%eax
085a8ca0 +0x18:  jne    085a8ca9 <+0x21>
085a8ca2 +0x1a:  mov    $0x0,%eax
085a8ca7 +0x1f:  jmp    085a8d1c <+0x94>
085a8ca9 +0x21:  mov    0x8(%ebp),%eax
085a8cac +0x24:  mov    0xcac(%eax),%eax
085a8cb2 +0x2a:  test   %eax,%eax
085a8cb4 +0x2c:  jne    085a8cbd <+0x35>
085a8cb6 +0x2e:  mov    $0x0,%eax
085a8cbb +0x33:  jmp    085a8d1c <+0x94>
085a8cbd +0x35:  mov    0x8(%ebp),%eax
085a8cc0 +0x38:  mov    0xcac(%eax),%eax
085a8cc6 +0x3e:  movzbl 0x89f(%eax),%eax
085a8ccd +0x45:  test   %al,%al
085a8ccf +0x47:  jne    085a8d07 <+0x7f>
085a8cd1 +0x49:  mov    0x8(%ebp),%eax
085a8cd4 +0x4c:  mov    0xcac(%eax),%eax
085a8cda +0x52:  movzbl 0x87a(%eax),%eax
085a8ce1 +0x59:  xor    $0x1,%eax
085a8ce4 +0x5c:  test   %al,%al
085a8ce6 +0x5e:  je     085a8d07 <+0x7f>
085a8ce8 +0x60:  mov    0x8(%ebp),%eax
085a8ceb +0x63:  mov    0xcac(%eax),%eax
085a8cf1 +0x69:  mov    %eax,(%esp)
085a8cf4 +0x6c:  call   0822b4de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb88
085a8cf9 +0x71:  xor    $0x1,%eax
085a8cfc +0x74:  test   %al,%al
085a8cfe +0x76:  je     085a8d07 <+0x7f>
085a8d00 +0x78:  mov    $0x1,%eax
085a8d05 +0x7d:  jmp    085a8d0c <+0x84>
085a8d07 +0x7f:  mov    $0x0,%eax
085a8d0c +0x84:  test   %al,%al
085a8d0e +0x86:  je     085a8d17 <+0x8f>
085a8d10 +0x88:  mov    $0x1,%eax
085a8d15 +0x8d:  jmp    085a8d1c <+0x94>
085a8d17 +0x8f:  mov    $0x0,%eax
085a8d1c +0x94:  leave
085a8d1d +0x95:  ret
```

## 反编译 C

```c
// CParty::canFatigueUp @ 0x85a8c88

/* CParty::canFatigueUp(unsigned char) */

undefined1 CParty::canFatigueUp(uchar param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined3 in_stack_00000005;
  
  if (*(int *)(_param_1 + 0xcd8) == 1) {
    return 0;
  }
  if (*(int *)(_param_1 + 0xcac) != 0) {
    if (((*(char *)(*(int *)(_param_1 + 0xcac) + 0x89f) == '\0') &&
        (*(char *)(*(int *)(_param_1 + 0xcac) + 0x87a) != '\x01')) &&
       (cVar2 = CDungeon::isNoFatigueDungeon(*(CDungeon **)(_param_1 + 0xcac)), cVar2 != '\x01')) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}
```
