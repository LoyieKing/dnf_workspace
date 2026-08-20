# makeCheckSum

`_ZNK10CInventory12makeCheckSumEii`

`CInventory::makeCheckSum(int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850ae7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850ae7a  _ZNK10CInventory12makeCheckSumEii
#           CInventory::makeCheckSum(int, int) const
# range [0x0850ae7a, 0x0850b0c1]
0850ae7a +0x000:  push   %ebp
0850ae7b +0x001:  mov    %esp,%ebp
0850ae7d +0x003:  push   %esi
0850ae7e +0x004:  push   %ebx
0850ae7f +0x005:  sub    $0x30,%esp
0850ae82 +0x008:  movl   $0x0,-0x14(%ebp)
0850ae89 +0x00f:  movl   $0xa,-0x10(%ebp)
0850ae90 +0x016:  jmp    0850af18 <+0x9e>
0850ae95 +0x01b:  mov    -0x10(%ebp),%eax
0850ae98 +0x01e:  mov    0x8(%ebp),%edx
0850ae9b +0x021:  imul   $0x3d,%eax,%eax
0850ae9e +0x024:  lea    (%edx,%eax,1),%eax
0850aea1 +0x027:  add    $0x10,%eax
0850aea4 +0x02a:  mov    0xe(%eax),%eax
0850aea7 +0x02d:  test   %eax,%eax
0850aea9 +0x02f:  je     0850af14 <+0x9a>
0850aeab +0x031:  mov    -0x10(%ebp),%eax
0850aeae +0x034:  mov    0x8(%ebp),%edx
0850aeb1 +0x037:  imul   $0x3d,%eax,%eax
0850aeb4 +0x03a:  lea    (%edx,%eax,1),%eax
0850aeb7 +0x03d:  add    $0x10,%eax
0850aeba +0x040:  movzwl 0x17(%eax),%eax
0850aebe +0x044:  movzwl %ax,%ebx
0850aec1 +0x047:  mov    -0x10(%ebp),%eax
0850aec4 +0x04a:  imul   $0x3d,%eax,%eax
0850aec7 +0x04d:  add    $0x10,%eax
0850aeca +0x050:  add    0x8(%ebp),%eax
0850aecd +0x053:  add    $0xc,%eax
0850aed0 +0x056:  mov    %eax,(%esp)
0850aed3 +0x059:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0850aed8 +0x05e:  movzbl %al,%edx
0850aedb +0x061:  mov    -0x10(%ebp),%eax
0850aede +0x064:  mov    0x8(%ebp),%ecx
0850aee1 +0x067:  imul   $0x3d,%eax,%eax
0850aee4 +0x06a:  lea    (%ecx,%eax,1),%eax
0850aee7 +0x06d:  add    $0x10,%eax
0850aeea +0x070:  mov    0xe(%eax),%eax
0850aeed +0x073:  mov    %ebx,0x10(%esp)
0850aef1 +0x077:  mov    %edx,0xc(%esp)
0850aef5 +0x07b:  movl   $0x1,0x8(%esp)
0850aefd +0x083:  mov    %eax,0x4(%esp)
0850af01 +0x087:  mov    -0x10(%ebp),%eax
0850af04 +0x08a:  mov    %eax,(%esp)
0850af07 +0x08d:  call   0889234d <_Z15getItemChecksumiiiii>  ; getItemChecksum(int, int, int, int, int)
0850af0c +0x092:  mov    -0x14(%ebp),%edx
0850af0f +0x095:  add    %edx,%eax
0850af11 +0x097:  mov    %eax,-0x14(%ebp)
0850af14 +0x09a:  addl   $0x1,-0x10(%ebp)
0850af18 +0x09e:  cmpl   $0x15,-0x10(%ebp)
0850af1c +0x0a2:  setle  %al
0850af1f +0x0a5:  test   %al,%al
0850af21 +0x0a7:  jne    0850ae95 <+0x1b>
0850af27 +0x0ad:  movl   $0x3,-0xc(%ebp)
0850af2e +0x0b4:  jmp    0850b068 <+0x1ee>
0850af33 +0x0b9:  mov    0x8(%ebp),%eax
0850af36 +0x0bc:  mov    0x650(%eax),%edx
0850af3c +0x0c2:  mov    -0xc(%ebp),%eax
0850af3f +0x0c5:  imul   $0x3d,%eax,%eax
0850af42 +0x0c8:  lea    (%edx,%eax,1),%eax
0850af45 +0x0cb:  mov    0x2(%eax),%eax
0850af48 +0x0ce:  test   %eax,%eax
0850af4a +0x0d0:  je     0850b064 <+0x1ea>
0850af50 +0x0d6:  mov    0x8(%ebp),%eax
0850af53 +0x0d9:  mov    0x650(%eax),%edx
0850af59 +0x0df:  mov    -0xc(%ebp),%eax
0850af5c +0x0e2:  imul   $0x3d,%eax,%eax
0850af5f +0x0e5:  lea    (%edx,%eax,1),%eax
0850af62 +0x0e8:  movzbl 0x1(%eax),%eax
0850af66 +0x0ec:  cmp    $0x1,%al
0850af68 +0x0ee:  jne    0850afe1 <+0x167>
0850af6a +0x0f0:  mov    0x8(%ebp),%eax
0850af6d +0x0f3:  mov    0x650(%eax),%edx
0850af73 +0x0f9:  mov    -0xc(%ebp),%eax
0850af76 +0x0fc:  imul   $0x3d,%eax,%eax
0850af79 +0x0ff:  lea    (%edx,%eax,1),%eax
0850af7c +0x102:  movzwl 0xb(%eax),%eax
0850af80 +0x106:  movzwl %ax,%ebx
0850af83 +0x109:  mov    0x8(%ebp),%eax
0850af86 +0x10c:  mov    0x650(%eax),%edx
0850af8c +0x112:  mov    -0xc(%ebp),%eax
0850af8f +0x115:  imul   $0x3d,%eax,%eax
0850af92 +0x118:  lea    (%edx,%eax,1),%eax
0850af95 +0x11b:  mov    %eax,(%esp)
0850af98 +0x11e:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0850af9d +0x123:  movzbl %al,%edx
0850afa0 +0x126:  mov    0x8(%ebp),%eax
0850afa3 +0x129:  mov    0x650(%eax),%ecx
0850afa9 +0x12f:  mov    -0xc(%ebp),%eax
0850afac +0x132:  imul   $0x3d,%eax,%eax
0850afaf +0x135:  lea    (%ecx,%eax,1),%eax
0850afb2 +0x138:  mov    0x2(%eax),%eax
0850afb5 +0x13b:  mov    %ebx,0x10(%esp)
0850afb9 +0x13f:  mov    %edx,0xc(%esp)
0850afbd +0x143:  movl   $0x1,0x8(%esp)
0850afc5 +0x14b:  mov    %eax,0x4(%esp)
0850afc9 +0x14f:  mov    -0xc(%ebp),%eax
0850afcc +0x152:  mov    %eax,(%esp)
0850afcf +0x155:  call   0889234d <_Z15getItemChecksumiiiii>  ; getItemChecksum(int, int, int, int, int)
0850afd4 +0x15a:  mov    -0x14(%ebp),%edx
0850afd7 +0x15d:  add    %edx,%eax
0850afd9 +0x15f:  mov    %eax,-0x14(%ebp)
0850afdc +0x162:  jmp    0850b064 <+0x1ea>
0850afe1 +0x167:  mov    0x8(%ebp),%eax
0850afe4 +0x16a:  mov    0x650(%eax),%edx
0850afea +0x170:  mov    -0xc(%ebp),%eax
0850afed +0x173:  imul   $0x3d,%eax,%eax
0850aff0 +0x176:  lea    (%edx,%eax,1),%eax
0850aff3 +0x179:  movzwl 0xb(%eax),%eax
0850aff7 +0x17d:  movzwl %ax,%ebx
0850affa +0x180:  mov    0x8(%ebp),%eax
0850affd +0x183:  mov    0x650(%eax),%edx
0850b003 +0x189:  mov    -0xc(%ebp),%eax
0850b006 +0x18c:  imul   $0x3d,%eax,%eax
0850b009 +0x18f:  lea    (%edx,%eax,1),%eax
0850b00c +0x192:  mov    %eax,(%esp)
0850b00f +0x195:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0850b014 +0x19a:  movzbl %al,%ecx
0850b017 +0x19d:  mov    0x8(%ebp),%eax
0850b01a +0x1a0:  mov    0x650(%eax),%edx
0850b020 +0x1a6:  mov    -0xc(%ebp),%eax
0850b023 +0x1a9:  imul   $0x3d,%eax,%eax
0850b026 +0x1ac:  lea    (%edx,%eax,1),%eax
0850b029 +0x1af:  mov    0x7(%eax),%edx
0850b02c +0x1b2:  mov    0x8(%ebp),%eax
0850b02f +0x1b5:  mov    0x650(%eax),%esi
0850b035 +0x1bb:  mov    -0xc(%ebp),%eax
0850b038 +0x1be:  imul   $0x3d,%eax,%eax
0850b03b +0x1c1:  lea    (%esi,%eax,1),%eax
0850b03e +0x1c4:  mov    0x2(%eax),%eax
0850b041 +0x1c7:  mov    %ebx,0x10(%esp)
0850b045 +0x1cb:  mov    %ecx,0xc(%esp)
0850b049 +0x1cf:  mov    %edx,0x8(%esp)
0850b04d +0x1d3:  mov    %eax,0x4(%esp)
0850b051 +0x1d7:  mov    -0xc(%ebp),%eax
0850b054 +0x1da:  mov    %eax,(%esp)
0850b057 +0x1dd:  call   0889234d <_Z15getItemChecksumiiiii>  ; getItemChecksum(int, int, int, int, int)
0850b05c +0x1e2:  mov    -0x14(%ebp),%edx
0850b05f +0x1e5:  add    %edx,%eax
0850b061 +0x1e7:  mov    %eax,-0x14(%ebp)
0850b064 +0x1ea:  addl   $0x1,-0xc(%ebp)
0850b068 +0x1ee:  cmpl   $0x137,-0xc(%ebp)
0850b06f +0x1f5:  setle  %al
0850b072 +0x1f8:  test   %al,%al
0850b074 +0x1fa:  jne    0850af33 <+0xb9>
0850b07a +0x200:  mov    0x8(%ebp),%eax
0850b07d +0x203:  mov    0x8(%eax),%edx
0850b080 +0x206:  mov    0x8(%ebp),%eax
0850b083 +0x209:  mov    0xc(%eax),%eax
0850b086 +0x20c:  add    %eax,%edx
0850b088 +0x20e:  mov    0x8(%ebp),%eax
0850b08b +0x211:  mov    0x10(%eax),%eax
0850b08e +0x214:  lea    (%edx,%eax,1),%eax
0850b091 +0x217:  mov    %eax,%edx
0850b093 +0x219:  mov    0x8(%ebp),%eax
0850b096 +0x21c:  mov    0x4(%eax),%eax
0850b099 +0x21f:  mov    0x10(%ebp),%ecx
0850b09c +0x222:  mov    %ecx,0x10(%esp)
0850b0a0 +0x226:  mov    0xc(%ebp),%ecx
0850b0a3 +0x229:  mov    %ecx,0xc(%esp)
0850b0a7 +0x22d:  mov    %edx,0x8(%esp)
0850b0ab +0x231:  mov    %eax,0x4(%esp)
0850b0af +0x235:  lea    -0x14(%ebp),%eax
0850b0b2 +0x238:  mov    %eax,(%esp)
0850b0b5 +0x23b:  call   088923b3 <_Z18finishItemChecksumPiiiii>  ; finishItemChecksum(int*, int, int, int, int)
0850b0ba +0x240:  add    $0x30,%esp
0850b0bd +0x243:  pop    %ebx
0850b0be +0x244:  pop    %esi
0850b0bf +0x245:  pop    %ebp
0850b0c0 +0x246:  ret
0850b0c1 +0x247:  nop
```

