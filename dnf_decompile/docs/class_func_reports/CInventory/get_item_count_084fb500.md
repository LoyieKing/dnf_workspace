# get_item_count

`_ZNK10CInventory14get_item_countEim`

`CInventory::get_item_count(int, unsigned long) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb500  _ZNK10CInventory14get_item_countEim
#           CInventory::get_item_count(int, unsigned long) const
# range [0x084fb500, 0x084fb637]
084fb500 +0x000:  push   %ebp
084fb501 +0x001:  mov    %esp,%ebp
084fb503 +0x003:  sub    $0x20,%esp
084fb506 +0x006:  movl   $0x0,-0x14(%ebp)
084fb50d +0x00d:  mov    0xc(%ebp),%eax
084fb510 +0x010:  cmp    $0x1,%eax
084fb513 +0x013:  je     084fb572 <+0x72>
084fb515 +0x015:  cmp    $0x1,%eax
084fb518 +0x018:  jg     084fb523 <+0x23>
084fb51a +0x01a:  test   %eax,%eax
084fb51c +0x01c:  je     084fb53a <+0x3a>
084fb51e +0x01e:  jmp    084fb632 <+0x132>
084fb523 +0x023:  cmp    $0x2,%eax
084fb526 +0x026:  je     084fb5c1 <+0xc1>
084fb52c +0x02c:  cmp    $0x3,%eax
084fb52f +0x02f:  je     084fb5f9 <+0xf9>
084fb535 +0x035:  jmp    084fb632 <+0x132>
084fb53a +0x03a:  movl   $0x0,-0x10(%ebp)
084fb541 +0x041:  jmp    084fb562 <+0x62>
084fb543 +0x043:  mov    -0x10(%ebp),%eax
084fb546 +0x046:  mov    0x8(%ebp),%edx
084fb549 +0x049:  imul   $0x3d,%eax,%eax
084fb54c +0x04c:  lea    (%edx,%eax,1),%eax
084fb54f +0x04f:  add    $0x10,%eax
084fb552 +0x052:  mov    0xe(%eax),%eax
084fb555 +0x055:  cmp    0x10(%ebp),%eax
084fb558 +0x058:  jne    084fb55e <+0x5e>
084fb55a +0x05a:  addl   $0x1,-0x14(%ebp)
084fb55e +0x05e:  addl   $0x1,-0x10(%ebp)
084fb562 +0x062:  cmpl   $0x15,-0x10(%ebp)
084fb566 +0x066:  setle  %al
084fb569 +0x069:  test   %al,%al
084fb56b +0x06b:  jne    084fb543 <+0x43>
084fb56d +0x06d:  jmp    084fb632 <+0x132>
084fb572 +0x072:  movl   $0x3,-0xc(%ebp)
084fb579 +0x079:  jmp    084fb5b1 <+0xb1>
084fb57b +0x07b:  mov    0x8(%ebp),%eax
084fb57e +0x07e:  mov    0x650(%eax),%edx
084fb584 +0x084:  mov    -0xc(%ebp),%eax
084fb587 +0x087:  imul   $0x3d,%eax,%eax
084fb58a +0x08a:  lea    (%edx,%eax,1),%eax
084fb58d +0x08d:  mov    0x2(%eax),%eax
084fb590 +0x090:  cmp    0x10(%ebp),%eax
084fb593 +0x093:  jne    084fb5ad <+0xad>
084fb595 +0x095:  mov    0x8(%ebp),%eax
084fb598 +0x098:  mov    0x650(%eax),%edx
084fb59e +0x09e:  mov    -0xc(%ebp),%eax
084fb5a1 +0x0a1:  imul   $0x3d,%eax,%eax
084fb5a4 +0x0a4:  lea    (%edx,%eax,1),%eax
084fb5a7 +0x0a7:  mov    0x7(%eax),%eax
084fb5aa +0x0aa:  add    %eax,-0x14(%ebp)
084fb5ad +0x0ad:  addl   $0x1,-0xc(%ebp)
084fb5b1 +0x0b1:  cmpl   $0x137,-0xc(%ebp)
084fb5b8 +0x0b8:  setle  %al
084fb5bb +0x0bb:  test   %al,%al
084fb5bd +0x0bd:  jne    084fb57b <+0x7b>
084fb5bf +0x0bf:  jmp    084fb632 <+0x132>
084fb5c1 +0x0c1:  movl   $0x0,-0x8(%ebp)
084fb5c8 +0x0c8:  jmp    084fb5ec <+0xec>
084fb5ca +0x0ca:  mov    0x8(%ebp),%eax
084fb5cd +0x0cd:  mov    0x654(%eax),%edx
084fb5d3 +0x0d3:  mov    -0x8(%ebp),%eax
084fb5d6 +0x0d6:  imul   $0x3d,%eax,%eax
084fb5d9 +0x0d9:  lea    (%edx,%eax,1),%eax
084fb5dc +0x0dc:  mov    0x2(%eax),%eax
084fb5df +0x0df:  cmp    0x10(%ebp),%eax
084fb5e2 +0x0e2:  jne    084fb5e8 <+0xe8>
084fb5e4 +0x0e4:  addl   $0x1,-0x14(%ebp)
084fb5e8 +0x0e8:  addl   $0x1,-0x8(%ebp)
084fb5ec +0x0ec:  cmpl   $0x68,-0x8(%ebp)
084fb5f0 +0x0f0:  setle  %al
084fb5f3 +0x0f3:  test   %al,%al
084fb5f5 +0x0f5:  jne    084fb5ca <+0xca>
084fb5f7 +0x0f7:  jmp    084fb632 <+0x132>
084fb5f9 +0x0f9:  movl   $0x0,-0x4(%ebp)
084fb600 +0x100:  jmp    084fb624 <+0x124>
084fb602 +0x102:  mov    0x8(%ebp),%eax
084fb605 +0x105:  mov    0x6e4(%eax),%edx
084fb60b +0x10b:  mov    -0x4(%ebp),%eax
084fb60e +0x10e:  imul   $0x3d,%eax,%eax
084fb611 +0x111:  lea    (%edx,%eax,1),%eax
084fb614 +0x114:  mov    0x2(%eax),%eax
084fb617 +0x117:  cmp    0x10(%ebp),%eax
084fb61a +0x11a:  jne    084fb620 <+0x120>
084fb61c +0x11c:  addl   $0x1,-0x14(%ebp)
084fb620 +0x120:  addl   $0x1,-0x4(%ebp)
084fb624 +0x124:  cmpl   $0xf1,-0x4(%ebp)
084fb62b +0x12b:  setle  %al
084fb62e +0x12e:  test   %al,%al
084fb630 +0x130:  jne    084fb602 <+0x102>
084fb632 +0x132:  mov    -0x14(%ebp),%eax
084fb635 +0x135:  leave
084fb636 +0x136:  ret
084fb637 +0x137:  nop
```

