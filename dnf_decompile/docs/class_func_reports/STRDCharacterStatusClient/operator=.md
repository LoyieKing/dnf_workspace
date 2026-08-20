# operator=

`_ZN25STRDCharacterStatusClientaSERK19STRDCharacterStatus`

`STRDCharacterStatusClient::operator=(STRDCharacterStatus const&)`

| 类 | 地址 |
|---|---|
| `STRDCharacterStatusClient` | `0x08a0cab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a0cab8  _ZN25STRDCharacterStatusClientaSERK19STRDCharacterStatus
#           STRDCharacterStatusClient::operator=(STRDCharacterStatus const&)
# range [0x08a0cab8, 0x08a0cc3b]
08a0cab8 +0x000:  push   %ebp
08a0cab9 +0x001:  mov    %esp,%ebp
08a0cabb +0x003:  sub    $0x10,%esp
08a0cabe +0x006:  mov    0xc(%ebp),%eax
08a0cac1 +0x009:  mov    (%eax),%eax
08a0cac3 +0x00b:  mov    %eax,%edx
08a0cac5 +0x00d:  mov    0x8(%ebp),%eax
08a0cac8 +0x010:  mov    %edx,(%eax)
08a0caca +0x012:  mov    0xc(%ebp),%eax
08a0cacd +0x015:  mov    0x4(%eax),%eax
08a0cad0 +0x018:  mov    %eax,%edx
08a0cad2 +0x01a:  mov    0x8(%ebp),%eax
08a0cad5 +0x01d:  mov    %edx,0x4(%eax)
08a0cad8 +0x020:  mov    0xc(%ebp),%eax
08a0cadb +0x023:  movzwl 0x8(%eax),%eax
08a0cadf +0x027:  movzwl %ax,%edx
08a0cae2 +0x02a:  mov    0x8(%ebp),%eax
08a0cae5 +0x02d:  mov    %edx,0x8(%eax)
08a0cae8 +0x030:  mov    0xc(%ebp),%eax
08a0caeb +0x033:  movzwl 0xa(%eax),%eax
08a0caef +0x037:  movzwl %ax,%edx
08a0caf2 +0x03a:  mov    0x8(%ebp),%eax
08a0caf5 +0x03d:  mov    %edx,0xc(%eax)
08a0caf8 +0x040:  mov    0xc(%ebp),%eax
08a0cafb +0x043:  movzwl 0xc(%eax),%eax
08a0caff +0x047:  movzwl %ax,%edx
08a0cb02 +0x04a:  mov    0x8(%ebp),%eax
08a0cb05 +0x04d:  mov    %edx,0x10(%eax)
08a0cb08 +0x050:  mov    0xc(%ebp),%eax
08a0cb0b +0x053:  movzwl 0xe(%eax),%eax
08a0cb0f +0x057:  movzwl %ax,%edx
08a0cb12 +0x05a:  mov    0x8(%ebp),%eax
08a0cb15 +0x05d:  mov    %edx,0x14(%eax)
08a0cb18 +0x060:  movl   $0x0,-0x8(%ebp)
08a0cb1f +0x067:  jmp    08a0cb42 <+0x8a>
08a0cb21 +0x069:  mov    -0x8(%ebp),%ecx
08a0cb24 +0x06c:  mov    -0x8(%ebp),%edx
08a0cb27 +0x06f:  mov    0xc(%ebp),%eax
08a0cb2a +0x072:  add    $0x8,%edx
08a0cb2d +0x075:  movzwl (%eax,%edx,2),%eax
08a0cb31 +0x079:  movswl %ax,%edx
08a0cb34 +0x07c:  mov    0x8(%ebp),%eax
08a0cb37 +0x07f:  add    $0x4,%ecx
08a0cb3a +0x082:  mov    %edx,0x8(%eax,%ecx,4)
08a0cb3e +0x086:  addl   $0x1,-0x8(%ebp)
08a0cb42 +0x08a:  cmpl   $0x3,-0x8(%ebp)
08a0cb46 +0x08e:  setle  %al
08a0cb49 +0x091:  test   %al,%al
08a0cb4b +0x093:  jne    08a0cb21 <+0x69>
08a0cb4d +0x095:  movl   $0x0,-0x4(%ebp)
08a0cb54 +0x09c:  jmp    08a0cb78 <+0xc0>
08a0cb56 +0x09e:  mov    -0x4(%ebp),%ecx
08a0cb59 +0x0a1:  mov    -0x4(%ebp),%edx
08a0cb5c +0x0a4:  mov    0xc(%ebp),%eax
08a0cb5f +0x0a7:  add    $0x8,%edx
08a0cb62 +0x0aa:  movzwl 0x8(%eax,%edx,2),%eax
08a0cb67 +0x0af:  movswl %ax,%edx
08a0cb6a +0x0b2:  mov    0x8(%ebp),%eax
08a0cb6d +0x0b5:  add    $0x8,%ecx
08a0cb70 +0x0b8:  mov    %edx,0x8(%eax,%ecx,4)
08a0cb74 +0x0bc:  addl   $0x1,-0x4(%ebp)
08a0cb78 +0x0c0:  cmpl   $0x10,-0x4(%ebp)
08a0cb7c +0x0c4:  setle  %al
08a0cb7f +0x0c7:  test   %al,%al
08a0cb81 +0x0c9:  jne    08a0cb56 <+0x9e>
08a0cb83 +0x0cb:  mov    0xc(%ebp),%eax
08a0cb86 +0x0ce:  mov    0x3a(%eax),%edx
08a0cb89 +0x0d1:  mov    0x8(%ebp),%eax
08a0cb8c +0x0d4:  mov    %edx,0x6c(%eax)
08a0cb8f +0x0d7:  mov    0xc(%ebp),%eax
08a0cb92 +0x0da:  movzwl 0x3e(%eax),%eax
08a0cb96 +0x0de:  movswl %ax,%edx
08a0cb99 +0x0e1:  mov    0x8(%ebp),%eax
08a0cb9c +0x0e4:  mov    %edx,0x70(%eax)
08a0cb9f +0x0e7:  mov    0xc(%ebp),%eax
08a0cba2 +0x0ea:  movzwl 0x40(%eax),%eax
08a0cba6 +0x0ee:  movswl %ax,%edx
08a0cba9 +0x0f1:  mov    0x8(%ebp),%eax
08a0cbac +0x0f4:  mov    %edx,0x74(%eax)
08a0cbaf +0x0f7:  mov    0xc(%ebp),%eax
08a0cbb2 +0x0fa:  mov    0x42(%eax),%eax
08a0cbb5 +0x0fd:  mov    %eax,%edx
08a0cbb7 +0x0ff:  mov    0x8(%ebp),%eax
08a0cbba +0x102:  mov    %edx,0x78(%eax)
08a0cbbd +0x105:  mov    0xc(%ebp),%eax
08a0cbc0 +0x108:  movzwl 0x46(%eax),%eax
08a0cbc4 +0x10c:  movzwl %ax,%edx
08a0cbc7 +0x10f:  mov    0x8(%ebp),%eax
08a0cbca +0x112:  mov    %edx,0x7c(%eax)
08a0cbcd +0x115:  mov    0xc(%ebp),%eax
08a0cbd0 +0x118:  movzwl 0x48(%eax),%eax
08a0cbd4 +0x11c:  movzwl %ax,%edx
08a0cbd7 +0x11f:  mov    0x8(%ebp),%eax
08a0cbda +0x122:  mov    %edx,0x80(%eax)
08a0cbe0 +0x128:  mov    0xc(%ebp),%eax
08a0cbe3 +0x12b:  movzwl 0x4a(%eax),%eax
08a0cbe7 +0x12f:  movswl %ax,%edx
08a0cbea +0x132:  mov    0x8(%ebp),%eax
08a0cbed +0x135:  mov    %edx,0x84(%eax)
08a0cbf3 +0x13b:  mov    0xc(%ebp),%eax
08a0cbf6 +0x13e:  movzwl 0x4c(%eax),%eax
08a0cbfa +0x142:  movswl %ax,%edx
08a0cbfd +0x145:  mov    0x8(%ebp),%eax
08a0cc00 +0x148:  mov    %edx,0x88(%eax)
08a0cc06 +0x14e:  mov    0xc(%ebp),%eax
08a0cc09 +0x151:  mov    0x4e(%eax),%edx
08a0cc0c +0x154:  mov    0x8(%ebp),%eax
08a0cc0f +0x157:  mov    %edx,0x8c(%eax)
08a0cc15 +0x15d:  mov    0xc(%ebp),%eax
08a0cc18 +0x160:  movzbl 0x52(%eax),%eax
08a0cc1c +0x164:  movzbl %al,%edx
08a0cc1f +0x167:  mov    0x8(%ebp),%eax
08a0cc22 +0x16a:  mov    %edx,0x90(%eax)
08a0cc28 +0x170:  mov    0xc(%ebp),%eax
08a0cc2b +0x173:  mov    0x53(%eax),%edx
08a0cc2e +0x176:  mov    0x8(%ebp),%eax
08a0cc31 +0x179:  mov    %edx,0x94(%eax)
08a0cc37 +0x17f:  mov    0x8(%ebp),%eax
08a0cc3a +0x182:  leave
08a0cc3b +0x183:  ret
```

