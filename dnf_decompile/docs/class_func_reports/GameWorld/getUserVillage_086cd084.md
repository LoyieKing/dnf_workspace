# getUserVillage

`_ZN9GameWorld14getUserVillageEi`

`GameWorld::getUserVillage(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd084  _ZN9GameWorld14getUserVillageEi
#           GameWorld::getUserVillage(int)
# range [0x086cd084, 0x086cd0af]
086cd084 +0x00:  push   %ebp
086cd085 +0x01:  mov    %esp,%ebp
086cd087 +0x03:  cmpl   $0x0,0xc(%ebp)
086cd08b +0x07:  jle    086cd097 <+0x13>
086cd08d +0x09:  mov    &MAX_VILLAGE_NUM,%eax
086cd092 +0x0e:  cmp    %eax,0xc(%ebp)
086cd095 +0x11:  jl     086cd09e <+0x1a>
086cd097 +0x13:  mov    $0x0,%eax
086cd09c +0x18:  jmp    086cd0ad <+0x29>
086cd09e +0x1a:  mov    0x8(%ebp),%eax
086cd0a1 +0x1d:  mov    0x1c(%eax),%edx
086cd0a4 +0x20:  mov    0xc(%ebp),%eax
086cd0a7 +0x23:  imul   $0x34,%eax,%eax
086cd0aa +0x26:  lea    (%edx,%eax,1),%eax
086cd0ad +0x29:  pop    %ebp
086cd0ae +0x2a:  ret
086cd0af +0x2b:  nop
```

## 反编译 C

```c
// GameWorld::getUserVillage @ 0x86cd084

/* GameWorld::getUserVillage(int) */

int __thiscall GameWorld::getUserVillage(GameWorld *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 1) || (MAX_VILLAGE_NUM <= param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x1c) + param_1 * 0x34;
  }
  return iVar1;
}
```
