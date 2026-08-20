# CBlowFish

`_ZN9CBlowFishC1EPhjRK6SBlock`

`CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&)`

| 类 | 地址 |
|---|---|
| `CBlowFish` | `0x080a956c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a956c  _ZN9CBlowFishC1EPhjRK6SBlock
#           CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&)
# range [0x080a956c, 0x080a97a3]
080a956c +0x000:  push   %ebp
080a956d +0x001:  mov    %esp,%ebp
080a956f +0x003:  push   %ebx
080a9570 +0x004:  sub    $0x74,%esp
080a9573 +0x007:  mov    0x8(%ebp),%eax
080a9576 +0x00a:  mov    0x14(%ebp),%edx
080a9579 +0x00d:  mov    %edx,0x4(%esp)
080a957d +0x011:  mov    %eax,(%esp)
080a9580 +0x014:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a9585 +0x019:  mov    0x8(%ebp),%eax
080a9588 +0x01c:  lea    0x8(%eax),%edx
080a958b +0x01f:  mov    0x14(%ebp),%eax
080a958e +0x022:  mov    %eax,0x4(%esp)
080a9592 +0x026:  mov    %edx,(%esp)
080a9595 +0x029:  call   080aa2f8 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fc>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)+0x1fc
080a959a +0x02e:  mov    0x8(%ebp),%eax
080a959d +0x031:  add    $0x10,%eax
080a95a0 +0x034:  movl   $0x48,0x8(%esp)
080a95a8 +0x03c:  movl   $0x0,0x4(%esp)
080a95b0 +0x044:  mov    %eax,(%esp)
080a95b3 +0x047:  call   0807dcc0 <_init+0x5b8>
080a95b8 +0x04c:  cmpl   $0x0,0x10(%ebp)
080a95bc +0x050:  je     080a979d <+0x231>
080a95c2 +0x056:  cmpl   $0x38,0x10(%ebp)
080a95c6 +0x05a:  jbe    080a95cf <+0x63>
080a95c8 +0x05c:  movl   $0x38,0x10(%ebp)
080a95cf +0x063:  mov    0x10(%ebp),%eax
080a95d2 +0x066:  mov    %eax,0x8(%esp)
080a95d6 +0x06a:  mov    0xc(%ebp),%eax
080a95d9 +0x06d:  mov    %eax,0x4(%esp)
080a95dd +0x071:  lea    -0x64(%ebp),%eax
080a95e0 +0x074:  mov    %eax,(%esp)
080a95e3 +0x077:  call   0807d8a0 <_init+0x198>
080a95e8 +0x07c:  mov    0x8(%ebp),%eax
080a95eb +0x07f:  add    $0x10,%eax
080a95ee +0x082:  movl   $0x48,0x8(%esp)
080a95f6 +0x08a:  movl   $&_ZN9CBlowFish12scm_auiInitPE,0x4(%esp)
080a95fe +0x092:  mov    %eax,(%esp)
080a9601 +0x095:  call   0807d8a0 <_init+0x198>
080a9606 +0x09a:  mov    0x8(%ebp),%eax
080a9609 +0x09d:  add    $0x58,%eax
080a960c +0x0a0:  movl   $0x1000,0x8(%esp)
080a9614 +0x0a8:  movl   $&_ZN9CBlowFish12scm_auiInitSE,0x4(%esp)
080a961c +0x0b0:  mov    %eax,(%esp)
080a961f +0x0b3:  call   0807d8a0 <_init+0x198>
080a9624 +0x0b8:  lea    -0x64(%ebp),%eax
080a9627 +0x0bb:  mov    %eax,-0x1c(%ebp)
080a962a +0x0be:  movl   $0x0,-0x18(%ebp)
080a9631 +0x0c5:  movl   $0x0,-0x14(%ebp)
080a9638 +0x0cc:  movl   $0x0,-0x24(%ebp)
080a963f +0x0d3:  jmp    080a96ae <+0x142>
080a9641 +0x0d5:  movl   $0x0,-0x18(%ebp)
080a9648 +0x0dc:  movl   $0x4,-0x10(%ebp)
080a964f +0x0e3:  jmp    080a967e <+0x112>
080a9651 +0x0e5:  shll   $0x8,-0x18(%ebp)
080a9655 +0x0e9:  mov    -0x1c(%ebp),%eax
080a9658 +0x0ec:  movzbl (%eax),%eax
080a965b +0x0ef:  movzbl %al,%eax
080a965e +0x0f2:  or     %eax,-0x18(%ebp)
080a9661 +0x0f5:  addl   $0x1,-0x1c(%ebp)
080a9665 +0x0f9:  addl   $0x1,-0x14(%ebp)
080a9669 +0x0fd:  mov    0x10(%ebp),%eax
080a966c +0x100:  cmp    -0x14(%ebp),%eax
080a966f +0x103:  jne    080a967e <+0x112>
080a9671 +0x105:  movl   $0x0,-0x14(%ebp)
080a9678 +0x10c:  lea    -0x64(%ebp),%eax
080a967b +0x10f:  mov    %eax,-0x1c(%ebp)
080a967e +0x112:  cmpl   $0x0,-0x10(%ebp)
080a9682 +0x116:  setne  %al
080a9685 +0x119:  subl   $0x1,-0x10(%ebp)
080a9689 +0x11d:  test   %al,%al
080a968b +0x11f:  jne    080a9651 <+0xe5>
080a968d +0x121:  mov    -0x24(%ebp),%ecx
080a9690 +0x124:  mov    -0x24(%ebp),%edx
080a9693 +0x127:  mov    0x8(%ebp),%eax
080a9696 +0x12a:  add    $0x4,%edx
080a9699 +0x12d:  mov    (%eax,%edx,4),%eax
080a969c +0x130:  mov    %eax,%edx
080a969e +0x132:  xor    -0x18(%ebp),%edx
080a96a1 +0x135:  mov    0x8(%ebp),%eax
080a96a4 +0x138:  add    $0x4,%ecx
080a96a7 +0x13b:  mov    %edx,(%eax,%ecx,4)
080a96aa +0x13e:  addl   $0x1,-0x24(%ebp)
080a96ae +0x142:  cmpl   $0x11,-0x24(%ebp)
080a96b2 +0x146:  setbe  %al
080a96b5 +0x149:  test   %al,%al
080a96b7 +0x14b:  jne    080a9641 <+0xd5>
080a96b9 +0x14d:  movl   $0x0,0x8(%esp)
080a96c1 +0x155:  movl   $0x0,0x4(%esp)
080a96c9 +0x15d:  lea    -0x2c(%ebp),%eax
080a96cc +0x160:  mov    %eax,(%esp)
080a96cf +0x163:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
080a96d4 +0x168:  movl   $0x0,-0x24(%ebp)
080a96db +0x16f:  jmp    080a9715 <+0x1a9>
080a96dd +0x171:  lea    -0x2c(%ebp),%eax
080a96e0 +0x174:  mov    %eax,0x4(%esp)
080a96e4 +0x178:  mov    0x8(%ebp),%eax
080a96e7 +0x17b:  mov    %eax,(%esp)
080a96ea +0x17e:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a96ef +0x183:  mov    -0x24(%ebp),%ecx
080a96f2 +0x186:  mov    -0x2c(%ebp),%edx
080a96f5 +0x189:  mov    0x8(%ebp),%eax
080a96f8 +0x18c:  add    $0x4,%ecx
080a96fb +0x18f:  mov    %edx,(%eax,%ecx,4)
080a96fe +0x192:  addl   $0x1,-0x24(%ebp)
080a9702 +0x196:  mov    -0x24(%ebp),%ecx
080a9705 +0x199:  mov    -0x28(%ebp),%edx
080a9708 +0x19c:  mov    0x8(%ebp),%eax
080a970b +0x19f:  add    $0x4,%ecx
080a970e +0x1a2:  mov    %edx,(%eax,%ecx,4)
080a9711 +0x1a5:  addl   $0x1,-0x24(%ebp)
080a9715 +0x1a9:  cmpl   $0x11,-0x24(%ebp)
080a9719 +0x1ad:  setbe  %al
080a971c +0x1b0:  test   %al,%al
080a971e +0x1b2:  jne    080a96dd <+0x171>
080a9720 +0x1b4:  movl   $0x0,-0x20(%ebp)
080a9727 +0x1bb:  jmp    080a9790 <+0x224>
080a9729 +0x1bd:  movl   $0x0,-0xc(%ebp)
080a9730 +0x1c4:  jmp    080a977e <+0x212>
080a9732 +0x1c6:  lea    -0x2c(%ebp),%eax
080a9735 +0x1c9:  mov    %eax,0x4(%esp)
080a9739 +0x1cd:  mov    0x8(%ebp),%eax
080a973c +0x1d0:  mov    %eax,(%esp)
080a973f +0x1d3:  call   080a97a4 <_ZN9CBlowFish7EncryptER6SBlock>  ; CBlowFish::Encrypt(SBlock&)
080a9744 +0x1d8:  mov    -0x20(%ebp),%ebx
080a9747 +0x1db:  mov    -0xc(%ebp),%ecx
080a974a +0x1de:  mov    -0x2c(%ebp),%edx
080a974d +0x1e1:  mov    0x8(%ebp),%eax
080a9750 +0x1e4:  shl    $0x8,%ebx
080a9753 +0x1e7:  lea    (%ebx,%ecx,1),%ecx
080a9756 +0x1ea:  add    $0x14,%ecx
080a9759 +0x1ed:  mov    %edx,0x8(%eax,%ecx,4)
080a975d +0x1f1:  addl   $0x1,-0xc(%ebp)
080a9761 +0x1f5:  mov    -0x20(%ebp),%ebx
080a9764 +0x1f8:  mov    -0xc(%ebp),%ecx
080a9767 +0x1fb:  mov    -0x28(%ebp),%edx
080a976a +0x1fe:  mov    0x8(%ebp),%eax
080a976d +0x201:  shl    $0x8,%ebx
080a9770 +0x204:  lea    (%ebx,%ecx,1),%ecx
080a9773 +0x207:  add    $0x14,%ecx
080a9776 +0x20a:  mov    %edx,0x8(%eax,%ecx,4)
080a977a +0x20e:  addl   $0x1,-0xc(%ebp)
080a977e +0x212:  cmpl   $0xff,-0xc(%ebp)
080a9785 +0x219:  setle  %al
080a9788 +0x21c:  test   %al,%al
080a978a +0x21e:  jne    080a9732 <+0x1c6>
080a978c +0x220:  addl   $0x1,-0x20(%ebp)
080a9790 +0x224:  cmpl   $0x3,-0x20(%ebp)
080a9794 +0x228:  setbe  %al
080a9797 +0x22b:  test   %al,%al
080a9799 +0x22d:  jne    080a9729 <+0x1bd>
080a979b +0x22f:  jmp    080a979e <+0x232>
080a979d +0x231:  nop
080a979e +0x232:  add    $0x74,%esp
080a97a1 +0x235:  pop    %ebx
080a97a2 +0x236:  pop    %ebp
080a97a3 +0x237:  ret
```