## 反编译 C

```c
// STRDCharacterStatusClient::operator= @ 0x8a0cab8

/* STRDCharacterStatusClient::TEMPNAMEPLACEHOLDERVALUE(STRDCharacterStatus const&) */

STRDCharacterStatusClient * __thiscall
STRDCharacterStatusClient::operator=(STRDCharacterStatusClient *this,STRDCharacterStatus *param_1)

{
  int local_c;
  int local_8;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(uint *)(this + 8) = (uint)*(ushort *)(param_1 + 8);
  *(uint *)(this + 0xc) = (uint)*(ushort *)(param_1 + 10);
  *(uint *)(this + 0x10) = (uint)*(ushort *)(param_1 + 0xc);
  *(uint *)(this + 0x14) = (uint)*(ushort *)(param_1 + 0xe);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(int *)(this + (local_c + 4) * 4 + 8) = (int)*(short *)(param_1 + (local_c + 8) * 2);
  }
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    *(int *)(this + (local_8 + 8) * 4 + 8) = (int)*(short *)(param_1 + (local_8 + 8) * 2 + 8);
  }
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x3a);
  *(int *)(this + 0x70) = (int)*(short *)(param_1 + 0x3e);
  *(int *)(this + 0x74) = (int)*(short *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x42);
  *(uint *)(this + 0x7c) = (uint)*(ushort *)(param_1 + 0x46);
  *(uint *)(this + 0x80) = (uint)*(ushort *)(param_1 + 0x48);
  *(int *)(this + 0x84) = (int)*(short *)(param_1 + 0x4a);
  *(int *)(this + 0x88) = (int)*(short *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x4e);
  *(uint *)(this + 0x90) = (uint)(byte)param_1[0x52];
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x53);
  return this;
}
```