## 反编译 C

```c
// CInventory::get_item_count @ 0x84fb500

/* CInventory::get_item_count(int, unsigned long) const */

int __thiscall CInventory::get_item_count(CInventory *this,int param_1,ulong param_2)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  if (param_1 == 1) {
    for (local_10 = 3; local_10 < 0x138; local_10 = local_10 + 1) {
      if (*(ulong *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_2) {
        local_18 = local_18 + *(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7);
      }
    }
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      for (local_14 = 0; local_14 < 0x16; local_14 = local_14 + 1) {
        if (*(ulong *)(this + local_14 * 0x3d + 0x1e) == param_2) {
          local_18 = local_18 + 1;
        }
      }
    }
  }
  else if (param_1 == 2) {
    for (local_c = 0; local_c < 0x69; local_c = local_c + 1) {
      if (*(ulong *)(*(int *)(this + 0x654) + local_c * 0x3d + 2) == param_2) {
        local_18 = local_18 + 1;
      }
    }
  }
  else if (param_1 == 3) {
    for (local_8 = 0; local_8 < 0xf2; local_8 = local_8 + 1) {
      if (*(ulong *)(*(int *)(this + 0x6e4) + local_8 * 0x3d + 2) == param_2) {
        local_18 = local_18 + 1;
      }
    }
  }
  return local_18;
}
```