## 反编译 C

```c
// CBlowFish::CBlowFish @ 0x80a956c

/* CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&) */

void __thiscall CBlowFish::CBlowFish(CBlowFish *this,uchar *param_1,uint param_2,SBlock *param_3)

{
  bool bVar1;
  byte local_68 [56];
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  SBlock::SBlock((SBlock *)this,param_3);
  SBlock::SBlock((SBlock *)(this + 8),param_3);
  memset(this + 0x10,0,0x48);
  if (param_2 != 0) {
    if (0x38 < param_2) {
      param_2 = 0x38;
    }
    memcpy(local_68,param_1,param_2);
    memcpy(this + 0x10,scm_auiInitP,0x48);
    memcpy(this + 0x58,scm_auiInitS,0x1000);
    local_20 = local_68;
    local_1c = 0;
    local_18 = 0;
    for (local_28 = 0; local_28 < 0x12; local_28 = local_28 + 1) {
      local_1c = 0;
      local_14 = 4;
      while (bVar1 = local_14 != 0, local_14 = local_14 + -1, bVar1) {
        local_1c = local_1c << 8 | (uint)*local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
        if (param_2 == local_18) {
          local_18 = 0;
          local_20 = local_68;
        }
      }
      *(uint *)(this + (local_28 + 4) * 4) = *(uint *)(this + (local_28 + 4) * 4) ^ local_1c;
      local_14 = 0xffffffff;
    }
    SBlock::SBlock((SBlock *)&local_30,0,0);
    for (local_28 = 0; local_28 < 0x12; local_28 = local_28 + 2) {
      Encrypt(this,(SBlock *)&local_30);
      *(undefined4 *)(this + (local_28 + 4) * 4) = local_30;
      *(undefined4 *)(this + (local_28 + 5) * 4) = local_2c;
    }
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      for (local_10 = 0; local_10 < 0x100; local_10 = local_10 + 2) {
        Encrypt(this,(SBlock *)&local_30);
        *(undefined4 *)(this + (local_24 * 0x100 + local_10 + 0x14) * 4 + 8) = local_30;
        *(undefined4 *)(this + (local_24 * 0x100 + local_10 + 0x15) * 4 + 8) = local_2c;
      }
    }
  }
  return;
}
```