## 反编译 C

```c
// CInventory::makeCheckSum @ 0x850ae7a

/* CInventory::makeCheckSum(int, int) const */

void __thiscall CInventory::makeCheckSum(CInventory *this,int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  for (local_14 = 10; local_14 < 0x16; local_14 = local_14 + 1) {
    if (*(int *)(this + local_14 * 0x3d + 0x1e) != 0) {
      uVar1 = *(ushort *)(this + local_14 * 0x3d + 0x27);
      uVar2 = Inven_Item::GetUpgrade((Inven_Item *)(this + local_14 * 0x3d + 0x1c));
      iVar3 = getItemChecksum(local_14,*(int *)(this + local_14 * 0x3d + 0x1e),1,uVar2 & 0xff,
                              (uint)uVar1);
      local_18 = iVar3 + local_18;
    }
  }
  for (local_10 = 3; local_10 < 0x138; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) {
      if (*(char *)(*(int *)(this + 0x650) + local_10 * 0x3d + 1) == '\x01') {
        uVar1 = *(ushort *)(*(int *)(this + 0x650) + local_10 * 0x3d + 0xb);
        uVar2 = Inven_Item::GetUpgrade((Inven_Item *)(*(int *)(this + 0x650) + local_10 * 0x3d));
        iVar3 = getItemChecksum(local_10,*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),1,
                                uVar2 & 0xff,(uint)uVar1);
        local_18 = iVar3 + local_18;
      }
      else {
        uVar1 = *(ushort *)(*(int *)(this + 0x650) + local_10 * 0x3d + 0xb);
        uVar2 = Inven_Item::GetUpgrade((Inven_Item *)(*(int *)(this + 0x650) + local_10 * 0x3d));
        iVar3 = getItemChecksum(local_10,*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),
                                *(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7),uVar2 & 0xff,
                                (uint)uVar1);
        local_18 = iVar3 + local_18;
      }
    }
  }
  finishItemChecksum(&local_18,*(int *)(this + 4),
                     *(int *)(this + 8) + *(int *)(this + 0xc) + *(int *)(this + 0x10),param_1,
                     param_2);
  return;
}
```
