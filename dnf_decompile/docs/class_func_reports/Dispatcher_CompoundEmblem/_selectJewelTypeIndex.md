# _selectJewelTypeIndex

`_ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt`

`Dispatcher_CompoundEmblem::_selectJewelTypeIndex(unsigned int, unsigned short const*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompoundEmblem` | `0x08220a60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08220a60  _ZNK25Dispatcher_CompoundEmblem21_selectJewelTypeIndexEjPKt
#           Dispatcher_CompoundEmblem::_selectJewelTypeIndex(unsigned int, unsigned short const*) const
# range [0x08220a60, 0x08220bb1]
08220a60 +0x000:  push   %ebp
08220a61 +0x001:  mov    %esp,%ebp
08220a63 +0x003:  sub    $0x78,%esp
08220a66 +0x006:  movl   $0x0,-0x38(%ebp)
08220a6d +0x00d:  movl   $0x0,-0x34(%ebp)
08220a74 +0x014:  movl   $0x0,-0x30(%ebp)
08220a7b +0x01b:  movl   $0x0,-0x2c(%ebp)
08220a82 +0x022:  movl   $0x0,-0x28(%ebp)
08220a89 +0x029:  movl   $0x0,-0x4c(%ebp)
08220a90 +0x030:  movl   $0x0,-0x48(%ebp)
08220a97 +0x037:  movl   $0x0,-0x44(%ebp)
08220a9e +0x03e:  movl   $0x0,-0x40(%ebp)
08220aa5 +0x045:  movl   $0x0,-0x3c(%ebp)
08220aac +0x04c:  movl   $0x0,-0x50(%ebp)
08220ab3 +0x053:  movl   $0x0,-0x24(%ebp)
08220aba +0x05a:  movl   $0x0,-0x1c(%ebp)
08220ac1 +0x061:  jmp    08220b05 <+0xa5>
08220ac3 +0x063:  mov    -0x1c(%ebp),%eax
08220ac6 +0x066:  add    %eax,%eax
08220ac8 +0x068:  add    0x10(%ebp),%eax
08220acb +0x06b:  movzwl (%eax),%eax
08220ace +0x06e:  test   %ax,%ax
08220ad1 +0x071:  je     08220b00 <+0xa0>
08220ad3 +0x073:  mov    -0x1c(%ebp),%eax
08220ad6 +0x076:  add    %eax,%eax
08220ad8 +0x078:  add    0x10(%ebp),%eax
08220adb +0x07b:  movzwl (%eax),%eax
08220ade +0x07e:  movzwl %ax,%eax
08220ae1 +0x081:  lea    -0x50(%ebp),%edx
08220ae4 +0x084:  mov    %edx,0x8(%esp)
08220ae8 +0x088:  lea    -0x38(%ebp),%edx
08220aeb +0x08b:  mov    %edx,0x4(%esp)
08220aef +0x08f:  mov    %eax,(%esp)
08220af2 +0x092:  call   0822a9e5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8f
08220af7 +0x097:  mov    %eax,-0x18(%ebp)
08220afa +0x09a:  cmpl   $0xffffffff,-0x18(%ebp)
08220afe +0x09e:  jmp    08220b01 <+0xa1>
08220b00 +0x0a0:  nop
08220b01 +0x0a1:  addl   $0x1,-0x1c(%ebp)
08220b05 +0x0a5:  mov    -0x1c(%ebp),%eax
08220b08 +0x0a8:  cmp    0xc(%ebp),%eax
08220b0b +0x0ab:  setb   %al
08220b0e +0x0ae:  test   %al,%al
08220b10 +0x0b0:  jne    08220ac3 <+0x63>
08220b12 +0x0b2:  mov    -0x50(%ebp),%eax
08220b15 +0x0b5:  test   %eax,%eax
08220b17 +0x0b7:  jne    08220b23 <+0xc3>
08220b19 +0x0b9:  mov    $0xffffffff,%eax
08220b1e +0x0be:  jmp    08220baf <+0x14f>
08220b23 +0x0c3:  movl   $0x0,-0x14(%ebp)
08220b2a +0x0ca:  jmp    08220b68 <+0x108>
08220b2c +0x0cc:  mov    -0x50(%ebp),%eax
08220b2f +0x0cf:  mov    %eax,-0x5c(%ebp)
08220b32 +0x0d2:  mov    $0x2710,%eax
08220b37 +0x0d7:  mov    %eax,%edx
08220b39 +0x0d9:  sar    $0x1f,%edx
08220b3c +0x0dc:  idivl  -0x5c(%ebp)
08220b3f +0x0df:  mov    %eax,%edx
08220b41 +0x0e1:  mov    -0x14(%ebp),%eax
08220b44 +0x0e4:  mov    -0x38(%ebp,%eax,4),%eax
08220b48 +0x0e8:  imul   %edx,%eax
08220b4b +0x0eb:  mov    %eax,-0x10(%ebp)
08220b4e +0x0ee:  mov    -0x14(%ebp),%eax
08220b51 +0x0f1:  mov    -0x24(%ebp),%edx
08220b54 +0x0f4:  mov    -0x10(%ebp),%ecx
08220b57 +0x0f7:  lea    (%ecx,%edx,1),%edx
08220b5a +0x0fa:  mov    %edx,-0x4c(%ebp,%eax,4)
08220b5e +0x0fe:  mov    -0x10(%ebp),%eax
08220b61 +0x101:  add    %eax,-0x24(%ebp)
08220b64 +0x104:  addl   $0x1,-0x14(%ebp)
08220b68 +0x108:  cmpl   $0x4,-0x14(%ebp)
08220b6c +0x10c:  setle  %al
08220b6f +0x10f:  test   %al,%al
08220b71 +0x111:  jne    08220b2c <+0xcc>
08220b73 +0x113:  mov    -0x24(%ebp),%eax
08220b76 +0x116:  mov    %eax,(%esp)
08220b79 +0x119:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08220b7e +0x11e:  mov    %eax,-0x20(%ebp)
08220b81 +0x121:  movl   $0x0,-0xc(%ebp)
08220b88 +0x128:  jmp    08220b9f <+0x13f>
08220b8a +0x12a:  mov    -0xc(%ebp),%eax
08220b8d +0x12d:  mov    -0x4c(%ebp,%eax,4),%eax
08220b91 +0x131:  cmp    -0x20(%ebp),%eax
08220b94 +0x134:  jle    08220b9b <+0x13b>
08220b96 +0x136:  mov    -0xc(%ebp),%eax
08220b99 +0x139:  jmp    08220baf <+0x14f>
08220b9b +0x13b:  addl   $0x1,-0xc(%ebp)
08220b9f +0x13f:  cmpl   $0x4,-0xc(%ebp)
08220ba3 +0x143:  setle  %al
08220ba6 +0x146:  test   %al,%al
08220ba8 +0x148:  jne    08220b8a <+0x12a>
08220baa +0x14a:  mov    $0xffffffff,%eax
08220baf +0x14f:  leave
08220bb0 +0x150:  ret
08220bb1 +0x151:  nop
```

## 反编译 C

```c
// Dispatcher_CompoundEmblem::_selectJewelTypeIndex @ 0x8220a60

/* Dispatcher_CompoundEmblem::_selectJewelTypeIndex(unsigned int, unsigned short const*) const */

int __thiscall
Dispatcher_CompoundEmblem::_selectJewelTypeIndex
          (Dispatcher_CompoundEmblem *this,uint param_1,ushort *param_2)

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
