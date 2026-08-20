# _selectJewelTypeIndex

`_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt`

`game_master::CBoosterTest::_selectJewelTypeIndex(unsigned int, unsigned short const*) const`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084af3b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084af3b2  _ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt
#           game_master::CBoosterTest::_selectJewelTypeIndex(unsigned int, unsigned short const*) const
# range [0x084af3b2, 0x084af503]
084af3b2 +0x000:  push   %ebp
084af3b3 +0x001:  mov    %esp,%ebp
084af3b5 +0x003:  sub    $0x78,%esp
084af3b8 +0x006:  movl   $0x0,-0x38(%ebp)
084af3bf +0x00d:  movl   $0x0,-0x34(%ebp)
084af3c6 +0x014:  movl   $0x0,-0x30(%ebp)
084af3cd +0x01b:  movl   $0x0,-0x2c(%ebp)
084af3d4 +0x022:  movl   $0x0,-0x28(%ebp)
084af3db +0x029:  movl   $0x0,-0x4c(%ebp)
084af3e2 +0x030:  movl   $0x0,-0x48(%ebp)
084af3e9 +0x037:  movl   $0x0,-0x44(%ebp)
084af3f0 +0x03e:  movl   $0x0,-0x40(%ebp)
084af3f7 +0x045:  movl   $0x0,-0x3c(%ebp)
084af3fe +0x04c:  movl   $0x0,-0x50(%ebp)
084af405 +0x053:  movl   $0x0,-0x24(%ebp)
084af40c +0x05a:  movl   $0x0,-0x1c(%ebp)
084af413 +0x061:  jmp    084af457 <+0xa5>
084af415 +0x063:  mov    -0x1c(%ebp),%eax
084af418 +0x066:  add    %eax,%eax
084af41a +0x068:  add    0x10(%ebp),%eax
084af41d +0x06b:  movzwl (%eax),%eax
084af420 +0x06e:  test   %ax,%ax
084af423 +0x071:  je     084af452 <+0xa0>
084af425 +0x073:  mov    -0x1c(%ebp),%eax
084af428 +0x076:  add    %eax,%eax
084af42a +0x078:  add    0x10(%ebp),%eax
084af42d +0x07b:  movzwl (%eax),%eax
084af430 +0x07e:  movzwl %ax,%eax
084af433 +0x081:  lea    -0x50(%ebp),%edx
084af436 +0x084:  mov    %edx,0x8(%esp)
084af43a +0x088:  lea    -0x38(%ebp),%edx
084af43d +0x08b:  mov    %edx,0x4(%esp)
084af441 +0x08f:  mov    %eax,(%esp)
084af444 +0x092:  call   0822a9e5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8f
084af449 +0x097:  mov    %eax,-0x18(%ebp)
084af44c +0x09a:  cmpl   $0xffffffff,-0x18(%ebp)
084af450 +0x09e:  jmp    084af453 <+0xa1>
084af452 +0x0a0:  nop
084af453 +0x0a1:  addl   $0x1,-0x1c(%ebp)
084af457 +0x0a5:  mov    -0x1c(%ebp),%eax
084af45a +0x0a8:  cmp    0xc(%ebp),%eax
084af45d +0x0ab:  setb   %al
084af460 +0x0ae:  test   %al,%al
084af462 +0x0b0:  jne    084af415 <+0x63>
084af464 +0x0b2:  mov    -0x50(%ebp),%eax
084af467 +0x0b5:  test   %eax,%eax
084af469 +0x0b7:  jne    084af475 <+0xc3>
084af46b +0x0b9:  mov    $0xffffffff,%eax
084af470 +0x0be:  jmp    084af501 <+0x14f>
084af475 +0x0c3:  movl   $0x0,-0x14(%ebp)
084af47c +0x0ca:  jmp    084af4ba <+0x108>
084af47e +0x0cc:  mov    -0x50(%ebp),%eax
084af481 +0x0cf:  mov    %eax,-0x5c(%ebp)
084af484 +0x0d2:  mov    $0x2710,%eax
084af489 +0x0d7:  mov    %eax,%edx
084af48b +0x0d9:  sar    $0x1f,%edx
084af48e +0x0dc:  idivl  -0x5c(%ebp)
084af491 +0x0df:  mov    %eax,%edx
084af493 +0x0e1:  mov    -0x14(%ebp),%eax
084af496 +0x0e4:  mov    -0x38(%ebp,%eax,4),%eax
084af49a +0x0e8:  imul   %edx,%eax
084af49d +0x0eb:  mov    %eax,-0x10(%ebp)
084af4a0 +0x0ee:  mov    -0x14(%ebp),%eax
084af4a3 +0x0f1:  mov    -0x24(%ebp),%edx
084af4a6 +0x0f4:  mov    -0x10(%ebp),%ecx
084af4a9 +0x0f7:  lea    (%ecx,%edx,1),%edx
084af4ac +0x0fa:  mov    %edx,-0x4c(%ebp,%eax,4)
084af4b0 +0x0fe:  mov    -0x10(%ebp),%eax
084af4b3 +0x101:  add    %eax,-0x24(%ebp)
084af4b6 +0x104:  addl   $0x1,-0x14(%ebp)
084af4ba +0x108:  cmpl   $0x4,-0x14(%ebp)
084af4be +0x10c:  setle  %al
084af4c1 +0x10f:  test   %al,%al
084af4c3 +0x111:  jne    084af47e <+0xcc>
084af4c5 +0x113:  mov    -0x24(%ebp),%eax
084af4c8 +0x116:  mov    %eax,(%esp)
084af4cb +0x119:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
084af4d0 +0x11e:  mov    %eax,-0x20(%ebp)
084af4d3 +0x121:  movl   $0x0,-0xc(%ebp)
084af4da +0x128:  jmp    084af4f1 <+0x13f>
084af4dc +0x12a:  mov    -0xc(%ebp),%eax
084af4df +0x12d:  mov    -0x4c(%ebp,%eax,4),%eax
084af4e3 +0x131:  cmp    -0x20(%ebp),%eax
084af4e6 +0x134:  jle    084af4ed <+0x13b>
084af4e8 +0x136:  mov    -0xc(%ebp),%eax
084af4eb +0x139:  jmp    084af501 <+0x14f>
084af4ed +0x13b:  addl   $0x1,-0xc(%ebp)
084af4f1 +0x13f:  cmpl   $0x4,-0xc(%ebp)
084af4f5 +0x143:  setle  %al
084af4f8 +0x146:  test   %al,%al
084af4fa +0x148:  jne    084af4dc <+0x12a>
084af4fc +0x14a:  mov    $0xffffffff,%eax
084af501 +0x14f:  leave
084af502 +0x150:  ret
084af503 +0x151:  nop
```

## 反编译 C

```c
// game_master::CBoosterTest::_selectJewelTypeIndex @ 0x84af3b2

/* game_master::CBoosterTest::_selectJewelTypeIndex(unsigned int, unsigned short const*) const */

int __thiscall
game_master::CBoosterTest::_selectJewelTypeIndex(CBoosterTest *this,uint param_1,ushort *param_2)

{
  int iVar1;
  int local_54 [13];
  uint local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_54[6] = 0;
  local_54[7] = 0;
  local_54[8] = 0;
  local_54[9] = 0;
  local_54[10] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[0] = 0;
  local_54[0xb] = 0;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    if (param_2[local_20] != 0) {
      local_1c = getAvatarEmblemTypeIdxForCompountEmblem(param_2[local_20],local_54 + 6,local_54);
    }
  }
  if (local_54[0] != 0) {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      local_14 = local_54[local_18 + 6] * (int)(10000 / (longlong)local_54[0]);
      local_54[local_18 + 1] = local_14 + local_54[0xb];
      local_54[0xb] = local_54[0xb] + local_14;
    }
    iVar1 = get_rand_int(local_54[0xb]);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (iVar1 < local_54[local_10 + 1]) {
        return local_10;
      }
    }
  }
  return -1;
}
```
