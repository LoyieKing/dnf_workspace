# get_item_count

`_ZNK10CInventory14get_item_countEi`

`CInventory::get_item_count(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb3e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb3e4  _ZNK10CInventory14get_item_countEi
#           CInventory::get_item_count(int) const
# range [0x084fb3e4, 0x084fb4ff]
084fb3e4 +0x000:  push   %ebp
084fb3e5 +0x001:  mov    %esp,%ebp
084fb3e7 +0x003:  sub    $0x20,%esp
084fb3ea +0x006:  movl   $0x0,-0x14(%ebp)
084fb3f1 +0x00d:  mov    0xc(%ebp),%eax
084fb3f4 +0x010:  cmp    $0x1,%eax
084fb3f7 +0x013:  je     084fb451 <+0x6d>
084fb3f9 +0x015:  cmp    $0x1,%eax
084fb3fc +0x018:  jg     084fb407 <+0x23>
084fb3fe +0x01a:  test   %eax,%eax
084fb400 +0x01c:  je     084fb41a <+0x36>
084fb402 +0x01e:  jmp    084fb4fa <+0x116>
084fb407 +0x023:  cmp    $0x2,%eax
084fb40a +0x026:  je     084fb48b <+0xa7>
084fb40c +0x028:  cmp    $0x3,%eax
084fb40f +0x02b:  je     084fb4c2 <+0xde>
084fb415 +0x031:  jmp    084fb4fa <+0x116>
084fb41a +0x036:  movl   $0x0,-0x10(%ebp)
084fb421 +0x03d:  jmp    084fb441 <+0x5d>
084fb423 +0x03f:  mov    -0x10(%ebp),%eax
084fb426 +0x042:  mov    0x8(%ebp),%edx
084fb429 +0x045:  imul   $0x3d,%eax,%eax
084fb42c +0x048:  lea    (%edx,%eax,1),%eax
084fb42f +0x04b:  add    $0x10,%eax
084fb432 +0x04e:  mov    0xe(%eax),%eax
084fb435 +0x051:  test   %eax,%eax
084fb437 +0x053:  je     084fb43d <+0x59>
084fb439 +0x055:  addl   $0x1,-0x14(%ebp)
084fb43d +0x059:  addl   $0x1,-0x10(%ebp)
084fb441 +0x05d:  cmpl   $0x15,-0x10(%ebp)
084fb445 +0x061:  setle  %al
084fb448 +0x064:  test   %al,%al
084fb44a +0x066:  jne    084fb423 <+0x3f>
084fb44c +0x068:  jmp    084fb4fa <+0x116>
084fb451 +0x06d:  movl   $0x3,-0xc(%ebp)
084fb458 +0x074:  jmp    084fb47b <+0x97>
084fb45a +0x076:  mov    0x8(%ebp),%eax
084fb45d +0x079:  mov    0x650(%eax),%edx
084fb463 +0x07f:  mov    -0xc(%ebp),%eax
084fb466 +0x082:  imul   $0x3d,%eax,%eax
084fb469 +0x085:  lea    (%edx,%eax,1),%eax
084fb46c +0x088:  mov    0x2(%eax),%eax
084fb46f +0x08b:  test   %eax,%eax
084fb471 +0x08d:  je     084fb477 <+0x93>
084fb473 +0x08f:  addl   $0x1,-0x14(%ebp)
084fb477 +0x093:  addl   $0x1,-0xc(%ebp)
084fb47b +0x097:  cmpl   $0x137,-0xc(%ebp)
084fb482 +0x09e:  setle  %al
084fb485 +0x0a1:  test   %al,%al
084fb487 +0x0a3:  jne    084fb45a <+0x76>
084fb489 +0x0a5:  jmp    084fb4fa <+0x116>
084fb48b +0x0a7:  movl   $0x0,-0x8(%ebp)
084fb492 +0x0ae:  jmp    084fb4b5 <+0xd1>
084fb494 +0x0b0:  mov    0x8(%ebp),%eax
084fb497 +0x0b3:  mov    0x654(%eax),%edx
084fb49d +0x0b9:  mov    -0x8(%ebp),%eax
084fb4a0 +0x0bc:  imul   $0x3d,%eax,%eax
084fb4a3 +0x0bf:  lea    (%edx,%eax,1),%eax
084fb4a6 +0x0c2:  mov    0x2(%eax),%eax
084fb4a9 +0x0c5:  test   %eax,%eax
084fb4ab +0x0c7:  je     084fb4b1 <+0xcd>
084fb4ad +0x0c9:  addl   $0x1,-0x14(%ebp)
084fb4b1 +0x0cd:  addl   $0x1,-0x8(%ebp)
084fb4b5 +0x0d1:  cmpl   $0x68,-0x8(%ebp)
084fb4b9 +0x0d5:  setle  %al
084fb4bc +0x0d8:  test   %al,%al
084fb4be +0x0da:  jne    084fb494 <+0xb0>
084fb4c0 +0x0dc:  jmp    084fb4fa <+0x116>
084fb4c2 +0x0de:  movl   $0x0,-0x4(%ebp)
084fb4c9 +0x0e5:  jmp    084fb4ec <+0x108>
084fb4cb +0x0e7:  mov    0x8(%ebp),%eax
084fb4ce +0x0ea:  mov    0x6e4(%eax),%edx
084fb4d4 +0x0f0:  mov    -0x4(%ebp),%eax
084fb4d7 +0x0f3:  imul   $0x3d,%eax,%eax
084fb4da +0x0f6:  lea    (%edx,%eax,1),%eax
084fb4dd +0x0f9:  mov    0x2(%eax),%eax
084fb4e0 +0x0fc:  test   %eax,%eax
084fb4e2 +0x0fe:  je     084fb4e8 <+0x104>
084fb4e4 +0x100:  addl   $0x1,-0x14(%ebp)
084fb4e8 +0x104:  addl   $0x1,-0x4(%ebp)
084fb4ec +0x108:  cmpl   $0xf1,-0x4(%ebp)
084fb4f3 +0x10f:  setle  %al
084fb4f6 +0x112:  test   %al,%al
084fb4f8 +0x114:  jne    084fb4cb <+0xe7>
084fb4fa +0x116:  mov    -0x14(%ebp),%eax
084fb4fd +0x119:  leave
084fb4fe +0x11a:  ret
084fb4ff +0x11b:  nop
```

## 反编译 C

```c
// CInventory::get_item_count @ 0x84fb3e4

/* CInventory::get_item_count(int) const */

int __thiscall CInventory::get_item_count(CInventory *this,int param_1)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  if (param_1 == 1) {
    for (local_10 = 3; local_10 < 0x138; local_10 = local_10 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      for (local_14 = 0; local_14 < 0x16; local_14 = local_14 + 1) {
        if (*(int *)(this + local_14 * 0x3d + 0x1e) != 0) {
          local_18 = local_18 + 1;
        }
      }
    }
  }
  else if (param_1 == 2) {
    for (local_c = 0; local_c < 0x69; local_c = local_c + 1) {
      if (*(int *)(*(int *)(this + 0x654) + local_c * 0x3d + 2) != 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  else if (param_1 == 3) {
    for (local_8 = 0; local_8 < 0xf2; local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(this + 0x6e4) + local_8 * 0x3d + 2) != 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  return local_18;
}
```
